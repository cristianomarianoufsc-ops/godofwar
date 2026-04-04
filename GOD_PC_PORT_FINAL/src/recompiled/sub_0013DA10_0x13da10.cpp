#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013DA10
// Address: 0x13da10 - 0x13db18
void sub_0013DA10_0x13da10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013DA10_0x13da10");
#endif

    ctx->pc = 0x13da10u;

    // 0x13da10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13da10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13da14: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x13da14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x13da18: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x13da18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x13da1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13da1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13da20: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x13da20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x13da24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13da24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13da28: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x13da28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x13da2c: 0x54400032  bnel        $v0, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x13DA2Cu;
    {
        const bool branch_taken_0x13da2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13da2c) {
            ctx->pc = 0x13DA30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13DA2Cu;
            // 0x13da30: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13DAF8u;
            goto label_13daf8;
        }
    }
    ctx->pc = 0x13DA34u;
    // 0x13da34: 0x9611000e  lhu         $s1, 0xE($s0)
    ctx->pc = 0x13da34u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x13da38: 0x1220002b  beqz        $s1, . + 4 + (0x2B << 2)
    ctx->pc = 0x13DA38u;
    {
        const bool branch_taken_0x13da38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DA3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DA38u;
            // 0x13da3c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13da38) {
            ctx->pc = 0x13DAE8u;
            goto label_13dae8;
        }
    }
    ctx->pc = 0x13DA40u;
    // 0x13da40: 0x8e120008  lw          $s2, 0x8($s0)
    ctx->pc = 0x13da40u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x13da44: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x13da44u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x13da48: 0x2512818  mult        $a1, $s2, $s1
    ctx->pc = 0x13da48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x13da4c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x13da4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13da50: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x13DA50u;
    SET_GPR_U32(ctx, 31, 0x13DA58u);
    ctx->pc = 0x13DA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13DA50u;
            // 0x13da54: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DA58u; }
        if (ctx->pc != 0x13DA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DA58u; }
        if (ctx->pc != 0x13DA58u) { return; }
    }
    ctx->pc = 0x13DA58u;
    // 0x13da58: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13da58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13da5c: 0x10a00028  beqz        $a1, . + 4 + (0x28 << 2)
    ctx->pc = 0x13DA5Cu;
    {
        const bool branch_taken_0x13da5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DA5Cu;
            // 0x13da60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13da5c) {
            ctx->pc = 0x13DB00u;
            goto label_13db00;
        }
    }
    ctx->pc = 0x13DA64u;
    // 0x13da64: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x13da64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x13da68: 0xae050014  sw          $a1, 0x14($s0)
    ctx->pc = 0x13da68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 5));
    // 0x13da6c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x13da6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x13da70: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x13da70u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x13da74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13da74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13da78: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x13da78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x13da7c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x13DA7Cu;
    {
        const bool branch_taken_0x13da7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13da7c) {
            ctx->pc = 0x13DA80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13DA7Cu;
            // 0x13da80: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x13DA84u;
            goto label_13da84;
        }
    }
    ctx->pc = 0x13DA84u;
label_13da84:
    // 0x13da84: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x13da84u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x13da88: 0x2628ffff  addiu       $t0, $s1, -0x1
    ctx->pc = 0x13da88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x13da8c: 0x1810  mfhi        $v1
    ctx->pc = 0x13da8cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x13da90: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x13da90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13da94: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x13da94u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x13da98: 0x1010  mfhi        $v0
    ctx->pc = 0x13da98u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x13da9c: 0x3047fffc  andi        $a3, $v0, 0xFFFC
    ctx->pc = 0x13da9cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65532);
    // 0x13daa0: 0x24e20004  addiu       $v0, $a3, 0x4
    ctx->pc = 0x13daa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x13daa4: 0x1100000a  beqz        $t0, . + 4 + (0xA << 2)
    ctx->pc = 0x13DAA4u;
    {
        const bool branch_taken_0x13daa4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DAA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DAA4u;
            // 0x13daa8: 0xa22021  addu        $a0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13daa4) {
            ctx->pc = 0x13DAD0u;
            goto label_13dad0;
        }
    }
    ctx->pc = 0x13DAACu;
    // 0x13daac: 0x0  nop
    ctx->pc = 0x13daacu;
    // NOP
label_13dab0:
    // 0x13dab0: 0x121082  srl         $v0, $s2, 2
    ctx->pc = 0x13dab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 2));
    // 0x13dab4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x13dab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x13dab8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13dab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13dabc: 0xc8182b  sltu        $v1, $a2, $t0
    ctx->pc = 0x13dabcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x13dac0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x13dac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x13dac4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x13dac4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x13dac8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x13DAC8u;
    {
        const bool branch_taken_0x13dac8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13DACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DAC8u;
            // 0x13dacc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dac8) {
            ctx->pc = 0x13DAB0u;
            runtime->cooperativeGuestYield();
            goto label_13dab0;
        }
    }
    ctx->pc = 0x13DAD0u;
label_13dad0:
    // 0x13dad0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x13dad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x13dad4: 0x24e20004  addiu       $v0, $a3, 0x4
    ctx->pc = 0x13dad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x13dad8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x13dad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x13dadc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x13dadcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x13dae0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13DAE0u;
    {
        const bool branch_taken_0x13dae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DAE0u;
            // 0x13dae4: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dae0) {
            ctx->pc = 0x13DAF0u;
            goto label_13daf0;
        }
    }
    ctx->pc = 0x13DAE8u;
label_13dae8:
    // 0x13dae8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13DAE8u;
    {
        const bool branch_taken_0x13dae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DAECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DAE8u;
            // 0x13daec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dae8) {
            ctx->pc = 0x13DB00u;
            goto label_13db00;
        }
    }
    ctx->pc = 0x13DAF0u;
label_13daf0:
    // 0x13daf0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x13daf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x13daf4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13daf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13daf8:
    // 0x13daf8: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x13daf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x13dafc: 0x0  nop
    ctx->pc = 0x13dafcu;
    // NOP
label_13db00:
    // 0x13db00: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x13db00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13db04: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x13db04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13db08: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x13db08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13db0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13db0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13db10: 0x3e00008  jr          $ra
    ctx->pc = 0x13DB10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13DB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DB10u;
            // 0x13db14: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13DA84u: goto label_13da84;
            case 0x13DAB0u: goto label_13dab0;
            case 0x13DAD0u: goto label_13dad0;
            case 0x13DAE8u: goto label_13dae8;
            case 0x13DAF0u: goto label_13daf0;
            case 0x13DAF8u: goto label_13daf8;
            case 0x13DB00u: goto label_13db00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13DB18u;
}
