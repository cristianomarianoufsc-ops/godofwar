#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B35B0
// Address: 0x1b35b0 - 0x1b3728
void sub_001B35B0_0x1b35b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B35B0_0x1b35b0");
#endif

    ctx->pc = 0x1b35b0u;

    // 0x1b35b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1b35b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1b35b4: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1b35b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1b35b8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1b35b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x1b35bc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1b35bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b35c0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1b35c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1b35c4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1b35c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b35c8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1b35c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1b35cc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1b35ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1b35d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b35d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b35d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b35d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b35d8: 0x2403006c  addiu       $v1, $zero, 0x6C
    ctx->pc = 0x1b35d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x1b35dc: 0x0  nop
    ctx->pc = 0x1b35dcu;
    // NOP
label_1b35e0:
    // 0x1b35e0: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1b35e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1b35e4: 0x2831818  mult        $v1, $s4, $v1
    ctx->pc = 0x1b35e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1b35e8: 0x24422668  addiu       $v0, $v0, 0x2668
    ctx->pc = 0x1b35e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9832));
    // 0x1b35ec: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x1b35ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b35f0: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x1b35f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1b35f4: 0x54550040  bnel        $v0, $s5, . + 4 + (0x40 << 2)
    ctx->pc = 0x1B35F4u;
    {
        const bool branch_taken_0x1b35f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x1b35f4) {
            ctx->pc = 0x1B35F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B35F4u;
            // 0x1b35f8: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B36F8u;
            goto label_1b36f8;
        }
    }
    ctx->pc = 0x1B35FCu;
    // 0x1b35fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b35fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3600: 0xc06c446  jal         func_1B1118
    ctx->pc = 0x1B3600u;
    SET_GPR_U32(ctx, 31, 0x1B3608u);
    ctx->pc = 0x1B3604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3600u;
            // 0x1b3604: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1118u;
    if (runtime->hasFunction(0x1B1118u)) {
        auto targetFn = runtime->lookupFunction(0x1B1118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3608u; }
        if (ctx->pc != 0x1B3608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1118_0x1b1118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3608u; }
        if (ctx->pc != 0x1B3608u) { return; }
    }
    ctx->pc = 0x1B3608u;
    // 0x1b3608: 0xc06d242  jal         func_1B4908
    ctx->pc = 0x1B3608u;
    SET_GPR_U32(ctx, 31, 0x1B3610u);
    ctx->pc = 0x1B360Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3608u;
            // 0x1b360c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4908u;
    if (runtime->hasFunction(0x1B4908u)) {
        auto targetFn = runtime->lookupFunction(0x1B4908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3610u; }
        if (ctx->pc != 0x1B3610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4908_0x1b4908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3610u; }
        if (ctx->pc != 0x1B3610u) { return; }
    }
    ctx->pc = 0x1B3610u;
    // 0x1b3610: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x1b3610u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1b3614: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x1b3614u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x1b3618: 0x24a552b4  addiu       $a1, $a1, 0x52B4
    ctx->pc = 0x1b3618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21172));
    // 0x1b361c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b361cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3620: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1b3620u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b3624: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b3624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3628: 0xc06ce58  jal         func_1B3960
    ctx->pc = 0x1B3628u;
    SET_GPR_U32(ctx, 31, 0x1B3630u);
    ctx->pc = 0x1B362Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3628u;
            // 0x1b362c: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3960u;
    if (runtime->hasFunction(0x1B3960u)) {
        auto targetFn = runtime->lookupFunction(0x1B3960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3630u; }
        if (ctx->pc != 0x1B3630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3960_0x1b3960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3630u; }
        if (ctx->pc != 0x1B3630u) { return; }
    }
    ctx->pc = 0x1B3630u;
    // 0x1b3630: 0x96020062  lhu         $v0, 0x62($s0)
    ctx->pc = 0x1b3630u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 98)));
    // 0x1b3634: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1B3634u;
    {
        const bool branch_taken_0x1b3634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3634) {
            ctx->pc = 0x1B3638u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3634u;
            // 0x1b3638: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B3698u;
            goto label_1b3698;
        }
    }
    ctx->pc = 0x1B363Cu;
    // 0x1b363c: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x1b363cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_1b3640:
    // 0x1b3640: 0x129880  sll         $s3, $s2, 2
    ctx->pc = 0x1b3640u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1b3644: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1b3644u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1b3648: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1b3648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1b364c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1b364cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3650: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1B3650u;
    {
        const bool branch_taken_0x1b3650 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3650u;
            // 0x1b3654: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3650) {
            ctx->pc = 0x1B3684u;
            goto label_1b3684;
        }
    }
    ctx->pc = 0x1B3658u;
    // 0x1b3658: 0xc06a664  jal         func_1A9990
    ctx->pc = 0x1B3658u;
    SET_GPR_U32(ctx, 31, 0x1B3660u);
    ctx->pc = 0x1A9990u;
    if (runtime->hasFunction(0x1A9990u)) {
        auto targetFn = runtime->lookupFunction(0x1A9990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3660u; }
        if (ctx->pc != 0x1B3660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9990_0x1a9990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3660u; }
        if (ctx->pc != 0x1B3660u) { return; }
    }
    ctx->pc = 0x1B3660u;
    // 0x1b3660: 0x8e2200a4  lw          $v0, 0xA4($s1)
    ctx->pc = 0x1b3660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x1b3664: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b3664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b3668: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1b3668u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1b366c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1b366cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1b3670: 0x40f809  jalr        $v0
    ctx->pc = 0x1B3670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B3678u);
        ctx->pc = 0x1B3674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3670u;
            // 0x1b3674: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B3678u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B35E0u: goto label_1b35e0;
            case 0x1B3640u: goto label_1b3640;
            case 0x1B3684u: goto label_1b3684;
            case 0x1B3698u: goto label_1b3698;
            case 0x1B36A0u: goto label_1b36a0;
            case 0x1B36ECu: goto label_1b36ec;
            case 0x1B36F8u: goto label_1b36f8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B3678u; }
            if (ctx->pc != 0x1B3678u) { return; }
        }
        }
    }
    ctx->pc = 0x1B3678u;
    // 0x1b3678: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x1b3678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1b367c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1b367cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1b3680: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1b3680u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1b3684:
    // 0x1b3684: 0x96020062  lhu         $v0, 0x62($s0)
    ctx->pc = 0x1b3684u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 98)));
    // 0x1b3688: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1b3688u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b368c: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1B368Cu;
    {
        const bool branch_taken_0x1b368c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b368c) {
            ctx->pc = 0x1B3690u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B368Cu;
            // 0x1b3690: 0x8e020064  lw          $v0, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B3640u;
            runtime->cooperativeGuestYield();
            goto label_1b3640;
        }
    }
    ctx->pc = 0x1B3694u;
    // 0x1b3694: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b3694u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b3698:
    // 0x1b3698: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x1b3698u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b369c: 0x0  nop
    ctx->pc = 0x1b369cu;
    // NOP
