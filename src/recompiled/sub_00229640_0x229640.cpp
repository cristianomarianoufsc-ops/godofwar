#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00229640
// Address: 0x229640 - 0x229710
void sub_00229640_0x229640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229640_0x229640");
#endif

    ctx->pc = 0x229640u;

    // 0x229640: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x229640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x229644: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x229644u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x229648: 0x8c44cd58  lw          $a0, -0x32A8($v0)
    ctx->pc = 0x229648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x22964c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x22964cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x229650: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x229650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x229654: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x229654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x229658: 0x10800026  beqz        $a0, . + 4 + (0x26 << 2)
    ctx->pc = 0x229658u;
    {
        const bool branch_taken_0x229658 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22965Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229658u;
            // 0x22965c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229658) {
            ctx->pc = 0x2296F4u;
            goto label_2296f4;
        }
    }
    ctx->pc = 0x229660u;
    // 0x229660: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x229660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x229664: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x229664u;
    {
        const bool branch_taken_0x229664 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x229668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229664u;
            // 0x229668: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229664) {
            ctx->pc = 0x2296F8u;
            goto label_2296f8;
        }
    }
    ctx->pc = 0x22966Cu;
    // 0x22966c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x22966cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x229670: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x229670u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x229674: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x229674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x229678: 0x40f809  jalr        $v0
    ctx->pc = 0x229678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x229680u);
        ctx->pc = 0x22967Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229678u;
            // 0x22967c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x229680u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2296A8u: goto label_2296a8;
            case 0x2296E4u: goto label_2296e4;
            case 0x2296E8u: goto label_2296e8;
            case 0x2296F4u: goto label_2296f4;
            case 0x2296F8u: goto label_2296f8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x229680u; }
            if (ctx->pc != 0x229680u) { return; }
        }
        }
    }
    ctx->pc = 0x229680u;
    // 0x229680: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x229680u;
    {
        const bool branch_taken_0x229680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x229680) {
            ctx->pc = 0x229684u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x229680u;
            // 0x229684: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2296F8u;
            goto label_2296f8;
        }
    }
    ctx->pc = 0x229688u;
    // 0x229688: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x229688u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x22968c: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x22968Cu;
    {
        const bool branch_taken_0x22968c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x229690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22968Cu;
            // 0x229690: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22968c) {
            ctx->pc = 0x2296F8u;
            goto label_2296f8;
        }
    }
    ctx->pc = 0x229694u;
    // 0x229694: 0x923201a0  lbu         $s2, 0x1A0($s1)
    ctx->pc = 0x229694u;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 416)));
    // 0x229698: 0x12400017  beqz        $s2, . + 4 + (0x17 << 2)
    ctx->pc = 0x229698u;
    {
        const bool branch_taken_0x229698 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x22969Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229698u;
            // 0x22969c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229698) {
            ctx->pc = 0x2296F8u;
            goto label_2296f8;
        }
    }
    ctx->pc = 0x2296A0u;
    // 0x2296a0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2296a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2296a4: 0x0  nop
    ctx->pc = 0x2296a4u;
    // NOP
label_2296a8:
    // 0x2296a8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2296a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2296ac: 0x8c4400d8  lw          $a0, 0xD8($v0)
    ctx->pc = 0x2296acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
    // 0x2296b0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2296b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2296b4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2296B4u;
    {
        const bool branch_taken_0x2296b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2296B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2296B4u;
            // 0x2296b8: 0x3c030008  lui         $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2296b4) {
            ctx->pc = 0x2296E4u;
            goto label_2296e4;
        }
    }
    ctx->pc = 0x2296BCu;
    // 0x2296bc: 0x8c4200f4  lw          $v0, 0xF4($v0)
    ctx->pc = 0x2296bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x2296c0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2296c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2296c4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2296C4u;
    {
        const bool branch_taken_0x2296c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2296c4) {
            ctx->pc = 0x2296C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2296C4u;
            // 0x2296c8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2296E8u;
            goto label_2296e8;
        }
    }
    ctx->pc = 0x2296CCu;
    // 0x2296cc: 0xc090aa6  jal         func_242A98
    ctx->pc = 0x2296CCu;
    SET_GPR_U32(ctx, 31, 0x2296D4u);
    ctx->pc = 0x2296D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2296CCu;
            // 0x2296d0: 0x8c840320  lw          $a0, 0x320($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 800)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A98u;
    if (runtime->hasFunction(0x242A98u)) {
        auto targetFn = runtime->lookupFunction(0x242A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2296D4u; }
        if (ctx->pc != 0x2296D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a98_0x242d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2296D4u; }
        if (ctx->pc != 0x2296D4u) { return; }
    }
    ctx->pc = 0x2296D4u;
    // 0x2296d4: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x2296d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2296d8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2296d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2296dc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2296DCu;
    {
        const bool branch_taken_0x2296dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2296E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2296DCu;
            // 0x2296e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2296dc) {
            ctx->pc = 0x2296F8u;
            goto label_2296f8;
        }
    }
    ctx->pc = 0x2296E4u;
label_2296e4:
    // 0x2296e4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2296e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2296e8:
    // 0x2296e8: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x2296e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2296ec: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2296ECu;
    {
        const bool branch_taken_0x2296ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2296F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2296ECu;
            // 0x2296f0: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2296ec) {
            ctx->pc = 0x2296A8u;
            runtime->cooperativeGuestYield();
            goto label_2296a8;
        }
    }
    ctx->pc = 0x2296F4u;
label_2296f4:
    // 0x2296f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2296f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2296f8:
    // 0x2296f8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2296f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2296fc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2296fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x229700: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x229700u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x229704: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x229704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x229708: 0x3e00008  jr          $ra
    ctx->pc = 0x229708u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22970Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229708u;
            // 0x22970c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2296A8u: goto label_2296a8;
            case 0x2296E4u: goto label_2296e4;
            case 0x2296E8u: goto label_2296e8;
            case 0x2296F4u: goto label_2296f4;
            case 0x2296F8u: goto label_2296f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x229710u;
}
