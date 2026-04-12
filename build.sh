#!/bin/bash
set -e

echo "=== God of War PC Port - Build ==="
echo "Configurando o projeto com CMake..."

mkdir -p build
cd build

cmake ../GOD_PC_PORT_FINAL -DCMAKE_BUILD_TYPE=Debug 2>&1

echo ""
echo "Compilando... (pode demorar alguns minutos devido aos 5626 arquivos gerados)"
make -j$(nproc) 2>&1

echo ""
echo "=== Build concluído com sucesso! ==="
echo "Executável gerado: build/GodOfWarPCPort"
echo ""
echo "Para rodar o jogo:"
echo "  ./build/GodOfWarPCPort GOD_PC_PORT_FINAL/data/SCUS_973.99"
