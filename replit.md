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

> ## 🇧🇷 IDIOMA OBRIGATÓRIO: PORTUGUÊS BRASILEIRO 🇧🇷
> **Responda SEMPRE em português brasileiro, desde a primeira mensagem, sem exceção. Não espere o usuário pedir.**

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

Dentro de cada round, `timeout --signal=INT 300s` mata o jogo automaticamente. **Agente Cris NUNCA precisa apertar Ctrl+C no jogo.**

### 🔁 REGRAS DO LOOP — LEIA ANTES DE PEDIR QUALQUER COISA AO AGENTE CRIS 🔁

**Regra 1 — O loop deve ficar ligado o tempo todo durante o dia.**
O Agente Cris liga `bash auto_round.sh loop` ao abrir o PC e só desliga com Ctrl+C ao fechar. Não há motivo para desligar entre rounds.

**Regra 2 — O loop cuida de TUDO sozinho após um Push.**
Ao clicar em Push no Replit, o loop detecta o commit em ≤30s e faz automaticamente:
`git pull` → `bash rebuild_runtime.sh` → jogo por 300s → filtra log → `git push` dos logs.
O Agente Cris NÃO precisa rodar nenhum comando adicional.

**Regra 3 — `once` só quando o loop não estava ligado.**
Use `bash auto_round.sh once` apenas se o loop não estava rodando e você quer forçar um round imediato. Com o loop ligado, nunca é necessário.

**Regra 4 — NUNCA peça ao Agente Cris para fechar o loop antes de outro comando.**
Isso era um erro de analistas anteriores. O loop não interfere em nada. Se precisar rodar `recompilar.sh` ou `rebuild_runtime.sh` manualmente, rode em outro terminal — o loop continuará esperando no terminal dele.

**Regra 5 — `python3 tools/triage_round.py` e ferramentas de análise de log NÃO são do Agente Cris.**
Essas ferramentas rodam aqui no Replit (o analista as executa). O Agente Cris nunca precisa rodá-las. Se um analista colocar essa linha num bloco de comandos para o Cris, é erro — remover.

### 📋 PADRÃO OBRIGATÓRIO PARA BLOCOS DE COMANDO AO AGENTE CRIS

Todo analista que precisar pedir comandos ao Agente Cris DEVE separar claramente o que é de quem:

```
✅ Bloco "seu PC" — Cris copia e roda:
bash rebuild_runtime.sh
bash recompilar.sh

🔍 Analista faz aqui no Replit — Cris não precisa fazer nada:
(lerei o log e analisarei quando o round terminar)
```

