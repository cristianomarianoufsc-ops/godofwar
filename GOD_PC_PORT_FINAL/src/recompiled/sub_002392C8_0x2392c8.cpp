#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002392C8
// Address: 0x2392c8 - 0x239568
void sub_002392C8_0x2392c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002392C8_0x2392c8");
#endif

    ctx->pc = 0x2392c8u;

    // 0x2392c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2392c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2392cc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2392ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2392d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2392d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2392d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2392d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2392d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2392d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2392dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2392dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2392e0: 0xc08e4a0  jal         func_239280
    ctx->pc = 0x2392E0u;
    SET_GPR_U32(ctx, 31, 0x2392E8u);
    ctx->pc = 0x2392E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2392E0u;
            // 0x2392e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239280u;
    if (runtime->hasFunction(0x239280u)) {
        auto targetFn = runtime->lookupFunction(0x239280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2392E8u; }
        if (ctx->pc != 0x2392E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239280_0x239280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2392E8u; }
        if (ctx->pc != 0x2392E8u) { return; }
    }
    ctx->pc = 0x2392E8u;
    // 0x2392e8: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x2392e8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2392ec: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2392ECu;
    {
        const bool branch_taken_0x2392ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2392F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2392ECu;
            // 0x2392f0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2392ec) {
            ctx->pc = 0x239300u;
            goto label_239300;
        }
    }
    ctx->pc = 0x2392F4u;
    // 0x2392f4: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x2392F4u;
    SET_GPR_U32(ctx, 31, 0x2392FCu);
    ctx->pc = 0x2392F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2392F4u;
            // 0x2392f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2392FCu; }
        if (ctx->pc != 0x2392FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2392FCu; }
        if (ctx->pc != 0x2392FCu) { return; }
    }
    ctx->pc = 0x2392FCu;
    // 0x2392fc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2392fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_239300:
    // 0x239300: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x239300u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239304: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x239304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239308: 0x3e00008  jr          $ra
    ctx->pc = 0x239308u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23930Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239308u;
            // 0x23930c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x239300u: goto label_239300;
            case 0x239350u: goto label_239350;
            case 0x239374u: goto label_239374;
            case 0x2394A8u: goto label_2394a8;
            case 0x2394CCu: goto label_2394cc;
            case 0x239520u: goto label_239520;
            default: break;
        }
        return;
    }
    ctx->pc = 0x239310u;
    // 0x239310: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x239310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x239314: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x239314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x239318: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x239318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x23931c: 0x24420700  addiu       $v0, $v0, 0x700
    ctx->pc = 0x23931cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1792));
    // 0x239320: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x239320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x239324: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x239324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x239328: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x239328u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23932c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23932cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x239330: 0x26300080  addiu       $s0, $s1, 0x80
    ctx->pc = 0x239330u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x239334: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x239334u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x239338: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x239338u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23933c: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x23933cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x239340: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x239340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x239344: 0x1070000b  beq         $v1, $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x239344u;
    {
        const bool branch_taken_0x239344 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x239348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239344u;
            // 0x239348: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239344) {
            ctx->pc = 0x239374u;
            goto label_239374;
        }
    }
    ctx->pc = 0x23934Cu;
    // 0x23934c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x23934cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_239350:
    // 0x239350: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x239350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x239354: 0x8c447910  lw          $a0, 0x7910($v0)
    ctx->pc = 0x239354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
    // 0x239358: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x239358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23935c: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x23935Cu;
    SET_GPR_U32(ctx, 31, 0x239364u);
    ctx->pc = 0x239360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23935Cu;
            // 0x239360: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239364u; }
        if (ctx->pc != 0x239364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239364u; }
        if (ctx->pc != 0x239364u) { return; }
    }
    ctx->pc = 0x239364u;
    // 0x239364: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x239364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x239368: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x239368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23936c: 0x1462fff8  bne         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x23936Cu;
    {
        const bool branch_taken_0x23936c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x239370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23936Cu;
            // 0x239370: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23936c) {
            ctx->pc = 0x239350u;
            runtime->cooperativeGuestYield();
            goto label_239350;
        }
    }
    ctx->pc = 0x239374u;
