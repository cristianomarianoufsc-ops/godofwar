#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00156558
// Address: 0x156558 - 0x156780
void sub_00156558_0x156558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156558_0x156558");
#endif

    ctx->pc = 0x156558u;

    // 0x156558: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x156558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x15655c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x15655cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x156560: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x156560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x156564: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x156564u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156568: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x156568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x15656c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15656cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x156570: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x156570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x156574: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x156574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x156578: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x156578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15657c: 0x1062004f  beq         $v1, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x15657Cu;
    {
        const bool branch_taken_0x15657c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x156580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15657Cu;
            // 0x156580: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15657c) {
            ctx->pc = 0x1566BCu;
            goto label_1566bc;
        }
    }
    ctx->pc = 0x156584u;
    // 0x156584: 0x0  nop
    ctx->pc = 0x156584u;
    // NOP
label_156588:
    // 0x156588: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x156588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x15658c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x15658cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x156590: 0x8c520008  lw          $s2, 0x8($v0)
    ctx->pc = 0x156590u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x156594: 0x96440000  lhu         $a0, 0x0($s2)
    ctx->pc = 0x156594u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x156598: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x156598u;
    {
        const bool branch_taken_0x156598 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15659Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156598u;
            // 0x15659c: 0x28820009  slti        $v0, $a0, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x156598) {
            ctx->pc = 0x1565CCu;
            goto label_1565cc;
        }
    }
    ctx->pc = 0x1565A0u;
    // 0x1565a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1565A0u;
    {
        const bool branch_taken_0x1565a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1565A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1565A0u;
            // 0x1565a4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1565a0) {
            ctx->pc = 0x1565B8u;
            goto label_1565b8;
        }
    }
    ctx->pc = 0x1565A8u;
    // 0x1565a8: 0x1082002a  beq         $a0, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1565A8u;
    {
        const bool branch_taken_0x1565a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1565ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1565A8u;
            // 0x1565ac: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1565a8) {
            ctx->pc = 0x156654u;
            goto label_156654;
        }
    }
    ctx->pc = 0x1565B0u;
    // 0x1565b0: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1565B0u;
    {
        const bool branch_taken_0x1565b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1565B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1565B0u;
            // 0x1565b4: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1565b0) {
            ctx->pc = 0x1566B0u;
            goto label_1566b0;
        }
    }
    ctx->pc = 0x1565B8u;
label_1565b8:
    // 0x1565b8: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1565b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1565bc: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1565BCu;
    {
        const bool branch_taken_0x1565bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1565C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1565BCu;
            // 0x1565c0: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1565bc) {
            ctx->pc = 0x1565D8u;
            goto label_1565d8;
        }
    }
    ctx->pc = 0x1565C4u;
    // 0x1565c4: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1565C4u;
    {
        const bool branch_taken_0x1565c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1565C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1565C4u;
            // 0x1565c8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1565c4) {
            ctx->pc = 0x1566B0u;
            goto label_1566b0;
        }
    }
    ctx->pc = 0x1565CCu;
label_1565cc:
    // 0x1565cc: 0x26300008  addiu       $s0, $s1, 0x8
    ctx->pc = 0x1565ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1565d0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1565D0u;
    {
        const bool branch_taken_0x1565d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1565D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1565D0u;
            // 0x1565d4: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1565d0) {
            ctx->pc = 0x15665Cu;
            goto label_15665c;
        }
    }
    ctx->pc = 0x1565D8u;
