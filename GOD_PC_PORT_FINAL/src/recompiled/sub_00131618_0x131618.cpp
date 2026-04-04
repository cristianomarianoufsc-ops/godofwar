#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00131618
// Address: 0x131618 - 0x131848
void sub_00131618_0x131618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131618_0x131618");
#endif

    ctx->pc = 0x131618u;

    // 0x131618: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x131618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x13161c: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x13161cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x131620: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x131620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x131624: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x131624u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131628: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x131628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x13162c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x13162cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131630: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x131630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x131634: 0x6200014  bltz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x131634u;
    {
        const bool branch_taken_0x131634 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x131638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131634u;
            // 0x131638: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131634) {
            ctx->pc = 0x131688u;
            goto label_131688;
        }
    }
    ctx->pc = 0x13163Cu;
    // 0x13163c: 0x8e100104  lw          $s0, 0x104($s0)
    ctx->pc = 0x13163cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x131640: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x131640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x131644: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x131644u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x131648: 0xde020040  ld          $v0, 0x40($s0)
    ctx->pc = 0x131648u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x13164c: 0x50450004  beql        $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13164Cu;
    {
        const bool branch_taken_0x13164c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x13164c) {
            ctx->pc = 0x131650u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13164Cu;
            // 0x131650: 0x8e03008c  lw          $v1, 0x8C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x131660u;
            goto label_131660;
        }
    }
    ctx->pc = 0x131654u;
    // 0x131654: 0xc04da64  jal         func_136990
    ctx->pc = 0x131654u;
    SET_GPR_U32(ctx, 31, 0x13165Cu);
    ctx->pc = 0x131658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131654u;
            // 0x131658: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13165Cu; }
        if (ctx->pc != 0x13165Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13165Cu; }
        if (ctx->pc != 0x13165Cu) { return; }
    }
    ctx->pc = 0x13165Cu;
    // 0x13165c: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x13165cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_131660:
    // 0x131660: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x131660u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x131664: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x131664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x131668: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x131668u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13166c: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x13166cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x131670: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x131670u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x131674: 0x7e420010  sq          $v0, 0x10($s2)
    ctx->pc = 0x131674u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
    // 0x131678: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x131678u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x13167c: 0x7e420020  sq          $v0, 0x20($s2)
    ctx->pc = 0x13167cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 2));
    // 0x131680: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x131680u;
    {
        const bool branch_taken_0x131680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131680u;
            // 0x131684: 0x78620030  lq          $v0, 0x30($v1) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131680) {
            ctx->pc = 0x13182Cu;
            goto label_13182c;
        }
    }
    ctx->pc = 0x131688u;
label_131688:
    // 0x131688: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x131688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x13168c: 0x12220018  beq         $s1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x13168Cu;
    {
        const bool branch_taken_0x13168c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x131690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13168Cu;
            // 0x131690: 0x2a22ffff  slti        $v0, $s1, -0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4294967295) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13168c) {
            ctx->pc = 0x1316F0u;
            goto label_1316f0;
        }
    }
    ctx->pc = 0x131694u;
    // 0x131694: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x131694u;
    {
        const bool branch_taken_0x131694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x131698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131694u;
            // 0x131698: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131694) {
            ctx->pc = 0x1316ACu;
            goto label_1316ac;
        }
    }
    ctx->pc = 0x13169Cu;
    // 0x13169c: 0x52220050  beql        $s1, $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x13169Cu;
    {
        const bool branch_taken_0x13169c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x13169c) {
            ctx->pc = 0x1316A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13169Cu;
            // 0x1316a0: 0x86030060  lh          $v1, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1317E0u;
            goto label_1317e0;
        }
    }
    ctx->pc = 0x1316A4u;
    // 0x1316a4: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x1316A4u;
    {
        const bool branch_taken_0x1316a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1316A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1316A4u;
            // 0x1316a8: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1316a4) {
            ctx->pc = 0x131834u;
            goto label_131834;
        }
    }
    ctx->pc = 0x1316ACu;
