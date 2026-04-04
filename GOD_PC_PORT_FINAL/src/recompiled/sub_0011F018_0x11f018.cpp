#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011F018
// Address: 0x11f018 - 0x11f098
void sub_0011F018_0x11f018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011F018_0x11f018");
#endif

    ctx->pc = 0x11f018u;

    // 0x11f018: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11f018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11f01c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x11f01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x11f020: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x11f020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x11f024: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x11f024u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f028: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x11f028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x11f02c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11f02cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f030: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11f030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11f034: 0x8e221050  lw          $v0, 0x1050($s1)
    ctx->pc = 0x11f034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4176)));
    // 0x11f038: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x11F038u;
    {
        const bool branch_taken_0x11f038 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11F03Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F038u;
            // 0x11f03c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f038) {
            ctx->pc = 0x11F080u;
            goto label_11f080;
        }
    }
    ctx->pc = 0x11F040u;
    // 0x11f040: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x11f040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x11f044: 0x0  nop
    ctx->pc = 0x11f044u;
    // NOP
label_11f048:
    // 0x11f048: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11f048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f04c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x11f04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x11f050: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x11f050u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x11f054: 0x8c42083c  lw          $v0, 0x83C($v0)
    ctx->pc = 0x11f054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2108)));
    // 0x11f058: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x11f058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x11f05c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x11f05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x11f060: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x11f060u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x11f064: 0x8c4200ac  lw          $v0, 0xAC($v0)
    ctx->pc = 0x11f064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
    // 0x11f068: 0x40f809  jalr        $v0
    ctx->pc = 0x11F068u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11F070u);
        ctx->pc = 0x11F06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F068u;
            // 0x11f06c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11F070u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11F048u: goto label_11f048;
            case 0x11F080u: goto label_11f080;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11F070u; }
            if (ctx->pc != 0x11F070u) { return; }
        }
        }
    }
    ctx->pc = 0x11F070u;
    // 0x11f070: 0x8e221050  lw          $v0, 0x1050($s1)
    ctx->pc = 0x11f070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4176)));
    // 0x11f074: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x11f074u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11f078: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x11F078u;
    {
        const bool branch_taken_0x11f078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F078u;
            // 0x11f07c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f078) {
            ctx->pc = 0x11F048u;
            runtime->cooperativeGuestYield();
            goto label_11f048;
        }
    }
    ctx->pc = 0x11F080u;
label_11f080:
    // 0x11f080: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x11f080u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11f084: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x11f084u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11f088: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x11f088u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11f08c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11f08cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11f090: 0x3e00008  jr          $ra
    ctx->pc = 0x11F090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F090u;
            // 0x11f094: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11F048u: goto label_11f048;
            case 0x11F080u: goto label_11f080;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11F098u;
}
