#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00199368
// Address: 0x199368 - 0x1994f8
void sub_00199368_0x199368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199368_0x199368");
#endif

    ctx->pc = 0x199368u;

    // 0x199368: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x199368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19936c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19936cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x199370: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x199370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x199374: 0xc05d656  jal         func_175958
    ctx->pc = 0x199374u;
    SET_GPR_U32(ctx, 31, 0x19937Cu);
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19937Cu; }
        if (ctx->pc != 0x19937Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19937Cu; }
        if (ctx->pc != 0x19937Cu) { return; }
    }
    ctx->pc = 0x19937Cu;
    // 0x19937c: 0xc0657b6  jal         func_195ED8
    ctx->pc = 0x19937Cu;
    SET_GPR_U32(ctx, 31, 0x199384u);
    ctx->pc = 0x199380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19937Cu;
            // 0x199380: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195ED8u;
    if (runtime->hasFunction(0x195ED8u)) {
        auto targetFn = runtime->lookupFunction(0x195ED8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199384u; }
        if (ctx->pc != 0x199384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00195ED8_0x195ed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199384u; }
        if (ctx->pc != 0x199384u) { return; }
    }
    ctx->pc = 0x199384u;
    // 0x199384: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x199384u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x199388: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x199388u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x19938c: 0x24a53958  addiu       $a1, $a1, 0x3958
    ctx->pc = 0x19938cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14680));
    // 0x199390: 0x24c66b80  addiu       $a2, $a2, 0x6B80
    ctx->pc = 0x199390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27520));
    // 0x199394: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x199394u;
    SET_GPR_U32(ctx, 31, 0x19939Cu);
    ctx->pc = 0x199398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199394u;
            // 0x199398: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19939Cu; }
        if (ctx->pc != 0x19939Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19939Cu; }
        if (ctx->pc != 0x19939Cu) { return; }
    }
    ctx->pc = 0x19939Cu;
    // 0x19939c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x19939cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1993a0: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x1993a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x1993a4: 0x24a53970  addiu       $a1, $a1, 0x3970
    ctx->pc = 0x1993a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14704));
    // 0x1993a8: 0x24c67c50  addiu       $a2, $a2, 0x7C50
    ctx->pc = 0x1993a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31824));
    // 0x1993ac: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x1993ACu;
    SET_GPR_U32(ctx, 31, 0x1993B4u);
    ctx->pc = 0x1993B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1993ACu;
            // 0x1993b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1993B4u; }
        if (ctx->pc != 0x1993B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1993B4u; }
        if (ctx->pc != 0x1993B4u) { return; }
    }
    ctx->pc = 0x1993B4u;
    // 0x1993b4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1993b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1993b8: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x1993b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x1993bc: 0x24a53980  addiu       $a1, $a1, 0x3980
    ctx->pc = 0x1993bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14720));
    // 0x1993c0: 0x24c67fb8  addiu       $a2, $a2, 0x7FB8
    ctx->pc = 0x1993c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32696));
    // 0x1993c4: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x1993C4u;
    SET_GPR_U32(ctx, 31, 0x1993CCu);
    ctx->pc = 0x1993C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1993C4u;
            // 0x1993c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1993CCu; }
        if (ctx->pc != 0x1993CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1993CCu; }
        if (ctx->pc != 0x1993CCu) { return; }
    }
    ctx->pc = 0x1993CCu;
    // 0x1993cc: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1993ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1993d0: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x1993d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x1993d4: 0x24a53998  addiu       $a1, $a1, 0x3998
    ctx->pc = 0x1993d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14744));
    // 0x1993d8: 0x24c680a8  addiu       $a2, $a2, -0x7F58
    ctx->pc = 0x1993d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934696));
    // 0x1993dc: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x1993DCu;
    SET_GPR_U32(ctx, 31, 0x1993E4u);
    ctx->pc = 0x1993E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1993DCu;
            // 0x1993e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1993E4u; }
        if (ctx->pc != 0x1993E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1993E4u; }
        if (ctx->pc != 0x1993E4u) { return; }
    }
    ctx->pc = 0x1993E4u;
    // 0x1993e4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1993e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1993e8: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x1993e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x1993ec: 0x24a539b0  addiu       $a1, $a1, 0x39B0
    ctx->pc = 0x1993ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14768));
    // 0x1993f0: 0x24c678d8  addiu       $a2, $a2, 0x78D8
    ctx->pc = 0x1993f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30936));
    // 0x1993f4: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x1993F4u;
    SET_GPR_U32(ctx, 31, 0x1993FCu);
    ctx->pc = 0x1993F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1993F4u;
            // 0x1993f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1993FCu; }
        if (ctx->pc != 0x1993FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1993FCu; }
        if (ctx->pc != 0x1993FCu) { return; }
    }
    ctx->pc = 0x1993FCu;
    // 0x1993fc: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1993fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x199400: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x199400u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x199404: 0x24a539c8  addiu       $a1, $a1, 0x39C8
    ctx->pc = 0x199404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14792));
    // 0x199408: 0x24c68230  addiu       $a2, $a2, -0x7DD0
    ctx->pc = 0x199408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935088));
    // 0x19940c: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x19940Cu;
    SET_GPR_U32(ctx, 31, 0x199414u);
    ctx->pc = 0x199410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19940Cu;
            // 0x199410: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199414u; }
        if (ctx->pc != 0x199414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199414u; }
        if (ctx->pc != 0x199414u) { return; }
    }
    ctx->pc = 0x199414u;
    // 0x199414: 0xc0661e6  jal         func_198798
    ctx->pc = 0x199414u;
    SET_GPR_U32(ctx, 31, 0x19941Cu);
    ctx->pc = 0x198798u;
    if (runtime->hasFunction(0x198798u)) {
        auto targetFn = runtime->lookupFunction(0x198798u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19941Cu; }
        if (ctx->pc != 0x19941Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00198798_0x198798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19941Cu; }
        if (ctx->pc != 0x19941Cu) { return; }
    }
    ctx->pc = 0x19941Cu;
    // 0x19941c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x19941cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x199420: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x199420u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x199424: 0x24a539d8  addiu       $a1, $a1, 0x39D8
    ctx->pc = 0x199424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14808));
    // 0x199428: 0x24c69098  addiu       $a2, $a2, -0x6F68
    ctx->pc = 0x199428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938776));
    // 0x19942c: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x19942Cu;
    SET_GPR_U32(ctx, 31, 0x199434u);
    ctx->pc = 0x199430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19942Cu;
            // 0x199430: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199434u; }
        if (ctx->pc != 0x199434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199434u; }
        if (ctx->pc != 0x199434u) { return; }
    }
    ctx->pc = 0x199434u;
    // 0x199434: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x199434u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x199438: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x199438u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x19943c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19943cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199440: 0x24a539e8  addiu       $a1, $a1, 0x39E8
    ctx->pc = 0x199440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14824));
    // 0x199444: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x199444u;
    SET_GPR_U32(ctx, 31, 0x19944Cu);
    ctx->pc = 0x199448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199444u;
            // 0x199448: 0x24c692b0  addiu       $a2, $a2, -0x6D50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19944Cu; }
        if (ctx->pc != 0x19944Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19944Cu; }
        if (ctx->pc != 0x19944Cu) { return; }
    }
    ctx->pc = 0x19944Cu;
    // 0x19944c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19944cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199450: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x199450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199454: 0x3e00008  jr          $ra
    ctx->pc = 0x199454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199454u;
            // 0x199458: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1994B0u: goto label_1994b0;
            case 0x1994B4u: goto label_1994b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19945Cu;
    // 0x19945c: 0x0  nop
    ctx->pc = 0x19945cu;
    // NOP
    // 0x199460: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x199460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x199464: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x199464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x199468: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x199468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19946c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19946cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199470: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x199470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x199474: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x199474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x199478: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x199478u;
    {
        const bool branch_taken_0x199478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19947Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199478u;
            // 0x19947c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199478) {
            ctx->pc = 0x1994B0u;
            goto label_1994b0;
        }
    }
    ctx->pc = 0x199480u;
    // 0x199480: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x199480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x199484: 0x41dc2  srl         $v1, $a0, 23
    ctx->pc = 0x199484u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 23));
    // 0x199488: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x199488u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x19948c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19948cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x199490: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x199490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x199494: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x199494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x199498: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x199498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19949c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19949cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1994a0: 0x54440004  bnel        $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1994A0u;
    {
        const bool branch_taken_0x1994a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1994a0) {
            ctx->pc = 0x1994A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1994A0u;
            // 0x1994a4: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1994B4u;
            goto label_1994b4;
        }
    }
    ctx->pc = 0x1994A8u;
    // 0x1994a8: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x1994a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1994ac: 0x0  nop
    ctx->pc = 0x1994acu;
    // NOP
