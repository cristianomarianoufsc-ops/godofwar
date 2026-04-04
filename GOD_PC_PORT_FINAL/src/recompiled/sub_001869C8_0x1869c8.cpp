#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001869C8
// Address: 0x1869c8 - 0x186ec0
void sub_001869C8_0x1869c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001869C8_0x1869c8");
#endif

    ctx->pc = 0x1869c8u;

    // 0x1869c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1869c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1869cc: 0x3c03dead  lui         $v1, 0xDEAD
    ctx->pc = 0x1869ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57005 << 16));
    // 0x1869d0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1869d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1869d4: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x1869d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x1869d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1869d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1869dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1869dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1869e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1869e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1869e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1869e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1869e8: 0x24c60978  addiu       $a2, $a2, 0x978
    ctx->pc = 0x1869e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2424));
    // 0x1869ec: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x1869ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1869f0: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x1869f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1869f4: 0x3463beef  ori         $v1, $v1, 0xBEEF
    ctx->pc = 0x1869f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48879);
    // 0x1869f8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1869f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1869fc: 0x81402  srl         $v0, $t0, 16
    ctx->pc = 0x1869fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x186a00: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x186a00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x186a04: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x186a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x186a08: 0xa6070004  sh          $a3, 0x4($s0)
    ctx->pc = 0x186a08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x186a0c: 0xa6080000  sh          $t0, 0x0($s0)
    ctx->pc = 0x186a0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x186a10: 0xae060020  sw          $a2, 0x20($s0)
    ctx->pc = 0x186a10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 6));
    // 0x186a14: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x186a14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x186a18: 0xc08e222  jal         func_238888
    ctx->pc = 0x186A18u;
    SET_GPR_U32(ctx, 31, 0x186A20u);
    ctx->pc = 0x186A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186A18u;
            // 0x186a1c: 0xa6020002  sh          $v0, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186A20u; }
        if (ctx->pc != 0x186A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186A20u; }
        if (ctx->pc != 0x186A20u) { return; }
    }
    ctx->pc = 0x186A20u;
    // 0x186a20: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x186a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x186a24: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x186a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186a28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x186a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186a2c: 0xc08e222  jal         func_238888
    ctx->pc = 0x186A2Cu;
    SET_GPR_U32(ctx, 31, 0x186A34u);
    ctx->pc = 0x186A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186A2Cu;
            // 0x186a30: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186A34u; }
        if (ctx->pc != 0x186A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186A34u; }
        if (ctx->pc != 0x186A34u) { return; }
    }
    ctx->pc = 0x186A34u;
    // 0x186a34: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x186a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x186a38: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x186a38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x186a3c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x186a3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x186a40: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x186a40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x186a44: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x186a44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x186a48: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x186a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x186a4c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x186a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x186a50: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x186a50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x186a54: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x186a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x186a58: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x186a58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x186a5c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x186a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x186a60: 0xc08e43a  jal         func_2390E8
    ctx->pc = 0x186A60u;
    SET_GPR_U32(ctx, 31, 0x186A68u);
    ctx->pc = 0x186A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186A60u;
            // 0x186a64: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2390E8u;
    if (runtime->hasFunction(0x2390E8u)) {
        auto targetFn = runtime->lookupFunction(0x2390E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186A68u; }
        if (ctx->pc != 0x186A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2390e8_0x2390f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186A68u; }
        if (ctx->pc != 0x186A68u) { return; }
    }
    ctx->pc = 0x186A68u;
    // 0x186a68: 0x96240000  lhu         $a0, 0x0($s1)
    ctx->pc = 0x186a68u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x186a6c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x186a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x186a70: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x186a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x186a74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x186a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x186a78: 0x2442fef0  addiu       $v0, $v0, -0x110
    ctx->pc = 0x186a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967024));
    // 0x186a7c: 0xa6040002  sh          $a0, 0x2($s0)
    ctx->pc = 0x186a7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x186a80: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x186a80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x186a84: 0x2604007c  addiu       $a0, $s0, 0x7C
    ctx->pc = 0x186a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
    // 0x186a88: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x186a88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x186a8c: 0xae05002c  sw          $a1, 0x2C($s0)
    ctx->pc = 0x186a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 5));
    // 0x186a90: 0xc08e7e4  jal         func_239F90
    ctx->pc = 0x186A90u;
    SET_GPR_U32(ctx, 31, 0x186A98u);
    ctx->pc = 0x186A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186A90u;
            // 0x186a94: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F90u;
    if (runtime->hasFunction(0x239F90u)) {
        auto targetFn = runtime->lookupFunction(0x239F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186A98u; }
        if (ctx->pc != 0x186A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239f90_0x23a000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186A98u; }
        if (ctx->pc != 0x186A98u) { return; }
    }
    ctx->pc = 0x186A98u;
    // 0x186a98: 0x26020188  addiu       $v0, $s0, 0x188
    ctx->pc = 0x186a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 392));
    // 0x186a9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x186a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186aa0: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x186aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x186aa4: 0xc04c6b2  jal         func_131AC8
    ctx->pc = 0x186AA4u;
    SET_GPR_U32(ctx, 31, 0x186AACu);
    ctx->pc = 0x186AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186AA4u;
            // 0x186aa8: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131AC8u;
    if (runtime->hasFunction(0x131AC8u)) {
        auto targetFn = runtime->lookupFunction(0x131AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186AACu; }
        if (ctx->pc != 0x186AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_131ac8_0x131ae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186AACu; }
        if (ctx->pc != 0x186AACu) { return; }
    }
    ctx->pc = 0x186AACu;
    // 0x186aac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x186aacu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186ab0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x186ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x186ab4: 0x0  nop
    ctx->pc = 0x186ab4u;
    // NOP
