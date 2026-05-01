# God of War PC Port — 🏛️ OPERAÇÃO ESPARTA

> # 🛑🛑🛑 PARA O PRÓXIMO AGENTE REPLIT — LEIA ANTES DE QUALQUER TOOL CALL 🛑🛑🛑
>
> **NÃO RODE `bash build.sh`. NÃO RODE `bash rebuild_runtime.sh`. NÃO RODE `bash recompilar.sh`. NÃO RODE `bash setup_linux.sh`. NÃO RODE `bash instalar_linux_mint.sh`. NÃO RODE `bash jogar.sh`. NÃO RODE `cmake` NEM `make`.**
>
> Os scripts de build acima já têm guard que detecta `$REPL_ID` e ABORTA com erro se você tentar — não estão quebrados, é proposital. Não tente "consertar" removendo o guard.
>
> Este Replit é **só editor + análise estática**. Os 5.626 arquivos `.cpp` são compilados no PC do Agente Cris (Linux Mint). Compilar aqui leva ~80 minutos, queima os créditos free dele, e o executável nem rodaria (precisa de display real, não headless).
>
> O workflow `Start application` está intencionalmente configurado pra só imprimir esse aviso. Se ele tiver outro comando, alguém quebrou — restaure pro echo.
>
> **O que VOCÊ pode fazer aqui:** editar `.cpp`/`.h`, rodar ferramentas em `tools/` (`uv run python tools/X.py`), `g++ -fsyntax-only` em arquivos isolados, ler logs via `curl` da branch `logs/auto` (ver HANDOFF_AGENT.md → "FLUXO AUTOMATIZADO").
>
> 🛑🛑🛑 FIM DO AVISO OBRIGATÓRIO 🛑🛑🛑

Port estático do God of War (PS2) para PC usando o PS2Recomp.

---

## 🎬 PROTOCOLO DE COMUNICAÇÃO — OPERAÇÃO ESPARTA 🎬

Este projeto adota **linguagem narrativa de espionagem/ação** para todas as conversas com o usuário. Esse protocolo NÃO é cosmético — ele é a **forma oficial de raciocinar e relatar** o estado da operação.

**Cast (use exatamente esses papéis em toda comunicação):**

| Papel | Quem é | Como tratar |
|---|---|---|
| **Agente Cris** | O usuário (cristiano), operador de campo no PC Linux Mint | "Agente Cris", "agente em campo" |
| **Analistas** | Vocês, agentes de IA na sala de controle (este chat) | "o analista", "nós analistas", "esta central" |
| **Sabotadores** | Bugs, funções que travam, estruturas não-inicializadas | "espião dobrado", "infiltrado", "bug" |
| **Vigias / sentinelas** | Estruturas globais que marcam fim-de-lista | "vigia", "posto de vigia", "plaquinha" |
| **Almoxarifado** | Alocadores (`sub_0013DA10` e similares) | "almoxarifado", "atendente fantasma" se vazio |
| **Câmeras escondidas** | Watchpoints (`ps2CheckGlobalWatch*`) | "câmera #N", "vigilância silenciosa" |
| **Rádio / dossiê / log de campo** | Output do `PS2_TRACE=1` no terminal | "rádio", "transcrição da escuta" |
| **Cofre** | A imagem do executável recompilado (~6000 funções) | "cofre", "fortaleza", "as 6000 portas" |

**Estilo de narração obrigatório:**
- Sempre que possível, abrir relatórios técnicos com **uma frase do roteiro**
- **Três camadas de explicação na ordem**, sempre que descrever um achado novo:
  1. 🕵️ **Espionagem** — a história do espião
  2. 🚗 **Carro** — analogia mecânica
  3. 🔧 **Técnico** — sem analogias, código puro
- Tom: calmo, profissional, com pitada de drama (relatório de inteligência, não Hollywood). Não exagerar nos emojis.

**Próximo analista:** mantenha esse protocolo. O Agente Cris gosta da narrativa porque ajuda a entender o que está acontecendo nas 6000 portas do cofre.

