#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002803C0
// Address: 0x2803c0 - 0x280980
void sub_002803C0_0x2803c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002803C0_0x2803c0");
#endif

    ctx->pc = 0x2803c0u;

    // 0x2803c0: 0x27bdfcb0  addiu       $sp, $sp, -0x350
    ctx->pc = 0x2803c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966448));
    // 0x2803c4: 0xffb402f0  sd          $s4, 0x2F0($sp)
    ctx->pc = 0x2803c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 752), GPR_U64(ctx, 20));
    // 0x2803c8: 0xffb302e0  sd          $s3, 0x2E0($sp)
    ctx->pc = 0x2803c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 736), GPR_U64(ctx, 19));
    // 0x2803cc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2803ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2803d0: 0xffb002b0  sd          $s0, 0x2B0($sp)
    ctx->pc = 0x2803d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 16));
    // 0x2803d4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2803d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2803d8: 0xffb70320  sd          $s7, 0x320($sp)
    ctx->pc = 0x2803d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 800), GPR_U64(ctx, 23));
    // 0x2803dc: 0x27b00200  addiu       $s0, $sp, 0x200
    ctx->pc = 0x2803dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2803e0: 0xffb202d0  sd          $s2, 0x2D0($sp)
    ctx->pc = 0x2803e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 720), GPR_U64(ctx, 18));
    // 0x2803e4: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x2803e4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2803e8: 0xffbf0340  sd          $ra, 0x340($sp)
    ctx->pc = 0x2803e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 832), GPR_U64(ctx, 31));
    // 0x2803ec: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2803ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2803f0: 0xffbe0330  sd          $fp, 0x330($sp)
    ctx->pc = 0x2803f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 816), GPR_U64(ctx, 30));
    // 0x2803f4: 0xffb60310  sd          $s6, 0x310($sp)
    ctx->pc = 0x2803f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 784), GPR_U64(ctx, 22));
    // 0x2803f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2803f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2803fc: 0xffb50300  sd          $s5, 0x300($sp)
    ctx->pc = 0x2803fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 768), GPR_U64(ctx, 21));
    // 0x280400: 0xc09fb3e  jal         func_27ECF8
    ctx->pc = 0x280400u;
    SET_GPR_U32(ctx, 31, 0x280408u);
    ctx->pc = 0x280404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280400u;
            // 0x280404: 0xffb102c0  sd          $s1, 0x2C0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27ECF8u;
    if (runtime->hasFunction(0x27ECF8u)) {
        auto targetFn = runtime->lookupFunction(0x27ECF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280408u; }
        if (ctx->pc != 0x280408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027ECF8_0x27ecf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280408u; }
        if (ctx->pc != 0x280408u) { return; }
    }
    ctx->pc = 0x280408u;
    // 0x280408: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x280408u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28040c: 0x14600150  bnez        $v1, . + 4 + (0x150 << 2)
    ctx->pc = 0x28040Cu;
    {
        const bool branch_taken_0x28040c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x280410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28040Cu;
            // 0x280410: 0xafa20298  sw          $v0, 0x298($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28040c) {
            ctx->pc = 0x280950u;
            goto label_280950;
        }
    }
    ctx->pc = 0x280414u;
    // 0x280414: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x280414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280418: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x280418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28041c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x28041cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280420: 0x27a70290  addiu       $a3, $sp, 0x290
    ctx->pc = 0x280420u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x280424: 0xc09fc16  jal         func_27F058
    ctx->pc = 0x280424u;
    SET_GPR_U32(ctx, 31, 0x28042Cu);
    ctx->pc = 0x280428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280424u;
            // 0x280428: 0x27a80294  addiu       $t0, $sp, 0x294 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 660));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27F058u;
    if (runtime->hasFunction(0x27F058u)) {
        auto targetFn = runtime->lookupFunction(0x27F058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28042Cu; }
        if (ctx->pc != 0x28042Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027F058_0x27f058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28042Cu; }
        if (ctx->pc != 0x28042Cu) { return; }
    }
    ctx->pc = 0x28042Cu;
    // 0x28042c: 0x3c038101  lui         $v1, 0x8101
    ctx->pc = 0x28042cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33025 << 16));
    // 0x280430: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x280430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280434: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x280434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x280438: 0x14830145  bne         $a0, $v1, . + 4 + (0x145 << 2)
    ctx->pc = 0x280438u;
    {
        const bool branch_taken_0x280438 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x28043Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280438u;
            // 0x28043c: 0xafa20298  sw          $v0, 0x298($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280438) {
            ctx->pc = 0x280950u;
            goto label_280950;
        }
    }
    ctx->pc = 0x280440u;
    // 0x280440: 0x93a20060  lbu         $v0, 0x60($sp)
    ctx->pc = 0x280440u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x280444: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x280444u;
    {
        const bool branch_taken_0x280444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280444u;
            // 0x280448: 0x97a40000  lhu         $a0, 0x0($sp) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280444) {
            ctx->pc = 0x280480u;
            goto label_280480;
        }
    }
    ctx->pc = 0x28044Cu;
    // 0x28044c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x28044cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x280450: 0x3083f000  andi        $v1, $a0, 0xF000
    ctx->pc = 0x280450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
    // 0x280454: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x280454u;
    {
        const bool branch_taken_0x280454 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x280458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280454u;
            // 0x280458: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280454) {
            ctx->pc = 0x280468u;
            goto label_280468;
        }
    }
    ctx->pc = 0x28045Cu;
    // 0x28045c: 0x3402a000  ori         $v0, $zero, 0xA000
    ctx->pc = 0x28045cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x280460: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x280460u;
    {
        const bool branch_taken_0x280460 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x280460) {
            ctx->pc = 0x280480u;
            goto label_280480;
        }
    }
    ctx->pc = 0x280468u;
label_280468:
    // 0x280468: 0x30a30f00  andi        $v1, $a1, 0xF00
    ctx->pc = 0x280468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3840);
    // 0x28046c: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x28046cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x280470: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x280470u;
    {
        const bool branch_taken_0x280470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x280470) {
            ctx->pc = 0x280474u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x280470u;
            // 0x280474: 0x30a20002  andi        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x28048Cu;
            goto label_28048c;
        }
    }
    ctx->pc = 0x280478u;
    // 0x280478: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x280478u;
    {
        const bool branch_taken_0x280478 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x280478) {
            ctx->pc = 0x28047Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x280478u;
            // 0x28047c: 0x30a20002  andi        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x28048Cu;
            goto label_28048c;
        }
    }
    ctx->pc = 0x280480u;
