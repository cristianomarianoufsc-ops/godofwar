#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D3E28
// Address: 0x1d3e28 - 0x1d3ed8
void sub_001D3E28_0x1d3e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3E28_0x1d3e28");
#endif

    ctx->pc = 0x1d3e28u;

    // 0x1d3e28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d3e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d3e2c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d3e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d3e30: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1d3e30u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x1d3e34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d3e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d3e38: 0x8e02cd54  lw          $v0, -0x32AC($s0)
    ctx->pc = 0x1d3e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954324)));
    // 0x1d3e3c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D3E3Cu;
    {
        const bool branch_taken_0x1d3e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3E3Cu;
            // 0x1d3e40: 0x8e03cd54  lw          $v1, -0x32AC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3e3c) {
            ctx->pc = 0x1D3E64u;
            goto label_1d3e64;
        }
    }
    ctx->pc = 0x1D3E44u;
    // 0x1d3e44: 0xc06f9a8  jal         func_1BE6A0
    ctx->pc = 0x1D3E44u;
    SET_GPR_U32(ctx, 31, 0x1D3E4Cu);
    ctx->pc = 0x1BE6A0u;
    if (runtime->hasFunction(0x1BE6A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3E4Cu; }
        if (ctx->pc != 0x1D3E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE6A0_0x1be6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3E4Cu; }
        if (ctx->pc != 0x1D3E4Cu) { return; }
    }
    ctx->pc = 0x1D3E4Cu;
    // 0x1d3e4c: 0x8c440074  lw          $a0, 0x74($v0)
    ctx->pc = 0x1d3e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x1d3e50: 0x24051018  addiu       $a1, $zero, 0x1018
    ctx->pc = 0x1d3e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4120));
    // 0x1d3e54: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x1D3E54u;
    SET_GPR_U32(ctx, 31, 0x1D3E5Cu);
    ctx->pc = 0x1D3E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3E54u;
            // 0x1d3e58: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3E5Cu; }
        if (ctx->pc != 0x1D3E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3E5Cu; }
        if (ctx->pc != 0x1D3E5Cu) { return; }
    }
    ctx->pc = 0x1D3E5Cu;
    // 0x1d3e5c: 0xae02cd54  sw          $v0, -0x32AC($s0)
    ctx->pc = 0x1d3e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294954324), GPR_U32(ctx, 2));
    // 0x1d3e60: 0x8e03cd54  lw          $v1, -0x32AC($s0)
    ctx->pc = 0x1d3e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954324)));
label_1d3e64:
    // 0x1d3e64: 0x3c023141  lui         $v0, 0x3141
    ctx->pc = 0x1d3e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12609 << 16));
    // 0x1d3e68: 0x34425927  ori         $v0, $v0, 0x5927
    ctx->pc = 0x1d3e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22823);
    // 0x1d3e6c: 0xc06f9a8  jal         func_1BE6A0
    ctx->pc = 0x1D3E6Cu;
    SET_GPR_U32(ctx, 31, 0x1D3E74u);
    ctx->pc = 0x1D3E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3E6Cu;
            // 0x1d3e70: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE6A0u;
    if (runtime->hasFunction(0x1BE6A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3E74u; }
        if (ctx->pc != 0x1D3E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE6A0_0x1be6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3E74u; }
        if (ctx->pc != 0x1D3E74u) { return; }
    }
    ctx->pc = 0x1D3E74u;
    // 0x1d3e74: 0x8e03cd54  lw          $v1, -0x32AC($s0)
    ctx->pc = 0x1d3e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954324)));
    // 0x1d3e78: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1d3e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d3e7c: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x1d3e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x1d3e80: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1d3e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d3e84: 0x24660018  addiu       $a2, $v1, 0x18
    ctx->pc = 0x1d3e84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x1d3e88: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x1d3e88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x1d3e8c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1d3e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1d3e90: 0xa465000c  sh          $a1, 0xC($v1)
    ctx->pc = 0x1d3e90u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 5));
    // 0x1d3e94: 0xac660010  sw          $a2, 0x10($v1)
    ctx->pc = 0x1d3e94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 6));
    // 0x1d3e98: 0xa460000e  sh          $zero, 0xE($v1)
    ctx->pc = 0x1d3e98u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d3e9c: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x1d3e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x1d3ea0: 0x240300fe  addiu       $v1, $zero, 0xFE
    ctx->pc = 0x1d3ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x1d3ea4: 0x0  nop
    ctx->pc = 0x1d3ea4u;
    // NOP
label_1d3ea8:
    // 0x1d3ea8: 0x24c20010  addiu       $v0, $a2, 0x10
    ctx->pc = 0x1d3ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1d3eac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1d3eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d3eb0: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1d3eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1d3eb4: 0x0  nop
    ctx->pc = 0x1d3eb4u;
    // NOP
    // 0x1d3eb8: 0x0  nop
    ctx->pc = 0x1d3eb8u;
    // NOP
    // 0x1d3ebc: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D3EBCu;
    {
        const bool branch_taken_0x1d3ebc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1D3EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3EBCu;
            // 0x1d3ec0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ebc) {
            ctx->pc = 0x1D3EA8u;
            runtime->cooperativeGuestYield();
            goto label_1d3ea8;
        }
    }
    ctx->pc = 0x1D3EC4u;
    // 0x1d3ec4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d3ec4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3ec8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d3ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3ecc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1d3eccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1d3ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3ED0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3ED0u;
            // 0x1d3ed4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D3E64u: goto label_1d3e64;
            case 0x1D3EA8u: goto label_1d3ea8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D3ED8u;
}