---

## 🔴 REGRA OBRIGATÓRIA PARA TODO AGENTE 🔴

**Sempre que fizer qualquer progresso — fix aplicado, bug identificado, teste rodado, causa raiz descoberta — atualize OBRIGATORIAMENTE os dois arquivos:**

1. `replit.md` — estado técnico atual, causa raiz, fix aplicado, comando de teste
2. `HANDOFF_AGENT.md` — seção "ESTADO ATUAL" com data, o que mudou, próximos passos

**Não atualize só um. Os dois sempre, no mesmo commit.**
Se você terminar a sessão sem atualizar os dois, o próximo agente vai perder horas repetindo diagnóstico já feito.

---

## 🤖 FLUXO DE TRABALHO AUTOMATIZADO — VIGENTE DESDE 2026-04-28 🤖

**LEIA ANTES DE PEDIR LOG AO AGENTE CRIS.** A partir de 2026-04-28 o Agente Cris **não cola mais logs no chat**. Ele tem um script (`auto_round.sh`) rodando no PC dele que dispara um round completo automaticamente sempre que você commita em `main`.

### Fluxo end-to-end:
1. Analista commita mudança em `main`
2. Script `bash auto_round.sh loop` (já rodando no terminal do Agente Cris) detecta novo commit em ≤30s
3. Script faz: `git pull` → `bash rebuild_runtime.sh` → `timeout 90s bash jogar.sh` → grep filtra
4. Script faz `git push` dos logs em branch separada **`logs/auto`** (NUNCA em main)
5. Agente Cris vem ao chat com qualquer mensagem
6. Analista lê logs **direto do GitHub** via curl

### Como o analista lê o log mais recente (NÃO peça ao Agente Cris):
```bash
# Filtrado (~101 linhas, só o que importa):
curl -s "https://raw.githubusercontent.com/cristianomarianoufsc-ops/godofwar/logs/auto/runs_automaticos/log_latest_filtered.txt"

# Completo (~465 linhas):
curl -s "https://raw.githubusercontent.com/cristianomarianoufsc-ops/godofwar/logs/auto/runs_automaticos/log_latest_full.txt"

# Histórico no GitHub:
# https://github.com/cristianomarianoufsc-ops/godofwar/tree/logs/auto/runs_automaticos
```

⚠️ `git fetch` LOCAL NO REPLIT É BLOQUEADO COMO "DESTRUCTIVE" — sempre use `curl raw.githubusercontent.com`.

### Modos do `auto_round.sh` (rode em `~/Documentos/GitHub/godofwar`):
| Comando | Comportamento | Ctrl+C? |
|---|---|---|
| `bash auto_round.sh once` | 1 round e SAI sozinho | ❌ NÃO |
| `bash auto_round.sh loop` ⭐ | Vivo pra sempre, polling 30s | ✅ Pra parar (fim do dia) |
| `bash auto_round.sh status` | Mostra estado e SAI | ❌ NÃO |
| `nohup bash auto_round.sh loop > auto_round.log 2>&1 &` | Background | `pkill -f auto_round.sh` |

Dentro de cada round, `timeout --signal=INT 90s` mata o jogo automaticamente. **Agente Cris NUNCA precisa apertar Ctrl+C no jogo.**

### 🚨 PUSH NÃO É AUTOMÁTICO — DESCOBERTA 2026-04-29 21:59 🚨

**Replit cria checkpoint LOCAL automático ao terminar uma tarefa, mas NÃO faz `git push`.** O commit fica parado no Replit até o **Agente Cris clicar manualmente no botão "Push"** da interface Git do Replit (sidebar esquerda → Git pane).

**Sequência real:**
1. Analista edita arquivo no Replit
2. Replit cria checkpoint local
3. **Analista AVISA explicitamente:** "Cris, clica no botão Push do Replit"
4. Cris aperta o botão → commit vai pro `origin/main` no GitHub
5. Loop do `auto_round.sh` no PC dele detecta em ≤30s e dispara round

