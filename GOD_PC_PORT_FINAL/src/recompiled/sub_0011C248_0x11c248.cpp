#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011C248
// Address: 0x11c248 - 0x11c288
void sub_0011C248_0x11c248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011C248_0x11c248");
#endif

    ctx->pc = 0x11c248u;

    // 0x11c248: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11c248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11c24c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x11c24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x11c250: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11c250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11c254: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x11c254u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c258: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x11c258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x11c25c: 0x8c44e89c  lw          $a0, -0x1764($v0)
    ctx->pc = 0x11c25cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961308)));
    // 0x11c260: 0xc047d1a  jal         func_11F468
    ctx->pc = 0x11C260u;
    SET_GPR_U32(ctx, 31, 0x11C268u);
    ctx->pc = 0x11C264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C260u;
            // 0x11c264: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F468u;
    if (runtime->hasFunction(0x11F468u)) {
        auto targetFn = runtime->lookupFunction(0x11F468u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C268u; }
        if (ctx->pc != 0x11C268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11f468_0x11f498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C268u; }
        if (ctx->pc != 0x11C268u) { return; }
    }
    ctx->pc = 0x11C268u;
    // 0x11c268: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11c268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c26c: 0x3e00008  jr          $ra
    ctx->pc = 0x11C26Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C26Cu;
            // 0x11c270: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11C274u;
    // 0x11c274: 0x0  nop
    ctx->pc = 0x11c274u;
    // NOP
    // 0x11c278: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x11c278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x11c27c: 0x0  nop
    ctx->pc = 0x11c27cu;
    // NOP
    // 0x11c280: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x11c280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x11c284: 0x0  nop
    ctx->pc = 0x11c284u;
    // NOP
}