label_280480:
    // 0x280480: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x280480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x280484: 0x10000132  b           . + 4 + (0x132 << 2)
    ctx->pc = 0x280484u;
    {
        const bool branch_taken_0x280484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280484u;
            // 0x280488: 0x34429002  ori         $v0, $v0, 0x9002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36866);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280484) {
            ctx->pc = 0x280950u;
            goto label_280950;
        }
    }
    ctx->pc = 0x28048Cu;
label_28048c:
    // 0x28048c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28048Cu;
    {
        const bool branch_taken_0x28048c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28048c) {
            ctx->pc = 0x280490u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28048Cu;
            // 0x280490: 0x30820020  andi        $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2804A0u;
            goto label_2804a0;
        }
    }
    ctx->pc = 0x280494u;
    // 0x280494: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x280494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x280498: 0x1000012d  b           . + 4 + (0x12D << 2)
    ctx->pc = 0x280498u;
    {
        const bool branch_taken_0x280498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28049Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280498u;
            // 0x28049c: 0x3442000d  ori         $v0, $v0, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280498) {
            ctx->pc = 0x280950u;
            goto label_280950;
        }
    }
    ctx->pc = 0x2804A0u;
label_2804a0:
    // 0x2804a0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2804A0u;
    {
        const bool branch_taken_0x2804a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2804a0) {
            ctx->pc = 0x2804A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2804A0u;
            // 0x2804a4: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2804B4u;
            goto label_2804b4;
        }
    }
    ctx->pc = 0x2804A8u;
    // 0x2804a8: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2804a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2804ac: 0x10000128  b           . + 4 + (0x128 << 2)
    ctx->pc = 0x2804ACu;
    {
        const bool branch_taken_0x2804ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2804B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2804ACu;
            // 0x2804b0: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2804ac) {
            ctx->pc = 0x280950u;
            goto label_280950;
        }
    }
    ctx->pc = 0x2804B4u;
label_2804b4:
    // 0x2804b4: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x2804b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2804b8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2804B8u;
    {
        const bool branch_taken_0x2804b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2804b8) {
            ctx->pc = 0x2804BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2804B8u;
            // 0x2804bc: 0x2571021  addu        $v0, $s2, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2804CCu;
            goto label_2804cc;
        }
    }
    ctx->pc = 0x2804C0u;
    // 0x2804c0: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2804c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2804c4: 0x10000122  b           . + 4 + (0x122 << 2)
    ctx->pc = 0x2804C4u;
    {
        const bool branch_taken_0x2804c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2804C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2804C4u;
            // 0x2804c8: 0x34420016  ori         $v0, $v0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2804c4) {
            ctx->pc = 0x280950u;
            goto label_280950;
        }
    }
    ctx->pc = 0x2804CCu;
label_2804cc:
    // 0x2804cc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2804ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2804d0: 0x244403ff  addiu       $a0, $v0, 0x3FF
    ctx->pc = 0x2804d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
    // 0x2804d4: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2804d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2804d8: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x2804d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2804dc: 0x244207fe  addiu       $v0, $v0, 0x7FE
    ctx->pc = 0x2804dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2046));
    // 0x2804e0: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x2804e0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x2804e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2804e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2804e8: 0xc09f792  jal         func_27DE48
    ctx->pc = 0x2804E8u;
    SET_GPR_U32(ctx, 31, 0x2804F0u);
    ctx->pc = 0x2804ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2804E8u;
            // 0x2804ec: 0x28a83  sra         $s1, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27DE48u;
    if (runtime->hasFunction(0x27DE48u)) {
        auto targetFn = runtime->lookupFunction(0x27DE48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2804F0u; }
        if (ctx->pc != 0x2804F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027DE48_0x27de48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2804F0u; }
        if (ctx->pc != 0x2804F0u) { return; }
    }
    ctx->pc = 0x2804F0u;
    // 0x2804f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2804f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2804f4: 0x6000117  bltz        $s0, . + 4 + (0x117 << 2)
    ctx->pc = 0x2804F4u;
    {
        const bool branch_taken_0x2804f4 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2804F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2804F4u;
            // 0x2804f8: 0xdfbf0340  ld          $ra, 0x340($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 832)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2804f4) {
            ctx->pc = 0x280954u;
            goto label_280954;
        }
    }
    ctx->pc = 0x2804FCu;
    // 0x2804fc: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x2804fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x280500: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x280500u;
    {
        const bool branch_taken_0x280500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280500u;
            // 0x280504: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280500) {
            ctx->pc = 0x28053Cu;
            goto label_28053c;
        }
    }
    ctx->pc = 0x280508u;
    // 0x280508: 0xc09f6fc  jal         func_27DBF0
    ctx->pc = 0x280508u;
    SET_GPR_U32(ctx, 31, 0x280510u);
    ctx->pc = 0x28050Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280508u;
            // 0x28050c: 0x27a50298  addiu       $a1, $sp, 0x298 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27DBF0u;
    if (runtime->hasFunction(0x27DBF0u)) {
        auto targetFn = runtime->lookupFunction(0x27DBF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280510u; }
        if (ctx->pc != 0x280510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027DBF0_0x27dbf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280510u; }
        if (ctx->pc != 0x280510u) { return; }
    }
    ctx->pc = 0x280510u;
    // 0x280510: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x280510u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280514: 0x8fa20298  lw          $v0, 0x298($sp)
    ctx->pc = 0x280514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x280518: 0x1440010e  bnez        $v0, . + 4 + (0x10E << 2)
    ctx->pc = 0x280518u;
    {
        const bool branch_taken_0x280518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28051Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280518u;
            // 0x28051c: 0xdfbf0340  ld          $ra, 0x340($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 832)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280518) {
            ctx->pc = 0x280954u;
            goto label_280954;
        }
    }
    ctx->pc = 0x280520u;
    // 0x280520: 0x2301023  subu        $v0, $s1, $s0
    ctx->pc = 0x280520u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x280524: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x280524u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x280528: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x280528u;
    {
        const bool branch_taken_0x280528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x280528) {
            ctx->pc = 0x28053Cu;
            goto label_28053c;
        }
    }
    ctx->pc = 0x280530u;
    // 0x280530: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x280530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x280534: 0x10000107  b           . + 4 + (0x107 << 2)
    ctx->pc = 0x280534u;
    {
        const bool branch_taken_0x280534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280534u;
            // 0x280538: 0x3442001c  ori         $v0, $v0, 0x1C (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280534) {
            ctx->pc = 0x280954u;
            goto label_280954;
        }
    }
    ctx->pc = 0x28053Cu;
