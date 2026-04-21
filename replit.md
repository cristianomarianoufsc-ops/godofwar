# God of War PC Port

Port estático do God of War (PS2) para PC usando o PS2Recomp.

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

### Próximas (ordem sugerida)

3. ⏳ **Patcher de PC final nas funções recompiladas**
   - Problema: o handover (seção 5) suspeita que o recompilador deixa o `ctx->pc`
     na última instrução em vez de avançar 4 bytes. Pode afetar todas as 5.626
     funções, não só a entry.
   - Antes de construir: rodar o jogo com a ferramenta #2 ativa e olhar o
     `ps2_missing.log`. Se aparecerem MUITAS entradas tipo `func_0x...`,
     o patcher é prioridade. Se aparecerem só algumas, fazer fix manual.
   - Quando construir: script Python que escaneia `GOD_PC_PORT_FINAL/src/recompiled/*.cpp`,
     detecta o último `ctx->pc = 0xXXX;` de cada função e adiciona o avanço de
     4 bytes. Backup automático antes de patchear.

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
