# God of War PC Port

Port estático do God of War (PS2) para PC usando o PS2Recomp.

---

## Preferências do projeto

- **Idioma**: toda comunicação no chat **e títulos de commit/checkpoint
  gerados pelo Replit** devem ser em **português brasileiro**. Não usar
  inglês nos títulos automáticos de checkpoint.
- **Compilação**: feita exclusivamente no PC do usuário (Linux Mint).
  Ver "FLUXO DE TRABALHO" abaixo.

---

## ⚡ FLUXO DE TRABALHO (LEIA ANTES DE QUALQUER COISA)

**O Replit NÃO compila nem roda o jogo.** O ambiente Replit serve apenas como
"IDE remota + análise de código". A compilação e execução são feitas pelo
usuário no PC local dele (Linux Mint), que tem cópia idêntica do repositório
inclusive com o `data/part1.pak` (~4 GB) já presente.

### Por que esse fluxo

- Compilar 5.626 arquivos no Replit leva ~80 minutos (CPU compartilhada).
- No PC local com ccache populado, recompilação incremental leva segundos.
- O usuário tem display real, GPU, gamepad e GDB local disponíveis.
- O `.pak` de 4 GB já está no PC dele — não precisa baixar do Drive a cada
  ambiente novo.

### Ciclo padrão por iteração

1. Agente edita arquivos `.cpp`/`.h` no Replit e commita (checkpoint automático
   gera o commit).
2. Agente avisa o usuário: "faz `git pull` e roda `bash X.sh`".
3. Usuário no PC: `git pull origin main` → build → executa o jogo.
4. Usuário coleta logs (ver abaixo) e cola no chat.
5. Agente analisa e volta ao passo 1.

### Comandos no PC do usuário (Linux Mint)

Caminho do projeto local: `~/Documentos/GitHub/godofwar/`

> 🚨 **AGENTES, LEIAM ANTES DE SUGERIR QUALQUER COMANDO** 🚨
>
> - **O build completo JÁ FOI FEITO** no PC do usuário. A pasta `build/` está
>   populada com CMakeCache.txt, objetos `.o` e o executável `GodOfWarPCPort`.
> - **NUNCA mande o usuário apagar `build/`, rodar `instalar_linux_mint.sh`,
>   nem `bash build.sh`** a não ser que tenha certeza absoluta que é necessário
>   (mudança de CMakeLists, novo arquivo .cpp criado do zero, corrupção do
>   ccache). Esses comandos disparam recompilação dos 5.626 .cpp do jogo
>   (~80 minutos de CPU).
> - **Para qualquer mexida em código existente** (editar `.cpp` ou `.h` de
>   `src/recompiled/`, `src/main.cpp`, `register_functions.cpp`, runtime, etc),
>   use **`recompilar.sh`**. Ele roda `make -j$(nproc)` incremental, recompila
>   só o que mudou, e leva segundos a 1 minuto.
> - **Para mudanças só no runtime** (`PS2Recomp/ps2xRuntime/`), pode usar
>   `rebuild_runtime.sh`, que é ainda mais focado.
> - O `build.sh` original existe e serve, mas é redundante com `recompilar.sh`
>   pra mudanças incrementais — prefira sempre `recompilar.sh`.
>
> **Se aparecer "porcentagem" (`[X%] Building CXX object ...`) ao rodar
> `recompilar.sh`**: NÃO é regressão. Significa que algum build anterior
> foi **cancelado no meio** (Ctrl+C antes de chegar a 100%) e o `make`
> está terminando os `.o` que ficaram pendentes. Deixe rodar ATÉ O FIM
> uma única vez — depois disso, todas as próximas execuções serão
> realmente rápidas (segundos), porque o `build/` finalmente estará
> 100% completo. Esse problema acontece muito porque agentes anteriores
> mandam Ctrl+C sem perceber que `make` mantém estado parcial.

```bash
cd ~/Documentos/GitHub/godofwar
git pull origin main

# CASO PADRÃO (99% das vezes) — mudou QUALQUER .cpp ou .h existente:
bash recompilar.sh                     # incremental, segundos a 1 min

# Caso restrito — mudou só PS2Recomp/ps2xRuntime/*.cpp:
bash rebuild_runtime.sh --run          # mais focado, segundos

# Rodar o jogo (atalho):
bash jogar.sh

# Rodar com log de rastreamento + captura completa pra mandar pro agente:
PS2_TRACE=1 bash jogar.sh 2>&1 | tee log_teste.txt

# Rodar manualmente capturando stdout/stderr separados:
./build/GodOfWarPCPort GOD_PC_PORT_FINAL/data/SCUS_973.99 \
    > saida_stdout.log 2> saida_stderr.log
```

### O que o usuário deve mandar quando reportar erro

Sempre estes 3 itens em uma única mensagem:

1. **`saida_stderr.log`** — onde caem os `[DBG ...]`, warnings e mensagens do
   runtime.
2. **`ps2_missing.log`** — gerado automaticamente quando o programa termina
   (Ctrl+C, SIGTERM ou crash). Lista stubs/syscalls/funções ausentes.
3. **Comportamento observado** em uma frase: "tela preta", "trava em N
   segundos", "logo Sony pisca e some", etc.

Com esses 3 itens o agente fecha a análise em 1 round-trip. Sem eles, perde-se
2-3 idas e voltas pedindo informação básica.

### ⚠️ Armadilha conhecida: CMake GLOB e arquivos .cpp novos

O `CMakeLists.txt` usa `file(GLOB_RECURSE ... CONFIGURE_DEPENDS)` para coletar
os 5.6k arquivos de `src/recompiled/`. **Sem `CONFIGURE_DEPENDS`** (versão
antiga), arquivos `.cpp` adicionados depois da primeira execução do `cmake`
NÃO entram no build, e o linker dá centenas de erros tipo
`undefined reference to entry_0xXXXXXX`.

**Sintoma**: `[100%] Built target gow_recompiled` seguido de muitos
`/usr/bin/ld: ... undefined reference to ...`.

**Conserto**: o `CMakeLists.txt` já tem `CONFIGURE_DEPENDS` agora. Se aparecer
de novo, mande o usuário rodar:
```bash
cd ~/Documentos/GitHub/godofwar/build
cmake ../GOD_PC_PORT_FINAL && make -j$(nproc)
```
Isso re-avalia o GLOB sem perder os `.o` já compilados.

### 🔬 Estado da investigação (boot loop / segfault)

Atualizado em 2026-04-23. Já chegamos a rodar o jogo (tela preta) e ele
crasha com SIGSEGV após ~2,4 s. Resumo dos achados:

**1. Loop principal está em `sub_00100E28`** com tudo zerado:
- Lê global em `0x32E854` (== 0)
- Chama função no endereço apontado pela global (== 0 → função 0)
- Chama `func_118110(0)` → retorna 0
- Chama `func_13DB18(0, 0)` → escreve em `[0]` → ⚠️ segfault provável

**2. NINGUÉM escreve na global `0x32E854`** em todo o código recompilado
(busca por literal). Pode ser indireto (`lui+sw`) ou simplesmente nunca
inicializado por falta de chamada do CRT0/inicializador. Watchpoint instalado
no runtime (`PS2_GLOBAL_WATCH_ADDR` em `ps2_runtime.h`) que loga com
`[watch:GLOBAL_0x32E854]` em stderr toda escrita nesse endereço. Se nada
aparecer, a global de fato nunca é inicializada e precisamos descobrir quem
deveria fazer isso (provavelmente algum stub do BIOS PS2).

**3. `func_0x10047C` chamada 8.192×/s (8k em 2.4s)** mas NÃO é função real —
é uma instrução interna de `sub_00100408` (linha 142 do .cpp gerado:
`daddu $a1, $s1, $zero`). O recompilador gerou um padrão estranho de
`ctx->pc = 0x10047C; return;` que o runtime trata como chamada externa.
Conserto definitivo seria no gerador (`PS2Recomp/ps2xRecomp/`), mas é
trabalho grande. Por ora, quando rodar normalmente, isso só polui logs.

**4. Arquivos instrumentados** (`fprintf(stderr, "[DBG ...]")` com limite de
40 chamadas via `std::atomic<int>`):
- `sub_00100E28_0x100e28.cpp` — entry, post-jalr, pre-call e exit
- `sub_00118110_0x118110.cpp` — entry e 2 exits
- `entry_13db18_0x13db28.cpp` — entry completo

