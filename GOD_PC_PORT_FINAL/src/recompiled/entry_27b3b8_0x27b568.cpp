#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_27b3b8
// Address: 0x27b3b8 - 0x27b568
void entry_27b3b8_0x27b568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_27b3b8_0x27b568");
#endif

    ctx->pc = 0x27b3b8u;

    // 0x27b3b8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x27b3b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x27b3bc: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x27b3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x27b3c0: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x27b3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x27b3c4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x27b3c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b3c8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x27b3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x27b3cc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x27b3ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b3d0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x27b3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x27b3d4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x27b3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x27b3d8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x27b3d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b3dc: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x27b3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x27b3e0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x27b3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x27b3e4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x27b3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x27b3e8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x27b3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27b3ec: 0x28620081  slti        $v0, $v1, 0x81
    ctx->pc = 0x27b3ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x27b3f0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27B3F0u;
    {
        const bool branch_taken_0x27b3f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B3F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B3F0u;
            // 0x27b3f4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b3f0) {
            ctx->pc = 0x27B410u;
            goto label_27b410;
        }
    }
    ctx->pc = 0x27B3F8u;
    // 0x27b3f8: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x27b3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x27b3fc: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x27b3fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b400: 0xc09edf0  jal         func_27B7C0
    ctx->pc = 0x27B400u;
    SET_GPR_U32(ctx, 31, 0x27B408u);
    ctx->pc = 0x27B404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B400u;
            // 0x27b404: 0x24844ed0  addiu       $a0, $a0, 0x4ED0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27B7C0u;
    if (runtime->hasFunction(0x27B7C0u)) {
        auto targetFn = runtime->lookupFunction(0x27B7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B408u; }
        if (ctx->pc != 0x27B408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027B7C0_0x27b7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B408u; }
        if (ctx->pc != 0x27B408u) { return; }
    }
    ctx->pc = 0x27B408u;
    // 0x27b408: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x27B408u;
    {
        const bool branch_taken_0x27b408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B408u;
            // 0x27b40c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b408) {
            ctx->pc = 0x27B540u;
            goto label_27b540;
        }
    }
    ctx->pc = 0x27B410u;
label_27b410:
    // 0x27b410: 0x3c150031  lui         $s5, 0x31
    ctx->pc = 0x27b410u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)49 << 16));
    // 0x27b414: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x27b414u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x27b418: 0xc0a4f18  jal         func_293C60
    ctx->pc = 0x27B418u;
    SET_GPR_U32(ctx, 31, 0x27B420u);
    ctx->pc = 0x27B41Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B418u;
            // 0x27b41c: 0x8ea4d000  lw          $a0, -0x3000($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294955008)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C60u;
    if (runtime->hasFunction(0x293C60u)) {
        auto targetFn = runtime->lookupFunction(0x293C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B420u; }
        if (ctx->pc != 0x27B420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c60_0x293c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B420u; }
        if (ctx->pc != 0x27B420u) { return; }
    }
    ctx->pc = 0x27B420u;
    // 0x27b420: 0x8e2232cc  lw          $v0, 0x32CC($s1)
    ctx->pc = 0x27b420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 13004)));
    // 0x27b424: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x27b424u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b428: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27b428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27b42c: 0x28430002  slti        $v1, $v0, 0x2
    ctx->pc = 0x27b42cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x27b430: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x27B430u;
    {
        const bool branch_taken_0x27b430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B430u;
            // 0x27b434: 0xae2232cc  sw          $v0, 0x32CC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 13004), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b430) {
            ctx->pc = 0x27B43Cu;
            goto label_27b43c;
        }
    }
    ctx->pc = 0x27B438u;
    // 0x27b438: 0xae2032cc  sw          $zero, 0x32CC($s1)
    ctx->pc = 0x27b438u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 13004), GPR_U32(ctx, 0));
