#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019BAF8
// Address: 0x19baf8 - 0x19bb48
void sub_0019BAF8_0x19baf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019BAF8_0x19baf8");
#endif

    ctx->pc = 0x19baf8u;

    // 0x19baf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19baf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19bafc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x19bafcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x19bb00: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x19bb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x19bb04: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x19bb04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x19bb08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19bb08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19bb0c: 0x8c6600d4  lw          $a2, 0xD4($v1)
    ctx->pc = 0x19bb0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x19bb10: 0x8c640044  lw          $a0, 0x44($v1)
    ctx->pc = 0x19bb10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x19bb14: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x19bb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x19bb18: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x19bb18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x19bb1c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x19bb1cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x19bb20: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x19bb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x19bb24: 0x24a53ad0  addiu       $a1, $a1, 0x3AD0
    ctx->pc = 0x19bb24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15056));
    // 0x19bb28: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x19bb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x19bb2c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19bb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19bb30: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x19bb30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x19bb34: 0xc061e64  jal         func_187990
    ctx->pc = 0x19BB34u;
    SET_GPR_U32(ctx, 31, 0x19BB3Cu);
    ctx->pc = 0x19BB38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BB34u;
            // 0x19bb38: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187990u;
    if (runtime->hasFunction(0x187990u)) {
        auto targetFn = runtime->lookupFunction(0x187990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BB3Cu; }
        if (ctx->pc != 0x19BB3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187990_0x187990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BB3Cu; }
        if (ctx->pc != 0x19BB3Cu) { return; }
    }
    ctx->pc = 0x19BB3Cu;
    // 0x19bb3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19bb3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19bb40: 0x3e00008  jr          $ra
    ctx->pc = 0x19BB40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BB44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BB40u;
            // 0x19bb44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19BB48u;
}
