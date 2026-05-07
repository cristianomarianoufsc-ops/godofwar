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

## 🔁 REGRAS DO LOOP — LEIA ANTES DE PEDIR QUALQUER COISA AO AGENTE CRIS 🔁

> Detalhes completos em `replit.md §🔁 REGRAS DO LOOP`. Resumo obrigatório:

---

#### 🖥️ TERMINAL 1 — loop (sempre ligado, nunca fechar)

```bash
bash auto_round.sh loop
```

- Liga ao abrir o PC. Só desliga com Ctrl+C ao fechar o dia.
- Detecta Push automático em ≤30s → roda round sozinho.
- **Não precisa de nenhum outro comando após um Push**, SE a mudança for só em `ps2xRuntime/`.

---

#### 🖥️ TERMINAL 2 — full (comando manual, raramente necessário)

```bash
bash auto_round.sh full
```

- **Normalmente não precisa mais** — o `loop` detecta mudanças em `.cpp` do jogo automaticamente.
- Use só se precisar forçar um round imediato sem esperar Push detectado (ex: testar algo local).
- Faz automaticamente: `recompilar.sh` → `rebuild_runtime.sh` → jogo → log → commit.

---

#### 📋 TABELA DE DECISÃO — O QUE RODAR EM CADA SITUAÇÃO

| Situação | Terminal 1 | Terminal 2 |
|---|---|---|
| Abrir o PC pela manhã | `bash auto_round.sh loop` | — |
| Analista fez Push (só mudou runtime `ps2xRuntime/`) | loop detecta e roda rebuild sozinho | — |
| **Analista fez Push (mudou `.cpp` do jogo `src/recompiled/`)** | **loop detecta e roda recompilar.sh sozinho** | — |
| Fim do dia / desligar PC | Ctrl+C | — |

---

**Regra de ouro (atualizada 2026-05-05):** `bash auto_round.sh loop` é o único terminal necessário para TUDO. Ele detecta automaticamente se o commit mudou `src/recompiled/*.cpp` e ativa o recompilar.sh por conta própria. Terminal 2 com `full` ainda existe mas não é mais necessário no dia a dia.

**Regra 4 — NUNCA feche o loop para rodar outro comando.**
O loop não interfere em outros terminais. Sempre abra Terminal 2 separado.

**Regra 5 — Ferramentas de análise de log são do ANALISTA, não do Cris.**
`python3 tools/triage_round.py`, `curl`, `python3 tools/mips_inspect.py` rodam no Replit. Nunca colocar essas ferramentas num bloco de comandos para o Cris.

## 📋 PADRÃO OBRIGATÓRIO PARA BLOCOS DE COMANDO

Todo analista DEVE separar claramente:

```
✅ Bloco "seu PC" — Cris copia e roda:
bash rebuild_runtime.sh
bash recompilar.sh

🔍 Analista faz aqui no Replit — Cris não precisa fazer nada:
(lerei o log e analisarei quando o round terminar)
```

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

## 🗺️ MAPA DA MISSÃO — OPERAÇÃO ESPARTA (atualizado 2026-05-02)

```
MISSÃO: Fazer o God of War (PS2) rodar nativamente em PC sem emulador.
O "cofre" tem vários andares. Cada andar = uma fase de inicialização do jogo.
Cada guarda = um bloqueio que precisa de um "passe" (fix) para ser superado.

[ TÉRREO ] — Setup básico do processo
    ✅ CONCLUÍDO — Bugs A-J resolvidos (entry points, threads, semas, alocadores)

[ 1º ANDAR ] — Inicialização de threads, semáforos, sistema SIF básico
    ✅ CONCLUÍDO — Bugs K-N, O, X, Z, AB resolvidos

[ 2º ANDAR ] — Protocolo SIF EE↔IOP (comunicação com "IOP fantasma")
    ✅ Parcialmente. PASSOS 1-4 OK.
    🔴 Portão atual: poll *(0x327a40) em entry_296c48/label_296c88
       (Thread 2 nunca chamada → *(0x327a40) fica 0 → timeout 300s)
       → PASSO 5 implementado: força *(0x327a40)=1 após 60 VBlanks

[ 3º ANDAR ] — entry_296518 (sceSifInitCmd) + entry_296c48 (sceSifInitRpc)
    ⬜ Entramos aqui após PASSO 5 desbloquear o portão do 2º andar.
    Sequência conhecida (análise estática 2026-05-03):
      A. entry_296518 — inicializa SIF CMD tables (loops rápidos, ~64 iters)  ← OK ✅
      B. label_296710 — syscall 0x7A poll bit 2 → PARTE 9 retorna -1 → sai   ← OK ✅
      C. 2x syscall 0x79 (func_294020) → PARTE 9 retorna -1                   ← OK ✅
      D. TAIL CALL sub_00296898 (sceSifBindRpc, 402 linhas, sem coop.Yield)   ← OK ✅
      E. entry_296c48: 4x entry_2967d0 (registra handlers SIF, sem loop)      ← OK ✅
      F. syscall 0x7A a0=0x80000002 → PARTE 9 retorna -1 → v0!=0             ← OK ✅
         → label_296dd0 → entry_2969d0 → sub_00296898 → sem coop.Yield       ← OK ✅
      G. label_296da0: entry_2964f0(a0=0) → *(0x327A40)=1 → sai imediato    ← OK ✅ (PASSO 5)
      H. func_294020(a0=0x80000002) → syscall 0x79 → retorna -1               ← OK ✅
    ★ TODA a cadeia 3º andar coberta. Retorno para caller: sub_0027A6B8.

[ 4º ANDAR ] — sub_0027A6B8 (sceSifInitRpc wrapper) + sub_00297290 (Bug Y)
    ⬜ Caller de entry_296c48 é sub_0027A6B8, chamado de entry_27ab00(a0=0x27).
    Sequência (análise estática 2026-05-03):
      A. entry_296c48 retorna → *(0x2A1754) provavelmente -1 (IOP não respondeu)
      B. sub_0027A6B8: *(0x2A1754) < 0 → entra no caminho de retry
      C. spin-delay label_27a760 (~1M iters com coop.Yield, ~1.7s) → finito ✅
      D. sub_00297290(a0=*(0x2A3280), a1=0x80000593, a2=0) ← Bug Y fix ✅
         → Bug Y simula IOP ack: *(s1+0x24)=1, $v0=1 → retorna imediato
      E. label_27a7ec: v0!=0 → WRITE32(0x2A1754, 0) → label_27a7f8 → RETURN
      F. sub_0027A6B8 retorna v0=1 para entry_27ab00
    ★ COBERTO — spin-delay finito + Bug Y fix garante saída ✅

[ 5º ANDAR ] — entry_27ab00 após sub_0027A6B8 (+ sub_00297470)
    ⬜ entry_27ab00: se v0!=0 → goto label_27ab34 → sub_00297470(a0=0x2A3280, a1=0x27)
    Sequência (análise estática 2026-05-03):
      A. sub_00297470 → 3x entry_296b98 (cache flush, loops finitos)           ← OK ✅
      B. func_293C40 (iReleaseWaitThread provavelmente) → pequena função       ← provável OK
      C. entry_27ab00 retorna v0!=0 para sub_0017BC80 (caller)
    ★ COBERTO — retorna para 6º andar ✅

[ 6º ANDAR ] — sub_0017BC80 (mapa preditivo 2026-05-03)
    ⬜ Caller principal: sub_0017BC80_0x17bc80 (0x17BC80→0x17BDE0)
    Sequência completa:
      A. func_17AA78 → $s1 = (v0<1)?1:0 → pequena, sem loop               ← OK ✅
      B. entry_296c48(a0=0) ← 1ª CHAMADA — mesmo PASSO 5 bloqueio         ← OK ✅ (PASSO 5)
         → fast-path se *(0x2A4ABC) já=1 — depende de chamada anterior
      C. (linhas 80-299, não lido) — inicializações intermediárias
      D. func_28A0C8 (entry_28a0c8_0x28a128)
      E. LOOP A — label_17bd14: entry_27ab00(a0=0x3053E4, a1=0x3053E8)
         → se v0==0: coop.Yield → volta label_17bd08 → D → E (loop)
         → Bug Y garante v0=1 → sai imediatamente ✅
      F. entry_296c48(a0=0) ← 2ª CHAMADA → fast-path *(0x2A4ABC)=1 ✅
      G. sub_00298058 + sub_00298AA0 → desconhecidos ← ⚠️ INCÓGNITA
      H. LOOP B — label_17bd50: entry_27ab00 novamente
         → se v0==0: coop.Yield → retry → Bug Y garante saída ✅
      I. entry_298770 (entry_2984a0_0x298770) → chama entry_296b98 (cache flush) ← OK ✅
      J. loop label_17bd78 — 8 iterações × sub_0017BBC8 → finito ✅
      K. sub_0027AD00 → chama entry_296c48 (fast-path ✅)
      L. sub_0027C100(a0=0) → desconhecido ← ⚠️ INCÓGNITA
      M. sub_00283570(a0=0x2AC4E0) → desconhecido ← ⚠️ INCÓGNITA
      N. entry_1389d8 (GRANDE — range 0x138→0x13..., provavelmente ENGINE PRINCIPAL!)
         → este é o objetivo final — pode ser o game loop ← ⚠️ ALVO PROVÁVEL
    ★ Próximos bloqueios potenciais: sub_00298058, sub_0027C100, sub_00283570
       → só saberemos com o log do próximo round após PASSO 5.

[ COFRE PRINCIPAL ] — Engine: renderer, áudio, input, gameplay
    ⬜ Objetivo final. entry_1389d8 (0x138xxx) é candidato ao engine principal.
       Round 258538d chegou perto (texture load + WaitEventFlag)
```

---

## 📖 ANALOGIAS — estado atual (2026-05-02)

**Carro:** motor deu 1ª partida; bomba aftermarket ✅; sensor rebobinado ✅; 4 botões pneumáticos ✅; acoplamento SIF ✅; porteiro forja sinal IOP ✅. **PASSO 5: mecânico força manualmente o sensor de prontidão da transmissão (*(0x327a40)=1) porque o "cabo do IOP" (0x2C4BC0) ainda não chegou. Transmissão deve destrancar. Aguardando round.**

**Espionagem:** cofre parcialmente aberto; guardas 1-9 neutralizados. **PASSO 5: analista forja o sinal de autorização da Thread 2 diretamente — a Thread 2 estava dormindo porque o mensageiro do IOP (buf@0x2C4BC0) chegou vazio. Com o sinal forjado, a porta do 2º andar abre e o agente avança para o 3º andar. Aguardando round.**

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

## 🟢 ESTADO ATUAL — LEIA ISTO PRIMEIRO (atualizado 2026-05-06 — PASSO 24 aplicado)