label_1316ac:
    // 0x1316ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1316acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1316b0: 0x16220060  bne         $s1, $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x1316B0u;
    {
        const bool branch_taken_0x1316b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1316B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1316B0u;
            // 0x1316b4: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1316b0) {
            ctx->pc = 0x131834u;
            goto label_131834;
        }
    }
    ctx->pc = 0x1316B8u;
    // 0x1316b8: 0x4be2033c  vmove.xyzw  $vf2, $vf0
    ctx->pc = 0x1316b8u;
    ctx->vu0_vf[2] = ctx->vu0_vf[0];
    // 0x1316bc: 0x4be3133d  vmr32.xyzw  $vf3, $vf2
    ctx->pc = 0x1316bcu;
    ctx->vu0_vf[3] = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,1));
    // 0x1316c0: 0xfa420030  sqc2        $vf2, 0x30($s2)
    ctx->pc = 0x1316c0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1316c4: 0x4be11b3d  vmr32.xyzw  $vf1, $vf3
    ctx->pc = 0x1316c4u;
    ctx->vu0_vf[1] = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,1));
    // 0x1316c8: 0xfa430020  sqc2        $vf3, 0x20($s2)
    ctx->pc = 0x1316c8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1316cc: 0x4be40b3d  vmr32.xyzw  $vf4, $vf1
    ctx->pc = 0x1316ccu;
    ctx->vu0_vf[4] = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,1));
    // 0x1316d0: 0xfa410010  sqc2        $vf1, 0x10($s2)
    ctx->pc = 0x1316d0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1316d4: 0xfa440000  sqc2        $vf4, 0x0($s2)
    ctx->pc = 0x1316d4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1316d8: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1316d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1316dc: 0xfba30010  sqc2        $vf3, 0x10($sp)
    ctx->pc = 0x1316dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1316e0: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1316e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1316e4: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x1316E4u;
    {
        const bool branch_taken_0x1316e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1316E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1316E4u;
            // 0x1316e8: 0xfba40030  sqc2        $vf4, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1316e4) {
            ctx->pc = 0x131834u;
            goto label_131834;
        }
    }
    ctx->pc = 0x1316ECu;
    // 0x1316ec: 0x0  nop
    ctx->pc = 0x1316ecu;
    // NOP
label_1316f0:
    // 0x1316f0: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x1316f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x1316f4: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x1316f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x1316f8: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x1316f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1316fc: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1316FCu;
    {
        const bool branch_taken_0x1316fc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x131700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1316FCu;
            // 0x131700: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1316fc) {
            ctx->pc = 0x131714u;
            goto label_131714;
        }
    }
    ctx->pc = 0x131704u;
    // 0x131704: 0x94620086  lhu         $v0, 0x86($v1)
    ctx->pc = 0x131704u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 134)));
    // 0x131708: 0x8c630050  lw          $v1, 0x50($v1)
    ctx->pc = 0x131708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x13170c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x13170cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x131710: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x131710u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_131714:
    // 0x131714: 0x86030060  lh          $v1, 0x60($s0)
    ctx->pc = 0x131714u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x131718: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x131718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13171c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13171Cu;
    {
        const bool branch_taken_0x13171c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x131720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13171Cu;
            // 0x131720: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13171c) {
            ctx->pc = 0x13172Cu;
            goto label_13172c;
        }
    }
    ctx->pc = 0x131724u;
    // 0x131724: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x131724u;
    {
        const bool branch_taken_0x131724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131724u;
            // 0x131728: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131724) {
            ctx->pc = 0x131748u;
            goto label_131748;
        }
    }
    ctx->pc = 0x13172Cu;
