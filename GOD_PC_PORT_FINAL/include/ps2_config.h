#pragma once
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <unordered_map>

// Carrega configurações do config.toml na raiz do projeto.
// Se o arquivo não existir, usa os valores padrão sem erros.

struct GameConfig
{
    // [janela]
    int   largura      = 640;
    int   altura       = 448;
    bool  tela_cheia   = false;
    int   fps_limite   = 60;
    std::string titulo = "God of War - PC Port";

    // [audio]
    float volume_master = 1.0f;
    float volume_musica = 1.0f;
    float volume_efeitos = 1.0f;

    // [dados]
    std::string pasta_data = "";   // Deixar vazio = usa o padrão (GOD_PC_PORT_FINAL/data/)

    // [debug]
    bool mostrar_fps = false;

    static GameConfig carregar(const std::string& caminho = "config.toml")
    {
        GameConfig cfg;
        std::ifstream f(caminho);
        if (!f.is_open())
        {
            // Tenta caminhos alternativos (se rodar de dentro de build/)
            f.open("../config.toml");
            if (!f.is_open())
            {
                std::cout << "[Config] config.toml não encontrado. Usando valores padrão." << std::endl;
                return cfg;
            }
        }

        std::cout << "[Config] Carregando configurações de " << caminho << std::endl;

        std::string linha;
        while (std::getline(f, linha))
        {
            // Ignorar comentários e linhas vazias
            if (linha.empty() || linha[0] == '#' || linha[0] == '[') continue;

            auto sep = linha.find('=');
            if (sep == std::string::npos) continue;

            std::string chave = trim(linha.substr(0, sep));
            std::string valor = trim(linha.substr(sep + 1));
            // Remove comentários inline
            auto comentario = valor.find('#');
            if (comentario != std::string::npos) valor = trim(valor.substr(0, comentario));
            // Remove aspas
            if (valor.size() >= 2 && valor.front() == '"' && valor.back() == '"')
                valor = valor.substr(1, valor.size() - 2);

            cfg.aplicar(chave, valor);
        }

        return cfg;
    }

    void salvar_padrao(const std::string& caminho = "config.toml")
    {
        std::ofstream f(caminho);
        if (!f.is_open()) return;

        f << "# God of War PC Port - Configuracoes\n";
        f << "# Edite este arquivo para personalizar o jogo.\n\n";

        f << "[janela]\n";
        f << "largura    = " << largura    << "  # largura da janela em pixels\n";
        f << "altura     = " << altura     << "  # altura da janela em pixels\n";
        f << "tela_cheia = " << (tela_cheia ? "true" : "false") << "  # true = tela cheia\n";
        f << "fps_limite = " << fps_limite << "  # 0 = sem limite\n\n";

        f << "[audio]\n";
        f << "volume_master  = " << volume_master  << "  # 0.0 a 1.0\n";
        f << "volume_musica  = " << volume_musica  << "  # 0.0 a 1.0\n";
        f << "volume_efeitos = " << volume_efeitos << "  # 0.0 a 1.0\n\n";

        f << "[dados]\n";
        f << "# pasta_data = \"/caminho/para/GOD_PC_PORT_FINAL/data\"  # deixe vazio para usar o padrão\n\n";

        f << "[debug]\n";
        f << "mostrar_fps = " << (mostrar_fps ? "true" : "false") << "\n";

        std::cout << "[Config] Arquivo config.toml criado com valores padrão." << std::endl;
    }

private:
    void aplicar(const std::string& chave, const std::string& valor)
    {
        if      (chave == "largura")         largura        = std::stoi(valor);
        else if (chave == "altura")          altura         = std::stoi(valor);
        else if (chave == "tela_cheia")      tela_cheia     = (valor == "true" || valor == "1");
        else if (chave == "fps_limite")      fps_limite     = std::stoi(valor);
        else if (chave == "volume_master")   volume_master  = std::stof(valor);
        else if (chave == "volume_musica")   volume_musica  = std::stof(valor);
        else if (chave == "volume_efeitos")  volume_efeitos = std::stof(valor);
        else if (chave == "pasta_data")      pasta_data     = valor;
        else if (chave == "mostrar_fps")     mostrar_fps    = (valor == "true" || valor == "1");
    }

    static std::string trim(const std::string& s)
    {
        size_t ini = s.find_first_not_of(" \t\r\n");
        size_t fim = s.find_last_not_of(" \t\r\n");
        return (ini == std::string::npos) ? "" : s.substr(ini, fim - ini + 1);
    }
};
