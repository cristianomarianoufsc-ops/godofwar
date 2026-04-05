#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00201550
// Address: 0x201550 - 0x201598
void sub_00201550_0x201550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201550_0x201550");
#endif

    ctx->pc = 0x201550u;

    // 0x201550: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x201550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x201554: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x201554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x201558: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20155c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20155cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201560: 0xc08057a  jal         func_2015E8
    ctx->pc = 0x201560u;
    SET_GPR_U32(ctx, 31, 0x201568u);
    ctx->pc = 0x201564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201560u;
            // 0x201564: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2015E8u;
    if (runtime->hasFunction(0x2015E8u)) {
        auto targetFn = runtime->lookupFunction(0x2015E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201568u; }
        if (ctx->pc != 0x201568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002015E8_0x2015e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201568u; }
        if (ctx->pc != 0x201568u) { return; }
    }
    ctx->pc = 0x201568u;
    // 0x201568: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x201568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x20156c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x20156Cu;
    {
        const bool branch_taken_0x20156c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20156c) {
            ctx->pc = 0x201570u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20156Cu;
            // 0x201570: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x201580u;
            goto label_201580;
        }
    }
    ctx->pc = 0x201574u;
    // 0x201574: 0xc07f390  jal         func_1FCE40
    ctx->pc = 0x201574u;
    SET_GPR_U32(ctx, 31, 0x20157Cu);
    ctx->pc = 0x1FCE40u;
    if (runtime->hasFunction(0x1FCE40u)) {
        auto targetFn = runtime->lookupFunction(0x1FCE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20157Cu; }
        if (ctx->pc != 0x20157Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1fce40_0x1fce50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20157Cu; }
        if (ctx->pc != 0x20157Cu) { return; }
    }
    ctx->pc = 0x20157Cu;
    // 0x20157c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x20157cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_201580:
    // 0x201580: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201584: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x201584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x201588: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x201588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x20158c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20158cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201590: 0x3e00008  jr          $ra
    ctx->pc = 0x201590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201590u;
            // 0x201594: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x201580u: goto label_201580;
            default: break;
        }
        return;
    }
    ctx->pc = 0x201598u;
}
