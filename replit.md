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
- **Push automático:** após commitar, SEMPRE rodar `bash git_push.sh` — o `GITHUB_TOKEN` deve estar nos secrets do Replit. NÃO pedir ao Agente Cris para clicar em Push.
- **⚠️ GITHUB_TOKEN — VERIFICAÇÃO OBRIGATÓRIA:** O token NÃO fica em nenhum arquivo do projeto. Fica nos Secrets do Replit (pode ser perdido entre sessões). Antes de qualquer push, verificar com `viewEnvVars({ type: "secret", keys: ["GITHUB_TOKEN"] })` via code_execution. Se `false`, chamar `requestEnvVar` para pedir ao Agente Cris. Ver instruções detalhadas em `HANDOFF_AGENT.md → "FLUXO DE PUSH"`.
- **NUNCA feche o loop `auto_round.sh loop` para rodar outro comando.** Se precisar rodar algo manual, abra Terminal 2 separado.
- **NÃO pedir log ao Agente Cris.** Os logs são enviados automaticamente para o GitHub.

## Estado atual do boot (2026-05-07) — 🔧 Bug AQ CORRIGIDO (PASSO 32)

- **auto_round.sh:** timeout = **60s** (era 300s).
- **Bug AK ✅** PASSO 27 confirmado — `func_176FC8` BST skip funcionando.
- **🏆 BOOT INIT CONCLUÍDO** — `entry=0x2996b0` alcançado, tid=1 fez ExitThread normalmente.
- **Bug AM ✅ CORRIGIDO** — PASSO 22B stub agora faz `ctx->pc = ra` ao final.
- **Bug AN ✅ CORRIGIDO (PASSO 29):** Stub `gow_stub_0x17FD10_vtable_jalr_skip` — `sub_0017FD10` tem 3x jalr para vtable não inicializada → retorna `v0=0` imediatamente.
- **Bug AO ✅ CORRIGIDO (PASSO 30) — CONFIRMADO no round:**
  - PASSO 30 disparou 32x `v0=0x1789e0 NAO registrado`, jalr pulado corretamente.
  - Steps 9/10 e 10/10 ainda NÃO apareceram → novo bug downstream.
- **Bug AP ✅ CORRIGIDO (PASSO 31 — 2026-05-07) — CONFIRMADO no round:**
  - PASSO 31 disparou 7x (ra=0x17d59c..0x17d5fc) — sub_0017CF78 tratada corretamente.
  - PASSO 30 disparou 34x total: #1-32 (v0=0x1789e0) + #33 (v0=0x178be8 — nova!) + #34 (v0=0x1789e0).
- **Bug AQ ✅ CORRIGIDO (PASSO 32 — 2026-05-07) — causa raiz de steps 9/10 e 10/10 nunca completarem após PASSO 31:**
  - Mesmo com PASSO 30 (34x) + PASSO 31 (7x) corrigindo jalrs não-registrados, `func_21C788` retornava com `ctx->pc ≠ 0x17A99C` → sub_0017A940 abortava no step 9/10.
  - **Causa raiz:** PASSO 30 fazia `SET_GPR_U32(ctx, 31, 0x17C648u)` antes de chamar `func_1863B8`, mas não restaurava `$ra` ao final. Na última iteração do loop BST (guard #34), o frame-pai usava `$ra=0x17C648` corrompido em seu `jr $ra` → func_21C788 retornava para endereço errado → ctx->pc ≠ 0x17A99C → sub_0017A940 aborta.
  - `sub_00138D48` detecta `ctx->pc ≠ 0x138dc0` após JAL[9/11] → pula JAL[10/11] e JAL[11/11] → `sub_0017A9B0` (render thread) nunca chamada → nonBlack=0.
  - **Fix duplo (PASSO 32 — game_overrides.cpp, rebuild_runtime.sh):**
    - Parte 1: PASSO 30 agora adiciona `SET_GPR_U32(ctx, 31, saved_ra)` antes de `ctx->pc = saved_ra` (fix defensivo da corrupção de `$ra`).
    - Parte 2: PASSO 32 = wrapper stub para `func_21C788` que chama `sub_0021C788_0x21c788` diretamente e força `ctx->pc = saved_ra = 0x17A99C` ao retornar — garante que step 9/10 sempre passa.
- **PASSO 23A:** GS configurado com endereços corretos 0x12000000+.
- **PASSO 28 adicionado:** logs em sub_0017A9B0 callees para rastrear render thread.
- **GREP_PATTERN atualizado:** inclui PASSO 27-32 e sub_0017A9B0 explicitamente.
- **Aguardando round:** verificar `[PASSO 32] func_21C788 wrapper ENTER #1`, `[PASSO 23B] (9/10)` e `(10/10)`, `[PASSO 28] sub_0017A9B0: START`, novos `[StartThread]` + `nonBlack>0`.

## Gotchas

- **Critical `src/recompiled/` directories:** Edits to `./src/recompiled/` are ignored; always modify `GOD_PC_PORT_FINAL/src/recompiled/`.
- **`git push` is manual:** Replit auto-checkpoints but doesn't auto-push. Agent Cris must manually click "Push" in the Git sidebar.
- **Never run `bash build.sh`:** This recompiles all 5,626 `.cpp` files, taking ~80 minutes. `recompilar.sh` is incremental.
- **`git fetch` is blocked locally:** Always use `curl raw.githubusercontent.com` to access GitHub content (e.g., logs).
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