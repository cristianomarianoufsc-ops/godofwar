#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_214728
// Address: 0x214728 - 0x214798
void entry_214728_0x214798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_214728_0x214798");
#endif

    ctx->pc = 0x214728u;

    // 0x214728: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x214728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x21472c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x21472cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x214730: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x214730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x214734: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x214734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x214738: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x214738u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x21473c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21473cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x214740: 0x3c013fe0  lui         $at, 0x3FE0
    ctx->pc = 0x214740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16352 << 16));
    // 0x214744: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x214744u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x214748: 0x3c014291  lui         $at, 0x4291
    ctx->pc = 0x214748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17041 << 16));
    // 0x21474c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21474cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x214750: 0xe48200a8  swc1        $f2, 0xA8($a0)
    ctx->pc = 0x214750u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 168), bits); }
    // 0x214754: 0xe48100ac  swc1        $f1, 0xAC($a0)
    ctx->pc = 0x214754u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 172), bits); }
    // 0x214758: 0xe48000b0  swc1        $f0, 0xB0($a0)
    ctx->pc = 0x214758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 176), bits); }
    // 0x21475c: 0xac820090  sw          $v0, 0x90($a0)
    ctx->pc = 0x21475cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 2));
    // 0x214760: 0xe48300a0  swc1        $f3, 0xA0($a0)
    ctx->pc = 0x214760u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 160), bits); }
    // 0x214764: 0xac8300b8  sw          $v1, 0xB8($a0)
    ctx->pc = 0x214764u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 3));
    // 0x214768: 0xac8000a4  sw          $zero, 0xA4($a0)
    ctx->pc = 0x214768u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 0));
    // 0x21476c: 0xa0800078  sb          $zero, 0x78($a0)
    ctx->pc = 0x21476cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 120), (uint8_t)GPR_U32(ctx, 0));
    // 0x214770: 0xa0800060  sb          $zero, 0x60($a0)
    ctx->pc = 0x214770u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 96), (uint8_t)GPR_U32(ctx, 0));
    // 0x214774: 0xa0800048  sb          $zero, 0x48($a0)
    ctx->pc = 0x214774u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x214778: 0xa0800030  sb          $zero, 0x30($a0)
    ctx->pc = 0x214778u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 48), (uint8_t)GPR_U32(ctx, 0));
    // 0x21477c: 0xa0800018  sb          $zero, 0x18($a0)
    ctx->pc = 0x21477cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x214780: 0xe48300b4  swc1        $f3, 0xB4($a0)
    ctx->pc = 0x214780u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 180), bits); }
    // 0x214784: 0xac820098  sw          $v0, 0x98($a0)
    ctx->pc = 0x214784u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 2));
    // 0x214788: 0xac820094  sw          $v0, 0x94($a0)
    ctx->pc = 0x214788u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 2));
    // 0x21478c: 0xa480009c  sh          $zero, 0x9C($a0)
    ctx->pc = 0x21478cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 156), (uint16_t)GPR_U32(ctx, 0));
    // 0x214790: 0x3e00008  jr          $ra
    ctx->pc = 0x214790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214790u;
            // 0x214794: 0xa480009e  sh          $zero, 0x9E($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 158), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x214798u;
}
