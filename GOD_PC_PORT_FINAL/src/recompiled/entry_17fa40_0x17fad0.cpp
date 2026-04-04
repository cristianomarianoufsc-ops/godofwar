#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_17fa40
// Address: 0x17fa40 - 0x17fad0
void entry_17fa40_0x17fad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_17fa40_0x17fad0");
#endif

    ctx->pc = 0x17fa40u;

    // 0x17fa40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17fa40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17fa44: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x17fa44u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x17fa48: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x17fa48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x17fa4c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17fa4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x17fa50: 0x58403  sra         $s0, $a1, 16
    ctx->pc = 0x17fa50u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 5), 16));
    // 0x17fa54: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x17fa54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x17fa58: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17fa58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fa5c: 0x6000015  bltz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x17FA5Cu;
    {
        const bool branch_taken_0x17fa5c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x17FA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FA5Cu;
            // 0x17fa60: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fa5c) {
            ctx->pc = 0x17FAB4u;
            goto label_17fab4;
        }
    }
    ctx->pc = 0x17FA64u;
    // 0x17fa64: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x17fa64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x17fa68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17fa68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fa6c: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x17fa6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x17fa70: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x17fa70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x17fa74: 0x40f809  jalr        $v0
    ctx->pc = 0x17FA74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17FA7Cu);
        ctx->pc = 0x17FA78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FA74u;
            // 0x17fa78: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17FA7Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17FAB4u: goto label_17fab4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17FA7Cu; }
            if (ctx->pc != 0x17FA7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x17FA7Cu;
    // 0x17fa7c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x17fa7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fa80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17fa80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fa84: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x17fa84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x17fa88: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x17fa88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x17fa8c: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x17fa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x17fa90: 0x40f809  jalr        $v0
    ctx->pc = 0x17FA90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17FA98u);
        ctx->pc = 0x17FA94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FA90u;
            // 0x17fa94: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17FA98u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17FAB4u: goto label_17fab4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17FA98u; }
            if (ctx->pc != 0x17FA98u) { return; }
        }
        }
    }
    ctx->pc = 0x17FA98u;
    // 0x17fa98: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x17FA98u;
    {
        const bool branch_taken_0x17fa98 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FA9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FA98u;
            // 0x17fa9c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fa98) {
            ctx->pc = 0x17FAB4u;
            goto label_17fab4;
        }
    }
    ctx->pc = 0x17FAA0u;
    // 0x17faa0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x17faa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x17faa4: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x17faa4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x17faa8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x17faa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x17faac: 0x40f809  jalr        $v0
    ctx->pc = 0x17FAACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17FAB4u);
        ctx->pc = 0x17FAB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FAACu;
            // 0x17fab0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17FAB4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17FAB4u: goto label_17fab4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17FAB4u; }
            if (ctx->pc != 0x17FAB4u) { return; }
        }
        }
    }
    ctx->pc = 0x17FAB4u;
label_17fab4:
    // 0x17fab4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x17fab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17fab8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17fab8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17fabc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x17fabcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17fac0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17fac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fac4: 0x3e00008  jr          $ra
    ctx->pc = 0x17FAC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FAC4u;
            // 0x17fac8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17FAB4u: goto label_17fab4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17FACCu;
    // 0x17facc: 0x0  nop
    ctx->pc = 0x17faccu;
    // NOP
}
