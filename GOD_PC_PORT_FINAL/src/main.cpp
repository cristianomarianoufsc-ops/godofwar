#include <iostream>
#include "ps2_runtime.h"
#include "raylib.h"
#include "ps2_recompiled_functions.h"
#include "ps2_config.h"

// Protótipos das funções de registro e stubs
void register_recompiled_functions(PS2Runtime* runtime);
void syscall_rf_open(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
void syscall_rf_read(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
void syscall_rf_lseek(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
void syscall_rf_close(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);

int main(int argc, char** argv)
{
    std::cout << "=================================================" << std::endl;
    std::cout << "  God of War PC Port" << std::endl;
    std::cout << "=================================================" << std::endl;

    // --- Carrega configurações do config.toml (cria o arquivo se não existir) ---
    GameConfig cfg = GameConfig::carregar("config.toml");

    // Se não existir um config.toml, cria um com valores padrão para o usuário editar
    {
        std::ifstream teste("config.toml");
        if (!teste.is_open())
        {
            std::ifstream teste2("../config.toml");
            if (!teste2.is_open())
                cfg.salvar_padrao("config.toml");
        }
    }

    // --- Determina o caminho do ELF ---
    std::string elfPath;

    if (argc >= 2)
    {
        elfPath = argv[1];
    }
    else if (!cfg.pasta_data.empty())
    {
        elfPath = cfg.pasta_data + "/SCUS_973.99";
        std::cout << "[Config] Usando pasta_data: " << cfg.pasta_data << std::endl;
    }
    else
    {
        // Caminhos padrão tentados em ordem
        std::vector<std::string> tentativas = {
            "GOD_PC_PORT_FINAL/data/SCUS_973.99",
            "../GOD_PC_PORT_FINAL/data/SCUS_973.99",
            "data/SCUS_973.99",
            "../data/SCUS_973.99"
        };
        for (const auto& p : tentativas)
        {
            std::ifstream f(p);
            if (f.is_open()) { elfPath = p; break; }
        }
        if (elfPath.empty())
        {
            std::cerr << "[ERRO] SCUS_973.99 não encontrado!" << std::endl;
            std::cerr << "Defina pasta_data no config.toml ou passe o caminho como argumento." << std::endl;
            return -1;
        }
    }

    std::cout << "ELF: " << elfPath << std::endl;

    // --- Inicializa a janela Raylib com as configurações ---
    if (cfg.tela_cheia)
        SetConfigFlags(FLAG_FULLSCREEN_MODE);

    InitWindow(cfg.largura, cfg.altura, cfg.titulo.c_str());
    SetTargetFPS(cfg.fps_limite > 0 ? cfg.fps_limite : 0);
    InitAudioDevice();
    SetMasterVolume(cfg.volume_master);

    std::cout << "Janela: " << cfg.largura << "x" << cfg.altura;
    if (cfg.tela_cheia) std::cout << " (tela cheia)";
    std::cout << " | FPS: " << cfg.fps_limite << std::endl;

    // --- Inicializa o Runtime do PS2 ---
    PS2Runtime runtime;
    PS2Runtime::configureIoPathsFromElf(elfPath.c_str());

    if (!runtime.memory().initialize())
    {
        std::cerr << "[ERRO] Falha ao inicializar a memória do PS2!" << std::endl;
        CloseWindow();
        return -1;
    }

    // --- Registra funções recompiladas ---
    std::cout << "Registrando funções recompiladas..." << std::endl;
    register_recompiled_functions(&runtime);

    // --- Carrega o ELF ---
    std::cout << "Carregando ELF: " << elfPath << std::endl;
    if (!runtime.loadELF(elfPath.c_str()))
    {
        std::cerr << "[ERRO] Falha ao carregar o ELF: " << elfPath << std::endl;
        CloseAudioDevice();
        CloseWindow();
        return -1;
    }

    std::cout << "Iniciando execução..." << std::endl;

    // --- Executa o runtime (já possui loop interno com renderização e detecção de fechamento) ---
    runtime.run();

    // Fecha áudio e janela apenas se ainda estiverem abertos (run() pode já tê-los fechado)
    if (IsAudioDeviceReady())
        CloseAudioDevice();

    if (IsWindowReady())
        CloseWindow();

    return 0;
}
