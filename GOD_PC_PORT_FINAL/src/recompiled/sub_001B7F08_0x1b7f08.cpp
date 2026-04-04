#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B7F08
// Address: 0x1b7f08 - 0x1b8198
void sub_001B7F08_0x1b7f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7F08_0x1b7f08");
#endif

    ctx->pc = 0x1b7f08u;

label_1b7f08:
    // 0x1b7f08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b7f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b7f0c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b7f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b7f10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b7f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b7f14: 0xc06d6ea  jal         func_1B5BA8
    ctx->pc = 0x1B7F14u;
    SET_GPR_U32(ctx, 31, 0x1B7F1Cu);
    ctx->pc = 0x1B7F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7F14u;
            // 0x1b7f18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5BA8u;
    if (runtime->hasFunction(0x1B5BA8u)) {
        auto targetFn = runtime->lookupFunction(0x1B5BA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7F1Cu; }
        if (ctx->pc != 0x1B7F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5BA8_0x1b5ba8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7F1Cu; }
        if (ctx->pc != 0x1B7F1Cu) { return; }
    }
    ctx->pc = 0x1B7F1Cu;
    // 0x1b7f1c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b7f1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7f20: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B7F20u;
    {
        const bool branch_taken_0x1b7f20 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1B7F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7F20u;
            // 0x1b7f24: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7f20) {
            ctx->pc = 0x1B7F38u;
            goto label_1b7f38;
        }
    }
    ctx->pc = 0x1B7F28u;
    // 0x1b7f28: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x1b7f28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1b7f2c: 0x244202bc  addiu       $v0, $v0, 0x2BC
    ctx->pc = 0x1b7f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 700));
    // 0x1b7f30: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B7F30u;
    {
        const bool branch_taken_0x1b7f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7F30u;
            // 0x1b7f34: 0x2021021  addu        $v0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7f30) {
            ctx->pc = 0x1B7F40u;
            goto label_1b7f40;
        }
    }
    ctx->pc = 0x1B7F38u;
label_1b7f38:
    // 0x1b7f38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b7f38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7f3c: 0x0  nop
    ctx->pc = 0x1b7f3cu;
    // NOP
label_1b7f40:
    // 0x1b7f40: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b7f40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7f44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b7f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7f48: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7F48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7F48u;
            // 0x1b7f4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B7F08u: goto label_1b7f08;
            case 0x1B7F38u: goto label_1b7f38;
            case 0x1B7F40u: goto label_1b7f40;
            case 0x1B7F7Cu: goto label_1b7f7c;
            case 0x1B7FB8u: goto label_1b7fb8;
            case 0x1B8000u: goto label_1b8000;
            case 0x1B8004u: goto label_1b8004;
            case 0x1B8014u: goto label_1b8014;
            case 0x1B8028u: goto label_1b8028;
            case 0x1B802Cu: goto label_1b802c;
            case 0x1B8034u: goto label_1b8034;
            case 0x1B807Cu: goto label_1b807c;
            case 0x1B80B8u: goto label_1b80b8;
            case 0x1B80C8u: goto label_1b80c8;
            case 0x1B80E4u: goto label_1b80e4;
            case 0x1B80FCu: goto label_1b80fc;
            case 0x1B8108u: goto label_1b8108;
            case 0x1B810Cu: goto label_1b810c;
            case 0x1B8110u: goto label_1b8110;
            case 0x1B8140u: goto label_1b8140;
            case 0x1B8148u: goto label_1b8148;
            case 0x1B8160u: goto label_1b8160;
            case 0x1B8164u: goto label_1b8164;
            case 0x1B8174u: goto label_1b8174;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B7F50u;
    // 0x1b7f50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b7f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b7f54: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1b7f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1b7f58: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1b7f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1b7f5c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b7f5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7f60: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1b7f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1b7f64: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1b7f64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7f68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b7f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b7f6c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1b7f6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7f70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b7f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b7f74: 0xc06dfc2  jal         func_1B7F08
    ctx->pc = 0x1B7F74u;
    SET_GPR_U32(ctx, 31, 0x1B7F7Cu);
    ctx->pc = 0x1B7F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7F74u;
            // 0x1b7f78: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7F08u;
    runtime->cooperativeGuestYield();
    goto label_1b7f08;
    ctx->pc = 0x1B7F7Cu;
