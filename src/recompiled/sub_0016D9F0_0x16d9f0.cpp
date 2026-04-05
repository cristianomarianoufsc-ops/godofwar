#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016D9F0
// Address: 0x16d9f0 - 0x16dd78
void sub_0016D9F0_0x16d9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D9F0_0x16d9f0");
#endif

    ctx->pc = 0x16d9f0u;

label_16d9f0:
    // 0x16d9f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x16d9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x16d9f4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x16d9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x16d9f8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x16d9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x16d9fc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x16d9fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16da00: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16da00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x16da04: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x16da04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16da08: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x16da08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x16da0c: 0x2653004c  addiu       $s3, $s2, 0x4C
    ctx->pc = 0x16da0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
    // 0x16da10: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x16da10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x16da14: 0x11a080  sll         $s4, $s1, 2
    ctx->pc = 0x16da14u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x16da18: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x16da18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x16da1c: 0x2741021  addu        $v0, $s3, $s4
    ctx->pc = 0x16da1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x16da20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16da20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16da24: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16da24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16da28: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x16DA28u;
    {
        const bool branch_taken_0x16da28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16DA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DA28u;
            // 0x16da2c: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16da28) {
            ctx->pc = 0x16DA68u;
            goto label_16da68;
        }
    }
    ctx->pc = 0x16DA30u;
    // 0x16da30: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x16da30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x16da34: 0x8e500014  lw          $s0, 0x14($s2)
    ctx->pc = 0x16da34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x16da38: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x16da38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16da3c: 0xc05d656  jal         func_175958
    ctx->pc = 0x16DA3Cu;
    SET_GPR_U32(ctx, 31, 0x16DA44u);
    ctx->pc = 0x16DA40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DA3Cu;
            // 0x16da40: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DA44u; }
        if (ctx->pc != 0x16DA44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DA44u; }
        if (ctx->pc != 0x16DA44u) { return; }
    }
    ctx->pc = 0x16DA44u;
    // 0x16da44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16da44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16da48: 0xc05d6ac  jal         func_175AB0
    ctx->pc = 0x16DA48u;
    SET_GPR_U32(ctx, 31, 0x16DA50u);
    ctx->pc = 0x16DA4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DA48u;
            // 0x16da4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175AB0u;
    if (runtime->hasFunction(0x175AB0u)) {
        auto targetFn = runtime->lookupFunction(0x175AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DA50u; }
        if (ctx->pc != 0x16DA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175AB0_0x175ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DA50u; }
        if (ctx->pc != 0x16DA50u) { return; }
    }
    ctx->pc = 0x16DA50u;
    // 0x16da50: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x16DA50u;
    {
        const bool branch_taken_0x16da50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DA50u;
            // 0x16da54: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16da50) {
            ctx->pc = 0x16DA5Cu;
            goto label_16da5c;
        }
    }
    ctx->pc = 0x16DA58u;
    // 0x16da58: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x16da58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_16da5c:
    // 0x16da5c: 0x2741021  addu        $v0, $s3, $s4
    ctx->pc = 0x16da5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x16da60: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x16DA60u;
    {
        const bool branch_taken_0x16da60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DA60u;
            // 0x16da64: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16da60) {
            ctx->pc = 0x16DAD8u;
            goto label_16dad8;
        }
    }
    ctx->pc = 0x16DA68u;
