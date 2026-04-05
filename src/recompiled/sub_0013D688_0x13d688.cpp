#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013D688
// Address: 0x13d688 - 0x13d6c0
void sub_0013D688_0x13d688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D688_0x13d688");
#endif

    ctx->pc = 0x13d688u;

    // 0x13d688: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13d688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13d68c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13d68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13d690: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13d690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13d694: 0xc04f824  jal         func_13E090
    ctx->pc = 0x13D694u;
    SET_GPR_U32(ctx, 31, 0x13D69Cu);
    ctx->pc = 0x13D698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D694u;
            // 0x13d698: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D69Cu; }
        if (ctx->pc != 0x13D69Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D69Cu; }
        if (ctx->pc != 0x13D69Cu) { return; }
    }
    ctx->pc = 0x13D69Cu;
    // 0x13d69c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13d69cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d6a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13d6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d6a4: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x13D6A4u;
    SET_GPR_U32(ctx, 31, 0x13D6ACu);
    ctx->pc = 0x13D6A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D6A4u;
            // 0x13d6a8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D6ACu; }
        if (ctx->pc != 0x13D6ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D6ACu; }
        if (ctx->pc != 0x13D6ACu) { return; }
    }
    ctx->pc = 0x13D6ACu;
    // 0x13d6ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13d6acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d6b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13d6b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d6b4: 0x3e00008  jr          $ra
    ctx->pc = 0x13D6B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D6B4u;
            // 0x13d6b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13D6BCu;
    // 0x13d6bc: 0x0  nop
    ctx->pc = 0x13d6bcu;
    // NOP
}
