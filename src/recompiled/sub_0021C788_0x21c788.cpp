#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021C788
// Address: 0x21c788 - 0x21cb80
void sub_0021C788_0x21c788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C788_0x21c788");
#endif

    ctx->pc = 0x21c788u;

    // 0x21c788: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x21c788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21c78c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x21c78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x21c790: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x21c790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x21c794: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21c794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21c798: 0x3c11002d  lui         $s1, 0x2D
    ctx->pc = 0x21c798u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)45 << 16));
    // 0x21c79c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x21c79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x21c7a0: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x21c7a0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x21c7a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21c7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21c7a8: 0xc0615a6  jal         func_185698
    ctx->pc = 0x21C7A8u;
    SET_GPR_U32(ctx, 31, 0x21C7B0u);
    ctx->pc = 0x21C7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C7A8u;
            // 0x21c7ac: 0x2633bc78  addiu       $s3, $s1, -0x4388 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185698u;
    if (runtime->hasFunction(0x185698u)) {
        auto targetFn = runtime->lookupFunction(0x185698u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C7B0u; }
        if (ctx->pc != 0x21C7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185698_0x185698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C7B0u; }
        if (ctx->pc != 0x21C7B0u) { return; }
    }
    ctx->pc = 0x21C7B0u;
    // 0x21c7b0: 0xc05f428  jal         func_17D0A0
    ctx->pc = 0x21C7B0u;
    SET_GPR_U32(ctx, 31, 0x21C7B8u);
    ctx->pc = 0x17D0A0u;
    if (runtime->hasFunction(0x17D0A0u)) {
        auto targetFn = runtime->lookupFunction(0x17D0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C7B8u; }
        if (ctx->pc != 0x21C7B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D0A0_0x17d0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C7B8u; }
        if (ctx->pc != 0x21C7B8u) { return; }
    }
    ctx->pc = 0x21C7B8u;
    // 0x21c7b8: 0xc06eb20  jal         func_1BAC80
    ctx->pc = 0x21C7B8u;
    SET_GPR_U32(ctx, 31, 0x21C7C0u);
    ctx->pc = 0x1BAC80u;
    if (runtime->hasFunction(0x1BAC80u)) {
        auto targetFn = runtime->lookupFunction(0x1BAC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C7C0u; }
        if (ctx->pc != 0x21C7C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BAC80_0x1bac80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C7C0u; }
        if (ctx->pc != 0x21C7C0u) { return; }
    }
    ctx->pc = 0x21C7C0u;
    // 0x21c7c0: 0xc0872e0  jal         func_21CB80
    ctx->pc = 0x21C7C0u;
    SET_GPR_U32(ctx, 31, 0x21C7C8u);
    ctx->pc = 0x21CB80u;
    if (runtime->hasFunction(0x21CB80u)) {
        auto targetFn = runtime->lookupFunction(0x21CB80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C7C8u; }
        if (ctx->pc != 0x21C7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021CB80_0x21cb80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C7C8u; }
        if (ctx->pc != 0x21C7C8u) { return; }
    }
    ctx->pc = 0x21C7C8u;
    // 0x21c7c8: 0xc05d656  jal         func_175958
    ctx->pc = 0x21C7C8u;
    SET_GPR_U32(ctx, 31, 0x21C7D0u);
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C7D0u; }
        if (ctx->pc != 0x21C7D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C7D0u; }
        if (ctx->pc != 0x21C7D0u) { return; }
    }
    ctx->pc = 0x21C7D0u;
    // 0x21c7d0: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x21c7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x21c7d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21c7d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c7d8: 0x8c667e14  lw          $a2, 0x7E14($v1)
    ctx->pc = 0x21c7d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32276)));
    // 0x21c7dc: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x21c7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x21c7e0: 0x24a57eb0  addiu       $a1, $a1, 0x7EB0
    ctx->pc = 0x21c7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32432));
    // 0x21c7e4: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x21C7E4u;
    SET_GPR_U32(ctx, 31, 0x21C7ECu);
    ctx->pc = 0x21C7E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C7E4u;
            // 0x21c7e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C7ECu; }
        if (ctx->pc != 0x21C7ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C7ECu; }
        if (ctx->pc != 0x21C7ECu) { return; }
    }
    ctx->pc = 0x21C7ECu;
    // 0x21c7ec: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x21c7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x21c7f0: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x21c7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x21c7f4: 0x8c467c60  lw          $a2, 0x7C60($v0)
    ctx->pc = 0x21c7f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31840)));
    // 0x21c7f8: 0x24a57eb8  addiu       $a1, $a1, 0x7EB8
    ctx->pc = 0x21c7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32440));
    // 0x21c7fc: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x21C7FCu;
    SET_GPR_U32(ctx, 31, 0x21C804u);
    ctx->pc = 0x21C800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C7FCu;
            // 0x21c800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C804u; }
        if (ctx->pc != 0x21C804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C804u; }
        if (ctx->pc != 0x21C804u) { return; }
    }
    ctx->pc = 0x21C804u;
    // 0x21c804: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x21c804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x21c808: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x21c808u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x21c80c: 0x8c467c64  lw          $a2, 0x7C64($v0)
    ctx->pc = 0x21c80cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31844)));
    // 0x21c810: 0x24a57ec0  addiu       $a1, $a1, 0x7EC0
    ctx->pc = 0x21c810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32448));
    // 0x21c814: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x21C814u;
    SET_GPR_U32(ctx, 31, 0x21C81Cu);
    ctx->pc = 0x21C818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C814u;
            // 0x21c818: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C81Cu; }
        if (ctx->pc != 0x21C81Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C81Cu; }
        if (ctx->pc != 0x21C81Cu) { return; }
    }
    ctx->pc = 0x21C81Cu;
    // 0x21c81c: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x21c81cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x21c820: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x21c820u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x21c824: 0x8c467e18  lw          $a2, 0x7E18($v0)
    ctx->pc = 0x21c824u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32280)));
    // 0x21c828: 0x24a57ed0  addiu       $a1, $a1, 0x7ED0
    ctx->pc = 0x21c828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32464));
    // 0x21c82c: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x21C82Cu;
    SET_GPR_U32(ctx, 31, 0x21C834u);
    ctx->pc = 0x21C830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C82Cu;
            // 0x21c830: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C834u; }
        if (ctx->pc != 0x21C834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C834u; }
        if (ctx->pc != 0x21C834u) { return; }
    }
    ctx->pc = 0x21C834u;
    // 0x21c834: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x21c834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x21c838: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x21c838u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x21c83c: 0x8c467c5c  lw          $a2, 0x7C5C($v0)
    ctx->pc = 0x21c83cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31836)));
    // 0x21c840: 0x24a57ee0  addiu       $a1, $a1, 0x7EE0
    ctx->pc = 0x21c840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32480));
    // 0x21c844: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x21C844u;
    SET_GPR_U32(ctx, 31, 0x21C84Cu);
    ctx->pc = 0x21C848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C844u;
            // 0x21c848: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C84Cu; }
        if (ctx->pc != 0x21C84Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C84Cu; }
        if (ctx->pc != 0x21C84Cu) { return; }
    }
    ctx->pc = 0x21C84Cu;
    // 0x21c84c: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x21c84cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x21c850: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x21c850u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x21c854: 0x8c467e10  lw          $a2, 0x7E10($v0)
    ctx->pc = 0x21c854u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32272)));
    // 0x21c858: 0x24a57ef0  addiu       $a1, $a1, 0x7EF0
    ctx->pc = 0x21c858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32496));
    // 0x21c85c: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x21C85Cu;
    SET_GPR_U32(ctx, 31, 0x21C864u);
    ctx->pc = 0x21C860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C85Cu;
            // 0x21c860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C864u; }
        if (ctx->pc != 0x21C864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C864u; }
        if (ctx->pc != 0x21C864u) { return; }
    }
    ctx->pc = 0x21C864u;
    // 0x21c864: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x21c864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x21c868: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x21c868u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x21c86c: 0x8c467e60  lw          $a2, 0x7E60($v0)
    ctx->pc = 0x21c86cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32352)));
    // 0x21c870: 0x24a57f00  addiu       $a1, $a1, 0x7F00
    ctx->pc = 0x21c870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32512));
    // 0x21c874: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x21C874u;
    SET_GPR_U32(ctx, 31, 0x21C87Cu);
    ctx->pc = 0x21C878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C874u;
            // 0x21c878: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C87Cu; }
        if (ctx->pc != 0x21C87Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C87Cu; }
        if (ctx->pc != 0x21C87Cu) { return; }
    }
    ctx->pc = 0x21C87Cu;
    // 0x21c87c: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x21c87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x21c880: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x21c880u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x21c884: 0x8c467c80  lw          $a2, 0x7C80($v0)
    ctx->pc = 0x21c884u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31872)));
    // 0x21c888: 0x24a57f10  addiu       $a1, $a1, 0x7F10
    ctx->pc = 0x21c888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32528));
    // 0x21c88c: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x21C88Cu;
    SET_GPR_U32(ctx, 31, 0x21C894u);
    ctx->pc = 0x21C890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C88Cu;
            // 0x21c890: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C894u; }
        if (ctx->pc != 0x21C894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C894u; }
        if (ctx->pc != 0x21C894u) { return; }
    }
    ctx->pc = 0x21C894u;
    // 0x21c894: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x21c894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x21c898: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x21c898u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x21c89c: 0x8c467e5c  lw          $a2, 0x7E5C($v0)
    ctx->pc = 0x21c89cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32348)));
    // 0x21c8a0: 0x24a57f20  addiu       $a1, $a1, 0x7F20
    ctx->pc = 0x21c8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32544));
    // 0x21c8a4: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x21C8A4u;
    SET_GPR_U32(ctx, 31, 0x21C8ACu);
    ctx->pc = 0x21C8A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C8A4u;
            // 0x21c8a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C8ACu; }
        if (ctx->pc != 0x21C8ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C8ACu; }
        if (ctx->pc != 0x21C8ACu) { return; }
    }
    ctx->pc = 0x21C8ACu;
    // 0x21c8ac: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x21c8acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x21c8b0: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x21c8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x21c8b4: 0x8c467c7c  lw          $a2, 0x7C7C($v0)
    ctx->pc = 0x21c8b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31868)));
    // 0x21c8b8: 0x24a57f30  addiu       $a1, $a1, 0x7F30
    ctx->pc = 0x21c8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32560));
    // 0x21c8bc: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x21C8BCu;
    SET_GPR_U32(ctx, 31, 0x21C8C4u);
    ctx->pc = 0x21C8C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C8BCu;
            // 0x21c8c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C8C4u; }
        if (ctx->pc != 0x21C8C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C8C4u; }
        if (ctx->pc != 0x21C8C4u) { return; }
    }
    ctx->pc = 0x21C8C4u;
    // 0x21c8c4: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x21c8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x21c8c8: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x21c8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x21c8cc: 0x8c467e1c  lw          $a2, 0x7E1C($v0)
    ctx->pc = 0x21c8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32284)));
    // 0x21c8d0: 0x24a57f40  addiu       $a1, $a1, 0x7F40
    ctx->pc = 0x21c8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32576));
    // 0x21c8d4: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x21C8D4u;
    SET_GPR_U32(ctx, 31, 0x21C8DCu);
    ctx->pc = 0x21C8D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C8D4u;
            // 0x21c8d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C8DCu; }
        if (ctx->pc != 0x21C8DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C8DCu; }
        if (ctx->pc != 0x21C8DCu) { return; }
    }
    ctx->pc = 0x21C8DCu;
    // 0x21c8dc: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x21c8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x21c8e0: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x21c8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x21c8e4: 0x8c465c38  lw          $a2, 0x5C38($v0)
    ctx->pc = 0x21c8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23608)));
    // 0x21c8e8: 0x24a57f58  addiu       $a1, $a1, 0x7F58
    ctx->pc = 0x21c8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32600));
    // 0x21c8ec: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x21C8ECu;
    SET_GPR_U32(ctx, 31, 0x21C8F4u);
    ctx->pc = 0x21C8F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C8ECu;
            // 0x21c8f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C8F4u; }
        if (ctx->pc != 0x21C8F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C8F4u; }
        if (ctx->pc != 0x21C8F4u) { return; }
    }
    ctx->pc = 0x21C8F4u;
    // 0x21c8f4: 0xc0632a6  jal         func_18CA98
    ctx->pc = 0x21C8F4u;
    SET_GPR_U32(ctx, 31, 0x21C8FCu);
    ctx->pc = 0x18CA98u;
    if (runtime->hasFunction(0x18CA98u)) {
        auto targetFn = runtime->lookupFunction(0x18CA98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C8FCu; }
        if (ctx->pc != 0x21C8FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018CA98_0x18ca98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C8FCu; }
        if (ctx->pc != 0x21C8FCu) { return; }
    }
    ctx->pc = 0x21C8FCu;
    // 0x21c8fc: 0xc08afa2  jal         func_22BE88
    ctx->pc = 0x21C8FCu;
    SET_GPR_U32(ctx, 31, 0x21C904u);
    ctx->pc = 0x22BE88u;
    if (runtime->hasFunction(0x22BE88u)) {
        auto targetFn = runtime->lookupFunction(0x22BE88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C904u; }
        if (ctx->pc != 0x21C904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BE88_0x22be88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C904u; }
        if (ctx->pc != 0x21C904u) { return; }
    }
    ctx->pc = 0x21C904u;
    // 0x21c904: 0xc08b078  jal         func_22C1E0
    ctx->pc = 0x21C904u;
    SET_GPR_U32(ctx, 31, 0x21C90Cu);
    ctx->pc = 0x22C1E0u;
    if (runtime->hasFunction(0x22C1E0u)) {
        auto targetFn = runtime->lookupFunction(0x22C1E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C90Cu; }
        if (ctx->pc != 0x21C90Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022C1E0_0x22c1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C90Cu; }
        if (ctx->pc != 0x21C90Cu) { return; }
    }
    ctx->pc = 0x21C90Cu;
    // 0x21c90c: 0xc08c236  jal         func_2308D8
    ctx->pc = 0x21C90Cu;
    SET_GPR_U32(ctx, 31, 0x21C914u);
    ctx->pc = 0x2308D8u;
    if (runtime->hasFunction(0x2308D8u)) {
        auto targetFn = runtime->lookupFunction(0x2308D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C914u; }
        if (ctx->pc != 0x21C914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002308D8_0x2308d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C914u; }
        if (ctx->pc != 0x21C914u) { return; }
    }
    ctx->pc = 0x21C914u;
    // 0x21c914: 0xc06336c  jal         func_18CDB0
    ctx->pc = 0x21C914u;
    SET_GPR_U32(ctx, 31, 0x21C91Cu);
    ctx->pc = 0x18CDB0u;
    if (runtime->hasFunction(0x18CDB0u)) {
        auto targetFn = runtime->lookupFunction(0x18CDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C91Cu; }
        if (ctx->pc != 0x21C91Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018CDB0_0x18cdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C91Cu; }
        if (ctx->pc != 0x21C91Cu) { return; }
    }
    ctx->pc = 0x21C91Cu;
    // 0x21c91c: 0xc08c262  jal         func_230988
    ctx->pc = 0x21C91Cu;
    SET_GPR_U32(ctx, 31, 0x21C924u);
    ctx->pc = 0x230988u;
    if (runtime->hasFunction(0x230988u)) {
        auto targetFn = runtime->lookupFunction(0x230988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C924u; }
        if (ctx->pc != 0x21C924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230988_0x230988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C924u; }
        if (ctx->pc != 0x21C924u) { return; }
    }
    ctx->pc = 0x21C924u;
    // 0x21c924: 0xc08b5fc  jal         func_22D7F0
    ctx->pc = 0x21C924u;
    SET_GPR_U32(ctx, 31, 0x21C92Cu);
    ctx->pc = 0x22D7F0u;
    if (runtime->hasFunction(0x22D7F0u)) {
        auto targetFn = runtime->lookupFunction(0x22D7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C92Cu; }
        if (ctx->pc != 0x21C92Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D7F0_0x22d7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C92Cu; }
        if (ctx->pc != 0x21C92Cu) { return; }
    }
    ctx->pc = 0x21C92Cu;
    // 0x21c92c: 0xc08b08c  jal         func_22C230
    ctx->pc = 0x21C92Cu;
    SET_GPR_U32(ctx, 31, 0x21C934u);
    ctx->pc = 0x22C230u;
    if (runtime->hasFunction(0x22C230u)) {
        auto targetFn = runtime->lookupFunction(0x22C230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C934u; }
        if (ctx->pc != 0x21C934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022C230_0x22c230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C934u; }
        if (ctx->pc != 0x21C934u) { return; }
    }
    ctx->pc = 0x21C934u;
    // 0x21c934: 0xc08b0fa  jal         func_22C3E8
    ctx->pc = 0x21C934u;
    SET_GPR_U32(ctx, 31, 0x21C93Cu);
    ctx->pc = 0x22C3E8u;
    if (runtime->hasFunction(0x22C3E8u)) {
        auto targetFn = runtime->lookupFunction(0x22C3E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C93Cu; }
        if (ctx->pc != 0x21C93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022C3E8_0x22c3e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C93Cu; }
        if (ctx->pc != 0x21C93Cu) { return; }
    }
    ctx->pc = 0x21C93Cu;
    // 0x21c93c: 0xc08b168  jal         func_22C5A0
    ctx->pc = 0x21C93Cu;
    SET_GPR_U32(ctx, 31, 0x21C944u);
    ctx->pc = 0x22C5A0u;
    if (runtime->hasFunction(0x22C5A0u)) {
        auto targetFn = runtime->lookupFunction(0x22C5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C944u; }
        if (ctx->pc != 0x21C944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022C5A0_0x22c5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C944u; }
        if (ctx->pc != 0x21C944u) { return; }
    }
    ctx->pc = 0x21C944u;
    // 0x21c944: 0xc077374  jal         func_1DCDD0
    ctx->pc = 0x21C944u;
    SET_GPR_U32(ctx, 31, 0x21C94Cu);
    ctx->pc = 0x1DCDD0u;
    if (runtime->hasFunction(0x1DCDD0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C94Cu; }
        if (ctx->pc != 0x21C94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCDD0_0x1dcdd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C94Cu; }
        if (ctx->pc != 0x21C94Cu) { return; }
    }
    ctx->pc = 0x21C94Cu;
    // 0x21c94c: 0xc069062  jal         func_1A4188
    ctx->pc = 0x21C94Cu;
    SET_GPR_U32(ctx, 31, 0x21C954u);
    ctx->pc = 0x1A4188u;
    if (runtime->hasFunction(0x1A4188u)) {
        auto targetFn = runtime->lookupFunction(0x1A4188u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C954u; }
        if (ctx->pc != 0x21C954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4188_0x1a4188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C954u; }
        if (ctx->pc != 0x21C954u) { return; }
    }
    ctx->pc = 0x21C954u;
    // 0x21c954: 0xc07cf90  jal         func_1F3E40
    ctx->pc = 0x21C954u;
    SET_GPR_U32(ctx, 31, 0x21C95Cu);
    ctx->pc = 0x1F3E40u;
    if (runtime->hasFunction(0x1F3E40u)) {
        auto targetFn = runtime->lookupFunction(0x1F3E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C95Cu; }
        if (ctx->pc != 0x21C95Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F3E40_0x1f3e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C95Cu; }
        if (ctx->pc != 0x21C95Cu) { return; }
    }
    ctx->pc = 0x21C95Cu;
    // 0x21c95c: 0xc083314  jal         func_20CC50
    ctx->pc = 0x21C95Cu;
    SET_GPR_U32(ctx, 31, 0x21C964u);
    ctx->pc = 0x20CC50u;
    if (runtime->hasFunction(0x20CC50u)) {
        auto targetFn = runtime->lookupFunction(0x20CC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C964u; }
        if (ctx->pc != 0x21C964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020CC50_0x20cc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C964u; }
        if (ctx->pc != 0x21C964u) { return; }
    }
    ctx->pc = 0x21C964u;
    // 0x21c964: 0xc07cff6  jal         func_1F3FD8
    ctx->pc = 0x21C964u;
    SET_GPR_U32(ctx, 31, 0x21C96Cu);
    ctx->pc = 0x1F3FD8u;
    if (runtime->hasFunction(0x1F3FD8u)) {
        auto targetFn = runtime->lookupFunction(0x1F3FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C96Cu; }
        if (ctx->pc != 0x21C96Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F3FD8_0x1f3fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C96Cu; }
        if (ctx->pc != 0x21C96Cu) { return; }
    }
    ctx->pc = 0x21C96Cu;
    // 0x21c96c: 0xc07d102  jal         func_1F4408
    ctx->pc = 0x21C96Cu;
    SET_GPR_U32(ctx, 31, 0x21C974u);
    ctx->pc = 0x1F4408u;
    if (runtime->hasFunction(0x1F4408u)) {
        auto targetFn = runtime->lookupFunction(0x1F4408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C974u; }
        if (ctx->pc != 0x21C974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4408_0x1f4408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C974u; }
        if (ctx->pc != 0x21C974u) { return; }
    }
    ctx->pc = 0x21C974u;
    // 0x21c974: 0xc07d07e  jal         func_1F41F8
    ctx->pc = 0x21C974u;
    SET_GPR_U32(ctx, 31, 0x21C97Cu);
    ctx->pc = 0x1F41F8u;
    if (runtime->hasFunction(0x1F41F8u)) {
        auto targetFn = runtime->lookupFunction(0x1F41F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C97Cu; }
        if (ctx->pc != 0x21C97Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F41F8_0x1f41f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C97Cu; }
        if (ctx->pc != 0x21C97Cu) { return; }
    }
    ctx->pc = 0x21C97Cu;
    // 0x21c97c: 0xc089580  jal         func_225600
    ctx->pc = 0x21C97Cu;
    SET_GPR_U32(ctx, 31, 0x21C984u);
    ctx->pc = 0x225600u;
    if (runtime->hasFunction(0x225600u)) {
        auto targetFn = runtime->lookupFunction(0x225600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C984u; }
        if (ctx->pc != 0x21C984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225600_0x225600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C984u; }
        if (ctx->pc != 0x21C984u) { return; }
    }
    ctx->pc = 0x21C984u;
    // 0x21c984: 0xc08949c  jal         func_225270
    ctx->pc = 0x21C984u;
    SET_GPR_U32(ctx, 31, 0x21C98Cu);
    ctx->pc = 0x225270u;
    if (runtime->hasFunction(0x225270u)) {
        auto targetFn = runtime->lookupFunction(0x225270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C98Cu; }
        if (ctx->pc != 0x21C98Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225270_0x225270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C98Cu; }
        if (ctx->pc != 0x21C98Cu) { return; }
    }
    ctx->pc = 0x21C98Cu;
    // 0x21c98c: 0xc088846  jal         func_222118
    ctx->pc = 0x21C98Cu;
    SET_GPR_U32(ctx, 31, 0x21C994u);
    ctx->pc = 0x222118u;
    if (runtime->hasFunction(0x222118u)) {
        auto targetFn = runtime->lookupFunction(0x222118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C994u; }
        if (ctx->pc != 0x21C994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222118_0x222118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C994u; }
        if (ctx->pc != 0x21C994u) { return; }
    }
    ctx->pc = 0x21C994u;
    // 0x21c994: 0xc088672  jal         func_2219C8
    ctx->pc = 0x21C994u;
    SET_GPR_U32(ctx, 31, 0x21C99Cu);
    ctx->pc = 0x2219C8u;
    if (runtime->hasFunction(0x2219C8u)) {
        auto targetFn = runtime->lookupFunction(0x2219C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C99Cu; }
        if (ctx->pc != 0x21C99Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002219C8_0x2219c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C99Cu; }
        if (ctx->pc != 0x21C99Cu) { return; }
    }
    ctx->pc = 0x21C99Cu;
    // 0x21c99c: 0xc0892a0  jal         func_224A80
    ctx->pc = 0x21C99Cu;
    SET_GPR_U32(ctx, 31, 0x21C9A4u);
    ctx->pc = 0x224A80u;
    if (runtime->hasFunction(0x224A80u)) {
        auto targetFn = runtime->lookupFunction(0x224A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C9A4u; }
        if (ctx->pc != 0x21C9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_224a80_0x224b98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C9A4u; }
        if (ctx->pc != 0x21C9A4u) { return; }
    }
    ctx->pc = 0x21C9A4u;
    // 0x21c9a4: 0xc07504a  jal         func_1D4128
    ctx->pc = 0x21C9A4u;
    SET_GPR_U32(ctx, 31, 0x21C9ACu);
    ctx->pc = 0x1D4128u;
    if (runtime->hasFunction(0x1D4128u)) {
        auto targetFn = runtime->lookupFunction(0x1D4128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C9ACu; }
        if (ctx->pc != 0x21C9ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4128_0x1d4128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C9ACu; }
        if (ctx->pc != 0x21C9ACu) { return; }
    }
    ctx->pc = 0x21C9ACu;
    // 0x21c9ac: 0xc080034  jal         func_2000D0
    ctx->pc = 0x21C9ACu;
    SET_GPR_U32(ctx, 31, 0x21C9B4u);
    ctx->pc = 0x2000D0u;
    if (runtime->hasFunction(0x2000D0u)) {
        auto targetFn = runtime->lookupFunction(0x2000D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C9B4u; }
        if (ctx->pc != 0x21C9B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002000D0_0x2000d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C9B4u; }
        if (ctx->pc != 0x21C9B4u) { return; }
    }
    ctx->pc = 0x21C9B4u;
    // 0x21c9b4: 0xc0638d8  jal         func_18E360
    ctx->pc = 0x21C9B4u;
    SET_GPR_U32(ctx, 31, 0x21C9BCu);
    ctx->pc = 0x18E360u;
    if (runtime->hasFunction(0x18E360u)) {
        auto targetFn = runtime->lookupFunction(0x18E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C9BCu; }
        if (ctx->pc != 0x21C9BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018E360_0x18e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C9BCu; }
        if (ctx->pc != 0x21C9BCu) { return; }
    }
    ctx->pc = 0x21C9BCu;
    // 0x21c9bc: 0xc06d528  jal         func_1B54A0
    ctx->pc = 0x21C9BCu;
    SET_GPR_U32(ctx, 31, 0x21C9C4u);
    ctx->pc = 0x1B54A0u;
    if (runtime->hasFunction(0x1B54A0u)) {
        auto targetFn = runtime->lookupFunction(0x1B54A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C9C4u; }
        if (ctx->pc != 0x21C9C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1b54a0_0x1b54d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C9C4u; }
        if (ctx->pc != 0x21C9C4u) { return; }
    }
    ctx->pc = 0x21C9C4u;
    // 0x21c9c4: 0xc062bd4  jal         func_18AF50
    ctx->pc = 0x21C9C4u;
    SET_GPR_U32(ctx, 31, 0x21C9CCu);
    ctx->pc = 0x18AF50u;
    if (runtime->hasFunction(0x18AF50u)) {
        auto targetFn = runtime->lookupFunction(0x18AF50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C9CCu; }
        if (ctx->pc != 0x21C9CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_18af50_0x18b850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C9CCu; }
        if (ctx->pc != 0x21C9CCu) { return; }
    }
    ctx->pc = 0x21C9CCu;
    // 0x21c9cc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x21c9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x21c9d0: 0xc04f856  jal         func_13E158
    ctx->pc = 0x21C9D0u;
    SET_GPR_U32(ctx, 31, 0x21C9D8u);
    ctx->pc = 0x21C9D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C9D0u;
            // 0x21c9d4: 0x8c44ec4c  lw          $a0, -0x13B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962252)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E158u;
    if (runtime->hasFunction(0x13E158u)) {
        auto targetFn = runtime->lookupFunction(0x13E158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C9D8u; }
        if (ctx->pc != 0x21C9D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e158_0x13e180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C9D8u; }
        if (ctx->pc != 0x21C9D8u) { return; }
    }
    ctx->pc = 0x21C9D8u;
    // 0x21c9d8: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x21C9D8u;
    SET_GPR_U32(ctx, 31, 0x21C9E0u);
    ctx->pc = 0x21C9DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C9D8u;
            // 0x21c9dc: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C9E0u; }
        if (ctx->pc != 0x21C9E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C9E0u; }
        if (ctx->pc != 0x21C9E0u) { return; }
    }
    ctx->pc = 0x21C9E0u;
    // 0x21c9e0: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x21C9E0u;
    SET_GPR_U32(ctx, 31, 0x21C9E8u);
    ctx->pc = 0x21C9E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C9E0u;
            // 0x21c9e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C9E8u; }
        if (ctx->pc != 0x21C9E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C9E8u; }
        if (ctx->pc != 0x21C9E8u) { return; }
    }
    ctx->pc = 0x21C9E8u;
    // 0x21c9e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21c9e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c9ec: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x21c9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x21c9f0: 0x24a52ff0  addiu       $a1, $a1, 0x2FF0
    ctx->pc = 0x21c9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12272));
    // 0x21c9f4: 0xc060978  jal         func_1825E0
    ctx->pc = 0x21C9F4u;
    SET_GPR_U32(ctx, 31, 0x21C9FCu);
    ctx->pc = 0x21C9F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C9F4u;
            // 0x21c9f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1825E0u;
    if (runtime->hasFunction(0x1825E0u)) {
        auto targetFn = runtime->lookupFunction(0x1825E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C9FCu; }
        if (ctx->pc != 0x21C9FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001825E0_0x1825e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C9FCu; }
        if (ctx->pc != 0x21C9FCu) { return; }
    }
    ctx->pc = 0x21C9FCu;
    // 0x21c9fc: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x21c9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x21ca00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21ca00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ca04: 0x2442a1d0  addiu       $v0, $v0, -0x5E30
    ctx->pc = 0x21ca04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943184));
    // 0x21ca08: 0xc060b5a  jal         func_182D68
    ctx->pc = 0x21CA08u;
    SET_GPR_U32(ctx, 31, 0x21CA10u);
    ctx->pc = 0x21CA0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CA08u;
            // 0x21ca0c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182D68u;
    if (runtime->hasFunction(0x182D68u)) {
        auto targetFn = runtime->lookupFunction(0x182D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CA10u; }
        if (ctx->pc != 0x21CA10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182D68_0x182d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CA10u; }
        if (ctx->pc != 0x21CA10u) { return; }
    }
    ctx->pc = 0x21CA10u;
    // 0x21ca10: 0xc04f860  jal         func_13E180
    ctx->pc = 0x21CA10u;
    SET_GPR_U32(ctx, 31, 0x21CA18u);
    ctx->pc = 0x21CA14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CA10u;
            // 0x21ca14: 0xae50ca00  sw          $s0, -0x3600($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294953472), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E180u;
    if (runtime->hasFunction(0x13E180u)) {
        auto targetFn = runtime->lookupFunction(0x13E180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CA18u; }
        if (ctx->pc != 0x21CA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e180_0x13e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CA18u; }
        if (ctx->pc != 0x21CA18u) { return; }
    }
    ctx->pc = 0x21CA18u;
    // 0x21ca18: 0xc07b3b8  jal         func_1ECEE0
    ctx->pc = 0x21CA18u;
    SET_GPR_U32(ctx, 31, 0x21CA20u);
    ctx->pc = 0x1ECEE0u;
    if (runtime->hasFunction(0x1ECEE0u)) {
        auto targetFn = runtime->lookupFunction(0x1ECEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CA20u; }
        if (ctx->pc != 0x21CA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ECEE0_0x1ecee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CA20u; }
        if (ctx->pc != 0x21CA20u) { return; }
    }
    ctx->pc = 0x21CA20u;
    // 0x21ca20: 0xc088200  jal         func_220800
    ctx->pc = 0x21CA20u;
    SET_GPR_U32(ctx, 31, 0x21CA28u);
    ctx->pc = 0x220800u;
    if (runtime->hasFunction(0x220800u)) {
        auto targetFn = runtime->lookupFunction(0x220800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CA28u; }
        if (ctx->pc != 0x21CA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00220800_0x220800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CA28u; }
        if (ctx->pc != 0x21CA28u) { return; }
    }
    ctx->pc = 0x21CA28u;
    // 0x21ca28: 0xc085748  jal         func_215D20
    ctx->pc = 0x21CA28u;
    SET_GPR_U32(ctx, 31, 0x21CA30u);
    ctx->pc = 0x215D20u;
    if (runtime->hasFunction(0x215D20u)) {
        auto targetFn = runtime->lookupFunction(0x215D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CA30u; }
        if (ctx->pc != 0x21CA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00215D20_0x215d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CA30u; }
        if (ctx->pc != 0x21CA30u) { return; }
    }
    ctx->pc = 0x21CA30u;
    // 0x21ca30: 0xc04170c  jal         func_105C30
    ctx->pc = 0x21CA30u;
    SET_GPR_U32(ctx, 31, 0x21CA38u);
    ctx->pc = 0x105C30u;
    if (runtime->hasFunction(0x105C30u)) {
        auto targetFn = runtime->lookupFunction(0x105C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CA38u; }
        if (ctx->pc != 0x21CA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00105C30_0x105c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CA38u; }
        if (ctx->pc != 0x21CA38u) { return; }
    }
    ctx->pc = 0x21CA38u;
    // 0x21ca38: 0xc08ad5c  jal         func_22B570
    ctx->pc = 0x21CA38u;
    SET_GPR_U32(ctx, 31, 0x21CA40u);
    ctx->pc = 0x22B570u;
    if (runtime->hasFunction(0x22B570u)) {
        auto targetFn = runtime->lookupFunction(0x22B570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CA40u; }
        if (ctx->pc != 0x21CA40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022B570_0x22b570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CA40u; }
        if (ctx->pc != 0x21CA40u) { return; }
    }
    ctx->pc = 0x21CA40u;
    // 0x21ca40: 0xc08ae4e  jal         func_22B938
    ctx->pc = 0x21CA40u;
    SET_GPR_U32(ctx, 31, 0x21CA48u);
    ctx->pc = 0x22B938u;
    if (runtime->hasFunction(0x22B938u)) {
        auto targetFn = runtime->lookupFunction(0x22B938u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CA48u; }
        if (ctx->pc != 0x21CA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022B938_0x22b938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CA48u; }
        if (ctx->pc != 0x21CA48u) { return; }
    }
    ctx->pc = 0x21CA48u;
    // 0x21ca48: 0xc08089e  jal         func_202278
    ctx->pc = 0x21CA48u;
    SET_GPR_U32(ctx, 31, 0x21CA50u);
    ctx->pc = 0x202278u;
    if (runtime->hasFunction(0x202278u)) {
        auto targetFn = runtime->lookupFunction(0x202278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CA50u; }
        if (ctx->pc != 0x21CA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00202278_0x202278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CA50u; }
        if (ctx->pc != 0x21CA50u) { return; }
    }
    ctx->pc = 0x21CA50u;
    // 0x21ca50: 0xc089fbc  jal         func_227EF0
    ctx->pc = 0x21CA50u;
    SET_GPR_U32(ctx, 31, 0x21CA58u);
    ctx->pc = 0x227EF0u;
    if (runtime->hasFunction(0x227EF0u)) {
        auto targetFn = runtime->lookupFunction(0x227EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CA58u; }
        if (ctx->pc != 0x21CA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00227EF0_0x227ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CA58u; }
        if (ctx->pc != 0x21CA58u) { return; }
    }
    ctx->pc = 0x21CA58u;
    // 0x21ca58: 0xc08a544  jal         func_229510
    ctx->pc = 0x21CA58u;
    SET_GPR_U32(ctx, 31, 0x21CA60u);
    ctx->pc = 0x229510u;
    if (runtime->hasFunction(0x229510u)) {
        auto targetFn = runtime->lookupFunction(0x229510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CA60u; }
        if (ctx->pc != 0x21CA60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00229510_0x229510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CA60u; }
        if (ctx->pc != 0x21CA60u) { return; }
    }
    ctx->pc = 0x21CA60u;
    // 0x21ca60: 0xc06eb32  jal         func_1BACC8
    ctx->pc = 0x21CA60u;
    SET_GPR_U32(ctx, 31, 0x21CA68u);
    ctx->pc = 0x1BACC8u;
    if (runtime->hasFunction(0x1BACC8u)) {
        auto targetFn = runtime->lookupFunction(0x1BACC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CA68u; }
        if (ctx->pc != 0x21CA68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BACC8_0x1bacc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CA68u; }
        if (ctx->pc != 0x21CA68u) { return; }
    }
    ctx->pc = 0x21CA68u;
    // 0x21ca68: 0xc080f7e  jal         func_203DF8
    ctx->pc = 0x21CA68u;
    SET_GPR_U32(ctx, 31, 0x21CA70u);
    ctx->pc = 0x203DF8u;
    if (runtime->hasFunction(0x203DF8u)) {
        auto targetFn = runtime->lookupFunction(0x203DF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CA70u; }
        if (ctx->pc != 0x21CA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_203df8_0x203f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CA70u; }
        if (ctx->pc != 0x21CA70u) { return; }
    }
    ctx->pc = 0x21CA70u;
    // 0x21ca70: 0xc089fc4  jal         func_227F10
    ctx->pc = 0x21CA70u;
    SET_GPR_U32(ctx, 31, 0x21CA78u);
    ctx->pc = 0x227F10u;
    if (runtime->hasFunction(0x227F10u)) {
        auto targetFn = runtime->lookupFunction(0x227F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CA78u; }
        if (ctx->pc != 0x21CA78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00227F10_0x227f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CA78u; }
        if (ctx->pc != 0x21CA78u) { return; }
    }
    ctx->pc = 0x21CA78u;
    // 0x21ca78: 0xc08a54e  jal         func_229538
    ctx->pc = 0x21CA78u;
    SET_GPR_U32(ctx, 31, 0x21CA80u);
    ctx->pc = 0x229538u;
    if (runtime->hasFunction(0x229538u)) {
        auto targetFn = runtime->lookupFunction(0x229538u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CA80u; }
        if (ctx->pc != 0x21CA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00229538_0x229538(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CA80u; }
        if (ctx->pc != 0x21CA80u) { return; }
    }
    ctx->pc = 0x21CA80u;
    // 0x21ca80: 0xc069a08  jal         func_1A6820
    ctx->pc = 0x21CA80u;
    SET_GPR_U32(ctx, 31, 0x21CA88u);
    ctx->pc = 0x1A6820u;
    if (runtime->hasFunction(0x1A6820u)) {
        auto targetFn = runtime->lookupFunction(0x1A6820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CA88u; }
        if (ctx->pc != 0x21CA88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6820_0x1a6820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CA88u; }
        if (ctx->pc != 0x21CA88u) { return; }
    }
    ctx->pc = 0x21CA88u;
    // 0x21ca88: 0xc08b202  jal         func_22C808
    ctx->pc = 0x21CA88u;
    SET_GPR_U32(ctx, 31, 0x21CA90u);
    ctx->pc = 0x22C808u;
    if (runtime->hasFunction(0x22C808u)) {
        auto targetFn = runtime->lookupFunction(0x22C808u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CA90u; }
        if (ctx->pc != 0x21CA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_22c808_0x22c848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CA90u; }
        if (ctx->pc != 0x21CA90u) { return; }
    }
    ctx->pc = 0x21CA90u;
    // 0x21ca90: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21ca90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21ca94: 0xc047b90  jal         func_11EE40
    ctx->pc = 0x21CA94u;
    SET_GPR_U32(ctx, 31, 0x21CA9Cu);
    ctx->pc = 0x21CA98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CA94u;
            // 0x21ca98: 0x8c44bcf8  lw          $a0, -0x4308($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EE40u;
    if (runtime->hasFunction(0x11EE40u)) {
        auto targetFn = runtime->lookupFunction(0x11EE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CA9Cu; }
        if (ctx->pc != 0x21CA9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11ee40_0x11ee88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CA9Cu; }
        if (ctx->pc != 0x21CA9Cu) { return; }
    }
    ctx->pc = 0x21CA9Cu;
    // 0x21ca9c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x21ca9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x21caa0: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x21caa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x21caa4: 0xac626e84  sw          $v0, 0x6E84($v1)
    ctx->pc = 0x21caa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28292), GPR_U32(ctx, 2));
    // 0x21caa8: 0xc04f824  jal         func_13E090
    ctx->pc = 0x21CAA8u;
    SET_GPR_U32(ctx, 31, 0x21CAB0u);
    ctx->pc = 0x21CAACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CAA8u;
            // 0x21caac: 0xac82f16c  sw          $v0, -0xE94($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294963564), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CAB0u; }
        if (ctx->pc != 0x21CAB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CAB0u; }
        if (ctx->pc != 0x21CAB0u) { return; }
    }
    ctx->pc = 0x21CAB0u;
    // 0x21cab0: 0x240503c0  addiu       $a1, $zero, 0x3C0
    ctx->pc = 0x21cab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 960));
    // 0x21cab4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x21cab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x21cab8: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x21CAB8u;
    SET_GPR_U32(ctx, 31, 0x21CAC0u);
    ctx->pc = 0x21CABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CAB8u;
            // 0x21cabc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CAC0u; }
        if (ctx->pc != 0x21CAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CAC0u; }
        if (ctx->pc != 0x21CAC0u) { return; }
    }
    ctx->pc = 0x21CAC0u;
    // 0x21cac0: 0xc05a326  jal         func_168C98
    ctx->pc = 0x21CAC0u;
    SET_GPR_U32(ctx, 31, 0x21CAC8u);
    ctx->pc = 0x21CAC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CAC0u;
            // 0x21cac4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168C98u;
    if (runtime->hasFunction(0x168C98u)) {
        auto targetFn = runtime->lookupFunction(0x168C98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CAC8u; }
        if (ctx->pc != 0x21CAC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168C98_0x168c98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CAC8u; }
        if (ctx->pc != 0x21CAC8u) { return; }
    }
    ctx->pc = 0x21CAC8u;
    // 0x21cac8: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x21cac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x21cacc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21caccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cad0: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x21CAD0u;
    SET_GPR_U32(ctx, 31, 0x21CAD8u);
    ctx->pc = 0x21CAD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CAD0u;
            // 0x21cad4: 0x8c647910  lw          $a0, 0x7910($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 30992)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CAD8u; }
        if (ctx->pc != 0x21CAD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CAD8u; }
        if (ctx->pc != 0x21CAD8u) { return; }
    }
    ctx->pc = 0x21CAD8u;
    // 0x21cad8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x21cad8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x21cadc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x21cadcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x21cae0: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x21cae0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x21cae4: 0x8e23bc78  lw          $v1, -0x4388($s1)
    ctx->pc = 0x21cae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950008)));
    // 0x21cae8: 0xae22bc78  sw          $v0, -0x4388($s1)
    ctx->pc = 0x21cae8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294950008), GPR_U32(ctx, 2));
    // 0x21caec: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x21caecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x21caf0: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x21caf0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x21caf4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x21caf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x21caf8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21caf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cafc: 0xac530004  sw          $s3, 0x4($v0)
    ctx->pc = 0x21cafcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
    // 0x21cb00: 0x248414d0  addiu       $a0, $a0, 0x14D0
    ctx->pc = 0x21cb00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5328));
    // 0x21cb04: 0xc05e9fc  jal         func_17A7F0
    ctx->pc = 0x21CB04u;
    SET_GPR_U32(ctx, 31, 0x21CB0Cu);
    ctx->pc = 0x21CB08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CB04u;
            // 0x21cb08: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A7F0u;
    if (runtime->hasFunction(0x17A7F0u)) {
        auto targetFn = runtime->lookupFunction(0x17A7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CB0Cu; }
        if (ctx->pc != 0x21CB0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A7F0_0x17a7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CB0Cu; }
        if (ctx->pc != 0x21CB0Cu) { return; }
    }
    ctx->pc = 0x21CB0Cu;
    // 0x21cb0c: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x21CB0Cu;
    SET_GPR_U32(ctx, 31, 0x21CB14u);
    ctx->pc = 0x21CB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CB0Cu;
            // 0x21cb10: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CB14u; }
        if (ctx->pc != 0x21CB14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CB14u; }
        if (ctx->pc != 0x21CB14u) { return; }
    }
    ctx->pc = 0x21CB14u;
    // 0x21cb14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21cb14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cb18: 0xc04a686  jal         func_129A18
    ctx->pc = 0x21CB18u;
    SET_GPR_U32(ctx, 31, 0x21CB20u);
    ctx->pc = 0x21CB1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CB18u;
            // 0x21cb1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129A18u;
    if (runtime->hasFunction(0x129A18u)) {
        auto targetFn = runtime->lookupFunction(0x129A18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CB20u; }
        if (ctx->pc != 0x21CB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129A18_0x129a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CB20u; }
        if (ctx->pc != 0x21CB20u) { return; }
    }
    ctx->pc = 0x21CB20u;
    // 0x21cb20: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x21cb20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x21cb24: 0x240415b0  addiu       $a0, $zero, 0x15B0
    ctx->pc = 0x21cb24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5552));
    // 0x21cb28: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x21CB28u;
    SET_GPR_U32(ctx, 31, 0x21CB30u);
    ctx->pc = 0x21CB2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CB28u;
            // 0x21cb2c: 0xac62c088  sw          $v0, -0x3F78($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294951048), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CB30u; }
        if (ctx->pc != 0x21CB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CB30u; }
        if (ctx->pc != 0x21CB30u) { return; }
    }
    ctx->pc = 0x21CB30u;
    // 0x21cb30: 0xc06d75c  jal         func_1B5D70
    ctx->pc = 0x21CB30u;
    SET_GPR_U32(ctx, 31, 0x21CB38u);
    ctx->pc = 0x21CB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CB30u;
            // 0x21cb34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5D70u;
    if (runtime->hasFunction(0x1B5D70u)) {
        auto targetFn = runtime->lookupFunction(0x1B5D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CB38u; }
        if (ctx->pc != 0x21CB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5D70_0x1b5d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CB38u; }
        if (ctx->pc != 0x21CB38u) { return; }
    }
    ctx->pc = 0x21CB38u;
    // 0x21cb38: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x21cb38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x21cb3c: 0xae22cb94  sw          $v0, -0x346C($s1)
    ctx->pc = 0x21cb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294953876), GPR_U32(ctx, 2));
    // 0x21cb40: 0xc0876b8  jal         func_21DAE0
    ctx->pc = 0x21CB40u;
    SET_GPR_U32(ctx, 31, 0x21CB48u);
    ctx->pc = 0x21CB44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CB40u;
            // 0x21cb44: 0xac60cc94  sw          $zero, -0x336C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DAE0u;
    if (runtime->hasFunction(0x21DAE0u)) {
        auto targetFn = runtime->lookupFunction(0x21DAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CB48u; }
        if (ctx->pc != 0x21CB48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021DAE0_0x21dae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CB48u; }
        if (ctx->pc != 0x21CB48u) { return; }
    }
    ctx->pc = 0x21CB48u;
    // 0x21cb48: 0xc0873c6  jal         func_21CF18
    ctx->pc = 0x21CB48u;
    SET_GPR_U32(ctx, 31, 0x21CB50u);
    ctx->pc = 0x21CF18u;
    if (runtime->hasFunction(0x21CF18u)) {
        auto targetFn = runtime->lookupFunction(0x21CF18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CB50u; }
        if (ctx->pc != 0x21CB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021CF18_0x21cf18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CB50u; }
        if (ctx->pc != 0x21CB50u) { return; }
    }
    ctx->pc = 0x21CB50u;
    // 0x21cb50: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x21cb50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x21cb54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21cb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21cb58: 0xc08bb96  jal         func_22EE58
    ctx->pc = 0x21CB58u;
    SET_GPR_U32(ctx, 31, 0x21CB60u);
    ctx->pc = 0x21CB5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CB58u;
            // 0x21cb5c: 0xac62e55c  sw          $v0, -0x1AA4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960476), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22EE58u;
    if (runtime->hasFunction(0x22EE58u)) {
        auto targetFn = runtime->lookupFunction(0x22EE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CB60u; }
        if (ctx->pc != 0x21CB60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022EE58_0x22ee58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CB60u; }
        if (ctx->pc != 0x21CB60u) { return; }
    }
    ctx->pc = 0x21CB60u;
    // 0x21cb60: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x21cb60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21cb64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21cb64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cb68: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x21cb68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21cb6c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21cb6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21cb70: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x21cb70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21cb74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21cb74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21cb78: 0x3e00008  jr          $ra
    ctx->pc = 0x21CB78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21CB78u;
            // 0x21cb7c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21CB80u;
}
