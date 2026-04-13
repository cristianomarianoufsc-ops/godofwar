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
- `build.sh` — Script de build para o Replit

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
