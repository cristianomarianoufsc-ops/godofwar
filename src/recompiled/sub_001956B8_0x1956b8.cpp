#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001956B8
// Address: 0x1956b8 - 0x1956f8
void sub_001956B8_0x1956b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001956B8_0x1956b8");
#endif

    ctx->pc = 0x1956b8u;

    // 0x1956b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1956b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1956bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1956bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1956c0: 0xc064e04  jal         func_193810
    ctx->pc = 0x1956C0u;
    SET_GPR_U32(ctx, 31, 0x1956C8u);
    ctx->pc = 0x193810u;
    if (runtime->hasFunction(0x193810u)) {
        auto targetFn = runtime->lookupFunction(0x193810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1956C8u; }
        if (ctx->pc != 0x1956C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00193810_0x193810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1956C8u; }
        if (ctx->pc != 0x1956C8u) { return; }
    }
    ctx->pc = 0x1956C8u;
    // 0x1956c8: 0xc05d656  jal         func_175958
    ctx->pc = 0x1956C8u;
    SET_GPR_U32(ctx, 31, 0x1956D0u);
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1956D0u; }
        if (ctx->pc != 0x1956D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1956D0u; }
        if (ctx->pc != 0x1956D0u) { return; }
    }
    ctx->pc = 0x1956D0u;
    // 0x1956d0: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1956d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1956d4: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x1956d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x1956d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1956d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1956dc: 0x24a536b8  addiu       $a1, $a1, 0x36B8
    ctx->pc = 0x1956dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14008));
    // 0x1956e0: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x1956E0u;
    SET_GPR_U32(ctx, 31, 0x1956E8u);
    ctx->pc = 0x1956E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1956E0u;
            // 0x1956e4: 0x24c641f0  addiu       $a2, $a2, 0x41F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1956E8u; }
        if (ctx->pc != 0x1956E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1956E8u; }
        if (ctx->pc != 0x1956E8u) { return; }
    }
    ctx->pc = 0x1956E8u;
    // 0x1956e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1956e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1956ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1956ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1956F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1956ECu;
            // 0x1956f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1956F4u;
    // 0x1956f4: 0x0  nop
    ctx->pc = 0x1956f4u;
    // NOP
}
