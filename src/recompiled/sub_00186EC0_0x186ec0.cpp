#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00186EC0
// Address: 0x186ec0 - 0x187150
void sub_00186EC0_0x186ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186EC0_0x186ec0");
#endif

    ctx->pc = 0x186ec0u;

    // 0x186ec0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x186ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x186ec4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x186ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x186ec8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x186ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x186ecc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x186eccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186ed0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x186ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x186ed4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x186ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x186ed8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x186ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x186edc: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x186edcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x186ee0: 0x3c130033  lui         $s3, 0x33
    ctx->pc = 0x186ee0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)51 << 16));
    // 0x186ee4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x186ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x186ee8: 0x2663e848  addiu       $v1, $s3, -0x17B8
    ctx->pc = 0x186ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961224));
    // 0x186eec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x186eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x186ef0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x186ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186ef4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x186ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x186ef8: 0x26320038  addiu       $s2, $s1, 0x38
    ctx->pc = 0x186ef8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x186efc: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x186efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x186f00: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x186f00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x186f04: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x186f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x186f08: 0x40f809  jalr        $v0
    ctx->pc = 0x186F08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x186F10u);
        ctx->pc = 0x186F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186F08u;
            // 0x186f0c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x186F10u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x186F38u: goto label_186f38;
            case 0x186F5Cu: goto label_186f5c;
            case 0x186F6Cu: goto label_186f6c;
            case 0x186F80u: goto label_186f80;
            case 0x186FB4u: goto label_186fb4;
            case 0x186FC8u: goto label_186fc8;
            case 0x186FE0u: goto label_186fe0;
            case 0x186FF4u: goto label_186ff4;
            case 0x186FF8u: goto label_186ff8;
            case 0x187060u: goto label_187060;
            case 0x187070u: goto label_187070;
            case 0x18708Cu: goto label_18708c;
            case 0x1870A0u: goto label_1870a0;
            case 0x1870B8u: goto label_1870b8;
            case 0x1870BCu: goto label_1870bc;
            case 0x1870C4u: goto label_1870c4;
            case 0x187110u: goto label_187110;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x186F10u; }
            if (ctx->pc != 0x186F10u) { return; }
        }
        }
    }
    ctx->pc = 0x186F10u;
    // 0x186f10: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x186f10u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x186f14: 0x26240188  addiu       $a0, $s1, 0x188
    ctx->pc = 0x186f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 392));
    // 0x186f18: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x186f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x186f1c: 0xc04c6ba  jal         func_131AE8
    ctx->pc = 0x186F1Cu;
    SET_GPR_U32(ctx, 31, 0x186F24u);
    ctx->pc = 0x186F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186F1Cu;
            // 0x186f20: 0xa6220004  sh          $v0, 0x4($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131AE8u;
    if (runtime->hasFunction(0x131AE8u)) {
        auto targetFn = runtime->lookupFunction(0x131AE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186F24u; }
        if (ctx->pc != 0x186F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131AE8_0x131ae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186F24u; }
        if (ctx->pc != 0x186F24u) { return; }
    }
    ctx->pc = 0x186F24u;
    // 0x186f24: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x186f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x186f28: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x186f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    // 0x186f2c: 0x1052000f  beq         $v0, $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x186F2Cu;
    {
        const bool branch_taken_0x186f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x186F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186F2Cu;
            // 0x186f30: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186f2c) {
            ctx->pc = 0x186F6Cu;
            goto label_186f6c;
        }
    }
    ctx->pc = 0x186F34u;
    // 0x186f34: 0x0  nop
    ctx->pc = 0x186f34u;
    // NOP
label_186f38:
    // 0x186f38: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x186f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x186f3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x186f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x186f40: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x186f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x186f44: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x186f44u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x186f48: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x186F48u;
    {
        const bool branch_taken_0x186f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x186F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186F48u;
            // 0x186f4c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186f48) {
            ctx->pc = 0x186F5Cu;
            goto label_186f5c;
        }
    }
    ctx->pc = 0x186F50u;
    // 0x186f50: 0xc04d4d6  jal         func_135358
    ctx->pc = 0x186F50u;
    SET_GPR_U32(ctx, 31, 0x186F58u);
    ctx->pc = 0x135358u;
    if (runtime->hasFunction(0x135358u)) {
        auto targetFn = runtime->lookupFunction(0x135358u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186F58u; }
        if (ctx->pc != 0x186F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135358_0x135358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186F58u; }
        if (ctx->pc != 0x186F58u) { return; }
    }
    ctx->pc = 0x186F58u;
    // 0x186f58: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x186f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_186f5c:
    // 0x186f5c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x186f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186f60: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x186f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x186f64: 0x1443fff4  bne         $v0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x186F64u;
    {
        const bool branch_taken_0x186f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x186F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186F64u;
            // 0x186f68: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186f64) {
            ctx->pc = 0x186F38u;
            runtime->cooperativeGuestYield();
            goto label_186f38;
        }
    }
    ctx->pc = 0x186F6Cu;
