# God of War PC Port — 🏛️ OPERAÇÃO ESPARTA

Port estático do God of War (PS2) para PC usando o PS2Recomp.

## Run & Operate

- **Local path:** `~/Documentos/GitHub/godofwar/`
- **Incremental build (C++ changed):** `git pull origin main && bash recompilar.sh`
- **Runtime-only build:** `bash rebuild_runtime.sh --run`
- **Run with trace logs:** `PS2_TRACE=1 bash jogar.sh 2>&1 | tee log_teste.txt`
- **Read latest filtered log:** `curl -s "https://raw.githubusercontent.com/cristianomarianoufsc-ops/godofwar/logs/auto/runs_automaticos/log_latest_filtered.txt"`
- **Read latest full log:** `curl -s "https://raw.githubusercontent.com/cristianomarianoufsc-ops/godofwar/logs/auto/runs_automaticos/log_latest_full.txt"`
- **Required env vars:** `PS2_TRACE` (for verbose logs), `PS2_MISSING_LOG` (for missing function reports).

## Stack

- **Target Language:** C++20
- **Source:** MIPS R5900 (PS2 ELF `SCUS_973.99`)
- **Recompiler:** PS2Recomp
- **Runtime:** `ps2xRuntime` (custom PS2 hardware emulation)
- **Build System:** CMake
- **Build Tool:** `g++` (on Linux Mint)
- **Caching:** `ccache`

## Where things live

