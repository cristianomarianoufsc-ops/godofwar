#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1f4770
// Address: 0x1f4770 - 0x1f47c8
void entry_1f4770_0x1f47c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1f4770_0x1f47c8");
#endif

    ctx->pc = 0x1f4770u;

    // 0x1f4770: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1f4770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1f4774: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1f4774u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1f4778: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1f4778u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f477c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1f477cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1f4780: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1f4780u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1f4784: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1f4784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1f4788: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f4788u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f478c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f478cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f4790: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f4790u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f4794: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1f4794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1f4798: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1f4798u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f479c: 0xe4840014  swc1        $f4, 0x14($a0)
    ctx->pc = 0x1f479cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1f47a0: 0xe4830018  swc1        $f3, 0x18($a0)
    ctx->pc = 0x1f47a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x1f47a4: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x1f47a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1f47a8: 0xe4810024  swc1        $f1, 0x24($a0)
    ctx->pc = 0x1f47a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x1f47ac: 0xe482002c  swc1        $f2, 0x2C($a0)
    ctx->pc = 0x1f47acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x1f47b0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1f47b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1f47b4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1f47b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1f47b8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1f47b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1f47bc: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1f47bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1f47c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F47C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F47C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F47C0u;
            // 0x1f47c4: 0xac800028  sw          $zero, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F47C8u;
}