label_16da68:
    // 0x16da68: 0x2642004c  addiu       $v0, $s2, 0x4C
    ctx->pc = 0x16da68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
    // 0x16da6c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x16da6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x16da70: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x16da70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16da74: 0x153027  nor         $a2, $zero, $s5
    ctx->pc = 0x16da74u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 21)));
    // 0x16da78: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x16da78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16da7c: 0xc04d260  jal         func_134980
    ctx->pc = 0x16DA7Cu;
    SET_GPR_U32(ctx, 31, 0x16DA84u);
    ctx->pc = 0x16DA80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DA7Cu;
            // 0x16da80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134980u;
    if (runtime->hasFunction(0x134980u)) {
        auto targetFn = runtime->lookupFunction(0x134980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DA84u; }
        if (ctx->pc != 0x16DA84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_134980_0x1349e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DA84u; }
        if (ctx->pc != 0x16DA84u) { return; }
    }
    ctx->pc = 0x16DA84u;
    // 0x16da84: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x16da84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16da88: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x16da88u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x16da8c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x16da8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x16da90: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x16DA90u;
    {
        const bool branch_taken_0x16da90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16da90) {
            ctx->pc = 0x16DA94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16DA90u;
            // 0x16da94: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16DADCu;
            goto label_16dadc;
        }
    }
    ctx->pc = 0x16DA98u;
    // 0x16da98: 0xc04d27a  jal         func_1349E8
    ctx->pc = 0x16DA98u;
    SET_GPR_U32(ctx, 31, 0x16DAA0u);
    ctx->pc = 0x1349E8u;
    if (runtime->hasFunction(0x1349E8u)) {
        auto targetFn = runtime->lookupFunction(0x1349E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DAA0u; }
        if (ctx->pc != 0x16DAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1349e8_0x134a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DAA0u; }
        if (ctx->pc != 0x16DAA0u) { return; }
    }
    ctx->pc = 0x16DAA0u;
    // 0x16daa0: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x16DAA0u;
    {
        const bool branch_taken_0x16daa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16daa0) {
            ctx->pc = 0x16DAA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16DAA0u;
            // 0x16daa4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16DADCu;
            goto label_16dadc;
        }
    }
    ctx->pc = 0x16DAA8u;
    // 0x16daa8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x16daa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16daac: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x16daacu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16dab0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x16dab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x16dab4: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x16dab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x16dab8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16dab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16dabc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16dabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16dac0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x16dac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16dac4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x16dac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x16dac8: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x16dac8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x16dacc: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x16daccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x16dad0: 0x40f809  jalr        $v0
    ctx->pc = 0x16DAD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16DAD8u);
        ctx->pc = 0x16DAD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DAD0u;
            // 0x16dad4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16DAD8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D9F0u: goto label_16d9f0;
            case 0x16DA5Cu: goto label_16da5c;
            case 0x16DA68u: goto label_16da68;
            case 0x16DAD8u: goto label_16dad8;
            case 0x16DADCu: goto label_16dadc;
            case 0x16DB68u: goto label_16db68;
            case 0x16DB78u: goto label_16db78;
            case 0x16DB88u: goto label_16db88;
            case 0x16DC30u: goto label_16dc30;
            case 0x16DC50u: goto label_16dc50;
            case 0x16DC88u: goto label_16dc88;
            case 0x16DCC0u: goto label_16dcc0;
            case 0x16DCF8u: goto label_16dcf8;
            case 0x16DD14u: goto label_16dd14;
            case 0x16DD18u: goto label_16dd18;
            case 0x16DD24u: goto label_16dd24;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16DAD8u; }
            if (ctx->pc != 0x16DAD8u) { return; }
        }
        }
    }
    ctx->pc = 0x16DAD8u;
