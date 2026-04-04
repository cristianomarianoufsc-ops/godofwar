#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DA300
// Address: 0x1da300 - 0x1da598
void sub_001DA300_0x1da300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA300_0x1da300");
#endif

    ctx->pc = 0x1da300u;

    // 0x1da300: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1da300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1da304: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1da304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1da308: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1da308u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da30c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1da30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1da310: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1da310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1da314: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1da314u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1da318: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1da318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1da31c: 0x24846b50  addiu       $a0, $a0, 0x6B50
    ctx->pc = 0x1da31cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27472));
    // 0x1da320: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x1da320u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
    // 0x1da324: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1da324u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da328: 0xc04c992  jal         func_132648
    ctx->pc = 0x1DA328u;
    SET_GPR_U32(ctx, 31, 0x1DA330u);
    ctx->pc = 0x1DA32Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA328u;
            // 0x1da32c: 0xae200048  sw          $zero, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132648u;
    if (runtime->hasFunction(0x132648u)) {
        auto targetFn = runtime->lookupFunction(0x132648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA330u; }
        if (ctx->pc != 0x1DA330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132648_0x132648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA330u; }
        if (ctx->pc != 0x1DA330u) { return; }
    }
    ctx->pc = 0x1DA330u;
    // 0x1da330: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1da330u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1da334: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x1da334u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x1da338: 0xc04c992  jal         func_132648
    ctx->pc = 0x1DA338u;
    SET_GPR_U32(ctx, 31, 0x1DA340u);
    ctx->pc = 0x1DA33Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA338u;
            // 0x1da33c: 0x24846b60  addiu       $a0, $a0, 0x6B60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132648u;
    if (runtime->hasFunction(0x132648u)) {
        auto targetFn = runtime->lookupFunction(0x132648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA340u; }
        if (ctx->pc != 0x1DA340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132648_0x132648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA340u; }
        if (ctx->pc != 0x1DA340u) { return; }
    }
    ctx->pc = 0x1DA340u;
    // 0x1da340: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1da340u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1da344: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x1da344u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x1da348: 0xc04c992  jal         func_132648
    ctx->pc = 0x1DA348u;
    SET_GPR_U32(ctx, 31, 0x1DA350u);
    ctx->pc = 0x1DA34Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA348u;
            // 0x1da34c: 0x24846b70  addiu       $a0, $a0, 0x6B70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132648u;
    if (runtime->hasFunction(0x132648u)) {
        auto targetFn = runtime->lookupFunction(0x132648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA350u; }
        if (ctx->pc != 0x1DA350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132648_0x132648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA350u; }
        if (ctx->pc != 0x1DA350u) { return; }
    }
    ctx->pc = 0x1DA350u;
    // 0x1da350: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1da350u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1da354: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x1da354u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    // 0x1da358: 0xc04c992  jal         func_132648
    ctx->pc = 0x1DA358u;
    SET_GPR_U32(ctx, 31, 0x1DA360u);
    ctx->pc = 0x1DA35Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA358u;
            // 0x1da35c: 0x24846b88  addiu       $a0, $a0, 0x6B88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132648u;
    if (runtime->hasFunction(0x132648u)) {
        auto targetFn = runtime->lookupFunction(0x132648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA360u; }
        if (ctx->pc != 0x1DA360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132648_0x132648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA360u; }
        if (ctx->pc != 0x1DA360u) { return; }
    }
    ctx->pc = 0x1DA360u;
    // 0x1da360: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1da360u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1da364: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x1da364u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x1da368: 0xc04c992  jal         func_132648
    ctx->pc = 0x1DA368u;
    SET_GPR_U32(ctx, 31, 0x1DA370u);
    ctx->pc = 0x1DA36Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA368u;
            // 0x1da36c: 0x24846b98  addiu       $a0, $a0, 0x6B98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132648u;
    if (runtime->hasFunction(0x132648u)) {
        auto targetFn = runtime->lookupFunction(0x132648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA370u; }
        if (ctx->pc != 0x1DA370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132648_0x132648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA370u; }
        if (ctx->pc != 0x1DA370u) { return; }
    }
    ctx->pc = 0x1DA370u;
    // 0x1da370: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1da370u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1da374: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x1da374u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    // 0x1da378: 0xc04c992  jal         func_132648
    ctx->pc = 0x1DA378u;
    SET_GPR_U32(ctx, 31, 0x1DA380u);
    ctx->pc = 0x1DA37Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA378u;
            // 0x1da37c: 0x24846ba8  addiu       $a0, $a0, 0x6BA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132648u;
    if (runtime->hasFunction(0x132648u)) {
        auto targetFn = runtime->lookupFunction(0x132648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA380u; }
        if (ctx->pc != 0x1DA380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132648_0x132648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA380u; }
        if (ctx->pc != 0x1DA380u) { return; }
    }
    ctx->pc = 0x1DA380u;
    // 0x1da380: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1da380u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1da384: 0xae220038  sw          $v0, 0x38($s1)
    ctx->pc = 0x1da384u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
    // 0x1da388: 0xc04c992  jal         func_132648
    ctx->pc = 0x1DA388u;
    SET_GPR_U32(ctx, 31, 0x1DA390u);
    ctx->pc = 0x1DA38Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA388u;
            // 0x1da38c: 0x24846bc0  addiu       $a0, $a0, 0x6BC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132648u;
    if (runtime->hasFunction(0x132648u)) {
        auto targetFn = runtime->lookupFunction(0x132648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA390u; }
        if (ctx->pc != 0x1DA390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132648_0x132648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA390u; }
        if (ctx->pc != 0x1DA390u) { return; }
    }
    ctx->pc = 0x1DA390u;
    // 0x1da390: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1da390u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1da394: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x1da394u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x1da398: 0xc04c992  jal         func_132648
    ctx->pc = 0x1DA398u;
    SET_GPR_U32(ctx, 31, 0x1DA3A0u);
    ctx->pc = 0x1DA39Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA398u;
            // 0x1da39c: 0x24846bd0  addiu       $a0, $a0, 0x6BD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132648u;
    if (runtime->hasFunction(0x132648u)) {
        auto targetFn = runtime->lookupFunction(0x132648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA3A0u; }
        if (ctx->pc != 0x1DA3A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132648_0x132648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA3A0u; }
        if (ctx->pc != 0x1DA3A0u) { return; }
    }
    ctx->pc = 0x1DA3A0u;
    // 0x1da3a0: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x1da3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    // 0x1da3a4: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1da3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1da3a8:
    // 0x1da3a8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1da3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1da3ac: 0x8c500024  lw          $s0, 0x24($v0)
    ctx->pc = 0x1da3acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1da3b0: 0x1200002b  beqz        $s0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1DA3B0u;
    {
        const bool branch_taken_0x1da3b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA3B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA3B0u;
            // 0x1da3b4: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da3b0) {
            ctx->pc = 0x1DA460u;
            goto label_1da460;
        }
    }
    ctx->pc = 0x1DA3B8u;
    // 0x1da3b8: 0x8c42ec94  lw          $v0, -0x136C($v0)
    ctx->pc = 0x1da3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962324)));
    // 0x1da3bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1da3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1da3c0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1da3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1da3c4: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x1da3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1da3c8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DA3C8u;
    {
        const bool branch_taken_0x1da3c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA3C8u;
            // 0x1da3cc: 0x2482ffec  addiu       $v0, $a0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da3c8) {
            ctx->pc = 0x1DA3E0u;
            goto label_1da3e0;
        }
    }
    ctx->pc = 0x1DA3D0u;
    // 0x1da3d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1da3d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da3d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA3D4u;
    {
        const bool branch_taken_0x1da3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA3D4u;
            // 0x1da3d8: 0x44280b  movn        $a1, $v0, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da3d4) {
            ctx->pc = 0x1DA3E4u;
            goto label_1da3e4;
        }
    }
    ctx->pc = 0x1DA3DCu;
    // 0x1da3dc: 0x0  nop
    ctx->pc = 0x1da3dcu;
    // NOP
