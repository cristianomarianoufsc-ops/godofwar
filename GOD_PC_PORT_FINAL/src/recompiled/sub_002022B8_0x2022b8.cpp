#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002022B8
// Address: 0x2022b8 - 0x2023c0
void sub_002022B8_0x2022b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002022B8_0x2022b8");
#endif

    ctx->pc = 0x2022b8u;

    // 0x2022b8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2022b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2022bc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2022bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2022c0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2022c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2022c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2022c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2022c8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2022c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2022cc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2022ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2022d0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2022d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2022d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2022d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2022d8: 0xc08eb9c  jal         func_23AE70
    ctx->pc = 0x2022D8u;
    SET_GPR_U32(ctx, 31, 0x2022E0u);
    ctx->pc = 0x2022DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2022D8u;
            // 0x2022dc: 0x26040088  addiu       $a0, $s0, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23AE70u;
    if (runtime->hasFunction(0x23AE70u)) {
        auto targetFn = runtime->lookupFunction(0x23AE70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2022E0u; }
        if (ctx->pc != 0x2022E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23ae70_0x23ae80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2022E0u; }
        if (ctx->pc != 0x2022E0u) { return; }
    }
    ctx->pc = 0x2022E0u;
    // 0x2022e0: 0x261100ac  addiu       $s1, $s0, 0xAC
    ctx->pc = 0x2022e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 172));
    // 0x2022e4: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x2022e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x2022e8: 0xc08eb9c  jal         func_23AE70
    ctx->pc = 0x2022E8u;
    SET_GPR_U32(ctx, 31, 0x2022F0u);
    ctx->pc = 0x2022ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2022E8u;
            // 0x2022ec: 0x2412001f  addiu       $s2, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23AE70u;
    if (runtime->hasFunction(0x23AE70u)) {
        auto targetFn = runtime->lookupFunction(0x23AE70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2022F0u; }
        if (ctx->pc != 0x2022F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23ae70_0x23ae80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2022F0u; }
        if (ctx->pc != 0x2022F0u) { return; }
    }
    ctx->pc = 0x2022F0u;
label_2022f0:
    // 0x2022f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2022f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2022f4: 0xc090d52  jal         func_243548
    ctx->pc = 0x2022F4u;
    SET_GPR_U32(ctx, 31, 0x2022FCu);
    ctx->pc = 0x2022F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2022F4u;
            // 0x2022f8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243548u;
    if (runtime->hasFunction(0x243548u)) {
        auto targetFn = runtime->lookupFunction(0x243548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2022FCu; }
        if (ctx->pc != 0x2022FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243548_0x243550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2022FCu; }
        if (ctx->pc != 0x2022FCu) { return; }
    }
    ctx->pc = 0x2022FCu;
    // 0x2022fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2022fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x202300: 0x1642fffb  bne         $s2, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x202300u;
    {
        const bool branch_taken_0x202300 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x202304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202300u;
            // 0x202304: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202300) {
            ctx->pc = 0x2022F0u;
            runtime->cooperativeGuestYield();
            goto label_2022f0;
        }
    }
    ctx->pc = 0x202308u;
    // 0x202308: 0x260301c0  addiu       $v1, $s0, 0x1C0
    ctx->pc = 0x202308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    // 0x20230c: 0x260401c8  addiu       $a0, $s0, 0x1C8
    ctx->pc = 0x20230cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 456));
    // 0x202310: 0xa0600007  sb          $zero, 0x7($v1)
    ctx->pc = 0x202310u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x202314: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x202314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x202318: 0xae0401c0  sw          $a0, 0x1C0($s0)
    ctx->pc = 0x202318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 4));
    // 0x20231c: 0xa0620004  sb          $v0, 0x4($v1)
    ctx->pc = 0x20231cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x202320: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x202320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x202324: 0xa0620005  sb          $v0, 0x5($v1)
    ctx->pc = 0x202324u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x202328: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x202328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20232c: 0xa0600006  sb          $zero, 0x6($v1)
    ctx->pc = 0x20232cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x202330: 0xae130048  sw          $s3, 0x48($s0)
    ctx->pc = 0x202330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 19));
    // 0x202334: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x202334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x202338: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x202338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x20233c: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x20233cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x202340: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x202340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x202344: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x202344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x202348: 0xc080944  jal         func_202510
    ctx->pc = 0x202348u;
    SET_GPR_U32(ctx, 31, 0x202350u);
    ctx->pc = 0x20234Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202348u;
            // 0x20234c: 0xae0001ac  sw          $zero, 0x1AC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x202510u;
    if (runtime->hasFunction(0x202510u)) {
        auto targetFn = runtime->lookupFunction(0x202510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202350u; }
        if (ctx->pc != 0x202350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00202510_0x202510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202350u; }
        if (ctx->pc != 0x202350u) { return; }
    }
    ctx->pc = 0x202350u;
    // 0x202350: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x202350u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x202354: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x202354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x202358: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x202358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x20235c: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x20235cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x202360: 0x34630303  ori         $v1, $v1, 0x303
    ctx->pc = 0x202360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)771);
    // 0x202364: 0x244225a8  addiu       $v0, $v0, 0x25A8
    ctx->pc = 0x202364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9640));
    // 0x202368: 0x8c84bcf8  lw          $a0, -0x4308($a0)
    ctx->pc = 0x202368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294950136)));
    // 0x20236c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x20236cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202370: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x202370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x202374: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x202374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x202378: 0xafa60014  sw          $a2, 0x14($sp)
    ctx->pc = 0x202378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 6));
    // 0x20237c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x20237cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x202380: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x202380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x202384: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x202384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x202388: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x202388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x20238c: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x20238cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x202390: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x202390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x202394: 0xc047b36  jal         func_11ECD8
    ctx->pc = 0x202394u;
    SET_GPR_U32(ctx, 31, 0x20239Cu);
    ctx->pc = 0x202398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202394u;
            // 0x202398: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11ECD8u;
    if (runtime->hasFunction(0x11ECD8u)) {
        auto targetFn = runtime->lookupFunction(0x11ECD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20239Cu; }
        if (ctx->pc != 0x20239Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11ecd8_0x11ed88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20239Cu; }
        if (ctx->pc != 0x20239Cu) { return; }
    }
    ctx->pc = 0x20239Cu;
    // 0x20239c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x20239cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2023a0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2023a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2023a4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2023a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2023a8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2023a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2023ac: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2023acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2023b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2023b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2023b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2023B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2023B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2023B4u;
            // 0x2023b8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2022F0u: goto label_2022f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2023BCu;
    // 0x2023bc: 0x0  nop
    ctx->pc = 0x2023bcu;
    // NOP
}