label_28053c:
    // 0x28053c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x28053cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x280540: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x280540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280544: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x280544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x280548: 0x14a20051  bne         $a1, $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x280548u;
    {
        const bool branch_taken_0x280548 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x28054Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280548u;
            // 0x28054c: 0x3c020032  lui         $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280548) {
            ctx->pc = 0x280690u;
            goto label_280690;
        }
    }
    ctx->pc = 0x280550u;
    // 0x280550: 0x27b00298  addiu       $s0, $sp, 0x298
    ctx->pc = 0x280550u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 664));
    // 0x280554: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x280554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280558: 0xc09f6b0  jal         func_27DAC0
    ctx->pc = 0x280558u;
    SET_GPR_U32(ctx, 31, 0x280560u);
    ctx->pc = 0x28055Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280558u;
            // 0x28055c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27DAC0u;
    if (runtime->hasFunction(0x27DAC0u)) {
        auto targetFn = runtime->lookupFunction(0x27DAC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280560u; }
        if (ctx->pc != 0x280560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027DAC0_0x27dac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280560u; }
        if (ctx->pc != 0x280560u) { return; }
    }
    ctx->pc = 0x280560u;
    // 0x280560: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x280560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x280564: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x280564u;
    {
        const bool branch_taken_0x280564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x280568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280564u;
            // 0x280568: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280564) {
            ctx->pc = 0x280574u;
            goto label_280574;
        }
    }
    ctx->pc = 0x28056Cu;
label_28056c:
    // 0x28056c: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x28056Cu;
    {
        const bool branch_taken_0x28056c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28056Cu;
            // 0x280570: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28056c) {
            ctx->pc = 0x280950u;
            goto label_280950;
        }
    }
    ctx->pc = 0x280574u;
label_280574:
    // 0x280574: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x280574u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280578: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x280578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28057c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28057cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280580: 0xc09f664  jal         func_27D990
    ctx->pc = 0x280580u;
    SET_GPR_U32(ctx, 31, 0x280588u);
    ctx->pc = 0x280584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280580u;
            // 0x280584: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D990u;
    if (runtime->hasFunction(0x27D990u)) {
        auto targetFn = runtime->lookupFunction(0x27D990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280588u; }
        if (ctx->pc != 0x280588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_27d990_0x27dac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280588u; }
        if (ctx->pc != 0x280588u) { return; }
    }
    ctx->pc = 0x280588u;
    // 0x280588: 0x8fa20298  lw          $v0, 0x298($sp)
    ctx->pc = 0x280588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x28058c: 0x144000f1  bnez        $v0, . + 4 + (0xF1 << 2)
    ctx->pc = 0x28058Cu;
    {
        const bool branch_taken_0x28058c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28058Cu;
            // 0x280590: 0xdfbf0340  ld          $ra, 0x340($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 832)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28058c) {
            ctx->pc = 0x280954u;
            goto label_280954;
        }
    }
    ctx->pc = 0x280594u;
    // 0x280594: 0xafb10010  sw          $s1, 0x10($sp)
    ctx->pc = 0x280594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 17));
    // 0x280598: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x280598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28059c: 0xc0a0a12  jal         func_282848
    ctx->pc = 0x28059Cu;
    SET_GPR_U32(ctx, 31, 0x2805A4u);
    ctx->pc = 0x2805A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28059Cu;
            // 0x2805a0: 0x27a50280  addiu       $a1, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282848u;
    if (runtime->hasFunction(0x282848u)) {
        auto targetFn = runtime->lookupFunction(0x282848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2805A4u; }
        if (ctx->pc != 0x2805A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_282848_0x282950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2805A4u; }
        if (ctx->pc != 0x2805A4u) { return; }
    }
    ctx->pc = 0x2805A4u;
    // 0x2805a4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2805a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2805a8: 0x76182a  slt         $v1, $v1, $s6
    ctx->pc = 0x2805a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x2805ac: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2805ACu;
    {
        const bool branch_taken_0x2805ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2805ac) {
            ctx->pc = 0x2805B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2805ACu;
            // 0x2805b0: 0xafb60004  sw          $s6, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2805B4u;
            goto label_2805b4;
        }
    }
    ctx->pc = 0x2805B4u;
