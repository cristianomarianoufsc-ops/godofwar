#include <iostream>
#include <cstdio>
#include <map>
#include <string>
#include <filesystem>
#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

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
// O _start original do God of War PS2 (0x100008 a 0x1001c8) faz:
//   1. Zera todos os registradores CPU (entry_0x100008)
//   2. Zera registradores COP2/VU0 (0x10008c a ~0x100118) — tratado aqui via stub
//   3. Chama sub_002994A0 ($a0=0x35C1A8, $v1=61) - init OS/thread
//   4. Chama entry_293ea0   ($a0=0x35C1A8, $a1=0)  - init OS/RPC
//   5. Chama sub_00138CB0   ($a0=0x2c7080)          - init heap do jogo
//   6. Chama sub_00138D48   ($a0=0x2c7080, $a1=0x2c7084) - init módulos do jogo
//   7. J 0x2996b0 (ExitThread) — a thread de boot encerra
//
// O crt0 (0x100200) é invocado internamente pelo runtime PS2 BIOS (sub_002994A0 ou
// sub_002996B0 via chamada de sistema CreateThread), não diretamente pelo _start.
// Esse stub reproduz a sequência completa para que o jogo inicialize corretamente.
void stub_hardware_init(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    std::cout << "[HW_INIT] _start: executando cadeia de inicializacao do jogo" << std::endl;

    // Configura SP = 0x01FF0000 (topo da RAM PS2 - 64 KB de folga)
    ctx->r[29] = _mm_set_epi64x(0, static_cast<int64_t>(static_cast<int32_t>(0x01FF0000u)));

    // RA sentinela nao-zero: as funcoes salvam/restauram RA via stack,
    // entao definir RA=0x1 antes de cada chamada garante que apos jr $ra
    // o ctx->pc sera 0x1 (nao zero) — substituido em seguida pela proxima chamada.
    const uint32_t SENTINEL_RA = 0x00000001u;

    // --- Chamada 1: sub_002994A0 (init OS/thread) ---
    // Argumentos originais: $a0 = 0x35C1A8, $a1 = 0, $v1 = 61 (prioridade thread)
    std::cout << "[HW_INIT] [1/4] Chamando sub_002994A0 (OS/thread init) a0=0x35C1A8 v1=61..." << std::endl;
    ctx->pc = 0x2994a0u;
    SET_GPR_S32(ctx, 4, (int32_t)0x35C1A8u);
    SET_GPR_S32(ctx, 5, 0);
    SET_GPR_S32(ctx, 3, 61);
    SET_GPR_U32(ctx, 31, SENTINEL_RA);
    sub_002994A0_0x2994a0(rdram, ctx, runtime);
    std::cout << "[HW_INIT] [1/4] RETORNOU: pc=0x" << std::hex << ctx->pc
              << " v0=0x" << (uint32_t)(_mm_extract_epi32(ctx->r[2], 0))
              << " ra=0x" << (uint32_t)(_mm_extract_epi32(ctx->r[31], 0))
              << std::dec << std::endl;

    // --- Chamada 2: entry_293ea0 (init RPC/SIF) ---
    std::cout << "[HW_INIT] [2/4] Chamando entry_293ea0 (RPC/SIF init) a0=0x35C1A8..." << std::endl;
    ctx->pc = 0x293ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)0x35C1A8u);
    SET_GPR_S32(ctx, 5, 0);
    SET_GPR_U32(ctx, 31, SENTINEL_RA);
    entry_293ea0_0x293ed0(rdram, ctx, runtime);
    std::cout << "[HW_INIT] [2/4] RETORNOU: pc=0x" << std::hex << ctx->pc
              << " v0=0x" << (uint32_t)(_mm_extract_epi32(ctx->r[2], 0))
              << std::dec << std::endl;

    // --- Chamada 3: sub_00138CB0 (init heap do jogo) ---
    std::cout << "[HW_INIT] [3/4] Chamando sub_00138CB0 (heap init) a0=0x2C7080..." << std::endl;
    ctx->pc = 0x138cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)0x2C7080u);
    SET_GPR_U32(ctx, 31, SENTINEL_RA);
    sub_00138CB0_0x138cb0(rdram, ctx, runtime);
    std::cout << "[HW_INIT] [3/4] RETORNOU: pc=0x" << std::hex << ctx->pc
              << " v0=0x" << (uint32_t)(_mm_extract_epi32(ctx->r[2], 0))
              << std::dec << std::endl;

    // --- Chamada 4: sub_00138D48 (init módulos do jogo) ---
    std::cout << "[HW_INIT] [4/4] Chamando sub_00138D48 (modulos init) a0=0x2C7080 a1=0x2C7084..." << std::endl;
    ctx->pc = 0x138d48u;
    SET_GPR_S32(ctx, 4, (int32_t)0x2C7080u);
    SET_GPR_S32(ctx, 5, (int32_t)0x2C7084u);
    SET_GPR_U32(ctx, 31, SENTINEL_RA);
    sub_00138D48_0x138d48(rdram, ctx, runtime);
    std::cout << "[HW_INIT] [4/4] RETORNOU: pc=0x" << std::hex << ctx->pc
              << " v0=0x" << (uint32_t)(_mm_extract_epi32(ctx->r[2], 0))
              << std::dec << std::endl;

    std::cout << "[HW_INIT] Sequencia de init concluida. Encerrando thread de boot (pc->0x2996b0)." << std::endl;

    // J 0x2996b0 (ExitThread): a thread de boot do _start encerra aqui.
    // As threads criadas pelos inits acima continuarao executando.
    ctx->pc = 0x2996b0u;
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