label_239374:
    // 0x239374: 0xae100004  sw          $s0, 0x4($s0)
    ctx->pc = 0x239374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
    // 0x239378: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x239378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23937c: 0xae100000  sw          $s0, 0x0($s0)
    ctx->pc = 0x23937cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
    // 0x239380: 0xc0962c6  jal         func_258B18
    ctx->pc = 0x239380u;
    SET_GPR_U32(ctx, 31, 0x239388u);
    ctx->pc = 0x239384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239380u;
            // 0x239384: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x258B18u;
    if (runtime->hasFunction(0x258B18u)) {
        auto targetFn = runtime->lookupFunction(0x258B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239388u; }
        if (ctx->pc != 0x239388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00258B18_0x258b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239388u; }
        if (ctx->pc != 0x239388u) { return; }
    }
    ctx->pc = 0x239388u;
    // 0x239388: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x239388u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23938c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x23938cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x239390: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x239390u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x239394: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x239394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239398: 0x3e00008  jr          $ra
    ctx->pc = 0x239398u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23939Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239398u;
            // 0x23939c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x239300u: goto label_239300;
            case 0x239350u: goto label_239350;
            case 0x239374u: goto label_239374;
            case 0x2394A8u: goto label_2394a8;
            case 0x2394CCu: goto label_2394cc;
            case 0x239520u: goto label_239520;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2393A0u;
    // 0x2393a0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2393a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2393a4: 0x0  nop
    ctx->pc = 0x2393a4u;
    // NOP
    // 0x2393a8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2393a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2393ac: 0x0  nop
    ctx->pc = 0x2393acu;
    // NOP
    // 0x2393b0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2393b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2393b4: 0x0  nop
    ctx->pc = 0x2393b4u;
    // NOP
    // 0x2393b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2393b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2393bc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2393bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2393c0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2393c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2393c4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2393c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2393c8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2393c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2393cc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2393ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2393d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2393d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2393d4: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x2393D4u;
    SET_GPR_U32(ctx, 31, 0x2393DCu);
    ctx->pc = 0x2393D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2393D4u;
            // 0x2393d8: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2393DCu; }
        if (ctx->pc != 0x2393DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2393DCu; }
        if (ctx->pc != 0x2393DCu) { return; }
    }
    ctx->pc = 0x2393DCu;
    // 0x2393dc: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x2393dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x2393e0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2393e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2393e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2393e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2393e8: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x2393e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2393ec: 0x2604001c  addiu       $a0, $s0, 0x1C
    ctx->pc = 0x2393ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x2393f0: 0x31402  srl         $v0, $v1, 16
    ctx->pc = 0x2393f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x2393f4: 0x8e28000c  lw          $t0, 0xC($s1)
    ctx->pc = 0x2393f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2393f8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x2393f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x2393fc: 0x8e270010  lw          $a3, 0x10($s1)
    ctx->pc = 0x2393fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x239400: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x239400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x239404: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x239404u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x239408: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x239408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x23940c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x23940cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x239410: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x239410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x239414: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x239414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x239418: 0xae08000c  sw          $t0, 0xC($s0)
    ctx->pc = 0x239418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 8));
    // 0x23941c: 0x26250018  addiu       $a1, $s1, 0x18
    ctx->pc = 0x23941cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x239420: 0xae070010  sw          $a3, 0x10($s0)
    ctx->pc = 0x239420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
    // 0x239424: 0xae060014  sw          $a2, 0x14($s0)
    ctx->pc = 0x239424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 6));
    // 0x239428: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x239428u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x23942c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x23942cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x239430: 0xc0a2644  jal         func_289910
    ctx->pc = 0x239430u;
    SET_GPR_U32(ctx, 31, 0x239438u);
    ctx->pc = 0x239434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239430u;
            // 0x239434: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239438u; }
        if (ctx->pc != 0x239438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239438u; }
        if (ctx->pc != 0x239438u) { return; }
    }
    ctx->pc = 0x239438u;
    // 0x239438: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x239438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23943c: 0xc0a2644  jal         func_289910
    ctx->pc = 0x23943Cu;
    SET_GPR_U32(ctx, 31, 0x239444u);
    ctx->pc = 0x239440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23943Cu;
            // 0x239440: 0x26040034  addiu       $a0, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239444u; }
        if (ctx->pc != 0x239444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239444u; }
        if (ctx->pc != 0x239444u) { return; }
    }
    ctx->pc = 0x239444u;
    // 0x239444: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x239444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x239448: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x239448u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23944c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x23944cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x239450: 0xae03004c  sw          $v1, 0x4C($s0)
    ctx->pc = 0x239450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
    // 0x239454: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x239454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x239458: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x239458u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23945c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23945cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239460: 0x3e00008  jr          $ra
    ctx->pc = 0x239460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239460u;
            // 0x239464: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x239300u: goto label_239300;
            case 0x239350u: goto label_239350;
            case 0x239374u: goto label_239374;
            case 0x2394A8u: goto label_2394a8;
            case 0x2394CCu: goto label_2394cc;
            case 0x239520u: goto label_239520;
            default: break;
        }
        return;
    }
    ctx->pc = 0x239468u;
    // 0x239468: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x239468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23946c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23946cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x239470: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x239470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x239474: 0x24420700  addiu       $v0, $v0, 0x700
    ctx->pc = 0x239474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1792));
    // 0x239478: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x239478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x23947c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23947cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x239480: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x239480u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239484: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x239484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x239488: 0x26300080  addiu       $s0, $s1, 0x80
    ctx->pc = 0x239488u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x23948c: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x23948cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x239490: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x239490u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239494: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x239494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x239498: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x239498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x23949c: 0x1070000b  beq         $v1, $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x23949Cu;
    {
        const bool branch_taken_0x23949c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x2394A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23949Cu;
            // 0x2394a0: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23949c) {
            ctx->pc = 0x2394CCu;
            goto label_2394cc;
        }
    }
    ctx->pc = 0x2394A4u;
    // 0x2394a4: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2394a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2394a8:
    // 0x2394a8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2394a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2394ac: 0x8c447910  lw          $a0, 0x7910($v0)
    ctx->pc = 0x2394acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
    // 0x2394b0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2394b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2394b4: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x2394B4u;
    SET_GPR_U32(ctx, 31, 0x2394BCu);
    ctx->pc = 0x2394B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2394B4u;
            // 0x2394b8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2394BCu; }
        if (ctx->pc != 0x2394BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2394BCu; }
        if (ctx->pc != 0x2394BCu) { return; }
    }
    ctx->pc = 0x2394BCu;
    // 0x2394bc: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2394bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2394c0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2394c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2394c4: 0x1462fff8  bne         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2394C4u;
    {
        const bool branch_taken_0x2394c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2394C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2394C4u;
            // 0x2394c8: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2394c4) {
            ctx->pc = 0x2394A8u;
            runtime->cooperativeGuestYield();
            goto label_2394a8;
        }
    }
    ctx->pc = 0x2394CCu;
