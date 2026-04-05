#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011FC28
// Address: 0x11fc28 - 0x11fea0
void sub_0011FC28_0x11fc28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011FC28_0x11fc28");
#endif

    ctx->pc = 0x11fc28u;

label_11fc28:
    // 0x11fc28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11fc28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11fc2c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x11fc2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fc30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11fc30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11fc34: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x11fc34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x11fc38: 0xc047e64  jal         func_11F990
    ctx->pc = 0x11FC38u;
    SET_GPR_U32(ctx, 31, 0x11FC40u);
    ctx->pc = 0x11FC3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11FC38u;
            // 0x11fc3c: 0x8c44e89c  lw          $a0, -0x1764($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961308)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F990u;
    if (runtime->hasFunction(0x11F990u)) {
        auto targetFn = runtime->lookupFunction(0x11F990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FC40u; }
        if (ctx->pc != 0x11FC40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11f990_0x11f9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FC40u; }
        if (ctx->pc != 0x11FC40u) { return; }
    }
    ctx->pc = 0x11FC40u;
    // 0x11fc40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11fc40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11fc44: 0x3e00008  jr          $ra
    ctx->pc = 0x11FC44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FC44u;
            // 0x11fc48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11FC28u: goto label_11fc28;
            case 0x11FCF8u: goto label_11fcf8;
            case 0x11FD14u: goto label_11fd14;
            case 0x11FD30u: goto label_11fd30;
            case 0x11FD4Cu: goto label_11fd4c;
            case 0x11FD54u: goto label_11fd54;
            case 0x11FD70u: goto label_11fd70;
            case 0x11FD94u: goto label_11fd94;
            case 0x11FDB0u: goto label_11fdb0;
            case 0x11FDF0u: goto label_11fdf0;
            case 0x11FE30u: goto label_11fe30;
            case 0x11FE4Cu: goto label_11fe4c;
            case 0x11FE7Cu: goto label_11fe7c;
            case 0x11FE80u: goto label_11fe80;
            case 0x11FE84u: goto label_11fe84;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11FC4Cu;
    // 0x11fc4c: 0x0  nop
    ctx->pc = 0x11fc4cu;
    // NOP
    // 0x11fc50: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x11fc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x11fc54: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x11fc54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x11fc58: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x11fc58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x11fc5c: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x11fc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x11fc60: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x11fc60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x11fc64: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x11fc64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x11fc68: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x11fc68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x11fc6c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x11fc6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11fc70: 0x8c52f190  lw          $s2, -0xE70($v0)
    ctx->pc = 0x11fc70u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963600)));
    // 0x11fc74: 0x8c7377b4  lw          $s3, 0x77B4($v1)
    ctx->pc = 0x11fc74u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 30644)));
    // 0x11fc78: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x11fc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x11fc7c: 0x8e6300f4  lw          $v1, 0xF4($s3)
    ctx->pc = 0x11fc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 244)));
    // 0x11fc80: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x11fc80u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x11fc84: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x11fc84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x11fc88: 0x1460007e  bnez        $v1, . + 4 + (0x7E << 2)
    ctx->pc = 0x11FC88u;
    {
        const bool branch_taken_0x11fc88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FC88u;
            // 0x11fc8c: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fc88) {
            ctx->pc = 0x11FE84u;
            goto label_11fe84;
        }
    }
    ctx->pc = 0x11FC90u;
    // 0x11fc90: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x11fc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x11fc94: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x11fc94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x11fc98: 0x5040006c  beql        $v0, $zero, . + 4 + (0x6C << 2)
    ctx->pc = 0x11FC98u;
    {
        const bool branch_taken_0x11fc98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11fc98) {
            ctx->pc = 0x11FC9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11FC98u;
            // 0x11fc9c: 0x8e450010  lw          $a1, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11FE4Cu;
            goto label_11fe4c;
        }
    }
    ctx->pc = 0x11FCA0u;
    // 0x11fca0: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x11fca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x11fca4: 0x5440002b  bnel        $v0, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x11FCA4u;
    {
        const bool branch_taken_0x11fca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11fca4) {
            ctx->pc = 0x11FCA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11FCA4u;
            // 0x11fca8: 0x8e430014  lw          $v1, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11FD54u;
            goto label_11fd54;
        }
    }
    ctx->pc = 0x11FCACu;
    // 0x11fcac: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x11FCACu;
    SET_GPR_U32(ctx, 31, 0x11FCB4u);
    ctx->pc = 0x11FCB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11FCACu;
            // 0x11fcb0: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FCB4u; }
        if (ctx->pc != 0x11FCB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FCB4u; }
        if (ctx->pc != 0x11FCB4u) { return; }
    }
    ctx->pc = 0x11FCB4u;
    // 0x11fcb4: 0xc04f824  jal         func_13E090
    ctx->pc = 0x11FCB4u;
    SET_GPR_U32(ctx, 31, 0x11FCBCu);
    ctx->pc = 0x11FCB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11FCB4u;
            // 0x11fcb8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FCBCu; }
        if (ctx->pc != 0x11FCBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FCBCu; }
        if (ctx->pc != 0x11FCBCu) { return; }
    }
    ctx->pc = 0x11FCBCu;
    // 0x11fcbc: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x11fcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x11fcc0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x11fcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x11fcc4: 0x2463e840  addiu       $v1, $v1, -0x17C0
    ctx->pc = 0x11fcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961216));
    // 0x11fcc8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x11fcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x11fccc: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x11fcccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x11fcd0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x11fcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x11fcd4: 0xc04f824  jal         func_13E090
    ctx->pc = 0x11FCD4u;
    SET_GPR_U32(ctx, 31, 0x11FCDCu);
    ctx->pc = 0x11FCD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11FCD4u;
            // 0x11fcd8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FCDCu; }
        if (ctx->pc != 0x11FCDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FCDCu; }
        if (ctx->pc != 0x11FCDCu) { return; }
    }
    ctx->pc = 0x11FCDCu;
    // 0x11fcdc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11fcdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fce0: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x11FCE0u;
    {
        const bool branch_taken_0x11fce0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FCE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FCE0u;
            // 0x11fce4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fce0) {
            ctx->pc = 0x11FD14u;
            goto label_11fd14;
        }
    }
    ctx->pc = 0x11FCE8u;
    // 0x11fce8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x11fce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x11fcec: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x11FCECu;
    {
        const bool branch_taken_0x11fcec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FCF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FCECu;
            // 0x11fcf0: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fcec) {
            ctx->pc = 0x11FCF8u;
            goto label_11fcf8;
        }
    }
    ctx->pc = 0x11FCF4u;
    // 0x11fcf4: 0x8c44f198  lw          $a0, -0xE68($v0)
    ctx->pc = 0x11fcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963608)));
