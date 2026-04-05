#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027D430
// Address: 0x27d430 - 0x27d5b8
void sub_0027D430_0x27d430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027D430_0x27d430");
#endif

    ctx->pc = 0x27d430u;

    // 0x27d430: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27d430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27d434: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x27d434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x27d438: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27d438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27d43c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x27d43cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d440: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x27d440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27d444: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x27d444u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d448: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x27d448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x27d44c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x27d44cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d450: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x27d450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x27d454: 0xc0a268a  jal         func_289A28
    ctx->pc = 0x27D454u;
    SET_GPR_U32(ctx, 31, 0x27D45Cu);
    ctx->pc = 0x27D458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D454u;
            // 0x27d458: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289A28u;
    if (runtime->hasFunction(0x289A28u)) {
        auto targetFn = runtime->lookupFunction(0x289A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D45Cu; }
        if (ctx->pc != 0x27D45Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289a28_0x289b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D45Cu; }
        if (ctx->pc != 0x27D45Cu) { return; }
    }
    ctx->pc = 0x27D45Cu;
    // 0x27d45c: 0x2c420080  sltiu       $v0, $v0, 0x80
    ctx->pc = 0x27d45cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x27d460: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D460u;
    {
        const bool branch_taken_0x27d460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D460u;
            // 0x27d464: 0x24020898  addiu       $v0, $zero, 0x898 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d460) {
            ctx->pc = 0x27D470u;
            goto label_27d470;
        }
    }
    ctx->pc = 0x27D468u;
label_27d468:
    // 0x27d468: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x27D468u;
    {
        const bool branch_taken_0x27d468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D46Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D468u;
            // 0x27d46c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d468) {
            ctx->pc = 0x27D598u;
            goto label_27d598;
        }
    }
    ctx->pc = 0x27D470u;
label_27d470:
    // 0x27d470: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x27d470u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
    // 0x27d474: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x27d474u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x27d478: 0x24a5d1d0  addiu       $a1, $a1, -0x2E30
    ctx->pc = 0x27d478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955472));
    // 0x27d47c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27d47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d480: 0xc0a2644  jal         func_289910
    ctx->pc = 0x27D480u;
    SET_GPR_U32(ctx, 31, 0x27D488u);
    ctx->pc = 0x27D484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D480u;
            // 0x27d484: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D488u; }
        if (ctx->pc != 0x27D488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D488u; }
        if (ctx->pc != 0x27D488u) { return; }
    }
    ctx->pc = 0x27D488u;
    // 0x27d488: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x27d488u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27d48c: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x27d48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x27d490: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x27D490u;
    {
        const bool branch_taken_0x27d490 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27D494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D490u;
            // 0x27d494: 0x3c12002c  lui         $s2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d490) {
            ctx->pc = 0x27D4C0u;
            goto label_27d4c0;
        }
    }
    ctx->pc = 0x27D498u;
    // 0x27d498: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x27d498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x27d49c: 0x26465238  addiu       $a2, $s2, 0x5238
    ctx->pc = 0x27d49cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 21048));
    // 0x27d4a0: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x27d4a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x27d4a4: 0x80c30001  lb          $v1, 0x1($a2)
    ctx->pc = 0x27d4a4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x27d4a8: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x27d4a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x27d4ac: 0xa2230001  sb          $v1, 0x1($s1)
    ctx->pc = 0x27d4acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x27d4b0: 0xc09f4b2  jal         func_27D2C8
    ctx->pc = 0x27D4B0u;
    SET_GPR_U32(ctx, 31, 0x27D4B8u);
    ctx->pc = 0x27D4B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D4B0u;
            // 0x27d4b4: 0x26455238  addiu       $a1, $s2, 0x5238 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 21048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D2C8u;
    if (runtime->hasFunction(0x27D2C8u)) {
        auto targetFn = runtime->lookupFunction(0x27D2C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D4B8u; }
        if (ctx->pc != 0x27D4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027D2C8_0x27d2c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D4B8u; }
        if (ctx->pc != 0x27D4B8u) { return; }
    }
    ctx->pc = 0x27D4B8u;
    // 0x27d4b8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x27D4B8u;
    {
        const bool branch_taken_0x27d4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D4BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D4B8u;
            // 0x27d4bc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d4b8) {
            ctx->pc = 0x27D4D0u;
            goto label_27d4d0;
        }
    }
    ctx->pc = 0x27D4C0u;