label_186ab8:
    // 0x186ab8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x186ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x186abc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x186abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x186ac0: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x186ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    // 0x186ac4: 0x28620006  slti        $v0, $v1, 0x6
    ctx->pc = 0x186ac4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x186ac8: 0x0  nop
    ctx->pc = 0x186ac8u;
    // NOP
    // 0x186acc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x186ACCu;
    {
        const bool branch_taken_0x186acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x186AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186ACCu;
            // 0x186ad0: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186acc) {
            ctx->pc = 0x186AB8u;
            runtime->cooperativeGuestYield();
            goto label_186ab8;
        }
    }
    ctx->pc = 0x186AD4u;
    // 0x186ad4: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x186ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x186ad8: 0x8e260054  lw          $a2, 0x54($s1)
    ctx->pc = 0x186ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x186adc: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x186adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x186ae0: 0x8e250060  lw          $a1, 0x60($s1)
    ctx->pc = 0x186ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x186ae4: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x186ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x186ae8: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x186ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x186aec: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x186aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x186af0: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x186af0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    // 0x186af4: 0xae050074  sw          $a1, 0x74($s0)
    ctx->pc = 0x186af4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 5));
    // 0x186af8: 0xae030070  sw          $v1, 0x70($s0)
    ctx->pc = 0x186af8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
    // 0x186afc: 0xae04004c  sw          $a0, 0x4C($s0)
    ctx->pc = 0x186afcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 4));
    // 0x186b00: 0xae060048  sw          $a2, 0x48($s0)
    ctx->pc = 0x186b00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 6));
    // 0x186b04: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x186b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x186b08: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x186b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x186b0c: 0x8c6200dc  lw          $v0, 0xDC($v1)
    ctx->pc = 0x186b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 220)));
    // 0x186b10: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x186B10u;
    {
        const bool branch_taken_0x186b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x186b10) {
            ctx->pc = 0x186B14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x186B10u;
            // 0x186b14: 0xae020078  sw          $v0, 0x78($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x186B40u;
            goto label_186b40;
        }
    }
    ctx->pc = 0x186B18u;
    // 0x186b18: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x186b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x186b1c: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x186b1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x186b20: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x186b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x186b24: 0x40f809  jalr        $v0
    ctx->pc = 0x186B24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x186B2Cu);
        ctx->pc = 0x186B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186B24u;
            // 0x186b28: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x186B2Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x186AB8u: goto label_186ab8;
            case 0x186B38u: goto label_186b38;
            case 0x186B40u: goto label_186b40;
            case 0x186B58u: goto label_186b58;
            case 0x186C18u: goto label_186c18;
            case 0x186C3Cu: goto label_186c3c;
            case 0x186C88u: goto label_186c88;
            case 0x186CA8u: goto label_186ca8;
            case 0x186CC8u: goto label_186cc8;
            case 0x186CF0u: goto label_186cf0;
            case 0x186D04u: goto label_186d04;
            case 0x186D38u: goto label_186d38;
            case 0x186D48u: goto label_186d48;
            case 0x186D78u: goto label_186d78;
            case 0x186DA0u: goto label_186da0;
            case 0x186DB0u: goto label_186db0;
            case 0x186DF8u: goto label_186df8;
            case 0x186E20u: goto label_186e20;
            case 0x186E50u: goto label_186e50;
            case 0x186E78u: goto label_186e78;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x186B2Cu; }
            if (ctx->pc != 0x186B2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x186B2Cu;
    // 0x186b2c: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x186B2Cu;
    {
        const bool branch_taken_0x186b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186b2c) {
            ctx->pc = 0x186B30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x186B2Cu;
            // 0x186b30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x186B38u;
            goto label_186b38;
        }
    }
    ctx->pc = 0x186B34u;
    // 0x186b34: 0x8c420078  lw          $v0, 0x78($v0)
    ctx->pc = 0x186b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
