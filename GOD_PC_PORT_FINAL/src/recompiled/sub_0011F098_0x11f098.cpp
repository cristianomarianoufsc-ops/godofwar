#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011F098
// Address: 0x11f098 - 0x11f128
void sub_0011F098_0x11f098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011F098_0x11f098");
#endif

    ctx->pc = 0x11f098u;

    // 0x11f098: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11f098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11f09c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x11f09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x11f0a0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x11f0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x11f0a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x11f0a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f0a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11f0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11f0ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11f0acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f0b0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x11f0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x11f0b4: 0x700594a9  por         $s2, $zero, $a1
    ctx->pc = 0x11f0b4u;
    SET_GPR_VEC(ctx, 18, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 5)));
    // 0x11f0b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11f0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11f0bc: 0x8e221050  lw          $v0, 0x1050($s1)
    ctx->pc = 0x11f0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4176)));
    // 0x11f0c0: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11F0C0u;
    {
        const bool branch_taken_0x11f0c0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11F0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F0C0u;
            // 0x11f0c4: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f0c0) {
            ctx->pc = 0x11F10Cu;
            goto label_11f10c;
        }
    }
    ctx->pc = 0x11F0C8u;
    // 0x11f0c8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x11f0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x11f0cc: 0x0  nop
    ctx->pc = 0x11f0ccu;
    // NOP
label_11f0d0:
    // 0x11f0d0: 0x70122ca9  por         $a1, $zero, $s2
    ctx->pc = 0x11f0d0u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 18)));
    // 0x11f0d4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x11f0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x11f0d8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x11f0d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f0dc: 0x8c42083c  lw          $v0, 0x83C($v0)
    ctx->pc = 0x11f0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2108)));
    // 0x11f0e0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x11f0e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x11f0e4: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x11f0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x11f0e8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x11f0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x11f0ec: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x11f0ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x11f0f0: 0x8c4200b4  lw          $v0, 0xB4($v0)
    ctx->pc = 0x11f0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x11f0f4: 0x40f809  jalr        $v0
    ctx->pc = 0x11F0F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11F0FCu);
        ctx->pc = 0x11F0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F0F4u;
            // 0x11f0f8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11F0FCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11F0D0u: goto label_11f0d0;
            case 0x11F10Cu: goto label_11f10c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11F0FCu; }
            if (ctx->pc != 0x11F0FCu) { return; }
        }
        }
    }
    ctx->pc = 0x11F0FCu;
    // 0x11f0fc: 0x8e221050  lw          $v0, 0x1050($s1)
    ctx->pc = 0x11f0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4176)));
    // 0x11f100: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x11f100u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11f104: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x11F104u;
    {
        const bool branch_taken_0x11f104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F104u;
            // 0x11f108: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f104) {
            ctx->pc = 0x11F0D0u;
            runtime->cooperativeGuestYield();
            goto label_11f0d0;
        }
    }
    ctx->pc = 0x11F10Cu;
label_11f10c:
    // 0x11f10c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x11f10cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11f110: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x11f110u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11f114: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11f114u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11f118: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x11f118u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11f11c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11f11cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11f120: 0x3e00008  jr          $ra
    ctx->pc = 0x11F120u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F120u;
            // 0x11f124: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11F0D0u: goto label_11f0d0;
            case 0x11F10Cu: goto label_11f10c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11F128u;
}
