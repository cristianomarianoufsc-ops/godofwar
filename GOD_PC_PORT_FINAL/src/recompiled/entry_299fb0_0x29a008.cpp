#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_299fb0
// Address: 0x299fb0 - 0x29a008
void entry_299fb0_0x29a008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_299fb0_0x29a008");
#endif

    ctx->pc = 0x299fb0u;

    // 0x299fb0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x299fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x299fb4: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x299fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x299fb8: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x299fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x299fbc: 0x9c620000  lwu         $v0, 0x0($v1)
    ctx->pc = 0x299fbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x299fc0: 0x8c680010  lw          $t0, 0x10($v1)
    ctx->pc = 0x299fc0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x299fc4: 0xdc8a5af8  ld          $t2, 0x5AF8($a0)
    ctx->pc = 0x299fc4u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 4), 23288)));
    // 0x299fc8: 0x31090800  andi        $t1, $t0, 0x800
    ctx->pc = 0x299fc8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2048);
    // 0x299fcc: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x299FCCu;
    {
        const bool branch_taken_0x299fcc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x299FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299FCCu;
            // 0x299fd0: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299fcc) {
            ctx->pc = 0x299FDCu;
            goto label_299fdc;
        }
    }
    ctx->pc = 0x299FD4u;
    // 0x299fd4: 0x9c620000  lwu         $v0, 0x0($v1)
    ctx->pc = 0x299fd4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x299fd8: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x299fd8u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
label_299fdc:
    // 0x299fdc: 0x31080003  andi        $t0, $t0, 0x3
    ctx->pc = 0x299fdcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x299fe0: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x299fe0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x299fe4: 0x8480a  movz        $t1, $zero, $t0
    ctx->pc = 0x299fe4u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
    // 0x299fe8: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x299fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x299fec: 0x1094814  dsllv       $t1, $t1, $t0
    ctx->pc = 0x299fecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (GPR_U32(ctx, 8) & 0x3F));
    // 0x299ff0: 0x1221014  dsllv       $v0, $v0, $t1
    ctx->pc = 0x299ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 9) & 0x3F));
    // 0x299ff4: 0x3e00008  jr          $ra
    ctx->pc = 0x299FF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x299FDCu: goto label_299fdc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x299FFCu;
    // 0x299ffc: 0x0  nop
    ctx->pc = 0x299ffcu;
    // NOP
    // 0x29a000: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x29a000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29a004: 0x0  nop
    ctx->pc = 0x29a004u;
    // NOP
}
