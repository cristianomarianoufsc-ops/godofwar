#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00259A98
// Address: 0x259a98 - 0x259f00
void sub_00259A98_0x259a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259A98_0x259a98");
#endif

    ctx->pc = 0x259a98u;

    // 0x259a98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x259a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x259a9c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x259a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x259aa0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x259aa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259aa4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x259aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x259aa8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x259aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x259aac: 0xc096402  jal         func_259008
    ctx->pc = 0x259AACu;
    SET_GPR_U32(ctx, 31, 0x259AB4u);
    ctx->pc = 0x259AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259AACu;
            // 0x259ab0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259008u;
    if (runtime->hasFunction(0x259008u)) {
        auto targetFn = runtime->lookupFunction(0x259008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259AB4u; }
        if (ctx->pc != 0x259AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_259008_0x259020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259AB4u; }
        if (ctx->pc != 0x259AB4u) { return; }
    }
    ctx->pc = 0x259AB4u;
    // 0x259ab4: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x259ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x259ab8: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x259ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x259abc: 0x24633760  addiu       $v1, $v1, 0x3760
    ctx->pc = 0x259abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14176));
    // 0x259ac0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x259ac0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259ac4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x259ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x259ac8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x259ac8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259acc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x259accu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259ad0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x259ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x259AD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259AD4u;
            // 0x259ad8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x259B18u: goto label_259b18;
            case 0x259B30u: goto label_259b30;
            case 0x259B78u: goto label_259b78;
            case 0x259B90u: goto label_259b90;
            case 0x259BD8u: goto label_259bd8;
            case 0x259BF0u: goto label_259bf0;
            case 0x259C38u: goto label_259c38;
            case 0x259C50u: goto label_259c50;
            case 0x259C98u: goto label_259c98;
            case 0x259CB0u: goto label_259cb0;
            case 0x259CF8u: goto label_259cf8;
            case 0x259D10u: goto label_259d10;
            case 0x259D58u: goto label_259d58;
            case 0x259D70u: goto label_259d70;
            case 0x259DB8u: goto label_259db8;
            case 0x259DD0u: goto label_259dd0;
            case 0x259E18u: goto label_259e18;
            case 0x259E30u: goto label_259e30;
            case 0x259E78u: goto label_259e78;
            case 0x259E90u: goto label_259e90;
            case 0x259ED8u: goto label_259ed8;
            case 0x259EF0u: goto label_259ef0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x259ADCu;
    // 0x259adc: 0x0  nop
    ctx->pc = 0x259adcu;
    // NOP
    // 0x259ae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x259ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x259ae4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x259ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x259ae8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x259ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x259aec: 0x2442ead8  addiu       $v0, $v0, -0x1528
    ctx->pc = 0x259aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961880));
    // 0x259af0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x259af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x259af4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x259af4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259af8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x259af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x259afc: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x259afcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x259b00: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x259b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x259b04: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x259B04u;
    {
        const bool branch_taken_0x259b04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x259B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259B04u;
            // 0x259b08: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259b04) {
            ctx->pc = 0x259B18u;
            goto label_259b18;
        }
    }
    ctx->pc = 0x259B0Cu;
    // 0x259b0c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x259b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x259b10: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x259B10u;
    SET_GPR_U32(ctx, 31, 0x259B18u);
    ctx->pc = 0x259B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259B10u;
            // 0x259b14: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259B18u; }
        if (ctx->pc != 0x259B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259B18u; }
        if (ctx->pc != 0x259B18u) { return; }
    }
    ctx->pc = 0x259B18u;
