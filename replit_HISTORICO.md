# HISTÓRICO TÉCNICO — God of War PS2 PC Port

> Arquivo de referência para pattern matching de bugs e diagnósticos já resolvidos.
> Leia se estiver atacando bug novo que se parece com algum dos Bugs A-J,
> ou se precisar do raciocínio completo de uma sessão anterior.
>
> **Índice rápido:**
> [Bug A](#bug-a--crt0-truncado) | [Bug B](#bug-b--gp0-no-boot) | [Bug C](#bug-c--boot-stub-sabotando-crt0) | [Bug D](#bug-d--loop-infinito-func_100408) | [Bug E](#bug-e--sentinela-0x2cf090-zerada) | [Bug F](#bug-f--alocador-sub_0013da10-retorna-0) | [Bug G](#bug-g--handler-intc-vblank-0x182f28-não-recompilado) | [Bug H](#bug-h--syscalls-sif-poll-não-implementadas) | [Bug I](#bug-i--scesifsetdma-rejeita-dest0xffffffff) | [Bug J](#bug-j--0x296a54-not-found-ra0) | [Sessões históricas](#sessões-históricas)

---

## Bug A — crt0 truncado

**Sessão:** 2026-04-25 (B)
**Status:** ✅ RESOLVIDO

### Causa raiz
`src/recompiled/entry_0x100008.cpp` declarava range `0x100008 - 0x10008c` (132 bytes), mas o crt0 real do ELF vai até `0x100db8` (3504 bytes). Faltavam **843 instruções** críticas. O arquivo terminava com um "Patch: Jump to next entry point" hardcoded que pulava direto pra `0x1001d0`, saltando:

| Endereço | O que estava faltando |
|---|---|
| `0x10012c–0x100144` | BSS clear loop (zera `0x2c7080 → 0x35c1a8` — inclui `0x32E854`) |
| `0x100170` | `daddu $gp, $a0, $zero` → setup `$gp = 0x002cf070` |
| `0x10017c` | `daddu $sp, $v0, $zero` → setup stack pointer |
| `0x100178, 0x100194` | Syscalls 60 e 61 (init de kernel) |
| `0x100198` | `jal 0x002994a0` — `__libc_init` |
| `0x1001a0` | `jal 0x00293ea0` — init libs |
| `0x1001a8` | `jal 0x00138cb0` — chamada do `main()` |

### Sintoma
`$gp=0` em todos os BOOT#N, crash em `0x35c920` (endereço BSS fora do filesz).

### Fix aplicado
`tools/truncation_overrides.csv` — adicionado override `entry,0x100008,0x100db8`.
Rodado `bash tools/regen_truncated.sh --only-entry` no PC do Agente Cris.
`tools/diagnose_crt0.py` — ferramenta de diagnóstico que verifica as 9 instruções críticas.

---

## Bug B — `$gp=0` no boot

**Sessão:** 2026-04-25 (C)
**Status:** ✅ RESOLVIDO

### Causa raiz
O boot stub em `ps2_runtime.cpp` chamava `__libc_init`, `init libs` e `main()` ANTES do crt0, com `$gp=0`. A linha 2476 (na época) zerava `$a0` antes de cada init. Resultado: `$gp=0` → qualquer acesso a global via GP-relative lê do início do RDRAM.

### Sintoma
`[EXIT#1] from=0x100008 -> pc=0x1003c0 ra=0x0 sp=0x1fffff0` — entry_0x100008 retornava SEM alterar qualquer registrador.

### Fix aplicado
Boot stub virou opt-in: `PS2_BOOT_STUB=1` o ativa. Default OFF. Boot stub adicionou logs `[BOOT#N]` com `gp=0x...` e `a0=0x...`.

---

## Bug C — boot stub sabotando crt0

**Sessão:** 2026-04-25 (C)
**Status:** ✅ RESOLVIDO

### Causa raiz
O boot stub rodava syscalls (LoadDmac, 0x5b com handlers em `0x80076000`/IOP) ANTES do crt0 rodar, com estado sujo. O log mostrava 4 syscalls 0x83 e 6 syscalls 0x5b com handlers em regiões IOP caindo em fallback ANTES do crt0.

### Fix aplicado
Boot stub desativado por padrão. `PS2_BOOT_STUB=1` reativa. Com boot stub OFF e crt0 completo (Bug A fixado), o boot prossegue naturalmente.

---

## Bug D — loop infinito + stack overflow em `func_100408`

**Sessão:** 2026-04-25 (E)
**Status:** ✅ RESOLVIDO

### Causa raiz
`func_100408(a0=0)` com mundo nulo entrava em loop infinito varrendo lista duplamente ligada em `mem[0x20]` → RDRAM zerado = `mem[0x20]=0` ≠ sentinela `0x20` → iteração sem fim → cada iteração chamava `sub_00100E28` → JALR `0x35c920` (BSS, não registrado) → return prematuro sem epilogue → **stack leak +0x40/iter → SIGSEGV em ~8 segundos**.

### Fix aplicado (3 arquivos)
1. `PS2Recomp/ps2xRuntime/src/lib/ps2_runtime.cpp` — `std::memcpy(rdram + 0x20u, &sentinel, 4)` onde `sentinel = 0x20u`. BSS clear range corrigido: `0x2c7080 → 0x35d080`.
2. `GOD_PC_PORT_FINAL/src/recompiled/sub_00100E28_0x100e28.cpp` — `if (!runtime->hasFunction(jumpTarget))` → NOP + log warning.
3. `GOD_PC_PORT_FINAL/src/recompiled/sub_00100408_0x100408.cpp` — mesmo JALR guard + `#include <cstdio>`.

---

## Bug E — sentinela `0x2cf090` zerada (loop infinito `sub_00100408`)

**Sessão:** 2026-04-25 (agente Replit) / confirmado sessão anterior
**Status:** ✅ RESOLVIDO

### Causa raiz
`sub_00100408` usa lista circular com sentinel em `a0 + 0x20`. Com `a0 = 0x2cf070`, sentinel = `0x2cf090`. RDRAM zerado → `[0x2cf090] = 0` ≠ `0x2cf090` → entra no loop com `current = 0` → ponteiros nulos → loop eterno.

### Fix aplicado (Fix 1)
Em `PS2Recomp/ps2xRuntime/src/lib/ps2_runtime.cpp`, após kInitChain e antes de `m_cpuContext.pc = 0x100008u`:
```cpp
constexpr uint32_t SENTINEL = 0x2cf090u;
uint32_t* mem = reinterpret_cast<uint32_t*>(rdram + SENTINEL);
mem[0] = SENTINEL; // next = self → lista vazia
mem[1] = SENTINEL; // prev = self
```

**Fix irmão (Fix 6):** mesma estrutura de lista em `0x2cbbb0` também zerada:
```cpp
constexpr uint32_t SENTINEL_2 = 0x2cbbb0u;
mem[0] = SENTINEL_2; mem[1] = SENTINEL_2;
```

---

## Bug F — alocador `sub_0013DA10` retorna 0 (pool vazio)

**Sessão:** 2026-04-27 PARTE 7
**Status:** ✅ RESOLVIDO

### Causa raiz
O alocador retornava `$v0=0` porque o pool em `0x2c7910` estava vazio (BSS não inicializado por init não-registrado). `sub_0013FAB8` escrevia o 0 em `[0x2cbbb4]` e `[0x2cbbb0]`, corrompendo a sentinela.

Confirmado via câmera #3 (`watch em [0x2c7910]`): NINGUÉM escreveu no pool durante todo o boot.

### Fix aplicado
Stub C++ `gow_stub_sub_0013DA10` em `game_overrides.cpp`:
```cpp
// Bump allocator atômico em [0x01000000..0x01100000] (1 MB, 16.384 nós de 64 bytes)
// Retorna guestPtr válido em $v0 + pc=$ra
static std::atomic<uint32_t> s_allocPtr{0x01000000u};
constexpr uint32_t kNodeSize = 64u;
constexpr uint32_t kHeapEnd  = 0x01100000u;
uint32_t ptr = s_allocPtr.fetch_add(kNodeSize, std::memory_order_relaxed);
if (ptr + kNodeSize > kHeapEnd) { /* fallback */ }
setReturnU32(ctx, ptr);
ctx.pc = ctx.ra;
```
Registrado via `PS2_REGISTER_GAME_OVERRIDE` / `runtime.registerFunction` em `apply_god_of_war_overrides`.

### Confirmação
4 disparos do stub (guestPtr 0x1000000/0x1000040/0x1000080/0x10000c0), lista circular real montada, blindagem PARTE 6 nunca precisou disparar. Log: `[stub:sub_0013DA10] PARTE 7 PLANO A: alloc #1..#4`.

---

## Bug G — handler INTC VBlank `0x182f28` não recompilado

**Sessão:** 2026-04-27 PARTE 8
**Status:** ✅ RESOLVIDO

### Causa raiz
`sub_00182EE8.cpp` tem `jr $ra` em `0x182f20` → PS2Recomp marcou o restante (linhas 134-196, 8 instruções = `0x182f28..0x182f58`) como código morto. O handler VBlank `0x182f28` nunca foi registrado nos 5.626 .cpp recompilados.

**MIPS perdido (as 8 instruções):**
```mips
0x182f28: lui $v1,0x2A; lui $a0,0x2A
0x182f30: lw $v0,-0x3828($v1)            ; lê [0x29C7D8]
0x182f34: lui $a1,0x33
0x182f38: xori $v0,$v0,0x1
0x182f3c: sw $v0,-0x3828($v1)            ; [0x29C7D8] ^= 1
0x182f40: lw $v0,-0x382C($a0); addiu; sw ; [0x29C7D4] += 1
0x182f4c: lw $v0,0x4F58($a1); addiu; sw  ; [0x334F58] += 1
0x182f58: sync; ei; jr $ra
```

### Fix aplicado
Stub C++ `gow_intc_handler_0x182f28` em `game_overrides.cpp`:
```cpp
void gow_intc_handler_0x182f28(R5900Context& ctx, PS2Runtime& runtime) {
    uint32_t* rdram = (uint32_t*)runtime.getRdram();
    rdram[0x29C7D8/4] ^= 1u;           // toggle VSync flag
    rdram[0x29C7D4/4]++;               // frameCount++
    rdram[0x334F58/4]++;               // altCount++
    ctx.pc = ctx.ra;
}
```
Registrado via `runtime.registerFunction(0x00182F28u, gow_intc_handler_0x182f28)` em `apply_god_of_war_overrides`.

### Confirmação
720 piscadas (12s @ 60Hz), `[INTC:skip]` sumiu, `[vif1:cmd]` apareceu com IRQ no idx=20.

---

## Bug H — syscalls SIF poll não implementadas (0x79/0x7A/0x7B/0x7D)

**Sessão:** 2026-04-27 PARTE 9
**Status:** ✅ RESOLVIDO

### Causa raiz
Caller `entry_296518:0x296710` chama `func_294030` (= syscall 0x7A) num poll loop `and $v0,$v0,$s0; beqz $v0,-0x4` esperando bit 17 do retorno. O switch de `dispatchNumericSyscall` não tinha cases pra 0x79-0x7D → handler default `TODO` retornava 0 → 130k hits/12s.

Wrappers MIPS triviais em `entry_294020`/`entry_294030`/`entry_294040`: `addiu $v1,N; syscall; jr $ra`.

### Fix aplicado
Em `PS2Recomp/ps2xRuntime/src/lib/ps2_syscalls.cpp:321-363`:
```cpp
case 0x79: case 0x7A: case 0x7B: case 0x7D:
{
    static std::mutex s_mu;
    static std::unordered_set<uint8_t> s_seen;
    {
        std::lock_guard<std::mutex> lk(s_mu);
        if (s_seen.insert(id).second)
            fprintf(stderr, "[stub PARTE 9] syscall 0x%x primeira chamada -- retornando -1\n", id);
    }
    setReturnS32(ctx, -1);  // = 0xFFFFFFFF: qualquer máscara bit-a-bit != 0
    break;
}
```

**Por que `-1` funciona:** caller faz `and $v0,$v0,$s0 (=0x20000); beqz $v0,-0x4`. `0xFFFFFFFF & 0x20000 = 0x20000 ≠ 0` → loop quebra na 1ª iteração.

### Confirmação
`[stub PARTE 9] syscall 0x7a primeira chamada -- retornando -1` UMA vez. `Unknown syscallId=0x7a` SUMIU (de 40k+ hits/12s pra 0). VBlank avançou pra #960 (+220% vs PARTE 8). 7 novos `CreateSema id=4..10`.

---

## Bug I — `sceSifSetDma` rejeita `dest=0xffffffff` silenciosamente

**Sessão:** 2026-04-27 PARTE 10
**Status:** 🟡 BLINDADO (stub permissivo via PLANO B1)

### Causa raiz
`sceSifSetDma` valida `xfer.dest` via `canCopyGuestByteRange`. O jogo envia `dest=0xffffffff` (sentinela U32 "-1"), que é o padrão de **SIF RPC stage transfer** — EE manda o pacote sem destino fixo, IOP decide pelo header (`RPC_BIND`/`RPC_CALL`/`RPC_END`). O runtime rejeitava silenciosamente.

**Dump do pacote (PLANO B3 decodificado):**
- 1º pacote (20B em 0x327880): `HEADER = 0x80000000` (bit alto = EE→IOP, opcode=0 = SIF_CMD_INIT), `callback = 0x003277c0`
- 2º pacote (64B em 0x20327ac0 = mirror KSEG1): `HEADER = 0x80000009` (opcode=9 = RPC_BIND), `rpc_id = 0x00000005`, `response_buf = 0x0030aaa8`

### Instrumentação aplicada (PLANO A)
```cpp
uint32_t failIndex = 0;
const char* failReason = "";
Ps2SifDmaTransfer failXfer{};
// ... [falhas detectadas com failIndex=1..4, failReason=string] ...
static std::mutex s_sifDmaFailMutex;
static std::unordered_set<uint64_t> s_sifDmaFailKeys;
uint64_t key = (uint64_t(failXfer.dest) << 32) ^ uint32_t(failXfer.src);
std::lock_guard<std::mutex> lk(s_sifDmaFailMutex);
if (s_sifDmaFailKeys.size() < 8 && s_sifDmaFailKeys.insert(key).second) {
    fprintf(stderr, "[PARTE 10 PLANO A] sceSifSetDma falhou — idxFail=%u motivo='%s' ...\n", ...);
}
```

### Fix blindagem (PLANO B1)
Em `ps2_stubs_misc.inl`, quando `dest==0xffffffff`:
```cpp
if (xfer.dest == 0xFFFFFFFFu) {
    // SIF RPC stage transfer — IOP decide destino pelo header
    // Aceitar, registrar, retornar sucesso fake
    // (log com unordered_set, máx 8 combinações únicas)
    return 1;
}
```

---

## Bug J — `0x296a54` not found com `ra=0, a0=5`

**Sessão:** 2026-04-29/30
**Status:** 🟡 BLINDADO (PLANO C, não afeta gameplay)

### Diagnóstico
Chamada com `a0=5, a1=0x20, ra=0` não bate com nenhum dos 4 callers reais (que sempre usam `a0=$sp ~0x1ffbXXXX, a1=1`). `ra=0` é fisicamente impossível em caller MIPS legítimo. Hipótese mais provável: bug do PS2Recomp gerando placeholder para `jalr $reg` com target desconhecido em compile-time.

### Fix blindagem (PLANO C)
Em `ps2_stubs_misc.inl` (início de `sceSifSetDma`):
```cpp
if (dmatAddr < 0x100000u) {
    // dmat abaixo do ELF start (0x100000) = lixo / placeholder do PS2Recomp
    fprintf(stderr, "[PARTE 10 PLANO C] sceSifSetDma com dmat lixo ...\n");
    return 0;
}
```
Não trava nada. Bug J pode permanecer blindado indefinidamente — investigar mais só se aparecer evidência forte de impacto em gameplay.

---

## Sessões Históricas

### Sessão 2026-04-23 — Loop principal em `sub_00100E28`

Primeira sessão de debug real. Boot avança até janela abrir (tela preta). Loop infinito localizado via `livePc`:
- `sub_00100E28` chama `sub_00118110` e `sub_0013DB18` em loop
- `liveRa=0x100e7c` = post-call address da última `jal` interna
- O LOOP REAL estava no caller `sub_00100408` (sentinela `0x20` zerada → `$a0=0` → loop eterno)
- `0x32E854` (flag global) nunca escrita por nenhuma função recompilada — 0 escritores confirmados por 3 scripts

### Sessão 2026-04-24 — Diagnóstico definitivo + thin archive

Build OK pela primeira vez com thin archive (`ar qcsT`). `libgow_recompiled.a` caiu de ~3 GB para ~5-10 MB. Etapa do `ar` passou de 10-15 min para segundos.

Refinamento: loop real está em `sub_00100408` (iterador de linked list circular), não em `sub_00100E28`. `$a0` chega zerado por dois bugs documentados no `entry_0x100008.cpp`.

### Sessão 2026-04-25 — Root cause crt0 + regen toolchain

`tools/fix_truncated.py` + `tools/regen_truncated.sh` entregues. Pin do ELFIO corrigido pra `Release_3.12`. Touch automático no fim do regen adicionado ao `recompilar.sh`.

Bug arquitetural descoberto: `IsAutoGeneratedName` em `elf_parser.cpp` rejeitava entradas com prefixo `FUN_` do CSV → `--all` era no-op silencioso. Fix: `csv_safe_name` renomeia para `truncfix_0x{addr:x}`.

`--all` aplicado: 1607 funções estendidas, 4053 entries adicionais descobertas, 671 funções resliceadas, 1790 arquivos retocados.

### Sessão 2026-04-26 PARTE 1 — Cadeia de boot mapeada

`entry_293840_0x293900` é tabela de wrappers de syscall. O slot 0 (`0x293840`) é syscall N=4 = `Exit`/`ExitThread`. `entry_2996b0` é o `__libc_init` do PS2 SDK — SEMPRE termina com `j 0x293840` = mata a thread.

`main()` real do God of War está em `sub_001003C0_0x1003c0`. Chamado com `$a0=0` → `beql $a0, $zero` toma o branch → main vira no-op.

`PS2_FORCE_A0=0x2cf070` fez `func_238860` (game loop principal) executar de verdade. Janela Raylib abriu, ficou preta, fechou, reabriu sozinha.

### Sessão 2026-04-26 PARTE 2 — Bug do `recompilar.sh`

`git pull` preserva mtime do commit. Se `.o` no `build/` for mais recente que o `.cpp` baixado, `make` pula a recompilação silenciosamente. Fix: `recompilar.sh` agora roda `git diff --name-only HEAD~5 HEAD` e faz `touch` em todos os `.cpp/.h/.hpp/.inl/.c` alterados nos últimos 5 commits.

### Sessão 2026-04-26 PARTE 4 — TRAVA DE SEGURANÇA VALIDADA + Bug F detectado

PARTE 3 (Fix 1+6 reposicionados + trava de 1M iter) confirmada em produção.

Evidências de `log_fix6_part3.txt` (388 linhas):
- ✅ Fix 1+6 dispararam antes dos inits
- ✅ 1ª chamada `13FAB8` → `READ32(sentinel)=0x2cbbb0` (boa) → saiu rápido
- ❌ 2ª chamada `13FAB8` → `READ32(sentinel)=0x0` (zerada!) → bug F detectado
- ✅ Trava de segurança disparou em 1M iterações, programa não travou
- PC avançou até VIF1 (159 linhas de `[vif1:cmd] opcode=0x0` — buffer DMA vazio em loop)

Bug F confirmado: `sub_0013DA10` retorna 0 porque pool em `0x2c7910` está vazio (câmera #3 silenciosa = NINGUÉM abasteceu durante todo o boot).

### Sessão 2026-04-27 PARTE 7 — Bug F RESOLVIDO

Stub `gow_stub_sub_0013DA10` implementado em `game_overrides.cpp`. Vitória total Cenário A: 4 disparos, lista circular real montada, blindagem PARTE 6 nem precisou disparar.

### Sessão 2026-04-27 PARTE 8 — Bug G RESOLVIDO

Stub `gow_intc_handler_0x182f28` implementado. Vitória total: VBlank tick #1..#300, `[INTC:skip]` sumiu, `[vif1:cmd]` apareceu.

### Sessão 2026-04-27 PARTE 9 — Bug H RESOLVIDO

4 cases syscall 0x79-0x7D implementados em `ps2_syscalls.cpp`. Vitória total: VBlank avançou pra #960 (+220%), 7 novos `CreateSema`.

### Sessão 2026-04-27 PARTE 10 — Bug I identificado + PLANO A/B3 aplicado

`sceSifSetDma` instrumentado (PLANO A). Câmera capturou: `xfer.dest=0xffffffff` em todas as 8 falhas. Dump hex do pacote (PLANO B3) revelou header SIF RPC Sony.

Sessão `b7ceb6d` (30-04 12:24): PLANO B2 PASSO 2.5 dumps revelaram callback `0x3277c0` = 64 bytes zeros, `client_buf @0x30aaa8` imutável por 5000 VBlanks. SMOKING GUN: SignalSema=0 no run inteiro. Jogo dorme em `WaitSema sid=4`.

---

## Anotações de metodologia

### Padrão de stub GoW-specific (receita reutilizável)

```cpp
// Em game_overrides.cpp:
static void gow_stub_NOME(R5900Context& ctx, PS2Runtime& runtime) {
    // Lê args: a0=GPR_U32(ctx,4), a1=GPR_U32(ctx,5), etc.
    // Faz o necessário
    setReturnU32(ctx, resultado); // ou setReturnS32
    ctx.pc = ctx.ra; // retorna pro caller
}

// Em apply_god_of_war_overrides():
runtime.registerFunction(0xADDR, gow_stub_NOME);
// ou: PS2_REGISTER_GAME_OVERRIDE("GodOfWarPCPort:NOME", 0xADDR, gow_stub_NOME);
```

### Padrão de log com dedup (mutex + unordered_set)

```cpp
static std::mutex s_mu;
static std::unordered_set<KEY_TYPE> s_seen;
{
    std::lock_guard<std::mutex> lk(s_mu);
    if (s_seen.size() < 8 && s_seen.insert(key).second)
        fprintf(stderr, "[TAG] mensagem\n");
}
```
Usado em: PLANO A/B3 de `sceSifSetDma`, PARTE 9 syscalls poll, PARTE 7 alloc stub.

### Funções que dependem de scheduler de threads

**Não podem ser chamadas no stub pré-dispatchLoop.** Se uma init futura travar em busy-wait (semáforos, VSync), remover ela do kInitChain e deixar o fluxo normal do crt0 chamá-la.
Caso: `0x138d48` foi adicionada ao kInitChain mas travou em `cooperativeGuestYield`. Solução: removida do kInitChain.