label_11fcf8:
    // 0x11fcf8: 0xc04f830  jal         func_13E0C0
    ctx->pc = 0x11FCF8u;
    SET_GPR_U32(ctx, 31, 0x11FD00u);
    ctx->pc = 0x13E0C0u;
    if (runtime->hasFunction(0x13E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FD00u; }
        if (ctx->pc != 0x11FD00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e0c0_0x13e158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FD00u; }
        if (ctx->pc != 0x11FD00u) { return; }
    }
    ctx->pc = 0x11FD00u;
    // 0x11fd00: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11FD00u;
    {
        const bool branch_taken_0x11fd00 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FD04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FD00u;
            // 0x11fd04: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fd00) {
            ctx->pc = 0x11FD14u;
            goto label_11fd14;
        }
    }
    ctx->pc = 0x11FD08u;
    // 0x11fd08: 0xc04f830  jal         func_13E0C0
    ctx->pc = 0x11FD08u;
    SET_GPR_U32(ctx, 31, 0x11FD10u);
    ctx->pc = 0x11FD0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11FD08u;
            // 0x11fd0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E0C0u;
    if (runtime->hasFunction(0x13E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FD10u; }
        if (ctx->pc != 0x11FD10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e0c0_0x13e158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FD10u; }
        if (ctx->pc != 0x11FD10u) { return; }
    }
    ctx->pc = 0x11FD10u;
    // 0x11fd10: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11fd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_11fd14:
    // 0x11fd14: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x11fd14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x11fd18: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x11fd18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fd1c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x11fd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x11fd20: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x11FD20u;
    {
        const bool branch_taken_0x11fd20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FD24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FD20u;
            // 0x11fd24: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fd20) {
            ctx->pc = 0x11FD4Cu;
            goto label_11fd4c;
        }
    }
    ctx->pc = 0x11FD28u;
    // 0x11fd28: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x11fd28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11fd2c: 0x0  nop
    ctx->pc = 0x11fd2cu;
    // NOP
