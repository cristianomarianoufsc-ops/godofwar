#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026C5F8
// Address: 0x26c5f8 - 0x26c658
void sub_0026C5F8_0x26c5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C5F8_0x26c5f8");
#endif

    ctx->pc = 0x26c5f8u;

    // 0x26c5f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26c5f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26c5fc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x26c5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x26c600: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26c600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26c604: 0xc09ae46  jal         func_26B918
    ctx->pc = 0x26C604u;
    SET_GPR_U32(ctx, 31, 0x26C60Cu);
    ctx->pc = 0x26C608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C604u;
            // 0x26c608: 0xac40137c  sw          $zero, 0x137C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4988), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B918u;
    if (runtime->hasFunction(0x26B918u)) {
        auto targetFn = runtime->lookupFunction(0x26B918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C60Cu; }
        if (ctx->pc != 0x26C60Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026B918_0x26b918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C60Cu; }
        if (ctx->pc != 0x26C60Cu) { return; }
    }
    ctx->pc = 0x26C60Cu;
    // 0x26c60c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26c60cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26c610: 0x3e00008  jr          $ra
    ctx->pc = 0x26C610u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C610u;
            // 0x26c614: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26C618u;
    // 0x26c618: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x26c618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x26c61c: 0x0  nop
    ctx->pc = 0x26c61cu;
    // NOP
    // 0x26c620: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x26c620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26c624: 0x0  nop
    ctx->pc = 0x26c624u;
    // NOP
    // 0x26c628: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x26c628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26c62c: 0x0  nop
    ctx->pc = 0x26c62cu;
    // NOP
    // 0x26c630: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x26c630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26c634: 0x0  nop
    ctx->pc = 0x26c634u;
    // NOP
    // 0x26c638: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x26c638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26c63c: 0x0  nop
    ctx->pc = 0x26c63cu;
    // NOP
    // 0x26c640: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x26c640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26c644: 0x0  nop
    ctx->pc = 0x26c644u;
    // NOP
    // 0x26c648: 0x27bd0120  addiu       $sp, $sp, 0x120
    ctx->pc = 0x26c648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x26c64c: 0x0  nop
    ctx->pc = 0x26c64cu;
    // NOP
    // 0x26c650: 0x27bd0120  addiu       $sp, $sp, 0x120
    ctx->pc = 0x26c650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x26c654: 0x0  nop
    ctx->pc = 0x26c654u;
    // NOP
}