label_2394cc:
    // 0x2394cc: 0xae100004  sw          $s0, 0x4($s0)
    ctx->pc = 0x2394ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
    // 0x2394d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2394d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2394d4: 0xae100000  sw          $s0, 0x0($s0)
    ctx->pc = 0x2394d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
    // 0x2394d8: 0xc0962c6  jal         func_258B18
    ctx->pc = 0x2394D8u;
    SET_GPR_U32(ctx, 31, 0x2394E0u);
    ctx->pc = 0x2394DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2394D8u;
            // 0x2394dc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x258B18u;
    if (runtime->hasFunction(0x258B18u)) {
        auto targetFn = runtime->lookupFunction(0x258B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2394E0u; }
        if (ctx->pc != 0x2394E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00258B18_0x258b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2394E0u; }
        if (ctx->pc != 0x2394E0u) { return; }
    }
    ctx->pc = 0x2394E0u;
    // 0x2394e0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2394e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2394e4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2394e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2394e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2394e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2394ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2394ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2394f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2394F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2394F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2394F0u;
            // 0x2394f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x239300u: goto label_239300;
            case 0x239350u: goto label_239350;
            case 0x239374u: goto label_239374;
            case 0x2394A8u: goto label_2394a8;
            case 0x2394CCu: goto label_2394cc;
            case 0x239520u: goto label_239520;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2394F8u;
    // 0x2394f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2394f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2394fc: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2394fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239500: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x239500u;
    {
        const bool branch_taken_0x239500 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x239504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239500u;
            // 0x239504: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239500) {
            ctx->pc = 0x239520u;
            goto label_239520;
        }
    }
    ctx->pc = 0x239508u;
    // 0x239508: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x239508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x23950c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x23950cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x239510: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x239510u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x239514: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x239514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x239518: 0x40f809  jalr        $v0
    ctx->pc = 0x239518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x239520u);
        ctx->pc = 0x23951Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239518u;
            // 0x23951c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x239520u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x239300u: goto label_239300;
            case 0x239350u: goto label_239350;
            case 0x239374u: goto label_239374;
            case 0x2394A8u: goto label_2394a8;
            case 0x2394CCu: goto label_2394cc;
            case 0x239520u: goto label_239520;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x239520u; }
            if (ctx->pc != 0x239520u) { return; }
        }
        }
    }
    ctx->pc = 0x239520u;