label_27b43c:
    // 0x27b43c: 0x8e2332cc  lw          $v1, 0x32CC($s1)
    ctx->pc = 0x27b43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 13004)));
    // 0x27b440: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x27b440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x27b444: 0x3c160031  lui         $s6, 0x31
    ctx->pc = 0x27b444u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)49 << 16));
    // 0x27b448: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x27b448u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x27b44c: 0x26c2cdc0  addiu       $v0, $s6, -0x3240
    ctx->pc = 0x27b44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294954432));
    // 0x27b450: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x27b450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27b454: 0xac940000  sw          $s4, 0x0($a0)
    ctx->pc = 0x27b454u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 20));
    // 0x27b458: 0xac920004  sw          $s2, 0x4($a0)
    ctx->pc = 0x27b458u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 18));
    // 0x27b45c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x27b45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27b460: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x27b460u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x27b464: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x27b464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27b468: 0x1860000f  blez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x27B468u;
    {
        const bool branch_taken_0x27b468 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x27B46Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B468u;
            // 0x27b46c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b468) {
            ctx->pc = 0x27B4A8u;
            goto label_27b4a8;
        }
    }
    ctx->pc = 0x27B470u;
    // 0x27b470: 0x2486000c  addiu       $a2, $a0, 0xC
    ctx->pc = 0x27b470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x27b474: 0x3c070031  lui         $a3, 0x31
    ctx->pc = 0x27b474u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)49 << 16));
    // 0x27b478: 0x2651021  addu        $v0, $s3, $a1
    ctx->pc = 0x27b478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x27b47c: 0x0  nop
    ctx->pc = 0x27b47cu;
    // NOP
label_27b480:
    // 0x27b480: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x27b480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x27b484: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x27b484u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27b488: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x27b488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x27b48c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x27b48cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x27b490: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x27b490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27b494: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x27b494u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27b498: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x27B498u;
    {
        const bool branch_taken_0x27b498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B498u;
            // 0x27b49c: 0x2651021  addu        $v0, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b498) {
            ctx->pc = 0x27B480u;
            runtime->cooperativeGuestYield();
            goto label_27b480;
        }
    }
    ctx->pc = 0x27B4A0u;
    // 0x27b4a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27B4A0u;
    {
        const bool branch_taken_0x27b4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B4A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B4A0u;
            // 0x27b4a4: 0x8d0432cc  lw          $a0, 0x32CC($t0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 13004)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b4a0) {
            ctx->pc = 0x27B4B0u;
            goto label_27b4b0;
        }
    }
    ctx->pc = 0x27B4A8u;
label_27b4a8:
    // 0x27b4a8: 0x3c070031  lui         $a3, 0x31
    ctx->pc = 0x27b4a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)49 << 16));
    // 0x27b4ac: 0x8d0432cc  lw          $a0, 0x32CC($t0)
    ctx->pc = 0x27b4acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 13004)));
label_27b4b0:
    // 0x27b4b0: 0x24120028  addiu       $s2, $zero, 0x28
    ctx->pc = 0x27b4b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x27b4b4: 0x24f0abc0  addiu       $s0, $a3, -0x5440
    ctx->pc = 0x27b4b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945728));
    // 0x27b4b8: 0x922018  mult        $a0, $a0, $s2
    ctx->pc = 0x27b4b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x27b4bc: 0xc0a5d9c  jal         func_297670
    ctx->pc = 0x27B4BCu;
    SET_GPR_U32(ctx, 31, 0x27B4C4u);
    ctx->pc = 0x27B4C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B4BCu;
            // 0x27b4c0: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297670u;
    if (runtime->hasFunction(0x297670u)) {
        auto targetFn = runtime->lookupFunction(0x297670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B4C4u; }
        if (ctx->pc != 0x27B4C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_297670_0x2976c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B4C4u; }
        if (ctx->pc != 0x27B4C4u) { return; }
    }
    ctx->pc = 0x27B4C4u;
    // 0x27b4c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27b4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b4c8: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27B4C8u;
    {
        const bool branch_taken_0x27b4c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x27B4CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B4C8u;
            // 0x27b4cc: 0x8e2532cc  lw          $a1, 0x32CC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 13004)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b4c8) {
            ctx->pc = 0x27B4DCu;
            goto label_27b4dc;
        }
    }
    ctx->pc = 0x27B4D0u;
    // 0x27b4d0: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x27b4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x27b4d4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x27B4D4u;
    {
        const bool branch_taken_0x27b4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B4D4u;
            // 0x27b4d8: 0x24844f00  addiu       $a0, $a0, 0x4F00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b4d4) {
            ctx->pc = 0x27B51Cu;
            goto label_27b51c;
        }
    }
    ctx->pc = 0x27B4DCu;
