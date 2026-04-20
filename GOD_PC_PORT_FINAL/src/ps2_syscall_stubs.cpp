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
// Substitui o loop de polling de hardware do PS2 (0x100088).
// Em vez de executar o TLB init thread (0x1001d0 → 0x2996b0 → ExitThread),
// pulamos direto para o crt0 do C runtime em 0x100200, com SP em posição válida.
// O TLB não é usado na emulação (acesso direto à RAM), então o init é desnecessário.
void stub_hardware_init(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    std::cout << "[HW_INIT] Hardware init stub: pulando TLB init, iniciando crt0 em 0x100200" << std::endl;

    // Configura SP no topo da RAM do PS2 (32 MB - 64 KB de folga)
    // O crt0 em 0x100200 faz "addiu sp, sp, -0x90" imediatamente; precisa de SP válido.
    // Usa _mm_set_epi64x (disponível via ps2_runtime.h) para setar o registro SIMD de SP.
    ctx->r[29] = _mm_set_epi64x(0, static_cast<int64_t>(static_cast<int32_t>(0x01FF0000u)));  // $sp

    // a0 = a1 = a2 = 0 (argc=0, argv=NULL, envp=NULL) - OK para o God of War PS2

    // Direciona o dispatch loop para o entry alternativo do crt0
    ctx->pc = 0x100200u;
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

// --- STUB: printf interno do C runtime do PS2 (0x296440) ---
// sub_00296440 é o printf de debug usado durante a inicialização do C runtime.
// Ele chama sub_00295568 (parser de formato, 8282 linhas) que tenta fazer um
// jr $a0 para um endereço da jump table (0x2C68E0) que não está mapeado no
// switch gerado pelo recompilador → ctx->pc errado → cascata de early-returns.
// Solução: tornar o printf um no-op. O jogo não depende deste output para funcionar.
void stub_ps2_printf(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    // Opcional: exibir a string de formato para diagnóstico
    uint32_t fmt_addr = getRegU32(ctx, 4);  // a0 = ponteiro para formato
    if (fmt_addr != 0 && fmt_addr < 0x02000000) {
        const char* fmt = (const char*)&rdram[fmt_addr & 0x01FFFFFFu];
        std::cout << "[PS2_PRINTF stub] " << fmt;
    }
    // Retorna 0 (nenhum byte escrito) para o chamador via RA
    uint32_t ra = getRegU32(ctx, 31);
    setReturnS32(ctx, 0);
    ctx->pc = ra;
}

