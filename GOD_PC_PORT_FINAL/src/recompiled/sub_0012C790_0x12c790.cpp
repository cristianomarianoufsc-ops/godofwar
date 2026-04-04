#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012C790
// Address: 0x12c790 - 0x12c908
void sub_0012C790_0x12c790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012C790_0x12c790");
#endif

    ctx->pc = 0x12c790u;

    // 0x12c790: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12c790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12c794: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x12c794u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x12c798: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x12c798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x12c79c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12c79cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c7a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12c7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12c7a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12c7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12c7a8: 0xc04fd50  jal         func_13F540
    ctx->pc = 0x12C7A8u;
    SET_GPR_U32(ctx, 31, 0x12C7B0u);
    ctx->pc = 0x12C7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C7A8u;
            // 0x12c7ac: 0x3c110033  lui         $s1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F540u;
    if (runtime->hasFunction(0x13F540u)) {
        auto targetFn = runtime->lookupFunction(0x13F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C7B0u; }
        if (ctx->pc != 0x12C7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0013f540_0x13f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C7B0u; }
        if (ctx->pc != 0x12C7B0u) { return; }
    }
    ctx->pc = 0x12C7B0u;
    // 0x12c7b0: 0x8e22f168  lw          $v0, -0xE98($s1)
    ctx->pc = 0x12c7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x12c7b4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x12c7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x12c7b8: 0x8e22f168  lw          $v0, -0xE98($s1)
    ctx->pc = 0x12c7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x12c7bc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x12c7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x12c7c0: 0xc04fe88  jal         func_13FA20
    ctx->pc = 0x12C7C0u;
    SET_GPR_U32(ctx, 31, 0x12C7C8u);
    ctx->pc = 0x12C7C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C7C0u;
            // 0x12c7c4: 0xae22f168  sw          $v0, -0xE98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA20u;
    if (runtime->hasFunction(0x13FA20u)) {
        auto targetFn = runtime->lookupFunction(0x13FA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C7C8u; }
        if (ctx->pc != 0x12C7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa20_0x13fa48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C7C8u; }
        if (ctx->pc != 0x12C7C8u) { return; }
    }
    ctx->pc = 0x12C7C8u;
    // 0x12c7c8: 0x8e22f168  lw          $v0, -0xE98($s1)
    ctx->pc = 0x12c7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x12c7cc: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x12c7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x12c7d0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x12c7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x12c7d4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x12c7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x12c7d8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x12c7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x12c7dc: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x12c7dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x12c7e0: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x12c7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x12c7e4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x12c7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x12c7e8: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x12c7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x12c7ec: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x12c7ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12c7f0: 0x73c78  dsll        $a3, $a3, 17
    ctx->pc = 0x12c7f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 17);
    // 0x12c7f4: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x12c7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x12c7f8: 0x2404004f  addiu       $a0, $zero, 0x4F
    ctx->pc = 0x12c7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x12c7fc: 0x9cc2f19c  lwu         $v0, -0xE64($a2)
    ctx->pc = 0x12c7fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4294963612)));
    // 0x12c800: 0x9c63f1a0  lwu         $v1, -0xE60($v1)
    ctx->pc = 0x12c800u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294963616)));
    // 0x12c804: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x12c804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x12c808: 0x8e25f168  lw          $a1, -0xE98($s1)
    ctx->pc = 0x12c808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x12c80c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x12c80cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x12c810: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x12c810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x12c814: 0xfca40018  sd          $a0, 0x18($a1)
    ctx->pc = 0x12c814u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 4));
    // 0x12c818: 0xfca30010  sd          $v1, 0x10($a1)
    ctx->pc = 0x12c818u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
    // 0x12c81c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x12c81cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c820: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x12c820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x12c824: 0x3c0a0003  lui         $t2, 0x3
    ctx->pc = 0x12c824u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)3 << 16));
    // 0x12c828: 0x8c44dd58  lw          $a0, -0x22A8($v0)
    ctx->pc = 0x12c828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958424)));
    // 0x12c82c: 0x24080019  addiu       $t0, $zero, 0x19
    ctx->pc = 0x12c82cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x12c830: 0x2442dd58  addiu       $v0, $v0, -0x22A8
    ctx->pc = 0x12c830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958424));
    // 0x12c834: 0x3c093f80  lui         $t1, 0x3F80
    ctx->pc = 0x12c834u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16256 << 16));
    // 0x12c838: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x12c838u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x12c83c: 0x35297f00  ori         $t1, $t1, 0x7F00
    ctx->pc = 0x12c83cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32512);
    // 0x12c840: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x12c840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x12c844: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x12c844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x12c848: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x12c848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x12c84c: 0x24070048  addiu       $a3, $zero, 0x48
    ctx->pc = 0x12c84cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x12c850: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12c850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12c854: 0x31c3a  dsrl        $v1, $v1, 16
    ctx->pc = 0x12c854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 16);
    // 0x12c858: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x12c858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x12c85c: 0x24060043  addiu       $a2, $zero, 0x43
    ctx->pc = 0x12c85cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x12c860: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x12c860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x12c864: 0xfca70028  sd          $a3, 0x28($a1)
    ctx->pc = 0x12c864u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 40), GPR_U64(ctx, 7));
    // 0x12c868: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x12c868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x12c86c: 0xfca30040  sd          $v1, 0x40($a1)
    ctx->pc = 0x12c86cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 64), GPR_U64(ctx, 3));
    // 0x12c870: 0xfca20048  sd          $v0, 0x48($a1)
    ctx->pc = 0x12c870u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 72), GPR_U64(ctx, 2));
    // 0x12c874: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x12c874u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x12c878: 0xfca60058  sd          $a2, 0x58($a1)
    ctx->pc = 0x12c878u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 88), GPR_U64(ctx, 6));
    // 0x12c87c: 0x24a20080  addiu       $v0, $a1, 0x80
    ctx->pc = 0x12c87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x12c880: 0xfcaa0020  sd          $t2, 0x20($a1)
    ctx->pc = 0x12c880u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 10));
    // 0x12c884: 0x42182  srl         $a0, $a0, 6
    ctx->pc = 0x12c884u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
    // 0x12c888: 0xfca80038  sd          $t0, 0x38($a1)
    ctx->pc = 0x12c888u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 56), GPR_U64(ctx, 8));
    // 0x12c88c: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x12c88cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x12c890: 0xfca90060  sd          $t1, 0x60($a1)
    ctx->pc = 0x12c890u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 96), GPR_U64(ctx, 9));
    // 0x12c894: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x12c894u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x12c898: 0xfcab0068  sd          $t3, 0x68($a1)
    ctx->pc = 0x12c898u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 104), GPR_U64(ctx, 11));
    // 0x12c89c: 0x4243a  dsrl        $a0, $a0, 16
    ctx->pc = 0x12c89cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 16);
    // 0x12c8a0: 0xfca00030  sd          $zero, 0x30($a1)
    ctx->pc = 0x12c8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 48), GPR_U64(ctx, 0));
    // 0x12c8a4: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x12c8a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x12c8a8: 0xfca00050  sd          $zero, 0x50($a1)
    ctx->pc = 0x12c8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 80), GPR_U64(ctx, 0));
    // 0x12c8ac: 0x2048025  or          $s0, $s0, $a0
    ctx->pc = 0x12c8acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x12c8b0: 0xae22f168  sw          $v0, -0xE98($s1)
    ctx->pc = 0x12c8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294963560), GPR_U32(ctx, 2));
    // 0x12c8b4: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x12c8b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x12c8b8: 0x34c600ff  ori         $a2, $a2, 0xFF
    ctx->pc = 0x12c8b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)255);
    // 0x12c8bc: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x12c8bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x12c8c0: 0x9ce2f1a8  lwu         $v0, -0xE58($a3)
    ctx->pc = 0x12c8c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 4294963624)));
    // 0x12c8c4: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x12c8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x12c8c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12c8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c8cc: 0xfca30078  sd          $v1, 0x78($a1)
    ctx->pc = 0x12c8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 120), GPR_U64(ctx, 3));
    // 0x12c8d0: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x12c8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x12c8d4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x12c8d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x12c8d8: 0x2068025  or          $s0, $s0, $a2
    ctx->pc = 0x12c8d8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 6));
    // 0x12c8dc: 0xc048222  jal         func_120888
    ctx->pc = 0x12C8DCu;
    SET_GPR_U32(ctx, 31, 0x12C8E4u);
    ctx->pc = 0x12C8E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C8DCu;
            // 0x12c8e0: 0xfcb00070  sd          $s0, 0x70($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 112), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120888u;
    if (runtime->hasFunction(0x120888u)) {
        auto targetFn = runtime->lookupFunction(0x120888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C8E4u; }
        if (ctx->pc != 0x12C8E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120888_0x120888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C8E4u; }
        if (ctx->pc != 0x12C8E4u) { return; }
    }
    ctx->pc = 0x12C8E4u;
    // 0x12c8e4: 0xc04fe92  jal         func_13FA48
    ctx->pc = 0x12C8E4u;
    SET_GPR_U32(ctx, 31, 0x12C8ECu);
    ctx->pc = 0x13FA48u;
    if (runtime->hasFunction(0x13FA48u)) {
        auto targetFn = runtime->lookupFunction(0x13FA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C8ECu; }
        if (ctx->pc != 0x12C8ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa48_0x13fa78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C8ECu; }
        if (ctx->pc != 0x12C8ECu) { return; }
    }
    ctx->pc = 0x12C8ECu;
    // 0x12c8ec: 0xc04fd78  jal         func_13F5E0
    ctx->pc = 0x12C8ECu;
    SET_GPR_U32(ctx, 31, 0x12C8F4u);
    ctx->pc = 0x13F5E0u;
    if (runtime->hasFunction(0x13F5E0u)) {
        auto targetFn = runtime->lookupFunction(0x13F5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C8F4u; }
        if (ctx->pc != 0x12C8F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f5e0_0x13f648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C8F4u; }
        if (ctx->pc != 0x12C8F4u) { return; }
    }
    ctx->pc = 0x12C8F4u;
    // 0x12c8f4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x12c8f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12c8f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12c8f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12c8fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12c8fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c900: 0x3e00008  jr          $ra
    ctx->pc = 0x12C900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C900u;
            // 0x12c904: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12C908u;
}
