#!/usr/bin/env bash
# ============================================================================
# auto_round.sh — automação do loop "git pull + rebuild + run + log + commit"
# para o projeto God of War PS2→PC port (Operação Esparta).
# ============================================================================
#
# COMANDOS DISPONÍVEIS (todos rodam de ~/Documentos/GitHub/godofwar):
# ----------------------------------------------------------------------------
#
#   bash auto_round.sh once
#       → Roda UM round (rebuild + jogo + log + commit) e SAI SOZINHO.
#       → ❌ NÃO precisa Ctrl+C — termina em ~3 min.
#       → Use pra testar se está tudo funcionando.
#
#   bash auto_round.sh loop                     ⭐ MODO PRINCIPAL
#       → Fica VIVO PRA SEMPRE checando novo commit no main a cada 30s.
#       → Quando o agente IA commitar algo, dispara um round automático.
#       → ✅ Aperte Ctrl+C SÓ quando quiser parar (fim do dia, desligar PC).
#       → Pode minimizar o terminal — segue rodando enquanto está aberto.
#
#   bash auto_round.sh status
#       → Mostra estado atual (último hash, logs gerados) e SAI SOZINHO.
#       → ❌ NÃO precisa Ctrl+C.
#
#   nohup bash auto_round.sh loop > auto_round.log 2>&1 &
#       → Modo "fantasma": roda em background mesmo se fechar terminal.
#       → Pra ver: tail -f auto_round.log
#       → Pra matar: pkill -f auto_round.sh
#
# ----------------------------------------------------------------------------
# DENTRO DE CADA ROUND (qualquer modo):
#   - Janela do jogo abre sozinha, fica 300s, FECHA SOZINHA via timeout.
#   - ❌ Você NÃO precisa apertar Ctrl+C no jogo nem no terminal.
#   - ❌ NÃO feche a janela do jogo no X — deixe o timeout fazer o trabalho.
# ----------------------------------------------------------------------------
#
# COMO O AGENTE IA RECEBE OS LOGS:
#   - Após cada round, script faz git push em branch separada `logs/auto`
#   - Agente IA lê via: curl https://raw.githubusercontent.com/.../logs/auto/runs_automaticos/log_latest_filtered.txt
#   - VOCÊ NÃO PRECISA COLAR LOGS NO CHAT — agente busca sozinho.
#
# SEGURANÇA:
#   - Script NUNCA commita em `main` (só em `logs/auto`) — sem loop infinito.
#   - Token GitHub salvo em ~/.git-credentials (modo store).
#
# ----------------------------------------------------------------------------
# Requisitos:
#   - git configurado com push sem senha (token fine-grained com Contents: RW)
#   - rebuild_runtime.sh e jogar.sh no diretório do projeto
#   - timeout (coreutils, padrão Linux Mint/Ubuntu)
# ============================================================================

set -u

# ============================================================
# CONFIGURAÇÃO
# ============================================================
PROJECT_DIR="${PROJECT_DIR:-$HOME/Documentos/GitHub/godofwar}"
POLL_INTERVAL=30                  # segundos entre checagens de novo commit
RUN_TIMEOUT=300                   # segundos rodando o jogo (jogar.sh) — reduzido de 900→300 (Bug AB fix: diagnóstico de Bug P é rápido; se precisar de mais tempo após Bug P, aumentar)
LOG_BRANCH="logs/auto"
LOG_DIR_NAME="runs_automaticos"
STATE_FILE_NAME=".auto_round_last_hash"

# Padrão grep pra extrair as linhas que importam pro próximo round
GREP_PATTERN="PARTE 10 PLANO|Unknown syscall|VBlank tick #[0-9]*000 |sceSifSetDma|SIGSEGV|Morto|CreateThread|StartThread|stub:|INTC:|CreateSema|WaitSema|SignalSema|boot-loop:suspect|GAME_MODE|DelayThread|SleepThread|ThreadEntry|ExitThread|TerminateThread|PASSO 3[abcd]|PollSema forj|notify2a1710|rpcBusy2a1734|sifClient2a28d0|FUN_002962d8|FUN_00296300|sub_002963C0|sub_00295568|func_295218|func_2952C8|WaitEventFlag|SetEventFlag|CreateEventFlag|mode_compat|Bug AB|Bug R|boot_stub.*entry|Starting execution|BOOT#|SyscallOverride|poll_327a40|FUN_002947c8|BugP_entry|BugP_exit"

