#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018A6A8
// Address: 0x18a6a8 - 0x18a788
void sub_0018A6A8_0x18a6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A6A8_0x18a6a8");
#endif

    ctx->pc = 0x18a6a8u;

    // 0x18a6a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18a6a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18a6ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x18a6acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18a6b0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x18a6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x18a6b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18a6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18a6b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18a6b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a6bc: 0x3c110030  lui         $s1, 0x30
    ctx->pc = 0x18a6bcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)48 << 16));
    // 0x18a6c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18a6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18a6c4: 0x8e244f20  lw          $a0, 0x4F20($s1)
    ctx->pc = 0x18a6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20256)));
    // 0x18a6c8: 0x8c820140  lw          $v0, 0x140($a0)
    ctx->pc = 0x18a6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 320)));
    // 0x18a6cc: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x18A6CCu;
    {
        const bool branch_taken_0x18a6cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x18A6D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A6CCu;
            // 0x18a6d0: 0x3c070019  lui         $a3, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)25 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a6cc) {
            ctx->pc = 0x18A6F0u;
            goto label_18a6f0;
        }
    }
    ctx->pc = 0x18A6D4u;
    // 0x18a6d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18a6d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a6d8: 0x24e7a788  addiu       $a3, $a3, -0x5878
    ctx->pc = 0x18a6d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294944648));
    // 0x18a6dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18a6dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a6e0: 0xc09d03c  jal         func_2740F0
    ctx->pc = 0x18A6E0u;
    SET_GPR_U32(ctx, 31, 0x18A6E8u);
    ctx->pc = 0x18A6E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A6E0u;
            // 0x18a6e4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2740F0u;
    if (runtime->hasFunction(0x2740F0u)) {
        auto targetFn = runtime->lookupFunction(0x2740F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A6E8u; }
        if (ctx->pc != 0x18A6E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2740f0_0x274220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A6E8u; }
        if (ctx->pc != 0x18A6E8u) { return; }
    }
    ctx->pc = 0x18A6E8u;
    // 0x18a6e8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18A6E8u;
    {
        const bool branch_taken_0x18a6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A6ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A6E8u;
            // 0x18a6ec: 0x8e244f20  lw          $a0, 0x4F20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a6e8) {
            ctx->pc = 0x18A708u;
            goto label_18a708;
        }
    }
    ctx->pc = 0x18A6F0u;
label_18a6f0:
    // 0x18a6f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18a6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a6f4: 0x24e7a788  addiu       $a3, $a3, -0x5878
    ctx->pc = 0x18a6f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294944648));
    // 0x18a6f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18a6f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a6fc: 0xc09d03c  jal         func_2740F0
    ctx->pc = 0x18A6FCu;
    SET_GPR_U32(ctx, 31, 0x18A704u);
    ctx->pc = 0x18A700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A6FCu;
            // 0x18a700: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2740F0u;
    if (runtime->hasFunction(0x2740F0u)) {
        auto targetFn = runtime->lookupFunction(0x2740F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A704u; }
        if (ctx->pc != 0x18A704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2740f0_0x274220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A704u; }
        if (ctx->pc != 0x18A704u) { return; }
    }
    ctx->pc = 0x18A704u;
    // 0x18a704: 0x8e244f20  lw          $a0, 0x4F20($s1)
    ctx->pc = 0x18a704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20256)));
label_18a708:
    // 0x18a708: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18a708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a70c: 0x8c830144  lw          $v1, 0x144($a0)
    ctx->pc = 0x18a70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 324)));
    // 0x18a710: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18A710u;
    {
        const bool branch_taken_0x18a710 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x18A714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A710u;
            // 0x18a714: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a710) {
            ctx->pc = 0x18A72Cu;
            goto label_18a72c;
        }
    }
    ctx->pc = 0x18A718u;
    // 0x18a718: 0x3c070019  lui         $a3, 0x19
    ctx->pc = 0x18a718u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)25 << 16));
    // 0x18a71c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x18a71cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a720: 0x24e7a8f8  addiu       $a3, $a3, -0x5708
    ctx->pc = 0x18a720u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945016));
    // 0x18a724: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18A724u;
    {
        const bool branch_taken_0x18a724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A724u;
            // 0x18a728: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a724) {
            ctx->pc = 0x18A744u;
            goto label_18a744;
        }
    }
    ctx->pc = 0x18A72Cu;