label_1565d8:
    // 0x1565d8: 0x26300020  addiu       $s0, $s1, 0x20
    ctx->pc = 0x1565d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1565dc: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1565dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1565e0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1565e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1565e4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1565e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1565e8: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1565E8u;
    {
        const bool branch_taken_0x1565e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1565e8) {
            ctx->pc = 0x1565ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1565E8u;
            // 0x1565ec: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156618u;
            goto label_156618;
        }
    }
    ctx->pc = 0x1565F0u;
    // 0x1565f0: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x1565f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1565f4: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1565F4u;
    {
        const bool branch_taken_0x1565f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1565f4) {
            ctx->pc = 0x1565F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1565F4u;
            // 0x1565f8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156618u;
            goto label_156618;
        }
    }
    ctx->pc = 0x1565FCu;
    // 0x1565fc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1565fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x156600: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x156600u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x156604: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x156604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x156608: 0x40f809  jalr        $v0
    ctx->pc = 0x156608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x156610u);
        ctx->pc = 0x15660Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156608u;
            // 0x15660c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x156610u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x156588u: goto label_156588;
            case 0x1565B8u: goto label_1565b8;
            case 0x1565CCu: goto label_1565cc;
            case 0x1565D8u: goto label_1565d8;
            case 0x156618u: goto label_156618;
            case 0x156654u: goto label_156654;
            case 0x15665Cu: goto label_15665c;
            case 0x156690u: goto label_156690;
            case 0x1566A8u: goto label_1566a8;
            case 0x1566B0u: goto label_1566b0;
            case 0x1566BCu: goto label_1566bc;
            case 0x156700u: goto label_156700;
            case 0x156704u: goto label_156704;
            case 0x156738u: goto label_156738;
            case 0x156758u: goto label_156758;
            case 0x156768u: goto label_156768;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x156610u; }
            if (ctx->pc != 0x156610u) { return; }
        }
        }
    }
    ctx->pc = 0x156610u;
    // 0x156610: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x156610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x156614: 0x0  nop
    ctx->pc = 0x156614u;
    // NOP
label_156618:
    // 0x156618: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x156618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x15661c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x15661cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x156620: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x156620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x156624: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x156624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x156628: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x156628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x15662c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x15662cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x156630: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x156630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x156634: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x156634u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
    // 0x156638: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x156638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x15663c: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x15663cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x156640: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x156640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x156644: 0x34820100  ori         $v0, $a0, 0x100
    ctx->pc = 0x156644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x156648: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x156648u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x15664c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x15664Cu;
    {
        const bool branch_taken_0x15664c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15664Cu;
            // 0x156650: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15664c) {
            ctx->pc = 0x1566A8u;
            goto label_1566a8;
        }
    }
    ctx->pc = 0x156654u;
label_156654:
    // 0x156654: 0x26300038  addiu       $s0, $s1, 0x38
    ctx->pc = 0x156654u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x156658: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x156658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_15665c:
    // 0x15665c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15665cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x156660: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x156660u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x156664: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x156664u;
    {
        const bool branch_taken_0x156664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x156664) {
            ctx->pc = 0x156668u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x156664u;
            // 0x156668: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156690u;
            goto label_156690;
        }
    }
    ctx->pc = 0x15666Cu;
    // 0x15666c: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15666cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x156670: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x156670u;
    {
        const bool branch_taken_0x156670 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x156670) {
            ctx->pc = 0x156674u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x156670u;
            // 0x156674: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156690u;
            goto label_156690;
        }
    }
    ctx->pc = 0x156678u;
    // 0x156678: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x156678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15667c: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x15667cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x156680: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x156680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x156684: 0x40f809  jalr        $v0
    ctx->pc = 0x156684u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15668Cu);
        ctx->pc = 0x156688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156684u;
            // 0x156688: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15668Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x156588u: goto label_156588;
            case 0x1565B8u: goto label_1565b8;
            case 0x1565CCu: goto label_1565cc;
            case 0x1565D8u: goto label_1565d8;
            case 0x156618u: goto label_156618;
            case 0x156654u: goto label_156654;
            case 0x15665Cu: goto label_15665c;
            case 0x156690u: goto label_156690;
            case 0x1566A8u: goto label_1566a8;
            case 0x1566B0u: goto label_1566b0;
            case 0x1566BCu: goto label_1566bc;
            case 0x156700u: goto label_156700;
            case 0x156704u: goto label_156704;
            case 0x156738u: goto label_156738;
            case 0x156758u: goto label_156758;
            case 0x156768u: goto label_156768;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15668Cu; }
            if (ctx->pc != 0x15668Cu) { return; }
        }
        }
    }
    ctx->pc = 0x15668Cu;
    // 0x15668c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x15668cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_156690:
    // 0x156690: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x156690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x156694: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x156694u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x156698: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x156698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15669c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15669cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1566a0: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x1566a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
    // 0x1566a4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1566a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1566a8:
    // 0x1566a8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1566a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1566ac: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1566acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1566b0:
    // 0x1566b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1566b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1566b4: 0x1443ffb4  bne         $v0, $v1, . + 4 + (-0x4C << 2)
    ctx->pc = 0x1566B4u;
    {
        const bool branch_taken_0x1566b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1566B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1566B4u;
            // 0x1566b8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1566b4) {
            ctx->pc = 0x156588u;
            runtime->cooperativeGuestYield();
            goto label_156588;
        }
    }
    ctx->pc = 0x1566BCu;
