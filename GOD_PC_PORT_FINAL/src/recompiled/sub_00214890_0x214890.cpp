#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00214890
// Address: 0x214890 - 0x214958
void sub_00214890_0x214890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214890_0x214890");
#endif

    ctx->pc = 0x214890u;

    // 0x214890: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x214890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x214894: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x214894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x214898: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x214898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x21489c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x21489cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2148a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2148a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2148a4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2148a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2148a8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2148a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2148ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2148acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2148b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2148b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2148b4: 0x8e2301d8  lw          $v1, 0x1D8($s1)
    ctx->pc = 0x2148b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 472)));
    // 0x2148b8: 0x1242000b  beq         $s2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2148B8u;
    {
        const bool branch_taken_0x2148b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2148BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2148B8u;
            // 0x2148bc: 0x8c70001c  lw          $s0, 0x1C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2148b8) {
            ctx->pc = 0x2148E8u;
            goto label_2148e8;
        }
    }
    ctx->pc = 0x2148C0u;
    // 0x2148c0: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2148C0u;
    {
        const bool branch_taken_0x2148c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2148C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2148C0u;
            // 0x2148c4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2148c0) {
            ctx->pc = 0x2148D8u;
            goto label_2148d8;
        }
    }
    ctx->pc = 0x2148C8u;
    // 0x2148c8: 0x5242000b  beql        $s2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2148C8u;
    {
        const bool branch_taken_0x2148c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x2148c8) {
            ctx->pc = 0x2148CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2148C8u;
            // 0x2148cc: 0x8e2401c0  lw          $a0, 0x1C0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 448)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2148F8u;
            goto label_2148f8;
        }
    }
    ctx->pc = 0x2148D0u;
    // 0x2148d0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2148D0u;
    {
        const bool branch_taken_0x2148d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2148d0) {
            ctx->pc = 0x214918u;
            goto label_214918;
        }
    }
    ctx->pc = 0x2148D8u;
label_2148d8:
    // 0x2148d8: 0x8e2401c0  lw          $a0, 0x1C0($s1)
    ctx->pc = 0x2148d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 448)));
    // 0x2148dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2148dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2148e0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2148E0u;
    {
        const bool branch_taken_0x2148e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2148E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2148E0u;
            // 0x2148e4: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2148e0) {
            ctx->pc = 0x2148FCu;
            goto label_2148fc;
        }
    }
    ctx->pc = 0x2148E8u;
label_2148e8:
    // 0x2148e8: 0x8e2401c0  lw          $a0, 0x1C0($s1)
    ctx->pc = 0x2148e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 448)));
    // 0x2148ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2148ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2148f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2148F0u;
    {
        const bool branch_taken_0x2148f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2148F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2148F0u;
            // 0x2148f4: 0x24840060  addiu       $a0, $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2148f0) {
            ctx->pc = 0x2148FCu;
            goto label_2148fc;
        }
    }
    ctx->pc = 0x2148F8u;
label_2148f8:
    // 0x2148f8: 0x24840078  addiu       $a0, $a0, 0x78
    ctx->pc = 0x2148f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 120));
label_2148fc:
    // 0x2148fc: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x2148FCu;
    SET_GPR_U32(ctx, 31, 0x214904u);
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214904u; }
        if (ctx->pc != 0x214904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214904u; }
        if (ctx->pc != 0x214904u) { return; }
    }
    ctx->pc = 0x214904u;
    // 0x214904: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x214904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214908: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x214908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21490c: 0xc045ab2  jal         func_116AC8
    ctx->pc = 0x21490Cu;
    SET_GPR_U32(ctx, 31, 0x214914u);
    ctx->pc = 0x214910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21490Cu;
            // 0x214910: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116AC8u;
    if (runtime->hasFunction(0x116AC8u)) {
        auto targetFn = runtime->lookupFunction(0x116AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214914u; }
        if (ctx->pc != 0x214914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_116ac8_0x116b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214914u; }
        if (ctx->pc != 0x214914u) { return; }
    }
    ctx->pc = 0x214914u;
    // 0x214914: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x214914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_214918:
    // 0x214918: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x214918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x21491c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21491cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x214920: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x214920u;
    {
        const bool branch_taken_0x214920 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x214924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214920u;
            // 0x214924: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214920) {
            ctx->pc = 0x214940u;
            goto label_214940;
        }
    }
    ctx->pc = 0x214928u;
    // 0x214928: 0x8e2401d8  lw          $a0, 0x1D8($s1)
    ctx->pc = 0x214928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 472)));
    // 0x21492c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21492cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214930: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x214930u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x214934: 0xc0401f2  jal         func_1007C8
    ctx->pc = 0x214934u;
    SET_GPR_U32(ctx, 31, 0x21493Cu);
    ctx->pc = 0x214938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214934u;
            // 0x214938: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1007C8u;
    if (runtime->hasFunction(0x1007C8u)) {
        auto targetFn = runtime->lookupFunction(0x1007C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21493Cu; }
        if (ctx->pc != 0x21493Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001007C8_0x1007c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21493Cu; }
        if (ctx->pc != 0x21493Cu) { return; }
    }
    ctx->pc = 0x21493Cu;
    // 0x21493c: 0xae3201d0  sw          $s2, 0x1D0($s1)
    ctx->pc = 0x21493cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 464), GPR_U32(ctx, 18));
label_214940:
    // 0x214940: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x214940u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x214944: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x214944u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x214948: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x214948u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21494c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21494cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214950: 0x3e00008  jr          $ra
    ctx->pc = 0x214950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214950u;
            // 0x214954: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2148D8u: goto label_2148d8;
            case 0x2148E8u: goto label_2148e8;
            case 0x2148F8u: goto label_2148f8;
            case 0x2148FCu: goto label_2148fc;
            case 0x214918u: goto label_214918;
            case 0x214940u: goto label_214940;
            default: break;
        }
        return;
    }
    ctx->pc = 0x214958u;
}