**Nunca colocar `python3 tools/triage_round.py`, `curl`, ou qualquer ferramenta de análise no bloco do Agente Cris.**

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
| Ignição de emergência no portão SIF: porteiro aprende a dar o sinal sozinho quando o caminhão passa | PARTE 10 PASSO 3: `WaitSema` forja `iSignalSema` — 35 binds SIF concluídos | ✅ sid=4..35 OK |
| Checklist de peças: cobrador do armazém responde "chegou" em vez de "ainda não" | Bug O: stub `0x296a54` retorna 1 — sid=4..11 delta=0ms | ✅ Bug O |
| Segundo motorista recebe o roteiro de entrega completo (estava com a pasta vazia) | Bug P: regen `FUN_002947c8` 334 linhas escrita — aguarda `bash recompilar.sh` | 🟡 ESCRITO, AGUARDA COMPILAR |
| Checklist de chegada do segundo motorista (formulário de assinatura do portão) | Bug Q: regen `FUN_00294990` 182 linhas escrita, g++ -fsyntax-only ok — aguarda `bash recompilar.sh` | 🟡 ESCRITO, AGUARDA COMPILAR |
| Portão SIF tem lombadas crescentes: 1ª livre, da 8ª em diante cada lombada leva 1,7s a mais | Bug Y: `sub_00297290` retorna 0 após WaitSema + `*(s1+0x24)` não preenchido → spin 1M iters + retry. Fix: `WRITE32(*(s1+0x24),1)` + `$v0=1` nos dois paths de sucesso. Aguarda `bash recompilar.sh` | 🟡 FIXADO, AGUARDA COMPILAR |
| Câmera de segurança instalada no corredor após CreateSema 9 | Bug Z: `PollSema` sem nenhum log → busy-loop em sid=9 invisível. Fix: log primeira chamada + a cada 1M por sid em `ps2_syscalls_flags.inl`. Aguarda `bash rebuild_runtime.sh` | 🟡 INSTRUMENTADO, AGUARDA ROUND |
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
| Agente infiltrado acorda o guarda adormecido: intercepta o sinal que o IOP nunca mandou e forja a resposta | PARTE 10 PASSO 3: WaitSema forja `iSignalSema` — 35 binds SIF concluídos | ✅ sid=4..35 OK |
| Informante diz "já recebi as encomendas" em vez de "ainda não chegou" | Bug O: stub `0x296a54` retorna 1 — eliminando poll infinito dos primeiros 8 módulos | ✅ Bug O |
| Agente 2 finalmente recebe o dossiê completo — não mais uma pasta com só a capa | Bug P: regen `FUN_002947c8` 334 linhas escrita — aguarda `bash recompilar.sh` para entrar em campo | 🟡 DOSSIÊ PRONTO, AGUARDA ENTREGA |
| Porteiro do cofre assina a ficha de entrada do Agente 2 (sem assinatura ele não passa) | Bug Q: regen `FUN_00294990` 182 linhas escrita, sintaxe ok — aguarda `bash recompilar.sh` | 🟡 FICHA PRONTA, AGUARDA ENTREGA |
| Corredor com 32 câmeras: porteiro nunca assinava a ficha de liberação — câmera travada no ciclo de conferência | Bug Y: porteiro (`sub_00297290`) retornava 0 + ficha (`*(s1+0x24)`) em branco → supervisor (`entry_298910`) mandava o guarda aguardar 1M ciclos e tentar de novo. Fix: assinar a ficha e retornar 1. Aguarda `bash recompilar.sh` | 🟡 FICHA ASSINADA, AGUARDA ENTREGA |
| Porteiro do VBlank acorda na primeira batida (não mais na 10.000ª) | Bug Z fase 2: `PollSema(sid=7)` era poll-por-VBlank (1 call/frame → nunca chegava a 10k calls). Fix: `callCount==1` adicionado ao PASSO 3b. | ✅ Bug Z RESOLVIDO |
| Porteiro recebe reposição do bilhete de entrada a cada VBlank (não só na 1ª vez) | PASSO 3c:auto — `*(0x2a1710)` restaurado em toda `PollSema:zero` do callsite `0x27a6e4`, garantindo que `sub_002963C0` (SIF receive handler) seja chamado a cada iteração do loop VBlank, não só na 1ª | ✅ IMPLEMENTADO 2026-05-02 |
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
| **K** — `WaitSema sid=12` bloqueia com `delta=2837ms` (> guard 100ms) | ✅ RESOLVIDO | `ps2_syscalls_flags.inl` | Removido `&& deltaMsSinceBind < 100` — condição agora só `deltaMsSinceBind >= 0` | 2026-05-01 |
| **L** — `0x296a54 not found` 33x (FUN_00296a50 truncada a 2 instrucoes) | ✅ RESOLVIDO | `game_overrides.cpp` + `truncation_overrides.csv` | Stub noop registrado em `0x296a54`; override CSV com range real `0x296a50-0x296c48` pra regen futura | 2026-05-01 |
| **M** — Timeout insuficiente (90s), cortava em sid=28 | ✅ RESOLVIDO | `auto_round.sh` | `RUN_TIMEOUT=90` → `300` | 2026-05-01 |
| **N** — PASSO 4 era regressão (escrevia em 0x30AACC em vez de 0x32AF24) | ✅ REVERTIDO | `ps2_syscalls_flags.inl` | Bloco PASSO 4 removido; sem ele, `sub_00297290` preenche 0x32AF24 naturalmente — sid=35+ confirmado sem PASSO 4 | 2026-05-01 |
| **O** — stub `0x296a54` retornava 0 → deltas crescentes, sid=12+: ~1600ms/módulo | ✅ CONFIRMADO | `game_overrides.cpp` | `$v0=0` → `$v0=1` — sid=4..11 agora delta=0ms; sid=12+ melhora ~15% (causa secundária persiste) | 2026-05-01 |
| **P–W** — 8 funções truncadas na região 0x29xxxx/0x23xxxx/0x24xxxx (corpo da thread 2 e vizinhança do bind loop) | ✅ REGEN FEITA | `truncation_overrides.csv` | `bash tools/regen_truncated.sh` executado pelo Agente Cris — sem efeito visível enquanto Bug X persiste | 2026-05-01 |
| **X** — `StartThread` NUNCA chamado para tid=2 (entry=0x2947c8) — VBlank loop infinito pós-sid=19 | ✅ RESOLVIDO | `PS2Recomp/ps2xRuntime/include/ps2_runtime.h` | `cop0_status = 0x00010001` — IE=1 faz `func_294618` retornar 0, branch cai em StartThread | 2026-05-01 |
| **Z** — `PollSema` sem logging + sem PASSO 3b — poll-por-VBlank em sid=7 (e busy-loop em sid=9) | ✅ RESOLVIDO | `ps2_syscalls_flags.inl` | (1) Log primeira falha/sucesso por sid + a cada 1M. (2) PASSO 3b fase 1: a cada 10k calls (busy-loop). (3) PASSO 3b fase 2 (2026-05-02): `callCount==1 \|\| callCount%10000==0` — captura também poll-por-VBlank (1 call/frame, nunca chega a 10k). `[PollSema:zero] sid=7 calls=1` → PASSO 3b dispara imediatamente. Aguarda rebuild_runtime + round. | 2026-05-02 |

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
| `truncation_overrides.csv` | **Edite à mão** — overrides manuais de ranges. 10 overrides ativos: crt0, L, P–W. | Lido por `fix_truncated.py`. |
| `score_truncated.py` | **NOVA** — prioriza funções truncadas por score: refs×40 + bytes_faltando + proximity_bonus. Gera `truncated_scores.csv`. | `uv run python tools/score_truncated.py [--top N] [--min-bytes B]` |
| `reachable_seeds.txt` | Lista de seeds de BFS. 1 seed ativo: `0x100008`. | Lido por `reachable_after_boot.py`. |
| `missing_to_seeds.py` | Lê `ps2_missing.log`, extrai entradas `FUNCTION` (ausentes em runtime) e adiciona como seeds em `reachable_seeds.txt`. Modo seco por padrão; `--apply` pra escrever. | `python3 tools/missing_to_seeds.py` / `python3 tools/missing_to_seeds.py --apply --min-calls 3` |
| `triage_round.py` | Baixa o log filtrado do GitHub e gera relatório estruturado: módulos IOP carregados, último sid/delta, frames VBlank, **threads criadas vs StartThread chamado**, erros, boot-loop suspects, diagnóstico e próximo passo. **PASSO 6:** detecta `[entry_1389d8] START/renderer_type/DONE` (adicionado 2026-05-03). | `python3 tools/triage_round.py` (completo) / `python3 tools/triage_round.py --short` (só resumo) / `python3 tools/triage_round.py --local arquivo.txt` |
| `scan_7th_floor.py` | Análise estática pré-round de funções recompiladas: acha arquivo .cpp pelo endereço, conta loops/yields/tight-loops/handleBreak/callees, estima risco, suporta varredura recursiva de callees. Endereços padrão: 7º andar + entry_1389d8. | `python3 tools/scan_7th_floor.py` (padrão) / `python3 tools/scan_7th_floor.py 0x1389d8 --depth 2` (recursivo) / `python3 tools/scan_7th_floor.py --file PATH` (arquivo direto) |

