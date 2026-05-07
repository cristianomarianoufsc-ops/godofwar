# God of War PC Port — 🏛️ OPERAÇÃO ESPARTA

Port estático do God of War (PS2) para PC usando o PS2Recomp.

## Run & Operate

- **Local path:** `~/Documentos/GitHub/godofwar/`
- **Incremental build (C++ changed):** `git pull origin main && bash recompilar.sh`
- **Runtime-only build:** `bash rebuild_runtime.sh --run`
- **Run with trace logs:** `PS2_TRACE=1 bash jogar.sh 2>&1 | tee log_teste.txt`
- **Read latest filtered log:** `curl -s -H "Authorization: token ${GITHUB_TOKEN}" "https://raw.githubusercontent.com/cristianomarianoufsc-ops/godofwar/logs/auto/runs_automaticos/log_latest_filtered.txt"`
- **Read latest full log:** `curl -s -H "Authorization: token ${GITHUB_TOKEN}" "https://raw.githubusercontent.com/cristianomarianoufsc-ops/godofwar/logs/auto/runs_automaticos/log_latest_full.txt"`
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
- **Push automático:** após commitar, SEMPRE rodar `bash git_push.sh` — o `GITHUB_TOKEN` deve estar nos secrets do Replit. NÃO pedir ao Agente Cris para clicar em Push.
- **⚠️ GITHUB_TOKEN — VERIFICAÇÃO OBRIGATÓRIA:** O token NÃO fica em nenhum arquivo do projeto. Fica nos Secrets do Replit (pode ser perdido entre sessões). Antes de qualquer push, verificar com `viewEnvVars({ type: "secret", keys: ["GITHUB_TOKEN"] })` via code_execution. Se `false`, chamar `requestEnvVar` para pedir ao Agente Cris. Ver instruções detalhadas em `HANDOFF_AGENT.md → "FLUXO DE PUSH"`.
- **NUNCA feche o loop `auto_round.sh loop` para rodar outro comando.** Se precisar rodar algo manual, abra Terminal 2 separado.
- **NÃO pedir log ao Agente Cris.** Os logs são enviados automaticamente para o GitHub.

## Estado atual do boot (2026-05-07) — 🔧 Bug AS IDENTIFICADO — fix em discovered_functions.csv

- **auto_round.sh:** timeout = **60s** (era 300s).
- **Bug AK ✅** PASSO 27 confirmado — `func_176FC8` BST skip funcionando.
- **🏆 BOOT INIT CONCLUÍDO** — `entry=0x2996b0` alcançado, tid=1 fez ExitThread normalmente.
- **Bug AM/AN/AO/AP/AQ/AR ✅ TODOS CORRIGIDOS** — ver histórico abaixo.
- **Bug AR ✅ CONFIRMADO (round main@6585d1a, 2026-05-07_14:47):**
  - **HISTÓRICO:** JAL[1/11] a JAL[11/11] completados pela primeira vez! Todos os 11 JALs de sub_00138D48 passaram.
  - PASSO 32 salvou/restaurou $sp corretamente: `sp_atual=0x1fff6f0 sp_salvo=0x1ffffc0`.
  - PASSO 13 (JAL[10/11] = sub_0017AA18) ✅, PASSO 28 (JAL[11/11] = sub_0017A9B0) ✅ — 4 callees completos.
  - Boot: entry_2996b0 ✅, 32 WEF (Bug AB) ✅, ExitThread(tid=1) ✅.
  - `frame:upload fbp=0 fbw=0 nonBlack=0` — render thread nunca criada → novo bug identificado.
