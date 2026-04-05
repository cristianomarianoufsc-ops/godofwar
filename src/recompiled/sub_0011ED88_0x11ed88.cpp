#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011ED88
// Address: 0x11ed88 - 0x11ee40
void sub_0011ED88_0x11ed88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011ED88_0x11ed88");
#endif

    ctx->pc = 0x11ed88u;

    // 0x11ed88: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x11ed88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x11ed8c: 0x27bdefc0  addiu       $sp, $sp, -0x1040
    ctx->pc = 0x11ed8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963136));
    // 0x11ed90: 0x8c42ed58  lw          $v0, -0x12A8($v0)
    ctx->pc = 0x11ed90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962520)));
    // 0x11ed94: 0x7fb01030  sq          $s0, 0x1030($sp)
    ctx->pc = 0x11ed94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4144), GPR_VEC(ctx, 16));
    // 0x11ed98: 0x7fb11020  sq          $s1, 0x1020($sp)
    ctx->pc = 0x11ed98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4128), GPR_VEC(ctx, 17));
    // 0x11ed9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11ed9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eda0: 0x7fb21010  sq          $s2, 0x1010($sp)
    ctx->pc = 0x11eda0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4112), GPR_VEC(ctx, 18));
    // 0x11eda4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x11eda4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x11eda8: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x11EDA8u;
    {
        const bool branch_taken_0x11eda8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11EDACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EDA8u;
            // 0x11edac: 0xffbf1000  sd          $ra, 0x1000($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 4096), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eda8) {
            ctx->pc = 0x11EE24u;
            goto label_11ee24;
        }
    }
    ctx->pc = 0x11EDB0u;
    // 0x11edb0: 0x8e021058  lw          $v0, 0x1058($s0)
    ctx->pc = 0x11edb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4184)));
    // 0x11edb4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x11EDB4u;
    {
        const bool branch_taken_0x11edb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11edb4) {
            ctx->pc = 0x11EDB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11EDB4u;
            // 0x11edb8: 0x8e041054  lw          $a0, 0x1054($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4180)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11EDC8u;
            goto label_11edc8;
        }
    }
    ctx->pc = 0x11EDBCu;
    // 0x11edbc: 0xc0476d0  jal         func_11DB40
    ctx->pc = 0x11EDBCu;
    SET_GPR_U32(ctx, 31, 0x11EDC4u);
    ctx->pc = 0x11DB40u;
    if (runtime->hasFunction(0x11DB40u)) {
        auto targetFn = runtime->lookupFunction(0x11DB40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EDC4u; }
        if (ctx->pc != 0x11EDC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DB40_0x11db40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EDC4u; }
        if (ctx->pc != 0x11EDC4u) { return; }
    }
    ctx->pc = 0x11EDC4u;
    // 0x11edc4: 0x8e041054  lw          $a0, 0x1054($s0)
    ctx->pc = 0x11edc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4180)));
label_11edc8:
    // 0x11edc8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11edc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11edcc: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x11edccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x11edd0: 0xc05d578  jal         func_1755E0
    ctx->pc = 0x11EDD0u;
    SET_GPR_U32(ctx, 31, 0x11EDD8u);
    ctx->pc = 0x11EDD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EDD0u;
            // 0x11edd4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1755E0u;
    if (runtime->hasFunction(0x1755E0u)) {
        auto targetFn = runtime->lookupFunction(0x1755E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EDD8u; }
        if (ctx->pc != 0x11EDD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1755e0_0x175740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EDD8u; }
        if (ctx->pc != 0x11EDD8u) { return; }
    }
    ctx->pc = 0x11EDD8u;
    // 0x11edd8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11edd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eddc: 0x1a400011  blez        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x11EDDCu;
    {
        const bool branch_taken_0x11eddc = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x11EDE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EDDCu;
            // 0x11ede0: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eddc) {
            ctx->pc = 0x11EE24u;
            goto label_11ee24;
        }
    }
    ctx->pc = 0x11EDE4u;
    // 0x11ede4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x11ede4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_11ede8:
    // 0x11ede8: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x11ede8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x11edec: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x11edecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x11edf0: 0x8cc30048  lw          $v1, 0x48($a2)
    ctx->pc = 0x11edf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 72)));
    // 0x11edf4: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x11edf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x11edf8: 0x8ce50048  lw          $a1, 0x48($a3)
    ctx->pc = 0x11edf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 72)));
    // 0x11edfc: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x11edfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x11ee00: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x11ee00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x11ee04: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x11ee04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x11ee08: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x11ee08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x11ee0c: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x11ee0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x11ee10: 0x40f809  jalr        $v0
    ctx->pc = 0x11EE10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11EE18u);
        ctx->pc = 0x11EE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EE10u;
            // 0x11ee14: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11EE18u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11EDC8u: goto label_11edc8;
            case 0x11EDE8u: goto label_11ede8;
            case 0x11EE24u: goto label_11ee24;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11EE18u; }
            if (ctx->pc != 0x11EE18u) { return; }
        }
        }
    }
    ctx->pc = 0x11EE18u;
    // 0x11ee18: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x11ee18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x11ee1c: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x11EE1Cu;
    {
        const bool branch_taken_0x11ee1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11ee1c) {
            ctx->pc = 0x11EE20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11EE1Cu;
            // 0x11ee20: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11EDE8u;
            runtime->cooperativeGuestYield();
            goto label_11ede8;
        }
    }
    ctx->pc = 0x11EE24u;
label_11ee24:
    // 0x11ee24: 0x7bb01030  lq          $s0, 0x1030($sp)
    ctx->pc = 0x11ee24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 4144)));
    // 0x11ee28: 0x7bb11020  lq          $s1, 0x1020($sp)
    ctx->pc = 0x11ee28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 4128)));
    // 0x11ee2c: 0x7bb21010  lq          $s2, 0x1010($sp)
    ctx->pc = 0x11ee2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 4112)));
    // 0x11ee30: 0xdfbf1000  ld          $ra, 0x1000($sp)
    ctx->pc = 0x11ee30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 4096)));
    // 0x11ee34: 0x3e00008  jr          $ra
    ctx->pc = 0x11EE34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EE38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EE34u;
            // 0x11ee38: 0x27bd1040  addiu       $sp, $sp, 0x1040 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11EDC8u: goto label_11edc8;
            case 0x11EDE8u: goto label_11ede8;
            case 0x11EE24u: goto label_11ee24;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11EE3Cu;
    // 0x11ee3c: 0x0  nop
    ctx->pc = 0x11ee3cu;
    // NOP
}