label_1566bc:
    // 0x1566bc: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x1566bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x1566c0: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1566C0u;
    {
        const bool branch_taken_0x1566c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1566c0) {
            ctx->pc = 0x1566C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1566C0u;
            // 0x1566c4: 0xae20007c  sw          $zero, 0x7C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156700u;
            goto label_156700;
        }
    }
    ctx->pc = 0x1566C8u;
    // 0x1566c8: 0xc04f824  jal         func_13E090
    ctx->pc = 0x1566C8u;
    SET_GPR_U32(ctx, 31, 0x1566D0u);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1566D0u; }
        if (ctx->pc != 0x1566D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1566D0u; }
        if (ctx->pc != 0x1566D0u) { return; }
    }
    ctx->pc = 0x1566D0u;
    // 0x1566d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1566d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1566d4: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x1566d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1566d8: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x1566D8u;
    SET_GPR_U32(ctx, 31, 0x1566E0u);
    ctx->pc = 0x1566DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1566D8u;
            // 0x1566dc: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1566E0u; }
        if (ctx->pc != 0x1566E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1566E0u; }
        if (ctx->pc != 0x1566E0u) { return; }
    }
    ctx->pc = 0x1566E0u;
    // 0x1566e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1566e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1566e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1566e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1566e8: 0xae22007c  sw          $v0, 0x7C($s1)
    ctx->pc = 0x1566e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 2));
    // 0x1566ec: 0xc055b1a  jal         func_156C68
    ctx->pc = 0x1566ECu;
    SET_GPR_U32(ctx, 31, 0x1566F4u);
    ctx->pc = 0x1566F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1566ECu;
            // 0x1566f0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156C68u;
    if (runtime->hasFunction(0x156C68u)) {
        auto targetFn = runtime->lookupFunction(0x156C68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1566F4u; }
        if (ctx->pc != 0x1566F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156C68_0x156c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1566F4u; }
        if (ctx->pc != 0x1566F4u) { return; }
    }
    ctx->pc = 0x1566F4u;
    // 0x1566f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1566F4u;
    {
        const bool branch_taken_0x1566f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1566F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1566F4u;
            // 0x1566f8: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1566f4) {
            ctx->pc = 0x156704u;
            goto label_156704;
        }
    }
    ctx->pc = 0x1566FCu;
    // 0x1566fc: 0x0  nop
    ctx->pc = 0x1566fcu;
    // NOP