label_186b38:
    // 0x186b38: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x186b38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    // 0x186b3c: 0x0  nop
    ctx->pc = 0x186b3cu;
    // NOP
label_186b40:
    // 0x186b40: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x186b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x186b44: 0x8c42e8b4  lw          $v0, -0x174C($v0)
    ctx->pc = 0x186b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x186b48: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x186b48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186b4c: 0xac4000dc  sw          $zero, 0xDC($v0)
    ctx->pc = 0x186b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 220), GPR_U32(ctx, 0));
    // 0x186b50: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x186b50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x186b54: 0x0  nop
    ctx->pc = 0x186b54u;
    // NOP
label_186b58:
    // 0x186b58: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x186b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x186b5c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x186b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x186b60: 0xac400084  sw          $zero, 0x84($v0)
    ctx->pc = 0x186b60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 0));
    // 0x186b64: 0x28620040  slti        $v0, $v1, 0x40
    ctx->pc = 0x186b64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x186b68: 0x0  nop
    ctx->pc = 0x186b68u;
    // NOP
    // 0x186b6c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x186B6Cu;
    {
        const bool branch_taken_0x186b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x186B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186B6Cu;
            // 0x186b70: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186b6c) {
            ctx->pc = 0x186B58u;
            runtime->cooperativeGuestYield();
            goto label_186b58;
        }
    }
    ctx->pc = 0x186B74u;
    // 0x186b74: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x186b74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x186b78: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x186b78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186b7c: 0x8c63c820  lw          $v1, -0x37E0($v1)
    ctx->pc = 0x186b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952992)));
    // 0x186b80: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x186b80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x186b84: 0xae030184  sw          $v1, 0x184($s0)
    ctx->pc = 0x186b84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 3));
    // 0x186b88: 0xae00019c  sw          $zero, 0x19C($s0)
    ctx->pc = 0x186b88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 0));
    // 0x186b8c: 0xae0001a0  sw          $zero, 0x1A0($s0)
    ctx->pc = 0x186b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 0));
    // 0x186b90: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x186b90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x186b94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x186b94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186b98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x186b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x186B9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186B9Cu;
            // 0x186ba0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x186AB8u: goto label_186ab8;
            case 0x186B38u: goto label_186b38;
            case 0x186B40u: goto label_186b40;
            case 0x186B58u: goto label_186b58;
            case 0x186C18u: goto label_186c18;
            case 0x186C3Cu: goto label_186c3c;
            case 0x186C88u: goto label_186c88;
            case 0x186CA8u: goto label_186ca8;
            case 0x186CC8u: goto label_186cc8;
            case 0x186CF0u: goto label_186cf0;
            case 0x186D04u: goto label_186d04;
            case 0x186D38u: goto label_186d38;
            case 0x186D48u: goto label_186d48;
            case 0x186D78u: goto label_186d78;
            case 0x186DA0u: goto label_186da0;
            case 0x186DB0u: goto label_186db0;
            case 0x186DF8u: goto label_186df8;
            case 0x186E20u: goto label_186e20;
            case 0x186E50u: goto label_186e50;
            case 0x186E78u: goto label_186e78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x186BA4u;
    // 0x186ba4: 0x0  nop
    ctx->pc = 0x186ba4u;
    // NOP
    // 0x186ba8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x186ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x186bac: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x186bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x186bb0: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x186bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x186bb4: 0x2442fef0  addiu       $v0, $v0, -0x110
    ctx->pc = 0x186bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967024));
    // 0x186bb8: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x186bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x186bbc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x186bbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186bc0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x186bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x186bc4: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x186bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x186bc8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x186bc8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186bcc: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x186bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x186bd0: 0x26330038  addiu       $s3, $s1, 0x38
    ctx->pc = 0x186bd0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x186bd4: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x186bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x186bd8: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x186bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x186bdc: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x186bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x186be0: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x186be0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x186be4: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x186be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x186be8: 0xc06196a  jal         func_1865A8
    ctx->pc = 0x186BE8u;
    SET_GPR_U32(ctx, 31, 0x186BF0u);
    ctx->pc = 0x186BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186BE8u;
            // 0x186bec: 0x24650034  addiu       $a1, $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1865A8u;
    if (runtime->hasFunction(0x1865A8u)) {
        auto targetFn = runtime->lookupFunction(0x1865A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186BF0u; }
        if (ctx->pc != 0x186BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001865A8_0x1865a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186BF0u; }
        if (ctx->pc != 0x186BF0u) { return; }
    }
    ctx->pc = 0x186BF0u;
    // 0x186bf0: 0x8e250034  lw          $a1, 0x34($s1)
    ctx->pc = 0x186bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x186bf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x186bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186bf8: 0xc06196a  jal         func_1865A8
    ctx->pc = 0x186BF8u;
    SET_GPR_U32(ctx, 31, 0x186C00u);
    ctx->pc = 0x186BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186BF8u;
            // 0x186bfc: 0x24a50034  addiu       $a1, $a1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1865A8u;
    if (runtime->hasFunction(0x1865A8u)) {
        auto targetFn = runtime->lookupFunction(0x1865A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186C00u; }
        if (ctx->pc != 0x186C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001865A8_0x1865a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186C00u; }
        if (ctx->pc != 0x186C00u) { return; }
    }
    ctx->pc = 0x186C00u;
    // 0x186c00: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x186c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x186c04: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x186c04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
    // 0x186c08: 0x1053000c  beq         $v0, $s3, . + 4 + (0xC << 2)
    ctx->pc = 0x186C08u;
    {
        const bool branch_taken_0x186c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x186C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186C08u;
            // 0x186c0c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186c08) {
            ctx->pc = 0x186C3Cu;
            goto label_186c3c;
        }
    }
    ctx->pc = 0x186C10u;
    // 0x186c10: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x186c10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x186c14: 0x0  nop
    ctx->pc = 0x186c14u;
    // NOP