label_16dad8:
    // 0x16dad8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x16dad8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_16dadc:
    // 0x16dadc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x16dadcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16dae0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x16dae0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16dae4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16dae4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16dae8: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x16dae8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16daec: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x16daecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16daf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16daf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16daf4: 0x3e00008  jr          $ra
    ctx->pc = 0x16DAF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DAF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DAF4u;
            // 0x16daf8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D9F0u: goto label_16d9f0;
            case 0x16DA5Cu: goto label_16da5c;
            case 0x16DA68u: goto label_16da68;
            case 0x16DAD8u: goto label_16dad8;
            case 0x16DADCu: goto label_16dadc;
            case 0x16DB68u: goto label_16db68;
            case 0x16DB78u: goto label_16db78;
            case 0x16DB88u: goto label_16db88;
            case 0x16DC30u: goto label_16dc30;
            case 0x16DC50u: goto label_16dc50;
            case 0x16DC88u: goto label_16dc88;
            case 0x16DCC0u: goto label_16dcc0;
            case 0x16DCF8u: goto label_16dcf8;
            case 0x16DD14u: goto label_16dd14;
            case 0x16DD18u: goto label_16dd18;
            case 0x16DD24u: goto label_16dd24;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16DAFCu;
    // 0x16dafc: 0x0  nop
    ctx->pc = 0x16dafcu;
    // NOP
    // 0x16db00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x16db00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x16db04: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x16db04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x16db08: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x16db08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x16db0c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x16db0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16db10: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x16db10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x16db14: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x16db14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16db18: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x16db18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x16db1c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x16db1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x16db20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16db20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16db24: 0x8e450158  lw          $a1, 0x158($s2)
    ctx->pc = 0x16db24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x16db28: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x16db28u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16db2c: 0x3c140033  lui         $s4, 0x33
    ctx->pc = 0x16db2cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)51 << 16));
    // 0x16db30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16db30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16db34: 0x2683e848  addiu       $v1, $s4, -0x17B8
    ctx->pc = 0x16db34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961224));
    // 0x16db38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16db38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16db3c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16db3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16db40: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16db40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16db44: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x16db44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x16db48: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x16db48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x16db4c: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x16db4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x16db50: 0x40f809  jalr        $v0
    ctx->pc = 0x16DB50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16DB58u);
        ctx->pc = 0x16DB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DB50u;
            // 0x16db54: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16DB58u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D9F0u: goto label_16d9f0;
            case 0x16DA5Cu: goto label_16da5c;
            case 0x16DA68u: goto label_16da68;
            case 0x16DAD8u: goto label_16dad8;
            case 0x16DADCu: goto label_16dadc;
            case 0x16DB68u: goto label_16db68;
            case 0x16DB78u: goto label_16db78;
            case 0x16DB88u: goto label_16db88;
            case 0x16DC30u: goto label_16dc30;
            case 0x16DC50u: goto label_16dc50;
            case 0x16DC88u: goto label_16dc88;
            case 0x16DCC0u: goto label_16dcc0;
            case 0x16DCF8u: goto label_16dcf8;
            case 0x16DD14u: goto label_16dd14;
            case 0x16DD18u: goto label_16dd18;
            case 0x16DD24u: goto label_16dd24;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16DB58u; }
            if (ctx->pc != 0x16DB58u) { return; }
        }
        }
    }
    ctx->pc = 0x16DB58u;
    // 0x16db58: 0x96510042  lhu         $s1, 0x42($s2)
    ctx->pc = 0x16db58u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 66)));
    // 0x16db5c: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x16DB5Cu;
    {
        const bool branch_taken_0x16db5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DB60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DB5Cu;
            // 0x16db60: 0x2682e848  addiu       $v0, $s4, -0x17B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16db5c) {
            ctx->pc = 0x16DB88u;
            goto label_16db88;
        }
    }
    ctx->pc = 0x16DB64u;
    // 0x16db64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16db64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16db68:
    // 0x16db68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16db68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16db6c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x16db6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16db70: 0xc05b67c  jal         func_16D9F0
    ctx->pc = 0x16DB70u;
    SET_GPR_U32(ctx, 31, 0x16DB78u);
    ctx->pc = 0x16DB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DB70u;
            // 0x16db74: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16D9F0u;
    runtime->cooperativeGuestYield();
    goto label_16d9f0;
    ctx->pc = 0x16DB78u;
label_16db78:
    // 0x16db78: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x16db78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x16db7c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16DB7Cu;
    {
        const bool branch_taken_0x16db7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16DB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DB7Cu;
            // 0x16db80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16db7c) {
            ctx->pc = 0x16DB68u;
            runtime->cooperativeGuestYield();
            goto label_16db68;
        }
    }
    ctx->pc = 0x16DB84u;
    // 0x16db84: 0x2682e848  addiu       $v0, $s4, -0x17B8
    ctx->pc = 0x16db84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961224));