label_11fd30:
    // 0x11fd30: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11fd30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11fd34: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x11fd34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x11fd38: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x11fd38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x11fd3c: 0x0  nop
    ctx->pc = 0x11fd3cu;
    // NOP
    // 0x11fd40: 0x0  nop
    ctx->pc = 0x11fd40u;
    // NOP
    // 0x11fd44: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11FD44u;
    {
        const bool branch_taken_0x11fd44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FD48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FD44u;
            // 0x11fd48: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fd44) {
            ctx->pc = 0x11FD30u;
            runtime->cooperativeGuestYield();
            goto label_11fd30;
        }
    }
    ctx->pc = 0x11FD4Cu;
label_11fd4c:
    // 0x11fd4c: 0xae500014  sw          $s0, 0x14($s2)
    ctx->pc = 0x11fd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 16));
    // 0x11fd50: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x11fd50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_11fd54:
    // 0x11fd54: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11fd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11fd58: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x11fd58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x11fd5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11fd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11fd60: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x11fd60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11fd64: 0x1086000b  beq         $a0, $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x11FD64u;
    {
        const bool branch_taken_0x11fd64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x11FD68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FD64u;
            // 0x11fd68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fd64) {
            ctx->pc = 0x11FD94u;
            goto label_11fd94;
        }
    }
    ctx->pc = 0x11FD6Cu;
    // 0x11fd6c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x11fd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11fd70:
    // 0x11fd70: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x11fd70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x11fd74: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x11fd74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x11fd78: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x11fd78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x11fd7c: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x11fd7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x11fd80: 0xb31026  xor         $v0, $a1, $s3
    ctx->pc = 0x11fd80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 19));
    // 0x11fd84: 0x10860003  beq         $a0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x11FD84u;
    {
        const bool branch_taken_0x11fd84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x11FD88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FD84u;
            // 0x11fd88: 0x2c450001  sltiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fd84) {
            ctx->pc = 0x11FD94u;
            goto label_11fd94;
        }
    }
    ctx->pc = 0x11FD8Cu;
    // 0x11fd8c: 0x50a0fff8  beql        $a1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11FD8Cu;
    {
        const bool branch_taken_0x11fd8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x11fd8c) {
            ctx->pc = 0x11FD90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11FD8Cu;
            // 0x11fd90: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11FD70u;
            runtime->cooperativeGuestYield();
            goto label_11fd70;
        }
    }
    ctx->pc = 0x11FD94u;
label_11fd94:
    // 0x11fd94: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11FD94u;
    {
        const bool branch_taken_0x11fd94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FD98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FD94u;
            // 0x11fd98: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fd94) {
            ctx->pc = 0x11FDB0u;
            goto label_11fdb0;
        }
    }
    ctx->pc = 0x11FD9Cu;
    // 0x11fd9c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x11fd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x11fda0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x11fda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11fda4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11fda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11fda8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x11FDA8u;
    {
        const bool branch_taken_0x11fda8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FDACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FDA8u;
            // 0x11fdac: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fda8) {
            ctx->pc = 0x11FE80u;
            goto label_11fe80;
        }
    }
    ctx->pc = 0x11FDB0u;