# ============================================================
# HELPERS
# ============================================================
LOG_DIR="$PROJECT_DIR/$LOG_DIR_NAME"
STATE_FILE="$PROJECT_DIR/$STATE_FILE_NAME"

log() {
    echo "[$(date +'%Y-%m-%d %H:%M:%S')] $*"
}

err() {
    echo "[$(date +'%Y-%m-%d %H:%M:%S')] ERRO: $*" >&2
}

cd_project() {
    cd "$PROJECT_DIR" || {
        err "Diretório $PROJECT_DIR não existe. Edite PROJECT_DIR no topo do script."
        exit 1
    }
}

ensure_log_branch() {
    # Cria branch logs/auto no remoto se não existir
    if ! git ls-remote --exit-code --heads origin "$LOG_BRANCH" >/dev/null 2>&1; then
        log "Criando branch $LOG_BRANCH no remoto (primeira vez)..."
        git fetch origin main >/dev/null 2>&1 || true
        local main_hash
        main_hash=$(git rev-parse origin/main 2>/dev/null || git rev-parse HEAD)
        git push origin "${main_hash}:refs/heads/$LOG_BRANCH" 2>&1 | tail -3
    fi
}

# ============================================================
# ROUND ÚNICO
# ============================================================
run_one_round() {
    log "================================================"
    log "ROUND novo iniciando"
    log "================================================"

    # 1. git pull em main (estrategia merge explicita pra nao travar em
    # divergencia — este PC e consumidor passivo de main, entao se houver
    # commit local pendurado deixamos o merge resolver. Se quiser politica
    # mais estrita troque por --ff-only e investigue a divergencia manual.)
    log "1/5: git pull --no-rebase origin main..."
    git checkout main >/dev/null 2>&1 || { err "checkout main falhou"; return 1; }
    if ! git pull --no-rebase origin main; then
        err "git pull falhou (provavel divergencia local nao resolvida)"
        err "  diagnostico: rode 'git log --oneline origin/main..HEAD' pra ver commits locais sobrando"
        err "  fix rapido (perde commits locais): git fetch origin main && git reset --hard origin/main"
        return 1
    fi

    # 2. rebuild
    log "2/5: rebuild_runtime.sh (pode demorar 30s-2min)..."
    if ! bash rebuild_runtime.sh; then
        err "rebuild falhou — pulando este round"
        return 1
    fi

    # 3. preparar pastas e nome de log
    mkdir -p "$LOG_DIR"
    local TS HEAD_HASH FULL_LOG FILTERED_LOG
    TS=$(date +%Y%m%d_%H%M%S)
    HEAD_HASH=$(git rev-parse --short HEAD)
    FULL_LOG="$LOG_DIR/log_${TS}_${HEAD_HASH}_full.txt"
    FILTERED_LOG="$LOG_DIR/log_${TS}_${HEAD_HASH}_filtered.txt"

    # 4. rodar jogo com timeout (manda SIGINT = Ctrl+C, jogo salva log limpo)
    log "3/5: rodando jogo por ${RUN_TIMEOUT}s (timeout envia Ctrl+C automático)..."
    PS2_TRACE=1 timeout --signal=INT --kill-after=10s "${RUN_TIMEOUT}s" \
        bash jogar.sh > "$FULL_LOG" 2>&1 || true

    # 5. filtrar e medir
    log "4/5: filtrando log..."
    grep -E "$GREP_PATTERN" "$FULL_LOG" > "$FILTERED_LOG" 2>/dev/null || true

    local LINES_TOTAL LINES_FILT
    LINES_TOTAL=$(wc -l < "$FULL_LOG" 2>/dev/null || echo 0)
    LINES_FILT=$(wc -l < "$FILTERED_LOG" 2>/dev/null || echo 0)
    log "   Log full:     $LINES_TOTAL linhas"
    log "   Log filtrado: $LINES_FILT linhas"

    if [ "$LINES_TOTAL" -lt 5 ]; then
        err "Log full muito curto — jogo pode não ter rodado direito (display X disponível?)"
    fi

    # 6. commitar em logs/auto
    # IMPORTANTE: o cp dos arquivos "_latest_" tem que ser DEPOIS do checkout,
    # senao o git checkout -B logs/auto origin/logs/auto sobrescreve eles com
    # a versao velha tracked na branch (bug confirmado 2026-04-30: log_latest
    # ficava stale apesar do cp ter rodado antes — checkout reverteu).
    log "5/5: commitando logs em $LOG_BRANCH..."
    git fetch origin "$LOG_BRANCH" >/dev/null 2>&1 || true
    if git rev-parse "origin/$LOG_BRANCH" >/dev/null 2>&1; then
        git checkout -B "$LOG_BRANCH" "origin/$LOG_BRANCH" >/dev/null 2>&1
    else
        git checkout -B "$LOG_BRANCH" >/dev/null 2>&1
    fi

    # AGORA sim — depois do checkout, sobrescreve log_latest com versao desta rodada
    cp -f "$FULL_LOG" "$LOG_DIR/log_latest_full.txt" 2>/dev/null || true
    cp -f "$FILTERED_LOG" "$LOG_DIR/log_latest_filtered.txt" 2>/dev/null || true

    git add -f "$LOG_DIR_NAME/" 2>/dev/null
    if git commit -m "auto: round em main@${HEAD_HASH} ($(date +%Y-%m-%d_%H:%M)) — full=${LINES_TOTAL} filt=${LINES_FILT}"; then
        if git push origin "$LOG_BRANCH"; then
            log "   Push OK — agente pode ler do branch $LOG_BRANCH"
        else
            err "git push falhou (sem internet? credencial?)"
        fi
    else
        log "   Nada novo pra commitar (logs idênticos ao último)"
    fi

    git checkout main >/dev/null 2>&1
    log "ROUND completo."
    return 0
}