label_259b18:
    // 0x259b18: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x259b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x259b1c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x259B1Cu;
    {
        const bool branch_taken_0x259b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x259b1c) {
            ctx->pc = 0x259B20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x259B1Cu;
            // 0x259b20: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x259B30u;
            goto label_259b30;
        }
    }
    ctx->pc = 0x259B24u;
    // 0x259b24: 0xc0885f6  jal         func_2217D8
    ctx->pc = 0x259B24u;
    SET_GPR_U32(ctx, 31, 0x259B2Cu);
    ctx->pc = 0x259B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259B24u;
            // 0x259b28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2217D8u;
    if (runtime->hasFunction(0x2217D8u)) {
        auto targetFn = runtime->lookupFunction(0x2217D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259B2Cu; }
        if (ctx->pc != 0x259B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2217d8_0x221800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259B2Cu; }
        if (ctx->pc != 0x259B2Cu) { return; }
    }
    ctx->pc = 0x259B2Cu;
    // 0x259b2c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x259b2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_259b30:
    // 0x259b30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x259b30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259b34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x259b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259b38: 0x3e00008  jr          $ra
    ctx->pc = 0x259B38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259B38u;
            // 0x259b3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x259B18u: goto label_259b18;
            case 0x259B30u: goto label_259b30;
            case 0x259B78u: goto label_259b78;
            case 0x259B90u: goto label_259b90;
            case 0x259BD8u: goto label_259bd8;
            case 0x259BF0u: goto label_259bf0;
            case 0x259C38u: goto label_259c38;
            case 0x259C50u: goto label_259c50;
            case 0x259C98u: goto label_259c98;
            case 0x259CB0u: goto label_259cb0;
            case 0x259CF8u: goto label_259cf8;
            case 0x259D10u: goto label_259d10;
            case 0x259D58u: goto label_259d58;
            case 0x259D70u: goto label_259d70;
            case 0x259DB8u: goto label_259db8;
            case 0x259DD0u: goto label_259dd0;
            case 0x259E18u: goto label_259e18;
            case 0x259E30u: goto label_259e30;
            case 0x259E78u: goto label_259e78;
            case 0x259E90u: goto label_259e90;
            case 0x259ED8u: goto label_259ed8;
            case 0x259EF0u: goto label_259ef0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x259B40u;
    // 0x259b40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x259b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x259b44: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x259b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x259b48: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x259b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x259b4c: 0x2442ead8  addiu       $v0, $v0, -0x1528
    ctx->pc = 0x259b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961880));
    // 0x259b50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x259b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x259b54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x259b54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259b58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x259b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x259b5c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x259b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x259b60: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x259b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x259b64: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x259B64u;
    {
        const bool branch_taken_0x259b64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x259B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259B64u;
            // 0x259b68: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259b64) {
            ctx->pc = 0x259B78u;
            goto label_259b78;
        }
    }
    ctx->pc = 0x259B6Cu;
    // 0x259b6c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x259b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x259b70: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x259B70u;
    SET_GPR_U32(ctx, 31, 0x259B78u);
    ctx->pc = 0x259B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259B70u;
            // 0x259b74: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259B78u; }
        if (ctx->pc != 0x259B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259B78u; }
        if (ctx->pc != 0x259B78u) { return; }
    }
    ctx->pc = 0x259B78u;
label_259b78:
    // 0x259b78: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x259b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x259b7c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x259B7Cu;
    {
        const bool branch_taken_0x259b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x259b7c) {
            ctx->pc = 0x259B80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x259B7Cu;
            // 0x259b80: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x259B90u;
            goto label_259b90;
        }
    }
    ctx->pc = 0x259B84u;
    // 0x259b84: 0xc0885da  jal         func_221768
    ctx->pc = 0x259B84u;
    SET_GPR_U32(ctx, 31, 0x259B8Cu);
    ctx->pc = 0x259B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259B84u;
            // 0x259b88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221768u;
    if (runtime->hasFunction(0x221768u)) {
        auto targetFn = runtime->lookupFunction(0x221768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259B8Cu; }
        if (ctx->pc != 0x259B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_221768_0x221790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259B8Cu; }
        if (ctx->pc != 0x259B8Cu) { return; }
    }
    ctx->pc = 0x259B8Cu;
    // 0x259b8c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x259b8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_259b90:
    // 0x259b90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x259b90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259b94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x259b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259b98: 0x3e00008  jr          $ra
    ctx->pc = 0x259B98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259B98u;
            // 0x259b9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x259B18u: goto label_259b18;
            case 0x259B30u: goto label_259b30;
            case 0x259B78u: goto label_259b78;
            case 0x259B90u: goto label_259b90;
            case 0x259BD8u: goto label_259bd8;
            case 0x259BF0u: goto label_259bf0;
            case 0x259C38u: goto label_259c38;
            case 0x259C50u: goto label_259c50;
            case 0x259C98u: goto label_259c98;
            case 0x259CB0u: goto label_259cb0;
            case 0x259CF8u: goto label_259cf8;
            case 0x259D10u: goto label_259d10;
            case 0x259D58u: goto label_259d58;
            case 0x259D70u: goto label_259d70;
            case 0x259DB8u: goto label_259db8;
            case 0x259DD0u: goto label_259dd0;
            case 0x259E18u: goto label_259e18;
            case 0x259E30u: goto label_259e30;
            case 0x259E78u: goto label_259e78;
            case 0x259E90u: goto label_259e90;
            case 0x259ED8u: goto label_259ed8;
            case 0x259EF0u: goto label_259ef0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x259BA0u;
    // 0x259ba0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x259ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x259ba4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x259ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x259ba8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x259ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x259bac: 0x2442ead8  addiu       $v0, $v0, -0x1528
    ctx->pc = 0x259bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961880));
    // 0x259bb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x259bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x259bb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x259bb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259bb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x259bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x259bbc: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x259bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x259bc0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x259bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x259bc4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x259BC4u;
    {
        const bool branch_taken_0x259bc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x259BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259BC4u;
            // 0x259bc8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259bc4) {
            ctx->pc = 0x259BD8u;
            goto label_259bd8;
        }
    }
    ctx->pc = 0x259BCCu;
    // 0x259bcc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x259bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x259bd0: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x259BD0u;
    SET_GPR_U32(ctx, 31, 0x259BD8u);
    ctx->pc = 0x259BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259BD0u;
            // 0x259bd4: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259BD8u; }
        if (ctx->pc != 0x259BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259BD8u; }
        if (ctx->pc != 0x259BD8u) { return; }
    }
    ctx->pc = 0x259BD8u;
