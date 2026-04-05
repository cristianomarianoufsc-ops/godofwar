#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011F128
// Address: 0x11f128 - 0x11f400
void sub_0011F128_0x11f128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011F128_0x11f128");
#endif

    ctx->pc = 0x11f128u;

    // 0x11f128: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11f128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11f12c: 0x3c03dead  lui         $v1, 0xDEAD
    ctx->pc = 0x11f12cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57005 << 16));
    // 0x11f130: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x11f130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x11f134: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x11f134u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x11f138: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x11f138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x11f13c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11f13cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f140: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11f140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11f144: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11f144u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f148: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x11f148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x11f14c: 0x3463beef  ori         $v1, $v1, 0xBEEF
    ctx->pc = 0x11f14cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48879);
    // 0x11f150: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11f150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11f154: 0x24c60978  addiu       $a2, $a2, 0x978
    ctx->pc = 0x11f154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2424));
    // 0x11f158: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x11f158u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x11f15c: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x11f15cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x11f160: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x11f160u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11f164: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x11f164u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x11f168: 0x81402  srl         $v0, $t0, 16
    ctx->pc = 0x11f168u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x11f16c: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x11f16cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x11f170: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x11f170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x11f174: 0xa6270004  sh          $a3, 0x4($s1)
    ctx->pc = 0x11f174u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x11f178: 0xa6280000  sh          $t0, 0x0($s1)
    ctx->pc = 0x11f178u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x11f17c: 0x26320a2c  addiu       $s2, $s1, 0xA2C
    ctx->pc = 0x11f17cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 2604));
    // 0x11f180: 0xae260020  sw          $a2, 0x20($s1)
    ctx->pc = 0x11f180u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 6));
    // 0x11f184: 0x241300ff  addiu       $s3, $zero, 0xFF
    ctx->pc = 0x11f184u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x11f188: 0xc08e222  jal         func_238888
    ctx->pc = 0x11F188u;
    SET_GPR_U32(ctx, 31, 0x11F190u);
    ctx->pc = 0x11F18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F188u;
            // 0x11f18c: 0xa6220002  sh          $v0, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F190u; }
        if (ctx->pc != 0x11F190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F190u; }
        if (ctx->pc != 0x11F190u) { return; }
    }
    ctx->pc = 0x11F190u;
    // 0x11f190: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x11f190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x11f194: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11f194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f198: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11f198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f19c: 0xc08e222  jal         func_238888
    ctx->pc = 0x11F19Cu;
    SET_GPR_U32(ctx, 31, 0x11F1A4u);
    ctx->pc = 0x11F1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F19Cu;
            // 0x11f1a0: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F1A4u; }
        if (ctx->pc != 0x11F1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F1A4u; }
        if (ctx->pc != 0x11F1A4u) { return; }
    }
    ctx->pc = 0x11F1A4u;
    // 0x11f1a4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x11f1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x11f1a8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x11f1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x11f1ac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x11f1acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x11f1b0: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x11f1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
    // 0x11f1b4: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x11f1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x11f1b8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x11f1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x11f1bc: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x11f1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
    // 0x11f1c0: 0x2442e860  addiu       $v0, $v0, -0x17A0
    ctx->pc = 0x11f1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961248));
    // 0x11f1c4: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x11f1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x11f1c8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x11f1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x11f1cc: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x11f1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_11f1d0:
    // 0x11f1d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11f1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f1d4: 0xc08f2d4  jal         func_23CB50
    ctx->pc = 0x11F1D4u;
    SET_GPR_U32(ctx, 31, 0x11F1DCu);
    ctx->pc = 0x11F1D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F1D4u;
            // 0x11f1d8: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23CB50u;
    if (runtime->hasFunction(0x23CB50u)) {
        auto targetFn = runtime->lookupFunction(0x23CB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F1DCu; }
        if (ctx->pc != 0x11F1DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023CB50_0x23cb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F1DCu; }
        if (ctx->pc != 0x11F1DCu) { return; }
    }
    ctx->pc = 0x11F1DCu;
    // 0x11f1dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11f1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11f1e0: 0x1662fffb  bne         $s3, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x11F1E0u;
    {
        const bool branch_taken_0x11f1e0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x11F1E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F1E0u;
            // 0x11f1e4: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f1e0) {
            ctx->pc = 0x11F1D0u;
            runtime->cooperativeGuestYield();
            goto label_11f1d0;
        }
    }
    ctx->pc = 0x11F1E8u;
    // 0x11f1e8: 0x2633162c  addiu       $s3, $s1, 0x162C
    ctx->pc = 0x11f1e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 5676));
    // 0x11f1ec: 0x241201ff  addiu       $s2, $zero, 0x1FF
    ctx->pc = 0x11f1ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    // 0x11f1f0: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x11f1f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f1f4: 0x0  nop
    ctx->pc = 0x11f1f4u;
    // NOP
