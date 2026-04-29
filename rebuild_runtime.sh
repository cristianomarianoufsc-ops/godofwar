#!/bin/bash
# =====================================================
# Rebuild rápido — só o runtime do PS2 (não os 5.626 .cpp do jogo)
# Use este script quando mexer em arquivos de:
#   PS2Recomp/ps2xRuntime/src/lib/*.cpp
#   GOD_PC_PORT_FINAL/src/main.cpp
#   GOD_PC_PORT_FINAL/src/register_functions.cpp
#   GOD_PC_PORT_FINAL/src/ps2_syscall_stubs.cpp
#
# Tempo esperado: 30 segundos a 2 minutos (vs horas do build completo)
# =====================================================
set -e

# GUARD: NÃO RODAR NO REPLIT — ver replit.md (topo). Build é no PC do Cris.
if [ -n "${REPL_ID:-}" ] || [ -n "${REPLIT_DEV_DOMAIN:-}" ] || [ -n "${REPL_OWNER:-}" ]; then
    echo "❌ ERRO: rebuild_runtime.sh NÃO deve ser rodado no Replit."
    echo "   Replit é só editor + análise estática (ver replit.md, topo)."
    echo "   Build é feito no PC do Agente Cris (Linux Mint)."
    exit 1
fi

if [ ! -f "build/CMakeCache.txt" ]; then
    echo "ERRO: build/ ainda não foi configurado."
    echo "Rode 'bash build.sh' primeiro para o build inicial completo."
    exit 1
fi

cd build

echo "[1/3] Recompilando o runtime do PS2..."
cmake --build . --target ps2runtime -j$(nproc) 2>&1

echo ""
echo "[2/3] Relinkando o executável GodOfWarPCPort..."
cmake --build . --target GodOfWarPCPort -j$(nproc) 2>&1

cd ..

echo ""
echo "[3/3] Pronto! Executável atualizado: build/GodOfWarPCPort"
echo ""

if [ "$1" = "--run" ] || [ "$1" = "-r" ]; then
    echo "Iniciando o jogo (--run)..."
    exec ./build/GodOfWarPCPort GOD_PC_PORT_FINAL/data/SCUS_973.99
fi
