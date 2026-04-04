#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027EBF8
// Address: 0x27ebf8 - 0x27ecf8
void sub_0027EBF8_0x27ebf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027EBF8_0x27ebf8");
#endif

    ctx->pc = 0x27ebf8u;

    // 0x27ebf8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27ebf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27ebfc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x27ebfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x27ec00: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x27ec00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ec04: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x27ec04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x27ec08: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x27ec08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x27ec0c: 0xc0a0b74  jal         func_282DD0
    ctx->pc = 0x27EC0Cu;
    SET_GPR_U32(ctx, 31, 0x27EC14u);
    ctx->pc = 0x27EC10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EC0Cu;
            // 0x27ec10: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282DD0u;
    if (runtime->hasFunction(0x282DD0u)) {
        auto targetFn = runtime->lookupFunction(0x282DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EC14u; }
        if (ctx->pc != 0x27EC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_282dd0_0x282e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EC14u; }
        if (ctx->pc != 0x27EC14u) { return; }
    }
    ctx->pc = 0x27EC14u;
    // 0x27ec14: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27EC14u;
    {
        const bool branch_taken_0x27ec14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EC18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EC14u;
            // 0x27ec18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ec14) {
            ctx->pc = 0x27EC28u;
            goto label_27ec28;
        }
    }
    ctx->pc = 0x27EC1Cu;
    // 0x27ec1c: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27ec1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27ec20: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x27EC20u;
    {
        const bool branch_taken_0x27ec20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EC20u;
            // 0x27ec24: 0x34420013  ori         $v0, $v0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ec20) {
            ctx->pc = 0x27ECE0u;
            goto label_27ece0;
        }
    }
    ctx->pc = 0x27EC28u;
label_27ec28:
    // 0x27ec28: 0xc0a0552  jal         func_281548
    ctx->pc = 0x27EC28u;
    SET_GPR_U32(ctx, 31, 0x27EC30u);
    ctx->pc = 0x27EC2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EC28u;
            // 0x27ec2c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281548u;
    if (runtime->hasFunction(0x281548u)) {
        auto targetFn = runtime->lookupFunction(0x281548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EC30u; }
        if (ctx->pc != 0x27EC30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281548_0x281548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EC30u; }
        if (ctx->pc != 0x27EC30u) { return; }
    }
    ctx->pc = 0x27EC30u;
    // 0x27ec30: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27EC30u;
    {
        const bool branch_taken_0x27ec30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EC34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EC30u;
            // 0x27ec34: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ec30) {
            ctx->pc = 0x27EC44u;
            goto label_27ec44;
        }
    }
    ctx->pc = 0x27EC38u;
label_27ec38:
    // 0x27ec38: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27ec38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27ec3c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x27EC3Cu;
    {
        const bool branch_taken_0x27ec3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EC40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EC3Cu;
            // 0x27ec40: 0x3442006f  ori         $v0, $v0, 0x6F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)111);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ec3c) {
            ctx->pc = 0x27ECE0u;
            goto label_27ece0;
        }
    }
    ctx->pc = 0x27EC44u;
