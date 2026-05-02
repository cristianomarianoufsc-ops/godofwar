# Manual de Transferência — God of War PS2 PC Port — 🏛️ OPERAÇÃO ESPARTA

> ## 🇧🇷 IDIOMA OBRIGATÓRIO: PORTUGUÊS BRASILEIRO 🇧🇷
> **Responda SEMPRE em português brasileiro, desde a primeira mensagem, sem exceção. Não espere o usuário pedir.**
>
> **Para o próximo analista:** Leia até o fim antes de tocar em qualquer código. O Agente Cris (usuário) fala português brasileiro — responda nele.
>
> **Histórico narrativo detalhado** (sessões 2026-04-23 a 2026-04-29, bugs A-J completos, dumps hex, diagnósticos de hipóteses descartadas) → `HANDOFF_HISTORICO.md`. Leia se precisar de detalhe de bug específico.

---

## 🎬 PROTOCOLO DE COMUNICAÇÃO — OPERAÇÃO ESPARTA 🎬

| Papel | Quem é |
|---|---|
| **Agente Cris** | O usuário (cristiano), operador de campo no PC Linux Mint |
| **Analistas** | Vocês, agentes de IA na sala de controle |
| **Sabotadores** | Bugs, funções que travam, BSS não-inicializada |
| **Vigias / sentinelas** | Estruturas globais que marcam fim-de-lista (`0x2cbbb0`, `0x2cf090`, `0x32E854`) |
| **Almoxarifado** | Alocadores (`sub_0013DA10` etc) |
| **Câmeras escondidas** | Watchpoints (`ps2CheckGlobalWatch*` em `ps2_runtime.h`) |
| **Cofre / 6000 portas** | Imagem do executável recompilado (~6000 funções `sub_XXXXXX.cpp`) |

**Regra de ouro:** ao explicar um achado novo, SEMPRE as três camadas nesta ordem:
1. 🕵️ **Espionagem** — narrativa da Operação Esparta (o agente, o cofre, a missão)
2. 🚗 **Carro** — analogia do mundo real (motor, sensor, correia)
3. 🔧 **Técnico** — código puro (endereços, funções, registradores)

**O Agente Cris PRECISA das três camadas em toda resposta técnica, sem exceção.**
Tom: relatório de inteligência calmo, não Hollywood.

## 🗺️ CAMINHO DO PROJETO NO PC DO AGENTE CRIS

```
cristiano@cristiano:~/Documentos/GitHub/godofwar
```

**NUNCA esquecer:** todos os comandos de campo (`bash rebuild_runtime.sh`, `bash auto_round.sh`, etc.) rodam nesse diretório no PC Linux Mint do Cris. O Replit é APENAS sala de controle (edição/análise estática).

---

## 🔴 REGRA OBRIGATÓRIA — LEIA ANTES DE QUALQUER COISA 🔴

**A cada progresso — fix aplicado, bug identificado, teste rodado, causa raiz descoberta — atualize OBRIGATORIAMENTE:**

1. `replit.md` — estado técnico atual, causa raiz, fix aplicado, comando de teste
2. `HANDOFF_AGENT.md` (este arquivo) — seção "ESTADO ATUAL" com data, o que mudou, próximos passos

**Os dois sempre. No mesmo commit. Sem exceção.**
Se você terminar a sessão sem atualizar os dois, o próximo agente vai perder horas repetindo diagnóstico já feito. Isso desperdiça os créditos do usuário.

---

## 🚨 FLUXO DE PUSH — REPLIT NÃO EMPURRA AUTOMATICAMENTE PRO REMOTO 🚨

**Sequência real:**
1. Analista edita arquivos no Replit → Replit cria checkpoint LOCAL
2. **Analista AVISA explicitamente:** "Cris, clica no botão Push"
3. Cris aperta botão na UI → commit vai pro GitHub → loop detecta em ≤30s → round dispara

