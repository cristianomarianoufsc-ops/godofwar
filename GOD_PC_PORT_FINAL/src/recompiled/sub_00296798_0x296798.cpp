#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00296798
// Address: 0x296798 - 0x2967d0
void sub_00296798_0x296798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296798_0x296798");
#endif

    ctx->pc = 0x296798u;

    // 0x296798: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x296798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29679c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29679cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2967a0: 0xc0a51be  jal         func_2946F8
    ctx->pc = 0x2967A0u;
    SET_GPR_U32(ctx, 31, 0x2967A8u);
    ctx->pc = 0x2967A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2967A0u;
            // 0x2967a4: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2946F8u;
    if (runtime->hasFunction(0x2946F8u)) {
        auto targetFn = runtime->lookupFunction(0x2946F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2967A8u; }
        if (ctx->pc != 0x2967A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002946F8_0x2946f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2967A8u; }
        if (ctx->pc != 0x2967A8u) { return; }
    }
    ctx->pc = 0x2967A8u;
    // 0x2967a8: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x2967a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
    // 0x2967ac: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2967acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2967b0: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2967B0u;
    SET_GPR_U32(ctx, 31, 0x2967B8u);
    ctx->pc = 0x2967B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2967B0u;
            // 0x2967b4: 0x8c657894  lw          $a1, 0x7894($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 30868)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (runtime->hasFunction(0x293950u)) {
        auto targetFn = runtime->lookupFunction(0x293950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2967B8u; }
        if (ctx->pc != 0x2967B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293950_0x293960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2967B8u; }
        if (ctx->pc != 0x2967B8u) { return; }
    }
    ctx->pc = 0x2967B8u;
    // 0x2967b8: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x2967b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x2967bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2967bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2967c0: 0xac604ab8  sw          $zero, 0x4AB8($v1)
    ctx->pc = 0x2967c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 19128), GPR_U32(ctx, 0));
    // 0x2967c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2967C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2967C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2967C4u;
            // 0x2967c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2967CCu;
    // 0x2967cc: 0x0  nop
    ctx->pc = 0x2967ccu;
    // NOP
}