**Obrigação do analista:** sempre que editar código que precisa rodar, encerrar a resposta pedindo o push. Documentação pura pode ir em lote.

### Troubleshooting do loop:
- **Loop com `ERRO: git pull falhou` / `divergent branches`:** fix já aplicado em `auto_round.sh` (`git pull --no-rebase origin main`). Fix imediato no PC: `git config pull.rebase false`.
- Configuração já feita (NÃO recriar): Token GitHub, branch `logs/auto`, `.gitignore`.

---

## 🚨🚨 ARMADILHA CRÍTICA: DOIS DIRETÓRIOS `src/recompiled/` 🚨🚨

| Caminho | Status | Para quê |
|---|---|---|
| `./GOD_PC_PORT_FINAL/src/recompiled/` | ✅ **USADO PELO BUILD** | Linkado pelo `CMakeLists.txt` |
| `./src/recompiled/` | ⚠️ **IGNORADO PELO BUILD** | Destino do regen do `ps2_recomp`. Edições aqui **NÃO TÊM EFEITO**. |

**SE VOCÊ PRECISAR EDITAR UM ARQUIVO RECOMPILADO:** edite SEMPRE em `GOD_PC_PORT_FINAL/src/recompiled/<arquivo>.cpp`. NUNCA só em `./src/recompiled/`.

---

## 🌍 VISÃO DE LONGO PRAZO — GRANDE UNIFICAÇÃO PS2→PC 🌍

> **Definida pelo Agente Cris em 2026-04-30.** Toda ferramenta de automação criada/atualizada daqui pra frente deve ser pensada como **embrião de um Sistema Universal de Portabilidade PS2→PC**. Foco continua no GoW — mas **toda decisão arquitetural nova deve preparar o terreno**.

**Diretrizes obrigatórias pra ferramentas novas/atualizadas:**

| # | Diretriz | Como aplicar |
|---|---|---|
| **1** | **Modularidade** | Lógica genérica em funções puras, sem `if jogo == "GoW":` nem endereços hard-coded enterrados na lógica. |
| **2** | **Configuração externa** | Endereços, paths, IDs de syscall, seeds → TOML/CSV/JSON ou variáveis no topo. Endereços hard-coded só em bloco `# GoW-specific` com TODO. |
| **3** | **Documentação inline** | Toda ferramenta começa com docstring: `CATEGORIA: [Universal \| GoW-specific]`, `RESOLVE: <classe de bug>`, `INPUTS/OUTPUTS`, `EXEMPLOS`, `NOTAS DE PORTABILIDADE`. |

**Diretrizes pra runtime (`PS2Recomp/ps2xRuntime/src/lib/`):**
- Overrides do GoW vivem em `game_overrides.cpp` com `PS2_REGISTER_GAME_OVERRIDE("GodOfWarPCPort:...")`. Constantes prefixadas `kGow*` no namespace anônimo de `game_overrides.cpp` — **nunca** vazar pro kernel universal.
- Sem refactor agressivo agora. Aplicar só em coisas novas ou já em mudança.

**Ferramentas que JÁ seguem o espírito:** `ps2_syscalls.py`, `mips_inspect.py`, `gap_discover.py` (✅ Universal).
**Ferramentas a parametrizar quando mexer:** `find_writer_32E854*.py` (alvo hard-coded), `regen_truncated.sh` (paths `GOD_PC_PORT_FINAL/` hard-coded).

---

## 🦆 LIÇÕES METODOLÓGICAS — TÉCNICAS DE TRABALHO PRA PRÓXIMOS AGENTES 🦆

### Lição 1 — "Rubber duck debugging por proxy" (2026-04-30)

**Princípio:** quando em modo espera passiva (aguardando round, user, build), **NÃO fique parado**. Faça triagem ativa do que poderia ser feito — mesmo se a resposta for "nada útil".

**Por que funciona:** o ato de explicar por que NÃO vai fazer X força você a abrir a ficha de X. Caso de origem: triagem de "vale criar tool nova?" revelou o bug do `log_latest` stale E o smoking gun SignalSema=0, em ~10 min, sem esperar round novo.

