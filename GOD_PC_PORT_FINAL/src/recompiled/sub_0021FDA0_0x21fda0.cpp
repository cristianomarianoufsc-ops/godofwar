#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021FDA0
// Address: 0x21fda0 - 0x21fef0
void sub_0021FDA0_0x21fda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021FDA0_0x21fda0");
#endif

    ctx->pc = 0x21fda0u;

    // 0x21fda0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x21fda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21fda4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21fda4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21fda8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x21fda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x21fdac: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x21fdacu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x21fdb0: 0x3c13002a  lui         $s3, 0x2A
    ctx->pc = 0x21fdb0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)42 << 16));
    // 0x21fdb4: 0x8e42cc94  lw          $v0, -0x336C($s2)
    ctx->pc = 0x21fdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954132)));
    // 0x21fdb8: 0x8e63e610  lw          $v1, -0x19F0($s3)
    ctx->pc = 0x21fdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294960656)));
    // 0x21fdbc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x21fdbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x21fdc0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x21fdc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x21fdc4: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x21FDC4u;
    {
        const bool branch_taken_0x21fdc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21FDC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FDC4u;
            // 0x21fdc8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fdc4) {
            ctx->pc = 0x21FE58u;
            goto label_21fe58;
        }
    }
    ctx->pc = 0x21FDCCu;
    // 0x21fdcc: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x21fdccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x21fdd0: 0xc060e1e  jal         func_183878
    ctx->pc = 0x21FDD0u;
    SET_GPR_U32(ctx, 31, 0x21FDD8u);
    ctx->pc = 0x21FDD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FDD0u;
            // 0x21fdd4: 0x24848020  addiu       $a0, $a0, -0x7FE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183878u;
    if (runtime->hasFunction(0x183878u)) {
        auto targetFn = runtime->lookupFunction(0x183878u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FDD8u; }
        if (ctx->pc != 0x21FDD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183878_0x183948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FDD8u; }
        if (ctx->pc != 0x21FDD8u) { return; }
    }
    ctx->pc = 0x21FDD8u;
    // 0x21fdd8: 0x8e42cc94  lw          $v0, -0x336C($s2)
    ctx->pc = 0x21fdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954132)));
    // 0x21fddc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21FDDCu;
    {
        const bool branch_taken_0x21fddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FDE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FDDCu;
            // 0x21fde0: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fddc) {
            ctx->pc = 0x21FDECu;
            goto label_21fdec;
        }
    }
    ctx->pc = 0x21FDE4u;
    // 0x21fde4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21FDE4u;
    {
        const bool branch_taken_0x21fde4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FDE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FDE4u;
            // 0x21fde8: 0x2444d938  addiu       $a0, $v0, -0x26C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fde4) {
            ctx->pc = 0x21FDF4u;
            goto label_21fdf4;
        }
    }
    ctx->pc = 0x21FDECu;
label_21fdec:
    // 0x21fdec: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x21fdecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x21fdf0: 0x2444d900  addiu       $a0, $v0, -0x2700
    ctx->pc = 0x21fdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957312));
