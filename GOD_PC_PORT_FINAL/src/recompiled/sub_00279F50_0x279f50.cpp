#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00279F50
// Address: 0x279f50 - 0x27a030
void sub_00279F50_0x279f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279F50_0x279f50");
#endif

    ctx->pc = 0x279f50u;

    // 0x279f50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x279f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x279f54: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x279f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x279f58: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x279f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x279f5c: 0x3442e000  ori         $v0, $v0, 0xE000
    ctx->pc = 0x279f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57344);
    // 0x279f60: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x279f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x279f64: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x279f64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x279f68: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x279f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x279f6c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x279f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x279f70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x279f70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279f74: 0x246316d0  addiu       $v1, $v1, 0x16D0
    ctx->pc = 0x279f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5840));
    // 0x279f78: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x279f78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279f7c: 0x24c64a30  addiu       $a2, $a2, 0x4A30
    ctx->pc = 0x279f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18992));
    // 0x279f80: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x279f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x279f84: 0x30b10001  andi        $s1, $a1, 0x1
    ctx->pc = 0x279f84u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_279f88:
    // 0x279f88: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x279f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x279f8c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x279F8Cu;
    {
        const bool branch_taken_0x279f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x279f8c) {
            ctx->pc = 0x279F90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x279F8Cu;
            // 0x279f90: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x279FB4u;
            goto label_279fb4;
        }
    }
    ctx->pc = 0x279F94u;
    // 0x279f94: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x279f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x279f98: 0xac400080  sw          $zero, 0x80($v0)
    ctx->pc = 0x279f98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 0));
    // 0x279f9c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x279f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x279fa0: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x279fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x279fa4: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x279fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x279fa8: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x279fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    // 0x279fac: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x279facu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x279fb0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x279fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_279fb4:
    // 0x279fb4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x279fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x279fb8: 0x481fff3  bgez        $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x279FB8u;
    {
        const bool branch_taken_0x279fb8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x279FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279FB8u;
            // 0x279fbc: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279fb8) {
            ctx->pc = 0x279F88u;
            runtime->cooperativeGuestYield();
            goto label_279f88;
        }
    }
    ctx->pc = 0x279FC0u;
    // 0x279fc0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x279fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x279fc4: 0x3402ff1f  ori         $v0, $zero, 0xFF1F
    ctx->pc = 0x279fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65311);
    // 0x279fc8: 0x3463e010  ori         $v1, $v1, 0xE010
    ctx->pc = 0x279fc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57360);
    // 0x279fcc: 0x3c06ff1f  lui         $a2, 0xFF1F
    ctx->pc = 0x279fccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65311 << 16));
    // 0x279fd0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x279fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x279fd4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x279fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279fd8: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x279fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x279fdc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x279fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x279fe0: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x279fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x279fe4: 0xc09e7bc  jal         func_279EF0
    ctx->pc = 0x279FE4u;
    SET_GPR_U32(ctx, 31, 0x279FECu);
    ctx->pc = 0x279FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279FE4u;
            // 0x279fe8: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x279EF0u;
    if (runtime->hasFunction(0x279EF0u)) {
        auto targetFn = runtime->lookupFunction(0x279EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279FECu; }
        if (ctx->pc != 0x279FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_279ef0_0x279f28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279FECu; }
        if (ctx->pc != 0x279FECu) { return; }
    }
    ctx->pc = 0x279FECu;
    // 0x279fec: 0xc09e80c  jal         func_27A030
    ctx->pc = 0x279FECu;
    SET_GPR_U32(ctx, 31, 0x279FF4u);
    ctx->pc = 0x279FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279FECu;
            // 0x279ff0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27A030u;
    if (runtime->hasFunction(0x27A030u)) {
        auto targetFn = runtime->lookupFunction(0x27A030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279FF4u; }
        if (ctx->pc != 0x279FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_27a030_0x27a210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279FF4u; }
        if (ctx->pc != 0x279FF4u) { return; }
    }
    ctx->pc = 0x279FF4u;
    // 0x279ff4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x279ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279ff8: 0x16030007  bne         $s0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x279FF8u;
    {
        const bool branch_taken_0x279ff8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x279FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279FF8u;
            // 0x279ffc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279ff8) {
            ctx->pc = 0x27A018u;
            goto label_27a018;
        }
    }
    ctx->pc = 0x27A000u;
    // 0x27a000: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x27a000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x27a004: 0x3463e000  ori         $v1, $v1, 0xE000
    ctx->pc = 0x27a004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57344);
    // 0x27a008: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27a008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27a00c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x27a00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x27a010: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x27a010u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x27a014: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x27a014u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27a018:
    // 0x27a018: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x27a018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27a01c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x27a01cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27a020: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x27a020u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27a024: 0x3e00008  jr          $ra
    ctx->pc = 0x27A024u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A024u;
            // 0x27a028: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x279F88u: goto label_279f88;
            case 0x279FB4u: goto label_279fb4;
            case 0x27A018u: goto label_27a018;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27A02Cu;
    // 0x27a02c: 0x0  nop
    ctx->pc = 0x27a02cu;
    // NOP
}
