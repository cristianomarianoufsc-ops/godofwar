#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#include <cstdio>
#include <atomic>

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace {
    constexpr int kMaxFullLogs_13DB18 = 40;
    std::atomic<int> g_call_count_13DB18{0};
}

// Function: entry_13db18
// Address: 0x13db18 - 0x13db28
void entry_13db18_0x13db28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_13db18_0x13db28");
#endif

    const int dbg_call = g_call_count_13DB18.fetch_add(1) + 1;
    const uint32_t dbg_a0 = GPR_U32(ctx, 4);
    const uint32_t dbg_a1 = GPR_U32(ctx, 5);
    if (dbg_call <= kMaxFullLogs_13DB18) {
        fprintf(stderr,
            "[DBG 13DB18] #%d ENTER a0=%08x a1=%08x | "
            "old_v0=[a0+0x10]=%08x (will be returned via [a1])\n",
            dbg_call, dbg_a0, dbg_a1,
            (uint32_t)READ32(ADD32(dbg_a0, 16)));
        fflush(stderr);
    }

    ctx->pc = 0x13db18u;

    // 0x13db18: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x13db18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x13db1c: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x13db1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    // 0x13db20: 0x3e00008  jr          $ra
    ctx->pc = 0x13DB20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13DB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DB20u;
            // 0x13db24: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13DB28u;
}
