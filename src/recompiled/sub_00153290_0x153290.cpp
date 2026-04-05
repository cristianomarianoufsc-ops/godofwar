#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00153290
// Address: 0x153290 - 0x1534e0
void sub_00153290_0x153290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153290_0x153290");
#endif

    ctx->pc = 0x153290u;

    // 0x153290: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x153290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x153294: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x153294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x153298: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x153298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x15329c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15329cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1532a0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1532a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1532a4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1532a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1532a8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1532a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1532ac: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1532acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1532b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1532b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1532b4: 0x26050068  addiu       $a1, $s0, 0x68
    ctx->pc = 0x1532b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    // 0x1532b8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1532b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1532bc: 0xde420000  ld          $v0, 0x0($s2)
    ctx->pc = 0x1532bcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1532c0: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x1532c0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x1532c4: 0xde420008  ld          $v0, 0x8($s2)
    ctx->pc = 0x1532c4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1532c8: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x1532c8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x1532cc: 0x0  nop
    ctx->pc = 0x1532ccu;
    // NOP
label_1532d0:
    // 0x1532d0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1532d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1532d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1532d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1532d8:
    // 0x1532d8: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x1532d8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x1532dc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1532dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1532e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1532e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1532e4: 0x0  nop
    ctx->pc = 0x1532e4u;
    // NOP
    // 0x1532e8: 0x0  nop
    ctx->pc = 0x1532e8u;
    // NOP
    // 0x1532ec: 0x1482fffa  bne         $a0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1532ECu;
    {
        const bool branch_taken_0x1532ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1532F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1532ECu;
            // 0x1532f0: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1532ec) {
            ctx->pc = 0x1532D8u;
            runtime->cooperativeGuestYield();
            goto label_1532d8;
        }
    }
    ctx->pc = 0x1532F4u;
    // 0x1532f4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1532f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1532f8: 0x14c4fff5  bne         $a2, $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1532F8u;
    {
        const bool branch_taken_0x1532f8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x1532FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1532F8u;
            // 0x1532fc: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1532f8) {
            ctx->pc = 0x1532D0u;
            runtime->cooperativeGuestYield();
            goto label_1532d0;
        }
    }
    ctx->pc = 0x153300u;
    // 0x153300: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x153300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x153304: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x153304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x153308: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x153308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x15330c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x15330cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x153310: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x153310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x153314: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x153314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x153318: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x153318u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15331c: 0x8e43003c  lw          $v1, 0x3C($s2)
    ctx->pc = 0x15331cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x153320: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x153320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x153324: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x153324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x153328: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x153328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x15332c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x15332cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x153330: 0xae020088  sw          $v0, 0x88($s0)
    ctx->pc = 0x153330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
    // 0x153334: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x153334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
    // 0x153338: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x153338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
    // 0x15333c: 0xc04f824  jal         func_13E090
    ctx->pc = 0x15333Cu;
    SET_GPR_U32(ctx, 31, 0x153344u);
    ctx->pc = 0x153340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15333Cu;
            // 0x153340: 0xae02008c  sw          $v0, 0x8C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153344u; }
        if (ctx->pc != 0x153344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153344u; }
        if (ctx->pc != 0x153344u) { return; }
    }
    ctx->pc = 0x153344u;
    // 0x153344: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x153344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153348: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x153348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x15334c: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x15334Cu;
    SET_GPR_U32(ctx, 31, 0x153354u);
    ctx->pc = 0x153350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15334Cu;
            // 0x153350: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153354u; }
        if (ctx->pc != 0x153354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153354u; }
        if (ctx->pc != 0x153354u) { return; }
    }
    ctx->pc = 0x153354u;
    // 0x153354: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x153354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153358: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x153358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15335c: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x15335cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x153360: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x153360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x153364: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x153364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_153368:
    // 0x153368: 0x0  nop
    ctx->pc = 0x153368u;
    // NOP
    // 0x15336c: 0x0  nop
    ctx->pc = 0x15336cu;
    // NOP
    // 0x153370: 0x0  nop
    ctx->pc = 0x153370u;
    // NOP
    // 0x153374: 0x0  nop
    ctx->pc = 0x153374u;
    // NOP
    // 0x153378: 0x0  nop
    ctx->pc = 0x153378u;
    // NOP
    // 0x15337c: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15337Cu;
    {
        const bool branch_taken_0x15337c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x153380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15337Cu;
            // 0x153380: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15337c) {
            ctx->pc = 0x153368u;
            runtime->cooperativeGuestYield();
            goto label_153368;
        }
    }
    ctx->pc = 0x153384u;
    // 0x153384: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x153384u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x153388: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x153388u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15338c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x15338cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x153390: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x153390u;
    {
        const bool branch_taken_0x153390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153390u;
            // 0x153394: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153390) {
            ctx->pc = 0x1533C0u;
            goto label_1533c0;
        }
    }
    ctx->pc = 0x153398u;
    // 0x153398: 0xc05d656  jal         func_175958
    ctx->pc = 0x153398u;
    SET_GPR_U32(ctx, 31, 0x1533A0u);
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1533A0u; }
        if (ctx->pc != 0x1533A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1533A0u; }
        if (ctx->pc != 0x1533A0u) { return; }
    }
    ctx->pc = 0x1533A0u;
    // 0x1533a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1533a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1533a4: 0xc05d6a4  jal         func_175A90
    ctx->pc = 0x1533A4u;
    SET_GPR_U32(ctx, 31, 0x1533ACu);
    ctx->pc = 0x1533A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1533A4u;
            // 0x1533a8: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175A90u;
    if (runtime->hasFunction(0x175A90u)) {
        auto targetFn = runtime->lookupFunction(0x175A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1533ACu; }
        if (ctx->pc != 0x1533ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175A90_0x175a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1533ACu; }
        if (ctx->pc != 0x1533ACu) { return; }
    }
    ctx->pc = 0x1533ACu;
    // 0x1533ac: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1533acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1533b0: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x1533b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x1533b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1533B4u;
    {
        const bool branch_taken_0x1533b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1533B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1533B4u;
            // 0x1533b8: 0x8c713988  lw          $s1, 0x3988($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14728)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1533b4) {
            ctx->pc = 0x1533C8u;
            goto label_1533c8;
        }
    }
    ctx->pc = 0x1533BCu;
    // 0x1533bc: 0x0  nop
    ctx->pc = 0x1533bcu;
    // NOP
