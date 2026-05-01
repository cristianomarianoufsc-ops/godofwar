# HISTÓRICO DE SESSÕES — HANDOFF — God of War PS2 PC Port

> Arquivo de referência para análise detalhada de sessões anteriores.
> Para estado atual, leia `HANDOFF_AGENT.md`. Para bugs A-J detalhados, leia `replit_HISTORICO.md`.
>
> **Índice:**
> [PARTE 10 PLANO B2 Passos detalhados](#parte-10-plano-b2--detalhes-de-cada-passo) |
> [PARTE 10 PLANO A/B/B3](#parte-10-plano-a--b--b3) |
> [Pivot estratégico 2026-04-29](#pivot-estratégico-2026-04-29) |
> [Bug J decifração](#bug-j--decifração-completa) |
> [PARTES 9/8/7](#histórico-partes-9-8-7) |
> [Lições técnicas de investigação](#lições-técnicas-de-investigação)

---

## PARTE 10 PLANO B2 — Detalhes de cada passo

### PASSO 1 — Decoder do header SIF RPC (sessão 2026-04-29)

Quando `dest==0xffffffff`, em vez de só logar e retornar, o PASSO 1 decodifica o header do pacote `xfer.src`:

```
[PARTE 10 PLANO B1] aceitando SIF RPC stage transfer (dest=0xffffffff, IOP decide pelo header)
  xfer.src=0x327880 xfer.size=0x14 xfer.attr=0x44
[PARTE 10 PLANO B2 PASSO 1] SIF packet decode:
  HEADER=0x80000000 opcode=0 (SIF_CMD_INIT) callback=0x3277c0
[PARTE 10 PLANO B2 PASSO 1] SIF packet decode:
  HEADER=0x80000009 opcode=9 (RPC_BIND) rpc_id=5 self=0x20327ac0
  payload_words=2 response_buf=0x0030aaa8
```

Resultado: PASSO 1 e PASSO 2 confirmados no round `9caf879` (29-04 17:27).

### PASSO 2 — Forja de resposta SIF (depois REVERTIDO)

PASSO 2 tentou escrever resposta fake em `client_buf=0x30aaa8`. **REVERTIDO** porque o dump ANTES da escrita mostrou que o jogo já havia populado o buffer com dados legítimos:

```
+0x00: c0 7a 32 20   ← 0x20327ac0 = ponteiro self (= xfer.src do RPC_BIND)
+0x04: 02 00 00 00   ← payload_words = 2
+0x08: 04 00 00 00   ← count = 4
```

Sobrescrever offsets `{0,4}` apagaria `self` e `payload_words`. Quando a callback finalmente rodasse e dereference `self`, crasharia com endereço lixo `0x10000005`.

### PASSO 2.5 — Dump diagnóstico do client_buf (sessão 2026-04-29 17:30)

3 momentos de dump do `client_buf @0x30aaa8`:
1. ANTES da escrita do PASSO 2
2. APÓS a escrita
3. VBlank handler dumpando @#100, #1000, #5000

**Resultado:** conteúdo idêntico nos VBlanks #100, #1000, #5000 → jogo NÃO polla esse buffer. Espera ser acordado por callback EE.

### PASSO 2.7 — Dump da callback EE target (sessão 2026-04-30 manhã)

Dump de 64 bytes em `0x3277c0`:
```
+0x00..0x3F: 00 00 00 00 ... 00 00 00 00   (64 bytes TODOS ZEROS)
```

**Caso (a) confirmado:** callback EE NUNCA foi populada. Invocar `lookupFunction(0x3277c0)` = nullptr. PLANO ANTIGO (PASSO 3 = invocar callback) está MORTO — 64 bytes zeros = SIGSEGV imediato.

### PASSO 2.8 — Instrumentação WaitSema (sessão 2026-04-30 tarde) — ESTADO ATUAL

Ver `HANDOFF_AGENT.md §ESTADO ATUAL` para detalhes completos.

**Smoking gun descoberto antes do round:** análise de `log_20260430_122407_b7ceb6d_full.txt` com `grep simples`:
- `SignalSema` = **0** hits em 89s (5340 VBlanks)
- `iSignalSema` = 0 hits
- `WaitSema` = 1 hit (`sid=4` criado logo após CreateSema `id=4`)

**Plano REVISADO:**

| Etapa | Antes (caduca) | Agora |
|---|---|---|
| Identificar bloqueio | "Busy-wait pollando `client_buf`" | **DORME em semáforo `sid=4` após RPC_BIND** |
| Próximo passo (PASSO 3) | "Invocar callback EE em `0x3277c0`" | **Forjar `iSignalSema(sid_bloqueado)`** |

---

## PARTE 10 PLANO A / B / B3

### PLANO A — Instrumentação cirúrgica de `sceSifSetDma` (sessão 2026-04-27)

**Arquivos modificados:** `PS2Recomp/ps2xRuntime/src/lib/stubs/ps2_stubs_misc.inl:3264-3398`

Variáveis diagnósticas:
```cpp
uint32_t failIndex = 0;        // 1..4 qual ifguard
const char* failReason = "";   // string identificando
Ps2SifDmaTransfer failXfer{};  // cópia do descritor que falhou
```

Log com mutex + unordered_set (máx 8 combinações únicas `(dest,src)`).

**Resultado:** `xfer.dest = 0xffffffff` em TODAS as falhas. `motivo='canCopyGuestByteRange_rejeitou_dest_ou_src'` (ifguard 3).

### PLANO B1 — Stub permissivo para `dest=0xffffffff`

Quando `xfer.dest == 0xFFFFFFFFu`: aceita o pacote, loga diagnóstico, retorna 1 fake. Jogo continua, IOP nunca recebe — revela próximo bug.

### PLANO B3 — Dump hex do conteúdo de `xfer.src`

Aplicado em `ps2_stubs_misc.inl:3376-3402`. Dump de até 64 bytes do pacote antes do log de falha. Lê via `getConstMemPtr(rdram, failXfer.src)`.

Interpretação do header (1º pacote, 20 bytes):
```
[0]  size       = 0x00000014 (= 20 bytes)
[4]  reservado  = 0x00000000
[8]  HEADER     = 0x80000000  ← bit alto = "EE→IOP", opcode=0 (SIF_CMD_INIT)
[12] reservado  = 0x00000000
[16] callback   = 0x003277c0 (endereço EE pra resposta)
```

2º pacote (64 bytes, RPC_BIND):
```
[0]  size           = 0x00000040
[8]  HEADER         = 0x80000009  ← opcode=9 (RPC_BIND)
[16] rpc_id         = 0x00000005
[20] self-ref       = 0x20327ac0
[24] payload_words  = 0x00000002
[28] response_buf   = 0x0030aaa8
[32] sub-header     = 0x80000592
[36..63] zeros
```

---

## Pivot estratégico 2026-04-29

**Achados quantitativos do log full (465 linhas):**

| Marker | Count | Interpretação |
|---|---|---|
| `[stub:sub_0013DA10] PARTE 7` | 4 | alloc inicial OK |
| `[CreateThread]` | **1** ⚠️ | só 1 thread criada (PS2 normal teria várias) |
| `[stub PARTE 9] syscall 0x7a` | 1 (dedupe) | SIF poll destravado |
| `[PARTE 10 PLANO B1]` | 4 (2 pacotes únicos) | SIF stage transfers |
| `[vif1:cmd] opcode=0x50/0x51 (DIRECT)` | **0** ⚠️ | **NENHUM pacote GIF gerado** |
| `[vif1:cmd] opcode=0x14/0x17 (MSCAL/MSCNT)` | **0** ⚠️ | **VU1 nunca executou microprograma** |
| `[gif:submit]` / `[gs:gif]` | **0** ⚠️ | **GIF nunca recebeu pacote** |
| `[stub:0x182f28] VBlank tick` | até #5340 | clock ticks saudáveis |

**Hipótese unificada:** jogo bloqueado num stage de INIT esperando confirmação SIF do IOP ("IOP modules loaded OK"). Sem essa confirmação, fica em loop de polling/sleep. VBlank IRQ tickando mas main thread parada → nunca chega em `setupRenderThread`/`loadAssets`/`mainGameLoop`.

---

## Bug J — Decifração completa

**Sintoma:** `[PARTE 10 PLANO C] sceSifSetDma com dmat lixo: a0(dmat)=0x5 a1(count)=0x20 ra=0x0 sp=0x1ffbf50 pc=0x293fe4`

`ctx.pc=0x293fe4` é canônico — sempre o endereço da instrução `syscall` no dispatcher.

**Callers reais de `sceSifSetDma`** (linha 0x296710): `a0=$sp ~0x1ffbXXXX`, `a1=1` — nenhum bate com `a0=5, a1=0x20`. E `ra=0` é fisicamente impossível em caller MIPS legítimo.

**Hipóteses ranqueadas:**
1. **(MAIS PROVÁVEL)** Bug do PS2Recomp gerando placeholder para `jalr $reg` com target desconhecido em compile-time. `ra=0` bate porque placeholder não popula $ra.
2. Stack corruption + `jr $ra=0` — menos provável (seria intermitente).
3. JALR via callback table com handler malformado.

**Blindagem PLANO C** (`ps2_stubs_misc.inl` início de `sceSifSetDma`):
```cpp
if (dmatAddr < 0x100000u) {
    static std::mutex s_mu;
    static bool s_logged = false;
    {
        std::lock_guard<std::mutex> lk(s_mu);
        if (!s_logged) {
            s_logged = true;
            fprintf(stderr, "[PARTE 10 PLANO C] sceSifSetDma com dmat lixo ...\n");
        }
    }
    return 0;
}
```

---

## Histórico PARTES 9, 8, 7

### PARTE 9 — Bug H syscalls SIF poll (2026-04-27)

Detalhes completos em `replit_HISTORICO.md §Bug H`. Confirmação em produção:
- Log_part9b (612 linhas): `[stub PARTE 9] syscall 0x7a primeira chamada -- retornando -1` na linha 393
- `Unknown syscallId=0x7a` de 40k+ hits/12s → 0 hits
- VBlank: #300 (PARTE 8) → #960 (PARTE 9) = +220%
- 7 novos `CreateSema id=4..10`
- Jogo entrou em território novo (portão de carga do SIF)

### PARTE 8 — Bug G handler INTC VBlank (2026-04-27)

Detalhes completos em `replit_HISTORICO.md §Bug G`. Confirmação em produção:
- Log_part9 (7.882.220 linhas!): VBlank tick #1..#300 (5s @ 60Hz)
- `[INTC:skip]` sumiu
- `[vif1:cmd]` apareceu com IRQ no idx=20 — VIF1 começou

**Lição importante:** funções após `jr $ra` em outra função ficam "órfãs" pro PS2Recomp. As 4 funções "NÃO REGISTRADA" do init pre-main (`0x283770`, `0x17acb8`, `0x138b10`, `0x1838d0`) provavelmente sofrem da mesma doença.

### PARTE 7 — Bug F alocador (2026-04-27)

Detalhes completos em `replit_HISTORICO.md §Bug F`. Confirmação em produção:
- Log_part7: 4 disparos do stub (guestPtr 0x1000000/0x1000040/0x1000080/0x10000c0)
- Lista circular real montada (5 escritas válidas no SENTINEL_0x2cbbb0)
- `[13FAB8] loop iter=1,2,3` percorre lista de verdade
- Blindagem PARTE 6 NUNCA disparou (zero invocações)

---

## Bug do `log_latest_*.txt` stale — causa raiz + fix (2026-04-30)

**Causa raiz** (confirmada via `auto_round.sh:128-178`):
1. Linha 156-157 (original): `cp $FULL_LOG → log_latest_*.txt` (no disco, branch main)
2. Linha 163: `git checkout -B logs/auto origin/logs/auto` — **sobrescreve** `log_latest_*.txt` com versão tracked da branch (VELHA)
3. `git add` pega só arquivos timestamped novos
4. `log_latest_*.txt` no commit final = versão da branch antes do checkout = stale

**Fix:** moveu o `cp -f` para DEPOIS do `git checkout -B logs/auto origin/logs/auto` (linhas 168-170 do novo `auto_round.sh`).

**Validação:** `sha256(log_latest_full.txt) ≠ sha256(log_20260430_122407_b7ceb6d_full.txt)` confirmou o problema. Após fix, os dois devem ser iguais.

---

## Bug do rebuild stale (inl não rastreado pelo CMake) (2026-04-29)

**Causa:** `ps2_stubs.cpp` inclui `stubs/ps2_stubs_misc.inl` via `#include`. CMake/Ninja nem sempre rastreia `.inl` como dependência via `-MD` do gcc. Mudanças no `.inl` não disparavam recompilação do `ps2_stubs.cpp.o`. Rounds rodavam com binário velho.

**Fix (1 linha em `rebuild_runtime.sh`):**
```bash
touch PS2Recomp/ps2xRuntime/src/lib/ps2_stubs.cpp
```
Antes do `cmake --build`. Força recompilação garantida. Custo: ~20s/round.

---

## Lições técnicas de investigação

### 1. Padrão "instrumentação antes do fix"

Quando uma falha é repetitiva mas o log não revela causa, **NUNCA chutar o fix**. Adicionar log primeiro, rodar 1 teste, depois decidir o fix. Custo: 1 ciclo de `rebuild_runtime.sh` (~30s) — economiza 1 ciclo de fix-errado + outro de revert.

### 2. Mutex + `unordered_set` pra deduplicar logs em multithread

O runtime tem worker threads VBlank/IOP/etc. Sem mutex, 8 threads podem entrar no log simultaneamente e gerar saída entrelaçada. Sem o set, o log infla pra 100k+ linhas. Padrão `s_unknownCounts` da TODO já estabelecido — replicar.

### 3. Layout fixo de `Ps2SifDmaTransfer` (16B)

`uint32_t src; uint32_t dest; uint32_t size; uint32_t attr;` — ordem importa. `src` = EE/IOP origem, `dest` = EE/IOP destino, `attr` carrega flags de modo.

### 4. Stubs SIF do runtime são ESTRITOS por padrão

Qualquer endereço fora dos 32 MB de RAM EE (IOP RAM, scratchpad EE, kernel space) é rejeitado silenciosamente. Quando um fix relaxa essa validação, comentar explicitamente o motivo.

### 5. `ctx.pc=0x293fe4` é canônico no dispatcher

O dispatcher SEMPRE seta o PC pro endereço da instrução `syscall`, independente de quem chamou. `pc=0x293fe4` no log NÃO rastreia origem — precisa de `ra` e `sp` pra inferir quem chamou.

### 6. Funções que dependem de scheduler de threads

Não chamar no boot stub pré-dispatchLoop. Se travar em `cooperativeGuestYield`, é porque depende de semáforo/VSync não disponível naquele contexto.

### 7. Família syscalls 0x79-0x7D (SIF poll)

Ficam num corredor de SIF entre `sceSifSetDChain` (0x78) e `GetMemorySize` (0x7F). Provavelmente `sceSif*Stat`/`sceSif*Reg` variants. Documentação Sony escassa. Padrão universal: se o caller usa poll loop com máscara bit-a-bit, retornar `-1` (= `0xFFFFFFFF`) destravan o poll.

### 8. Atalho universal pra spinloop bit-mask

```cpp
setReturnS32(ctx, -1); // = 0xFFFFFFFF: qualquer AND com qualquer máscara != 0
```
Destravan qualquer loop `and $v0,$v0,$sN; beqz $v0,-0x4`.

### 9. Convenção PS2 "wrapper de 1 instrução"

`addiu $v1,N; syscall; jr $ra` em `entry_294020`/`entry_294030`/`entry_294040` — revela ID exato pelo nome do `entry_*.cpp`, não confiar só no `pc` do log.

### 10. `pc` no log de syscall = endereço APÓS o `syscall`

Por causa do delay-slot MIPS: o `pc` logado é a instrução depois do `syscall`, não o `syscall` em si.