label_18a72c:
    // 0x18a72c: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18A72Cu;
    {
        const bool branch_taken_0x18a72c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x18A730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A72Cu;
            // 0x18a730: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a72c) {
            ctx->pc = 0x18A754u;
            goto label_18a754;
        }
    }
    ctx->pc = 0x18A734u;
    // 0x18a734: 0x3c070019  lui         $a3, 0x19
    ctx->pc = 0x18a734u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)25 << 16));
    // 0x18a738: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x18a738u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a73c: 0x24e7a8f8  addiu       $a3, $a3, -0x5708
    ctx->pc = 0x18a73cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945016));
    // 0x18a740: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x18a740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_18a744:
    // 0x18a744: 0xc09d03c  jal         func_2740F0
    ctx->pc = 0x18A744u;
    SET_GPR_U32(ctx, 31, 0x18A74Cu);
    ctx->pc = 0x18A748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A744u;
            // 0x18a748: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2740F0u;
    if (runtime->hasFunction(0x2740F0u)) {
        auto targetFn = runtime->lookupFunction(0x2740F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A74Cu; }
        if (ctx->pc != 0x18A74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2740f0_0x274220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A74Cu; }
        if (ctx->pc != 0x18A74Cu) { return; }
    }
    ctx->pc = 0x18A74Cu;
    // 0x18a74c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x18A74Cu;
    {
        const bool branch_taken_0x18a74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A74Cu;
            // 0x18a750: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a74c) {
            ctx->pc = 0x18A778u;
            goto label_18a778;
        }
    }
    ctx->pc = 0x18A754u;
label_18a754:
    // 0x18a754: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18A754u;
    {
        const bool branch_taken_0x18a754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18a754) {
            ctx->pc = 0x18A758u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18A754u;
            // 0x18a758: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18A778u;
            goto label_18a778;
        }
    }
    ctx->pc = 0x18A75Cu;
    // 0x18a75c: 0x3c070019  lui         $a3, 0x19
    ctx->pc = 0x18a75cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)25 << 16));
    // 0x18a760: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x18a760u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a764: 0x24e7a8f8  addiu       $a3, $a3, -0x5708
    ctx->pc = 0x18a764u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945016));
    // 0x18a768: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x18a768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18a76c: 0xc09d03c  jal         func_2740F0
    ctx->pc = 0x18A76Cu;
    SET_GPR_U32(ctx, 31, 0x18A774u);
    ctx->pc = 0x18A770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A76Cu;
            // 0x18a770: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2740F0u;
    if (runtime->hasFunction(0x2740F0u)) {
        auto targetFn = runtime->lookupFunction(0x2740F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A774u; }
        if (ctx->pc != 0x18A774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2740f0_0x274220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A774u; }
        if (ctx->pc != 0x18A774u) { return; }
    }
    ctx->pc = 0x18A774u;
    // 0x18a774: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x18a774u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18a778:
    // 0x18a778: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18a778u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a77c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18a77cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a780: 0x3e00008  jr          $ra
    ctx->pc = 0x18A780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A780u;
            // 0x18a784: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18A6F0u: goto label_18a6f0;
            case 0x18A708u: goto label_18a708;
            case 0x18A72Cu: goto label_18a72c;
            case 0x18A744u: goto label_18a744;
            case 0x18A754u: goto label_18a754;
            case 0x18A778u: goto label_18a778;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18A788u;
}
