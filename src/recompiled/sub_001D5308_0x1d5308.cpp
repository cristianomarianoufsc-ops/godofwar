#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D5308
// Address: 0x1d5308 - 0x1d5428
void sub_001D5308_0x1d5308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5308_0x1d5308");
#endif

    ctx->pc = 0x1d5308u;

    // 0x1d5308: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d5308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d530c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d530cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d5310: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d5310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d5314: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d5314u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5318: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d5318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d531c: 0xc05f9ae  jal         func_17E6B8
    ctx->pc = 0x1D531Cu;
    SET_GPR_U32(ctx, 31, 0x1D5324u);
    ctx->pc = 0x1D5320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D531Cu;
            // 0x1d5320: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E6B8u;
    if (runtime->hasFunction(0x17E6B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E6B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5324u; }
        if (ctx->pc != 0x1D5324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e6b8_0x17e6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5324u; }
        if (ctx->pc != 0x1D5324u) { return; }
    }
    ctx->pc = 0x1D5324u;
    // 0x1d5324: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d5324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d5328: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d5328u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d532c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d532cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d5330: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x1d5330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x1d5334: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1d5334u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1d5338: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d5338u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d533c: 0x24a55b58  addiu       $a1, $a1, 0x5B58
    ctx->pc = 0x1d533cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23384));
    // 0x1d5340: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1d5340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1d5344: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d5344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5348: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x1d5348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1d534c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d534cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5350: 0xe601001c  swc1        $f1, 0x1C($s0)
    ctx->pc = 0x1d5350u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x1d5354: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1d5354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1d5358: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1d5358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1d535c: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x1d535cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1d5360: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1d5360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1d5364: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D5364u;
    SET_GPR_U32(ctx, 31, 0x1D536Cu);
    ctx->pc = 0x1D5368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5364u;
            // 0x1d5368: 0xe6010018  swc1        $f1, 0x18($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D536Cu; }
        if (ctx->pc != 0x1D536Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D536Cu; }
        if (ctx->pc != 0x1D536Cu) { return; }
    }
    ctx->pc = 0x1D536Cu;
    // 0x1d536c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d536cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d5370: 0x26060004  addiu       $a2, $s0, 0x4
    ctx->pc = 0x1d5370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1d5374: 0x24a55b68  addiu       $a1, $a1, 0x5B68
    ctx->pc = 0x1d5374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23400));
    // 0x1d5378: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D5378u;
    SET_GPR_U32(ctx, 31, 0x1D5380u);
    ctx->pc = 0x1D537Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5378u;
            // 0x1d537c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5380u; }
        if (ctx->pc != 0x1D5380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5380u; }
        if (ctx->pc != 0x1D5380u) { return; }
    }
    ctx->pc = 0x1D5380u;
    // 0x1d5380: 0xc05f94a  jal         func_17E528
    ctx->pc = 0x1D5380u;
    SET_GPR_U32(ctx, 31, 0x1D5388u);
    ctx->pc = 0x1D5384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5380u;
            // 0x1d5384: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E528u;
    if (runtime->hasFunction(0x17E528u)) {
        auto targetFn = runtime->lookupFunction(0x17E528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5388u; }
        if (ctx->pc != 0x1D5388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e528_0x17e530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5388u; }
        if (ctx->pc != 0x1D5388u) { return; }
    }
    ctx->pc = 0x1D5388u;
    // 0x1d5388: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d5388u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d538c: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x1d538cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1d5390: 0x24a568e0  addiu       $a1, $a1, 0x68E0
    ctx->pc = 0x1d5390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26848));
    // 0x1d5394: 0xc05f82a  jal         func_17E0A8
    ctx->pc = 0x1D5394u;
    SET_GPR_U32(ctx, 31, 0x1D539Cu);
    ctx->pc = 0x1D5398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5394u;
            // 0x1d5398: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0A8u;
    if (runtime->hasFunction(0x17E0A8u)) {
        auto targetFn = runtime->lookupFunction(0x17E0A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D539Cu; }
        if (ctx->pc != 0x1D539Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E0A8_0x17e0a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D539Cu; }
        if (ctx->pc != 0x1D539Cu) { return; }
    }
    ctx->pc = 0x1D539Cu;
    // 0x1d539c: 0xc05f94a  jal         func_17E528
    ctx->pc = 0x1D539Cu;
    SET_GPR_U32(ctx, 31, 0x1D53A4u);
    ctx->pc = 0x1D53A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D539Cu;
            // 0x1d53a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E528u;
    if (runtime->hasFunction(0x17E528u)) {
        auto targetFn = runtime->lookupFunction(0x17E528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D53A4u; }
        if (ctx->pc != 0x1D53A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e528_0x17e530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D53A4u; }
        if (ctx->pc != 0x1D53A4u) { return; }
    }
    ctx->pc = 0x1D53A4u;
    // 0x1d53a4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d53a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d53a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d53a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d53ac: 0x24a568f0  addiu       $a1, $a1, 0x68F0
    ctx->pc = 0x1d53acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26864));
    // 0x1d53b0: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D53B0u;
    SET_GPR_U32(ctx, 31, 0x1D53B8u);
    ctx->pc = 0x1D53B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D53B0u;
            // 0x1d53b4: 0x2606000c  addiu       $a2, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D53B8u; }
        if (ctx->pc != 0x1D53B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D53B8u; }
        if (ctx->pc != 0x1D53B8u) { return; }
    }
    ctx->pc = 0x1D53B8u;
    // 0x1d53b8: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d53b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d53bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d53bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d53c0: 0x24a56900  addiu       $a1, $a1, 0x6900
    ctx->pc = 0x1d53c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26880));
    // 0x1d53c4: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D53C4u;
    SET_GPR_U32(ctx, 31, 0x1D53CCu);
    ctx->pc = 0x1D53C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D53C4u;
            // 0x1d53c8: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D53CCu; }
        if (ctx->pc != 0x1D53CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D53CCu; }
        if (ctx->pc != 0x1D53CCu) { return; }
    }
    ctx->pc = 0x1D53CCu;
    // 0x1d53cc: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d53ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d53d0: 0x26060014  addiu       $a2, $s0, 0x14
    ctx->pc = 0x1d53d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1d53d4: 0x24a56910  addiu       $a1, $a1, 0x6910
    ctx->pc = 0x1d53d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26896));
    // 0x1d53d8: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D53D8u;
    SET_GPR_U32(ctx, 31, 0x1D53E0u);
    ctx->pc = 0x1D53DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D53D8u;
            // 0x1d53dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D53E0u; }
        if (ctx->pc != 0x1D53E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D53E0u; }
        if (ctx->pc != 0x1D53E0u) { return; }
    }
    ctx->pc = 0x1D53E0u;
    // 0x1d53e0: 0xc05f94a  jal         func_17E528
    ctx->pc = 0x1D53E0u;
    SET_GPR_U32(ctx, 31, 0x1D53E8u);
    ctx->pc = 0x1D53E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D53E0u;
            // 0x1d53e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E528u;
    if (runtime->hasFunction(0x17E528u)) {
        auto targetFn = runtime->lookupFunction(0x17E528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D53E8u; }
        if (ctx->pc != 0x1D53E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e528_0x17e530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D53E8u; }
        if (ctx->pc != 0x1D53E8u) { return; }
    }
    ctx->pc = 0x1D53E8u;
    // 0x1d53e8: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d53e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d53ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d53ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d53f0: 0x24a56920  addiu       $a1, $a1, 0x6920
    ctx->pc = 0x1d53f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26912));
    // 0x1d53f4: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D53F4u;
    SET_GPR_U32(ctx, 31, 0x1D53FCu);
    ctx->pc = 0x1D53F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D53F4u;
            // 0x1d53f8: 0x26060018  addiu       $a2, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D53FCu; }
        if (ctx->pc != 0x1D53FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D53FCu; }
        if (ctx->pc != 0x1D53FCu) { return; }
    }
    ctx->pc = 0x1D53FCu;
    // 0x1d53fc: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d53fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d5400: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d5400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5404: 0x2606001c  addiu       $a2, $s0, 0x1C
    ctx->pc = 0x1d5404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x1d5408: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D5408u;
    SET_GPR_U32(ctx, 31, 0x1D5410u);
    ctx->pc = 0x1D540Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5408u;
            // 0x1d540c: 0x24a56930  addiu       $a1, $a1, 0x6930 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5410u; }
        if (ctx->pc != 0x1D5410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5410u; }
        if (ctx->pc != 0x1D5410u) { return; }
    }
    ctx->pc = 0x1D5410u;
    // 0x1d5410: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d5410u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d5414: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d5414u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5418: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d541c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D541Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D541Cu;
            // 0x1d5420: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D5424u;
    // 0x1d5424: 0x0  nop
    ctx->pc = 0x1d5424u;
    // NOP
}
