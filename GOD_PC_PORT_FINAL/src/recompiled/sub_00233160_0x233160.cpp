#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00233160
// Address: 0x233160 - 0x233240
void sub_00233160_0x233160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233160_0x233160");
#endif

    ctx->pc = 0x233160u;

    // 0x233160: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x233160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x233164: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x233164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x233168: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x233168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x23316c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x23316cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x233170: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x233170u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233174: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x233174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x233178: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x233178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x23317c: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x23317Cu;
    {
        const bool branch_taken_0x23317c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23317Cu;
            // 0x233180: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23317c) {
            ctx->pc = 0x233228u;
            goto label_233228;
        }
    }
    ctx->pc = 0x233184u;
    // 0x233184: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x233184u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x233188: 0xae510004  sw          $s1, 0x4($s2)
    ctx->pc = 0x233188u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
    // 0x23318c: 0x3c10002c  lui         $s0, 0x2C
    ctx->pc = 0x23318cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)44 << 16));
    // 0x233190: 0x26107930  addiu       $s0, $s0, 0x7930
    ctx->pc = 0x233190u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 31024));
    // 0x233194: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x233194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x233198: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x233198u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x23319c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23319cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2331a0: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x2331A0u;
    SET_GPR_U32(ctx, 31, 0x2331A8u);
    ctx->pc = 0x2331A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2331A0u;
            // 0x2331a4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2331A8u; }
        if (ctx->pc != 0x2331A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2331A8u; }
        if (ctx->pc != 0x2331A8u) { return; }
    }
    ctx->pc = 0x2331A8u;
    // 0x2331a8: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x2331a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
    // 0x2331ac: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x2331acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x2331b0: 0x8e510004  lw          $s1, 0x4($s2)
    ctx->pc = 0x2331b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2331b4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2331b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2331b8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2331b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2331bc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2331bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2331c0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2331c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2331c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2331c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2331c8: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x2331C8u;
    SET_GPR_U32(ctx, 31, 0x2331D0u);
    ctx->pc = 0x2331CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2331C8u;
            // 0x2331cc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2331D0u; }
        if (ctx->pc != 0x2331D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2331D0u; }
        if (ctx->pc != 0x2331D0u) { return; }
    }
    ctx->pc = 0x2331D0u;
    // 0x2331d0: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x2331d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
    // 0x2331d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2331d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2331d8: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x2331d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x2331dc: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2331dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2331e0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2331e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2331e4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2331E4u;
    {
        const bool branch_taken_0x2331e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2331E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2331E4u;
            // 0x2331e8: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2331e4) {
            ctx->pc = 0x233220u;
            goto label_233220;
        }
    }
    ctx->pc = 0x2331ECu;
    // 0x2331ec: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2331ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2331f0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2331f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2331f4: 0x0  nop
    ctx->pc = 0x2331f4u;
    // NOP
label_2331f8:
    // 0x2331f8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2331f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2331fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2331fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x233200: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x233200u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x233204: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x233204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x233208: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x233208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23320c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x23320cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x233210: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x233210u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x233214: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x233214u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x233218: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x233218u;
    {
        const bool branch_taken_0x233218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x233218) {
            ctx->pc = 0x23321Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x233218u;
            // 0x23321c: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2331F8u;
            runtime->cooperativeGuestYield();
            goto label_2331f8;
        }
    }
    ctx->pc = 0x233220u;
label_233220:
    // 0x233220: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x233220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233224: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x233224u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_233228:
    // 0x233228: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x233228u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23322c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x23322cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x233230: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x233230u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233234: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x233234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233238: 0x3e00008  jr          $ra
    ctx->pc = 0x233238u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23323Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233238u;
            // 0x23323c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2331F8u: goto label_2331f8;
            case 0x233220u: goto label_233220;
            case 0x233228u: goto label_233228;
            default: break;
        }
        return;
    }
    ctx->pc = 0x233240u;
}
