#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FF340
// Address: 0x1ff340 - 0x1ff380
void sub_001FF340_0x1ff340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF340_0x1ff340");
#endif

    ctx->pc = 0x1ff340u;

    // 0x1ff340: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ff340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ff344: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ff344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ff348: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1ff348u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x1ff34c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ff34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ff350: 0x8e02e414  lw          $v0, -0x1BEC($s0)
    ctx->pc = 0x1ff350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960148)));
    // 0x1ff354: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FF354u;
    {
        const bool branch_taken_0x1ff354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff354) {
            ctx->pc = 0x1FF364u;
            goto label_1ff364;
        }
    }
    ctx->pc = 0x1FF35Cu;
    // 0x1ff35c: 0xc07fcea  jal         func_1FF3A8
    ctx->pc = 0x1FF35Cu;
    SET_GPR_U32(ctx, 31, 0x1FF364u);
    ctx->pc = 0x1FF3A8u;
    if (runtime->hasFunction(0x1FF3A8u)) {
        auto targetFn = runtime->lookupFunction(0x1FF3A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF364u; }
        if (ctx->pc != 0x1FF364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FF3A8_0x1ff3a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF364u; }
        if (ctx->pc != 0x1FF364u) { return; }
    }
    ctx->pc = 0x1FF364u;
label_1ff364:
    // 0x1ff364: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1FF364u;
    SET_GPR_U32(ctx, 31, 0x1FF36Cu);
    ctx->pc = 0x1FF368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF364u;
            // 0x1ff368: 0x8e04e414  lw          $a0, -0x1BEC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960148)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF36Cu; }
        if (ctx->pc != 0x1FF36Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF36Cu; }
        if (ctx->pc != 0x1FF36Cu) { return; }
    }
    ctx->pc = 0x1FF36Cu;
    // 0x1ff36c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ff36cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff370: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ff370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff374: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF374u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF374u;
            // 0x1ff378: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FF364u: goto label_1ff364;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FF37Cu;
    // 0x1ff37c: 0x0  nop
    ctx->pc = 0x1ff37cu;
    // NOP
}