- **Bug AS ✅ IDENTIFICADO (2026-05-07) — causa raiz de nonBlack=0 após Bug AR fix:**
  - **Causa raiz:** `sub_001789E0` (0x1789E0) é uma função real do jogo retornada 34x pelo BST lookup (`func_1863B8`) dentro do PASSO 30 guard (sub_0017C628). A função NÃO estava em `discovered_functions.csv` → nunca compilada pelo PS2Recomp → `hasFunction(0x1789E0) = false` → PASSO 30 pula o jalr 34x. Sem essas chamadas: vtables dos 34 objetos do pool BST nunca inicializadas → render thread (tid=8 esperado) nunca criada → `nonBlack=0`.
  - Também `0x178BE8` apareceu 1x como variante do BST → adicionada também.
  - **Fix (discovered_functions.csv):** adicionadas linhas `discovered_0x1789e0` (520 bytes) e `discovered_0x178be8` (16 bytes). Próximo `recompilar.sh` compila ambas. PASSO 30 guard tem ramo `hasFunction → callFn` já implementado — chamará automaticamente quando registradas.
  - **Issue secundária:** `WRITE64(0x12000070, 0x1400)` em PASSO 23A escreve em `rdram[0x12000000+]` que é out-of-bounds (EE RAM = 32MB = 0x2000000). GS state da runtime não é atualizado via WRITE64. Não-crítico agora — quando render thread subir pelo caminho normal, fará GS setup via MMIO corretamente.
- **Threads criadas no round:** tid=1 (game main), tid=2 (IOP loader), tid=3 (sceSifRpc). Render thread (tid=8) ausente — esperada após fix Bug AS.
- **GREP_PATTERN:** inclui PASSO 27-32 e sub_0017A9B0 explicitamente.
- **Aguardando round pós-Bug AS:** verificar `sub_001789E0 chamada Nx`, novos `[StartThread]` (render thread tid=8), `nonBlack>0`.

## Gotchas

- **Critical `src/recompiled/` directories:** Edits to `./src/recompiled/` are ignored; always modify `GOD_PC_PORT_FINAL/src/recompiled/`.
- **`git push` is manual:** Replit auto-checkpoints but doesn't auto-push. Agent Cris must manually click "Push" in the Git sidebar.
- **Never run `bash build.sh`:** This recompiles all 5,626 `.cpp` files, taking ~80 minutes. `recompilar.sh` is incremental.
- **`git fetch` is blocked locally:** Always use `curl raw.githubusercontent.com` with `-H "Authorization: token ${GITHUB_TOKEN}"` to access GitHub content (required for private repo). Scripts Python (triage_round.py etc.) já usam `$GITHUB_TOKEN` automaticamente via `os.environ`.
- **Truncated functions:** Many functions are initially truncated by the recompiler and require manual fixes or `truncation_overrides.csv`.
- **"Error during program execution: PS2 Thread Exit"** no log = ExitThread normal de tid=1, não erro fatal.
- **SIGINT (sinal 2) no final** = timeout de 60s do auto_round.sh, não crash do jogo.
- **Stub sem `jr $ra` = retorno prematuro em cascata** (Bug AM): qualquer stub que chama `handleSyscall` mas não restaura `ctx->pc = GPR_U32(ctx, 31)` ao final quebra a cadeia de execução do caller.
- **GS_BASE = 0x12000000:** todo WRITE de registrador GS privilege deve usar 0x12000000+offset, NÃO 0x10008000+ ou 0x1000e000+.

## Pointers

- **Previous sessions/context:** `HANDOFF_AGENT.md`
- **Historical bug details (A-J):** `replit_HISTORICO.md`, `HANDOFF_HISTORICO.md`
- **Detailed workflow explanation:** `HANDOFF_AGENT.md` → "FLUXO AUTOMATIZADO"
- **GitHub repository:** `https://github.com/cristianomarianoufsc-ops/godofwar/`
- **Ghidra:** For MIPS R5900 disassembly and analysis of the PS2 ELF.
- **Triagem round atual (PASSO 23):** `python3 tools/triage_passo23.py` — relatório focado nos marcadores 23A/23B/23C + nonBlack + activeThreads.
- **Triagem round atual (PASSO 26):** `python3 tools/triage_passo26.py` — relatório focado nos marcadores 26/25/24/23B/22B + nonBlack + activeThreads (Bug AJ fix).
- **Agente local (PC do Cris):** `python3 tools/agente_local.py` — daemon que monitora branch `logs/auto` no GitHub, detecta novo commit (round concluído), exibe resumo no terminal + notificação desktop + comando pronto para colar no chat do Replit. Use `--once` para verificar uma vez e sair.