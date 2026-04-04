#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FF540
// Address: 0x1ff540 - 0x1ff578
void sub_001FF540_0x1ff540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF540_0x1ff540");
#endif

    ctx->pc = 0x1ff540u;

    // 0x1ff540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ff540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ff544: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ff544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ff548: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ff548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ff54c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ff54cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff550: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ff550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ff554: 0xc090aa6  jal         func_242A98
    ctx->pc = 0x1FF554u;
    SET_GPR_U32(ctx, 31, 0x1FF55Cu);
    ctx->pc = 0x1FF558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF554u;
            // 0x1ff558: 0x8c440320  lw          $a0, 0x320($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A98u;
    if (runtime->hasFunction(0x242A98u)) {
        auto targetFn = runtime->lookupFunction(0x242A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF55Cu; }
        if (ctx->pc != 0x1FF55Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a98_0x242d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF55Cu; }
        if (ctx->pc != 0x1FF55Cu) { return; }
    }
    ctx->pc = 0x1FF55Cu;
    // 0x1ff55c: 0x9442024a  lhu         $v0, 0x24A($v0)
    ctx->pc = 0x1ff55cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 586)));
    // 0x1ff560: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ff560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff564: 0xa6020014  sh          $v0, 0x14($s0)
    ctx->pc = 0x1ff564u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ff568: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ff568u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff56c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF56Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF56Cu;
            // 0x1ff570: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FF574u;
    // 0x1ff574: 0x0  nop
    ctx->pc = 0x1ff574u;
    // NOP
}
