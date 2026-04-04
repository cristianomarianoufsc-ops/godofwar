#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00167478
// Address: 0x167478 - 0x1674a0
void sub_00167478_0x167478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167478_0x167478");
#endif

    ctx->pc = 0x167478u;

    // 0x167478: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x167478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16747c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x16747cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167480: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x167480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x167484: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x167484u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167488: 0xc059b32  jal         func_166CC8
    ctx->pc = 0x167488u;
    SET_GPR_U32(ctx, 31, 0x167490u);
    ctx->pc = 0x16748Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167488u;
            // 0x16748c: 0xdc860028  ld          $a2, 0x28($a0) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 40)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166CC8u;
    if (runtime->hasFunction(0x166CC8u)) {
        auto targetFn = runtime->lookupFunction(0x166CC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167490u; }
        if (ctx->pc != 0x167490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_166cc8_0x167018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167490u; }
        if (ctx->pc != 0x167490u) { return; }
    }
    ctx->pc = 0x167490u;
    // 0x167490: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x167490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167494: 0x3e00008  jr          $ra
    ctx->pc = 0x167494u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167494u;
            // 0x167498: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16749Cu;
    // 0x16749c: 0x0  nop
    ctx->pc = 0x16749cu;
    // NOP
}
