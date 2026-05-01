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

**Regra de ouro:** ao explicar um achado novo, sempre as três camadas nesta ordem: 🕵️ espionagem → 🚗 carro → 🔧 técnico (código puro). Tom: relatório de inteligência calmo, não Hollywood.

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

## 🟢 ESTADO ATUAL — LEIA ISTO PRIMEIRO (atualizado 2026-05-01 — Bug O APLICADO, aguardando round)

### ✅ Bug K — CONFIRMADO RESOLVIDO
### ✅ Bug L — CONFIRMADO RESOLVIDO (stub 0x296a54 visível 8x no round: callbacks #0–#7)
### ✅ Bug M — Timeout insuficiente (RUN_TIMEOUT 90→300s) — RESOLVIDO

### ✅ Bug N — REGRESSÃO DETECTADA E REVERTIDA (2026-05-01)

**PASSO 4 foi REVERTIDO** — era uma regressão que escrevia no endereço errado.

**Diagnóstico da regressão (2026-05-01 comparando logs 6625971 vs 2b2a957):**

| Round | PASSO 4 | Resultado |
|---|---|---|
| `6625971` (SEM PASSO 4) | ❌ ausente | **sid=4..35 (31 módulos carregados!)** — cortado por timeout |
| `2b2a957` (COM PASSO 4) | ✅ ativo | **sid=4..5 apenas** — jogo desviou de rota após sid=5 |

**Por que PASSO 4 quebrava tudo:**
- PASSO 4 escrevia em `*(gpr[17]+0x24)` = `*(0x30aaa8+0x24)` = `*(0x30AACC)` — o `response_buf`
- `entry_298910` verifica `*(s0+0x24)` onde `s0 = 0x32AF00` → campo = `*(0x32AF24)` — **endereços completamente diferentes**
- Após a escrita errada em `0x30AACC`, o jogo tomava um caminho de código alternativo (opcode=0xa, ra=0x297634) em vez do bind normal (opcode=0x9, ra=0x297374)
- Sem PASSO 4: `sub_00297290` preenche `*(0x32AF24)` naturalmente após o WaitSema acordar

**Fix: revertido em `ps2_syscalls_flags.inl` — bloco PASSO 4 removido, comentário explicativo deixado.**

**Detector `[retry-loop]` no `entry_298910_0x298a10.cpp` MANTIDO** (útil pra diagnóstico futuro).

---

### 🔍 BLOQUEIO PÓS-sid=35 — NOVO BLOQUEIO A INVESTIGAR

No round `6625971` (sem PASSO 4, melhor resultado histórico):
- sid=4..35 carregados com sucesso — 32 módulos IOP via SIF bind
- Após sid=35 (WaitSema desbloqueado pelo PASSO 3), jogo entrou em VBlank loop por ~140s sem mais eventos
- `delta_ms_since_RPC_BIND` para sid=35 era 62228ms — deltas crescentes indicam que entre binds o jogo faz busy-wait (~2s por loop de retry interno)
- Buffer `0x30aaa8` no dump @VBlank #5000 após sid=35: `+0x00=0x20328280 +0x04=0x21 +0x08=0x23` — rpc_id incremental continua

**Próximo bloqueio provável:** após todos os binds SIF necessários, o jogo aguarda resposta de outro tipo — provavelmente um DMA de retorno IOP→EE que preenche `0x3277c0` (o callback buffer do INIT packet), ou um sinal via semáforo diferente de `pc=0x293c64`.

**`FUN_002947c8_0x2947c8` (thread id=2, entry=0x2947c8) — TRUNCADA** — apenas 1 instrução (`addiu $sp,-0x80`), não faz nada. Pode ser Bug O. Checar se o thread 2 deveria processar callbacks IOP.

**Próximo passo:** aguardar round com PASSO 4 revertido → ver se sid volta a 35+ → identificar o novo bloqueio.

---

## 🐛 BIBLIOTECA DE BUGS A-N (resumo compacto)

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
| **K** — `WaitSema sid=12` delta=2837ms > guard 100ms | ✅ RESOLVIDO | `ps2_syscalls_flags.inl` | Removido `&& deltaMsSinceBind < 100` — condição agora só `deltaMsSinceBind >= 0` |
| **L** — `0x296a54 not found` 33x (FUN_00296a50 truncada a 2 instr.) | ✅ RESOLVIDO | `game_overrides.cpp` + `truncation_overrides.csv` | Stub noop em `0x296A54`; CSV com range real `0x296a50-0x296c48` pra regen futura |
| **M** — Timeout insuficiente (90s), cortava em sid=28 | ✅ RESOLVIDO | `auto_round.sh` | `RUN_TIMEOUT=90` → `300` |
| **N** — PASSO 4 era regressão (escrevia em 0x30AACC em vez de 0x32AF24) | ✅ REVERTIDO | `ps2_syscalls_flags.inl` | Bloco PASSO 4 removido; sem PASSO 4, `sub_00297290` preenche o campo certo naturalmente |
| **O** — stub `0x296a54` retornava 0 → retry-loop crescente (sid=35: 57s) → VBlank infinito | 🟡 FIX APLICADO | `game_overrides.cpp` (`gow_stub_FUN_00296a54`) | `$v0=0` → `$v0=1` ("módulo IOP pronto") — elimina busy-wait entre binds |

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

**`tools/triage_round.py`** — triagem automática pós-round em 1 comando

Baixa o log filtrado do GitHub via urllib e gera relatório estruturado: módulos IOP (sids, deltas), último VBlank, alocações, erros/SIGSEGV, boot-loop suspects, diagnóstico resumido e próximo passo sugerido.

```bash
python3 tools/triage_round.py              # relatório completo (GitHub)
python3 tools/triage_round.py --short      # só o resumo (para uso rápido)
python3 tools/triage_round.py --local arquivo.txt   # arquivo local
```

Testado contra log atual → detectou corretamente sid=34, 31 módulos acordados, frame=5340, cortado por timeout. Sintaxe verificada (py_compile, exit 0).

---

## 📋 Próxima ação do analista (atualizado 2026-05-01 — Bug O APLICADO)

**⚠️ PUSH PENDENTE — Cris precisa clicar em Push no Replit antes do próximo round.**

**Arquivos modificados neste commit:**
- `PS2Recomp/ps2xRuntime/src/lib/game_overrides.cpp` — **Bug O fix** (`$v0=0` → `$v0=1` em `gow_stub_FUN_00296a54`) — requer `bash rebuild_runtime.sh`
- `HANDOFF_AGENT.md` + `replit.md` — documentação atualizada

**O que esperar no próximo round (com Bug O fix):**
- `[stub:0x296a54] Bug O: callback IOP modulo #N — retornando 1 (modulo pronto...)` nos primeiros 8
- Deltas entre RPC BINDs devem voltar a 0ms (sem retry-loop)
- sid=4..35 carregados muito mais rápido (< 5s total em vez de 57s)
- Jogo deve progredir ALÉM do VBlank loop pós-sid=35 — novo território!

**Se os deltas continuarem crescendo:** o retry-loop tem outra causa — investigar o código que chama `0x296a54` e o que faz com o retorno `$v0=1`.

**Após o round, o analista deve:**
```bash
curl -s "https://raw.githubusercontent.com/cristianomarianoufsc-ops/godofwar/logs/auto/runs_automaticos/log_latest_filtered.txt" | grep -E "(WaitSema|PASSO 3|stub:0x296|CreateSema|SIGSEGV|not found)" | head -60
```
