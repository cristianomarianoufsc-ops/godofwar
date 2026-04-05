#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001309C0
// Address: 0x1309c0 - 0x130d28
void sub_001309C0_0x1309c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001309C0_0x1309c0");
#endif

    ctx->pc = 0x1309c0u;

    // 0x1309c0: 0x27bdfd30  addiu       $sp, $sp, -0x2D0
    ctx->pc = 0x1309c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966576));
    // 0x1309c4: 0x7fb30280  sq          $s3, 0x280($sp)
    ctx->pc = 0x1309c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 19));
    // 0x1309c8: 0x7fbe0230  sq          $fp, 0x230($sp)
    ctx->pc = 0x1309c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 30));
    // 0x1309cc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1309ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1309d0: 0x7fb002b0  sq          $s0, 0x2B0($sp)
    ctx->pc = 0x1309d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 16));
    // 0x1309d4: 0x7fb102a0  sq          $s1, 0x2A0($sp)
    ctx->pc = 0x1309d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 17));
    // 0x1309d8: 0x7fb20290  sq          $s2, 0x290($sp)
    ctx->pc = 0x1309d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 18));
    // 0x1309dc: 0x7fb40270  sq          $s4, 0x270($sp)
    ctx->pc = 0x1309dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 20));
    // 0x1309e0: 0x7fb50260  sq          $s5, 0x260($sp)
    ctx->pc = 0x1309e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 21));
    // 0x1309e4: 0x7fb70240  sq          $s7, 0x240($sp)
    ctx->pc = 0x1309e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 23));
    // 0x1309e8: 0xffbf0220  sd          $ra, 0x220($sp)
    ctx->pc = 0x1309e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 31));
    // 0x1309ec: 0xe7b402c0  swc1        $f20, 0x2C0($sp)
    ctx->pc = 0x1309ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 704), bits); }
    // 0x1309f0: 0x7fb60250  sq          $s6, 0x250($sp)
    ctx->pc = 0x1309f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 22));
    // 0x1309f4: 0x8e76001c  lw          $s6, 0x1C($s3)
    ctx->pc = 0x1309f4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1309f8: 0xae6000f4  sw          $zero, 0xF4($s3)
    ctx->pc = 0x1309f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 244), GPR_U32(ctx, 0));
    // 0x1309fc: 0xae600108  sw          $zero, 0x108($s3)
    ctx->pc = 0x1309fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 264), GPR_U32(ctx, 0));
    // 0x130a00: 0xae60010c  sw          $zero, 0x10C($s3)
    ctx->pc = 0x130a00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 0));
    // 0x130a04: 0x96c20002  lhu         $v0, 0x2($s6)
    ctx->pc = 0x130a04u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x130a08: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x130a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x130a0c: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x130a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x130a10: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x130A10u;
    {
        const bool branch_taken_0x130a10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x130A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130A10u;
            // 0x130a14: 0xa0f02d  daddu       $fp, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130a10) {
            ctx->pc = 0x130A20u;
            goto label_130a20;
        }
    }
    ctx->pc = 0x130A18u;
    // 0x130a18: 0xc04c34a  jal         func_130D28
    ctx->pc = 0x130A18u;
    SET_GPR_U32(ctx, 31, 0x130A20u);
    ctx->pc = 0x130D28u;
    if (runtime->hasFunction(0x130D28u)) {
        auto targetFn = runtime->lookupFunction(0x130D28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130A20u; }
        if (ctx->pc != 0x130A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00130D28_0x130d28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130A20u; }
        if (ctx->pc != 0x130A20u) { return; }
    }
    ctx->pc = 0x130A20u;
label_130a20:
    // 0x130a20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x130a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130a24: 0x0  nop
    ctx->pc = 0x130a24u;
    // NOP