label_186c18:
    // 0x186c18: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x186c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x186c1c: 0x8c447910  lw          $a0, 0x7910($v0)
    ctx->pc = 0x186c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
    // 0x186c20: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x186c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x186c24: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x186C24u;
    SET_GPR_U32(ctx, 31, 0x186C2Cu);
    ctx->pc = 0x186C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186C24u;
            // 0x186c28: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186C2Cu; }
        if (ctx->pc != 0x186C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186C2Cu; }
        if (ctx->pc != 0x186C2Cu) { return; }
    }
    ctx->pc = 0x186C2Cu;
    // 0x186c2c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x186c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x186c30: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x186c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186c34: 0x1462fff8  bne         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x186C34u;
    {
        const bool branch_taken_0x186c34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x186C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186C34u;
            // 0x186c38: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186c34) {
            ctx->pc = 0x186C18u;
            runtime->cooperativeGuestYield();
            goto label_186c18;
        }
    }
    ctx->pc = 0x186C3Cu;
label_186c3c:
    // 0x186c3c: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x186c3cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x186c40: 0xae730000  sw          $s3, 0x0($s3)
    ctx->pc = 0x186c40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 19));
    // 0x186c44: 0xae730004  sw          $s3, 0x4($s3)
    ctx->pc = 0x186c44u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 19));
    // 0x186c48: 0x3c140033  lui         $s4, 0x33
    ctx->pc = 0x186c48u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)51 << 16));
    // 0x186c4c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x186c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x186c50: 0x2682e848  addiu       $v0, $s4, -0x17B8
    ctx->pc = 0x186c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961224));
    // 0x186c54: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x186c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x186c58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x186c58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186c5c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x186c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x186c60: 0x2632007c  addiu       $s2, $s1, 0x7C
    ctx->pc = 0x186c60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
    // 0x186c64: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x186c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x186c68: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x186c68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x186c6c: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x186c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x186c70: 0x40f809  jalr        $v0
    ctx->pc = 0x186C70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x186C78u);
        ctx->pc = 0x186C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186C70u;
            // 0x186c74: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x186C78u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x186AB8u: goto label_186ab8;
            case 0x186B38u: goto label_186b38;
            case 0x186B40u: goto label_186b40;
            case 0x186B58u: goto label_186b58;
            case 0x186C18u: goto label_186c18;
            case 0x186C3Cu: goto label_186c3c;
            case 0x186C88u: goto label_186c88;
            case 0x186CA8u: goto label_186ca8;
            case 0x186CC8u: goto label_186cc8;
            case 0x186CF0u: goto label_186cf0;
            case 0x186D04u: goto label_186d04;
            case 0x186D38u: goto label_186d38;
            case 0x186D48u: goto label_186d48;
            case 0x186D78u: goto label_186d78;
            case 0x186DA0u: goto label_186da0;
            case 0x186DB0u: goto label_186db0;
            case 0x186DF8u: goto label_186df8;
            case 0x186E20u: goto label_186e20;
            case 0x186E50u: goto label_186e50;
            case 0x186E78u: goto label_186e78;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x186C78u; }
            if (ctx->pc != 0x186C78u) { return; }
        }
        }
    }
    ctx->pc = 0x186C78u;
    // 0x186c78: 0x8e30007c  lw          $s0, 0x7C($s1)
    ctx->pc = 0x186c78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x186c7c: 0x5212000a  beql        $s0, $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x186C7Cu;
    {
        const bool branch_taken_0x186c7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        if (branch_taken_0x186c7c) {
            ctx->pc = 0x186C80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x186C7Cu;
            // 0x186c80: 0x8e22007c  lw          $v0, 0x7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x186CA8u;
            goto label_186ca8;
        }
    }
    ctx->pc = 0x186C84u;
    // 0x186c84: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x186c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_186c88:
    // 0x186c88: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x186c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x186c8c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x186c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x186c90: 0x40f809  jalr        $v0
    ctx->pc = 0x186C90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x186C98u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x186C98u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x186AB8u: goto label_186ab8;
            case 0x186B38u: goto label_186b38;
            case 0x186B40u: goto label_186b40;
            case 0x186B58u: goto label_186b58;
            case 0x186C18u: goto label_186c18;
            case 0x186C3Cu: goto label_186c3c;
            case 0x186C88u: goto label_186c88;
            case 0x186CA8u: goto label_186ca8;
            case 0x186CC8u: goto label_186cc8;
            case 0x186CF0u: goto label_186cf0;
            case 0x186D04u: goto label_186d04;
            case 0x186D38u: goto label_186d38;
            case 0x186D48u: goto label_186d48;
            case 0x186D78u: goto label_186d78;
            case 0x186DA0u: goto label_186da0;
            case 0x186DB0u: goto label_186db0;
            case 0x186DF8u: goto label_186df8;
            case 0x186E20u: goto label_186e20;
            case 0x186E50u: goto label_186e50;
            case 0x186E78u: goto label_186e78;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x186C98u; }
            if (ctx->pc != 0x186C98u) { return; }
        }
        }
    }
    ctx->pc = 0x186C98u;
    // 0x186c98: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x186c98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x186c9c: 0x5612fffa  bnel        $s0, $s2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x186C9Cu;
    {
        const bool branch_taken_0x186c9c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        if (branch_taken_0x186c9c) {
            ctx->pc = 0x186CA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x186C9Cu;
            // 0x186ca0: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x186C88u;
            runtime->cooperativeGuestYield();
            goto label_186c88;
        }
    }
    ctx->pc = 0x186CA4u;
    // 0x186ca4: 0x8e22007c  lw          $v0, 0x7C($s1)
    ctx->pc = 0x186ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
