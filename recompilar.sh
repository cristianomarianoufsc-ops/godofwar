#!/bin/bash
# Recompila apenas os arquivos que foram modificados desde o último build.
# O executável final é idêntico ao de um build completo.
# Use este script após alterar qualquer .cpp ou .h do projeto.

set -e

# GUARD: NÃO RODAR NO REPLIT — ver replit.md (topo). Build é no PC do Cris.
if [ -n "${REPL_ID:-}" ] || [ -n "${REPLIT_DEV_DOMAIN:-}" ] || [ -n "${REPL_OWNER:-}" ]; then
    echo "❌ ERRO: recompilar.sh NÃO deve ser rodado no Replit."
    echo "   Replit é só editor + análise estática (ver replit.md, topo)."
    echo "   Build é feito no PC do Agente Cris (Linux Mint)."
    exit 1
fi

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

# Fix critico: 'git pull' preserva o mtime do commit, entao se o .o local
# for mais novo que o .cpp baixado, make pula a recompilacao silenciosamente.
# Tocamos todos os arquivos modificados nas ultimas 2 horas pra forcar make
# a reavaliar dependencias. Tambem tocamos qualquer .cpp/.h/.inl mais antigo
# que o seu .o correspondente em build/ se foi alterado pelo git nos ultimos
# 5 commits (cobre o caso de pull recente).
RECENT_GIT_FILES=$(git -C "$SCRIPT_DIR" diff --name-only HEAD~5 HEAD 2>/dev/null | \
    grep -E '\.(cpp|h|hpp|inl|c)$' || true)
if [ -n "$RECENT_GIT_FILES" ]; then
    echo "[recompilar] Forcando touch em arquivos alterados nos ultimos 5 commits:"
    while IFS= read -r f; do
        if [ -f "$SCRIPT_DIR/$f" ]; then
            touch "$SCRIPT_DIR/$f"
            echo "  - $f"
        fi
    done <<< "$RECENT_GIT_FILES"
    echo ""
fi

cd "$BUILD_DIR"
make -j$(nproc) 2>&1

echo ""
echo "=== Concluído! Executável atualizado: build/GodOfWarPCPort ==="