label_27ec44:
    // 0x27ec44: 0x24030898  addiu       $v1, $zero, 0x898
    ctx->pc = 0x27ec44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
    // 0x27ec48: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x27ec48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27ec4c: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x27ec4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x27ec50: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x27ec50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x27ec54: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x27ec54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27ec58: 0x87001a  div         $zero, $a0, $a3
    ctx->pc = 0x27ec58u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x27ec5c: 0x2442c9c8  addiu       $v0, $v0, -0x3638
    ctx->pc = 0x27ec5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953416));
    // 0x27ec60: 0x24490808  addiu       $t1, $v0, 0x808
    ctx->pc = 0x27ec60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 2056));
    // 0x27ec64: 0x3c0a002c  lui         $t2, 0x2C
    ctx->pc = 0x27ec64u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)44 << 16));
    // 0x27ec68: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x27ec68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27ec6c: 0xac800894  sw          $zero, 0x894($a0)
    ctx->pc = 0x27ec6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2196), GPR_U32(ctx, 0));
    // 0x27ec70: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x27ec70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ec74: 0xaca80800  sw          $t0, 0x800($a1)
    ctx->pc = 0x27ec74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2048), GPR_U32(ctx, 8));
    // 0x27ec78: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x27ec78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ec7c: 0xacc80804  sw          $t0, 0x804($a2)
    ctx->pc = 0x27ec7cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2052), GPR_U32(ctx, 8));
    // 0x27ec80: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x27ec80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ec84: 0xac800890  sw          $zero, 0x890($a0)
    ctx->pc = 0x27ec84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2192), GPR_U32(ctx, 0));
    // 0x27ec88: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x27ec88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x27ec8c: 0xac40088c  sw          $zero, 0x88C($v0)
    ctx->pc = 0x27ec8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2188), GPR_U32(ctx, 0));
    // 0x27ec90: 0x25465238  addiu       $a2, $t2, 0x5238
    ctx->pc = 0x27ec90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 21048));
    // 0x27ec94: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x27ec94u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x27ec98: 0x80c40001  lb          $a0, 0x1($a2)
    ctx->pc = 0x27ec98u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x27ec9c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x27ec9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x27eca0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x27eca0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x27eca4: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x27ECA4u;
    {
        const bool branch_taken_0x27eca4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x27eca4) {
            ctx->pc = 0x27ECA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27ECA4u;
            // 0x27eca8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x27ECACu;
            goto label_27ecac;
        }
    }
    ctx->pc = 0x27ECACu;
label_27ecac:
    // 0x27ecac: 0x8812  mflo        $s1
    ctx->pc = 0x27ecacu;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x27ecb0: 0x1a20000a  blez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x27ECB0u;
    {
        const bool branch_taken_0x27ecb0 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x27ECB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27ECB0u;
            // 0x27ecb4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ecb0) {
            ctx->pc = 0x27ECDCu;
            goto label_27ecdc;
        }
    }
    ctx->pc = 0x27ECB8u;
    // 0x27ecb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27ecb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ecbc: 0x0  nop
    ctx->pc = 0x27ecbcu;
    // NOP
label_27ecc0:
    // 0x27ecc0: 0xc0a0b28  jal         func_282CA0
    ctx->pc = 0x27ECC0u;
    SET_GPR_U32(ctx, 31, 0x27ECC8u);
    ctx->pc = 0x27ECC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27ECC0u;
            // 0x27ecc4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282CA0u;
    if (runtime->hasFunction(0x282CA0u)) {
        auto targetFn = runtime->lookupFunction(0x282CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ECC8u; }
        if (ctx->pc != 0x27ECC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_282ca0_0x282dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ECC8u; }
        if (ctx->pc != 0x27ECC8u) { return; }
    }
    ctx->pc = 0x27ECC8u;
    // 0x27ecc8: 0x1040ffdb  beqz        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x27ECC8u;
    {
        const bool branch_taken_0x27ecc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ECCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27ECC8u;
            // 0x27eccc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ecc8) {
            ctx->pc = 0x27EC38u;
            runtime->cooperativeGuestYield();
            goto label_27ec38;
        }
    }
    ctx->pc = 0x27ECD0u;
    // 0x27ecd0: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x27ecd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x27ecd4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27ECD4u;
    {
        const bool branch_taken_0x27ecd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27ECD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27ECD4u;
            // 0x27ecd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ecd4) {
            ctx->pc = 0x27ECC0u;
            runtime->cooperativeGuestYield();
            goto label_27ecc0;
        }
    }
    ctx->pc = 0x27ECDCu;
label_27ecdc:
    // 0x27ecdc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27ecdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27ece0:
    // 0x27ece0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x27ece0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27ece4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x27ece4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27ece8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x27ece8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27ecec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x27ececu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ecf0: 0x3e00008  jr          $ra
    ctx->pc = 0x27ECF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27ECF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27ECF0u;
            // 0x27ecf4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27EC28u: goto label_27ec28;
            case 0x27EC38u: goto label_27ec38;
            case 0x27EC44u: goto label_27ec44;
            case 0x27ECACu: goto label_27ecac;
            case 0x27ECC0u: goto label_27ecc0;
            case 0x27ECDCu: goto label_27ecdc;
            case 0x27ECE0u: goto label_27ece0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27ECF8u;
}
