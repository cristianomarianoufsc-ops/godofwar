#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028A338
// Address: 0x28a338 - 0x28a540
void sub_0028A338_0x28a338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A338_0x28a338");
#endif

    ctx->pc = 0x28a338u;

    // 0x28a338: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x28a338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x28a33c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x28a33cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a340: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x28a340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x28a344: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x28a344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x28a348: 0xffa600c0  sd          $a2, 0xC0($sp)
    ctx->pc = 0x28a348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 6));
    // 0x28a34c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x28a34cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a350: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x28a350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x28a354: 0xa7a3000c  sh          $v1, 0xC($sp)
    ctx->pc = 0x28a354u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x28a358: 0xffa700c8  sd          $a3, 0xC8($sp)
    ctx->pc = 0x28a358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 7));
    // 0x28a35c: 0xffa800d0  sd          $t0, 0xD0($sp)
    ctx->pc = 0x28a35cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 8));
    // 0x28a360: 0xffa900d8  sd          $t1, 0xD8($sp)
    ctx->pc = 0x28a360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 9));
    // 0x28a364: 0xffaa00e0  sd          $t2, 0xE0($sp)
    ctx->pc = 0x28a364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 10));
    // 0x28a368: 0xffab00e8  sd          $t3, 0xE8($sp)
    ctx->pc = 0x28a368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 11));
    // 0x28a36c: 0xe7ac00b0  swc1        $f12, 0xB0($sp)
    ctx->pc = 0x28a36cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x28a370: 0xe7ae00b4  swc1        $f14, 0xB4($sp)
    ctx->pc = 0x28a370u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x28a374: 0xe7b000b8  swc1        $f16, 0xB8($sp)
    ctx->pc = 0x28a374u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x28a378: 0xe7b200bc  swc1        $f18, 0xBC($sp)
    ctx->pc = 0x28a378u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x28a37c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x28a37cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x28a380: 0xc0a268a  jal         func_289A28
    ctx->pc = 0x28A380u;
    SET_GPR_U32(ctx, 31, 0x28A388u);
    ctx->pc = 0x28A384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28A380u;
            // 0x28a384: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289A28u;
    if (runtime->hasFunction(0x289A28u)) {
        auto targetFn = runtime->lookupFunction(0x289A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A388u; }
        if (ctx->pc != 0x28A388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289a28_0x289b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A388u; }
        if (ctx->pc != 0x28A388u) { return; }
    }
    ctx->pc = 0x28A388u;
    // 0x28a388: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x28a388u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x28a38c: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x28a38cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    // 0x28a390: 0x8c864294  lw          $a2, 0x4294($a0)
    ctx->pc = 0x28a390u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 17044)));
    // 0x28a394: 0x2463a330  addiu       $v1, $v1, -0x5CD0
    ctx->pc = 0x28a394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943536));
    // 0x28a398: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28a398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a39c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x28a39cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x28a3a0: 0xafa60054  sw          $a2, 0x54($sp)
    ctx->pc = 0x28a3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 6));
    // 0x28a3a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x28a3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a3a8: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x28a3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x28a3ac: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x28a3acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x28a3b0: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x28a3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x28a3b4: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x28a3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x28a3b8: 0xc0a2950  jal         func_28A540
    ctx->pc = 0x28A3B8u;
    SET_GPR_U32(ctx, 31, 0x28A3C0u);
    ctx->pc = 0x28A3BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28A3B8u;
            // 0x28a3bc: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A540u;
    if (runtime->hasFunction(0x28A540u)) {
        auto targetFn = runtime->lookupFunction(0x28A540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A3C0u; }
        if (ctx->pc != 0x28A3C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A540_0x28a540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A3C0u; }
        if (ctx->pc != 0x28A3C0u) { return; }
    }
    ctx->pc = 0x28A3C0u;
    // 0x28a3c0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x28a3c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28a3c4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x28a3c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28a3c8: 0x3e00008  jr          $ra
    ctx->pc = 0x28A3C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A3C8u;
            // 0x28a3cc: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28A418u: goto label_28a418;
            case 0x28A420u: goto label_28a420;
            case 0x28A478u: goto label_28a478;
            case 0x28A4F8u: goto label_28a4f8;
            case 0x28A508u: goto label_28a508;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28A3D0u;
    // 0x28a3d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28a3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28a3d4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x28a3d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a3d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28a3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x28a3dc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x28a3dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a3e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28a3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28a3e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28a3e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a3e8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x28a3e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a3ec: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x28a3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x28a3f0: 0xc0a4858  jal         func_292160
    ctx->pc = 0x28A3F0u;
    SET_GPR_U32(ctx, 31, 0x28A3F8u);
    ctx->pc = 0x28A3F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28A3F0u;
            // 0x28a3f4: 0x8605000e  lh          $a1, 0xE($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x292160u;
    if (runtime->hasFunction(0x292160u)) {
        auto targetFn = runtime->lookupFunction(0x292160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A3F8u; }
        if (ctx->pc != 0x28A3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00292160_0x292160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A3F8u; }
        if (ctx->pc != 0x28A3F8u) { return; }
    }
    ctx->pc = 0x28A3F8u;
    // 0x28a3f8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x28a3f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28a3fc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x28a3fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x28a400: 0x4620005  bltzl       $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x28A400u;
    {
        const bool branch_taken_0x28a400 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x28a400) {
            ctx->pc = 0x28A404u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28A400u;
            // 0x28a404: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28A418u;
            goto label_28a418;
        }
    }
    ctx->pc = 0x28A408u;
    // 0x28a408: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x28a408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x28a40c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28a40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28a410: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28A410u;
    {
        const bool branch_taken_0x28a410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A410u;
            // 0x28a414: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a410) {
            ctx->pc = 0x28A420u;
            goto label_28a420;
        }
    }
    ctx->pc = 0x28A418u;
