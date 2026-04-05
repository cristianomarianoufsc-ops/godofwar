#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BB9B8
// Address: 0x1bb9b8 - 0x1bba78
void sub_001BB9B8_0x1bb9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB9B8_0x1bb9b8");
#endif

    ctx->pc = 0x1bb9b8u;

    // 0x1bb9b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1bb9b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1bb9bc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1bb9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1bb9c0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1bb9c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb9c4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1bb9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1bb9c8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1bb9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1bb9cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bb9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bb9d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bb9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bb9d4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1bb9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1bb9d8: 0x24635280  addiu       $v1, $v1, 0x5280
    ctx->pc = 0x1bb9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21120));
    // 0x1bb9dc: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x1bb9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1bb9e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bb9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bb9e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bb9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bb9e8: 0x8c52005c  lw          $s2, 0x5C($v0)
    ctx->pc = 0x1bb9e8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1bb9ec: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x1bb9ecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1bb9f0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1bb9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1bb9f4: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1BB9F4u;
    {
        const bool branch_taken_0x1bb9f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB9F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB9F4u;
            // 0x1bb9f8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb9f4) {
            ctx->pc = 0x1BBA58u;
            goto label_1bba58;
        }
    }
    ctx->pc = 0x1BB9FCu;
    // 0x1bb9fc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bb9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bba00: 0x8c51ec50  lw          $s1, -0x13B0($v0)
    ctx->pc = 0x1bba00u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962256)));
    // 0x1bba04: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bba04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bba08: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BBA08u;
    {
        const bool branch_taken_0x1bba08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBA0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBA08u;
            // 0x1bba0c: 0x8c50e848  lw          $s0, -0x17B8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bba08) {
            ctx->pc = 0x1BBA28u;
            goto label_1bba28;
        }
    }
    ctx->pc = 0x1BBA10u;
    // 0x1bba10: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1bba10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1bba14: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1bba14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1bba18: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x1bba18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x1bba1c: 0x40f809  jalr        $v0
    ctx->pc = 0x1BBA1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BBA24u);
        ctx->pc = 0x1BBA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBA1Cu;
            // 0x1bba20: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BBA24u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BBA28u: goto label_1bba28;
            case 0x1BBA58u: goto label_1bba58;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BBA24u; }
            if (ctx->pc != 0x1BBA24u) { return; }
        }
        }
    }
    ctx->pc = 0x1BBA24u;
    // 0x1bba24: 0x0  nop
    ctx->pc = 0x1bba24u;
    // NOP
label_1bba28:
    // 0x1bba28: 0xc06f954  jal         func_1BE550
    ctx->pc = 0x1BBA28u;
    SET_GPR_U32(ctx, 31, 0x1BBA30u);
    ctx->pc = 0x1BBA2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBA28u;
            // 0x1bba2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE550u;
    if (runtime->hasFunction(0x1BE550u)) {
        auto targetFn = runtime->lookupFunction(0x1BE550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBA30u; }
        if (ctx->pc != 0x1BBA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE550_0x1be550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBA30u; }
        if (ctx->pc != 0x1BBA30u) { return; }
    }
    ctx->pc = 0x1BBA30u;
    // 0x1bba30: 0xc06f6d6  jal         func_1BDB58
    ctx->pc = 0x1BBA30u;
    SET_GPR_U32(ctx, 31, 0x1BBA38u);
    ctx->pc = 0x1BBA34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBA30u;
            // 0x1bba34: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BDB58u;
    if (runtime->hasFunction(0x1BDB58u)) {
        auto targetFn = runtime->lookupFunction(0x1BDB58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBA38u; }
        if (ctx->pc != 0x1BBA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BDB58_0x1bdb58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBA38u; }
        if (ctx->pc != 0x1BBA38u) { return; }
    }
    ctx->pc = 0x1BBA38u;
    // 0x1bba38: 0x52200007  beql        $s1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BBA38u;
    {
        const bool branch_taken_0x1bba38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bba38) {
            ctx->pc = 0x1BBA3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBA38u;
            // 0x1bba3c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BBA58u;
            goto label_1bba58;
        }
    }
    ctx->pc = 0x1BBA40u;
    // 0x1bba40: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1bba40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1bba44: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1bba44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1bba48: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1bba48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1bba4c: 0x40f809  jalr        $v0
    ctx->pc = 0x1BBA4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BBA54u);
        ctx->pc = 0x1BBA50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBA4Cu;
            // 0x1bba50: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BBA54u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BBA28u: goto label_1bba28;
            case 0x1BBA58u: goto label_1bba58;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BBA54u; }
            if (ctx->pc != 0x1BBA54u) { return; }
        }
        }
    }
    ctx->pc = 0x1BBA54u;
    // 0x1bba54: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1bba54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1bba58:
    // 0x1bba58: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1bba58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bba5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bba5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bba60: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1bba60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bba64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bba64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bba68: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBA68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBA68u;
            // 0x1bba6c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BBA28u: goto label_1bba28;
            case 0x1BBA58u: goto label_1bba58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BBA70u;
    // 0x1bba70: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1bba70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1bba74: 0x0  nop
    ctx->pc = 0x1bba74u;
    // NOP
}
