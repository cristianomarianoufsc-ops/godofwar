#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FF090
// Address: 0x1ff090 - 0x1ff158
void sub_001FF090_0x1ff090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF090_0x1ff090");
#endif

    ctx->pc = 0x1ff090u;

    // 0x1ff090: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ff090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ff094: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ff094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ff098: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ff098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ff09c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ff09cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff0a0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1ff0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ff0a4: 0x8c820160  lw          $v0, 0x160($a0)
    ctx->pc = 0x1ff0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x1ff0a8: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FF0A8u;
    {
        const bool branch_taken_0x1ff0a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff0a8) {
            ctx->pc = 0x1FF0ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF0A8u;
            // 0x1ff0ac: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FF0F8u;
            goto label_1ff0f8;
        }
    }
    ctx->pc = 0x1FF0B0u;
    // 0x1ff0b0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1ff0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ff0b4: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x1ff0b4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1ff0b8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1ff0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1ff0bc: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1FF0BCu;
    {
        const bool branch_taken_0x1ff0bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF0C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF0BCu;
            // 0x1ff0c0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff0bc) {
            ctx->pc = 0x1FF148u;
            goto label_1ff148;
        }
    }
    ctx->pc = 0x1FF0C4u;
    // 0x1ff0c4: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1ff0c4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ff0c8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1ff0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1ff0cc: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1ff0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1ff0d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ff0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ff0d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ff0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ff0d8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1ff0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ff0dc: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1ff0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1ff0e0: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1ff0e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ff0e4: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1ff0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1ff0e8: 0x40f809  jalr        $v0
    ctx->pc = 0x1FF0E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FF0F0u);
        ctx->pc = 0x1FF0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF0E8u;
            // 0x1ff0ec: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FF0F0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FF0F8u: goto label_1ff0f8;
            case 0x1FF148u: goto label_1ff148;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FF0F0u; }
            if (ctx->pc != 0x1FF0F0u) { return; }
        }
        }
    }
    ctx->pc = 0x1FF0F0u;
    // 0x1ff0f0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1FF0F0u;
    {
        const bool branch_taken_0x1ff0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF0F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF0F0u;
            // 0x1ff0f4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff0f0) {
            ctx->pc = 0x1FF148u;
            goto label_1ff148;
        }
    }
    ctx->pc = 0x1FF0F8u;
label_1ff0f8:
    // 0x1ff0f8: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x1ff0f8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ff0fc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1ff0fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1ff100: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FF100u;
    {
        const bool branch_taken_0x1ff100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff100) {
            ctx->pc = 0x1FF104u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF100u;
            // 0x1ff104: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FF148u;
            goto label_1ff148;
        }
    }
    ctx->pc = 0x1FF108u;
    // 0x1ff108: 0xc056eae  jal         func_15BAB8
    ctx->pc = 0x1FF108u;
    SET_GPR_U32(ctx, 31, 0x1FF110u);
    ctx->pc = 0x15BAB8u;
    if (runtime->hasFunction(0x15BAB8u)) {
        auto targetFn = runtime->lookupFunction(0x15BAB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF110u; }
        if (ctx->pc != 0x1FF110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015BAB8_0x15bab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF110u; }
        if (ctx->pc != 0x1FF110u) { return; }
    }
    ctx->pc = 0x1FF110u;
    // 0x1ff110: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1ff110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ff114: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1ff114u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ff118: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1ff118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1ff11c: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1ff11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1ff120: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ff120u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ff124: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ff124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ff128: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1ff128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ff12c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1ff12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1ff130: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1ff130u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1ff134: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1ff134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1ff138: 0x40f809  jalr        $v0
    ctx->pc = 0x1FF138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FF140u);
        ctx->pc = 0x1FF13Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF138u;
            // 0x1ff13c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FF140u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FF0F8u: goto label_1ff0f8;
            case 0x1FF148u: goto label_1ff148;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FF140u; }
            if (ctx->pc != 0x1FF140u) { return; }
        }
        }
    }
    ctx->pc = 0x1FF140u;
    // 0x1ff140: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ff140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff144: 0x0  nop
    ctx->pc = 0x1ff144u;
    // NOP
label_1ff148:
    // 0x1ff148: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ff148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff14c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF14Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF14Cu;
            // 0x1ff150: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FF0F8u: goto label_1ff0f8;
            case 0x1FF148u: goto label_1ff148;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FF154u;
    // 0x1ff154: 0x0  nop
    ctx->pc = 0x1ff154u;
    // NOP
}
