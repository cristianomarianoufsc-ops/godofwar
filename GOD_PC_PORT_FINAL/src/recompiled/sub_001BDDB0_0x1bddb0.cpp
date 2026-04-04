#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BDDB0
// Address: 0x1bddb0 - 0x1bdde8
void sub_001BDDB0_0x1bddb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BDDB0_0x1bddb0");
#endif

    ctx->pc = 0x1bddb0u;

    // 0x1bddb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bddb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bddb4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bddb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bddb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bddb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bddbc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1bddbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1bddc0: 0x24425280  addiu       $v0, $v0, 0x5280
    ctx->pc = 0x1bddc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21120));
    // 0x1bddc4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1bddc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1bddc8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1bddc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bddcc: 0x8c44005c  lw          $a0, 0x5C($v0)
    ctx->pc = 0x1bddccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1bddd0: 0xc061bb0  jal         func_186EC0
    ctx->pc = 0x1BDDD0u;
    SET_GPR_U32(ctx, 31, 0x1BDDD8u);
    ctx->pc = 0x1BDDD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDDD0u;
            // 0x1bddd4: 0xac400060  sw          $zero, 0x60($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186EC0u;
    if (runtime->hasFunction(0x186EC0u)) {
        auto targetFn = runtime->lookupFunction(0x186EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDDD8u; }
        if (ctx->pc != 0x1BDDD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186EC0_0x186ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDDD8u; }
        if (ctx->pc != 0x1BDDD8u) { return; }
    }
    ctx->pc = 0x1BDDD8u;
    // 0x1bddd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bddd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bdddc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDDDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDDE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDDDCu;
            // 0x1bdde0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BDDE4u;
    // 0x1bdde4: 0x0  nop
    ctx->pc = 0x1bdde4u;
    // NOP
}
