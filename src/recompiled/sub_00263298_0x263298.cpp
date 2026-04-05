#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00263298
// Address: 0x263298 - 0x2632d0
void sub_00263298_0x263298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00263298_0x263298");
#endif

    ctx->pc = 0x263298u;

    // 0x263298: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x263298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26329c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x26329cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2632a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2632a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2632a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2632a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2632a8: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x2632A8u;
    SET_GPR_U32(ctx, 31, 0x2632B0u);
    ctx->pc = 0x2632ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2632A8u;
            // 0x2632ac: 0x24040168  addiu       $a0, $zero, 0x168 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2632B0u; }
        if (ctx->pc != 0x2632B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2632B0u; }
        if (ctx->pc != 0x2632B0u) { return; }
    }
    ctx->pc = 0x2632B0u;
    // 0x2632b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2632b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2632b4: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x2632B4u;
    SET_GPR_U32(ctx, 31, 0x2632BCu);
    ctx->pc = 0x2632B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2632B4u;
            // 0x2632b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2632BCu; }
        if (ctx->pc != 0x2632BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2632BCu; }
        if (ctx->pc != 0x2632BCu) { return; }
    }
    ctx->pc = 0x2632BCu;
    // 0x2632bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2632bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2632c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2632c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2632c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2632C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2632C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2632C4u;
            // 0x2632c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2632CCu;
    // 0x2632cc: 0x0  nop
    ctx->pc = 0x2632ccu;
    // NOP
}
