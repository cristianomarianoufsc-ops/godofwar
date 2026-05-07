#!/usr/bin/env python3
"""agente_local.py — Agente local que monitora o GitHub e avisa quando um round termina.

FUNÇÃO:
    Fica rodando no PC do Agente Cris, monitorando a branch `logs/auto` no GitHub.
    Quando detecta novo commit (round concluído), exibe:
      1. Notificação de desktop (notify-send, Linux Mint)
      2. Resumo rápido no terminal com os marcadores críticos do round
      3. Mensagem pronta para copiar e colar no chat do Replit Agent

USO:
    python3 tools/agente_local.py              # monitora indefinidamente (intervalo 30s)
    python3 tools/agente_local.py --once       # verifica uma vez e sai
    python3 tools/agente_local.py --interval 15  # checa a cada 15s

REQUISITOS:
    - GITHUB_TOKEN no ambiente (ou em ~/.git-credentials)
    - notify-send instalado (padrão no Linux Mint: sudo apt install libnotify-bin)
    - python3 (padrão no Linux Mint)

NOTAS:
    - Não requer nenhuma dependência externa além da stdlib Python
    - Não fala com o Replit automaticamente (sem API pública)
      → gera o texto de comando para você colar no chat
"""

import argparse
import os
import re
import subprocess
import sys
import time
import urllib.error
import urllib.request
from datetime import datetime

# ── Configuração ────────────────────────────────────────────────────────────
REPO_OWNER  = "cristianomarianoufsc-ops"
REPO_NAME   = "godofwar"
LOG_BRANCH  = "logs/auto"
LOG_DIR     = "runs_automaticos"

API_COMMITS = (
    f"https://api.github.com/repos/{REPO_OWNER}/{REPO_NAME}"
    f"/commits?sha={LOG_BRANCH}&per_page=1"
)
RAW_BASE = (
    f"https://raw.githubusercontent.com/{REPO_OWNER}/{REPO_NAME}"
    f"/{LOG_BRANCH}/{LOG_DIR}"
)
URL_FILTERED = RAW_BASE + "/log_latest_filtered.txt"
URL_FULL     = RAW_BASE + "/log_latest_full.txt"

# Marcadores críticos para o resumo rápido (ordem de prioridade)
MARCADORES = [
    ("nonBlack",        "🖼️  nonBlack"),
    ("frame:upload",    "🖼️  frame"),
    ("PASSO 32",        "⚙️  PASSO 32"),
    ("PASSO 28",        "⚙️  PASSO 28"),
    ("PASSO 13",        "⚙️  PASSO 13"),
    ("138D48.*retornou","📍 138D48"),
    ("PASSO 23B",       "🔢 PASSO 23B"),
    ("StartThread",     "🧵 StartThread"),
    ("CreateThread",    "🧵 CreateThread"),
    ("WaitSema",        "⏳ WaitSema"),
    ("SIGSEGV",         "💥 SIGSEGV"),
    ("dispatch:first-bad-pc", "❌ bad-pc"),
    ("ExitThread",      "🚪 ExitThread"),
    ("activeThread",    "📊 activeThreads"),
    ("VBlank tick #",   "🕐 VBlank"),
]

REPLIT_URL = "https://replit.com"

# ── Helpers ─────────────────────────────────────────────────────────────────

def get_token() -> str:
    """Obtém GITHUB_TOKEN do ambiente ou de ~/.git-credentials."""
    token = os.environ.get("GITHUB_TOKEN", "")
    if token:
        return token
    # Tenta ler de ~/.git-credentials
    cred_path = os.path.expanduser("~/.git-credentials")
    if os.path.exists(cred_path):
        with open(cred_path) as f:
            for line in f:
                # Formato: https://user:TOKEN@github.com
                m = re.search(r"https://[^:]+:([^@]+)@github\.com", line.strip())
                if m:
                    return m.group(1)
    return ""


