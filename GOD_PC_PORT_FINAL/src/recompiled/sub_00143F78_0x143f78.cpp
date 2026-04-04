#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00143F78
// Address: 0x143f78 - 0x144040
void sub_00143F78_0x143f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143F78_0x143f78");
#endif

    ctx->pc = 0x143f78u;

    // 0x143f78: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x143f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x143f7c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x143f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x143f80: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x143f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x143f84: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x143f84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143f88: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x143f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x143f8c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x143f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x143f90: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x143f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x143f94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x143f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x143f98: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x143f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x143f9c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x143F9Cu;
    {
        const bool branch_taken_0x143f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x143FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143F9Cu;
            // 0x143fa0: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143f9c) {
            ctx->pc = 0x14400Cu;
            goto label_14400c;
        }
    }
    ctx->pc = 0x143FA4u;
    // 0x143fa4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x143fa4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143fa8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x143fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x143fac: 0x0  nop
    ctx->pc = 0x143facu;
    // NOP
label_143fb0:
    // 0x143fb0: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x143fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x143fb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x143fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x143fb8: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x143fb8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x143fbc: 0x5220000c  beql        $s1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x143FBCu;
    {
        const bool branch_taken_0x143fbc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x143fbc) {
            ctx->pc = 0x143FC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x143FBCu;
            // 0x143fc0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x143FF0u;
            goto label_143ff0;
        }
    }
    ctx->pc = 0x143FC4u;
    // 0x143fc4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x143fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_143fc8:
    // 0x143fc8: 0xc050f1e  jal         func_143C78
    ctx->pc = 0x143FC8u;
    SET_GPR_U32(ctx, 31, 0x143FD0u);
    ctx->pc = 0x143FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143FC8u;
            // 0x143fcc: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143C78u;
    if (runtime->hasFunction(0x143C78u)) {
        auto targetFn = runtime->lookupFunction(0x143C78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143FD0u; }
        if (ctx->pc != 0x143FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143C78_0x143c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143FD0u; }
        if (ctx->pc != 0x143FD0u) { return; }
    }
    ctx->pc = 0x143FD0u;
    // 0x143fd0: 0xc050f1e  jal         func_143C78
    ctx->pc = 0x143FD0u;
    SET_GPR_U32(ctx, 31, 0x143FD8u);
    ctx->pc = 0x143FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143FD0u;
            // 0x143fd4: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143C78u;
    if (runtime->hasFunction(0x143C78u)) {
        auto targetFn = runtime->lookupFunction(0x143C78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143FD8u; }
        if (ctx->pc != 0x143FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143C78_0x143c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143FD8u; }
        if (ctx->pc != 0x143FD8u) { return; }
    }
    ctx->pc = 0x143FD8u;
    // 0x143fd8: 0xc0530bc  jal         func_14C2F0
    ctx->pc = 0x143FD8u;
    SET_GPR_U32(ctx, 31, 0x143FE0u);
    ctx->pc = 0x143FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143FD8u;
            // 0x143fdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14C2F0u;
    if (runtime->hasFunction(0x14C2F0u)) {
        auto targetFn = runtime->lookupFunction(0x14C2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143FE0u; }
        if (ctx->pc != 0x143FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014C2F0_0x14c2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143FE0u; }
        if (ctx->pc != 0x143FE0u) { return; }
    }
    ctx->pc = 0x143FE0u;
    // 0x143fe0: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x143fe0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143fe4: 0x5620fff8  bnel        $s1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x143FE4u;
    {
        const bool branch_taken_0x143fe4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x143fe4) {
            ctx->pc = 0x143FE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x143FE4u;
            // 0x143fe8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x143FC8u;
            runtime->cooperativeGuestYield();
            goto label_143fc8;
        }
    }
    ctx->pc = 0x143FECu;
    // 0x143fec: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x143fecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_143ff0:
    // 0x143ff0: 0x2a620165  slti        $v0, $s3, 0x165
    ctx->pc = 0x143ff0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)357) ? 1 : 0);
    // 0x143ff4: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x143FF4u;
    {
        const bool branch_taken_0x143ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x143ff4) {
            ctx->pc = 0x143FF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x143FF4u;
            // 0x143ff8: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x143FB0u;
            runtime->cooperativeGuestYield();
            goto label_143fb0;
        }
    }
    ctx->pc = 0x143FFCu;
    // 0x143ffc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x143ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x144000: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x144000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x144004: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x144004u;
    SET_GPR_U32(ctx, 31, 0x14400Cu);
    ctx->pc = 0x144008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144004u;
            // 0x144008: 0x8c44c06c  lw          $a0, -0x3F94($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951020)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14400Cu; }
        if (ctx->pc != 0x14400Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14400Cu; }
        if (ctx->pc != 0x14400Cu) { return; }
    }
    ctx->pc = 0x14400Cu;
label_14400c:
    // 0x14400c: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x14400cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x144010: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x144010u;
    {
        const bool branch_taken_0x144010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x144014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144010u;
            // 0x144014: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144010) {
            ctx->pc = 0x144024u;
            goto label_144024;
        }
    }
    ctx->pc = 0x144018u;
    // 0x144018: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x144018u;
    SET_GPR_U32(ctx, 31, 0x144020u);
    ctx->pc = 0x14401Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144018u;
            // 0x14401c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144020u; }
        if (ctx->pc != 0x144020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144020u; }
        if (ctx->pc != 0x144020u) { return; }
    }
    ctx->pc = 0x144020u;
    // 0x144020: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x144020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_144024:
    // 0x144024: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x144024u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x144028: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x144028u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14402c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x14402cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x144030: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x144030u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144034: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x144034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144038: 0x3e00008  jr          $ra
    ctx->pc = 0x144038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14403Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144038u;
            // 0x14403c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x143FB0u: goto label_143fb0;
            case 0x143FC8u: goto label_143fc8;
            case 0x143FF0u: goto label_143ff0;
            case 0x14400Cu: goto label_14400c;
            case 0x144024u: goto label_144024;
            default: break;
        }
        return;
    }
    ctx->pc = 0x144040u;
}
