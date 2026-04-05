#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00233090
// Address: 0x233090 - 0x233160
void sub_00233090_0x233090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233090_0x233090");
#endif

    ctx->pc = 0x233090u;

    // 0x233090: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x233090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x233094: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x233094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x233098: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x233098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x23309c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23309cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2330a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2330a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2330a4: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x2330a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2330a8: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2330A8u;
    {
        const bool branch_taken_0x2330a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2330a8) {
            ctx->pc = 0x2330ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2330A8u;
            // 0x2330ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2330B8u;
            goto label_2330b8;
        }
    }
    ctx->pc = 0x2330B0u;
    // 0x2330b0: 0x8ca5000c  lw          $a1, 0xC($a1)
    ctx->pc = 0x2330b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2330b4: 0x0  nop
    ctx->pc = 0x2330b4u;
    // NOP
label_2330b8:
    // 0x2330b8: 0x50a0000f  beql        $a1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2330B8u;
    {
        const bool branch_taken_0x2330b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2330b8) {
            ctx->pc = 0x2330BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2330B8u;
            // 0x2330bc: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2330F8u;
            goto label_2330f8;
        }
    }
    ctx->pc = 0x2330C0u;
    // 0x2330c0: 0x8cb0000c  lw          $s0, 0xC($a1)
    ctx->pc = 0x2330c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2330c4: 0x0  nop
    ctx->pc = 0x2330c4u;
    // NOP
label_2330c8:
    // 0x2330c8: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x2330c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x2330cc: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2330ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2330d0: 0x8c637938  lw          $v1, 0x7938($v1)
    ctx->pc = 0x2330d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31032)));
    // 0x2330d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2330d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2330d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2330d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2330dc: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x2330DCu;
    SET_GPR_U32(ctx, 31, 0x2330E4u);
    ctx->pc = 0x2330E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2330DCu;
            // 0x2330e0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2330E4u; }
        if (ctx->pc != 0x2330E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2330E4u; }
        if (ctx->pc != 0x2330E4u) { return; }
    }
    ctx->pc = 0x2330E4u;
    // 0x2330e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2330e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2330e8: 0x54a0fff7  bnel        $a1, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2330E8u;
    {
        const bool branch_taken_0x2330e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2330e8) {
            ctx->pc = 0x2330ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2330E8u;
            // 0x2330ec: 0x8cb0000c  lw          $s0, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2330C8u;
            runtime->cooperativeGuestYield();
            goto label_2330c8;
        }
    }
    ctx->pc = 0x2330F0u;
    // 0x2330f0: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x2330f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2330f4: 0x0  nop
    ctx->pc = 0x2330f4u;
    // NOP
label_2330f8:
    // 0x2330f8: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2330F8u;
    {
        const bool branch_taken_0x2330f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2330FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2330F8u;
            // 0x2330fc: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2330f8) {
            ctx->pc = 0x233120u;
            goto label_233120;
        }
    }
    ctx->pc = 0x233100u;
    // 0x233100: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x233100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x233104: 0x8c427938  lw          $v0, 0x7938($v0)
    ctx->pc = 0x233104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31032)));
    // 0x233108: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x233108u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23310c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23310cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x233110: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x233110u;
    SET_GPR_U32(ctx, 31, 0x233118u);
    ctx->pc = 0x233114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233110u;
            // 0x233114: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233118u; }
        if (ctx->pc != 0x233118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233118u; }
        if (ctx->pc != 0x233118u) { return; }
    }
    ctx->pc = 0x233118u;
    // 0x233118: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x233118u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x23311c: 0x0  nop
    ctx->pc = 0x23311cu;
    // NOP
label_233120:
    // 0x233120: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x233120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x233124: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x233124u;
    {
        const bool branch_taken_0x233124 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x233128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233124u;
            // 0x233128: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233124) {
            ctx->pc = 0x233148u;
            goto label_233148;
        }
    }
    ctx->pc = 0x23312Cu;
    // 0x23312c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x23312cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x233130: 0x8c427938  lw          $v0, 0x7938($v0)
    ctx->pc = 0x233130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31032)));
    // 0x233134: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x233134u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x233138: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x233138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23313c: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x23313Cu;
    SET_GPR_U32(ctx, 31, 0x233144u);
    ctx->pc = 0x233140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23313Cu;
            // 0x233140: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233144u; }
        if (ctx->pc != 0x233144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233144u; }
        if (ctx->pc != 0x233144u) { return; }
    }
    ctx->pc = 0x233144u;
    // 0x233144: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x233144u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_233148:
    // 0x233148: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x233148u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23314c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23314cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233150: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x233150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233154: 0x3e00008  jr          $ra
    ctx->pc = 0x233154u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233154u;
            // 0x233158: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2330B8u: goto label_2330b8;
            case 0x2330C8u: goto label_2330c8;
            case 0x2330F8u: goto label_2330f8;
            case 0x233120u: goto label_233120;
            case 0x233148u: goto label_233148;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23315Cu;
    // 0x23315c: 0x0  nop
    ctx->pc = 0x23315cu;
    // NOP
}
