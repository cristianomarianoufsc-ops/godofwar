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
// O God of War fica preso no endereço 0x100088 esperando por uma flag de hardware.
void stub_hardware_init(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    static int count = 0;
    
    // Captura o estado atual dos registradores para depuração
    uint32_t a0 = getRegU32(ctx, 4);
    uint32_t a1 = getRegU32(ctx, 5);
    uint32_t v0 = getRegU32(ctx, 2);
    uint32_t t0 = getRegU32(ctx, 8); // Frequentemente usado para comparar flags de hardware
    
    if (count % 1000 == 0) {
        std::cout << "\n[HW_DEBUG] Loop 0x100088 (Hardware Init)" << std::endl;
        std::cout << " > a0=" << std::hex << "0x" << a0 << " a1=0x" << a1 << std::endl;
        std::cout << " > v0=" << "0x" << v0 << " t0=0x" << t0 << std::dec << std::endl;
        std::cout << " > Ação: Forçando Retorno 0 para quebrar o loop de polling." << std::endl;
    }
    
    // Incrementa o contador para evitar logs excessivos
    count++;
    
    // No God of War, este loop espera que o bit de "Ready" de algum canal de DMA seja ativado.
    // MUDANÇA: Tentando retornar 1 em vez de 0. Muitos stubs de hardware do PS2Recomp
    // esperam um bit não-zero para indicar que o hardware terminou sua tarefa.
    setReturnS32(ctx, 1); 
    
    // FORÇAR SAÍDA DO LOOP: Se o jogo continuar preso no endereço 0x100088,
    // vamos forçar o Program Counter (PC) a avançar para a próxima instrução (0x10008C).
    // Isso "quebra" o loop mecanicamente, empurrando o jogo para a frente.
    if (ctx->pc == 0x100088) {
        std::cout << " > Ação: Forçando PC para 0x10008C para quebrar o loop mecanicamente." << std::endl;
        ctx->pc = 0x10008C;
    }
}

// --- SYSCALLS DE SISTEMA DE ARQUIVOS (Fase B) ---

// RF_OPEN (Syscall 0x32)
void syscall_rf_open(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    uint32_t path_addr = getRegU32(ctx, 4); // a0
    const char* ps2_path = (const char*)&rdram[path_addr & PS2_RAM_MASK];
    std::string pc_path = translate_path(ps2_path, runtime);

    std::cout << "[I/O] RF_OPEN: Tentando abrir arquivo original: " << ps2_path << std::endl;
    std::cout << "[I/O] RF_OPEN: Traduzido para PC: " << pc_path << std::endl;

    FILE* fp = fopen(pc_path.c_str(), "rb");
    if (fp) {
        std::cout << "[I/O] RF_OPEN: SUCESSO! Arquivo encontrado e aberto. (FD=" << g_next_fd << ")" << std::endl;
        int fd = g_next_fd++;
        g_open_files[fd] = {fp, pc_path};
        setReturnS32(ctx, fd);
    } else {
        std::cerr << "[I/O] RF_OPEN: ERRO! Arquivo não encontrado no caminho: " << pc_path << std::endl;
        std::cerr << "      Certifique-se de que a pasta 'data/' está no lugar certo." << std::endl;
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

