#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_23ebe8
// Address: 0x23ebe8 - 0x23ec18
void entry_23ebe8_0x23ec18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_23ebe8_0x23ec18");
#endif

    ctx->pc = 0x23ebe8u;

    // 0x23ebe8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23ebe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23ebec: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23ebecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23ebf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23ebf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23ebf4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x23ebf4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ebf8: 0x244228d8  addiu       $v0, $v0, 0x28D8
    ctx->pc = 0x23ebf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10456));
    // 0x23ebfc: 0xc08e330  jal         func_238CC0
    ctx->pc = 0x23EBFCu;
    SET_GPR_U32(ctx, 31, 0x23EC04u);
    ctx->pc = 0x23EC00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23EBFCu;
            // 0x23ec00: 0xac620020  sw          $v0, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238CC0u;
    if (runtime->hasFunction(0x238CC0u)) {
        auto targetFn = runtime->lookupFunction(0x238CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EC04u; }
        if (ctx->pc != 0x23EC04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238CC0_0x238cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EC04u; }
        if (ctx->pc != 0x23EC04u) { return; }
    }
    ctx->pc = 0x23EC04u;
    // 0x23ec04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23ec04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ec08: 0x3e00008  jr          $ra
    ctx->pc = 0x23EC08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23EC0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23EC08u;
            // 0x23ec0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23EC10u;
    // 0x23ec10: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x23ec10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ec14: 0x0  nop
    ctx->pc = 0x23ec14u;
    // NOP
}
