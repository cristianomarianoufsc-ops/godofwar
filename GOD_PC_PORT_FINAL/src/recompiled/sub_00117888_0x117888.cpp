#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00117888
// Address: 0x117888 - 0x117918
void sub_00117888_0x117888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117888_0x117888");
#endif

    ctx->pc = 0x117888u;

    // 0x117888: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x117888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11788c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x11788cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x117890: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x117890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x117894: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x117894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117898: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x117898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11789c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x11789cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1178a0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1178a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1178a4: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1178a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1178a8: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1178a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1178ac: 0x40f809  jalr        $v0
    ctx->pc = 0x1178ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1178B4u);
        ctx->pc = 0x1178B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1178ACu;
            // 0x1178b0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1178B4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1178C0u: goto label_1178c0;
            case 0x1178E0u: goto label_1178e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1178B4u; }
            if (ctx->pc != 0x1178B4u) { return; }
        }
        }
    }
    ctx->pc = 0x1178B4u;
    // 0x1178b4: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1178b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1178b8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1178b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1178bc: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x1178bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_1178c0:
    // 0x1178c0: 0x50a30007  beql        $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1178C0u;
    {
        const bool branch_taken_0x1178c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1178c0) {
            ctx->pc = 0x1178C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1178C0u;
            // 0x1178c4: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1178E0u;
            goto label_1178e0;
        }
    }
    ctx->pc = 0x1178C8u;
    // 0x1178c8: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x1178c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1178cc: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1178ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1178d0: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1178D0u;
    {
        const bool branch_taken_0x1178d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1178d0) {
            ctx->pc = 0x1178D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1178D0u;
            // 0x1178d4: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1178C0u;
            runtime->cooperativeGuestYield();
            goto label_1178c0;
        }
    }
    ctx->pc = 0x1178D8u;
    // 0x1178d8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1178d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1178dc: 0x0  nop
    ctx->pc = 0x1178dcu;
    // NOP
label_1178e0:
    // 0x1178e0: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x1178e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x1178e4: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1178e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1178e8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1178e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1178ec: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x1178ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x1178f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1178f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1178f4: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x1178f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x1178f8: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x1178f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x1178fc: 0xacd10014  sw          $s1, 0x14($a2)
    ctx->pc = 0x1178fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 17));
    // 0x117900: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x117900u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117904: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x117904u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117908: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x117908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11790c: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x11790cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x117910: 0x3e00008  jr          $ra
    ctx->pc = 0x117910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117910u;
            // 0x117914: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1178C0u: goto label_1178c0;
            case 0x1178E0u: goto label_1178e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x117918u;
}