label_13172c:
    // 0x13172c: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x13172cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x131730: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x131730u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x131734: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x131734u;
    {
        const bool branch_taken_0x131734 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x131738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131734u;
            // 0x131738: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131734) {
            ctx->pc = 0x131748u;
            goto label_131748;
        }
    }
    ctx->pc = 0x13173Cu;
    // 0x13173c: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x13173Cu;
    SET_GPR_U32(ctx, 31, 0x131744u);
    ctx->pc = 0x131740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13173Cu;
            // 0x131740: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131744u; }
        if (ctx->pc != 0x131744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131744u; }
        if (ctx->pc != 0x131744u) { return; }
    }
    ctx->pc = 0x131744u;
    // 0x131744: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x131744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_131748:
    // 0x131748: 0xd8840030  lqc2        $vf4, 0x30($a0)
    ctx->pc = 0x131748u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x13174c: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x13174cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x131750: 0xd8870010  lqc2        $vf7, 0x10($a0)
    ctx->pc = 0x131750u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x131754: 0xd8880020  lqc2        $vf8, 0x20($a0)
    ctx->pc = 0x131754u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x131758: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x131758u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13175c: 0xda260030  lqc2        $vf6, 0x30($s1)
    ctx->pc = 0x13175cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x131760: 0xda220010  lqc2        $vf2, 0x10($s1)
    ctx->pc = 0x131760u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x131764: 0xda230020  lqc2        $vf3, 0x20($s1)
    ctx->pc = 0x131764u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x131768: 0x4be129bc  vmulax.xyzw $ACC, $vf5, $vf1x
    ctx->pc = 0x131768u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x13176c: 0x4be138bd  vmadday.xyzw $ACC, $vf7, $vf1y
    ctx->pc = 0x13176cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x131770: 0x4be140be  vmaddaz.xyzw $ACC, $vf8, $vf1z
    ctx->pc = 0x131770u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x131774: 0x4be1204b  vmaddw.xyzw $vf1, $vf4, $vf1w
    ctx->pc = 0x131774u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x131778: 0x4be229bc  vmulax.xyzw $ACC, $vf5, $vf2x
    ctx->pc = 0x131778u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x13177c: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x13177cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x131780: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x131780u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x131784: 0x4be240be  vmaddaz.xyzw $ACC, $vf8, $vf2z
    ctx->pc = 0x131784u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x131788: 0x4be2208b  vmaddw.xyzw $vf2, $vf4, $vf2w
    ctx->pc = 0x131788u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x13178c: 0x4be329bc  vmulax.xyzw $ACC, $vf5, $vf3x
    ctx->pc = 0x13178cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x131790: 0xfba20090  sqc2        $vf2, 0x90($sp)
    ctx->pc = 0x131790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x131794: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x131794u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x131798: 0x4be340be  vmaddaz.xyzw $ACC, $vf8, $vf3z
    ctx->pc = 0x131798u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x13179c: 0x4be320cb  vmaddw.xyzw $vf3, $vf4, $vf3w
    ctx->pc = 0x13179cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1317a0: 0x4be629bc  vmulax.xyzw $ACC, $vf5, $vf6x
    ctx->pc = 0x1317a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1317a4: 0xfba300a0  sqc2        $vf3, 0xA0($sp)
    ctx->pc = 0x1317a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1317a8: 0x4be638bd  vmadday.xyzw $ACC, $vf7, $vf6y
    ctx->pc = 0x1317a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1317ac: 0x4be640be  vmaddaz.xyzw $ACC, $vf8, $vf6z
    ctx->pc = 0x1317acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1317b0: 0x4be6210b  vmaddw.xyzw $vf4, $vf4, $vf6w
    ctx->pc = 0x1317b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1317b4: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x1317b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1317b8: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1317b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1317bc: 0xfa440030  sqc2        $vf4, 0x30($s2)
    ctx->pc = 0x1317bcu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1317c0: 0xfa410000  sqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1317c0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1317c4: 0xfa420010  sqc2        $vf2, 0x10($s2)
    ctx->pc = 0x1317c4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1317c8: 0xfa430020  sqc2        $vf3, 0x20($s2)
    ctx->pc = 0x1317c8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1317cc: 0xfba20050  sqc2        $vf2, 0x50($sp)
    ctx->pc = 0x1317ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1317d0: 0xfba30060  sqc2        $vf3, 0x60($sp)
    ctx->pc = 0x1317d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1317d4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1317D4u;
    {
        const bool branch_taken_0x1317d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1317D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1317D4u;
            // 0x1317d8: 0xfba40070  sqc2        $vf4, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1317d4) {
            ctx->pc = 0x131830u;
            goto label_131830;
        }
    }
    ctx->pc = 0x1317DCu;
    // 0x1317dc: 0x0  nop
    ctx->pc = 0x1317dcu;
    // NOP
