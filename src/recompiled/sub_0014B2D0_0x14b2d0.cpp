#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014B2D0
// Address: 0x14b2d0 - 0x14b570
void sub_0014B2D0_0x14b2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B2D0_0x14b2d0");
#endif

    ctx->pc = 0x14b2d0u;

    // 0x14b2d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x14b2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x14b2d4: 0x3c03dead  lui         $v1, 0xDEAD
    ctx->pc = 0x14b2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57005 << 16));
    // 0x14b2d8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x14b2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x14b2dc: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x14b2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x14b2e0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x14b2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x14b2e4: 0x24c60978  addiu       $a2, $a2, 0x978
    ctx->pc = 0x14b2e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2424));
    // 0x14b2e8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x14b2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x14b2ec: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x14b2ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x14b2f0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x14b2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x14b2f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14b2f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b2f8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x14b2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x14b2fc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x14b2fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b300: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14b300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14b304: 0x3463beef  ori         $v1, $v1, 0xBEEF
    ctx->pc = 0x14b304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48879);
    // 0x14b308: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x14b308u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x14b30c: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x14b30cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x14b310: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x14b310u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x14b314: 0x26500028  addiu       $s0, $s2, 0x28
    ctx->pc = 0x14b314u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    // 0x14b318: 0x81402  srl         $v0, $t0, 16
    ctx->pc = 0x14b318u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x14b31c: 0xa6470004  sh          $a3, 0x4($s2)
    ctx->pc = 0x14b31cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x14b320: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x14b320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x14b324: 0xa6480000  sh          $t0, 0x0($s2)
    ctx->pc = 0x14b324u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x14b328: 0xae460020  sw          $a2, 0x20($s2)
    ctx->pc = 0x14b328u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 6));
    // 0x14b32c: 0x26510034  addiu       $s1, $s2, 0x34
    ctx->pc = 0x14b32cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 52));
    // 0x14b330: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x14b330u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
    // 0x14b334: 0xc08e222  jal         func_238888
    ctx->pc = 0x14B334u;
    SET_GPR_U32(ctx, 31, 0x14B33Cu);
    ctx->pc = 0x14B338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B334u;
            // 0x14b338: 0xa6420002  sh          $v0, 0x2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B33Cu; }
        if (ctx->pc != 0x14B33Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B33Cu; }
        if (ctx->pc != 0x14B33Cu) { return; }
    }
    ctx->pc = 0x14B33Cu;
    // 0x14b33c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x14b33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14b340: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x14b340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b344: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14b344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b348: 0xc08e222  jal         func_238888
    ctx->pc = 0x14B348u;
    SET_GPR_U32(ctx, 31, 0x14B350u);
    ctx->pc = 0x14B34Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B348u;
            // 0x14b34c: 0xae420014  sw          $v0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B350u; }
        if (ctx->pc != 0x14B350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B350u; }
        if (ctx->pc != 0x14B350u) { return; }
    }
    ctx->pc = 0x14B350u;
    // 0x14b350: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x14b350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x14b354: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x14b354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x14b358: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x14b358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x14b35c: 0x246307e0  addiu       $v1, $v1, 0x7E0
    ctx->pc = 0x14b35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2016));
    // 0x14b360: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x14b360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x14b364: 0xae440018  sw          $a0, 0x18($s2)
    ctx->pc = 0x14b364u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 4));
    // 0x14b368: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x14b368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x14b36c: 0xae430020  sw          $v1, 0x20($s2)
    ctx->pc = 0x14b36cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
    // 0x14b370: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x14B370u;
    SET_GPR_U32(ctx, 31, 0x14B378u);
    ctx->pc = 0x14B374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B370u;
            // 0x14b374: 0xae42001c  sw          $v0, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B378u; }
        if (ctx->pc != 0x14B378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B378u; }
        if (ctx->pc != 0x14B378u) { return; }
    }
    ctx->pc = 0x14B378u;
    // 0x14b378: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x14b378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x14b37c: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x14b37cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
    // 0x14b380: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x14b380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x14b384: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x14b384u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x14b388: 0x8e900008  lw          $s0, 0x8($s4)
    ctx->pc = 0x14b388u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x14b38c: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x14B38Cu;
    SET_GPR_U32(ctx, 31, 0x14B394u);
    ctx->pc = 0x14B390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B38Cu;
            // 0x14b390: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B394u; }
        if (ctx->pc != 0x14B394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B394u; }
        if (ctx->pc != 0x14B394u) { return; }
    }
    ctx->pc = 0x14B394u;
    // 0x14b394: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14b394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b398: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x14b398u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x14b39c: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x14b39cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
    // 0x14b3a0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x14b3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x14b3a4: 0xae430040  sw          $v1, 0x40($s2)
    ctx->pc = 0x14b3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 3));
    // 0x14b3a8: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x14B3A8u;
    SET_GPR_U32(ctx, 31, 0x14B3B0u);
    ctx->pc = 0x14B3ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B3A8u;
            // 0x14b3ac: 0xae420034  sw          $v0, 0x34($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B3B0u; }
        if (ctx->pc != 0x14B3B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B3B0u; }
        if (ctx->pc != 0x14B3B0u) { return; }
    }
    ctx->pc = 0x14B3B0u;
    // 0x14b3b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14b3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b3b4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x14b3b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b3b8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x14b3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x14b3bc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x14b3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14b3c0:
    // 0x14b3c0: 0x0  nop
    ctx->pc = 0x14b3c0u;
    // NOP
    // 0x14b3c4: 0x0  nop
    ctx->pc = 0x14b3c4u;
    // NOP
    // 0x14b3c8: 0x0  nop
    ctx->pc = 0x14b3c8u;
    // NOP
    // 0x14b3cc: 0x0  nop
    ctx->pc = 0x14b3ccu;
    // NOP
    // 0x14b3d0: 0x0  nop
    ctx->pc = 0x14b3d0u;
    // NOP
    // 0x14b3d4: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14B3D4u;
    {
        const bool branch_taken_0x14b3d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x14B3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B3D4u;
            // 0x14b3d8: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b3d4) {
            ctx->pc = 0x14B3C0u;
            runtime->cooperativeGuestYield();
            goto label_14b3c0;
        }
    }
    ctx->pc = 0x14B3DCu;
    // 0x14b3dc: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x14b3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x14b3e0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x14b3e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b3e4: 0xae440024  sw          $a0, 0x24($s2)
    ctx->pc = 0x14b3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 4));
    // 0x14b3e8: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x14B3E8u;
    {
        const bool branch_taken_0x14b3e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B3E8u;
            // 0x14b3ec: 0xae400044  sw          $zero, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b3e8) {
            ctx->pc = 0x14B49Cu;
            goto label_14b49c;
        }
    }
    ctx->pc = 0x14B3F0u;
    // 0x14b3f0: 0x2410000c  addiu       $s0, $zero, 0xC
    ctx->pc = 0x14b3f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x14b3f4: 0x0  nop
    ctx->pc = 0x14b3f4u;
    // NOP
