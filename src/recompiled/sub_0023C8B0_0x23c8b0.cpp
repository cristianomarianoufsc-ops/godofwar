#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023C8B0
// Address: 0x23c8b0 - 0x23c918
void sub_0023C8B0_0x23c8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C8B0_0x23c8b0");
#endif

    ctx->pc = 0x23c8b0u;

    // 0x23c8b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23c8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23c8b4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23c8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23c8b8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23c8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x23c8bc: 0x24422da0  addiu       $v0, $v0, 0x2DA0
    ctx->pc = 0x23c8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11680));
    // 0x23c8c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23c8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23c8c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23c8c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c8c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23c8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23c8cc: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x23c8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x23c8d0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23c8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x23c8d4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23C8D4u;
    {
        const bool branch_taken_0x23c8d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C8D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C8D4u;
            // 0x23c8d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c8d4) {
            ctx->pc = 0x23C8E4u;
            goto label_23c8e4;
        }
    }
    ctx->pc = 0x23C8DCu;
    // 0x23c8dc: 0xc04f5b0  jal         func_13D6C0
    ctx->pc = 0x23C8DCu;
    SET_GPR_U32(ctx, 31, 0x23C8E4u);
    ctx->pc = 0x13D6C0u;
    if (runtime->hasFunction(0x13D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x13D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C8E4u; }
        if (ctx->pc != 0x23C8E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D6C0_0x13d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C8E4u; }
        if (ctx->pc != 0x23C8E4u) { return; }
    }
    ctx->pc = 0x23C8E4u;
label_23c8e4:
    // 0x23c8e4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23c8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23c8e8: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x23c8e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x23c8ec: 0x24422db8  addiu       $v0, $v0, 0x2DB8
    ctx->pc = 0x23c8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11704));
    // 0x23c8f0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23C8F0u;
    {
        const bool branch_taken_0x23c8f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C8F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C8F0u;
            // 0x23c8f4: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c8f0) {
            ctx->pc = 0x23C900u;
            goto label_23c900;
        }
    }
    ctx->pc = 0x23C8F8u;
    // 0x23c8f8: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x23C8F8u;
    SET_GPR_U32(ctx, 31, 0x23C900u);
    ctx->pc = 0x23C8FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C8F8u;
            // 0x23c8fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C900u; }
        if (ctx->pc != 0x23C900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C900u; }
        if (ctx->pc != 0x23C900u) { return; }
    }
    ctx->pc = 0x23C900u;
label_23c900:
    // 0x23c900: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x23c900u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23c904: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23c904u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c908: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23c908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c90c: 0x3e00008  jr          $ra
    ctx->pc = 0x23C90Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C90Cu;
            // 0x23c910: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23C8E4u: goto label_23c8e4;
            case 0x23C900u: goto label_23c900;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23C914u;
    // 0x23c914: 0x0  nop
    ctx->pc = 0x23c914u;
    // NOP
}