label_21fdf4:
    // 0x21fdf4: 0xc060c36  jal         func_1830D8
    ctx->pc = 0x21FDF4u;
    SET_GPR_U32(ctx, 31, 0x21FDFCu);
    ctx->pc = 0x21FDF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FDF4u;
            // 0x21fdf8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1830D8u;
    if (runtime->hasFunction(0x1830D8u)) {
        auto targetFn = runtime->lookupFunction(0x1830D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FDFCu; }
        if (ctx->pc != 0x21FDFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001830D8_0x1830d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FDFCu; }
        if (ctx->pc != 0x21FDFCu) { return; }
    }
    ctx->pc = 0x21FDFCu;
    // 0x21fdfc: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x21fdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x21fe00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21fe00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21fe04: 0xac62bfec  sw          $v0, -0x4014($v1)
    ctx->pc = 0x21fe04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950892), GPR_U32(ctx, 2));
    // 0x21fe08: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x21fe08u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x21fe0c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x21fe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x21fe10: 0x2610e848  addiu       $s0, $s0, -0x17B8
    ctx->pc = 0x21fe10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961224));
    // 0x21fe14: 0x8c441900  lw          $a0, 0x1900($v0)
    ctx->pc = 0x21fe14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6400)));
    // 0x21fe18: 0xc04f856  jal         func_13E158
    ctx->pc = 0x21FE18u;
    SET_GPR_U32(ctx, 31, 0x21FE20u);
    ctx->pc = 0x21FE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FE18u;
            // 0x21fe1c: 0x8e110030  lw          $s1, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E158u;
    if (runtime->hasFunction(0x13E158u)) {
        auto targetFn = runtime->lookupFunction(0x13E158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FE20u; }
        if (ctx->pc != 0x21FE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e158_0x13e180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FE20u; }
        if (ctx->pc != 0x21FE20u) { return; }
    }
    ctx->pc = 0x21FE20u;
    // 0x21fe20: 0xc053d40  jal         func_14F500
    ctx->pc = 0x21FE20u;
    SET_GPR_U32(ctx, 31, 0x21FE28u);
    ctx->pc = 0x21FE24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FE20u;
            // 0x21fe24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F500u;
    if (runtime->hasFunction(0x14F500u)) {
        auto targetFn = runtime->lookupFunction(0x14F500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FE28u; }
        if (ctx->pc != 0x21FE28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014F500_0x14f500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FE28u; }
        if (ctx->pc != 0x21FE28u) { return; }
    }
    ctx->pc = 0x21FE28u;
    // 0x21fe28: 0xc053a76  jal         func_14E9D8
    ctx->pc = 0x21FE28u;
    SET_GPR_U32(ctx, 31, 0x21FE30u);
    ctx->pc = 0x14E9D8u;
    if (runtime->hasFunction(0x14E9D8u)) {
        auto targetFn = runtime->lookupFunction(0x14E9D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FE30u; }
        if (ctx->pc != 0x21FE30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E9D8_0x14e9d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FE30u; }
        if (ctx->pc != 0x21FE30u) { return; }
    }
    ctx->pc = 0x21FE30u;
    // 0x21fe30: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21fe30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21fe34: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x21fe34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21fe38: 0x9445c07c  lhu         $a1, -0x3F84($v0)
    ctx->pc = 0x21fe38u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294951036)));
    // 0x21fe3c: 0xc053bfa  jal         func_14EFE8
    ctx->pc = 0x21FE3Cu;
    SET_GPR_U32(ctx, 31, 0x21FE44u);
    ctx->pc = 0x21FE40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FE3Cu;
            // 0x21fe40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14EFE8u;
    if (runtime->hasFunction(0x14EFE8u)) {
        auto targetFn = runtime->lookupFunction(0x14EFE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FE44u; }
        if (ctx->pc != 0x21FE44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014EFE8_0x14efe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FE44u; }
        if (ctx->pc != 0x21FE44u) { return; }
    }
    ctx->pc = 0x21FE44u;
    // 0x21fe44: 0xc04f860  jal         func_13E180
    ctx->pc = 0x21FE44u;
    SET_GPR_U32(ctx, 31, 0x21FE4Cu);
    ctx->pc = 0x13E180u;
    if (runtime->hasFunction(0x13E180u)) {
        auto targetFn = runtime->lookupFunction(0x13E180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FE4Cu; }
        if (ctx->pc != 0x21FE4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e180_0x13e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FE4Cu; }
        if (ctx->pc != 0x21FE4Cu) { return; }
    }
    ctx->pc = 0x21FE4Cu;
    // 0x21fe4c: 0xc057d4e  jal         func_15F538
    ctx->pc = 0x21FE4Cu;
    SET_GPR_U32(ctx, 31, 0x21FE54u);
    ctx->pc = 0x21FE50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FE4Cu;
            // 0x21fe50: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F538u;
    if (runtime->hasFunction(0x15F538u)) {
        auto targetFn = runtime->lookupFunction(0x15F538u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FE54u; }
        if (ctx->pc != 0x21FE54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_15f538_0x15f598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FE54u; }
        if (ctx->pc != 0x21FE54u) { return; }
    }
    ctx->pc = 0x21FE54u;
    // 0x21fe54: 0x0  nop
    ctx->pc = 0x21fe54u;
    // NOP