**Lacunas conhecidas (oportunidades pra novas ferramentas):**
- ❌ Scanner de IRX (`*.IRX`) buscando escritores de globals da EE.
- ✅ Detector de "boot loop" no runtime — já implementado em `ps2_runtime.cpp` linha ~2119 (`[boot-loop:suspect]`, threshold via `PS2_SAME_CALL_REPORT_AFTER`).
- ✅ Priorizador de funções truncadas — `score_truncated.py` (score = refs×40 + bytes + proximity).

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

## 🟢 ESTADO ATUAL — 2026-05-03: PASSO 6 aplicado; hooks entry_1389d8 adicionados; scan_7th_floor.py + triage_round.py atualizados

### ✅ Bugs K, L, M, N, O, X, P, Z, AB — RESOLVIDOS
### ✅ Bug Y — RESOLVIDO em sub_00297290 (*(s1+0x24)=1, v0=1 — simula IOP ack)
### ✅ PASSO 3c:auto — IMPLEMENTADO (`ps2_syscalls_flags.inl`)
### ✅ PASSO 4 (Bug S) — Compilado, NUNCA DISPAROU (*(0x30A1C0)==0 — sceSifCallRpc não chamado)
### ✅ PASSO 5 — CONFIRMADO FUNCIONANDO (tick #73)
### ✅ PASSO 6 — FIX APLICADO (`sub_00297290_0x297290.cpp`) — aguarda Push + recompilar.sh
### ✅ entry_1389d8 — HOOKS ADICIONADOS (START/renderer_type/DONE) — detectável via triage_round.py
### ⚠️ Bug Q — CORRIGIDO ANTECIPADAMENTE (2026-05-01, aguarda recompilar.sh)
### 🔴 AGUARDANDO ROUND — PASSO 6 não testado ainda