label_1b7f7c:
    // 0x1b7f7c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b7f7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7f80: 0x54600024  bnel        $v1, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x1B7F80u;
    {
        const bool branch_taken_0x1b7f80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7f80) {
            ctx->pc = 0x1B7F84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7F80u;
            // 0x1b7f84: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B8014u;
            goto label_1b8014;
        }
    }
    ctx->pc = 0x1B7F88u;
    // 0x1b7f88: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1b7f88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1b7f8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b7f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7f90: 0xc0a25f1  jal         func_2897C4
    ctx->pc = 0x1B7F90u;
    SET_GPR_U32(ctx, 31, 0x1B7F98u);
    ctx->pc = 0x1B7F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7F90u;
            // 0x1b7f94: 0x24a55648  addiu       $a1, $a1, 0x5648 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2897C4u;
    if (runtime->hasFunction(0x2897C4u)) {
        auto targetFn = runtime->lookupFunction(0x2897C4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7F98u; }
        if (ctx->pc != 0x1B7F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2897c4_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7F98u; }
        if (ctx->pc != 0x1B7F98u) { return; }
    }
    ctx->pc = 0x1B7F98u;
    // 0x1b7f98: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1B7F98u;
    {
        const bool branch_taken_0x1b7f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7F98u;
            // 0x1b7f9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7f98) {
            ctx->pc = 0x1B8034u;
            goto label_1b8034;
        }
    }
    ctx->pc = 0x1B7FA0u;
    // 0x1b7fa0: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1b7fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1b7fa4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1b7fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1b7fa8: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x1b7fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
    // 0x1b7fac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b7facu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7fb0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1b7fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1b7fb4: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x1b7fb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b7fb8:
    // 0x1b7fb8: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x1b7fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x1b7fbc: 0x8c451558  lw          $a1, 0x1558($v0)
    ctx->pc = 0x1b7fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5464)));
    // 0x1b7fc0: 0x50a00010  beql        $a1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B7FC0u;
    {
        const bool branch_taken_0x1b7fc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7fc0) {
            ctx->pc = 0x1B7FC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7FC0u;
            // 0x1b7fc4: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B8004u;
            goto label_1b8004;
        }
    }
    ctx->pc = 0x1B7FC8u;
    // 0x1b7fc8: 0x8ca200e0  lw          $v0, 0xE0($a1)
    ctx->pc = 0x1b7fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 224)));
    // 0x1b7fcc: 0x8c420d30  lw          $v0, 0xD30($v0)
    ctx->pc = 0x1b7fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3376)));
    // 0x1b7fd0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B7FD0u;
    {
        const bool branch_taken_0x1b7fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7FD0u;
            // 0x1b7fd4: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7fd0) {
            ctx->pc = 0x1B8000u;
            goto label_1b8000;
        }
    }
    ctx->pc = 0x1B7FD8u;
    // 0x1b7fd8: 0x8c43e8cc  lw          $v1, -0x1734($v0)
    ctx->pc = 0x1b7fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961356)));
    // 0x1b7fdc: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1b7fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1b7fe0: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1b7fe0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1b7fe4: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1b7fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1b7fe8: 0x40f809  jalr        $v0
    ctx->pc = 0x1B7FE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B7FF0u);
        ctx->pc = 0x1B7FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7FE8u;
            // 0x1b7fec: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B7FF0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B7F08u: goto label_1b7f08;
            case 0x1B7F38u: goto label_1b7f38;
            case 0x1B7F40u: goto label_1b7f40;
            case 0x1B7F7Cu: goto label_1b7f7c;
            case 0x1B7FB8u: goto label_1b7fb8;
            case 0x1B8000u: goto label_1b8000;
            case 0x1B8004u: goto label_1b8004;
            case 0x1B8014u: goto label_1b8014;
            case 0x1B8028u: goto label_1b8028;
            case 0x1B802Cu: goto label_1b802c;
            case 0x1B8034u: goto label_1b8034;
            case 0x1B807Cu: goto label_1b807c;
            case 0x1B80B8u: goto label_1b80b8;
            case 0x1B80C8u: goto label_1b80c8;
            case 0x1B80E4u: goto label_1b80e4;
            case 0x1B80FCu: goto label_1b80fc;
            case 0x1B8108u: goto label_1b8108;
            case 0x1B810Cu: goto label_1b810c;
            case 0x1B8110u: goto label_1b8110;
            case 0x1B8140u: goto label_1b8140;
            case 0x1B8148u: goto label_1b8148;
            case 0x1B8160u: goto label_1b8160;
            case 0x1B8164u: goto label_1b8164;
            case 0x1B8174u: goto label_1b8174;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B7FF0u; }
            if (ctx->pc != 0x1B7FF0u) { return; }
        }
        }
    }
    ctx->pc = 0x1B7FF0u;
    // 0x1b7ff0: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1b7ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1b7ff4: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1b7ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1b7ff8: 0x24420038  addiu       $v0, $v0, 0x38
    ctx->pc = 0x1b7ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x1b7ffc: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1b7ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1b8000:
    // 0x1b8000: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1b8000u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1b8004:
    // 0x1b8004: 0x601ffec  bgez        $s0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1B8004u;
    {
        const bool branch_taken_0x1b8004 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1B8008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8004u;
            // 0x1b8008: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8004) {
            ctx->pc = 0x1B7FB8u;
            runtime->cooperativeGuestYield();
            goto label_1b7fb8;
        }
    }
    ctx->pc = 0x1B800Cu;
    // 0x1b800c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B800Cu;
    {
        const bool branch_taken_0x1b800c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B800Cu;
            // 0x1b8010: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b800c) {
            ctx->pc = 0x1B8034u;
            goto label_1b8034;
        }
    }
    ctx->pc = 0x1B8014u;
