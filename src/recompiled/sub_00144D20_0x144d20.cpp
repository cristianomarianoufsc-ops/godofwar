#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00144D20
// Address: 0x144d20 - 0x144de8
void sub_00144D20_0x144d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144D20_0x144d20");
#endif

    ctx->pc = 0x144d20u;

    // 0x144d20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x144d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x144d24: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x144d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x144d28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x144d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x144d2c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x144d2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144d30: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x144d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x144d34: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x144d34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144d38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x144d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x144d3c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x144d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x144d40: 0x8e51001c  lw          $s1, 0x1C($s2)
    ctx->pc = 0x144d40u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x144d44: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x144d44u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x144d48: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x144D48u;
    {
        const bool branch_taken_0x144d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x144D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144D48u;
            // 0x144d4c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144d48) {
            ctx->pc = 0x144DC4u;
            goto label_144dc4;
        }
    }
    ctx->pc = 0x144D50u;
    // 0x144d50: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x144d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x144d54: 0x0  nop
    ctx->pc = 0x144d54u;
    // NOP
label_144d58:
    // 0x144d58: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x144d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x144d5c: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x144d5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x144d60: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x144d60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x144d64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x144d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x144d68: 0x94450008  lhu         $a1, 0x8($v0)
    ctx->pc = 0x144d68u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x144d6c: 0x50a40005  beql        $a1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x144D6Cu;
    {
        const bool branch_taken_0x144d6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x144d6c) {
            ctx->pc = 0x144D70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x144D6Cu;
            // 0x144d70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x144D84u;
            goto label_144d84;
        }
    }
    ctx->pc = 0x144D74u;
    // 0x144d74: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x144d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x144d78: 0x8c420cd0  lw          $v0, 0xCD0($v0)
    ctx->pc = 0x144d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3280)));
    // 0x144d7c: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x144d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x144d80: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x144d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_144d84:
    // 0x144d84: 0x50a0000b  beql        $a1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x144D84u;
    {
        const bool branch_taken_0x144d84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x144d84) {
            ctx->pc = 0x144D88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x144D84u;
            // 0x144d88: 0x96220004  lhu         $v0, 0x4($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x144DB4u;
            goto label_144db4;
        }
    }
    ctx->pc = 0x144D8Cu;
    // 0x144d8c: 0xc0a25f1  jal         func_2897C4
    ctx->pc = 0x144D8Cu;
    SET_GPR_U32(ctx, 31, 0x144D94u);
    ctx->pc = 0x144D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144D8Cu;
            // 0x144d90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2897C4u;
    if (runtime->hasFunction(0x2897C4u)) {
        auto targetFn = runtime->lookupFunction(0x2897C4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144D94u; }
        if (ctx->pc != 0x144D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2897c4_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144D94u; }
        if (ctx->pc != 0x144D94u) { return; }
    }
    ctx->pc = 0x144D94u;
    // 0x144d94: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x144D94u;
    {
        const bool branch_taken_0x144d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x144d94) {
            ctx->pc = 0x144D98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x144D94u;
            // 0x144d98: 0x96220004  lhu         $v0, 0x4($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x144DB4u;
            goto label_144db4;
        }
    }
    ctx->pc = 0x144D9Cu;
    // 0x144d9c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x144d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x144da0: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x144da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x144da4: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x144da4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x144da8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x144da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x144dac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x144DACu;
    {
        const bool branch_taken_0x144dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144DACu;
            // 0x144db0: 0x94420000  lhu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144dac) {
            ctx->pc = 0x144DC8u;
            goto label_144dc8;
        }
    }
    ctx->pc = 0x144DB4u;
label_144db4:
    // 0x144db4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x144db4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x144db8: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x144db8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x144dbc: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x144DBCu;
    {
        const bool branch_taken_0x144dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x144DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144DBCu;
            // 0x144dc0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144dbc) {
            ctx->pc = 0x144D58u;
            runtime->cooperativeGuestYield();
            goto label_144d58;
        }
    }
    ctx->pc = 0x144DC4u;
label_144dc4:
    // 0x144dc4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x144dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_144dc8:
    // 0x144dc8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x144dc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x144dcc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x144dccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x144dd0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x144dd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x144dd4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x144dd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144dd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x144dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x144DDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144DDCu;
            // 0x144de0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x144D58u: goto label_144d58;
            case 0x144D84u: goto label_144d84;
            case 0x144DB4u: goto label_144db4;
            case 0x144DC4u: goto label_144dc4;
            case 0x144DC8u: goto label_144dc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x144DE4u;
    // 0x144de4: 0x0  nop
    ctx->pc = 0x144de4u;
    // NOP
}
