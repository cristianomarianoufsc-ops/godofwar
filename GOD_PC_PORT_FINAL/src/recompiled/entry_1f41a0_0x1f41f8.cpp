#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1f41a0
// Address: 0x1f41a0 - 0x1f41f8
void entry_1f41a0_0x1f41f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1f41a0_0x1f41f8");
#endif

    ctx->pc = 0x1f41a0u;

    // 0x1f41a0: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1f41a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1f41a4: 0x3c01c080  lui         $at, 0xC080
    ctx->pc = 0x1f41a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49280 << 16));
    // 0x1f41a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f41a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f41ac: 0x24428ad0  addiu       $v0, $v0, -0x7530
    ctx->pc = 0x1f41acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937296));
    // 0x1f41b0: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1f41b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x1f41b4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1f41b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f41b8: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x1f41b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x1f41bc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1f41bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1f41c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f41c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f41c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f41c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f41c8: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x1f41c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x1f41cc: 0xa483001c  sh          $v1, 0x1C($a0)
    ctx->pc = 0x1f41ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 28), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f41d0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1f41d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f41d4: 0xe4810020  swc1        $f1, 0x20($a0)
    ctx->pc = 0x1f41d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1f41d8: 0xe4820024  swc1        $f2, 0x24($a0)
    ctx->pc = 0x1f41d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x1f41dc: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x1f41dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x1f41e0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1f41e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1f41e4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1f41e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1f41e8: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1f41e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1f41ec: 0xa4800010  sh          $zero, 0x10($a0)
    ctx->pc = 0x1f41ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f41f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F41F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F41F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F41F0u;
            // 0x1f41f4: 0xac800018  sw          $zero, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F41F8u;
}