label_130a28:
    // 0x130a28: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x130a28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x130a2c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x130a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x130a30: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x130a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x130a34: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x130a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x130a38: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x130a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x130a3c: 0x1080fffa  beqz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x130A3Cu;
    {
        const bool branch_taken_0x130a3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x130A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130A3Cu;
            // 0x130a40: 0xac620100  sw          $v0, 0x100($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130a3c) {
            ctx->pc = 0x130A28u;
            runtime->cooperativeGuestYield();
            goto label_130a28;
        }
    }
    ctx->pc = 0x130A44u;
    // 0x130a44: 0x8e720104  lw          $s2, 0x104($s3)
    ctx->pc = 0x130a44u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
    // 0x130a48: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x130A48u;
    {
        const bool branch_taken_0x130a48 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x130A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130A48u;
            // 0x130a4c: 0x3c170033  lui         $s7, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130a48) {
            ctx->pc = 0x130A90u;
            goto label_130a90;
        }
    }
    ctx->pc = 0x130A50u;
    // 0x130a50: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x130a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x130a54: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x130A54u;
    {
        const bool branch_taken_0x130a54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x130A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130A54u;
            // 0x130a58: 0x26e2ec58  addiu       $v0, $s7, -0x13A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294962264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130a54) {
            ctx->pc = 0x130A94u;
            goto label_130a94;
        }
    }
    ctx->pc = 0x130A5Cu;
    // 0x130a5c: 0x9642005c  lhu         $v0, 0x5C($s2)
    ctx->pc = 0x130a5cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x130a60: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x130A60u;
    {
        const bool branch_taken_0x130a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130A60u;
            // 0x130a64: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130a60) {
            ctx->pc = 0x130A90u;
            goto label_130a90;
        }
    }
    ctx->pc = 0x130A68u;
    // 0x130a68: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x130a68u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130a6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x130a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_130a70:
    // 0x130a70: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x130a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x130a74: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x130a74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x130a78: 0x0  nop
    ctx->pc = 0x130a78u;
    // NOP
    // 0x130a7c: 0x0  nop
    ctx->pc = 0x130a7cu;
    // NOP
    // 0x130a80: 0x0  nop
    ctx->pc = 0x130a80u;
    // NOP
    // 0x130a84: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x130A84u;
    {
        const bool branch_taken_0x130a84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x130A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130A84u;
            // 0x130a88: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130a84) {
            ctx->pc = 0x130A70u;
            runtime->cooperativeGuestYield();
            goto label_130a70;
        }
    }
    ctx->pc = 0x130A8Cu;
    // 0x130a8c: 0x3c170033  lui         $s7, 0x33
    ctx->pc = 0x130a8cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)51 << 16));
label_130a90:
    // 0x130a90: 0x26e2ec58  addiu       $v0, $s7, -0x13A8
    ctx->pc = 0x130a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294962264));
label_130a94:
    // 0x130a94: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x130a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x130a98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x130a98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x130a9c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x130a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x130aa0: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x130aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x130aa4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x130AA4u;
    {
        const bool branch_taken_0x130aa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x130AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130AA4u;
            // 0x130aa8: 0x2482ffec  addiu       $v0, $a0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130aa4) {
            ctx->pc = 0x130AB8u;
            goto label_130ab8;
        }
    }
    ctx->pc = 0x130AACu;
    // 0x130aac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x130aacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130ab0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x130AB0u;
    {
        const bool branch_taken_0x130ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130AB0u;
            // 0x130ab4: 0x44880b  movn        $s1, $v0, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130ab0) {
            ctx->pc = 0x130ABCu;
            goto label_130abc;
        }
    }
    ctx->pc = 0x130AB8u;