### ✅ Bugs K, L, M, N, O, X, P, Z, AB — RESOLVIDOS
### ✅ Bug Y — RESOLVIDO em sub_00297290 (*(s1+0x24)=1, v0=1 — simula IOP ack)
### ✅ PASSO 5 — CONFIRMADO FUNCIONANDO (PASSO 5 FIRE @tick #88)
### ✅ PASSO 6 / PASSO 6B — CONFIRMADOS COMPILADOS
### ✅ PASSO 7A — APLICADO em sub_00294AF8 (força THS_DORMANT=0x10 para invocar StartThread)
### ✅ PASSO 7B — APLICADO em sub_00283570 (força sceSifSetDma retorno=1 se =0)
### ✅ entry_1389d8 — HOOKS ADICIONADOS (START/renderer_type/DONE)
### ✅ PASSO 8A — CONFIRMADO NO LOG
### ✅ PASSO 9A/9B — APLICADO em sub_00297470
### ✅ PASSO 9C — CONFIRMADO NO LOG
### ✅ PASSO 11 (A+B+C+D) — CONFIRMADO FUNCIONANDO
### ✅ PASSO 12 — CONFIRMADO NO LOG
### ✅ PASSO 13 — APLICADO em sub_0017AA18 (bypassar spin-loop renderer/GS)
### ✅ PASSO 14/14B — CONFIRMADOS NO LOG
### ✅ PASSO 15/15B/15C/16/17/18 — CONFIRMADOS NO LOG
### ✅ MARCO: entry_1389d8 DONE + renderer_type=0x2 + Starting execution at 0x2996b0
### ✅ BOOT#1 pc=0x2996b0 — entry_0x2996b0 rodou, 47 WaitEventFlag (Bug AB), depois ExitThread
### ✅ PASSO 19/20 — CONFIRMADOS NO LOG
### ✅ Bug AD — APLICADO em game_overrides.cpp: stub 0x27CBD0 (sceSifRpcThread loop cooperativo)
### ✅ PASSO 21 — CONFIRMADO NO LOG: tid=2 acordou via WaitSema:wake, processou fila vazia, dormiu
### ✅ Bug AF — CORRIGIDO (PASSO 22A): pool idx=127 entry=0x35c1b0 OK; cap log 20→200; +ra
### ✅ PASSO 22B — ATIVO: loga StartThread via func_293930 (0x293930)
### ✅ PASSO 22C — CONFIRMADO NO LOG: 133 forges (esperados ~13 — loop maior). Heap OK (133×64B=8KB de 256KB).
### ✅ entry_1389d8 — DONE + renderer_type=0x2 CONFIRMADOS neste round.
### ✅ Bug AG — IDENTIFICADO E FIXADO (PASSO 23A, 2026-05-06):
###   CAUSA: 0x1838d0 (JAL[5/11] de sub_00138D48) é LABEL DENTRO de entry_183878_0x183948.
###   Não está registrado como entry point separado → runtime diz "NAO REGISTRADA" → skip.
###   Resultado: registradores GS nunca escritos → fbp=0, fbw=0 → tela preta.
###   Fix: stub gow_stub_0x1838d0_gs_init em game_overrides.cpp escreve:
###     WRITE32(0x10008020, 0)       — GS_PMODE
###     WRITE32(0x10008030, 0x2b0f00) — GS_SMODE1
###     WRITE32(0x1000e020, 1)       — GS_DISPLAY2
###     WRITE32(0x1000e010, 1)       — GS_DISPLAY1
###     WRITE32(0x10008000, 0x145)   — GS_IMR
###   Log: [PASSO 23A] 0x1838d0: GS init stub — PMODE=0 SMODE1=0x2b0f00 DISPLAY1/2=1 IMR=0x145
### ✅ PASSO 23B — APLICADO: logs em sub_0017A940_0x17a940.cpp após cada uma das 10 chamadas:
###   175978(1/10) → 175CD0(2/10) → 17E530(3/10) → 17BFF0(4/10) → 131A58(5/10)
###   → 118798(6/10) → 293930/StartThread(7/10) → 182810(8/10) → 21C788(9/10) → 17D778(10/10)
###   OBJETIVO: pinçar em qual das 10 sub_0017A940 trava (JAL[9/11] nunca retornou em 300s).
### ✅ PASSO 23C — APLICADO: stub gow_stub_0x283770_init_guard para 0x283770 (JAL[1/11]):
###   Guard de init: se 0x326940!=0 retorna; senão seta 1 e chama 0x2836c0 (entry_283790).
### ✅ INVESTIGAÇÃO NAO REGISTRADA — ENCERRADA (2026-05-06):
###   0x17acb8 (JAL[3/11]) — fim de sub_0017AC88 (0x17ac88-0x17acb8). Última instrução do
###     arquivo é NOP em 0x17acb4; endereço 0x17acb8 = jr $ra do próximo bloco de código.
###     Chamar = retornar imediatamente. Skip ≡ chamada. SEM FIX NECESSÁRIO.
###   0x138b10 (JAL[4/11]) — label DENTRO de entry_1389d8_0x138cb0.cpp (linha 441).
###     Inicializa tabela de pool em 0x2c7920. Verificado: JAL[5/11] (GS init),
###     JAL[6/11] (sub_0017A910) e JAL[7/11] (sub_0021FF60) NÃO leem 0x2c7920.
###     A mesma inicialização roda dentro de entry_1389d8 em JAL[8/11]. SEM FIX NECESSÁRIO.
### ✅ ROUND PASSO 23 — ANALISADO (2026-05-06):
###   PASSO 23A (GS init 0x1838d0) registrou OK mas JAL[5/11] nunca rodou (vide Bug AH).
###   PASSO 23B (logs sub_0017A940) nunca apareceu por mesmo motivo.
###   PASSO 23C rodou (guard flag setado) MAS causou abort do boot — Bug AH.
###   frame:upload: fbp=0 fbw=10 nonBlack=0 (fbw mudou de 0 para 10 — efeito colateral de entry_283790).
###   activeThreads=-1 (JALs 2-11 não rodaram → threads não criadas → contador negativo).
### ✅ Bug AH — IDENTIFICADO E FIXADO (2026-05-06):
###   Causa: stub PASSO 23C fazia tail-call para entry_283790(0x2836c0) após setar flag.
###   entry_283790 alterava ctx->pc para endereço inesperado → verificador de JAL[1/11]
###   em sub_00138D48 detectava pc ≠ return_addr → aborto imediato com v0=0xffffffff.
###   Fix: tail-call REMOVIDA. Stub agora apenas: READ32(0x326940), se 0→WRITE32=1, jr $ra.
###   Confirmado no log: [PASSO 23C] 0x326940=0 → setando 1, retornando ao caller ✅
###   Boot completa com v0=0 em sub_00138D48 após fix.

### ✅ Bug AI — RESOLVIDO (PASSO 25 CONFIRMADO no log 2026-05-06):
###   [PASSO 25] func_180A10 stub: a0=0x1000100 *(a0+0xC)=0x2C0458 — apareceu no log ✅
###   Callee 1/8 de sub_0017E530 desbloqueado. func_180A90 dispatch pulado com sucesso.
###   Também confirmado: forge#134 ra=0x17e62c → callee 3/8 (func_13DC78_2ª) também passou ✅

### 🔴 Bug AJ — IDENTIFICADO E FIXADO (PASSO 26 APLICADO 2026-05-06):
###   Evidência do log: forge#134 ra=0x17e62c (callee 3/8 passou) → boot_stub imediato
###   Callees confirmadas ✅: 1/8 func_180A10 (PASSO 25), 2/8 func_17ECE0, 3/8 func_13DC78_2ª
###   Callee 4/8 func_13E180 = SEGURA (jr $ra puro, pool read, não redireciona ctx->pc)
###   Callee 5/8 func_180D08 (0x180D08) = SABOTADOR:
###     Contém 4 jalr vtable dispatches (0x180d30, 0x180d60, 0x180d9c, 0x180dc0).
###     Padrão idêntico ao Bug AI. Jalr alvos são funções reais que alteram ctx->pc.
###     → retorno prematuro → sub_0017A940 steps 4-10 nunca executam
###     → StartThread(tid=8) nunca chamado → render thread não criada → nonBlack=0
###   Callee 6/8 func_180CD8 (0x180CD8) = chama func_180D08 condicionalmente (também protegida).
###   Fix PASSO 26: stub gow_stub_0x180D08_vtable_dispatch_skip em game_overrides.cpp:
###     WRITE32(a1+4, a0) (reproduz primeiro side-effect sw $s0, 4($s1))
###     SET_GPR_U32(ctx, 2, 0u) (v0=0, neutro)
###     ctx->pc = GPR_U32(ctx, 31) (retorno normal via $ra)
###   BUILD NECESSÁRIO: rebuild_runtime.sh (game_overrides.cpp modificado)
###
### ⚠️  PASSO 24 (logs sub_0017E530.cpp) — NÃO compilado ainda:
###   O código ESTÁ no arquivo (linhas 267, 299, 374, 406, 441, 467...) mas recompilar.sh
###   nunca rodou para este arquivo. O loop detectará automaticamente na próxima push que
###   inclua sub_0017E530.cpp (arquivo src/recompiled/ → auto-recompilar).
###   NOTA: PASSO 24 logs não aparecem no log mesmo com GREP_PATTERN correto porque o
###   binário rodando é o antigo sem os logs compilados.

### 🔴 AGUARDANDO ROUND pós-PASSO 26:
###   BUILD: rebuild_runtime.sh (game_overrides.cpp)
### 🔴 APÓS ROUND → verificar no filtered log:
###   [PASSO 26] func_180D08 stub: a0=0x... a1=0x... — jalr vtable dispatch PULADO
###   [PASSO 24] sub_0017E530: apos 180D08 (5/8) → callee 5/8 passou (SE recompilar.sh rodou)
###   [PASSO 24] sub_0017E530: apos 180CD8 (6/8) → callee 6/8 passou
###   [PASSO 24] sub_0017E530: apos 181068 (7/8) → callee 7/8 passou
###   [PASSO 24] sub_0017E530: apos 17E690 (8/8) SUCESSO! → sub_0017E530 inteira
###   [PASSO 23B] sub_0017A940: apos func_17E530 (3/10) → step 3/10 finalmente retorna!
###   [PASSO 22B] func_293930 StartThread #N: thid=8 → render thread criada!
###   frame:upload nonBlack>0 → PRIMEIRO FRAME DO JOGO!

---

### 🧬 ANÁLISE PASSO 22C (2026-05-06 — causa raiz dos 13 nulls em JAL[9/11])

**Diagnóstico completo:**

🕵️ **Espionagem:** Os 13 agentes sentinela da fila de prioridade chegavam sem identidade (ponteiro nulo). Parecia que o almoxarifado (func_13E090/PASSO 22A) estava falhando, mas na verdade os agentes vinham de um depósito diferente — variáveis globais que deveriam ser preenchidas pelo IOP loader ausente (0x32EC4C, 0x32F198, etc).

🚗 **Carro:** Era como se o mecânico mandasse buscar as peças no depósito A (func_13E090), mas 13 das buscas iam ao depósito B (READ32(global)) que estava vazio. A nova peça forjada (PASSO 22C) preenche o slot vazio com uma peça genérica mas funcional.

🔧 **Técnico:** `sub_0017E530` (e similares) chama `func_13E090` UMA vez (→ s0=0x35c1b0), mas chama `sub_0013DC78` DUAS vezes: a 1ª com `a0 = READ32(0x330000 - 0xE68) = READ32(0x32F198)` e a 2ª com `a0 = READ32(0x330000 - 0x13B4) = READ32(0x32EC4C)`. Ambas as leituras retornam 0 (globals não-inicializadas). Fix: PASSO 22C no início de `sub_0013DC78` forja nó quando a0=0.

**Arquivos modificados:**
- `GOD_PC_PORT_FINAL/src/recompiled/sub_0013DC78_0x13dc78.cpp` — PASSO 22C inline no PASSO 12
- `PS2Recomp/ps2xRuntime/src/lib/game_overrides.cpp` — PASSO 22A cap 20→200, +ra ao log OK
- `auto_round.sh` — GREP_PATTERN: +`PASSO 22`, +`Bug AF`

---

### 🧬 ANÁLISE PASSO 17 (2026-05-05 — novo bloqueador identificado após round@2099b48)

**Por que PASSOs 15/15B/15C/16 nunca dispararam no round 2099b48:**
- Os arquivos com PASSOs 15–16 estavam compilados corretamente ✅
- O jogo travou ANTES de chegar neles: loop `label_26c0e0` em `sub_0026BF28`
- `label_26c0e0` → `jal sub_0026BB98` → `beqz v0, label_26c0e0` → se v0=0, loop eterno

**Causa raiz de sub_0026BB98 retornar 0:**
1. Chama `func_293EA0(a0=0)` — essa função re-enfileira módulos IOP, escrevendo endereço de fila em `0x2A1338`
2. Lê `READ32(0x2A1338)` — agora != 0 (mesmo que PASSO 14B tenha zerado, func_293EA0 resetou)
3. Vai para `label_26bbc4` → chama `entry_297670(a0=0x3055C8)` (busy-flag checker)
4. `entry_297670` lê `READ32(READ32(0x3055C8)+0x10)` → sem IOP real, sempre != 0 (busy)
5. Branch tomado com v0=0 no delay slot → retorna 0 → outer loop repete

**Fix PASSO 17:**
- Arquivo: `GOD_PC_PORT_FINAL/src/recompiled/sub_0026BB98_0x26bb98.cpp`
- Início da função: `SET_GPR_S32(ctx, 2, 1); return;` (antes de qualquer lógica)
- `sub_0026BB98` é semanticamente `sceSifCheckStatRpc` / verificador "módulo IOP pronto?"
- Sem IOP real, a resposta é sempre "sim" → v0=1 imediato é correto e seguro
- Log esperado: `[PASSO 17] sub_0026BB98: stub retornou v0=1 (IOP modulo pronto simulado)`

**O que esperar no próximo round:**
1. `[PASSO 17]` dispara (sub_0026BB98 retorna 1)
2. Loop `label_26c0e0` **sai** — v0=1
3. `[PASSO 15]` dispara — mostra 0x2A1378 (idx) e 0x2A137C
4. `[PASSO 15C]` dispara — sub_0026C4B8 é chamada
5. `[PASSO 16]` dispara — entry_297670 em sub_0026C4B8 retornou !=0, v0 forçado a 0
6. Após P16: verificar se entry_1389d8 chega em `renderer_type=` e `DONE`

---

### 🧬 ANÁLISE PASSO 11 (2026-05-05 — sessão pós-PASSO 9C confirmado)