label_1da3e0:
    // 0x1da3e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1da3e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da3e4:
    // 0x1da3e4: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1DA3E4u;
    {
        const bool branch_taken_0x1da3e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA3E4u;
            // 0x1da3e8: 0x24a600c0  addiu       $a2, $a1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da3e4) {
            ctx->pc = 0x1DA430u;
            goto label_1da430;
        }
    }
    ctx->pc = 0x1DA3ECu;
    // 0x1da3ec: 0xdca200c0  ld          $v0, 0xC0($a1)
    ctx->pc = 0x1da3ecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 192)));
    // 0x1da3f0: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1da3f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1da3f4: 0x31bbc  dsll32      $v1, $v1, 14
    ctx->pc = 0x1da3f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 14));
    // 0x1da3f8: 0x3c07dfff  lui         $a3, 0xDFFF
    ctx->pc = 0x1da3f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57343 << 16));
    // 0x1da3fc: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x1da3fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x1da400: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x1da400u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x1da404: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x1da404u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x1da408: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x1da408u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x1da40c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x1da40cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x1da410: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1da410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1da414: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1da414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da418: 0xfca200c0  sd          $v0, 0xC0($a1)
    ctx->pc = 0x1da418u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 192), GPR_U64(ctx, 2));
    // 0x1da41c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1da41cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1da420: 0xdcc20008  ld          $v0, 0x8($a2)
    ctx->pc = 0x1da420u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1da424: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x1da424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x1da428: 0xc05420c  jal         func_150830
    ctx->pc = 0x1DA428u;
    SET_GPR_U32(ctx, 31, 0x1DA430u);
    ctx->pc = 0x1DA42Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA428u;
            // 0x1da42c: 0xfcc20008  sd          $v0, 0x8($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x150830u;
    if (runtime->hasFunction(0x150830u)) {
        auto targetFn = runtime->lookupFunction(0x150830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA430u; }
        if (ctx->pc != 0x1DA430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_150830_0x1508a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA430u; }
        if (ctx->pc != 0x1DA430u) { return; }
    }
    ctx->pc = 0x1DA430u;
