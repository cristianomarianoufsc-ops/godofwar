#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026E540
// Address: 0x26e540 - 0x26e5d8
void sub_0026E540_0x26e540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026E540_0x26e540");
#endif

    ctx->pc = 0x26e540u;

    // 0x26e540: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26e540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26e544: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x26e544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x26e548: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26e548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26e54c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26e54cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e550: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26e550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26e554: 0xc0a648c  jal         func_299230
    ctx->pc = 0x26E554u;
    SET_GPR_U32(ctx, 31, 0x26E55Cu);
    ctx->pc = 0x26E558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E554u;
            // 0x26e558: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299230u;
    if (runtime->hasFunction(0x299230u)) {
        auto targetFn = runtime->lookupFunction(0x299230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E55Cu; }
        if (ctx->pc != 0x26E55Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299230_0x299280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E55Cu; }
        if (ctx->pc != 0x26E55Cu) { return; }
    }
    ctx->pc = 0x26E55Cu;
    // 0x26e55c: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x26e55cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x26e560: 0x8c62a588  lw          $v0, -0x5A78($v1)
    ctx->pc = 0x26e560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944136)));
    // 0x26e564: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26E564u;
    {
        const bool branch_taken_0x26e564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E564u;
            // 0x26e568: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e564) {
            ctx->pc = 0x26E580u;
            goto label_26e580;
        }
    }
    ctx->pc = 0x26E56Cu;
    // 0x26e56c: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x26e56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x26e570: 0xac70a588  sw          $s0, -0x5A78($v1)
    ctx->pc = 0x26e570u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294944136), GPR_U32(ctx, 16));
    // 0x26e574: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x26E574u;
    {
        const bool branch_taken_0x26e574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E574u;
            // 0x26e578: 0xac51a5a8  sw          $s1, -0x5A58($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294944168), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e574) {
            ctx->pc = 0x26E5BCu;
            goto label_26e5bc;
        }
    }
    ctx->pc = 0x26E57Cu;
    // 0x26e57c: 0x0  nop
    ctx->pc = 0x26e57cu;
    // NOP
label_26e580:
    // 0x26e580: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x26e580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_26e584:
    // 0x26e584: 0x28820008  slti        $v0, $a0, 0x8
    ctx->pc = 0x26e584u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x26e588: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x26E588u;
    {
        const bool branch_taken_0x26e588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E58Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E588u;
            // 0x26e58c: 0x3c020031  lui         $v0, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e588) {
            ctx->pc = 0x26E5BCu;
            goto label_26e5bc;
        }
    }
    ctx->pc = 0x26E590u;
    // 0x26e590: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x26e590u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x26e594: 0x2442a588  addiu       $v0, $v0, -0x5A78
    ctx->pc = 0x26e594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944136));
    // 0x26e598: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x26e598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x26e59c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26e59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26e5a0: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x26E5A0u;
    {
        const bool branch_taken_0x26e5a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E5A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E5A0u;
            // 0x26e5a4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e5a0) {
            ctx->pc = 0x26E584u;
            runtime->cooperativeGuestYield();
            goto label_26e584;
        }
    }
    ctx->pc = 0x26E5A8u;
    // 0x26e5a8: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x26e5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x26e5ac: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x26e5acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x26e5b0: 0x2442a5a8  addiu       $v0, $v0, -0x5A58
    ctx->pc = 0x26e5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944168));
    // 0x26e5b4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x26e5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x26e5b8: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x26e5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_26e5bc:
    // 0x26e5bc: 0xc0a64a0  jal         func_299280
    ctx->pc = 0x26E5BCu;
    SET_GPR_U32(ctx, 31, 0x26E5C4u);
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E5C4u; }
        if (ctx->pc != 0x26E5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299280_0x299298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E5C4u; }
        if (ctx->pc != 0x26E5C4u) { return; }
    }
    ctx->pc = 0x26E5C4u;
    // 0x26e5c4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x26e5c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26e5c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26e5c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26e5cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26e5ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26e5d0: 0x3e00008  jr          $ra
    ctx->pc = 0x26E5D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26E5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E5D0u;
            // 0x26e5d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26E580u: goto label_26e580;
            case 0x26E584u: goto label_26e584;
            case 0x26E5BCu: goto label_26e5bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26E5D8u;
}