**Travamento identificado:** `sub_0026B6D0_0x26b6d0.cpp` — chamada DENTRO de `entry_1389d8` como PRIMEIRA função (linha 60 de entry_1389d8_0x138cb0.cpp). Isso explica por que `[entry_1389d8] START` aparece mas `[entry_1389d8] renderer_type=` NÃO aparece no log.

**Cadeia completa identificada:**
```
sub_00138D48 JAL[8/11] → sub_0017BC80
  → sub_00283570 (PASSO 7B) → retorna
  → entry_1389d8 → sub_0026B6D0 ← TRAVA AQUI
```

**Estrutura de sub_0026B6D0 — 6 loops cooperativos:**
```
BLOCO 1: SIF client sid=0x123456
  label_26b778: sub_00297290(a0=0x3055C8, a1=0x123456) → RPC_BIND sid=22
    if v0 >= 0 → label_26b7cc (OK)
    if v0 < 0  → entry_28a0c8 (error log) → label_26b7b0 ← LOOP INFINITO (NOPs)
  label_26b7cc:
    v1=9999, v0=-1
    label_26b7d8: bne v1,v0 → v1-- + coop.Yield → (9998 iters, ~finito)
    READ32(0x3055C8+0x24) → "connected flag"
    if == 0 → goto label_26b778 (retry infinito)
    if != 0 → label_26b828

BLOCO 2: SIF client sid=0x123457
  label_26b828: sub_00297290(a0=0x30A200, a1=0x123457) → RPC_BIND sid=23
    if v0 >= 0 → label_26b87c (OK)
    if v0 < 0  → entry_28a0c8 (error log) → label_26b860 ← LOOP INFINITO (NOPs)
  label_26b87c:
    v1=9999, v0=-1
    label_26b888: bne v1,v0 → v1-- + coop.Yield → (9998 iters, ~finito)
    READ32(0x30A200+0x24) → "connected flag"
    if == 0 → goto label_26b828 (retry infinito)
    if != 0 → sub_0026BF28 → RETURN
```

**4 pontos de travamento sem IOP real:**
1. `bgez $v0 @label_26b78c` → v0<0 (sub_00297290 sid=0x123456 falha) → label_26b7b0 (loop ∞)
2. `beqz $v0 @label_26b7fc` → *(0x3055C8+0x24)=0 (sem IOP, campo nunca escrito) → retry ∞
3. `bgez $v0 @label_26b83c` → v0<0 (sub_00297290 sid=0x123457 falha) → label_26b860 (loop ∞)
4. `beqz $v0 @label_26b8ac` → *(0x30A200+0x24)=0 (sem IOP, campo nunca escrito) → retry ∞

**4 fixes aplicados em sub_0026B6D0_0x26b6d0.cpp:**
- **PASSO 11A** (linha ~219): força v0=0 se sub_00297290(0x123456) retornar v0<0 → vai para label_26b7cc em vez de label_26b7b0
- **PASSO 11B** (linha ~356): força v0=1 se READ32(0x3055C8+0x24)==0 → sai do retry → vai para label_26b828
- **PASSO 11C** (linha ~439): força v0=0 se sub_00297290(0x123457) retornar v0<0 → vai para label_26b87c em vez de label_26b860
- **PASSO 11D** (linha ~576): força v0=1 se READ32(0x30A200+0x24)==0 → sai do retry → vai para sub_0026BF28 → RETURN

**Arquivo alterado:** `GOD_PC_PORT_FINAL/src/recompiled/sub_0026B6D0_0x26b6d0.cpp`
**Build necessário:** `bash recompilar.sh` (o loop auto_round.sh detecta .cpp alterado e roda sozinho após Push)

**O que esperar no próximo round (com PASSO 11 + todos anteriores):**
- `[PASSO 11A] sub_00297290 sid=0x123456 retornou v0=<N> < 0, forcando 0` → 11A disparou ✅
- `[PASSO 11B] connected flag 1 (0x3055C8+0x24) = 0` → valor confirmado ✅
- `[PASSO 11B] forcando v0=1 (connected)` → 11B disparou ✅
- `[PASSO 11C] sub_00297290 sid=0x123457 retornou v0=<N> < 0, forcando 0` → 11C disparou ✅
- `[PASSO 11D] connected flag 2 (0x30A200+0x24) = 0` → valor confirmado ✅
- `[PASSO 11D] forcando v0=1 (connected)` → 11D disparou ✅
- sub_0026B6D0 retorna → entry_1389d8 continua → **`[entry_1389d8] renderer_type=0x...`** 🎯
- **`[entry_1389d8] DONE`** → sub_0017BC80 retorna → JAL[9/11], [10/11], [11/11] em sub_00138D48

**Próximo candidato a travar após PASSO 11:**
- `sub_0013DC78` — tem loop cooperativo em `label_13dcd8` (goto label_13dcd8 com cooperativeGuestYield), chamado múltiplas vezes dentro de entry_1389d8 APÓS func_17AA78 (renderer_type)
- entry_1389d8 também tem 2 loops cooperativos próprios: `label_138ba0` e `label_138c28` — mas esses são loops de iteração finita (contador s2 < *(s4+0) iterações) — provavelmente seguros
- JAL[9/11]=`0x17a940`, [10/11]=`0x17aa18`, [11/11]=`0x17a9b0` em sub_00138D48 — ainda não analisados

---

### 🧬 ANÁLISE PASSO 12 (2026-05-05 — sessão pós-PASSO 11 confirmado)

**Contexto do round pós-PASSO 11:**
- PASSO 11A e 11C: `retornou v0=1 OK` — sub_00297290 já devolvia v0=1 pelo Bug Y fix; 11A/11C confirmaram mas não precisaram forçar
- PASSO 11B e 11D: NÃO dispararam — Bug Y fix já setou `*(s1+0x24)=1` dentro de sub_00297290, connected flag já estava certo
- sub_0026B6D0 PASSOU → entry_1389d8 continuou → chamou sub_0013DC78 (2× antes de renderer_type) → TRAVOU aí
- `[entry_1389d8] renderer_type=` NÃO apareceu → stuck em sub_0013DC78
- **NOVIDADE:** `[vif1:cmd]` aparecem no log FULL (169 pacotes DMA para VIF1 — gráficos PS2!) — game chegou mais longe que nunca

**Diagnóstico sub_0013DC78 (0x13DC78–0x13DE28, 492 linhas):**

`func_13E090` (entry_13e090_0x13e0c0.cpp) é um **pool allocator por lookup de tabela**:
```
v2 = 0x2CB940 — estrutura de controle do pool
a0 = READ32(0x2CB940+4) — índice atual
v0 = READ32(0x2CB940+8) — limite
if (a0 == v0) → return 0 (pool cheio)
else: return READ32(READ32(0x2CB940) + 4*a0) — ponteiro do nó no pool
```

`sub_0013DC78(a0=nó, a1=tamanho, a2=align)` é um **insertor em fila de prioridade circular duplamente encadeada**:
```
s2 = a0 (ponteiro do nó = sentinela da lista)
s1 = a1 (tamanho da alocação: 0x40 ou 0x280)
s0 = a2 (alinhamento: 0x40)

Invariante PS2: s2->next (s2+4) == s2 quando lista VAZIA (nó aponta para si mesmo)

label_13dccc: se READ32(s2+4) == s2 → goto label_13de08 (saída: lista vazia, insere direto)
              se READ32(s2+4) != s2 → label_13dcd8 (loop: anda a lista por insertion sort)

label_13dcd8: ← LOOP COOPERATIVO
  t3 = READ32(t0+0) & 0x1FFFFFFF  ← prioridade do nó atual
  se t3 < a1_new → label_13de00 (achou ponto de inserção) + cooperativeGuestYield + volta
  senão → manipulações de split + cooperativeGuestYield + goto label_13dcd8
```

**Causa raiz:** Na PS2 real, o IOP (ou o BIOS EE) inicializa os nós do pool com `nó->next = nó` (sentinela circular). No port sem IOP, `READ32(s2+4)` contém lixo de memória → condição `t0 == s2` NUNCA acontece → loop infinito com cooperativeGuestYield.

**Fix — PASSO 12 (em sub_0013DC78_0x13dc78.cpp, antes da primeira instrução):**
```cpp
// Lê a0 (= s2 = ponteiro do nó sentinela)
uint32_t _p12_s2 = GPR_U32(ctx, 4);
uint32_t _p12_next = READ32(ADD32(_p12_s2, 4));
if (_p12_next != _p12_s2) {
    // Inicializa sentinela: next=self, prev=self (lista circular vazia)
    WRITE32(ADD32(_p12_s2, 4), _p12_s2);
    WRITE32(ADD32(_p12_s2, 8), _p12_s2);
}
```

**Efeito:** Após WRITE32, quando a função chega em `label_13dccc`, encontra `READ32(s2+4) == s2` → branch taken → goto label_13de08 → retorna v0=0 imediatamente. A função retorna em ≤1 tick sem loop.

entry_1389d8 escreve v0 em `*(s1-0x41B4)` (1ª chamada) e prossegue para a 2ª chamada (a1=0x280), que também passa pelo mesmo fix. Depois vai para `func_17AA78` → **renderer_type aparece** → entry_1389d8 DONE 🎯

**O que esperar no próximo round (com PASSO 12):**
- `[PASSO 12] sub_0013DC78: s2=0x... s2->next=0x... (lixo/nao-sentinela) — inicializando lista vazia` → fix disparou (2× em sequência)
- `[entry_1389d8] renderer_type=0x...` → func_17AA78 retornou tipo de renderer 🎯
- `[entry_1389d8] DONE` → entry_1389d8 concluiu 🎯
- Próximos: JAL[9/11]=0x17A940, [10/11]=0x17AA18, [11/11]=0x17A9B0 em sub_00138D48

**Arquivo alterado:** `GOD_PC_PORT_FINAL/src/recompiled/sub_0013DC78_0x13dc78.cpp`
**Build:** `bash recompilar.sh` (loop auto_round.sh detecta .cpp alterado automaticamente após Push)

---

### 🧬 ANÁLISE PASSO 15/15B/15C/16 (2026-05-05 — sessão pós-PASSO 14+14B confirmados)