label_1994b0:
    // 0x1994b0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1994b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1994b4:
    // 0x1994b4: 0x24020412  addiu       $v0, $zero, 0x412
    ctx->pc = 0x1994b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x1994b8: 0xa7a20000  sh          $v0, 0x0($sp)
    ctx->pc = 0x1994b8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1994bc: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1994bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1994c0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1994c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1994c4: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x1994c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x1994c8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1994c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1994cc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1994ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1994d0: 0x8c44e89c  lw          $a0, -0x1764($v0)
    ctx->pc = 0x1994d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961308)));
    // 0x1994d4: 0xc047d6a  jal         func_11F5A8
    ctx->pc = 0x1994D4u;
    SET_GPR_U32(ctx, 31, 0x1994DCu);
    ctx->pc = 0x1994D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1994D4u;
            // 0x1994d8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F5A8u;
    if (runtime->hasFunction(0x11F5A8u)) {
        auto targetFn = runtime->lookupFunction(0x11F5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1994DCu; }
        if (ctx->pc != 0x1994DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11f5a8_0x11f5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1994DCu; }
        if (ctx->pc != 0x1994DCu) { return; }
    }
    ctx->pc = 0x1994DCu;
    // 0x1994dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1994dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1994e0: 0xa602002a  sh          $v0, 0x2A($s0)
    ctx->pc = 0x1994e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x1994e4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1994e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1994e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1994e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1994ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1994ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1994F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1994ECu;
            // 0x1994f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1994B0u: goto label_1994b0;
            case 0x1994B4u: goto label_1994b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1994F4u;
    // 0x1994f4: 0x0  nop
    ctx->pc = 0x1994f4u;
    // NOP
}