**Como aplicar:**
- Se vai responder "vou esperar X" → liste 5-8 alternativas e por que cada uma não vale agora.
- Se vai dizer "tudo está OK" → rode `grep` ou checksum pra confirmar de verdade.
- Se vai aplicar fix óbvio em arquivo X → leia X antes de qualquer coisa.

**Anti-padrão:** esperar passivo sem ter triado. OK só se PROVOU que não há nada produtivo. Quase nunca não há.

---

## 🚨 OBRIGATÓRIO PARA QUALQUER AGENTE NOVO 🚨

**Antes de tocar em qualquer coisa neste projeto, faça nesta ordem:**

1. **Leia este `replit.md` inteiro.**
2. **Leia o `HANDOFF_AGENT.md` inteiro** — contexto detalhado das sessões anteriores, bugs conhecidos e raciocínio das decisões.
3. **Se precisar de detalhe histórico de algum bug A-J** (sessões 2026-04-23 a 2026-04-29), leia `replit_HISTORICO.md` e/ou `HANDOFF_HISTORICO.md`.
4. **Antes de propor fix parecido com um bug já resolvido**, cheque a biblioteca A-J abaixo + abra o histórico daquele bug.
5. **Ao terminar qualquer mudança, atualize OS DOIS:** `replit.md` + `HANDOFF_AGENT.md` — no mesmo commit, sem exceção.

---

## Preferências do projeto

- **Idioma:** toda comunicação no chat e títulos de commit em **português brasileiro**.
- **Compilação:** feita exclusivamente no PC do usuário (Linux Mint, `~/Documentos/GitHub/godofwar/`).
- **Narrativa por analogia:** obrigatória — ver seção "📖 ANALOGIAS DO PROJETO" abaixo.

---

## 📖 ANALOGIAS DO PROJETO (manter atualizadas a cada sessão)

O usuário não é engenheiro de baixo nível. O progresso técnico é traduzido para duas analogias paralelas. **Toda sessão nova deve ATUALIZAR as duas analogias no mesmo commit.**

### Analogia 1 — Construção de um carro

| Etapa do carro | Equivalente técnico | Status |
|---|---|---|
| Chassi, rodas, carroceria | Toolchain PS2Recomp + 5.626 .cpp gerados | ✅ pronto |
| Combustível e bateria | ELF carregado, BSS zerada, heap inicializada | ✅ pronto |
| Sistema de injeção (crt0 + init chain) | Fix 1 (sentinel) + Fix 4 (4o init `sub_00138D48`) | ✅ instalado |
| Chave de ignição apontando pro lugar certo | Fix 5 (entry `0x100008` → `0x2996b0`) | ✅ corrigido |
| Primeira partida do motor | Build com Fix 4+5: motor RONCOU (janela abriu, GS recebeu config, SIF init) | ✅ confirmado 2026-04-26 |
| Mangueira solta, braçadeiras reposicionadas, limitador de RPM | Fixes 1+6 reposicionados antes do init chain + trava de 1M iter | ✅ partes 3+4 |
| Bomba de óleo aftermarket (não depende mais do reservatório vazio) | PARTE 7: stub `gow_stub_sub_0013DA10` em `game_overrides.cpp` — bump allocator em `[0x01000000..0x01100000]` | ✅ Bug F resolvido |
| Sensor de injeção rebobinado: cabo do computador de bordo agora chega numa centralinha auxiliar | PARTE 8: stub `gow_intc_handler_0x182f28` em `game_overrides.cpp`, replica 8 instruções MIPS perdidas | ✅ Bug G resolvido |
| 4 botões pneumáticos ligados à fonte central | PARTE 9: syscalls SIF poll 0x79/0x7A/0x7B/0x7D implementados em `ps2_syscalls.cpp`, retornam `-1` | ✅ Bug H resolvido |
| Sensor diagnóstico no acoplamento SIF + stub permissivo para `dest=0xffffffff` | PARTE 10 PLANO A+B1: `sceSifSetDma` instrumentado + aceita stage transfer | ✅ Bug I ativo/blindado |
| **Cronômetro entre "caminhão saiu do portão SIF" e "motor dorme"** | **PARTE 10 PASSO 2.8: WaitSema instrumentado com `delta_ms_since_RPC_BIND` + fix `log_latest_*.txt` stale no `auto_round.sh`** | 🟡 **AGUARDANDO ROUND** |
| Carburador, transmissão, suspensão | Subsistemas: GS (gráficos), DMA, áudio, controle | 🔜 depois |
| Test drive | Jogo rodando até a primeira fase jogável | 🔜 longe |