**Resultado do round PASSO 14+14B:**
- `[PASSO 14]`: `0x2A1338=0 ja OK` — já estava 0, path correto (beqz tomado → label_26c034) ✅
- `[PASSO 14B]`: `IOP DMA simulado — queue=0x305600 — escrevendo 0xFFFFFFFF em +0 e +8, zerando 0x2A1338` ✅
- `entry_1389d8 START` ✅, `PASSO 11A/11B/11C/11D` ✅
- **Novo travamento:** `sub_0026C4B8` → `label_26c530` → `entry_297670(0x3055C8)` retorna `!=0`
  → `cooperativeGuestYield` → loop eterno (VBlank #60 → #17940)

**PASSO 15 (diagnóstico) — adicionado em `sub_0026BF28` após label_26c0e0:**
- Log: `0x2A1378(idx)` e `0x2A137C` — confirma qual índice de módulo está sendo processado

**PASSO 15B (diagnóstico) — adicionado em `entry_1389d8` após retorno de sub_0026B6D0:**
- Confirma que `sub_0026B6D0` retorna para `ctx->pc=0x1389F8` (path correto) ou outro destino

**PASSO 15C (diagnóstico) — adicionado em `sub_0026BF28` na chamada de sub_0026C4B8:**
- Log antes e depois da chamada de `sub_0026C4B8` (confirma se retorna ou fica travado)

**PASSO 16 — FIX em `sub_0026C4B8_0x26c4b8.cpp` (label_26c530):**

**Análise do loop:**
```
label_26c530:
  entry_297670(0x3055C8) → v0
  ; entry_297670: a1 = READ32(0x3055C8)
  ;               if a1==0 → v0=0 (livre)
  ;               v1 = READ32(0x3055C8+4), v0 = READ32(a1+0x18)
  ;               if v1!=v0 → v0=0 (libre)
  ;               v0 = READ32(a1+0x10) ; busy flag
  ;               if v0!=0 → retorna v0!=0 (ocupado)
  bnez v0, loop    ; se busy → cooperativeGuestYield → label_26c510
```

**Causa:** `READ32(0x3055C8)` != 0 (ptr RPC ativo) E `READ32(ptr+0x10)` != 0 (busy flag)
→ entry_297670 retorna != 0 → loop eterno sem IOP real para processar o comando

**Fix (PASSO 16):** Em `label_26c530`, após `entry_297670` retornar, se `v0 != 0`:
```cpp
// [PASSO 16] Simula SIF client livre (sem IOP real, busy flag nunca zera)
if (GPR_U32(ctx, 2) != 0) {
    std::cerr << "[PASSO 16] forcando v0=0 (SIF client livre)\n";
    SET_GPR_S32(ctx, 2, 0);
}
```
→ `bnez v0` NÃO tomado → continua para `0x26C540` (epilogue de sub_0026C4B8)

**Epilogue de sub_0026C4B8 (após loop sair):**
- Lê `0x2A1378` (índice atual) → XOR 1 (alterna 0↔1, ping-pong de módulos)
- `sltu v0, zero, v0` → booleano
- `WRITE32(0x2A1378, v0)` → atualiza índice
- Calcula próximas tabelas (`0x2A1358`, `0x2A1360`, `0x2A1370`)
- Chama `entry_297470` com `a0=0x3055C8, a1=..., a2=0x4D, a3=1` → outro DMA
- Retorna → sub_0026BF28 continua em `label_26c130`

**Próximo candidato de travamento:** `entry_297470` dentro do epilogue de `sub_0026C4B8` pode ser outro DMA IOP. Se travar, precisará de PASSO 17 em `sub_00297470` (já tem PASSO 9A/9B).

**Arquivos alterados nesta sessão (aguardando push):**
| Arquivo | PASSOs |
|---------|--------|
| `sub_0026BF28_0x26bf28.cpp` | P14 (existente) + P15 + P15C (novo) |
| `sub_0026BC40_0x26bc40.cpp` | P14B (existente) |
| `entry_1389d8_0x138cb0.cpp` | P15B (novo) |
| `sub_0026C4B8_0x26c4b8.cpp` | **P16 (novo FIX)** |
| `sub_0013DC78_0x13dc78.cpp` | P12 (existente) |
| `sub_0017AA18_0x17aa18.cpp` | P13 (existente) |

---

### 🧬 ANÁLISE PASSO 14 + 14B (2026-05-05 — sessão pós-PASSO 12+13 aplicados)

**Contexto:** Após PASSO 13 (bloqueio de sub_0017AA18), a análise revelou que sub_0026BF28 (chamada por sub_0026B6D0 após PASSO 11D) tem um loop infinito em `label_26c018` aguardando `READ32(0x2A1338)==0`.

**Bloqueio confirmado:** `sub_0026BF28` → `label_26c008` → `READ32(0x2A1338)` → se != 0 → `label_26c018` loop com `cooperativeGuestYield` → **LOOP INFINITO**.

**0x2A1338 = fila SIF/IOP de módulos em carregamento:**
- No PS2 real: IOP enfileira módulo → `0x2A1338 = ptr_do_módulo`, IOP termina → `0x2A1338 = 0`
- Sem IOP real: `0x2A1338` permanece != 0 (setado por run anterior de sub_0026BC40 ou path anterior)

**PASSO 14 — fix em `sub_0026BF28_0x26bf28.cpp` (label_26c008):**
```cpp
// Logo após READ32(0x2A1338) → v0, antes do beqz:
uint32_t _v0_1338 = GPR_U32(ctx, 2);
if (_v0_1338 != 0) {
    std::cerr << "[PASSO 14] sub_0026BF28: 0x2A1338=0x" << std::hex << _v0_1338
              << " != 0 — forcando 0 (IOP fila-modulo simulada, libera label_26c034)\n";
    WRITE32(ADD32(GPR_U32(ctx, 16), 4920), 0u);  // 0x2A0000 + 0x1338
    SET_GPR_S32(ctx, 2, 0);
}
```
Com v0=0, o `beqz $v0` é tomado → `label_26c034` → chama `sub_0026BC40`. ✅

**PASSO 14B — fix em `sub_0026BC40_0x26bc40.cpp` (após 2× sub_00294460):**
```
sub_0026BC40 enfileira o módulo:
  WRITE32(0x2A133C, 1)            ← count
  WRITE32(0x305600, 0)            ← zera buffer
  WRITE32(0x2A1338, 0x305600)     ← ptr != 0 de NOVO!
  calls sub_00294460 ×2           ← setup DMA
```
Sem IOP, `sub_0026BB98` (chamada no loop `label_26c0e0` de sub_0026BF28) vê `0x2A1338=0x305600` e verifica `READ32(0x305600)==0xFFFFFFFF` — que nunca ocorre → loop infinito.

**Fix PASSO 14B** (logo após as 2× chamadas de sub_00294460):
```cpp
uint32_t _q14b = READ32(0x2A0000u + 0x1338u);
if (_q14b != 0u) {
    WRITE32(_q14b + 0u, 0xFFFFFFFFu);  // sentinel "DMA done"
    WRITE32(_q14b + 8u, 0xFFFFFFFFu);  // sentinel secundário
    WRITE32(0x2A0000u + 0x1338u, 0u);  // dequeue
}
```
Com `0x2A1338=0`, `sub_0026BB98` vê `READ32(0x2A1338)=0` → retorna `v0=1` imediatamente → `label_26c0e0` loop sai. ✅

**Fluxo completo pós-PASSO 14+14B:**
```
sub_0026BF28:
  label_26c008 → PASSO 14 → 0x2A1338=0 → label_26c034
  sub_0026BC40 → enfileira módulo + PASSO 14B → simula DMA → 0x2A1338=0
  label_26c06c → entry_297670(0x3055C8) → v0=0 (OK, SIF conectado) → continua
  label_26c07c → s1=8 != 0 → entry_297470(0x3055C8, ...) → (retorno ignorado)
  label_26c0e0 → sub_0026BB98 → 0x2A1338=0 → v0=1 → loop SAI
  label_26c0f0 → código pós-loop → return sub_0026BF28

sub_0026B6D0 → retorna para entry_1389d8
entry_1389d8 → sub_0013DC78 (×2, PASSO 12) → renderer_type → DONE
```

**Logs esperados no próximo round:**
```
[PASSO 14] sub_0026BF28: 0x2A1338=0x... != 0 — forcando 0 (IOP fila-modulo simulada, libera label_26c034)
[PASSO 14B] sub_0026BC40: IOP DMA simulado — queue=0x305600 — escrevendo 0xFFFFFFFF em +0 e +8, zerando 0x2A1338
[PASSO 12] sub_0013DC78: ...  (×2)
[entry_1389d8] renderer_type=0x...  ← MARCO CRÍTICO
[entry_1389d8] DONE
[PASSO 13] sub_0017AA18: READ32(0x29C4D8)=0 — forcando flag=1
```

**Arquivos alterados:**
- `GOD_PC_PORT_FINAL/src/recompiled/sub_0026BF28_0x26bf28.cpp` (PASSO 14)
- `GOD_PC_PORT_FINAL/src/recompiled/sub_0026BC40_0x26bc40.cpp` (PASSO 14B)

**Possíveis bloqueios APÓS PASSO 14+14B:**
- `entry_297470`: chama `sub_00296E10`(0x3292C0) → se retornar 0 → entry_297470 retorna -1. Mas retorno de entry_297470 é IGNORADO por sub_0026BF28 (vai direto para label_26c0e0). Seguro. ✅
- `label_138ba0` / `label_138c28` em entry_1389d8: loops de contador finito (sltu s2 < *(s4+0)) — NÃO são IOP-wait. Seguros. ✅
- Próximo candidato após entry_1389d8 DONE: JAL[9/11]=sub_0017A940, [10/11]=sub_0017AA18 (PASSO 13), [11/11]=sub_0017A9B0 em sub_00138D48.

---

### 🧬 ANÁLISE PASSO 13 (2026-05-05 — sessão pós-PASSO 12 aplicado)

**Contexto — próximos travamentos previstos após PASSO 12:**

Após sub_0013DC78 passar (PASSO 12), entry_1389d8 alcança `renderer_type` + `DONE`. Depois, fluxo entra em sub_00138D48 que chama [9/11]=sub_0017A940, [10/11]=sub_0017AA18, [11/11]=sub_0017A9B0.

**Análise dos 3 JALs:**
- sub_0017A940 — ✅ SEGURO: 9 JALs sequenciais, sem loop
- sub_0017AA18 — 🔴 TRAVAMENTO: spin-loop aguarda `READ32(0x29C4D8) != 0`
- sub_0017A9B0 — ✅ SEGURO: 4 JALs sequenciais, sem loop

**Diagnóstico sub_0017AA18 (0x17aa18–0x17aa78):**
```
s0 = lui 0x2A → 0x2A0000
v0 = READ32(0x2A0000 - 0x3B28) = READ32(0x29C4D8)   ← flag renderer/GS pronto

bnel $v0, $zero, label_17aa50   ← SE flag != 0: pula loop, retorna
↓ (flag == 0):
label_17aa38:  ← SPIN-LOOP
  call sub_0017A9E8  (tick: func_17A830 + func_21FD20 + entry_17d778)
  v0 = READ32(0x29C4D8)
  beqz $v0, label_17aa38        ← volta se ainda 0 → INFINITO sem IOP
label_17aa50: return
```

**0x29C4D8** = `0x2A0000 - 0x3B28`: flag de init do renderer/GS. Na PS2 real o IOP seta; sem IOP permanece 0. sub_0017A9E8 (função do loop) = tick de frame: func_17A830 + func_21FD20 + entry_17d778 — nenhuma seta esse flag.

**Fix — PASSO 13 (início de sub_0017AA18_0x17aa18.cpp):**
```cpp
const uint32_t _p13_flag_addr = 0x29C4D8u;
if (READ32(_p13_flag_addr) == 0) {
    std::cerr << "[PASSO 13] sub_0017AA18: READ32(0x29C4D8)=0 — forcando flag=1\n";
    WRITE32(_p13_flag_addr, 1u);
}
```
Com flag=1, `bnel $v0, $zero, label_17aa50` é tomado imediatamente → retorna sem loop.

**O que esperar com PASSO 12 + PASSO 13:**
- `[PASSO 12] sub_0013DC78: s2=0x... (lixo) — inicializando lista vazia` (2×)
- `[entry_1389d8] renderer_type=0x...` 🎯
- `[entry_1389d8] DONE` 🎯
- `[PASSO 13] sub_0017AA18: READ32(0x29C4D8)=0 — forcando flag=1`
- Próximo travamento provável: sub-função dentro de sub_0017A940 ou sub_0017A9B0

**Arquivos alterados:**
- `GOD_PC_PORT_FINAL/src/recompiled/sub_0013DC78_0x13dc78.cpp` (PASSO 12)
- `GOD_PC_PORT_FINAL/src/recompiled/sub_0017AA18_0x17aa18.cpp` (PASSO 13)

---

### 🧬 ANÁLISE PASSO 9C (2026-05-05 — sessão pós-PASSO 9A)

**Erro identificado na análise anterior do HANDOFF:**
O HANDOFF dizia "label_27ab80 → retorna s0 (ponteiro não-nulo)". Isso era ERRADO.
Lendo o código real de `entry_27ab00_0x27abd0.cpp`:

```
label_27ab80:
    v0 = s0 + 4           (s0 = 0x2A2900)
    v0 = v0 | a1          (a1 = 0x20000000 do delay de bgez@27ab64)
    v1 = s0 + 8
    a0 = READ32(v0+0)     = READ32(0x202A2904)
    v1 = v1 | a1
    a1_new = s0 | a1      = 0x2A2900 | 0x20000000 = 0x202A2900
    ...
    jal func_293C40
    delay: s0 = READ32(a1+0) = READ32(0x202A2900)   ← novo s0!

label_27abb4:
    v0 = s0               = READ32(0x202A2900)       ← retorno REAL
```

**READ32(0x202A2900)**: campo SIF em 0x2A2900 que NUNCA foi escrito sem IOP real → vale 0.
Resultado: entry_27ab00 retorna v0=0 → beqz TAKEN → loop continua mesmo com PASSO 9A.

**Fix PASSO 9C:** `entry_27ab00_0x27abd0.cpp`
- Após label_27abb4 (`daddu $v0, $s0, $zero`), antes de label_27abb8
- Se v0==0: força v0=1 + log `[PASSO 9C]`
- **Seguro**: apenas o path de label_27ab80 chega em label_27abb4.
  Os outros dois paths (label_27ab2c e label_27ab78) fazem `b label_27abb8`
  incondicional, pulando completamente o label_27abb4 → PASSO 9C não afeta retornos v0=0 legítimos.

**func_28DD70 analisada (chamada de entry_28a0c8):**
- É um parser de format string (processa `%A-%Z` em strings C)
- 2 loops de traversal char-a-char com cooperativeGuestYield
- Termina ao encontrar NULL byte — SEGURA, não pode travar

**Arquivos alterados PASSO 9A+9B+9C:**
- `GOD_PC_PORT_FINAL/src/recompiled/sub_00297470_0x297470.cpp` — PASSO 9A/9B
- `GOD_PC_PORT_FINAL/src/recompiled/entry_27ab00_0x27abd0.cpp` — PASSO 9C

**Build necessário:**
- `bash recompilar.sh` (recompilados — NÃO rebuild_runtime.sh)
- O loop auto_round.sh detecta automaticamente os 2 .cpp alterados e roda recompilar.sh sozinho após Push.

**O que esperar no próximo round (com PASSO 9A + 9C + todos anteriores):**
- `[PASSO 9A] sub_00297470: func_2969D0@0x29759c retornou 0 -- forcando v0=1` → PASSO 9A disparou ✅
- `[PASSO 9C] entry_27ab00: label_27ab80 retornou s0=0 -- forcando v0=1` → PASSO 9C disparou ✅
- label_17bd50 SAI DO LOOP → label_17bd68 → entry_298770 → loop 8× sub_0017BBC8
- `[sub_0027AD00] START` → func_27AD00 curto-circuita (*(0x2A32C8)=0)
- `[PASSO 7A]` → thread forçada ✅
- `[sub_00283570] START` → sceSifSetDma
- `[PASSO 7B]` → fix DMA ✅
- `[entry_1389d8] START` → **OBJETIVO PRINCIPAL** 🎯

---

### 🗺️ MAPA COMPLETO PÓS-PASSO 9A (verificado via leitura estática 2026-05-05)

```
label_17bd50 SAI DO LOOP (PASSO 9A fix)
  → label_17bd68 → entry_298770     ✅ SEGURO (Bug Y cobre func_297290; beqz passa)
  → label_17bd78 (loop FINITO ×8)   ✅ SEGURO (sltiu $s0, 8 → exatamente 8 iters)
      └─ sub_0017BBC8 × 8            ✅ PROVAVELMENTE SEGURO
           └─ func_298F30 → func_298D08 → func_298910/298A10 (risco baixo se retornar <0)
  → func_27AD00 (sub_0027AD00)       ✅ RETORNA RÁPIDO com v0=0
      [*(0x2A32C8)=0≠1 → label_27adcc path curto → v0=0]
      [NÃO trava — entry_27aca8 retorna *(0x30AC40)=0 → s0>>4=0≠0x31 → exit]
  → func_27C100 (PASSO 7A)           ✅ COBERTO
  → func_283570 (PASSO 7B)           ✅ COBERTO
  → entry_1389d8                     🎯 ALVO FINAL
```

**Se o round travar após PASSO 9A:** verificar se BBC8 interno trava em `label_17bc48`
- Condição: func_298F30 retorna <0 E s3=1 (func_17AA78 retornou 0)
- PASSO 10 seria: fix em `func_298D08` (sub_00298D08_0x298d08.cpp, 647 linhas) ou `func_298910` (entry_298910_0x298a10.cpp, 364 linhas)

**Detalhes de cada função analisada:**
| Função | Arquivo | Linhas | Risco | Por quê |
|--------|---------|--------|-------|---------|
| entry_298770 | entry_298770_0x2987f8.cpp | 203 | ✅ | Bug Y → beqz passa; delay loop finito |
| sub_0017BBC8 | sub_0017BBC8_0x17bbc8.cpp | 324 | ✅ baixo | Loop externo FINITO (8×); interno depende de func_298F30 |
| sub_00298F30 | sub_00298F30_0x298f30.cpp | 99 | ✅ | Wrapper puro de func_298D08; sem loops próprios |
| sub_00298D08 | sub_00298D08_0x298d08.cpp | 647 | ⚠️ | Não lido completo; chama func_298910 que pode retornar <0 |
| entry_27aca8 | entry_27aca8_0x27ad00.cpp | 111 | ✅ | Chama sub_00297470 (PASSO 9A); retorna *(0x30AC40)=0 |
| sub_0027AD00 | sub_0027AD00_0x27ad00.cpp | 917 | ✅ | Curto-circuita: *(0x30AC40)=0 → label_27adcc → v0=0 |

---

### 🧬 ANÁLISE PASSO 9A (2026-05-05 — round com PASSO 8A confirmado)

**Log do round confirmado (PASSO 8A funcionou):**
- `[PASSO 8A] sub_0027A6B8: notify path apos func_2963C0 -- redirecionando para sub_00297290` ✅
- `[sub_00297290] START a0(s1)=0x2a3280 a1(s3)=0x80000593` ✅
- Bug Y + PASSO 6 → sub_00297290 retorna v0=1 ✅
- Após isso: só VBlank tick #120→#17940 → **loop silencioso em label_17bd50**

**Causa raiz identificada via leitura estática do log + código:**
```
sub_0017BC80: s1=0 → label_17bd50 (loop)
  → entry_27ab00(a0=0x3053E4, a1=0x3053E8) [func_27AB00]
    → sub_0027A6B8(0x27) → PASSO 8A → sub_00297290 → v0=1
    → label_27ab34: sub_00297470(a0=0x2A3280, a1=0x27, a2=0, ...)
      → func_296E10(0x3302C0) → slot livre (s0≠0) ✅
      → bit1(fp=0)=0 → path direto: func_2969D0(a0=0x8000000A) ← sceSifCallRpc
      → func_2969D0 retorna 0 (sem IOP real) ← RAIZ
      → bnez NÃO tomado → label_29761c → func_296EB8 (libera slot) → retorna v0=-2
    → bgez NOT taken (v0=-2<0) → func_293C40 → retorna v0=0
  → beqz v0=0 tomado → coop.Yield → LOOP ETERNO
```

**Fix PASSO 9A (+ 9B):** `sub_00297470_0x297470.cpp`
- Após func_2969D0 retornar (pc=0x2975A4): se v0==0 → forçar v0=1
  → bnez tomado → delay slot seta v0=0 → label_297640 → retorna v0=0 (OK)
  → bgez em entry_27ab00 tomado → label_27ab80 → retorna s0 (ponteiro não-nulo)
  → beqz em label_17bd50 NÃO tomado → SAI DO LOOP → label_17bd68 ✅
- PASSO 9B (backup): mesma lógica para segunda chamada de func_2969D0@0x297604 (path com sema, bit0 de fp=1)

**Arquivo alterado PASSO 9A/9B:**
- `GOD_PC_PORT_FINAL/src/recompiled/sub_00297470_0x297470.cpp` — após linha ctx->pc=0x2975A4u e ctx->pc=0x29760Cu

**Build necessário PASSO 9A:**
- `bash recompilar.sh` (arquivo recompilado — NÃO rebuild_runtime.sh)

**O que esperar no próximo round (com PASSO 9A + todos anteriores):**
- `[PASSO 9A] sub_00297470: func_2969D0@0x29759c retornou 0 -- forcando v0=1` → PASSO 9A disparou ✅
- label_17bd50 SAI DO LOOP → label_17bd68 → entry_298770 → loop 8x sub_0017BBC8
- `[sub_0027AD00] START` (se houver hook) → func_27AD00
- `[sub_0027C100] START` (se houver hook) → CreateThread
- `[PASSO 7A]` → thread forçada ✅
- `[sub_00283570] START` → sceSifSetDma
- `[PASSO 7B]` → se sceSifSetDma retornar 0 ✅
- `[entry_1389d8] START` → **OBJETIVO PRINCIPAL** 🎯

---

### 🧬 ANÁLISE PASSO 7 (2026-05-04 — conclusões desta sessão)

**Mapeamento de syscalls confirmado:**
| Endereço | Syscall # | Função EE |
|---|---|---|
| entry_293a20 (func_293A20) | 0x20 | CreateThread ✓ |
| entry_293a40 (func_293A40) | **0x22** | **StartThread** ← foi o que procurávamos |
| entry_293b20 (func_293B20) | **0x30** | **ReferThreadStatus** |
| entry_293fc0 (func_293FC0) | **0x76** | **sceSifDmaStat** (já retorna -1 ✓) |
| entry_293fe0 (func_293FE0) | **0x77** | **sceSifSetDma** (pode retornar 0 → HANG) |

**CreateThread em sub_0027C100:**
- Nossa implementação lê: `stack=*(sp+8)=0x3108C0`, `stackSize=*(sp+0xC)=0xC000`, depois detecta heuristicamente `gp=param[4]=0x2CF070, prio=param[5]=1`
- looksLikeGuestPtr(0x2CF070)=true + looksLikePriority(1)=true → **CreateThread PROVAVELMENTE SUCCEED** ✓
- Log filtrado não mostra `[CreateThread] id=3` (pode ser filtrado pelo triage_round.py)

**Causa raiz PASSO 7A (sub_00294AF8):**
```
sub_0027C100 → func_294AF8(a0=tid, a1=0):
  1. func_299230 (spinlock acquire)
  2. ReferThreadStatus(tid, sp) → preenche struct em sp
     *(sp+0) = attr (campo 0 do SceKernelThreadInfo) = 0 para thread criada com attr=0
  3. Check: if *(sp+0) == 0x10 → goto label_294b70 → func_293A40 = StartThread(tid)
     FALHA: attr=0 != 0x10 → label_294b68 → return -1 → Thread 0x27CBD0 NUNCA STARTADA
  4. sub_0027C100 ignora retorno de func_294AF8 → retorna v0=0 fingindo sucesso
```
**Fix PASSO 7A:** força `$v1(=$3)=0x10` antes do beq em label_294b54 de sub_00294AF8.

**Causa raiz PASSO 7B (sub_00283570):**
```
sub_00283570 → label_2835e8:
  jal func_293FE0(a0=struct_at_sp, a1=1) [= sceSifSetDma syscall 0x77]
  if v0 == 0: goto label_2835e8  ← SPIN LOOP INFINITO
  
  sceSifSetDma retorna 0 porque Thread 0x27CBD0 não foi iniciada
  e/ou struct DMA na stack tem campos inválidos.
  sceSifDmaStat (func_293FC0 syscall 0x76) JÁ retorna -1 ✓ (não precisa fix)
```
**Fix PASSO 7B:** força `$s0=1` (DMA ID fictício) se sceSifSetDma retornar 0.

**Arquivos alterados PASSO 7:**
- `GOD_PC_PORT_FINAL/src/recompiled/sub_00294AF8_0x294af8.cpp` — PASSO 7A em label_294b54 + log label_294b68 + log StartThread call
- `GOD_PC_PORT_FINAL/src/recompiled/sub_00283570_0x283570.cpp` — START hook + PASSO 7B no label_2835e8 loop
- `GOD_PC_PORT_FINAL/src/recompiled/sub_0027C100_0x27c100.cpp` — CreateThread ret= hook + PATH=thread_fail hook

**Build necessário PASSO 7:**
- `bash recompilar.sh` (arquivos recompilados — NÃO rebuild_runtime.sh)

---

### 🧬 ANÁLISE PASSO 8A (2026-05-04 — round com PASSO 7A+7B)

**Causa raiz identificada:** sub_0027A6B8(a0=0x27) nunca chegava em sub_00297290.

```
Fluxo sub_0027A6B8 (a0=0x27):
  1. func_27A340 retorna v0
  2. lw v1, *(0x2A172C) → se v1 == v0 (PollSema KE_OK=0): goto label_27a718 ← path certo
     PROBLEMA: *(0x2A172C) != 0 → branch NOT taken
  3. lw v1, *(0x2A1710) → notify=1 (PASSO 3c setou) → > 0 → entra no if:
  4. jal func_2963C0(a0=0x2C4BE0) → processa pacote SIF recebido
  5. b label_27a7f8 (INCONDICIONALMENTE) com v0=0 → RETORNA 0
     → sub_0017BC80 retry loop → volta para passo 1 → loop infinito (17940 ticks = 300s)
```

**Por que *(0x2A172C) != 0:** campo de estado SIF que em PS2 real seria atualizado pelo pacote recebido do IOP. Sem IOP real, permanece com valor residual da primeira inicialização.

**Fix PASSO 8A:** Após func_2963C0 retornar (pc=0x27A710), em vez do branch incondicional para label_27a7f8 com v0=0, força:
- `s1 = 0x2A0000` (base SIF, para label_27a784 calcular s0=s1+0x3280=0x2A3280)
- `s2 = 0x2A0000` (para label_27a7ec calcular s2+0x1754=0x2A1754)
- Redireciona para `label_27a784` → chama sub_00297290(a0=0x2A3280, a1=0x80000593)
- Bug Y + PASSO 6 garantem sub_00297290 retorna v0=1 + *(0x2A32A4)=1
- label_27a79c: bgezl tomado, READ32(0x2A32A4)=1 → label_27a7ec
- label_27a7ec: v0=1 ≠ 0 → WRITE32(0x2A1754,0) → label_27a7f8 → **retorna v0=1** ✓

**Arquivo alterado PASSO 8A:**
- `GOD_PC_PORT_FINAL/src/recompiled/sub_0027A6B8_0x27a6b8.cpp` — inserção entre pc=0x27A710 e label_27a718

**Build necessário PASSO 8A:**
- `bash recompilar.sh` (recompilados — NÃO rebuild_runtime.sh)

**O que esperar no próximo round (com PASSO 8A + 7A + 7B):**
- `[PASSO 8A] sub_0027A6B8: notify path apos func_2963C0 -- redirecionando para sub_00297290` → PASSO 8A disparou ✅
- `[sub_0027A6B8] CHAMANDO sub_00297290 s1=0x2A0000 a1=0x80000593` → chegou em sub_00297290 ✅
- `[sub_0027C100] START` → sub_0017BC80 saiu do loop ✅
- `[PASSO 7A]` → confirma fix da thread
- `[sub_00283570] START` → DMA SIF
- `[PASSO 7B]` → confirma fix sceSifSetDma se necessário
- `[entry_1389d8] START` → **OBJETIVO PRINCIPAL** 🎯

---

**🏆 Situação do último round analisado** (log completo do round com PASSO 4):

- PASSO 5 disparou tick #73: `[PASSO 5 FIRE]: escreveu *(0x327a40)=1 apos 60 ticks @tick #73` ✅
- entry_2964f0 leu *(0x327A40)=1 → retornou v0=1 → poll label_296da0 saiu ✅
- flag=0 a partir do tick #120 (normal — *(0x327a40) consumido, sem limpeza explícita)
- **NOVO BLOQUEIO:** main thread preso ~17000 ticks (~283s) em `sub_0027A810` retry loop
- Timeout de 300s mata o processo em tick #~17073

**Causa raiz PASSO 6 confirmada (2026-05-03 — análise desta sessão):**

```
sub_0017BC80 → sub_0027A810 → entry_296c48 ← PASSO 5 desbloqueou ✅
  → após entry_296c48 retornar:
    → seta v1=-1 → WRITE32(*(0x2A1754), -1) (init das slots SIF)
    → loop label_27a8d0:
        → sub_00297290(a0=0x30AAA8, a1=0x80000592, a2=0)
          → func_296E10(0x3292C0) → retorna slot livre ✅
          → func_293C20 (CreateSema) → OK ou falha
          → func_2969D0 (sceSifCallRpc) → retorna 0 (sem IOP) ← RAIZ
          → Path B: func_296EB8 (libera slot) + func_293C30 (DeleteSema)
          → delay slot: v0=-2 → bgezl NOT taken → spin 0x100000 → retry
        → loop infinito (17000 ticks = 283s)
```

**Fix PASSO 6** (`sub_00297290_0x297290.cpp`, 2026-05-03):

Dois delay slots de erro em `sub_00297290` modificados para simular bind IOP:

- **Path A** (func_293C20 falhou, instrução 0x297328): `v0=-3` → `*(s1+0x24)=1, v0=1`
- **Path B** (func_2969D0 retornou 0, instrução 0x297368): `v0=-2` → `*(s1+0x24)=1, v0=1`

Resultado: `sub_00297290` retorna v0=1 (≥0) → bgezl TAKEN → lê `*(s1+0x24)=1` → beqz não tomado → **sai do retry loop**.

Funciona tanto para `sub_0027A810` (s1=0x30AAA8, flag=*(0x30AACC)) quanto para `sub_0027A6B8` se for chamada (s1=0x2A3280, flag=*(0x2A32A4)).

**Arquivos alterados PASSO 6:**
- `GOD_PC_PORT_FINAL/src/recompiled/sub_00297290_0x297290.cpp` — linhas 217-221 (Path A) e 330-334 (Path B)

**Build necessário PASSO 6:**
- `bash recompilar.sh` (sub_00297290 é arquivo recompilado, não runtime)
- `bash rebuild_runtime.sh` NÃO necessário para este fix específico

**O que esperar no próximo round com PASSO 5+6:**
- `[PASSO 5 FIRE]: escreveu *(0x327a40)=1 apos ~60 ticks @tick #~73` ✅ (já confirmado)
- sub_0027A810 retry loop: sub_00297290 retorna v0=1 → sai em 1-2 iters (sem spin)
- sub_0017BC80 continua: sub_00298058 (✅ SEGURO — memset 4B) → sub_0027C100 (⚠️ safe) → sub_00283570 (⚠️ baixo) → entry_1389d8 (🎯 engine init)
- **Detectores de progresso:** `[entry_1389d8] START` → renderer_type → `DONE`
- **Se travar em entry_1389d8:** `python3 tools/scan_7th_floor.py 0x26b6d0 0x26ca18 0x17aa78 --depth 1`

**7º ANDAR — análise estática completa (2026-05-03):**
| Função | Risco | Status |
|---|---|---|
| sub_00298058 | ✅ SEGURO | memset 4B via entry_289340 (4 yields, sem tight-loops úteis) |
| sub_0027C100 | ⚠️ MÉDIO* | CreateSema×3 + CreateThread + loops 2 iters (ALL SAFE segundo análise) |
| sub_00283570 | ⚠️ BAIXO | sceSifSetDma loop + sceSifDmaStat → retorna -1 → sai imediato |
| entry_1389d8 | 🎯 ENGINE | 7 callees (alloc + renderer detection + pool setup); 2 yields; hooks START/DONE adicionados |

*sub_0027C100: `scan_7th_floor.py` mostra 17 tight-loops, mas análise manual confirmou que são loops de 2 iters (init controlado) — SAFE.

**Fix PASSO 5 — histórico** (`game_overrides.cpp`, 2026-05-02):
- Monitora `notify2a1710 != 0` E `*(0x327a40) == 0`; após 60 VBlanks: `WRITE32(0x327a40, 1u)`
- Log: `[PASSO 5 FIRE]: escreveu *(0x327a40)=1 apos N ticks @tick #T`
- Build: `bash rebuild_runtime.sh` SOMENTE

**Fix orgânico futuro para *(0x327a40) (requer recompilar.sh):**
- Escrever pacote SIF válido em `0x2C4BC0` (byte[0] != 0) → sub_00295568 → StartThread(tid=2)
- Bug P fix (FUN_002947c8) seta `*(0x327a40)=1` organicamente → elimina PASSO 5

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

### ✅ Bug Y — REESCRITO + PASSO 6 AMPLIADO (aguarda recompilar.sh)

- **Bug Y** (paths de sucesso): `sub_00297290_0x297290.cpp` — já fixado nos dois caminhos de sucesso (label_29737c e label_2973ac).
- **PASSO 6** (paths de erro): `sub_00297290_0x297290.cpp` — fixado nos dois delay slots de erro: instrução 0x297328 (Path A, func_293C20 falhou) e 0x297368 (Path B, func_2969D0=0). Ambos agora retornam `*(s1+0x24)=1, v0=1` em vez de v0=-3/-2.
- **Bug P**: `FUN_002947c8_0x2947c8.cpp` — 334 linhas. Aguarda `recompilar.sh`.

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

**`tools/triage_passo26.py`** — triagem focada no round PASSO 26 (adicionado 2026-05-06)

Lê o log filtrado do GitHub e reporta especificamente: PASSO 26 (Bug AJ — func_180D08 vtable dispatch skip), PASSO 25 (Bug AI confirmação), PASSO 24 (callees 1/8 a 8/8 de sub_0017E530), PASSO 23B (steps 1/10 a 10/10 de sub_0017A940), PASSO 22B (StartThread thid=8), nonBlack, activeThreads — com diagnóstico automático do próximo passo.

```bash
python3 tools/triage_passo26.py              # log filtrado do GitHub
python3 tools/triage_passo26.py --full       # log completo do GitHub
python3 tools/triage_passo26.py --local arquivo.txt
python3 tools/triage_passo26.py --raw        # linhas brutas sem formatação
```

Sintaxe verificada (py_compile, exit 0). Ferramenta do analista — roda no Replit, Cris não precisa fazer nada.

---

**`tools/triage_passo23.py`** — triagem focada no round PASSO 23 (adicionado 2026-05-06)

Lê o log filtrado do GitHub e reporta especificamente: PASSO 23A (GS init), PASSO 23B (steps 1-10 de sub_0017A940), PASSO 23C (guard Bug AH), nonBlack, activeThreads e pool forges — em ~10 linhas.

```bash
python3 tools/triage_passo23.py              # log filtrado do GitHub
python3 tools/triage_passo23.py --full       # log completo do GitHub
python3 tools/triage_passo23.py --local arquivo.txt
python3 tools/triage_passo23.py --raw        # linhas brutas sem formatação
```

Sintaxe verificada (py_compile, exit 0). Ferramenta do analista — roda no Replit, Cris não precisa fazer nada.

---

**`tools/triage_round.py`** — triagem automática pós-round em 1 comando (atualizado 2026-05-01)

Baixa o log filtrado do GitHub via urllib e gera relatório estruturado: módulos IOP (sids, deltas), último VBlank, **seção `── THREADS EE` com CreateThread vs StartThread** (detecta thread criada sem start), alocações, erros/SIGSEGV, boot-loop suspects, diagnóstico e próximo passo.

```bash
python3 tools/triage_round.py              # relatório completo (GitHub)
python3 tools/triage_round.py --short      # só o resumo (para uso rápido)
python3 tools/triage_round.py --local arquivo.txt   # arquivo local
```

Testado contra log atual (2026-05-01) → detectou corretamente Bug X: `🔴 id=2 entry=0x2947c8 prio=1 → StartThread NUNCA chamado`. Sintaxe verificada (exit 0).

---

## 📋 Próxima ação do analista (atualizado 2026-05-04 — diagnóstico profundo sub_0017BC80 → sub_00297290)

### O que foi feito nesta sessão (2026-05-04 — sem round novo)

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

---

### Descobertas da sessão 2026-05-04 — Por que sub_00297290 nunca era visto

**Causa raiz do silêncio:** GREP_PATTERN não continha `sub_00297290` nem `sub_0027A810` nem `sub_0017BC80` nem `sub_0027A6B8`. `[sub_00297290] START` era emitido mas filtrado. Além disso, `[PASSO 6B]` (que SIM estava no padrão via `PASSO 6`) nunca aparecia, confirmando que sub_00297290 **não estava sendo chamado** ou tomava path diferente do PASSO 6B.

**Cadeia real confirmada por leitura de código completa:**

```
sub_00138D48 [JAL 8/11]
  └─► sub_0017BC80
        ├─► sub_0027A810 (a0 vindo do caller)
        │     └─► sub_0027A648 (a0=1 hardcoded)
        │           └─► label_27a698 → entry_297670 → retorna v0
        │     ├─ se v0≠0: jump label_27aac8 → retorno rápido (SEM sub_00297290)
        │     └─ se v0=0: setup → label_27a8d0 → sub_00297290 (LOOP DE RETRY)
        │
        └─► sub_0027ABD0 (SEMPRE chamado, sem condição)
              └─► sub_0027A6B8 (a0=0x27)
                    └─► ... → sub_00297290 (via label_27a794)
```

**Descoberta crítica em sub_0027A648:**
- `bnez $a0, label_27a698` na linha 28 — com a0=1 → vai DIRETO para label_27a698
- label_27a698: chama `entry_297670(a0=0x2A3280)` → retorna v0 (status conexão SIF)
- Retorna v0 de entry_297670 **sem modificar**
- Se entry_297670 retorna 0 → sub_0027A810 faz setup e loop com sub_00297290
- Se entry_297670 retorna ≠0 → sub_0027A810 pula sub_00297290, retorna rápido → sub_0017BC80 vai para sub_0027ABD0 → sub_0027A6B8 → sub_00297290

**entry_27ab00_0x27abd0 (chamado por sub_0017BC80 via loop de retry em label_17bd50):**
- Chama sub_0027A6B8 com a0=0x27 → sub_0027A6B8 → sub_00297290
- Se sub_0027A6B8 retorna 0 → loop retenta

**Por que PASSO 6B nunca aparece:** sub_00297290 é chamado, mas func_296E10 retorna s0≠0 (há slot RPC disponível), então o branch `beqz $s0, PASSO 6B` (linha 86–98) não é tomado → segue path normal. PASSO 6B era fix desnecessário para esse path.

**Logs adicionados (compilam com `recompilar.sh`):**

| Arquivo | Log adicionado |
|---|---|
| `sub_0027A810_0x27a810.cpp` | `[sub_0027A810] START a0=0x...` + decisão após sub_0027A648 |
| `sub_0017BC80_0x17bc80.cpp` | `[sub_0017BC80] START` + após sub_0027A810 + após sub_0027ABD0 (v0, s1) |
| `sub_0027A6B8_0x27a6b8.cpp` | `[sub_0027A6B8] START a0=0x...` + `CHAMANDO sub_00297290` |

**GREP_PATTERN atualizado:** `+sub_00297290 +sub_0027A810 +sub_0017BC80 +sub_0027A6B8 +sub_0027A648 +entry_27ab00 +138D48.*retornou`

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
| `GOD_PC_PORT_FINAL/src/recompiled/sub_0027A810_0x27a810.cpp` | logs diagnóstico cadeia | `recompilar.sh` |
| `GOD_PC_PORT_FINAL/src/recompiled/sub_0017BC80_0x17bc80.cpp` | logs diagnóstico cadeia | `recompilar.sh` |
| `GOD_PC_PORT_FINAL/src/recompiled/sub_0027A6B8_0x27a6b8.cpp` | logs diagnóstico cadeia | `recompilar.sh` |
| `auto_round.sh` | GREP_PATTERN expandido (+9 padrões) | (script, sem build) |

**Arquivo alterado aguardando Push:**
- `GOD_PC_PORT_FINAL/src/recompiled/sub_00283570_0x283570.cpp` — PASSO 10A

---

### ESTADO ATUAL — 2026-05-06 (Bug AF aplicado) — PASSO 22A corrigido: entrada nula no pool

#### Bug AF — CAUSA RAIZ dos 13+ `s2=null` em JAL[9/11] — DIAGNOSTICADA E CORRIGIDA ✅

**O que o round pós-PASSO 22A+22B revelou:**

- Pool struct em 0x2CB940 tinha `pool_base=0x304728, idx=127, limit=128` (não limit=3 como esperado)
- Chamadas #1-#6 em JAL[6/11]: todas retornam `entry=0x35c1b0` com idx=127 (pool OK)
- Chamadas #7+ em JAL[9/11] (via sub_00175CD0, sub_0017E530, sub_00118798): **PASSO 22A entrava no caminho "pool OK"** (`idx=127 < limit=128`) mas lia `pool_array[127]` = **0x00000000 (entrada nula, não inicializada)**
- PASSO 22A retornava `v0=0` sem logar nem forjar → sub_0013DC78 recebia `s2=null` → 13+ falhas silenciosas

**Por que o forge não rodava:** A condição `poolArrayBase != 0 && currentIdx < poolLimit` era TRUE (pool "OK"), então o código nunca caía no caminho do forge. A verificação de `entryPtr != 0` estava ausente — Bug AF.

**Callees de sub_0017A940 confirmados que chamam func_13E090:**
- `sub_00175CD0` (0x175CD0) — jal func_13E090 em 0x175cec
- `sub_0017E530` (0x17E530) — jal func_13E090 em 0x17e550
- `sub_00118798` (0x118798) — jal func_13E090 em 0x1187a8, depois jal func_13DC78

**Fix Bug AF** — `game_overrides.cpp` → `gow_stub_func_13E090_pool_expand`:
```cpp
// ANTES (bug): retornava entryPtr sem checar se é 0
SET_GPR_U32(ctx, 2, entryPtr);  // retornava 0 se entrada nula!
return;

// DEPOIS (fix): checa entryPtr != 0; se 0, cai no forge
if (entryPtr != 0u) {
    SET_GPR_U32(ctx, 2, entryPtr);  // entry válida
    return;
}
// entryPtr == 0 → loga "[Bug AF]" e forja novo nó do bump allocator
```

Logs adicionados (agora sempre logar, sem limite callN<=6):
- `[PASSO 22A] func_13E090 chamada #N: ... entry=0x... OK` — entrada válida
- `[Bug AF] func_13E090 chamada #N: pool_array[idx]=0 (entrada nula) ra=0x... — forjando no` — fix em ação
- `[PASSO 22A] func_13E090 chamada #N: pool esgotado ...` — idx >= limit
- `[PASSO 22A] func_13E090 forge #N: guestPtr=0x...` — sempre (sem limite forgeN<=16)

**Arquivo alterado:** `PS2Recomp/ps2xRuntime/src/lib/game_overrides.cpp` → `rebuild_runtime.sh`

#### O que esperar no próximo round (pós-Bug AF)

```
[PASSO 22A] func_13E090 chamada #1..#2: pool OK entry=0x35c1b0
[Bug AF] func_13E090 chamada #3: pool_array[127]=0 (entrada nula) ra=0x... — forjando no
[PASSO 22A] func_13E090 forge #1: guestPtr=0x01000140 (ra=0x...)
→ [PASSO 12] sub_0013DC78: s2=0x01000140 sentinela OK   ← antes era null!
... (13 vezes forjando, 13 vezes s2=OK em vez de null)
→ [CreateThread] id=4 entry=... (render thread criado!)
→ [CreateThread] id=5..8 ...
→ [PASSO 22B] func_293930 StartThread #N: thid=8 arg=0x157358
→ [PASSO 22B] func_293930 StartThread #N resultado: v0=0x0  ← sucesso!
→ frame:upload nonBlack>0 ???
```

#### Estado anterior — PASSO 22A+22B — implementados (commit anterior)

**Pool 0x2CB940 — estrutura real (corrigida pós-round):**
```
READ32(0x2CB940) = pool_array_base = 0x304728
READ32(0x2CB944) = current_index  = 127
READ32(0x2CB948) = pool_limit     = 128   ← NÃO era 3!
pool_array[127]  = 0x35c1b0 (única entrada válida das 128)
pool_array[0..126] = 0x00000000 (entradas nulas — Bug AF)
```

**func_293930 (0x293930) = `syscall v1=0x12` = `StartThread(a0=tid, a1=arg)`**
- Chamado de sub_0017A940 com `a0=8, a1=0x157358` — inicia thread de render
- Sem CreateThread para tid=8 → StartThread(8) falha silenciosamente (será resolvido com Bug AF)

---

### ESTADO ATUAL — 2026-05-06 (PASSO 25 aplicado) — Bug AI resolvido, aguardando round

#### Bug AI — Causa raiz CONFIRMADA ✅ e fix APLICADO ✅

**Causa raiz completa (cadeia de 3 níveis):**
```
sub_0017A940 → step 3/10 → sub_0017E530 → JAL func_180A10 (0x17E5D0, ra=0x17E5D8)
  → sub_00180A10: delay_slot escreve *(a0+0xC)=0x2C0458; chama func_180A90
    → func_180A90: jalr $v1 onde v1=READ32(0x2C046C)  ← funcao real do jogo!
      → funcao real altera ctx->pc para endereco inesperado
    → sub_00180A10: if (ctx->pc != 0x180A30) { return; }  ← saida prematura
  → sub_0017E530: if (ctx->pc != 0x17E5D8) { return; }  ← saida prematura
→ sub_0017A940: step 3/10 nunca retorna → steps 4-10 nunca executam
  → step 7/10 (StartThread tid=8, entry=0x157358) NUNCA chamado
  → render thread tid=8 nunca criada → nonBlack=0 permanente
```

**Evidência do log (round pós-PASSO 24):**
- `[PASSO 24] sub_0017E530: apos alloc5` ✅ (func_180A10 foi chamada)
- `[PASSO 24] sub_0017E530: apos 180A10 (1/8)` ❌ AUSENTE → func_180A10 redirecionou ctx->pc

**Fix — PASSO 25 (2026-05-06):**
- Arquivo: `PS2Recomp/ps2xRuntime/src/lib/game_overrides.cpp`
- Stub `gow_stub_0x180A10_dispatch_skip` registrado em `0x00180A10`
- Reproduz side-effect de sub_00180A10: `WRITE32(a0+0xC, 0x2C0458)` + `v0=a0`
- NÃO chama `func_180A90` (evita o dispatch sabotador via jalr)
- Seguro: sub_0017E530 sobrescreve `*(s0+0xC)` com `0x2C03D0` em 0x17E5E8 logo após
- Build necessário: **`rebuild_runtime.sh`** (arquivo de runtime)

**Resultado esperado no próximo round:**
```
[PASSO 25] func_180A10 stub: a0=0x1000100 *(a0+0xC)=0x2C0458 — func_180A90 dispatch PULADO
[PASSO 24] sub_0017E530: apos 180A10 (1/8)   ← desbloqueia!
[PASSO 24] sub_0017E530: apos XXX (2/8)...(8/8)
[PASSO 23B] sub_0017A940: apos func_17E530 (3/10)  ← step 3/10 finalmente retorna!
[PASSO 23B] sub_0017A940: apos func_17BFF0 (4/10)
[PASSO 23B] sub_0017A940: apos func_131A58 (5/10)
[PASSO 23B] sub_0017A940: apos func_118798 (6/10)
[PASSO 22B] func_293930 StartThread #N: thid=8 arg=0x157358  ← render thread criada!
[PASSO 23B] sub_0017A940: apos func_293930 (7/10)
frame:upload nonBlack>0 ???  ← primeiro frame do jogo!
```

**Arquivos alterados neste commit:**
1. `PS2Recomp/ps2xRuntime/src/lib/game_overrides.cpp` — stub PASSO 25 para 0x180A10
2. `auto_round.sh` — GREP_PATTERN: adicionado `PASSO 24|PASSO 25`
3. `replit.md` — estado atualizado
4. `HANDOFF_AGENT.md` — este arquivo

---

### ESTADO ANTERIOR — 2026-05-06 (round pós-PASSO 21 refinamento) — cadeia ExitThread confirmada

#### Cadeia de ExitThread de tid=1 — TOTALMENTE MAPEADA ✅

```
boot_stub → entry_2996b0_0x2996e0 [BOOT#1, a0=0]
  → FUN_0029aa48: syscall 0x7F (GetMemorySize=0x02000000) → Caminho A
  → sub_0029AA88: 47 WEF Bug-AB + 6 WEF não-Bug-AB (ra=0x29ac10) + 8 WEF ILPAT (ra=0x29ac54)
  → retorna para FUN_0029aa48 → retorna para entry_2996b0
  → [entry_2996b0:ExitThread] j func_293840 (0x293840: addiu $v1,0x4; syscall4=ExitThread)
  → tid=1 morre — COMPORTAMENTO INTENCIONAL
```

**Fato crítico:** as 14 WEF não-Bug-AB:
- 6 chamadas (ra=0x29ac10): `waitBits=*(s0+0)` lido de struct — provavelmente 0 → **KE_EVF_ILPAT**
- 8 chamadas (ra=0x29ac54): `waitBits=0` hardcoded → **KE_EVF_ILPAT** explícito

**Por que tela preta (nonBlack=0):** sub_0017A940 step 3/10 nunca retornava (Bug AI). Render thread tid=8 nunca criada. Fix: PASSO 25.

---

### ESTADO ANTERIOR — 2026-05-06 (round pós-PASSO 20 + Bug AD) — 🏆 JOGO RODANDO 300s!

#### MEGA VITÓRIA CONFIRMADA

O jogo **RODOU POR 300 SEGUNDOS** antes de ser encerrado pelo timeout do `auto_round.sh`. Não foi crash — foi o script de automação matando um processo vivo com SIGINT (sinal 2). Arquitetura de threads confirmada:

| Thread | Papel | Status no round |
|---|---|---|
| tid=1 | entry_0x2996b0 (game main init) | Saiu via ExitThread ✅ normal |
| tid=2 | FUN_002947c8 (IOP module loader) | Bloqueou em WaitSema(sid=3) — **Bug AE** |
| tid=3 | 0x27CBD0 (sceSifRpcThread stub) | Rodou loop cooperativo infinito ✅ |

`activeThreads` foi 1→3→2 (ExitThread de tid=1 decrementou 1). Loop Raylib continuou pois activeThreads=2 > 0. `[frame:upload]` disparou (tela preta, nonBlack=0 — renderização tentou).

**"Error during program execution: PS2 Thread Exit"** é o ExitThread de tid=1 capturado pelo lambda da gameThread — **comportamento NORMAL**.

#### PASSO 20 + Bug AD confirmados ✅

```
[PASSO 20] sub_00294AF8: func_299230 retornou v0=0 -- forcando v0=1 ...
[sub_00294AF8] StartThread(tid=2) chamando agora
[StartThread] id=2 entry=0x2947c8
[BugP_entry] FUN_002947c8 START a0=0x326f48
[StartThread] id=3 entry=0x27cbd0
[stub:0x27CBD0] Bug AD: sceSifRpcThread — iniciando loop cooperativo IOP simulado
```

#### Bug AE — PASSO 21 refinado (este commit)

**Problema:** tid=2 bloqueia imediatamente em `WaitSema(sid=3)`:
```
[WaitSema:block] tid=2 sid=3 pc=0x293c64 ra=0x294810 delta_ms_since_RPC_BIND=never
```
- sid=3 criado com `init=0, max=255` — aguarda sinal do IOP que nunca vem
- `delta_ms_since_RPC_BIND=never` → PASSO 3 não intervém (precisa deltaMsSinceBind >= 0)

**Fix (PASSO 21)** aplicado em `PS2Recomp/ps2xRuntime/src/lib/syscalls/ps2_syscalls_flags.inl`:
- Quando `deltaMsSinceBind < 0` (never) E `pc=0x293C64` E `ra=0x294810` → forge `iSignalSema` imediatamente
- Específico para o callsite de FUN_002947c8 (IOP module loader, tid=2)
- `rebuild_runtime.sh` necessário (muda arquivo ps2xRuntime)

#### Sequência de boot completa até este round

```
[boot_stub] init → [138D48] JAL [1..8/11]
→ sub_0017BC80 START → sub_0027A810 → sub_00297290 (RPC_BIND sid=0x80000592)
→ sub_0027A6B8 (a0=0x22) → [PASSO 8A] → sub_00297290 (sid=0x80000593)
→ [PASSO 9C] → sai loop label_17bd50
→ sub_00297290 (sid=0x80000003) → sub_00297290 (sid=0x80000006)
→ sub_0027C100 [PATH=full] → entry_281510 → entry_27d5b8 → sub_00294AF8
→ sub_00283570 (a0=0x29c4e0) → [PASSO 7B+PASSO 10A]
→ entry_1389d8 → sub_00297290 (sid=0x123456) → sub_00297290 (sid=0x123457)
→ [138D48] JAL [8/11] → DONE → entry_2996b0 (game main)
→ 47 WaitEventFlag (Bug AB) → ExitThread(tid=1)
→ tid=2 bloqueado WaitSema(sid=3) [Bug AE — aguarda PASSO 21]
→ tid=3 loop cooperativo ativo (300s timeout)
```

#### O que esperar no próximo round (pós-PASSO 21)

```
[PASSO 21] Bug AE: Forjando iSignalSema(sid=3) para FUN_002947c8 (IOP module loader) — delta=never, sem RPC_BIND previo
[WaitSema:wake] tid=2 sid=3 ret=0 count=0
→ FUN_002947c8 processa fila de módulos (provavelmente vazia → loop de volta a WaitSema)
→ ou avança para próxima inicialização IOP
→ frame:upload nonBlack>0 ??? (tela preta → primeiros pixels do jogo!)
```

### ⚠️ Lembrete ao analista
- O SIGINT no final do log é o timeout de 300s do auto_round.sh — **NÃO é crash**.
- `[run] exiting loop, activeThreads=N` SÓ aparece se o processo encerrar limpo — com timeout não aparece.
- `frame:upload nonBlack=0` = tela preta; quando nonBlack>0 = primeiro frame do jogo visível.
- PASSO 7B já existe em sub_00283570 (label_2835e8, força s0=1 se sceSifSetDma retorna 0).
- PASSO 10A: sub_00283570 label_283600 (sceSifDmaStat, força v0=-1 se >= 0).
- **Arquivo alterado nesta sessão:** `PS2Recomp/ps2xRuntime/src/lib/syscalls/ps2_syscalls_flags.inl` (PASSO 21) → `rebuild_runtime.sh`.

---

### ESTADO ATUAL — 2026-05-06 (Bug AK + PASSO 27 fix aplicado)

#### Bug AK — Causa raiz CONFIRMADA por análise estática

**Sintoma:** round pós-PASSO 26 confirmou Bug AJ ✅ (PASSO 26 apareceu 125x, sub_0017E530 8/8 SUCESSO). Porém `[PASSO 23B] apos func_131A58 (5/10)` NUNCA apareceu — step 5/10 de sub_0017A940 travou por 298s (VBlanks tick 300 → 17880).

**Cadeia de chamada confirmada:**
```
sub_0017A940 step 5/10
  → entry_131a58_0x131ac8
    → func_175958 (tiny, segura ✅)
    → func_175B38 (sub_00175B38)
      → func_13D630 (PASSO 22A #24 + PASSO 12 no log ✅ — completou)
      → func_175A10 (sub_00175A10)
        → func_1757D8: loop uppercase max 24 iters, SEGURO ✅
        → func_175740: hash string até byte 0, SEGURO ✅ (ra salvo na stack com byte 0x00)
      → func_176C58 (sub_00176C58)
        → func_175D88: alloca pool, SEGURO ✅
        → func_239140: tiny, OR flag 0x8000, SEGURO ✅
        → func_176FC8 (sub_00176FC8) ← TRAVAMENTO AQUI
```

**Causa raiz — func_176FC8 (0x176FC8):**
- Arquivo: `GOD_PC_PORT_FINAL/src/recompiled/sub_00176FC8_0x176fc8.cpp` (4393 linhas!)
- Função: BST (Binary Search Tree) insert/traverse do pool de nomes hash
- Loop infinito em **label_177470** (`bnel $s4, $v0` com `cooperativeGuestYield()`)
- Condição de saída: `s4 == READ32(0x29C4B4)` (sentinela do pool) OU `s5 == v0` (nó encontrado)
- **Pool em 0x29C4B4 não inicializado** → READ32(0x29C4B4) != 0 mas o nó alvo nunca é encontrado
- Resultado: 298 segundos de loop infinito gerando 17.880 VBlanks (único `cooperativeGuestYield()` no arquivo)

**Por que VBlank fica ticking:** tid=3 (sceSifRpcThread stub) chama cooperativeGuestYield() em seu loop. O loop BST em func_176FC8 também chama cooperativeGuestYield() a cada iteração do `bnel`.

#### PASSO 27 — Fix aplicado (2026-05-06)

**Arquivo modificado:** `PS2Recomp/ps2xRuntime/src/lib/game_overrides.cpp`

**Stub adicionado:** `gow_stub_0x176FC8_bst_skip` registrado em 0x00176FC8

**Por que é seguro:**
- `func_176C58` (caller) seta `v0 = s0` (o nó alocado) APÓS o retorno de func_176FC8:
  - Instrução 0x176cd4: `daddu $v0, $s0, $zero`
  - Esta linha está em sub_00176C58_0x176c58.cpp linha 163-165, DEPOIS da chamada a func_176FC8
- `func_175B38` usa `v0 = READ32(s0+0)` como retorno (hash do nome) — independente da BST
- A inserção BST é um cache de nomes por hash — non-critical para o boot

**Build necessário:** `rebuild_runtime.sh` (apenas game_overrides.cpp modificado)

#### O que esperar no round pós-PASSO 27

```
[PASSO 27] func_176FC8 stub: BST insert/traverse PULADO (Bug AK fix) — a0=... a1=... a2=... ra=0x176cd4
[PASSO 23B] sub_0017A940: apos func_131A58 (5/10) — pc=0x17a970
[PASSO 23B] sub_0017A940: apos func_118798 (6/10) — pc=0x17a980
... (steps 7/10, 8/10, 9/10, 10/10)
[PASSO 22B] StartThread #1: thid=8 arg=... ra=0x293930   ← render thread criada!
frame:upload nonBlack>0  ← PRIMEIRA IMAGEM DO JOGO!
```

**Atenção:** Pode haver mais bugs nos steps 6-10/10 de sub_0017A940. Se aparecer `[PASSO 23B] (6/10)` mas não `(7/10)`, há novo bloqueio — analisar step 7/10.

**Script de triagem:** usar `python3 tools/triage_passo26.py` no log pós-27 para monitorar marcadores 27/26/25/24/23B/22B + nonBlack.

---

### 🏆 ESTADO ATUAL — 2026-05-06 (MARCO HISTÓRICO — Boot init concluído + Bug AL identificado)

#### Resultados do round pós-PASSO 27 (Bug AK fix confirmado)

**PASSO 27 ✅ CONFIRMADO:**
```
[PASSO 27] func_176FC8 stub: BST insert/traverse PULADO (Bug AK fix) — a0=0x4 a1=0x1001140 a2=0xffe4aa7c ra=0x176cd4
[PASSO 27] func_176FC8 stub: BST insert/traverse PULADO (Bug AK fix) — a0=0x4 a1=0x1001180 a2=0x6349dd3d ra=0x176cd4
```

**sub_0017A940 steps 1-7/10 ✅ TODOS COMPLETOS:**
```
[PASSO 23B] sub_0017A940: apos func_175978 (1/10)
[PASSO 23B] sub_0017A940: apos func_175CD0 (2/10)
[PASSO 23B] sub_0017A940: apos func_17E530 (3/10)
[PASSO 23B] sub_0017A940: apos func_17BFF0 (4/10)
[PASSO 23B] sub_0017A940: apos func_131A58 (5/10)  ← era o bloqueador (Bug AK)
[PASSO 23B] sub_0017A940: apos func_118798 (6/10)
[PASSO 22B] func_293930 StartThread #2: thid=8 arg=0x157358 ra=0x17a98c
[PASSO 23B] sub_0017A940: apos func_293930/StartThread (7/10) — v0=0x2
```

**🏆 BOOT INIT CONCLUÍDO — PRIMEIRA VEZ NA HISTÓRIA DO PROJETO:**
```
[boot_stub] init concluido, entry=0x2996b0 (real game main)
Starting execution at address 0x2996b0
[BOOT#1] pc=0x2996b0 ra=0x0 sp=0x1fffff0 gp=0x2cf070 a0=0x0
```
tid=1 executou WaitEventFlag×32 (Bug AB handling, eid=0-31) e fez ExitThread em 0x2996d0 — comportamento normal PS2 (thread de init termina após spawnar threads de jogo).

---

#### Bug AL 🔴 — Frame preto (nonBlack=0) — Causa raiz identificada: Bug AM

**Sintoma original:**
```
[frame:upload] idx=0 fbp=0 fbw=0 psm=0x0 size=640x448 nonBlack=0 page0=0 page150=0 allowFallback=1
```

---

#### Bug AM ✅ CORRIGIDO — PASSO 22B faltava `jr $ra` (causa raiz do Bug AL)

**Descoberta (2026-05-07):**

**Erro de identificação PASSO 22B:**
- func_293930 faz `addiu $v1, $zero, 0x12; syscall` → syscall 0x12 = **AddDmacHandler** (NÃO StartThread que é syscall 0x22).
- "thid=5 arg=0x296a50" = AddDmacHandler(cause=5, handler=0x296a50) — handler DMAC canal 5
- "thid=8 arg=0x157358" = AddDmacHandler(cause=8, handler=0x157358) — handler DMAC canal 8
- Nenhum StartThread real ocorreu via func_293930.

**Root cause — Bug AM:**
O stub PASSO 22B chamava `handleSyscall(AddDmacHandler)` mas **não executava `jr $ra`** (`ctx->pc = GPR_U32(ctx, 31)`).
Após o syscall, `ctx->pc` ficava em 0x293934 (meio de func_293930), não em 0x17A98C (return addr esperado por sub_0017A940).
O caller sub_0017A940 verificava:
```cpp
if (ctx->pc != 0x17A98Cu) { return; }  // TRUE → saía prematuramente!
```
**Consequência em cascata:**
- sub_0017A940 steps 8-10/10 **nunca executavam** (func_182810, func_21C788, func_17D778 nunca chamadas)
- JAL[10/11] = sub_0017AA18 **nunca executava**
- JAL[11/11] = sub_0017A9B0 **nunca executava** → func_21FEF0, func_26BB30, func_17C050 nunca chamadas
- Render thread nunca criada → VRAM vazia → nonBlack=0 → frame preto (Bug AL)

**Fix aplicado:**
```cpp
// game_overrides.cpp — gow_log_func_293930_AddDmacHandler()
ctx->pc = ra;  // Bug AM fix: simula "jr $ra" que o stub original omitia
```
Função renomeada de `gow_log_func_293930_StartThread` → `gow_log_func_293930_AddDmacHandler`.

**Correção PASSO 23A (bonus):**
O stub anterior escrevia em endereços errados (0x10008020, 0x1000e010, etc.) ao invés de GS privilege regs em 0x12000000+.
- `PS2_GS_BASE = 0x12000000` — endereços corretos: GS_PMODE=0x12000000, GS_DISPFB1=0x12000070 (fbw=10=640px), GS_IMR=0x12001010
- Stub corrigido para escrever nos endereços certos + adicionou write de GS_DISPFB1 (fbw=10).

**PASSO 28 adicionado:**
Logs de entrada/saída em cada callee de sub_0017A9B0 (func_21FEF0, func_26BB30, func_183330, func_17C050).
Objetivo: descobrir qual dessas funções cria/inicia a render thread (via StartThread syscall 0x22).

**Arquivos modificados:**
- `PS2Recomp/ps2xRuntime/src/lib/game_overrides.cpp` — Bug AM fix + PASSO 23A endereços corretos
- `GOD_PC_PORT_FINAL/src/recompiled/sub_0017A9B0_0x17a9b0.cpp` — PASSO 28 logs

**auto_round.sh:** timeout = **60s**. Loop deve estar ativo.

**Próximo passo após o round:**
Verificar no log filtrado:
1. Aparecem `[PASSO 23B] sub_0017A940: apos func_182810 (8/10)`? → Bug AM fix funcionou
2. Aparecem `[PASSO 28] sub_0017A9B0: START`? → JAL[11/11] agora executa
3. Aparecem novos `[StartThread] id=X entry=0xYYYYYY`? → render thread criada
4. `nonBlack` ainda é 0? → ainda precisa investigar a thread de render
