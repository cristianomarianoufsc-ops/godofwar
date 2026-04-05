#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029A828
// Address: 0x29a828 - 0x29a858
void sub_0029A828_0x29a828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A828_0x29a828");
#endif

    ctx->pc = 0x29a828u;

    // 0x29a828: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29a828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29a82c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x29a82cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x29a830: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29a830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a834: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29a834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29a838: 0xc0a5014  jal         func_294050
    ctx->pc = 0x29A838u;
    SET_GPR_U32(ctx, 31, 0x29A840u);
    ctx->pc = 0x29A83Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A838u;
            // 0x29a83c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294050u;
    if (runtime->hasFunction(0x294050u)) {
        auto targetFn = runtime->lookupFunction(0x294050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A840u; }
        if (ctx->pc != 0x29A840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_294050_0x2940a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A840u; }
        if (ctx->pc != 0x29A840u) { return; }
    }
    ctx->pc = 0x29A840u;
    // 0x29a840: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29a840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a844: 0x3e00008  jr          $ra
    ctx->pc = 0x29A844u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A844u;
            // 0x29a848: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29A84Cu;
    // 0x29a84c: 0x0  nop
    ctx->pc = 0x29a84cu;
    // NOP
    // 0x29a850: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x29a850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29a854: 0x0  nop
    ctx->pc = 0x29a854u;
    // NOP
}
