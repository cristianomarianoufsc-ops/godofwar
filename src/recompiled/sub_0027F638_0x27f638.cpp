#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027F638
// Address: 0x27f638 - 0x27f768
void sub_0027F638_0x27f638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027F638_0x27f638");
#endif

    ctx->pc = 0x27f638u;

    // 0x27f638: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x27f638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x27f63c: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x27f63cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x27f640: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x27f640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x27f644: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x27f644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x27f648: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x27f648u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f64c: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x27f64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x27f650: 0x245edb00  addiu       $fp, $v0, -0x2500
    ctx->pc = 0x27f650u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957824));
    // 0x27f654: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x27f654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x27f658: 0x3c178101  lui         $s7, 0x8101
    ctx->pc = 0x27f658u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)33025 << 16));
    // 0x27f65c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x27f65cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x27f660: 0x3c16ffff  lui         $s6, 0xFFFF
    ctx->pc = 0x27f660u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65535 << 16));
    // 0x27f664: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x27f664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x27f668: 0x3c157fff  lui         $s5, 0x7FFF
    ctx->pc = 0x27f668u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32767 << 16));
    // 0x27f66c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x27f66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x27f670: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x27f670u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f674: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x27f674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27f678: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x27f678u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f67c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27f67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27f680: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x27f680u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f684: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x27f684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x27f688: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x27f688u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f68c: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x27f68cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x27f690: 0x36f7006f  ori         $s7, $s7, 0x6F
    ctx->pc = 0x27f690u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)111);
    // 0x27f694: 0x36d6ffff  ori         $s6, $s6, 0xFFFF
    ctx->pc = 0x27f694u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)65535);
    // 0x27f698: 0x36b5ffff  ori         $s5, $s5, 0xFFFF
    ctx->pc = 0x27f698u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
    // 0x27f69c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27f69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27f6a0:
    // 0x27f6a0: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x27f6a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f6a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27f6a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f6a8: 0xc0a076a  jal         func_281DA8
    ctx->pc = 0x27F6A8u;
    SET_GPR_U32(ctx, 31, 0x27F6B0u);
    ctx->pc = 0x27F6ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F6A8u;
            // 0x27f6ac: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281DA8u;
    if (runtime->hasFunction(0x281DA8u)) {
        auto targetFn = runtime->lookupFunction(0x281DA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F6B0u; }
        if (ctx->pc != 0x27F6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281DA8_0x281da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F6B0u; }
        if (ctx->pc != 0x27F6B0u) { return; }
    }
    ctx->pc = 0x27F6B0u;
    // 0x27f6b0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27F6B0u;
    {
        const bool branch_taken_0x27f6b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F6B0u;
            // 0x27f6b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f6b0) {
            ctx->pc = 0x27F6C4u;
            goto label_27f6c4;
        }
    }
    ctx->pc = 0x27F6B8u;
    // 0x27f6b8: 0xae770000  sw          $s7, 0x0($s3)
    ctx->pc = 0x27f6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 23));
    // 0x27f6bc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x27F6BCu;
    {
        const bool branch_taken_0x27f6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F6BCu;
            // 0x27f6c0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f6bc) {
            ctx->pc = 0x27F734u;
            goto label_27f734;
        }
    }
    ctx->pc = 0x27F6C4u;
label_27f6c4:
    // 0x27f6c4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x27f6c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_27f6c8:
    // 0x27f6c8: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x27f6c8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27f6cc: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x27f6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x27f6d0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x27f6d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x27f6d4: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x27f6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x27f6d8: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x27F6D8u;
    {
        const bool branch_taken_0x27f6d8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F6D8u;
            // 0x27f6dc: 0x62880a  movz        $s1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f6d8) {
            ctx->pc = 0x27F724u;
            goto label_27f724;
        }
    }
    ctx->pc = 0x27F6E0u;
    // 0x27f6e0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x27f6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x27f6e4: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x27f6e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x27f6e8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x27F6E8u;
    {
        const bool branch_taken_0x27f6e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F6ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F6E8u;
            // 0x27f6ec: 0x24840200  addiu       $a0, $a0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f6e8) {
            ctx->pc = 0x27F6C8u;
            runtime->cooperativeGuestYield();
            goto label_27f6c8;
        }
    }
    ctx->pc = 0x27F6F0u;
    // 0x27f6f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27f6f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f6f4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27f6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f6f8: 0xc09f638  jal         func_27D8E0
    ctx->pc = 0x27F6F8u;
    SET_GPR_U32(ctx, 31, 0x27F700u);
    ctx->pc = 0x27F6FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F6F8u;
            // 0x27f6fc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D8E0u;
    if (runtime->hasFunction(0x27D8E0u)) {
        auto targetFn = runtime->lookupFunction(0x27D8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F700u; }
        if (ctx->pc != 0x27F700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027D8E0_0x27d8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F700u; }
        if (ctx->pc != 0x27F700u) { return; }
    }
    ctx->pc = 0x27F700u;
    // 0x27f700: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x27f700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x27f704: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27F704u;
    {
        const bool branch_taken_0x27f704 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F704u;
            // 0x27f708: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f704) {
            ctx->pc = 0x27F714u;
            goto label_27f714;
        }
    }
    ctx->pc = 0x27F70Cu;
    // 0x27f70c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x27F70Cu;
    {
        const bool branch_taken_0x27f70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F70Cu;
            // 0x27f710: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f70c) {
            ctx->pc = 0x27F734u;
            goto label_27f734;
        }
    }
    ctx->pc = 0x27F714u;
label_27f714:
    // 0x27f714: 0x12160006  beq         $s0, $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x27F714u;
    {
        const bool branch_taken_0x27f714 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 22));
        ctx->pc = 0x27F718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F714u;
            // 0x27f718: 0x2158024  and         $s0, $s0, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f714) {
            ctx->pc = 0x27F730u;
            goto label_27f730;
        }
    }
    ctx->pc = 0x27F71Cu;
    // 0x27f71c: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x27F71Cu;
    {
        const bool branch_taken_0x27f71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F71Cu;
            // 0x27f720: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f71c) {
            ctx->pc = 0x27F6A0u;
            runtime->cooperativeGuestYield();
            goto label_27f6a0;
        }
    }
    ctx->pc = 0x27F724u;
label_27f724:
    // 0x27f724: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x27f724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x27f728: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27F728u;
    {
        const bool branch_taken_0x27f728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F728u;
            // 0x27f72c: 0x225100b  movn        $v0, $s1, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f728) {
            ctx->pc = 0x27F734u;
            goto label_27f734;
        }
    }
    ctx->pc = 0x27F730u;
label_27f730:
    // 0x27f730: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x27f730u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27f734:
    // 0x27f734: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x27f734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x27f738: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x27f738u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x27f73c: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x27f73cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27f740: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x27f740u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27f744: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x27f744u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27f748: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x27f748u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27f74c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x27f74cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27f750: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x27f750u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27f754: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x27f754u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27f758: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27f758u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f75c: 0x3e00008  jr          $ra
    ctx->pc = 0x27F75Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F75Cu;
            // 0x27f760: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27F6A0u: goto label_27f6a0;
            case 0x27F6C4u: goto label_27f6c4;
            case 0x27F6C8u: goto label_27f6c8;
            case 0x27F714u: goto label_27f714;
            case 0x27F724u: goto label_27f724;
            case 0x27F730u: goto label_27f730;
            case 0x27F734u: goto label_27f734;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27F764u;
    // 0x27f764: 0x0  nop
    ctx->pc = 0x27f764u;
    // NOP
}