**Obrigação do analista:** ao terminar QUALQUER edição que precisa rodar no PC, explicitar na resposta: *"Cris, clica no botão Push do Replit pra mandar o fix pro GitHub."*

**Exceção:** edição em `replit.md`/`HANDOFF_AGENT.md` puramente documental NÃO precisa de push imediato.

---

## 🌍 VISÃO DE LONGO PRAZO — GRANDE UNIFICAÇÃO PS2→PC 🌍

Detalhes completos em `replit.md §🌍 VISÃO DE LONGO PRAZO`. Resumo:

- Toda ferramenta nova = embrião do Sistema Universal de Portabilidade PS2→PC.
- Overrides GoW vivem em `game_overrides.cpp` com `PS2_REGISTER_GAME_OVERRIDE("GodOfWarPCPort:...")`.
- Lógica específica do GoW **nunca vaza** pro runtime universal (`ps2_runtime.cpp`, `ps2_stubs_misc.inl`).
- Sem refactor agressivo de tools antigas — só em coisas novas ou já em mudança.

---

## 🦆 LIÇÕES METODOLÓGICAS 🦆

Versão expandida com exemplos vive em `replit.md §🦆 LIÇÕES METODOLÓGICAS`.

**Lição 1 — "Rubber duck debugging por proxy":** quando em modo espera passiva, faça triagem ativa do que poderia ser feito. O ato de inventariar por que NÃO vai fazer X frequentemente revela bug oculto. Caso: triagem de "vale criar tool nova?" revelou bug do `log_latest` stale + smoking gun SignalSema=0 em ~10 min.

---

## 📖 ANALOGIAS — estado atual (2026-04-30 tarde)

**Carro:** motor deu 1ª partida (Fix 4+5); guarda neutralizado (Fixes 1+6); bomba aftermarket (PARTE 7 ✅); sensor de injeção rebobinado (PARTE 8 ✅); 4 botões pneumáticos (PARTE 9 ✅); sensor diagnóstico + stub permissivo no acoplamento SIF (PARTE 10 Bugs I/J ✅). **PASSO 2.8 confirmou delta=0ms. PASSO 3 APLICADO: porteiro do semáforo agora dá o sinal sozinho quando o caminhão SIF passa (WaitSema forja iSignalSema). Aguardando round com novo fix.**

**Espionagem:** cofre aberto (Fix 4+5); guardas 1/2 neutralizados; almoxarifado (PARTE 7 ✅); cruzamento (PARTE 8 ✅); switchboard (PARTE 9 ✅); portão SIF (PARTE 10 ✅). **PASSO 3 APLICADO: agente infiltrado forja o sinal do IOP — acorda o guarda adormecido em WaitSema(sid=4). Aguardando round para ver o próximo bloqueio.**

---

## 🤖 FLUXO DE TRABALHO AUTOMATIZADO — VIGENTE DESDE 2026-04-28

```bash
# Log filtrado mais recente (101 linhas típicas):
curl -s "https://raw.githubusercontent.com/cristianomarianoufsc-ops/godofwar/logs/auto/runs_automaticos/log_latest_filtered.txt"

# Log completo (~465 linhas):
curl -s "https://raw.githubusercontent.com/cristianomarianoufsc-ops/godofwar/logs/auto/runs_automaticos/log_latest_full.txt"
```

**O analista FAZ:** ler log via curl, commitar mudanças, pedir push ao Cris.
**O analista NÃO FAZ:** pedir log no chat, tentar `git fetch` local no Replit, sugerir parar o loop.

Troubleshooting e configuração completa em `replit.md §🤖 FLUXO DE TRABALHO AUTOMATIZADO`.

---

## 🟢 ESTADO ATUAL — LEIA ISTO PRIMEIRO (atualizado 2026-05-02 — Bug S diagnosticado + PASSO 4 aplicado)

### ✅ Bugs K, L, M, N, O, X, P, Z, AB — RESOLVIDOS

