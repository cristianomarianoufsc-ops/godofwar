#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_11ee88
// Address: 0x11ee88 - 0x11ef28
void entry_11ee88_0x11ef28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_11ee88_0x11ef28");
#endif

    ctx->pc = 0x11ee88u;

    // 0x11ee88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11ee88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11ee8c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x11ee8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x11ee90: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x11ee90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x11ee94: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x11ee94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ee98: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x11ee98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x11ee9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11ee9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eea0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11eea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11eea4: 0x8e221050  lw          $v0, 0x1050($s1)
    ctx->pc = 0x11eea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4176)));
    // 0x11eea8: 0x18400016  blez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x11EEA8u;
    {
        const bool branch_taken_0x11eea8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11EEACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EEA8u;
            // 0x11eeac: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eea8) {
            ctx->pc = 0x11EF04u;
            goto label_11ef04;
        }
    }
    ctx->pc = 0x11EEB0u;
label_11eeb0:
    // 0x11eeb0: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x11EEB0u;
    {
        const bool branch_taken_0x11eeb0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EEB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EEB0u;
            // 0x11eeb4: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eeb0) {
            ctx->pc = 0x11EECCu;
            goto label_11eecc;
        }
    }
    ctx->pc = 0x11EEB8u;
    // 0x11eeb8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x11eeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x11eebc: 0x8c42083c  lw          $v0, 0x83C($v0)
    ctx->pc = 0x11eebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2108)));
    // 0x11eec0: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x11eec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x11eec4: 0x5642000b  bnel        $s2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11EEC4u;
    {
        const bool branch_taken_0x11eec4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x11eec4) {
            ctx->pc = 0x11EEC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11EEC4u;
            // 0x11eec8: 0x8e221050  lw          $v0, 0x1050($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11EEF4u;
            goto label_11eef4;
        }
    }
    ctx->pc = 0x11EECCu;
label_11eecc:
    // 0x11eecc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x11eeccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x11eed0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x11eed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x11eed4: 0x8c42083c  lw          $v0, 0x83C($v0)
    ctx->pc = 0x11eed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2108)));
    // 0x11eed8: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x11eed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x11eedc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x11eedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x11eee0: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x11eee0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x11eee4: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x11eee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x11eee8: 0x40f809  jalr        $v0
    ctx->pc = 0x11EEE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11EEF0u);
        ctx->pc = 0x11EEECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EEE8u;
            // 0x11eeec: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11EEF0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11EEB0u: goto label_11eeb0;
            case 0x11EECCu: goto label_11eecc;
            case 0x11EEF4u: goto label_11eef4;
            case 0x11EF04u: goto label_11ef04;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11EEF0u; }
            if (ctx->pc != 0x11EEF0u) { return; }
        }
        }
    }
    ctx->pc = 0x11EEF0u;
    // 0x11eef0: 0x8e221050  lw          $v0, 0x1050($s1)
    ctx->pc = 0x11eef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4176)));
label_11eef4:
    // 0x11eef4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x11eef4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x11eef8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x11eef8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11eefc: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x11EEFCu;
    {
        const bool branch_taken_0x11eefc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11eefc) {
            ctx->pc = 0x11EEB0u;
            runtime->cooperativeGuestYield();
            goto label_11eeb0;
        }
    }
    ctx->pc = 0x11EF04u;
label_11ef04:
    // 0x11ef04: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x11ef04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11ef08: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x11ef08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11ef0c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x11ef0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ef10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11ef10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ef14: 0x3e00008  jr          $ra
    ctx->pc = 0x11EF14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EF18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EF14u;
            // 0x11ef18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11EEB0u: goto label_11eeb0;
            case 0x11EECCu: goto label_11eecc;
            case 0x11EEF4u: goto label_11eef4;
            case 0x11EF04u: goto label_11ef04;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11EF1Cu;
    // 0x11ef1c: 0x0  nop
    ctx->pc = 0x11ef1cu;
    // NOP
    // 0x11ef20: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x11ef20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x11ef24: 0x0  nop
    ctx->pc = 0x11ef24u;
    // NOP
}