label_130ab8:
    // 0x130ab8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x130ab8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_130abc:
    // 0x130abc: 0x1220003c  beqz        $s1, . + 4 + (0x3C << 2)
    ctx->pc = 0x130ABCu;
    {
        const bool branch_taken_0x130abc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x130abc) {
            ctx->pc = 0x130BB0u;
            goto label_130bb0;
        }
    }
    ctx->pc = 0x130AC4u;
    // 0x130ac4: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x130AC4u;
    {
        const bool branch_taken_0x130ac4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x130AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130AC4u;
            // 0x130ac8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130ac4) {
            ctx->pc = 0x130AF0u;
            goto label_130af0;
        }
    }
    ctx->pc = 0x130ACCu;
    // 0x130acc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x130accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130ad0: 0xc0402de  jal         func_100B78
    ctx->pc = 0x130AD0u;
    SET_GPR_U32(ctx, 31, 0x130AD8u);
    ctx->pc = 0x130AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130AD0u;
            // 0x130ad4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100B78u;
    if (runtime->hasFunction(0x100B78u)) {
        auto targetFn = runtime->lookupFunction(0x100B78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130AD8u; }
        if (ctx->pc != 0x130AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100B78_0x100b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130AD8u; }
        if (ctx->pc != 0x130AD8u) { return; }
    }
    ctx->pc = 0x130AD8u;
    // 0x130ad8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x130ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x130adc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x130adcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x130ae0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x130ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130ae4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x130ae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130ae8: 0xc04d96a  jal         func_1365A8
    ctx->pc = 0x130AE8u;
    SET_GPR_U32(ctx, 31, 0x130AF0u);
    ctx->pc = 0x130AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130AE8u;
            // 0x130aec: 0xe620003c  swc1        $f0, 0x3C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1365A8u;
    if (runtime->hasFunction(0x1365A8u)) {
        auto targetFn = runtime->lookupFunction(0x1365A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130AF0u; }
        if (ctx->pc != 0x130AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001365A8_0x1365a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130AF0u; }
        if (ctx->pc != 0x130AF0u) { return; }
    }
    ctx->pc = 0x130AF0u;
label_130af0:
    // 0x130af0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x130af0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130af4: 0x267400c0  addiu       $s4, $s3, 0xC0
    ctx->pc = 0x130af4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
label_130af8:
    // 0x130af8: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x130af8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x130afc: 0x52000029  beql        $s0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x130AFCu;
    {
        const bool branch_taken_0x130afc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x130afc) {
            ctx->pc = 0x130B00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x130AFCu;
            // 0x130b00: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x130BA4u;
            goto label_130ba4;
        }
    }
    ctx->pc = 0x130B04u;
    // 0x130b04: 0x2602ffec  addiu       $v0, $s0, -0x14
    ctx->pc = 0x130b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
label_130b08:
    // 0x130b08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x130b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130b0c: 0x50280b  movn        $a1, $v0, $s0
    ctx->pc = 0x130b0cu;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x130b10: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x130b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x130b14: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x130b14u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x130b18: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x130B18u;
    {
        const bool branch_taken_0x130b18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x130B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130B18u;
            // 0x130b1c: 0x28820010  slti        $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x130b18) {
            ctx->pc = 0x130B8Cu;
            goto label_130b8c;
        }
    }
    ctx->pc = 0x130B20u;
    // 0x130b20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x130B20u;
    {
        const bool branch_taken_0x130b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130B20u;
            // 0x130b24: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130b20) {
            ctx->pc = 0x130B38u;
            goto label_130b38;
        }
    }
    ctx->pc = 0x130B28u;
    // 0x130b28: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x130B28u;
    {
        const bool branch_taken_0x130b28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x130b28) {
            ctx->pc = 0x130B54u;
            goto label_130b54;
        }
    }
    ctx->pc = 0x130B30u;
    // 0x130b30: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x130B30u;
    {
        const bool branch_taken_0x130b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130B30u;
            // 0x130b34: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130b30) {
            ctx->pc = 0x130B98u;
            goto label_130b98;
        }
    }
    ctx->pc = 0x130B38u;
label_130b38:
    // 0x130b38: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x130b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x130b3c: 0x1082000f  beq         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x130B3Cu;
    {
        const bool branch_taken_0x130b3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x130B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130B3Cu;
            // 0x130b40: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130b3c) {
            ctx->pc = 0x130B7Cu;
            goto label_130b7c;
        }
    }
    ctx->pc = 0x130B44u;
    // 0x130b44: 0x50820007  beql        $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x130B44u;
    {
        const bool branch_taken_0x130b44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x130b44) {
            ctx->pc = 0x130B48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x130B44u;
            // 0x130b48: 0x8ca20078  lw          $v0, 0x78($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 120)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x130B64u;
            goto label_130b64;
        }
    }
    ctx->pc = 0x130B4Cu;
    // 0x130b4c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x130B4Cu;
    {
        const bool branch_taken_0x130b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130B4Cu;
            // 0x130b50: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130b4c) {
            ctx->pc = 0x130B98u;
            goto label_130b98;
        }
    }
    ctx->pc = 0x130B54u;