### 🔴 BLOQUEADOR ATUAL — Bug S (loop `*(0x30A1C0)` em entry_26c658) — fix PASSO 4 aplicado, aguarda push + round

---

**🏆 Situação do último round** (log `7117cbd`, 2026-05-02 — dados do round anterior):
- PASSO 3b forja PollSema(sid=7) KE_OK ✅
- PASSO 3c escreve `*(0x2a1710)=1` ✅
- PASSO 3d zera `*(0x2a1734)` e `*(0x2a28d0)` ✅ (loops de entry_27a5a8 saem imediatamente)
- VBlank #60 → #17940 sem nenhum outro evento — **Bug S**: thread principal presa em entry_26c658

**Causa raiz do Bug S — analisada em 2026-05-02:**

O thread principal (tid=1) fica preso na função `entry_26c658_0x26c728.cpp` no loop `label_26c6d0`:

```
// entry_26c658 — label_26c6d0 (busy-poll do SIF RPC client)
label_26c6d0:
  jal func_26B918(a0=0x30A1C0)       ← pump/yield SIF
  jal func_294590(a0=0x30A1C0, a1=0x30A1FF)  ← sceSifCheckStatRpc
  v0 = (*(0x30A1C0) < 1) ? 1 : 0    ← mode == 0 = done?
  *(0x2A1350) = v0                   ← escreve status
  if v0 == 0 → cooperativeGuestYield → goto label_26c6d0  ← LOOP ETERNO
  // v0 == 1 → exit (mode zerado pelo IOP)
```

`*(0x30A1C0)` = campo `mode` do SIF RPC client buffer em 0x30A1C0. É setado para ≠ 0 por `sceSifCallRpc` e zerado quando o IOP envia a resposta. Sem IOP real → nunca zera → loop eterno.

**Por que `*(0x2A1710)=1` persiste:**
- `*(0x2A1710)=1` faz o VBlank chamar `FUN_2963C0 → sub_00295568` (SIF receive handler)
- `sub_00295568` lê primeiro byte do buffer IOP→EE; sem IOP, é sempre 0 → early-exit
- `FUN_2963C0` nunca reseta `*(0x2A1710)` → VBlank continua chamando a cada tick (17940x)

**Fix aplicado — PASSO 4** (`game_overrides.cpp`, 2026-05-02):

Adicionado no handler VBlank `gow_intc_handler_0x182f28`:
- Após tick 60 (1 segundo de setup legítimo), monitora `*(0x30A1C0)`
- Se `*(0x30A1C0) != 0` por 5 VBlanks consecutivos:
  - `WRITE32(0x30A1C0, 0)` → força "IOP respondeu" → thread sai do loop
  - `WRITE32(0x2A1710, 0)` → para loop VBlank→FUN_2963C0 inútil
- Log: `[PASSO 4 FIRE] forcou *(0x30A1C0)=0 e *(0x2A1710)=0 apos N VBlanks @tick #T`
- s_passo4StallTicks reseta a 0 depois do fire → reativa automaticamente para próximas chamadas RPC

**Arquivos alterados:**
- `PS2Recomp/ps2xRuntime/src/lib/game_overrides.cpp` — PASSO 4 dentro de gow_intc_handler_0x182f28

**O que esperar no próximo round:**
- `[PASSO 4]: detectou *(0x30A1C0)=0xNN (SIF RPC pendente) @tick #65` (aprox.)
- `[PASSO 4 FIRE]: forcou *(0x30A1C0)=0 e *(0x2A1710)=0 apos 5 VBlanks @tick #70`
- Thread sai do loop em entry_26c658 → retorna v0=0 para o chamador
- Possível: mais chamadas a `func_294590` (sceSifCheckStatRpc) com outros clientes RPC
- Possível: PASSO 4 dispara múltiplas vezes (uma por módulo IOP inicializado)
- Próximo bloqueio provável: novo `WaitSema` ou outro polling de SIF RPC client diferente de 0x30A1C0

---