label_27d4c0:
    // 0x27d4c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27d4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d4c4: 0xc09f4b2  jal         func_27D2C8
    ctx->pc = 0x27D4C4u;
    SET_GPR_U32(ctx, 31, 0x27D4CCu);
    ctx->pc = 0x27D4C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D4C4u;
            // 0x27d4c8: 0x26455238  addiu       $a1, $s2, 0x5238 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 21048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D2C8u;
    if (runtime->hasFunction(0x27D2C8u)) {
        auto targetFn = runtime->lookupFunction(0x27D2C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D4CCu; }
        if (ctx->pc != 0x27D4CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027D2C8_0x27d2c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D4CCu; }
        if (ctx->pc != 0x27D4CCu) { return; }
    }
    ctx->pc = 0x27D4CCu;
    // 0x27d4cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27d4ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27d4d0:
    // 0x27d4d0: 0x12000028  beqz        $s0, . + 4 + (0x28 << 2)
    ctx->pc = 0x27D4D0u;
    {
        const bool branch_taken_0x27d4d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D4D0u;
            // 0x27d4d4: 0x3c13002c  lui         $s3, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d4d0) {
            ctx->pc = 0x27D574u;
            goto label_27d574;
        }
    }
    ctx->pc = 0x27D4D8u;
    // 0x27d4d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27d4d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d4dc: 0x0  nop
    ctx->pc = 0x27d4dcu;
    // NOP
label_27d4e0:
    // 0x27d4e0: 0xc0a25f1  jal         func_2897C4
    ctx->pc = 0x27D4E0u;
    SET_GPR_U32(ctx, 31, 0x27D4E8u);
    ctx->pc = 0x27D4E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D4E0u;
            // 0x27d4e4: 0x26655220  addiu       $a1, $s3, 0x5220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 21024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2897C4u;
    if (runtime->hasFunction(0x2897C4u)) {
        auto targetFn = runtime->lookupFunction(0x2897C4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D4E8u; }
        if (ctx->pc != 0x27D4E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2897c4_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D4E8u; }
        if (ctx->pc != 0x27D4E8u) { return; }
    }
    ctx->pc = 0x27D4E8u;
    // 0x27d4e8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27D4E8u;
    {
        const bool branch_taken_0x27d4e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D4ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D4E8u;
            // 0x27d4ec: 0x3c05002c  lui         $a1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d4e8) {
            ctx->pc = 0x27D4FCu;
            goto label_27d4fc;
        }
    }
    ctx->pc = 0x27D4F0u;
    // 0x27d4f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27d4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d4f4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x27D4F4u;
    {
        const bool branch_taken_0x27d4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D4F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D4F4u;
            // 0x27d4f8: 0x26455238  addiu       $a1, $s2, 0x5238 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 21048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d4f4) {
            ctx->pc = 0x27D560u;
            goto label_27d560;
        }
    }
    ctx->pc = 0x27D4FCu;