label_1b36a0:
    // 0x1b36a0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1b36a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1b36a4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1b36a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1b36a8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1b36a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1b36ac: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1b36acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1b36b0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1b36b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1b36b4: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x1b36b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b36b8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B36B8u;
    {
        const bool branch_taken_0x1b36b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B36BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B36B8u;
            // 0x1b36bc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b36b8) {
            ctx->pc = 0x1B36A0u;
            runtime->cooperativeGuestYield();
            goto label_1b36a0;
        }
    }
    ctx->pc = 0x1B36C0u;
    // 0x1b36c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b36c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b36c4: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x1b36c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1b36c8: 0xa6020060  sh          $v0, 0x60($s0)
    ctx->pc = 0x1b36c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b36cc: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1b36ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1b36d0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1b36d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1b36d4: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1b36d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1b36d8: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1b36d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1b36dc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B36DCu;
    {
        const bool branch_taken_0x1b36dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B36E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B36DCu;
            // 0x1b36e0: 0xa6000062  sh          $zero, 0x62($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 98), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b36dc) {
            ctx->pc = 0x1B36ECu;
            goto label_1b36ec;
        }
    }
    ctx->pc = 0x1B36E4u;
    // 0x1b36e4: 0xc04f5b0  jal         func_13D6C0
    ctx->pc = 0x1B36E4u;
    SET_GPR_U32(ctx, 31, 0x1B36ECu);
    ctx->pc = 0x13D6C0u;
    if (runtime->hasFunction(0x13D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x13D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B36ECu; }
        if (ctx->pc != 0x1B36ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D6C0_0x13d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B36ECu; }
        if (ctx->pc != 0x1B36ECu) { return; }
    }
    ctx->pc = 0x1B36ECu;
label_1b36ec:
    // 0x1b36ec: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x1b36ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x1b36f0: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1b36f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x1b36f4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1b36f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1b36f8:
    // 0x1b36f8: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x1b36f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b36fc: 0x1440ffb8  bnez        $v0, . + 4 + (-0x48 << 2)
    ctx->pc = 0x1B36FCu;
    {
        const bool branch_taken_0x1b36fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B36FCu;
            // 0x1b3700: 0x2403006c  addiu       $v1, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b36fc) {
            ctx->pc = 0x1B35E0u;
            runtime->cooperativeGuestYield();
            goto label_1b35e0;
        }
    }
    ctx->pc = 0x1B3704u;
    // 0x1b3704: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1b3704u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b3708: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1b3708u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b370c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1b370cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b3710: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b3710u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b3714: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1b3714u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b3718: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x1b3718u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b371c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b371cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3720: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3720u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3720u;
            // 0x1b3724: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B35E0u: goto label_1b35e0;
            case 0x1B3640u: goto label_1b3640;
            case 0x1B3684u: goto label_1b3684;
            case 0x1B3698u: goto label_1b3698;
            case 0x1B36A0u: goto label_1b36a0;
            case 0x1B36ECu: goto label_1b36ec;
            case 0x1B36F8u: goto label_1b36f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B3728u;
}