label_130b54:
    // 0x130b54: 0xc04faf4  jal         func_13EBD0
    ctx->pc = 0x130B54u;
    SET_GPR_U32(ctx, 31, 0x130B5Cu);
    ctx->pc = 0x130B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130B54u;
            // 0x130b58: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13EBD0u;
    if (runtime->hasFunction(0x13EBD0u)) {
        auto targetFn = runtime->lookupFunction(0x13EBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130B5Cu; }
        if (ctx->pc != 0x130B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013EBD0_0x13ebd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130B5Cu; }
        if (ctx->pc != 0x130B5Cu) { return; }
    }
    ctx->pc = 0x130B5Cu;
    // 0x130b5c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x130B5Cu;
    {
        const bool branch_taken_0x130b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130B5Cu;
            // 0x130b60: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130b5c) {
            ctx->pc = 0x130B98u;
            goto label_130b98;
        }
    }
    ctx->pc = 0x130B64u;
label_130b64:
    // 0x130b64: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x130b64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x130b68: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x130b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x130b6c: 0x40f809  jalr        $v0
    ctx->pc = 0x130B6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x130B74u);
        ctx->pc = 0x130B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130B6Cu;
            // 0x130b70: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x130B74u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130A20u: goto label_130a20;
            case 0x130A28u: goto label_130a28;
            case 0x130A70u: goto label_130a70;
            case 0x130A90u: goto label_130a90;
            case 0x130A94u: goto label_130a94;
            case 0x130AB8u: goto label_130ab8;
            case 0x130ABCu: goto label_130abc;
            case 0x130AF0u: goto label_130af0;
            case 0x130AF8u: goto label_130af8;
            case 0x130B08u: goto label_130b08;
            case 0x130B38u: goto label_130b38;
            case 0x130B54u: goto label_130b54;
            case 0x130B64u: goto label_130b64;
            case 0x130B7Cu: goto label_130b7c;
            case 0x130B8Cu: goto label_130b8c;
            case 0x130B98u: goto label_130b98;
            case 0x130BA4u: goto label_130ba4;
            case 0x130BB0u: goto label_130bb0;
            case 0x130BD0u: goto label_130bd0;
            case 0x130C24u: goto label_130c24;
            case 0x130C50u: goto label_130c50;
            case 0x130C64u: goto label_130c64;
            case 0x130C70u: goto label_130c70;
            case 0x130C80u: goto label_130c80;
            case 0x130C98u: goto label_130c98;
            case 0x130CB8u: goto label_130cb8;
            case 0x130CC0u: goto label_130cc0;
            case 0x130CF8u: goto label_130cf8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x130B74u; }
            if (ctx->pc != 0x130B74u) { return; }
        }
        }
    }
    ctx->pc = 0x130B74u;
    // 0x130b74: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x130B74u;
    {
        const bool branch_taken_0x130b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130B74u;
            // 0x130b78: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130b74) {
            ctx->pc = 0x130B98u;
            goto label_130b98;
        }
    }
    ctx->pc = 0x130B7Cu;
label_130b7c:
    // 0x130b7c: 0xc05c1ee  jal         func_1707B8
    ctx->pc = 0x130B7Cu;
    SET_GPR_U32(ctx, 31, 0x130B84u);
    ctx->pc = 0x130B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130B7Cu;
            // 0x130b80: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1707B8u;
    if (runtime->hasFunction(0x1707B8u)) {
        auto targetFn = runtime->lookupFunction(0x1707B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130B84u; }
        if (ctx->pc != 0x130B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001707B8_0x1707b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130B84u; }
        if (ctx->pc != 0x130B84u) { return; }
    }
    ctx->pc = 0x130B84u;
    // 0x130b84: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x130B84u;
    {
        const bool branch_taken_0x130b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130B84u;
            // 0x130b88: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130b84) {
            ctx->pc = 0x130B98u;
            goto label_130b98;
        }
    }
    ctx->pc = 0x130B8Cu;
