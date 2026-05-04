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

## 🟢 ESTADO ATUAL — LEIA ISTO PRIMEIRO (atualizado 2026-05-04 — PASSO 7A+7B aplicados)

### ✅ Bugs K, L, M, N, O, X, P, Z, AB — RESOLVIDOS
### ✅ Bug Y — RESOLVIDO em sub_00297290 (*(s1+0x24)=1, v0=1 — simula IOP ack)
### ✅ PASSO 5 — CONFIRMADO FUNCIONANDO (CreateSema=9 confirma que PASSO 5+6 passaram)
### ✅ PASSO 6 — CONFIRMADO FUNCIONANDO (sub_0027A810 saiu rápido; sub_0027C100 atingida)
### ✅ entry_1389d8 — HOOKS ADICIONADOS (START/renderer_type/DONE)
### ✅ scan_7th_floor.py — NOVA ferramenta (análise estática pré-round)
### ✅ triage_round.py — ATUALIZADO (seção 7TH FLOOR CHAIN + detectores novos)
### 🟡 PASSO 7A — APLICADO em sub_00294AF8 (força StartThread da Thread 0x27CBD0)
### 🟡 PASSO 7B — APLICADO em sub_00283570 (força sceSifSetDma retorno=1 se =0)
### 🔴 PASSO 6B — APLICADO em sub_00297290 (força v0=1 quando func_296E10 retorna s0=0)
### 🔴 CAUSA RAIZ ROUND ATUAL — func_296E10 exaure slots RPC → s0=0 → v0=-1 → spin 17000 ticks
### 🔴 AGUARDANDO ROUND — Push + bash recompilar.sh + round + python3 tools/triage_round.py

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

**O que esperar no próximo round:**
- `[sub_0027C100] CreateThread(entry=0x27CBD0) ret=X` → mostra se CreateThread OK ou falha
- `[PASSO 7A] sub_00294AF8: ReferThreadStatus sp+0=0x... != 0x10 -- forcando v3=0x10` → confirma fix
- `[sub_00294AF8] StartThread(tid=X) chamando agora` → confirma thread iniciada
- `[sub_00283570] START` → confirma que sub_00283570 é chamado
- `[PASSO 7B] sub_00283570: sceSifSetDma retornou 0 -- forcando s0=1` → confirma fix se necessário
- **Objetivo:** ver `[sub_0027C100] DONE` + `[sub_00283570]` completo + `[entry_1389d8] START`

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
