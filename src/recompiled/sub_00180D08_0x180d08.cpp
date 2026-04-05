#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00180D08
// Address: 0x180d08 - 0x180df0
void sub_00180D08_0x180d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180D08_0x180d08");
#endif

    ctx->pc = 0x180d08u;

    // 0x180d08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x180d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x180d0c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x180d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x180d10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x180d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x180d14: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x180d14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180d18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x180d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x180d1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x180d1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180d20: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x180d20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x180d24: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x180d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x180d28: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x180d28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x180d2c: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x180d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x180d30: 0x40f809  jalr        $v0
    ctx->pc = 0x180D30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x180D38u);
        ctx->pc = 0x180D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180D30u;
            // 0x180d34: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x180D38u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180D48u: goto label_180d48;
            case 0x180D90u: goto label_180d90;
            case 0x180D94u: goto label_180d94;
            case 0x180DC0u: goto label_180dc0;
            case 0x180DD0u: goto label_180dd0;
            case 0x180DD4u: goto label_180dd4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x180D38u; }
            if (ctx->pc != 0x180D38u) { return; }
        }
        }
    }
    ctx->pc = 0x180D38u;
    // 0x180d38: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x180d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x180d3c: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x180D3Cu;
    {
        const bool branch_taken_0x180d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x180d3c) {
            ctx->pc = 0x180D40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x180D3Cu;
            // 0x180d40: 0xae300008  sw          $s0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x180D48u;
            goto label_180d48;
        }
    }
    ctx->pc = 0x180D44u;
    // 0x180d44: 0x0  nop
    ctx->pc = 0x180d44u;
    // NOP
label_180d48:
    // 0x180d48: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x180d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x180d4c: 0x8470001e  lh          $s0, 0x1E($v1)
    ctx->pc = 0x180d4cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
    // 0x180d50: 0x6000010  bltz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x180D50u;
    {
        const bool branch_taken_0x180d50 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x180D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180D50u;
            // 0x180d54: 0x8c62000c  lw          $v0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180d50) {
            ctx->pc = 0x180D94u;
            goto label_180d94;
        }
    }
    ctx->pc = 0x180D58u;
    // 0x180d58: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x180d58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x180d5c: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x180d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x180d60: 0x40f809  jalr        $v0
    ctx->pc = 0x180D60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x180D68u);
        ctx->pc = 0x180D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180D60u;
            // 0x180d64: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x180D68u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180D48u: goto label_180d48;
            case 0x180D90u: goto label_180d90;
            case 0x180D94u: goto label_180d94;
            case 0x180DC0u: goto label_180dc0;
            case 0x180DD0u: goto label_180dd0;
            case 0x180DD4u: goto label_180dd4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x180D68u; }
            if (ctx->pc != 0x180D68u) { return; }
        }
        }
    }
    ctx->pc = 0x180D68u;
    // 0x180d68: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x180d68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x180d6c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x180D6Cu;
    {
        const bool branch_taken_0x180d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x180d6c) {
            ctx->pc = 0x180D70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x180D6Cu;
            // 0x180d70: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x180D90u;
            goto label_180d90;
        }
    }
    ctx->pc = 0x180D74u;
    // 0x180d74: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x180d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x180d78: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x180d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x180d7c: 0x8485001e  lh          $a1, 0x1E($a0)
    ctx->pc = 0x180d7cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
    // 0x180d80: 0x84430038  lh          $v1, 0x38($v0)
    ctx->pc = 0x180d80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x180d84: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x180d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x180d88: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x180D88u;
    {
        const bool branch_taken_0x180d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180D88u;
            // 0x180d8c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180d88) {
            ctx->pc = 0x180DC0u;
            goto label_180dc0;
        }
    }
    ctx->pc = 0x180D90u;
label_180d90:
    // 0x180d90: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x180d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_180d94:
    // 0x180d94: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x180d94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x180d98: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x180d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x180d9c: 0x40f809  jalr        $v0
    ctx->pc = 0x180D9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x180DA4u);
        ctx->pc = 0x180DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180D9Cu;
            // 0x180da0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x180DA4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180D48u: goto label_180d48;
            case 0x180D90u: goto label_180d90;
            case 0x180D94u: goto label_180d94;
            case 0x180DC0u: goto label_180dc0;
            case 0x180DD0u: goto label_180dd0;
            case 0x180DD4u: goto label_180dd4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x180DA4u; }
            if (ctx->pc != 0x180DA4u) { return; }
        }
        }
    }
    ctx->pc = 0x180DA4u;
    // 0x180da4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x180DA4u;
    {
        const bool branch_taken_0x180da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180DA4u;
            // 0x180da8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180da4) {
            ctx->pc = 0x180DD0u;
            goto label_180dd0;
        }
    }
    ctx->pc = 0x180DACu;
    // 0x180dac: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x180dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x180db0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x180db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x180db4: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x180db4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x180db8: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x180db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x180dbc: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x180dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_180dc0:
    // 0x180dc0: 0x40f809  jalr        $v0
    ctx->pc = 0x180DC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x180DC8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x180DC8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180D48u: goto label_180d48;
            case 0x180D90u: goto label_180d90;
            case 0x180D94u: goto label_180d94;
            case 0x180DC0u: goto label_180dc0;
            case 0x180DD0u: goto label_180dd0;
            case 0x180DD4u: goto label_180dd4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x180DC8u; }
            if (ctx->pc != 0x180DC8u) { return; }
        }
        }
    }
    ctx->pc = 0x180DC8u;
    // 0x180dc8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x180DC8u;
    {
        const bool branch_taken_0x180dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180DC8u;
            // 0x180dcc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180dc8) {
            ctx->pc = 0x180DD4u;
            goto label_180dd4;
        }
    }
    ctx->pc = 0x180DD0u;
label_180dd0:
    // 0x180dd0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x180dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_180dd4:
    // 0x180dd4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x180dd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x180dd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x180dd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180ddc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180de0: 0x3e00008  jr          $ra
    ctx->pc = 0x180DE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180DE0u;
            // 0x180de4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180D48u: goto label_180d48;
            case 0x180D90u: goto label_180d90;
            case 0x180D94u: goto label_180d94;
            case 0x180DC0u: goto label_180dc0;
            case 0x180DD0u: goto label_180dd0;
            case 0x180DD4u: goto label_180dd4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x180DE8u;
    // 0x180de8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x180de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x180dec: 0x0  nop
    ctx->pc = 0x180decu;
    // NOP
}