label_1317e0:
    // 0x1317e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1317e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1317e4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1317E4u;
    {
        const bool branch_taken_0x1317e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1317E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1317E4u;
            // 0x1317e8: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1317e4) {
            ctx->pc = 0x1317F4u;
            goto label_1317f4;
        }
    }
    ctx->pc = 0x1317ECu;
    // 0x1317ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1317ECu;
    {
        const bool branch_taken_0x1317ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1317F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1317ECu;
            // 0x1317f0: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1317ec) {
            ctx->pc = 0x131810u;
            goto label_131810;
        }
    }
    ctx->pc = 0x1317F4u;
label_1317f4:
    // 0x1317f4: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x1317f4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1317f8: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1317f8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1317fc: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1317FCu;
    {
        const bool branch_taken_0x1317fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x131800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1317FCu;
            // 0x131800: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1317fc) {
            ctx->pc = 0x131810u;
            goto label_131810;
        }
    }
    ctx->pc = 0x131804u;
    // 0x131804: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x131804u;
    SET_GPR_U32(ctx, 31, 0x13180Cu);
    ctx->pc = 0x131808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131804u;
            // 0x131808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13180Cu; }
        if (ctx->pc != 0x13180Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13180Cu; }
        if (ctx->pc != 0x13180Cu) { return; }
    }
    ctx->pc = 0x13180Cu;
    // 0x13180c: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x13180cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_131810:
    // 0x131810: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x131810u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x131814: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x131814u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x131818: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x131818u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x13181c: 0x7e420010  sq          $v0, 0x10($s2)
    ctx->pc = 0x13181cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
    // 0x131820: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x131820u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x131824: 0x7e420020  sq          $v0, 0x20($s2)
    ctx->pc = 0x131824u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 2));
    // 0x131828: 0x78820030  lq          $v0, 0x30($a0)
    ctx->pc = 0x131828u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 48)));
label_13182c:
    // 0x13182c: 0x7e420030  sq          $v0, 0x30($s2)
    ctx->pc = 0x13182cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), GPR_VEC(ctx, 2));
label_131830:
    // 0x131830: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x131830u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_131834:
    // 0x131834: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x131834u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x131838: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x131838u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x13183c: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x13183cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x131840: 0x3e00008  jr          $ra
    ctx->pc = 0x131840u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131840u;
            // 0x131844: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x131660u: goto label_131660;
            case 0x131688u: goto label_131688;
            case 0x1316ACu: goto label_1316ac;
            case 0x1316F0u: goto label_1316f0;
            case 0x131714u: goto label_131714;
            case 0x13172Cu: goto label_13172c;
            case 0x131748u: goto label_131748;
            case 0x1317E0u: goto label_1317e0;
            case 0x1317F4u: goto label_1317f4;
            case 0x131810u: goto label_131810;
            case 0x13182Cu: goto label_13182c;
            case 0x131830u: goto label_131830;
            case 0x131834u: goto label_131834;
            default: break;
        }
        return;
    }
    ctx->pc = 0x131848u;
}