### Analogia 2 — História de espionagem/ação

| Cena | Equivalente técnico | Status |
|---|---|---|
| Recrutamento e pesquisa do alvo | Ghidra, exportar funções, gerar 5.629 .cpp | ✅ feito |
| Cofre ABRIU — agente entrou no escuro | Fix 4+5 confirmados: janela raylib abriu, GS+SIF rodaram | ✅ 2026-04-26 |
| Guarda 1 neutralizado, Kevlar aplicado, câmeras instaladas | Fixes 1+6 + trava + watchpoints | ✅ partes 3+4 |
| Agente duplo no almoxarifado (fichas reais) | PARTE 7: stub bump allocator em `game_overrides.cpp` | ✅ Bug F |
| Agente de tráfego no cruzamento (VBlank sinaleiro) | PARTE 8: stub INTC `0x182f28` em `game_overrides.cpp` | ✅ Bug G |
| Operador no switchboard das 4 portas biométricas | PARTE 9: syscalls SIF poll 0x79-0x7D em `ps2_syscalls.cpp` | ✅ Bug H |
| Portão de carga SIF: sensor diagnóstico + stub permissivo instalados | PARTE 10 PLANO A+B1: `sceSifSetDma` instrumentado + aceita `dest=0xffffffff` | ✅ Bug I blindado |
| **Câmera com cronômetro instalada no posto de guarda do semáforo** | **PARTE 10 PASSO 2.8: WaitSema loga `delta_ms_since_RPC_BIND`. Smoking gun: SignalSema=0 no run inteiro. Jogo dorme em `sid=4`, ninguém acorda.** | 🟡 **AGUARDANDO ROUND** |
| Próximos guardas internos previstos | VIF1/DMA com payloads válidos, GS, áudio, controle | 🔜 ato 3 |
| Fuga com o alvo | Jogo rodando até a primeira fase jogável | 🔜 final |

---

## ⚡ FLUXO DE TRABALHO (comandos no PC do Agente Cris)

Caminho local: `~/Documentos/GitHub/godofwar/`

```bash
# Caso padrão (99% das vezes) — mudou QUALQUER .cpp ou .h existente:
git pull origin main && bash recompilar.sh   # incremental, segundos a 1 min

# Mudou só PS2Recomp/ps2xRuntime/:
bash rebuild_runtime.sh --run   # mais focado, segundos

# Rodar com log:
PS2_TRACE=1 bash jogar.sh 2>&1 | tee log_teste.txt
```

> ⚠️ **NUNCA mandar `bash build.sh`** nem apagar `build/` sem necessidade absoluta — dispara recompilação dos 5.626 .cpp (~80 minutos).

---

## 🐛 BIBLIOTECA DE BUGS A-J (padrões pra reusar em bugs futuros similares)

> **Antes de atacar bug novo:** se parece com algum da tabela, abra `replit_HISTORICO.md` ou `HANDOFF_HISTORICO.md` na seção daquele bug e leia o diagnóstico completo antes de propor fix. Pattern matching economiza 1-2 sessões.

