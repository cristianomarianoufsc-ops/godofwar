#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00186710
// Address: 0x186710 - 0x186818
void sub_00186710_0x186710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186710_0x186710");
#endif

    ctx->pc = 0x186710u;

label_186710:
    // 0x186710: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x186710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x186714: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x186714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x186718: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x186718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x18671c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18671cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x186720: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x186720u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186724: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x186724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x186728: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x186728u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18672c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x18672cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x186730: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x186730u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186734: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x186734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x186738: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x186738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18673c: 0xc05d6ac  jal         func_175AB0
    ctx->pc = 0x18673Cu;
    SET_GPR_U32(ctx, 31, 0x186744u);
    ctx->pc = 0x186740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18673Cu;
            // 0x186740: 0x8e24004c  lw          $a0, 0x4C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175AB0u;
    if (runtime->hasFunction(0x175AB0u)) {
        auto targetFn = runtime->lookupFunction(0x175AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186744u; }
        if (ctx->pc != 0x186744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175AB0_0x175ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186744u; }
        if (ctx->pc != 0x186744u) { return; }
    }
    ctx->pc = 0x186744u;
    // 0x186744: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x186744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x186748: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x186748u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18674c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18674cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x186750: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x186750u;
    {
        const bool branch_taken_0x186750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x186754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186750u;
            // 0x186754: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186750) {
            ctx->pc = 0x1867E8u;
            goto label_1867e8;
        }
    }
    ctx->pc = 0x186758u;
    // 0x186758: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x186758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x18675c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x18675Cu;
    {
        const bool branch_taken_0x18675c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x186760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18675Cu;
            // 0x186760: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18675c) {
            ctx->pc = 0x1867ACu;
            goto label_1867ac;
        }
    }
    ctx->pc = 0x186764u;
    // 0x186764: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x186764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_186768:
    // 0x186768: 0x26350050  addiu       $s5, $s1, 0x50
    ctx->pc = 0x186768u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x18676c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x18676cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x186770: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x186770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186774: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x186774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x186778: 0xc0619c4  jal         func_186710
    ctx->pc = 0x186778u;
    SET_GPR_U32(ctx, 31, 0x186780u);
    ctx->pc = 0x18677Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186778u;
            // 0x18677c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186710u;
    runtime->cooperativeGuestYield();
    goto label_186710;
    ctx->pc = 0x186780u;
label_186780:
    // 0x186780: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x186780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x186784: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x186784u;
    {
        const bool branch_taken_0x186784 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x186788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186784u;
            // 0x186788: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186784) {
            ctx->pc = 0x1867DCu;
            goto label_1867dc;
        }
    }
    ctx->pc = 0x18678Cu;
    // 0x18678c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x18678cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x186790: 0x2a420006  slti        $v0, $s2, 0x6
    ctx->pc = 0x186790u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x186794: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x186794u;
    {
        const bool branch_taken_0x186794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x186798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186794u;
            // 0x186798: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186794) {
            ctx->pc = 0x1867ACu;
            goto label_1867ac;
        }
    }
    ctx->pc = 0x18679Cu;
    // 0x18679c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x18679cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1867a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1867a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1867a4: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1867A4u;
    {
        const bool branch_taken_0x1867a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1867A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1867A4u;
            // 0x1867a8: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1867a4) {
            ctx->pc = 0x186768u;
            runtime->cooperativeGuestYield();
            goto label_186768;
        }
    }
    ctx->pc = 0x1867ACu;
label_1867ac:
    // 0x1867ac: 0xc05d652  jal         func_175948
    ctx->pc = 0x1867ACu;
    SET_GPR_U32(ctx, 31, 0x1867B4u);
    ctx->pc = 0x175948u;
    if (runtime->hasFunction(0x175948u)) {
        auto targetFn = runtime->lookupFunction(0x175948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1867B4u; }
        if (ctx->pc != 0x1867B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175948_0x175958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1867B4u; }
        if (ctx->pc != 0x1867B4u) { return; }
    }
    ctx->pc = 0x1867B4u;
    // 0x1867b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1867b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1867b8: 0xc05d6ac  jal         func_175AB0
    ctx->pc = 0x1867B8u;
    SET_GPR_U32(ctx, 31, 0x1867C0u);
    ctx->pc = 0x1867BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1867B8u;
            // 0x1867bc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175AB0u;
    if (runtime->hasFunction(0x175AB0u)) {
        auto targetFn = runtime->lookupFunction(0x175AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1867C0u; }
        if (ctx->pc != 0x1867C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175AB0_0x175ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1867C0u; }
        if (ctx->pc != 0x1867C0u) { return; }
    }
    ctx->pc = 0x1867C0u;
    // 0x1867c0: 0xc05d652  jal         func_175948
    ctx->pc = 0x1867C0u;
    SET_GPR_U32(ctx, 31, 0x1867C8u);
    ctx->pc = 0x1867C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1867C0u;
            // 0x1867c4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175948u;
    if (runtime->hasFunction(0x175948u)) {
        auto targetFn = runtime->lookupFunction(0x175948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1867C8u; }
        if (ctx->pc != 0x1867C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175948_0x175958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1867C8u; }
        if (ctx->pc != 0x1867C8u) { return; }
    }
    ctx->pc = 0x1867C8u;
    // 0x1867c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1867c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1867cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1867CCu;
    {
        const bool branch_taken_0x1867cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1867D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1867CCu;
            // 0x1867d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1867cc) {
            ctx->pc = 0x1867E4u;
            goto label_1867e4;
        }
    }
    ctx->pc = 0x1867D4u;
    // 0x1867d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1867D4u;
    {
        const bool branch_taken_0x1867d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1867D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1867D4u;
            // 0x1867d8: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1867d4) {
            ctx->pc = 0x1867F0u;
            goto label_1867f0;
        }
    }
    ctx->pc = 0x1867DCu;
label_1867dc:
    // 0x1867dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1867DCu;
    {
        const bool branch_taken_0x1867dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1867E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1867DCu;
            // 0x1867e0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1867dc) {
            ctx->pc = 0x1867F0u;
            goto label_1867f0;
        }
    }
    ctx->pc = 0x1867E4u;
label_1867e4:
    // 0x1867e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1867e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1867e8:
    // 0x1867e8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1867e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1867ec: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1867ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_1867f0:
    // 0x1867f0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1867f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1867f4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1867f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1867f8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1867f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1867fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1867fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x186800: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x186800u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x186804: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x186804u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186808: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x186808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18680c: 0x3e00008  jr          $ra
    ctx->pc = 0x18680Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18680Cu;
            // 0x186810: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x186710u: goto label_186710;
            case 0x186768u: goto label_186768;
            case 0x186780u: goto label_186780;
            case 0x1867ACu: goto label_1867ac;
            case 0x1867DCu: goto label_1867dc;
            case 0x1867E4u: goto label_1867e4;
            case 0x1867E8u: goto label_1867e8;
            case 0x1867F0u: goto label_1867f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x186814u;
    // 0x186814: 0x0  nop
    ctx->pc = 0x186814u;
    // NOP
}
