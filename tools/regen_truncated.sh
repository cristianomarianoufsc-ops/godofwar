#!/usr/bin/env bash
# tools/regen_truncated.sh
#
# Regera os .cpp de funções truncadas usando o ps2_recomp + CSV de correção.
#
# Pipeline:
#   1) Roda `tools/fix_truncated.py` (escopo: --reachable por default,
#      --all/--only-entry via flags) → gera tools/truncation_fixes.csv.
#   2) Localiza o binário ps2_recomp:
#        a) $PS2_RECOMP_BIN (env var)
#        b) ./build_recomp/PS2Recomp/ps2xRecomp/ps2_recomp
#        c) build/PS2Recomp/ps2xRecomp/ps2_recomp
#        d) avisa pra buildar via $PS2RECOMP_BUILD se nada for achado
#   3) Localiza o TOML do recompilador:
#        a) $RECOMP_TOML (env var) — recomendado
#        b) recompiler.toml (raiz do repo)
#        c) PS2Recomp/ps2xRecomp/recompiler.toml
#      Se nada for achado, gera um template em ./recompiler.toml.generated
#      e PARA — você precisa editar `input` e `output` antes de rodar.
#   4) Aplica nosso CSV ao TOML (faz backup como .bak):
#        ghidra_output = "<caminho absoluto do truncation_fixes.csv>"
#   5) Roda `ps2_recomp <toml>` pra regerar.
#   6) Mostra um diff resumido (`git diff --stat src/recompiled/`).
#
# Uso:
#   bash tools/regen_truncated.sh                  # reachable-only (seguro)
#   bash tools/regen_truncated.sh --only-entry     # só o crt0 (mínimo)
#   bash tools/regen_truncated.sh --all            # todas as 1612 truncadas
#   bash tools/regen_truncated.sh --build-recomp   # builda ps2_recomp se faltar
#   PS2_RECOMP_BIN=/path/to/ps2_recomp \
#     RECOMP_TOML=/path/to/recompiler.toml \
#     bash tools/regen_truncated.sh
#
# Esta ferramenta NUNCA edita .cpp à mão. Tudo passa pelo recompilador.

set -euo pipefail
cd "$(dirname "$0")/.."   # sobe pra raiz do repo

# Separa --build-recomp dos args que vão pra fix_truncated.py
BUILD_RECOMP=0
SCOPE_ARGS=()
for arg in "$@"; do
    if [[ "$arg" == "--build-recomp" ]]; then
        BUILD_RECOMP=1
    else
        SCOPE_ARGS+=("$arg")
    fi
done
CSV_OUT="tools/truncation_fixes.csv"

echo "=== [1/5] Gerando CSV de correção ==="
python3 tools/fix_truncated.py "${SCOPE_ARGS[@]+"${SCOPE_ARGS[@]}"}" -o "$CSV_OUT"

echo
echo "=== [2/5] Localizando binário ps2_recomp ==="
RECOMP_BIN="${PS2_RECOMP_BIN:-}"
if [[ -z "$RECOMP_BIN" ]]; then
    for cand in \
        ./build_recomp/PS2Recomp/ps2xRecomp/ps2_recomp \
        ./build/PS2Recomp/ps2xRecomp/ps2_recomp \
        ./build_recomp/ps2_recomp \
        ./PS2Recomp/build/ps2xRecomp/ps2_recomp; do
        if [[ -x "$cand" ]]; then
            RECOMP_BIN="$cand"
            break
        fi
    done
fi
if [[ -z "$RECOMP_BIN" || ! -x "$RECOMP_BIN" ]]; then
    if [[ "$BUILD_RECOMP" == "1" ]]; then
        echo "  Binário ps2_recomp não encontrado — buildando agora (--build-recomp)..."
        # Aponta direto pra ps2xRecomp (não pro PS2Recomp pai), pra NÃO puxar
        # raylib (408 MiB) e o runtime — só queremos o recompilador estático.
        cmake -S PS2Recomp/ps2xRecomp -B build_recomp -DCMAKE_BUILD_TYPE=Release
        cmake --build build_recomp -j"$(nproc)" --target ps2_recomp
        for cand in \
            ./build_recomp/ps2_recomp \
            ./build_recomp/PS2Recomp/ps2xRecomp/ps2_recomp \
            ./build_recomp/ps2xRecomp/ps2_recomp; do
            if [[ -x "$cand" ]]; then
                RECOMP_BIN="$cand"
                break
            fi
        done
        if [[ -z "$RECOMP_BIN" || ! -x "$RECOMP_BIN" ]]; then
            echo "ERRO: build aparentemente concluiu mas binário não foi achado." >&2
            echo "Procure por 'ps2_recomp' em build_recomp/ e exporte PS2_RECOMP_BIN." >&2
            exit 2
        fi
    else
        cat <<EOF
