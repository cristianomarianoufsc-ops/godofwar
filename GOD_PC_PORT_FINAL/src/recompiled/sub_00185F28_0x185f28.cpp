#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00185F28
// Address: 0x185f28 - 0x1860b8
void sub_00185F28_0x185f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00185F28_0x185f28");
#endif

    ctx->pc = 0x185f28u;

    // 0x185f28: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x185f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x185f2c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x185f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x185f30: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x185f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x185f34: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x185f34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x185f38: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x185f38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185f3c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x185f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x185f40: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x185f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x185f44: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x185f44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x185f48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x185f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x185f4c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x185f4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185f50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x185f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x185f54: 0xac40c814  sw          $zero, -0x37EC($v0)
    ctx->pc = 0x185f54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294952980), GPR_U32(ctx, 0));
    // 0x185f58: 0xac60c818  sw          $zero, -0x37E8($v1)
    ctx->pc = 0x185f58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952984), GPR_U32(ctx, 0));
    // 0x185f5c: 0xac80c81c  sw          $zero, -0x37E4($a0)
    ctx->pc = 0x185f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294952988), GPR_U32(ctx, 0));
    // 0x185f60: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x185f60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
    // 0x185f64: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x185f64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
    // 0x185f68: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x185f68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
    // 0x185f6c: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x185f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
    // 0x185f70: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x185f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x185f74: 0x8c42c4dc  lw          $v0, -0x3B24($v0)
    ctx->pc = 0x185f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952156)));
    // 0x185f78: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x185F78u;
    {
        const bool branch_taken_0x185f78 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x185F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185F78u;
            // 0x185f7c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185f78) {
            ctx->pc = 0x185F90u;
            goto label_185f90;
        }
    }
    ctx->pc = 0x185F80u;
    // 0x185f80: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x185f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x185f84: 0x8c42c4e0  lw          $v0, -0x3B20($v0)
    ctx->pc = 0x185f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952160)));
    // 0x185f88: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x185F88u;
    {
        const bool branch_taken_0x185f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185F88u;
            // 0x185f8c: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185f88) {
            ctx->pc = 0x185FACu;
            goto label_185fac;
        }
    }
    ctx->pc = 0x185F90u;
label_185f90:
    // 0x185f90: 0x0  nop
    ctx->pc = 0x185f90u;
    // NOP
    // 0x185f94: 0x0  nop
    ctx->pc = 0x185f94u;
    // NOP
    // 0x185f98: 0x0  nop
    ctx->pc = 0x185f98u;
    // NOP
    // 0x185f9c: 0x0  nop
    ctx->pc = 0x185f9cu;
    // NOP
    // 0x185fa0: 0x0  nop
    ctx->pc = 0x185fa0u;
    // NOP
    // 0x185fa4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x185FA4u;
    {
        const bool branch_taken_0x185fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185fa4) {
            ctx->pc = 0x185F90u;
            runtime->cooperativeGuestYield();
            goto label_185f90;
        }
    }
    ctx->pc = 0x185FACu;