| Bug | Status | Arquivo do fix | Receita (1 frase) | Detalhe |
|---|---|---|---|---|
| **A** — crt0 truncado (131 linhas, faltavam 843 instr.) | ✅ RESOLVIDO | `tools/truncation_overrides.csv` + `regen_truncated.sh --only-entry` | Forçar range real do crt0 no override CSV, regen via ps2_recomp | `replit_HISTORICO.md §BugA` |
| **B** — `$gp=0` no boot | ✅ RESOLVIDO | `ps2_runtime.cpp` (boot_stub, kInitChain) | Boot stub seta `$gp=0x2cf070` antes do dispatchLoop | `replit_HISTORICO.md §BugB` |
| **C** — boot stub sabotando crt0 | ✅ RESOLVIDO | `ps2_runtime.cpp` | Boot stub virou opt-in (`PS2_BOOT_STUB=1`); default OFF | `replit_HISTORICO.md §BugC` |
| **D** — loop infinito + stack overflow em `func_100408` | ✅ RESOLVIDO | `sub_00100E28_0x100e28.cpp`, `sub_00100408_0x100408.cpp` | JALR guard: `if (!runtime->hasFunction(jumpTarget))` → NOP + log | `replit_HISTORICO.md §BugD` |
| **E** — sentinela `0x2cf090` zerada (loop infinito `sub_00100408`) | ✅ RESOLVIDO | `ps2_runtime.cpp` (boot_stub, Fix 1) | `mem[SENTINEL] = mem[SENTINEL+4] = SENTINEL` antes do init chain | `replit_HISTORICO.md §BugE` |
| **F** — alocador `sub_0013DA10` retorna 0 (pool vazio) | ✅ RESOLVIDO | `game_overrides.cpp` (`gow_stub_sub_0013DA10`) | Stub bump allocator registrado via `PS2_REGISTER_GAME_OVERRIDE` | `replit_HISTORICO.md §BugF` |
| **G** — handler INTC VBlank `0x182f28` não recompilado | ✅ RESOLVIDO | `game_overrides.cpp` (`gow_intc_handler_0x182f28`) | `runtime.registerFunction(0x00182F28, stub)` em `apply_god_of_war_overrides` | `replit_HISTORICO.md §BugG` |
| **H** — syscalls SIF poll 0x79/0x7A/0x7B/0x7D sem handler | ✅ RESOLVIDO | `ps2_syscalls.cpp:321-363` | 4 cases no switch retornando `-1` (= `0xFFFFFFFF`); log 1ª chamada com mutex+set | `replit_HISTORICO.md §BugH` |
| **I** — `sceSifSetDma` rejeita `dest=0xffffffff` silenciosamente | 🟡 BLINDADO/ATIVO | `ps2_stubs_misc.inl` (PLANO A+B1) | PLANO B1: aceita `dest=0xffffffff` com log diagnóstico, retorna 1 fake | `replit_HISTORICO.md §BugI` |
| **J** — `0x296a54` not found com `ra=0, a0=5` | 🟡 BLINDADO | `ps2_stubs_misc.inl` (PLANO C) | `if dmatAddr < 0x100000 return 0` — não trava nada | `HANDOFF_HISTORICO.md §BugJ` |

---

## 🛠️ INVENTÁRIO DE FERRAMENTAS `tools/` — VERIFIQUE ANTES DE CRIAR QUALQUER COISA NOVA