ERRO: binário ps2_recomp não encontrado.

Você tem duas opções:

  (a) Re-executar este script com --build-recomp pra buildar agora
      (compila o recompilador uma única vez, ~2-5 min):

          bash tools/regen_truncated.sh ${SCOPE_ARGS[@]+"${SCOPE_ARGS[@]}"} --build-recomp

  (b) Buildar manualmente e depois reexecutar (a partir da raiz do repo):

          cd "$(pwd)"
          cmake -S PS2Recomp/ps2xRecomp -B build_recomp -DCMAKE_BUILD_TYPE=Release
          cmake --build build_recomp -j\$(nproc) --target ps2_recomp
          bash tools/regen_truncated.sh ${SCOPE_ARGS[@]+"${SCOPE_ARGS[@]}"}

ATENÇÃO: NÃO rode 'recompilar.sh' depois deste script abortar — nada foi
regerado e o build incremental vai compilar o código antigo (com o hack
"Patch: Jump" ainda ativo).
EOF
        exit 2
    fi
fi
echo "  → $RECOMP_BIN"

echo
echo "=== [3/5] Localizando TOML do recompilador ==="
TOML="${RECOMP_TOML:-}"
if [[ -z "$TOML" ]]; then
    for cand in ./recompiler.toml ./PS2Recomp/ps2xRecomp/recompiler.toml; do
        if [[ -f "$cand" ]]; then
            TOML="$cand"
            break
        fi
    done
fi
if [[ -z "$TOML" || ! -f "$TOML" ]]; then
    GEN="./recompiler.toml.generated"
    cat > "$GEN" <<EOF
# Template gerado automaticamente por tools/regen_truncated.sh
# EDITE input e output pra apontar pro seu ELF e pasta de saída antes
# de rodar o recompilador. Depois mova/renomeie para recompiler.toml.

[general]
input  = "GOD_PC_PORT_FINAL/data/SCUS_973.99"
output = "src/recompiled"
single_file_output = false
runtime_header = "PS2Recomp/ps2xRuntime/include/ps2_runtime.h"

# Será injetado automaticamente pelo regen_truncated.sh:
ghidra_output = "$(pwd)/$CSV_OUT"

stubs = ["printf", "malloc", "free", "memcpy", "memset", "strncpy", "sprintf"]
skip  = ["abort", "exit", "_exit"]
EOF
    cat <<EOF

Não achei recompiler.toml. Gerei um TEMPLATE em:
    $GEN

EDITE input/output conforme seu setup, renomeie pra recompiler.toml
(ou exporte RECOMP_TOML=...) e rode novamente.
EOF
    exit 3
fi
echo "  → $TOML"

echo
echo "=== [4/5] Injetando ghidra_output no TOML (backup .bak) ==="
ABS_CSV="$(realpath "$CSV_OUT")"
cp -f "$TOML" "$TOML.bak"
# substitui ou adiciona linha ghidra_output sob [general]
python3 - "$TOML" "$ABS_CSV" <<'PY'
import re, sys, pathlib
toml_path, csv_path = sys.argv[1], sys.argv[2]
text = pathlib.Path(toml_path).read_text(encoding="utf-8")
new_line = f'ghidra_output = "{csv_path}"'
if re.search(r'^\s*ghidra_output\s*=', text, flags=re.M):
    text = re.sub(r'^\s*ghidra_output\s*=.*$', new_line, text, flags=re.M)
else:
    # injeta logo após [general]
    if re.search(r'^\s*\[general\]', text, flags=re.M):
        text = re.sub(r'(^\s*\[general\][^\n]*\n)',
                      r'\1' + new_line + '\n',
                      text, count=1, flags=re.M)
    else:
        text = "[general]\n" + new_line + "\n" + text
pathlib.Path(toml_path).write_text(text, encoding="utf-8")
print(f"  injetado: {new_line}")
PY

echo
echo "=== [5/5] Rodando ps2_recomp ==="
"$RECOMP_BIN" "$TOML"

echo
echo "=== Diff de arquivos regerados ==="
if command -v git >/dev/null 2>&1; then
    git diff --stat -- src/recompiled/ || true
    echo
    echo "Pra inspecionar o crt0 corrigido:"
    echo "    git diff src/recompiled/entry_0x100008.cpp"
else
    echo "(git não disponível — pulando diff)"
fi

echo
echo "Pronto. Recompile o C++ com:  bash recompilar.sh"