label_259bd8:
    // 0x259bd8: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x259bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x259bdc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x259BDCu;
    {
        const bool branch_taken_0x259bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x259bdc) {
            ctx->pc = 0x259BE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x259BDCu;
            // 0x259be0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x259BF0u;
            goto label_259bf0;
        }
    }
    ctx->pc = 0x259BE4u;
    // 0x259be4: 0xc08922e  jal         func_2248B8
    ctx->pc = 0x259BE4u;
    SET_GPR_U32(ctx, 31, 0x259BECu);
    ctx->pc = 0x259BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259BE4u;
            // 0x259be8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2248B8u;
    if (runtime->hasFunction(0x2248B8u)) {
        auto targetFn = runtime->lookupFunction(0x2248B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259BECu; }
        if (ctx->pc != 0x259BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2248b8_0x2248e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259BECu; }
        if (ctx->pc != 0x259BECu) { return; }
    }
    ctx->pc = 0x259BECu;
    // 0x259bec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x259becu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_259bf0:
    // 0x259bf0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x259bf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259bf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x259bf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x259BF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259BF8u;
            // 0x259bfc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x259B18u: goto label_259b18;
            case 0x259B30u: goto label_259b30;
            case 0x259B78u: goto label_259b78;
            case 0x259B90u: goto label_259b90;
            case 0x259BD8u: goto label_259bd8;
            case 0x259BF0u: goto label_259bf0;
            case 0x259C38u: goto label_259c38;
            case 0x259C50u: goto label_259c50;
            case 0x259C98u: goto label_259c98;
            case 0x259CB0u: goto label_259cb0;
            case 0x259CF8u: goto label_259cf8;
            case 0x259D10u: goto label_259d10;
            case 0x259D58u: goto label_259d58;
            case 0x259D70u: goto label_259d70;
            case 0x259DB8u: goto label_259db8;
            case 0x259DD0u: goto label_259dd0;
            case 0x259E18u: goto label_259e18;
            case 0x259E30u: goto label_259e30;
            case 0x259E78u: goto label_259e78;
            case 0x259E90u: goto label_259e90;
            case 0x259ED8u: goto label_259ed8;
            case 0x259EF0u: goto label_259ef0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x259C00u;
    // 0x259c00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x259c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x259c04: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x259c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x259c08: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x259c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x259c0c: 0x2442ead8  addiu       $v0, $v0, -0x1528
    ctx->pc = 0x259c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961880));
    // 0x259c10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x259c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x259c14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x259c14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259c18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x259c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x259c1c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x259c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x259c20: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x259c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x259c24: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x259C24u;
    {
        const bool branch_taken_0x259c24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x259C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259C24u;
            // 0x259c28: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259c24) {
            ctx->pc = 0x259C38u;
            goto label_259c38;
        }
    }
    ctx->pc = 0x259C2Cu;
    // 0x259c2c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x259c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x259c30: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x259C30u;
    SET_GPR_U32(ctx, 31, 0x259C38u);
    ctx->pc = 0x259C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259C30u;
            // 0x259c34: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259C38u; }
        if (ctx->pc != 0x259C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259C38u; }
        if (ctx->pc != 0x259C38u) { return; }
    }
    ctx->pc = 0x259C38u;
