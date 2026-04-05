#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020C338
// Address: 0x20c338 - 0x20c458
void sub_0020C338_0x20c338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C338_0x20c338");
#endif

    ctx->pc = 0x20c338u;

    // 0x20c338: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x20c338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x20c33c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x20c33cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x20c340: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x20c340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x20c344: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x20c344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x20c348: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x20c348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x20c34c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20c34cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c350: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x20c350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x20c354: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x20c354u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c358: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20c358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20c35c: 0x244297e0  addiu       $v0, $v0, -0x6820
    ctx->pc = 0x20c35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940640));
    // 0x20c360: 0x8c63bde0  lw          $v1, -0x4220($v1)
    ctx->pc = 0x20c360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950368)));
    // 0x20c364: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x20c364u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c368: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x20c368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x20c36c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x20C36Cu;
    {
        const bool branch_taken_0x20c36c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C36Cu;
            // 0x20c370: 0xae120000  sw          $s2, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c36c) {
            ctx->pc = 0x20C384u;
            goto label_20c384;
        }
    }
    ctx->pc = 0x20C374u;
    // 0x20c374: 0xc06f9a8  jal         func_1BE6A0
    ctx->pc = 0x20C374u;
    SET_GPR_U32(ctx, 31, 0x20C37Cu);
    ctx->pc = 0x1BE6A0u;
    if (runtime->hasFunction(0x1BE6A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C37Cu; }
        if (ctx->pc != 0x20C37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE6A0_0x1be6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C37Cu; }
        if (ctx->pc != 0x20C37Cu) { return; }
    }
    ctx->pc = 0x20C37Cu;
    // 0x20c37c: 0xc049742  jal         func_125D08
    ctx->pc = 0x20C37Cu;
    SET_GPR_U32(ctx, 31, 0x20C384u);
    ctx->pc = 0x20C380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C37Cu;
            // 0x20c380: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125D08u;
    if (runtime->hasFunction(0x125D08u)) {
        auto targetFn = runtime->lookupFunction(0x125D08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C384u; }
        if (ctx->pc != 0x20C384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125D08_0x125d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C384u; }
        if (ctx->pc != 0x20C384u) { return; }
    }
    ctx->pc = 0x20C384u;
