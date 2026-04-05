#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001384E8
// Address: 0x1384e8 - 0x1385d8
void sub_001384E8_0x1384e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001384E8_0x1384e8");
#endif

    ctx->pc = 0x1384e8u;

label_1384e8:
    // 0x1384e8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1384e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1384ec: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1384ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1384f0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1384f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1384f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1384f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1384f8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1384f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1384fc: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x1384fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x138500: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x138500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x138504: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x138504u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138508: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x138508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x13850c: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x13850cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x138510: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x138510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x138514: 0x7005a4a9  por         $s4, $zero, $a1
    ctx->pc = 0x138514u;
    SET_GPR_VEC(ctx, 20, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 5)));
    // 0x138518: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x138518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x13851c: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x13851cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138520: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x138520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x138524: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x138524u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138528: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x138528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13852c: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x13852cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138530: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x138530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x138534: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x138534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x138538: 0x1ae0001a  blez        $s7, . + 4 + (0x1A << 2)
    ctx->pc = 0x138538u;
    {
        const bool branch_taken_0x138538 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x13853Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138538u;
            // 0x13853c: 0x84500004  lh          $s0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138538) {
            ctx->pc = 0x1385A4u;
            goto label_1385a4;
        }
    }
    ctx->pc = 0x138540u;
    // 0x138540: 0x12120019  beq         $s0, $s2, . + 4 + (0x19 << 2)
    ctx->pc = 0x138540u;
    {
        const bool branch_taken_0x138540 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x138544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138540u;
            // 0x138544: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138540) {
            ctx->pc = 0x1385A8u;
            goto label_1385a8;
        }
    }
    ctx->pc = 0x138548u;
label_138548:
    // 0x138548: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x138548u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13854c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13854cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138550: 0x70142ca9  por         $a1, $zero, $s4
    ctx->pc = 0x138550u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 20)));
    // 0x138554: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x138554u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138558: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x138558u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13855c: 0xc04e0ea  jal         func_1383A8
    ctx->pc = 0x13855Cu;
    SET_GPR_U32(ctx, 31, 0x138564u);
    ctx->pc = 0x138560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13855Cu;
            // 0x138560: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1383A8u;
    if (runtime->hasFunction(0x1383A8u)) {
        auto targetFn = runtime->lookupFunction(0x1383A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138564u; }
        if (ctx->pc != 0x138564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1383a8_0x1384e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138564u; }
        if (ctx->pc != 0x138564u) { return; }
    }
    ctx->pc = 0x138564u;
    // 0x138564: 0x262900b  movn        $s2, $s3, $v0
    ctx->pc = 0x138564u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 19));
    // 0x138568: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x138568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13856c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13856cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138570: 0x70142ca9  por         $a1, $zero, $s4
    ctx->pc = 0x138570u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 20)));
    // 0x138574: 0x26e7ffff  addiu       $a3, $s7, -0x1
    ctx->pc = 0x138574u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x138578: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x138578u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13857c: 0xc04e13a  jal         func_1384E8
    ctx->pc = 0x13857Cu;
    SET_GPR_U32(ctx, 31, 0x138584u);
    ctx->pc = 0x138580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13857Cu;
            // 0x138580: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1384E8u;
    runtime->cooperativeGuestYield();
    goto label_1384e8;
    ctx->pc = 0x138584u;
label_138584:
    // 0x138584: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x138584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x138588: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x138588u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x13858c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x13858cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x138590: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x138590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x138594: 0x22027  nor         $a0, $zero, $v0
    ctx->pc = 0x138594u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x138598: 0x84700006  lh          $s0, 0x6($v1)
    ctx->pc = 0x138598u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x13859c: 0x1605ffea  bne         $s0, $a1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x13859Cu;
    {
        const bool branch_taken_0x13859c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        ctx->pc = 0x1385A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13859Cu;
            // 0x1385a0: 0x44900b  movn        $s2, $v0, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13859c) {
            ctx->pc = 0x138548u;
            runtime->cooperativeGuestYield();
            goto label_138548;
        }
    }
    ctx->pc = 0x1385A4u;
label_1385a4:
    // 0x1385a4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1385a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1385a8:
    // 0x1385a8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1385a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1385ac: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1385acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1385b0: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1385b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1385b4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1385b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1385b8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1385b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1385bc: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1385bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1385c0: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x1385c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1385c4: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x1385c4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1385c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1385c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1385cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1385CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1385D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1385CCu;
            // 0x1385d0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1384E8u: goto label_1384e8;
            case 0x138548u: goto label_138548;
            case 0x138584u: goto label_138584;
            case 0x1385A4u: goto label_1385a4;
            case 0x1385A8u: goto label_1385a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1385D4u;
    // 0x1385d4: 0x0  nop
    ctx->pc = 0x1385d4u;
    // NOP
}