label_2805b4:
    // 0x2805b4: 0x93a50287  lbu         $a1, 0x287($sp)
    ctx->pc = 0x2805b4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 647)));
    // 0x2805b8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2805b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2805bc: 0x93a70282  lbu         $a3, 0x282($sp)
    ctx->pc = 0x2805bcu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 642)));
    // 0x2805c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2805c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2805c4: 0x93a60281  lbu         $a2, 0x281($sp)
    ctx->pc = 0x2805c4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 641)));
    // 0x2805c8: 0x51102  srl         $v0, $a1, 4
    ctx->pc = 0x2805c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x2805cc: 0x93af0286  lbu         $t7, 0x286($sp)
    ctx->pc = 0x2805ccu;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 646)));
    // 0x2805d0: 0x75902  srl         $t3, $a3, 4
    ctx->pc = 0x2805d0u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 7), 4));
    // 0x2805d4: 0x93ae0285  lbu         $t6, 0x285($sp)
    ctx->pc = 0x2805d4u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 645)));
    // 0x2805d8: 0x64102  srl         $t0, $a2, 4
    ctx->pc = 0x2805d8u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x2805dc: 0x93ac0283  lbu         $t4, 0x283($sp)
    ctx->pc = 0x2805dcu;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 643)));
    // 0x2805e0: 0xf6902  srl         $t5, $t7, 4
    ctx->pc = 0x2805e0u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 15), 4));
    // 0x2805e4: 0xe4902  srl         $t1, $t6, 4
    ctx->pc = 0x2805e4u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 14), 4));
    // 0x2805e8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2805e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2805ec: 0xc5102  srl         $t2, $t4, 4
    ctx->pc = 0x2805ecu;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 12), 4));
    // 0x2805f0: 0x1034018  mult        $t0, $t0, $v1
    ctx->pc = 0x2805f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x2805f4: 0x1635818  mult        $t3, $t3, $v1
    ctx->pc = 0x2805f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x2805f8: 0x30a5000f  andi        $a1, $a1, 0xF
    ctx->pc = 0x2805f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x2805fc: 0x1a36818  mult        $t5, $t5, $v1
    ctx->pc = 0x2805fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x280600: 0x30e7000f  andi        $a3, $a3, 0xF
    ctx->pc = 0x280600u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
    // 0x280604: 0x71234818  mult1       $t1, $t1, $v1
    ctx->pc = 0x280604u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x280608: 0x30c6000f  andi        $a2, $a2, 0xF
    ctx->pc = 0x280608u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x28060c: 0x71435018  mult1       $t2, $t2, $v1
    ctx->pc = 0x28060cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x280610: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x280610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x280614: 0x1675821  addu        $t3, $t3, $a3
    ctx->pc = 0x280614u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x280618: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x280618u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x28061c: 0x31ef000f  andi        $t7, $t7, 0xF
    ctx->pc = 0x28061cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)15);
    // 0x280620: 0x31ce000f  andi        $t6, $t6, 0xF
    ctx->pc = 0x280620u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)15);
    // 0x280624: 0x318c000f  andi        $t4, $t4, 0xF
    ctx->pc = 0x280624u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)15);
    // 0x280628: 0x1af6821  addu        $t5, $t5, $t7
    ctx->pc = 0x280628u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x28062c: 0x12e4821  addu        $t1, $t1, $t6
    ctx->pc = 0x28062cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 14)));
    // 0x280630: 0x14c5021  addu        $t2, $t2, $t4
    ctx->pc = 0x280630u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
    // 0x280634: 0x244207d0  addiu       $v0, $v0, 0x7D0
    ctx->pc = 0x280634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2000));
    // 0x280638: 0x8fa60290  lw          $a2, 0x290($sp)
    ctx->pc = 0x280638u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x28063c: 0x8fa70294  lw          $a3, 0x294($sp)
    ctx->pc = 0x28063cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 660)));
    // 0x280640: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x280640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280644: 0xa7a2001e  sh          $v0, 0x1E($sp)
    ctx->pc = 0x280644u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 30), (uint16_t)GPR_U32(ctx, 2));
    // 0x280648: 0xa3ad001d  sb          $t5, 0x1D($sp)
    ctx->pc = 0x280648u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 29), (uint8_t)GPR_U32(ctx, 13));
    // 0x28064c: 0xa3a9001c  sb          $t1, 0x1C($sp)
    ctx->pc = 0x28064cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 9));
    // 0x280650: 0xa3aa001b  sb          $t2, 0x1B($sp)
    ctx->pc = 0x280650u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 27), (uint8_t)GPR_U32(ctx, 10));
    // 0x280654: 0xa3ab001a  sb          $t3, 0x1A($sp)
    ctx->pc = 0x280654u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 26), (uint8_t)GPR_U32(ctx, 11));
    // 0x280658: 0xc09fd24  jal         func_27F490
    ctx->pc = 0x280658u;
    SET_GPR_U32(ctx, 31, 0x280660u);
    ctx->pc = 0x28065Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280658u;
            // 0x28065c: 0xa3a80019  sb          $t0, 0x19($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 25), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27F490u;
    if (runtime->hasFunction(0x27F490u)) {
        auto targetFn = runtime->lookupFunction(0x27F490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280660u; }
        if (ctx->pc != 0x280660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027F490_0x27f490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280660u; }
        if (ctx->pc != 0x280660u) { return; }
    }
    ctx->pc = 0x280660u;
    // 0x280660: 0x144000bb  bnez        $v0, . + 4 + (0xBB << 2)
    ctx->pc = 0x280660u;
    {
        const bool branch_taken_0x280660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280660u;
            // 0x280664: 0xafa20298  sw          $v0, 0x298($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280660) {
            ctx->pc = 0x280950u;
            goto label_280950;
        }
    }
    ctx->pc = 0x280668u;
    // 0x280668: 0xc09f5ce  jal         func_27D738
    ctx->pc = 0x280668u;
    SET_GPR_U32(ctx, 31, 0x280670u);
    ctx->pc = 0x28066Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280668u;
            // 0x28066c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D738u;
    if (runtime->hasFunction(0x27D738u)) {
        auto targetFn = runtime->lookupFunction(0x27D738u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280670u; }
        if (ctx->pc != 0x280670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027D738_0x27d738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280670u; }
        if (ctx->pc != 0x280670u) { return; }
    }
    ctx->pc = 0x280670u;
    // 0x280670: 0x104000ac  beqz        $v0, . + 4 + (0xAC << 2)
    ctx->pc = 0x280670u;
    {
        const bool branch_taken_0x280670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280670u;
            // 0x280674: 0xafa2029c  sw          $v0, 0x29C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 668), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280670) {
            ctx->pc = 0x280924u;
            goto label_280924;
        }
    }
    ctx->pc = 0x280678u;
    // 0x280678: 0xc0a0618  jal         func_281860
    ctx->pc = 0x280678u;
    SET_GPR_U32(ctx, 31, 0x280680u);
    ctx->pc = 0x28067Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280678u;
            // 0x28067c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281860u;
    if (runtime->hasFunction(0x281860u)) {
        auto targetFn = runtime->lookupFunction(0x281860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280680u; }
        if (ctx->pc != 0x280680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_281860_0x2818d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280680u; }
        if (ctx->pc != 0x280680u) { return; }
    }
    ctx->pc = 0x280680u;
    // 0x280680: 0x104000a8  beqz        $v0, . + 4 + (0xA8 << 2)
    ctx->pc = 0x280680u;
    {
        const bool branch_taken_0x280680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280680u;
            // 0x280684: 0xafa2029c  sw          $v0, 0x29C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 668), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280680) {
            ctx->pc = 0x280924u;
            goto label_280924;
        }
    }
    ctx->pc = 0x280688u;
    // 0x280688: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x280688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28068c: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x28068cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
label_280690:
    // 0x280690: 0xafb702a0  sw          $s7, 0x2A0($sp)
    ctx->pc = 0x280690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 23));
    // 0x280694: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x280694u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280698: 0x245edb00  addiu       $fp, $v0, -0x2500
    ctx->pc = 0x280698u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957824));
    // 0x28069c: 0x260a82d  daddu       $s5, $s3, $zero
    ctx->pc = 0x28069cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2806a0: 0x240b02d  daddu       $s6, $s2, $zero
    ctx->pc = 0x2806a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2806a4: 0x0  nop
    ctx->pc = 0x2806a4u;
    // NOP
