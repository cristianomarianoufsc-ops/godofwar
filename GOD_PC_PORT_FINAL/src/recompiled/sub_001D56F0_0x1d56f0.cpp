#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D56F0
// Address: 0x1d56f0 - 0x1d5a60
void sub_001D56F0_0x1d56f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D56F0_0x1d56f0");
#endif

    ctx->pc = 0x1d56f0u;

    // 0x1d56f0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1d56f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x1d56f4: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x1d56f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x1d56f8: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x1d56f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x1d56fc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d56fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5700: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x1d5700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x1d5704: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d5704u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5708: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x1d5708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x1d570c: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x1d570cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x1d5710: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1d5710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1d5714: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x1d5714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x1d5718: 0x8e540018  lw          $s4, 0x18($s2)
    ctx->pc = 0x1d5718u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1d571c: 0x8e8200f4  lw          $v0, 0xF4($s4)
    ctx->pc = 0x1d571cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 244)));
    // 0x1d5720: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1d5720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1d5724: 0xc04f824  jal         func_13E090
    ctx->pc = 0x1D5724u;
    SET_GPR_U32(ctx, 31, 0x1D572Cu);
    ctx->pc = 0x1D5728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5724u;
            // 0x1d5728: 0xae8200f4  sw          $v0, 0xF4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D572Cu; }
        if (ctx->pc != 0x1D572Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D572Cu; }
        if (ctx->pc != 0x1D572Cu) { return; }
    }
    ctx->pc = 0x1D572Cu;
    // 0x1d572c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d572cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5730: 0x24050110  addiu       $a1, $zero, 0x110
    ctx->pc = 0x1d5730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x1d5734: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x1D5734u;
    SET_GPR_U32(ctx, 31, 0x1D573Cu);
    ctx->pc = 0x1D5738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5734u;
            // 0x1d5738: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D573Cu; }
        if (ctx->pc != 0x1D573Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D573Cu; }
        if (ctx->pc != 0x1D573Cu) { return; }
    }
    ctx->pc = 0x1D573Cu;
    // 0x1d573c: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x1d573cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x1d5740: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d5740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5744: 0xc077058  jal         func_1DC160
    ctx->pc = 0x1D5744u;
    SET_GPR_U32(ctx, 31, 0x1D574Cu);
    ctx->pc = 0x1D5748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5744u;
            // 0x1d5748: 0x24a5d9c0  addiu       $a1, $a1, -0x2640 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC160u;
    if (runtime->hasFunction(0x1DC160u)) {
        auto targetFn = runtime->lookupFunction(0x1DC160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D574Cu; }
        if (ctx->pc != 0x1D574Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC160_0x1dc160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D574Cu; }
        if (ctx->pc != 0x1D574Cu) { return; }
    }
    ctx->pc = 0x1D574Cu;
    // 0x1d574c: 0x3c150030  lui         $s5, 0x30
    ctx->pc = 0x1d574cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)48 << 16));
    // 0x1d5750: 0x8e840104  lw          $a0, 0x104($s4)
    ctx->pc = 0x1d5750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
    // 0x1d5754: 0x26650120  addiu       $a1, $s3, 0x120
    ctx->pc = 0x1d5754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 288));
    // 0x1d5758: 0xc089c86  jal         func_227218
    ctx->pc = 0x1D5758u;
    SET_GPR_U32(ctx, 31, 0x1D5760u);
    ctx->pc = 0x1D575Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5758u;
            // 0x1d575c: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x227218u;
    if (runtime->hasFunction(0x227218u)) {
        auto targetFn = runtime->lookupFunction(0x227218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5760u; }
        if (ctx->pc != 0x1D5760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_227218_0x2274b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5760u; }
        if (ctx->pc != 0x1D5760u) { return; }
    }
    ctx->pc = 0x1D5760u;
    // 0x1d5760: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1d5760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1d5764: 0x26a228e0  addiu       $v0, $s5, 0x28E0
    ctx->pc = 0x1d5764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 10464));
    // 0x1d5768: 0x8c64e208  lw          $a0, -0x1DF8($v1)
    ctx->pc = 0x1d5768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959624)));
    // 0x1d576c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d576cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5770: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x1D5770u;
    SET_GPR_U32(ctx, 31, 0x1D5778u);
    ctx->pc = 0x1D5774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5770u;
            // 0x1d5774: 0x8c450048  lw          $a1, 0x48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5778u; }
        if (ctx->pc != 0x1D5778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5778u; }
        if (ctx->pc != 0x1D5778u) { return; }
    }
    ctx->pc = 0x1D5778u;
    // 0x1d5778: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d5778u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d577c: 0xc079838  jal         func_1E60E0
    ctx->pc = 0x1D577Cu;
    SET_GPR_U32(ctx, 31, 0x1D5784u);
    ctx->pc = 0x1D5780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D577Cu;
            // 0x1d5780: 0x24040360  addiu       $a0, $zero, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E60E0u;
    if (runtime->hasFunction(0x1E60E0u)) {
        auto targetFn = runtime->lookupFunction(0x1E60E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5784u; }
        if (ctx->pc != 0x1D5784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1e60e0_0x1e6120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5784u; }
        if (ctx->pc != 0x1D5784u) { return; }
    }
    ctx->pc = 0x1D5784u;
    // 0x1d5784: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d5784u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5788: 0xc07f468  jal         func_1FD1A0
    ctx->pc = 0x1D5788u;
    SET_GPR_U32(ctx, 31, 0x1D5790u);
    ctx->pc = 0x1D578Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5788u;
            // 0x1d578c: 0x24040038  addiu       $a0, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FD1A0u;
    if (runtime->hasFunction(0x1FD1A0u)) {
        auto targetFn = runtime->lookupFunction(0x1FD1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5790u; }
        if (ctx->pc != 0x1D5790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FD1A0_0x1fd1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5790u; }
        if (ctx->pc != 0x1D5790u) { return; }
    }
    ctx->pc = 0x1D5790u;
    // 0x1d5790: 0xc07f5ae  jal         func_1FD6B8
    ctx->pc = 0x1D5790u;
    SET_GPR_U32(ctx, 31, 0x1D5798u);
    ctx->pc = 0x1D5794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5790u;
            // 0x1d5794: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FD6B8u;
    if (runtime->hasFunction(0x1FD6B8u)) {
        auto targetFn = runtime->lookupFunction(0x1FD6B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5798u; }
        if (ctx->pc != 0x1D5798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FD6B8_0x1fd6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5798u; }
        if (ctx->pc != 0x1D5798u) { return; }
    }
    ctx->pc = 0x1D5798u;
    // 0x1d5798: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d5798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d579c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d579cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d57a0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d57a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d57a4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1d57a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d57a8: 0xc079c9a  jal         func_1E7268
    ctx->pc = 0x1D57A8u;
    SET_GPR_U32(ctx, 31, 0x1D57B0u);
    ctx->pc = 0x1D57ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D57A8u;
            // 0x1d57ac: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7268u;
    if (runtime->hasFunction(0x1E7268u)) {
        auto targetFn = runtime->lookupFunction(0x1E7268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D57B0u; }
        if (ctx->pc != 0x1D57B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E7268_0x1e7268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D57B0u; }
        if (ctx->pc != 0x1D57B0u) { return; }
    }
    ctx->pc = 0x1D57B0u;
    // 0x1d57b0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d57b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d57b4: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D57B4u;
    {
        const bool branch_taken_0x1d57b4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D57B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D57B4u;
            // 0x1d57b8: 0xae720000  sw          $s2, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d57b4) {
            ctx->pc = 0x1D57C0u;
            goto label_1d57c0;
        }
    }
    ctx->pc = 0x1D57BCu;
    // 0x1d57bc: 0xae5301b0  sw          $s3, 0x1B0($s2)
    ctx->pc = 0x1d57bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 432), GPR_U32(ctx, 19));