label_1da430:
    // 0x1da430: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x1da430u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1da434: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1da434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1da438: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1da438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1da43c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1da43cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1da440: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1da440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1da444: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1da444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da448: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1da448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1da44c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1da44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1da450: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1da450u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1da454: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1da454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1da458: 0x40f809  jalr        $v0
    ctx->pc = 0x1DA458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DA460u);
        ctx->pc = 0x1DA45Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA458u;
            // 0x1da45c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DA460u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DA3A8u: goto label_1da3a8;
            case 0x1DA3E0u: goto label_1da3e0;
            case 0x1DA3E4u: goto label_1da3e4;
            case 0x1DA430u: goto label_1da430;
            case 0x1DA460u: goto label_1da460;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DA460u; }
            if (ctx->pc != 0x1DA460u) { return; }
        }
        }
    }
    ctx->pc = 0x1DA460u;
label_1da460:
    // 0x1da460: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1da460u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1da464: 0x2a420008  slti        $v0, $s2, 0x8
    ctx->pc = 0x1da464u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1da468: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x1DA468u;
    {
        const bool branch_taken_0x1da468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA46Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA468u;
            // 0x1da46c: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da468) {
            ctx->pc = 0x1DA3A8u;
            runtime->cooperativeGuestYield();
            goto label_1da3a8;
        }
    }
    ctx->pc = 0x1DA470u;
    // 0x1da470: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1da470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1da474: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1da474u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1da478: 0x24846be0  addiu       $a0, $a0, 0x6BE0
    ctx->pc = 0x1da478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27616));
    // 0x1da47c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1da47cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da480: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1da480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1da484: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x1DA484u;
    SET_GPR_U32(ctx, 31, 0x1DA48Cu);
    ctx->pc = 0x1DA488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA484u;
            // 0x1da488: 0x8c500104  lw          $s0, 0x104($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA48Cu; }
        if (ctx->pc != 0x1DA48Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA48Cu; }
        if (ctx->pc != 0x1DA48Cu) { return; }
    }
    ctx->pc = 0x1DA48Cu;
    // 0x1da48c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da490: 0xc04e0d8  jal         func_138360
    ctx->pc = 0x1DA490u;
    SET_GPR_U32(ctx, 31, 0x1DA498u);
    ctx->pc = 0x1DA494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA490u;
            // 0x1da494: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138360u;
    if (runtime->hasFunction(0x138360u)) {
        auto targetFn = runtime->lookupFunction(0x138360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA498u; }
        if (ctx->pc != 0x1DA498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_138360_0x1383a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA498u; }
        if (ctx->pc != 0x1DA498u) { return; }
    }
    ctx->pc = 0x1DA498u;
    // 0x1da498: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1da498u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1da49c: 0xa6220014  sh          $v0, 0x14($s1)
    ctx->pc = 0x1da49cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x1da4a0: 0x248469f0  addiu       $a0, $a0, 0x69F0
    ctx->pc = 0x1da4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27120));
    // 0x1da4a4: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x1DA4A4u;
    SET_GPR_U32(ctx, 31, 0x1DA4ACu);
    ctx->pc = 0x1DA4A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA4A4u;
            // 0x1da4a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA4ACu; }
        if (ctx->pc != 0x1DA4ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA4ACu; }
        if (ctx->pc != 0x1DA4ACu) { return; }
    }
    ctx->pc = 0x1DA4ACu;
    // 0x1da4ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da4acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da4b0: 0xc04e0d8  jal         func_138360
    ctx->pc = 0x1DA4B0u;
    SET_GPR_U32(ctx, 31, 0x1DA4B8u);
    ctx->pc = 0x1DA4B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA4B0u;
            // 0x1da4b4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138360u;
    if (runtime->hasFunction(0x138360u)) {
        auto targetFn = runtime->lookupFunction(0x138360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA4B8u; }
        if (ctx->pc != 0x1DA4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_138360_0x1383a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA4B8u; }
        if (ctx->pc != 0x1DA4B8u) { return; }
    }
    ctx->pc = 0x1DA4B8u;
    // 0x1da4b8: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1da4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1da4bc: 0xa6220016  sh          $v0, 0x16($s1)
    ctx->pc = 0x1da4bcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x1da4c0: 0x24846bf0  addiu       $a0, $a0, 0x6BF0
    ctx->pc = 0x1da4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27632));
    // 0x1da4c4: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x1DA4C4u;
    SET_GPR_U32(ctx, 31, 0x1DA4CCu);
    ctx->pc = 0x1DA4C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA4C4u;
            // 0x1da4c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA4CCu; }
        if (ctx->pc != 0x1DA4CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA4CCu; }
        if (ctx->pc != 0x1DA4CCu) { return; }
    }
    ctx->pc = 0x1DA4CCu;
    // 0x1da4cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da4ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da4d0: 0xc04e0d8  jal         func_138360
    ctx->pc = 0x1DA4D0u;
    SET_GPR_U32(ctx, 31, 0x1DA4D8u);
    ctx->pc = 0x1DA4D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA4D0u;
            // 0x1da4d4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138360u;
    if (runtime->hasFunction(0x138360u)) {
        auto targetFn = runtime->lookupFunction(0x138360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA4D8u; }
        if (ctx->pc != 0x1DA4D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_138360_0x1383a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA4D8u; }
        if (ctx->pc != 0x1DA4D8u) { return; }
    }
    ctx->pc = 0x1DA4D8u;
    // 0x1da4d8: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1da4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1da4dc: 0xa6220018  sh          $v0, 0x18($s1)
    ctx->pc = 0x1da4dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x1da4e0: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x1da4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
    // 0x1da4e4: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x1DA4E4u;
    SET_GPR_U32(ctx, 31, 0x1DA4ECu);
    ctx->pc = 0x1DA4E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA4E4u;
            // 0x1da4e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA4ECu; }
        if (ctx->pc != 0x1DA4ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA4ECu; }
        if (ctx->pc != 0x1DA4ECu) { return; }
    }
    ctx->pc = 0x1DA4ECu;
    // 0x1da4ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da4f0: 0xc04e0d8  jal         func_138360
    ctx->pc = 0x1DA4F0u;
    SET_GPR_U32(ctx, 31, 0x1DA4F8u);
    ctx->pc = 0x1DA4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA4F0u;
            // 0x1da4f4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138360u;
    if (runtime->hasFunction(0x138360u)) {
        auto targetFn = runtime->lookupFunction(0x138360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA4F8u; }
        if (ctx->pc != 0x1DA4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_138360_0x1383a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA4F8u; }
        if (ctx->pc != 0x1DA4F8u) { return; }
    }
    ctx->pc = 0x1DA4F8u;
    // 0x1da4f8: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1da4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1da4fc: 0xa622001a  sh          $v0, 0x1A($s1)
    ctx->pc = 0x1da4fcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 26), (uint16_t)GPR_U32(ctx, 2));
    // 0x1da500: 0x24846c08  addiu       $a0, $a0, 0x6C08
    ctx->pc = 0x1da500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27656));
    // 0x1da504: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x1DA504u;
    SET_GPR_U32(ctx, 31, 0x1DA50Cu);
    ctx->pc = 0x1DA508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA504u;
            // 0x1da508: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA50Cu; }
        if (ctx->pc != 0x1DA50Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA50Cu; }
        if (ctx->pc != 0x1DA50Cu) { return; }
    }
    ctx->pc = 0x1DA50Cu;
    // 0x1da50c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da510: 0xc04e0d8  jal         func_138360
    ctx->pc = 0x1DA510u;
    SET_GPR_U32(ctx, 31, 0x1DA518u);
    ctx->pc = 0x1DA514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA510u;
            // 0x1da514: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138360u;
    if (runtime->hasFunction(0x138360u)) {
        auto targetFn = runtime->lookupFunction(0x138360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA518u; }
        if (ctx->pc != 0x1DA518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_138360_0x1383a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA518u; }
        if (ctx->pc != 0x1DA518u) { return; }
    }
    ctx->pc = 0x1DA518u;
    // 0x1da518: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1da518u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1da51c: 0xa622001c  sh          $v0, 0x1C($s1)
    ctx->pc = 0x1da51cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 28), (uint16_t)GPR_U32(ctx, 2));
    // 0x1da520: 0x24846c10  addiu       $a0, $a0, 0x6C10
    ctx->pc = 0x1da520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27664));
    // 0x1da524: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x1DA524u;
    SET_GPR_U32(ctx, 31, 0x1DA52Cu);
    ctx->pc = 0x1DA528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA524u;
            // 0x1da528: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA52Cu; }
        if (ctx->pc != 0x1DA52Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA52Cu; }
        if (ctx->pc != 0x1DA52Cu) { return; }
    }
    ctx->pc = 0x1DA52Cu;
    // 0x1da52c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da530: 0xc04e0d8  jal         func_138360
    ctx->pc = 0x1DA530u;
    SET_GPR_U32(ctx, 31, 0x1DA538u);
    ctx->pc = 0x1DA534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA530u;
            // 0x1da534: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138360u;
    if (runtime->hasFunction(0x138360u)) {
        auto targetFn = runtime->lookupFunction(0x138360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA538u; }
        if (ctx->pc != 0x1DA538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_138360_0x1383a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA538u; }
        if (ctx->pc != 0x1DA538u) { return; }
    }
    ctx->pc = 0x1DA538u;
    // 0x1da538: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1da538u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1da53c: 0xa622001e  sh          $v0, 0x1E($s1)
    ctx->pc = 0x1da53cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 30), (uint16_t)GPR_U32(ctx, 2));
    // 0x1da540: 0x24846c20  addiu       $a0, $a0, 0x6C20
    ctx->pc = 0x1da540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27680));
    // 0x1da544: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x1DA544u;
    SET_GPR_U32(ctx, 31, 0x1DA54Cu);
    ctx->pc = 0x1DA548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA544u;
            // 0x1da548: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA54Cu; }
        if (ctx->pc != 0x1DA54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA54Cu; }
        if (ctx->pc != 0x1DA54Cu) { return; }
    }
    ctx->pc = 0x1DA54Cu;
    // 0x1da54c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da550: 0xc04e0d8  jal         func_138360
    ctx->pc = 0x1DA550u;
    SET_GPR_U32(ctx, 31, 0x1DA558u);
    ctx->pc = 0x1DA554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA550u;
            // 0x1da554: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138360u;
    if (runtime->hasFunction(0x138360u)) {
        auto targetFn = runtime->lookupFunction(0x138360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA558u; }
        if (ctx->pc != 0x1DA558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_138360_0x1383a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA558u; }
        if (ctx->pc != 0x1DA558u) { return; }
    }
    ctx->pc = 0x1DA558u;
    // 0x1da558: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1da558u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1da55c: 0xa6220020  sh          $v0, 0x20($s1)
    ctx->pc = 0x1da55cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x1da560: 0x24846c28  addiu       $a0, $a0, 0x6C28
    ctx->pc = 0x1da560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27688));
    // 0x1da564: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x1DA564u;
    SET_GPR_U32(ctx, 31, 0x1DA56Cu);
    ctx->pc = 0x1DA568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA564u;
            // 0x1da568: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA56Cu; }
        if (ctx->pc != 0x1DA56Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA56Cu; }
        if (ctx->pc != 0x1DA56Cu) { return; }
    }
    ctx->pc = 0x1DA56Cu;
    // 0x1da56c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da570: 0xc04e0d8  jal         func_138360
    ctx->pc = 0x1DA570u;
    SET_GPR_U32(ctx, 31, 0x1DA578u);
    ctx->pc = 0x1DA574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA570u;
            // 0x1da574: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138360u;
    if (runtime->hasFunction(0x138360u)) {
        auto targetFn = runtime->lookupFunction(0x138360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA578u; }
        if (ctx->pc != 0x1DA578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_138360_0x1383a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA578u; }
        if (ctx->pc != 0x1DA578u) { return; }
    }
    ctx->pc = 0x1DA578u;
    // 0x1da578: 0xa6220022  sh          $v0, 0x22($s1)
    ctx->pc = 0x1da578u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x1da57c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1da57cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1da580: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1da580u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1da584: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1da584u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da588: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1da588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da58c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA58Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA58Cu;
            // 0x1da590: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DA3A8u: goto label_1da3a8;
            case 0x1DA3E0u: goto label_1da3e0;
            case 0x1DA3E4u: goto label_1da3e4;
            case 0x1DA430u: goto label_1da430;
            case 0x1DA460u: goto label_1da460;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DA594u;
    // 0x1da594: 0x0  nop
    ctx->pc = 0x1da594u;
    // NOP
}
