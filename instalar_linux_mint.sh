#!/bin/bash
# =============================================================
# God of War PC Port - Script de Instalação para Linux Mint
# =============================================================
# Execute com: bash instalar_linux_mint.sh
# =============================================================

set -e
RED='\033[0;31m'; GREEN='\033[0;32m'; YELLOW='\033[1;33m'; NC='\033[0m'

echo -e "${GREEN}=== God of War PC Port - Instalação Linux Mint ===${NC}"
echo ""

# --- Passo 1: Atualizar pacotes e instalar dependências base ---
echo -e "${YELLOW}[1/6] Instalando dependências do sistema...${NC}"
sudo apt update
sudo apt install -y \
    build-essential \
    g++ \
    cmake \
    pkg-config \
    git \
    libgl1-mesa-dev \
    libglu1-mesa-dev \
    libglfw3-dev \
    libopenal-dev \
    libxrandr-dev \
    libxinerama-dev \
    libxcursor-dev \
    libxi-dev \
    libxext-dev

# --- Passo 2: Instalar Raylib ---
echo ""
echo -e "${YELLOW}[2/6] Verificando Raylib...${NC}"

if pkg-config --exists raylib 2>/dev/null; then
    RAYLIB_VER=$(pkg-config --modversion raylib)
    echo -e "${GREEN}  Raylib $RAYLIB_VER já instalado via apt.${NC}"
elif dpkg -l libraylib-dev &>/dev/null 2>&1; then
    echo -e "${GREEN}  Raylib já instalado.${NC}"
else
    echo "  Raylib não encontrado. Tentando instalar via apt..."
    if sudo apt install -y libraylib-dev 2>/dev/null; then
        echo -e "${GREEN}  Raylib instalado via apt!${NC}"
    else
        echo "  apt não tem raylib. Compilando Raylib da fonte (versão 5.0)..."
        RAYLIB_TMP=$(mktemp -d)
        cd "$RAYLIB_TMP"
        git clone --depth 1 --branch 5.0 https://github.com/raysan5/raylib.git
        cd raylib
        mkdir build && cd build
        cmake .. \
            -DCMAKE_BUILD_TYPE=Release \
            -DBUILD_SHARED_LIBS=ON \
            -DWITH_PIC=ON
        make -j$(nproc)
        sudo make install
        sudo ldconfig
        cd -
        rm -rf "$RAYLIB_TMP"
        echo -e "${GREEN}  Raylib 5.0 compilado e instalado!${NC}"
    fi
fi

# --- Passo 3: Verificar CMake versão ---
echo ""
echo -e "${YELLOW}[3/6] Verificando versão do CMake...${NC}"
CMAKE_VER=$(cmake --version | head -1 | awk '{print $3}')
CMAKE_MAJOR=$(echo $CMAKE_VER | cut -d. -f1)
CMAKE_MINOR=$(echo $CMAKE_VER | cut -d. -f2)

if [ "$CMAKE_MAJOR" -gt 3 ] || ([ "$CMAKE_MAJOR" -eq 3 ] && [ "$CMAKE_MINOR" -ge 20 ]); then
    echo -e "${GREEN}  CMake $CMAKE_VER OK.${NC}"
else
    echo -e "${YELLOW}  CMake $CMAKE_VER é antigo (precisa de 3.20+). Instalando versão mais recente...${NC}"
    # Instalar cmake mais recente via pip
    pip3 install cmake --upgrade 2>/dev/null || \
    sudo apt install -y cmake 2>/dev/null || \
    (wget -qO- https://cmake.org/files/v3.28/cmake-3.28.3-linux-x86_64.sh | \
     sudo bash -s -- --skip-license --prefix=/usr/local)
fi

# --- Passo 4: Verificar arquivo part1.pak ---
echo ""
echo -e "${YELLOW}[4/6] Verificando arquivos do jogo...${NC}"
SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
DATA_DIR="$SCRIPT_DIR/GOD_PC_PORT_FINAL/data"

if [ -f "$DATA_DIR/part1.pak" ] || [ -f "$DATA_DIR/PART1.PAK" ]; then
    echo -e "${GREEN}  part1.pak encontrado!${NC}"
else
    echo -e "${RED}  AVISO: part1.pak NÃO encontrado em $DATA_DIR${NC}"
    echo -e "${YELLOW}  Você precisa copiar manualmente o arquivo part1.pak para:${NC}"
    echo -e "${YELLOW}  $DATA_DIR/part1.pak${NC}"
    echo ""
    echo "  Pressione ENTER para continuar mesmo assim, ou Ctrl+C para cancelar."
    read -r
fi

if [ ! -f "$DATA_DIR/SCUS_973.99" ]; then
    echo -e "${RED}  ERRO: SCUS_973.99 não encontrado! Este arquivo é obrigatório.${NC}"
    echo -e "${YELLOW}  Certifique-se de que todos os arquivos da ISO estão em: $DATA_DIR/${NC}"
    exit 1
fi

echo -e "${GREEN}  Arquivos do jogo OK.${NC}"

# --- Passo 5: Compilar o projeto ---
echo ""
echo -e "${YELLOW}[5/6] Compilando o projeto (pode demorar 10-30 minutos)...${NC}"
echo "  São 5626 arquivos C++ gerados pelo recompilador PS2 - isso é normal!"
echo ""

mkdir -p "$SCRIPT_DIR/build"
cd "$SCRIPT_DIR/build"

cmake "$SCRIPT_DIR/GOD_PC_PORT_FINAL" \
    -DCMAKE_BUILD_TYPE=Release \
    -DCMAKE_CXX_STANDARD=20

echo ""
echo "  Iniciando compilação com $(nproc) threads paralelas..."
make -j$(nproc) 2>&1

echo ""
echo -e "${GREEN}=== Build concluído com sucesso! ===${NC}"

# --- Passo 6: Criar atalho para rodar ---
echo ""
echo -e "${YELLOW}[6/6] Criando script de execução...${NC}"
cat > "$SCRIPT_DIR/jogar.sh" << 'EOF'
#!/bin/bash
SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
EXE="$SCRIPT_DIR/build/GodOfWarPCPort"
ELF="$SCRIPT_DIR/GOD_PC_PORT_FINAL/data/SCUS_973.99"

if [ ! -f "$EXE" ]; then
    echo "Executável não encontrado. Execute instalar_linux_mint.sh primeiro."
    exit 1
fi

echo "Iniciando God of War PC Port..."
echo "ELF: $ELF"
"$EXE" "$ELF"
EOF
chmod +x "$SCRIPT_DIR/jogar.sh"

echo ""
echo -e "${GREEN}============================================${NC}"
echo -e "${GREEN}  INSTALAÇÃO CONCLUÍDA!${NC}"
echo -e "${GREEN}============================================${NC}"
echo ""
echo -e "  Para jogar, execute:"
echo -e "${YELLOW}    bash jogar.sh${NC}"
echo ""
echo -e "  Ou diretamente:"
echo -e "${YELLOW}    ./build/GodOfWarPCPort GOD_PC_PORT_FINAL/data/SCUS_973.99${NC}"
echo ""
echo -e "  Para ativar log de depuração (opcional):"
echo -e "${YELLOW}    PS2_TRACE=1 ./build/GodOfWarPCPort GOD_PC_PORT_FINAL/data/SCUS_973.99${NC}"
echo -e "  (O log será salvo em /tmp/ps2_trace.log)"
echo ""