label_239520:
    // 0x239520: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x239520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239524: 0x3e00008  jr          $ra
    ctx->pc = 0x239524u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239524u;
            // 0x239528: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x239300u: goto label_239300;
            case 0x239350u: goto label_239350;
            case 0x239374u: goto label_239374;
            case 0x2394A8u: goto label_2394a8;
            case 0x2394CCu: goto label_2394cc;
            case 0x239520u: goto label_239520;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23952Cu;
    // 0x23952c: 0x0  nop
    ctx->pc = 0x23952cu;
    // NOP
    // 0x239530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x239530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x239534: 0x240400a4  addiu       $a0, $zero, 0xA4
    ctx->pc = 0x239534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
    // 0x239538: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x239538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x23953c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23953cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x239540: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x239540u;
    SET_GPR_U32(ctx, 31, 0x239548u);
    ctx->pc = 0x239544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239540u;
            // 0x239544: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239548u; }
        if (ctx->pc != 0x239548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239548u; }
        if (ctx->pc != 0x239548u) { return; }
    }
    ctx->pc = 0x239548u;
    // 0x239548: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x239548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23954c: 0xc04cf16  jal         func_133C58
    ctx->pc = 0x23954Cu;
    SET_GPR_U32(ctx, 31, 0x239554u);
    ctx->pc = 0x239550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23954Cu;
            // 0x239550: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133C58u;
    if (runtime->hasFunction(0x133C58u)) {
        auto targetFn = runtime->lookupFunction(0x133C58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239554u; }
        if (ctx->pc != 0x239554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133C58_0x133c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239554u; }
        if (ctx->pc != 0x239554u) { return; }
    }
    ctx->pc = 0x239554u;
    // 0x239554: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x239554u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239558: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x239558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23955c: 0x3e00008  jr          $ra
    ctx->pc = 0x23955Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23955Cu;
            // 0x239560: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x239300u: goto label_239300;
            case 0x239350u: goto label_239350;
            case 0x239374u: goto label_239374;
            case 0x2394A8u: goto label_2394a8;
            case 0x2394CCu: goto label_2394cc;
            case 0x239520u: goto label_239520;
            default: break;
        }
        return;
    }
    ctx->pc = 0x239564u;
    // 0x239564: 0x0  nop
    ctx->pc = 0x239564u;
    // NOP
}