label_259c38:
    // 0x259c38: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x259c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x259c3c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x259C3Cu;
    {
        const bool branch_taken_0x259c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x259c3c) {
            ctx->pc = 0x259C40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x259C3Cu;
            // 0x259c40: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x259C50u;
            goto label_259c50;
        }
    }
    ctx->pc = 0x259C44u;
    // 0x259c44: 0xc08924a  jal         func_224928
    ctx->pc = 0x259C44u;
    SET_GPR_U32(ctx, 31, 0x259C4Cu);
    ctx->pc = 0x259C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259C44u;
            // 0x259c48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224928u;
    if (runtime->hasFunction(0x224928u)) {
        auto targetFn = runtime->lookupFunction(0x224928u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259C4Cu; }
        if (ctx->pc != 0x259C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_224928_0x224950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259C4Cu; }
        if (ctx->pc != 0x259C4Cu) { return; }
    }
    ctx->pc = 0x259C4Cu;
    // 0x259c4c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x259c4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_259c50:
    // 0x259c50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x259c50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259c54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x259c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259c58: 0x3e00008  jr          $ra
    ctx->pc = 0x259C58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259C58u;
            // 0x259c5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x259B18u: goto label_259b18;
            case 0x259B30u: goto label_259b30;
            case 0x259B78u: goto label_259b78;
            case 0x259B90u: goto label_259b90;
            case 0x259BD8u: goto label_259bd8;
            case 0x259BF0u: goto label_259bf0;
            case 0x259C38u: goto label_259c38;
            case 0x259C50u: goto label_259c50;
            case 0x259C98u: goto label_259c98;
            case 0x259CB0u: goto label_259cb0;
            case 0x259CF8u: goto label_259cf8;
            case 0x259D10u: goto label_259d10;
            case 0x259D58u: goto label_259d58;
            case 0x259D70u: goto label_259d70;
            case 0x259DB8u: goto label_259db8;
            case 0x259DD0u: goto label_259dd0;
            case 0x259E18u: goto label_259e18;
            case 0x259E30u: goto label_259e30;
            case 0x259E78u: goto label_259e78;
            case 0x259E90u: goto label_259e90;
            case 0x259ED8u: goto label_259ed8;
            case 0x259EF0u: goto label_259ef0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x259C60u;
    // 0x259c60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x259c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x259c64: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x259c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x259c68: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x259c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x259c6c: 0x2442ead8  addiu       $v0, $v0, -0x1528
    ctx->pc = 0x259c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961880));
    // 0x259c70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x259c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x259c74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x259c74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259c78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x259c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x259c7c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x259c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x259c80: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x259c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x259c84: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x259C84u;
    {
        const bool branch_taken_0x259c84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x259C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259C84u;
            // 0x259c88: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259c84) {
            ctx->pc = 0x259C98u;
            goto label_259c98;
        }
    }
    ctx->pc = 0x259C8Cu;
    // 0x259c8c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x259c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x259c90: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x259C90u;
    SET_GPR_U32(ctx, 31, 0x259C98u);
    ctx->pc = 0x259C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259C90u;
            // 0x259c94: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259C98u; }
        if (ctx->pc != 0x259C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259C98u; }
        if (ctx->pc != 0x259C98u) { return; }
    }
    ctx->pc = 0x259C98u;
label_259c98:
    // 0x259c98: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x259c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x259c9c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x259C9Cu;
    {
        const bool branch_taken_0x259c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x259c9c) {
            ctx->pc = 0x259CA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x259C9Cu;
            // 0x259ca0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x259CB0u;
            goto label_259cb0;
        }
    }
    ctx->pc = 0x259CA4u;
    // 0x259ca4: 0xc089266  jal         func_224998
    ctx->pc = 0x259CA4u;
    SET_GPR_U32(ctx, 31, 0x259CACu);
    ctx->pc = 0x259CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259CA4u;
            // 0x259ca8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224998u;
    if (runtime->hasFunction(0x224998u)) {
        auto targetFn = runtime->lookupFunction(0x224998u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259CACu; }
        if (ctx->pc != 0x259CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_224998_0x2249c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259CACu; }
        if (ctx->pc != 0x259CACu) { return; }
    }
    ctx->pc = 0x259CACu;
    // 0x259cac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x259cacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_259cb0:
    // 0x259cb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x259cb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259cb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x259cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x259CB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259CB8u;
            // 0x259cbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x259B18u: goto label_259b18;
            case 0x259B30u: goto label_259b30;
            case 0x259B78u: goto label_259b78;
            case 0x259B90u: goto label_259b90;
            case 0x259BD8u: goto label_259bd8;
            case 0x259BF0u: goto label_259bf0;
            case 0x259C38u: goto label_259c38;
            case 0x259C50u: goto label_259c50;
            case 0x259C98u: goto label_259c98;
            case 0x259CB0u: goto label_259cb0;
            case 0x259CF8u: goto label_259cf8;
            case 0x259D10u: goto label_259d10;
            case 0x259D58u: goto label_259d58;
            case 0x259D70u: goto label_259d70;
            case 0x259DB8u: goto label_259db8;
            case 0x259DD0u: goto label_259dd0;
            case 0x259E18u: goto label_259e18;
            case 0x259E30u: goto label_259e30;
            case 0x259E78u: goto label_259e78;
            case 0x259E90u: goto label_259e90;
            case 0x259ED8u: goto label_259ed8;
            case 0x259EF0u: goto label_259ef0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x259CC0u;
    // 0x259cc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x259cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x259cc4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x259cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x259cc8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x259cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x259ccc: 0x2442ead8  addiu       $v0, $v0, -0x1528
    ctx->pc = 0x259cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961880));
    // 0x259cd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x259cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x259cd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x259cd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259cd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x259cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x259cdc: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x259cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x259ce0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x259ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x259ce4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x259CE4u;
    {
        const bool branch_taken_0x259ce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x259CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259CE4u;
            // 0x259ce8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259ce4) {
            ctx->pc = 0x259CF8u;
            goto label_259cf8;
        }
    }
    ctx->pc = 0x259CECu;
    // 0x259cec: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x259cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x259cf0: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x259CF0u;
    SET_GPR_U32(ctx, 31, 0x259CF8u);
    ctx->pc = 0x259CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259CF0u;
            // 0x259cf4: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259CF8u; }
        if (ctx->pc != 0x259CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259CF8u; }
        if (ctx->pc != 0x259CF8u) { return; }
    }
    ctx->pc = 0x259CF8u;
