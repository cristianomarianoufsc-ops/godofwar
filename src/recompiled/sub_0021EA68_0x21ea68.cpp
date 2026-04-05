#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021EA68
// Address: 0x21ea68 - 0x21eb70
void sub_0021EA68_0x21ea68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021EA68_0x21ea68");
#endif

    ctx->pc = 0x21ea68u;

    // 0x21ea68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21ea68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21ea6c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x21ea6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x21ea70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21ea70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21ea74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21ea74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21ea78: 0xc08757e  jal         func_21D5F8
    ctx->pc = 0x21EA78u;
    SET_GPR_U32(ctx, 31, 0x21EA80u);
    ctx->pc = 0x21EA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21EA78u;
            // 0x21ea7c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D5F8u;
    if (runtime->hasFunction(0x21D5F8u)) {
        auto targetFn = runtime->lookupFunction(0x21D5F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EA80u; }
        if (ctx->pc != 0x21EA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021D5F8_0x21d5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EA80u; }
        if (ctx->pc != 0x21EA80u) { return; }
    }
    ctx->pc = 0x21EA80u;
    // 0x21ea80: 0xc06ef24  jal         func_1BBC90
    ctx->pc = 0x21EA80u;
    SET_GPR_U32(ctx, 31, 0x21EA88u);
    ctx->pc = 0x1BBC90u;
    if (runtime->hasFunction(0x1BBC90u)) {
        auto targetFn = runtime->lookupFunction(0x1BBC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EA88u; }
        if (ctx->pc != 0x21EA88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1bbc90_0x1bbca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EA88u; }
        if (ctx->pc != 0x21EA88u) { return; }
    }
    ctx->pc = 0x21EA88u;
    // 0x21ea88: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x21EA88u;
    {
        const bool branch_taken_0x21ea88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EA8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EA88u;
            // 0x21ea8c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ea88) {
            ctx->pc = 0x21EB5Cu;
            goto label_21eb5c;
        }
    }
    ctx->pc = 0x21EA90u;
    // 0x21ea90: 0xc06eecc  jal         func_1BBB30
    ctx->pc = 0x21EA90u;
    SET_GPR_U32(ctx, 31, 0x21EA98u);
    ctx->pc = 0x21EA94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21EA90u;
            // 0x21ea94: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BBB30u;
    if (runtime->hasFunction(0x1BBB30u)) {
        auto targetFn = runtime->lookupFunction(0x1BBB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EA98u; }
        if (ctx->pc != 0x21EA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBB30_0x1bbb30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EA98u; }
        if (ctx->pc != 0x21EA98u) { return; }
    }
    ctx->pc = 0x21EA98u;
    // 0x21ea98: 0xc06eee8  jal         func_1BBBA0
    ctx->pc = 0x21EA98u;
    SET_GPR_U32(ctx, 31, 0x21EAA0u);
    ctx->pc = 0x21EA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21EA98u;
            // 0x21ea9c: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BBBA0u;
    if (runtime->hasFunction(0x1BBBA0u)) {
        auto targetFn = runtime->lookupFunction(0x1BBBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EAA0u; }
        if (ctx->pc != 0x21EAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBBA0_0x1bbba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EAA0u; }
        if (ctx->pc != 0x21EAA0u) { return; }
    }
    ctx->pc = 0x21EAA0u;
    // 0x21eaa0: 0xc06af38  jal         func_1ABCE0
    ctx->pc = 0x21EAA0u;
    SET_GPR_U32(ctx, 31, 0x21EAA8u);
    ctx->pc = 0x1ABCE0u;
    if (runtime->hasFunction(0x1ABCE0u)) {
        auto targetFn = runtime->lookupFunction(0x1ABCE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EAA8u; }
        if (ctx->pc != 0x21EAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ABCE0_0x1abce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EAA8u; }
        if (ctx->pc != 0x21EAA8u) { return; }
    }
    ctx->pc = 0x21EAA8u;
    // 0x21eaa8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21eaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21eaac: 0xc06efb0  jal         func_1BBEC0
    ctx->pc = 0x21EAACu;
    SET_GPR_U32(ctx, 31, 0x21EAB4u);
    ctx->pc = 0x21EAB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21EAACu;
            // 0x21eab0: 0xac51cb04  sw          $s1, -0x34FC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294953732), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BBEC0u;
    if (runtime->hasFunction(0x1BBEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1BBEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EAB4u; }
        if (ctx->pc != 0x21EAB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBEC0_0x1bbec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EAB4u; }
        if (ctx->pc != 0x21EAB4u) { return; }
    }
    ctx->pc = 0x21EAB4u;
    // 0x21eab4: 0xc06ef42  jal         func_1BBD08
    ctx->pc = 0x21EAB4u;
    SET_GPR_U32(ctx, 31, 0x21EABCu);
    ctx->pc = 0x21EAB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21EAB4u;
            // 0x21eab8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BBD08u;
    if (runtime->hasFunction(0x1BBD08u)) {
        auto targetFn = runtime->lookupFunction(0x1BBD08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EABCu; }
        if (ctx->pc != 0x21EABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBD08_0x1bbd08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EABCu; }
        if (ctx->pc != 0x21EABCu) { return; }
    }
    ctx->pc = 0x21EABCu;
    // 0x21eabc: 0xc06ef28  jal         func_1BBCA0
    ctx->pc = 0x21EABCu;
    SET_GPR_U32(ctx, 31, 0x21EAC4u);
    ctx->pc = 0x1BBCA0u;
    if (runtime->hasFunction(0x1BBCA0u)) {
        auto targetFn = runtime->lookupFunction(0x1BBCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EAC4u; }
        if (ctx->pc != 0x21EAC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBCA0_0x1bbca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EAC4u; }
        if (ctx->pc != 0x21EAC4u) { return; }
    }
    ctx->pc = 0x21EAC4u;
    // 0x21eac4: 0x8e02e55c  lw          $v0, -0x1AA4($s0)
    ctx->pc = 0x21eac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960476)));
    // 0x21eac8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21EAC8u;
    {
        const bool branch_taken_0x21eac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EAC8u;
            // 0x21eacc: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eac8) {
            ctx->pc = 0x21EADCu;
            goto label_21eadc;
        }
    }
    ctx->pc = 0x21EAD0u;
    // 0x21ead0: 0xc06f77a  jal         func_1BDDE8
    ctx->pc = 0x21EAD0u;
    SET_GPR_U32(ctx, 31, 0x21EAD8u);
    ctx->pc = 0x21EAD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21EAD0u;
            // 0x21ead4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BDDE8u;
    if (runtime->hasFunction(0x1BDDE8u)) {
        auto targetFn = runtime->lookupFunction(0x1BDDE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EAD8u; }
        if (ctx->pc != 0x21EAD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BDDE8_0x1bdde8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EAD8u; }
        if (ctx->pc != 0x21EAD8u) { return; }
    }
    ctx->pc = 0x21EAD8u;
    // 0x21ead8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x21ead8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_21eadc:
    // 0x21eadc: 0x3c01c61c  lui         $at, 0xC61C
    ctx->pc = 0x21eadcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50716 << 16));
    // 0x21eae0: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x21eae0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
    // 0x21eae4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21eae4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21eae8: 0xc083068  jal         func_20C1A0
    ctx->pc = 0x21EAE8u;
    SET_GPR_U32(ctx, 31, 0x21EAF0u);
    ctx->pc = 0x21EAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21EAE8u;
            // 0x21eaec: 0xac514f50  sw          $s1, 0x4F50($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20304), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20C1A0u;
    if (runtime->hasFunction(0x20C1A0u)) {
        auto targetFn = runtime->lookupFunction(0x20C1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EAF0u; }
        if (ctx->pc != 0x21EAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020C1A0_0x20c1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EAF0u; }
        if (ctx->pc != 0x21EAF0u) { return; }
    }
    ctx->pc = 0x21EAF0u;
    // 0x21eaf0: 0xc087778  jal         func_21DDE0
    ctx->pc = 0x21EAF0u;
    SET_GPR_U32(ctx, 31, 0x21EAF8u);
    ctx->pc = 0x21DDE0u;
    if (runtime->hasFunction(0x21DDE0u)) {
        auto targetFn = runtime->lookupFunction(0x21DDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EAF8u; }
        if (ctx->pc != 0x21EAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021DDE0_0x21dde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EAF8u; }
        if (ctx->pc != 0x21EAF8u) { return; }
    }
    ctx->pc = 0x21EAF8u;
    // 0x21eaf8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21eaf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21eafc: 0xc05d452  jal         func_175148
    ctx->pc = 0x21EAFCu;
    SET_GPR_U32(ctx, 31, 0x21EB04u);
    ctx->pc = 0x21EB00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21EAFCu;
            // 0x21eb00: 0x24057fff  addiu       $a1, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175148u;
    if (runtime->hasFunction(0x175148u)) {
        auto targetFn = runtime->lookupFunction(0x175148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EB04u; }
        if (ctx->pc != 0x21EB04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175148_0x175148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EB04u; }
        if (ctx->pc != 0x21EB04u) { return; }
    }
    ctx->pc = 0x21EB04u;
    // 0x21eb04: 0x8e02e55c  lw          $v0, -0x1AA4($s0)
    ctx->pc = 0x21eb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960476)));
    // 0x21eb08: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x21EB08u;
    {
        const bool branch_taken_0x21eb08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EB0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EB08u;
            // 0x21eb0c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eb08) {
            ctx->pc = 0x21EB3Cu;
            goto label_21eb3c;
        }
    }
    ctx->pc = 0x21EB10u;
    // 0x21eb10: 0x8c4212cc  lw          $v0, 0x12CC($v0)
    ctx->pc = 0x21eb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4812)));
    // 0x21eb14: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x21EB14u;
    {
        const bool branch_taken_0x21eb14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EB18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EB14u;
            // 0x21eb18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eb14) {
            ctx->pc = 0x21EB40u;
            goto label_21eb40;
        }
    }
    ctx->pc = 0x21EB1Cu;
    // 0x21eb1c: 0xc08bc34  jal         func_22F0D0
    ctx->pc = 0x21EB1Cu;
    SET_GPR_U32(ctx, 31, 0x21EB24u);
    ctx->pc = 0x22F0D0u;
    if (runtime->hasFunction(0x22F0D0u)) {
        auto targetFn = runtime->lookupFunction(0x22F0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EB24u; }
        if (ctx->pc != 0x21EB24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022F0D0_0x22f0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EB24u; }
        if (ctx->pc != 0x21EB24u) { return; }
    }
    ctx->pc = 0x21EB24u;
    // 0x21eb24: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21eb24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21eb28: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x21eb28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21eb2c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x21eb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x21eb30: 0xac40e5a0  sw          $zero, -0x1A60($v0)
    ctx->pc = 0x21eb30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960544), GPR_U32(ctx, 0));
    // 0x21eb34: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x21EB34u;
    {
        const bool branch_taken_0x21eb34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EB38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EB34u;
            // 0x21eb38: 0xac64e560  sw          $a0, -0x1AA0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960480), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eb34) {
            ctx->pc = 0x21EB54u;
            goto label_21eb54;
        }
    }
    ctx->pc = 0x21EB3Cu;