def fetch(url: str, token: str) -> str:
    """Faz requisição HTTP autenticada e retorna o corpo como string."""
    req = urllib.request.Request(url)
    if token:
        req.add_header("Authorization", f"token {token}")
    req.add_header("User-Agent", "agente_local_gow/1.0")
    try:
        with urllib.request.urlopen(req, timeout=15) as resp:
            return resp.read().decode("utf-8", errors="replace")
    except urllib.error.HTTPError as e:
        if e.code == 404:
            return ""
        raise
    except Exception as e:
        print(f"[agente_local] fetch erro: {e}", file=sys.stderr)
        return ""


def get_latest_commit_sha(token: str) -> str:
    """Retorna o SHA do commit mais recente em logs/auto."""
    import json
    body = fetch(API_COMMITS, token)
    if not body:
        return ""
    try:
        data = json.loads(body)
        if data and isinstance(data, list):
            return data[0].get("sha", "")
    except Exception:
        pass
    return ""


def get_commit_message(token: str) -> str:
    """Retorna a mensagem do commit mais recente em logs/auto."""
    import json
    body = fetch(API_COMMITS, token)
    if not body:
        return ""
    try:
        data = json.loads(body)
        if data and isinstance(data, list):
            return data[0].get("commit", {}).get("message", "")
    except Exception:
        pass
    return ""


def resumo_rapido(log_filtrado: str) -> list[str]:
    """Extrai linhas relevantes do log filtrado para exibir no terminal."""
    linhas = log_filtrado.splitlines()
    resultado = []
    vistos = set()
    for padrao, label in MARCADORES:
        matches = [l for l in linhas if re.search(padrao, l)]
        if matches:
            # Mostra última ocorrência de cada marcador
            ultima = matches[-1].strip()
            chave = label
            if chave not in vistos:
                vistos.add(chave)
                # Trunca linha longa
                if len(ultima) > 100:
                    ultima = ultima[:97] + "..."
                resultado.append(f"  {label}: {ultima}")
    return resultado


def notificar_desktop(titulo: str, mensagem: str) -> None:
    """Envia notificação via notify-send (Linux)."""
    try:
        subprocess.run(
            ["notify-send", "--icon=terminal", "--urgency=normal",
             "--expire-time=10000", titulo, mensagem],
            timeout=5,
            capture_output=True,
        )
    except FileNotFoundError:
        pass  # notify-send não instalado — sem problema
    except Exception:
        pass


def gerar_comando_replit(commit_msg: str, resumo: list[str]) -> str:
    """Gera o texto de comando para colar no chat do Replit Agent."""
    partes = ["analisa o log do último round"]
    if resumo:
        # Destaca se nonBlack > 0
        for linha in resumo:
            if "nonBlack" in linha and "nonBlack=0" not in linha:
                partes = ["🏆 nonBlack>0! analisa o log do último round — PRIMEIRO FRAME!"]
                break
    return "\n".join(partes)


def timestamp() -> str:
    return datetime.now().strftime("%Y-%m-%d %H:%M:%S")


# ── Loop principal ───────────────────────────────────────────────────────────