label_186ca8:
    // 0x186ca8: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x186ca8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x186cac: 0x2632007c  addiu       $s2, $s1, 0x7C
    ctx->pc = 0x186cacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
    // 0x186cb0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x186cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x186cb4: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x186cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
    // 0x186cb8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x186cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x186cbc: 0x5052000c  beql        $v0, $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x186CBCu;
    {
        const bool branch_taken_0x186cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x186cbc) {
            ctx->pc = 0x186CC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x186CBCu;
            // 0x186cc0: 0x8e240048  lw          $a0, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x186CF0u;
            goto label_186cf0;
        }
    }
    ctx->pc = 0x186CC4u;
    // 0x186cc4: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x186cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_186cc8:
    // 0x186cc8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x186cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x186ccc: 0x8c447910  lw          $a0, 0x7910($v0)
    ctx->pc = 0x186cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
    // 0x186cd0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x186cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x186cd4: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x186CD4u;
    SET_GPR_U32(ctx, 31, 0x186CDCu);
    ctx->pc = 0x186CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186CD4u;
            // 0x186cd8: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186CDCu; }
        if (ctx->pc != 0x186CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186CDCu; }
        if (ctx->pc != 0x186CDCu) { return; }
    }
    ctx->pc = 0x186CDCu;
    // 0x186cdc: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x186cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x186ce0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x186ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186ce4: 0x1462fff8  bne         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x186CE4u;
    {
        const bool branch_taken_0x186ce4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x186CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186CE4u;
            // 0x186ce8: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186ce4) {
            ctx->pc = 0x186CC8u;
            runtime->cooperativeGuestYield();
            goto label_186cc8;
        }
    }
    ctx->pc = 0x186CECu;
    // 0x186cec: 0x8e240048  lw          $a0, 0x48($s1)
    ctx->pc = 0x186cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_186cf0:
    // 0x186cf0: 0xae520000  sw          $s2, 0x0($s2)
    ctx->pc = 0x186cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 18));
    // 0x186cf4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x186CF4u;
    {
        const bool branch_taken_0x186cf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x186CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186CF4u;
            // 0x186cf8: 0xae520004  sw          $s2, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186cf4) {
            ctx->pc = 0x186D04u;
            goto label_186d04;
        }
    }
    ctx->pc = 0x186CFCu;
    // 0x186cfc: 0xc05fb62  jal         func_17ED88
    ctx->pc = 0x186CFCu;
    SET_GPR_U32(ctx, 31, 0x186D04u);
    ctx->pc = 0x186D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186CFCu;
            // 0x186d00: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17ED88u;
    if (runtime->hasFunction(0x17ED88u)) {
        auto targetFn = runtime->lookupFunction(0x17ED88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186D04u; }
        if (ctx->pc != 0x186D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017ED88_0x17ed88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186D04u; }
        if (ctx->pc != 0x186D04u) { return; }
    }
    ctx->pc = 0x186D04u;