label_185fac:
    // 0x185fac: 0x2452e848  addiu       $s2, $v0, -0x17B8
    ctx->pc = 0x185facu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x185fb0: 0x8e43006c  lw          $v1, 0x6C($s2)
    ctx->pc = 0x185fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
    // 0x185fb4: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x185FB4u;
    {
        const bool branch_taken_0x185fb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x185fb4) {
            ctx->pc = 0x185FB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x185FB4u;
            // 0x185fb8: 0x8e250050  lw          $a1, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x185FD8u;
            goto label_185fd8;
        }
    }
    ctx->pc = 0x185FBCu;
    // 0x185fbc: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x185fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x185fc0: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x185fc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x185fc4: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x185fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x185fc8: 0x40f809  jalr        $v0
    ctx->pc = 0x185FC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x185FD0u);
        ctx->pc = 0x185FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185FC8u;
            // 0x185fcc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x185FD0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x185F90u: goto label_185f90;
            case 0x185FACu: goto label_185fac;
            case 0x185FD8u: goto label_185fd8;
            case 0x186008u: goto label_186008;
            case 0x186050u: goto label_186050;
            case 0x186068u: goto label_186068;
            case 0x186070u: goto label_186070;
            case 0x186088u: goto label_186088;
            case 0x186098u: goto label_186098;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x185FD0u; }
            if (ctx->pc != 0x185FD0u) { return; }
        }
        }
    }
    ctx->pc = 0x185FD0u;
    // 0x185fd0: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x185fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
    // 0x185fd4: 0x8e250050  lw          $a1, 0x50($s1)
    ctx->pc = 0x185fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_185fd8:
    // 0x185fd8: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x185FD8u;
    {
        const bool branch_taken_0x185fd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x185FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185FD8u;
            // 0x185fdc: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185fd8) {
            ctx->pc = 0x186008u;
            goto label_186008;
        }
    }
    ctx->pc = 0x185FE0u;
    // 0x185fe0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x185fe0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x185fe4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x185fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x185fe8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x185fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x185fec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x185fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x185ff0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x185ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x185ff4: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x185ff4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x185ff8: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x185ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x185ffc: 0x40f809  jalr        $v0
    ctx->pc = 0x185FFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x186004u);
        ctx->pc = 0x186000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185FFCu;
            // 0x186000: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x186004u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x185F90u: goto label_185f90;
            case 0x185FACu: goto label_185fac;
            case 0x185FD8u: goto label_185fd8;
            case 0x186008u: goto label_186008;
            case 0x186050u: goto label_186050;
            case 0x186068u: goto label_186068;
            case 0x186070u: goto label_186070;
            case 0x186088u: goto label_186088;
            case 0x186098u: goto label_186098;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x186004u; }
            if (ctx->pc != 0x186004u) { return; }
        }
        }
    }
    ctx->pc = 0x186004u;
    // 0x186004: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x186004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_186008:
    // 0x186008: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x186008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18600c: 0x8c42c810  lw          $v0, -0x37F0($v0)
    ctx->pc = 0x18600cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952976)));
    // 0x186010: 0x26320004  addiu       $s2, $s1, 0x4
    ctx->pc = 0x186010u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x186014: 0xae300018  sw          $s0, 0x18($s1)
    ctx->pc = 0x186014u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 16));
    // 0x186018: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x186018u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18601c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18601cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186020: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x186020u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x186024: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x186024u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x186028: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x186028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18602c: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x18602cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x186030: 0x32100200  andi        $s0, $s0, 0x200
    ctx->pc = 0x186030u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)512);
    // 0x186034: 0xc05eb5c  jal         func_17AD70
    ctx->pc = 0x186034u;
    SET_GPR_U32(ctx, 31, 0x18603Cu);
    ctx->pc = 0x186038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186034u;
            // 0x186038: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17AD70u;
    if (runtime->hasFunction(0x17AD70u)) {
        auto targetFn = runtime->lookupFunction(0x17AD70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18603Cu; }
        if (ctx->pc != 0x18603Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017AD70_0x17ad70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18603Cu; }
        if (ctx->pc != 0x18603Cu) { return; }
    }
    ctx->pc = 0x18603Cu;
    // 0x18603c: 0x52000016  beql        $s0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x18603Cu;
    {
        const bool branch_taken_0x18603c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18603c) {
            ctx->pc = 0x186040u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18603Cu;
            // 0x186040: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x186098u;
            goto label_186098;
        }
    }
    ctx->pc = 0x186044u;
    // 0x186044: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x186044u;
    {
        const bool branch_taken_0x186044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x186048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186044u;
            // 0x186048: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186044) {
            ctx->pc = 0x186050u;
            goto label_186050;
        }
    }
    ctx->pc = 0x18604Cu;
    // 0x18604c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x18604cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_186050:
    // 0x186050: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x186050u;
    {
        const bool branch_taken_0x186050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x186054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186050u;
            // 0x186054: 0xae22004c  sw          $v0, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186050) {
            ctx->pc = 0x186068u;
            goto label_186068;
        }
    }
    ctx->pc = 0x186058u;
    // 0x186058: 0xc05ebba  jal         func_17AEE8
    ctx->pc = 0x186058u;
    SET_GPR_U32(ctx, 31, 0x186060u);
    ctx->pc = 0x18605Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186058u;
            // 0x18605c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17AEE8u;
    if (runtime->hasFunction(0x17AEE8u)) {
        auto targetFn = runtime->lookupFunction(0x17AEE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186060u; }
        if (ctx->pc != 0x186060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017AEE8_0x17aee8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186060u; }
        if (ctx->pc != 0x186060u) { return; }
    }
    ctx->pc = 0x186060u;
    // 0x186060: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x186060u;
    {
        const bool branch_taken_0x186060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186060u;
            // 0x186064: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186060) {
            ctx->pc = 0x186098u;
            goto label_186098;
        }
    }
    ctx->pc = 0x186068u;