label_259cf8:
    // 0x259cf8: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x259cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x259cfc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x259CFCu;
    {
        const bool branch_taken_0x259cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x259cfc) {
            ctx->pc = 0x259D00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x259CFCu;
            // 0x259d00: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x259D10u;
            goto label_259d10;
        }
    }
    ctx->pc = 0x259D04u;
    // 0x259d04: 0xc0830b8  jal         func_20C2E0
    ctx->pc = 0x259D04u;
    SET_GPR_U32(ctx, 31, 0x259D0Cu);
    ctx->pc = 0x259D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259D04u;
            // 0x259d08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20C2E0u;
    if (runtime->hasFunction(0x20C2E0u)) {
        auto targetFn = runtime->lookupFunction(0x20C2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259D0Cu; }
        if (ctx->pc != 0x259D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_20c2e0_0x20c308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259D0Cu; }
        if (ctx->pc != 0x259D0Cu) { return; }
    }
    ctx->pc = 0x259D0Cu;
    // 0x259d0c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x259d0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_259d10:
    // 0x259d10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x259d10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259d14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x259d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259d18: 0x3e00008  jr          $ra
    ctx->pc = 0x259D18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259D18u;
            // 0x259d1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x259B18u: goto label_259b18;
            case 0x259B30u: goto label_259b30;
            case 0x259B78u: goto label_259b78;
            case 0x259B90u: goto label_259b90;
            case 0x259BD8u: goto label_259bd8;
            case 0x259BF0u: goto label_259bf0;
            case 0x259C38u: goto label_259c38;
            case 0x259C50u: goto label_259c50;
            case 0x259C98u: goto label_259c98;
            case 0x259CB0u: goto label_259cb0;
            case 0x259CF8u: goto label_259cf8;
            case 0x259D10u: goto label_259d10;
            case 0x259D58u: goto label_259d58;
            case 0x259D70u: goto label_259d70;
            case 0x259DB8u: goto label_259db8;
            case 0x259DD0u: goto label_259dd0;
            case 0x259E18u: goto label_259e18;
            case 0x259E30u: goto label_259e30;
            case 0x259E78u: goto label_259e78;
            case 0x259E90u: goto label_259e90;
            case 0x259ED8u: goto label_259ed8;
            case 0x259EF0u: goto label_259ef0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x259D20u;
    // 0x259d20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x259d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x259d24: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x259d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x259d28: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x259d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x259d2c: 0x2442ead8  addiu       $v0, $v0, -0x1528
    ctx->pc = 0x259d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961880));
    // 0x259d30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x259d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x259d34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x259d34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259d38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x259d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x259d3c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x259d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x259d40: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x259d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x259d44: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x259D44u;
    {
        const bool branch_taken_0x259d44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x259D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259D44u;
            // 0x259d48: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259d44) {
            ctx->pc = 0x259D58u;
            goto label_259d58;
        }
    }
    ctx->pc = 0x259D4Cu;
    // 0x259d4c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x259d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x259d50: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x259D50u;
    SET_GPR_U32(ctx, 31, 0x259D58u);
    ctx->pc = 0x259D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259D50u;
            // 0x259d54: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259D58u; }
        if (ctx->pc != 0x259D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259D58u; }
        if (ctx->pc != 0x259D58u) { return; }
    }
    ctx->pc = 0x259D58u;
