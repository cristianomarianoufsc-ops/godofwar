#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002290E0
// Address: 0x2290e0 - 0x229120
void sub_002290E0_0x2290e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002290E0_0x2290e0");
#endif

    ctx->pc = 0x2290e0u;

    // 0x2290e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2290e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2290e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2290e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2290e8: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x2290e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x2290ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2290ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2290f0: 0x8e02352c  lw          $v0, 0x352C($s0)
    ctx->pc = 0x2290f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13612)));
    // 0x2290f4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2290F4u;
    {
        const bool branch_taken_0x2290f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2290f4) {
            ctx->pc = 0x229108u;
            goto label_229108;
        }
    }
    ctx->pc = 0x2290FCu;
    // 0x2290fc: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x2290FCu;
    SET_GPR_U32(ctx, 31, 0x229104u);
    ctx->pc = 0x229100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2290FCu;
            // 0x229100: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229104u; }
        if (ctx->pc != 0x229104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229104u; }
        if (ctx->pc != 0x229104u) { return; }
    }
    ctx->pc = 0x229104u;
    // 0x229104: 0xae02352c  sw          $v0, 0x352C($s0)
    ctx->pc = 0x229104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13612), GPR_U32(ctx, 2));
label_229108:
    // 0x229108: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x229108u;
    SET_GPR_U32(ctx, 31, 0x229110u);
    ctx->pc = 0x22910Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229108u;
            // 0x22910c: 0x8e04352c  lw          $a0, 0x352C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13612)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229110u; }
        if (ctx->pc != 0x229110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229110u; }
        if (ctx->pc != 0x229110u) { return; }
    }
    ctx->pc = 0x229110u;
    // 0x229110: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x229110u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x229114: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x229114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x229118: 0x3e00008  jr          $ra
    ctx->pc = 0x229118u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22911Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229118u;
            // 0x22911c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x229108u: goto label_229108;
            default: break;
        }
        return;
    }
    ctx->pc = 0x229120u;
}