label_2806a8:
    // 0x2806a8: 0x2a420400  slti        $v0, $s2, 0x400
    ctx->pc = 0x2806a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x2806ac: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2806ACu;
    {
        const bool branch_taken_0x2806ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2806B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2806ACu;
            // 0x2806b0: 0x220982d  daddu       $s3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2806ac) {
            ctx->pc = 0x280790u;
            goto label_280790;
        }
    }
    ctx->pc = 0x2806B4u;
    // 0x2806b4: 0x1e400008  bgtz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2806B4u;
    {
        const bool branch_taken_0x2806b4 = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x2806B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2806B4u;
            // 0x2806b8: 0x3c020032  lui         $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2806b4) {
            ctx->pc = 0x2806D8u;
            goto label_2806d8;
        }
    }
    ctx->pc = 0x2806BCu;
    // 0x2806bc: 0x2571021  addu        $v0, $s2, $s7
    ctx->pc = 0x2806bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
    // 0x2806c0: 0x28420400  slti        $v0, $v0, 0x400
    ctx->pc = 0x2806c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x2806c4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2806C4u;
    {
        const bool branch_taken_0x2806c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2806C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2806C4u;
            // 0x2806c8: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2806c4) {
            ctx->pc = 0x2806F4u;
            goto label_2806f4;
        }
    }
    ctx->pc = 0x2806CCu;
    // 0x2806cc: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x2806ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2806d0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2806D0u;
    {
        const bool branch_taken_0x2806d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2806D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2806D0u;
            // 0x2806d4: 0x3c020032  lui         $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2806d0) {
            ctx->pc = 0x2806F4u;
            goto label_2806f4;
        }
    }
    ctx->pc = 0x2806D8u;
label_2806d8:
    // 0x2806d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2806d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2806dc: 0x2445db00  addiu       $a1, $v0, -0x2500
    ctx->pc = 0x2806dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957824));
    // 0x2806e0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2806e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2806e4: 0xc0a076a  jal         func_281DA8
    ctx->pc = 0x2806E4u;
    SET_GPR_U32(ctx, 31, 0x2806ECu);
    ctx->pc = 0x2806E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2806E4u;
            // 0x2806e8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281DA8u;
    if (runtime->hasFunction(0x281DA8u)) {
        auto targetFn = runtime->lookupFunction(0x281DA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2806ECu; }
        if (ctx->pc != 0x2806ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281DA8_0x281da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2806ECu; }
        if (ctx->pc != 0x2806ECu) { return; }
    }
    ctx->pc = 0x2806ECu;
    // 0x2806ec: 0x1040008d  beqz        $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x2806ECu;
    {
        const bool branch_taken_0x2806ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2806F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2806ECu;
            // 0x2806f0: 0xafa2029c  sw          $v0, 0x29C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 668), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2806ec) {
            ctx->pc = 0x280924u;
            goto label_280924;
        }
    }
    ctx->pc = 0x2806F4u;
label_2806f4:
    // 0x2806f4: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x2806f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2806f8: 0x523023  subu        $a2, $v0, $s2
    ctx->pc = 0x2806f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2806fc: 0xd7182a  slt         $v1, $a2, $s7
    ctx->pc = 0x2806fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x280700: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x280700u;
    {
        const bool branch_taken_0x280700 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x280704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280700u;
            // 0x280704: 0x25e2021  addu        $a0, $s2, $fp (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280700) {
            ctx->pc = 0x28074Cu;
            goto label_28074c;
        }
    }
    ctx->pc = 0x280708u;
    // 0x280708: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x280708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28070c: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x28070Cu;
    SET_GPR_U32(ctx, 31, 0x280714u);
    ctx->pc = 0x280710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28070Cu;
            // 0x280710: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280714u; }
        if (ctx->pc != 0x280714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280714u; }
        if (ctx->pc != 0x280714u) { return; }
    }
    ctx->pc = 0x280714u;
    // 0x280714: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x280714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280718: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x280718u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28071c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28071cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280720: 0xc0a0772  jal         func_281DC8
    ctx->pc = 0x280720u;
    SET_GPR_U32(ctx, 31, 0x280728u);
    ctx->pc = 0x280724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280720u;
            // 0x280724: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281DC8u;
    if (runtime->hasFunction(0x281DC8u)) {
        auto targetFn = runtime->lookupFunction(0x281DC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280728u; }
        if (ctx->pc != 0x280728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281DC8_0x281dc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280728u; }
        if (ctx->pc != 0x280728u) { return; }
    }
    ctx->pc = 0x280728u;
    // 0x280728: 0x1040007e  beqz        $v0, . + 4 + (0x7E << 2)
    ctx->pc = 0x280728u;
    {
        const bool branch_taken_0x280728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28072Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280728u;
            // 0x28072c: 0xafa2029c  sw          $v0, 0x29C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 668), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280728) {
            ctx->pc = 0x280924u;
            goto label_280924;
        }
    }
    ctx->pc = 0x280730u;
    // 0x280730: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x280730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280734: 0xc09f5ce  jal         func_27D738
    ctx->pc = 0x280734u;
    SET_GPR_U32(ctx, 31, 0x28073Cu);
    ctx->pc = 0x280738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280734u;
            // 0x280738: 0x2d7b021  addu        $s6, $s6, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D738u;
    if (runtime->hasFunction(0x27D738u)) {
        auto targetFn = runtime->lookupFunction(0x27D738u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28073Cu; }
        if (ctx->pc != 0x28073Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027D738_0x27d738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28073Cu; }
        if (ctx->pc != 0x28073Cu) { return; }
    }
    ctx->pc = 0x28073Cu;
    // 0x28073c: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x28073Cu;
    {
        const bool branch_taken_0x28073c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28073Cu;
            // 0x280740: 0xafa2029c  sw          $v0, 0x29C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 668), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28073c) {
            ctx->pc = 0x280830u;
            goto label_280830;
        }
    }
    ctx->pc = 0x280744u;
    // 0x280744: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x280744u;
    {
        const bool branch_taken_0x280744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x280744) {
            ctx->pc = 0x280924u;
            goto label_280924;
        }
    }
    ctx->pc = 0x28074Cu;
