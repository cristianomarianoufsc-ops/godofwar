#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B4AE8
// Address: 0x1b4ae8 - 0x1b4b28
void sub_001B4AE8_0x1b4ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4AE8_0x1b4ae8");
#endif

    ctx->pc = 0x1b4ae8u;

    // 0x1b4ae8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b4ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b4aec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b4aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b4af0: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1b4af0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x1b4af4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4af8: 0x8e02cb8c  lw          $v0, -0x3474($s0)
    ctx->pc = 0x1b4af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953868)));
    // 0x1b4afc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B4AFCu;
    {
        const bool branch_taken_0x1b4afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4afc) {
            ctx->pc = 0x1B4B0Cu;
            goto label_1b4b0c;
        }
    }
    ctx->pc = 0x1B4B04u;
    // 0x1b4b04: 0xc06d2d4  jal         func_1B4B50
    ctx->pc = 0x1B4B04u;
    SET_GPR_U32(ctx, 31, 0x1B4B0Cu);
    ctx->pc = 0x1B4B50u;
    if (runtime->hasFunction(0x1B4B50u)) {
        auto targetFn = runtime->lookupFunction(0x1B4B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4B0Cu; }
        if (ctx->pc != 0x1B4B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4B50_0x1b4b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4B0Cu; }
        if (ctx->pc != 0x1B4B0Cu) { return; }
    }
    ctx->pc = 0x1B4B0Cu;
label_1b4b0c:
    // 0x1b4b0c: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1B4B0Cu;
    SET_GPR_U32(ctx, 31, 0x1B4B14u);
    ctx->pc = 0x1B4B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4B0Cu;
            // 0x1b4b10: 0x8e04cb8c  lw          $a0, -0x3474($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953868)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4B14u; }
        if (ctx->pc != 0x1B4B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4B14u; }
        if (ctx->pc != 0x1B4B14u) { return; }
    }
    ctx->pc = 0x1B4B14u;
    // 0x1b4b14: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b4b14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4b18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4B1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4B1Cu;
            // 0x1b4b20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B4B0Cu: goto label_1b4b0c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B4B24u;
    // 0x1b4b24: 0x0  nop
    ctx->pc = 0x1b4b24u;
    // NOP
}
