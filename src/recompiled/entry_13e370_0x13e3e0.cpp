#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_13e370
// Address: 0x13e370 - 0x13e3e0
void entry_13e370_0x13e3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_13e370_0x13e3e0");
#endif

    ctx->pc = 0x13e370u;

    // 0x13e370: 0x34e74010  ori         $a3, $a3, 0x4010
    ctx->pc = 0x13e370u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16400);
    // 0x13e374: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x13e374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x13e378: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x13e378u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x13e37c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x13e37cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x13e380: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x13e380u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x13e384: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x13e384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x13e388: 0x3c087fff  lui         $t0, 0x7FFF
    ctx->pc = 0x13e388u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32767 << 16));
    // 0x13e38c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x13e38cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x13e390: 0xac870010  sw          $a3, 0x10($a0)
    ctx->pc = 0x13e390u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 7));
    // 0x13e394: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x13e394u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x13e398: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x13e398u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e39c: 0xfc880048  sd          $t0, 0x48($a0)
    ctx->pc = 0x13e39cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 72), GPR_U64(ctx, 8));
    // 0x13e3a0: 0xac860018  sw          $a2, 0x18($a0)
    ctx->pc = 0x13e3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 6));
    // 0x13e3a4: 0xac850060  sw          $a1, 0x60($a0)
    ctx->pc = 0x13e3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 5));
    // 0x13e3a8: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x13e3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x13e3ac: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x13e3acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
    // 0x13e3b0: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x13e3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x13e3b4: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x13e3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x13e3b8: 0xfc800050  sd          $zero, 0x50($a0)
    ctx->pc = 0x13e3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 80), GPR_U64(ctx, 0));
    // 0x13e3bc: 0xfc800040  sd          $zero, 0x40($a0)
    ctx->pc = 0x13e3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 64), GPR_U64(ctx, 0));
    // 0x13e3c0: 0xfc800038  sd          $zero, 0x38($a0)
    ctx->pc = 0x13e3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 0));
    // 0x13e3c4: 0xfc800058  sd          $zero, 0x58($a0)
    ctx->pc = 0x13e3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 88), GPR_U64(ctx, 0));
    // 0x13e3c8: 0x3e00008  jr          $ra
    ctx->pc = 0x13E3C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E3C8u;
            // 0x13e3cc: 0xac86001c  sw          $a2, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13E3D0u;
    // 0x13e3d0: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x13e3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x13e3d4: 0x0  nop
    ctx->pc = 0x13e3d4u;
    // NOP
    // 0x13e3d8: 0xfc800058  sd          $zero, 0x58($a0)
    ctx->pc = 0x13e3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 88), GPR_U64(ctx, 0));
    // 0x13e3dc: 0x0  nop
    ctx->pc = 0x13e3dcu;
    // NOP
}
