#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015DC20
// Address: 0x15dc20 - 0x15dd80
void sub_0015DC20_0x15dc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015DC20_0x15dc20");
#endif

    ctx->pc = 0x15dc20u;

    // 0x15dc20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15dc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15dc24: 0x3c03dead  lui         $v1, 0xDEAD
    ctx->pc = 0x15dc24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57005 << 16));
    // 0x15dc28: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x15dc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x15dc2c: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x15dc2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x15dc30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15dc30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15dc34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15dc34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dc38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15dc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15dc3c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x15dc3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dc40: 0x3463beef  ori         $v1, $v1, 0xBEEF
    ctx->pc = 0x15dc40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48879);
    // 0x15dc44: 0x24c60978  addiu       $a2, $a2, 0x978
    ctx->pc = 0x15dc44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2424));
    // 0x15dc48: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x15dc48u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15dc4c: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x15dc4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x15dc50: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x15dc50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x15dc54: 0x81402  srl         $v0, $t0, 16
    ctx->pc = 0x15dc54u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x15dc58: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x15dc58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x15dc5c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x15dc5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x15dc60: 0xa6080000  sh          $t0, 0x0($s0)
    ctx->pc = 0x15dc60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x15dc64: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x15dc64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x15dc68: 0xae060020  sw          $a2, 0x20($s0)
    ctx->pc = 0x15dc68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 6));
    // 0x15dc6c: 0xa6070004  sh          $a3, 0x4($s0)
    ctx->pc = 0x15dc6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x15dc70: 0xc08e222  jal         func_238888
    ctx->pc = 0x15DC70u;
    SET_GPR_U32(ctx, 31, 0x15DC78u);
    ctx->pc = 0x15DC74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DC70u;
            // 0x15dc74: 0xa6020002  sh          $v0, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DC78u; }
        if (ctx->pc != 0x15DC78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DC78u; }
        if (ctx->pc != 0x15DC78u) { return; }
    }
    ctx->pc = 0x15DC78u;
    // 0x15dc78: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x15dc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x15dc7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15dc7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dc80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15dc80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dc84: 0xc08e222  jal         func_238888
    ctx->pc = 0x15DC84u;
    SET_GPR_U32(ctx, 31, 0x15DC8Cu);
    ctx->pc = 0x15DC88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DC84u;
            // 0x15dc88: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DC8Cu; }
        if (ctx->pc != 0x15DC8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DC8Cu; }
        if (ctx->pc != 0x15DC8Cu) { return; }
    }
    ctx->pc = 0x15DC8Cu;
    // 0x15dc8c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x15dc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x15dc90: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x15dc90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x15dc94: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x15dc94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x15dc98: 0x2463cb68  addiu       $v1, $v1, -0x3498
    ctx->pc = 0x15dc98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953832));
    // 0x15dc9c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x15dc9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x15dca0: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x15dca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
    // 0x15dca4: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x15dca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x15dca8: 0x2606013c  addiu       $a2, $s0, 0x13C
    ctx->pc = 0x15dca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 316));
    // 0x15dcac: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x15dcacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x15dcb0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x15dcb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15dcb4: 0x0  nop
    ctx->pc = 0x15dcb4u;
    // NOP
