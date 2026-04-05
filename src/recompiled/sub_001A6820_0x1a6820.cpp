#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A6820
// Address: 0x1a6820 - 0x1a6bd0
void sub_001A6820_0x1a6820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6820_0x1a6820");
#endif

    ctx->pc = 0x1a6820u;

    // 0x1a6820: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x1a6820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x1a6824: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a6824u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a6828: 0x24041000  addiu       $a0, $zero, 0x1000
    ctx->pc = 0x1a6828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1a682c: 0x24427380  addiu       $v0, $v0, 0x7380
    ctx->pc = 0x1a682cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29568));
    // 0x1a6830: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1a6830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a6834: 0xa7a40008  sh          $a0, 0x8($sp)
    ctx->pc = 0x1a6834u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x1a6838: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1a6838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1a683c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a683cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6840: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1a6840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1a6844: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a6844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6848: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a6848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a684c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1a684cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1a6850: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x1a6850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x1a6854: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1a6854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1a6858: 0xa7a0000a  sh          $zero, 0xA($sp)
    ctx->pc = 0x1a6858u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a685c: 0xa7a00022  sh          $zero, 0x22($sp)
    ctx->pc = 0x1a685cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a6860: 0xa7a00020  sh          $zero, 0x20($sp)
    ctx->pc = 0x1a6860u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a6864: 0x0  nop
    ctx->pc = 0x1a6864u;
    // NOP
label_1a6868:
    // 0x1a6868: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1a6868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a686c: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x1a686cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x1a6870: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a6870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a6874: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a6874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a6878: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x1a6878u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1a687c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A687Cu;
    {
        const bool branch_taken_0x1a687c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A6880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A687Cu;
            // 0x1a6880: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a687c) {
            ctx->pc = 0x1A6868u;
            runtime->cooperativeGuestYield();
            goto label_1a6868;
        }
    }
    ctx->pc = 0x1A6884u;
    // 0x1a6884: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x1a6884u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
    // 0x1a6888: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x1a6888u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
    // 0x1a688c: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x1a688cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
    // 0x1a6890: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1a6890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1a6894: 0x2451e848  addiu       $s1, $v0, -0x17B8
    ctx->pc = 0x1a6894u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1a6898: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a6898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a689c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1a689cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1a68a0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1a68a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1a68a4: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x1a68a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1a68a8: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x1a68a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1a68ac: 0x40f809  jalr        $v0
    ctx->pc = 0x1A68ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A68B4u);
        ctx->pc = 0x1A68B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A68ACu;
            // 0x1a68b0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A68B4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A6868u: goto label_1a6868;
            case 0x1A68C8u: goto label_1a68c8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A68B4u; }
            if (ctx->pc != 0x1A68B4u) { return; }
        }
        }
    }
    ctx->pc = 0x1A68B4u;
    // 0x1a68b4: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x1a68b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1a68b8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A68B8u;
    {
        const bool branch_taken_0x1a68b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A68BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A68B8u;
            // 0x1a68bc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a68b8) {
            ctx->pc = 0x1A68C8u;
            goto label_1a68c8;
        }
    }
    ctx->pc = 0x1A68C0u;
    // 0x1a68c0: 0xc04f5b0  jal         func_13D6C0
    ctx->pc = 0x1A68C0u;
    SET_GPR_U32(ctx, 31, 0x1A68C8u);
    ctx->pc = 0x13D6C0u;
    if (runtime->hasFunction(0x13D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x13D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A68C8u; }
        if (ctx->pc != 0x1A68C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D6C0_0x13d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A68C8u; }
        if (ctx->pc != 0x1A68C8u) { return; }
    }
    ctx->pc = 0x1A68C8u;