label_1b8014:
    // 0x1b8014: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B8014u;
    {
        const bool branch_taken_0x1b8014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8014u;
            // 0x1b8018: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8014) {
            ctx->pc = 0x1B8028u;
            goto label_1b8028;
        }
    }
    ctx->pc = 0x1B801Cu;
    // 0x1b801c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1b801cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1b8020: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B8020u;
    {
        const bool branch_taken_0x1b8020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8020u;
            // 0x1b8024: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8020) {
            ctx->pc = 0x1B802Cu;
            goto label_1b802c;
        }
    }
    ctx->pc = 0x1B8028u;
label_1b8028:
    // 0x1b8028: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1b8028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1b802c:
    // 0x1b802c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1b802cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1b8030: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b8030u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8034:
    // 0x1b8034: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1b8034u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b8038: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1b8038u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b803c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b803cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8040: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1b8040u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8044: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b8044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8048: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B804Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8048u;
            // 0x1b804c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B7F08u: goto label_1b7f08;
            case 0x1B7F38u: goto label_1b7f38;
            case 0x1B7F40u: goto label_1b7f40;
            case 0x1B7F7Cu: goto label_1b7f7c;
            case 0x1B7FB8u: goto label_1b7fb8;
            case 0x1B8000u: goto label_1b8000;
            case 0x1B8004u: goto label_1b8004;
            case 0x1B8014u: goto label_1b8014;
            case 0x1B8028u: goto label_1b8028;
            case 0x1B802Cu: goto label_1b802c;
            case 0x1B8034u: goto label_1b8034;
            case 0x1B807Cu: goto label_1b807c;
            case 0x1B80B8u: goto label_1b80b8;
            case 0x1B80C8u: goto label_1b80c8;
            case 0x1B80E4u: goto label_1b80e4;
            case 0x1B80FCu: goto label_1b80fc;
            case 0x1B8108u: goto label_1b8108;
            case 0x1B810Cu: goto label_1b810c;
            case 0x1B8110u: goto label_1b8110;
            case 0x1B8140u: goto label_1b8140;
            case 0x1B8148u: goto label_1b8148;
            case 0x1B8160u: goto label_1b8160;
            case 0x1B8164u: goto label_1b8164;
            case 0x1B8174u: goto label_1b8174;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B8050u;
    // 0x1b8050: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b8050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b8054: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1b8054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1b8058: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1b8058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1b805c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1b805cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8060: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1b8060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1b8064: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1b8064u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8068: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1b8068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1b806c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1b806cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1b8070: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b8070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b8074: 0xc06dfc2  jal         func_1B7F08
    ctx->pc = 0x1B8074u;
    SET_GPR_U32(ctx, 31, 0x1B807Cu);
    ctx->pc = 0x1B8078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8074u;
            // 0x1b8078: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7F08u;
    runtime->cooperativeGuestYield();
    goto label_1b7f08;
    ctx->pc = 0x1B807Cu;