# ============================================================
# LOOP PRINCIPAL
# ============================================================
main_loop() {
    cd_project
    ensure_log_branch

    log "Modo loop ativo. Verificando novos commits a cada ${POLL_INTERVAL}s."
    log "Branch monitorada: main → resultados em logs/auto"
    log "Diretório dos logs: $LOG_DIR"
    log "Pressione Ctrl+C pra parar."
    log ""

    local last_hash=""
    [ -f "$STATE_FILE" ] && last_hash=$(cat "$STATE_FILE")

    while true; do
        git fetch origin main >/dev/null 2>&1
        local current_hash
        current_hash=$(git rev-parse origin/main 2>/dev/null || echo "")

        if [ -z "$current_hash" ]; then
            err "Não consegui resolver origin/main. Sem internet?"
        elif [ "$current_hash" != "$last_hash" ]; then
            log "Commit novo detectado: ${current_hash:0:8} (anterior: ${last_hash:0:8})"
            if run_one_round; then
                echo "$current_hash" > "$STATE_FILE"
                last_hash="$current_hash"
            else
                err "Round falhou. Tentando novamente em ${POLL_INTERVAL}s."
            fi
        else
            log "Sem novidade. Próxima verificação em ${POLL_INTERVAL}s."
        fi

        sleep "$POLL_INTERVAL"
    done
}

# ============================================================
# COMANDOS AUXILIARES
# ============================================================
cmd_status() {
    cd_project
    echo "PROJECT_DIR: $PROJECT_DIR"
    echo "LOG_BRANCH:  $LOG_BRANCH"
    echo "LOG_DIR:     $LOG_DIR"
    echo "STATE_FILE:  $STATE_FILE"
    if [ -f "$STATE_FILE" ]; then
        echo "Último hash processado: $(cat "$STATE_FILE")"
    else
        echo "Último hash processado: (nenhum, primeiro run)"
    fi
    echo ""
    echo "Hash atual main local: $(git rev-parse main 2>/dev/null || echo 'N/A')"
    echo "Hash atual origin/main: $(git rev-parse origin/main 2>/dev/null || echo 'N/A — rode git fetch')"
    if [ -d "$LOG_DIR" ]; then
        echo ""
        echo "Últimos 5 logs em $LOG_DIR:"
        ls -lt "$LOG_DIR" 2>/dev/null | head -6
    fi
}

# ============================================================
# TRAP — saída limpa no Ctrl+C
# ============================================================
cleanup() {
    echo ""
    log "Interrompido pelo usuário. Saindo limpo."
    exit 0
}
trap cleanup INT TERM

# ============================================================
# ENTRADA
# ============================================================
case "${1:-loop}" in
    once)
        cd_project
        ensure_log_branch
        run_one_round
        ;;
    loop)
        main_loop
        ;;
    status)
        cmd_status
        ;;
    *)
        echo "Uso: bash auto_round.sh [loop|once|status]"
        echo ""
        echo "  loop   (padrão) roda em loop checando novo commit a cada ${POLL_INTERVAL}s"
        echo "  once   roda uma vez (independente de ter commit novo) e sai"
        echo "  status mostra estado atual sem rodar nada"
        exit 1
        ;;
esac
