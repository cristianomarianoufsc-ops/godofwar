#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00201018
// Address: 0x201018 - 0x2010d0
void sub_00201018_0x201018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201018_0x201018");
#endif

    ctx->pc = 0x201018u;

    // 0x201018: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x201018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x20101c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x20101cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x201020: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x201020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x201024: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x201024u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201028: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x201028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x20102c: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x20102cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x201030: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x201030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x201034: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x201034u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201038: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x201038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x20103c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20103cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_201040:
    // 0x201040: 0x26930010  addiu       $s3, $s4, 0x10
    ctx->pc = 0x201040u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x201044: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x201044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x201048: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x201048u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20104c: 0x52000015  beql        $s0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x20104Cu;
    {
        const bool branch_taken_0x20104c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x20104c) {
            ctx->pc = 0x201050u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20104Cu;
            // 0x201050: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2010A4u;
            goto label_2010a4;
        }
    }
    ctx->pc = 0x201054u;
    // 0x201054: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x201054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x201058: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x201058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20105c: 0x1050000b  beq         $v0, $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x20105Cu;
    {
        const bool branch_taken_0x20105c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x201060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20105Cu;
            // 0x201060: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20105c) {
            ctx->pc = 0x20108Cu;
            goto label_20108c;
        }
    }
    ctx->pc = 0x201064u;
    // 0x201064: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x201064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_201068:
    // 0x201068: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x201068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x20106c: 0x8c447910  lw          $a0, 0x7910($v0)
    ctx->pc = 0x20106cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
    // 0x201070: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x201070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x201074: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x201074u;
    SET_GPR_U32(ctx, 31, 0x20107Cu);
    ctx->pc = 0x201078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201074u;
            // 0x201078: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20107Cu; }
        if (ctx->pc != 0x20107Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20107Cu; }
        if (ctx->pc != 0x20107Cu) { return; }
    }
    ctx->pc = 0x20107Cu;
    // 0x20107c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x20107cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x201080: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x201080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201084: 0x1462fff8  bne         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x201084u;
    {
        const bool branch_taken_0x201084 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x201088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201084u;
            // 0x201088: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201084) {
            ctx->pc = 0x201068u;
            runtime->cooperativeGuestYield();
            goto label_201068;
        }
    }
    ctx->pc = 0x20108Cu;
label_20108c:
    // 0x20108c: 0xae100000  sw          $s0, 0x0($s0)
    ctx->pc = 0x20108cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
    // 0x201090: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x201090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201094: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x201094u;
    SET_GPR_U32(ctx, 31, 0x20109Cu);
    ctx->pc = 0x201098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201094u;
            // 0x201098: 0xae100004  sw          $s0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20109Cu; }
        if (ctx->pc != 0x20109Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20109Cu; }
        if (ctx->pc != 0x20109Cu) { return; }
    }
    ctx->pc = 0x20109Cu;
    // 0x20109c: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x20109cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x2010a0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2010a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_2010a4:
    // 0x2010a4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2010a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2010a8: 0x641ffe5  bgez        $s2, . + 4 + (-0x1B << 2)
    ctx->pc = 0x2010A8u;
    {
        const bool branch_taken_0x2010a8 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x2010ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2010A8u;
            // 0x2010ac: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2010a8) {
            ctx->pc = 0x201040u;
            runtime->cooperativeGuestYield();
            goto label_201040;
        }
    }
    ctx->pc = 0x2010B0u;
    // 0x2010b0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2010b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2010b4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2010b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2010b8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2010b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2010bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2010bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2010c0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2010c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2010c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2010c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2010c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2010C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2010CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2010C8u;
            // 0x2010cc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x201040u: goto label_201040;
            case 0x201068u: goto label_201068;
            case 0x20108Cu: goto label_20108c;
            case 0x2010A4u: goto label_2010a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2010D0u;
}