label_130b8c:
    // 0x130b8c: 0xc055af4  jal         func_156BD0
    ctx->pc = 0x130B8Cu;
    SET_GPR_U32(ctx, 31, 0x130B94u);
    ctx->pc = 0x130B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130B8Cu;
            // 0x130b90: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156BD0u;
    if (runtime->hasFunction(0x156BD0u)) {
        auto targetFn = runtime->lookupFunction(0x156BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130B94u; }
        if (ctx->pc != 0x130B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156BD0_0x156bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130B94u; }
        if (ctx->pc != 0x130B94u) { return; }
    }
    ctx->pc = 0x130B94u;
    // 0x130b94: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x130b94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_130b98:
    // 0x130b98: 0x1600ffdb  bnez        $s0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x130B98u;
    {
        const bool branch_taken_0x130b98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x130B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130B98u;
            // 0x130b9c: 0x2602ffec  addiu       $v0, $s0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130b98) {
            ctx->pc = 0x130B08u;
            runtime->cooperativeGuestYield();
            goto label_130b08;
        }
    }
    ctx->pc = 0x130BA0u;
    // 0x130ba0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x130ba0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_130ba4:
    // 0x130ba4: 0x2ea2000d  sltiu       $v0, $s5, 0xD
    ctx->pc = 0x130ba4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x130ba8: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x130BA8u;
    {
        const bool branch_taken_0x130ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x130BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130BA8u;
            // 0x130bac: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130ba8) {
            ctx->pc = 0x130AF8u;
            runtime->cooperativeGuestYield();
            goto label_130af8;
        }
    }
    ctx->pc = 0x130BB0u;
label_130bb0:
    // 0x130bb0: 0x12400033  beqz        $s2, . + 4 + (0x33 << 2)
    ctx->pc = 0x130BB0u;
    {
        const bool branch_taken_0x130bb0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x130BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130BB0u;
            // 0x130bb4: 0x26e2ec58  addiu       $v0, $s7, -0x13A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294962264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130bb0) {
            ctx->pc = 0x130C80u;
            goto label_130c80;
        }
    }
    ctx->pc = 0x130BB8u;
    // 0x130bb8: 0x9642005e  lhu         $v0, 0x5E($s2)
    ctx->pc = 0x130bb8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 94)));
    // 0x130bbc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x130bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x130bc0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x130BC0u;
    {
        const bool branch_taken_0x130bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x130bc0) {
            ctx->pc = 0x130BD0u;
            goto label_130bd0;
        }
    }
    ctx->pc = 0x130BC8u;
    // 0x130bc8: 0xc04d9ca  jal         func_136728
    ctx->pc = 0x130BC8u;
    SET_GPR_U32(ctx, 31, 0x130BD0u);
    ctx->pc = 0x130BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130BC8u;
            // 0x130bcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136728u;
    if (runtime->hasFunction(0x136728u)) {
        auto targetFn = runtime->lookupFunction(0x136728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130BD0u; }
        if (ctx->pc != 0x130BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136728_0x136728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130BD0u; }
        if (ctx->pc != 0x130BD0u) { return; }
    }
    ctx->pc = 0x130BD0u;