label_259d58:
    // 0x259d58: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x259d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x259d5c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x259D5Cu;
    {
        const bool branch_taken_0x259d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x259d5c) {
            ctx->pc = 0x259D60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x259D5Cu;
            // 0x259d60: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x259D70u;
            goto label_259d70;
        }
    }
    ctx->pc = 0x259D64u;
    // 0x259d64: 0xc0772e0  jal         func_1DCB80
    ctx->pc = 0x259D64u;
    SET_GPR_U32(ctx, 31, 0x259D6Cu);
    ctx->pc = 0x259D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259D64u;
            // 0x259d68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCB80u;
    if (runtime->hasFunction(0x1DCB80u)) {
        auto targetFn = runtime->lookupFunction(0x1DCB80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259D6Cu; }
        if (ctx->pc != 0x259D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1dcb80_0x1dcba8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259D6Cu; }
        if (ctx->pc != 0x259D6Cu) { return; }
    }
    ctx->pc = 0x259D6Cu;
    // 0x259d6c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x259d6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_259d70:
    // 0x259d70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x259d70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259d74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x259d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259d78: 0x3e00008  jr          $ra
    ctx->pc = 0x259D78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259D78u;
            // 0x259d7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x259B18u: goto label_259b18;
            case 0x259B30u: goto label_259b30;
            case 0x259B78u: goto label_259b78;
            case 0x259B90u: goto label_259b90;
            case 0x259BD8u: goto label_259bd8;
            case 0x259BF0u: goto label_259bf0;
            case 0x259C38u: goto label_259c38;
            case 0x259C50u: goto label_259c50;
            case 0x259C98u: goto label_259c98;
            case 0x259CB0u: goto label_259cb0;
            case 0x259CF8u: goto label_259cf8;
            case 0x259D10u: goto label_259d10;
            case 0x259D58u: goto label_259d58;
            case 0x259D70u: goto label_259d70;
            case 0x259DB8u: goto label_259db8;
            case 0x259DD0u: goto label_259dd0;
            case 0x259E18u: goto label_259e18;
            case 0x259E30u: goto label_259e30;
            case 0x259E78u: goto label_259e78;
            case 0x259E90u: goto label_259e90;
            case 0x259ED8u: goto label_259ed8;
            case 0x259EF0u: goto label_259ef0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x259D80u;
    // 0x259d80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x259d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x259d84: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x259d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x259d88: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x259d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x259d8c: 0x2442ead8  addiu       $v0, $v0, -0x1528
    ctx->pc = 0x259d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961880));
    // 0x259d90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x259d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x259d94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x259d94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259d98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x259d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x259d9c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x259d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x259da0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x259da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x259da4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x259DA4u;
    {
        const bool branch_taken_0x259da4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x259DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259DA4u;
            // 0x259da8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259da4) {
            ctx->pc = 0x259DB8u;
            goto label_259db8;
        }
    }
    ctx->pc = 0x259DACu;
    // 0x259dac: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x259dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x259db0: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x259DB0u;
    SET_GPR_U32(ctx, 31, 0x259DB8u);
    ctx->pc = 0x259DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259DB0u;
            // 0x259db4: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259DB8u; }
        if (ctx->pc != 0x259DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259DB8u; }
        if (ctx->pc != 0x259DB8u) { return; }
    }
    ctx->pc = 0x259DB8u;
label_259db8:
    // 0x259db8: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x259db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x259dbc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x259DBCu;
    {
        const bool branch_taken_0x259dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x259dbc) {
            ctx->pc = 0x259DC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x259DBCu;
            // 0x259dc0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x259DD0u;
            goto label_259dd0;
        }
    }
    ctx->pc = 0x259DC4u;
    // 0x259dc4: 0xc08002a  jal         func_2000A8
    ctx->pc = 0x259DC4u;
    SET_GPR_U32(ctx, 31, 0x259DCCu);
    ctx->pc = 0x259DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259DC4u;
            // 0x259dc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2000A8u;
    if (runtime->hasFunction(0x2000A8u)) {
        auto targetFn = runtime->lookupFunction(0x2000A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259DCCu; }
        if (ctx->pc != 0x259DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2000a8_0x2000d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259DCCu; }
        if (ctx->pc != 0x259DCCu) { return; }
    }
    ctx->pc = 0x259DCCu;
    // 0x259dcc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x259dccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_259dd0:
    // 0x259dd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x259dd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259dd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x259dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x259DD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259DD8u;
            // 0x259ddc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x259B18u: goto label_259b18;
            case 0x259B30u: goto label_259b30;
            case 0x259B78u: goto label_259b78;
            case 0x259B90u: goto label_259b90;
            case 0x259BD8u: goto label_259bd8;
            case 0x259BF0u: goto label_259bf0;
            case 0x259C38u: goto label_259c38;
            case 0x259C50u: goto label_259c50;
            case 0x259C98u: goto label_259c98;
            case 0x259CB0u: goto label_259cb0;
            case 0x259CF8u: goto label_259cf8;
            case 0x259D10u: goto label_259d10;
            case 0x259D58u: goto label_259d58;
            case 0x259D70u: goto label_259d70;
            case 0x259DB8u: goto label_259db8;
            case 0x259DD0u: goto label_259dd0;
            case 0x259E18u: goto label_259e18;
            case 0x259E30u: goto label_259e30;
            case 0x259E78u: goto label_259e78;
            case 0x259E90u: goto label_259e90;
            case 0x259ED8u: goto label_259ed8;
            case 0x259EF0u: goto label_259ef0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x259DE0u;
    // 0x259de0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x259de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x259de4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x259de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x259de8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x259de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x259dec: 0x2442ead8  addiu       $v0, $v0, -0x1528
    ctx->pc = 0x259decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961880));
    // 0x259df0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x259df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x259df4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x259df4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259df8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x259df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x259dfc: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x259dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x259e00: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x259e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x259e04: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x259E04u;
    {
        const bool branch_taken_0x259e04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x259E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259E04u;
            // 0x259e08: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259e04) {
            ctx->pc = 0x259E18u;
            goto label_259e18;
        }
    }
    ctx->pc = 0x259E0Cu;
    // 0x259e0c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x259e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x259e10: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x259E10u;
    SET_GPR_U32(ctx, 31, 0x259E18u);
    ctx->pc = 0x259E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259E10u;
            // 0x259e14: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259E18u; }
        if (ctx->pc != 0x259E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259E18u; }
        if (ctx->pc != 0x259E18u) { return; }
    }
    ctx->pc = 0x259E18u;
