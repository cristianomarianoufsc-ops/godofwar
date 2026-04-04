#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FEE90
// Address: 0x1fee90 - 0x1fefe0
void sub_001FEE90_0x1fee90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FEE90_0x1fee90");
#endif

    ctx->pc = 0x1fee90u;

    // 0x1fee90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1fee90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1fee94: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fee94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fee98: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1fee98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1fee9c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1fee9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1feea0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1feea0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1feea4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1feea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1feea8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1feea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1feeac: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1feeacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1feeb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1feeb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1feeb4: 0x248479c0  addiu       $a0, $a0, 0x79C0
    ctx->pc = 0x1feeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31168));
    // 0x1feeb8: 0xc05e996  jal         func_17A658
    ctx->pc = 0x1FEEB8u;
    SET_GPR_U32(ctx, 31, 0x1FEEC0u);
    ctx->pc = 0x1FEEBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEEB8u;
            // 0x1feebc: 0xae530008  sw          $s3, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEEC0u; }
        if (ctx->pc != 0x1FEEC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEEC0u; }
        if (ctx->pc != 0x1FEEC0u) { return; }
    }
    ctx->pc = 0x1FEEC0u;
    // 0x1feec0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1feec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1feec4: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1FEEC4u;
    {
        const bool branch_taken_0x1feec4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEEC4u;
            // 0x1feec8: 0x3c110033  lui         $s1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feec4) {
            ctx->pc = 0x1FEF28u;
            goto label_1fef28;
        }
    }
    ctx->pc = 0x1FEECCu;
    // 0x1feecc: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x1feeccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1feed0: 0x2631e848  addiu       $s1, $s1, -0x17B8
    ctx->pc = 0x1feed0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961224));
    // 0x1feed4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1feed4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1feed8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1feed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1feedc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1feedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1feee0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1feee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1feee4: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x1feee4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1feee8: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x1feee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1feeec: 0x40f809  jalr        $v0
    ctx->pc = 0x1FEEECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FEEF4u);
        ctx->pc = 0x1FEEF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEEECu;
            // 0x1feef0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FEEF4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FEF28u: goto label_1fef28;
            case 0x1FEF30u: goto label_1fef30;
            case 0x1FEF88u: goto label_1fef88;
            case 0x1FEF8Cu: goto label_1fef8c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FEEF4u; }
            if (ctx->pc != 0x1FEEF4u) { return; }
        }
        }
    }
    ctx->pc = 0x1FEEF4u;
    // 0x1feef4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1feef4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1feef8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x1feef8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1feefc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1feefcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fef00: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1fef00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1fef04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fef04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fef08: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1fef08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fef0c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1fef0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1fef10: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1fef10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1fef14: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1fef14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1fef18: 0x40f809  jalr        $v0
    ctx->pc = 0x1FEF18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FEF20u);
        ctx->pc = 0x1FEF1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEF18u;
            // 0x1fef1c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FEF20u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FEF28u: goto label_1fef28;
            case 0x1FEF30u: goto label_1fef30;
            case 0x1FEF88u: goto label_1fef88;
            case 0x1FEF8Cu: goto label_1fef8c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FEF20u; }
            if (ctx->pc != 0x1FEF20u) { return; }
        }
        }
    }
    ctx->pc = 0x1FEF20u;
    // 0x1fef20: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FEF20u;
    {
        const bool branch_taken_0x1fef20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEF20u;
            // 0x1fef24: 0xae500000  sw          $s0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fef20) {
            ctx->pc = 0x1FEF30u;
            goto label_1fef30;
        }
    }
    ctx->pc = 0x1FEF28u;
label_1fef28:
    // 0x1fef28: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1fef28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fef2c: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x1fef2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
