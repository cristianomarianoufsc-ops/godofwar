#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F7540
// Address: 0x1f7540 - 0x1f7598
void sub_001F7540_0x1f7540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7540_0x1f7540");
#endif

    ctx->pc = 0x1f7540u;

    // 0x1f7540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f7540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f7544: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f7544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1f7548: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f7548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f754c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f754cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7550: 0x8e050098  lw          $a1, 0x98($s0)
    ctx->pc = 0x1f7550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x1f7554: 0x50a0000d  beql        $a1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1F7554u;
    {
        const bool branch_taken_0x1f7554 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7554) {
            ctx->pc = 0x1F7558u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7554u;
            // 0x1f7558: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F758Cu;
            goto label_1f758c;
        }
    }
    ctx->pc = 0x1F755Cu;
    // 0x1f755c: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x1f755cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1f7560: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F7560u;
    {
        const bool branch_taken_0x1f7560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7560u;
            // 0x1f7564: 0x8e020090  lw          $v0, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7560) {
            ctx->pc = 0x1F7578u;
            goto label_1f7578;
        }
    }
    ctx->pc = 0x1F7568u;
    // 0x1f7568: 0xc05c302  jal         func_170C08
    ctx->pc = 0x1F7568u;
    SET_GPR_U32(ctx, 31, 0x1F7570u);
    ctx->pc = 0x1F756Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7568u;
            // 0x1f756c: 0x8c4401a4  lw          $a0, 0x1A4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 420)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170C08u;
    if (runtime->hasFunction(0x170C08u)) {
        auto targetFn = runtime->lookupFunction(0x170C08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7570u; }
        if (ctx->pc != 0x1F7570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170C08_0x170c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7570u; }
        if (ctx->pc != 0x1F7570u) { return; }
    }
    ctx->pc = 0x1F7570u;
    // 0x1f7570: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7570u;
    {
        const bool branch_taken_0x1f7570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7570u;
            // 0x1f7574: 0xae00009c  sw          $zero, 0x9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7570) {
            ctx->pc = 0x1F7584u;
            goto label_1f7584;
        }
    }
    ctx->pc = 0x1F7578u;
label_1f7578:
    // 0x1f7578: 0xc05c302  jal         func_170C08
    ctx->pc = 0x1F7578u;
    SET_GPR_U32(ctx, 31, 0x1F7580u);
    ctx->pc = 0x1F757Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7578u;
            // 0x1f757c: 0x8c4401a0  lw          $a0, 0x1A0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 416)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170C08u;
    if (runtime->hasFunction(0x170C08u)) {
        auto targetFn = runtime->lookupFunction(0x170C08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7580u; }
        if (ctx->pc != 0x1F7580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170C08_0x170c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7580u; }
        if (ctx->pc != 0x1F7580u) { return; }
    }
    ctx->pc = 0x1F7580u;
    // 0x1f7580: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x1f7580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_1f7584:
    // 0x1f7584: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x1f7584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x1f7588: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f7588u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f758c:
    // 0x1f758c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f758cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7590: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7590u;
            // 0x1f7594: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F7578u: goto label_1f7578;
            case 0x1F7584u: goto label_1f7584;
            case 0x1F758Cu: goto label_1f758c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F7598u;
}
