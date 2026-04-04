#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011EAB8
// Address: 0x11eab8 - 0x11eb68
void sub_0011EAB8_0x11eab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011EAB8_0x11eab8");
#endif

    ctx->pc = 0x11eab8u;

    // 0x11eab8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11eab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11eabc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x11eabcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x11eac0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x11eac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x11eac4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11eac4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eac8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x11eac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x11eacc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11eaccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11ead0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11ead0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11ead4: 0x8e23106c  lw          $v1, 0x106C($s1)
    ctx->pc = 0x11ead4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4204)));
    // 0x11ead8: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x11EAD8u;
    {
        const bool branch_taken_0x11ead8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EAD8u;
            // 0x11eadc: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ead8) {
            ctx->pc = 0x11EB44u;
            goto label_11eb44;
        }
    }
    ctx->pc = 0x11EAE0u;
    // 0x11eae0: 0x8e221070  lw          $v0, 0x1070($s1)
    ctx->pc = 0x11eae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4208)));
    // 0x11eae4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11EAE4u;
    {
        const bool branch_taken_0x11eae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11EAE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EAE4u;
            // 0x11eae8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eae4) {
            ctx->pc = 0x11EB08u;
            goto label_11eb08;
        }
    }
    ctx->pc = 0x11EAECu;
    // 0x11eaec: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x11EAECu;
    {
        const bool branch_taken_0x11eaec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EAF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EAECu;
            // 0x11eaf0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eaec) {
            ctx->pc = 0x11EB4Cu;
            goto label_11eb4c;
        }
    }
    ctx->pc = 0x11EAF4u;
label_11eaf4:
    // 0x11eaf4: 0x8e221070  lw          $v0, 0x1070($s1)
    ctx->pc = 0x11eaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4208)));
    // 0x11eaf8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x11eaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x11eafc: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x11eafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x11eb00: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x11EB00u;
    {
        const bool branch_taken_0x11eb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EB00u;
            // 0x11eb04: 0x24420018  addiu       $v0, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eb00) {
            ctx->pc = 0x11EB48u;
            goto label_11eb48;
        }
    }
    ctx->pc = 0x11EB08u;
label_11eb08:
    // 0x11eb08: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x11EB08u;
    {
        const bool branch_taken_0x11eb08 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x11EB0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EB08u;
            // 0x11eb0c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eb08) {
            ctx->pc = 0x11EB44u;
            goto label_11eb44;
        }
    }
    ctx->pc = 0x11EB10u;
    // 0x11eb10: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x11eb10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x11eb14: 0x0  nop
    ctx->pc = 0x11eb14u;
    // NOP
label_11eb18:
    // 0x11eb18: 0x8e251070  lw          $a1, 0x1070($s1)
    ctx->pc = 0x11eb18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4208)));
    // 0x11eb1c: 0x2029018  mult        $s2, $s0, $v0
    ctx->pc = 0x11eb1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x11eb20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11eb20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eb24: 0xc0a349c  jal         func_28D270
    ctx->pc = 0x11EB24u;
    SET_GPR_U32(ctx, 31, 0x11EB2Cu);
    ctx->pc = 0x11EB28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EB24u;
            // 0x11eb28: 0xb22821  addu        $a1, $a1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D270u;
    if (runtime->hasFunction(0x28D270u)) {
        auto targetFn = runtime->lookupFunction(0x28D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EB2Cu; }
        if (ctx->pc != 0x11EB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D270_0x28d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EB2Cu; }
        if (ctx->pc != 0x11EB2Cu) { return; }
    }
    ctx->pc = 0x11EB2Cu;
    // 0x11eb2c: 0x1040fff1  beqz        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x11EB2Cu;
    {
        const bool branch_taken_0x11eb2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EB30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EB2Cu;
            // 0x11eb30: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eb2c) {
            ctx->pc = 0x11EAF4u;
            runtime->cooperativeGuestYield();
            goto label_11eaf4;
        }
    }
    ctx->pc = 0x11EB34u;
    // 0x11eb34: 0x8e22106c  lw          $v0, 0x106C($s1)
    ctx->pc = 0x11eb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4204)));
    // 0x11eb38: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x11eb38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11eb3c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x11EB3Cu;
    {
        const bool branch_taken_0x11eb3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11EB40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EB3Cu;
            // 0x11eb40: 0x2402004c  addiu       $v0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eb3c) {
            ctx->pc = 0x11EB18u;
            runtime->cooperativeGuestYield();
            goto label_11eb18;
        }
    }
    ctx->pc = 0x11EB44u;
label_11eb44:
    // 0x11eb44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11eb44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11eb48:
    // 0x11eb48: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x11eb48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_11eb4c:
    // 0x11eb4c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x11eb4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11eb50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11eb50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11eb54: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x11eb54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11eb58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11eb58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11eb5c: 0x3e00008  jr          $ra
    ctx->pc = 0x11EB5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EB60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EB5Cu;
            // 0x11eb60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11EAF4u: goto label_11eaf4;
            case 0x11EB08u: goto label_11eb08;
            case 0x11EB18u: goto label_11eb18;
            case 0x11EB44u: goto label_11eb44;
            case 0x11EB48u: goto label_11eb48;
            case 0x11EB4Cu: goto label_11eb4c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11EB64u;
    // 0x11eb64: 0x0  nop
    ctx->pc = 0x11eb64u;
    // NOP
}