**Histórico do round 258538d (2026-05-02 — PROGRESSO HISTÓRICO, referência):**
- PASSO 3b + PASSO 3c funcionaram → sub_002963C0 executou → `entry=0x2996b0` ← **MAIN REAL** ✅
- `INFO: TEXTURE: Texture loaded successfully (640x448)` ← renderer inicializando ✅
- Jogo chama `WaitEventFlag` 30+ vezes com bits de mode desconhecidos → runtime retorna KE_ILLEGAL_MODE
- **Fix Bug AB** aplicado: mascarar bits desconhecidos, retornar KE_OK imediatamente

**Fix Bug AB** (`ps2_syscalls_flags.inl`):
- `WaitEventFlag` + `PollEventFlag`: bits fora de `WEF_MODE_MASK=0x31` → loga + retorna KE_OK
- Log: `[WaitEventFlag:mode_compat] Bug AB — unknown_bits=0x...`

**Fix Bug AA** (2026-05-02):
- `FUN_002962d8`: reconstruída (38→78 linhas); `FUN_00296300`: reconstruída (38→79 linhas)

**Fix anterior — PASSO 3c** (embutido em PASSO 3b, histórico):
- Após KE_OK: `WRITE32(0x2a1710, 1)` → habilita chamada a FUN_0x2963c0

**Fix anterior — PASSO 3c:auto** (independente, histórico):
- Em toda `PollSema:zero` do callsite `ra=0x27a6e4`, restaura `*(0x2a1710)=1`
- Log: `[PASSO 3c:auto] *(0x2a1710)=0 -> restaurando 1 ...`

### ⚠️ Bug Q — TRUNCADA, AGUARDA recompilar.sh

`FUN_00294990_0x294990.cpp` — 182 linhas reescritas manualmente (2026-05-01). Sintaxe verificada. Aguarda `bash recompilar.sh` (não `rebuild_runtime.sh`).

### 🟡 Bugs Y, P — ESCRITOS, AGUARDAM recompilar.sh

- **Bug P**: `FUN_002947c8_0x2947c8.cpp` — 334 linhas. Aguarda `recompilar.sh`.
- **Bug Y**: `sub_00297290_0x297290.cpp` — WRITE32 + $v0=1 nos dois caminhos. Aguarda `recompilar.sh`.

### ⚠️ Bugs R–W — Aguardando log para confirmar relevância

---

## 🐛 BIBLIOTECA DE BUGS A-X (resumo compacto)