label_1fef30:
    // 0x1fef30: 0x4be1033c  vmove.xyzw  $vf1, $vf0
    ctx->pc = 0x1fef30u;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x1fef34: 0xfa010050  sqc2        $vf1, 0x50($s0)
    ctx->pc = 0x1fef34u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fef38: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1fef38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x1fef3c: 0xdc82bdf8  ld          $v0, -0x4208($a0)
    ctx->pc = 0x1fef3cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 4294950392)));
    // 0x1fef40: 0x86030060  lh          $v1, 0x60($s0)
    ctx->pc = 0x1fef40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1fef44: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x1fef44u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x1fef48: 0xfc82bdf8  sd          $v0, -0x4208($a0)
    ctx->pc = 0x1fef48u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4294950392), GPR_U64(ctx, 2));
    // 0x1fef4c: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x1fef4cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x1fef50: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x1fef50u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1fef54: 0xfe020068  sd          $v0, 0x68($s0)
    ctx->pc = 0x1fef54u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 104), GPR_U64(ctx, 2));
    // 0x1fef58: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1fef58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1fef5c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1fef5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1fef60: 0x8c42eca4  lw          $v0, -0x135C($v0)
    ctx->pc = 0x1fef60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962340)));
    // 0x1fef64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fef64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fef68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fef68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fef6c: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x1fef6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1fef70: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FEF70u;
    {
        const bool branch_taken_0x1fef70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEF70u;
            // 0x1fef74: 0x2462ffec  addiu       $v0, $v1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fef70) {
            ctx->pc = 0x1FEF88u;
            goto label_1fef88;
        }
    }
    ctx->pc = 0x1FEF78u;
    // 0x1fef78: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x1fef78u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1fef7c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FEF7Cu;
    {
        const bool branch_taken_0x1fef7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEF80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEF7Cu;
            // 0x1fef80: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fef7c) {
            ctx->pc = 0x1FEF8Cu;
            goto label_1fef8c;
        }
    }
    ctx->pc = 0x1FEF84u;
    // 0x1fef84: 0x0  nop
    ctx->pc = 0x1fef84u;
    // NOP
label_1fef88:
    // 0x1fef88: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1fef88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fef8c:
    // 0x1fef8c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1fef8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1fef90: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1fef90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1fef94: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x1fef94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x1fef98: 0x24847818  addiu       $a0, $a0, 0x7818
    ctx->pc = 0x1fef98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30744));
    // 0x1fef9c: 0x8c500104  lw          $s0, 0x104($v0)
    ctx->pc = 0x1fef9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x1fefa0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fefa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fefa4: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x1FEFA4u;
    SET_GPR_U32(ctx, 31, 0x1FEFACu);
    ctx->pc = 0x1FEFA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEFA4u;
            // 0x1fefa8: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEFACu; }
        if (ctx->pc != 0x1FEFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEFACu; }
        if (ctx->pc != 0x1FEFACu) { return; }
    }
    ctx->pc = 0x1FEFACu;
    // 0x1fefac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fefacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fefb0: 0xc04e0d8  jal         func_138360
    ctx->pc = 0x1FEFB0u;
    SET_GPR_U32(ctx, 31, 0x1FEFB8u);
    ctx->pc = 0x1FEFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEFB0u;
            // 0x1fefb4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138360u;
    if (runtime->hasFunction(0x138360u)) {
        auto targetFn = runtime->lookupFunction(0x138360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEFB8u; }
        if (ctx->pc != 0x1FEFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_138360_0x1383a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEFB8u; }
        if (ctx->pc != 0x1FEFB8u) { return; }
    }
    ctx->pc = 0x1FEFB8u;
    // 0x1fefb8: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x1fefb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x1fefbc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1fefbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fefc0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1fefc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fefc4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1fefc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fefc8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fefc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fefcc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1fefccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fefd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fefd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fefd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEFD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEFD4u;
            // 0x1fefd8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FEF28u: goto label_1fef28;
            case 0x1FEF30u: goto label_1fef30;
            case 0x1FEF88u: goto label_1fef88;
            case 0x1FEF8Cu: goto label_1fef8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FEFDCu;
    // 0x1fefdc: 0x0  nop
    ctx->pc = 0x1fefdcu;
    // NOP
}
