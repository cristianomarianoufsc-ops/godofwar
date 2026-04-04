#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_202150
// Address: 0x202150 - 0x202178
void entry_202150_0x202178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_202150_0x202178");
#endif

    ctx->pc = 0x202150u;

    // 0x202150: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x202150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202154: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x202154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x202158: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x202158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20215c: 0x8c44e438  lw          $a0, -0x1BC8($v0)
    ctx->pc = 0x20215cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960184)));
    // 0x202160: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x202160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x202164: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x202164u;
    SET_GPR_U32(ctx, 31, 0x20216Cu);
    ctx->pc = 0x202168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202164u;
            // 0x202168: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20216Cu; }
        if (ctx->pc != 0x20216Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20216Cu; }
        if (ctx->pc != 0x20216Cu) { return; }
    }
    ctx->pc = 0x20216Cu;
    // 0x20216c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20216cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202170: 0x3e00008  jr          $ra
    ctx->pc = 0x202170u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202170u;
            // 0x202174: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x202178u;
}
