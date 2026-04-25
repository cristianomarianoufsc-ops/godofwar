# Manual de Transferência — God of War PS2 PC Port

> **Para o próximo agente:** Este documento contém TUDO que você precisa saber para continuar este projeto. Leia até o fim antes de tocar em qualquer código. O usuário fala português brasileiro — responda nele.

---

## 1. Contexto do projeto

### O que o usuário quer
Rodar **God of War (PS2, NTSC-U, SCUS_973.99) nativamente no PC** (Linux Mint principal, Replit secundário) **sem usar emulador**. A ideia é usar **recompilação estática MIPS→C++** — a mesma técnica que projetos como N64Recomp (Majora's Mask PC) e Mario 64 PC usam.

### Por que não é trivial
- **N64Recomp funciona** porque o N64 é simples (1 CPU MIPS + RSP).
- **PS2Recomp é experimental** porque o PS2 tem hardware muito mais complexo (Emotion Engine + 2 Vector Units + GS + IPU + IOP).
- **Nenhum port estático completo de PS2 existe publicamente.** Este projeto é fronteira da engenharia reversa.

### Status atual: TELA PRETA
O executável compila e roda, mas mostra tela preta. PC fica preso em `0x100088`, SP/GP/RA = 0, sem atividade DMA/GIF/GS.

---

## 2. Estrutura do projeto

```
/home/runner/workspace/
├── PS2Recomp/                          # Framework de recompilação (submodule)
│   ├── ps2xRuntime/
│   │   ├── src/lib/
│   │   │   ├── ps2_runtime.cpp         # ⭐ CRÍTICO: 2270 linhas, dispatchLoop + run()
│   │   │   ├── ps2_syscalls.cpp        # 5 TODOs/stubs
│   │   │   ├── ps2_stubs.cpp           # 21 TODOs/stubs
│   │   │   ├── ps2_memory.cpp
│   │   │   ├── ps2_iop.cpp             # IOP (I/O Processor) - incompleto
│   │   │   ├── ps2_vu1.cpp             # Vector Unit 1
│   │   │   ├── ps2_gs_gpu.cpp          # Graphics Synthesizer
│   │   │   └── game_overrides.cpp
│   │   └── include/
│   │       ├── ps2_runtime.h
│   │       └── ps2_memory.h            # PS2_RAM_SIZE = 32MB
│   └── tools/ps2recomp/                # Ferramenta que gera o C++ a partir do MIPS
│
├── GOD_PC_PORT_FINAL/
│   ├── data/
│   │   ├── SCUS_973.99                 # ELF original do God of War (MIPS)
│   │   └── part1.pak                   # 4GB, dados do jogo (NÃO está no git)
│   ├── src/
│   │   ├── main.cpp                    # Inicia raylib, carrega ELF, chama runtime.run()
│   │   └── recompiled/                 # 5.627 arquivos .cpp gerados pelo PS2Recomp
│   │       ├── entry_0x100008.cpp      # ⭐ Entry point do ELF
│   │       └── entry_*.cpp             # Outras 5.626 funções
│   └── CMakeLists.txt
│
├── build/
│   └── GodOfWarPCPort                  # Executável final (compila OK)
│
├── build.sh                            # ⭐ Script de build (atualizado p/ ser resumível)
├── replit.md                           # Memória do projeto
└── HANDOFF_AGENT.md                    # ⭐ Este documento
```

---

## 3. O que JÁ FOI FEITO

### ✅ Setup do ambiente Replit
- `gdown` instalado via pip
- `part1.pak` (4GB) baixado para `GOD_PC_PORT_FINAL/data/`
- Workflow `Start application` configurado para rodar `bash build.sh`

### ✅ Build resumível
- `build.sh` foi modificado para pular `cmake` se `CMakeCache.txt` existe
- Build inicial leva HORAS (5.626 .cpp para compilar). Builds incrementais são rápidos.

### ✅ Compilação completa
- Todos os 5.626 arquivos C++ compilam sem erro
- Executável gerado: `build/GodOfWarPCPort`
- Linka com raylib, OpenAL, etc.

### ✅ Investigação do bug de tela preta (FEITA — leia seção 5)
Identifiquei a causa raiz do PC preso em 0x100088. Ver seção 5.

### ✅ Fix do Bug C ($gp = 0) — SESSÃO 2026-04-25 (agente 3)
**Diagnóstico:** após o Bug A/B serem fixados, o jogo avançou para `0x1003c0` e entrou em loop
infinito em `0x100E28`. Causa: `$gp=0` (global pointer zerado pelo crt0). Todo acesso a variáveis
globais via `$gp+offset` lia zero, incluindo `global@0x32E854` e `jalr_target`.

**Fixes aplicados:**
1. `entry_0x100008.cpp` — adicionado `SET_GPR_VEC(ctx, 28, 0x2cf070)` após o bloco de zeragem
2. `ps2_runtime.cpp` — boot stub reativado por padrão (era opt-in, agora opt-out via `PS2_NO_BOOT_STUB=1`)
3. `ps2_runtime.cpp` — `$gp=0x2cf070` configurado ANTES da cadeia de init no boot stub

**Raciocínio:** o boot stub precisa rodar para popular globals em BSS (como `0x32E854`) via
cadeia de init (`0x2994a0`, `0x293ea0`, `0x138cb0`). Sem isso, mesmo com `$gp` correto, os
ponteiros de função em BSS ficam 0 e o jogo entra em loop. A cadeia de init também precisa de
`$gp` correto para funcionar, daí o setup antes do loop de init.

### ✅ Sincronização local
- Usuário tem o mesmo projeto em `~/Documentos/GitHub/godofwar` no Linux Mint
- Mudanças via git push/pull
- Usuário rodou `instalar_linux_mint.sh` localmente

---

## 4. O que NÃO FOI FEITO (próximos passos)

Em ordem de prioridade:

1. **🔴 URGENTE: Testar o fix do Bug C ($gp) + boot stub reativado** — fazer git pull e rodar para ver o próximo erro
2. **🟡 Implementar syscalls/stubs faltantes** (5 em ps2_syscalls.cpp + 21 em ps2_stubs.cpp)
3. **🟡 Inicializar IOP** para carregar `part1.pak` corretamente
4. **🟢 Testar e debugar** o boot real do jogo
5. **🟢 Implementar Vector Units (VU0/VU1)** se necessário para gráficos

---

## 5. Bug de tela preta — DIAGNÓSTICO COMPLETO

### Sintomas observados
```
[run:tick] tick=185880 pc=0x100088 ra=0x0 sp=0x0 gp=0x0
   dma=0 gif=0 gsw=0 vif=0 ...
```

### Causa raiz (DESCOBERTA)

**Bug A — no recompilador (PS2Recomp/tools/ps2recomp):**

A função `entry_0x100008` (em `GOD_PC_PORT_FINAL/src/recompiled/entry_0x100008.cpp`) cobre os endereços `0x100008` a `0x10008c`. Ela faz EXATAMENTE o que o ELF original do PS2 faz: **zera todos os 32 registradores** (incluindo SP, GP, RA), HI, LO, etc.

A última instrução está em `0x100088` (`mtlo1 $zero`). A função termina assim:

```cpp
// 0x100088: 0x70000013  mtlo1 $zero
ctx->pc = 0x100088u;        // ← BUG: deveria ser 0x10008c
ctx->lo1 = GPR_U64(ctx, 0);
}
```

O recompilador deveria ter colocado `ctx->pc = 0x10008cu` (próxima instrução) no fim, mas deixou `0x100088` (última instrução). Como **não existe função registrada para 0x100088**, o `dispatchLoop` chama a `defaultFunction` que tenta recovery via RA/SP, mas como ambos são zero (foram zerados pelo próprio entry), **fica em loop infinito**.

**Bug B — no runtime:**

Em `ps2_runtime.cpp::run()` linhas 2078-2080, o runtime configura SP corretamente:
```cpp
m_cpuContext.r[29] = _mm_set_epi64x(0, static_cast<int64_t>(PS2_RAM_SIZE - 0x10u));
```

Mas a primeira coisa que o ELF faz é zerar esse SP. Num PS2 real, o **kernel da Sony** prepara SP/GP/RA **DEPOIS** que o programa executa o boot. O runtime deveria simular isso.

### Por que isso acontece
O ELF do God of War assume que o kernel da PS2 (executado antes) deixa registradores prontos. O recompilador trata o ELF como código standalone, então a primeira coisa é zerar tudo. O kernel real depois sobrescreve. Aqui não tem kernel, então fica zerado.

### Fix proposto (NÃO APLICADO AINDA)

#### Fix 1: Pular o bloco de zeragem inicial OU sobrescrever após ele

Em `PS2Recomp/ps2xRuntime/src/lib/ps2_runtime.cpp::run()`, **DEPOIS** de chamar dispatchLoop a primeira vez para o entry block, **OU** modificar a entry function. Sugestão pragmática: detectar PC=0x100088 (fim do entry block), setar SP/GP/RA corretos, e forçar PC=0x10008c.

```cpp
// DENTRO de dispatchLoop, ANTES de "if (ctx->pc == 0u) break;"

// Detecta fim do entry block do God of War
if (ctx->pc == 0x100088u) {
    // Avança PC para próxima instrução (fix do Bug A)
    ctx->pc = 0x10008cu;

    // Configura SP/GP/RA como o kernel da PS2 faria (fix do Bug B)
    m_cpuContext.r[29] = _mm_set_epi64x(0, static_cast<int64_t>(PS2_RAM_SIZE - 0x10u)); // SP
    // GP precisa vir do símbolo _gp do ELF — por ora, deixar zero ou tentar valor padrão
    // RA = 0 é OK (programa não tem caller)
}
```

⚠️ **Atenção:** Esse fix é específico pro entry do God of War. Uma solução mais robusta seria descobrir como o PS2Recomp gera o PC final para outras funções e arrumar lá. Mas pra teste rápido, o hack acima serve.

#### Fix 2 (alternativa mais limpa): editar a entry function direto

Editar `GOD_PC_PORT_FINAL/src/recompiled/entry_0x100008.cpp` no fim:
```cpp
// Após a última instrução
ctx->pc = 0x10008cu;  // ← adicionar isto
}
```

E em `ps2_runtime.cpp::run()`, configurar SP/GP DEPOIS de chamar dispatchLoop pela primeira vez (mais complicado por causa da thread).

---

## 6. Como compilar e testar

### No Replit
```bash
bash build.sh
# Aguarda compilação (rápida se incremental)
# Executa automaticamente o jogo após compilar
```

### No Linux Mint do usuário
```bash
cd ~/Documentos/GitHub/godofwar
bash build.sh
./build/GodOfWarPCPort
```

### Logs importantes
- `[run:tick]` — sai a cada 120 ticks com PC, SP, RA, GP, contadores DMA/GIF
- `[BOOT#N]` — primeiros 300 dispatches da CPU emulada
- `[dispatch:first-bad-pc]` — quando PC vai para endereço sem função
- `[dispatch:recover-pc]` — quando defaultFunction tenta recuperar
- `Warning: Function at address 0x... not found` — função não recompilada

### Como ativar tracing detalhado
```bash
PS2_TRACE=1 ./build/GodOfWarPCPort
```

---

## 7. Arquivos importantes para entender

### Para o bug de tela preta
- `PS2Recomp/ps2xRuntime/src/lib/ps2_runtime.cpp`
  - Linha 713: `loadELF()` — carrega o ELF, define PC inicial
  - Linha 1023: `lookupFunction()` — busca função por endereço, defaultFunction quando não encontra
  - Linha 1770: `dispatchLoop()` — loop principal de execução MIPS emulada
  - Linha 2072: `run()` — inicializa contexto e cria thread do jogo
- `GOD_PC_PORT_FINAL/src/recompiled/entry_0x100008.cpp` — função que zera registradores

### Para entender o sistema de syscalls
- `PS2Recomp/ps2xRuntime/src/lib/ps2_syscalls.cpp` — 5 stubs (`grep -in "TODO\|stub"`)
- `PS2Recomp/ps2xRuntime/src/lib/ps2_stubs.cpp` — 21 stubs

### Para entender o IOP (carregamento de arquivos)
- `PS2Recomp/ps2xRuntime/src/lib/ps2_iop.cpp`
- `PS2Recomp/ps2xRuntime/src/lib/ps2_iop_audio.cpp`

---

## 8. Restrições do ambiente Replit

- `.replit` e `replit.nix` são **read-only** — use as funções de instalação de pacote, não edite manualmente
- Não tem GPU dedicada — raylib roda em software
- `part1.pak` (4GB) **não está no git** (limite GitHub 100MB) — precisa baixar via workflow `Download part1.pak`
- Build completo demora horas — sempre prefira builds incrementais
- Dispositivos de áudio podem dar warning no Replit (sem áudio físico) — não é problema

---

## 9. Recursos externos para o próximo agente

### Documentação
- **PS2SDK** (kernel, syscalls): https://github.com/ps2dev/ps2sdk
- **PS2 Tool Reference Manual** (Sony, vazado, achável no archive.org)
- **EE Core Instruction Manual** (R5900): https://psi-rockin.github.io/ps2tek/
- **PS2 TEK** (referência completa do hardware): https://psi-rockin.github.io/ps2tek/

### Ferramentas
- **Ghidra** + plugin **EmotionEngine-Reloaded**: https://github.com/chaoticgd/ghidra-emotionengine-reloaded
  - Para disassemblar o `SCUS_973.99` e ver o assembly MIPS real
- **PCSX2** (referência de implementação correta): https://github.com/PCSX2/pcsx2

### Projetos similares de inspiração
- **N64Recomp**: https://github.com/N64Recomp/N64Recomp
- **Zelda 64 Recompiled**: https://github.com/Zelda64Recomp/Zelda64Recomp

---

## 10. Realismo

Sendo honesto com o usuário e com você, próximo agente:

- **PCSX2 levou 18 anos** com ~30 desenvolvedores para emular o PS2 direito.
- **Recompilação estática de PS2** é um problema aberto. Pode ser que NUNCA funcione 100%.
- O fix do bug de tela preta é **realista** e provavelmente vai funcionar, mas vai revelar o **próximo** bug imediatamente (provavelmente uma syscall não implementada que o jogo chama).
- O usuário sabe disso e topou continuar mesmo assim. Ele aprende muito no processo, mesmo que o jogo não rode.

**Não prometa que vai fazer o jogo rodar.** Prometa progredir, identificar bugs, implementar fixes. Cada bug fixado é um passo concreto.

---

## 11. Comunicação com o usuário

- Fala português brasileiro
- Prefere explicações claras, sem jargão excessivo
- Quer entender o que está acontecendo, não só receber código
- Está usando os créditos com cuidado — seja eficiente
- Já está frustrado com expectativas falsas de outros agentes — **seja honesto sobre limitações**
- Tem o projeto rodando em paralelo no Linux Mint local

---

## 12. Próxima ação recomendada

1. Ler este documento inteiro
2. Ler `replit.md`
3. Confirmar com o usuário que vai aplicar o fix do bug de PC preso (seção 5)
4. Aplicar o **Fix 2** (mais limpo) — editar `entry_0x100008.cpp` e `run()` em paralelo
5. Recompilar **só o runtime** (não os 5.626 .cpp do jogo): `cmake --build build --target ps2runtime`
6. Rodar e ver o próximo erro
7. Repetir

Boa sorte. 🎮