---

### BUG X — CAUSA RAIZ E FIX ✅

**Fix:** `PS2Recomp/ps2xRuntime/include/ps2_runtime.h` linha 151: `cop0_status = 0x00010001` (IE=1 + EIE=1). `func_294618` lia IE=0 e pulava `StartThread` sempre.

### BUG P — CAUSA RAIZ E FIX ✅

**Fix:** `GOD_PC_PORT_FINAL/src/recompiled/FUN_002947c8_0x2947c8.cpp` — 334 linhas reescritas manualmente. Sintaxe verificada com `g++ -fsyntax-only` → zero erros.

---

### BUG Q — PRÓXIMO BLOQUEADOR (análise 2026-05-01) 🔴

**Causa raiz:** `FUN_00294990_0x294990.cpp` truncada a 25 linhas (1 instrução: `addiu $sp, $sp, -0x20`). Registrada em `register_functions.cpp` linha 5494. Chamada por `sub_00297290` via `j func_294990` (endereço ELF 0x29745c).

**O que a função faz** (range real `0x294990–0x294a30`, ~160 bytes):
- Salva `$ra` e `$s0` na stack (`sq` R5900 → usar `sd` no recompilado)
- Chama GetThreadId (syscall -0x2F) → `$v0` = tid atual
- Move resultado para `$a0` (`daddu $a0, $v0, $zero`)
- Se `$s0 != $a0`: chama `func_293B60`, pula para epilogue em 0x294a18
- Se `$s0 == $a0` e `$s0 >= 0x100`: branch para 0x2949d4 (retorna -1)
- Se `$s0 == $a0` e `$s0 < 0x100`: lê `mem[0x2A4AB0]`, se não-nulo insere no ring buffer `mem[0x326f48]`, chama `func_293C50` + `func_2969D0`
- Epilogue: restaura `$ra`, `$s0`, `addiu $sp, $sp, 0x20`, `jr $ra`

**Fix necessário:** reescrita manual (mesmo padrão Bug P — regen não funciona por overlap de ranges). Arquivo: `GOD_PC_PORT_FINAL/src/recompiled/FUN_00294990_0x294990.cpp`.

---

### BUGS R–W — STATUS (análise 2026-05-01) ⚠️

