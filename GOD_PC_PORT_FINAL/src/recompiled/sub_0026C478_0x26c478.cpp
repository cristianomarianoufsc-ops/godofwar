#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026C478
// Address: 0x26c478 - 0x26c4b8
void sub_0026C478_0x26c478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C478_0x26c478");
#endif

    ctx->pc = 0x26c478u;

    // 0x26c478: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x26c478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x26c47c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26c47cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26c480: 0x8c421378  lw          $v0, 0x1378($v0)
    ctx->pc = 0x26c480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4984)));
    // 0x26c484: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x26c484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x26c488: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26c488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26c48c: 0x24631358  addiu       $v1, $v1, 0x1358
    ctx->pc = 0x26c48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4952));
    // 0x26c490: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26c490u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26c494: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26c494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26c498: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26c498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26c49c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26c49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26c4a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26c4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26c4a4: 0xc09ae46  jal         func_26B918
    ctx->pc = 0x26C4A4u;
    SET_GPR_U32(ctx, 31, 0x26C4ACu);
    ctx->pc = 0x26C4A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C4A4u;
            // 0x26c4a8: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B918u;
    if (runtime->hasFunction(0x26B918u)) {
        auto targetFn = runtime->lookupFunction(0x26B918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C4ACu; }
        if (ctx->pc != 0x26C4ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026B918_0x26b918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C4ACu; }
        if (ctx->pc != 0x26C4ACu) { return; }
    }
    ctx->pc = 0x26C4ACu;
    // 0x26c4ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26c4acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26c4b0: 0x3e00008  jr          $ra
    ctx->pc = 0x26C4B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C4B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C4B0u;
            // 0x26c4b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26C4B8u;
}
