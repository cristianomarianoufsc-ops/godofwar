#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00173528
// Address: 0x173528 - 0x173570
void sub_00173528_0x173528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173528_0x173528");
#endif

    ctx->pc = 0x173528u;

    // 0x173528: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x173528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17352c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17352cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x173530: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x173530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x173534: 0xc05cd44  jal         func_173510
    ctx->pc = 0x173534u;
    SET_GPR_U32(ctx, 31, 0x17353Cu);
    ctx->pc = 0x173538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173534u;
            // 0x173538: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173510u;
    if (runtime->hasFunction(0x173510u)) {
        auto targetFn = runtime->lookupFunction(0x173510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17353Cu; }
        if (ctx->pc != 0x17353Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_173510_0x173528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17353Cu; }
        if (ctx->pc != 0x17353Cu) { return; }
    }
    ctx->pc = 0x17353Cu;
    // 0x17353c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x17353Cu;
    {
        const bool branch_taken_0x17353c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17353c) {
            ctx->pc = 0x173540u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17353Cu;
            // 0x173540: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x173550u;
            goto label_173550;
        }
    }
    ctx->pc = 0x173544u;
    // 0x173544: 0xc05cd5c  jal         func_173570
    ctx->pc = 0x173544u;
    SET_GPR_U32(ctx, 31, 0x17354Cu);
    ctx->pc = 0x173548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173544u;
            // 0x173548: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173570u;
    if (runtime->hasFunction(0x173570u)) {
        auto targetFn = runtime->lookupFunction(0x173570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17354Cu; }
        if (ctx->pc != 0x17354Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_173570_0x173690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17354Cu; }
        if (ctx->pc != 0x17354Cu) { return; }
    }
    ctx->pc = 0x17354Cu;
    // 0x17354c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x17354cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_173550:
    // 0x173550: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x173550u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173554: 0x216c2  srl         $v0, $v0, 27
    ctx->pc = 0x173554u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 27));
    // 0x173558: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x173558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17355c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17355cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x173560: 0x3e00008  jr          $ra
    ctx->pc = 0x173560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173560u;
            // 0x173564: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173550u: goto label_173550;
            default: break;
        }
        return;
    }
    ctx->pc = 0x173568u;
    // 0x173568: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x173568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17356c: 0x0  nop
    ctx->pc = 0x17356cu;
    // NOP
}