label_1d57c0:
    // 0x1d57c0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1d57c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1d57c4: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x1d57c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x1d57c8: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x1d57c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1d57cc: 0x40f809  jalr        $v0
    ctx->pc = 0x1D57CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D57D4u);
        ctx->pc = 0x1D57D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D57CCu;
            // 0x1d57d0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D57D4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D57C0u: goto label_1d57c0;
            case 0x1D5860u: goto label_1d5860;
            case 0x1D58C0u: goto label_1d58c0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D57D4u; }
            if (ctx->pc != 0x1D57D4u) { return; }
        }
        }
    }
    ctx->pc = 0x1D57D4u;
    // 0x1d57d4: 0xc6a028e0  lwc1        $f0, 0x28E0($s5)
    ctx->pc = 0x1d57d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 10464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d57d8: 0x266300a0  addiu       $v1, $s3, 0xA0
    ctx->pc = 0x1d57d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
    // 0x1d57dc: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1d57dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1d57e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d57e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d57e4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1d57e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1d57e8: 0xc0782a0  jal         func_1E0A80
    ctx->pc = 0x1D57E8u;
    SET_GPR_U32(ctx, 31, 0x1D57F0u);
    ctx->pc = 0x1D57ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D57E8u;
            // 0x1d57ec: 0xe640017c  swc1        $f0, 0x17C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 380), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0A80u;
    if (runtime->hasFunction(0x1E0A80u)) {
        auto targetFn = runtime->lookupFunction(0x1E0A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D57F0u; }
        if (ctx->pc != 0x1D57F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0A80_0x1e0a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D57F0u; }
        if (ctx->pc != 0x1D57F0u) { return; }
    }
    ctx->pc = 0x1D57F0u;
    // 0x1d57f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d57f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d57f4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1d57f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d57f8: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x1d57f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x1d57fc: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1d57fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1d5800: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1d5800u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1d5804: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d5804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5808: 0xc079a62  jal         func_1E6988
    ctx->pc = 0x1D5808u;
    SET_GPR_U32(ctx, 31, 0x1D5810u);
    ctx->pc = 0x1D580Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5808u;
            // 0x1d580c: 0x34a5cf53  ori         $a1, $a1, 0xCF53 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53075);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6988u;
    if (runtime->hasFunction(0x1E6988u)) {
        auto targetFn = runtime->lookupFunction(0x1E6988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5810u; }
        if (ctx->pc != 0x1D5810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6988_0x1e6988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5810u; }
        if (ctx->pc != 0x1D5810u) { return; }
    }
    ctx->pc = 0x1D5810u;
    // 0x1d5810: 0x3c020050  lui         $v0, 0x50
    ctx->pc = 0x1d5810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)80 << 16));
    // 0x1d5814: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d5814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5818: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d5818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d581c: 0xc077a3a  jal         func_1DE8E8
    ctx->pc = 0x1D581Cu;
    SET_GPR_U32(ctx, 31, 0x1D5824u);
    ctx->pc = 0x1D5820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D581Cu;
            // 0x1d5820: 0xae420258  sw          $v0, 0x258($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DE8E8u;
    if (runtime->hasFunction(0x1DE8E8u)) {
        auto targetFn = runtime->lookupFunction(0x1DE8E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5824u; }
        if (ctx->pc != 0x1D5824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DE8E8_0x1de8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5824u; }
        if (ctx->pc != 0x1D5824u) { return; }
    }
    ctx->pc = 0x1D5824u;
    // 0x1d5824: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x1d5824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x1d5828: 0xae4201a4  sw          $v0, 0x1A4($s2)
    ctx->pc = 0x1d5828u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 420), GPR_U32(ctx, 2));
    // 0x1d582c: 0x8c656f80  lw          $a1, 0x6F80($v1)
    ctx->pc = 0x1d582cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28544)));
    // 0x1d5830: 0x240403e7  addiu       $a0, $zero, 0x3E7
    ctx->pc = 0x1d5830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x1d5834: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1d5834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d5838: 0xa7a40008  sh          $a0, 0x8($sp)
    ctx->pc = 0x1d5838u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x1d583c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1d583cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1d5840: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1d5840u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5844: 0xafa5001c  sw          $a1, 0x1C($sp)
    ctx->pc = 0x1d5844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 5));
    // 0x1d5848: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d5848u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d584c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1d584cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1d5850: 0xa7a0000a  sh          $zero, 0xA($sp)
    ctx->pc = 0x1d5850u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d5854: 0xa7a00022  sh          $zero, 0x22($sp)
    ctx->pc = 0x1d5854u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d5858: 0xa7a00020  sh          $zero, 0x20($sp)
    ctx->pc = 0x1d5858u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d585c: 0x0  nop
    ctx->pc = 0x1d585cu;
    // NOP