label_1b807c:
    // 0x1b807c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b807cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8080: 0x1200003c  beqz        $s0, . + 4 + (0x3C << 2)
    ctx->pc = 0x1B8080u;
    {
        const bool branch_taken_0x1b8080 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8080u;
            // 0x1b8084: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8080) {
            ctx->pc = 0x1B8174u;
            goto label_1b8174;
        }
    }
    ctx->pc = 0x1B8088u;
    // 0x1b8088: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1b8088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1b808c: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x1B808Cu;
    {
        const bool branch_taken_0x1b808c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B808Cu;
            // 0x1b8090: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b808c) {
            ctx->pc = 0x1B8174u;
            goto label_1b8174;
        }
    }
    ctx->pc = 0x1B8094u;
    // 0x1b8094: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1b8094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b8098: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B8098u;
    {
        const bool branch_taken_0x1b8098 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B809Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8098u;
            // 0x1b809c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8098) {
            ctx->pc = 0x1B80E4u;
            goto label_1b80e4;
        }
    }
    ctx->pc = 0x1B80A0u;
    // 0x1b80a0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B80A0u;
    {
        const bool branch_taken_0x1b80a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b80a0) {
            ctx->pc = 0x1B80A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B80A0u;
            // 0x1b80a4: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B80B8u;
            goto label_1b80b8;
        }
    }
    ctx->pc = 0x1B80A8u;
    // 0x1b80a8: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B80A8u;
    {
        const bool branch_taken_0x1b80a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b80a8) {
            ctx->pc = 0x1B80ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B80A8u;
            // 0x1b80ac: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B80C8u;
            goto label_1b80c8;
        }
    }
    ctx->pc = 0x1B80B0u;
    // 0x1b80b0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1B80B0u;
    {
        const bool branch_taken_0x1b80b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B80B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B80B0u;
            // 0x1b80b4: 0x86040012  lh          $a0, 0x12($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b80b0) {
            ctx->pc = 0x1B8110u;
            goto label_1b8110;
        }
    }
    ctx->pc = 0x1B80B8u;
label_1b80b8:
    // 0x1b80b8: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B80B8u;
    {
        const bool branch_taken_0x1b80b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B80BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B80B8u;
            // 0x1b80bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b80b8) {
            ctx->pc = 0x1B80FCu;
            goto label_1b80fc;
        }
    }
    ctx->pc = 0x1B80C0u;
    // 0x1b80c0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1B80C0u;
    {
        const bool branch_taken_0x1b80c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B80C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B80C0u;
            // 0x1b80c4: 0x86040012  lh          $a0, 0x12($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b80c0) {
            ctx->pc = 0x1B8110u;
            goto label_1b8110;
        }
    }
    ctx->pc = 0x1B80C8u;
label_1b80c8:
    // 0x1b80c8: 0xc050f1e  jal         func_143C78
    ctx->pc = 0x1B80C8u;
    SET_GPR_U32(ctx, 31, 0x1B80D0u);
    ctx->pc = 0x1B80CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B80C8u;
            // 0x1b80cc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143C78u;
    if (runtime->hasFunction(0x143C78u)) {
        auto targetFn = runtime->lookupFunction(0x143C78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B80D0u; }
        if (ctx->pc != 0x1B80D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143C78_0x143c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B80D0u; }
        if (ctx->pc != 0x1B80D0u) { return; }
    }
    ctx->pc = 0x1B80D0u;
    // 0x1b80d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b80d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b80d4: 0xc050fa6  jal         func_143E98
    ctx->pc = 0x1B80D4u;
    SET_GPR_U32(ctx, 31, 0x1B80DCu);
    ctx->pc = 0x1B80D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B80D4u;
            // 0x1b80d8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143E98u;
    if (runtime->hasFunction(0x143E98u)) {
        auto targetFn = runtime->lookupFunction(0x143E98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B80DCu; }
        if (ctx->pc != 0x1B80DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143E98_0x143e98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B80DCu; }
        if (ctx->pc != 0x1B80DCu) { return; }
    }
    ctx->pc = 0x1B80DCu;
    // 0x1b80dc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1B80DCu;
    {
        const bool branch_taken_0x1b80dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B80E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B80DCu;
            // 0x1b80e0: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b80dc) {
            ctx->pc = 0x1B8108u;
            goto label_1b8108;
        }
    }
    ctx->pc = 0x1B80E4u;
