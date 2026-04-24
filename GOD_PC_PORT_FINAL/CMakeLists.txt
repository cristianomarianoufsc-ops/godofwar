cmake_minimum_required(VERSION 3.20)
project(GodOfWarPCPort)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Usar ccache se disponível (acelera muito rebuilds)
find_program(CCACHE_PROGRAM ccache)
if(CCACHE_PROGRAM)
    message(STATUS "ccache encontrado: ${CCACHE_PROGRAM} - acelerando builds")
    set(CMAKE_CXX_COMPILER_LAUNCHER "${CCACHE_PROGRAM}")
    set(CMAKE_C_COMPILER_LAUNCHER "${CCACHE_PROGRAM}")
endif()

# Thin archive global (Linux/GCC apenas):
# Sobrescreve as regras padrão do CMake pra criar `.a` como thin archive.
# Em vez de copiar os 5.6k `.o` pra dentro do `.a` (~3 GB), o `.a` vira uma
# lista de referências aos `.o` em disco (~5-10 MB). O `ar` termina em
# segundos em vez de 10-15 min, e elimina o erro "encher disco durante o link".
# Funciona normalmente com -Wl,--whole-archive no link final do executável.
# Modificadores do `ar`:
#   q = quick append (mais rápido que `r` que checa duplicatas)
#   c = create (silencia warning se .a já existe)
#   s = cria índice de símbolos (substitui o ranlib)
#   T = thin archive (referência aos .o em vez de copiar)
if(NOT MSVC)
    set(CMAKE_CXX_ARCHIVE_CREATE "<CMAKE_AR> qcsT <TARGET> <OBJECTS>")
    set(CMAKE_CXX_ARCHIVE_APPEND "<CMAKE_AR> qsT <TARGET> <OBJECTS>")
    set(CMAKE_CXX_ARCHIVE_FINISH ":")
    set(CMAKE_C_ARCHIVE_CREATE   "<CMAKE_AR> qcsT <TARGET> <OBJECTS>")
    set(CMAKE_C_ARCHIVE_APPEND   "<CMAKE_AR> qsT <TARGET> <OBJECTS>")
    set(CMAKE_C_ARCHIVE_FINISH   ":")
endif()

# Habilitar instruções SSE4.1 e POPCNT necessárias para o PS2Recomp
if(MSVC)
    add_compile_options(/arch:AVX2) # Para Windows/Visual Studio
else()
    add_compile_options(-msse4.1 -mpopcnt -march=native) # Para Linux/GCC
endif()

# AJUSTE: O caminho agora é relativo à raiz do repositório clonado
# A pasta PS2Recomp foi movida para dentro da raiz do repositório
set(PS2RECOMP_PATH "${PROJECT_SOURCE_DIR}/../PS2Recomp")
set(PS2RUNTIME_PATH "${PS2RECOMP_PATH}/ps2xRuntime")

# Incluir diretórios de cabeçalho
include_directories(
    ${PS2RUNTIME_PATH}/include
    ${PROJECT_SOURCE_DIR}/include
)

# Encontrar dependências (Certifique-se de rodar: sudo apt install libraylib-dev)
find_package(raylib REQUIRED)

# Coletar todos os arquivos C++ gerados
# CONFIGURE_DEPENDS: faz o CMake re-checar o diretório a cada `make`,
# pegando arquivos novos sem precisar rodar cmake manualmente.
file(GLOB_RECURSE RECOMPILED_SOURCES CONFIGURE_DEPENDS "${PROJECT_SOURCE_DIR}/src/recompiled/*.cpp")

# Coletar fontes do runtime
file(GLOB_RECURSE RUNTIME_SOURCES CONFIGURE_DEPENDS "${PS2RUNTIME_PATH}/src/lib/*.cpp")

# Biblioteca estática separada para o runtime — permite rebuildar
# só o runtime sem recompilar os 5.626 arquivos do jogo (rebuild_runtime.sh)
add_library(ps2runtime STATIC ${RUNTIME_SOURCES})
target_compile_definitions(ps2runtime PRIVATE
    PS2_RUNTIME_DEBUG
    RAYLIB_GRAPHICS
)

# Biblioteca estática com o código recompilado do jogo (5.626 .cpp)
# Build inicial é lento, mas raramente precisa ser refeito.
add_library(gow_recompiled STATIC ${RECOMPILED_SOURCES})
target_compile_definitions(gow_recompiled PRIVATE
    PS2_RUNTIME_DEBUG
    RAYLIB_GRAPHICS
)

# Thin archive REMOVIDO daqui — agora é configurado globalmente via
# CMAKE_CXX_ARCHIVE_CREATE/APPEND/FINISH no início do arquivo (procure por
# "Thin archive global"). Tentativa via STATIC_LIBRARY_OPTIONS não funcionou
# porque o CMake passa o valor como argumento posicional do `ar`, fazendo
# ele interpretar "rcsT" como nome de arquivo.

# Criar o executável
add_executable(${PROJECT_NAME}
    src/main.cpp
    src/register_functions.cpp
    src/ps2_syscall_stubs.cpp
)

# Linkar bibliotecas
# --whole-archive garante que TODAS as funções recompiladas entrem no binário
# (mesmo que pareçam não usadas — elas são chamadas por endereço via dispatch)
if(NOT MSVC)
    target_link_libraries(${PROJECT_NAME}
        -Wl,--whole-archive gow_recompiled -Wl,--no-whole-archive
        ps2runtime
        raylib
    )
else()
    target_link_libraries(${PROJECT_NAME} gow_recompiled ps2runtime raylib)
endif()

# Definir macros necessárias para o runtime
target_compile_definitions(${PROJECT_NAME} PRIVATE 
    PS2_RUNTIME_DEBUG
    RAYLIB_GRAPHICS
)