**5. Próximo passo provável**: rodar de novo, verificar se o watchpoint da
global em `0x32E854` dispara. Se sim, achamos o inicializador. Se não,
precisamos implementar manualmente no `stub_hardware_init`
(`GOD_PC_PORT_FINAL/src/ps2_syscall_stubs.cpp`).

**6. Sessão 2026-04-25 — overlay loader ausente (`0x35c920`)**: depois de
adicionar `recover-pc` pra função desconhecida, o boot avança até
`func_100E28` chamar JALR pra `0x35c920`. Esse endereço **não existe no ELF
principal** (`mips_inspect.py` confirma: está em região `.bss` do segment
`memsz` mas fora do `filesz` carregado: `0x100000–0x2c7018` é file-backed,
`0x2c7018–0x35d080` é `.bss` zerado). Logo `0x35c920` é alvo de **overlay
`.DVP`** que devia ser carregado em runtime via DMA/IOP, mas o loader nunca
roda — provavelmente porque os syscalls 0x83 (LoadExecPS2 family), 0x5a/0x5b
caem em `[SyscallOverride:fallback]` no boot. Resultado: dispatcher entra em
loop infinito `100e28 → 35c920(unknown→recover) → 13db18 → 100e64(unknown→recover)`
até estourar a stack (`sp` desce ~256 KiB) e dar SIGSEGV. **Próximo passo**:
rodar `python3 tools/ps2_syscalls.py --report --log saida_stderr.log` pra
priorizar qual syscall é o overlay loader e implementá-lo.

**7. Detector de ciclo de PCs no dispatcher** (adicionado em
`ps2_runtime.cpp::dispatchLoop`): além do `samePcCount` antigo (que só pega
PC repetido idêntico), agora há um detector de **ciclos de 2..8 PCs
alternando** que:
- **Camada 1 (sempre ligada)**: a cada `PS2_LOOP_REPORT_AFTER` repetições do
  mesmo ciclo (**default 1000** — não 100k! O sistema de recovery em
  `defaultFunction` mata tudo após 8192 tentativas, então threshold alto
  nunca dispara em loops fatais), imprime em stderr
  `[dispatch:cycle-detected] len=N repeated=M pattern=0x... -> 0x... ra=... sp=... gp=...`
  seguido de `guestStackWalk=` (varre 4 KiB acima de `sp` listando palavras
  que sejam endereços de funções recompiladas válidas) e `dispatchHistory=`
  (últimas 64 PCs).
- **Camada 2 (opt-in)**: se `PS2_LOOP_BREAK_AFTER=N` for setado e o ciclo
  bater N repetições, chama `requestStop()` e encerra o runtime limpo (sem
  esperar `Ctrl+C` nem segfault). Default 0 = desligado, porque busy-wait
  legítimo (VBlank, semáforos, GS regs) bate facilmente em loops curtos
  e matar isso quebraria o jogo.
- **Dump de garantia na saída fatal**: o handler "Called unimplemented
  function" (em `defaultFunction`) chama `dumpLoopDetectorState("unimpl-fn", ...)`
  antes do `requestStop()`. Assim, mesmo se o threshold periódico não
  disparar (loops muito curtos morrem antes), o último estado conhecido
  do detector aparece logado como `[unimpl-fn:cycle-info] len=N repeated=M
  pattern=...` na linha de erro final. Não precisa setar env var pra ter
  esse dump — ele é automático em todo crash de função desconhecida.

Uso típico no PC do usuário:
```bash
# Diagnostico passivo (default — apenas loga):
PS2_TRACE=1 bash jogar.sh 2>&1 | tee log_teste.txt

# Auto-stop quando ciclo repetir 1M vezes (encerra limpo):
PS2_LOOP_BREAK_AFTER=1000000 bash jogar.sh 2>&1 | tee log_teste.txt

# Reportar mais cedo (a cada 10k repeticoes em vez de 100k):
PS2_LOOP_REPORT_AFTER=10000 bash jogar.sh 2>&1 | tee log_teste.txt
```

### Regras pro agente Replit

- **NÃO rodar `bash build.sh` no Replit** — só desperdiça CPU.
- **NÃO iniciar o workflow `Start application`** — está intencionalmente
  configurado pra apenas imprimir uma mensagem de aviso.
- O workflow `Download part1.pak` também não precisa ser rodado (usuário já tem
  o arquivo local).
- Pode rodar análises estáticas, validação de sintaxe (`g++ -fsyntax-only`),
  ripgrep, leitura de arquivos. **Compilação completa, jamais.**

---

## 🛠️ INVENTÁRIO DE FERRAMENTAS EM `tools/` — LEIA ANTES DE PROPOR CRIAR QUALQUER COISA NOVA

> 🚨 **AGENTES**: a tabela abaixo é a fonte da verdade do que JÁ EXISTE no
> diretório `tools/`. Antes de sugerir "vou criar uma ferramenta que…",
> **bate o olho aqui primeiro**. Vários agentes anteriores perderam ciclos
> propondo ferramentas que já estavam prontas. Se a ferramenta existe mas
> nunca foi rodada, **rode-a**, não recrie.

| Arquivo | O que faz | Como invocar | Última saída relevante |
|---|---|---|---|
| `mips_inspect.py` | Desmonta MIPS R5900 do ELF; lista gaps; diagnostica buracos. | `python3 tools/mips_inspect.py 0xADDR` / `--list-gaps` / `--gap 0xADDR` | Já catalogou 30 maiores gaps. |
| `gap_discover.py` | Varre gaps reais entre funções recompiladas, detecta prólogos R5900, gera CSV `name,start,end,size` no formato Ghidra. | `python3 tools/gap_discover.py` → `tools/discovered_functions.csv` | 75 funções novas em `discovered_functions.csv`. |
| `map_truncated_functions.py` | Compara `// Address: 0xS-0xE` declarado nos `.cpp` vs. o `jr $ra` real no ELF. Lista todas as funções truncadas. | `python3 tools/map_truncated_functions.py` | Sessão 04-25: 1607 funções truncadas. |
| `fix_truncated.py` | Gera CSV de correção (`tools/truncation_fixes.csv`) com ranges expandidos pra reabilitar via ps2_recomp. Suporta `--only-entry` / `--reachable` (default) / `--all`. Carrega overrides manuais de `truncation_overrides.csv`. | Chamado por `regen_truncated.sh`; raramente standalone. | CSV cobrindo 1607 funções. |
| `regen_truncated.sh` | **Pipeline completo de 5 passos**: (1) gera CSV de fixes, (2) localiza `ps2_recomp`, (3) localiza TOML, (4) injeta `ghidra_output` no TOML (com `.bak`), (5) roda ps2_recomp e dá `touch` nos arquivos modificados pra forçar rebuild. | `bash tools/regen_truncated.sh [--only-entry\|--all\|--reachable]` | Last run (`--all`): 1607 funções estendidas, 4053 entries adicionais descobertas, 671 funções resliceadas, 1790 arquivos retocados. |
| `ps2_syscalls.py` | Tabela de ~80 syscalls do BIOS PS2 (EE) com criticidade. Modos: lookup por ID, lookup por endereço, listagem, e **`--report --log build/run.log`** que prioriza syscalls a implementar por (criticidade × frequência). | `python3 tools/ps2_syscalls.py --report --log build/run.log` | — |
| `reachable_after_boot.py` | BFS de alcançabilidade a partir de seeds (lê `tools/reachable_seeds.txt`), produz tier-report de funções alcançáveis. | `python3 tools/reachable_after_boot.py` | Hoje só tem 1 seed (`0x100008`). Adicionar root_func, VU0/VU1, dispatch de game state quando descobertos. |
| `find_writer_32E854.py` | Decodificador MIPS manual; varre PT_LOAD do ELF buscando quem **escreve/lê** em `0x32E854` (a flag que o crt0 espera). Idiomas: `lui+sw`. | `python3 tools/find_writer_32E854.py` | **Sessão 04-25 (rodado): 0 escritores, 15 leitores no ELF principal.** |
| `find_writer_v2.py` | Versão estendida do anterior: rastreia `lui+ori`, `lui+addiu`, `lui+daddiu/daddu` pra computar EA correto através de cadeias de instruções. | `python3 tools/find_writer_v2.py` | **0 escritores, 15 leitores** (confirma o anterior). |
| `find_writer_32E854_overlays.py` | Igual ao v2, mas escaneia **TODAS** as seções (incluindo overlays `.DVP` com addr=0). | `python3 tools/find_writer_32E854_overlays.py` | **0 escritores, 15 leitores** — overlays também não escrevem. |
| `discovered_functions.csv` | CSV de funções descobertas pelo `gap_discover.py`. Formato Ghidra: `name,start,end,size`. | Consumido pelo `recompiler.toml` via `ghidra_output=`. | 75 entradas. |
| `truncation_fixes.csv` | CSV gerado pelo `fix_truncated.py`, injetado no TOML pelo `regen_truncated.sh`. **Não editar à mão** — é regenerado a cada run. | Auto. | Atual: 1607 fixes. |
| `truncation_overrides.csv` | **Edite à mão** — overrides manuais que vencem o auto-detect quando este erra (early-returns, sub-funções não-listadas). Formato: `name,start,end[,size]`. | Lido por `fix_truncated.py`. | 1 override (`entry,0x100008,0x100db8`). |
| `reachable_seeds.txt` | Lista de seeds (1 por linha, hex). | Lido por `reachable_after_boot.py`. | 1 seed (`0x100008`). |