label_1a68c8:
    // 0x1a68c8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x1a68c8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a68cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a68ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a68d0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1a68d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1a68d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a68d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a68d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a68d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a68dc: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1a68dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1a68e0: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1a68e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1a68e4: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1a68e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1a68e8: 0x40f809  jalr        $v0
    ctx->pc = 0x1A68E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A68F0u);
        ctx->pc = 0x1A68ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A68E8u;
            // 0x1a68ec: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A68F0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A6868u: goto label_1a6868;
            case 0x1A68C8u: goto label_1a68c8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A68F0u; }
            if (ctx->pc != 0x1A68F0u) { return; }
        }
        }
    }
    ctx->pc = 0x1A68F0u;
    // 0x1a68f0: 0xc04f824  jal         func_13E090
    ctx->pc = 0x1A68F0u;
    SET_GPR_U32(ctx, 31, 0x1A68F8u);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A68F8u; }
        if (ctx->pc != 0x1A68F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A68F8u; }
        if (ctx->pc != 0x1A68F8u) { return; }
    }
    ctx->pc = 0x1A68F8u;
    // 0x1a68f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a68f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a68fc: 0x240500b0  addiu       $a1, $zero, 0xB0
    ctx->pc = 0x1a68fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x1a6900: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1a6900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1a6904: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x1a6904u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1a6908: 0xc04f644  jal         func_13D910
    ctx->pc = 0x1A6908u;
    SET_GPR_U32(ctx, 31, 0x1A6910u);
    ctx->pc = 0x1A690Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6908u;
            // 0x1a690c: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D910u;
    if (runtime->hasFunction(0x13D910u)) {
        auto targetFn = runtime->lookupFunction(0x13D910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6910u; }
        if (ctx->pc != 0x1A6910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D910_0x13d910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6910u; }
        if (ctx->pc != 0x1A6910u) { return; }
    }
    ctx->pc = 0x1A6910u;
    // 0x1a6910: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1a6910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1a6914: 0xc04f824  jal         func_13E090
    ctx->pc = 0x1A6914u;
    SET_GPR_U32(ctx, 31, 0x1A691Cu);
    ctx->pc = 0x1A6918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6914u;
            // 0x1a6918: 0xac62ca04  sw          $v0, -0x35FC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294953476), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A691Cu; }
        if (ctx->pc != 0x1A691Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A691Cu; }
        if (ctx->pc != 0x1A691Cu) { return; }
    }
    ctx->pc = 0x1A691Cu;
    // 0x1a691c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a691cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6920: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x1a6920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1a6924: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1a6924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1a6928: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1a6928u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1a692c: 0xc04f644  jal         func_13D910
    ctx->pc = 0x1A692Cu;
    SET_GPR_U32(ctx, 31, 0x1A6934u);
    ctx->pc = 0x1A6930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A692Cu;
            // 0x1a6930: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D910u;
    if (runtime->hasFunction(0x13D910u)) {
        auto targetFn = runtime->lookupFunction(0x13D910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6934u; }
        if (ctx->pc != 0x1A6934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D910_0x13d910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6934u; }
        if (ctx->pc != 0x1A6934u) { return; }
    }
    ctx->pc = 0x1A6934u;
    // 0x1a6934: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1a6934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1a6938: 0xc04f824  jal         func_13E090
    ctx->pc = 0x1A6938u;
    SET_GPR_U32(ctx, 31, 0x1A6940u);
    ctx->pc = 0x1A693Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6938u;
            // 0x1a693c: 0xac62ca08  sw          $v0, -0x35F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294953480), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6940u; }
        if (ctx->pc != 0x1A6940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6940u; }
        if (ctx->pc != 0x1A6940u) { return; }
    }
    ctx->pc = 0x1A6940u;
    // 0x1a6940: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a6940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6944: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1a6944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1a6948: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1a6948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1a694c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1a694cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1a6950: 0xc04f644  jal         func_13D910
    ctx->pc = 0x1A6950u;
    SET_GPR_U32(ctx, 31, 0x1A6958u);
    ctx->pc = 0x1A6954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6950u;
            // 0x1a6954: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D910u;
    if (runtime->hasFunction(0x13D910u)) {
        auto targetFn = runtime->lookupFunction(0x13D910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6958u; }
        if (ctx->pc != 0x1A6958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D910_0x13d910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6958u; }
        if (ctx->pc != 0x1A6958u) { return; }
    }
    ctx->pc = 0x1A6958u;
    // 0x1a6958: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1a6958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1a695c: 0xc04f824  jal         func_13E090
    ctx->pc = 0x1A695Cu;
    SET_GPR_U32(ctx, 31, 0x1A6964u);
    ctx->pc = 0x1A6960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A695Cu;
            // 0x1a6960: 0xac62ca0c  sw          $v0, -0x35F4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294953484), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6964u; }
        if (ctx->pc != 0x1A6964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6964u; }
        if (ctx->pc != 0x1A6964u) { return; }
    }
    ctx->pc = 0x1A6964u;
    // 0x1a6964: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a6964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6968: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1a6968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1a696c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1a696cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1a6970: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x1a6970u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1a6974: 0xc04f644  jal         func_13D910
    ctx->pc = 0x1A6974u;
    SET_GPR_U32(ctx, 31, 0x1A697Cu);
    ctx->pc = 0x1A6978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6974u;
            // 0x1a6978: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D910u;
    if (runtime->hasFunction(0x13D910u)) {
        auto targetFn = runtime->lookupFunction(0x13D910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A697Cu; }
        if (ctx->pc != 0x1A697Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D910_0x13d910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A697Cu; }
        if (ctx->pc != 0x1A697Cu) { return; }
    }
    ctx->pc = 0x1A697Cu;
    // 0x1a697c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1a697cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1a6980: 0xc04f824  jal         func_13E090
    ctx->pc = 0x1A6980u;
    SET_GPR_U32(ctx, 31, 0x1A6988u);
    ctx->pc = 0x1A6984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6980u;
            // 0x1a6984: 0xac62ca10  sw          $v0, -0x35F0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294953488), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6988u; }
        if (ctx->pc != 0x1A6988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6988u; }
        if (ctx->pc != 0x1A6988u) { return; }
    }
    ctx->pc = 0x1A6988u;
    // 0x1a6988: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a6988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a698c: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x1a698cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1a6990: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1a6990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a6994: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1a6994u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a6998: 0xc04f644  jal         func_13D910
    ctx->pc = 0x1A6998u;
    SET_GPR_U32(ctx, 31, 0x1A69A0u);
    ctx->pc = 0x1A699Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6998u;
            // 0x1a699c: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D910u;
    if (runtime->hasFunction(0x13D910u)) {
        auto targetFn = runtime->lookupFunction(0x13D910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A69A0u; }
        if (ctx->pc != 0x1A69A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D910_0x13d910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A69A0u; }
        if (ctx->pc != 0x1A69A0u) { return; }
    }
    ctx->pc = 0x1A69A0u;
    // 0x1a69a0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1a69a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1a69a4: 0xc04f824  jal         func_13E090
    ctx->pc = 0x1A69A4u;
    SET_GPR_U32(ctx, 31, 0x1A69ACu);
    ctx->pc = 0x1A69A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A69A4u;
            // 0x1a69a8: 0xac62ca14  sw          $v0, -0x35EC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294953492), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A69ACu; }
        if (ctx->pc != 0x1A69ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A69ACu; }
        if (ctx->pc != 0x1A69ACu) { return; }
    }
    ctx->pc = 0x1A69ACu;
    // 0x1a69ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a69acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a69b0: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1a69b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1a69b4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1a69b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1a69b8: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x1a69b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1a69bc: 0xc04f644  jal         func_13D910
    ctx->pc = 0x1A69BCu;
    SET_GPR_U32(ctx, 31, 0x1A69C4u);
    ctx->pc = 0x1A69C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A69BCu;
            // 0x1a69c0: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D910u;
    if (runtime->hasFunction(0x13D910u)) {
        auto targetFn = runtime->lookupFunction(0x13D910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A69C4u; }
        if (ctx->pc != 0x1A69C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D910_0x13d910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A69C4u; }
        if (ctx->pc != 0x1A69C4u) { return; }
    }
    ctx->pc = 0x1A69C4u;
    // 0x1a69c4: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1a69c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1a69c8: 0xc04f824  jal         func_13E090
    ctx->pc = 0x1A69C8u;
    SET_GPR_U32(ctx, 31, 0x1A69D0u);
    ctx->pc = 0x1A69CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A69C8u;
            // 0x1a69cc: 0xac62ca18  sw          $v0, -0x35E8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294953496), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A69D0u; }
        if (ctx->pc != 0x1A69D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A69D0u; }
        if (ctx->pc != 0x1A69D0u) { return; }
    }
    ctx->pc = 0x1A69D0u;
    // 0x1a69d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a69d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a69d4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1a69d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1a69d8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1a69d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1a69dc: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1a69dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1a69e0: 0xc04f644  jal         func_13D910
    ctx->pc = 0x1A69E0u;
    SET_GPR_U32(ctx, 31, 0x1A69E8u);
    ctx->pc = 0x1A69E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A69E0u;
            // 0x1a69e4: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D910u;
    if (runtime->hasFunction(0x13D910u)) {
        auto targetFn = runtime->lookupFunction(0x13D910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A69E8u; }
        if (ctx->pc != 0x1A69E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D910_0x13d910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A69E8u; }
        if (ctx->pc != 0x1A69E8u) { return; }
    }
    ctx->pc = 0x1A69E8u;
    // 0x1a69e8: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1a69e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1a69ec: 0xc04f824  jal         func_13E090
    ctx->pc = 0x1A69ECu;
    SET_GPR_U32(ctx, 31, 0x1A69F4u);
    ctx->pc = 0x1A69F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A69ECu;
            // 0x1a69f0: 0xac62ca1c  sw          $v0, -0x35E4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294953500), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A69F4u; }
        if (ctx->pc != 0x1A69F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A69F4u; }
        if (ctx->pc != 0x1A69F4u) { return; }
    }
    ctx->pc = 0x1A69F4u;
    // 0x1a69f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a69f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a69f8: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1a69f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1a69fc: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1a69fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1a6a00: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1a6a00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1a6a04: 0xc04f644  jal         func_13D910
    ctx->pc = 0x1A6A04u;
    SET_GPR_U32(ctx, 31, 0x1A6A0Cu);
    ctx->pc = 0x1A6A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6A04u;
            // 0x1a6a08: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D910u;
    if (runtime->hasFunction(0x13D910u)) {
        auto targetFn = runtime->lookupFunction(0x13D910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6A0Cu; }
        if (ctx->pc != 0x1A6A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D910_0x13d910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6A0Cu; }
        if (ctx->pc != 0x1A6A0Cu) { return; }
    }
    ctx->pc = 0x1A6A0Cu;
    // 0x1a6a0c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1a6a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1a6a10: 0xc04f824  jal         func_13E090
    ctx->pc = 0x1A6A10u;
    SET_GPR_U32(ctx, 31, 0x1A6A18u);
    ctx->pc = 0x1A6A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6A10u;
            // 0x1a6a14: 0xac62ca20  sw          $v0, -0x35E0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294953504), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6A18u; }
        if (ctx->pc != 0x1A6A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6A18u; }
        if (ctx->pc != 0x1A6A18u) { return; }
    }
    ctx->pc = 0x1A6A18u;
    // 0x1a6a18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a6a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6a1c: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x1a6a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1a6a20: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1a6a20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1a6a24: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x1a6a24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1a6a28: 0xc04f644  jal         func_13D910
    ctx->pc = 0x1A6A28u;
    SET_GPR_U32(ctx, 31, 0x1A6A30u);
    ctx->pc = 0x1A6A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6A28u;
            // 0x1a6a2c: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D910u;
    if (runtime->hasFunction(0x13D910u)) {
        auto targetFn = runtime->lookupFunction(0x13D910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6A30u; }
        if (ctx->pc != 0x1A6A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D910_0x13d910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6A30u; }
        if (ctx->pc != 0x1A6A30u) { return; }
    }
    ctx->pc = 0x1A6A30u;
    // 0x1a6a30: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1a6a30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1a6a34: 0xc04f824  jal         func_13E090
    ctx->pc = 0x1A6A34u;
    SET_GPR_U32(ctx, 31, 0x1A6A3Cu);
    ctx->pc = 0x1A6A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6A34u;
            // 0x1a6a38: 0xac62ca24  sw          $v0, -0x35DC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294953508), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6A3Cu; }
        if (ctx->pc != 0x1A6A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6A3Cu; }
        if (ctx->pc != 0x1A6A3Cu) { return; }
    }
    ctx->pc = 0x1A6A3Cu;
    // 0x1a6a3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a6a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6a40: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1a6a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1a6a44: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1a6a44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1a6a48: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x1a6a48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1a6a4c: 0xc04f644  jal         func_13D910
    ctx->pc = 0x1A6A4Cu;
    SET_GPR_U32(ctx, 31, 0x1A6A54u);
    ctx->pc = 0x1A6A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6A4Cu;
            // 0x1a6a50: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D910u;
    if (runtime->hasFunction(0x13D910u)) {
        auto targetFn = runtime->lookupFunction(0x13D910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6A54u; }
        if (ctx->pc != 0x1A6A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D910_0x13d910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6A54u; }
        if (ctx->pc != 0x1A6A54u) { return; }
    }
    ctx->pc = 0x1A6A54u;
    // 0x1a6a54: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1a6a54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1a6a58: 0xc04f824  jal         func_13E090
    ctx->pc = 0x1A6A58u;
    SET_GPR_U32(ctx, 31, 0x1A6A60u);
    ctx->pc = 0x1A6A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6A58u;
            // 0x1a6a5c: 0xac62ca28  sw          $v0, -0x35D8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294953512), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6A60u; }
        if (ctx->pc != 0x1A6A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6A60u; }
        if (ctx->pc != 0x1A6A60u) { return; }
    }
    ctx->pc = 0x1A6A60u;
    // 0x1a6a60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a6a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6a64: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x1a6a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1a6a68: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1a6a68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1a6a6c: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x1a6a6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1a6a70: 0xc04f644  jal         func_13D910
    ctx->pc = 0x1A6A70u;
    SET_GPR_U32(ctx, 31, 0x1A6A78u);
    ctx->pc = 0x1A6A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6A70u;
            // 0x1a6a74: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D910u;
    if (runtime->hasFunction(0x13D910u)) {
        auto targetFn = runtime->lookupFunction(0x13D910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6A78u; }
        if (ctx->pc != 0x1A6A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D910_0x13d910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6A78u; }
        if (ctx->pc != 0x1A6A78u) { return; }
    }
    ctx->pc = 0x1A6A78u;
    // 0x1a6a78: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1a6a78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1a6a7c: 0xc04f824  jal         func_13E090
    ctx->pc = 0x1A6A7Cu;
    SET_GPR_U32(ctx, 31, 0x1A6A84u);
    ctx->pc = 0x1A6A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6A7Cu;
            // 0x1a6a80: 0xac62ca2c  sw          $v0, -0x35D4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294953516), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6A84u; }
        if (ctx->pc != 0x1A6A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6A84u; }
        if (ctx->pc != 0x1A6A84u) { return; }
    }
    ctx->pc = 0x1A6A84u;
    // 0x1a6a84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a6a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6a88: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1a6a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1a6a8c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1a6a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1a6a90: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x1a6a90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1a6a94: 0xc04f644  jal         func_13D910
    ctx->pc = 0x1A6A94u;
    SET_GPR_U32(ctx, 31, 0x1A6A9Cu);
    ctx->pc = 0x1A6A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6A94u;
            // 0x1a6a98: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D910u;
    if (runtime->hasFunction(0x13D910u)) {
        auto targetFn = runtime->lookupFunction(0x13D910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6A9Cu; }
        if (ctx->pc != 0x1A6A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D910_0x13d910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6A9Cu; }
        if (ctx->pc != 0x1A6A9Cu) { return; }
    }
    ctx->pc = 0x1A6A9Cu;
    // 0x1a6a9c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1a6a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1a6aa0: 0xc04f824  jal         func_13E090
    ctx->pc = 0x1A6AA0u;
    SET_GPR_U32(ctx, 31, 0x1A6AA8u);
    ctx->pc = 0x1A6AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6AA0u;
            // 0x1a6aa4: 0xac62ca30  sw          $v0, -0x35D0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294953520), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6AA8u; }
        if (ctx->pc != 0x1A6AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6AA8u; }
        if (ctx->pc != 0x1A6AA8u) { return; }
    }
    ctx->pc = 0x1A6AA8u;
    // 0x1a6aa8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a6aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6aac: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1a6aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1a6ab0: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1a6ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1a6ab4: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x1a6ab4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1a6ab8: 0xc04f644  jal         func_13D910
    ctx->pc = 0x1A6AB8u;
    SET_GPR_U32(ctx, 31, 0x1A6AC0u);
    ctx->pc = 0x1A6ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6AB8u;
            // 0x1a6abc: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D910u;
    if (runtime->hasFunction(0x13D910u)) {
        auto targetFn = runtime->lookupFunction(0x13D910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6AC0u; }
        if (ctx->pc != 0x1A6AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D910_0x13d910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6AC0u; }
        if (ctx->pc != 0x1A6AC0u) { return; }
    }
    ctx->pc = 0x1A6AC0u;
    // 0x1a6ac0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1a6ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1a6ac4: 0xc04f824  jal         func_13E090
    ctx->pc = 0x1A6AC4u;
    SET_GPR_U32(ctx, 31, 0x1A6ACCu);
    ctx->pc = 0x1A6AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6AC4u;
            // 0x1a6ac8: 0xac62ca34  sw          $v0, -0x35CC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294953524), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6ACCu; }
        if (ctx->pc != 0x1A6ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6ACCu; }
        if (ctx->pc != 0x1A6ACCu) { return; }
    }
    ctx->pc = 0x1A6ACCu;
    // 0x1a6acc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a6accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6ad0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1a6ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1a6ad4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1a6ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1a6ad8: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x1a6ad8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1a6adc: 0xc04f644  jal         func_13D910
    ctx->pc = 0x1A6ADCu;
    SET_GPR_U32(ctx, 31, 0x1A6AE4u);
    ctx->pc = 0x1A6AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6ADCu;
            // 0x1a6ae0: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D910u;
    if (runtime->hasFunction(0x13D910u)) {
        auto targetFn = runtime->lookupFunction(0x13D910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6AE4u; }
        if (ctx->pc != 0x1A6AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D910_0x13d910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6AE4u; }
        if (ctx->pc != 0x1A6AE4u) { return; }
    }
    ctx->pc = 0x1A6AE4u;
    // 0x1a6ae4: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1a6ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1a6ae8: 0xc04f824  jal         func_13E090
    ctx->pc = 0x1A6AE8u;
    SET_GPR_U32(ctx, 31, 0x1A6AF0u);
    ctx->pc = 0x1A6AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6AE8u;
            // 0x1a6aec: 0xac62ca38  sw          $v0, -0x35C8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294953528), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6AF0u; }
        if (ctx->pc != 0x1A6AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6AF0u; }
        if (ctx->pc != 0x1A6AF0u) { return; }
    }
    ctx->pc = 0x1A6AF0u;
    // 0x1a6af0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a6af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6af4: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x1a6af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1a6af8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1a6af8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1a6afc: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1a6afcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1a6b00: 0xc04f644  jal         func_13D910
    ctx->pc = 0x1A6B00u;
    SET_GPR_U32(ctx, 31, 0x1A6B08u);
    ctx->pc = 0x1A6B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6B00u;
            // 0x1a6b04: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D910u;
    if (runtime->hasFunction(0x13D910u)) {
        auto targetFn = runtime->lookupFunction(0x13D910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6B08u; }
        if (ctx->pc != 0x1A6B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D910_0x13d910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6B08u; }
        if (ctx->pc != 0x1A6B08u) { return; }
    }
    ctx->pc = 0x1A6B08u;
    // 0x1a6b08: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1a6b08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1a6b0c: 0xc04f824  jal         func_13E090
    ctx->pc = 0x1A6B0Cu;
    SET_GPR_U32(ctx, 31, 0x1A6B14u);
    ctx->pc = 0x1A6B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6B0Cu;
            // 0x1a6b10: 0xac62ca3c  sw          $v0, -0x35C4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294953532), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6B14u; }
        if (ctx->pc != 0x1A6B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6B14u; }
        if (ctx->pc != 0x1A6B14u) { return; }
    }
    ctx->pc = 0x1A6B14u;
    // 0x1a6b14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a6b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6b18: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1a6b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1a6b1c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1a6b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1a6b20: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1a6b20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1a6b24: 0xc04f644  jal         func_13D910
    ctx->pc = 0x1A6B24u;
    SET_GPR_U32(ctx, 31, 0x1A6B2Cu);
    ctx->pc = 0x1A6B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6B24u;
            // 0x1a6b28: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D910u;
    if (runtime->hasFunction(0x13D910u)) {
        auto targetFn = runtime->lookupFunction(0x13D910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6B2Cu; }
        if (ctx->pc != 0x1A6B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D910_0x13d910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6B2Cu; }
        if (ctx->pc != 0x1A6B2Cu) { return; }
    }
    ctx->pc = 0x1A6B2Cu;
    // 0x1a6b2c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1a6b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1a6b30: 0xc04f824  jal         func_13E090
    ctx->pc = 0x1A6B30u;
    SET_GPR_U32(ctx, 31, 0x1A6B38u);
    ctx->pc = 0x1A6B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6B30u;
            // 0x1a6b34: 0xac62ca40  sw          $v0, -0x35C0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294953536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6B38u; }
        if (ctx->pc != 0x1A6B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6B38u; }
        if (ctx->pc != 0x1A6B38u) { return; }
    }
    ctx->pc = 0x1A6B38u;
    // 0x1a6b38: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x1a6b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1a6b3c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1a6b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1a6b40: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1a6b40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1a6b44: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x1a6b44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a6b48: 0xc04f644  jal         func_13D910
    ctx->pc = 0x1A6B48u;
    SET_GPR_U32(ctx, 31, 0x1A6B50u);
    ctx->pc = 0x1A6B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6B48u;
            // 0x1a6b4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D910u;
    if (runtime->hasFunction(0x13D910u)) {
        auto targetFn = runtime->lookupFunction(0x13D910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6B50u; }
        if (ctx->pc != 0x1A6B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D910_0x13d910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6B50u; }
        if (ctx->pc != 0x1A6B50u) { return; }
    }
    ctx->pc = 0x1A6B50u;
    // 0x1a6b50: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1a6b50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1a6b54: 0xc05d656  jal         func_175958
    ctx->pc = 0x1A6B54u;
    SET_GPR_U32(ctx, 31, 0x1A6B5Cu);
    ctx->pc = 0x1A6B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6B54u;
            // 0x1a6b58: 0xac62ca44  sw          $v0, -0x35BC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294953540), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6B5Cu; }
        if (ctx->pc != 0x1A6B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6B5Cu; }
        if (ctx->pc != 0x1A6B5Cu) { return; }
    }
    ctx->pc = 0x1A6B5Cu;
    // 0x1a6b5c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1a6b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1a6b60: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x1a6b60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x1a6b64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a6b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6b68: 0x24a540d0  addiu       $a1, $a1, 0x40D0
    ctx->pc = 0x1a6b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16592));
    // 0x1a6b6c: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x1A6B6Cu;
    SET_GPR_U32(ctx, 31, 0x1A6B74u);
    ctx->pc = 0x1A6B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6B6Cu;
            // 0x1a6b70: 0x24c66c90  addiu       $a2, $a2, 0x6C90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6B74u; }
        if (ctx->pc != 0x1A6B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6B74u; }
        if (ctx->pc != 0x1A6B74u) { return; }
    }
    ctx->pc = 0x1A6B74u;
    // 0x1a6b74: 0x3c02001b  lui         $v0, 0x1B
    ctx->pc = 0x1a6b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
    // 0x1a6b78: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1a6b78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x1a6b7c: 0x24422390  addiu       $v0, $v0, 0x2390
    ctx->pc = 0x1a6b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9104));
    // 0x1a6b80: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1a6b80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1a6b84: 0x24635078  addiu       $v1, $v1, 0x5078
    ctx->pc = 0x1a6b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20600));
    // 0x1a6b88: 0xac825074  sw          $v0, 0x5074($a0)
    ctx->pc = 0x1a6b88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20596), GPR_U32(ctx, 2));
    // 0x1a6b8c: 0xa0600026  sb          $zero, 0x26($v1)
    ctx->pc = 0x1a6b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 38), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a6b90: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1a6b90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1a6b94: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1a6b94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1a6b98: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x1a6b98u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
    // 0x1a6b9c: 0x3c08002a  lui         $t0, 0x2A
    ctx->pc = 0x1a6b9cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)42 << 16));
    // 0x1a6ba0: 0xaca0cb0c  sw          $zero, -0x34F4($a1)
    ctx->pc = 0x1a6ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294953740), GPR_U32(ctx, 0));
    // 0x1a6ba4: 0xacc0cb10  sw          $zero, -0x34F0($a2)
    ctx->pc = 0x1a6ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294953744), GPR_U32(ctx, 0));
    // 0x1a6ba8: 0xace0cb14  sw          $zero, -0x34EC($a3)
    ctx->pc = 0x1a6ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294953748), GPR_U32(ctx, 0));
    // 0x1a6bac: 0xad00cb18  sw          $zero, -0x34E8($t0)
    ctx->pc = 0x1a6bacu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294953752), GPR_U32(ctx, 0));
    // 0x1a6bb0: 0xa0600024  sb          $zero, 0x24($v1)
    ctx->pc = 0x1a6bb0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 36), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a6bb4: 0xc069af4  jal         func_1A6BD0
    ctx->pc = 0x1A6BB4u;
    SET_GPR_U32(ctx, 31, 0x1A6BBCu);
    ctx->pc = 0x1A6BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6BB4u;
            // 0x1a6bb8: 0xa0600025  sb          $zero, 0x25($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 37), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6BD0u;
    if (runtime->hasFunction(0x1A6BD0u)) {
        auto targetFn = runtime->lookupFunction(0x1A6BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6BBCu; }
        if (ctx->pc != 0x1A6BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a6bd0_0x1a6c18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6BBCu; }
        if (ctx->pc != 0x1A6BBCu) { return; }
    }
    ctx->pc = 0x1A6BBCu;
    // 0x1a6bbc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1a6bbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a6bc0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1a6bc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a6bc4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a6bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a6bc8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6BC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6BC8u;
            // 0x1a6bcc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A6868u: goto label_1a6868;
            case 0x1A68C8u: goto label_1a68c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A6BD0u;
}