label_16db88:
    // 0x16db88: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x16db88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x16db8c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x16db8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x16db90: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x16db90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x16db94: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x16db94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x16db98: 0x40f809  jalr        $v0
    ctx->pc = 0x16DB98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16DBA0u);
        ctx->pc = 0x16DB9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DB98u;
            // 0x16db9c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16DBA0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D9F0u: goto label_16d9f0;
            case 0x16DA5Cu: goto label_16da5c;
            case 0x16DA68u: goto label_16da68;
            case 0x16DAD8u: goto label_16dad8;
            case 0x16DADCu: goto label_16dadc;
            case 0x16DB68u: goto label_16db68;
            case 0x16DB78u: goto label_16db78;
            case 0x16DB88u: goto label_16db88;
            case 0x16DC30u: goto label_16dc30;
            case 0x16DC50u: goto label_16dc50;
            case 0x16DC88u: goto label_16dc88;
            case 0x16DCC0u: goto label_16dcc0;
            case 0x16DCF8u: goto label_16dcf8;
            case 0x16DD14u: goto label_16dd14;
            case 0x16DD18u: goto label_16dd18;
            case 0x16DD24u: goto label_16dd24;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16DBA0u; }
            if (ctx->pc != 0x16DBA0u) { return; }
        }
        }
    }
    ctx->pc = 0x16DBA0u;
    // 0x16dba0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x16dba0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16dba4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x16dba4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16dba8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x16dba8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16dbac: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x16dbacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16dbb0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x16dbb0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16dbb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16dbb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16dbb8: 0x3e00008  jr          $ra
    ctx->pc = 0x16DBB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DBBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DBB8u;
            // 0x16dbbc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D9F0u: goto label_16d9f0;
            case 0x16DA5Cu: goto label_16da5c;
            case 0x16DA68u: goto label_16da68;
            case 0x16DAD8u: goto label_16dad8;
            case 0x16DADCu: goto label_16dadc;
            case 0x16DB68u: goto label_16db68;
            case 0x16DB78u: goto label_16db78;
            case 0x16DB88u: goto label_16db88;
            case 0x16DC30u: goto label_16dc30;
            case 0x16DC50u: goto label_16dc50;
            case 0x16DC88u: goto label_16dc88;
            case 0x16DCC0u: goto label_16dcc0;
            case 0x16DCF8u: goto label_16dcf8;
            case 0x16DD14u: goto label_16dd14;
            case 0x16DD18u: goto label_16dd18;
            case 0x16DD24u: goto label_16dd24;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16DBC0u;
    // 0x16dbc0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x16dbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x16dbc4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x16dbc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x16dbc8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x16dbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x16dbcc: 0x700584a9  por         $s0, $zero, $a1
    ctx->pc = 0x16dbccu;
    SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 5)));
    // 0x16dbd0: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x16dbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x16dbd4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x16dbd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dbd8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x16dbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x16dbdc: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x16dbdcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dbe0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x16dbe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x16dbe4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16dbe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x16dbe8: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x16dbe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x16dbec: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x16dbecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x16dbf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16dbf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16dbf4: 0x8e450158  lw          $a1, 0x158($s2)
    ctx->pc = 0x16dbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x16dbf8: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x16dbf8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16dbfc: 0x3c170033  lui         $s7, 0x33
    ctx->pc = 0x16dbfcu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)51 << 16));
    // 0x16dc00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16dc00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16dc04: 0x26e3e848  addiu       $v1, $s7, -0x17B8
    ctx->pc = 0x16dc04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961224));
    // 0x16dc08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16dc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16dc0c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x16dc0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dc10: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16dc10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16dc14: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x16dc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x16dc18: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x16dc18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x16dc1c: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x16dc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x16dc20: 0x40f809  jalr        $v0
    ctx->pc = 0x16DC20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16DC28u);
        ctx->pc = 0x16DC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DC20u;
            // 0x16dc24: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16DC28u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D9F0u: goto label_16d9f0;
            case 0x16DA5Cu: goto label_16da5c;
            case 0x16DA68u: goto label_16da68;
            case 0x16DAD8u: goto label_16dad8;
            case 0x16DADCu: goto label_16dadc;
            case 0x16DB68u: goto label_16db68;
            case 0x16DB78u: goto label_16db78;
            case 0x16DB88u: goto label_16db88;
            case 0x16DC30u: goto label_16dc30;
            case 0x16DC50u: goto label_16dc50;
            case 0x16DC88u: goto label_16dc88;
            case 0x16DCC0u: goto label_16dcc0;
            case 0x16DCF8u: goto label_16dcf8;
            case 0x16DD14u: goto label_16dd14;
            case 0x16DD18u: goto label_16dd18;
            case 0x16DD24u: goto label_16dd24;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16DC28u; }
            if (ctx->pc != 0x16DC28u) { return; }
        }
        }
    }
    ctx->pc = 0x16DC28u;
    // 0x16dc28: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x16dc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x16dc2c: 0x9455005c  lhu         $s5, 0x5C($v0)
    ctx->pc = 0x16dc2cu;
    SET_GPR_U32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 92)));
label_16dc30:
    // 0x16dc30: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x16dc30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x16dc34: 0x24140008  addiu       $s4, $zero, 0x8
    ctx->pc = 0x16dc34u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x16dc38: 0x3442fff7  ori         $v0, $v0, 0xFFF7
    ctx->pc = 0x16dc38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65527);
    // 0x16dc3c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x16dc3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dc40: 0x12a00038  beqz        $s5, . + 4 + (0x38 << 2)
    ctx->pc = 0x16DC40u;
    {
        const bool branch_taken_0x16dc40 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DC44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DC40u;
            // 0x16dc44: 0x53a00a  movz        $s4, $v0, $s3 (Delay Slot)
        if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dc40) {
            ctx->pc = 0x16DD24u;
            goto label_16dd24;
        }
    }
    ctx->pc = 0x16DC48u;
    // 0x16dc48: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x16dc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x16dc4c: 0x0  nop
    ctx->pc = 0x16dc4cu;
    // NOP
