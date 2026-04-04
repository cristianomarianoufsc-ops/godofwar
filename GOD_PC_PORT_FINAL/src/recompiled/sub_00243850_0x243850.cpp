#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00243850
// Address: 0x243850 - 0x2438b0
void sub_00243850_0x243850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243850_0x243850");
#endif

    ctx->pc = 0x243850u;

    // 0x243850: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x243850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x243854: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x243854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x243858: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x243858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x24385c: 0x2442ead8  addiu       $v0, $v0, -0x1528
    ctx->pc = 0x24385cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961880));
    // 0x243860: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x243860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x243864: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x243864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243868: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x243868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24386c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x24386cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x243870: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x243870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x243874: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x243874u;
    {
        const bool branch_taken_0x243874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x243878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243874u;
            // 0x243878: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243874) {
            ctx->pc = 0x243888u;
            goto label_243888;
        }
    }
    ctx->pc = 0x24387Cu;
    // 0x24387c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x24387cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x243880: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x243880u;
    SET_GPR_U32(ctx, 31, 0x243888u);
    ctx->pc = 0x243884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243880u;
            // 0x243884: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243888u; }
        if (ctx->pc != 0x243888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243888u; }
        if (ctx->pc != 0x243888u) { return; }
    }
    ctx->pc = 0x243888u;
label_243888:
    // 0x243888: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x243888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x24388c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24388Cu;
    {
        const bool branch_taken_0x24388c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24388c) {
            ctx->pc = 0x243890u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24388Cu;
            // 0x243890: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2438A0u;
            goto label_2438a0;
        }
    }
    ctx->pc = 0x243894u;
    // 0x243894: 0xc06767a  jal         func_19D9E8
    ctx->pc = 0x243894u;
    SET_GPR_U32(ctx, 31, 0x24389Cu);
    ctx->pc = 0x243898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243894u;
            // 0x243898: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D9E8u;
    if (runtime->hasFunction(0x19D9E8u)) {
        auto targetFn = runtime->lookupFunction(0x19D9E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24389Cu; }
        if (ctx->pc != 0x24389Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_19d9e8_0x19da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24389Cu; }
        if (ctx->pc != 0x24389Cu) { return; }
    }
    ctx->pc = 0x24389Cu;
    // 0x24389c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x24389cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2438a0:
    // 0x2438a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2438a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2438a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2438a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2438a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2438A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2438ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2438A8u;
            // 0x2438ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x243888u: goto label_243888;
            case 0x2438A0u: goto label_2438a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2438B0u;
}
