#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00130F48
// Address: 0x130f48 - 0x131038
void sub_00130F48_0x130f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130F48_0x130f48");
#endif

    ctx->pc = 0x130f48u;

    // 0x130f48: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x130f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x130f4c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x130f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x130f50: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x130f50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130f54: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x130f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x130f58: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x130f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x130f5c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x130f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x130f60: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x130f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x130f64: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x130f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x130f68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x130f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x130f6c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x130f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x130f70: 0x8c55ec64  lw          $s5, -0x139C($v0)
    ctx->pc = 0x130f70u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962276)));
    // 0x130f74: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x130f74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130f78: 0x269100c0  addiu       $s1, $s4, 0xC0
    ctx->pc = 0x130f78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
    // 0x130f7c: 0x0  nop
    ctx->pc = 0x130f7cu;
    // NOP
label_130f80:
    // 0x130f80: 0x56750007  bnel        $s3, $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x130F80u;
    {
        const bool branch_taken_0x130f80 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 21));
        if (branch_taken_0x130f80) {
            ctx->pc = 0x130F84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x130F80u;
            // 0x130f84: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x130FA0u;
            goto label_130fa0;
        }
    }
    ctx->pc = 0x130F88u;
    // 0x130f88: 0x8e8200f8  lw          $v0, 0xF8($s4)
    ctx->pc = 0x130f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 248)));
    // 0x130f8c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x130f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x130f90: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x130f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x130f94: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x130F94u;
    {
        const bool branch_taken_0x130f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x130f94) {
            ctx->pc = 0x130F98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x130F94u;
            // 0x130f98: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x131004u;
            goto label_131004;
        }
    }
    ctx->pc = 0x130F9Cu;
    // 0x130f9c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x130f9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_130fa0:
    // 0x130fa0: 0x52000018  beql        $s0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x130FA0u;
    {
        const bool branch_taken_0x130fa0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x130fa0) {
            ctx->pc = 0x130FA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x130FA0u;
            // 0x130fa4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x131004u;
            goto label_131004;
        }
    }
    ctx->pc = 0x130FA8u;
    // 0x130fa8: 0x2602ffec  addiu       $v0, $s0, -0x14
    ctx->pc = 0x130fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
    // 0x130fac: 0x0  nop
    ctx->pc = 0x130facu;
    // NOP
label_130fb0:
    // 0x130fb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x130fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130fb4: 0x50280b  movn        $a1, $v0, $s0
    ctx->pc = 0x130fb4u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x130fb8: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x130fb8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x130fbc: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x130fbcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x130fc0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x130fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x130fc4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x130FC4u;
    {
        const bool branch_taken_0x130fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x130FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130FC4u;
            // 0x130fc8: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130fc4) {
            ctx->pc = 0x130FF8u;
            goto label_130ff8;
        }
    }
    ctx->pc = 0x130FCCu;
    // 0x130fcc: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x130fccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x130fd0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x130fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x130fd4: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x130fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x130fd8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x130fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x130fdc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x130fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x130fe0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x130fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x130fe4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x130fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x130fe8: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x130fe8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x130fec: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x130fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x130ff0: 0x40f809  jalr        $v0
    ctx->pc = 0x130FF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x130FF8u);
        ctx->pc = 0x130FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130FF0u;
            // 0x130ff4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x130FF8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130F80u: goto label_130f80;
            case 0x130FA0u: goto label_130fa0;
            case 0x130FB0u: goto label_130fb0;
            case 0x130FF8u: goto label_130ff8;
            case 0x131004u: goto label_131004;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x130FF8u; }
            if (ctx->pc != 0x130FF8u) { return; }
        }
        }
    }
    ctx->pc = 0x130FF8u;
label_130ff8:
    // 0x130ff8: 0x1640ffed  bnez        $s2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x130FF8u;
    {
        const bool branch_taken_0x130ff8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x130FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130FF8u;
            // 0x130ffc: 0x2602ffec  addiu       $v0, $s0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130ff8) {
            ctx->pc = 0x130FB0u;
            runtime->cooperativeGuestYield();
            goto label_130fb0;
        }
    }
    ctx->pc = 0x131000u;
    // 0x131000: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x131000u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_131004:
    // 0x131004: 0x2e62000d  sltiu       $v0, $s3, 0xD
    ctx->pc = 0x131004u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x131008: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x131008u;
    {
        const bool branch_taken_0x131008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13100Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131008u;
            // 0x13100c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131008) {
            ctx->pc = 0x130F80u;
            runtime->cooperativeGuestYield();
            goto label_130f80;
        }
    }
    ctx->pc = 0x131010u;
    // 0x131010: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x131010u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x131014: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x131014u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x131018: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x131018u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13101c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13101cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x131020: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x131020u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x131024: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x131024u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131028: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x131028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13102c: 0x3e00008  jr          $ra
    ctx->pc = 0x13102Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13102Cu;
            // 0x131030: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130F80u: goto label_130f80;
            case 0x130FA0u: goto label_130fa0;
            case 0x130FB0u: goto label_130fb0;
            case 0x130FF8u: goto label_130ff8;
            case 0x131004u: goto label_131004;
            default: break;
        }
        return;
    }
    ctx->pc = 0x131034u;
    // 0x131034: 0x0  nop
    ctx->pc = 0x131034u;
    // NOP
}