**Categorias rápidas**:
- **Análise estática do ELF**: `mips_inspect`, `gap_discover`, `map_truncated_functions`, `find_writer_*`.
- **Pipeline de regen**: `fix_truncated` + `regen_truncated.sh` + os 3 CSVs.
- **Análise de runtime**: `ps2_syscalls.py --report` (lê o log do jogo).
- **Alcançabilidade**: `reachable_after_boot.py` + `reachable_seeds.txt`.

**Lacunas conhecidas (oportunidades pra novas ferramentas)**:
- ❌ Não existe scanner de IRX (`*.IRX`) buscando escritores de globals da EE — relevante porque 3 scripts já confirmaram 0 escritores de `0x32E854` no ELF principal, então a flag tem que vir de IRX/DMA. **Próxima tool útil**.
- ❌ Não existe parser do `ps2_missing.log` que adiciona automaticamente PCs travados como seeds em `reachable_seeds.txt`.
- ❌ Não existe detector de "boot loop" no runtime que avise quando a mesma função é chamada N vezes seguidas com argumentos idênticos.

## Visão Geral

Este projeto converte o executável original do PS2 (`SCUS_973.99`) para código C++ nativo usando recompilação estática. São 5.629 funções MIPS traduzidas para C++20, vinculadas ao `ps2xRuntime` que emula o hardware do PS2.

## Estrutura do Projeto

- `GOD_PC_PORT_FINAL/` — Workspace principal do port
  - `src/recompiled/` — 5.626 arquivos .cpp gerados (funções do jogo)
  - `src/main.cpp` — Ponto de entrada
  - `src/register_functions.cpp` — Mapeamento de endereços PS2 → funções C++
  - `src/ps2_syscall_stubs.cpp` — Stubs de syscalls do PS2
  - `data/` — Arquivos originais da ISO (SCUS_973.99, IRX, etc.)
  - `include/` — Headers das funções recompiladas
- `PS2Recomp/ps2xRuntime/` — Runtime que emula o hardware do PS2
  - `include/ps2_call_tracer.h` — Tracer de chamadas em tempo real
  - `src/lib/` — Implementação do runtime (GS, IOP, VU, áudio, memória)
- `instalar_linux_mint.sh` — Script de instalação automática para Linux Mint
- `jogar.sh` — Script para executar o jogo
- `build.sh` — Script de build completo (primeira vez, leva horas)
- `rebuild_runtime.sh` — Rebuild rápido só do runtime (segundos a minutos)

## Ferramentas de iteração rápida

O `CMakeLists.txt` foi separado em duas bibliotecas estáticas:
- `gow_recompiled` — os 5.626 .cpp gerados (build inicial lento, raramente muda)
- `ps2runtime` — o runtime do PS2 (muda bastante durante depuração)

Combinado com **ccache** (cache de compilação automático), isso permite:
- Mexer no runtime e recompilar em segundos via `bash rebuild_runtime.sh`
- Rebuilds completos depois do primeiro também ficam muito mais rápidos
- Cache do ccache configurado em 5GB (`ccache -s` mostra estatísticas)

Use `bash rebuild_runtime.sh --run` para recompilar e já executar o jogo.

## Relatório de funções/syscalls/stubs ausentes

O runtime registra automaticamente tudo que o jogo chama mas ainda não está
implementado: stubs (`TODO_NAMED`), syscalls com ID desconhecido e funções
sem endereço registrado.

Quando o programa termina (normal, Ctrl+C ou SIGTERM), grava o relatório em:
- `./ps2_missing.log` por padrão
- ou no caminho indicado por `PS2_MISSING_LOG=...`

Conteúdo do relatório (ordenado pelos mais chamados):
- Tipo (STUB / SYSCALL / FUNCTION)
- Quantas vezes foi chamado
- Quando ocorreu a primeira chamada (ms)
- PC do primeiro chamador, RA, e args (a0..a3)

Use esse relatório para **priorizar** o que implementar primeiro:
provavelmente poucos itens cobrem 90% das chamadas.

Arquivos: `PS2Recomp/ps2xRuntime/include/ps2_missing_report.h`
e `PS2Recomp/ps2xRuntime/src/lib/ps2_missing_report.cpp`.

## Roadmap de ferramentas (para próximos agentes)

A estratégia do projeto é construir ferramentas que aceleram o trabalho de
fundo (debug, implementação de stubs, etc). Cada ferramenta entregue fica
para sempre no repositório. Ordem planejada:

### Já entregues
1. ✅ **Build incremental rápido** — ccache + bibliotecas estáticas separadas
   + `rebuild_runtime.sh`. Corta ciclo de iteração de horas para segundos.
2. ✅ **Relatório de funções ausentes** — `ps2_missing_report` (acima).
   Gera `./ps2_missing.log` priorizado por contagem de chamadas.
3. ✅ **Inspetor MIPS do ELF** — `tools/mips_inspect.py`.
   Lê o ELF (`SCUS_973.99`), desmonta MIPS little-endian, e diagnostica
   automaticamente buracos (gaps) entre funções recompiladas.
   Requer: `sudo apt install python3-capstone`.
   - `python3 tools/mips_inspect.py 0x10047c` — desmonta a partir do endereço
   - `python3 tools/mips_inspect.py --gap 0x10047c` — identifica o gap que
     contém o endereço e diagnostica se é padding ou código real
   - `python3 tools/mips_inspect.py --list-gaps` — lista os 30 maiores gaps
     do recompilador (priorização sistêmica em vez de bug-by-bug).
   - **Setup automático:** `setup_linux.sh` na raiz do projeto recria todo
     o ambiente (apt deps, raylib 5.5, ccache, pipx, gdown, git config) em
     qualquer Mint/Ubuntu novo. `bash setup_linux.sh`.

5. ✅ **Descobridor de gaps** — `tools/gap_discover.py`. Varre o ELF nos gaps
   reais (usando `// Address: 0xX - 0xY` dos .cpp existentes), detecta
   prólogos R5900 (`addiu/daddiu $sp,$sp,-X`), refina o final via último
   `jr $ra`, e gera CSV no formato `loadGhidraFunctionMap` (`name,start,end,size`).
   Resultado: 75 funções novas (~18KB) em `tools/discovered_functions.csv`.
   Para usar de verdade exige rodar o PS2Recomp com TOML referenciando
   `ghidra_output = "tools/discovered_functions.csv"` (binário externo).

6. ✅ **Stub de syscall BIOS no dispatcher** — Em `lookupFunction` (runtime),
   qualquer endereço `< 0x00100000` (faixa do BIOS PS2) agora retorna um
   stub leve que zera `$v0` e devolve controle SEM mexer em `ctx->pc`,
   evitando o loop "function not found 0x10047c" que ocorria quando uma
   vtable expunha um vetor de syscall (ex: 0x80004 = SetGsCrt).
   - Diagnóstico: o caller recompilado (sub_00100408) faz
     `if (ctx->pc != 0x10047C) return;` após o `jalr`. A recuperação antiga
     setava `ctx->pc = stack-recovered`, fazia o caller retornar, e o
     dispatcher ficava preso tentando despachar 0x10047c (mid-function).
   - Stub novo: deixa o caller continuar normalmente após o `jalr`, como
     se o syscall tivesse sido chamado e retornado 0.
   - Cada endereço novo loga uma vez `[lookup:bios-stub] addr=0x...
     syscallId=N` e é registrado em `ps2_missing_report` para auditoria.
   - Arquivo: `PS2Recomp/ps2xRuntime/src/lib/ps2_runtime.cpp` (lookupFunction).