label_21fe58:
    // 0x21fe58: 0x8e42cc94  lw          $v0, -0x336C($s2)
    ctx->pc = 0x21fe58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954132)));
    // 0x21fe5c: 0xc06ca56  jal         func_1B2958
    ctx->pc = 0x21FE5Cu;
    SET_GPR_U32(ctx, 31, 0x21FE64u);
    ctx->pc = 0x21FE60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FE5Cu;
            // 0x21fe60: 0xae62e610  sw          $v0, -0x19F0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4294960656), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2958u;
    if (runtime->hasFunction(0x1B2958u)) {
        auto targetFn = runtime->lookupFunction(0x1B2958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FE64u; }
        if (ctx->pc != 0x21FE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2958_0x1b2958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FE64u; }
        if (ctx->pc != 0x21FE64u) { return; }
    }
    ctx->pc = 0x21FE64u;
    // 0x21fe64: 0xc06f174  jal         func_1BC5D0
    ctx->pc = 0x21FE64u;
    SET_GPR_U32(ctx, 31, 0x21FE6Cu);
    ctx->pc = 0x1BC5D0u;
    if (runtime->hasFunction(0x1BC5D0u)) {
        auto targetFn = runtime->lookupFunction(0x1BC5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FE6Cu; }
        if (ctx->pc != 0x21FE6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC5D0_0x1bc5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FE6Cu; }
        if (ctx->pc != 0x21FE6Cu) { return; }
    }
    ctx->pc = 0x21FE6Cu;
    // 0x21fe6c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21fe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21fe70: 0x8c43e560  lw          $v1, -0x1AA0($v0)
    ctx->pc = 0x21fe70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960480)));
    // 0x21fe74: 0x3862000b  xori        $v0, $v1, 0xB
    ctx->pc = 0x21fe74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)11);
    // 0x21fe78: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x21FE78u;
    {
        const bool branch_taken_0x21fe78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FE7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FE78u;
            // 0x21fe7c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fe78) {
            ctx->pc = 0x21FEB8u;
            goto label_21feb8;
        }
    }
    ctx->pc = 0x21FE80u;
    // 0x21fe80: 0x8c42e578  lw          $v0, -0x1A88($v0)
    ctx->pc = 0x21fe80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960504)));
    // 0x21fe84: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x21FE84u;
    {
        const bool branch_taken_0x21fe84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FE88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FE84u;
            // 0x21fe88: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fe84) {
            ctx->pc = 0x21FEBCu;
            goto label_21febc;
        }
    }
    ctx->pc = 0x21FE8Cu;
    // 0x21fe8c: 0x3862000d  xori        $v0, $v1, 0xD
    ctx->pc = 0x21fe8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)13);
    // 0x21fe90: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21FE90u;
    {
        const bool branch_taken_0x21fe90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FE90u;
            // 0x21fe94: 0x3862000e  xori        $v0, $v1, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)14);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fe90) {
            ctx->pc = 0x21FEB8u;
            goto label_21feb8;
        }
    }
    ctx->pc = 0x21FE98u;
    // 0x21fe98: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21FE98u;
    {
        const bool branch_taken_0x21fe98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FE98u;
            // 0x21fe9c: 0x3862000c  xori        $v0, $v1, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fe98) {
            ctx->pc = 0x21FEB8u;
            goto label_21feb8;
        }
    }
    ctx->pc = 0x21FEA0u;
    // 0x21fea0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21FEA0u;
    {
        const bool branch_taken_0x21fea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FEA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FEA0u;
            // 0x21fea4: 0x38620012  xori        $v0, $v1, 0x12 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)18);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fea0) {
            ctx->pc = 0x21FEB8u;
            goto label_21feb8;
        }
    }
    ctx->pc = 0x21FEA8u;
    // 0x21fea8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21FEA8u;
    {
        const bool branch_taken_0x21fea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FEACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FEA8u;
            // 0x21feac: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fea8) {
            ctx->pc = 0x21FEB8u;
            goto label_21feb8;
        }
    }
    ctx->pc = 0x21FEB0u;
    // 0x21feb0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21FEB0u;
    {
        const bool branch_taken_0x21feb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FEB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FEB0u;
            // 0x21feb4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21feb0) {
            ctx->pc = 0x21FED4u;
            goto label_21fed4;
        }
    }
    ctx->pc = 0x21FEB8u;
label_21feb8:
    // 0x21feb8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21feb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_21febc:
    // 0x21febc: 0x8c44cd58  lw          $a0, -0x32A8($v0)
    ctx->pc = 0x21febcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x21fec0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21FEC0u;
    {
        const bool branch_taken_0x21fec0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FEC0u;
            // 0x21fec4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fec0) {
            ctx->pc = 0x21FED4u;
            goto label_21fed4;
        }
    }
    ctx->pc = 0x21FEC8u;
    // 0x21fec8: 0xc075b34  jal         func_1D6CD0
    ctx->pc = 0x21FEC8u;
    SET_GPR_U32(ctx, 31, 0x21FED0u);
    ctx->pc = 0x1D6CD0u;
    if (runtime->hasFunction(0x1D6CD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FED0u; }
        if (ctx->pc != 0x21FED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6CD0_0x1d6cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FED0u; }
        if (ctx->pc != 0x21FED0u) { return; }
    }
    ctx->pc = 0x21FED0u;
    // 0x21fed0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x21fed0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_21fed4:
    // 0x21fed4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21fed4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fed8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x21fed8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21fedc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21fedcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21fee0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x21fee0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21fee4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21fee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21fee8: 0x3e00008  jr          $ra
    ctx->pc = 0x21FEE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FEECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FEE8u;
            // 0x21feec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21FDECu: goto label_21fdec;
            case 0x21FDF4u: goto label_21fdf4;
            case 0x21FE58u: goto label_21fe58;
            case 0x21FEB8u: goto label_21feb8;
            case 0x21FEBCu: goto label_21febc;
            case 0x21FED4u: goto label_21fed4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21FEF0u;
}