label_186f6c:
    // 0x186f6c: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x186f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x186f70: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x186f70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
    // 0x186f74: 0x10520053  beq         $v0, $s2, . + 4 + (0x53 << 2)
    ctx->pc = 0x186F74u;
    {
        const bool branch_taken_0x186f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x186F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186F74u;
            // 0x186f78: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186f74) {
            ctx->pc = 0x1870C4u;
            goto label_1870c4;
        }
    }
    ctx->pc = 0x186F7Cu;
    // 0x186f7c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x186f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_186f80:
    // 0x186f80: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x186f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x186f84: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x186f84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x186f88: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x186f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x186f8c: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x186f8cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x186f90: 0x10830033  beq         $a0, $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x186F90u;
    {
        const bool branch_taken_0x186f90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x186F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186F90u;
            // 0x186f94: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186f90) {
            ctx->pc = 0x187060u;
            goto label_187060;
        }
    }
    ctx->pc = 0x186F98u;
    // 0x186f98: 0x28820007  slti        $v0, $a0, 0x7
    ctx->pc = 0x186f98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x186f9c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x186F9Cu;
    {
        const bool branch_taken_0x186f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x186FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186F9Cu;
            // 0x186fa0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186f9c) {
            ctx->pc = 0x186FB4u;
            goto label_186fb4;
        }
    }
    ctx->pc = 0x186FA4u;
    // 0x186fa4: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x186FA4u;
    {
        const bool branch_taken_0x186fa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x186FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186FA4u;
            // 0x186fa8: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186fa4) {
            ctx->pc = 0x186FC8u;
            goto label_186fc8;
        }
    }
    ctx->pc = 0x186FACu;
    // 0x186fac: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x186FACu;
    {
        const bool branch_taken_0x186fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186FACu;
            // 0x186fb0: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186fac) {
            ctx->pc = 0x1870BCu;
            goto label_1870bc;
        }
    }
    ctx->pc = 0x186FB4u;
label_186fb4:
    // 0x186fb4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x186fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x186fb8: 0x10820034  beq         $a0, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x186FB8u;
    {
        const bool branch_taken_0x186fb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x186FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186FB8u;
            // 0x186fbc: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186fb8) {
            ctx->pc = 0x18708Cu;
            goto label_18708c;
        }
    }
    ctx->pc = 0x186FC0u;
    // 0x186fc0: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x186FC0u;
    {
        const bool branch_taken_0x186fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186FC0u;
            // 0x186fc4: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186fc0) {
            ctx->pc = 0x1870BCu;
            goto label_1870bc;
        }
    }
    ctx->pc = 0x186FC8u;
label_186fc8:
    // 0x186fc8: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x186fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x186fcc: 0x8e250038  lw          $a1, 0x38($s1)
    ctx->pc = 0x186fccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x186fd0: 0x10b20008  beq         $a1, $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x186FD0u;
    {
        const bool branch_taken_0x186fd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 18));
        ctx->pc = 0x186FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186FD0u;
            // 0x186fd4: 0xae2201a0  sw          $v0, 0x1A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186fd0) {
            ctx->pc = 0x186FF4u;
            goto label_186ff4;
        }
    }
    ctx->pc = 0x186FD8u;
    // 0x186fd8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x186fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x186fdc: 0x0  nop
    ctx->pc = 0x186fdcu;
    // NOP
