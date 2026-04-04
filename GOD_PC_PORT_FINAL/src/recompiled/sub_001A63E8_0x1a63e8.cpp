#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A63E8
// Address: 0x1a63e8 - 0x1a6440
void sub_001A63E8_0x1a63e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A63E8_0x1a63e8");
#endif

    ctx->pc = 0x1a63e8u;

    // 0x1a63e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a63e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a63ec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a63ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1a63f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a63f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a63f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a63f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a63f8: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x1a63f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1a63fc: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1a63fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1a6400: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1a6400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1a6404: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A6404u;
    {
        const bool branch_taken_0x1a6404 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A6408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6404u;
            // 0x1a6408: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6404) {
            ctx->pc = 0x1A642Cu;
            goto label_1a642c;
        }
    }
    ctx->pc = 0x1A640Cu;
    // 0x1a640c: 0x0  nop
    ctx->pc = 0x1a640cu;
    // NOP
label_1a6410:
    // 0x1a6410: 0xc069762  jal         func_1A5D88
    ctx->pc = 0x1A6410u;
    SET_GPR_U32(ctx, 31, 0x1A6418u);
    ctx->pc = 0x1A6414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6410u;
            // 0x1a6414: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D88u;
    if (runtime->hasFunction(0x1A5D88u)) {
        auto targetFn = runtime->lookupFunction(0x1A5D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6418u; }
        if (ctx->pc != 0x1A6418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5D88_0x1a5d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6418u; }
        if (ctx->pc != 0x1A6418u) { return; }
    }
    ctx->pc = 0x1A6418u;
    // 0x1a6418: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1a6418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a641c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1a641cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6420: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a6420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a6424: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A6424u;
    {
        const bool branch_taken_0x1a6424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A6428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6424u;
            // 0x1a6428: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6424) {
            ctx->pc = 0x1A6410u;
            runtime->cooperativeGuestYield();
            goto label_1a6410;
        }
    }
    ctx->pc = 0x1A642Cu;
label_1a642c:
    // 0x1a642c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1a642cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1a6430: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a6430u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a6434: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a6434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6438: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A643Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6438u;
            // 0x1a643c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A6410u: goto label_1a6410;
            case 0x1A642Cu: goto label_1a642c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A6440u;
}
