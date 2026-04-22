#!/usr/bin/env bash
# =============================================================================
# setup_linux.sh - Setup automatico do ambiente para o port do God of War
# =============================================================================
# Uso: bash setup_linux.sh
#
# O que este script faz:
#   1. Atualiza apt
#   2. Instala dependencias de build (cmake, gcc, glfw, ccache, etc.)
#   3. Instala dependencias do raylib
#   4. Compila e instala raylib 5.5 (do source, pois nao esta nos repos do Mint)
#   5. Instala pipx + gdown (para baixar o part1.pak do Google Drive)
#   6. Configura ccache com 5 GB de cache
#
# O que este script NAO faz (faca manualmente depois):
#   - git clone do projeto
#   - download do part1.pak (use: gdown 'URL' -O GOD_PC_PORT_FINAL/data/part1.pak)
#   - configuracao do git (user.name e user.email)
# =============================================================================

set -e  # para na primeira falha

GREEN='\033[0;32m'
YELLOW='\033[1;33m'
RED='\033[0;31m'
NC='\033[0m' # no color

log()  { echo -e "${GREEN}[setup]${NC} $1"; }
warn() { echo -e "${YELLOW}[setup]${NC} $1"; }
err()  { echo -e "${RED}[setup]${NC} $1"; }

# -----------------------------------------------------------------------------
# Verificacoes iniciais
# -----------------------------------------------------------------------------
if [[ $EUID -eq 0 ]]; then
    err "Nao rode este script como root/sudo. Ele pede sudo quando precisa."
    exit 1
fi

if ! command -v apt &> /dev/null; then
    err "Este script funciona apenas em sistemas baseados em Debian/Ubuntu/Mint."
    exit 1
fi

log "Iniciando setup do ambiente. Isso vai levar alguns minutos..."
log "Voce vai precisar digitar sua senha (sudo) algumas vezes."
echo

# -----------------------------------------------------------------------------
# 1. Atualizar apt
# -----------------------------------------------------------------------------
log "[1/6] Atualizando lista de pacotes..."
sudo apt update

# -----------------------------------------------------------------------------
# 2. Dependencias de build
# -----------------------------------------------------------------------------
log "[2/6] Instalando dependencias de build (gcc, cmake, ccache, etc.)..."
sudo apt install -y \
    build-essential \
    cmake \
    pkg-config \
    libglfw3-dev \
    ccache \
    git \
    git-lfs \
    wget

# -----------------------------------------------------------------------------
# 3. Dependencias do raylib
# -----------------------------------------------------------------------------
log "[3/6] Instalando dependencias do raylib..."
sudo apt install -y \
    libasound2-dev \
    libx11-dev \
    libxrandr-dev \
    libxi-dev \
    libxcursor-dev \
    libxinerama-dev \
    libwayland-dev \
    libxkbcommon-dev

# -----------------------------------------------------------------------------
# 4. Compilar e instalar raylib 5.5
# -----------------------------------------------------------------------------
if pkg-config --exists raylib 2>/dev/null; then
    RAYLIB_VER=$(pkg-config --modversion raylib)
    log "[4/6] raylib ${RAYLIB_VER} ja instalado, pulando."
else
    log "[4/6] Compilando raylib 5.5 do source (leva ~2 min)..."
    BUILD_DIR=$(mktemp -d)
    pushd "$BUILD_DIR" > /dev/null

    git clone --depth 1 --branch 5.5 https://github.com/raysan5/raylib.git
    cd raylib
    mkdir -p build && cd build
    cmake -DBUILD_SHARED_LIBS=ON -DCMAKE_BUILD_TYPE=Release ..
    make -j"$(nproc)"
    sudo make install
    sudo ldconfig

    popd > /dev/null
    rm -rf "$BUILD_DIR"

    log "raylib instalado: $(pkg-config --modversion raylib)"
fi

# -----------------------------------------------------------------------------
# 5. pipx + gdown (para baixar part1.pak do Google Drive)
# -----------------------------------------------------------------------------
log "[5/6] Instalando pipx e gdown..."
sudo apt install -y pipx
pipx ensurepath > /dev/null

if ! pipx list 2>/dev/null | grep -q gdown; then
    pipx install gdown
fi

# -----------------------------------------------------------------------------
# 6. Configurar ccache
# -----------------------------------------------------------------------------
log "[6/6] Configurando ccache com 5 GB de cache..."
ccache --max-size=5G > /dev/null
ccache --set-config=compression=true > /dev/null

# -----------------------------------------------------------------------------
# Resumo final
# -----------------------------------------------------------------------------
echo
log "=============================================================="
log "  Setup concluido com sucesso!"
log "=============================================================="
echo
echo "Versoes instaladas:"
echo "  - gcc:    $(gcc --version | head -1)"
echo "  - cmake:  $(cmake --version | head -1)"
echo "  - ccache: $(ccache --version | head -1)"
echo "  - raylib: $(pkg-config --modversion raylib)"
echo
warn "Proximos passos manuais:"
echo "  1. Configurar git (se nao configurou ainda):"
echo "     git config --global user.name  \"Seu Nome\""
echo "     git config --global user.email \"seu@email.com\""
echo
echo "  2. Clonar o projeto (se ainda nao clonou):"
echo "     mkdir -p ~/Documentos/GitHub && cd ~/Documentos/GitHub"
echo "     git clone https://github.com/cristianomarianoufsc-ops/godofwar.git"
echo
echo "  3. Baixar o part1.pak (4 GB, leva ~2 horas):"
echo "     cd ~/Documentos/GitHub/godofwar"
echo "     gdown 'https://drive.google.com/uc?id=1pmhBQeneIMLyIiAeWeAiAebOJb3O6fuM' \\"
echo "           -O GOD_PC_PORT_FINAL/data/part1.pak"
echo
echo "  4. Build:"
echo "     bash build.sh"
echo
warn "Reinicie o terminal antes de usar o gdown (para o PATH atualizar)."
