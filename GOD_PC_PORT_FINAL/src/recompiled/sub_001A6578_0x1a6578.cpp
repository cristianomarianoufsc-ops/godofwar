#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A6578
// Address: 0x1a6578 - 0x1a6670
void sub_001A6578_0x1a6578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6578_0x1a6578");
#endif

    ctx->pc = 0x1a6578u;

    // 0x1a6578: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a6578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a657c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1a657cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1a6580: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1a6580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1a6584: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a6584u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6588: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a6588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a658c: 0xc06cd42  jal         func_1B3508
    ctx->pc = 0x1A658Cu;
    SET_GPR_U32(ctx, 31, 0x1A6594u);
    ctx->pc = 0x1A6590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A658Cu;
            // 0x1a6590: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3508u;
    if (runtime->hasFunction(0x1B3508u)) {
        auto targetFn = runtime->lookupFunction(0x1B3508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6594u; }
        if (ctx->pc != 0x1A6594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3508_0x1b3508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6594u; }
        if (ctx->pc != 0x1A6594u) { return; }
    }
    ctx->pc = 0x1A6594u;
    // 0x1a6594: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a6594u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6598: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x1A6598u;
    {
        const bool branch_taken_0x1a6598 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A659Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6598u;
            // 0x1a659c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6598) {
            ctx->pc = 0x1A6660u;
            goto label_1a6660;
        }
    }
    ctx->pc = 0x1A65A0u;
    // 0x1a65a0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1a65a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1a65a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a65a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a65a8: 0x8e260098  lw          $a2, 0x98($s1)
    ctx->pc = 0x1a65a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x1a65ac: 0x1043002c  beq         $v0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x1A65ACu;
    {
        const bool branch_taken_0x1a65ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A65B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A65ACu;
            // 0x1a65b0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a65ac) {
            ctx->pc = 0x1A6660u;
            goto label_1a6660;
        }
    }
    ctx->pc = 0x1A65B4u;
    // 0x1a65b4: 0x0  nop
    ctx->pc = 0x1a65b4u;
    // NOP
label_1a65b8:
    // 0x1a65b8: 0x8fb00004  lw          $s0, 0x4($sp)
    ctx->pc = 0x1a65b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a65bc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a65bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a65c0: 0x54c20023  bnel        $a2, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1A65C0u;
    {
        const bool branch_taken_0x1a65c0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a65c0) {
            ctx->pc = 0x1A65C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A65C0u;
            // 0x1a65c4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A6650u;
            goto label_1a6650;
        }
    }
    ctx->pc = 0x1A65C8u;
    // 0x1a65c8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a65c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a65cc: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A65CCu;
    {
        const bool branch_taken_0x1a65cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A65D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A65CCu;
            // 0x1a65d0: 0x3c05001b  lui         $a1, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a65cc) {
            ctx->pc = 0x1A6618u;
            goto label_1a6618;
        }
    }
    ctx->pc = 0x1A65D4u;
    // 0x1a65d4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1a65d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1a65d8: 0x8c43e84c  lw          $v1, -0x17B4($v0)
    ctx->pc = 0x1a65d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x1a65dc: 0x8c6700d4  lw          $a3, 0xD4($v1)
    ctx->pc = 0x1a65dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x1a65e0: 0x8c640044  lw          $a0, 0x44($v1)
    ctx->pc = 0x1a65e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x1a65e4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1a65e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1a65e8: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x1a65e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1a65ec: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1a65ecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1a65f0: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1a65f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1a65f4: 0x8e250088  lw          $a1, 0x88($s1)
    ctx->pc = 0x1a65f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x1a65f8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a65f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a65fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a65fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a6600: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x1a6600u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1a6604: 0xc04d732  jal         func_135CC8
    ctx->pc = 0x1A6604u;
    SET_GPR_U32(ctx, 31, 0x1A660Cu);
    ctx->pc = 0x1A6608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6604u;
            // 0x1a6608: 0x8ce40000  lw          $a0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135CC8u;
    if (runtime->hasFunction(0x135CC8u)) {
        auto targetFn = runtime->lookupFunction(0x135CC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A660Cu; }
        if (ctx->pc != 0x1A660Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_135cc8_0x135f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A660Cu; }
        if (ctx->pc != 0x1A660Cu) { return; }
    }
    ctx->pc = 0x1A660Cu;
    // 0x1a660c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A660Cu;
    {
        const bool branch_taken_0x1a660c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A660Cu;
            // 0x1a6610: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a660c) {
            ctx->pc = 0x1A665Cu;
            goto label_1a665c;
        }
    }
    ctx->pc = 0x1A6614u;
    // 0x1a6614: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x1a6614u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