label_186fe0:
    // 0x186fe0: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x186FE0u;
    {
        const bool branch_taken_0x186fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x186FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186FE0u;
            // 0x186fe4: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186fe0) {
            ctx->pc = 0x186FF8u;
            goto label_186ff8;
        }
    }
    ctx->pc = 0x186FE8u;
    // 0x186fe8: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x186fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x186fec: 0x54b2fffc  bnel        $a1, $s2, . + 4 + (-0x4 << 2)
    ctx->pc = 0x186FECu;
    {
        const bool branch_taken_0x186fec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 18));
        if (branch_taken_0x186fec) {
            ctx->pc = 0x186FF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x186FECu;
            // 0x186ff0: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x186FE0u;
            runtime->cooperativeGuestYield();
            goto label_186fe0;
        }
    }
    ctx->pc = 0x186FF4u;
label_186ff4:
    // 0x186ff4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x186ff4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_186ff8:
    // 0x186ff8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x186ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x186ffc: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x186ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x187000: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x187000u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x187004: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x187004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187008: 0x8c447910  lw          $a0, 0x7910($v0)
    ctx->pc = 0x187008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
    // 0x18700c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x18700cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x187010: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x187010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x187014: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x187014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x187018: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x187018u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x18701c: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x18701cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x187020: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x187020u;
    SET_GPR_U32(ctx, 31, 0x187028u);
    ctx->pc = 0x187024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187020u;
            // 0x187024: 0xace00004  sw          $zero, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187028u; }
        if (ctx->pc != 0x187028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187028u; }
        if (ctx->pc != 0x187028u) { return; }
    }
    ctx->pc = 0x187028u;
    // 0x187028: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x187028u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18702c: 0x2663e848  addiu       $v1, $s3, -0x17B8
    ctx->pc = 0x18702cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961224));
    // 0x187030: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x187030u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x187034: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x187034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187038: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x187038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18703c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18703cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x187040: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x187040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x187044: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x187044u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x187048: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x187048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x18704c: 0x40f809  jalr        $v0
    ctx->pc = 0x18704Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x187054u);
        ctx->pc = 0x187050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18704Cu;
            // 0x187050: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x187054u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x186F38u: goto label_186f38;
            case 0x186F5Cu: goto label_186f5c;
            case 0x186F6Cu: goto label_186f6c;
            case 0x186F80u: goto label_186f80;
            case 0x186FB4u: goto label_186fb4;
            case 0x186FC8u: goto label_186fc8;
            case 0x186FE0u: goto label_186fe0;
            case 0x186FF4u: goto label_186ff4;
            case 0x186FF8u: goto label_186ff8;
            case 0x187060u: goto label_187060;
            case 0x187070u: goto label_187070;
            case 0x18708Cu: goto label_18708c;
            case 0x1870A0u: goto label_1870a0;
            case 0x1870B8u: goto label_1870b8;
            case 0x1870BCu: goto label_1870bc;
            case 0x1870C4u: goto label_1870c4;
            case 0x187110u: goto label_187110;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x187054u; }
            if (ctx->pc != 0x187054u) { return; }
        }
        }
    }
    ctx->pc = 0x187054u;
    // 0x187054: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x187054u;
    {
        const bool branch_taken_0x187054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187054u;
            // 0x187058: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187054) {
            ctx->pc = 0x1870B8u;
            goto label_1870b8;
        }
    }
    ctx->pc = 0x18705Cu;
    // 0x18705c: 0x0  nop
    ctx->pc = 0x18705cu;
    // NOP
label_187060:
    // 0x187060: 0x8e100024  lw          $s0, 0x24($s0)
    ctx->pc = 0x187060u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x187064: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x187064u;
    {
        const bool branch_taken_0x187064 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x187068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187064u;
            // 0x187068: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187064) {
            ctx->pc = 0x1870B8u;
            goto label_1870b8;
        }
    }
    ctx->pc = 0x18706Cu;
    // 0x18706c: 0x2604fff8  addiu       $a0, $s0, -0x8
    ctx->pc = 0x18706cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_187070:
    // 0x187070: 0xc0545bc  jal         func_1516F0
    ctx->pc = 0x187070u;
    SET_GPR_U32(ctx, 31, 0x187078u);
    ctx->pc = 0x187074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187070u;
            // 0x187074: 0x10200a  movz        $a0, $zero, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1516F0u;
    if (runtime->hasFunction(0x1516F0u)) {
        auto targetFn = runtime->lookupFunction(0x1516F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187078u; }
        if (ctx->pc != 0x187078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1516f0_0x1516f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187078u; }
        if (ctx->pc != 0x187078u) { return; }
    }
    ctx->pc = 0x187078u;
    // 0x187078: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x187078u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18707c: 0x5600fffc  bnel        $s0, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x18707Cu;
    {
        const bool branch_taken_0x18707c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x18707c) {
            ctx->pc = 0x187080u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18707Cu;
            // 0x187080: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
            ctx->pc = 0x187070u;
            runtime->cooperativeGuestYield();
            goto label_187070;
        }
    }
    ctx->pc = 0x187084u;
    // 0x187084: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x187084u;
    {
        const bool branch_taken_0x187084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187084u;
            // 0x187088: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187084) {
            ctx->pc = 0x1870B8u;
            goto label_1870b8;
        }
    }
    ctx->pc = 0x18708Cu;