label_186d04:
    // 0x186d04: 0x2682e848  addiu       $v0, $s4, -0x17B8
    ctx->pc = 0x186d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961224));
    // 0x186d08: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x186d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x186d0c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x186d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x186d10: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x186d10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x186d14: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x186d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x186d18: 0x40f809  jalr        $v0
    ctx->pc = 0x186D18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x186D20u);
        ctx->pc = 0x186D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186D18u;
            // 0x186d1c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x186D20u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x186AB8u: goto label_186ab8;
            case 0x186B38u: goto label_186b38;
            case 0x186B40u: goto label_186b40;
            case 0x186B58u: goto label_186b58;
            case 0x186C18u: goto label_186c18;
            case 0x186C3Cu: goto label_186c3c;
            case 0x186C88u: goto label_186c88;
            case 0x186CA8u: goto label_186ca8;
            case 0x186CC8u: goto label_186cc8;
            case 0x186CF0u: goto label_186cf0;
            case 0x186D04u: goto label_186d04;
            case 0x186D38u: goto label_186d38;
            case 0x186D48u: goto label_186d48;
            case 0x186D78u: goto label_186d78;
            case 0x186DA0u: goto label_186da0;
            case 0x186DB0u: goto label_186db0;
            case 0x186DF8u: goto label_186df8;
            case 0x186E20u: goto label_186e20;
            case 0x186E50u: goto label_186e50;
            case 0x186E78u: goto label_186e78;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x186D20u; }
            if (ctx->pc != 0x186D20u) { return; }
        }
        }
    }
    ctx->pc = 0x186D20u;
    // 0x186d20: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x186d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x186d24: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x186D24u;
    {
        const bool branch_taken_0x186d24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x186d24) {
            ctx->pc = 0x186D28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x186D24u;
            // 0x186d28: 0x8e240044  lw          $a0, 0x44($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x186D38u;
            goto label_186d38;
        }
    }
    ctx->pc = 0x186D2Cu;
    // 0x186d2c: 0xc08e460  jal         func_239180
    ctx->pc = 0x186D2Cu;
    SET_GPR_U32(ctx, 31, 0x186D34u);
    ctx->pc = 0x186D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186D2Cu;
            // 0x186d30: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239180u;
    if (runtime->hasFunction(0x239180u)) {
        auto targetFn = runtime->lookupFunction(0x239180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186D34u; }
        if (ctx->pc != 0x186D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239180_0x239180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186D34u; }
        if (ctx->pc != 0x186D34u) { return; }
    }
    ctx->pc = 0x186D34u;
    // 0x186d34: 0x8e240044  lw          $a0, 0x44($s1)
    ctx->pc = 0x186d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_186d38:
    // 0x186d38: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x186D38u;
    SET_GPR_U32(ctx, 31, 0x186D40u);
    ctx->pc = 0x186D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186D38u;
            // 0x186d3c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186D40u; }
        if (ctx->pc != 0x186D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186D40u; }
        if (ctx->pc != 0x186D40u) { return; }
    }
    ctx->pc = 0x186D40u;
    // 0x186d40: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x186d40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x186d44: 0x0  nop
    ctx->pc = 0x186d44u;
    // NOP
label_186d48:
    // 0x186d48: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x186d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x186d4c: 0x8c500084  lw          $s0, 0x84($v0)
    ctx->pc = 0x186d4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x186d50: 0x52000017  beql        $s0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x186D50u;
    {
        const bool branch_taken_0x186d50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x186d50) {
            ctx->pc = 0x186D54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x186D50u;
            // 0x186d54: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x186DB0u;
            goto label_186db0;
        }
    }
    ctx->pc = 0x186D58u;
    // 0x186d58: 0xafb00020  sw          $s0, 0x20($sp)
    ctx->pc = 0x186d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
    // 0x186d5c: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x186d5cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x186d60: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x186d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x186d64: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x186d64u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x186d68: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x186d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x186d6c: 0x5050000c  beql        $v0, $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x186D6Cu;
    {
        const bool branch_taken_0x186d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x186d6c) {
            ctx->pc = 0x186D70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x186D6Cu;
            // 0x186d70: 0xae100000  sw          $s0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x186DA0u;
            goto label_186da0;
        }
    }
    ctx->pc = 0x186D74u;
    // 0x186d74: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x186d74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_186d78:
    // 0x186d78: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x186d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x186d7c: 0x8c447910  lw          $a0, 0x7910($v0)
    ctx->pc = 0x186d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
    // 0x186d80: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x186d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x186d84: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x186D84u;
    SET_GPR_U32(ctx, 31, 0x186D8Cu);
    ctx->pc = 0x186D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186D84u;
            // 0x186d88: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186D8Cu; }
        if (ctx->pc != 0x186D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186D8Cu; }
        if (ctx->pc != 0x186D8Cu) { return; }
    }
    ctx->pc = 0x186D8Cu;
    // 0x186d8c: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x186d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x186d90: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x186d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x186d94: 0x1462fff8  bne         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x186D94u;
    {
        const bool branch_taken_0x186d94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x186D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186D94u;
            // 0x186d98: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186d94) {
            ctx->pc = 0x186D78u;
            runtime->cooperativeGuestYield();
            goto label_186d78;
        }
    }
    ctx->pc = 0x186D9Cu;
    // 0x186d9c: 0xae100000  sw          $s0, 0x0($s0)
    ctx->pc = 0x186d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