label_1533c0:
    // 0x1533c0: 0x8c513984  lw          $s1, 0x3984($v0)
    ctx->pc = 0x1533c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14724)));
    // 0x1533c4: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x1533c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_1533c8:
    // 0x1533c8: 0x6a42002f  ldl         $v0, 0x2F($s2)
    ctx->pc = 0x1533c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1533cc: 0x6e420028  ldr         $v0, 0x28($s2)
    ctx->pc = 0x1533ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1533d0: 0x6a430037  ldl         $v1, 0x37($s2)
    ctx->pc = 0x1533d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1533d4: 0x6e430030  ldr         $v1, 0x30($s2)
    ctx->pc = 0x1533d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1533d8: 0xb202001b  sdl         $v0, 0x1B($s0)
    ctx->pc = 0x1533d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1533dc: 0xb6020014  sdr         $v0, 0x14($s0)
    ctx->pc = 0x1533dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1533e0: 0xb2030023  sdl         $v1, 0x23($s0)
    ctx->pc = 0x1533e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1533e4: 0xb603001c  sdr         $v1, 0x1C($s0)
    ctx->pc = 0x1533e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1533e8: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x1533e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1533ec: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x1533ecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1533f0: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x1533f0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1533f4: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1533f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1533f8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1533f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1533fc: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1533fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x153400: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x153400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153404: 0x4be00053  vmaxw.xyzw  $vf1, $vf0, $vf0w
    ctx->pc = 0x153404u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x153408: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x153408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15340c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x15340cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153410: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x153410u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153414: 0xc0550dc  jal         func_154370
    ctx->pc = 0x153414u;
    SET_GPR_U32(ctx, 31, 0x15341Cu);
    ctx->pc = 0x153418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153414u;
            // 0x153418: 0x48280800  qmfc2.ni    $t0, $vf1 (Delay Slot)
        SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154370u;
    if (runtime->hasFunction(0x154370u)) {
        auto targetFn = runtime->lookupFunction(0x154370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15341Cu; }
        if (ctx->pc != 0x15341Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_154370_0x154518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15341Cu; }
        if (ctx->pc != 0x15341Cu) { return; }
    }
    ctx->pc = 0x15341Cu;
    // 0x15341c: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x15341cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x153420: 0x3402f800  ori         $v0, $zero, 0xF800
    ctx->pc = 0x153420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63488);
    // 0x153424: 0x21578  dsll        $v0, $v0, 21
    ctx->pc = 0x153424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 21);
    // 0x153428: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x153428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x15342c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x15342Cu;
    {
        const bool branch_taken_0x15342c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15342c) {
            ctx->pc = 0x153430u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15342Cu;
            // 0x153430: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x153470u;
            goto label_153470;
        }
    }
    ctx->pc = 0x153434u;
    // 0x153434: 0x2405ffe0  addiu       $a1, $zero, -0x20
    ctx->pc = 0x153434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x153438: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x153438u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x15343c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x15343cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x153440: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x153440u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x153444: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x153444u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x153448: 0xde020008  ld          $v0, 0x8($s0)
    ctx->pc = 0x153448u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x15344c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x15344cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x153450: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x153450u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x153454: 0x424f8  dsll        $a0, $a0, 19
    ctx->pc = 0x153454u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 19);
    // 0x153458: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x153458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x15345c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x15345cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x153460: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x153460u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x153464: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x153464u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x153468: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x153468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15346c: 0x0  nop
    ctx->pc = 0x15346cu;
    // NOP
label_153470:
    // 0x153470: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x153470u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x153474: 0xde050008  ld          $a1, 0x8($s0)
    ctx->pc = 0x153474u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x153478: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x153478u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x15347c: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x15347cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x153480: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x153480u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153484: 0xfe050040  sd          $a1, 0x40($s0)
    ctx->pc = 0x153484u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 5));
    // 0x153488: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x153488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x15348c: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x15348cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x153490: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x153490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x153494: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x153494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x153498: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x153498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
    // 0x15349c: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x15349cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x1534a0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1534a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1534a4: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x1534a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x1534a8: 0xae03005c  sw          $v1, 0x5C($s0)
    ctx->pc = 0x1534a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
    // 0x1534ac: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1534acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1534b0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1534b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1534b4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1534b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1534b8: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x1534b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x1534bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1534bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1534c0: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1534c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1534c4: 0xae0400a8  sw          $a0, 0xA8($s0)
    ctx->pc = 0x1534c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 4));
    // 0x1534c8: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x1534c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x1534cc: 0xae0400ac  sw          $a0, 0xAC($s0)
    ctx->pc = 0x1534ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 4));
    // 0x1534d0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1534d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1534d4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1534d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1534d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1534D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1534DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1534D8u;
            // 0x1534dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1532D0u: goto label_1532d0;
            case 0x1532D8u: goto label_1532d8;
            case 0x153368u: goto label_153368;
            case 0x1533C0u: goto label_1533c0;
            case 0x1533C8u: goto label_1533c8;
            case 0x153470u: goto label_153470;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1534E0u;
}