label_186068:
    // 0x186068: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x186068u;
    {
        const bool branch_taken_0x186068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18606Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186068u;
            // 0x18606c: 0xae220048  sw          $v0, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186068) {
            ctx->pc = 0x186088u;
            goto label_186088;
        }
    }
    ctx->pc = 0x186070u;
label_186070:
    // 0x186070: 0xc09ae46  jal         func_26B918
    ctx->pc = 0x186070u;
    SET_GPR_U32(ctx, 31, 0x186078u);
    ctx->pc = 0x26B918u;
    if (runtime->hasFunction(0x26B918u)) {
        auto targetFn = runtime->lookupFunction(0x26B918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186078u; }
        if (ctx->pc != 0x186078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026B918_0x26b918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186078u; }
        if (ctx->pc != 0x186078u) { return; }
    }
    ctx->pc = 0x186078u;
    // 0x186078: 0xc05cc24  jal         func_173090
    ctx->pc = 0x186078u;
    SET_GPR_U32(ctx, 31, 0x186080u);
    ctx->pc = 0x173090u;
    if (runtime->hasFunction(0x173090u)) {
        auto targetFn = runtime->lookupFunction(0x173090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186080u; }
        if (ctx->pc != 0x186080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173090_0x173090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186080u; }
        if (ctx->pc != 0x186080u) { return; }
    }
    ctx->pc = 0x186080u;
    // 0x186080: 0xc05ccf6  jal         func_1733D8
    ctx->pc = 0x186080u;
    SET_GPR_U32(ctx, 31, 0x186088u);
    ctx->pc = 0x1733D8u;
    if (runtime->hasFunction(0x1733D8u)) {
        auto targetFn = runtime->lookupFunction(0x1733D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186088u; }
        if (ctx->pc != 0x186088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1733d8_0x173430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186088u; }
        if (ctx->pc != 0x186088u) { return; }
    }
    ctx->pc = 0x186088u;
label_186088:
    // 0x186088: 0xc061688  jal         func_185A20
    ctx->pc = 0x186088u;
    SET_GPR_U32(ctx, 31, 0x186090u);
    ctx->pc = 0x18608Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186088u;
            // 0x18608c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185A20u;
    if (runtime->hasFunction(0x185A20u)) {
        auto targetFn = runtime->lookupFunction(0x185A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186090u; }
        if (ctx->pc != 0x186090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185A20_0x185a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186090u; }
        if (ctx->pc != 0x186090u) { return; }
    }
    ctx->pc = 0x186090u;
    // 0x186090: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x186090u;
    {
        const bool branch_taken_0x186090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x186094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186090u;
            // 0x186094: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186090) {
            ctx->pc = 0x186070u;
            runtime->cooperativeGuestYield();
            goto label_186070;
        }
    }
    ctx->pc = 0x186098u;
label_186098:
    // 0x186098: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x186098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18609c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x18609cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1860a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1860a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1860a4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1860a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1860a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1860a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1860ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1860ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1860B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1860ACu;
            // 0x1860b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x185F90u: goto label_185f90;
            case 0x185FACu: goto label_185fac;
            case 0x185FD8u: goto label_185fd8;
            case 0x186008u: goto label_186008;
            case 0x186050u: goto label_186050;
            case 0x186068u: goto label_186068;
            case 0x186070u: goto label_186070;
            case 0x186088u: goto label_186088;
            case 0x186098u: goto label_186098;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1860B4u;
    // 0x1860b4: 0x0  nop
    ctx->pc = 0x1860b4u;
    // NOP
}