label_130bd0:
    // 0x130bd0: 0x1220002b  beqz        $s1, . + 4 + (0x2B << 2)
    ctx->pc = 0x130BD0u;
    {
        const bool branch_taken_0x130bd0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x130BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130BD0u;
            // 0x130bd4: 0x26e2ec58  addiu       $v0, $s7, -0x13A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294962264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130bd0) {
            ctx->pc = 0x130C80u;
            goto label_130c80;
        }
    }
    ctx->pc = 0x130BD8u;
    // 0x130bd8: 0x96d0005c  lhu         $s0, 0x5C($s6)
    ctx->pc = 0x130bd8u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 92)));
    // 0x130bdc: 0xc08e498  jal         func_239260
    ctx->pc = 0x130BDCu;
    SET_GPR_U32(ctx, 31, 0x130BE4u);
    ctx->pc = 0x130BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130BDCu;
            // 0x130be0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239260u;
    if (runtime->hasFunction(0x239260u)) {
        auto targetFn = runtime->lookupFunction(0x239260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130BE4u; }
        if (ctx->pc != 0x130BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239260_0x239268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130BE4u; }
        if (ctx->pc != 0x130BE4u) { return; }
    }
    ctx->pc = 0x130BE4u;
    // 0x130be4: 0xc6d40058  lwc1        $f20, 0x58($s6)
    ctx->pc = 0x130be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x130be8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x130be8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x130bec: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x130becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x130bf0: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x130bf0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130bf4: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x130bf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x130bf8: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x130BF8u;
    {
        const bool branch_taken_0x130bf8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x130BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130BF8u;
            // 0x130bfc: 0x2800a  movz        $s0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130bf8) {
            ctx->pc = 0x130C24u;
            goto label_130c24;
        }
    }
    ctx->pc = 0x130C00u;
    // 0x130c00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x130c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130c04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x130c04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130c08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x130c08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130c0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x130c0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130c10: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x130c10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130c14: 0xc0401f2  jal         func_1007C8
    ctx->pc = 0x130C14u;
    SET_GPR_U32(ctx, 31, 0x130C1Cu);
    ctx->pc = 0x130C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130C14u;
            // 0x130c18: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1007C8u;
    if (runtime->hasFunction(0x1007C8u)) {
        auto targetFn = runtime->lookupFunction(0x1007C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130C1Cu; }
        if (ctx->pc != 0x130C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001007C8_0x1007c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130C1Cu; }
        if (ctx->pc != 0x130C1Cu) { return; }
    }
    ctx->pc = 0x130C1Cu;
    // 0x130c1c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x130C1Cu;
    {
        const bool branch_taken_0x130c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130C1Cu;
            // 0x130c20: 0x26e2ec58  addiu       $v0, $s7, -0x13A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294962264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130c1c) {
            ctx->pc = 0x130C80u;
            goto label_130c80;
        }
    }
    ctx->pc = 0x130C24u;
label_130c24:
    // 0x130c24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x130c24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130c28: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x130c28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130c2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x130c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130c30: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x130c30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x130c34: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x130c34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130c38: 0xc0401f2  jal         func_1007C8
    ctx->pc = 0x130C38u;
    SET_GPR_U32(ctx, 31, 0x130C40u);
    ctx->pc = 0x130C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130C38u;
            // 0x130c3c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1007C8u;
    if (runtime->hasFunction(0x1007C8u)) {
        auto targetFn = runtime->lookupFunction(0x1007C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130C40u; }
        if (ctx->pc != 0x130C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001007C8_0x1007c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130C40u; }
        if (ctx->pc != 0x130C40u) { return; }
    }
    ctx->pc = 0x130C40u;
    // 0x130c40: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x130c40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130c44: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x130C44u;
    {
        const bool branch_taken_0x130c44 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x130C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130C44u;
            // 0x130c48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130c44) {
            ctx->pc = 0x130C70u;
            goto label_130c70;
        }
    }
    ctx->pc = 0x130C4Cu;
    // 0x130c4c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x130c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_130c50:
    // 0x130c50: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x130c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x130c54: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x130C54u;
    {
        const bool branch_taken_0x130c54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x130C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130C54u;
            // 0x130c58: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130c54) {
            ctx->pc = 0x130C64u;
            goto label_130c64;
        }
    }
    ctx->pc = 0x130C5Cu;
    // 0x130c5c: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x130c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x130c60: 0xac62003c  sw          $v0, 0x3C($v1)
    ctx->pc = 0x130c60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 2));
label_130c64:
    // 0x130c64: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x130c64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x130c68: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x130C68u;
    {
        const bool branch_taken_0x130c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x130C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130C68u;
            // 0x130c6c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130c68) {
            ctx->pc = 0x130C50u;
            runtime->cooperativeGuestYield();
            goto label_130c50;
        }
    }
    ctx->pc = 0x130C70u;
label_130c70:
    // 0x130c70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x130c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130c74: 0xc040174  jal         func_1005D0
    ctx->pc = 0x130C74u;
    SET_GPR_U32(ctx, 31, 0x130C7Cu);
    ctx->pc = 0x130C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130C74u;
            // 0x130c78: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1005D0u;
    if (runtime->hasFunction(0x1005D0u)) {
        auto targetFn = runtime->lookupFunction(0x1005D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130C7Cu; }
        if (ctx->pc != 0x130C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001005D0_0x1005d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130C7Cu; }
        if (ctx->pc != 0x130C7Cu) { return; }
    }
    ctx->pc = 0x130C7Cu;
    // 0x130c7c: 0x26e2ec58  addiu       $v0, $s7, -0x13A8
    ctx->pc = 0x130c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294962264));