label_1b80e4:
    // 0x1b80e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b80e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b80e8: 0xc050f80  jal         func_143E00
    ctx->pc = 0x1B80E8u;
    SET_GPR_U32(ctx, 31, 0x1B80F0u);
    ctx->pc = 0x1B80ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B80E8u;
            // 0x1b80ec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143E00u;
    if (runtime->hasFunction(0x143E00u)) {
        auto targetFn = runtime->lookupFunction(0x143E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B80F0u; }
        if (ctx->pc != 0x1B80F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_143e00_0x143e98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B80F0u; }
        if (ctx->pc != 0x1B80F0u) { return; }
    }
    ctx->pc = 0x1B80F0u;
    // 0x1b80f0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1b80f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b80f4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B80F4u;
    {
        const bool branch_taken_0x1b80f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B80F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B80F4u;
            // 0x1b80f8: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b80f4) {
            ctx->pc = 0x1B810Cu;
            goto label_1b810c;
        }
    }
    ctx->pc = 0x1B80FCu;
label_1b80fc:
    // 0x1b80fc: 0xc050f5c  jal         func_143D70
    ctx->pc = 0x1B80FCu;
    SET_GPR_U32(ctx, 31, 0x1B8104u);
    ctx->pc = 0x1B8100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B80FCu;
            // 0x1b8100: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143D70u;
    if (runtime->hasFunction(0x143D70u)) {
        auto targetFn = runtime->lookupFunction(0x143D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8104u; }
        if (ctx->pc != 0x1B8104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_143d70_0x143e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8104u; }
        if (ctx->pc != 0x1B8104u) { return; }
    }
    ctx->pc = 0x1B8104u;
    // 0x1b8104: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1b8104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1b8108:
    // 0x1b8108: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1b8108u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1b810c:
    // 0x1b810c: 0x86040012  lh          $a0, 0x12($s0)
    ctx->pc = 0x1b810cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_1b8110:
    // 0x1b8110: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1B8110u;
    {
        const bool branch_taken_0x1b8110 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8110u;
            // 0x1b8114: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8110) {
            ctx->pc = 0x1B8174u;
            goto label_1b8174;
        }
    }
    ctx->pc = 0x1B8118u;
    // 0x1b8118: 0x4800009  bltz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B8118u;
    {
        const bool branch_taken_0x1b8118 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1B811Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8118u;
            // 0x1b811c: 0x418c0  sll         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8118) {
            ctx->pc = 0x1B8140u;
            goto label_1b8140;
        }
    }
    ctx->pc = 0x1B8120u;
    // 0x1b8120: 0x86020014  lh          $v0, 0x14($s0)
    ctx->pc = 0x1b8120u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1b8124: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1b8124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1b8128: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b8128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b812c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b812cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b8130: 0xdc74fff8  ld          $s4, -0x8($v1)
    ctx->pc = 0x1b8130u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
    // 0x1b8134: 0x14303f  dsra32      $a2, $s4, 0
    ctx->pc = 0x1b8134u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 20) >> (32 + 0));
    // 0x1b8138: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B8138u;
    {
        const bool branch_taken_0x1b8138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B813Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8138u;
            // 0x1b813c: 0x86030010  lh          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8138) {
            ctx->pc = 0x1B8148u;
            goto label_1b8148;
        }
    }
    ctx->pc = 0x1B8140u;
label_1b8140:
    // 0x1b8140: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x1b8140u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1b8144: 0x86030010  lh          $v1, 0x10($s0)
    ctx->pc = 0x1b8144u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