label_11fdb0:
    // 0x11fdb0: 0x9242001c  lbu         $v0, 0x1C($s2)
    ctx->pc = 0x11fdb0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x11fdb4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x11fdb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x11fdb8: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x11FDB8u;
    {
        const bool branch_taken_0x11fdb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11fdb8) {
            ctx->pc = 0x11FDBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11FDB8u;
            // 0x11fdbc: 0x8e500014  lw          $s0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11FDF0u;
            goto label_11fdf0;
        }
    }
    ctx->pc = 0x11FDC0u;
    // 0x11fdc0: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x11fdc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x11fdc4: 0x24020077  addiu       $v0, $zero, 0x77
    ctx->pc = 0x11fdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    // 0x11fdc8: 0xa7a20000  sh          $v0, 0x0($sp)
    ctx->pc = 0x11fdc8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x11fdcc: 0xafb20004  sw          $s2, 0x4($sp)
    ctx->pc = 0x11fdccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 18));
    // 0x11fdd0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x11fdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x11fdd4: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x11fdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x11fdd8: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x11fdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x11fddc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x11fddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x11fde0: 0x8c44e89c  lw          $a0, -0x1764($v0)
    ctx->pc = 0x11fde0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961308)));
    // 0x11fde4: 0xc047d6a  jal         func_11F5A8
    ctx->pc = 0x11FDE4u;
    SET_GPR_U32(ctx, 31, 0x11FDECu);
    ctx->pc = 0x11FDE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11FDE4u;
            // 0x11fde8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F5A8u;
    if (runtime->hasFunction(0x11F5A8u)) {
        auto targetFn = runtime->lookupFunction(0x11F5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FDECu; }
        if (ctx->pc != 0x11FDECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11f5a8_0x11f5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FDECu; }
        if (ctx->pc != 0x11FDECu) { return; }
    }
    ctx->pc = 0x11FDECu;
    // 0x11fdec: 0x8e500014  lw          $s0, 0x14($s2)
    ctx->pc = 0x11fdecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_11fdf0:
    // 0x11fdf0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x11fdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x11fdf4: 0x2628825  or          $s1, $s3, $v0
    ctx->pc = 0x11fdf4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x11fdf8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x11fdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11fdfc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x11fdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x11fe00: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x11fe00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x11fe04: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x11FE04u;
    {
        const bool branch_taken_0x11fe04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11fe04) {
            ctx->pc = 0x11FE08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11FE04u;
            // 0x11fe08: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11FE30u;
            goto label_11fe30;
        }
    }
    ctx->pc = 0x11FE0Cu;
    // 0x11fe0c: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x11fe0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x11fe10: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x11FE10u;
    {
        const bool branch_taken_0x11fe10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x11fe10) {
            ctx->pc = 0x11FE14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11FE10u;
            // 0x11fe14: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11FE30u;
            goto label_11fe30;
        }
    }
    ctx->pc = 0x11FE18u;
    // 0x11fe18: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x11fe18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x11fe1c: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x11fe1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x11fe20: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x11fe20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x11fe24: 0x40f809  jalr        $v0
    ctx->pc = 0x11FE24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11FE2Cu);
        ctx->pc = 0x11FE28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FE24u;
            // 0x11fe28: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11FE2Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11FC28u: goto label_11fc28;
            case 0x11FCF8u: goto label_11fcf8;
            case 0x11FD14u: goto label_11fd14;
            case 0x11FD30u: goto label_11fd30;
            case 0x11FD4Cu: goto label_11fd4c;
            case 0x11FD54u: goto label_11fd54;
            case 0x11FD70u: goto label_11fd70;
            case 0x11FD94u: goto label_11fd94;
            case 0x11FDB0u: goto label_11fdb0;
            case 0x11FDF0u: goto label_11fdf0;
            case 0x11FE30u: goto label_11fe30;
            case 0x11FE4Cu: goto label_11fe4c;
            case 0x11FE7Cu: goto label_11fe7c;
            case 0x11FE80u: goto label_11fe80;
            case 0x11FE84u: goto label_11fe84;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11FE2Cu; }
            if (ctx->pc != 0x11FE2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x11FE2Cu;
    // 0x11fe2c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x11fe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_11fe30:
    // 0x11fe30: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x11fe30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x11fe34: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x11fe34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11fe38: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x11fe38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11fe3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11fe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11fe40: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x11fe40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x11fe44: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x11FE44u;
    {
        const bool branch_taken_0x11fe44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FE44u;
            // 0x11fe48: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fe44) {
            ctx->pc = 0x11FE80u;
            goto label_11fe80;
        }
    }
    ctx->pc = 0x11FE4Cu;
