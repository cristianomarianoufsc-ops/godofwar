#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_17c808
// Address: 0x17c808 - 0x17c860
void entry_17c808_0x17c860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_17c808_0x17c860");
#endif

    ctx->pc = 0x17c808u;

    // 0x17c808: 0x3c070030  lui         $a3, 0x30
    ctx->pc = 0x17c808u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)48 << 16));
    // 0x17c80c: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x17c80cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x17c810: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x17c810u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x17c814: 0x8ce44710  lw          $a0, 0x4710($a3)
    ctx->pc = 0x17c814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 18192)));
    // 0x17c818: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17c818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17c81c: 0x8ca34714  lw          $v1, 0x4714($a1)
    ctx->pc = 0x17c81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18196)));
    // 0x17c820: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17c820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17c824: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17c824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17c828: 0xacc24718  sw          $v0, 0x4718($a2)
    ctx->pc = 0x17c828u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 18200), GPR_U32(ctx, 2));
    // 0x17c82c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x17c82cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x17c830: 0x8cc24718  lw          $v0, 0x4718($a2)
    ctx->pc = 0x17c830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18200)));
    // 0x17c834: 0x8ce34710  lw          $v1, 0x4710($a3)
    ctx->pc = 0x17c834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 18192)));
    // 0x17c838: 0x8ca44714  lw          $a0, 0x4714($a1)
    ctx->pc = 0x17c838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18196)));
    // 0x17c83c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x17c83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x17c840: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x17c840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x17c844: 0xacc24718  sw          $v0, 0x4718($a2)
    ctx->pc = 0x17c844u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 18200), GPR_U32(ctx, 2));
    // 0x17c848: 0x24850020  addiu       $a1, $a0, 0x20
    ctx->pc = 0x17c848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x17c84c: 0xc05f18a  jal         func_17C628
    ctx->pc = 0x17C84Cu;
    SET_GPR_U32(ctx, 31, 0x17C854u);
    ctx->pc = 0x17C850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C84Cu;
            // 0x17c850: 0xace34710  sw          $v1, 0x4710($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 18192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C628u;
    if (runtime->hasFunction(0x17C628u)) {
        auto targetFn = runtime->lookupFunction(0x17C628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C854u; }
        if (ctx->pc != 0x17C854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C628_0x17c628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C854u; }
        if (ctx->pc != 0x17C854u) { return; }
    }
    ctx->pc = 0x17C854u;
    // 0x17c854: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17c854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c858: 0x3e00008  jr          $ra
    ctx->pc = 0x17C858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C858u;
            // 0x17c85c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17C860u;
}