label_28a418:
    // 0x28a418: 0x3042efff  andi        $v0, $v0, 0xEFFF
    ctx->pc = 0x28a418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61439);
    // 0x28a41c: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x28a41cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_28a420:
    // 0x28a420: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28a420u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28a424: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x28a424u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a428: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28a428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28a42c: 0x3e00008  jr          $ra
    ctx->pc = 0x28A42Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A42Cu;
            // 0x28a430: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28A418u: goto label_28a418;
            case 0x28A420u: goto label_28a420;
            case 0x28A478u: goto label_28a478;
            case 0x28A4F8u: goto label_28a4f8;
            case 0x28A508u: goto label_28a508;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28A434u;
    // 0x28a434: 0x0  nop
    ctx->pc = 0x28a434u;
    // NOP
    // 0x28a438: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28a438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28a43c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x28a43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x28a440: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x28a440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x28a444: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28a444u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a448: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x28a448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x28a44c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x28a44cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a450: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28a450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28a454: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x28a454u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x28a458: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x28a458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x28a45c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28A45Cu;
    {
        const bool branch_taken_0x28a45c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A45Cu;
            // 0x28a460: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a45c) {
            ctx->pc = 0x28A478u;
            goto label_28a478;
        }
    }
    ctx->pc = 0x28A464u;
    // 0x28a464: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x28a464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x28a468: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28a468u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a46c: 0x8605000e  lh          $a1, 0xE($s0)
    ctx->pc = 0x28a46cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x28a470: 0xc0a4840  jal         func_292100
    ctx->pc = 0x28A470u;
    SET_GPR_U32(ctx, 31, 0x28A478u);
    ctx->pc = 0x28A474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28A470u;
            // 0x28a474: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x292100u;
    if (runtime->hasFunction(0x292100u)) {
        auto targetFn = runtime->lookupFunction(0x292100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A478u; }
        if (ctx->pc != 0x28A478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00292100_0x292100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A478u; }
        if (ctx->pc != 0x28A478u) { return; }
    }
    ctx->pc = 0x28A478u;
