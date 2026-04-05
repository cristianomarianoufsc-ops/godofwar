#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00132DC0
// Address: 0x132dc0 - 0x132e38
void sub_00132DC0_0x132dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132DC0_0x132dc0");
#endif

    ctx->pc = 0x132dc0u;

    // 0x132dc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x132dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x132dc4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x132dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x132dc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x132dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x132dcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x132dccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132dd0: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x132dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x132dd4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x132DD4u;
    {
        const bool branch_taken_0x132dd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x132DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132DD4u;
            // 0x132dd8: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132dd4) {
            ctx->pc = 0x132DE4u;
            goto label_132de4;
        }
    }
    ctx->pc = 0x132DDCu;
    // 0x132ddc: 0x60f809  jalr        $v1
    ctx->pc = 0x132DDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x132DE4u);
        ctx->pc = 0x132DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132DDCu;
            // 0x132de0: 0xac50be04  sw          $s0, -0x41FC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294950404), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x132DE4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132DE4u: goto label_132de4;
            case 0x132E18u: goto label_132e18;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x132DE4u; }
            if (ctx->pc != 0x132DE4u) { return; }
        }
        }
    }
    ctx->pc = 0x132DE4u;
label_132de4:
    // 0x132de4: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x132de4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x132de8: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x132DE8u;
    {
        const bool branch_taken_0x132de8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x132DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132DE8u;
            // 0x132dec: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132de8) {
            ctx->pc = 0x132E18u;
            goto label_132e18;
        }
    }
    ctx->pc = 0x132DF0u;
    // 0x132df0: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x132df0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x132df4: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x132df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x132df8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x132df8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x132dfc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x132dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x132e00: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x132e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x132e04: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x132e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x132e08: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x132e08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x132e0c: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x132e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x132e10: 0x40f809  jalr        $v0
    ctx->pc = 0x132E10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x132E18u);
        ctx->pc = 0x132E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132E10u;
            // 0x132e14: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x132E18u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132DE4u: goto label_132de4;
            case 0x132E18u: goto label_132e18;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x132E18u; }
            if (ctx->pc != 0x132E18u) { return; }
        }
        }
    }
    ctx->pc = 0x132E18u;
label_132e18:
    // 0x132e18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132e1c: 0xc08f214  jal         func_23C850
    ctx->pc = 0x132E1Cu;
    SET_GPR_U32(ctx, 31, 0x132E24u);
    ctx->pc = 0x132E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x132E1Cu;
            // 0x132e20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C850u;
    if (runtime->hasFunction(0x23C850u)) {
        auto targetFn = runtime->lookupFunction(0x23C850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132E24u; }
        if (ctx->pc != 0x132E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023C850_0x23c850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132E24u; }
        if (ctx->pc != 0x132E24u) { return; }
    }
    ctx->pc = 0x132E24u;
    // 0x132e24: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x132e24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132e28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x132e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x132E2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132E2Cu;
            // 0x132e30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132DE4u: goto label_132de4;
            case 0x132E18u: goto label_132e18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x132E34u;
    // 0x132e34: 0x0  nop
    ctx->pc = 0x132e34u;
    // NOP
}