| Arquivo | O que faz | Como invocar |
|---|---|---|
| `mips_inspect.py` | Desmonta MIPS R5900 do ELF; lista gaps; diagnostica buracos. | `python3 tools/mips_inspect.py 0xADDR` / `--list-gaps` / `--gap 0xADDR` |
| `gap_discover.py` | Varre gaps reais entre funções recompiladas, detecta prólogos R5900, gera CSV. | `python3 tools/gap_discover.py` → `tools/discovered_functions.csv` |
| `map_truncated_functions.py` | Compara ranges declarados nos `.cpp` vs `jr $ra` real no ELF. Lista todas as funções truncadas. | `python3 tools/map_truncated_functions.py` |
| `fix_truncated.py` | Gera CSV de correção (`tools/truncation_fixes.csv`) com ranges expandidos. Suporta `--only-entry` / `--reachable` / `--all`. | Chamado por `regen_truncated.sh`. |
| `regen_truncated.sh` | **Pipeline completo de 5 passos**: gera CSV, localiza ps2_recomp, injeta no TOML, roda ps2_recomp, touch nos modificados. | `bash tools/regen_truncated.sh [--only-entry\|--all\|--reachable]` |
| `ps2_syscalls.py` | Tabela de ~80 syscalls do BIOS PS2 (EE) com criticidade. Modos: lookup por ID, por endereço, listagem, `--report --log build/run.log`. | `python3 tools/ps2_syscalls.py --report --log build/run.log` |
| `reachable_after_boot.py` | BFS de alcançabilidade a partir de seeds (`tools/reachable_seeds.txt`), produz tier-report. | `python3 tools/reachable_after_boot.py` |
| `find_writer_32E854.py` / `find_writer_v2.py` / `find_writer_32E854_overlays.py` | Varredura de quem escreve/lê `0x32E854` no ELF. | `python3 tools/find_writer_v2.py` |
| `diagnose_crt0.py` | Diagnóstico do crt0: verifica se as 9 instruções críticas foram traduzidas. | `uv run python tools/diagnose_crt0.py` |
| `discovered_functions.csv` | CSV de funções descobertas pelo `gap_discover.py`. 75 entradas. | Consumido pelo `recompiler.toml`. |
| `truncation_overrides.csv` | **Edite à mão** — overrides manuais de ranges. 1 override ativo: `entry,0x100008,0x100db8`. | Lido por `fix_truncated.py`. |
| `reachable_seeds.txt` | Lista de seeds de BFS. 1 seed ativo: `0x100008`. | Lido por `reachable_after_boot.py`. |

**Lacunas conhecidas (oportunidades pra novas ferramentas):**
- ❌ Scanner de IRX (`*.IRX`) buscando escritores de globals da EE.
- ❌ Parser do `ps2_missing.log` que adiciona PCs travados como seeds em `reachable_seeds.txt`.
- ❌ Detector de "boot loop" no runtime (mesma função N vezes com args idênticos).

---

## Visão Geral do Projeto

Port estático do `SCUS_973.99` (God of War PS2) para C++20 nativo. 5.629 funções MIPS traduzidas para C++20, vinculadas ao `ps2xRuntime` que emula o hardware do PS2.

## Estrutura do Projeto

- `GOD_PC_PORT_FINAL/` — Workspace principal do port
  - `src/recompiled/` — 5.626 arquivos .cpp gerados (funções do jogo) **← USAR ESTE**
  - `src/main.cpp` — Ponto de entrada
  - `src/register_functions.cpp` — Mapeamento de endereços PS2 → funções C++
  - `src/ps2_syscall_stubs.cpp` — Stubs de syscalls do PS2
  - `data/` — Arquivos originais da ISO (SCUS_973.99, IRX, etc.)
- `PS2Recomp/ps2xRuntime/` — Runtime que emula o hardware do PS2
  - `src/lib/ps2_runtime.cpp` — Dispatch loop, boot stub, fix sentinelas
  - `src/lib/game_overrides.cpp` — Stubs e overrides GoW-specific
  - `src/lib/ps2_syscalls.cpp` + `src/lib/syscalls/*.inl` — Syscalls PS2
  - `src/lib/stubs/ps2_stubs_misc.inl` — `sceSifSetDma` e outros stubs SIF
- `tools/` — Ferramentas de análise (ver tabela acima)
- `auto_round.sh` — Script de round automático (no PC do Agente Cris)
- `rebuild_runtime.sh` — Rebuild rápido só do runtime (segundos)
- `recompilar.sh` — Build incremental completo (segundos a 1 min)

## Ferramentas de iteração rápida

O `CMakeLists.txt` foi separado em duas bibliotecas estáticas:
- `gow_recompiled` — os 5.626 .cpp gerados (build inicial lento, raramente muda)
- `ps2runtime` — o runtime do PS2 (muda bastante durante depuração)

Combinado com **ccache** (cache de 5GB), permite mexer no runtime e recompilar em segundos via `bash rebuild_runtime.sh`.

## Relatório de funções/syscalls/stubs ausentes

