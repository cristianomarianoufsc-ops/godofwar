#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002278B8
// Address: 0x2278b8 - 0x227910
void sub_002278B8_0x2278b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002278B8_0x2278b8");
#endif

    ctx->pc = 0x2278b8u;

    // 0x2278b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2278b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2278bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2278bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2278c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2278c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2278c4: 0xc089b1e  jal         func_226C78
    ctx->pc = 0x2278C4u;
    SET_GPR_U32(ctx, 31, 0x2278CCu);
    ctx->pc = 0x2278C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2278C4u;
            // 0x2278c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226C78u;
    if (runtime->hasFunction(0x226C78u)) {
        auto targetFn = runtime->lookupFunction(0x226C78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2278CCu; }
        if (ctx->pc != 0x2278CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00226C78_0x226c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2278CCu; }
        if (ctx->pc != 0x2278CCu) { return; }
    }
    ctx->pc = 0x2278CCu;
    // 0x2278cc: 0xc08eb96  jal         func_23AE58
    ctx->pc = 0x2278CCu;
    SET_GPR_U32(ctx, 31, 0x2278D4u);
    ctx->pc = 0x2278D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2278CCu;
            // 0x2278d0: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23AE58u;
    if (runtime->hasFunction(0x23AE58u)) {
        auto targetFn = runtime->lookupFunction(0x23AE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2278D4u; }
        if (ctx->pc != 0x2278D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23ae58_0x23ae70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2278D4u; }
        if (ctx->pc != 0x2278D4u) { return; }
    }
    ctx->pc = 0x2278D4u;
    // 0x2278d4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2278d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2278d8: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x2278d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x2278dc: 0x2442a308  addiu       $v0, $v0, -0x5CF8
    ctx->pc = 0x2278dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943496));
    // 0x2278e0: 0x2463a2d8  addiu       $v1, $v1, -0x5D28
    ctx->pc = 0x2278e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943448));
    // 0x2278e4: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2278e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x2278e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2278e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2278ec: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2278ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2278f0: 0xc089d92  jal         func_227648
    ctx->pc = 0x2278F0u;
    SET_GPR_U32(ctx, 31, 0x2278F8u);
    ctx->pc = 0x2278F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2278F0u;
            // 0x2278f4: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x227648u;
    if (runtime->hasFunction(0x227648u)) {
        auto targetFn = runtime->lookupFunction(0x227648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2278F8u; }
        if (ctx->pc != 0x2278F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00227648_0x227648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2278F8u; }
        if (ctx->pc != 0x2278F8u) { return; }
    }
    ctx->pc = 0x2278F8u;
    // 0x2278f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2278f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2278fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2278fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227900: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x227900u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227904: 0x3e00008  jr          $ra
    ctx->pc = 0x227904u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227904u;
            // 0x227908: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22790Cu;
    // 0x22790c: 0x0  nop
    ctx->pc = 0x22790cu;
    // NOP
}
