#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2996b0
// Address: 0x2996b0 - 0x2996e0
void entry_2996b0_0x2996e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2996b0_0x2996e0");
#endif

    ctx->pc = 0x2996b0u;

    // 0x2996b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2996b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2996b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2996b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2996b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2996b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2996bc: 0xc0a65aa  jal         func_2996A8
    ctx->pc = 0x2996BCu;
    SET_GPR_U32(ctx, 31, 0x2996C4u);
    ctx->pc = 0x2996C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2996BCu;
            // 0x2996c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2996A8u;
    if (runtime->hasFunction(0x2996A8u)) {
        auto targetFn = runtime->lookupFunction(0x2996A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2996C4u; }
        if (ctx->pc != 0x2996C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2996a8_0x2996b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2996C4u; }
        if (ctx->pc != 0x2996C4u) { return; }
    }
    ctx->pc = 0x2996C4u;
    // 0x2996c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2996c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2996c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2996c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2996cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2996ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2996d0: 0x80a4e10  j           func_293840
    ctx->pc = 0x2996D0u;
    ctx->pc = 0x2996D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2996D0u;
            // 0x2996d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293840u;
    {
        static std::atomic<uint32_t> s_exitLogs{0};
        if (s_exitLogs.fetch_add(1, std::memory_order_relaxed) < 4u)
        {
            std::cout << "[entry_2996b0:ExitThread] a0=" << GPR_U32(ctx, 4)
                      << " pc=0x2996d0 -> func_293840 (syscall4=ExitThread) — tid=1 finalizando init"
                      << std::endl;
        }
    }
    if (runtime->hasFunction(0x293840u)) {
        auto targetFn = runtime->lookupFunction(0x293840u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        entry_293840_0x293900(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2996D8u;
    // 0x2996d8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2996d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2996dc: 0x0  nop
    ctx->pc = 0x2996dcu;
    // NOP
}