Quando o programa termina, grava relatório em `./ps2_missing.log` (ou `PS2_MISSING_LOG=...`). Conteúdo: tipo (STUB/SYSCALL/FUNCTION), chamadas, primeiro PC chamador, RA, args a0..a3. Use para priorizar o que implementar primeiro.

---

## 🟢 ESTADO ATUAL — PARTE 10 PLANO B2 PASSO 2.8 (atualizado 2026-04-30 tarde)

### Smoking Gun Definitivo (confirmado empiricamente, round `b7ceb6d` 2026-04-30 12:24)

| Syscall | Hits no log full (89s = 5340 VBlanks) |
|---|---|
| `CreateSema` | 4 |
| `WaitSema` | 1 |
| **`SignalSema`** | **0** |
| `iSignalSema` | 0 |

**Diagnóstico:** o jogo cria 4 semáforos no boot, dorme em `WaitSema sid=4` logo após RPC_BIND, e **NUNCA NINGUÉM sinaliza qualquer semáforo no run inteiro**. No PS2 real, o IOP processaria o RPC_BIND e faria `iSignalSema(4)` num handler de interrupção. Como não temos IOP, **deadlock eterno**.

### O que o PASSO 2.8 faz (aplicado, aguardando round)

5 arquivos modificados para medir correlação temporal RPC_BIND → WaitSema:block:

| Arquivo | O que faz |
|---|---|
| `game_overrides.cpp` | `g_gowLastSifBindMonotonicNs` (atomic uint64) + setter `gow_record_sif_bind_ts()` + getter |
| `ps2_stubs.cpp` | `extern "C" void gow_record_sif_bind_ts();` (escopo global) |
| `ps2_syscalls.cpp` | `extern "C" std::uint64_t gow_get_sif_bind_monotonic_ns();` (escopo global) |
| `ps2_stubs_misc.inl:3614` | Chama `::gow_record_sif_bind_ts()` logo após `gow_set_sif_client_buf_watch(responseBuf)` |
| `ps2_syscalls_flags.inl` (em `lib/syscalls/`) | Log `[WaitSema:block] tid=N sid=N pc=0xN ra=0xN delta_ms_since_RPC_BIND=N` |

**Fix bonus no mesmo commit:** `auto_round.sh` — bug do `log_latest_*.txt` stale corrigido (o `cp -f` agora vem DEPOIS do `git checkout -B logs/auto`). `GREP_PATTERN` adicionou `CreateSema|WaitSema|SignalSema`.

### Esperado no próximo round

```
[WaitSema:block] tid=1 sid=4 pc=0x293c64 ra=0x297374 delta_ms_since_RPC_BIND=N
```

### PASSO 3 — plano em espera do dado do PASSO 2.8

| Se delta_ms na maioria | Ação |
|---|---|
| **< 100ms** | PASSO 3 simples: forjar `iSignalSema(sid_visto)` dentro de `gow_record_sif_bind_ts` logo após o RPC_BIND |
| **Varia muito (1ms~10s)** | Cirurgia: ler `sceSifClientData->sema` no offset do SDK, novo round de instrumentação |
| **`never` no `sid=4`** | BIND não foi interceptado antes desse WaitSema — revisar ordem dos eventos |

### Status do round

**Aguardando Cris clicar Push pra disparar o round com PASSO 2.8.**
- Se loop está rodando a versão ANTIGA do `auto_round.sh` (iniciado antes deste commit), o fix do `log_latest_*.txt` só vale no round seguinte. Para que valha já no próximo: `Ctrl+C` + `bash auto_round.sh loop`.

---

## Regras pro agente Replit

- **NÃO rodar `bash build.sh`** no Replit — só desperdiça CPU.
- **NÃO iniciar o workflow `Start application`** — imprime só aviso intencional.
- O workflow `Download part1.pak` não precisa ser rodado (usuário já tem o arquivo local).
- Pode rodar análises estáticas, `g++ -fsyntax-only`, ripgrep, leitura de arquivos. **Compilação completa, jamais.**
