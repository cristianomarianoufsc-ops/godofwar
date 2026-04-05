#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001513B8
// Address: 0x1513b8 - 0x151420
void sub_001513B8_0x1513b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001513B8_0x1513b8");
#endif

    ctx->pc = 0x1513b8u;

    // 0x1513b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1513b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1513bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1513bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1513c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1513c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1513c4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1513c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1513c8: 0x8c900024  lw          $s0, 0x24($a0)
    ctx->pc = 0x1513c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1513cc: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1513CCu;
    {
        const bool branch_taken_0x1513cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1513cc) {
            ctx->pc = 0x1513D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1513CCu;
            // 0x1513d0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x151410u;
            goto label_151410;
        }
    }
    ctx->pc = 0x1513D4u;
    // 0x1513d4: 0x2602fff8  addiu       $v0, $s0, -0x8
    ctx->pc = 0x1513d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_1513d8:
    // 0x1513d8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1513d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1513dc: 0x50180b  movn        $v1, $v0, $s0
    ctx->pc = 0x1513dcu;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x1513e0: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x1513e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1513e4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1513e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x1513e8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1513E8u;
    {
        const bool branch_taken_0x1513e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1513ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1513E8u;
            // 0x1513ec: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1513e8) {
            ctx->pc = 0x151404u;
            goto label_151404;
        }
    }
    ctx->pc = 0x1513F0u;
    // 0x1513f0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1513f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1513f4: 0x844400e0  lh          $a0, 0xE0($v0)
    ctx->pc = 0x1513f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 224)));
    // 0x1513f8: 0x8c4200e4  lw          $v0, 0xE4($v0)
    ctx->pc = 0x1513f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
    // 0x1513fc: 0x40f809  jalr        $v0
    ctx->pc = 0x1513FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x151404u);
        ctx->pc = 0x151400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1513FCu;
            // 0x151400: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x151404u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1513D8u: goto label_1513d8;
            case 0x151404u: goto label_151404;
            case 0x151410u: goto label_151410;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x151404u; }
            if (ctx->pc != 0x151404u) { return; }
        }
        }
    }
    ctx->pc = 0x151404u;
label_151404:
    // 0x151404: 0x1620fff4  bnez        $s1, . + 4 + (-0xC << 2)
    ctx->pc = 0x151404u;
    {
        const bool branch_taken_0x151404 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x151408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151404u;
            // 0x151408: 0x2602fff8  addiu       $v0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151404) {
            ctx->pc = 0x1513D8u;
            runtime->cooperativeGuestYield();
            goto label_1513d8;
        }
    }
    ctx->pc = 0x15140Cu;
    // 0x15140c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x15140cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_151410:
    // 0x151410: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x151410u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151414: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x151414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151418: 0x3e00008  jr          $ra
    ctx->pc = 0x151418u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15141Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151418u;
            // 0x15141c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1513D8u: goto label_1513d8;
            case 0x151404u: goto label_151404;
            case 0x151410u: goto label_151410;
            default: break;
        }
        return;
    }
    ctx->pc = 0x151420u;
}
