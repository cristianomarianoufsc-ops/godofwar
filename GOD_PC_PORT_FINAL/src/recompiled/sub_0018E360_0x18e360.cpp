#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018E360
// Address: 0x18e360 - 0x18e460
void sub_0018E360_0x18e360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E360_0x18e360");
#endif

    ctx->pc = 0x18e360u;

    // 0x18e360: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x18e360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x18e364: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x18e364u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18e368: 0x8c44ec4c  lw          $a0, -0x13B4($v0)
    ctx->pc = 0x18e368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962252)));
    // 0x18e36c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x18e36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x18e370: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x18e370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x18e374: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18e374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18e378: 0xc04f856  jal         func_13E158
    ctx->pc = 0x18E378u;
    SET_GPR_U32(ctx, 31, 0x18E380u);
    ctx->pc = 0x18E37Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E378u;
            // 0x18e37c: 0x3c11002a  lui         $s1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E158u;
    if (runtime->hasFunction(0x13E158u)) {
        auto targetFn = runtime->lookupFunction(0x13E158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E380u; }
        if (ctx->pc != 0x18E380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e158_0x13e180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E380u; }
        if (ctx->pc != 0x18E380u) { return; }
    }
    ctx->pc = 0x18E380u;
    // 0x18e380: 0xc090c84  jal         func_243210
    ctx->pc = 0x18E380u;
    SET_GPR_U32(ctx, 31, 0x18E388u);
    ctx->pc = 0x18E384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E380u;
            // 0x18e384: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243210u;
    if (runtime->hasFunction(0x243210u)) {
        auto targetFn = runtime->lookupFunction(0x243210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E388u; }
        if (ctx->pc != 0x18E388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243210_0x243238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E388u; }
        if (ctx->pc != 0x18E388u) { return; }
    }
    ctx->pc = 0x18E388u;
    // 0x18e388: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x18E388u;
    SET_GPR_U32(ctx, 31, 0x18E390u);
    ctx->pc = 0x18E38Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E388u;
            // 0x18e38c: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E390u; }
        if (ctx->pc != 0x18E390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E390u; }
        if (ctx->pc != 0x18E390u) { return; }
    }
    ctx->pc = 0x18E390u;
    // 0x18e390: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x18E390u;
    SET_GPR_U32(ctx, 31, 0x18E398u);
    ctx->pc = 0x18E394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E390u;
            // 0x18e394: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E398u; }
        if (ctx->pc != 0x18E398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E398u; }
        if (ctx->pc != 0x18E398u) { return; }
    }
    ctx->pc = 0x18E398u;
    // 0x18e398: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18e398u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e39c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x18e39cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x18e3a0: 0x24a53258  addiu       $a1, $a1, 0x3258
    ctx->pc = 0x18e3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12888));
    // 0x18e3a4: 0xc060978  jal         func_1825E0
    ctx->pc = 0x18E3A4u;
    SET_GPR_U32(ctx, 31, 0x18E3ACu);
    ctx->pc = 0x18E3A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E3A4u;
            // 0x18e3a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1825E0u;
    if (runtime->hasFunction(0x1825E0u)) {
        auto targetFn = runtime->lookupFunction(0x1825E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E3ACu; }
        if (ctx->pc != 0x18E3ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001825E0_0x1825e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E3ACu; }
        if (ctx->pc != 0x18E3ACu) { return; }
    }
    ctx->pc = 0x18E3ACu;
    // 0x18e3ac: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x18e3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x18e3b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18e3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e3b4: 0x2442a3b0  addiu       $v0, $v0, -0x5C50
    ctx->pc = 0x18e3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943664));
    // 0x18e3b8: 0xc060b5a  jal         func_182D68
    ctx->pc = 0x18E3B8u;
    SET_GPR_U32(ctx, 31, 0x18E3C0u);
    ctx->pc = 0x18E3BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E3B8u;
            // 0x18e3bc: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182D68u;
    if (runtime->hasFunction(0x182D68u)) {
        auto targetFn = runtime->lookupFunction(0x182D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E3C0u; }
        if (ctx->pc != 0x18E3C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182D68_0x182d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E3C0u; }
        if (ctx->pc != 0x18E3C0u) { return; }
    }
    ctx->pc = 0x18E3C0u;
    // 0x18e3c0: 0x3c05cdf7  lui         $a1, 0xCDF7
    ctx->pc = 0x18e3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52727 << 16));
    // 0x18e3c4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18e3c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e3c8: 0x27a70018  addiu       $a3, $sp, 0x18
    ctx->pc = 0x18e3c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x18e3cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18e3ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e3d0: 0x34a56ae9  ori         $a1, $a1, 0x6AE9
    ctx->pc = 0x18e3d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27369);
    // 0x18e3d4: 0xc060570  jal         func_1815C0
    ctx->pc = 0x18E3D4u;
    SET_GPR_U32(ctx, 31, 0x18E3DCu);
    ctx->pc = 0x18E3D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E3D4u;
            // 0x18e3d8: 0xae30c8c8  sw          $s0, -0x3738($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294953160), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E3DCu; }
        if (ctx->pc != 0x18E3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E3DCu; }
        if (ctx->pc != 0x18E3DCu) { return; }
    }
    ctx->pc = 0x18E3DCu;
    // 0x18e3dc: 0x8e24c8c8  lw          $a0, -0x3738($s1)
    ctx->pc = 0x18e3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953160)));
    // 0x18e3e0: 0x3c054192  lui         $a1, 0x4192
    ctx->pc = 0x18e3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16786 << 16));
    // 0x18e3e4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18e3e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e3e8: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x18e3e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x18e3ec: 0xc060570  jal         func_1815C0
    ctx->pc = 0x18E3ECu;
    SET_GPR_U32(ctx, 31, 0x18E3F4u);
    ctx->pc = 0x18E3F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E3ECu;
            // 0x18e3f0: 0x34a5d8ce  ori         $a1, $a1, 0xD8CE (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55502);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E3F4u; }
        if (ctx->pc != 0x18E3F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E3F4u; }
        if (ctx->pc != 0x18E3F4u) { return; }
    }
    ctx->pc = 0x18E3F4u;
    // 0x18e3f4: 0x8e24c8c8  lw          $a0, -0x3738($s1)
    ctx->pc = 0x18e3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953160)));
    // 0x18e3f8: 0x3c05a3e3  lui         $a1, 0xA3E3
    ctx->pc = 0x18e3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41955 << 16));
    // 0x18e3fc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18e3fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e400: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x18e400u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18e404: 0xc060570  jal         func_1815C0
    ctx->pc = 0x18E404u;
    SET_GPR_U32(ctx, 31, 0x18E40Cu);
    ctx->pc = 0x18E408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E404u;
            // 0x18e408: 0x34a5f788  ori         $a1, $a1, 0xF788 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)63368);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E40Cu; }
        if (ctx->pc != 0x18E40Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E40Cu; }
        if (ctx->pc != 0x18E40Cu) { return; }
    }
    ctx->pc = 0x18E40Cu;
    // 0x18e40c: 0x8e24c8c8  lw          $a0, -0x3738($s1)
    ctx->pc = 0x18e40cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953160)));
    // 0x18e410: 0x3c053112  lui         $a1, 0x3112
    ctx->pc = 0x18e410u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12562 << 16));
    // 0x18e414: 0x34a57feb  ori         $a1, $a1, 0x7FEB
    ctx->pc = 0x18e414u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32747);
    // 0x18e418: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18e418u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e41c: 0xc060570  jal         func_1815C0
    ctx->pc = 0x18E41Cu;
    SET_GPR_U32(ctx, 31, 0x18E424u);
    ctx->pc = 0x18E420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E41Cu;
            // 0x18e420: 0x27a70024  addiu       $a3, $sp, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E424u; }
        if (ctx->pc != 0x18E424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E424u; }
        if (ctx->pc != 0x18E424u) { return; }
    }
    ctx->pc = 0x18E424u;
    // 0x18e424: 0xc04f860  jal         func_13E180
    ctx->pc = 0x18E424u;
    SET_GPR_U32(ctx, 31, 0x18E42Cu);
    ctx->pc = 0x13E180u;
    if (runtime->hasFunction(0x13E180u)) {
        auto targetFn = runtime->lookupFunction(0x13E180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E42Cu; }
        if (ctx->pc != 0x18E42Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e180_0x13e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E42Cu; }
        if (ctx->pc != 0x18E42Cu) { return; }
    }
    ctx->pc = 0x18E42Cu;
    // 0x18e42c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x18e42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x18e430: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x18e430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18e434: 0x2442ead8  addiu       $v0, $v0, -0x1528
    ctx->pc = 0x18e434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961880));
    // 0x18e438: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E438u;
    {
        const bool branch_taken_0x18e438 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E43Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E438u;
            // 0x18e43c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e438) {
            ctx->pc = 0x18E448u;
            goto label_18e448;
        }
    }
    ctx->pc = 0x18E440u;
    // 0x18e440: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x18E440u;
    SET_GPR_U32(ctx, 31, 0x18E448u);
    ctx->pc = 0x18E444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E440u;
            // 0x18e444: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E448u; }
        if (ctx->pc != 0x18E448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E448u; }
        if (ctx->pc != 0x18E448u) { return; }
    }
    ctx->pc = 0x18E448u;
label_18e448:
    // 0x18e448: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x18e448u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18e44c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x18e44cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18e450: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18e450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18e454: 0x3e00008  jr          $ra
    ctx->pc = 0x18E454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E454u;
            // 0x18e458: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18E448u: goto label_18e448;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18E45Cu;
    // 0x18e45c: 0x0  nop
    ctx->pc = 0x18e45cu;
    // NOP
}