// --- STUB: Handler IOP/kernel em 0x00080004 ---
// Este endereço fica abaixo do range ELF (0x100000+) e é populado pelo boot
// PS2 real (IOP/kernel EE via SIF RPC). Como pulamos o boot real, a função
// nunca é registrada — o runtime a trata como "JALR alvo nao registrado -> nop".
//
// Objetivo deste stub: logar $a0/$a1/$ra e o conteúdo da memória apontada,
// para revelar o que o jogo espera que esta função faça. Retorna v0=0 por ora.
//
// O que sabemos até agora (sub_00100E28, iterações 1..N):
//   - Chamada com $a0 = short lido de [descriptor+0x8] (0x0000 na 1a iter, 0xc7c0 nas seguintes)
//   - O retorno (v0) é usado como ponteiro de objeto: game lê [v0+0x114] pra decidir próximo passo
//   - global@0x32E854 permanece 0 enquanto v0=0 (nop/stub zero)
void stub_iop_callback_00080004(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    static int s_count = 0;
    ++s_count;

    uint32_t a0 = getRegU32(ctx, 4);   // $a0 — "short" de tipo/categoria
    uint32_t a1 = getRegU32(ctx, 5);   // $a1
    uint32_t a2 = getRegU32(ctx, 6);   // $a2
    uint32_t a3 = getRegU32(ctx, 7);   // $a3
    uint32_t ra = getRegU32(ctx, 31);  // $ra — endereço de retorno
    uint32_t s0 = getRegU32(ctx, 16);  // $s0 — costuma conter ponteiro de objeto
    uint32_t v0 = getRegU32(ctx, 2);   // $v0 — valor atual (antes do nosso retorno)

    // Loga as primeiras 5 chamadas e depois 1 a cada 50 para não inundar o log
    if (s_count <= 5 || (s_count % 50 == 0)) {
        fprintf(stderr,
            "[STUB 0x00080004] #%d a0=0x%08x a1=0x%08x a2=0x%08x a3=0x%08x"
            " ra=0x%08x s0=0x%08x v0_in=0x%08x\n",
            s_count, a0, a1, a2, a3, ra, s0, v0);

        // Dump dos primeiros 8 words em $a0 se for endereço PS2 válido
        if (a0 != 0 && a0 < 0x02000000u) {
            const uint32_t* p = reinterpret_cast<const uint32_t*>(&rdram[a0 & 0x01FFFFFFu]);
            fprintf(stderr,
                "[STUB 0x00080004] #%d   mem[a0+00..1c]:"
                " 0x%08x 0x%08x 0x%08x 0x%08x  0x%08x 0x%08x 0x%08x 0x%08x\n",
                s_count, p[0], p[1], p[2], p[3], p[4], p[5], p[6], p[7]);
        }

        // Dump dos primeiros 8 words em $s0 se for endereço PS2 válido
        if (s0 != 0 && s0 < 0x02000000u) {
            const uint32_t* p = reinterpret_cast<const uint32_t*>(&rdram[s0 & 0x01FFFFFFu]);
            fprintf(stderr,
                "[STUB 0x00080004] #%d   mem[s0+00..1c]:"
                " 0x%08x 0x%08x 0x%08x 0x%08x  0x%08x 0x%08x 0x%08x 0x%08x\n",
                s_count, p[0], p[1], p[2], p[3], p[4], p[5], p[6], p[7]);
        }
    }

    // Retorna v0=0 e desvia para $ra (comportamento idêntico ao nop atual,
    // mas agora registrado e visível no log)
    setReturnS32(ctx, 0);
    ctx->pc = getRegU32(ctx, 31);
}