label_156700:
    // 0x156700: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x156700u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_156704:
    // 0x156704: 0x52000018  beql        $s0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x156704u;
    {
        const bool branch_taken_0x156704 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x156704) {
            ctx->pc = 0x156708u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x156704u;
            // 0x156708: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156768u;
            goto label_156768;
        }
    }
    ctx->pc = 0x15670Cu;
    // 0x15670c: 0xc05e394  jal         func_178E50
    ctx->pc = 0x15670Cu;
    SET_GPR_U32(ctx, 31, 0x156714u);
    ctx->pc = 0x156710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15670Cu;
            // 0x156710: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178E50u;
    if (runtime->hasFunction(0x178E50u)) {
        auto targetFn = runtime->lookupFunction(0x178E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156714u; }
        if (ctx->pc != 0x156714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_178e50_0x178e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156714u; }
        if (ctx->pc != 0x156714u) { return; }
    }
    ctx->pc = 0x156714u;
    // 0x156714: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x156714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
    // 0x156718: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x156718u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15671c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x15671cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x156720: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x156720u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x156724: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x156724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x156728: 0x5050000b  beql        $v0, $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x156728u;
    {
        const bool branch_taken_0x156728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x156728) {
            ctx->pc = 0x15672Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x156728u;
            // 0x15672c: 0xae100000  sw          $s0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156758u;
            goto label_156758;
        }
    }
    ctx->pc = 0x156730u;
    // 0x156730: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x156730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x156734: 0x0  nop
    ctx->pc = 0x156734u;
    // NOP
label_156738:
    // 0x156738: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x156738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15673c: 0xc05e374  jal         func_178DD0
    ctx->pc = 0x15673Cu;
    SET_GPR_U32(ctx, 31, 0x156744u);
    ctx->pc = 0x156740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15673Cu;
            // 0x156740: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178DD0u;
    if (runtime->hasFunction(0x178DD0u)) {
        auto targetFn = runtime->lookupFunction(0x178DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156744u; }
        if (ctx->pc != 0x156744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_178dd0_0x178df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156744u; }
        if (ctx->pc != 0x156744u) { return; }
    }
    ctx->pc = 0x156744u;
    // 0x156744: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x156744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x156748: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x156748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15674c: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15674Cu;
    {
        const bool branch_taken_0x15674c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x156750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15674Cu;
            // 0x156750: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15674c) {
            ctx->pc = 0x156738u;
            runtime->cooperativeGuestYield();
            goto label_156738;
        }
    }
    ctx->pc = 0x156754u;
    // 0x156754: 0xae100000  sw          $s0, 0x0($s0)
    ctx->pc = 0x156754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
label_156758:
    // 0x156758: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x156758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15675c: 0xc08e204  jal         func_238810
    ctx->pc = 0x15675Cu;
    SET_GPR_U32(ctx, 31, 0x156764u);
    ctx->pc = 0x156760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15675Cu;
            // 0x156760: 0xae100004  sw          $s0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238810u;
    if (runtime->hasFunction(0x238810u)) {
        auto targetFn = runtime->lookupFunction(0x238810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156764u; }
        if (ctx->pc != 0x156764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238810_0x238810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156764u; }
        if (ctx->pc != 0x156764u) { return; }
    }
    ctx->pc = 0x156764u;
    // 0x156764: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x156764u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_156768:
    // 0x156768: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x156768u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15676c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x15676cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x156770: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x156770u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x156774: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x156774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x156778: 0x3e00008  jr          $ra
    ctx->pc = 0x156778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15677Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156778u;
            // 0x15677c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x156588u: goto label_156588;
            case 0x1565B8u: goto label_1565b8;
            case 0x1565CCu: goto label_1565cc;
            case 0x1565D8u: goto label_1565d8;
            case 0x156618u: goto label_156618;
            case 0x156654u: goto label_156654;
            case 0x15665Cu: goto label_15665c;
            case 0x156690u: goto label_156690;
            case 0x1566A8u: goto label_1566a8;
            case 0x1566B0u: goto label_1566b0;
            case 0x1566BCu: goto label_1566bc;
            case 0x156700u: goto label_156700;
            case 0x156704u: goto label_156704;
            case 0x156738u: goto label_156738;
            case 0x156758u: goto label_156758;
            case 0x156768u: goto label_156768;
            default: break;
        }
        return;
    }
    ctx->pc = 0x156780u;
}
