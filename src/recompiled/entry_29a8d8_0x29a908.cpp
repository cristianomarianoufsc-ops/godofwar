#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_29a8d8
// Address: 0x29a8d8 - 0x29a908
void entry_29a8d8_0x29a908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_29a8d8_0x29a908");
#endif

    ctx->pc = 0x29a8d8u;

    // 0x29a8d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29a8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29a8dc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x29a8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x29a8e0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29a8e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a8e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29a8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29a8e8: 0xc0a5014  jal         func_294050
    ctx->pc = 0x29A8E8u;
    SET_GPR_U32(ctx, 31, 0x29A8F0u);
    ctx->pc = 0x29A8ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A8E8u;
            // 0x29a8ec: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294050u;
    if (runtime->hasFunction(0x294050u)) {
        auto targetFn = runtime->lookupFunction(0x294050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A8F0u; }
        if (ctx->pc != 0x29A8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_294050_0x2940a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A8F0u; }
        if (ctx->pc != 0x29A8F0u) { return; }
    }
    ctx->pc = 0x29A8F0u;
    // 0x29a8f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29a8f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a8f4: 0x3e00008  jr          $ra
    ctx->pc = 0x29A8F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A8F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A8F4u;
            // 0x29a8f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29A8FCu;
    // 0x29a8fc: 0x0  nop
    ctx->pc = 0x29a8fcu;
    // NOP
    // 0x29a900: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x29a900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29a904: 0x0  nop
    ctx->pc = 0x29a904u;
    // NOP
}
