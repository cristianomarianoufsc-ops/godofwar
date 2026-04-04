#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00121AB8
// Address: 0x121ab8 - 0x121b48
void sub_00121AB8_0x121ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00121AB8_0x121ab8");
#endif

    ctx->pc = 0x121ab8u;

    // 0x121ab8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x121ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x121abc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x121abcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121ac0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x121ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x121ac4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x121ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x121ac8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x121ac8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121acc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x121accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x121ad0: 0xc04bfb8  jal         func_12FEE0
    ctx->pc = 0x121AD0u;
    SET_GPR_U32(ctx, 31, 0x121AD8u);
    ctx->pc = 0x121AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x121AD0u;
            // 0x121ad4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FEE0u;
    if (runtime->hasFunction(0x12FEE0u)) {
        auto targetFn = runtime->lookupFunction(0x12FEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121AD8u; }
        if (ctx->pc != 0x121AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012FEE0_0x12fee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121AD8u; }
        if (ctx->pc != 0x121AD8u) { return; }
    }
    ctx->pc = 0x121AD8u;
    // 0x121ad8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x121ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x121adc: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x121adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x121ae0: 0x26250070  addiu       $a1, $s1, 0x70
    ctx->pc = 0x121ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x121ae4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x121ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x121ae8: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x121ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x121aec: 0xc0a2644  jal         func_289910
    ctx->pc = 0x121AECu;
    SET_GPR_U32(ctx, 31, 0x121AF4u);
    ctx->pc = 0x121AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x121AECu;
            // 0x121af0: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121AF4u; }
        if (ctx->pc != 0x121AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121AF4u; }
        if (ctx->pc != 0x121AF4u) { return; }
    }
    ctx->pc = 0x121AF4u;
    // 0x121af4: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x121af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x121af8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x121af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x121afc: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x121afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x121b00: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x121B00u;
    {
        const bool branch_taken_0x121b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x121b00) {
            ctx->pc = 0x121B20u;
            goto label_121b20;
        }
    }
    ctx->pc = 0x121B08u;
    // 0x121b08: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x121B08u;
    {
        const bool branch_taken_0x121b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x121B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121B08u;
            // 0x121b0c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121b08) {
            ctx->pc = 0x121B30u;
            goto label_121b30;
        }
    }
    ctx->pc = 0x121B10u;
    // 0x121b10: 0xc04f8c6  jal         func_13E318
    ctx->pc = 0x121B10u;
    SET_GPR_U32(ctx, 31, 0x121B18u);
    ctx->pc = 0x121B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x121B10u;
            // 0x121b14: 0x26240058  addiu       $a0, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E318u;
    if (runtime->hasFunction(0x13E318u)) {
        auto targetFn = runtime->lookupFunction(0x13E318u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121B18u; }
        if (ctx->pc != 0x121B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E318_0x13e318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121B18u; }
        if (ctx->pc != 0x121B18u) { return; }
    }
    ctx->pc = 0x121B18u;
    // 0x121b18: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x121B18u;
    {
        const bool branch_taken_0x121b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121B18u;
            // 0x121b1c: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121b18) {
            ctx->pc = 0x121B2Cu;
            goto label_121b2c;
        }
    }
    ctx->pc = 0x121B20u;
label_121b20:
    // 0x121b20: 0xc04f8b2  jal         func_13E2C8
    ctx->pc = 0x121B20u;
    SET_GPR_U32(ctx, 31, 0x121B28u);
    ctx->pc = 0x121B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x121B20u;
            // 0x121b24: 0x26240058  addiu       $a0, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E2C8u;
    if (runtime->hasFunction(0x13E2C8u)) {
        auto targetFn = runtime->lookupFunction(0x13E2C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121B28u; }
        if (ctx->pc != 0x121B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e2c8_0x13e318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121B28u; }
        if (ctx->pc != 0x121B28u) { return; }
    }
    ctx->pc = 0x121B28u;
    // 0x121b28: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x121b28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_121b2c:
    // 0x121b2c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x121b2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_121b30:
    // 0x121b30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x121b30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x121b34: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x121b34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x121b38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x121b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x121b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x121B3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121B3Cu;
            // 0x121b40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x121B20u: goto label_121b20;
            case 0x121B2Cu: goto label_121b2c;
            case 0x121B30u: goto label_121b30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x121B44u;
    // 0x121b44: 0x0  nop
    ctx->pc = 0x121b44u;
    // NOP
}