label_28074c:
    // 0x28074c: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x28074Cu;
    SET_GPR_U32(ctx, 31, 0x280754u);
    ctx->pc = 0x280750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28074Cu;
            // 0x280750: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280754u; }
        if (ctx->pc != 0x280754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280754u; }
        if (ctx->pc != 0x280754u) { return; }
    }
    ctx->pc = 0x280754u;
    // 0x280754: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x280754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280758: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x280758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28075c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x28075cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280760: 0xc0a0772  jal         func_281DC8
    ctx->pc = 0x280760u;
    SET_GPR_U32(ctx, 31, 0x280768u);
    ctx->pc = 0x280764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280760u;
            // 0x280764: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281DC8u;
    if (runtime->hasFunction(0x281DC8u)) {
        auto targetFn = runtime->lookupFunction(0x281DC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280768u; }
        if (ctx->pc != 0x280768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281DC8_0x281dc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280768u; }
        if (ctx->pc != 0x280768u) { return; }
    }
    ctx->pc = 0x280768u;
    // 0x280768: 0x1040006e  beqz        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x280768u;
    {
        const bool branch_taken_0x280768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28076Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280768u;
            // 0x28076c: 0xafa2029c  sw          $v0, 0x29C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 668), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280768) {
            ctx->pc = 0x280924u;
            goto label_280924;
        }
    }
    ctx->pc = 0x280770u;
    // 0x280770: 0x26c20400  addiu       $v0, $s6, 0x400
    ctx->pc = 0x280770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1024));
    // 0x280774: 0x26a40400  addiu       $a0, $s5, 0x400
    ctx->pc = 0x280774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1024));
    // 0x280778: 0x26e3fc00  addiu       $v1, $s7, -0x400
    ctx->pc = 0x280778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294966272));
    // 0x28077c: 0x52b023  subu        $s6, $v0, $s2
    ctx->pc = 0x28077cu;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x280780: 0x72b821  addu        $s7, $v1, $s2
    ctx->pc = 0x280780u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x280784: 0x92a823  subu        $s5, $a0, $s2
    ctx->pc = 0x280784u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x280788: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x280788u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28078c: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x28078cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_280790:
    // 0x280790: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x280790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280794: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x280794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280798: 0xc09f638  jal         func_27D8E0
    ctx->pc = 0x280798u;
    SET_GPR_U32(ctx, 31, 0x2807A0u);
    ctx->pc = 0x28079Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280798u;
            // 0x28079c: 0x27a6029c  addiu       $a2, $sp, 0x29C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 668));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D8E0u;
    if (runtime->hasFunction(0x27D8E0u)) {
        auto targetFn = runtime->lookupFunction(0x27D8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2807A0u; }
        if (ctx->pc != 0x2807A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027D8E0_0x27d8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2807A0u; }
        if (ctx->pc != 0x2807A0u) { return; }
    }
    ctx->pc = 0x2807A0u;
    // 0x2807a0: 0x8fa3029c  lw          $v1, 0x29C($sp)
    ctx->pc = 0x2807a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 668)));
    // 0x2807a4: 0x1460ff71  bnez        $v1, . + 4 + (-0x8F << 2)
    ctx->pc = 0x2807A4u;
    {
        const bool branch_taken_0x2807a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2807A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2807A4u;
            // 0x2807a8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2807a4) {
            ctx->pc = 0x28056Cu;
            runtime->cooperativeGuestYield();
            goto label_28056c;
        }
    }
    ctx->pc = 0x2807ACu;
    // 0x2807ac: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2807acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2807b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2807b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2807b4: 0x16220019  bne         $s1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2807B4u;
    {
        const bool branch_taken_0x2807b4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2807B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2807B4u;
            // 0x2807b8: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2807b4) {
            ctx->pc = 0x28081Cu;
            goto label_28081c;
        }
    }
    ctx->pc = 0x2807BCu;
    // 0x2807bc: 0x27b00298  addiu       $s0, $sp, 0x298
    ctx->pc = 0x2807bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 664));
    // 0x2807c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2807c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2807c4: 0xc09f6b0  jal         func_27DAC0
    ctx->pc = 0x2807C4u;
    SET_GPR_U32(ctx, 31, 0x2807CCu);
    ctx->pc = 0x2807C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2807C4u;
            // 0x2807c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27DAC0u;
    if (runtime->hasFunction(0x27DAC0u)) {
        auto targetFn = runtime->lookupFunction(0x27DAC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2807CCu; }
        if (ctx->pc != 0x2807CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027DAC0_0x27dac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2807CCu; }
        if (ctx->pc != 0x2807CCu) { return; }
    }
    ctx->pc = 0x2807CCu;
    // 0x2807cc: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x2807ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x2807d0: 0x1460ff66  bnez        $v1, . + 4 + (-0x9A << 2)
    ctx->pc = 0x2807D0u;
    {
        const bool branch_taken_0x2807d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2807D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2807D0u;
            // 0x2807d4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2807d0) {
            ctx->pc = 0x28056Cu;
            runtime->cooperativeGuestYield();
            goto label_28056c;
        }
    }
    ctx->pc = 0x2807D8u;
    // 0x2807d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2807d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2807dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2807dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2807e0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2807e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2807e4: 0xc09f664  jal         func_27D990
    ctx->pc = 0x2807E4u;
    SET_GPR_U32(ctx, 31, 0x2807ECu);
    ctx->pc = 0x2807E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2807E4u;
            // 0x2807e8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D990u;
    if (runtime->hasFunction(0x27D990u)) {
        auto targetFn = runtime->lookupFunction(0x27D990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2807ECu; }
        if (ctx->pc != 0x2807ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_27d990_0x27dac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2807ECu; }
        if (ctx->pc != 0x2807ECu) { return; }
    }
    ctx->pc = 0x2807ECu;
    // 0x2807ec: 0x8fa20298  lw          $v0, 0x298($sp)
    ctx->pc = 0x2807ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x2807f0: 0x14400057  bnez        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x2807F0u;
    {
        const bool branch_taken_0x2807f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2807F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2807F0u;
            // 0x2807f4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2807f0) {
            ctx->pc = 0x280950u;
            goto label_280950;
        }
    }
    ctx->pc = 0x2807F8u;
    // 0x2807f8: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x2807f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x2807fc: 0x2263025  or          $a2, $s1, $a2
    ctx->pc = 0x2807fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) | GPR_U64(ctx, 6));
    // 0x280800: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x280800u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280804: 0xc09f664  jal         func_27D990
    ctx->pc = 0x280804u;
    SET_GPR_U32(ctx, 31, 0x28080Cu);
    ctx->pc = 0x280808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280804u;
            // 0x280808: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D990u;
    if (runtime->hasFunction(0x27D990u)) {
        auto targetFn = runtime->lookupFunction(0x27D990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28080Cu; }
        if (ctx->pc != 0x28080Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_27d990_0x27dac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28080Cu; }
        if (ctx->pc != 0x28080Cu) { return; }
    }
    ctx->pc = 0x28080Cu;
    // 0x28080c: 0x8fa20298  lw          $v0, 0x298($sp)
    ctx->pc = 0x28080cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x280810: 0x14400050  bnez        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x280810u;
    {
        const bool branch_taken_0x280810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280810u;
            // 0x280814: 0xdfbf0340  ld          $ra, 0x340($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 832)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280810) {
            ctx->pc = 0x280954u;
            goto label_280954;
        }
    }
    ctx->pc = 0x280818u;
    // 0x280818: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x280818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_28081c:
    // 0x28081c: 0x2643fc00  addiu       $v1, $s2, -0x400
    ctx->pc = 0x28081cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966272));
    // 0x280820: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x280820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x280824: 0x72900b  movn        $s2, $v1, $s2
    ctx->pc = 0x280824u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
    // 0x280828: 0x1000ff9f  b           . + 4 + (-0x61 << 2)
    ctx->pc = 0x280828u;
    {
        const bool branch_taken_0x280828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28082Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280828u;
            // 0x28082c: 0x2228824  and         $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280828) {
            ctx->pc = 0x2806A8u;
            runtime->cooperativeGuestYield();
            goto label_2806a8;
        }
    }
    ctx->pc = 0x280830u;
