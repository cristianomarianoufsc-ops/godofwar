#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011BE60
// Address: 0x11be60 - 0x11bf68
void sub_0011BE60_0x11be60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011BE60_0x11be60");
#endif

    ctx->pc = 0x11be60u;

    // 0x11be60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x11be60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x11be64: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x11be64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x11be68: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x11be68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x11be6c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x11be6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x11be70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11be70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11be74: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x11be74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x11be78: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11be78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11be7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x11be7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x11be80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11be80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11be84: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x11be84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x11be88: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x11be88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11be8c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11be8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11be90: 0x30f4ffff  andi        $s4, $a3, 0xFFFF
    ctx->pc = 0x11be90u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x11be94: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x11be94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x11be98: 0xc04e1f0  jal         func_1387C0
    ctx->pc = 0x11BE98u;
    SET_GPR_U32(ctx, 31, 0x11BEA0u);
    ctx->pc = 0x11BE9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BE98u;
            // 0x11be9c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1387C0u;
    if (runtime->hasFunction(0x1387C0u)) {
        auto targetFn = runtime->lookupFunction(0x1387C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BEA0u; }
        if (ctx->pc != 0x11BEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001387C0_0x1387c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BEA0u; }
        if (ctx->pc != 0x11BEA0u) { return; }
    }
    ctx->pc = 0x11BEA0u;
    // 0x11bea0: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x11bea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x11bea4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x11bea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11bea8: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x11bea8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
    // 0x11beac: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11BEACu;
    {
        const bool branch_taken_0x11beac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x11BEB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BEACu;
            // 0x11beb0: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11beac) {
            ctx->pc = 0x11BECCu;
            goto label_11becc;
        }
    }
    ctx->pc = 0x11BEB4u;
    // 0x11beb4: 0xc04e21c  jal         func_138870
    ctx->pc = 0x11BEB4u;
    SET_GPR_U32(ctx, 31, 0x11BEBCu);
    ctx->pc = 0x11BEB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BEB4u;
            // 0x11beb8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138870u;
    if (runtime->hasFunction(0x138870u)) {
        auto targetFn = runtime->lookupFunction(0x138870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BEBCu; }
        if (ctx->pc != 0x11BEBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00138870_0x138870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BEBCu; }
        if (ctx->pc != 0x11BEBCu) { return; }
    }
    ctx->pc = 0x11BEBCu;
    // 0x11bebc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11bebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11bec0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11bec0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bec4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x11BEC4u;
    {
        const bool branch_taken_0x11bec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BEC4u;
            // 0x11bec8: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bec4) {
            ctx->pc = 0x11BEF4u;
            goto label_11bef4;
        }
    }
    ctx->pc = 0x11BECCu;
label_11becc:
    // 0x11becc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11beccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bed0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11bed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11bed4: 0xc05e962  jal         func_17A588
    ctx->pc = 0x11BED4u;
    SET_GPR_U32(ctx, 31, 0x11BEDCu);
    ctx->pc = 0x11BED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BED4u;
            // 0x11bed8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A588u;
    if (runtime->hasFunction(0x17A588u)) {
        auto targetFn = runtime->lookupFunction(0x17A588u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BEDCu; }
        if (ctx->pc != 0x11BEDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A588_0x17a588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BEDCu; }
        if (ctx->pc != 0x11BEDCu) { return; }
    }
    ctx->pc = 0x11BEDCu;
    // 0x11bedc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11bedcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bee0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11bee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11bee4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BEE4u;
    {
        const bool branch_taken_0x11bee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11bee4) {
            ctx->pc = 0x11BEF4u;
            goto label_11bef4;
        }
    }
    ctx->pc = 0x11BEECu;
    // 0x11beec: 0xa2030008  sb          $v1, 0x8($s0)
    ctx->pc = 0x11beecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x11bef0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x11bef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_11bef4:
    // 0x11bef4: 0x52400010  beql        $s2, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x11BEF4u;
    {
        const bool branch_taken_0x11bef4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x11bef4) {
            ctx->pc = 0x11BEF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11BEF4u;
            // 0x11bef8: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11BF38u;
            goto label_11bf38;
        }
    }
    ctx->pc = 0x11BEFCu;
    // 0x11befc: 0x5260000e  beql        $s3, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x11BEFCu;
    {
        const bool branch_taken_0x11befc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x11befc) {
            ctx->pc = 0x11BF00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11BEFCu;
            // 0x11bf00: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11BF38u;
            goto label_11bf38;
        }
    }
    ctx->pc = 0x11BF04u;
    // 0x11bf04: 0xc04f824  jal         func_13E090
    ctx->pc = 0x11BF04u;
    SET_GPR_U32(ctx, 31, 0x11BF0Cu);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BF0Cu; }
        if (ctx->pc != 0x11BF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BF0Cu; }
        if (ctx->pc != 0x11BF0Cu) { return; }
    }
    ctx->pc = 0x11BF0Cu;
    // 0x11bf0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11bf0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bf10: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11bf10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bf14: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x11BF14u;
    SET_GPR_U32(ctx, 31, 0x11BF1Cu);
    ctx->pc = 0x11BF18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BF14u;
            // 0x11bf18: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BF1Cu; }
        if (ctx->pc != 0x11BF1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BF1Cu; }
        if (ctx->pc != 0x11BF1Cu) { return; }
    }
    ctx->pc = 0x11BF1Cu;
    // 0x11bf1c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x11bf1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bf20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11bf20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bf24: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x11bf24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bf28: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x11BF28u;
    SET_GPR_U32(ctx, 31, 0x11BF30u);
    ctx->pc = 0x11BF2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BF28u;
            // 0x11bf2c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BF30u; }
        if (ctx->pc != 0x11BF30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BF30u; }
        if (ctx->pc != 0x11BF30u) { return; }
    }
    ctx->pc = 0x11BF30u;
    // 0x11bf30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11BF30u;
    {
        const bool branch_taken_0x11bf30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BF34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BF30u;
            // 0x11bf34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bf30) {
            ctx->pc = 0x11BF3Cu;
            goto label_11bf3c;
        }
    }
    ctx->pc = 0x11BF38u;
label_11bf38:
    // 0x11bf38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11bf38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11bf3c:
    // 0x11bf3c: 0xa614000a  sh          $s4, 0xA($s0)
    ctx->pc = 0x11bf3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 20));
    // 0x11bf40: 0xa2020009  sb          $v0, 0x9($s0)
    ctx->pc = 0x11bf40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x11bf44: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11bf44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bf48: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x11bf48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11bf4c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x11bf4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11bf50: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x11bf50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11bf54: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x11bf54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11bf58: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x11bf58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11bf5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11bf5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11bf60: 0x3e00008  jr          $ra
    ctx->pc = 0x11BF60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BF64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BF60u;
            // 0x11bf64: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11BECCu: goto label_11becc;
            case 0x11BEF4u: goto label_11bef4;
            case 0x11BF38u: goto label_11bf38;
            case 0x11BF3Cu: goto label_11bf3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11BF68u;
}