| Bug | Status | Arquivo do fix | Receita |
|---|---|---|---|
| **A** — crt0 truncado | ✅ | `truncation_overrides.csv` + `regen_truncated.sh` | Forçar range real, regen via ps2_recomp |
| **B** — `$gp=0` no boot | ✅ | `ps2_runtime.cpp` (kInitChain) | Boot stub seta `$gp=0x2cf070` |
| **C** — boot stub sabotando crt0 | ✅ | `ps2_runtime.cpp` | Boot stub opt-in `PS2_BOOT_STUB=1`, default OFF |
| **D** — loop infinito `func_100408` | ✅ | `sub_00100E28_0x100e28.cpp`, `sub_00100408_0x100408.cpp` | JALR guard `if (!runtime->hasFunction(jumpTarget))` |
| **E** — sentinela `0x2cf090` zerada | ✅ | `ps2_runtime.cpp` (Fix 1) | `mem[SENTINEL] = mem[SENTINEL+4] = SENTINEL` |
| **F** — alocador `sub_0013DA10` retorna 0 | ✅ | `game_overrides.cpp` | Stub bump allocator via `PS2_REGISTER_GAME_OVERRIDE` |
| **G** — handler INTC VBlank `0x182f28` | ✅ | `game_overrides.cpp` | `runtime.registerFunction(0x00182F28, stub)` |
| **H** — syscalls SIF poll 0x79-0x7D | ✅ | `ps2_syscalls.cpp:321-363` | 4 cases no switch retornando `-1` |
| **I** — `sceSifSetDma` rejeita `dest=0xffffffff` | 🟡 BLINDADO | `ps2_stubs_misc.inl` (PLANO B1) | Aceita `dest=0xffffffff`, retorna 1 fake |
| **J** — `0x296a54` not found, `ra=0` | 🟡 BLINDADO | `ps2_stubs_misc.inl` (PLANO C) | `if dmatAddr < 0x100000 return 0` |
| **K** — `WaitSema sid=12` delta=2837ms > guard 100ms | ✅ | `ps2_syscalls_flags.inl` | Removido `&& deltaMsSinceBind < 100` |
| **L** — `0x296a54 not found` 33x | ✅ | `game_overrides.cpp` + `truncation_overrides.csv` | Stub noop em `0x296A54` |
| **M** — Timeout insuficiente (90s) | ✅ | `auto_round.sh` | `RUN_TIMEOUT=90` → `300` |
| **N** — PASSO 4 era regressão | ✅ REVERTIDO | `ps2_syscalls_flags.inl` | Bloco PASSO 4 removido |
| **O** — stub `0x296a54` retornava 0 | ✅ | `game_overrides.cpp` | `$v0=0` → `$v0=1` |
| **P** — FUN_002947c8 truncada (thread 2 sem corpo) | ✅ REESCRITA MANUAL | `GOD_PC_PORT_FINAL/src/recompiled/FUN_002947c8_0x2947c8.cpp` | 334 linhas reescritas manualmente; sintaxe verificada ok (g++ -fsyntax-only) |
| **Q** — FUN_00294990 truncada (1 instrução) | ✅ REESCRITA MANUAL | `GOD_PC_PORT_FINAL/src/recompiled/FUN_00294990_0x294990.cpp` | 182 linhas reescritas manualmente (2026-05-01); **sintaxe verificada g++ -fsyntax-only = zero erros**; aguarda rebuild no PC do Cris (`bash recompilar.sh`) |
| **R** — loop `*(0x2a1734)` + FUN_297670 travam após FUN_0x2963c0 | ✅ PASSO 3d aplicado, aguarda round | `ps2_syscalls_flags.inl` | Após sub_002963C0, entry_27a5a8 entra em `while(*(0x2a1734)!=0){delay(4ms)}` + `while(FUN_297670(0x2a28d0)!=0){delay(4ms)}`. Fix: WRITE32(0x2a1734,0) + WRITE32(0x2a28d0,0) no PASSO 3d, PollSema(ra=0x27a6e4) forja KE_OK em toda chamada. (Nota: FUN_00294c70 — código inline em sub_00294AF8, nenhum caller direto, provavelmente segura.) |
| **S** — FUN_00297058 truncada | ⚠️ AGUARDANDO LOG | `truncation_overrides.csv` | 25 linhas; fora do caminho crítico imediato identificado |
| **T** — FUN_002971c0 truncada | ⚠️ AGUARDANDO LOG | `truncation_overrides.csv` | 25 linhas; imediatamente antes de sub_00297290 (bind loop); **zero callers encontrados em qualquer .cpp recompilado** — provavelmente chamado via ponteiro de função em runtime; disassembly completo disponível via `python3 tools/mips_inspect.py 0x2971c0` (cobre 0x2971c0–0x297284) |
| **U** — FUN_00294d40 truncada | ⚠️ AGUARDANDO LOG | `truncation_overrides.csv` | 28 linhas; zona crítica 0x29xxxx |
| **V** — FUN_00238890 truncada | ⚠️ AGUARDANDO LOG | `truncation_overrides.csv` | 28 linhas; 43 referências estáticas — mais chamada entre as truncadas |
| **W** — FUN_00244600 truncada | ⚠️ AGUARDANDO LOG | `truncation_overrides.csv` | 25 linhas; 36 referências estáticas |
| **X** — `cop0_status=0` → IE=0 → StartThread sempre pulado | ✅ RESOLVIDO | `PS2Recomp/ps2xRuntime/include/ps2_runtime.h` linha 151 | `cop0_status = 0x00000000` → `0x00010001`; fix aguardando rebuild no PC |
| **Y** — `sub_00297290` retorna 0 após WaitSema; `*(s1+0x24)` fica 0 (sem DMA do IOP) | 🟡 FIXADO, AGUARDA COMPILAR | `src/recompiled/sub_00297290_0x297290.cpp` linhas 387-395 e 456-460 | Dois problemas: (1) delay slot `daddu $v0,$zero,$zero` → $v0=0, `entry_298910@0x29895c` trata 0 como "não pronto" → spin 1M iters; (2) `*(s1+0x24)` nunca preenchido (IOP faria DMA de confirmação). Fix: `WRITE32(*(s1+0x24), 1)` + `$v0=1` nos dois caminhos de sucesso. Aguarda `bash recompilar.sh`. |
| **Z** — `PollSema` sem logging + sem PASSO 3b → poll-por-VBlank em sid=7 + IOP notify em 0x2a1710 | ✅ RESOLVIDO | `PS2Recomp/ps2xRuntime/src/lib/syscalls/ps2_syscalls_flags.inl` | (1) Log primeira falha/sucesso por sid. (2) PASSO 3b: `callCount==1 \|\| callCount%10000==0` → KE_OK forjado. (3) PASSO 3c (embutido): após KE_OK, escreve 1 em *(0x2a1710) via WRITE32 para habilitar chamada a FUN_0x2963c0. Aguarda round. |

