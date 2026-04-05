#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00200A10
// Address: 0x200a10 - 0x200b48
void sub_00200A10_0x200a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200A10_0x200a10");
#endif

    ctx->pc = 0x200a10u;

    // 0x200a10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x200a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x200a14: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x200a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x200a18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x200a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x200a1c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x200a1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200a20: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x200a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x200a24: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x200a24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200a28: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x200a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x200a2c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x200a2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200a30: 0x1200003d  beqz        $s0, . + 4 + (0x3D << 2)
    ctx->pc = 0x200A30u;
    {
        const bool branch_taken_0x200a30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x200A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200A30u;
            // 0x200a34: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200a30) {
            ctx->pc = 0x200B28u;
            goto label_200b28;
        }
    }
    ctx->pc = 0x200A38u;
    // 0x200a38: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x200a38u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x200a3c: 0x5040003b  beql        $v0, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x200A3Cu;
    {
        const bool branch_taken_0x200a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x200a3c) {
            ctx->pc = 0x200A40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x200A3Cu;
            // 0x200a40: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x200B2Cu;
            goto label_200b2c;
        }
    }
    ctx->pc = 0x200A44u;
    // 0x200a44: 0xc05e996  jal         func_17A658
    ctx->pc = 0x200A44u;
    SET_GPR_U32(ctx, 31, 0x200A4Cu);
    ctx->pc = 0x200A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200A44u;
            // 0x200a48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200A4Cu; }
        if (ctx->pc != 0x200A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200A4Cu; }
        if (ctx->pc != 0x200A4Cu) { return; }
    }
    ctx->pc = 0x200A4Cu;
    // 0x200a4c: 0x50400037  beql        $v0, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x200A4Cu;
    {
        const bool branch_taken_0x200a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x200a4c) {
            ctx->pc = 0x200A50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x200A4Cu;
            // 0x200a50: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x200B2Cu;
            goto label_200b2c;
        }
    }
    ctx->pc = 0x200A54u;
    // 0x200a54: 0xc04c942  jal         func_132508
    ctx->pc = 0x200A54u;
    SET_GPR_U32(ctx, 31, 0x200A5Cu);
    ctx->pc = 0x200A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200A54u;
            // 0x200a58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132508u;
    if (runtime->hasFunction(0x132508u)) {
        auto targetFn = runtime->lookupFunction(0x132508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200A5Cu; }
        if (ctx->pc != 0x200A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132508_0x132508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200A5Cu; }
        if (ctx->pc != 0x200A5Cu) { return; }
    }
    ctx->pc = 0x200A5Cu;
    // 0x200a5c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x200A5Cu;
    {
        const bool branch_taken_0x200a5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x200A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200A5Cu;
            // 0x200a60: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200a5c) {
            ctx->pc = 0x200A74u;
            goto label_200a74;
        }
    }
    ctx->pc = 0x200A64u;
    // 0x200a64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x200a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200a68: 0xc04c9ee  jal         func_1327B8
    ctx->pc = 0x200A68u;
    SET_GPR_U32(ctx, 31, 0x200A70u);
    ctx->pc = 0x200A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200A68u;
            // 0x200a6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1327B8u;
    if (runtime->hasFunction(0x1327B8u)) {
        auto targetFn = runtime->lookupFunction(0x1327B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200A70u; }
        if (ctx->pc != 0x200A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001327B8_0x1327b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200A70u; }
        if (ctx->pc != 0x200A70u) { return; }
    }
    ctx->pc = 0x200A70u;
    // 0x200a70: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x200a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_200a74:
    // 0x200a74: 0x2621818  mult        $v1, $s3, $v0
    ctx->pc = 0x200a74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x200a78: 0x728821  addu        $s1, $v1, $s2
    ctx->pc = 0x200a78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x200a7c: 0xc04c992  jal         func_132648
    ctx->pc = 0x200A7Cu;
    SET_GPR_U32(ctx, 31, 0x200A84u);
    ctx->pc = 0x200A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200A7Cu;
            // 0x200a80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132648u;
    if (runtime->hasFunction(0x132648u)) {
        auto targetFn = runtime->lookupFunction(0x132648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200A84u; }
        if (ctx->pc != 0x200A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132648_0x132648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200A84u; }
        if (ctx->pc != 0x200A84u) { return; }
    }
    ctx->pc = 0x200A84u;
    // 0x200a84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x200a84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200a88: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x200a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x200a8c: 0x8c42ec94  lw          $v0, -0x136C($v0)
    ctx->pc = 0x200a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962324)));
    // 0x200a90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x200a90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x200a94: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x200a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x200a98: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x200a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x200a9c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x200A9Cu;
    {
        const bool branch_taken_0x200a9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x200AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200A9Cu;
            // 0x200aa0: 0x2482ffec  addiu       $v0, $a0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200a9c) {
            ctx->pc = 0x200AB0u;
            goto label_200ab0;
        }
    }
    ctx->pc = 0x200AA4u;
    // 0x200aa4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x200aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200aa8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x200AA8u;
    {
        const bool branch_taken_0x200aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200AA8u;
            // 0x200aac: 0x44280b  movn        $a1, $v0, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200aa8) {
            ctx->pc = 0x200AB4u;
            goto label_200ab4;
        }
    }
    ctx->pc = 0x200AB0u;
