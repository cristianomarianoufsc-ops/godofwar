#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013D630
// Address: 0x13d630 - 0x13d668
void sub_0013D630_0x13d630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D630_0x13d630");
#endif

    ctx->pc = 0x13d630u;

    // 0x13d630: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13d630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13d634: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13d634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13d638: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13d638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13d63c: 0xc04f824  jal         func_13E090
    ctx->pc = 0x13D63Cu;
    SET_GPR_U32(ctx, 31, 0x13D644u);
    ctx->pc = 0x13D640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D63Cu;
            // 0x13d640: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D644u; }
        if (ctx->pc != 0x13D644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D644u; }
        if (ctx->pc != 0x13D644u) { return; }
    }
    ctx->pc = 0x13D644u;
    // 0x13d644: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13d644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d648: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13d648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d64c: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x13D64Cu;
    SET_GPR_U32(ctx, 31, 0x13D654u);
    ctx->pc = 0x13D650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D64Cu;
            // 0x13d650: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D654u; }
        if (ctx->pc != 0x13D654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D654u; }
        if (ctx->pc != 0x13D654u) { return; }
    }
    ctx->pc = 0x13D654u;
    // 0x13d654: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13d654u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d658: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13d658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d65c: 0x3e00008  jr          $ra
    ctx->pc = 0x13D65Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D65Cu;
            // 0x13d660: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13D664u;
    // 0x13d664: 0x0  nop
    ctx->pc = 0x13d664u;
    // NOP
}
