#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014AD28
// Address: 0x14ad28 - 0x14ae30
void sub_0014AD28_0x14ad28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014AD28_0x14ad28");
#endif

    ctx->pc = 0x14ad28u;

    // 0x14ad28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14ad28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14ad2c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14ad2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14ad30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14ad30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14ad34: 0xc052ace  jal         func_14AB38
    ctx->pc = 0x14AD34u;
    SET_GPR_U32(ctx, 31, 0x14AD3Cu);
    ctx->pc = 0x14AD38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AD34u;
            // 0x14ad38: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14AB38u;
    if (runtime->hasFunction(0x14AB38u)) {
        auto targetFn = runtime->lookupFunction(0x14AB38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AD3Cu; }
        if (ctx->pc != 0x14AD3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014AB38_0x14ab38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AD3Cu; }
        if (ctx->pc != 0x14AD3Cu) { return; }
    }
    ctx->pc = 0x14AD3Cu;
    // 0x14ad3c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x14ad3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ad40: 0x55200005  bnel        $t1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14AD40u;
    {
        const bool branch_taken_0x14ad40 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ad40) {
            ctx->pc = 0x14AD44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14AD40u;
            // 0x14ad44: 0x952c0002  lhu         $t4, 0x2($t1) (Delay Slot)
        SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14AD58u;
            goto label_14ad58;
        }
    }
    ctx->pc = 0x14AD48u;
    // 0x14ad48: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x14AD48u;
    {
        const bool branch_taken_0x14ad48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AD4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AD48u;
            // 0x14ad4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ad48) {
            ctx->pc = 0x14AE20u;
            goto label_14ae20;
        }
    }
    ctx->pc = 0x14AD50u;
label_14ad50:
    // 0x14ad50: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x14AD50u;
    {
        const bool branch_taken_0x14ad50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AD54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AD50u;
            // 0x14ad54: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ad50) {
            ctx->pc = 0x14AE20u;
            goto label_14ae20;
        }
    }
    ctx->pc = 0x14AD58u;
label_14ad58:
    // 0x14ad58: 0x11800030  beqz        $t4, . + 4 + (0x30 << 2)
    ctx->pc = 0x14AD58u;
    {
        const bool branch_taken_0x14ad58 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AD5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AD58u;
            // 0x14ad5c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ad58) {
            ctx->pc = 0x14AE1Cu;
            goto label_14ae1c;
        }
    }
    ctx->pc = 0x14AD60u;
    // 0x14ad60: 0x8d230010  lw          $v1, 0x10($t1)
    ctx->pc = 0x14ad60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x14ad64: 0x0  nop
    ctx->pc = 0x14ad64u;
    // NOP