label_21eb3c:
    // 0x21eb3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21eb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21eb40:
    // 0x21eb40: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x21eb40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x21eb44: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x21eb44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21eb48: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21eb48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21eb4c: 0xac65f1f0  sw          $a1, -0xE10($v1)
    ctx->pc = 0x21eb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963696), GPR_U32(ctx, 5));
    // 0x21eb50: 0xac44e560  sw          $a0, -0x1AA0($v0)
    ctx->pc = 0x21eb50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960480), GPR_U32(ctx, 4));
label_21eb54:
    // 0x21eb54: 0xae00e55c  sw          $zero, -0x1AA4($s0)
    ctx->pc = 0x21eb54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294960476), GPR_U32(ctx, 0));
    // 0x21eb58: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x21eb58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21eb5c:
    // 0x21eb5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21eb5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21eb60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21eb60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21eb64: 0x3e00008  jr          $ra
    ctx->pc = 0x21EB64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21EB68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EB64u;
            // 0x21eb68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21EADCu: goto label_21eadc;
            case 0x21EB3Cu: goto label_21eb3c;
            case 0x21EB40u: goto label_21eb40;
            case 0x21EB54u: goto label_21eb54;
            case 0x21EB5Cu: goto label_21eb5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21EB6Cu;
    // 0x21eb6c: 0x0  nop
    ctx->pc = 0x21eb6cu;
    // NOP
}