label_280830:
    // 0x280830: 0xc0a0618  jal         func_281860
    ctx->pc = 0x280830u;
    SET_GPR_U32(ctx, 31, 0x280838u);
    ctx->pc = 0x280834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280830u;
            // 0x280834: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281860u;
    if (runtime->hasFunction(0x281860u)) {
        auto targetFn = runtime->lookupFunction(0x281860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280838u; }
        if (ctx->pc != 0x280838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_281860_0x2818d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280838u; }
        if (ctx->pc != 0x280838u) { return; }
    }
    ctx->pc = 0x280838u;
    // 0x280838: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x280838u;
    {
        const bool branch_taken_0x280838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28083Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280838u;
            // 0x28083c: 0xafa2029c  sw          $v0, 0x29C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 668), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280838) {
            ctx->pc = 0x280924u;
            goto label_280924;
        }
    }
    ctx->pc = 0x280840u;
    // 0x280840: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x280840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280844: 0xc0a0a12  jal         func_282848
    ctx->pc = 0x280844u;
    SET_GPR_U32(ctx, 31, 0x28084Cu);
    ctx->pc = 0x280848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280844u;
            // 0x280848: 0x27a50280  addiu       $a1, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282848u;
    if (runtime->hasFunction(0x282848u)) {
        auto targetFn = runtime->lookupFunction(0x282848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28084Cu; }
        if (ctx->pc != 0x28084Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_282848_0x282950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28084Cu; }
        if (ctx->pc != 0x28084Cu) { return; }
    }
    ctx->pc = 0x28084Cu;
    // 0x28084c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x28084cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x280850: 0x76182a  slt         $v1, $v1, $s6
    ctx->pc = 0x280850u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x280854: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x280854u;
    {
        const bool branch_taken_0x280854 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x280854) {
            ctx->pc = 0x280858u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x280854u;
            // 0x280858: 0xafb60004  sw          $s6, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28085Cu;
            goto label_28085c;
        }
    }
    ctx->pc = 0x28085Cu;
label_28085c:
    // 0x28085c: 0x93a50287  lbu         $a1, 0x287($sp)
    ctx->pc = 0x28085cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 647)));
    // 0x280860: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x280860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x280864: 0x93a70282  lbu         $a3, 0x282($sp)
    ctx->pc = 0x280864u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 642)));
    // 0x280868: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x280868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28086c: 0x93a60281  lbu         $a2, 0x281($sp)
    ctx->pc = 0x28086cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 641)));
    // 0x280870: 0x51102  srl         $v0, $a1, 4
    ctx->pc = 0x280870u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x280874: 0x93b00286  lbu         $s0, 0x286($sp)
    ctx->pc = 0x280874u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 646)));
    // 0x280878: 0x77102  srl         $t6, $a3, 4
    ctx->pc = 0x280878u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 7), 4));
    // 0x28087c: 0x93ab0285  lbu         $t3, 0x285($sp)
    ctx->pc = 0x28087cu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 645)));
    // 0x280880: 0x64902  srl         $t1, $a2, 4
    ctx->pc = 0x280880u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x280884: 0x93aa0283  lbu         $t2, 0x283($sp)
    ctx->pc = 0x280884u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 643)));
    // 0x280888: 0x107902  srl         $t7, $s0, 4
    ctx->pc = 0x280888u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 16), 4));
    // 0x28088c: 0xb6102  srl         $t4, $t3, 4
    ctx->pc = 0x28088cu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 11), 4));
    // 0x280890: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x280890u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x280894: 0xa6902  srl         $t5, $t2, 4
    ctx->pc = 0x280894u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 10), 4));
    // 0x280898: 0x1234818  mult        $t1, $t1, $v1
    ctx->pc = 0x280898u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x28089c: 0x1c37018  mult        $t6, $t6, $v1
    ctx->pc = 0x28089cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x2808a0: 0x30a5000f  andi        $a1, $a1, 0xF
    ctx->pc = 0x2808a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x2808a4: 0x1e37818  mult        $t7, $t7, $v1
    ctx->pc = 0x2808a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x2808a8: 0x97a80000  lhu         $t0, 0x0($sp)
    ctx->pc = 0x2808a8u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2808ac: 0x71836018  mult1       $t4, $t4, $v1
    ctx->pc = 0x2808acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x2808b0: 0x30e7000f  andi        $a3, $a3, 0xF
    ctx->pc = 0x2808b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
    // 0x2808b4: 0x71a36818  mult1       $t5, $t5, $v1
    ctx->pc = 0x2808b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x2808b8: 0x30c6000f  andi        $a2, $a2, 0xF
    ctx->pc = 0x2808b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x2808bc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2808bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2808c0: 0x1c77021  addu        $t6, $t6, $a3
    ctx->pc = 0x2808c0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 7)));
    // 0x2808c4: 0x1264821  addu        $t1, $t1, $a2
    ctx->pc = 0x2808c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x2808c8: 0x3210000f  andi        $s0, $s0, 0xF
    ctx->pc = 0x2808c8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x2808cc: 0x316b000f  andi        $t3, $t3, 0xF
    ctx->pc = 0x2808ccu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)15);
    // 0x2808d0: 0x314a000f  andi        $t2, $t2, 0xF
    ctx->pc = 0x2808d0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)15);
    // 0x2808d4: 0x1f07821  addu        $t7, $t7, $s0
    ctx->pc = 0x2808d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
    // 0x2808d8: 0x18b6021  addu        $t4, $t4, $t3
    ctx->pc = 0x2808d8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x2808dc: 0x1aa6821  addu        $t5, $t5, $t2
    ctx->pc = 0x2808dcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 10)));
    // 0x2808e0: 0x35080080  ori         $t0, $t0, 0x80
    ctx->pc = 0x2808e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)128);
    // 0x2808e4: 0x244207d0  addiu       $v0, $v0, 0x7D0
    ctx->pc = 0x2808e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2000));
    // 0x2808e8: 0x8fa60290  lw          $a2, 0x290($sp)
    ctx->pc = 0x2808e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x2808ec: 0x8fa70294  lw          $a3, 0x294($sp)
    ctx->pc = 0x2808ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 660)));
    // 0x2808f0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2808f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2808f4: 0xa7a80000  sh          $t0, 0x0($sp)
    ctx->pc = 0x2808f4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x2808f8: 0xa7a2001e  sh          $v0, 0x1E($sp)
    ctx->pc = 0x2808f8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 30), (uint16_t)GPR_U32(ctx, 2));
    // 0x2808fc: 0xa3af001d  sb          $t7, 0x1D($sp)
    ctx->pc = 0x2808fcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 29), (uint8_t)GPR_U32(ctx, 15));
    // 0x280900: 0xa3ac001c  sb          $t4, 0x1C($sp)
    ctx->pc = 0x280900u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 12));
    // 0x280904: 0xa3ad001b  sb          $t5, 0x1B($sp)
    ctx->pc = 0x280904u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 27), (uint8_t)GPR_U32(ctx, 13));
    // 0x280908: 0xa3ae001a  sb          $t6, 0x1A($sp)
    ctx->pc = 0x280908u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 26), (uint8_t)GPR_U32(ctx, 14));
    // 0x28090c: 0xc09fd24  jal         func_27F490
    ctx->pc = 0x28090Cu;
    SET_GPR_U32(ctx, 31, 0x280914u);
    ctx->pc = 0x280910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28090Cu;
            // 0x280910: 0xa3a90019  sb          $t1, 0x19($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 25), (uint8_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27F490u;
    if (runtime->hasFunction(0x27F490u)) {
        auto targetFn = runtime->lookupFunction(0x27F490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280914u; }
        if (ctx->pc != 0x280914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027F490_0x27f490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280914u; }
        if (ctx->pc != 0x280914u) { return; }
    }
    ctx->pc = 0x280914u;
    // 0x280914: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x280914u;
    {
        const bool branch_taken_0x280914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280914u;
            // 0x280918: 0xafa20298  sw          $v0, 0x298($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280914) {
            ctx->pc = 0x280930u;
            goto label_280930;
        }
    }
    ctx->pc = 0x28091Cu;
    // 0x28091c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x28091Cu;
    {
        const bool branch_taken_0x28091c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28091Cu;
            // 0x280920: 0xdfbf0340  ld          $ra, 0x340($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 832)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28091c) {
            ctx->pc = 0x280954u;
            goto label_280954;
        }
    }
    ctx->pc = 0x280924u;
