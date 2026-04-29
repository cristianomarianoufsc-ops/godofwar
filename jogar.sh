#!/bin/bash
# =============================================================
# God of War PC Port - Executar o Jogo
# =============================================================
# GUARD: NÃO RODAR NO REPLIT — ver replit.md (topo). Execução é no PC do Cris.
if [ -n "${REPL_ID:-}" ] || [ -n "${REPLIT_DEV_DOMAIN:-}" ] || [ -n "${REPL_OWNER:-}" ]; then
    echo "❌ ERRO: jogar.sh NÃO deve ser rodado no Replit."
    echo "   Replit é só editor + análise estática (ver replit.md, topo)."
    echo "   Execução do jogo é feita no PC do Agente Cris (Linux Mint)."
    exit 1
fi

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