label_14ad68:
    // 0x14ad68: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x14ad68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x14ad6c: 0x625821  addu        $t3, $v1, $v0
    ctx->pc = 0x14ad6cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14ad70: 0x956a0002  lhu         $t2, 0x2($t3)
    ctx->pc = 0x14ad70u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x14ad74: 0x11400024  beqz        $t2, . + 4 + (0x24 << 2)
    ctx->pc = 0x14AD74u;
    {
        const bool branch_taken_0x14ad74 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AD78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AD74u;
            // 0x14ad78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ad74) {
            ctx->pc = 0x14AE08u;
            goto label_14ae08;
        }
    }
    ctx->pc = 0x14AD7Cu;
    // 0x14ad7c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x14ad7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_14ad80:
    // 0x14ad80: 0x8d630004  lw          $v1, 0x4($t3)
    ctx->pc = 0x14ad80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x14ad84: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x14ad84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x14ad88: 0x8e070cd0  lw          $a3, 0xCD0($s0)
    ctx->pc = 0x14ad88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3280)));
    // 0x14ad8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14ad8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14ad90: 0x8ce40010  lw          $a0, 0x10($a3)
    ctx->pc = 0x14ad90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x14ad94: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14ad94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14ad98: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x14ad98u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x14ad9c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14ad9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14ada0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x14ada0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x14ada4: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x14ada4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14ada8: 0x14450013  bne         $v0, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x14ADA8u;
    {
        const bool branch_taken_0x14ada8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x14ADACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14ADA8u;
            // 0x14adac: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ada8) {
            ctx->pc = 0x14ADF8u;
            goto label_14adf8;
        }
    }
    ctx->pc = 0x14ADB0u;
    // 0x14adb0: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x14adb0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x14adb4: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x14adb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x14adb8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x14adb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x14adbc: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x14adbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14adc0: 0x94870002  lhu         $a3, 0x2($a0)
    ctx->pc = 0x14adc0u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x14adc4: 0x10e0000b  beqz        $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x14ADC4u;
    {
        const bool branch_taken_0x14adc4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ADC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14ADC4u;
            // 0x14adc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14adc4) {
            ctx->pc = 0x14ADF4u;
            goto label_14adf4;
        }
    }
    ctx->pc = 0x14ADCCu;
    // 0x14adcc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x14adccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_14add0:
    // 0x14add0: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x14add0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x14add4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14add4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14add8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x14add8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14addc: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x14ADDCu;
    {
        const bool branch_taken_0x14addc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14ADE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14ADDCu;
            // 0x14ade0: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14addc) {
            ctx->pc = 0x14AD50u;
            runtime->cooperativeGuestYield();
            goto label_14ad50;
        }
    }
    ctx->pc = 0x14ADE4u;
    // 0x14ade4: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x14ade4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x14ade8: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x14ade8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x14adec: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x14ADECu;
    {
        const bool branch_taken_0x14adec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14adec) {
            ctx->pc = 0x14ADF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14ADECu;
            // 0x14adf0: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14ADD0u;
            runtime->cooperativeGuestYield();
            goto label_14add0;
        }
    }
    ctx->pc = 0x14ADF4u;
label_14adf4:
    // 0x14adf4: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x14adf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_14adf8:
    // 0x14adf8: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x14adf8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x14adfc: 0xca102b  sltu        $v0, $a2, $t2
    ctx->pc = 0x14adfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x14ae00: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x14AE00u;
    {
        const bool branch_taken_0x14ae00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14AE04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AE00u;
            // 0x14ae04: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ae00) {
            ctx->pc = 0x14AD80u;
            runtime->cooperativeGuestYield();
            goto label_14ad80;
        }
    }
    ctx->pc = 0x14AE08u;
label_14ae08:
    // 0x14ae08: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x14ae08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x14ae0c: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x14ae0cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x14ae10: 0x10c102b  sltu        $v0, $t0, $t4
    ctx->pc = 0x14ae10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x14ae14: 0x5440ffd4  bnel        $v0, $zero, . + 4 + (-0x2C << 2)
    ctx->pc = 0x14AE14u;
    {
        const bool branch_taken_0x14ae14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ae14) {
            ctx->pc = 0x14AE18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14AE14u;
            // 0x14ae18: 0x8d230010  lw          $v1, 0x10($t1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14AD68u;
            runtime->cooperativeGuestYield();
            goto label_14ad68;
        }
    }
    ctx->pc = 0x14AE1Cu;
label_14ae1c:
    // 0x14ae1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14ae1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14ae20:
    // 0x14ae20: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14ae20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ae24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14ae24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ae28: 0x3e00008  jr          $ra
    ctx->pc = 0x14AE28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14AE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AE28u;
            // 0x14ae2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14AD50u: goto label_14ad50;
            case 0x14AD58u: goto label_14ad58;
            case 0x14AD68u: goto label_14ad68;
            case 0x14AD80u: goto label_14ad80;
            case 0x14ADD0u: goto label_14add0;
            case 0x14ADF4u: goto label_14adf4;
            case 0x14ADF8u: goto label_14adf8;
            case 0x14AE08u: goto label_14ae08;
            case 0x14AE1Cu: goto label_14ae1c;
            case 0x14AE20u: goto label_14ae20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14AE30u;
}
