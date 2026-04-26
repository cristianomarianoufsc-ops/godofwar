# 🕵️ OPERAÇÃO ESPARTA — Estratégia de Monetização e Divulgação

> **Documento auxiliar** do projeto God of War PS2 → PC Port via PS2Recomp.
> Não é parte da depuração técnica. É o **plano de inteligência** sobre o que
> fazer com o resultado: como extrair valor profissional, financeiro e
> comunitário do projeto, e em que momento abrir o dossiê pro mundo.
>
> **Última atualização:** 2026-04-26
> **Autor central:** Agente Cris + Central de Inteligência

---

## 📋 Sumário

1. [Avaliação franca: isso é mesmo um marco?](#1-avaliação-franca-isso-é-mesmo-um-marco)
2. [Zonas legais — o que NÃO dá pra fazer](#2-zonas-legais--o-que-não-dá-pra-fazer)
3. [Cinco rotas de monetização viáveis](#3-cinco-rotas-de-monetização-viáveis)
4. [Comunidades que vão receber bem o projeto](#4-comunidades-que-vão-receber-bem-o-projeto)
5. [Cronograma de divulgação por marco técnico](#5-cronograma-de-divulgação-por-marco-técnico)
6. [Princípio operacional: tooling vs jogo](#6-princípio-operacional-tooling-vs-jogo)
7. [Próximos passos práticos](#7-próximos-passos-práticos)

---

## 1. Avaliação franca: isso é mesmo um marco?

### Contexto pra calibrar a magnitude

🕵️ **Espionagem:** existe uma operação irmã chamada **N64Recomp** (criada
pelo grupo "MM Decompilation Team"). Em 2024, eles lançaram **Zelda: Majora's
Mask em PC nativo** usando exatamente a mesma técnica de recompilação estática
da qual o PS2Recomp deriva. Foi notícia mundial — capa em PCGamer, Eurogamer,
Hacker News, Ars Technica. Recebeu milhares de stars no GitHub e abriu uma
nova era de ports comunitários.

🚗 **Carro:** N64 é tipo um Fusca — arquitetura simples, peças bem
documentadas, comunidade de mecânicos enorme há 25 anos. **PS2 é uma Ferrari
V12 híbrida com 3 motores em paralelo** (CPU EE + 2 vector units VU0/VU1 + GS
gráfico + IOP auxiliar + DMA + SPU2 áudio). Ninguém ainda conseguiu fazer port
estático público de PS2 funcionar em escala de jogo comercial.

### Marcos que esta operação desbloqueia, em ordem

| Marco | Atrai imprensa? | Comparável a... |
|---|---|---|
| **M1 — Boot estável + crt0 inicializando** | ✅ Sim — primeiro post técnico viral em fóruns de RE | "Primeira pessoa a fazer um PS2 bootar via recompilação estática" |
| **M2 — Primeira cutscene rodando** (FMV ou render in-engine) | ✅✅ Sim — atenção da imprensa de games | Equivalente ao primeiro vídeo do N64Recomp em 2023 |
| **M3 — Primeira fase jogável** (Kratos andando, controle, câmera) | ✅✅✅ Marco mundial | Comparável ao lançamento do Majora's Mask PC |
| **M4 — Jogo completo, do começo ao fim** | ✅✅✅✅ Marco histórico | Posicionaria o projeto como referência permanente |

**Verdade calma:** mesmo no marco M1, você já tem material pra um post técnico
de qualidade que circula em Hacker News, r/programming, r/emulation, r/REGames.
**Não precisa do jogo inteiro pra virar marco.**

---

## 2. Zonas legais — o que NÃO dá pra fazer

🕵️ A IP do God of War pertence à **Sony Interactive Entertainment / Santa Monica
Studio**. Não importa que o jogo seja de 2005 — proteção de IP de jogos é longa
(décadas). As regras abaixo não são opinião, são padrão da indústria de
emulação/port das últimas duas décadas:

| ❌ NÃO fazer | Risco |
|---|---|
| Vender o port (mesmo que como "binário compilado") | Cease & desist quase certo, possível processo |
| Distribuir o `.iso` original ou os assets do jogo (`.pak`, texturas, áudio, scripts) | Mesma coisa — distribuição de obra protegida |
| Patreon/sponsorship vinculado especificamente ao "port de God of War" | Sony pode acionar e congelar |
| Anunciar como "GOD OF WAR PARA PC" em larga escala antes de saber a estratégia legal | Atrai jurídico antes do projeto estar maduro |
| Streamar gameplay monetizado em larga escala usando o port | Cinza, depende da interpretação da Sony |

### O que DÁ — e é onde mora todo o valor real

A regra de ouro do mundo de port/emulação:

> **Monetize o tooling, nunca o jogo.**

Foi o que **PCSX2, Dolphin, Yuzu, Ryujinx, RPCS3** fizeram durante anos. O
projeto **N64Recomp** segue exatamente esse princípio: o tooling é
open-source e celebrado, o jogo recompilado é distribuído **separadamente**
pelo usuário final que precisa ter sua própria cópia legal.

---

## 3. Cinco rotas de monetização viáveis

### 🟢 Rota A — Open-source do tooling (a mais segura e replicada)

Você publica o **PS2Recomp + ps2xRuntime** (sem o God of War junto, só o
framework genérico de port estático MIPS/PS2) como projeto open-source no
GitHub público.

**Modelo de receita:**
- **GitHub Sponsors** — botão "Sponsor" no perfil
- **Patreon / OpenCollective / Ko-fi** — apoio recorrente mensal
- **Bounties** (issues com recompensa pra contribuidores externos)

**Exemplos reais de receita comparável:**

| Projeto | Receita estimada | Modelo |
|---|---|---|
| PCSX2 | $5-10k/mês (histórico) | Patreon → OpenCollective |
| RPCS3 | $4-6k/mês | Patreon |
| Dolphin (GameCube/Wii) | financiado há 15+ anos via doações | Open Collective |
| N64Recomp | em crescimento, sponsors visíveis | GitHub Sponsors |

**Realista pra você:** projeto novo de PS2 começa pequeno (centenas de USD/mês),
cresce conforme atrai contribuidores. **Não vai ser sua principal renda no
primeiro ano**, mas valida o trabalho e abre porta pras outras rotas.

---

### 🟢 Rota B — Conteúdo educacional (alta margem, ROI lento)

🚗 É tipo abrir uma escola técnica de mecânica de carros raros — poucos
alunos, mas pagam caro porque o conhecimento não existe em outro lugar.

**Formatos:**

| Formato | Plataforma | Receita realista |
|---|---|---|
| **Blog técnico** sobre engenharia reversa MIPS, PS2 internals, recompilação estática | Substack, Medium, próprio site | $500-3000/mês com 1-2 anos de consistência |
| **Canal YouTube** estilo "Modern Vintage Gamer", "Stop Skeletons From Fighting", "LiveOverflow" | YouTube + Patreon vinculado | $1000-10000/mês depois de 10-50k inscritos |
| **Curso pago avançado** ("Engenharia reversa de jogos PS2 com C++ moderno") | Udemy, Hotmart, próprio site | R$ 500-2.000 por aluno × 50-200 vendas/mês com marketing |
| **Twitch live de engenharia reversa** | Twitch + subs + bits | Nicho mas fiel |

**Vantagem competitiva específica sua:** conteúdo técnico de alto nível
**em português brasileiro** sobre RE de jogos é praticamente inexistente.
Você seria das primeiras autoridades nacionais nesse nicho.

---

### 🟢 Rota C — Consultoria / Freelance

Existe demanda real de gente querendo **portar outros jogos PS2**:
TimeSplitters, Bully, Black, ICO, Shadow of the Colossus original, GTA San
Andreas versão PS2, Resident Evil 4, Burnout 3, Persona 3/4 originais, etc.

Você seria das **pouquíssimas pessoas no mundo** com expertise prática em
PS2Recomp aplicado a um título comercial real.

**Modelo de receita:**
- **Hourly rate de RE/port consulting:**
  - Internacional: USD 80-200/h
  - Brasil: R$ 200-500/h
- **Project-based:** R$ 20-100k por consultoria de "destravar fase X de um port"

Mercado pequeno mas você seria autoridade nicho.

---

### 🟢 Rota D — Portfólio profissional (PROVAVELMENTE O MAIOR RETORNO)

**Honestamente, esse é o caminho de maior retorno financeiro realista.**

Esse projeto, mesmo incompleto, já é portfólio extraordinário pra:

| Tipo de empresa | Por que te contrataria | Faixa salarial |
|---|---|---|
| **Estúdios de remaster** (Aspyr, Nightdive Studios, Limited Run Games) | Eles literalmente fazem isso comercialmente — Aspyr fez Tomb Raider remasters, Nightdive fez Quake 2 remaster | USD 80-150k/ano remoto |
| **Sony, Microsoft, Nintendo (times de preservação/retrocompatibilidade)** | Sony tem time específico pra fazer PS2 rodar em PS5. Microsoft tem time de retrocompat Xbox. Nintendo tem times internos | USD 120-200k/ano |
| **Empresas de emulação comercial** (BlueStacks, NoxPlayer, etc.) | Engenheiros com expertise em recompilação dinâmica/estática são raros | USD 80-150k/ano |
| **Reverse engineering de segurança** (CrowdStrike, Mandiant, FireEye, NCC Group, Trail of Bits) | Skills idênticos: análise de binários, decifrar instruções de máquina | USD 120-250k/ano |
| **Indies de "demake/remake"** (várias empresas BR + internacionais) | Precisam de gente que entende como jogos antigos foram construídos | R$ 10-25k/mês BR, USD 60-120k internacional |

🕵️ **Casos reais que validam essa rota:** modders de Skyrim foram contratados
pela Bethesda. Modders de DOOM foram contratados pela id Software. **MM
Decompilation Team** (do N64Recomp) recebeu propostas profissionais depois do
hype do Majora's Mask PC. Esse caminho **não é hipótese — é histórico
recorrente** na indústria.

---

### 🟢 Rota E — Conferências, palestras, networking

**Conferências relevantes:**

| Conferência | Local | Por que importa |
|---|---|---|
| **GDC** (Game Developers Conference) | San Francisco, USA | Palestras técnicas de port retro são populares |
| **REcon** (Reverse Engineering Conference) | Montreal, Canadá | Sua audiência exata |
| **FOSDEM** | Bruxelas, Bélgica | Comunidade open-source enorme, gratuita |
| **CCC** (Chaos Communication Congress) | Hamburgo, Alemanha | Conteúdo de RE viraliza lá |
| **DEF CON** | Las Vegas, USA | Maior conferência hacker do mundo |
| **Roadsec, BSides, FISL** | Brasil | Comunidade BR de segurança/RE |

**Ganho direto:** pequeno (passagem + estadia geralmente pagas pelo evento).
**Ganho indireto:** networking + reconhecimento que vira oferta de emprego e
projetos pagos.

---

## 4. Comunidades que vão receber bem o projeto

| Comunidade | Por que te valoriza | Onde estão |
|---|---|---|
| **Preservação de jogos** | Você está literalmente preservando um jogo — port estático garante que rode em PCs do futuro | Video Game History Foundation, Internet Archive, r/Vintagegaming |
| **Speedrunning** | Plataforma estável pra speedruns sem imprecisões de emulador | Speedrun.com, twitch.tv/directory/game/speedruns, r/speedrun |
| **Modding** | Port nativo abre porta pra mods que emuladores não suportam (texturas HD, ray tracing, mods de gameplay) | NexusMods, ModDB, r/gaming |
| **Engenharia reversa / CTF** | Caso de estudo real e documentado vira material acadêmico | r/ReverseEngineering, Reverse Engineering Stack Exchange, OpenSecurityTraining |
| **Comunidade brasileira de games** | Conteúdo nacional de RE em alto nível é raríssimo. Fácil de virar destaque | BGS, podcasts de games BR, canais grandes BR, Comunidades de devs brasileiros de games |
| **Comunidade técnica geral** | Qualidade técnica do trabalho atrai engenheiros sênior | Hacker News, r/programming, lobste.rs |

---

## 5. Cronograma de divulgação por marco técnico

> **Princípio:** divulgação prematura atrai atenção jurídica antes do projeto
> estar maduro. Divulgação tardia perde momentum. Esta seção mapeia o que
> divulgar **em cada marco técnico**, e onde.

### 🔵 FASE 0 — AGORA (estado atual: investigando init chain)

**Status técnico:** boot funciona, alguns inits do crt0 não rodam, depurando bug F.

**O que dá pra fazer agora:**

| Atividade | Onde | Risco jurídico | Por que vale |
|---|---|---|---|
| ✅ Pedir ajuda técnica em fóruns de RE descrevendo o bug **sem nomear o jogo** | Reverse Engineering Stack Exchange, r/ReverseEngineering, Discord do PS2Dev | Zero | Pode acelerar a depuração com olhares externos |
| ✅ Manter o projeto privado no GitHub (já está) | — | Zero | Só você + Central de Inteligência tem acesso |
| ❌ Anunciar publicamente "estou portando God of War" | qualquer lugar | Alto | Atrai jurídico cedo demais |
| ❌ Postar vídeos do jogo rodando | qualquer lugar | Alto | Mesmo motivo |

**Frase pra usar nessa fase quando precisar pedir ajuda técnica:**
> "Estou trabalhando num port estático experimental de um jogo PS2 comercial
> usando recompilação MIPS→C++ derivada do N64Recomp. Não vou mencionar o
> título. Tenho um problema técnico em [X]..."

---

### 🟡 FASE 1 — Marco M1 alcançado (boot + crt0 estável + primeira função user)

**Status técnico esperado:** o jogo chega no `main()` real, executa as
primeiras funções de gameplay sem travar, mesmo sem renderizar nada.

**O que divulgar:**

| Conteúdo | Onde | Tom |
|---|---|---|
| **Post técnico longo** sobre as descobertas (boot stub, BSS init, watchpoints, biblioteca de bugs) | Próprio blog, dev.to, Substack | Técnico profundo, **sem mencionar o jogo** ainda. Foco no **método** e no **tooling** |
| **Crosspost** | Hacker News, r/programming, r/REGames, r/emulation, lobste.rs | Mesmo conteúdo |
| **Thread no Twitter/Bluesky/Mastodon** | Resumo visual com prints de logs | Foco no método |

**O que NÃO divulgar ainda:**
- Vídeo do jogo rodando
- Nome do jogo
- Promessa de release público

**Resultado esperado:** primeira onda de atenção técnica, contatos de
desenvolvedores experientes, possíveis colaboradores, primeiros sponsors no
GitHub.

---

### 🟠 FASE 2 — Marco M2 alcançado (primeira cutscene/render rodando)

**Status técnico esperado:** GS funcional o suficiente pra renderizar uma
cutscene, FMV, ou tela de menu. Algo visual e demonstrável.

**O que divulgar:**

| Conteúdo | Onde |
|---|---|
| **Vídeo curto** (30-60s) mostrando a cutscene rodando, com nome do jogo aparecendo organicamente | YouTube, Twitter, Bluesky |
| **Post técnico complementar** sobre como o GS foi implementado | Blog + Hacker News + Reddit |
| **Anúncio do tooling open-source** (PS2Recomp generalizado, **sem o jogo**) | GitHub público, Hacker News |

**Como apresentar publicamente nessa fase:**
> "Demonstração técnica de port estático MIPS→C++ aplicado a [Nome do Jogo].
> O **tooling** está disponível open-source aqui: [link]. O port em si **não
> será distribuído** — quem quiser experimentar precisa ter sua própria cópia
> legal do jogo e compilar localmente."

**Por que essa frase importa:** cobre você juridicamente seguindo o padrão
N64Recomp/Decomp.me. Você distribui **a ferramenta**, não o jogo.

**Resultado esperado:** primeira viralização real. Imprensa de games pode
escrever (PCGamer, Eurogamer, Kotaku, sites BR como Adrenaline, Tecnoblog).
Centenas a milhares de stars no repo do tooling.

---

### 🔴 FASE 3 — Marco M3 alcançado (primeira fase jogável)

**Status técnico esperado:** Kratos andando com controle responsivo, câmera
funcionando, combate básico, primeira fase rodável do início ao fim mesmo
que com bugs.

**O que divulgar:**

| Conteúdo | Onde |
|---|---|
| **Trailer profissional** de 1-2 min mostrando o gameplay | YouTube, todos os canais sociais |
| **Post de release** do tooling estável v1.0 | GitHub público, blog, Hacker News, Reddit |
| **Press release** enviado pra imprensa de games | Email pra editores de PCGamer, Eurogamer, Adrenaline, Tecnoblog |
| **Apresentação em conferência** (proposta pra GDC/REcon do ano seguinte) | Submissão de talk |
| **Abrir Patreon/GitHub Sponsors oficial** | Vinculado ao tooling, não ao jogo |

**Resultado esperado:** projeto vira referência mundial. Ofertas de emprego
internacionais. Receita recorrente significativa via sponsors. Possíveis
contatos de estúdios oficiais (Sony incluída — pode ser legal ou jurídico,
ambos os caminhos já aconteceram com outros projetos).

---

### ⚫ FASE 4 — Marco M4 alcançado (jogo completo)

**Status técnico esperado:** o jogo roda do começo ao fim com qualidade
comparável ou superior à emulação atual (PCSX2).

**O que divulgar:**

- Tudo da Fase 3, ampliado
- **Documentário longo** (30-60min) no YouTube sobre toda a jornada
- **Livro/ebook** "Como portei God of War 2005 para PC" (R$ 50-150 cada,
  vende milhares de cópias se chegar nesse marco)
- **Curso completo** ($200-1000) ensinando o processo replicável pra outros
  jogos
- **Palestra principal em conferência grande** (GDC keynote nicho, REcon)

**Resultado esperado:** marco permanente na história da preservação de jogos.
Sua reputação técnica é vitalícia. Múltiplas ofertas profissionais
simultâneas. Possível convite formal pra falar em eventos da Sony, Nintendo,
Microsoft.

---

## 6. Princípio operacional: tooling vs jogo

🕵️ **Espionagem:** existe um agente livre (PS2Recomp) e existe um cofre
específico que ele abriu (God of War). Você pode revelar o agente ao mundo
sem revelar qual cofre específico ele abriu, ou mostrar o cofre só depois
que o método estiver consolidado.

🚗 **Carro:** você inventou uma chave-mestra que abre carros antigos. Você
pode vender a chave-mestra (tooling), mas não pode vender os carros que ela
abriu (jogos). Quem comprar a chave precisa ter seus próprios carros.

🔧 **Técnico:** a separação prática nos seus repositórios:

```
godofwar/                          ← REPO PRIVADO (nunca público)
├── PS2Recomp/                     ← pode virar repo SEPARADO público
├── GOD_PC_PORT_FINAL/             ← NUNCA público (contém binário do jogo recompilado)
├── replit.md                      ← privado
├── HANDOFF_AGENT.md               ← privado
└── MONETIZACAO_E_DIVULGACAO.md    ← privado (este aqui)

ps2recomp-public/                  ← REPO PÚBLICO futuro
├── README.md                      ← "PS2 Static Recompilation Toolkit"
├── docs/                          ← guias genéricos
├── examples/                      ← exemplos com homebrew/demos legais
└── LICENSE                        ← MIT ou GPL
```

**Quem quiser usar o tooling baixa o repo público + tem que fornecer seu
próprio jogo legal + compilar localmente.** Modelo idêntico ao N64Recomp.

---

## 7. Próximos passos práticos

### Curto prazo (próximas semanas, enquanto destrava o init chain)

- [ ] **Manter tudo privado** no GitHub atual
- [ ] **Continuar disciplina dos dossiês** (`replit.md` + `HANDOFF_AGENT.md`) — esse material vai virar o conteúdo do post da Fase 1
- [ ] **Salvar capturas de tela** de logs interessantes pra usar em futuros posts
- [ ] **Criar pasta `assets/` privada** com prints, gifs, vídeos que vão alimentar a divulgação futura
- [ ] **Escolher pseudônimo público** se preferir não usar nome real (alguns modders famosos usam handle)

### Médio prazo (pós-Marco M1)

- [ ] **Registrar domínio próprio** pro blog (ex: `agentecris.dev`, `ps2recomp.dev`, ou similar)
- [ ] **Criar conta no GitHub Sponsors** (preparada, sem ativar ainda)
- [ ] **Escrever rascunho do primeiro post técnico** — o conteúdo dos seus dossiês já é 70% do material
- [ ] **Separar o repo do tooling do repo do jogo**

### Longo prazo (pós-Marco M2/M3)

- [ ] **Contratar consultor jurídico especializado em IP de games** (R$ 500-2000 por consulta) antes do release público maior
- [ ] **Submissão de talk pra conferência** (GDC, REcon, FOSDEM)
- [ ] **Lançar Patreon/GitHub Sponsors** oficialmente
- [ ] **Considerar montar uma equipe** (contribuidores open-source) pra acelerar marcos seguintes

---

## 📌 Resumo executivo (1 parágrafo)

O projeto está em posição rara: **alta ambição técnica + alta disciplina de
processo**. Mesmo o estado atual (boot estável, depurando init chain) já é
material de portfólio profissional internacional. A monetização realista
combina **três rotas em paralelo**: (A) open-source do tooling com
sponsors, (B) conteúdo educacional em português brasileiro (mercado vazio),
e (D) portfólio profissional que abre vagas internacionais de USD
80-200k/ano em estúdios de remaster, times de preservação, e empresas de
RE de segurança. **A divulgação deve ser faseada** — começar técnica e sem
nomear o jogo no Marco M1, ganhar visual no Marco M2, e só fazer release
público maior no Marco M3. **Em todas as fases, o que se divulga e
monetiza é o TOOLING (PS2Recomp), não o jogo (God of War).** Esse é o
modelo que sustentou PCSX2, Dolphin, RPCS3 e N64Recomp por décadas, e é o
que cobre você juridicamente.

---

**Documento mantido pela Central de Inteligência da OPERAÇÃO ESPARTA.**
**Em frequência aberta.** 🎧