label_14b3f8:
    // 0x14b3f8: 0x8e510014  lw          $s1, 0x14($s2)
    ctx->pc = 0x14b3f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x14b3fc: 0x2708018  mult        $s0, $s3, $s0
    ctx->pc = 0x14b3fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x14b400: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x14b400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x14b404: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x14b404u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x14b408: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x14B408u;
    SET_GPR_U32(ctx, 31, 0x14B410u);
    ctx->pc = 0x14B40Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B408u;
            // 0x14b40c: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B410u; }
        if (ctx->pc != 0x14B410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B410u; }
        if (ctx->pc != 0x14B410u) { return; }
    }
    ctx->pc = 0x14B410u;
    // 0x14b410: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x14b410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x14b414: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x14b414u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b418: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x14b418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x14b41c: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x14B41Cu;
    {
        const bool branch_taken_0x14b41c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B41Cu;
            // 0x14b420: 0xae110008  sw          $s1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b41c) {
            ctx->pc = 0x14B44Cu;
            goto label_14b44c;
        }
    }
    ctx->pc = 0x14B424u;
    // 0x14b424: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14b424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b428: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x14b428u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14b42c: 0x0  nop
    ctx->pc = 0x14b42cu;
    // NOP
label_14b430:
    // 0x14b430: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x14b430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x14b434: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14b434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14b438: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x14b438u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x14b43c: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x14b43cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x14b440: 0x0  nop
    ctx->pc = 0x14b440u;
    // NOP
    // 0x14b444: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14B444u;
    {
        const bool branch_taken_0x14b444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B444u;
            // 0x14b448: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b444) {
            ctx->pc = 0x14B430u;
            runtime->cooperativeGuestYield();
            goto label_14b430;
        }
    }
    ctx->pc = 0x14B44Cu;
label_14b44c:
    // 0x14b44c: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x14b44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x14b450: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x14B450u;
    {
        const bool branch_taken_0x14b450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B450u;
            // 0x14b454: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b450) {
            ctx->pc = 0x14B488u;
            goto label_14b488;
        }
    }
    ctx->pc = 0x14B458u;
    // 0x14b458: 0x8e470024  lw          $a3, 0x24($s2)
    ctx->pc = 0x14b458u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x14b45c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14b45cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14b460:
    // 0x14b460: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x14b460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x14b464: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x14b464u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14b468: 0x2622018  mult        $a0, $s3, $v0
    ctx->pc = 0x14b468u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x14b46c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x14b46cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14b470: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x14b470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x14b474: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14b474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14b478: 0xa6202b  sltu        $a0, $a1, $a2
    ctx->pc = 0x14b478u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x14b47c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14b47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14b480: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x14B480u;
    {
        const bool branch_taken_0x14b480 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B480u;
            // 0x14b484: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b480) {
            ctx->pc = 0x14B460u;
            runtime->cooperativeGuestYield();
            goto label_14b460;
        }
    }
    ctx->pc = 0x14B488u;