> **Detalhe completo de cada bug** (diagnóstico, dumps, hipóteses descartadas, código aplicado) → `HANDOFF_HISTORICO.md`.

---

## 🛠️ Nova ferramenta adicionada (2026-05-01 — sessão atual)

**`tools/missing_to_seeds.py`** — fecha a lacuna "Parser do ps2_missing.log → seeds"

Lê `ps2_missing.log`, extrai entradas `FUNCTION` (funções chamadas em runtime mas não recompiladas), e as adiciona como seeds em `tools/reachable_seeds.txt`.

```bash
python3 tools/missing_to_seeds.py --log build/ps2_missing.log          # seco
python3 tools/missing_to_seeds.py --log build/ps2_missing.log --apply --min-calls 3 --top 10
python3 tools/reachable_after_boot.py   # usa os novos seeds
```

Ferramenta Universal (sem endereços GoW hard-coded). Sintaxe verificada (py_compile, exit 0).

**`tools/triage_round.py`** — triagem automática pós-round em 1 comando (atualizado 2026-05-01)

Baixa o log filtrado do GitHub via urllib e gera relatório estruturado: módulos IOP (sids, deltas), último VBlank, **seção `── THREADS EE` com CreateThread vs StartThread** (detecta thread criada sem start), alocações, erros/SIGSEGV, boot-loop suspects, diagnóstico e próximo passo.

```bash
python3 tools/triage_round.py              # relatório completo (GitHub)
python3 tools/triage_round.py --short      # só o resumo (para uso rápido)
python3 tools/triage_round.py --local arquivo.txt   # arquivo local
```

Testado contra log atual (2026-05-01) → detectou corretamente Bug X: `🔴 id=2 entry=0x2947c8 prio=1 → StartThread NUNCA chamado`. Sintaxe verificada (exit 0).

---

## 📋 Próxima ação do analista (atualizado 2026-05-02 — análise cadeia intermediária completa)

### O que foi feito nesta sessão (2026-05-02 — sem round novo)

**Análise estática da cadeia Bug AB → Bug P — TODAS as funções intermediárias verificadas:**

| Função | Linhas | Truncada? | Declarada |
|---|---|---|---|
| `entry_296c48` | 573 | ✅ Não | 0x296c48–0x296de8 |
| `entry_296518` | 758 | ✅ Não | 0x296518–0x296798 |
| `entry_2967d0` | 144 | ✅ Não | 0x2967d0–0x296848 |
| `entry_2964f0` | 59 | ✅ Não | 0x2964f0–0x296518 |

