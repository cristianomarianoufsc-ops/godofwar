#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021EF70
// Address: 0x21ef70 - 0x21efa8
void sub_0021EF70_0x21ef70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021EF70_0x21ef70");
#endif

    ctx->pc = 0x21ef70u;

    // 0x21ef70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21ef70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21ef74: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21ef74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21ef78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21ef78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21ef7c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x21ef7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x21ef80: 0x8c42cb94  lw          $v0, -0x346C($v0)
    ctx->pc = 0x21ef80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x21ef84: 0xac64e588  sw          $a0, -0x1A78($v1)
    ctx->pc = 0x21ef84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960520), GPR_U32(ctx, 4));
    // 0x21ef88: 0xc06f77a  jal         func_1BDDE8
    ctx->pc = 0x21EF88u;
    SET_GPR_U32(ctx, 31, 0x21EF90u);
    ctx->pc = 0x21EF8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21EF88u;
            // 0x21ef8c: 0x8c4401c4  lw          $a0, 0x1C4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 452)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BDDE8u;
    if (runtime->hasFunction(0x1BDDE8u)) {
        auto targetFn = runtime->lookupFunction(0x1BDDE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EF90u; }
        if (ctx->pc != 0x21EF90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BDDE8_0x1bdde8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EF90u; }
        if (ctx->pc != 0x21EF90u) { return; }
    }
    ctx->pc = 0x21EF90u;
    // 0x21ef90: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x21ef90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x21ef94: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21ef94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21ef98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21ef98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ef9c: 0xac43e560  sw          $v1, -0x1AA0($v0)
    ctx->pc = 0x21ef9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960480), GPR_U32(ctx, 3));
    // 0x21efa0: 0x3e00008  jr          $ra
    ctx->pc = 0x21EFA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21EFA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EFA0u;
            // 0x21efa4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21EFA8u;
}
