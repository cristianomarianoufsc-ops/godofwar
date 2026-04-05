#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ADEB0
// Address: 0x1adeb0 - 0x1adf60
void sub_001ADEB0_0x1adeb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ADEB0_0x1adeb0");
#endif

    ctx->pc = 0x1adeb0u;

    // 0x1adeb0: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1adeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1adeb4: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1adeb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1adeb8: 0x8c432600  lw          $v1, 0x2600($v0)
    ctx->pc = 0x1adeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9728)));
    // 0x1adebc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1adebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1adec0: 0x24422600  addiu       $v0, $v0, 0x2600
    ctx->pc = 0x1adec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9728));
    // 0x1adec4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1adec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1adec8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1adec8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adecc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1adeccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1aded0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1aded0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aded4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1aded4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1aded8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1aded8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1adedc: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1ADEDCu;
    {
        const bool branch_taken_0x1adedc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1ADEE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADEDCu;
            // 0x1adee0: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adedc) {
            ctx->pc = 0x1ADF40u;
            goto label_1adf40;
        }
    }
    ctx->pc = 0x1ADEE4u;
    // 0x1adee4: 0x0  nop
    ctx->pc = 0x1adee4u;
    // NOP
label_1adee8:
    // 0x1adee8: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1ADEE8u;
    {
        const bool branch_taken_0x1adee8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADEECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADEE8u;
            // 0x1adeec: 0x8fb00004  lw          $s0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adee8) {
            ctx->pc = 0x1ADF0Cu;
            goto label_1adf0c;
        }
    }
    ctx->pc = 0x1ADEF0u;
    // 0x1adef0: 0xc06a5f2  jal         func_1A97C8
    ctx->pc = 0x1ADEF0u;
    SET_GPR_U32(ctx, 31, 0x1ADEF8u);
    ctx->pc = 0x1ADEF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADEF0u;
            // 0x1adef4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A97C8u;
    if (runtime->hasFunction(0x1A97C8u)) {
        auto targetFn = runtime->lookupFunction(0x1A97C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADEF8u; }
        if (ctx->pc != 0x1ADEF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A97C8_0x1a97c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADEF8u; }
        if (ctx->pc != 0x1ADEF8u) { return; }
    }
    ctx->pc = 0x1ADEF8u;
    // 0x1adef8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1adef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adefc: 0xc0a349c  jal         func_28D270
    ctx->pc = 0x1ADEFCu;
    SET_GPR_U32(ctx, 31, 0x1ADF04u);
    ctx->pc = 0x1ADF00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADEFCu;
            // 0x1adf00: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D270u;
    if (runtime->hasFunction(0x28D270u)) {
        auto targetFn = runtime->lookupFunction(0x28D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADF04u; }
        if (ctx->pc != 0x1ADF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D270_0x28d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADF04u; }
        if (ctx->pc != 0x1ADF04u) { return; }
    }
    ctx->pc = 0x1ADF04u;
    // 0x1adf04: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1ADF04u;
    {
        const bool branch_taken_0x1adf04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADF08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADF04u;
            // 0x1adf08: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adf04) {
            ctx->pc = 0x1ADF30u;
            goto label_1adf30;
        }
    }
    ctx->pc = 0x1ADF0Cu;
label_1adf0c:
    // 0x1adf0c: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ADF0Cu;
    {
        const bool branch_taken_0x1adf0c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADF10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADF0Cu;
            // 0x1adf10: 0x8e100008  lw          $s0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adf0c) {
            ctx->pc = 0x1ADF28u;
            goto label_1adf28;
        }
    }
    ctx->pc = 0x1ADF14u;
    // 0x1adf14: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x1adf14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1adf18: 0xc0a349c  jal         func_28D270
    ctx->pc = 0x1ADF18u;
    SET_GPR_U32(ctx, 31, 0x1ADF20u);
    ctx->pc = 0x1ADF1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADF18u;
            // 0x1adf1c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D270u;
    if (runtime->hasFunction(0x28D270u)) {
        auto targetFn = runtime->lookupFunction(0x28D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADF20u; }
        if (ctx->pc != 0x1ADF20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D270_0x28d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADF20u; }
        if (ctx->pc != 0x1ADF20u) { return; }
    }
    ctx->pc = 0x1ADF20u;
    // 0x1adf20: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ADF20u;
    {
        const bool branch_taken_0x1adf20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADF20u;
            // 0x1adf24: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adf20) {
            ctx->pc = 0x1ADF30u;
            goto label_1adf30;
        }
    }
    ctx->pc = 0x1ADF28u;
label_1adf28:
    // 0x1adf28: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1ADF28u;
    {
        const bool branch_taken_0x1adf28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADF2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADF28u;
            // 0x1adf2c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adf28) {
            ctx->pc = 0x1ADF44u;
            goto label_1adf44;
        }
    }
    ctx->pc = 0x1ADF30u;
label_1adf30:
    // 0x1adf30: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1adf30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1adf34: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1adf34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1adf38: 0x1443ffeb  bne         $v0, $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1ADF38u;
    {
        const bool branch_taken_0x1adf38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1ADF3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADF38u;
            // 0x1adf3c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adf38) {
            ctx->pc = 0x1ADEE8u;
            runtime->cooperativeGuestYield();
            goto label_1adee8;
        }
    }
    ctx->pc = 0x1ADF40u;
label_1adf40:
    // 0x1adf40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1adf40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1adf44:
    // 0x1adf44: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1adf44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1adf48: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1adf48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1adf4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1adf4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1adf50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1adf50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adf54: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADF54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADF54u;
            // 0x1adf58: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ADEE8u: goto label_1adee8;
            case 0x1ADF0Cu: goto label_1adf0c;
            case 0x1ADF28u: goto label_1adf28;
            case 0x1ADF30u: goto label_1adf30;
            case 0x1ADF40u: goto label_1adf40;
            case 0x1ADF44u: goto label_1adf44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ADF5Cu;
    // 0x1adf5c: 0x0  nop
    ctx->pc = 0x1adf5cu;
    // NOP
}
