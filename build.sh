#!/bin/bash
set -e

# ============================================================================
# GUARD: NÃO RODAR NO REPLIT
# ============================================================================
# Este script compila 5626 .cpp (~80 min) e tenta rodar o jogo (precisa de
# display real). No Replit isso queima créditos do Agente Cris e não funciona.
# Build/run são feitos no PC dele (Linux Mint). Detalhes em replit.md (topo).
if [ -n "${REPL_ID:-}" ] || [ -n "${REPLIT_DEV_DOMAIN:-}" ] || [ -n "${REPL_OWNER:-}" ]; then
    echo "================================================================"
    echo "❌ ERRO: build.sh NÃO deve ser rodado no Replit."
    echo "   Replit é só editor + análise estática (ver replit.md, topo)."
    echo "   Build é feito no PC do Agente Cris (Linux Mint)."
    echo "   Se você é o agente Replit: pare. Não 'conserte' este guard."
    echo "================================================================"
    exit 1
fi

echo "=== God of War PC Port - Build + Execução ==="

mkdir -p build

if [ ! -f "build/CMakeCache.txt" ]; then
    echo "Configurando o projeto com CMake (primeira vez)..."
    cd build
    cmake ../GOD_PC_PORT_FINAL -DCMAKE_BUILD_TYPE=Debug 2>&1
    cd ..
else
    echo "CMake já configurado. Pulando configuração e retomando compilação..."
fi

cd build
echo ""
echo "Compilando... (retomando de onde parou, $(ls CMakeFiles/GodOfWarPCPort.dir/src/recompiled/*.o 2>/dev/null | wc -l)/5626 arquivos já prontos)"
make -j$(nproc) 2>&1

echo ""
echo "=== Build concluído com sucesso! ==="
echo "Executável gerado: build/GodOfWarPCPort"
echo ""
echo "Iniciando o jogo..."
cd ..
exec ./build/GodOfWarPCPort GOD_PC_PORT_FINAL/data/SCUS_973.99
