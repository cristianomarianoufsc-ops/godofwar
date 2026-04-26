# Manual de Transferência — God of War PS2 PC Port

> **Para o próximo agente:** Este documento contém TUDO que você precisa saber para continuar este projeto. Leia até o fim antes de tocar em qualquer código. O usuário fala português brasileiro — responda nele.

---

## 🔴 REGRA OBRIGATÓRIA — LEIA ANTES DE QUALQUER COISA 🔴

**A cada progresso — fix aplicado, bug identificado, teste rodado, causa raiz descoberta — atualize OBRIGATORIAMENTE:**

1. `replit.md` — estado técnico atual, causa raiz, fix aplicado, comando de teste
2. `HANDOFF_AGENT.md` (este arquivo) — seção "ESTADO ATUAL" com data, o que mudou, próximos passos

**Os dois sempre. No mesmo commit. Sem exceção.**
Se você terminar a sessão sem atualizar os dois, o próximo agente vai perder horas repetindo diagnóstico já feito. Isso desperdiça os créditos do usuário.

---

## 📖 ANALOGIAS — atualize a cada sessão (estilo de chat = espionagem/ação)

O usuário pediu duas analogias paralelas pra acompanhar o progresso sem
precisar entender MIPS/syscalls/boot stub. **Tabela completa fica em
`replit.md` na seção "📖 ANALOGIAS DO PROJETO" — fonte da verdade.**
Aqui só o resumo do ponto atual; mantenha sincronizado.