- **Recompiled game functions:** `GOD_PC_PORT_FINAL/src/recompiled/`
- **Main entry point:** `GOD_PC_PORT_FINAL/src/main.cpp`
- **Function registration:** `GOD_PC_PORT_FINAL/src/register_functions.cpp`
- **Game-specific stubs/overrides:** `PS2Recomp/ps2xRuntime/src/lib/game_overrides.cpp`
- **PS2 Syscall implementations:** `PS2Recomp/ps2xRuntime/src/lib/ps2_syscalls.cpp` and `PS2Recomp/ps2xRuntime/src/lib/syscalls/*.inl`
- **PS2 Runtime core:** `PS2Recomp/ps2xRuntime/src/lib/ps2_runtime.cpp`
- **PS2 Stub definitions:** `PS2Recomp/ps2xRuntime/src/lib/stubs/ps2_stubs_misc.inl`
- **Development tools:** `tools/` directory (see inventory)
- **Automatic run script (Cris's PC):** `auto_round.sh`
- **Truncation overrides for recompiler:** `tools/truncation_overrides.csv`
- **Discovered functions for recompiler:** `tools/discovered_functions.csv`
- **Reacherbility analysis seeds:** `tools/reachable_seeds.txt`
- **Missing function report:** `ps2_missing.log`

## Architecture decisions

- **Dual-directory `src/recompiled/` trap:** The build system links `GOD_PC_PORT_FINAL/src/recompiled/`, not `./src/recompiled/`. Always edit files in the former.
- **Automated feedback loop:** A `main` branch commit triggers an automatic build/run cycle on Agent Cris's PC, pushing logs to a `logs/auto` branch for analyst retrieval. This avoids manual log sharing.
- **Strict communication protocol:** All interactions use a spy/action narrative with specific roles and a three-layered explanation structure (espionage, car analogy, technical) to aid understanding.
- **Universal PS2→PC portability vision:** New tools and runtime features should be designed modularly with external configuration to be reusable for other PS2 ports, not just God of War.
- **Separated build targets:** Game functions (`gow_recompiled`) and runtime (`ps2runtime`) are separate static libraries, enabling fast iterative development on the runtime.

## Product

- Static port of God of War (PS2) to native C++20 on PC.
- Emulates PS2 hardware (`ps2xRuntime`) to run recompiled MIPS functions.
- Aims for a playable PC version of the original PS2 game.

## User preferences

- **Idioma:** toda comunicação no chat e títulos de commit em **português brasileiro**.
- **Compilação:** feita exclusivamente no PC do usuário (Linux Mint, `~/Documentos/GitHub/godofwar/`).
- **Narrativa por analogia:** obrigatória — ver seção "📖 ANALOGIAS DO PROJETO" abaixo.
- **NÃO RODE `bash build.sh`. NÃO RODE `bash rebuild_runtime.sh`. NÃO RODE `bash recompilar.sh`. NÃO RODE `bash setup_linux.sh`. NÃO RODE `bash instalar_linux_mint.sh`. NÃO RODE `bash jogar.sh`. NÃO RODE `cmake` NEM `make`.**
- **NÃO iniciar o workflow `Start application`** — imprime só aviso intencional.
- **Sempre que fizer qualquer progresso — fix aplicado, bug identificado, teste rodado, causa raiz descoberta — atualize OBRIGATORIAMENTE os dois arquivos:** `replit.md` e `HANDOFF_AGENT.md` (no mesmo commit).
- **Sempre que editar código que precisa rodar, encerrar a resposta pedindo o push.** Documentação pura pode ir em lote.
- **NUNCA feche o loop `auto_round.sh loop` para rodar outro comando.** Se precisar rodar algo manual, abra Terminal 2 separado.
- **NÃO pedir log ao Agente Cris.** Os logs são enviados automaticamente para o GitHub.

## Estado atual do boot (2026-05-06)

- **Jogo roda por 300s** (limite do auto_round.sh) — SIGINT final é timeout, não crash
- **activeThreads=2** após ExitThread de tid=1: tid=2 (IOP loader) + tid=3 (sceSifRpcThread stub)
- **PASSO 22C ✅ confirmado:** 133 forges (não 13 — loop maior que esperado), todos com `ra=0x13d954`. Heap OK.
- **entry_1389d8 ✅:** DONE + renderer_type=0x2 confirmados neste round.
- **Bug AG 🔴 identificado e fixado (PASSO 23A):** `0x1838d0` (JAL[5/11]) era label DENTRO de `entry_183878_0x183948`, não registrado como entry point → NAO REGISTRADA → GS registers nunca escritos → fbp=0, fbw=0 → tela preta. Fix: stub em `game_overrides.cpp` escreve PMODE/SMODE1/DISPLAY1/2/IMR.
- **PASSO 23B 🔴 aplicado:** logs em `sub_0017A940_0x17a940.cpp` após cada uma das 10 chamadas (175978→175CD0→17E530→17BFF0→131A58→118798→293930→182810→21C788→17D778) — para identificar onde trava (JAL[9/11] nunca retornou em 300s).
- **PASSO 23C 🔴 aplicado:** stub para `0x283770` (JAL[1/11] guard de init 0x326940).
- **GREP_PATTERN:** adicionado `PASSO 23|sub_0017A940` ao auto_round.sh
- **Próximo:** aguardar round pós-PASSO 23 — esperar `[PASSO 23A]` + `[PASSO 23B] sub_0017A940: apos func_XXX (N/10)` para pinçar onde trava + `nonBlack>0`

## Gotchas

- **Critical `src/recompiled/` directories:** Edits to `./src/recompiled/` are ignored; always modify `GOD_PC_PORT_FINAL/src/recompiled/`.
- **`git push` is manual:** Replit auto-checkpoints but doesn't auto-push. Agent Cris must manually click "Push" in the Git sidebar.
- **Never run `bash build.sh`:** This recompiles all 5,626 `.cpp` files, taking ~80 minutes and consuming resources unnecessarily. `recompilar.sh` is for incremental builds.
- **`git fetch` is blocked locally:** Always use `curl raw.githubusercontent.com` to access GitHub content (e.g., logs).
- **Truncated functions:** Many functions are initially truncated by the recompiler and require manual fixes or `truncation_overrides.csv` entries and `regen_truncated.sh`. This is a common source of bugs.
- **"Error during program execution: PS2 Thread Exit"** no log = ExitThread normal de tid=1, não erro fatal.
- **SIGINT (sinal 2) no final** = timeout de 300s do auto_round.sh, não crash do jogo.

## Pointers

- **Previous sessions/context:** `HANDOFF_AGENT.md`
- **Historical bug details (A-J):** `replit_HISTORICO.md`, `HANDOFF_HISTORICO.md`
- **Detailed workflow explanation:** `HANDOFF_AGENT.md` → "FLUXO AUTOMATIZADO"
- **GitHub repository:** `https://github.com/cristianomarianoufsc-ops/godofwar/`
- **Ghidra:** For MIPS R5900 disassembly and analysis of the PS2 ELF.