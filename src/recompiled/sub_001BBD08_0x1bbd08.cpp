#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BBD08
// Address: 0x1bbd08 - 0x1bbdb8
void sub_001BBD08_0x1bbd08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BBD08_0x1bbd08");
#endif

    ctx->pc = 0x1bbd08u;

    // 0x1bbd08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1bbd08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1bbd0c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bbd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bbd10: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1bbd10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1bbd14: 0x8c425280  lw          $v0, 0x5280($v0)
    ctx->pc = 0x1bbd14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21120)));
    // 0x1bbd18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bbd18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbd1c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1bbd1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1bbd20: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1bbd20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1bbd24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bbd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bbd28: 0x8c45005c  lw          $a1, 0x5C($v0)
    ctx->pc = 0x1bbd28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1bbd2c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x1bbd2cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bbd30: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1bbd30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1bbd34: 0x2472e848  addiu       $s2, $v1, -0x17B8
    ctx->pc = 0x1bbd34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961224));
    // 0x1bbd38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bbd38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bbd3c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1bbd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1bbd40: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x1bbd40u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x1bbd44: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1bbd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bbd48: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1bbd48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1bbd4c: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x1bbd4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x1bbd50: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x1bbd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x1bbd54: 0x40f809  jalr        $v0
    ctx->pc = 0x1BBD54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BBD5Cu);
        ctx->pc = 0x1BBD58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBD54u;
            // 0x1bbd58: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BBD5Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BBD88u: goto label_1bbd88;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BBD5Cu; }
            if (ctx->pc != 0x1BBD5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1BBD5Cu;
    // 0x1bbd5c: 0xc06de32  jal         func_1B78C8
    ctx->pc = 0x1BBD5Cu;
    SET_GPR_U32(ctx, 31, 0x1BBD64u);
    ctx->pc = 0x1BBD60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBD5Cu;
            // 0x1bbd60: 0x8e24cb94  lw          $a0, -0x346C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953876)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B78C8u;
    if (runtime->hasFunction(0x1B78C8u)) {
        auto targetFn = runtime->lookupFunction(0x1B78C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBD64u; }
        if (ctx->pc != 0x1BBD64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1b78c8_0x1b79e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBD64u; }
        if (ctx->pc != 0x1BBD64u) { return; }
    }
    ctx->pc = 0x1BBD64u;
    // 0x1bbd64: 0xc06ef94  jal         func_1BBE50
    ctx->pc = 0x1BBD64u;
    SET_GPR_U32(ctx, 31, 0x1BBD6Cu);
    ctx->pc = 0x1BBE50u;
    if (runtime->hasFunction(0x1BBE50u)) {
        auto targetFn = runtime->lookupFunction(0x1BBE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBD6Cu; }
        if (ctx->pc != 0x1BBD6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBE50_0x1bbe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBD6Cu; }
        if (ctx->pc != 0x1BBD6Cu) { return; }
    }
    ctx->pc = 0x1BBD6Cu;
    // 0x1bbd6c: 0xc06ef8a  jal         func_1BBE28
    ctx->pc = 0x1BBD6Cu;
    SET_GPR_U32(ctx, 31, 0x1BBD74u);
    ctx->pc = 0x1BBE28u;
    if (runtime->hasFunction(0x1BBE28u)) {
        auto targetFn = runtime->lookupFunction(0x1BBE28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBD74u; }
        if (ctx->pc != 0x1BBD74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBE28_0x1bbe28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBD74u; }
        if (ctx->pc != 0x1BBD74u) { return; }
    }
    ctx->pc = 0x1BBD74u;
    // 0x1bbd74: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BBD74u;
    {
        const bool branch_taken_0x1bbd74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBD78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBD74u;
            // 0x1bbd78: 0x3c05002b  lui         $a1, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbd74) {
            ctx->pc = 0x1BBD88u;
            goto label_1bbd88;
        }
    }
    ctx->pc = 0x1BBD7Cu;
    // 0x1bbd7c: 0x8e24cb94  lw          $a0, -0x346C($s1)
    ctx->pc = 0x1bbd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953876)));
    // 0x1bbd80: 0xc06defc  jal         func_1B7BF0
    ctx->pc = 0x1BBD80u;
    SET_GPR_U32(ctx, 31, 0x1BBD88u);
    ctx->pc = 0x1BBD84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBD80u;
            // 0x1bbd84: 0x24a55a18  addiu       $a1, $a1, 0x5A18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7BF0u;
    if (runtime->hasFunction(0x1B7BF0u)) {
        auto targetFn = runtime->lookupFunction(0x1B7BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBD88u; }
        if (ctx->pc != 0x1BBD88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7BF0_0x1b7bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBD88u; }
        if (ctx->pc != 0x1BBD88u) { return; }
    }
    ctx->pc = 0x1BBD88u;
label_1bbd88:
    // 0x1bbd88: 0x8e43006c  lw          $v1, 0x6C($s2)
    ctx->pc = 0x1bbd88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
    // 0x1bbd8c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1bbd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1bbd90: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x1bbd90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1bbd94: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x1bbd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x1bbd98: 0x40f809  jalr        $v0
    ctx->pc = 0x1BBD98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BBDA0u);
        ctx->pc = 0x1BBD9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBD98u;
            // 0x1bbd9c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BBDA0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BBD88u: goto label_1bbd88;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BBDA0u; }
            if (ctx->pc != 0x1BBDA0u) { return; }
        }
        }
    }
    ctx->pc = 0x1BBDA0u;
    // 0x1bbda0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1bbda0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bbda4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1bbda4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bbda8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1bbda8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bbdac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bbdacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbdb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBDB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBDB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBDB0u;
            // 0x1bbdb4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BBD88u: goto label_1bbd88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BBDB8u;
}
