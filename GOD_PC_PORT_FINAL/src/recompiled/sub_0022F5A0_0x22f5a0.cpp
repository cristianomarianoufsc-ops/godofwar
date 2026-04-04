#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022F5A0
// Address: 0x22f5a0 - 0x22f5e0
void sub_0022F5A0_0x22f5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022F5A0_0x22f5a0");
#endif

    ctx->pc = 0x22f5a0u;

    // 0x22f5a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22f5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22f5a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22f5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22f5a8: 0xc08b610  jal         func_22D840
    ctx->pc = 0x22F5A8u;
    SET_GPR_U32(ctx, 31, 0x22F5B0u);
    ctx->pc = 0x22D840u;
    if (runtime->hasFunction(0x22D840u)) {
        auto targetFn = runtime->lookupFunction(0x22D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F5B0u; }
        if (ctx->pc != 0x22F5B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D840_0x22d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F5B0u; }
        if (ctx->pc != 0x22F5B0u) { return; }
    }
    ctx->pc = 0x22F5B0u;
    // 0x22f5b0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x22f5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x22f5b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x22f5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22f5b8: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x22f5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x22f5bc: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x22f5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x22f5c0: 0xac6212a8  sw          $v0, 0x12A8($v1)
    ctx->pc = 0x22f5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4776), GPR_U32(ctx, 2));
    // 0x22f5c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22f5c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22f5c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22f5c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f5cc: 0xac8012b0  sw          $zero, 0x12B0($a0)
    ctx->pc = 0x22f5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4784), GPR_U32(ctx, 0));
    // 0x22f5d0: 0xaca012ac  sw          $zero, 0x12AC($a1)
    ctx->pc = 0x22f5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4780), GPR_U32(ctx, 0));
    // 0x22f5d4: 0x3e00008  jr          $ra
    ctx->pc = 0x22F5D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F5D4u;
            // 0x22f5d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22F5DCu;
    // 0x22f5dc: 0x0  nop
    ctx->pc = 0x22f5dcu;
    // NOP
}