def monitorar(intervalo: int, once: bool) -> None:
    token = get_token()
    if not token:
        print("❌ GITHUB_TOKEN não encontrado.")
        print("   Configure com: export GITHUB_TOKEN=seu_token")
        print("   Ou salve em ~/.git-credentials")
        sys.exit(1)

    print("=" * 60)
    print("  🔭 AGENTE LOCAL — OPERAÇÃO ESPARTA")
    print(f"  Monitorando: {REPO_OWNER}/{REPO_NAME} branch={LOG_BRANCH}")
    print(f"  Intervalo: {intervalo}s  |  Ctrl+C para parar")
    print("=" * 60)

    ultimo_sha = ""

    # Carrega SHA atual para não disparar na primeira checagem
    print(f"\n[{timestamp()}] Iniciando — lendo SHA atual da branch...")
    sha_inicial = get_latest_commit_sha(token)
    if sha_inicial:
        ultimo_sha = sha_inicial
        print(f"  SHA atual: {sha_inicial[:10]}... (aguardando novo commit)")
    else:
        print("  Não consegui ler o SHA inicial — verificarei a cada round completo")

    if once:
        # Modo --once: verifica imediatamente e reporta o estado atual
        print(f"\n[{timestamp()}] Modo --once: analisando round atual...")
        log = fetch(URL_FILTERED, token)
        if not log:
            print("  Log filtrado não encontrado ou vazio.")
            return
        resumo = resumo_rapido(log)
        commit_msg = get_commit_message(token)
        _reportar(resumo, commit_msg, sha_inicial)
        return

    print(f"\n[{timestamp()}] Monitorando... (aguardando novo round)")

    while True:
        try:
            time.sleep(intervalo)
            sha_atual = get_latest_commit_sha(token)

            if not sha_atual:
                print(f"[{timestamp()}] Sem resposta da API — sem internet?")
                continue

            if sha_atual == ultimo_sha:
                print(f"[{timestamp()}] Sem novidade. ({sha_atual[:10]}...)")
                continue

            # NOVO COMMIT DETECTADO
            print(f"\n[{timestamp()}] ✅ ROUND CONCLUÍDO! SHA: {sha_atual[:10]}...")
            ultimo_sha = sha_atual

            # Baixa log filtrado
            log = fetch(URL_FILTERED, token)
            commit_msg = get_commit_message(token)
            resumo = resumo_rapido(log) if log else []

            _reportar(resumo, commit_msg, sha_atual)

        except KeyboardInterrupt:
            print(f"\n[{timestamp()}] Interrompido. Até logo, Agente Cris.")
            break
        except Exception as e:
            print(f"[{timestamp()}] Erro inesperado: {e}")
            continue


def _reportar(resumo: list[str], commit_msg: str, sha: str) -> None:
    """Exibe o relatório no terminal e envia notificação desktop."""
    print("\n" + "─" * 60)
    print("  📋 RESUMO DO ROUND")
    print("─" * 60)

    if commit_msg:
        print(f"  Commit: {commit_msg.splitlines()[0][:80]}")
    if sha:
        print(f"  SHA:    {sha[:10]}...")
    print()

    if resumo:
        print("  Marcadores encontrados:")
        for linha in resumo:
            print(linha)
    else:
        print("  (log filtrado vazio ou sem marcadores conhecidos)")

    # Verifica vitória
    vitoria = any(
        "nonBlack" in l and "nonBlack=0" not in l
        for l in resumo
    )
    if vitoria:
        print("\n  🏆🏆🏆 nonBlack > 0 — PRIMEIRO FRAME DO JOGO! 🏆🏆🏆")

    cmd = gerar_comando_replit(commit_msg, resumo)
    print("\n" + "─" * 60)
    print("  💬 COLE ISSO NO CHAT DO REPLIT:")
    print("─" * 60)
    print(f"  {cmd}")
    print("─" * 60)
    print(f"  🔗 Replit: {REPLIT_URL}")
    print()

    # Notificação desktop
    titulo = "🎮 Operação Esparta — Round concluído"
    if vitoria:
        titulo = "🏆 Operação Esparta — PRIMEIRO FRAME!"
        corpo  = "nonBlack > 0! Cole no chat do Replit: analisa o log"
    elif resumo:
        ultimo_marco = resumo[-1].strip()
        corpo = f"Round OK. Cole no Replit:\n{cmd}\n\n{ultimo_marco}"
    else:
        corpo = "Round sem marcadores. Verifique o log completo."

    notificar_desktop(titulo, corpo)


# ── Entry point ──────────────────────────────────────────────────────────────

def main() -> None:
    parser = argparse.ArgumentParser(
        description="Agente local: monitora rounds do God of War PC Port no GitHub"
    )
    parser.add_argument(
        "--interval", "-i", type=int, default=30,
        help="Intervalo em segundos entre checagens (padrão: 30)"
    )
    parser.add_argument(
        "--once", action="store_true",
        help="Verifica uma vez e sai (não fica em loop)"
    )
    args = parser.parse_args()
    monitorar(intervalo=args.interval, once=args.once)


if __name__ == "__main__":
    main()