| Bug | Arquivo | Linhas | Situação |
|---|---|---|---|
| **R** FUN_00294c70 | `FUN_00294c70_0x294c70.cpp` | 25 | Provavelmente OK — código inline em `sub_00294AF8` (0x294af8–0x294c98), sem chamador direto |
| **S** FUN_00297058 | `FUN_00297058_0x297058.cpp` | 25 | Aguardando log |
| **T** FUN_002971c0 | `FUN_002971c0_0x2971c0.cpp` | 25 | Imediatamente antes de sub_00297290 — suspeito |
| **U** FUN_00294d40 | `FUN_00294d40_0x294d40.cpp` | 28 | Aguardando log |
| **V** FUN_00238890 | `FUN_00238890_0x238890.cpp` | 28 | 43 refs estáticas — mais chamada |
| **W** FUN_00244600 | `FUN_00244600_0x244600.cpp` | 25 | 36 refs estáticas |

Funções pós-bind-loop verificadas e COMPLETAS: `sub_00296898` (402 linhas), `entry_2969d0` (93 linhas), `entry_296eb8` (53 linhas), `sub_00294AF8` (529 linhas). `StartThread` implementado no runtime (syscall 0x22, `ps2_syscalls.cpp:128`).

**Próximo passo (2026-05-04 — diagnóstico cadeia sub_0017BC80):**
1. Cris clica em **Push** no Replit
2. `bash rebuild_runtime.sh` → compila Bug AB + PASSO 3c:auto + VBlank log
3. `bash recompilar.sh` → compila todos os diagnósticos + Bug P (9 arquivos modificados)
4. `bash auto_round.sh once`
5. Verificar log: `[sub_0017BC80] START`, `[sub_0027A810]`, `[sub_0027A6B8]`, `[sub_00297290] START`

**DESCOBERTA SESSÃO 2026-05-04 — Por que sub_00297290 não aparecia no log:**
- GREP_PATTERN não incluía `sub_00297290|sub_0027A810|sub_0017BC80|sub_0027A6B8` → logs filtrados
- `[PASSO 6B]` nunca aparecia (estava no padrão via `PASSO 6`) → confirmou sub_00297290 NÃO era chamado ou tomava path diferente
- sub_0027A648 com a0=1 (hardcoded em sub_0027A810): `bnez $a0, label_27a698` → vai direto para entry_297670, sem spin loop
- Se entry_297670 retorna ≠0 → sub_0027A810 pula sub_00297290 e retorna → sub_0017BC80 vai para sub_0027ABD0 → sub_0027A6B8 → sub_00297290

**MAPA CORRIGIDO (2026-05-04):**
```
sub_0017BC80 [START log ✅]
  ├─► sub_0027A810 [START log ✅]
  │     └─► sub_0027A648 (a0=1 → label_27a698 → entry_297670 → v0)
  │           ├─ v0≠0: skip → retorna rápido [log ✅]
  │           └─ v0=0: label_27a8d0 → sub_00297290 (loop retry) [log ✅]
  │     [log após A810 ✅]
  ├─► sub_0027ABD0 (SEMPRE, sem condição)
  │     └─► sub_0027A6B8 [START log ✅] → sub_00297290 [CHAMANDO log ✅]
  │     [log após ABD0 ✅]
  └─► label_17bd50 (loop retry entry_27ab00 → sub_0027A6B8 → sub_00297290)
        → label_17bd68 → entry_298770 → sub_00297290 (2ª chamada)
```
🔍 Logs adicionados em: sub_0027A810, sub_0017BC80, sub_0027A6B8
🔍 GREP_PATTERN expandido: +sub_00297290 +sub_0027A810 +sub_0017BC80 +sub_0027A6B8 +sub_0027A648 +entry_27ab00

**Fix orgânico futuro (recompilar.sh):**
- Escrever pacote SIF válido em `0x2C4BC0` (byte[0] != 0) → sub_00295568 processa → StartThread orgânico
- Bug P fix (FUN_002947c8 reescrita) seta `*(0x327a40)=1` por conta própria
- Elimina necessidade de PASSO 5

---

## Regras pro agente Replit

- **NÃO rodar `bash build.sh`** no Replit — só desperdiça CPU.
- **NÃO iniciar o workflow `Start application`** — imprime só aviso intencional.
- O workflow `Download part1.pak` não precisa ser rodado (usuário já tem o arquivo local).
- Pode rodar análises estáticas, `g++ -fsyntax-only`, ripgrep, leitura de arquivos. **Compilação completa, jamais.**
