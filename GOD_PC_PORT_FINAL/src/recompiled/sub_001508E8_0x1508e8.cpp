#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001508E8
// Address: 0x1508e8 - 0x1509a8
void sub_001508E8_0x1508e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001508E8_0x1508e8");
#endif

    ctx->pc = 0x1508e8u;

    // 0x1508e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1508e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1508ec: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1508ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1508f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1508f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1508f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1508f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1508f8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1508f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1508fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1508fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x150900: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x150900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x150904: 0x4400022  bltz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x150904u;
    {
        const bool branch_taken_0x150904 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x150908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150904u;
            // 0x150908: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150904) {
            ctx->pc = 0x150990u;
            goto label_150990;
        }
    }
    ctx->pc = 0x15090Cu;
    // 0x15090c: 0x26300008  addiu       $s0, $s1, 0x8
    ctx->pc = 0x15090cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x150910: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x150910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x150914: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x150914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x150918: 0x8c46e868  lw          $a2, -0x1798($v0)
    ctx->pc = 0x150918u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961256)));
    // 0x15091c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x15091cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x150920: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x150920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x150924: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x150924u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x150928: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x150928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x15092c: 0x40f809  jalr        $v0
    ctx->pc = 0x15092Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x150934u);
        ctx->pc = 0x150930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15092Cu;
            // 0x150930: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x150934u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x150990u: goto label_150990;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x150934u; }
            if (ctx->pc != 0x150934u) { return; }
        }
        }
    }
    ctx->pc = 0x150934u;
    // 0x150934: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x150934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x150938: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x150938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15093c: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x15093cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x150940: 0xc08c85c  jal         func_232170
    ctx->pc = 0x150940u;
    SET_GPR_U32(ctx, 31, 0x150948u);
    ctx->pc = 0x150944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150940u;
            // 0x150944: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232170u;
    if (runtime->hasFunction(0x232170u)) {
        auto targetFn = runtime->lookupFunction(0x232170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150948u; }
        if (ctx->pc != 0x150948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00232170_0x232170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150948u; }
        if (ctx->pc != 0x150948u) { return; }
    }
    ctx->pc = 0x150948u;
    // 0x150948: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x150948u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x15094c: 0x2445000c  addiu       $a1, $v0, 0xC
    ctx->pc = 0x15094cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x150950: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x150950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x150954: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x150954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x150958: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x150958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x15095c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x15095cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x150960: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x150960u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x150964: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x150964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x150968: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x150968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15096c: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x15096cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x150970: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x150970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150974: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x150974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x150978: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x150978u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x15097c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x15097cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x150980: 0xc054168  jal         func_1505A0
    ctx->pc = 0x150980u;
    SET_GPR_U32(ctx, 31, 0x150988u);
    ctx->pc = 0x150984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150980u;
            // 0x150984: 0xae4300d0  sw          $v1, 0xD0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1505A0u;
    if (runtime->hasFunction(0x1505A0u)) {
        auto targetFn = runtime->lookupFunction(0x1505A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150988u; }
        if (ctx->pc != 0x150988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1505a0_0x150698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150988u; }
        if (ctx->pc != 0x150988u) { return; }
    }
    ctx->pc = 0x150988u;
    // 0x150988: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x150988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15098c: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x15098cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_150990:
    // 0x150990: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x150990u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x150994: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x150994u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x150998: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x150998u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15099c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15099cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1509a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1509A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1509A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1509A0u;
            // 0x1509a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x150990u: goto label_150990;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1509A8u;
}
