#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022A920
// Address: 0x22a920 - 0x22a950
void sub_0022A920_0x22a920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A920_0x22a920");
#endif

    ctx->pc = 0x22a920u;

    // 0x22a920: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22a920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22a924: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x22a924u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a928: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22a928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22a92c: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x22a92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x22a930: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x22a930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x22a934: 0x833018  mult        $a2, $a0, $v1
    ctx->pc = 0x22a934u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x22a938: 0xc08aa04  jal         func_22A810
    ctx->pc = 0x22A938u;
    SET_GPR_U32(ctx, 31, 0x22A940u);
    ctx->pc = 0x22A93Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A938u;
            // 0x22a93c: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A810u;
    if (runtime->hasFunction(0x22A810u)) {
        auto targetFn = runtime->lookupFunction(0x22A810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A940u; }
        if (ctx->pc != 0x22A940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A810_0x22a810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A940u; }
        if (ctx->pc != 0x22A940u) { return; }
    }
    ctx->pc = 0x22A940u;
    // 0x22a940: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22a940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a944: 0x3e00008  jr          $ra
    ctx->pc = 0x22A944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A944u;
            // 0x22a948: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22A94Cu;
    // 0x22a94c: 0x0  nop
    ctx->pc = 0x22a94cu;
    // NOP
}
