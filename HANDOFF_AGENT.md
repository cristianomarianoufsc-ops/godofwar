# Manual de Transferência — God of War PS2 PC Port — 🏛️ OPERAÇÃO ESPARTA

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

## 🟢 ESTADO ATUAL — LEIA ISTO PRIMEIRO (atualizado 2026-05-01 — Bug N diagnosticado e CORRIGIDO)

### ✅ Bug K — CONFIRMADO RESOLVIDO
### ✅ Bug L — CONFIRMADO RESOLVIDO (stub 0x296a54 visível 8x no round: callbacks #0–#7)
### ✅ Bug M — Timeout insuficiente (RUN_TIMEOUT 90→300s) — RESOLVIDO

### 🔧 Bug N — `*(outer_struct+0x24)` nunca preenchido após bind fake → retry loop de 148s

**Causa raiz (diagnóstico completo 2026-05-01):**

| Componente | Endereço | Papel |
|---|---|---|
| `entry_298910` | 0x298910 | Loop principal de bind: checa `*(s0+0x24)` após cada bind |
| `sub_00297290` | 0x297290 | Executa o bind SIF; s1=a0=outer_struct_ptr=**0x0032AF00** |
| delay slot em 0x2972c4 | — | `sw $zero, 0x24($s1)` — ZERA `*(0x0032AF24)` incondicionalmente |
| `entry_298910` label_2989c4 | — | Retry loop: if `*(s0+0x24)==0` → delay 1M iters (~148s) → recomeça |
| FUN_00293c60 + syscall 0x293c64 | — | WaitSema; PASSO 3 forjava o signal mas não preenchia o campo |

**No PS2 real:** handler de interrupção DMA SIF escreve `*(s1+0x24) = client_ptr` quando IOP responde ao bind.
**No port:** PASSO 3 forjava o WaitSema mas jamais escrevia `*(s1+0x24)` → campo ficava 0 → retry infinito.

**Fix aplicado — PASSO 4 em `ps2_syscalls_flags.inl`:**

Quando PASSO 3 forja o WaitSema COM condição `pc==0x293c64 && ra==0x297374` (o call site de bind):
- `s1_outer = gpr[17]` (callee-saved — outer struct, jamais tocado por FUN_00293c60)
- `s0_client = gpr[16]` (callee-saved — client ptr retornado por func_296E10)
- Escreve `*(rdram + s1_outer + 0x24) = s0_client` simulando a resposta do handler SIF

**Consequência esperada:** loop de bind em `entry_298910` finalmente avança após cada bind confirmado (em vez de retornar ao topo de `label_2989c4`). O jogo deve carregar todos os 35 módulos IOP sem ficar preso.

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
| **N** — `*(outer_struct+0x24)` nunca preenchido → retry loop 148s | ✅ CORRIGIDO | `ps2_syscalls_flags.inl` (PASSO 4) | Em WaitSema(pc=0x293c64,ra=0x297374): `*(rdram+gpr[17]+0x24)=gpr[16]` |

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

## 📋 Próxima ação do analista (atualizado 2026-05-01 — Bug N corrigido — PASSO 4)

**Fixes pendentes de push (Cris precisa clicar em Push):**
- `ps2_syscalls_flags.inl` — **PASSO 4 Bug N fix**: em PASSO 3 (WaitSema forjado, pc=0x293c64, ra=0x297374), escreve `*(rdram+gpr[17]+0x24)=gpr[16]` simulando o handler DMA SIF que preenche o campo `confirmed_client` no outer_struct. **Requer rebuild do runtime (build.sh no PC do Cris).**
- (já enviados em commit anterior, não precisam de push): `auto_round.sh` RUN_TIMEOUT=300, `tools/triage_round.py`, `tools/missing_to_seeds.py`, `ps2_runtime.cpp` boot-loop detector.

**Após o push e próximo round (300s), o analista deve:**
```bash
# 1. Triagem completa em 1 comando:
python3 tools/triage_round.py

# 2. Resumo rápido:
python3 tools/triage_round.py --short
```

**O que procurar:**
- `[PASSO 4]` aparecendo ≥1x no log → Bug N fix está ativo
- Se sids subirem de forma contínua (sid=1→2→3→...→35) sem pause de 148s → Bug N resolvido!
- Se aparecer nova linha parada (ex: `func_XXXXXX not found`) → novo bug para análise
- Se aparecer `SIGSEGV` → crash pós-bind, bug de runtime pós-carregamento de módulos
- Se aparecer `[boot-loop:suspect]` → checar PC e a0 reportados
- Se o jogo ainda terminar por SIGINT sem chegar nos 35 módulos → possível Bug O (outro campo ausente ou outro módulo com lógica diferente)
