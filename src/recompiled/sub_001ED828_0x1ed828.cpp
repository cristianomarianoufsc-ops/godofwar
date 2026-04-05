#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ED828
// Address: 0x1ed828 - 0x1ed880
void sub_001ED828_0x1ed828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED828_0x1ed828");
#endif

    ctx->pc = 0x1ed828u;

    // 0x1ed828: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ed828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ed82c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ed82cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ed830: 0x8c43e2a4  lw          $v1, -0x1D5C($v0)
    ctx->pc = 0x1ed830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959780)));
    // 0x1ed834: 0x24040170  addiu       $a0, $zero, 0x170
    ctx->pc = 0x1ed834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 368));
    // 0x1ed838: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ed838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ed83c: 0x8c620750  lw          $v0, 0x750($v1)
    ctx->pc = 0x1ed83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1872)));
    // 0x1ed840: 0x442818  mult        $a1, $v0, $a0
    ctx->pc = 0x1ed840u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1ed844: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x1ed844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ed848: 0x8c4301d0  lw          $v1, 0x1D0($v0)
    ctx->pc = 0x1ed848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 464)));
    // 0x1ed84c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1ed84cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1ed850: 0x8c46e84c  lw          $a2, -0x17B4($v0)
    ctx->pc = 0x1ed850u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x1ed854: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x1ed854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1ed858: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x1ed858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x1ed85c: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1ed85cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1ed860: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1ed860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1ed864: 0x40f809  jalr        $v0
    ctx->pc = 0x1ED864u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ED86Cu);
        ctx->pc = 0x1ED868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED864u;
            // 0x1ed868: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1ED86Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1ED86Cu; }
            if (ctx->pc != 0x1ED86Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1ED86Cu;
    // 0x1ed86c: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x1ed86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1ed870: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ed870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed874: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED874u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED874u;
            // 0x1ed878: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ED87Cu;
    // 0x1ed87c: 0x0  nop
    ctx->pc = 0x1ed87cu;
    // NOP
}