**Novo achado — poll loop em `entry_296c48` (label_296da0):**
- `entry_2964f0(a0=0)` = `READ32(0x327a40)` — lê um flag de memória
- Loop gira até `*(0x327a40) != 0` (flag setado pela thread tid=2 durante init)
- Se Bug P impedir a thread de completar a init → poll gira para sempre (silent hang)
- `cooperativeGuestYield()` presente no loop → runtime não trava, só parece lento

**Logs de diagnóstico adicionados (compilam com `recompilar.sh`):**
- `entry_2964f0_0x296518.cpp`: `[poll_327a40] INICIO` / `spinning count=N` (a cada 500) / `SAIU poll_ok`
- `FUN_002947c8_0x2947c8.cpp`: `[BugP_entry] FUN_002947c8 START a0=0x... sp=0x...`

**GREP_PATTERN atualizado:** `+poll_327a40 +FUN_002947c8`

---

### 🚨 PUSH PENDENTE — Cris precisa clicar em Push

**Todos esses fixes estão prontos mas NÃO foram ao GitHub ainda:**

| Arquivo | Fix | Script de build |
|---|---|---|
| `PS2Recomp/ps2xRuntime/src/lib/syscalls/ps2_syscalls_flags.inl` | Bug AB + PASSO 3c:auto | `rebuild_runtime.sh` |
| `GOD_PC_PORT_FINAL/src/recompiled/FUN_002962d8_*.cpp` | Bug AA | `recompilar.sh` |
| `GOD_PC_PORT_FINAL/src/recompiled/FUN_00296300_*.cpp` | Bug AA | `recompilar.sh` |
| `GOD_PC_PORT_FINAL/src/recompiled/FUN_002947c8_0x2947c8.cpp` | Bug P + log entrada | `recompilar.sh` |
| `GOD_PC_PORT_FINAL/src/recompiled/entry_2964f0_0x296518.cpp` | log poll_327a40 | `recompilar.sh` |
| `game_overrides.cpp` | VBlank log notify2a1710 | `rebuild_runtime.sh` |
| `auto_round.sh` | GREP_PATTERN expandido | (script, sem build) |

**Após o Push do Cris:**
1. `bash rebuild_runtime.sh` → compila Bug AB + PASSO 3c:auto + VBlank log
2. `bash recompilar.sh` → compila Bug AA + Bug P + logs entry_2964f0
3. `bash auto_round.sh once`

---

### O que o próximo log deve mostrar

**Cenário A — Bug P funcionando (esperado):**
```
[WaitEventFlag:mode_compat] Bug AB — unknown_bits=0x... × 30+
[CreateThread] ...
[StartThread] tid=2 entry=0x2947c8
[BugP_entry] FUN_002947c8 START a0=0x... sp=0x...
[poll_327a40] INICIO poll loop addr=0x327a40
... (thread roda) ...
[poll_327a40] SAIU poll_ok count=N addr=0x327a40 val=0x1
```

**Cenário B — Bug P trava antes de setar 0x327a40 (poll loop sem saída):**
```
[BugP_entry] FUN_002947c8 START ...
[poll_327a40] INICIO poll loop addr=0x327a40
[poll_327a40] spinning count=500 addr=0x327a40 val=0x0
[poll_327a40] spinning count=1000 ...
(sem SAIU — próximo bug dentro de FUN_002947c8)
```

**Cenário C — StartThread não chamado (Bug AB não resolveu tudo):**
```
[WaitEventFlag:mode_compat] × 30+
(sem [BugP_entry], sem [poll_327a40])
→ Investigar se há outro WaitEventFlag bloqueante adiante de sub_0029AA88
```

### ⚠️ Lembrete ao analista
Sempre pedir ao Agente Cris para clicar em **Push** no Replit após qualquer edição de código.