label_130c80:
    // 0x130c80: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x130c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x130c84: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x130c84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x130c88: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x130c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x130c8c: 0x8c5000c0  lw          $s0, 0xC0($v0)
    ctx->pc = 0x130c8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x130c90: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x130C90u;
    {
        const bool branch_taken_0x130c90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x130C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130C90u;
            // 0x130c94: 0x2602ffec  addiu       $v0, $s0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130c90) {
            ctx->pc = 0x130CC0u;
            goto label_130cc0;
        }
    }
    ctx->pc = 0x130C98u;
label_130c98:
    // 0x130c98: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x130c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130c9c: 0x50200b  movn        $a0, $v0, $s0
    ctx->pc = 0x130c9cu;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x130ca0: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x130ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x130ca4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x130CA4u;
    {
        const bool branch_taken_0x130ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x130ca4) {
            ctx->pc = 0x130CA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x130CA4u;
            // 0x130ca8: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x130CB8u;
            goto label_130cb8;
        }
    }
    ctx->pc = 0x130CACu;
    // 0x130cac: 0x40f809  jalr        $v0
    ctx->pc = 0x130CACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x130CB4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x130CB4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130A20u: goto label_130a20;
            case 0x130A28u: goto label_130a28;
            case 0x130A70u: goto label_130a70;
            case 0x130A90u: goto label_130a90;
            case 0x130A94u: goto label_130a94;
            case 0x130AB8u: goto label_130ab8;
            case 0x130ABCu: goto label_130abc;
            case 0x130AF0u: goto label_130af0;
            case 0x130AF8u: goto label_130af8;
            case 0x130B08u: goto label_130b08;
            case 0x130B38u: goto label_130b38;
            case 0x130B54u: goto label_130b54;
            case 0x130B64u: goto label_130b64;
            case 0x130B7Cu: goto label_130b7c;
            case 0x130B8Cu: goto label_130b8c;
            case 0x130B98u: goto label_130b98;
            case 0x130BA4u: goto label_130ba4;
            case 0x130BB0u: goto label_130bb0;
            case 0x130BD0u: goto label_130bd0;
            case 0x130C24u: goto label_130c24;
            case 0x130C50u: goto label_130c50;
            case 0x130C64u: goto label_130c64;
            case 0x130C70u: goto label_130c70;
            case 0x130C80u: goto label_130c80;
            case 0x130C98u: goto label_130c98;
            case 0x130CB8u: goto label_130cb8;
            case 0x130CC0u: goto label_130cc0;
            case 0x130CF8u: goto label_130cf8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x130CB4u; }
            if (ctx->pc != 0x130CB4u) { return; }
        }
        }
    }
    ctx->pc = 0x130CB4u;
    // 0x130cb4: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x130cb4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_130cb8:
    // 0x130cb8: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x130CB8u;
    {
        const bool branch_taken_0x130cb8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x130CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130CB8u;
            // 0x130cbc: 0x2602ffec  addiu       $v0, $s0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130cb8) {
            ctx->pc = 0x130C98u;
            runtime->cooperativeGuestYield();
            goto label_130c98;
        }
    }
    ctx->pc = 0x130CC0u;