label_259e18:
    // 0x259e18: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x259e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x259e1c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x259E1Cu;
    {
        const bool branch_taken_0x259e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x259e1c) {
            ctx->pc = 0x259E20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x259E1Cu;
            // 0x259e20: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x259E30u;
            goto label_259e30;
        }
    }
    ctx->pc = 0x259E24u;
    // 0x259e24: 0xc0855ea  jal         func_2157A8
    ctx->pc = 0x259E24u;
    SET_GPR_U32(ctx, 31, 0x259E2Cu);
    ctx->pc = 0x259E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259E24u;
            // 0x259e28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2157A8u;
    if (runtime->hasFunction(0x2157A8u)) {
        auto targetFn = runtime->lookupFunction(0x2157A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259E2Cu; }
        if (ctx->pc != 0x259E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2157a8_0x2157d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259E2Cu; }
        if (ctx->pc != 0x259E2Cu) { return; }
    }
    ctx->pc = 0x259E2Cu;
    // 0x259e2c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x259e2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_259e30:
    // 0x259e30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x259e30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259e34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x259e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259e38: 0x3e00008  jr          $ra
    ctx->pc = 0x259E38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259E38u;
            // 0x259e3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x259B18u: goto label_259b18;
            case 0x259B30u: goto label_259b30;
            case 0x259B78u: goto label_259b78;
            case 0x259B90u: goto label_259b90;
            case 0x259BD8u: goto label_259bd8;
            case 0x259BF0u: goto label_259bf0;
            case 0x259C38u: goto label_259c38;
            case 0x259C50u: goto label_259c50;
            case 0x259C98u: goto label_259c98;
            case 0x259CB0u: goto label_259cb0;
            case 0x259CF8u: goto label_259cf8;
            case 0x259D10u: goto label_259d10;
            case 0x259D58u: goto label_259d58;
            case 0x259D70u: goto label_259d70;
            case 0x259DB8u: goto label_259db8;
            case 0x259DD0u: goto label_259dd0;
            case 0x259E18u: goto label_259e18;
            case 0x259E30u: goto label_259e30;
            case 0x259E78u: goto label_259e78;
            case 0x259E90u: goto label_259e90;
            case 0x259ED8u: goto label_259ed8;
            case 0x259EF0u: goto label_259ef0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x259E40u;
    // 0x259e40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x259e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x259e44: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x259e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x259e48: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x259e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x259e4c: 0x2442ead8  addiu       $v0, $v0, -0x1528
    ctx->pc = 0x259e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961880));
    // 0x259e50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x259e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x259e54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x259e54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259e58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x259e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x259e5c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x259e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x259e60: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x259e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x259e64: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x259E64u;
    {
        const bool branch_taken_0x259e64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x259E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259E64u;
            // 0x259e68: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259e64) {
            ctx->pc = 0x259E78u;
            goto label_259e78;
        }
    }
    ctx->pc = 0x259E6Cu;
    // 0x259e6c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x259e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x259e70: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x259E70u;
    SET_GPR_U32(ctx, 31, 0x259E78u);
    ctx->pc = 0x259E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259E70u;
            // 0x259e74: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259E78u; }
        if (ctx->pc != 0x259E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259E78u; }
        if (ctx->pc != 0x259E78u) { return; }
    }
    ctx->pc = 0x259E78u;