label_186da0:
    // 0x186da0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x186da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186da4: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x186DA4u;
    SET_GPR_U32(ctx, 31, 0x186DACu);
    ctx->pc = 0x186DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186DA4u;
            // 0x186da8: 0xae100004  sw          $s0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186DACu; }
        if (ctx->pc != 0x186DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186DACu; }
        if (ctx->pc != 0x186DACu) { return; }
    }
    ctx->pc = 0x186DACu;
    // 0x186dac: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x186dacu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_186db0:
    // 0x186db0: 0x2ea20040  sltiu       $v0, $s5, 0x40
    ctx->pc = 0x186db0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x186db4: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x186DB4u;
    {
        const bool branch_taken_0x186db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x186DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186DB4u;
            // 0x186db8: 0x151080  sll         $v0, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186db4) {
            ctx->pc = 0x186D48u;
            runtime->cooperativeGuestYield();
            goto label_186d48;
        }
    }
    ctx->pc = 0x186DBCu;
    // 0x186dbc: 0x26300188  addiu       $s0, $s1, 0x188
    ctx->pc = 0x186dbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 392));
    // 0x186dc0: 0xc04c6ba  jal         func_131AE8
    ctx->pc = 0x186DC0u;
    SET_GPR_U32(ctx, 31, 0x186DC8u);
    ctx->pc = 0x186DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186DC0u;
            // 0x186dc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131AE8u;
    if (runtime->hasFunction(0x131AE8u)) {
        auto targetFn = runtime->lookupFunction(0x131AE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186DC8u; }
        if (ctx->pc != 0x186DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131AE8_0x131ae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186DC8u; }
        if (ctx->pc != 0x186DC8u) { return; }
    }
    ctx->pc = 0x186DC8u;
    // 0x186dc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x186dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186dcc: 0xc08e62c  jal         func_2398B0
    ctx->pc = 0x186DCCu;
    SET_GPR_U32(ctx, 31, 0x186DD4u);
    ctx->pc = 0x186DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186DCCu;
            // 0x186dd0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2398B0u;
    if (runtime->hasFunction(0x2398B0u)) {
        auto targetFn = runtime->lookupFunction(0x2398B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186DD4u; }
        if (ctx->pc != 0x186DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002398B0_0x2398b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186DD4u; }
        if (ctx->pc != 0x186DD4u) { return; }
    }
    ctx->pc = 0x186DD4u;
    // 0x186dd4: 0x8e22007c  lw          $v0, 0x7C($s1)
    ctx->pc = 0x186dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x186dd8: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x186dd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x186ddc: 0xafb20030  sw          $s2, 0x30($sp)
    ctx->pc = 0x186ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 18));
    // 0x186de0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x186de0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x186de4: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x186de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x186de8: 0x5052000d  beql        $v0, $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x186DE8u;
    {
        const bool branch_taken_0x186de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x186de8) {
            ctx->pc = 0x186DECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x186DE8u;
            // 0x186dec: 0xae520004  sw          $s2, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x186E20u;
            goto label_186e20;
        }
    }
    ctx->pc = 0x186DF0u;
    // 0x186df0: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x186df0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x186df4: 0x0  nop
    ctx->pc = 0x186df4u;
    // NOP
label_186df8:
    // 0x186df8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x186df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x186dfc: 0x8c447910  lw          $a0, 0x7910($v0)
    ctx->pc = 0x186dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
    // 0x186e00: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x186e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x186e04: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x186E04u;
    SET_GPR_U32(ctx, 31, 0x186E0Cu);
    ctx->pc = 0x186E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186E04u;
            // 0x186e08: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186E0Cu; }
        if (ctx->pc != 0x186E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186E0Cu; }
        if (ctx->pc != 0x186E0Cu) { return; }
    }
    ctx->pc = 0x186E0Cu;
    // 0x186e0c: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x186e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x186e10: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x186e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x186e14: 0x1462fff8  bne         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x186E14u;
    {
        const bool branch_taken_0x186e14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x186E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186E14u;
            // 0x186e18: 0x8fa50034  lw          $a1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186e14) {
            ctx->pc = 0x186DF8u;
            runtime->cooperativeGuestYield();
            goto label_186df8;
        }
    }
    ctx->pc = 0x186E1Cu;
    // 0x186e1c: 0xae520004  sw          $s2, 0x4($s2)
    ctx->pc = 0x186e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 18));