label_18708c:
    // 0x18708c: 0x8e100024  lw          $s0, 0x24($s0)
    ctx->pc = 0x18708cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x187090: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x187090u;
    {
        const bool branch_taken_0x187090 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x187094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187090u;
            // 0x187094: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187090) {
            ctx->pc = 0x1870BCu;
            goto label_1870bc;
        }
    }
    ctx->pc = 0x187098u;
    // 0x187098: 0x2604fff8  addiu       $a0, $s0, -0x8
    ctx->pc = 0x187098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x18709c: 0x0  nop
    ctx->pc = 0x18709cu;
    // NOP
label_1870a0:
    // 0x1870a0: 0xc054f2c  jal         func_153CB0
    ctx->pc = 0x1870A0u;
    SET_GPR_U32(ctx, 31, 0x1870A8u);
    ctx->pc = 0x1870A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1870A0u;
            // 0x1870a4: 0x10200a  movz        $a0, $zero, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153CB0u;
    if (runtime->hasFunction(0x153CB0u)) {
        auto targetFn = runtime->lookupFunction(0x153CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1870A8u; }
        if (ctx->pc != 0x1870A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153CB0_0x153cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1870A8u; }
        if (ctx->pc != 0x1870A8u) { return; }
    }
    ctx->pc = 0x1870A8u;
    // 0x1870a8: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1870a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1870ac: 0x5600fffc  bnel        $s0, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1870ACu;
    {
        const bool branch_taken_0x1870ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1870ac) {
            ctx->pc = 0x1870B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1870ACu;
            // 0x1870b0: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1870A0u;
            runtime->cooperativeGuestYield();
            goto label_1870a0;
        }
    }
    ctx->pc = 0x1870B4u;
    // 0x1870b4: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1870b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1870b8:
    // 0x1870b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1870b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1870bc:
    // 0x1870bc: 0x1462ffb0  bne         $v1, $v0, . + 4 + (-0x50 << 2)
    ctx->pc = 0x1870BCu;
    {
        const bool branch_taken_0x1870bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1870C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1870BCu;
            // 0x1870c0: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1870bc) {
            ctx->pc = 0x186F80u;
            runtime->cooperativeGuestYield();
            goto label_186f80;
        }
    }
    ctx->pc = 0x1870C4u;
