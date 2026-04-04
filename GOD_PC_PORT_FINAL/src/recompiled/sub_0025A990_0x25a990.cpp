#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025A990
// Address: 0x25a990 - 0x25a9e0
void sub_0025A990_0x25a990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A990_0x25a990");
#endif

    ctx->pc = 0x25a990u;

    // 0x25a990: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25a990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25a994: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x25a994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x25a998: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25a998u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a99c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25a99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25a9a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25a9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25a9a4: 0xc096402  jal         func_259008
    ctx->pc = 0x25A9A4u;
    SET_GPR_U32(ctx, 31, 0x25A9ACu);
    ctx->pc = 0x25A9A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25A9A4u;
            // 0x25a9a8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259008u;
    if (runtime->hasFunction(0x259008u)) {
        auto targetFn = runtime->lookupFunction(0x259008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A9ACu; }
        if (ctx->pc != 0x25A9ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_259008_0x259020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A9ACu; }
        if (ctx->pc != 0x25A9ACu) { return; }
    }
    ctx->pc = 0x25A9ACu;
    // 0x25a9ac: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x25a9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x25a9b0: 0xae110010  sw          $s1, 0x10($s0)
    ctx->pc = 0x25a9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
    // 0x25a9b4: 0x24423718  addiu       $v0, $v0, 0x3718
    ctx->pc = 0x25a9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14104));
    // 0x25a9b8: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x25a9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x25a9bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25a9bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a9c0: 0xc098f42  jal         func_263D08
    ctx->pc = 0x25A9C0u;
    SET_GPR_U32(ctx, 31, 0x25A9C8u);
    ctx->pc = 0x25A9C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25A9C0u;
            // 0x25a9c4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x263D08u;
    if (runtime->hasFunction(0x263D08u)) {
        auto targetFn = runtime->lookupFunction(0x263D08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A9C8u; }
        if (ctx->pc != 0x25A9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00263D08_0x263d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A9C8u; }
        if (ctx->pc != 0x25A9C8u) { return; }
    }
    ctx->pc = 0x25A9C8u;
    // 0x25a9c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25a9c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a9cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25a9ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a9d0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x25a9d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a9d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25a9d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a9d8: 0x3e00008  jr          $ra
    ctx->pc = 0x25A9D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A9DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A9D8u;
            // 0x25a9dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25A9E0u;
}
