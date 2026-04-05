#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00189880
// Address: 0x189880 - 0x1898c0
void sub_00189880_0x189880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189880_0x189880");
#endif

    ctx->pc = 0x189880u;

    // 0x189880: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x189880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x189884: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x189884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x189888: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x189888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18988c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x18988cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189890: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x189890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x189894: 0xc04f824  jal         func_13E090
    ctx->pc = 0x189894u;
    SET_GPR_U32(ctx, 31, 0x18989Cu);
    ctx->pc = 0x189898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189894u;
            // 0x189898: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18989Cu; }
        if (ctx->pc != 0x18989Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18989Cu; }
        if (ctx->pc != 0x18989Cu) { return; }
    }
    ctx->pc = 0x18989Cu;
    // 0x18989c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18989cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1898a0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1898a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1898a4: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x1898A4u;
    SET_GPR_U32(ctx, 31, 0x1898ACu);
    ctx->pc = 0x1898A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1898A4u;
            // 0x1898a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1898ACu; }
        if (ctx->pc != 0x1898ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1898ACu; }
        if (ctx->pc != 0x1898ACu) { return; }
    }
    ctx->pc = 0x1898ACu;
    // 0x1898ac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1898acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1898b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1898b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1898b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1898b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1898b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1898B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1898BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1898B8u;
            // 0x1898bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1898C0u;
}