label_11f1f8:
    // 0x11f1f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11f1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f1fc: 0xc08f2e2  jal         func_23CB88
    ctx->pc = 0x11F1FCu;
    SET_GPR_U32(ctx, 31, 0x11F204u);
    ctx->pc = 0x11F200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F1FCu;
            // 0x11f200: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23CB88u;
    if (runtime->hasFunction(0x23CB88u)) {
        auto targetFn = runtime->lookupFunction(0x23CB88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F204u; }
        if (ctx->pc != 0x11F204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23cb88_0x23cba8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F204u; }
        if (ctx->pc != 0x11F204u) { return; }
    }
    ctx->pc = 0x11F204u;
    // 0x11f204: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11f204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11f208: 0x1642fffb  bne         $s2, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x11F208u;
    {
        const bool branch_taken_0x11f208 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x11F20Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F208u;
            // 0x11f20c: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f208) {
            ctx->pc = 0x11F1F8u;
            runtime->cooperativeGuestYield();
            goto label_11f1f8;
        }
    }
    ctx->pc = 0x11F210u;
    // 0x11f210: 0x2624022c  addiu       $a0, $s1, 0x22C
    ctx->pc = 0x11f210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 556));
    // 0x11f214: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11f214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f218: 0xc0a250f  jal         func_28943C
    ctx->pc = 0x11F218u;
    SET_GPR_U32(ctx, 31, 0x11F220u);
    ctx->pc = 0x11F21Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F218u;
            // 0x11f21c: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F220u; }
        if (ctx->pc != 0x11F220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28943c_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F220u; }
        if (ctx->pc != 0x11F220u) { return; }
    }
    ctx->pc = 0x11F220u;
    // 0x11f220: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11f220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f224: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11f224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f228: 0xc0a250f  jal         func_28943C
    ctx->pc = 0x11F228u;
    SET_GPR_U32(ctx, 31, 0x11F230u);
    ctx->pc = 0x11F22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F228u;
            // 0x11f22c: 0x24063000  addiu       $a2, $zero, 0x3000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F230u; }
        if (ctx->pc != 0x11F230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28943c_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F230u; }
        if (ctx->pc != 0x11F230u) { return; }
    }
    ctx->pc = 0x11F230u;
    // 0x11f230: 0x2624002c  addiu       $a0, $s1, 0x2C
    ctx->pc = 0x11f230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
    // 0x11f234: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11f234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f238: 0xc0a250f  jal         func_28943C
    ctx->pc = 0x11F238u;
    SET_GPR_U32(ctx, 31, 0x11F240u);
    ctx->pc = 0x11F23Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F238u;
            // 0x11f23c: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F240u; }
        if (ctx->pc != 0x11F240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28943c_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F240u; }
        if (ctx->pc != 0x11F240u) { return; }
    }
    ctx->pc = 0x11F240u;
    // 0x11f240: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x11f240u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f244: 0xa6204630  sh          $zero, 0x4630($s1)
    ctx->pc = 0x11f244u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 17968), (uint16_t)GPR_U32(ctx, 0));
    // 0x11f248: 0xa620462e  sh          $zero, 0x462E($s1)
    ctx->pc = 0x11f248u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 17966), (uint16_t)GPR_U32(ctx, 0));
    // 0x11f24c: 0xa6204632  sh          $zero, 0x4632($s1)
    ctx->pc = 0x11f24cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 17970), (uint16_t)GPR_U32(ctx, 0));
    // 0x11f250: 0xa620462c  sh          $zero, 0x462C($s1)
    ctx->pc = 0x11f250u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 17964), (uint16_t)GPR_U32(ctx, 0));
    // 0x11f254: 0xae204634  sw          $zero, 0x4634($s1)
    ctx->pc = 0x11f254u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 17972), GPR_U32(ctx, 0));
    // 0x11f258: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x11f258u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11f25c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x11f25cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11f260: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11f260u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11f264: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x11f264u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11f268: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11f268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11f26c: 0x3e00008  jr          $ra
    ctx->pc = 0x11F26Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F26Cu;
            // 0x11f270: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11F1D0u: goto label_11f1d0;
            case 0x11F1F8u: goto label_11f1f8;
            case 0x11F308u: goto label_11f308;
            case 0x11F380u: goto label_11f380;
            case 0x11F38Cu: goto label_11f38c;
            case 0x11F3A4u: goto label_11f3a4;
            case 0x11F3DCu: goto label_11f3dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11F274u;
    // 0x11f274: 0x0  nop
    ctx->pc = 0x11f274u;
    // NOP
    // 0x11f278: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11f278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11f27c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x11f27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x11f280: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11f280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11f284: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x11f284u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f288: 0x24420978  addiu       $v0, $v0, 0x978
    ctx->pc = 0x11f288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2424));
    // 0x11f28c: 0xc08e218  jal         func_238860
    ctx->pc = 0x11F28Cu;
    SET_GPR_U32(ctx, 31, 0x11F294u);
    ctx->pc = 0x11F290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F28Cu;
            // 0x11f290: 0xac620020  sw          $v0, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238860u;
    if (runtime->hasFunction(0x238860u)) {
        auto targetFn = runtime->lookupFunction(0x238860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F294u; }
        if (ctx->pc != 0x11F294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238860_0x238860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F294u; }
        if (ctx->pc != 0x11F294u) { return; }
    }
    ctx->pc = 0x11F294u;
    // 0x11f294: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11f294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11f298: 0x3e00008  jr          $ra
    ctx->pc = 0x11F298u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F29Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F298u;
            // 0x11f29c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11F1D0u: goto label_11f1d0;
            case 0x11F1F8u: goto label_11f1f8;
            case 0x11F308u: goto label_11f308;
            case 0x11F380u: goto label_11f380;
            case 0x11F38Cu: goto label_11f38c;
            case 0x11F3A4u: goto label_11f3a4;
            case 0x11F3DCu: goto label_11f3dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11F2A0u;
    // 0x11f2a0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x11f2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x11f2a4: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x11f2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x11f2a8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x11f2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x11f2ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11f2acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f2b0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x11f2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x11f2b4: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x11f2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x11f2b8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x11f2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x11f2bc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x11f2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x11f2c0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x11f2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11f2c4: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x11f2c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x11f2c8: 0x8e024634  lw          $v0, 0x4634($s0)
    ctx->pc = 0x11f2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17972)));
    // 0x11f2cc: 0x54400043  bnel        $v0, $zero, . + 4 + (0x43 << 2)
    ctx->pc = 0x11F2CCu;
    {
        const bool branch_taken_0x11f2cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11f2cc) {
            ctx->pc = 0x11F2D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11F2CCu;
            // 0x11f2d0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11F3DCu;
            goto label_11f3dc;
        }
    }
    ctx->pc = 0x11F2D4u;
    // 0x11f2d4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x11f2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x11f2d8: 0x9603462e  lhu         $v1, 0x462E($s0)
    ctx->pc = 0x11f2d8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 17966)));
    // 0x11f2dc: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x11F2DCu;
    {
        const bool branch_taken_0x11f2dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F2E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F2DCu;
            // 0x11f2e0: 0x8c55e8a4  lw          $s5, -0x175C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f2dc) {
            ctx->pc = 0x11F3A4u;
            goto label_11f3a4;
        }
    }
    ctx->pc = 0x11F2E4u;
    // 0x11f2e4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x11f2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x11f2e8: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x11f2e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f2ec: 0xc454c658  lwc1        $f20, -0x39A8($v0)
    ctx->pc = 0x11f2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11f2f0: 0x2611022c  addiu       $s1, $s0, 0x22C
    ctx->pc = 0x11f2f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 556));
    // 0x11f2f4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x11f2f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f2f8: 0x1280002a  beqz        $s4, . + 4 + (0x2A << 2)
    ctx->pc = 0x11F2F8u;
    {
        const bool branch_taken_0x11f2f8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F2F8u;
            // 0x11f2fc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f2f8) {
            ctx->pc = 0x11F3A4u;
            goto label_11f3a4;
        }
    }
    ctx->pc = 0x11F300u;
    // 0x11f300: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x11f300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11f304: 0x0  nop
    ctx->pc = 0x11f304u;
    // NOP