label_27b4dc:
    // 0x27b4dc: 0x240700c0  addiu       $a3, $zero, 0xC0
    ctx->pc = 0x27b4dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x27b4e0: 0x26c2cdc0  addiu       $v0, $s6, -0x3240
    ctx->pc = 0x27b4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294954432));
    // 0x27b4e4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x27b4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x27b4e8: 0xa73818  mult        $a3, $a1, $a3
    ctx->pc = 0x27b4e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x27b4ec: 0xb21818  mult        $v1, $a1, $s2
    ctx->pc = 0x27b4ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x27b4f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27b4f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b4f4: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x27b4f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x27b4f8: 0x240a0090  addiu       $t2, $zero, 0x90
    ctx->pc = 0x27b4f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x27b4fc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x27b4fcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b500: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x27b500u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x27b504: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x27b504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x27b508: 0xc0a5d1c  jal         func_297470
    ctx->pc = 0x27B508u;
    SET_GPR_U32(ctx, 31, 0x27B510u);
    ctx->pc = 0x27B50Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B508u;
            // 0x27b50c: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297470u;
    if (runtime->hasFunction(0x297470u)) {
        auto targetFn = runtime->lookupFunction(0x297470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B510u; }
        if (ctx->pc != 0x27B510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297470_0x297470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B510u; }
        if (ctx->pc != 0x27B510u) { return; }
    }
    ctx->pc = 0x27B510u;
    // 0x27b510: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27B510u;
    {
        const bool branch_taken_0x27b510 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x27B514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B510u;
            // 0x27b514: 0x3c04002c  lui         $a0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b510) {
            ctx->pc = 0x27B534u;
            goto label_27b534;
        }
    }
    ctx->pc = 0x27B518u;
    // 0x27b518: 0x24844f20  addiu       $a0, $a0, 0x4F20
    ctx->pc = 0x27b518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20256));
label_27b51c:
    // 0x27b51c: 0xc09edf0  jal         func_27B7C0
    ctx->pc = 0x27B51Cu;
    SET_GPR_U32(ctx, 31, 0x27B524u);
    ctx->pc = 0x27B7C0u;
    if (runtime->hasFunction(0x27B7C0u)) {
        auto targetFn = runtime->lookupFunction(0x27B7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B524u; }
        if (ctx->pc != 0x27B524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027B7C0_0x27b7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B524u; }
        if (ctx->pc != 0x27B524u) { return; }
    }
    ctx->pc = 0x27B524u;
    // 0x27b524: 0xc0a4f10  jal         func_293C40
    ctx->pc = 0x27B524u;
    SET_GPR_U32(ctx, 31, 0x27B52Cu);
    ctx->pc = 0x27B528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B524u;
            // 0x27b528: 0x8ea4d000  lw          $a0, -0x3000($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294955008)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C40u;
    if (runtime->hasFunction(0x293C40u)) {
        auto targetFn = runtime->lookupFunction(0x293C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B52Cu; }
        if (ctx->pc != 0x27B52Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c40_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B52Cu; }
        if (ctx->pc != 0x27B52Cu) { return; }
    }
    ctx->pc = 0x27B52Cu;
    // 0x27b52c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x27B52Cu;
    {
        const bool branch_taken_0x27b52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B52Cu;
            // 0x27b530: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b52c) {
            ctx->pc = 0x27B540u;
            goto label_27b540;
        }
    }
    ctx->pc = 0x27B534u;
label_27b534:
    // 0x27b534: 0xc0a4f10  jal         func_293C40
    ctx->pc = 0x27B534u;
    SET_GPR_U32(ctx, 31, 0x27B53Cu);
    ctx->pc = 0x27B538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B534u;
            // 0x27b538: 0x8ea4d000  lw          $a0, -0x3000($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294955008)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C40u;
    if (runtime->hasFunction(0x293C40u)) {
        auto targetFn = runtime->lookupFunction(0x293C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B53Cu; }
        if (ctx->pc != 0x27B53Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c40_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B53Cu; }
        if (ctx->pc != 0x27B53Cu) { return; }
    }
    ctx->pc = 0x27B53Cu;
    // 0x27b53c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27b53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27b540:
    // 0x27b540: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x27b540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x27b544: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x27b544u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27b548: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x27b548u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27b54c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x27b54cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27b550: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x27b550u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27b554: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x27b554u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27b558: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x27b558u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27b55c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x27b55cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27b560: 0x3e00008  jr          $ra
    ctx->pc = 0x27B560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B560u;
            // 0x27b564: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27B410u: goto label_27b410;
            case 0x27B43Cu: goto label_27b43c;
            case 0x27B480u: goto label_27b480;
            case 0x27B4A8u: goto label_27b4a8;
            case 0x27B4B0u: goto label_27b4b0;
            case 0x27B4DCu: goto label_27b4dc;
            case 0x27B51Cu: goto label_27b51c;
            case 0x27B534u: goto label_27b534;
            case 0x27B540u: goto label_27b540;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27B568u;
}