label_130cc0:
    // 0x130cc0: 0x17c0000d  bnez        $fp, . + 4 + (0xD << 2)
    ctx->pc = 0x130CC0u;
    {
        const bool branch_taken_0x130cc0 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x130CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130CC0u;
            // 0x130cc4: 0x7bb002b0  lq          $s0, 0x2B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130cc0) {
            ctx->pc = 0x130CF8u;
            goto label_130cf8;
        }
    }
    ctx->pc = 0x130CC8u;
    // 0x130cc8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x130cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x130ccc: 0x2403007c  addiu       $v1, $zero, 0x7C
    ctx->pc = 0x130cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x130cd0: 0x8c44e89c  lw          $a0, -0x1764($v0)
    ctx->pc = 0x130cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961308)));
    // 0x130cd4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x130cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130cd8: 0xa7a30200  sh          $v1, 0x200($sp)
    ctx->pc = 0x130cd8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 512), (uint16_t)GPR_U32(ctx, 3));
    // 0x130cdc: 0x27a60200  addiu       $a2, $sp, 0x200
    ctx->pc = 0x130cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x130ce0: 0xafa00204  sw          $zero, 0x204($sp)
    ctx->pc = 0x130ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 0));
    // 0x130ce4: 0xafa00208  sw          $zero, 0x208($sp)
    ctx->pc = 0x130ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 0));
    // 0x130ce8: 0xafa0020c  sw          $zero, 0x20C($sp)
    ctx->pc = 0x130ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 0));
    // 0x130cec: 0xc047d6a  jal         func_11F5A8
    ctx->pc = 0x130CECu;
    SET_GPR_U32(ctx, 31, 0x130CF4u);
    ctx->pc = 0x130CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130CECu;
            // 0x130cf0: 0xafa00210  sw          $zero, 0x210($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F5A8u;
    if (runtime->hasFunction(0x11F5A8u)) {
        auto targetFn = runtime->lookupFunction(0x11F5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130CF4u; }
        if (ctx->pc != 0x130CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11f5a8_0x11f5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130CF4u; }
        if (ctx->pc != 0x130CF4u) { return; }
    }
    ctx->pc = 0x130CF4u;
    // 0x130cf4: 0x7bb002b0  lq          $s0, 0x2B0($sp)
    ctx->pc = 0x130cf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 688)));
label_130cf8:
    // 0x130cf8: 0x7bb102a0  lq          $s1, 0x2A0($sp)
    ctx->pc = 0x130cf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x130cfc: 0x7bb20290  lq          $s2, 0x290($sp)
    ctx->pc = 0x130cfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x130d00: 0x7bb30280  lq          $s3, 0x280($sp)
    ctx->pc = 0x130d00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x130d04: 0x7bb40270  lq          $s4, 0x270($sp)
    ctx->pc = 0x130d04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x130d08: 0x7bb50260  lq          $s5, 0x260($sp)
    ctx->pc = 0x130d08u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x130d0c: 0x7bb60250  lq          $s6, 0x250($sp)
    ctx->pc = 0x130d0cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x130d10: 0x7bb70240  lq          $s7, 0x240($sp)
    ctx->pc = 0x130d10u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x130d14: 0x7bbe0230  lq          $fp, 0x230($sp)
    ctx->pc = 0x130d14u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x130d18: 0xdfbf0220  ld          $ra, 0x220($sp)
    ctx->pc = 0x130d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x130d1c: 0xc7b402c0  lwc1        $f20, 0x2C0($sp)
    ctx->pc = 0x130d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x130d20: 0x3e00008  jr          $ra
    ctx->pc = 0x130D20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130D20u;
            // 0x130d24: 0x27bd02d0  addiu       $sp, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130A20u: goto label_130a20;
            case 0x130A28u: goto label_130a28;
            case 0x130A70u: goto label_130a70;
            case 0x130A90u: goto label_130a90;
            case 0x130A94u: goto label_130a94;
            case 0x130AB8u: goto label_130ab8;
            case 0x130ABCu: goto label_130abc;
            case 0x130AF0u: goto label_130af0;
            case 0x130AF8u: goto label_130af8;
            case 0x130B08u: goto label_130b08;
            case 0x130B38u: goto label_130b38;
            case 0x130B54u: goto label_130b54;
            case 0x130B64u: goto label_130b64;
            case 0x130B7Cu: goto label_130b7c;
            case 0x130B8Cu: goto label_130b8c;
            case 0x130B98u: goto label_130b98;
            case 0x130BA4u: goto label_130ba4;
            case 0x130BB0u: goto label_130bb0;
            case 0x130BD0u: goto label_130bd0;
            case 0x130C24u: goto label_130c24;
            case 0x130C50u: goto label_130c50;
            case 0x130C64u: goto label_130c64;
            case 0x130C70u: goto label_130c70;
            case 0x130C80u: goto label_130c80;
            case 0x130C98u: goto label_130c98;
            case 0x130CB8u: goto label_130cb8;
            case 0x130CC0u: goto label_130cc0;
            case 0x130CF8u: goto label_130cf8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x130D28u;
}
