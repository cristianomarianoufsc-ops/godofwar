#include "ps2_runtime.h"
#include "register_functions.h"
#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    // O caminho para o executável original do PS2 (ELF)
    // No seu caso, é o SCUS_973.99
    std::string elfPath = "SCUS_973.99";
    
    if (argc > 1) {
        elfPath = argv[1];
    }

    std::cout << "Iniciando Port de God of War para PC..." << std::endl;
    std::cout << "Carregando ELF: " << elfPath << std::endl;

    // Inicializa o Runtime do PS2 (Memória, Registradores, etc)
    PS2Runtime runtime;
    if (!runtime.initialize())
    {
        std::cerr << "Erro ao inicializar o runtime do PS2" << std::endl;
        return 1;
    }

    // Registra todas as funções que o PS2Recomp gerou
    // Esta função está definida no arquivo register_functions.cpp que geramos
    std::cout << "Registrando funções recompiladas..." << std::endl;
    registerAllFunctions(runtime);

    // Carrega o arquivo ELF original para a memória do runtime
    // Isso é necessário para carregar os dados estáticos (.data, .rodata, etc)
    if (!runtime.loadELF(elfPath))
    {
        std::cerr << "Erro ao carregar o arquivo ELF: " << elfPath << std::endl;
        return 1;
    }

    // Inicia a execução do código recompilado
    std::cout << "Iniciando execução do jogo..." << std::endl;
    runtime.run();

    return 0;
}
