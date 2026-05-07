#!/bin/bash
# git_push.sh — Push automático usando GITHUB_TOKEN do ambiente Replit
# Todo agente deve chamar este script após commitar mudanças.
# O GITHUB_TOKEN está salvo permanentemente nos secrets do projeto.

set -e

if [ -z "${GITHUB_TOKEN:-}" ]; then
    echo "❌ GITHUB_TOKEN não encontrado. Configure o secret no Replit."
    exit 1
fi

REPO_URL="https://${GITHUB_TOKEN}@github.com/cristianomarianoufsc-ops/godofwar.git"

echo "📤 Fazendo push para o GitHub..."
git push "$REPO_URL" main
echo "✅ Push concluído! O loop auto_round.sh no PC do Cris detectará o commit em ≤30s."