label_1870c4:
    // 0x1870c4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1870c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1870c8: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x1870c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x1870cc: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1870ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1870d0: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x1870d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1870d4: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x1870d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x1870d8: 0x40f809  jalr        $v0
    ctx->pc = 0x1870D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1870E0u);
        ctx->pc = 0x1870DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1870D8u;
            // 0x1870dc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1870E0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x186F38u: goto label_186f38;
            case 0x186F5Cu: goto label_186f5c;
            case 0x186F6Cu: goto label_186f6c;
            case 0x186F80u: goto label_186f80;
            case 0x186FB4u: goto label_186fb4;
            case 0x186FC8u: goto label_186fc8;
            case 0x186FE0u: goto label_186fe0;
            case 0x186FF4u: goto label_186ff4;
            case 0x186FF8u: goto label_186ff8;
            case 0x187060u: goto label_187060;
            case 0x187070u: goto label_187070;
            case 0x18708Cu: goto label_18708c;
            case 0x1870A0u: goto label_1870a0;
            case 0x1870B8u: goto label_1870b8;
            case 0x1870BCu: goto label_1870bc;
            case 0x1870C4u: goto label_1870c4;
            case 0x187110u: goto label_187110;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1870E0u; }
            if (ctx->pc != 0x1870E0u) { return; }
        }
        }
    }
    ctx->pc = 0x1870E0u;
    // 0x1870e0: 0x8e24019c  lw          $a0, 0x19C($s1)
    ctx->pc = 0x1870e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 412)));
    // 0x1870e4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1870E4u;
    {
        const bool branch_taken_0x1870e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1870e4) {
            ctx->pc = 0x187110u;
            goto label_187110;
        }
    }
    ctx->pc = 0x1870ECu;
    // 0x1870ec: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x1870ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1870f0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1870F0u;
    {
        const bool branch_taken_0x1870f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1870f0) {
            ctx->pc = 0x187110u;
            goto label_187110;
        }
    }
    ctx->pc = 0x1870F8u;
    // 0x1870f8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1870f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1870fc: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x1870fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x187100: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x187100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x187104: 0x40f809  jalr        $v0
    ctx->pc = 0x187104u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18710Cu);
        ctx->pc = 0x187108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187104u;
            // 0x187108: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18710Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x186F38u: goto label_186f38;
            case 0x186F5Cu: goto label_186f5c;
            case 0x186F6Cu: goto label_186f6c;
            case 0x186F80u: goto label_186f80;
            case 0x186FB4u: goto label_186fb4;
            case 0x186FC8u: goto label_186fc8;
            case 0x186FE0u: goto label_186fe0;
            case 0x186FF4u: goto label_186ff4;
            case 0x186FF8u: goto label_186ff8;
            case 0x187060u: goto label_187060;
            case 0x187070u: goto label_187070;
            case 0x18708Cu: goto label_18708c;
            case 0x1870A0u: goto label_1870a0;
            case 0x1870B8u: goto label_1870b8;
            case 0x1870BCu: goto label_1870bc;
            case 0x1870C4u: goto label_1870c4;
            case 0x187110u: goto label_187110;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18710Cu; }
            if (ctx->pc != 0x18710Cu) { return; }
        }
        }
    }
    ctx->pc = 0x18710Cu;
    // 0x18710c: 0x0  nop
    ctx->pc = 0x18710cu;
    // NOP
label_187110:
    // 0x187110: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x187110u;
    SET_GPR_U32(ctx, 31, 0x187118u);
    ctx->pc = 0x187114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187110u;
            // 0x187114: 0x8e240044  lw          $a0, 0x44($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187118u; }
        if (ctx->pc != 0x187118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187118u; }
        if (ctx->pc != 0x187118u) { return; }
    }
    ctx->pc = 0x187118u;
    // 0x187118: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x187118u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
    // 0x18711c: 0xc061cfa  jal         func_1873E8
    ctx->pc = 0x18711Cu;
    SET_GPR_U32(ctx, 31, 0x187124u);
    ctx->pc = 0x187120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18711Cu;
            // 0x187120: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1873E8u;
    if (runtime->hasFunction(0x1873E8u)) {
        auto targetFn = runtime->lookupFunction(0x1873E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187124u; }
        if (ctx->pc != 0x187124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001873E8_0x1873e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187124u; }
        if (ctx->pc != 0x187124u) { return; }
    }
    ctx->pc = 0x187124u;
    // 0x187124: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x187124u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x187128: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x187128u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18712c: 0x3042fffd  andi        $v0, $v0, 0xFFFD
    ctx->pc = 0x18712cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65533);
    // 0x187130: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x187130u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x187134: 0xa6220004  sh          $v0, 0x4($s1)
    ctx->pc = 0x187134u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x187138: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x187138u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18713c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18713cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x187140: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x187140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x187144: 0x3e00008  jr          $ra
    ctx->pc = 0x187144u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187144u;
            // 0x187148: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x186F38u: goto label_186f38;
            case 0x186F5Cu: goto label_186f5c;
            case 0x186F6Cu: goto label_186f6c;
            case 0x186F80u: goto label_186f80;
            case 0x186FB4u: goto label_186fb4;
            case 0x186FC8u: goto label_186fc8;
            case 0x186FE0u: goto label_186fe0;
            case 0x186FF4u: goto label_186ff4;
            case 0x186FF8u: goto label_186ff8;
            case 0x187060u: goto label_187060;
            case 0x187070u: goto label_187070;
            case 0x18708Cu: goto label_18708c;
            case 0x1870A0u: goto label_1870a0;
            case 0x1870B8u: goto label_1870b8;
            case 0x1870BCu: goto label_1870bc;
            case 0x1870C4u: goto label_1870c4;
            case 0x187110u: goto label_187110;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18714Cu;
    // 0x18714c: 0x0  nop
    ctx->pc = 0x18714cu;
    // NOP
}