label_28a478:
    // 0x28a478: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x28a478u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x28a47c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x28a47cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a480: 0x8605000e  lh          $a1, 0xE($s0)
    ctx->pc = 0x28a480u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x28a484: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x28a484u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a488: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x28a488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x28a48c: 0x3042efff  andi        $v0, $v0, 0xEFFF
    ctx->pc = 0x28a48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61439);
    // 0x28a490: 0xc0a4888  jal         func_292220
    ctx->pc = 0x28A490u;
    SET_GPR_U32(ctx, 31, 0x28A498u);
    ctx->pc = 0x28A494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28A490u;
            // 0x28a494: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x292220u;
    if (runtime->hasFunction(0x292220u)) {
        auto targetFn = runtime->lookupFunction(0x292220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A498u; }
        if (ctx->pc != 0x28A498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00292220_0x292220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A498u; }
        if (ctx->pc != 0x28A498u) { return; }
    }
    ctx->pc = 0x28A498u;
    // 0x28a498: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x28a498u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28a49c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x28a49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28a4a0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x28a4a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x28a4a4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x28a4a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28a4a8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x28a4a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28a4ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28a4acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28a4b0: 0x3e00008  jr          $ra
    ctx->pc = 0x28A4B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A4B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A4B0u;
            // 0x28a4b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28A418u: goto label_28a418;
            case 0x28A420u: goto label_28a420;
            case 0x28A478u: goto label_28a478;
            case 0x28A4F8u: goto label_28a4f8;
            case 0x28A508u: goto label_28a508;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28A4B8u;
    // 0x28a4b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28a4b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28a4bc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x28a4bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a4c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28a4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x28a4c4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x28a4c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a4c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28a4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28a4cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28a4ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a4d0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x28a4d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a4d4: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x28a4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x28a4d8: 0xc0a4840  jal         func_292100
    ctx->pc = 0x28A4D8u;
    SET_GPR_U32(ctx, 31, 0x28A4E0u);
    ctx->pc = 0x28A4DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28A4D8u;
            // 0x28a4dc: 0x8605000e  lh          $a1, 0xE($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x292100u;
    if (runtime->hasFunction(0x292100u)) {
        auto targetFn = runtime->lookupFunction(0x292100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A4E0u; }
        if (ctx->pc != 0x28A4E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00292100_0x292100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A4E0u; }
        if (ctx->pc != 0x28A4E0u) { return; }
    }
    ctx->pc = 0x28A4E0u;
    // 0x28a4e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28a4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a4e4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x28a4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28a4e8: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28A4E8u;
    {
        const bool branch_taken_0x28a4e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x28A4ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A4E8u;
            // 0x28a4ec: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a4e8) {
            ctx->pc = 0x28A4F8u;
            goto label_28a4f8;
        }
    }
    ctx->pc = 0x28A4F0u;
    // 0x28a4f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28A4F0u;
    {
        const bool branch_taken_0x28a4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A4F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A4F0u;
            // 0x28a4f4: 0x3042efff  andi        $v0, $v0, 0xEFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61439);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a4f0) {
            ctx->pc = 0x28A508u;
            goto label_28a508;
        }
    }
    ctx->pc = 0x28A4F8u;
label_28a4f8:
    // 0x28a4f8: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x28a4f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x28a4fc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x28a4fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x28a500: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x28a500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x28a504: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x28a504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_28a508:
    // 0x28a508: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x28a508u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x28a50c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28a50cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28a510: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x28a510u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a514: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28a514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28a518: 0x3e00008  jr          $ra
    ctx->pc = 0x28A518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A51Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A518u;
            // 0x28a51c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28A418u: goto label_28a418;
            case 0x28A420u: goto label_28a420;
            case 0x28A478u: goto label_28a478;
            case 0x28A4F8u: goto label_28a4f8;
            case 0x28A508u: goto label_28a508;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28A520u;
    // 0x28a520: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28a520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28a524: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28a524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28a528: 0x8485000e  lh          $a1, 0xE($a0)
    ctx->pc = 0x28a528u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x28a52c: 0xc0a4812  jal         func_292048
    ctx->pc = 0x28A52Cu;
    SET_GPR_U32(ctx, 31, 0x28A534u);
    ctx->pc = 0x28A530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28A52Cu;
            // 0x28a530: 0x8c840054  lw          $a0, 0x54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x292048u;
    if (runtime->hasFunction(0x292048u)) {
        auto targetFn = runtime->lookupFunction(0x292048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A534u; }
        if (ctx->pc != 0x28A534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00292048_0x292048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A534u; }
        if (ctx->pc != 0x28A534u) { return; }
    }
    ctx->pc = 0x28A534u;
    // 0x28a534: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28a534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28a538: 0x3e00008  jr          $ra
    ctx->pc = 0x28A538u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A538u;
            // 0x28a53c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28A418u: goto label_28a418;
            case 0x28A420u: goto label_28a420;
            case 0x28A478u: goto label_28a478;
            case 0x28A4F8u: goto label_28a4f8;
            case 0x28A508u: goto label_28a508;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28A540u;
}
