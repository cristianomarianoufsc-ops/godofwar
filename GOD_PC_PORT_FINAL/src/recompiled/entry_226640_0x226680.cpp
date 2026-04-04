#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_226640
// Address: 0x226640 - 0x226680
void entry_226640_0x226680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_226640_0x226680");
#endif

    ctx->pc = 0x226640u;

    // 0x226640: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x226640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x226644: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x226644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x226648: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x226648u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x22664c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22664cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x226650: 0x8e0211ac  lw          $v0, 0x11AC($s0)
    ctx->pc = 0x226650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4524)));
    // 0x226654: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x226654u;
    {
        const bool branch_taken_0x226654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x226654) {
            ctx->pc = 0x226664u;
            goto label_226664;
        }
    }
    ctx->pc = 0x22665Cu;
    // 0x22665c: 0xc0899aa  jal         func_2266A8
    ctx->pc = 0x22665Cu;
    SET_GPR_U32(ctx, 31, 0x226664u);
    ctx->pc = 0x2266A8u;
    if (runtime->hasFunction(0x2266A8u)) {
        auto targetFn = runtime->lookupFunction(0x2266A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226664u; }
        if (ctx->pc != 0x226664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002266A8_0x2266a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226664u; }
        if (ctx->pc != 0x226664u) { return; }
    }
    ctx->pc = 0x226664u;
label_226664:
    // 0x226664: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x226664u;
    SET_GPR_U32(ctx, 31, 0x22666Cu);
    ctx->pc = 0x226668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226664u;
            // 0x226668: 0x8e0411ac  lw          $a0, 0x11AC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4524)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22666Cu; }
        if (ctx->pc != 0x22666Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22666Cu; }
        if (ctx->pc != 0x22666Cu) { return; }
    }
    ctx->pc = 0x22666Cu;
    // 0x22666c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22666cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226670: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226674: 0x3e00008  jr          $ra
    ctx->pc = 0x226674u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226674u;
            // 0x226678: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x226664u: goto label_226664;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22667Cu;
    // 0x22667c: 0x0  nop
    ctx->pc = 0x22667cu;
    // NOP
}