label_11f308:
    // 0x11f308: 0x50a00020  beql        $a1, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x11F308u;
    {
        const bool branch_taken_0x11f308 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f308) {
            ctx->pc = 0x11F30Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11F308u;
            // 0x11f30c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11F38Cu;
            goto label_11f38c;
        }
    }
    ctx->pc = 0x11F310u;
    // 0x11f310: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x11f310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11f314: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x11f314u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11f318: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x11f318u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x11f31c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x11f31cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11f320: 0x0  nop
    ctx->pc = 0x11f320u;
    // NOP
    // 0x11f324: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x11F324u;
    {
        const bool branch_taken_0x11f324 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11F328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F324u;
            // 0x11f328: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f324) {
            ctx->pc = 0x11F380u;
            goto label_11f380;
        }
    }
    ctx->pc = 0x11F32Cu;
    // 0x11f32c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x11f32cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x11f330: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x11f330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x11f334: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11f334u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11f338: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x11f338u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11f33c: 0x24020074  addiu       $v0, $zero, 0x74
    ctx->pc = 0x11f33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x11f340: 0xa7a20000  sh          $v0, 0x0($sp)
    ctx->pc = 0x11f340u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x11f344: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11f344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f348: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11f348u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11f34c: 0xafb30004  sw          $s3, 0x4($sp)
    ctx->pc = 0x11f34cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 19));
    // 0x11f350: 0x46020028  max.s       $f0, $f0, $f2
    ctx->pc = 0x11f350u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[2]);
    // 0x11f354: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x11f354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x11f358: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11f358u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x11f35c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x11f35cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x11f360: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x11f360u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x11f364: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x11f364u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f368: 0xc047d6a  jal         func_11F5A8
    ctx->pc = 0x11F368u;
    SET_GPR_U32(ctx, 31, 0x11F370u);
    ctx->pc = 0x11F36Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F368u;
            // 0x11f36c: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F5A8u;
    if (runtime->hasFunction(0x11F5A8u)) {
        auto targetFn = runtime->lookupFunction(0x11F5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F370u; }
        if (ctx->pc != 0x11F370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11f5a8_0x11f5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F370u; }
        if (ctx->pc != 0x11F370u) { return; }
    }
    ctx->pc = 0x11F370u;
    // 0x11f370: 0x9602462e  lhu         $v0, 0x462E($s0)
    ctx->pc = 0x11f370u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 17966)));
    // 0x11f374: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x11f374u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x11f378: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11f378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11f37c: 0xa602462e  sh          $v0, 0x462E($s0)
    ctx->pc = 0x11f37cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 17966), (uint16_t)GPR_U32(ctx, 2));