label_1d5860:
    // 0x1d5860: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x1d5860u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1d5864: 0x24c3000c  addiu       $v1, $a2, 0xC
    ctx->pc = 0x1d5864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x1d5868: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d5868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d586c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1d586cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1d5870: 0x2ce20004  sltiu       $v0, $a3, 0x4
    ctx->pc = 0x1d5870u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1d5874: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D5874u;
    {
        const bool branch_taken_0x1d5874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5874u;
            // 0x1d5878: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5874) {
            ctx->pc = 0x1D5860u;
            runtime->cooperativeGuestYield();
            goto label_1d5860;
        }
    }
    ctx->pc = 0x1D587Cu;
    // 0x1d587c: 0xacc0002c  sw          $zero, 0x2C($a2)
    ctx->pc = 0x1d587cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 0));
    // 0x1d5880: 0xacc00024  sw          $zero, 0x24($a2)
    ctx->pc = 0x1d5880u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 0));
    // 0x1d5884: 0xacc00028  sw          $zero, 0x28($a2)
    ctx->pc = 0x1d5884u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 0));
    // 0x1d5888: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1d5888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1d588c: 0x2455e848  addiu       $s5, $v0, -0x17B8
    ctx->pc = 0x1d588cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1d5890: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1d5890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5894: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x1d5894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1d5898: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1d5898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1d589c: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x1d589cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1d58a0: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x1d58a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1d58a4: 0x40f809  jalr        $v0
    ctx->pc = 0x1D58A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D58ACu);
        ctx->pc = 0x1D58A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D58A4u;
            // 0x1d58a8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D58ACu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D57C0u: goto label_1d57c0;
            case 0x1D5860u: goto label_1d5860;
            case 0x1D58C0u: goto label_1d58c0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D58ACu; }
            if (ctx->pc != 0x1D58ACu) { return; }
        }
        }
    }
    ctx->pc = 0x1D58ACu;
    // 0x1d58ac: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x1d58acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1d58b0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D58B0u;
    {
        const bool branch_taken_0x1d58b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D58B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D58B0u;
            // 0x1d58b4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d58b0) {
            ctx->pc = 0x1D58C0u;
            goto label_1d58c0;
        }
    }
    ctx->pc = 0x1D58B8u;
    // 0x1d58b8: 0xc04f5b0  jal         func_13D6C0
    ctx->pc = 0x1D58B8u;
    SET_GPR_U32(ctx, 31, 0x1D58C0u);
    ctx->pc = 0x13D6C0u;
    if (runtime->hasFunction(0x13D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x13D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D58C0u; }
        if (ctx->pc != 0x1D58C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D6C0_0x13d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D58C0u; }
        if (ctx->pc != 0x1D58C0u) { return; }
    }
    ctx->pc = 0x1D58C0u;
