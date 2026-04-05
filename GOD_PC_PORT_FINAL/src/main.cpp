#include <iostream>
#include "ps2_runtime.h"
#include "raylib.h"
#include "ps2_recompiled_functions.h"

// Protótipos das funções de registro e stubs
void register_recompiled_functions(PS2Runtime* runtime);
void syscall_rf_open(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
void syscall_rf_read(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
void syscall_rf_lseek(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
void syscall_rf_close(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);

int main(int argc, char** argv) {
    std::cout << "Iniciando God of War PC Port..." << std::endl;

    // Inicializa a janela da Raylib ANTES de qualquer carregamento de GPU
    InitWindow(640, 448, "God of War - PC Port");
    SetTargetFPS(60);

    if (argc < 2) {
        std::cout << "Uso: ./GodOfWarPCPort <caminho_para_SCUS_973.99>" << std::endl;
        return 0;
    }

    // 1. Inicializa o Runtime
    PS2Runtime runtime;

    // Configura os caminhos de I/O a partir do ELF para que o tradutor de caminhos funcione
    if (argc >= 2) {
        PS2Runtime::configureIoPathsFromElf(argv[1]);
    }

         // 2. IMPORTANTE: Inicializa a memória antes de carregar o ELF
    if (!runtime.memory().initialize()) {
        std::cerr << "Erro ao inicializar a memória do PS2!" << std::endl;
        return -1;
    }


    // 3. Registra as funções recompiladas
    register_recompiled_functions(&runtime);

    // 3b. Registra os stubs de Syscall (I/O)
    // Usamos o endereço 0 para registrar syscalls se o seu runtime permitir,
    // ou podemos injetar diretamente no handleSyscall se necessário.
    // Por enquanto, vamos registrar como funções normais se o runtime suportar endereços de syscall.
    // Se o seu runtime usa um switch interno no handleSyscall, precisaremos editar o ps2_runtime.cpp.
    // Como alternativa segura, vamos apenas garantir que os stubs existam.

    // 4. Carrega o ELF original (agora com memória disponível)
    std::string elfPath = argv[1];
    std::cout << "Carregando ELF: " << elfPath << std::endl;
    
    // Tenta carregar o ELF. Se falhar, tenta caminhos alternativos comuns
    if (!runtime.loadELF(elfPath.c_str())) {
        std::cout << "Tentando caminhos alternativos para o ELF..." << std::endl;
        
        // Caminho 1: Saindo da pasta build e entrando em data/
        std::string altPath1 = "../../data/SCUS_973.99";
        // Caminho 2: Saindo da pasta build, subindo mais um nível e entrando em data/
        std::string altPath2 = "../../../data/SCUS_973.99";
        
        if (runtime.loadELF(altPath1.c_str())) {
            std::cout << "ELF carregado com sucesso de: " << altPath1 << std::endl;
        } else if (runtime.loadELF(altPath2.c_str())) {
            std::cout << "ELF carregado com sucesso de: " << altPath2 << std::endl;
        } else {
            std::cerr << "Erro fatal: Não foi possível encontrar o arquivo ELF original!" << std::endl;
            std::cerr << "Certifique-se de que o arquivo SCUS_973.99 está na pasta 'data/' na raiz do repositório." << std::endl;
            return -1;
        }
    }

    std::cout << "Executando código recompilado..." << std::endl;
    
    // 5. Inicia a execução dentro do loop da Raylib
    while (!WindowShouldClose()) {
        runtime.run(); // Assume que run() executa um frame ou ciclo
        
        BeginDrawing();
            ClearBackground(BLACK);
            // GS Drawing será implementado na Fase C
        EndDrawing();
    }

    CloseWindow();
    return 0;
}

