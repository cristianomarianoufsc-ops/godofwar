#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00297D38
// Address: 0x297d38 - 0x297d68
void sub_00297D38_0x297d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297D38_0x297d38");
#endif

    ctx->pc = 0x297d38u;

    // 0x297d38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x297d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x297d3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x297d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x297d40: 0xc0a5f38  jal         func_297CE0
    ctx->pc = 0x297D40u;
    SET_GPR_U32(ctx, 31, 0x297D48u);
    ctx->pc = 0x297CE0u;
    if (runtime->hasFunction(0x297CE0u)) {
        auto targetFn = runtime->lookupFunction(0x297CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297D48u; }
        if (ctx->pc != 0x297D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297CE0_0x297ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297D48u; }
        if (ctx->pc != 0x297D48u) { return; }
    }
    ctx->pc = 0x297D48u;
    // 0x297d48: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x297d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x297d4c: 0xc0a4f18  jal         func_293C60
    ctx->pc = 0x297D4Cu;
    SET_GPR_U32(ctx, 31, 0x297D54u);
    ctx->pc = 0x297D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297D4Cu;
            // 0x297d50: 0x8c444b4c  lw          $a0, 0x4B4C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19276)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C60u;
    if (runtime->hasFunction(0x293C60u)) {
        auto targetFn = runtime->lookupFunction(0x293C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297D54u; }
        if (ctx->pc != 0x297D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c60_0x293c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297D54u; }
        if (ctx->pc != 0x297D54u) { return; }
    }
    ctx->pc = 0x297D54u;
    // 0x297d54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x297d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297d58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x297d58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x297D5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297D5Cu;
            // 0x297d60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x297D64u;
    // 0x297d64: 0x0  nop
    ctx->pc = 0x297d64u;
    // NOP
}