label_1b8148:
    // 0x1b8148: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B8148u;
    {
        const bool branch_taken_0x1b8148 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1B814Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8148u;
            // 0x1b814c: 0x3282ffff  andi        $v0, $s4, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8148) {
            ctx->pc = 0x1B8160u;
            goto label_1b8160;
        }
    }
    ctx->pc = 0x1B8150u;
    // 0x1b8150: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1b8150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1b8154: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1b8154u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1b8158: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B8158u;
    {
        const bool branch_taken_0x1b8158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B815Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8158u;
            // 0x1b815c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8158) {
            ctx->pc = 0x1B8164u;
            goto label_1b8164;
        }
    }
    ctx->pc = 0x1B8160u;
label_1b8160:
    // 0x1b8160: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1b8160u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1b8164:
    // 0x1b8164: 0x2622021  addu        $a0, $s3, $v0
    ctx->pc = 0x1b8164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1b8168: 0xc0f809  jalr        $a2
    ctx->pc = 0x1B8168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1B8170u);
        ctx->pc = 0x1B816Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8168u;
            // 0x1b816c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B8170u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B7F08u: goto label_1b7f08;
            case 0x1B7F38u: goto label_1b7f38;
            case 0x1B7F40u: goto label_1b7f40;
            case 0x1B7F7Cu: goto label_1b7f7c;
            case 0x1B7FB8u: goto label_1b7fb8;
            case 0x1B8000u: goto label_1b8000;
            case 0x1B8004u: goto label_1b8004;
            case 0x1B8014u: goto label_1b8014;
            case 0x1B8028u: goto label_1b8028;
            case 0x1B802Cu: goto label_1b802c;
            case 0x1B8034u: goto label_1b8034;
            case 0x1B807Cu: goto label_1b807c;
            case 0x1B80B8u: goto label_1b80b8;
            case 0x1B80C8u: goto label_1b80c8;
            case 0x1B80E4u: goto label_1b80e4;
            case 0x1B80FCu: goto label_1b80fc;
            case 0x1B8108u: goto label_1b8108;
            case 0x1B810Cu: goto label_1b810c;
            case 0x1B8110u: goto label_1b8110;
            case 0x1B8140u: goto label_1b8140;
            case 0x1B8148u: goto label_1b8148;
            case 0x1B8160u: goto label_1b8160;
            case 0x1B8164u: goto label_1b8164;
            case 0x1B8174u: goto label_1b8174;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B8170u; }
            if (ctx->pc != 0x1B8170u) { return; }
        }
        }
    }
    ctx->pc = 0x1B8170u;
    // 0x1b8170: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b8170u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8174:
    // 0x1b8174: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1b8174u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b8178: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1b8178u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b817c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1b817cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b8180: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1b8180u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8184: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1b8184u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8188: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b8188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b818c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B818Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B818Cu;
            // 0x1b8190: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B7F08u: goto label_1b7f08;
            case 0x1B7F38u: goto label_1b7f38;
            case 0x1B7F40u: goto label_1b7f40;
            case 0x1B7F7Cu: goto label_1b7f7c;
            case 0x1B7FB8u: goto label_1b7fb8;
            case 0x1B8000u: goto label_1b8000;
            case 0x1B8004u: goto label_1b8004;
            case 0x1B8014u: goto label_1b8014;
            case 0x1B8028u: goto label_1b8028;
            case 0x1B802Cu: goto label_1b802c;
            case 0x1B8034u: goto label_1b8034;
            case 0x1B807Cu: goto label_1b807c;
            case 0x1B80B8u: goto label_1b80b8;
            case 0x1B80C8u: goto label_1b80c8;
            case 0x1B80E4u: goto label_1b80e4;
            case 0x1B80FCu: goto label_1b80fc;
            case 0x1B8108u: goto label_1b8108;
            case 0x1B810Cu: goto label_1b810c;
            case 0x1B8110u: goto label_1b8110;
            case 0x1B8140u: goto label_1b8140;
            case 0x1B8148u: goto label_1b8148;
            case 0x1B8160u: goto label_1b8160;
            case 0x1B8164u: goto label_1b8164;
            case 0x1B8174u: goto label_1b8174;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B8194u;
    // 0x1b8194: 0x0  nop
    ctx->pc = 0x1b8194u;
    // NOP
}