**Carro:** chassi/combustível/injeção/chave de ignição prontos, motor
deu a 1ª partida e ronca (Fix 4+5 confirmados — janela abriu, GS recebeu
comandos) → 🟡 **AGORA: motor engasgou na 1ª marcha por causa de uma
mangueira solta (lista circular #2 não inicializada). Fix 6 aplicado;
aguardando teste**. Depois: carburador (gráficos/áudio/DMA) e test drive.

**Espionagem:** recrutamento, recon, entrada, sabotagem descoberta, porta
certa identificada (Fix 5) e **cofre ABERTO** (Fix 4+5 confirmados —
log mostra `GsPutIMR`, `GsSetCrt`, `SifInit`, janela raylib aberta) →
🟡 **AGORA: dentro do cofre, o 1º guarda interno foi neutralizado —
era o mesmo perfil de outro que já caiu no Fix 1 (lista circular vazia
não inicializada, agora em `0x2cbbb0` em vez de `0x2cf090`). Fix 6
aplicado; aguardando próxima sondagem do agente**. Depois: outros
guardas internos previstos (`SetupThread`, restantes do init chain) e
fuga com o alvo (jogo rodando).

> Estilo de narração padrão no chat com o usuário = **espionagem/ação**.
> Use frases como "abrir o cofre", "alarme disparou", "guarda interno",
> "trama paralela", "infiltração", quando explicar o que está acontecendo.

---

## 🔴 ESTADO ATUAL — LEIA ISTO PRIMEIRO (atualizado 2026-04-26 PARTE 2, sessão fix-6-sentinel-2)

### Status: BOOT AVANÇOU — Fix 4+5 confirmados, Fix 6 aplicado para destravar 13FAB8

**Confirmado pelo log do user (PC Linux Mint, 2026-04-26):**
- ✅ Fix 4 funcionou: `[boot_stub] init 0x138d48 (4o init, pre-main)` rodou.
- ✅ Fix 5 funcionou: entry chegou em `0x2996b0`, chain real do jogo executou.
- ✅ GS recebeu config: `PS2 GsPutIMR: Setting IMR=0xff00` + `PS2 GsSetCrt`.
- ✅ SIF inicializou: `279A40 (SifCheckInit?) → 2940B0 (SifInit?)`.
- ✅ Janela raylib abre instantaneamente (640x448, OpenGL 4.2 Mesa Intel HD 4000).
- 🚨 Travou em `sub_0013FAB8`: loop infinito (>6.7M iterações) buscando em
  lista encadeada cujo head em `0x2cbbb0` está zerado.

### Fix 6 — Sentinel lista circular #2 (NOVO, esta sessão)

**Arquivo:** `PS2Recomp/ps2xRuntime/src/lib/ps2_runtime.cpp` (logo após Fix 1).
**Diff:** inicializa `rdram[0x2cbbb0]` e `rdram[0x2cbbb4]` = `0x2cbbb0`
(lista duplamente encadeada vazia, head aponta pra si mesmo).

**Por que funciona:** `sub_0013FAB8` faz `if (head == 0x2cbbb0) goto insert_path`
para detectar lista vazia. Com Fix 6, essa condição é satisfeita imediatamente
e a função sai do loop e prossegue pra inserção do 1º nó.

**Razão raiz:** quem deveria inicializar essa lista é uma das funções não
registradas do init chain do `sub_00138D48` — provavelmente
`0x283770`, `0x17acb8`, `0x138b10` ou `0x1838d0` (todas marcadas como
`NAO REGISTRADA - skip` no log). Fix 6 contorna isso até essas funções
serem implementadas.

### Comando para testar Fix 6

```bash
cd ~/Documentos/GitHub/godofwar
git pull origin main
bash build.sh   # incremental, só ps2_runtime.cpp mudou (~30s)
PS2_TRACE=1 ./build/GodOfWarPCPort GOD_PC_PORT_FINAL/data/SCUS_973.99 2>&1 | tee log_fix6.txt
```

**Filtrar antes de mandar:**
```bash
grep -E "FIX 6|13FAB8|13FCA8|182FF0|frame:upload|nonBlack|ExitThread|SEGV|Segmentation|crash|panic|2996b0|293840" log_fix6.txt | head -150
wc -l log_fix6.txt
```

**Sinais de sucesso com Fix 6:**
- `[boot_stub] FIX 6: sentinel lista circular #2 inicializado em 0x2cbbb0` no boot
- `[13FAB8] sentinel_addr=0x2cbbb0 READ32(sentinel)=0x2cbbb0` (não `0x0`!)
- Loop NÃO aparece (ou aparece <10 iterações, não milhões)
- `13FAB8` retorna, `13FCA8` continua, `182FF0` continua
- Próximas funções do init aparecem no trace

**Possíveis novos guardas internos a aparecer depois do Fix 6:**
- Mais funções do init chain de `sub_00138D48` (JALs 6-11/11)
- `func_2996a8` ou `func_293840` (entry_2996b0 chama essas duas)
- Algum GS register não emulado
- Algum SIF callback faltando

---

## 🔴 ESTADO ANTERIOR (mantido para histórico) — sessão crt0-disassembly

### Status: BOOT REESCRITO — entry point corrigido para 0x2996b0 (real main do jogo)

**Três correções aplicadas nesta sessão:**

#### Fix 2 REVERTIDO (Fix 2 estava ERRADO)
`sub_001003C0_0x1003c0.cpp` linha ~129: `SET_GPR_U64(ctx, 5, 1u)` volta para `SET_GPR_U64(ctx, 5, 0u)`.

**Por que Fix 2 era errado:** com `a1=1`, `func_238860` chamava `free(struct_root=0x2cf070)` todo frame. Com `a1=0`, ela retorna imediatamente (noop). O MIPS original passa `a1=0`.

#### Fix 4 — Init chain completa: sub_00138D48 adicionado
`PS2Recomp/ps2xRuntime/src/lib/ps2_runtime.cpp` — boot stub agora chama `sub_00138D48` (0x138d48) após os 3 inits existentes. Esta é a 4ª função de init chamada pelo crt0 real (em 0x1001c0).

Argumentos corretos: `a0=0` (rdram[0x2c7080]=BSS=0), `a1=0x2c7084` (igual ao crt0).

#### Fix 5 — Entry point corrigido: 0x100008 → 0x2996b0
`ps2_runtime.cpp` — após a init chain, `m_cpuContext.pc` é setado para `0x2996b0` em vez de `0x100008`. **0x2996b0 é o real main do jogo**, confirmado pelo disassembly do crt0.

A0 passado para 0x2996b0 = valor de retorno de sub_00138D48 (v0/r2 após a chamada).

---

## 🔬 DIAGNÓSTICO DO CRT0 — DESCOBERTA DEFINITIVA (2026-04-26)

### O crt0 original (gap 0x10008c-0x1003bf) dissassemblado

O crt0 no gap do ELF foi dissassemblado com sucesso em Python (little-endian PS2 MIPS). A sequência real é:

```
0x10008c-0x100118: ctc1 (init FPU registers)
0x10011c-0x100140: loop zerando BSS (0x2c7080 → 0x35c1a8)
0x100148-0x100178: SetupThread syscall(0x3c):
    a0 = 0x2cf070  (_gp = struct root da thread)
    a1 = 0x1FF8000 (stack top)
    a2 = 0x8000    (stack size)
    a3 = 0x2c7080  (BSS start)
    t0 = 0x1001d8
0x100180-0x100194: SetupHeap syscall(0x3d):
    a0 = 0x35c1a8  (heap start)
0x100198: jal 0x2994a0  [1o init — NOSSO boot stub já faz]
0x1001a0: jal 0x293ea0  [2o init — NOSSO boot stub já faz]
0x1001a8: jal 0x138cb0  [3o init — NOSSO boot stub já faz]
0x1001c0: jal 0x138d48  [4o init — FIX 4, agora adicionado]
0x1001c8: j   0x2996b0  ← REAL MAIN DO JOGO [FIX 5, agora correto]
           com a0 = retorno de 0x138d48
```

**Antes do Fix 5:** nosso boot stub setava `pc = 0x100008` → `entry_0x100008` → saltava para `0x1003c0` (sub_001003C0), que é uma função INTERNA do scheduler, não o main do jogo.

**O gap também contém (0x100200-0x1003bc):** uma função secundária chamada de dentro do 4o init ou do game loop. Ela inicializa a struct de contexto com muitos campos, incluindo `sw $zero, 0x18($s3)` — confirma que rdram[0x2cf088] começa em 0 e é populado depois.

### Por que `rdram[0x2cf088]=0` não era o root cause

Era um SINTOMA. O root cause era que sub_001003C0 não é o main do jogo — é uma função interna de scheduler chamada pelo main via 0x2996b0 → func_293840. Com o Fix 5 (entry 0x2996b0), o boot segue o caminho correto e o jogo inicializa a struct normalmente.

### Funções-chave no caminho real

```
0x2996b0 = entry_2996b0_0x2996e0   [REAL GAME MAIN — agora é o entry]
  → jal 0x2996a8 (func_2996a8)
  → j   0x293840 (func_293840 = ExitThread se nenhuma tarefa criada)

0x138d48 = sub_00138D48_0x138d48   [4o init, 11 JAL internos]
  → jal 0x283770  [1/11]
  → jal 0x17aa88  [2/11]
  → jal 0x17acb8  [3/11]
  → jal 0x138b10  [4/11]
  → jal 0x1838d0  [5/11]
  → ... mais 6 JALs
  → retorna handle em v0
```

### PS2_FORCE_A0 — ainda válido ou não?

Com Fix 5, `entry_0x100008` NÃO É MAIS CHAMADO no path normal. O boot stub vai direto para 0x2996b0. A env var `PS2_FORCE_A0` fica como fallback caso `entry_0x100008` seja chamado de algum lugar inesperado, mas não é mais necessária para o boot normal.

---

## Histórico de Fixes (em ordem cronológica)

### Fix 1 — Sentinel da lista circular (CONFIRMADO FUNCIONANDO)
`rdram[0x2cf090]` = 0 → loop infinito em `sub_00100408`.
**Fix:** `ps2_runtime.cpp` boot stub: `rdram[0x2cf090] = rdram[0x2cf094] = 0x2cf090`.
**Ainda válido:** sim, mantido no boot stub.

### Fix 2 — a1=1 em func_238860 (FIX ERRADO — REVERTIDO)
Forçar `a1=1` fazia `free(struct_root=0x2cf070)` todo frame.
**Status:** REVERTIDO para `a1=0` (comportamento original MIPS).

### Fix 3 — Loop em sub_001003C0 (MANTIDO, LEGADO)
`cooperativeGuestYield() + goto label_1003ec` para manter janela aberta.
Com Fix 5, sub_001003C0 não é mais o entry principal — este fix é um fallback seguro.

### Fix 4 — sub_00138D48 no init chain (NOVO — 2026-04-26)
Adicionado ao boot stub com a0=0, a1=0x2c7084.

### Fix 5 — Entry point 0x100008 → 0x2996b0 (NOVO — 2026-04-26)
**A mudança mais importante.** Boot stub agora termina setando `pc=0x2996b0`.

---

## Comando para testar os novos fixes

```bash
# No Replit: workflow "Start application" já está rodando (build.sh)
# Para testar manualmente após o build:
PS2_FORCE_A0=0x2cf070 PS2_TRACE=1 ./build/GodOfWarPCPort GOD_PC_PORT_FINAL/data/SCUS_973.99 2>&1 | tee log_fix5.txt

# Procurar no log:
grep -E "boot_stub|138d48|2996b0|138D48|JAL|frame:upload|nonBlack" log_fix5.txt | head -50
```

**Sinais de sucesso com Fix 5:**
- `[boot_stub] init 0x138d48 (4o init, pre-main)` → 4o init rodou
- `[138D48] ENTRADA a0=0x00000000` → sub_00138D48 recebeu a0=0 correto
- `[138D48] JAL [1/11] -> 0x283770` → inits internos chamados
- `[boot_stub] entry=0x2996b0 (real game main)` → entry correto
- `[frame:upload]` com `nonBlack>0` → **ALGO FOI RENDERIZADO!**

**Se o jogo entrar em ExitThread imediatamente:**
`entry_2996b0` chama `func_293840` que pode ser ExitThread se nenhuma tarefa foi criada.
Fix: verificar o que `func_2996a8` e `func_293840` fazem — talvez precisem de subsistemas extras.

**Se `sub_00138D48` crashar (um dos 11 JALs não registrado):**
Verificar qual JAL falhou no log `[138D48] JAL [X/11] ... NAO REGISTRADA`.
Pode ser necessário adicionar stub para essa função.

---

## Estrutura do projeto

```
/home/runner/workspace/
├── PS2Recomp/
│   └── ps2xRuntime/src/lib/
│       └── ps2_runtime.cpp         ⭐ CRÍTICO: boot stub + dispatchLoop
│
├── GOD_PC_PORT_FINAL/
│   ├── data/
│   │   ├── SCUS_973.99             ELF PS2 (God of War NTSC-U)
│   │   └── part1.pak               4GB (dados do jogo, NÃO no git)
│   └── src/recompiled/             ⭐ EDITAR AQUI (não em ./src/recompiled/)
│       ├── sub_001003C0_0x1003c0.cpp  scheduler interno (Fix 2 revertido + Fix 3)
│       ├── entry_0x100008.cpp         PS2_FORCE_A0 fallback (ainda ativo)
│       ├── sub_00138D48_0x138d48.cpp  4o init (tem logging interno [138D48])
│       ├── entry_2996b0_0x2996e0.cpp  REAL GAME MAIN (novo entry point)
│       └── entry_131288_0x131300.cpp  func_131288: game engine update
│
├── build/GodOfWarPCPort            Executável final
├── build.sh                        Build incremental (safe para recompilar)
├── rebuild_runtime.sh              Build rápido só do runtime (~30s)
└── tools/analisa_log.py            Análise de logs com --diff
```

**ARMADILHA:** Há DOIS `src/recompiled/`:
- `GOD_PC_PORT_FINAL/src/recompiled/` → **USADO PELO BUILD** ← edite AQUI
- `./src/recompiled/` → **IGNORADO** pelo CMakeLists.txt

---

## Contexto do projeto

**Objetivo:** Rodar God of War (PS2, NTSC-U) nativamente no PC via recompilação estática MIPS→C++ (PS2Recomp + Raylib). Sem emulador.

**Hardware do usuário:** Linux Mint, Intel HD 4000, OpenGL 4.2.

**Por que é difícil:** PS2 tem arquitetura muito mais complexa que N64 (EE + VU0/VU1 + GS + IOP + DMA). Nenhum port estático de PS2 existe publicamente — este projeto está na fronteira da engenharia reversa.

**Descobertas de disassembly:**
- O ELF carrega em 0x100000, filesz=0x1c7018, memsz=0x25d080
- BSS vai de 0x2c7018 (ou 0x2c7080) até 0x35d080
- `_gp` = 0x2cf070 (global pointer, struct root da thread principal)
- Dispatch table em 0x32EC58 (BSS — zerada no boot, precisa ser preenchida pelos inits)
- O crt0 real chama SetupThread(0x2cf070,...) e SetupHeap(0x35c1a8,...)

**SetupThread syscall (0x3c)** — NÃO implementado ainda em ps2_syscalls.cpp. Por isso a struct em 0x2cf070 pode não estar totalmente inicializada como o real PS2 BIOS faria. Este pode ser o próximo bloqueador.

---

## Próximos passos prioritários

1. **🔴 Testar Fix 4 + Fix 5** — ver se o jogo avança além da tela preta
2. **🔴 Verificar func_293840** — se o jogo entrar em ExitThread: `entry_293840_0x293900.cpp` pode estar sendo tratado como syscall Exit em vez do game loop real
3. **🟡 Implementar SetupThread (syscall 0x3c)** em ps2_syscalls.cpp — inicializa struct em 0x2cf070 como o BIOS real faria
4. **🟡 Implementar SetupHeap (syscall 0x3d)** — inicializa heap em 0x35c1a8
5. **🟢 Investigar sub_00138D48 JALs** — se algum dos 11 JALs crashar, adicionar stub