label_200ab0:
    // 0x200ab0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x200ab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200ab4:
    // 0x200ab4: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x200AB4u;
    {
        const bool branch_taken_0x200ab4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x200AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200AB4u;
            // 0x200ab8: 0x24a600c0  addiu       $a2, $a1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200ab4) {
            ctx->pc = 0x200B00u;
            goto label_200b00;
        }
    }
    ctx->pc = 0x200ABCu;
    // 0x200abc: 0xdca200c0  ld          $v0, 0xC0($a1)
    ctx->pc = 0x200abcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 192)));
    // 0x200ac0: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x200ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x200ac4: 0x31bbc  dsll32      $v1, $v1, 14
    ctx->pc = 0x200ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 14));
    // 0x200ac8: 0x3c07dfff  lui         $a3, 0xDFFF
    ctx->pc = 0x200ac8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57343 << 16));
    // 0x200acc: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x200accu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x200ad0: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x200ad0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x200ad4: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x200ad4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x200ad8: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x200ad8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x200adc: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x200adcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x200ae0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x200ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x200ae4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x200ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200ae8: 0xfca200c0  sd          $v0, 0xC0($a1)
    ctx->pc = 0x200ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 192), GPR_U64(ctx, 2));
    // 0x200aec: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x200aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x200af0: 0xdcc20008  ld          $v0, 0x8($a2)
    ctx->pc = 0x200af0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x200af4: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x200af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x200af8: 0xc05420c  jal         func_150830
    ctx->pc = 0x200AF8u;
    SET_GPR_U32(ctx, 31, 0x200B00u);
    ctx->pc = 0x200AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200AF8u;
            // 0x200afc: 0xfcc20008  sd          $v0, 0x8($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x150830u;
    if (runtime->hasFunction(0x150830u)) {
        auto targetFn = runtime->lookupFunction(0x150830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200B00u; }
        if (ctx->pc != 0x200B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_150830_0x1508a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200B00u; }
        if (ctx->pc != 0x200B00u) { return; }
    }
    ctx->pc = 0x200B00u;
label_200b00:
    // 0x200b00: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x200b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x200b04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x200b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200b08: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x200b08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x200b0c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x200b0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200b10: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x200b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x200b14: 0xae0200f4  sw          $v0, 0xF4($s0)
    ctx->pc = 0x200b14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
    // 0x200b18: 0xc080262  jal         func_200988
    ctx->pc = 0x200B18u;
    SET_GPR_U32(ctx, 31, 0x200B20u);
    ctx->pc = 0x200B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200B18u;
            // 0x200b1c: 0x8e260004  lw          $a2, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200988u;
    if (runtime->hasFunction(0x200988u)) {
        auto targetFn = runtime->lookupFunction(0x200988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200B20u; }
        if (ctx->pc != 0x200B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_200988_0x200a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200B20u; }
        if (ctx->pc != 0x200B20u) { return; }
    }
    ctx->pc = 0x200B20u;
    // 0x200b20: 0xc080398  jal         func_200E60
    ctx->pc = 0x200B20u;
    SET_GPR_U32(ctx, 31, 0x200B28u);
    ctx->pc = 0x200B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200B20u;
            // 0x200b24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200E60u;
    if (runtime->hasFunction(0x200E60u)) {
        auto targetFn = runtime->lookupFunction(0x200E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200B28u; }
        if (ctx->pc != 0x200B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00200E60_0x200e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200B28u; }
        if (ctx->pc != 0x200B28u) { return; }
    }
    ctx->pc = 0x200B28u;
label_200b28:
    // 0x200b28: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x200b28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_200b2c:
    // 0x200b2c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x200b2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x200b30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x200b30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x200b34: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x200b34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200b38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x200b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x200B3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200B3Cu;
            // 0x200b40: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x200A74u: goto label_200a74;
            case 0x200AB0u: goto label_200ab0;
            case 0x200AB4u: goto label_200ab4;
            case 0x200B00u: goto label_200b00;
            case 0x200B28u: goto label_200b28;
            case 0x200B2Cu: goto label_200b2c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x200B44u;
    // 0x200b44: 0x0  nop
    ctx->pc = 0x200b44u;
    // NOP
}
