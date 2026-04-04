#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026B690
// Address: 0x26b690 - 0x26b6d0
void sub_0026B690_0x26b690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026B690_0x26b690");
#endif

    ctx->pc = 0x26b690u;

    // 0x26b690: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26b690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26b694: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26b694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26b698: 0xc074392  jal         func_1D0E48
    ctx->pc = 0x26B698u;
    SET_GPR_U32(ctx, 31, 0x26B6A0u);
    ctx->pc = 0x26B69Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B698u;
            // 0x26b69c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D0E48u;
    if (runtime->hasFunction(0x1D0E48u)) {
        auto targetFn = runtime->lookupFunction(0x1D0E48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B6A0u; }
        if (ctx->pc != 0x26B6A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d0e48_0x1d0e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B6A0u; }
        if (ctx->pc != 0x26B6A0u) { return; }
    }
    ctx->pc = 0x26B6A0u;
    // 0x26b6a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26b6a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26b6a4: 0x3e00008  jr          $ra
    ctx->pc = 0x26B6A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B6A4u;
            // 0x26b6a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26B6ACu;
    // 0x26b6ac: 0x0  nop
    ctx->pc = 0x26b6acu;
    // NOP
    // 0x26b6b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26b6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26b6b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x26b6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26b6b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26b6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26b6bc: 0xc08d178  jal         func_2345E0
    ctx->pc = 0x26B6BCu;
    SET_GPR_U32(ctx, 31, 0x26B6C4u);
    ctx->pc = 0x26B6C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B6BCu;
            // 0x26b6c0: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2345E0u;
    if (runtime->hasFunction(0x2345E0u)) {
        auto targetFn = runtime->lookupFunction(0x2345E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B6C4u; }
        if (ctx->pc != 0x26B6C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002345E0_0x2345e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B6C4u; }
        if (ctx->pc != 0x26B6C4u) { return; }
    }
    ctx->pc = 0x26B6C4u;
    // 0x26b6c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26b6c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26b6c8: 0x3e00008  jr          $ra
    ctx->pc = 0x26B6C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B6C8u;
            // 0x26b6cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26B6D0u;
}
