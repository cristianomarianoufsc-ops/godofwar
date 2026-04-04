#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00187A50
// Address: 0x187a50 - 0x187b58
void sub_00187A50_0x187a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187A50_0x187a50");
#endif

    ctx->pc = 0x187a50u;

    // 0x187a50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x187a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x187a54: 0x3c03dead  lui         $v1, 0xDEAD
    ctx->pc = 0x187a54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57005 << 16));
    // 0x187a58: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x187a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x187a5c: 0x3463beef  ori         $v1, $v1, 0xBEEF
    ctx->pc = 0x187a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48879);
    // 0x187a60: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x187a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x187a64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x187a64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187a68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x187a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x187a6c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x187a6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187a70: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x187a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x187a74: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x187a74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x187a78: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x187a78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x187a7c: 0xa6040004  sh          $a0, 0x4($s0)
    ctx->pc = 0x187a7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x187a80: 0x51402  srl         $v0, $a1, 16
    ctx->pc = 0x187a80u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x187a84: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x187a84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x187a88: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x187a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x187a8c: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x187a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x187a90: 0xa6050000  sh          $a1, 0x0($s0)
    ctx->pc = 0x187a90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x187a94: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x187a94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x187a98: 0xc08e43e  jal         func_2390F8
    ctx->pc = 0x187A98u;
    SET_GPR_U32(ctx, 31, 0x187AA0u);
    ctx->pc = 0x187A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187A98u;
            // 0x187a9c: 0xa6020002  sh          $v0, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2390F8u;
    if (runtime->hasFunction(0x2390F8u)) {
        auto targetFn = runtime->lookupFunction(0x2390F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187AA0u; }
        if (ctx->pc != 0x187AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2390f8_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187AA0u; }
        if (ctx->pc != 0x187AA0u) { return; }
    }
    ctx->pc = 0x187AA0u;
    // 0x187aa0: 0x26220024  addiu       $v0, $s1, 0x24
    ctx->pc = 0x187aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x187aa4: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x187aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x187aa8: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x187aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x187aac: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x187aacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x187ab0: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x187ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x187ab4: 0x24a52ed0  addiu       $a1, $a1, 0x2ED0
    ctx->pc = 0x187ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11984));
    // 0x187ab8: 0x8c4a0014  lw          $t2, 0x14($v0)
    ctx->pc = 0x187ab8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x187abc: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x187abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x187ac0: 0x8c4b001c  lw          $t3, 0x1C($v0)
    ctx->pc = 0x187ac0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x187ac4: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x187ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x187ac8: 0x8c490020  lw          $t1, 0x20($v0)
    ctx->pc = 0x187ac8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x187acc: 0x4a5021  addu        $t2, $v0, $t2
    ctx->pc = 0x187accu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x187ad0: 0x8c480024  lw          $t0, 0x24($v0)
    ctx->pc = 0x187ad0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x187ad4: 0x4b5821  addu        $t3, $v0, $t3
    ctx->pc = 0x187ad4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x187ad8: 0x8c470028  lw          $a3, 0x28($v0)
    ctx->pc = 0x187ad8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x187adc: 0x494821  addu        $t1, $v0, $t1
    ctx->pc = 0x187adcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x187ae0: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x187ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x187ae4: 0x484021  addu        $t0, $v0, $t0
    ctx->pc = 0x187ae4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x187ae8: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x187ae8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x187aec: 0xae060024  sw          $a2, 0x24($s0)
    ctx->pc = 0x187aecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 6));
    // 0x187af0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x187af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x187af4: 0xae040028  sw          $a0, 0x28($s0)
    ctx->pc = 0x187af4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 4));
    // 0x187af8: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x187af8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x187afc: 0x26260004  addiu       $a2, $s1, 0x4
    ctx->pc = 0x187afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x187b00: 0xae0a002c  sw          $t2, 0x2C($s0)
    ctx->pc = 0x187b00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 10));
    // 0x187b04: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x187b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187b08: 0xae0b0030  sw          $t3, 0x30($s0)
    ctx->pc = 0x187b08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 11));
    // 0x187b0c: 0xae090034  sw          $t1, 0x34($s0)
    ctx->pc = 0x187b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 9));
    // 0x187b10: 0xae080038  sw          $t0, 0x38($s0)
    ctx->pc = 0x187b10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 8));
    // 0x187b14: 0xae07003c  sw          $a3, 0x3C($s0)
    ctx->pc = 0x187b14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 7));
    // 0x187b18: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x187b18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x187b1c: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x187B1Cu;
    SET_GPR_U32(ctx, 31, 0x187B24u);
    ctx->pc = 0x187B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187B1Cu;
            // 0x187b20: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187B24u; }
        if (ctx->pc != 0x187B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187B24u; }
        if (ctx->pc != 0x187B24u) { return; }
    }
    ctx->pc = 0x187B24u;
    // 0x187b24: 0xc05d656  jal         func_175958
    ctx->pc = 0x187B24u;
    SET_GPR_U32(ctx, 31, 0x187B2Cu);
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187B2Cu; }
        if (ctx->pc != 0x187B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187B2Cu; }
        if (ctx->pc != 0x187B2Cu) { return; }
    }
    ctx->pc = 0x187B2Cu;
    // 0x187b2c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x187b2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187b30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x187b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187b34: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x187B34u;
    SET_GPR_U32(ctx, 31, 0x187B3Cu);
    ctx->pc = 0x187B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187B34u;
            // 0x187b38: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187B3Cu; }
        if (ctx->pc != 0x187B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187B3Cu; }
        if (ctx->pc != 0x187B3Cu) { return; }
    }
    ctx->pc = 0x187B3Cu;
    // 0x187b3c: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x187b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x187b40: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x187b40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187b44: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x187b44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x187b48: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x187b48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x187b4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x187b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x187b50: 0x3e00008  jr          $ra
    ctx->pc = 0x187B50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187B50u;
            // 0x187b54: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x187B58u;
}