7. ✅ **Decodificador de syscalls do BIOS PS2** — `tools/ps2_syscalls.py`.
   Tabela canônica de ~80 syscalls do EE (ResetEE, SetGsCrt, CreateThread,
   WaitSema, SifSetDma, etc.) com nome, categoria e criticidade (1-5).
   Modos:
   - `python3 tools/ps2_syscalls.py 0x44` — decodifica syscall #68 = WaitSema
   - `python3 tools/ps2_syscalls.py --addr 0x80004` — endereço -> syscall
   - `python3 tools/ps2_syscalls.py --list` — lista completa de referência
   - `python3 tools/ps2_syscalls.py --report --log build/run.log` — lê log
     do jogo, conta cada `[lookup:bios-stub] syscallId=N`, e ordena por
     criticidade × frequência. Diz EXATAMENTE qual syscall implementar
     primeiro pra destravar o boot.
   - Para gerar log: `bash build.sh 2>&1 | tee build/run.log`.

8. ✅ **Live PC no `[run:tick]`** — `m_debugPc/Ra/Sp` só é atualizado no
   topo do `dispatchLoop`. Se uma `fn()` recompilada entra em loop C++
   infinito (callee profundo), esses valores ficam **stale** mostrando
   "pc=0x1003c0" para sempre, mascarando o real ponto de travamento.
   Agora o tick também loga `livePc=0x... liveRa=0x... liveSp=0x...` lidos
   diretamente de `m_cpuContext` (race benigna, x86 garante load atômico
   de uint32 alinhado). Compare `livePc` entre ticks consecutivos para
   identificar busy loops.
   - Arquivo: `PS2Recomp/ps2xRuntime/src/lib/ps2_runtime.cpp` no `run:tick`.

