#!/bin/bash
# =============================================================
# God of War PC Port - Executar o Jogo
# =============================================================
SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
EXE="$SCRIPT_DIR/build/GodOfWarPCPort"
ELF="$SCRIPT_DIR/GOD_PC_PORT_FINAL/data/SCUS_973.99"

if [ ! -f "$EXE" ]; then
    echo "Executável não encontrado!"
    echo "Execute primeiro: bash instalar_linux_mint.sh"
    exit 1
fi

if [ ! -f "$ELF" ]; then
    echo "Arquivo do jogo não encontrado: $ELF"
    exit 1
fi

echo "================================================="
echo "  God of War PC Port"
echo "================================================="
echo "  ELF: $ELF"
echo ""

# Ativar log de rastreamento se quiser depurar:
# export PS2_TRACE=1

"$EXE" "$ELF"
