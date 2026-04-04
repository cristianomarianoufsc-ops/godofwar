#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00131038
// Address: 0x131038 - 0x1310d0
void sub_00131038_0x131038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131038_0x131038");
#endif

    ctx->pc = 0x131038u;

    // 0x131038: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x131038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x13103c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13103cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x131040: 0x8c42ec64  lw          $v0, -0x139C($v0)
    ctx->pc = 0x131040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962276)));
    // 0x131044: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x131044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x131048: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x131048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13104c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13104cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x131050: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x131050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x131054: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x131054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x131058: 0x8c5000c0  lw          $s0, 0xC0($v0)
    ctx->pc = 0x131058u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x13105c: 0x52000017  beql        $s0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x13105Cu;
    {
        const bool branch_taken_0x13105c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13105c) {
            ctx->pc = 0x131060u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13105Cu;
            // 0x131060: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1310BCu;
            goto label_1310bc;
        }
    }
    ctx->pc = 0x131064u;
    // 0x131064: 0x2602ffec  addiu       $v0, $s0, -0x14
    ctx->pc = 0x131064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
label_131068:
    // 0x131068: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x131068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13106c: 0x50280b  movn        $a1, $v0, $s0
    ctx->pc = 0x13106cu;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x131070: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x131070u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x131074: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x131074u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x131078: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x131078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x13107c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x13107Cu;
    {
        const bool branch_taken_0x13107c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x131080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13107Cu;
            // 0x131080: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13107c) {
            ctx->pc = 0x1310B0u;
            goto label_1310b0;
        }
    }
    ctx->pc = 0x131084u;
    // 0x131084: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x131084u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x131088: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x131088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x13108c: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x13108cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x131090: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x131090u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x131094: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x131094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x131098: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x131098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13109c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x13109cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1310a0: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1310a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1310a4: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1310a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1310a8: 0x40f809  jalr        $v0
    ctx->pc = 0x1310A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1310B0u);
        ctx->pc = 0x1310ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1310A8u;
            // 0x1310ac: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1310B0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x131068u: goto label_131068;
            case 0x1310B0u: goto label_1310b0;
            case 0x1310BCu: goto label_1310bc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1310B0u; }
            if (ctx->pc != 0x1310B0u) { return; }
        }
        }
    }
    ctx->pc = 0x1310B0u;
label_1310b0:
    // 0x1310b0: 0x1620ffed  bnez        $s1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1310B0u;
    {
        const bool branch_taken_0x1310b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1310B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1310B0u;
            // 0x1310b4: 0x2602ffec  addiu       $v0, $s0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1310b0) {
            ctx->pc = 0x131068u;
            runtime->cooperativeGuestYield();
            goto label_131068;
        }
    }
    ctx->pc = 0x1310B8u;
    // 0x1310b8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1310b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1310bc:
    // 0x1310bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1310bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1310c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1310c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1310c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1310C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1310C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1310C4u;
            // 0x1310c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x131068u: goto label_131068;
            case 0x1310B0u: goto label_1310b0;
            case 0x1310BCu: goto label_1310bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1310CCu;
    // 0x1310cc: 0x0  nop
    ctx->pc = 0x1310ccu;
    // NOP
}