label_20c384:
    // 0x20c384: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x20c384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x20c388: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x20c388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x20c38c: 0x2442c618  addiu       $v0, $v0, -0x39E8
    ctx->pc = 0x20c38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952472));
    // 0x20c390: 0x12200029  beqz        $s1, . + 4 + (0x29 << 2)
    ctx->pc = 0x20C390u;
    {
        const bool branch_taken_0x20c390 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C390u;
            // 0x20c394: 0xae420034  sw          $v0, 0x34($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c390) {
            ctx->pc = 0x20C438u;
            goto label_20c438;
        }
    }
    ctx->pc = 0x20C398u;
    // 0x20c398: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x20c398u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x20c39c: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x20C39Cu;
    {
        const bool branch_taken_0x20c39c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C3A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C39Cu;
            // 0x20c3a0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c39c) {
            ctx->pc = 0x20C43Cu;
            goto label_20c43c;
        }
    }
    ctx->pc = 0x20C3A4u;
    // 0x20c3a4: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x20c3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x20c3a8: 0x37a40005  ori         $a0, $sp, 0x5
    ctx->pc = 0x20c3a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)5);
    // 0x20c3ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20c3acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c3b0: 0x24492a30  addiu       $t1, $v0, 0x2A30
    ctx->pc = 0x20c3b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 10800));
    // 0x20c3b4: 0x89230003  lwl         $v1, 0x3($t1)
    ctx->pc = 0x20c3b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x20c3b8: 0x99230000  lwr         $v1, 0x0($t1)
    ctx->pc = 0x20c3b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x20c3bc: 0x81270004  lb          $a3, 0x4($t1)
    ctx->pc = 0x20c3bcu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x20c3c0: 0xaba30003  swl         $v1, 0x3($sp)
    ctx->pc = 0x20c3c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x20c3c4: 0xbba30000  swr         $v1, 0x0($sp)
    ctx->pc = 0x20c3c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x20c3c8: 0xa3a70004  sb          $a3, 0x4($sp)
    ctx->pc = 0x20c3c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 7));
    // 0x20c3cc: 0xc0a250f  jal         func_28943C
    ctx->pc = 0x20C3CCu;
    SET_GPR_U32(ctx, 31, 0x20C3D4u);
    ctx->pc = 0x20C3D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C3CCu;
            // 0x20c3d0: 0x2406001b  addiu       $a2, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C3D4u; }
        if (ctx->pc != 0x20C3D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28943c_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C3D4u; }
        if (ctx->pc != 0x20C3D4u) { return; }
    }
    ctx->pc = 0x20C3D4u;
    // 0x20c3d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20c3d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c3d8: 0xc0a253d  jal         func_2894F4
    ctx->pc = 0x20C3D8u;
    SET_GPR_U32(ctx, 31, 0x20C3E0u);
    ctx->pc = 0x20C3DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C3D8u;
            // 0x20c3dc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2894F4u;
    if (runtime->hasFunction(0x2894F4u)) {
        auto targetFn = runtime->lookupFunction(0x2894F4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C3E0u; }
        if (ctx->pc != 0x20C3E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002894F4_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C3E0u; }
        if (ctx->pc != 0x20C3E0u) { return; }
    }
    ctx->pc = 0x20C3E0u;
    // 0x20c3e0: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x20c3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x20c3e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20c3e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c3e8: 0xc0a349c  jal         func_28D270
    ctx->pc = 0x20C3E8u;
    SET_GPR_U32(ctx, 31, 0x20C3F0u);
    ctx->pc = 0x20C3ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C3E8u;
            // 0x20c3ec: 0x24847c68  addiu       $a0, $a0, 0x7C68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D270u;
    if (runtime->hasFunction(0x28D270u)) {
        auto targetFn = runtime->lookupFunction(0x28D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C3F0u; }
        if (ctx->pc != 0x20C3F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D270_0x28d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C3F0u; }
        if (ctx->pc != 0x20C3F0u) { return; }
    }
    ctx->pc = 0x20C3F0u;
    // 0x20c3f0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20C3F0u;
    {
        const bool branch_taken_0x20c3f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C3F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C3F0u;
            // 0x20c3f4: 0x3c04002b  lui         $a0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c3f0) {
            ctx->pc = 0x20C408u;
            goto label_20c408;
        }
    }
    ctx->pc = 0x20C3F8u;
    // 0x20c3f8: 0xc05e996  jal         func_17A658
    ctx->pc = 0x20C3F8u;
    SET_GPR_U32(ctx, 31, 0x20C400u);
    ctx->pc = 0x20C3FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C3F8u;
            // 0x20c3fc: 0x24847c70  addiu       $a0, $a0, 0x7C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C400u; }
        if (ctx->pc != 0x20C400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C400u; }
        if (ctx->pc != 0x20C400u) { return; }
    }
    ctx->pc = 0x20C400u;
    // 0x20c400: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x20C400u;
    {
        const bool branch_taken_0x20c400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C400u;
            // 0x20c404: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c400) {
            ctx->pc = 0x20C438u;
            goto label_20c438;
        }
    }
    ctx->pc = 0x20C408u;
label_20c408:
    // 0x20c408: 0xc05e996  jal         func_17A658
    ctx->pc = 0x20C408u;
    SET_GPR_U32(ctx, 31, 0x20C410u);
    ctx->pc = 0x20C40Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C408u;
            // 0x20c40c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C410u; }
        if (ctx->pc != 0x20C410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C410u; }
        if (ctx->pc != 0x20C410u) { return; }
    }
    ctx->pc = 0x20C410u;
    // 0x20c410: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x20C410u;
    {
        const bool branch_taken_0x20c410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c410) {
            ctx->pc = 0x20C414u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20C410u;
            // 0x20c414: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20C43Cu;
            goto label_20c43c;
        }
    }
    ctx->pc = 0x20C418u;
    // 0x20c418: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x20c418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x20c41c: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x20c41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x20c420: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20C420u;
    {
        const bool branch_taken_0x20c420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C420u;
            // 0x20c424: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c420) {
            ctx->pc = 0x20C438u;
            goto label_20c438;
        }
    }
    ctx->pc = 0x20C428u;
    // 0x20c428: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20c428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20c42c: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x20c42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x20c430: 0x2442c4d0  addiu       $v0, $v0, -0x3B30
    ctx->pc = 0x20c430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952144));
    // 0x20c434: 0xac620038  sw          $v0, 0x38($v1)
    ctx->pc = 0x20c434u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
label_20c438:
    // 0x20c438: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x20c438u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20c43c:
    // 0x20c43c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x20c43cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20c440: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x20c440u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20c444: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x20c444u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20c448: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20c448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20c44c: 0x3e00008  jr          $ra
    ctx->pc = 0x20C44Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C44Cu;
            // 0x20c450: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20C384u: goto label_20c384;
            case 0x20C408u: goto label_20c408;
            case 0x20C438u: goto label_20c438;
            case 0x20C43Cu: goto label_20c43c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20C454u;
    // 0x20c454: 0x0  nop
    ctx->pc = 0x20c454u;
    // NOP
}
