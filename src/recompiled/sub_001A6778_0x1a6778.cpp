#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A6778
// Address: 0x1a6778 - 0x1a67a0
void sub_001A6778_0x1a6778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6778_0x1a6778");
#endif

    ctx->pc = 0x1a6778u;

    // 0x1a6778: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a6778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a677c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a677cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a6780: 0x8c44ca08  lw          $a0, -0x35F8($v0)
    ctx->pc = 0x1a6780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953480)));
    // 0x1a6784: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a6784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a6788: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1A6788u;
    SET_GPR_U32(ctx, 31, 0x1A6790u);
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6790u; }
        if (ctx->pc != 0x1A6790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6790u; }
        if (ctx->pc != 0x1A6790u) { return; }
    }
    ctx->pc = 0x1A6790u;
    // 0x1a6790: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a6790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6794: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6794u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6794u;
            // 0x1a6798: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A679Cu;
    // 0x1a679c: 0x0  nop
    ctx->pc = 0x1a679cu;
    // NOP
}
