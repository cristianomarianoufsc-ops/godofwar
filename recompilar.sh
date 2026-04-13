#!/bin/bash
# Recompila apenas os arquivos que foram modificados desde o último build.
# O executável final é idêntico ao de um build completo.
# Use este script após alterar qualquer .cpp ou .h do projeto.

set -e
SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
BUILD_DIR="$SCRIPT_DIR/build"

if [ ! -d "$BUILD_DIR" ] || [ ! -f "$BUILD_DIR/Makefile" ]; then
    echo "Build não encontrado. Executando instalação completa..."
    bash "$SCRIPT_DIR/instalar_linux_mint.sh"
    exit 0
fi

echo "=== Recompilação incremental ==="
echo "Apenas arquivos modificados serão recompilados."
echo ""

cd "$BUILD_DIR"
make -j$(nproc) 2>&1

echo ""
echo "=== Concluído! Executável atualizado: build/GodOfWarPCPort ==="