label_27d4fc:
    // 0x27d4fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27d4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d500: 0xc0a25f1  jal         func_2897C4
    ctx->pc = 0x27D500u;
    SET_GPR_U32(ctx, 31, 0x27D508u);
    ctx->pc = 0x27D504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D500u;
            // 0x27d504: 0x24a55228  addiu       $a1, $a1, 0x5228 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21032));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2897C4u;
    if (runtime->hasFunction(0x2897C4u)) {
        auto targetFn = runtime->lookupFunction(0x2897C4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D508u; }
        if (ctx->pc != 0x27D508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2897c4_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D508u; }
        if (ctx->pc != 0x27D508u) { return; }
    }
    ctx->pc = 0x27D508u;
    // 0x27d508: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x27D508u;
    {
        const bool branch_taken_0x27d508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D508u;
            // 0x27d50c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d508) {
            ctx->pc = 0x27D540u;
            goto label_27d540;
        }
    }
    ctx->pc = 0x27D510u;
    // 0x27d510: 0xc0a268a  jal         func_289A28
    ctx->pc = 0x27D510u;
    SET_GPR_U32(ctx, 31, 0x27D518u);
    ctx->pc = 0x27D514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D510u;
            // 0x27d514: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289A28u;
    if (runtime->hasFunction(0x289A28u)) {
        auto targetFn = runtime->lookupFunction(0x289A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D518u; }
        if (ctx->pc != 0x27D518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289a28_0x289b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D518u; }
        if (ctx->pc != 0x27D518u) { return; }
    }
    ctx->pc = 0x27D518u;
    // 0x27d518: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x27d518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x27d51c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27d51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d520: 0xa040ffff  sb          $zero, -0x1($v0)
    ctx->pc = 0x27d520u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294967295), (uint8_t)GPR_U32(ctx, 0));
    // 0x27d524: 0xc0a34ee  jal         func_28D3B8
    ctx->pc = 0x27D524u;
    SET_GPR_U32(ctx, 31, 0x27D52Cu);
    ctx->pc = 0x27D528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D524u;
            // 0x27d528: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D3B8u;
    if (runtime->hasFunction(0x28D3B8u)) {
        auto targetFn = runtime->lookupFunction(0x28D3B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D52Cu; }
        if (ctx->pc != 0x27D52Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28d3b8_0x28d408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D52Cu; }
        if (ctx->pc != 0x27D52Cu) { return; }
    }
    ctx->pc = 0x27D52Cu;
    // 0x27d52c: 0x1040ffce  beqz        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x27D52Cu;
    {
        const bool branch_taken_0x27d52c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D52Cu;
            // 0x27d530: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d52c) {
            ctx->pc = 0x27D468u;
            runtime->cooperativeGuestYield();
            goto label_27d468;
        }
    }
    ctx->pc = 0x27D534u;
    // 0x27d534: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x27d534u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x27d538: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x27D538u;
    {
        const bool branch_taken_0x27d538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D538u;
            // 0x27d53c: 0x26455238  addiu       $a1, $s2, 0x5238 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 21048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d538) {
            ctx->pc = 0x27D560u;
            goto label_27d560;
        }
    }
    ctx->pc = 0x27D540u;
label_27d540:
    // 0x27d540: 0xc0a253d  jal         func_2894F4
    ctx->pc = 0x27D540u;
    SET_GPR_U32(ctx, 31, 0x27D548u);
    ctx->pc = 0x27D544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D540u;
            // 0x27d544: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2894F4u;
    if (runtime->hasFunction(0x2894F4u)) {
        auto targetFn = runtime->lookupFunction(0x2894F4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D548u; }
        if (ctx->pc != 0x27D548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002894F4_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D548u; }
        if (ctx->pc != 0x27D548u) { return; }
    }
    ctx->pc = 0x27D548u;
    // 0x27d548: 0x26505238  addiu       $s0, $s2, 0x5238
    ctx->pc = 0x27d548u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 21048));
    // 0x27d54c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27d54cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d550: 0xc0a253d  jal         func_2894F4
    ctx->pc = 0x27D550u;
    SET_GPR_U32(ctx, 31, 0x27D558u);
    ctx->pc = 0x27D554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D550u;
            // 0x27d554: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2894F4u;
    if (runtime->hasFunction(0x2894F4u)) {
        auto targetFn = runtime->lookupFunction(0x2894F4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D558u; }
        if (ctx->pc != 0x27D558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002894F4_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D558u; }
        if (ctx->pc != 0x27D558u) { return; }
    }
    ctx->pc = 0x27D558u;
    // 0x27d558: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27d558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d55c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27d55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27d560:
    // 0x27d560: 0xc09f4b2  jal         func_27D2C8
    ctx->pc = 0x27D560u;
    SET_GPR_U32(ctx, 31, 0x27D568u);
    ctx->pc = 0x27D2C8u;
    if (runtime->hasFunction(0x27D2C8u)) {
        auto targetFn = runtime->lookupFunction(0x27D2C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D568u; }
        if (ctx->pc != 0x27D568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027D2C8_0x27d2c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D568u; }
        if (ctx->pc != 0x27D568u) { return; }
    }
    ctx->pc = 0x27D568u;
    // 0x27d568: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27d568u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d56c: 0x1600ffdc  bnez        $s0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x27D56Cu;
    {
        const bool branch_taken_0x27d56c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D56Cu;
            // 0x27d570: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d56c) {
            ctx->pc = 0x27D4E0u;
            runtime->cooperativeGuestYield();
            goto label_27d4e0;
        }
    }
    ctx->pc = 0x27D574u;
