#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021CB80
// Address: 0x21cb80 - 0x21cbb8
void sub_0021CB80_0x21cb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021CB80_0x21cb80");
#endif

    ctx->pc = 0x21cb80u;

    // 0x21cb80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21cb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21cb84: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x21cb84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x21cb88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21cb88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21cb8c: 0xc0750f4  jal         func_1D43D0
    ctx->pc = 0x21CB8Cu;
    SET_GPR_U32(ctx, 31, 0x21CB94u);
    ctx->pc = 0x21CB90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CB8Cu;
            // 0x21cb90: 0x248428e0  addiu       $a0, $a0, 0x28E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D43D0u;
    if (runtime->hasFunction(0x1D43D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D43D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CB94u; }
        if (ctx->pc != 0x21CB94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D43D0_0x1d43d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CB94u; }
        if (ctx->pc != 0x21CB94u) { return; }
    }
    ctx->pc = 0x21CB94u;
    // 0x21cb94: 0xc06fa1a  jal         func_1BE868
    ctx->pc = 0x21CB94u;
    SET_GPR_U32(ctx, 31, 0x21CB9Cu);
    ctx->pc = 0x1BE868u;
    if (runtime->hasFunction(0x1BE868u)) {
        auto targetFn = runtime->lookupFunction(0x1BE868u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CB9Cu; }
        if (ctx->pc != 0x21CB9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE868_0x1be868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CB9Cu; }
        if (ctx->pc != 0x21CB9Cu) { return; }
    }
    ctx->pc = 0x21CB9Cu;
    // 0x21cb9c: 0xc062e7a  jal         func_18B9E8
    ctx->pc = 0x21CB9Cu;
    SET_GPR_U32(ctx, 31, 0x21CBA4u);
    ctx->pc = 0x18B9E8u;
    if (runtime->hasFunction(0x18B9E8u)) {
        auto targetFn = runtime->lookupFunction(0x18B9E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CBA4u; }
        if (ctx->pc != 0x21CBA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018B9E8_0x18b9e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CBA4u; }
        if (ctx->pc != 0x21CBA4u) { return; }
    }
    ctx->pc = 0x21CBA4u;
    // 0x21cba4: 0xc07e266  jal         func_1F8998
    ctx->pc = 0x21CBA4u;
    SET_GPR_U32(ctx, 31, 0x21CBACu);
    ctx->pc = 0x1F8998u;
    if (runtime->hasFunction(0x1F8998u)) {
        auto targetFn = runtime->lookupFunction(0x1F8998u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CBACu; }
        if (ctx->pc != 0x21CBACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F8998_0x1f8998(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CBACu; }
        if (ctx->pc != 0x21CBACu) { return; }
    }
    ctx->pc = 0x21CBACu;
    // 0x21cbac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21cbacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21cbb0: 0x3e00008  jr          $ra
    ctx->pc = 0x21CBB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21CBB0u;
            // 0x21cbb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21CBB8u;
}