label_186e20:
    // 0x186e20: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x186e20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x186e24: 0xae520000  sw          $s2, 0x0($s2)
    ctx->pc = 0x186e24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 18));
    // 0x186e28: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x186e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x186e2c: 0xafb30040  sw          $s3, 0x40($sp)
    ctx->pc = 0x186e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 19));
    // 0x186e30: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x186e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x186e34: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x186e34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x186e38: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x186e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x186e3c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x186e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x186e40: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x186e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x186e44: 0x1053000c  beq         $v0, $s3, . + 4 + (0xC << 2)
    ctx->pc = 0x186E44u;
    {
        const bool branch_taken_0x186e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x186E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186E44u;
            // 0x186e48: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186e44) {
            ctx->pc = 0x186E78u;
            goto label_186e78;
        }
    }
    ctx->pc = 0x186E4Cu;
    // 0x186e4c: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x186e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_186e50:
    // 0x186e50: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x186e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x186e54: 0x8c447910  lw          $a0, 0x7910($v0)
    ctx->pc = 0x186e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
    // 0x186e58: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x186e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x186e5c: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x186E5Cu;
    SET_GPR_U32(ctx, 31, 0x186E64u);
    ctx->pc = 0x186E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186E5Cu;
            // 0x186e60: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186E64u; }
        if (ctx->pc != 0x186E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186E64u; }
        if (ctx->pc != 0x186E64u) { return; }
    }
    ctx->pc = 0x186E64u;
    // 0x186e64: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x186e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x186e68: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x186e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x186e6c: 0x1462fff8  bne         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x186E6Cu;
    {
        const bool branch_taken_0x186e6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x186E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186E6Cu;
            // 0x186e70: 0x8fa50044  lw          $a1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186e6c) {
            ctx->pc = 0x186E50u;
            runtime->cooperativeGuestYield();
            goto label_186e50;
        }
    }
    ctx->pc = 0x186E74u;
    // 0x186e74: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x186e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
label_186e78:
    // 0x186e78: 0xae730004  sw          $s3, 0x4($s3)
    ctx->pc = 0x186e78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 19));
    // 0x186e7c: 0x24420978  addiu       $v0, $v0, 0x978
    ctx->pc = 0x186e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2424));
    // 0x186e80: 0xae730000  sw          $s3, 0x0($s3)
    ctx->pc = 0x186e80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 19));
    // 0x186e84: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x186e84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x186e88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x186e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186e8c: 0xc08e218  jal         func_238860
    ctx->pc = 0x186E8Cu;
    SET_GPR_U32(ctx, 31, 0x186E94u);
    ctx->pc = 0x186E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186E8Cu;
            // 0x186e90: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238860u;
    if (runtime->hasFunction(0x238860u)) {
        auto targetFn = runtime->lookupFunction(0x238860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186E94u; }
        if (ctx->pc != 0x186E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238860_0x238860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186E94u; }
        if (ctx->pc != 0x186E94u) { return; }
    }
    ctx->pc = 0x186E94u;
    // 0x186e94: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x186e94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x186e98: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x186e98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x186e9c: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x186e9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x186ea0: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x186ea0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x186ea4: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x186ea4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x186ea8: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x186ea8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x186eac: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x186eacu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x186eb0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x186eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x186eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x186EB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186EB4u;
            // 0x186eb8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x186AB8u: goto label_186ab8;
            case 0x186B38u: goto label_186b38;
            case 0x186B40u: goto label_186b40;
            case 0x186B58u: goto label_186b58;
            case 0x186C18u: goto label_186c18;
            case 0x186C3Cu: goto label_186c3c;
            case 0x186C88u: goto label_186c88;
            case 0x186CA8u: goto label_186ca8;
            case 0x186CC8u: goto label_186cc8;
            case 0x186CF0u: goto label_186cf0;
            case 0x186D04u: goto label_186d04;
            case 0x186D38u: goto label_186d38;
            case 0x186D48u: goto label_186d48;
            case 0x186D78u: goto label_186d78;
            case 0x186DA0u: goto label_186da0;
            case 0x186DB0u: goto label_186db0;
            case 0x186DF8u: goto label_186df8;
            case 0x186E20u: goto label_186e20;
            case 0x186E50u: goto label_186e50;
            case 0x186E78u: goto label_186e78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x186EBCu;
    // 0x186ebc: 0x0  nop
    ctx->pc = 0x186ebcu;
    // NOP
}