label_14b488:
    // 0x14b488: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x14b488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x14b48c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x14b48cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x14b490: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x14b490u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14b494: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x14B494u;
    {
        const bool branch_taken_0x14b494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B494u;
            // 0x14b498: 0x2410000c  addiu       $s0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b494) {
            ctx->pc = 0x14B3F8u;
            runtime->cooperativeGuestYield();
            goto label_14b3f8;
        }
    }
    ctx->pc = 0x14B49Cu;
label_14b49c:
    // 0x14b49c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x14b49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14b4a0: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x14b4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x14b4a4: 0xae4300c8  sw          $v1, 0xC8($s2)
    ctx->pc = 0x14b4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 3));
    // 0x14b4a8: 0x2442f500  addiu       $v0, $v0, -0xB00
    ctx->pc = 0x14b4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964480));
    // 0x14b4ac: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x14b4acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x14b4b0: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x14b4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x14b4b4: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x14b4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x14b4b8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x14b4b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b4bc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x14b4bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14b4c0: 0xae4300d0  sw          $v1, 0xD0($s2)
    ctx->pc = 0x14b4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 3));
    // 0x14b4c4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x14b4c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14b4c8: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x14b4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x14b4cc: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x14b4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
    // 0x14b4d0: 0xae4300cc  sw          $v1, 0xCC($s2)
    ctx->pc = 0x14b4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 3));
    // 0x14b4d4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x14b4d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b4d8: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x14b4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x14b4dc: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x14b4dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b4e0: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x14b4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
    // 0x14b4e4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14b4e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14b4e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14b4e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b4ec: 0xac80c070  sw          $zero, -0x3F90($a0)
    ctx->pc = 0x14b4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294951024), GPR_U32(ctx, 0));
    // 0x14b4f0: 0x3e00008  jr          $ra
    ctx->pc = 0x14B4F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B4F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B4F0u;
            // 0x14b4f4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14B3C0u: goto label_14b3c0;
            case 0x14B3F8u: goto label_14b3f8;
            case 0x14B430u: goto label_14b430;
            case 0x14B44Cu: goto label_14b44c;
            case 0x14B460u: goto label_14b460;
            case 0x14B488u: goto label_14b488;
            case 0x14B49Cu: goto label_14b49c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14B4F8u;
    // 0x14b4f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14b4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14b4fc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x14b4fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b500: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x14b500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x14b504: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x14b504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x14b508: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14b508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14b50c: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x14b50cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x14b510: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x14b510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x14b514: 0x94650002  lhu         $a1, 0x2($v1)
    ctx->pc = 0x14b514u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x14b518: 0x8c6800d0  lw          $t0, 0xD0($v1)
    ctx->pc = 0x14b518u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 208)));
    // 0x14b51c: 0x8c670018  lw          $a3, 0x18($v1)
    ctx->pc = 0x14b51cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x14b520: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x14b520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x14b524: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x14b524u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x14b528: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x14b528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x14b52c: 0x8c6300cc  lw          $v1, 0xCC($v1)
    ctx->pc = 0x14b52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x14b530: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x14b530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x14b534: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x14b534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x14b538: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x14b538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x14b53c: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x14b53cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x14b540: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x14b540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
    // 0x14b544: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x14B544u;
    SET_GPR_U32(ctx, 31, 0x14B54Cu);
    ctx->pc = 0x14B548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B544u;
            // 0x14b548: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B54Cu; }
        if (ctx->pc != 0x14B54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B54Cu; }
        if (ctx->pc != 0x14B54Cu) { return; }
    }
    ctx->pc = 0x14B54Cu;
    // 0x14b54c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14b54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b550: 0xc052c58  jal         func_14B160
    ctx->pc = 0x14B550u;
    SET_GPR_U32(ctx, 31, 0x14B558u);
    ctx->pc = 0x14B554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B550u;
            // 0x14b554: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B160u;
    if (runtime->hasFunction(0x14B160u)) {
        auto targetFn = runtime->lookupFunction(0x14B160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B558u; }
        if (ctx->pc != 0x14B558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014B160_0x14b160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B558u; }
        if (ctx->pc != 0x14B558u) { return; }
    }
    ctx->pc = 0x14B558u;
    // 0x14b558: 0xae02c070  sw          $v0, -0x3F90($s0)
    ctx->pc = 0x14b558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294951024), GPR_U32(ctx, 2));
    // 0x14b55c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x14b55cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14b560: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14b560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b564: 0x3e00008  jr          $ra
    ctx->pc = 0x14B564u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B564u;
            // 0x14b568: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14B3C0u: goto label_14b3c0;
            case 0x14B3F8u: goto label_14b3f8;
            case 0x14B430u: goto label_14b430;
            case 0x14B44Cu: goto label_14b44c;
            case 0x14B460u: goto label_14b460;
            case 0x14B488u: goto label_14b488;
            case 0x14B49Cu: goto label_14b49c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14B56Cu;
    // 0x14b56c: 0x0  nop
    ctx->pc = 0x14b56cu;
    // NOP
}
