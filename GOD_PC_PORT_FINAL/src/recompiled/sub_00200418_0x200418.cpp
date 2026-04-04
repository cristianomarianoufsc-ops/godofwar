#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00200418
// Address: 0x200418 - 0x200530
void sub_00200418_0x200418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200418_0x200418");
#endif

    ctx->pc = 0x200418u;

    // 0x200418: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x200418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x20041c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x20041cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x200420: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x200420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x200424: 0x24429620  addiu       $v0, $v0, -0x69E0
    ctx->pc = 0x200424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940192));
    // 0x200428: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x200428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x20042c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20042cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200430: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x200430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x200434: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x200434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200438: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x200438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x20043c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x20043cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x200440: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x200440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x200444: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x200444u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200448: 0xae220074  sw          $v0, 0x74($s1)
    ctx->pc = 0x200448u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
    // 0x20044c: 0x0  nop
    ctx->pc = 0x20044cu;
    // NOP
label_200450:
    // 0x200450: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x200450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200454: 0xc091056  jal         func_244158
    ctx->pc = 0x200454u;
    SET_GPR_U32(ctx, 31, 0x20045Cu);
    ctx->pc = 0x200458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200454u;
            // 0x200458: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x244158u;
    if (runtime->hasFunction(0x244158u)) {
        auto targetFn = runtime->lookupFunction(0x244158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20045Cu; }
        if (ctx->pc != 0x20045Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_244158_0x244178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20045Cu; }
        if (ctx->pc != 0x20045Cu) { return; }
    }
    ctx->pc = 0x20045Cu;
    // 0x20045c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20045cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x200460: 0x1642fffb  bne         $s2, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x200460u;
    {
        const bool branch_taken_0x200460 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x200464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200460u;
            // 0x200464: 0x26100034  addiu       $s0, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200460) {
            ctx->pc = 0x200450u;
            runtime->cooperativeGuestYield();
            goto label_200450;
        }
    }
    ctx->pc = 0x200468u;
    // 0x200468: 0xae33006c  sw          $s3, 0x6C($s1)
    ctx->pc = 0x200468u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 19));
    // 0x20046c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20046cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200470: 0xae320068  sw          $s2, 0x68($s1)
    ctx->pc = 0x200470u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 18));
    // 0x200474: 0xae200070  sw          $zero, 0x70($s1)
    ctx->pc = 0x200474u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 0));
    // 0x200478: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x200478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x20047c: 0x0  nop
    ctx->pc = 0x20047cu;
    // NOP
label_200480:
    // 0x200480: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x200480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x200484: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x200484u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x200488: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x200488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20048c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20048cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x200490: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x200490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x200494: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x200494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200498: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x200498u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x20049c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x20049cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2004a0: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x2004a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x2004a4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2004a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2004a8: 0xc08066e  jal         func_2019B8
    ctx->pc = 0x2004A8u;
    SET_GPR_U32(ctx, 31, 0x2004B0u);
    ctx->pc = 0x2004ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2004A8u;
            // 0x2004ac: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2019B8u;
    if (runtime->hasFunction(0x2019B8u)) {
        auto targetFn = runtime->lookupFunction(0x2019B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2004B0u; }
        if (ctx->pc != 0x2004B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2019b8_0x2019d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2004B0u; }
        if (ctx->pc != 0x2004B0u) { return; }
    }
    ctx->pc = 0x2004B0u;
    // 0x2004b0: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x2004b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2004b4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2004B4u;
    {
        const bool branch_taken_0x2004b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2004B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2004B4u;
            // 0x2004b8: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2004b4) {
            ctx->pc = 0x200480u;
            runtime->cooperativeGuestYield();
            goto label_200480;
        }
    }
    ctx->pc = 0x2004BCu;
    // 0x2004bc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2004bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2004c0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2004c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2004c4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2004c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2004c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2004c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2004cc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2004ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2004d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2004d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2004d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2004D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2004D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2004D4u;
            // 0x2004d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x200450u: goto label_200450;
            case 0x200480u: goto label_200480;
            case 0x200520u: goto label_200520;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2004DCu;
    // 0x2004dc: 0x0  nop
    ctx->pc = 0x2004dcu;
    // NOP
    // 0x2004e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2004e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2004e4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2004e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2004e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2004e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2004ec: 0x24429620  addiu       $v0, $v0, -0x69E0
    ctx->pc = 0x2004ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940192));
    // 0x2004f0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2004f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2004f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2004f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2004f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2004f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2004fc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2004fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200500: 0xc0802f2  jal         func_200BC8
    ctx->pc = 0x200500u;
    SET_GPR_U32(ctx, 31, 0x200508u);
    ctx->pc = 0x200504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200500u;
            // 0x200504: 0xae220074  sw          $v0, 0x74($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200BC8u;
    if (runtime->hasFunction(0x200BC8u)) {
        auto targetFn = runtime->lookupFunction(0x200BC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200508u; }
        if (ctx->pc != 0x200508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00200BC8_0x200bc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200508u; }
        if (ctx->pc != 0x200508u) { return; }
    }
    ctx->pc = 0x200508u;
    // 0x200508: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x200508u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x20050c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20050Cu;
    {
        const bool branch_taken_0x20050c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x200510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20050Cu;
            // 0x200510: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20050c) {
            ctx->pc = 0x200520u;
            goto label_200520;
        }
    }
    ctx->pc = 0x200514u;
    // 0x200514: 0xc07fff8  jal         func_1FFFE0
    ctx->pc = 0x200514u;
    SET_GPR_U32(ctx, 31, 0x20051Cu);
    ctx->pc = 0x200518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200514u;
            // 0x200518: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFFE0u;
    if (runtime->hasFunction(0x1FFFE0u)) {
        auto targetFn = runtime->lookupFunction(0x1FFFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20051Cu; }
        if (ctx->pc != 0x20051Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1fffe0_0x200008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20051Cu; }
        if (ctx->pc != 0x20051Cu) { return; }
    }
    ctx->pc = 0x20051Cu;
    // 0x20051c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x20051cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_200520:
    // 0x200520: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x200520u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200524: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x200524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200528: 0x3e00008  jr          $ra
    ctx->pc = 0x200528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20052Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200528u;
            // 0x20052c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x200450u: goto label_200450;
            case 0x200480u: goto label_200480;
            case 0x200520u: goto label_200520;
            default: break;
        }
        return;
    }
    ctx->pc = 0x200530u;
}
