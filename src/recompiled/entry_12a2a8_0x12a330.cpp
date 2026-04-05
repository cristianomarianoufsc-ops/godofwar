#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_12a2a8
// Address: 0x12a2a8 - 0x12a330
void entry_12a2a8_0x12a330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_12a2a8_0x12a330");
#endif

    ctx->pc = 0x12a2a8u;

    // 0x12a2a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x12a2a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x12a2ac: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x12a2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x12a2b0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x12a2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x12a2b4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x12a2b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a2b8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x12a2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x12a2bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x12a2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x12a2c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12a2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12a2c4: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x12a2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x12a2c8: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x12A2C8u;
    {
        const bool branch_taken_0x12a2c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A2CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A2C8u;
            // 0x12a2cc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a2c8) {
            ctx->pc = 0x12A318u;
            goto label_12a318;
        }
    }
    ctx->pc = 0x12A2D0u;
    // 0x12a2d0: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x12a2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x12a2d4: 0x8e710008  lw          $s1, 0x8($s3)
    ctx->pc = 0x12a2d4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x12a2d8: 0x8c447910  lw          $a0, 0x7910($v0)
    ctx->pc = 0x12a2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
    // 0x12a2dc: 0x3c10002d  lui         $s0, 0x2D
    ctx->pc = 0x12a2dcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)45 << 16));
    // 0x12a2e0: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x12A2E0u;
    SET_GPR_U32(ctx, 31, 0x12A2E8u);
    ctx->pc = 0x12A2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A2E0u;
            // 0x12a2e4: 0x2612bc78  addiu       $s2, $s0, -0x4388 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A2E8u; }
        if (ctx->pc != 0x12A2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A2E8u; }
        if (ctx->pc != 0x12A2E8u) { return; }
    }
    ctx->pc = 0x12A2E8u;
    // 0x12a2e8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x12a2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x12a2ec: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x12a2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x12a2f0: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x12a2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
    // 0x12a2f4: 0x8e03bc78  lw          $v1, -0x4388($s0)
    ctx->pc = 0x12a2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950008)));
    // 0x12a2f8: 0xae02bc78  sw          $v0, -0x4388($s0)
    ctx->pc = 0x12a2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294950008), GPR_U32(ctx, 2));
    // 0x12a2fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12a2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12a300: 0xac520004  sw          $s2, 0x4($v0)
    ctx->pc = 0x12a300u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 18));
    // 0x12a304: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x12a304u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x12a308: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x12a308u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x12a30c: 0xae640024  sw          $a0, 0x24($s3)
    ctx->pc = 0x12a30cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 4));
    // 0x12a310: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x12a310u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12a314: 0x0  nop
    ctx->pc = 0x12a314u;
    // NOP
label_12a318:
    // 0x12a318: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x12a318u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12a31c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12a31cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12a320: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x12a320u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12a324: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12a324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12a328: 0x3e00008  jr          $ra
    ctx->pc = 0x12A328u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A328u;
            // 0x12a32c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12A318u: goto label_12a318;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12A330u;
}