label_259e78:
    // 0x259e78: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x259e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x259e7c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x259E7Cu;
    {
        const bool branch_taken_0x259e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x259e7c) {
            ctx->pc = 0x259E80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x259E7Cu;
            // 0x259e80: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x259E90u;
            goto label_259e90;
        }
    }
    ctx->pc = 0x259E84u;
    // 0x259e84: 0xc0850e2  jal         func_214388
    ctx->pc = 0x259E84u;
    SET_GPR_U32(ctx, 31, 0x259E8Cu);
    ctx->pc = 0x259E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259E84u;
            // 0x259e88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x214388u;
    if (runtime->hasFunction(0x214388u)) {
        auto targetFn = runtime->lookupFunction(0x214388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259E8Cu; }
        if (ctx->pc != 0x259E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_214388_0x2143b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259E8Cu; }
        if (ctx->pc != 0x259E8Cu) { return; }
    }
    ctx->pc = 0x259E8Cu;
    // 0x259e8c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x259e8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_259e90:
    // 0x259e90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x259e90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259e94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x259e94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259e98: 0x3e00008  jr          $ra
    ctx->pc = 0x259E98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259E98u;
            // 0x259e9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x259B18u: goto label_259b18;
            case 0x259B30u: goto label_259b30;
            case 0x259B78u: goto label_259b78;
            case 0x259B90u: goto label_259b90;
            case 0x259BD8u: goto label_259bd8;
            case 0x259BF0u: goto label_259bf0;
            case 0x259C38u: goto label_259c38;
            case 0x259C50u: goto label_259c50;
            case 0x259C98u: goto label_259c98;
            case 0x259CB0u: goto label_259cb0;
            case 0x259CF8u: goto label_259cf8;
            case 0x259D10u: goto label_259d10;
            case 0x259D58u: goto label_259d58;
            case 0x259D70u: goto label_259d70;
            case 0x259DB8u: goto label_259db8;
            case 0x259DD0u: goto label_259dd0;
            case 0x259E18u: goto label_259e18;
            case 0x259E30u: goto label_259e30;
            case 0x259E78u: goto label_259e78;
            case 0x259E90u: goto label_259e90;
            case 0x259ED8u: goto label_259ed8;
            case 0x259EF0u: goto label_259ef0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x259EA0u;
    // 0x259ea0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x259ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x259ea4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x259ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x259ea8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x259ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x259eac: 0x2442ead8  addiu       $v0, $v0, -0x1528
    ctx->pc = 0x259eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961880));
    // 0x259eb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x259eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x259eb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x259eb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259eb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x259eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x259ebc: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x259ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x259ec0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x259ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x259ec4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x259EC4u;
    {
        const bool branch_taken_0x259ec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x259EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259EC4u;
            // 0x259ec8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259ec4) {
            ctx->pc = 0x259ED8u;
            goto label_259ed8;
        }
    }
    ctx->pc = 0x259ECCu;
    // 0x259ecc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x259eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x259ed0: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x259ED0u;
    SET_GPR_U32(ctx, 31, 0x259ED8u);
    ctx->pc = 0x259ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259ED0u;
            // 0x259ed4: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259ED8u; }
        if (ctx->pc != 0x259ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259ED8u; }
        if (ctx->pc != 0x259ED8u) { return; }
    }
    ctx->pc = 0x259ED8u;
label_259ed8:
    // 0x259ed8: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x259ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x259edc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x259EDCu;
    {
        const bool branch_taken_0x259edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x259edc) {
            ctx->pc = 0x259EE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x259EDCu;
            // 0x259ee0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x259EF0u;
            goto label_259ef0;
        }
    }
    ctx->pc = 0x259EE4u;
    // 0x259ee4: 0xc084a52  jal         func_212948
    ctx->pc = 0x259EE4u;
    SET_GPR_U32(ctx, 31, 0x259EECu);
    ctx->pc = 0x259EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259EE4u;
            // 0x259ee8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x212948u;
    if (runtime->hasFunction(0x212948u)) {
        auto targetFn = runtime->lookupFunction(0x212948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259EECu; }
        if (ctx->pc != 0x259EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_212948_0x212970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259EECu; }
        if (ctx->pc != 0x259EECu) { return; }
    }
    ctx->pc = 0x259EECu;
    // 0x259eec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x259eecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_259ef0:
    // 0x259ef0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x259ef0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259ef4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x259ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x259EF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259EF8u;
            // 0x259efc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x259B18u: goto label_259b18;
            case 0x259B30u: goto label_259b30;
            case 0x259B78u: goto label_259b78;
            case 0x259B90u: goto label_259b90;
            case 0x259BD8u: goto label_259bd8;
            case 0x259BF0u: goto label_259bf0;
            case 0x259C38u: goto label_259c38;
            case 0x259C50u: goto label_259c50;
            case 0x259C98u: goto label_259c98;
            case 0x259CB0u: goto label_259cb0;
            case 0x259CF8u: goto label_259cf8;
            case 0x259D10u: goto label_259d10;
            case 0x259D58u: goto label_259d58;
            case 0x259D70u: goto label_259d70;
            case 0x259DB8u: goto label_259db8;
            case 0x259DD0u: goto label_259dd0;
            case 0x259E18u: goto label_259e18;
            case 0x259E30u: goto label_259e30;
            case 0x259E78u: goto label_259e78;
            case 0x259E90u: goto label_259e90;
            case 0x259ED8u: goto label_259ed8;
            case 0x259EF0u: goto label_259ef0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x259F00u;
}
