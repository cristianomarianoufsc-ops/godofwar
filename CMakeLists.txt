cmake_minimum_required(VERSION 3.20)
project(GodOfWarPCPort)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_compile_options(-msse4.1 -mavx)

# Caminhos para o PS2Recomp (Runtime)
set(PS2RECOMP_PATH "${PROJECT_SOURCE_DIR}/PS2Recomp")
set(PS2RUNTIME_PATH "${PS2RECOMP_PATH}/ps2xRuntime")

# Incluir diretórios de cabeçalho
include_directories(
    ${PS2RUNTIME_PATH}/include
    ${PROJECT_SOURCE_DIR}/include
)

# Encontrar dependências (Raylib é usada pelo runtime para gráficos/áudio)
find_package(raylib REQUIRED)

# Coletar todos os arquivos C++ gerados (são muitos, usamos glob)
file(GLOB_RECURSE RECOMPILED_SOURCES "${PROJECT_SOURCE_DIR}/src/recompiled/*.cpp")

# Coletar fontes do runtime (simplificado para este exemplo)
file(GLOB_RECURSE RUNTIME_SOURCES "${PS2RUNTIME_PATH}/src/lib/*.cpp")

# Criar o executável
add_executable(${PROJECT_NAME}
    src/main.cpp
    ${RECOMPILED_SOURCES}
    ${RUNTIME_SOURCES}
)

# Linkar bibliotecas
target_link_libraries(${PROJECT_NAME} raylib)

# Definir macros necessárias para o runtime
target_compile_definitions(${PROJECT_NAME} PRIVATE 
    PS2_RUNTIME_DEBUG
    RAYLIB_GRAPHICS
)
