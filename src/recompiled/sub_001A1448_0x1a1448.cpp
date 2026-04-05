#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A1448
// Address: 0x1a1448 - 0x1a1488
void sub_001A1448_0x1a1448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1448_0x1a1448");
#endif

    ctx->pc = 0x1a1448u;

    // 0x1a1448: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a1448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a144c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a144cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a1450: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x1a1450u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x1a1454: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a1454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a1458: 0x8e02e6a8  lw          $v0, -0x1958($s0)
    ctx->pc = 0x1a1458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960808)));
    // 0x1a145c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A145Cu;
    {
        const bool branch_taken_0x1a145c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a145c) {
            ctx->pc = 0x1A1470u;
            goto label_1a1470;
        }
    }
    ctx->pc = 0x1A1464u;
    // 0x1a1464: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x1A1464u;
    SET_GPR_U32(ctx, 31, 0x1A146Cu);
    ctx->pc = 0x1A1468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1464u;
            // 0x1a1468: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A146Cu; }
        if (ctx->pc != 0x1A146Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A146Cu; }
        if (ctx->pc != 0x1A146Cu) { return; }
    }
    ctx->pc = 0x1A146Cu;
    // 0x1a146c: 0xae02e6a8  sw          $v0, -0x1958($s0)
    ctx->pc = 0x1a146cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294960808), GPR_U32(ctx, 2));
label_1a1470:
    // 0x1a1470: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1A1470u;
    SET_GPR_U32(ctx, 31, 0x1A1478u);
    ctx->pc = 0x1A1474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1470u;
            // 0x1a1474: 0x8e04e6a8  lw          $a0, -0x1958($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960808)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1478u; }
        if (ctx->pc != 0x1A1478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1478u; }
        if (ctx->pc != 0x1A1478u) { return; }
    }
    ctx->pc = 0x1A1478u;
    // 0x1a1478: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a1478u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a147c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a147cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1480: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1480u;
            // 0x1a1484: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A1470u: goto label_1a1470;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A1488u;
}