label_15dcb8:
    // 0x15dcb8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x15dcb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dcbc: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x15dcbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_15dcc0:
    // 0x15dcc0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x15dcc0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dcc4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x15dcc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_15dcc8:
    // 0x15dcc8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x15dcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x15dccc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x15dcccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x15dcd0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x15dcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x15dcd4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15dcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15dcd8: 0x0  nop
    ctx->pc = 0x15dcd8u;
    // NOP
    // 0x15dcdc: 0x14a2fffa  bne         $a1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15DCDCu;
    {
        const bool branch_taken_0x15dcdc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x15DCE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DCDCu;
            // 0x15dce0: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dcdc) {
            ctx->pc = 0x15DCC8u;
            runtime->cooperativeGuestYield();
            goto label_15dcc8;
        }
    }
    ctx->pc = 0x15DCE4u;
    // 0x15dce4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x15dce4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x15dce8: 0x14e5fff5  bne         $a3, $a1, . + 4 + (-0xB << 2)
    ctx->pc = 0x15DCE8u;
    {
        const bool branch_taken_0x15dce8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        ctx->pc = 0x15DCECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DCE8u;
            // 0x15dcec: 0x24840038  addiu       $a0, $a0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dce8) {
            ctx->pc = 0x15DCC0u;
            runtime->cooperativeGuestYield();
            goto label_15dcc0;
        }
    }
    ctx->pc = 0x15DCF0u;
    // 0x15dcf0: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x15dcf0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x15dcf4: 0x1507fff0  bne         $t0, $a3, . + 4 + (-0x10 << 2)
    ctx->pc = 0x15DCF4u;
    {
        const bool branch_taken_0x15dcf4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        ctx->pc = 0x15DCF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DCF4u;
            // 0x15dcf8: 0x24c60118  addiu       $a2, $a2, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dcf4) {
            ctx->pc = 0x15DCB8u;
            runtime->cooperativeGuestYield();
            goto label_15dcb8;
        }
    }
    ctx->pc = 0x15DCFCu;
    // 0x15dcfc: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x15dcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x15dd00: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15dd00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dd04: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x15dd04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x15dd08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15dd08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dd0c: 0x0  nop
    ctx->pc = 0x15dd0cu;
    // NOP
label_15dd10:
    // 0x15dd10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15dd10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dd14: 0x0  nop
    ctx->pc = 0x15dd14u;
    // NOP
label_15dd18:
    // 0x15dd18: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x15dd18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x15dd1c: 0x2404008c  addiu       $a0, $zero, 0x8C
    ctx->pc = 0x15dd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x15dd20: 0xe31818  mult        $v1, $a3, $v1
    ctx->pc = 0x15dd20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15dd24: 0x1042018  mult        $a0, $t0, $a0
    ctx->pc = 0x15dd24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x15dd28: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x15dd28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x15dd2c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15dd2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15dd30: 0x28c50007  slti        $a1, $a2, 0x7
    ctx->pc = 0x15dd30u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x15dd34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15dd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15dd38: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x15dd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x15dd3c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15dd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15dd40: 0x14a0fff5  bnez        $a1, . + 4 + (-0xB << 2)
    ctx->pc = 0x15DD40u;
    {
        const bool branch_taken_0x15dd40 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DD44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DD40u;
            // 0x15dd44: 0xac400024  sw          $zero, 0x24($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dd40) {
            ctx->pc = 0x15DD18u;
            runtime->cooperativeGuestYield();
            goto label_15dd18;
        }
    }
    ctx->pc = 0x15DD48u;
    // 0x15dd48: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x15dd48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x15dd4c: 0x28e20005  slti        $v0, $a3, 0x5
    ctx->pc = 0x15dd4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x15dd50: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x15DD50u;
    {
        const bool branch_taken_0x15dd50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15dd50) {
            ctx->pc = 0x15DD54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15DD50u;
            // 0x15dd54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15DD18u;
            runtime->cooperativeGuestYield();
            goto label_15dd18;
        }
    }
    ctx->pc = 0x15DD58u;
    // 0x15dd58: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x15dd58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x15dd5c: 0x29020002  slti        $v0, $t0, 0x2
    ctx->pc = 0x15dd5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x15dd60: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x15DD60u;
    {
        const bool branch_taken_0x15dd60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15dd60) {
            ctx->pc = 0x15DD64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15DD60u;
            // 0x15dd64: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15DD10u;
            runtime->cooperativeGuestYield();
            goto label_15dd10;
        }
    }
    ctx->pc = 0x15DD68u;
    // 0x15dd68: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x15dd68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dd6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15dd6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15dd70: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x15dd70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15dd74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15dd74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15dd78: 0x3e00008  jr          $ra
    ctx->pc = 0x15DD78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15DD7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DD78u;
            // 0x15dd7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15DCB8u: goto label_15dcb8;
            case 0x15DCC0u: goto label_15dcc0;
            case 0x15DCC8u: goto label_15dcc8;
            case 0x15DD10u: goto label_15dd10;
            case 0x15DD18u: goto label_15dd18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15DD80u;
}
