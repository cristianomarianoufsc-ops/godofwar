# God of War PC Port

Port estático do God of War (PS2) para PC usando o PS2Recomp.

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

```bash
cd ~/Documentos/GitHub/godofwar
git pull origin main

# Caso A — mudanças apenas no runtime (PS2Recomp/ps2xRuntime/):
bash rebuild_runtime.sh --run         # segundos a poucos minutos

# Caso B — mudanças em src/recompiled/ ou src/main.cpp:
bash build.sh                          # incremental, com ccache fica rápido

# Rodar manualmente capturando logs:
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

### Regras pro agente Replit

- **NÃO rodar `bash build.sh` no Replit** — só desperdiça CPU.
- **NÃO iniciar o workflow `Start application`** — está intencionalmente
  configurado pra apenas imprimir uma mensagem de aviso.
- O workflow `Download part1.pak` também não precisa ser rodado (usuário já tem
  o arquivo local).
- Pode rodar análises estáticas, validação de sintaxe (`g++ -fsyntax-only`),
  ripgrep, leitura de arquivos. **Compilação completa, jamais.**

---

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

## Estado atual da depuração (sessão de 2026-04-23)

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
