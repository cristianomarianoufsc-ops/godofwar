#include <iostream>
#include <cstdio>
#include <map>
#include <string>
#include <filesystem>
#include "ps2_runtime.h"

namespace fs = std::filesystem;

struct OpenFile {
    FILE* fp;
    std::string path;
};

static std::map<int, OpenFile> g_open_files;
static int g_next_fd = 3;

// Helper para converter caminhos do PS2 (host0:, cdrom0:) para o PC
std::string translate_path(const std::string& ps2_path, PS2Runtime* runtime) {
    std::string path = ps2_path;
    
    // Remove prefixos comuns do PS2
    if (path.find("host0:") == 0) path = path.substr(6);
    else if (path.find("cdrom0:") == 0) path = path.substr(7);
    
    // Remove o ponto e vírgula da versão (ex: ;1) que o PS2 usa no sistema de arquivos ISO
    size_t semi = path.find(';');
    if (semi != std::string::npos) path = path.substr(0, semi);

    // Constrói o caminho final relativo à pasta data/ do projeto
    // Tenta primeiro "../data/" (se rodar de build/) e depois "data/" (se rodar da raiz)
    if (fs::exists("../data/" + path)) {
        return "../data/" + path;
    } else if (fs::exists("data/" + path)) {
        return "data/" + path;
    }
    
    // Se não encontrar, tenta dentro da pasta GOD_PC_PORT_FINAL/data/
    if (fs::exists("GOD_PC_PORT_FINAL/data/" + path)) {
        return "GOD_PC_PORT_FINAL/data/" + path;
    }
    
    return "data/" + path; // Fallback padrão
}

// --- STUB DE HARDWARE (RESOLVE O LOOP 0x100088) ---
// Esta função simula a resposta do hardware do PS2 (DMA/GS)
void stub_hardware_init(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    static int count = 0;
    if (count++ % 100 == 0) {
        std::cout << "LOG: Simulando Hardware Pronto (0x100088)" << std::endl;
    }
    // MUDANÇA: Retornamos 1 para indicar ao jogo que o hardware terminou a inicialização
    // Sem isso, o jogo fica preso em um loop infinito de espera (polling)
    setReturnS32(ctx, 1); 
}

// --- SYSCALLS DE SISTEMA DE ARQUIVOS (Fase B) ---

// RF_OPEN (Syscall 0x32)
void syscall_rf_open(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    uint32_t path_addr = getRegU32(ctx, 4); // a0
    const char* ps2_path = (const char*)&rdram[path_addr & PS2_RAM_MASK];
    std::string pc_path = translate_path(ps2_path, runtime);

    std::cout << "LOG: RF_OPEN -> PS2: " << ps2_path << " | PC: " << pc_path << std::endl;

    FILE* fp = fopen(pc_path.c_str(), "rb");
    if (fp) {
        int fd = g_next_fd++;
        g_open_files[fd] = {fp, pc_path};
        setReturnS32(ctx, fd);
    } else {
        std::cerr << "ERRO: Falha ao abrir arquivo: " << pc_path << " (Verifique se ele existe na pasta data/)" << std::endl;
        setReturnS32(ctx, -1);
    }
}

// RF_READ (Syscall 0x34)
void syscall_rf_read(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    int fd = (int)getRegU32(ctx, 4);
    uint32_t buf_addr = getRegU32(ctx, 5);
    uint32_t size = getRegU32(ctx, 6);

    if (g_open_files.count(fd)) {
        size_t bytes_read = fread(&rdram[buf_addr & PS2_RAM_MASK], 1, size, g_open_files[fd].fp);
        setReturnS32(ctx, (int32_t)bytes_read);
    } else {
        setReturnS32(ctx, -1);
    }
}

// RF_LSEEK (Syscall 0x35)
void syscall_rf_lseek(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    int fd = (int)getRegU32(ctx, 4);
    int32_t offset = (int32_t)getRegU32(ctx, 5);
    int whence = (int)getRegU32(ctx, 6);

    if (g_open_files.count(fd)) {
        fseek(g_open_files[fd].fp, offset, whence);
        setReturnS32(ctx, (int32_t)ftell(g_open_files[fd].fp));
    } else {
        setReturnS32(ctx, -1);
    }
}

// RF_CLOSE (Syscall 0x33)
void syscall_rf_close(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    int fd = (int)getRegU32(ctx, 4);
    if (g_open_files.count(fd)) {
        fclose(g_open_files[fd].fp);
        g_open_files.erase(fd);
        setReturnS32(ctx, 0);
    } else {
        setReturnS32(ctx, -1);
    }
}