9. ✅ **Thin archive para `libgow_recompiled.a`** — sobrescreve as regras
   globais `CMAKE_CXX_ARCHIVE_CREATE/APPEND/FINISH` no topo do
   `GOD_PC_PORT_FINAL/CMakeLists.txt` pra invocar `ar qcsT`. O `.a` deixa
   de copiar os 5.6k `.o` internamente e vira uma lista de referências aos
   arquivos em disco. Resultado:
   - `.a` cai de ~3 GB para ~5-10 MB.
   - Etapa do `ar` (que antes levava 10-15 min e travava em "Linking CXX
     static library") agora termina em **segundos**.
   - Elimina o erro `"impossível copiar libgow_recompiled.a; razão: Sucesso"`
     que ocorria quando o disco enchia durante o pico do `ar` (errno=0 em
     `rename()` por ENOSPC mascarado).
   - Funciona normalmente com `-Wl,--whole-archive` no link final.
   - **Limitação**: o `.a` thin só funciona quando os `.o` continuam no
     mesmo caminho do `build/`. Se mover o `build/` sem os `.o`, o `.a`
     fica inútil — mas isso nunca é o caso normal.
   - **NÃO USAR `STATIC_LIBRARY_OPTIONS "rcsT"`** no target — o CMake passa
     esse valor como argumento posicional do `ar` em vez de injetar como
     flags, fazendo `ar` interpretar `rcsT` como nome de arquivo e abortar
     com `"rcsT: Arquivo ou diretório inexistente"`. A forma correta é
     sobrescrever as variáveis globais `CMAKE_CXX_ARCHIVE_*`.
   - Arquivo: `GOD_PC_PORT_FINAL/CMakeLists.txt`.

## Estado atual da depuração (sessão de 2026-04-23) — PARCIALMENTE SUPERADA

> ⚠️ **VER SEÇÃO 2026-04-24 ABAIXO** — investigação seguinte refinou esse
> diagnóstico. O loop real **NÃO** está em `sub_00100E28` (que é linear),
> e sim no **caller** dela: `sub_00100408`. A causa raiz também foi
> identificada (boot incompleto em `entry_0x100008`).

**Boot avança até:** janela abre, raylib + audio init OK, ELF carrega,
`Starting execution at address 0x100008`, dispatcha `BOOT#1 pc=0x100008`
e `BOOT#2 pc=0x1003c0`. Stub BIOS dispara **uma vez** para `0x80004`
(`syscallId=1` = ResetEE). Frame uploads rodam (`nonBlack=0`, tudo preto).

**LOOP INFINITO LOCALIZADO (após instrumentação livePc):**

Com `livePc` lendo direto de `m_cpuContext.pc`, capturamos os ticks reais:
- tick 1200: `livePc=0x13d980 liveRa=0x13d954 liveSp=0x1fffde0`
- tick 1320: `livePc=0x13dc90 liveRa=0x13da58 liveSp=0x1fffdc0`
- tick 1440: `livePc=0x118168 liveRa=0x100e7c liveSp=0x1fffeb0`
- tick 1560: `livePc=0x118168 liveRa=0x100e7c liveSp=0x1fffeb0` ← idêntico
- tick 1680: `livePc=0x13dcc4 liveRa=0x13da58 liveSp=0x1fffdc0`

Programa oscila entre 2 hot spots → confirma loop. `dbgPc=0x1003c0` é
stale só porque a `fn()` raiz nunca retornou.

**Loops identificados (não-infinitos individualmente):**
- `sub_00118110_0x118110.cpp` label_118168: loop `while (a1 < 15)` que
  inicializa tabela de 15 elementos (zera fields 0x48, 0x84, 0xC0).
  Termina em 15 iterações — **não é o problema**.
- `sub_0013DC78_0x13dc78.cpp` ~0x13dc90: função "format/process",
  começa com `sltiu $v0, $s1, 4` — loop de processamento curto.

**O LOOP REAL está no caller `sub_00100E28_0x100e28.cpp`:**
```cpp
loop:                                  // ~0x100e28
    init_table_15_elements();          // sub_00118110 (liveRa=0x100e7c
                                       //   = PC após jal func_118110)
    process_something();               // sub_0013DB18 → sub_0013DC78
    if (flag_que_nunca_muda)
        goto loop;
```
Confirmado por `liveRa=0x100e7c` = exatamente a instrução depois do
`jal func_118110` em `sub_00100E28` (linhas 110-130 de
`sub_00100E28_0x100e28.cpp`).

**Próxima ação concreta para o agente que continuar:**
1. Ler `sub_00100E28_0x100e28.cpp` inteiro (193 linhas) e identificar
   a condição de saída do `goto loop` externo. Procure por `lw` de algum
   endereço RDRAM seguido de `beqz/bnez` que controla o loop.
2. Esse `lw` lê uma flag/contador num endereço fixo (ex: 0x01Exxxxx
   da área de sound/sema/IRQ). Identificar o endereço e qual subsistema.
3. Possíveis culpados:
   - **Semáforo PS2** que `WaitSema` deveria sinalizar (ver tabela #7,
     `ps2_syscalls.py`).
   - **Flag de DMA/VIF/GIF** completion que nosso `m_memory` não está
     setando após upload de frame.
   - **IRQ counter** (`vsync` IRQ que conta frames — se nunca avança,
     o jogo espera pra sempre).
4. Implementar em `ps2_runtime.cpp` o setamento da flag/incremento do
   contador toda vez que o evento real ocorrer (ex: cada `gsWriteCount`
   incremento dispara vsync IRQ counter no RDRAM).

**Ferramenta #8 sugerida (não implementada):** localizador automático
"PC range → função recompilada" — dado um `livePc`, lê os headers
`// Address: 0xX - 0xY` dos `.cpp` e identifica a função e contexto C++
(labels, gotos, while loops) próximo. Cortaria 5min por iteração de debug.

## Estado atual da depuração (sessão de 2026-04-24) — DIAGNÓSTICO DEFINITIVO

**Build OK pela primeira vez:** thin archive funcionou, build incremental + link
em ~30s, executável roda, janela 640x448 abre, raylib/audio/OpenGL OK, ELF
carrega. Tela preta + loop infinito imediato.

**LOCALIZAÇÃO CORRETA DO LOOP — refinamento da sessão anterior:**

A análise de 2026-04-23 estava errada em um ponto: `sub_00100E28` foi marcada
como tendo loop interno, mas na verdade ela é LINEAR (entra, faz vtable call,
chama `func_118110`, chama `func_13DB18`, retorna). O `liveRa=0x100e7c` é
apenas o post-call address da última `jal` interna.

O LOOP REAL está em **`sub_00100408_0x100408.cpp`** — o **caller único** de
`sub_00100E28` e a primeira função chamada por `sub_001003C0` (BOOT#2).

Estrutura de `sub_00100408` (iterador de linked list circular):
```pseudo
sub_00100408($a0):                    # $a0 = root_struct
    sentinel = $a0 + 0x20
    first = [sentinel]
    if (first == sentinel) return     # lista vazia, sai

label_100438:                         # cabeça do loop
    current = sp[4]
    next = [current]                  # current->next
    [current->prev->next] = next      # remove current da lista
    [next->prev] = current->prev
    [current+0] = 0; [current+4] = 0  # limpa current

    vtable_call([current+0x5C]->[+0xC])
    func_100E28($a0, $s1, current)    # <-- isso fica logando no terminal

    if (sp[4] != sentinel) {
        cooperativeYield()
        goto label_100438
    }
    return
```

**Causa raiz: `$a0` chega em `sub_00100408` zerado.** Como tudo é zero:
- `sentinel = 0 + 0x20 = 0x20`
- `[0x20] = 0` (RDRAM zerada)
- `0 != 0x20` → **entra no loop**
- `current = 0`, leituras de `[0+offset]` retornam 0
- vtable call em `0` cai no `if (jumpTarget == 0u) skip` (não crasha)
- `func_100E28(0, 0, 0)` é chamada (o que aparece no log)
- `sp[4] = [current=0] = 0`. `0 != 0x20` → **loop eterno sem progresso**

Não há SEGFAULT porque cada acesso a `[0+offset]` retorna 0 silenciosamente
em vez de quebrar.

**Por que `$a0` chega zerado: `entry_0x100008.cpp` tem 2 bugs documentados.**

O entry point do ELF (`entry_0x100008`) faz APENAS:
1. Zera todos os GPRs (32 registradores) e hi/lo — comportamento de boot
2. **PULA** o range 0x10008c → 0x1003c0 (~830 bytes) com `ctx->pc = 0x1003c0u;`
3. Restaura SP manualmente para `PS2_RAM_SIZE - 0x10`
4. Deixa GP = 0
5. Não inicializa `$a0` (passado pra `sub_001003C0` → `sub_00100408`)

Os comentários no próprio arquivo já admitem (Bug A + Bug B do
`HANDOFF_AGENT.md`):
- **Bug A**: o recompilador não gerou funções no range 0x10008c-0x1003c0,
  então o entry pula direto pra `sub_001003C0`. Esse buraco normalmente
  contém o "crt0" do PS2 que:
  - Configura GP corretamente (do `_gp` do ELF)
  - Aloca a estrutura raiz (heap manager, scene graph root, etc)
  - Passa o ponteiro dela em `$a0` antes de chamar `_main` (=`sub_001003C0`)
- **Bug B**: SP é restaurado mas GP fica em 0 — qualquer acesso a global via
  GP-relative (ex: `lw $X, offset($gp)`) lê do início do RDRAM em vez do
  segmento de dados real.

**Provável solução:** investigar o ELF cru no range 0x10008c-0x1003c0 e
verificar se realmente são dados (padding/jump table) ou código MIPS válido
que o PS2Recomp pulou por bug. Comando útil:
```bash
mipsel-linux-gnu-objdump -d --start-address=0x10008c --stop-address=0x1003c0 \
    GOD_PC_PORT_FINAL/data/SCUS_973.99 2>/dev/null | head -80
```
Ou usar `capstone` (já instalado via `uv`) para desassemblar manualmente lendo
os bytes do segmento ELF carregado em RDRAM.

**Confirmações cruciais (todas via `rg` no `src/recompiled/`):**
- `0x32E854` (global lido pela vtable em `sub_00100E28`) é **APENAS LIDO**,
  nunca escrito por nenhuma função recompilada. Provavelmente é setado
  por código no buraco 0x10008c-0x1003c0 ou via dados estáticos no ELF
  que deveriam ter sido carregados mas não foram.
- Único caller de `sub_00100E28`: `sub_00100408` (confirmado por grep
  `0x100E28u|sub_00100E28` filtrando register_functions e o próprio arquivo).
- `entry_100db8_0x100e28.cpp` é função SEPARADA (vai de 0x100db8 a 0x100e27),
  faz padrão idêntico ao `sub_00100E28` mas chama `func_13DA10` (init) em
  vez de `func_13DB18` (process). É a função que DEVERIA inicializar o
  global `0x32E854` mas nunca é chamada (não tem callers no código
  recompilado — só aparece em `sub_00100EA8` por proximidade de endereço).

**ACHADO DEFINITIVO (via `tools/mips_inspect.py 0x10008c 0x1003c0`):**

O "buraco" 0x10008c-0x1003c0 É CÓDIGO MIPS VÁLIDO — é o **crt0 do PS2**
inteiro que o PS2Recomp não recompilou. Conteúdo:

1. **0x10008c-0x100118** — zera todos os 32 registradores FPU (`$f0-$f31`),
   `sync 0x10`, `ctc1 zero, $31`. Continuação direta do init de GPRs do
   `entry_0x100008`.

2. **0x10011c-0x100144** — **BSS clear loop**: zera RDRAM de `0x002c7080`
   até `0x0035c1a8` (~580 KB). **O global `0x32E854` está dentro dessa faixa
   e seria zerado aqui** (RDRAM já começa zerada no nosso runtime, então OK).

3. **0x100148-0x100196** — setup de threading via syscalls PS2:
   - `syscall 0x3c` (SetupThread) com `a0=0x002cf070, a1=0x01ff8000,
     a2=0x00008000, a3=0x002c7080, t0=0x000101d8` — define heap, stack, BSS.
   - `syscall 0x3d` (SetupHeap) com `a0=0x0035c1a8` (BSS end), `a1=0`.

4. **0x100198-0x1001cb** — 4 jal/j críticos:
   - `jal 0x2994a0` → ✅ recompilada (`sub_002994A0_0x2994a0.cpp`)
   - `jal 0x293ea0` → ❌ **NÃO RECOMPILADA** (provavelmente C++ ctors / `_init`)
   - `jal 0x138cb0` → ✅ recompilada (`sub_00138CB0_0x138cb0.cpp`)
   - `jal 0x138d48` → ✅ recompilada (`sub_00138D48_0x138d48.cpp`),
     com `a0 = [0x002c7080]` (lê primeiro elemento do BSS)
   - **`j 0x2996b0`** → ❌ **NÃO RECOMPILADA** — esse é o `_main` REAL
     do jogo (`sub_001003C0` é só uma função utility, não `_main`).

5. **0x100200-0x1003c0** — função utility separada (~448 bytes) com
   prólogo `addiu $sp, -0x90`. Chama `0x100ea8`, `0x239210`, `0x175780`,
   `0x2391e8`, `0x175740`, `0x239200`, `0x239208`. Tem loop interno.

**Conclusão:** o nosso `entry_0x100008` ignora o crt0 INTEIRO e jumpa direto
pra `sub_001003C0` (que NÃO é `_main`). Por isso `$a0` chega em 0 — quem
deveria setar `$a0` é o `j 0x2996b0` no fim do crt0, e quem alocaria a
estrutura raiz seria provavelmente `sub_002994A0` ou a missing `0x293ea0`
(C++ ctors).

**Próxima ação concreta (ordem):**

1. **Investigar por que o PS2Recomp pulou essas funções** — provavelmente
   o `.toml` config tem ranges marcados como dados. Procurar ranges que
   incluam `0x10008c-0x1003c0`, `0x2996b0`, `0x293ea0` no config do
   PS2Recomp (geralmente `god_of_war.toml` ou similar).

2. **Re-rodar PS2Recomp** com config corrigido para gerar `entry_0x100008`
   completo (com BSS clear, syscalls, jals e tail jump pra 0x2996b0) +
   `sub_002996B0` + `sub_00293EA0`. Isso resolve a causa raiz sem hacks.

3. **Solução tática alternativa (se #2 for demorado):** editar
   `entry_0x100008.cpp` à mão para emular o crt0:
   - Pular FPU init (nosso runtime já zera FPRs)
   - Pular BSS clear (RDRAM já zerada)
   - Stub das syscalls 0x3c/0x3d (registrar como no-op no `ps2_syscalls.cpp`)
   - Chamar `sub_002994A0`, depois `sub_00138CB0`, depois `sub_00138D48`
     com `$a0 = [0x002c7080]` e `$a1 = 0x002c7084`
   - **Bloqueado por:** `sub_002996B0` (e `sub_00293EA0`) precisam ser
     recompiladas antes — sem `_main`, não há jogo. Logo, #2 é prerequisito.

4. **Bug B (GP zerado) continua pendente** — depois que `_main` rodar,
   muitas funções vão acessar globais via `lw $X, offset($gp)`. Precisa
   ler `e_entry` e o symbol `_gp` do ELF header, ou inferir `_gp` como
   `bss_start + 0x7ff0` (convenção MIPS PIC) — provavelmente
   `0x002cf070` (que aparece como `a0` da syscall 0x3c acima).

## Estado atual da depuração (sessão de 2026-04-25)

**Toolchain de regen agora funcional end-to-end.** A sessão entregou três
peças que destravaram o ciclo de iteração:

1. **`tools/fix_truncated.py` + `tools/regen_truncated.sh`** — produzem o
   CSV `ghidra_output` com ranges corrigidos e regeram os `.cpp` afetados
   via ps2_recomp em ~30s, sem precisar de rebuild de 80min. Suporta
   `--only-entry` (só crt0), reachable-from-seeds (default) e `--all`.

2. **Pin do ELFIO no `PS2Recomp/ps2xRecomp/CMakeLists.txt`** corrigido
   pra `Release_3.12` (commit `8ae6cec5d60495822ecd57d736f66149da9b1830`).
   O pin antigo `7d30a22f...` foi GC'd upstream e o submódulo não
   buildava mais. `regen_truncated.sh` agora monta o ps2_recomp via
   `cmake -S PS2Recomp/ps2xRecomp` (skip raylib 408MiB) com `--build-recomp`.

3. **Touch automático no fim do regen** — sem isso, o `recompilar.sh`
   (que faz `make` em `build/`) decide se recompila pelo mtime, e o
   ps2_recomp pode reescrever arquivos preservando mtime → make não
   recompila → binário antigo continua rodando. O passo `git diff
   --name-only src/recompiled/ | xargs -r touch` força o rebuild real.

### Resultado funcional pós-regen + touch

Boot avançou substancialmente do estado de 2026-04-24:

| Etapa | Antes (04-24) | Agora (04-25) |
|---|---|---|
| crt0 escapa init de FPRs/BSS | Não | Sim (ps2_recomp expandiu entry para 324 linhas, descobriu 4077 entries adicionais) |
| Thread principal criada | Não (`activeThreads=0`) | Sim (`activeThreads=1`) |
| SP da thread ≠ default | Não (sempre `0x1fffff0`) | Sim (`liveSp=0x1fffe00..0x1fffe40`) |
| `dispfb1`/`display1` setados | 0 | `dispfb1=0x1400`, `display1=0x1bf27f00000000` |
| Loop principal roda muitos ticks | Não | Sim (1200+ ticks com `livePc` oscilando) |
| Framebuffer renderiza pixels | Não | **Não** — `nonBlack=0` em todas as 60+ amostras |

### NOVA causa raiz identificada — gap 0x1001d0 → 0x100db8

O `[DBG 100E28]` **continua em loop infinito** (40+ iterações com a0/a1/a2
zerados, mesmo padrão de antes). O log mostra os `[run:tick]` amostrando
PCs dentro de `func_13DB18`/`func_118110` — são as funções que o crt0
chama EM LOOP, não a main thread real.

A **prova definitiva** veio do `ps2_missing.log`:
```
FUNCTION 8192 calls   1462ms   func_0x10047C  ← chamada 8192x em 2.4s !!!
FUNCTION    1 call             func_0x80004
```

`func_0x10047C` **não existe no binário recompilado**. Ela cai no gap
**0x1001d0 → 0x100db8** que nenhum entry cobre:

| Endereço | Status |
|---|---|
| `0x100008` → `0x1001d0` | `entry_0x100008.cpp` (range corrigido na sessão 04-25) |
| `0x1001d0` → `0x100db8` | **VAZIO** ← 3KB de código não recompilado, contém `0x10047C` |
| `0x100db8` → `0x100e28` | `entry_100db8_0x100e28.cpp` |

O auto-detect do `scan_function` para no primeiro `jr $ra` que encontra
(`0x1001d0`), mas tem código vivo depois — provavelmente early-return ou
sub-função sem header reconhecido. O ps2_recomp tem mecanismo de
discovery ("Discovered N additional entry point(s)") que fatia o range
em sub-entries automaticamente, **se** o range total cobrir o código.

### Solução implementada (entregue, aguardando user testar)

Novo arquivo de overrides manuais: **`tools/truncation_overrides.csv`**
populado com:
```
entry,0x100008,0x100db8
```

E `tools/fix_truncated.py` agora carrega esse CSV automaticamente
(função `load_overrides`), aplicando os ends forçados após o auto-detect.

**Próxima ação do usuário:**
```bash
cd ~/Documentos/GitHub/godofwar && \
git pull && \
bash tools/regen_truncated.sh --only-entry && \
bash recompilar.sh && \
PS2_TRACE=1 bash jogar.sh 2>&1 | tee log_teste.txt
```

Esperado no log:
- Output do regen: `entry  end 0x10008c → 0x100db8  (+876 ins) [HACK ATIVO]`
- ps2_recomp: "Discovered NN additional entry point(s)" — vai fatiar o gap
- Vários novos `entry_xxxxxx_0xXXXXXX.cpp` no `src/recompiled/`,
  incluindo um cobrindo `0x10047C`
- Log do jogo: `[DBG 100E28]` deve aparecer **MUITO menos** (ou só 1-2
  vezes, não 40+) e `livePc` deve sair do range 0x118110/0x13DB18
- `ps2_missing.log` não deve mais ter `func_0x10047C` no topo

### Atualização — `--all` aplicado (log_teste2.txt, sessão 04-25 tarde)

O usuário rodou `bash tools/regen_truncated.sh --all && bash recompilar.sh`,
estendendo as **1607 funções truncadas** (não só o entry). ps2_recomp processou,
descobriu **4053 entries adicionais**, resliceou **671 funções**, e retocou
**1790 arquivos**. Compilação OK.

> ⚠️ O log mostra `Error during output generation: No entry function name
> available for registration` — é **falso alarme**. O `register_functions.cpp`
> ficou íntegro (5642 linhas) e o `entry 0x100008` está registrado normalmente
> na linha 9. O erro é de uma sub-entry resliceada, não do registro principal.

**Avanço observado** vs. `--only-entry`:

| Métrica | `--only-entry` | `--all` |
|---|---|---|
| Ticks até user fechar janela | 120 (~2s) | 7560 (~2 min) |
| `livePc` | Fixo em `0x13d644` | Varia: `0x1878e4`, `0x187880`, `0x13de18`, `0x13da58` |
| `[DBG 100E28]` loop | 40+ idêntico | Continua idêntico |
| `nonBlack` em frames | 0 (todos pretos) | 0 (todos pretos) |
| DMA/GIF/VIF/sound | 0 | 0 |

**Conclusão**: `--all` desbloqueou execução por código novo (livePc se move
por 4 endereços diferentes), mas **não saiu do loop crt0**. A flag
`0x32E854` continua zero → branch `branch_taken=0` → boot trava no mesmo
lugar, só roda mais voltas.

### Causa raiz refinada — `0x32E854` é escrita por algo FORA do ELF principal

Os **3 scripts** `find_writer_32E854.py`, `find_writer_v2.py` e
`find_writer_32E854_overlays.py` foram rodados (sessão 04-25, agente
Replit) sobre `GOD_PC_PORT_FINAL/data/SCUS_973.99` e os 3 confirmam:

> **0 escritores, 15 leitores** em `0x32E854` no ELF principal,
> incluindo overlays `.DVP`.

Os 15 leitores estão distribuídos por:
```
0x100DD0  → entry_100db8_0x100e28.cpp
0x100E48  → (gap não-coberto pelo recompiler)
0x10183C  → (gap não-coberto pelo recompiler)
0x108AA0  → FUN_001067a8_0x1067a8.cpp
0x108B18  → FUN_001067a8_0x1067a8.cpp
0x10A9C4  → FUN_0010a978_0x10a978.cpp
0x11137C  → FUN_00111328_0x111328.cpp
0x117C98  → FUN_00117a50_0x117a50.cpp  (← 0x118110 é a função em loop!)
0x117D30  → FUN_00117a50_0x117a50.cpp
0x141F2C  → FUN_00141b78_0x141b78.cpp
0x153214  → FUN_00152e28_0x152e28.cpp
0x157AFC  → FUN_00157680_0x157680.cpp
0x15892C  → FUN_00157680_0x157680.cpp
0x158EE8  → FUN_00157680_0x157680.cpp
0x159390  → FUN_00157680_0x157680.cpp
```

Todos usam o padrão `lui $vN, 0x33` + `lw $vM, -0x17ac($vN)` → `0x32E854`.
Nenhum usa `sw` no mesmo endereço. Logo, **estender mais funções truncadas
não vai resolver esse loop**.

**Hipóteses ranqueadas pra quem escreve `0x32E854`**:

1. 🥇 **Módulos IRX no IOP** (`989NOMID.IRX`, `DBCMAN.IRX`, `LIBSD.IRX`,
   `MC2_S1.IRX`, `SIO2MAN.IRX`, etc. em `GOD_PC_PORT_FINAL/data/`).
   IRXs rodam no IOP e escrevem na memória da EE via DMA do SIF. O runtime
   do projeto **não emula IRX-on-IOP** — então qualquer flag que dependa
   de IRX inicializar nunca é setada.
2. 🥈 **Inicialização do EE-kernel/crt0** que foi pulada na recompilação
   (handlers de exceção, init de threads, init do SIF).
3. 🥉 **Os 2 gaps em readers** (`0x100E48` e `0x10183C` não estão
   cobertos por nenhum `.cpp` do `src/recompiled/`) — improvável, mas
   verificar com `tools/mips_inspect.py --gap 0x100E48`.

### 🎯 CAUSA RAIZ DEFINITIVA — patch automático esconde init do EE-kernel

A hipótese-IRX foi **descartada após inspeção direta do disassembly cru
da região escondida pelo patch** (`mips_inspect.py inspect 0x10008c
0x1001d0`, sessão 04-25 noite). A região escondida (81 instruções,
324 bytes) é a **continuação do crt0 PS2** e contém:

| Offset | O que faz |
|---|---|
| `0x100090-0x10010c` | Zera **todos os 32 registradores FPU** (`mtc1 $zero, $fX`) |
| `0x100114` | `sync 0x10` — barreira de memória |
| `0x100118` | `ctc1 $zero, $31` — zera control reg FPU |
| `0x10011c-0x100144` | **Loop de zerar BSS** (de `0x2c7080` até `0x35c1a8`, ~600 KB) |
| `0x100174-0x100178` | `addiu $v1,$zero,0x3c` + `syscall` → **SYSCALL #0x3c = `RFU060_SetupThread`** |
| `0x100190-0x100194` | `addiu $v1,$zero,0x3d` + `syscall` → **SYSCALL #0x3d = `RFU061_SetupHeap`** |
| `0x100198` | `jal 0x2994a0` (init runtime/wsg) |
| `0x1001a0` | `jal 0x293ea0` (init libc) |
| `0x1001a8` | `jal 0x138cb0` (init libc/atexit) |
| `0x1001b0` | `38000042` — instrução COP0 `ei` (enable interrupts) |
| `0x1001c0` | `jal 0x138d48` (init libc/atexit pt.2) |
| `0x1001c8` | `j 0x2996b0` (pula pro main wrapper) |

**Por que o patch é injetado**: o ps2_recomp tropeça em **5 instruções
EE custom** marcadas como `.byte` pelo capstone:
- `0x10008c: 00001904`
- `0x100110: 18000146`
- `0x100170: 2de08000` (provável `daddu $sp, $a0, $zero`)
- `0x10017c: 2de84000` (provável `daddu $sp, $v0, $zero`)
- `0x1001b0: 38000042` (`ei`)

Quando o ps2_recomp não decodifica essas instruções, ele aborta a função
e o sistema injeta automaticamente o "Patch: Jump to next entry point",
que **pula 81 instruções essenciais** — incluindo os 2 syscalls de
inicialização da main thread e do heap.

**Por que isso explica tudo**:

1. `0x32E854` (a flag em loop) está **dentro do range de BSS**
   (`0x2c7080 ≤ 0x32E854 ≤ 0x35c1a8`) — não é variável especial, é
   variável global comum.
2. Sem **SetupThread** + **SetupHeap**, qualquer init de runtime/libc
   chamado depois (`0x2994a0`, `0x293ea0`, `0x138cb0`, `0x138d48`) que
   dependa de thread context ou alocação heap falha em silêncio.
3. **O setter de `0x32E854` está em algum lugar dentro dessa cadeia
   de 4 JAL** (cada uma é pequena com 1 filho — precisa descer mais),
   e nunca é executado.

A hipótese "IRX no IOP" estava errada — **não tem nada de IRX
envolvido**. É puro EE-kernel sendo bypassado pelo patch defensivo.

### Próximas ações (ordem de prioridade)

A. **🥇 ✅ IMPLEMENTADO + CONFIRMADO EM RUNTIME** (sessão 04-25 noite).
   Stub C++ inserido em
   `PS2Recomp/ps2xRuntime/src/lib/ps2_runtime.cpp` dentro do `run()`,
   logo após `initializeGuestKernelState`. Faz manualmente o que o
   patch automático pula:
   1. `memset(rdram + 0x2c7080, 0, 0x95128)` — zera BSS.
   2. Prepara `$a0..$t0` e chama `ps2_syscalls::SetupThread`
      (gp=0x2cf070, stack=0x1ff8000, ssize=0x8000, args=0x2c7080,
      root=0x1001d8). Copia o SP retornado pra `$r29`.
   3. Prepara `$a0=0x35c1a8`, `$a1=0` e chama `ps2_syscalls::SetupHeap`.
   4. Loop sobre `{0x2994a0, 0x293ea0, 0x138cb0, 0x138d48}`:
      `lookupFunction(addr)` + chama dentro de `GuestExecutionScope`
      com `$ra=0` (sentinela). Se `lookupFunction` falhar (caso
      `0x138d48` que não tem entry registrada), loga aviso e pula.
   5. Restaura `pc=0x100008` pro dispatchLoop começar normal.

   Saída esperada nos logs ao rodar:
   ```
   [boot_stub] init 0x2994a0
   [boot_stub] init 0x293ea0
   [boot_stub] init 0x138cb0
   [boot_stub] AVISO: init 0x138d48 nao registrado, pulando
   [boot_stub] init concluido, dispatchLoop a seguir
   ```

   Como testar: `git pull` + `bash recompilar.sh` + rodar. Sucesso =
   `[DBG 100E28]` aparece poucas vezes (não 40+), `livePc` sai do
   range `0x118110/0x13DB18`, e idealmente algum dos 15 readers de
   `0x32E854` finalmente vê valor != 0.

   **RESULTADO REAL OBSERVADO** (`resumo_1777092942516.pdf`): boot
   destravou completamente. `[DBG 100E28]` desapareceu. Apareceram
   coisas que NUNCA tinham acontecido antes:
   - 3 `CreateSema`, 1 `CreateThread id=2 entry=0x2947c8`.
   - Múltiplos `[Syscall83:override]` (FindAddress da SCE) — kernel
     PS2 trabalhando.
   - Watcher disparou: `[watch:GLOBAL_0x32E854] WRITE32 value=0x0
     pc=0x17a3d0 ra=0x17a928` — endereço foi tocado (escreveu 0,
     mas é primeira escrita real).
   - `PS2 GsPutIMR: Setting IMR=0xff00` + `PS2 GsSetCrt: ...` —
     **inicialização REAL do GS** (gráfico). Antes nem chegava perto.
   - Crash com `Morto` (SIGSEGV/SIGKILL) **logo depois** de GsSetCrt.
     Nova fronteira de boot.

   PS: `0x138d48` ESTAVA registrada (eu errei a previsão). E ela
   chama 11 sub-funções, várias marcadas como "NAO REGISTRADA - skip"
   (instrumentação injetada antes pelo usuário/agente).

   **REVISÃO POSTERIOR** (`Pasted-...1777126039981.txt`, GDB
   backtrace): `0x138d48` faz busy-wait via `cooperativeGuestYield`
   esperando evento que nunca chega no contexto pré-dispatchLoop.
   Stack do crash:
   ```
   sub_0013FAB8 (loop) -> sub_0013FCA8 -> entry_182ff0
     -> sub_0017A910 -> sub_00138D48 -> PS2Runtime::run
   ```
   **REMOVIDA do `kInitChain`** do stub. Agora só chamamos as 3
   primeiras (`0x2994a0`, `0x293ea0`, `0x138cb0`). A 4ª deve ser
   chamada naturalmente pelo fluxo do crt0 depois que o dispatchLoop
   estiver vivo (`j 0x2996B0` -> main wrapper -> ela).

   **Lição genérica**: funções que dependem de scheduler de threads
   (busy-wait, semáforos, VSync) NÃO podem ser chamadas no stub
   pré-dispatchLoop. Se uma init futura travar igual, remover dela.

A-OLD. **(plano original mantido pra histórico)** Stub C++ no runtime
   chamando manualmente o init pulado.

B. **🥈 Ensinar o ps2_recomp a decodificar as 5 instruções EE custom**
   (`0x10008c`, `0x100110`, `0x100170`, `0x10017c`, `0x1001b0`). Mais
   correto a longo prazo, mas exige mexer no source C++ do ps2_recomp.
   As 3 instruções "óbvias" são: `daddu` (×2) e `ei` (COP0).

C. **🥉 Verificar se as syscalls `0x3c`/`0x3d` estão implementadas no
   `ps2_syscalls.cpp` do runtime** — se não, implementar como stub que
   pelo menos seta as flags de thread/heap. Sem isso o caminho A não
   funciona.

D. **Diagnóstico de fundo**: descer a cadeia das 4 JAL pra mapear
   exatamente qual chama o setter de `0x32E854`. Útil pra confirmar
   após o caminho A funcionar.

### 🚨 BUG ARQUITETURAL DESCOBERTO — `--all` era no-op silencioso

**Sintoma**: log `Pasted-...1777128212950.txt` mostra loop fechado
`100e28→35c920→13db18→100e64` repetido 12.284 vezes. Disasm aponta que a
**thread principal criada por CreateThread (entry `0x2947c8`)** é uma
função de 216 bytes / 54 instruções no ELF, mas o `.cpp` recompilado
(`FUN_002947c8_0x2947c8.cpp`) tem **só 1 instrução / 4 bytes** — o
`addiu $sp, $sp, -0x80` do prologue, sem `jr $ra`. A thread cria, executa
o prologue, e o runtime cai em PC inválido.

**Auditoria global** (varredura dos 5626 .cpp + ELF original):
**1296 funções estão truncadas** (size ≤ 8 bytes / só prologue). 23% do
código recompilado é stub vazio. As maiores recuperam 4000, 2560, 2448
bytes de código.

**Causa raiz definitiva** — `IsAutoGeneratedName` em `elf_parser.cpp`:

```cpp
// linha 27
bool IsAutoGeneratedName(const std::string &name) {
    return name.rfind("sub_", 0) == 0 ||
           name.rfind("FUN_", 0) == 0 ||
           name.rfind("LAB_", 0) == 0 ||
           name.rfind("DAT_", 0) == 0;
}

// linha 605 — carregamento do ghidra_output (CSV de fixes)
if (extra.start == 0 || extra.end <= extra.start ||
    extra.name.empty() || IsAutoGeneratedName(extra.name))
    continue;   // ← descarta a entrada!
```

O `fix_truncated.py` emitia entradas com nome herdado do header
(`FUN_002947c8,0x2947c8,0x2948a0,216`). O ps2_recomp REJEITAVA todas
no carregamento por causa do prefixo `FUN_`. Por isso `--all` parecia
"estender 1607 funções" no relatório do script, mas o CSV chegava
zerado no recompilador — **0 das 1607 fixes aplicadas no estado real
em disco**. Os 4053 entries adicionais descobertos pelo ps2_recomp
vinham do mecanismo nativo de discovery, não do nosso CSV.

**Fix aplicado** em `tools/fix_truncated.py`: nova função `csv_safe_name`
renomeia automaticamente qualquer entrada com prefixo auto pra
`truncfix_0x{addr:x}` (que NÃO é filtrado por `IsAutoGeneratedName`).
Patch nas duas linhas que escrevem rows (merge + scope_set).

**Validação**: rerodando `python3 tools/fix_truncated.py --all -o /tmp/x.csv`,
a entrada do `0x2947c8` agora sai como
`truncfix_0x2947c8,0x2947c8,0x2948a0,216` e passa o filtro.

**Próxima ação do usuário** (bloqueia tudo o resto):
```bash
cd ~/Documentos/GitHub/godofwar && \
git pull && \
bash tools/regen_truncated.sh --all && \
bash recompilar.sh && \
PS2_TRACE=1 bash jogar.sh 2>&1 | tee log_teste3.txt
```

Esperado:
- ps2_recomp deve agora aceitar 1612 ranges corrigidos do CSV (antes: 0).
- `src/recompiled/FUN_002947c8_0x2947c8.cpp` deve ir de 25 linhas pra
  ~250 linhas (54 instruções traduzidas).
- O loop `100e28→35c920→13db18→100e64` deve sumir, porque a thread
  principal agora terá corpo real.
- Provavelmente novos crashes em pontos diferentes (boa notícia — boot
  avançando). Mandar log completo.

### Próximas (ordem sugerida)

4. ⏳ **Diff de execução vs PCSX2**
   - Problema: encontrar bugs sutis onde o nosso runtime diverge do
     comportamento real do PS2.
   - Como: ativar trace de PC no PCSX2 com mesmo ELF, comparar com nosso
     trace (`/tmp/ps2_trace.log` via `PS2_TRACE=1`). Onde divergem = bug.
   - Custo: maior (precisa configurar PCSX2 com tracing). Fazer só se os
     bugs ficarem realmente difíceis.

5. ⏳ **Visualizador/parser do trace de execução**
   - Problema: o `/tmp/ps2_trace.log` cresce muito rápido e fica ilegível.
   - Como: script Python que identifica hot spots, loops infinitos,
     padrões de chamada, e gera um resumo legível.

6. ⏳ **Auto-implementação de stubs por padrão**
   - Quando: depois de implementar manualmente uns 5-10 stubs, vai aparecer
     padrão (ex: muitos só precisam retornar 0, outros copiam estruturas).
   - Como: meta-script que gera implementações a partir de templates.

### Estratégia geral

- **Sempre rode a ferramenta #2 (relatório) antes de decidir a próxima ferramenta.**
  Os dados reais do que o jogo chama devem guiar prioridades, não suposições.
- **Cada bug fixado deve gerar pelo menos uma melhoria de ferramenta**
  se for um bug que pode se repetir em outros pontos.
- **Não prometa rodar o jogo completo** — o objetivo realista é progresso
  mensurável (avançar mais frames, abrir o menu, carregar uma fase).
- **Honestidade com o usuário** sobre limitações é prioridade
  (ver seção 10 do `HANDOFF_AGENT.md`).

## Como Rodar no Linux Mint

1. Faça o clone/pull do repositório
2. Copie o arquivo `part1.pak` para `GOD_PC_PORT_FINAL/data/` (não está no git por ser 4.3 GB)
3. Execute: `bash instalar_linux_mint.sh`
4. Após o build, execute: `bash jogar.sh`

## Arquivo part1.pak

O arquivo `part1.pak` (4.3 GB) está excluído do git pelo `.gitignore`.
Você precisa tê-lo localmente e copiá-lo para `GOD_PC_PORT_FINAL/data/part1.pak`.

## Depuração com Tracer

Ativar o log de chamadas de função em tempo real:
```bash
PS2_TRACE=1 ./build/GodOfWarPCPort GOD_PC_PORT_FINAL/data/SCUS_973.99
```
O log é salvo em `/tmp/ps2_trace.log` com: sequência, timestamp, PC, RA, SP.

## Dependências

- CMake 3.20+
- GCC/G++ com suporte a C++20
- Raylib 5.x
- SSE4.1 / POPCNT (CPU x86_64 moderna)

## Stack Tecnológica

- **Linguagem:** C++20
- **Gráficos/Janela:** Raylib 5.x
- **Build:** CMake
- **Recompilador:** PS2Recomp (MIPS R5900 → C++)
- **Runtime:** ps2xRuntime (emulação de memória PS2, GS, IOP, VU0/VU1, áudio)