label_16dc50:
    // 0x16dc50: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x16dc50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x16dc54: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x16dc54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16dc58: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x16dc58u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16dc5c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16dc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16dc60: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x16dc60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16dc64: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16dc64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16dc68: 0x0  nop
    ctx->pc = 0x16dc68u;
    // NOP
    // 0x16dc6c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x16DC6Cu;
    {
        const bool branch_taken_0x16dc6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16DC70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DC6Cu;
            // 0x16dc70: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dc6c) {
            ctx->pc = 0x16DC88u;
            goto label_16dc88;
        }
    }
    ctx->pc = 0x16DC74u;
    // 0x16dc74: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x16dc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16dc78: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16dc78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16dc7c: 0x0  nop
    ctx->pc = 0x16dc7cu;
    // NOP
    // 0x16dc80: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x16DC80u;
    {
        const bool branch_taken_0x16dc80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16dc80) {
            ctx->pc = 0x16DC84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16DC80u;
            // 0x16dc84: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16DC88u;
            goto label_16dc88;
        }
    }
    ctx->pc = 0x16DC88u;
label_16dc88:
    // 0x16dc88: 0x50800023  beql        $a0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x16DC88u;
    {
        const bool branch_taken_0x16dc88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dc88) {
            ctx->pc = 0x16DC8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16DC88u;
            // 0x16dc8c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16DD18u;
            goto label_16dd18;
        }
    }
    ctx->pc = 0x16DC90u;
    // 0x16dc90: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x16dc90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16dc94: 0x701017c9  prot3w      $v0, $s0
    ctx->pc = 0x16dc94u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x16dc98: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16dc98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16dc9c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16dc9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16dca0: 0x0  nop
    ctx->pc = 0x16dca0u;
    // NOP
    // 0x16dca4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x16DCA4u;
    {
        const bool branch_taken_0x16dca4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16DCA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DCA4u;
            // 0x16dca8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dca4) {
            ctx->pc = 0x16DCC0u;
            goto label_16dcc0;
        }
    }
    ctx->pc = 0x16DCACu;
    // 0x16dcac: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x16dcacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16dcb0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16dcb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16dcb4: 0x0  nop
    ctx->pc = 0x16dcb4u;
    // NOP
    // 0x16dcb8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x16DCB8u;
    {
        const bool branch_taken_0x16dcb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16dcb8) {
            ctx->pc = 0x16DCBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16DCB8u;
            // 0x16dcbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16DCC0u;
            goto label_16dcc0;
        }
    }
    ctx->pc = 0x16DCC0u;
label_16dcc0:
    // 0x16dcc0: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x16DCC0u;
    {
        const bool branch_taken_0x16dcc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dcc0) {
            ctx->pc = 0x16DCC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16DCC0u;
            // 0x16dcc4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16DD18u;
            goto label_16dd18;
        }
    }
    ctx->pc = 0x16DCC8u;
    // 0x16dcc8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x16dcc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16dccc: 0x70101789  pexew       $v0, $s0
    ctx->pc = 0x16dcccu;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x16dcd0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16dcd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16dcd4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16dcd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16dcd8: 0x0  nop
    ctx->pc = 0x16dcd8u;
    // NOP
    // 0x16dcdc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x16DCDCu;
    {
        const bool branch_taken_0x16dcdc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16DCE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DCDCu;
            // 0x16dce0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dcdc) {
            ctx->pc = 0x16DCF8u;
            goto label_16dcf8;
        }
    }
    ctx->pc = 0x16DCE4u;
    // 0x16dce4: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x16dce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16dce8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16dce8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16dcec: 0x0  nop
    ctx->pc = 0x16dcecu;
    // NOP
    // 0x16dcf0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x16DCF0u;
    {
        const bool branch_taken_0x16dcf0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16dcf0) {
            ctx->pc = 0x16DCF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16DCF0u;
            // 0x16dcf4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16DCF8u;
            goto label_16dcf8;
        }
    }
    ctx->pc = 0x16DCF8u;
