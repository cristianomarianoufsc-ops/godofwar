#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A72A8
// Address: 0x1a72a8 - 0x1a72e0
void sub_001A72A8_0x1a72a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A72A8_0x1a72a8");
#endif

    ctx->pc = 0x1a72a8u;

    // 0x1a72a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a72a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a72ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a72acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a72b0: 0x3090ffff  andi        $s0, $a0, 0xFFFF
    ctx->pc = 0x1a72b0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1a72b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a72b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a72b8: 0xc06cd0c  jal         func_1B3430
    ctx->pc = 0x1A72B8u;
    SET_GPR_U32(ctx, 31, 0x1A72C0u);
    ctx->pc = 0x1A72BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A72B8u;
            // 0x1a72bc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3430u;
    if (runtime->hasFunction(0x1B3430u)) {
        auto targetFn = runtime->lookupFunction(0x1B3430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A72C0u; }
        if (ctx->pc != 0x1A72C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3430_0x1b3430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A72C0u; }
        if (ctx->pc != 0x1A72C0u) { return; }
    }
    ctx->pc = 0x1A72C0u;
    // 0x1a72c0: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1a72c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1a72c4: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1a72c4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a72c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a72c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a72cc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1a72ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a72d0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a72d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a72d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a72d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a72d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A72D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A72DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A72D8u;
            // 0x1a72dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A72E0u;
}