label_1a6618:
    // 0x1a6618: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1a6618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a661c: 0x24a5d850  addiu       $a1, $a1, -0x27B0
    ctx->pc = 0x1a661cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957136));
    // 0x1a6620: 0xc04d290  jal         func_134A40
    ctx->pc = 0x1A6620u;
    SET_GPR_U32(ctx, 31, 0x1A6628u);
    ctx->pc = 0x1A6624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6620u;
            // 0x1a6624: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134A40u;
    if (runtime->hasFunction(0x134A40u)) {
        auto targetFn = runtime->lookupFunction(0x134A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6628u; }
        if (ctx->pc != 0x1A6628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_134a40_0x134a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6628u; }
        if (ctx->pc != 0x1A6628u) { return; }
    }
    ctx->pc = 0x1A6628u;
    // 0x1a6628: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a6628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a662c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1A662Cu;
    {
        const bool branch_taken_0x1a662c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a662c) {
            ctx->pc = 0x1A6630u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A662Cu;
            // 0x1a6630: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A6660u;
            goto label_1a6660;
        }
    }
    ctx->pc = 0x1A6634u;
    // 0x1a6634: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a6634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1a6638: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A6638u;
    {
        const bool branch_taken_0x1a6638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a6638) {
            ctx->pc = 0x1A663Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6638u;
            // 0x1a663c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A6660u;
            goto label_1a6660;
        }
    }
    ctx->pc = 0x1A6640u;
    // 0x1a6640: 0xc0698de  jal         func_1A6378
    ctx->pc = 0x1A6640u;
    SET_GPR_U32(ctx, 31, 0x1A6648u);
    ctx->pc = 0x1A6644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6640u;
            // 0x1a6644: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6378u;
    if (runtime->hasFunction(0x1A6378u)) {
        auto targetFn = runtime->lookupFunction(0x1A6378u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6648u; }
        if (ctx->pc != 0x1A6648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6378_0x1a6378(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6648u; }
        if (ctx->pc != 0x1A6648u) { return; }
    }
    ctx->pc = 0x1A6648u;
    // 0x1a6648: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A6648u;
    {
        const bool branch_taken_0x1a6648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A664Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6648u;
            // 0x1a664c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6648) {
            ctx->pc = 0x1A6660u;
            goto label_1a6660;
        }
    }
    ctx->pc = 0x1A6650u;
label_1a6650:
    // 0x1a6650: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1a6650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6654: 0x1443ffd8  bne         $v0, $v1, . + 4 + (-0x28 << 2)
    ctx->pc = 0x1A6654u;
    {
        const bool branch_taken_0x1a6654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A6658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6654u;
            // 0x1a6658: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6654) {
            ctx->pc = 0x1A65B8u;
            runtime->cooperativeGuestYield();
            goto label_1a65b8;
        }
    }
    ctx->pc = 0x1A665Cu;
label_1a665c:
    // 0x1a665c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1a665cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a6660:
    // 0x1a6660: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1a6660u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a6664: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a6664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6668: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6668u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A666Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6668u;
            // 0x1a666c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A65B8u: goto label_1a65b8;
            case 0x1A6618u: goto label_1a6618;
            case 0x1A6650u: goto label_1a6650;
            case 0x1A665Cu: goto label_1a665c;
            case 0x1A6660u: goto label_1a6660;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A6670u;
}