label_280924:
    // 0x280924: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x280924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x280928: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x280928u;
    {
        const bool branch_taken_0x280928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28092Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280928u;
            // 0x28092c: 0x3442006f  ori         $v0, $v0, 0x6F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)111);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280928) {
            ctx->pc = 0x280950u;
            goto label_280950;
        }
    }
    ctx->pc = 0x280930u;
label_280930:
    // 0x280930: 0xc0a0618  jal         func_281860
    ctx->pc = 0x280930u;
    SET_GPR_U32(ctx, 31, 0x280938u);
    ctx->pc = 0x280934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280930u;
            // 0x280934: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281860u;
    if (runtime->hasFunction(0x281860u)) {
        auto targetFn = runtime->lookupFunction(0x281860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280938u; }
        if (ctx->pc != 0x280938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_281860_0x2818d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280938u; }
        if (ctx->pc != 0x280938u) { return; }
    }
    ctx->pc = 0x280938u;
    // 0x280938: 0x3c038101  lui         $v1, 0x8101
    ctx->pc = 0x280938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33025 << 16));
    // 0x28093c: 0x8fa402a0  lw          $a0, 0x2A0($sp)
    ctx->pc = 0x28093cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x280940: 0x3463006f  ori         $v1, $v1, 0x6F
    ctx->pc = 0x280940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)111);
    // 0x280944: 0xafa2029c  sw          $v0, 0x29C($sp)
    ctx->pc = 0x280944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 668), GPR_U32(ctx, 2));
    // 0x280948: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x280948u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x28094c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x28094cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_280950:
    // 0x280950: 0xdfbf0340  ld          $ra, 0x340($sp)
    ctx->pc = 0x280950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 832)));
label_280954:
    // 0x280954: 0xdfbe0330  ld          $fp, 0x330($sp)
    ctx->pc = 0x280954u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x280958: 0xdfb70320  ld          $s7, 0x320($sp)
    ctx->pc = 0x280958u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x28095c: 0xdfb60310  ld          $s6, 0x310($sp)
    ctx->pc = 0x28095cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x280960: 0xdfb50300  ld          $s5, 0x300($sp)
    ctx->pc = 0x280960u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x280964: 0xdfb402f0  ld          $s4, 0x2F0($sp)
    ctx->pc = 0x280964u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x280968: 0xdfb302e0  ld          $s3, 0x2E0($sp)
    ctx->pc = 0x280968u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x28096c: 0xdfb202d0  ld          $s2, 0x2D0($sp)
    ctx->pc = 0x28096cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x280970: 0xdfb102c0  ld          $s1, 0x2C0($sp)
    ctx->pc = 0x280970u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x280974: 0xdfb002b0  ld          $s0, 0x2B0($sp)
    ctx->pc = 0x280974u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x280978: 0x3e00008  jr          $ra
    ctx->pc = 0x280978u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28097Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280978u;
            // 0x28097c: 0x27bd0350  addiu       $sp, $sp, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x280468u: goto label_280468;
            case 0x280480u: goto label_280480;
            case 0x28048Cu: goto label_28048c;
            case 0x2804A0u: goto label_2804a0;
            case 0x2804B4u: goto label_2804b4;
            case 0x2804CCu: goto label_2804cc;
            case 0x28053Cu: goto label_28053c;
            case 0x28056Cu: goto label_28056c;
            case 0x280574u: goto label_280574;
            case 0x2805B4u: goto label_2805b4;
            case 0x280690u: goto label_280690;
            case 0x2806A8u: goto label_2806a8;
            case 0x2806D8u: goto label_2806d8;
            case 0x2806F4u: goto label_2806f4;
            case 0x28074Cu: goto label_28074c;
            case 0x280790u: goto label_280790;
            case 0x28081Cu: goto label_28081c;
            case 0x280830u: goto label_280830;
            case 0x28085Cu: goto label_28085c;
            case 0x280924u: goto label_280924;
            case 0x280930u: goto label_280930;
            case 0x280950u: goto label_280950;
            case 0x280954u: goto label_280954;
            default: break;
        }
        return;
    }
    ctx->pc = 0x280980u;
}