label_1d58c0:
    // 0x1d58c0: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1d58c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x1d58c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d58c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d58c8: 0xae11cd5c  sw          $s1, -0x32A4($s0)
    ctx->pc = 0x1d58c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294954332), GPR_U32(ctx, 17));
    // 0x1d58cc: 0xc04c492  jal         func_131248
    ctx->pc = 0x1D58CCu;
    SET_GPR_U32(ctx, 31, 0x1D58D4u);
    ctx->pc = 0x1D58D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D58CCu;
            // 0x1d58d0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131248u;
    if (runtime->hasFunction(0x131248u)) {
        auto targetFn = runtime->lookupFunction(0x131248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D58D4u; }
        if (ctx->pc != 0x1D58D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_131248_0x131288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D58D4u; }
        if (ctx->pc != 0x1D58D4u) { return; }
    }
    ctx->pc = 0x1D58D4u;
    // 0x1d58d4: 0x8e05cd5c  lw          $a1, -0x32A4($s0)
    ctx->pc = 0x1d58d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954332)));
    // 0x1d58d8: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x1d58d8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d58dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d58dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d58e0: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1d58e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1d58e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d58e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d58e8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1d58e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1d58ec: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1d58ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1d58f0: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1d58f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1d58f4: 0x40f809  jalr        $v0
    ctx->pc = 0x1D58F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D58FCu);
        ctx->pc = 0x1D58F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D58F4u;
            // 0x1d58f8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D58FCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D57C0u: goto label_1d57c0;
            case 0x1D5860u: goto label_1d5860;
            case 0x1D58C0u: goto label_1d58c0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D58FCu; }
            if (ctx->pc != 0x1D58FCu) { return; }
        }
        }
    }
    ctx->pc = 0x1D58FCu;
    // 0x1d58fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d58fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5900: 0xc077018  jal         func_1DC060
    ctx->pc = 0x1D5900u;
    SET_GPR_U32(ctx, 31, 0x1D5908u);
    ctx->pc = 0x1D5904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5900u;
            // 0x1d5904: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC060u;
    if (runtime->hasFunction(0x1DC060u)) {
        auto targetFn = runtime->lookupFunction(0x1DC060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5908u; }
        if (ctx->pc != 0x1D5908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC060_0x1dc060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5908u; }
        if (ctx->pc != 0x1D5908u) { return; }
    }
    ctx->pc = 0x1D5908u;
    // 0x1d5908: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1d5908u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1d590c: 0xc04c992  jal         func_132648
    ctx->pc = 0x1D590Cu;
    SET_GPR_U32(ctx, 31, 0x1D5914u);
    ctx->pc = 0x1D5910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D590Cu;
            // 0x1d5910: 0x248469e0  addiu       $a0, $a0, 0x69E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132648u;
    if (runtime->hasFunction(0x132648u)) {
        auto targetFn = runtime->lookupFunction(0x132648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5914u; }
        if (ctx->pc != 0x1D5914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132648_0x132648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5914u; }
        if (ctx->pc != 0x1D5914u) { return; }
    }
    ctx->pc = 0x1D5914u;
    // 0x1d5914: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1d5914u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d5918: 0xae620080  sw          $v0, 0x80($s3)
    ctx->pc = 0x1d5918u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 2));
    // 0x1d591c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d591cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d5920: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x1d5920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1d5924: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d5924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5928: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d5928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d592c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1d592cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1d5930: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1d5930u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1d5934: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1d5934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1d5938: 0x40f809  jalr        $v0
    ctx->pc = 0x1D5938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D5940u);
        ctx->pc = 0x1D593Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5938u;
            // 0x1d593c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D5940u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D57C0u: goto label_1d57c0;
            case 0x1D5860u: goto label_1d5860;
            case 0x1D58C0u: goto label_1d58c0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D5940u; }
            if (ctx->pc != 0x1D5940u) { return; }
        }
        }
    }
    ctx->pc = 0x1D5940u;
    // 0x1d5940: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1d5940u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d5944: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d5944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5948: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x1d5948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x1d594c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1d594cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d5950: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5954: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x1d5954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x1d5958: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1d5958u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1d595c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d595cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5960: 0xc05c130  jal         func_1704C0
    ctx->pc = 0x1D5960u;
    SET_GPR_U32(ctx, 31, 0x1D5968u);
    ctx->pc = 0x1D5964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5960u;
            // 0x1d5964: 0xae620084  sw          $v0, 0x84($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1704C0u;
    if (runtime->hasFunction(0x1704C0u)) {
        auto targetFn = runtime->lookupFunction(0x1704C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5968u; }
        if (ctx->pc != 0x1D5968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001704C0_0x1704c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5968u; }
        if (ctx->pc != 0x1D5968u) { return; }
    }
    ctx->pc = 0x1D5968u;
    // 0x1d5968: 0x97a20030  lhu         $v0, 0x30($sp)
    ctx->pc = 0x1d5968u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d596c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d596cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d5970: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1d5970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1d5974: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d5974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5978: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d5978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d597c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1d597cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1d5980: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x1d5980u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1d5984: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x1d5984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1d5988: 0x40f809  jalr        $v0
    ctx->pc = 0x1D5988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D5990u);
        ctx->pc = 0x1D598Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5988u;
            // 0x1d598c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D5990u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D57C0u: goto label_1d57c0;
            case 0x1D5860u: goto label_1d5860;
            case 0x1D58C0u: goto label_1d58c0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D5990u; }
            if (ctx->pc != 0x1D5990u) { return; }
        }
        }
    }
    ctx->pc = 0x1D5990u;
    // 0x1d5990: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d5990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5994: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x1d5994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1d5998: 0xc05c46e  jal         func_1711B8
    ctx->pc = 0x1D5998u;
    SET_GPR_U32(ctx, 31, 0x1D59A0u);
    ctx->pc = 0x1D599Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5998u;
            // 0x1d599c: 0xae620074  sw          $v0, 0x74($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1711B8u;
    if (runtime->hasFunction(0x1711B8u)) {
        auto targetFn = runtime->lookupFunction(0x1711B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D59A0u; }
        if (ctx->pc != 0x1D59A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_001711b8_0x1711b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D59A0u; }
        if (ctx->pc != 0x1D59A0u) { return; }
    }
    ctx->pc = 0x1D59A0u;
    // 0x1d59a0: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1d59a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1d59a4: 0x8e650074  lw          $a1, 0x74($s3)
    ctx->pc = 0x1d59a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
    // 0x1d59a8: 0xdcc2bdf8  ld          $v0, -0x4208($a2)
    ctx->pc = 0x1d59a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 4294950392)));
    // 0x1d59ac: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1d59acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d59b0: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1d59b0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d59b4: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x1d59b4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x1d59b8: 0xa4a40060  sh          $a0, 0x60($a1)
    ctx->pc = 0x1d59b8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 96), (uint16_t)GPR_U32(ctx, 4));
    // 0x1d59bc: 0xfcc2bdf8  sd          $v0, -0x4208($a2)
    ctx->pc = 0x1d59bcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 4294950392), GPR_U64(ctx, 2));
    // 0x1d59c0: 0xfca20068  sd          $v0, 0x68($a1)
    ctx->pc = 0x1d59c0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 104), GPR_U64(ctx, 2));
    // 0x1d59c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d59c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d59c8: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x1d59c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1d59cc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d59ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d59d0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1d59d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1d59d4: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1d59d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1d59d8: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1d59d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1d59dc: 0x40f809  jalr        $v0
    ctx->pc = 0x1D59DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D59E4u);
        ctx->pc = 0x1D59E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D59DCu;
            // 0x1d59e0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D59E4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D57C0u: goto label_1d57c0;
            case 0x1D5860u: goto label_1d5860;
            case 0x1D58C0u: goto label_1d58c0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D59E4u; }
            if (ctx->pc != 0x1D59E4u) { return; }
        }
        }
    }
    ctx->pc = 0x1D59E4u;
    // 0x1d59e4: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x1d59e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x1d59e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d59e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d59ec: 0xc0768c0  jal         func_1DA300
    ctx->pc = 0x1D59ECu;
    SET_GPR_U32(ctx, 31, 0x1D59F4u);
    ctx->pc = 0x1D59F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D59ECu;
            // 0x1d59f0: 0xae60007c  sw          $zero, 0x7C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA300u;
    if (runtime->hasFunction(0x1DA300u)) {
        auto targetFn = runtime->lookupFunction(0x1DA300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D59F4u; }
        if (ctx->pc != 0x1D59F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA300_0x1da300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D59F4u; }
        if (ctx->pc != 0x1D59F4u) { return; }
    }
    ctx->pc = 0x1D59F4u;
    // 0x1d59f4: 0xc075698  jal         func_1D5A60
    ctx->pc = 0x1D59F4u;
    SET_GPR_U32(ctx, 31, 0x1D59FCu);
    ctx->pc = 0x1D59F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D59F4u;
            // 0x1d59f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5A60u;
    if (runtime->hasFunction(0x1D5A60u)) {
        auto targetFn = runtime->lookupFunction(0x1D5A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D59FCu; }
        if (ctx->pc != 0x1D59FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5A60_0x1d5a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D59FCu; }
        if (ctx->pc != 0x1D59FCu) { return; }
    }
    ctx->pc = 0x1D59FCu;
    // 0x1d59fc: 0x8e900104  lw          $s0, 0x104($s4)
    ctx->pc = 0x1d59fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
    // 0x1d5a00: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1d5a00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1d5a04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d5a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5a08: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x1D5A08u;
    SET_GPR_U32(ctx, 31, 0x1D5A10u);
    ctx->pc = 0x1D5A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5A08u;
            // 0x1d5a0c: 0x248469f0  addiu       $a0, $a0, 0x69F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5A10u; }
        if (ctx->pc != 0x1D5A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5A10u; }
        if (ctx->pc != 0x1D5A10u) { return; }
    }
    ctx->pc = 0x1D5A10u;
    // 0x1d5a10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5a14: 0xc04e0d8  jal         func_138360
    ctx->pc = 0x1D5A14u;
    SET_GPR_U32(ctx, 31, 0x1D5A1Cu);
    ctx->pc = 0x1D5A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5A14u;
            // 0x1d5a18: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138360u;
    if (runtime->hasFunction(0x138360u)) {
        auto targetFn = runtime->lookupFunction(0x138360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5A1Cu; }
        if (ctx->pc != 0x1D5A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_138360_0x1383a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5A1Cu; }
        if (ctx->pc != 0x1D5A1Cu) { return; }
    }
    ctx->pc = 0x1D5A1Cu;
    // 0x1d5a1c: 0x8e440320  lw          $a0, 0x320($s2)
    ctx->pc = 0x1d5a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 800)));
    // 0x1d5a20: 0xc090aa6  jal         func_242A98
    ctx->pc = 0x1D5A20u;
    SET_GPR_U32(ctx, 31, 0x1D5A28u);
    ctx->pc = 0x1D5A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5A20u;
            // 0x1d5a24: 0xa6620070  sh          $v0, 0x70($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 112), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A98u;
    if (runtime->hasFunction(0x242A98u)) {
        auto targetFn = runtime->lookupFunction(0x242A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5A28u; }
        if (ctx->pc != 0x1D5A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a98_0x242d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5A28u; }
        if (ctx->pc != 0x1D5A28u) { return; }
    }
    ctx->pc = 0x1D5A28u;
    // 0x1d5a28: 0x94420270  lhu         $v0, 0x270($v0)
    ctx->pc = 0x1d5a28u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 624)));
    // 0x1d5a2c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d5a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5a30: 0xc077c00  jal         func_1DF000
    ctx->pc = 0x1D5A30u;
    SET_GPR_U32(ctx, 31, 0x1D5A38u);
    ctx->pc = 0x1D5A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5A30u;
            // 0x1d5a34: 0xa6620072  sh          $v0, 0x72($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 114), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF000u;
    if (runtime->hasFunction(0x1DF000u)) {
        auto targetFn = runtime->lookupFunction(0x1DF000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5A38u; }
        if (ctx->pc != 0x1D5A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DF000_0x1df000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5A38u; }
        if (ctx->pc != 0x1D5A38u) { return; }
    }
    ctx->pc = 0x1D5A38u;
    // 0x1d5a38: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x1d5a38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1d5a3c: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x1d5a3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d5a40: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x1d5a40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1d5a44: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x1d5a44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d5a48: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x1d5a48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d5a4c: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x1d5a4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d5a50: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1d5a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d5a54: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5A54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5A54u;
            // 0x1d5a58: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D57C0u: goto label_1d57c0;
            case 0x1D5860u: goto label_1d5860;
            case 0x1D58C0u: goto label_1d58c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D5A5Cu;
    // 0x1d5a5c: 0x0  nop
    ctx->pc = 0x1d5a5cu;
    // NOP
}
