#!/bin/bash
set -e

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