label_11fe4c:
    // 0x11fe4c: 0x24020077  addiu       $v0, $zero, 0x77
    ctx->pc = 0x11fe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    // 0x11fe50: 0xa7a20020  sh          $v0, 0x20($sp)
    ctx->pc = 0x11fe50u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x11fe54: 0xafb30030  sw          $s3, 0x30($sp)
    ctx->pc = 0x11fe54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 19));
    // 0x11fe58: 0xafb20024  sw          $s2, 0x24($sp)
    ctx->pc = 0x11fe58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 18));
    // 0x11fe5c: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x11fe5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x11fe60: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x11fe60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x11fe64: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x11fe64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x11fe68: 0x8c44e89c  lw          $a0, -0x1764($v0)
    ctx->pc = 0x11fe68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961308)));
    // 0x11fe6c: 0xc047d6a  jal         func_11F5A8
    ctx->pc = 0x11FE6Cu;
    SET_GPR_U32(ctx, 31, 0x11FE74u);
    ctx->pc = 0x11FE70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11FE6Cu;
            // 0x11fe70: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F5A8u;
    if (runtime->hasFunction(0x11F5A8u)) {
        auto targetFn = runtime->lookupFunction(0x11F5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FE74u; }
        if (ctx->pc != 0x11FE74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11f5a8_0x11f5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FE74u; }
        if (ctx->pc != 0x11FE74u) { return; }
    }
    ctx->pc = 0x11FE74u;
    // 0x11fe74: 0xc047f0a  jal         func_11FC28
    ctx->pc = 0x11FE74u;
    SET_GPR_U32(ctx, 31, 0x11FE7Cu);
    ctx->pc = 0x11FE78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11FE74u;
            // 0x11fe78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11FC28u;
    runtime->cooperativeGuestYield();
    goto label_11fc28;
    ctx->pc = 0x11FE7Cu;
label_11fe7c:
    // 0x11fe7c: 0x0  nop
    ctx->pc = 0x11fe7cu;
    // NOP
label_11fe80:
    // 0x11fe80: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x11fe80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_11fe84:
    // 0x11fe84: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x11fe84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11fe88: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x11fe88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11fe8c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x11fe8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11fe90: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x11fe90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11fe94: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11fe94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11fe98: 0x3e00008  jr          $ra
    ctx->pc = 0x11FE98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FE98u;
            // 0x11fe9c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11FC28u: goto label_11fc28;
            case 0x11FCF8u: goto label_11fcf8;
            case 0x11FD14u: goto label_11fd14;
            case 0x11FD30u: goto label_11fd30;
            case 0x11FD4Cu: goto label_11fd4c;
            case 0x11FD54u: goto label_11fd54;
            case 0x11FD70u: goto label_11fd70;
            case 0x11FD94u: goto label_11fd94;
            case 0x11FDB0u: goto label_11fdb0;
            case 0x11FDF0u: goto label_11fdf0;
            case 0x11FE30u: goto label_11fe30;
            case 0x11FE4Cu: goto label_11fe4c;
            case 0x11FE7Cu: goto label_11fe7c;
            case 0x11FE80u: goto label_11fe80;
            case 0x11FE84u: goto label_11fe84;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11FEA0u;
}
