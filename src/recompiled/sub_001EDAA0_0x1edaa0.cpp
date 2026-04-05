#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EDAA0
// Address: 0x1edaa0 - 0x1edb78
void sub_001EDAA0_0x1edaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EDAA0_0x1edaa0");
#endif

    ctx->pc = 0x1edaa0u;

    // 0x1edaa0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1edaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1edaa4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1edaa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1edaa8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1edaa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1edaac: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1edaacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1edab0: 0x3c12002b  lui         $s2, 0x2B
    ctx->pc = 0x1edab0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)43 << 16));
    // 0x1edab4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1edab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1edab8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1edab8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edabc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1edabcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1edac0: 0x265116b8  addiu       $s1, $s2, 0x16B8
    ctx->pc = 0x1edac0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 5816));
    // 0x1edac4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1edac4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edac8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1edac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1edacc: 0xc0a34bc  jal         func_28D2F0
    ctx->pc = 0x1EDACCu;
    SET_GPR_U32(ctx, 31, 0x1EDAD4u);
    ctx->pc = 0x1EDAD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDACCu;
            // 0x1edad0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D2F0u;
    if (runtime->hasFunction(0x28D2F0u)) {
        auto targetFn = runtime->lookupFunction(0x28D2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDAD4u; }
        if (ctx->pc != 0x1EDAD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D2F0_0x28d2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDAD4u; }
        if (ctx->pc != 0x1EDAD4u) { return; }
    }
    ctx->pc = 0x1EDAD4u;
    // 0x1edad4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EDAD4u;
    {
        const bool branch_taken_0x1edad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EDAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDAD4u;
            // 0x1edad8: 0x8e4416b8  lw          $a0, 0x16B8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5816)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edad4) {
            ctx->pc = 0x1EDAF8u;
            goto label_1edaf8;
        }
    }
    ctx->pc = 0x1EDADCu;
    // 0x1edadc: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x1edadcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x1edae0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1edae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edae4: 0x248474e8  addiu       $a0, $a0, 0x74E8
    ctx->pc = 0x1edae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29928));
    // 0x1edae8: 0xc0a274e  jal         func_289D38
    ctx->pc = 0x1EDAE8u;
    SET_GPR_U32(ctx, 31, 0x1EDAF0u);
    ctx->pc = 0x1EDAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDAE8u;
            // 0x1edaec: 0x2406001f  addiu       $a2, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289D38u;
    if (runtime->hasFunction(0x289D38u)) {
        auto targetFn = runtime->lookupFunction(0x289D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDAF0u; }
        if (ctx->pc != 0x1EDAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289d38_0x289f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDAF0u; }
        if (ctx->pc != 0x1EDAF0u) { return; }
    }
    ctx->pc = 0x1EDAF0u;
    // 0x1edaf0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1EDAF0u;
    {
        const bool branch_taken_0x1edaf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDAF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDAF0u;
            // 0x1edaf4: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edaf0) {
            ctx->pc = 0x1EDB20u;
            goto label_1edb20;
        }
    }
    ctx->pc = 0x1EDAF8u;
label_1edaf8:
    // 0x1edaf8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1edaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1edafc: 0x92250004  lbu         $a1, 0x4($s1)
    ctx->pc = 0x1edafcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1edb00: 0x244374e8  addiu       $v1, $v0, 0x74E8
    ctx->pc = 0x1edb00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 29928));
    // 0x1edb04: 0xac4474e8  sw          $a0, 0x74E8($v0)
    ctx->pc = 0x1edb04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29928), GPR_U32(ctx, 4));
    // 0x1edb08: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x1edb08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1edb0c: 0xa0650004  sb          $a1, 0x4($v1)
    ctx->pc = 0x1edb0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 5));
    // 0x1edb10: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x1edb10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1edb14: 0xc0a274e  jal         func_289D38
    ctx->pc = 0x1EDB14u;
    SET_GPR_U32(ctx, 31, 0x1EDB1Cu);
    ctx->pc = 0x1EDB18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDB14u;
            // 0x1edb18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289D38u;
    if (runtime->hasFunction(0x289D38u)) {
        auto targetFn = runtime->lookupFunction(0x289D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDB1Cu; }
        if (ctx->pc != 0x1EDB1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289d38_0x289f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDB1Cu; }
        if (ctx->pc != 0x1EDB1Cu) { return; }
    }
    ctx->pc = 0x1EDB1Cu;
    // 0x1edb1c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1edb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
label_1edb20:
    // 0x1edb20: 0x245074e8  addiu       $s0, $v0, 0x74E8
    ctx->pc = 0x1edb20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29928));
    // 0x1edb24: 0xa200001f  sb          $zero, 0x1F($s0)
    ctx->pc = 0x1edb24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 31), (uint8_t)GPR_U32(ctx, 0));
    // 0x1edb28: 0xc05e996  jal         func_17A658
    ctx->pc = 0x1EDB28u;
    SET_GPR_U32(ctx, 31, 0x1EDB30u);
    ctx->pc = 0x1EDB2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDB28u;
            // 0x1edb2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDB30u; }
        if (ctx->pc != 0x1EDB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDB30u; }
        if (ctx->pc != 0x1EDB30u) { return; }
    }
    ctx->pc = 0x1EDB30u;
    // 0x1edb30: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1EDB30u;
    {
        const bool branch_taken_0x1edb30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edb30) {
            ctx->pc = 0x1EDB34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDB30u;
            // 0x1edb34: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EDB60u;
            goto label_1edb60;
        }
    }
    ctx->pc = 0x1EDB38u;
    // 0x1edb38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1edb38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edb3c: 0xc07b688  jal         func_1EDA20
    ctx->pc = 0x1EDB3Cu;
    SET_GPR_U32(ctx, 31, 0x1EDB44u);
    ctx->pc = 0x1EDB40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDB3Cu;
            // 0x1edb40: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EDA20u;
    if (runtime->hasFunction(0x1EDA20u)) {
        auto targetFn = runtime->lookupFunction(0x1EDA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDB44u; }
        if (ctx->pc != 0x1EDB44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1eda20_0x1edaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDB44u; }
        if (ctx->pc != 0x1EDB44u) { return; }
    }
    ctx->pc = 0x1EDB44u;
    // 0x1edb44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1edb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1edb48: 0x16620005  bne         $s3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EDB48u;
    {
        const bool branch_taken_0x1edb48 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EDB4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDB48u;
            // 0x1edb4c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edb48) {
            ctx->pc = 0x1EDB60u;
            goto label_1edb60;
        }
    }
    ctx->pc = 0x1EDB50u;
    // 0x1edb50: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1edb50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1edb54: 0x8c42e2a4  lw          $v0, -0x1D5C($v0)
    ctx->pc = 0x1edb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959780)));
    // 0x1edb58: 0xac5307b0  sw          $s3, 0x7B0($v0)
    ctx->pc = 0x1edb58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1968), GPR_U32(ctx, 19));
    // 0x1edb5c: 0x0  nop
    ctx->pc = 0x1edb5cu;
    // NOP
label_1edb60:
    // 0x1edb60: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1edb60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1edb64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1edb64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1edb68: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1edb68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1edb6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1edb6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1edb70: 0x3e00008  jr          $ra
    ctx->pc = 0x1EDB70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDB74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDB70u;
            // 0x1edb74: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EDAF8u: goto label_1edaf8;
            case 0x1EDB20u: goto label_1edb20;
            case 0x1EDB60u: goto label_1edb60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EDB78u;
}