label_16dcf8:
    // 0x16dcf8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16DCF8u;
    {
        const bool branch_taken_0x16dcf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DCFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DCF8u;
            // 0x16dcfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dcf8) {
            ctx->pc = 0x16DD14u;
            goto label_16dd14;
        }
    }
    ctx->pc = 0x16DD00u;
    // 0x16dd00: 0x8c660018  lw          $a2, 0x18($v1)
    ctx->pc = 0x16dd00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x16dd04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16dd04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dd08: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x16dd08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dd0c: 0xc05b468  jal         func_16D1A0
    ctx->pc = 0x16DD0Cu;
    SET_GPR_U32(ctx, 31, 0x16DD14u);
    ctx->pc = 0x16DD10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DD0Cu;
            // 0x16dd10: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16D1A0u;
    if (runtime->hasFunction(0x16D1A0u)) {
        auto targetFn = runtime->lookupFunction(0x16D1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DD14u; }
        if (ctx->pc != 0x16DD14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D1A0_0x16d1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DD14u; }
        if (ctx->pc != 0x16DD14u) { return; }
    }
    ctx->pc = 0x16DD14u;
label_16dd14:
    // 0x16dd14: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x16dd14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_16dd18:
    // 0x16dd18: 0x235102a  slt         $v0, $s1, $s5
    ctx->pc = 0x16dd18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x16dd1c: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x16DD1Cu;
    {
        const bool branch_taken_0x16dd1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16DD20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DD1Cu;
            // 0x16dd20: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dd1c) {
            ctx->pc = 0x16DC50u;
            runtime->cooperativeGuestYield();
            goto label_16dc50;
        }
    }
    ctx->pc = 0x16DD24u;
label_16dd24:
    // 0x16dd24: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x16dd24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x16dd28: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x16dd28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x16dd2c: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x16DD2Cu;
    {
        const bool branch_taken_0x16dd2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16DD30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DD2Cu;
            // 0x16dd30: 0x26e2e848  addiu       $v0, $s7, -0x17B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dd2c) {
            ctx->pc = 0x16DC30u;
            runtime->cooperativeGuestYield();
            goto label_16dc30;
        }
    }
    ctx->pc = 0x16DD34u;
    // 0x16dd34: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x16dd34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x16dd38: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x16dd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x16dd3c: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x16dd3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x16dd40: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x16dd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x16dd44: 0x40f809  jalr        $v0
    ctx->pc = 0x16DD44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16DD4Cu);
        ctx->pc = 0x16DD48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DD44u;
            // 0x16dd48: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16DD4Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D9F0u: goto label_16d9f0;
            case 0x16DA5Cu: goto label_16da5c;
            case 0x16DA68u: goto label_16da68;
            case 0x16DAD8u: goto label_16dad8;
            case 0x16DADCu: goto label_16dadc;
            case 0x16DB68u: goto label_16db68;
            case 0x16DB78u: goto label_16db78;
            case 0x16DB88u: goto label_16db88;
            case 0x16DC30u: goto label_16dc30;
            case 0x16DC50u: goto label_16dc50;
            case 0x16DC88u: goto label_16dc88;
            case 0x16DCC0u: goto label_16dcc0;
            case 0x16DCF8u: goto label_16dcf8;
            case 0x16DD14u: goto label_16dd14;
            case 0x16DD18u: goto label_16dd18;
            case 0x16DD24u: goto label_16dd24;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16DD4Cu; }
            if (ctx->pc != 0x16DD4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x16DD4Cu;
    // 0x16dd4c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x16dd4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16dd50: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x16dd50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16dd54: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x16dd54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16dd58: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x16dd58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16dd5c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16dd5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16dd60: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x16dd60u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16dd64: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x16dd64u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16dd68: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x16dd68u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16dd6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16dd6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16dd70: 0x3e00008  jr          $ra
    ctx->pc = 0x16DD70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DD74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DD70u;
            // 0x16dd74: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D9F0u: goto label_16d9f0;
            case 0x16DA5Cu: goto label_16da5c;
            case 0x16DA68u: goto label_16da68;
            case 0x16DAD8u: goto label_16dad8;
            case 0x16DADCu: goto label_16dadc;
            case 0x16DB68u: goto label_16db68;
            case 0x16DB78u: goto label_16db78;
            case 0x16DB88u: goto label_16db88;
            case 0x16DC30u: goto label_16dc30;
            case 0x16DC50u: goto label_16dc50;
            case 0x16DC88u: goto label_16dc88;
            case 0x16DCC0u: goto label_16dcc0;
            case 0x16DCF8u: goto label_16dcf8;
            case 0x16DD14u: goto label_16dd14;
            case 0x16DD18u: goto label_16dd18;
            case 0x16DD24u: goto label_16dd24;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16DD78u;
}