label_11f380:
    // 0x11f380: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x11f380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x11f384: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x11f384u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x11f388: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x11f388u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_11f38c:
    // 0x11f38c: 0x2a620100  slti        $v0, $s3, 0x100
    ctx->pc = 0x11f38cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x11f390: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11F390u;
    {
        const bool branch_taken_0x11f390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F390u;
            // 0x11f394: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f390) {
            ctx->pc = 0x11F3A4u;
            goto label_11f3a4;
        }
    }
    ctx->pc = 0x11F398u;
    // 0x11f398: 0x254102b  sltu        $v0, $s2, $s4
    ctx->pc = 0x11f398u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x11f39c: 0x5440ffda  bnel        $v0, $zero, . + 4 + (-0x26 << 2)
    ctx->pc = 0x11F39Cu;
    {
        const bool branch_taken_0x11f39c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11f39c) {
            ctx->pc = 0x11F3A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11F39Cu;
            // 0x11f3a0: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11F308u;
            runtime->cooperativeGuestYield();
            goto label_11f308;
        }
    }
    ctx->pc = 0x11F3A4u;
label_11f3a4:
    // 0x11f3a4: 0xc047e6e  jal         func_11F9B8
    ctx->pc = 0x11F3A4u;
    SET_GPR_U32(ctx, 31, 0x11F3ACu);
    ctx->pc = 0x11F3A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F3A4u;
            // 0x11f3a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B8u;
    if (runtime->hasFunction(0x11F9B8u)) {
        auto targetFn = runtime->lookupFunction(0x11F9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F3ACu; }
        if (ctx->pc != 0x11F3ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011F9B8_0x11f9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F3ACu; }
        if (ctx->pc != 0x11F3ACu) { return; }
    }
    ctx->pc = 0x11F3ACu;
    // 0x11f3ac: 0xc047d7e  jal         func_11F5F8
    ctx->pc = 0x11F3ACu;
    SET_GPR_U32(ctx, 31, 0x11F3B4u);
    ctx->pc = 0x11F3B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F3ACu;
            // 0x11f3b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F5F8u;
    if (runtime->hasFunction(0x11F5F8u)) {
        auto targetFn = runtime->lookupFunction(0x11F5F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F3B4u; }
        if (ctx->pc != 0x11F3B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011F5F8_0x11f5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F3B4u; }
        if (ctx->pc != 0x11F3B4u) { return; }
    }
    ctx->pc = 0x11F3B4u;
    // 0x11f3b4: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x11f3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x11f3b8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11f3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f3bc: 0xa7a20020  sh          $v0, 0x20($sp)
    ctx->pc = 0x11f3bcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x11f3c0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x11f3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x11f3c4: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x11f3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x11f3c8: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x11f3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x11f3cc: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x11f3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x11f3d0: 0xc047254  jal         func_11C950
    ctx->pc = 0x11F3D0u;
    SET_GPR_U32(ctx, 31, 0x11F3D8u);
    ctx->pc = 0x11F3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F3D0u;
            // 0x11f3d4: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C950u;
    if (runtime->hasFunction(0x11C950u)) {
        auto targetFn = runtime->lookupFunction(0x11C950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F3D8u; }
        if (ctx->pc != 0x11F3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011C950_0x11c950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F3D8u; }
        if (ctx->pc != 0x11F3D8u) { return; }
    }
    ctx->pc = 0x11F3D8u;
    // 0x11f3d8: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x11f3d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_11f3dc:
    // 0x11f3dc: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x11f3dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11f3e0: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x11f3e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11f3e4: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x11f3e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11f3e8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x11f3e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11f3ec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x11f3ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11f3f0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11f3f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11f3f4: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x11f3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11f3f8: 0x3e00008  jr          $ra
    ctx->pc = 0x11F3F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F3F8u;
            // 0x11f3fc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11F1D0u: goto label_11f1d0;
            case 0x11F1F8u: goto label_11f1f8;
            case 0x11F308u: goto label_11f308;
            case 0x11F380u: goto label_11f380;
            case 0x11F38Cu: goto label_11f38c;
            case 0x11F3A4u: goto label_11f3a4;
            case 0x11F3DCu: goto label_11f3dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11F400u;
}