label_27d574:
    // 0x27d574: 0x26455238  addiu       $a1, $s2, 0x5238
    ctx->pc = 0x27d574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 21048));
    // 0x27d578: 0xc0a25f1  jal         func_2897C4
    ctx->pc = 0x27D578u;
    SET_GPR_U32(ctx, 31, 0x27D580u);
    ctx->pc = 0x27D57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D578u;
            // 0x27d57c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2897C4u;
    if (runtime->hasFunction(0x2897C4u)) {
        auto targetFn = runtime->lookupFunction(0x2897C4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D580u; }
        if (ctx->pc != 0x27D580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2897c4_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D580u; }
        if (ctx->pc != 0x27D580u) { return; }
    }
    ctx->pc = 0x27D580u;
    // 0x27d580: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27D580u;
    {
        const bool branch_taken_0x27d580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D580u;
            // 0x27d584: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d580) {
            ctx->pc = 0x27D594u;
            goto label_27d594;
        }
    }
    ctx->pc = 0x27D588u;
    // 0x27d588: 0xc0a34ee  jal         func_28D3B8
    ctx->pc = 0x27D588u;
    SET_GPR_U32(ctx, 31, 0x27D590u);
    ctx->pc = 0x27D58Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D588u;
            // 0x27d58c: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D3B8u;
    if (runtime->hasFunction(0x28D3B8u)) {
        auto targetFn = runtime->lookupFunction(0x28D3B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D590u; }
        if (ctx->pc != 0x27D590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28d3b8_0x28d408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D590u; }
        if (ctx->pc != 0x27D590u) { return; }
    }
    ctx->pc = 0x27D590u;
    // 0x27d590: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x27d590u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_27d594:
    // 0x27d594: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27d594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27d598:
    // 0x27d598: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x27d598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27d59c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x27d59cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27d5a0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x27d5a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27d5a4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x27d5a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27d5a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27d5a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27d5ac: 0x3e00008  jr          $ra
    ctx->pc = 0x27D5ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D5B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D5ACu;
            // 0x27d5b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27D468u: goto label_27d468;
            case 0x27D470u: goto label_27d470;
            case 0x27D4C0u: goto label_27d4c0;
            case 0x27D4D0u: goto label_27d4d0;
            case 0x27D4E0u: goto label_27d4e0;
            case 0x27D4FCu: goto label_27d4fc;
            case 0x27D540u: goto label_27d540;
            case 0x27D560u: goto label_27d560;
            case 0x27D574u: goto label_27d574;
            case 0x27D594u: goto label_27d594;
            case 0x27D598u: goto label_27d598;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27D5B4u;
    // 0x27d5b4: 0x0  nop
    ctx->pc = 0x27d5b4u;
    // NOP
}
