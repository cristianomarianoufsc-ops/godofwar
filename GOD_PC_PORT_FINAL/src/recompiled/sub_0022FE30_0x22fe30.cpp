#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022FE30
// Address: 0x22fe30 - 0x2308d8
void sub_0022FE30_0x22fe30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022FE30_0x22fe30");
#endif

    ctx->pc = 0x22fe30u;

    // 0x22fe30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22fe30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22fe34: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x22fe34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x22fe38: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x22fe38u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x22fe3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22fe3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22fe40: 0x8e2312b0  lw          $v1, 0x12B0($s1)
    ctx->pc = 0x22fe40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4784)));
    // 0x22fe44: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x22fe44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fe48: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x22fe48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x22fe4c: 0x2c620020  sltiu       $v0, $v1, 0x20
    ctx->pc = 0x22fe4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x22fe50: 0x10400279  beqz        $v0, . + 4 + (0x279 << 2)
    ctx->pc = 0x22FE50u;
    {
        const bool branch_taken_0x22fe50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FE50u;
            // 0x22fe54: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fe50) {
            ctx->pc = 0x230838u;
            goto label_230838;
        }
    }
    ctx->pc = 0x22FE58u;
    // 0x22fe58: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x22fe58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x22fe5c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22fe5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22fe60: 0x24428550  addiu       $v0, $v0, -0x7AB0
    ctx->pc = 0x22fe60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935888));
    // 0x22fe64: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22fe64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22fe68: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x22fe68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22fe6c: 0x400008  jr          $v0
    ctx->pc = 0x22FE6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22FE74u: goto label_22fe74;
            case 0x22FE98u: goto label_22fe98;
            case 0x22FF20u: goto label_22ff20;
            case 0x22FF68u: goto label_22ff68;
            case 0x22FFE4u: goto label_22ffe4;
            case 0x230008u: goto label_230008;
            case 0x230050u: goto label_230050;
            case 0x2300ACu: goto label_2300ac;
            case 0x2300E0u: goto label_2300e0;
            case 0x230138u: goto label_230138;
            case 0x230190u: goto label_230190;
            case 0x2301B0u: goto label_2301b0;
            case 0x2301D0u: goto label_2301d0;
            case 0x230220u: goto label_230220;
            case 0x2302A4u: goto label_2302a4;
            case 0x2302C8u: goto label_2302c8;
            case 0x230338u: goto label_230338;
            case 0x230394u: goto label_230394;
            case 0x230428u: goto label_230428;
            case 0x2304C4u: goto label_2304c4;
            case 0x2304E0u: goto label_2304e0;
            case 0x230530u: goto label_230530;
            case 0x2305A4u: goto label_2305a4;
            case 0x2305E8u: goto label_2305e8;
            case 0x230674u: goto label_230674;
            case 0x2306FCu: goto label_2306fc;
            case 0x230748u: goto label_230748;
            case 0x23075Cu: goto label_23075c;
            case 0x2307A8u: goto label_2307a8;
            case 0x2307E4u: goto label_2307e4;
            case 0x230820u: goto label_230820;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22FE74u;
label_22fe74:
    // 0x22fe74: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x22fe74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x22fe78: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x22fe78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22fe7c: 0xac6212a4  sw          $v0, 0x12A4($v1)
    ctx->pc = 0x22fe7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4772), GPR_U32(ctx, 2));
    // 0x22fe80: 0xc08b852  jal         func_22E148
    ctx->pc = 0x22FE80u;
    SET_GPR_U32(ctx, 31, 0x22FE88u);
    ctx->pc = 0x22FE84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22FE80u;
            // 0x22fe84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E148u;
    if (runtime->hasFunction(0x22E148u)) {
        auto targetFn = runtime->lookupFunction(0x22E148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FE88u; }
        if (ctx->pc != 0x22FE88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022E148_0x22e148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FE88u; }
        if (ctx->pc != 0x22FE88u) { return; }
    }
    ctx->pc = 0x22FE88u;
    // 0x22fe88: 0x1040026b  beqz        $v0, . + 4 + (0x26B << 2)
    ctx->pc = 0x22FE88u;
    {
        const bool branch_taken_0x22fe88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FE8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FE88u;
            // 0x22fe8c: 0x8e2212b0  lw          $v0, 0x12B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4784)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fe88) {
            ctx->pc = 0x230838u;
            goto label_230838;
        }
    }
    ctx->pc = 0x22FE90u;
    // 0x22fe90: 0x10000252  b           . + 4 + (0x252 << 2)
    ctx->pc = 0x22FE90u;
    {
        const bool branch_taken_0x22fe90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FE90u;
            // 0x22fe94: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fe90) {
            ctx->pc = 0x2307DCu;
            goto label_2307dc;
        }
    }
    ctx->pc = 0x22FE98u;
label_22fe98:
    // 0x22fe98: 0xc08b852  jal         func_22E148
    ctx->pc = 0x22FE98u;
    SET_GPR_U32(ctx, 31, 0x22FEA0u);
    ctx->pc = 0x22FE9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22FE98u;
            // 0x22fe9c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E148u;
    if (runtime->hasFunction(0x22E148u)) {
        auto targetFn = runtime->lookupFunction(0x22E148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FEA0u; }
        if (ctx->pc != 0x22FEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022E148_0x22e148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FEA0u; }
        if (ctx->pc != 0x22FEA0u) { return; }
    }
    ctx->pc = 0x22FEA0u;
    // 0x22fea0: 0x10400265  beqz        $v0, . + 4 + (0x265 << 2)
    ctx->pc = 0x22FEA0u;
    {
        const bool branch_taken_0x22fea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FEA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FEA0u;
            // 0x22fea4: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fea0) {
            ctx->pc = 0x230838u;
            goto label_230838;
        }
    }
    ctx->pc = 0x22FEA8u;
    // 0x22fea8: 0x2443bc70  addiu       $v1, $v0, -0x4390
    ctx->pc = 0x22fea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950000));
    // 0x22feac: 0x8c42bc70  lw          $v0, -0x4390($v0)
    ctx->pc = 0x22feacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950000)));
    // 0x22feb0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x22FEB0u;
    {
        const bool branch_taken_0x22feb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FEB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FEB0u;
            // 0x22feb4: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22feb0) {
            ctx->pc = 0x22FEF0u;
            goto label_22fef0;
        }
    }
    ctx->pc = 0x22FEB8u;
    // 0x22feb8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22FEB8u;
    {
        const bool branch_taken_0x22feb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FEB8u;
            // 0x22febc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22feb8) {
            ctx->pc = 0x22FEC8u;
            goto label_22fec8;
        }
    }
    ctx->pc = 0x22FEC0u;
    // 0x22fec0: 0x1000025d  b           . + 4 + (0x25D << 2)
    ctx->pc = 0x22FEC0u;
    {
        const bool branch_taken_0x22fec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FEC0u;
            // 0x22fec4: 0xae2212b0  sw          $v0, 0x12B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4784), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fec0) {
            ctx->pc = 0x230838u;
            goto label_230838;
        }
    }
    ctx->pc = 0x22FEC8u;
label_22fec8:
    // 0x22fec8: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x22fec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x22fecc: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x22feccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x22fed0: 0x8c42bc68  lw          $v0, -0x4398($v0)
    ctx->pc = 0x22fed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949992)));
    // 0x22fed4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22fed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x22fed8: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x22fed8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x22fedc: 0x3842002f  xori        $v0, $v0, 0x2F
    ctx->pc = 0x22fedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)47);
    // 0x22fee0: 0xac8012a4  sw          $zero, 0x12A4($a0)
    ctx->pc = 0x22fee0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4772), GPR_U32(ctx, 0));
    // 0x22fee4: 0xa2180a  movz        $v1, $a1, $v0
    ctx->pc = 0x22fee4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x22fee8: 0x10000253  b           . + 4 + (0x253 << 2)
    ctx->pc = 0x22FEE8u;
    {
        const bool branch_taken_0x22fee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FEECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FEE8u;
            // 0x22feec: 0xae2312b0  sw          $v1, 0x12B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4784), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fee8) {
            ctx->pc = 0x230838u;
            goto label_230838;
        }
    }
    ctx->pc = 0x22FEF0u;
label_22fef0:
    // 0x22fef0: 0x10400248  beqz        $v0, . + 4 + (0x248 << 2)
    ctx->pc = 0x22FEF0u;
    {
        const bool branch_taken_0x22fef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FEF0u;
            // 0x22fef4: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fef0) {
            ctx->pc = 0x230814u;
            goto label_230814;
        }
    }
    ctx->pc = 0x22FEF8u;
    // 0x22fef8: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x22fef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x22fefc: 0x8c42bc6c  lw          $v0, -0x4394($v0)
    ctx->pc = 0x22fefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949996)));
    // 0x22ff00: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x22ff00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x22ff04: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x22ff04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x22ff08: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22ff08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22ff0c: 0x3842002f  xori        $v0, $v0, 0x2F
    ctx->pc = 0x22ff0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)47);
    // 0x22ff10: 0xaca412a4  sw          $a0, 0x12A4($a1)
    ctx->pc = 0x22ff10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4772), GPR_U32(ctx, 4));
    // 0x22ff14: 0xc2180a  movz        $v1, $a2, $v0
    ctx->pc = 0x22ff14u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x22ff18: 0x10000247  b           . + 4 + (0x247 << 2)
    ctx->pc = 0x22FF18u;
    {
        const bool branch_taken_0x22ff18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FF1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FF18u;
            // 0x22ff1c: 0xae2312b0  sw          $v1, 0x12B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4784), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ff18) {
            ctx->pc = 0x230838u;
            goto label_230838;
        }
    }
    ctx->pc = 0x22FF20u;
label_22ff20:
    // 0x22ff20: 0xc08bf72  jal         func_22FDC8
    ctx->pc = 0x22FF20u;
    SET_GPR_U32(ctx, 31, 0x22FF28u);
    ctx->pc = 0x22FDC8u;
    if (runtime->hasFunction(0x22FDC8u)) {
        auto targetFn = runtime->lookupFunction(0x22FDC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FF28u; }
        if (ctx->pc != 0x22FF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_22fdc8_0x22fde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FF28u; }
        if (ctx->pc != 0x22FF28u) { return; }
    }
    ctx->pc = 0x22FF28u;
    // 0x22ff28: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x22ff28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x22ff2c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x22ff2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22ff30: 0xac621290  sw          $v0, 0x1290($v1)
    ctx->pc = 0x22ff30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4752), GPR_U32(ctx, 2));
    // 0x22ff34: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22ff34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22ff38: 0x8c44cb94  lw          $a0, -0x346C($v0)
    ctx->pc = 0x22ff38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x22ff3c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22ff3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22ff40: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x22FF40u;
    SET_GPR_U32(ctx, 31, 0x22FF48u);
    ctx->pc = 0x22FF44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22FF40u;
            // 0x22ff44: 0xac820274  sw          $v0, 0x274($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 628), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FF48u; }
        if (ctx->pc != 0x22FF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FF48u; }
        if (ctx->pc != 0x22FF48u) { return; }
    }
    ctx->pc = 0x22FF48u;
    // 0x22ff48: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22ff48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22ff4c: 0x8c4212ac  lw          $v0, 0x12AC($v0)
    ctx->pc = 0x22ff4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4780)));
    // 0x22ff50: 0x14400221  bnez        $v0, . + 4 + (0x221 << 2)
    ctx->pc = 0x22FF50u;
    {
        const bool branch_taken_0x22ff50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22FF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FF50u;
            // 0x22ff54: 0x8e2212b0  lw          $v0, 0x12B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4784)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ff50) {
            ctx->pc = 0x2307D8u;
            goto label_2307d8;
        }
    }
    ctx->pc = 0x22FF58u;
    // 0x22ff58: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22ff58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22ff5c: 0x1000021d  b           . + 4 + (0x21D << 2)
    ctx->pc = 0x22FF5Cu;
    {
        const bool branch_taken_0x22ff5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FF60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FF5Cu;
            // 0x22ff60: 0xac4012a4  sw          $zero, 0x12A4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4772), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ff5c) {
            ctx->pc = 0x2307D4u;
            goto label_2307d4;
        }
    }
    ctx->pc = 0x22FF64u;
    // 0x22ff64: 0x0  nop
    ctx->pc = 0x22ff64u;
    // NOP
label_22ff68:
    // 0x22ff68: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x22ff68u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x22ff6c: 0xc08b852  jal         func_22E148
    ctx->pc = 0x22FF6Cu;
    SET_GPR_U32(ctx, 31, 0x22FF74u);
    ctx->pc = 0x22FF70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22FF6Cu;
            // 0x22ff70: 0x8e0412a4  lw          $a0, 0x12A4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4772)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E148u;
    if (runtime->hasFunction(0x22E148u)) {
        auto targetFn = runtime->lookupFunction(0x22E148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FF74u; }
        if (ctx->pc != 0x22FF74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022E148_0x22e148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FF74u; }
        if (ctx->pc != 0x22FF74u) { return; }
    }
    ctx->pc = 0x22FF74u;
    // 0x22ff74: 0x10400230  beqz        $v0, . + 4 + (0x230 << 2)
    ctx->pc = 0x22FF74u;
    {
        const bool branch_taken_0x22ff74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FF78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FF74u;
            // 0x22ff78: 0x8e0412a4  lw          $a0, 0x12A4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ff74) {
            ctx->pc = 0x230838u;
            goto label_230838;
        }
    }
    ctx->pc = 0x22FF7Cu;
    // 0x22ff7c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x22ff7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x22ff80: 0x2442bc70  addiu       $v0, $v0, -0x4390
    ctx->pc = 0x22ff80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950000));
    // 0x22ff84: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x22ff84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x22ff88: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x22ff88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22ff8c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22ff8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22ff90: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x22FF90u;
    {
        const bool branch_taken_0x22ff90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FF90u;
            // 0x22ff94: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ff90) {
            ctx->pc = 0x22FFBCu;
            goto label_22ffbc;
        }
    }
    ctx->pc = 0x22FF98u;
    // 0x22ff98: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x22ff98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x22ff9c: 0x2442bc68  addiu       $v0, $v0, -0x4398
    ctx->pc = 0x22ff9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949992));
    // 0x22ffa0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x22ffa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x22ffa4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x22ffa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22ffa8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22ffa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22ffac: 0x3842002f  xori        $v0, $v0, 0x2F
    ctx->pc = 0x22ffacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)47);
    // 0x22ffb0: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x22ffb0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x22ffb4: 0x10000220  b           . + 4 + (0x220 << 2)
    ctx->pc = 0x22FFB4u;
    {
        const bool branch_taken_0x22ffb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FFB4u;
            // 0x22ffb8: 0xae2312b0  sw          $v1, 0x12B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4784), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ffb4) {
            ctx->pc = 0x230838u;
            goto label_230838;
        }
    }
    ctx->pc = 0x22FFBCu;
label_22ffbc:
    // 0x22ffbc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22ffbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22ffc0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22ffc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22ffc4: 0x8c421290  lw          $v0, 0x1290($v0)
    ctx->pc = 0x22ffc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4752)));
    // 0x22ffc8: 0x10430126  beq         $v0, $v1, . + 4 + (0x126 << 2)
    ctx->pc = 0x22FFC8u;
    {
        const bool branch_taken_0x22ffc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x22FFCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FFC8u;
            // 0x22ffcc: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ffc8) {
            ctx->pc = 0x230464u;
            goto label_230464;
        }
    }
    ctx->pc = 0x22FFD0u;
    // 0x22ffd0: 0x8c4212ac  lw          $v0, 0x12AC($v0)
    ctx->pc = 0x22ffd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4780)));
    // 0x22ffd4: 0x14400218  bnez        $v0, . + 4 + (0x218 << 2)
    ctx->pc = 0x22FFD4u;
    {
        const bool branch_taken_0x22ffd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22FFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FFD4u;
            // 0x22ffd8: 0x641023  subu        $v0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ffd4) {
            ctx->pc = 0x230838u;
            goto label_230838;
        }
    }
    ctx->pc = 0x22FFDCu;
    // 0x22ffdc: 0x10000216  b           . + 4 + (0x216 << 2)
    ctx->pc = 0x22FFDCu;
    {
        const bool branch_taken_0x22ffdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FFE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FFDCu;
            // 0x22ffe0: 0xae0212a4  sw          $v0, 0x12A4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4772), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ffdc) {
            ctx->pc = 0x230838u;
            goto label_230838;
        }
    }
    ctx->pc = 0x22FFE4u;
label_22ffe4:
    // 0x22ffe4: 0xc08bf72  jal         func_22FDC8
    ctx->pc = 0x22FFE4u;
    SET_GPR_U32(ctx, 31, 0x22FFECu);
    ctx->pc = 0x22FDC8u;
    if (runtime->hasFunction(0x22FDC8u)) {
        auto targetFn = runtime->lookupFunction(0x22FDC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FFECu; }
        if (ctx->pc != 0x22FFECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_22fdc8_0x22fde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FFECu; }
        if (ctx->pc != 0x22FFECu) { return; }
    }
    ctx->pc = 0x22FFECu;
    // 0x22ffec: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x22ffecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x22fff0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x22fff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22fff4: 0xac621290  sw          $v0, 0x1290($v1)
    ctx->pc = 0x22fff4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4752), GPR_U32(ctx, 2));
    // 0x22fff8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22fff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22fffc: 0x8c44cb94  lw          $a0, -0x346C($v0)
    ctx->pc = 0x22fffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x230000: 0x100001f1  b           . + 4 + (0x1F1 << 2)
    ctx->pc = 0x230000u;
    {
        const bool branch_taken_0x230000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230000u;
            // 0x230004: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230000) {
            ctx->pc = 0x2307C8u;
            goto label_2307c8;
        }
    }
    ctx->pc = 0x230008u;
label_230008:
    // 0x230008: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x230008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x23000c: 0x8c471290  lw          $a3, 0x1290($v0)
    ctx->pc = 0x23000cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4752)));
    // 0x230010: 0x10e00114  beqz        $a3, . + 4 + (0x114 << 2)
    ctx->pc = 0x230010u;
    {
        const bool branch_taken_0x230010 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x230014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230010u;
            // 0x230014: 0x24e8ffff  addiu       $t0, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230010) {
            ctx->pc = 0x230464u;
            goto label_230464;
        }
    }
    ctx->pc = 0x230018u;
    // 0x230018: 0x2d020002  sltiu       $v0, $t0, 0x2
    ctx->pc = 0x230018u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x23001c: 0x10400206  beqz        $v0, . + 4 + (0x206 << 2)
    ctx->pc = 0x23001Cu;
    {
        const bool branch_taken_0x23001c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23001Cu;
            // 0x230020: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23001c) {
            ctx->pc = 0x230838u;
            goto label_230838;
        }
    }
    ctx->pc = 0x230024u;
    // 0x230024: 0x8e2312b0  lw          $v1, 0x12B0($s1)
    ctx->pc = 0x230024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4784)));
    // 0x230028: 0x8c46cb94  lw          $a2, -0x346C($v0)
    ctx->pc = 0x230028u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x23002c: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x23002cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x230030: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x230030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x230034: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x230034u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x230038: 0xac8212ac  sw          $v0, 0x12AC($a0)
    ctx->pc = 0x230038u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4780), GPR_U32(ctx, 2));
    // 0x23003c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23003cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x230040: 0xaca812a4  sw          $t0, 0x12A4($a1)
    ctx->pc = 0x230040u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4772), GPR_U32(ctx, 8));
    // 0x230044: 0xacc700dc  sw          $a3, 0xDC($a2)
    ctx->pc = 0x230044u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 220), GPR_U32(ctx, 7));
    // 0x230048: 0x100001fb  b           . + 4 + (0x1FB << 2)
    ctx->pc = 0x230048u;
    {
        const bool branch_taken_0x230048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23004Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230048u;
            // 0x23004c: 0xae2312b0  sw          $v1, 0x12B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4784), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230048) {
            ctx->pc = 0x230838u;
            goto label_230838;
        }
    }
    ctx->pc = 0x230050u;
label_230050:
    // 0x230050: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x230050u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x230054: 0xc08b852  jal         func_22E148
    ctx->pc = 0x230054u;
    SET_GPR_U32(ctx, 31, 0x23005Cu);
    ctx->pc = 0x230058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230054u;
            // 0x230058: 0x8e0412a4  lw          $a0, 0x12A4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4772)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E148u;
    if (runtime->hasFunction(0x22E148u)) {
        auto targetFn = runtime->lookupFunction(0x22E148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23005Cu; }
        if (ctx->pc != 0x23005Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022E148_0x22e148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23005Cu; }
        if (ctx->pc != 0x23005Cu) { return; }
    }
    ctx->pc = 0x23005Cu;
    // 0x23005c: 0x104001f6  beqz        $v0, . + 4 + (0x1F6 << 2)
    ctx->pc = 0x23005Cu;
    {
        const bool branch_taken_0x23005c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23005Cu;
            // 0x230060: 0x8e0212a4  lw          $v0, 0x12A4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23005c) {
            ctx->pc = 0x230838u;
            goto label_230838;
        }
    }
    ctx->pc = 0x230064u;
    // 0x230064: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x230064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x230068: 0x2463bc70  addiu       $v1, $v1, -0x4390
    ctx->pc = 0x230068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950000));
    // 0x23006c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x23006cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x230070: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x230070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x230074: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x230074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x230078: 0x104001e6  beqz        $v0, . + 4 + (0x1E6 << 2)
    ctx->pc = 0x230078u;
    {
        const bool branch_taken_0x230078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23007Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230078u;
            // 0x23007c: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230078) {
            ctx->pc = 0x230814u;
            goto label_230814;
        }
    }
    ctx->pc = 0x230080u;
    // 0x230080: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x230080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x230084: 0x2442bc68  addiu       $v0, $v0, -0x4398
    ctx->pc = 0x230084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949992));
    // 0x230088: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x230088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23008c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x23008cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x230090: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x230090u;
    {
        const bool branch_taken_0x230090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x230094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230090u;
            // 0x230094: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230090) {
            ctx->pc = 0x2300A4u;
            goto label_2300a4;
        }
    }
    ctx->pc = 0x230098u;
    // 0x230098: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x230098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x23009c: 0x100001e6  b           . + 4 + (0x1E6 << 2)
    ctx->pc = 0x23009Cu;
    {
        const bool branch_taken_0x23009c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2300A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23009Cu;
            // 0x2300a0: 0xae2212b0  sw          $v0, 0x12B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4784), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23009c) {
            ctx->pc = 0x230838u;
            goto label_230838;
        }
    }
    ctx->pc = 0x2300A4u;
label_2300a4:
    // 0x2300a4: 0x100001e4  b           . + 4 + (0x1E4 << 2)
    ctx->pc = 0x2300A4u;
    {
        const bool branch_taken_0x2300a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2300A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2300A4u;
            // 0x2300a8: 0xae2212b0  sw          $v0, 0x12B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4784), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2300a4) {
            ctx->pc = 0x230838u;
            goto label_230838;
        }
    }
    ctx->pc = 0x2300ACu;
label_2300ac:
    // 0x2300ac: 0xc08bf72  jal         func_22FDC8
    ctx->pc = 0x2300ACu;
    SET_GPR_U32(ctx, 31, 0x2300B4u);
    ctx->pc = 0x22FDC8u;
    if (runtime->hasFunction(0x22FDC8u)) {
        auto targetFn = runtime->lookupFunction(0x22FDC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2300B4u; }
        if (ctx->pc != 0x2300B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_22fdc8_0x22fde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2300B4u; }
        if (ctx->pc != 0x2300B4u) { return; }
    }
    ctx->pc = 0x2300B4u;
    // 0x2300b4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x2300b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x2300b8: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x2300b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x2300bc: 0x8c4212a4  lw          $v0, 0x12A4($v0)
    ctx->pc = 0x2300bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4772)));
    // 0x2300c0: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2300c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x2300c4: 0x8c64cb94  lw          $a0, -0x346C($v1)
    ctx->pc = 0x2300c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953876)));
    // 0x2300c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2300c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2300cc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2300ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2300d0: 0xaca31290  sw          $v1, 0x1290($a1)
    ctx->pc = 0x2300d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4752), GPR_U32(ctx, 3));
    // 0x2300d4: 0xac8200dc  sw          $v0, 0xDC($a0)
    ctx->pc = 0x2300d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 2));
    // 0x2300d8: 0x100001bb  b           . + 4 + (0x1BB << 2)
    ctx->pc = 0x2300D8u;
    {
        const bool branch_taken_0x2300d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2300DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2300D8u;
            // 0x2300dc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2300d8) {
            ctx->pc = 0x2307C8u;
            goto label_2307c8;
        }
    }
    ctx->pc = 0x2300E0u;
label_2300e0:
    // 0x2300e0: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x2300e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x2300e4: 0xc08b852  jal         func_22E148
    ctx->pc = 0x2300E4u;
    SET_GPR_U32(ctx, 31, 0x2300ECu);
    ctx->pc = 0x2300E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2300E4u;
            // 0x2300e8: 0x8e0412a4  lw          $a0, 0x12A4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4772)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E148u;
    if (runtime->hasFunction(0x22E148u)) {
        auto targetFn = runtime->lookupFunction(0x22E148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2300ECu; }
        if (ctx->pc != 0x2300ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022E148_0x22e148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2300ECu; }
        if (ctx->pc != 0x2300ECu) { return; }
    }
    ctx->pc = 0x2300ECu;
    // 0x2300ec: 0x104001d2  beqz        $v0, . + 4 + (0x1D2 << 2)
    ctx->pc = 0x2300ECu;
    {
        const bool branch_taken_0x2300ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2300F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2300ECu;
            // 0x2300f0: 0x8e0212a4  lw          $v0, 0x12A4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2300ec) {
            ctx->pc = 0x230838u;
            goto label_230838;
        }
    }
    ctx->pc = 0x2300F4u;
    // 0x2300f4: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x2300f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x2300f8: 0x2463bc70  addiu       $v1, $v1, -0x4390
    ctx->pc = 0x2300f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950000));
    // 0x2300fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2300fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x230100: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x230100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x230104: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x230104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x230108: 0x104001c2  beqz        $v0, . + 4 + (0x1C2 << 2)
    ctx->pc = 0x230108u;
    {
        const bool branch_taken_0x230108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23010Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230108u;
            // 0x23010c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230108) {
            ctx->pc = 0x230814u;
            goto label_230814;
        }
    }
    ctx->pc = 0x230110u;
    // 0x230110: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x230110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x230114: 0x8c421290  lw          $v0, 0x1290($v0)
    ctx->pc = 0x230114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4752)));
    // 0x230118: 0x544301c5  bnel        $v0, $v1, . + 4 + (0x1C5 << 2)
    ctx->pc = 0x230118u;
    {
        const bool branch_taken_0x230118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x230118) {
            ctx->pc = 0x23011Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x230118u;
            // 0x23011c: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x230830u;
            goto label_230830;
        }
    }
    ctx->pc = 0x230120u;
    // 0x230120: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x230120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x230124: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x230124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x230128: 0x8c44cb94  lw          $a0, -0x346C($v0)
    ctx->pc = 0x230128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x23012c: 0x100001a7  b           . + 4 + (0x1A7 << 2)
    ctx->pc = 0x23012Cu;
    {
        const bool branch_taken_0x23012c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23012Cu;
            // 0x230130: 0xac830274  sw          $v1, 0x274($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 628), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23012c) {
            ctx->pc = 0x2307CCu;
            goto label_2307cc;
        }
    }
    ctx->pc = 0x230134u;
    // 0x230134: 0x0  nop
    ctx->pc = 0x230134u;
    // NOP
label_230138:
    // 0x230138: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x230138u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x23013c: 0xc08b898  jal         func_22E260
    ctx->pc = 0x23013Cu;
    SET_GPR_U32(ctx, 31, 0x230144u);
    ctx->pc = 0x230140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23013Cu;
            // 0x230140: 0x8e0412a4  lw          $a0, 0x12A4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4772)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E260u;
    if (runtime->hasFunction(0x22E260u)) {
        auto targetFn = runtime->lookupFunction(0x22E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230144u; }
        if (ctx->pc != 0x230144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022E260_0x22e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230144u; }
        if (ctx->pc != 0x230144u) { return; }
    }
    ctx->pc = 0x230144u;
    // 0x230144: 0x104001bc  beqz        $v0, . + 4 + (0x1BC << 2)
    ctx->pc = 0x230144u;
    {
        const bool branch_taken_0x230144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230144u;
            // 0x230148: 0x8e0212a4  lw          $v0, 0x12A4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230144) {
            ctx->pc = 0x230838u;
            goto label_230838;
        }
    }
    ctx->pc = 0x23014Cu;
    // 0x23014c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x23014cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x230150: 0x2463bc70  addiu       $v1, $v1, -0x4390
    ctx->pc = 0x230150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950000));
    // 0x230154: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x230154u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x230158: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x230158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x23015c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23015cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x230160: 0x104001ac  beqz        $v0, . + 4 + (0x1AC << 2)
    ctx->pc = 0x230160u;
    {
        const bool branch_taken_0x230160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230160u;
            // 0x230164: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230160) {
            ctx->pc = 0x230814u;
            goto label_230814;
        }
    }
    ctx->pc = 0x230168u;
    // 0x230168: 0x2442bc68  addiu       $v0, $v0, -0x4398
    ctx->pc = 0x230168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949992));
    // 0x23016c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x23016cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x230170: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x230170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x230174: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x230174u;
    {
        const bool branch_taken_0x230174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x230178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230174u;
            // 0x230178: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230174) {
            ctx->pc = 0x230188u;
            goto label_230188;
        }
    }
    ctx->pc = 0x23017Cu;
    // 0x23017c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x23017cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x230180: 0x100001ad  b           . + 4 + (0x1AD << 2)
    ctx->pc = 0x230180u;
    {
        const bool branch_taken_0x230180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230180u;
            // 0x230184: 0xae2212b0  sw          $v0, 0x12B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4784), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230180) {
            ctx->pc = 0x230838u;
            goto label_230838;
        }
    }
    ctx->pc = 0x230188u;
label_230188:
    // 0x230188: 0x100001ab  b           . + 4 + (0x1AB << 2)
    ctx->pc = 0x230188u;
    {
        const bool branch_taken_0x230188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23018Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230188u;
            // 0x23018c: 0xae2212b0  sw          $v0, 0x12B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4784), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230188) {
            ctx->pc = 0x230838u;
            goto label_230838;
        }
    }
    ctx->pc = 0x230190u;
label_230190:
    // 0x230190: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x230190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x230194: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x230194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x230198: 0xac621290  sw          $v0, 0x1290($v1)
    ctx->pc = 0x230198u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4752), GPR_U32(ctx, 2));
    // 0x23019c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x23019cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x2301a0: 0x8c44cb94  lw          $a0, -0x346C($v0)
    ctx->pc = 0x2301a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x2301a4: 0x10000188  b           . + 4 + (0x188 << 2)
    ctx->pc = 0x2301A4u;
    {
        const bool branch_taken_0x2301a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2301A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2301A4u;
            // 0x2301a8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2301a4) {
            ctx->pc = 0x2307C8u;
            goto label_2307c8;
        }
    }
    ctx->pc = 0x2301ACu;
    // 0x2301ac: 0x0  nop
    ctx->pc = 0x2301acu;
    // NOP
label_2301b0:
    // 0x2301b0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x2301b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x2301b4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2301b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2301b8: 0x8c44cb94  lw          $a0, -0x346C($v0)
    ctx->pc = 0x2301b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x2301bc: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x2301BCu;
    SET_GPR_U32(ctx, 31, 0x2301C4u);
    ctx->pc = 0x2301C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2301BCu;
            // 0x2301c0: 0xac830274  sw          $v1, 0x274($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 628), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2301C4u; }
        if (ctx->pc != 0x2301C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2301C4u; }
        if (ctx->pc != 0x2301C4u) { return; }
    }
    ctx->pc = 0x2301C4u;
    // 0x2301c4: 0x100000f0  b           . + 4 + (0xF0 << 2)
    ctx->pc = 0x2301C4u;
    {
        const bool branch_taken_0x2301c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2301C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2301C4u;
            // 0x2301c8: 0x8e2212b0  lw          $v0, 0x12B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4784)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2301c4) {
            ctx->pc = 0x230588u;
            goto label_230588;
        }
    }
    ctx->pc = 0x2301CCu;
    // 0x2301cc: 0x0  nop
    ctx->pc = 0x2301ccu;
    // NOP
label_2301d0:
    // 0x2301d0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x2301d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x2301d4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x2301d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x2301d8: 0xc4601294  lwc1        $f0, 0x1294($v1)
    ctx->pc = 0x2301d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2301dc: 0xc442c658  lwc1        $f2, -0x39A8($v0)
    ctx->pc = 0x2301dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2301e0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2301e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2301e4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2301e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2301e8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2301e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2301ec: 0x0  nop
    ctx->pc = 0x2301ecu;
    // NOP
    // 0x2301f0: 0x45000191  bc1f        . + 4 + (0x191 << 2)
    ctx->pc = 0x2301F0u;
    {
        const bool branch_taken_0x2301f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2301F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2301F0u;
            // 0x2301f4: 0xe4601294  swc1        $f0, 0x1294($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4756), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2301f0) {
            ctx->pc = 0x230838u;
            goto label_230838;
        }
    }
    ctx->pc = 0x2301F8u;
    // 0x2301f8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x2301f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x2301fc: 0x24100011  addiu       $s0, $zero, 0x11
    ctx->pc = 0x2301fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x230200: 0x8c42cb94  lw          $v0, -0x346C($v0)
    ctx->pc = 0x230200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x230204: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x230204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230208: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x230208u;
    SET_GPR_U32(ctx, 31, 0x230210u);
    ctx->pc = 0x23020Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230208u;
            // 0x23020c: 0xac500274  sw          $s0, 0x274($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 628), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230210u; }
        if (ctx->pc != 0x230210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230210u; }
        if (ctx->pc != 0x230210u) { return; }
    }
    ctx->pc = 0x230210u;
    // 0x230210: 0xc08bd3e  jal         func_22F4F8
    ctx->pc = 0x230210u;
    SET_GPR_U32(ctx, 31, 0x230218u);
    ctx->pc = 0x230214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230210u;
            // 0x230214: 0xae3012b0  sw          $s0, 0x12B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4784), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22F4F8u;
    if (runtime->hasFunction(0x22F4F8u)) {
        auto targetFn = runtime->lookupFunction(0x22F4F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230218u; }
        if (ctx->pc != 0x230218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_22f4f8_0x22f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230218u; }
        if (ctx->pc != 0x230218u) { return; }
    }
    ctx->pc = 0x230218u;
    // 0x230218: 0x10000187  b           . + 4 + (0x187 << 2)
    ctx->pc = 0x230218u;
    {
        const bool branch_taken_0x230218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x230218) {
            ctx->pc = 0x230838u;
            goto label_230838;
        }
    }
    ctx->pc = 0x230220u;
label_230220:
    // 0x230220: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x230220u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x230224: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x230224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x230228: 0x8e0412a4  lw          $a0, 0x12A4($s0)
    ctx->pc = 0x230228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4772)));
    // 0x23022c: 0x8c43cb94  lw          $v1, -0x346C($v0)
    ctx->pc = 0x23022cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x230230: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x230230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x230234: 0xc08ba42  jal         func_22E908
    ctx->pc = 0x230234u;
    SET_GPR_U32(ctx, 31, 0x23023Cu);
    ctx->pc = 0x230238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230234u;
            // 0x230238: 0xac6200dc  sw          $v0, 0xDC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E908u;
    if (runtime->hasFunction(0x22E908u)) {
        auto targetFn = runtime->lookupFunction(0x22E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23023Cu; }
        if (ctx->pc != 0x23023Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022E908_0x22e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23023Cu; }
        if (ctx->pc != 0x23023Cu) { return; }
    }
    ctx->pc = 0x23023Cu;
    // 0x23023c: 0x1040017e  beqz        $v0, . + 4 + (0x17E << 2)
    ctx->pc = 0x23023Cu;
    {
        const bool branch_taken_0x23023c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23023Cu;
            // 0x230240: 0x8e0412a4  lw          $a0, 0x12A4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23023c) {
            ctx->pc = 0x230838u;
            goto label_230838;
        }
    }
    ctx->pc = 0x230244u;
    // 0x230244: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x230244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x230248: 0x2442bc78  addiu       $v0, $v0, -0x4388
    ctx->pc = 0x230248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950008));
    // 0x23024c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x23024cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x230250: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x230250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x230254: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x230254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x230258: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x230258u;
    {
        const bool branch_taken_0x230258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23025Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230258u;
            // 0x23025c: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230258) {
            ctx->pc = 0x230278u;
            goto label_230278;
        }
    }
    ctx->pc = 0x230260u;
    // 0x230260: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x230260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x230264: 0x8c6412bc  lw          $a0, 0x12BC($v1)
    ctx->pc = 0x230264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4796)));
    // 0x230268: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x230268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x23026c: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x23026cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x230270: 0x10000171  b           . + 4 + (0x171 << 2)
    ctx->pc = 0x230270u;
    {
        const bool branch_taken_0x230270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230270u;
            // 0x230274: 0xae2212b0  sw          $v0, 0x12B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4784), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230270) {
            ctx->pc = 0x230838u;
            goto label_230838;
        }
    }
    ctx->pc = 0x230278u;
label_230278:
    // 0x230278: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x230278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x23027c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x23027cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x230280: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x230280u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x230284: 0x2442c138  addiu       $v0, $v0, -0x3EC8
    ctx->pc = 0x230284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951224));
    // 0x230288: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x230288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23028c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x23028cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x230290: 0x284201c6  slti        $v0, $v0, 0x1C6
    ctx->pc = 0x230290u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)454) ? 1 : 0);
    // 0x230294: 0x1040014f  beqz        $v0, . + 4 + (0x14F << 2)
    ctx->pc = 0x230294u;
    {
        const bool branch_taken_0x230294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230294u;
            // 0x230298: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230294) {
            ctx->pc = 0x2307D4u;
            goto label_2307d4;
        }
    }
    ctx->pc = 0x23029Cu;
    // 0x23029c: 0x10000166  b           . + 4 + (0x166 << 2)
    ctx->pc = 0x23029Cu;
    {
        const bool branch_taken_0x23029c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2302A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23029Cu;
            // 0x2302a0: 0xae2212b0  sw          $v0, 0x12B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4784), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23029c) {
            ctx->pc = 0x230838u;
            goto label_230838;
        }
    }
    ctx->pc = 0x2302A4u;
label_2302a4:
    // 0x2302a4: 0xc08bf72  jal         func_22FDC8
    ctx->pc = 0x2302A4u;
    SET_GPR_U32(ctx, 31, 0x2302ACu);
    ctx->pc = 0x22FDC8u;
    if (runtime->hasFunction(0x22FDC8u)) {
        auto targetFn = runtime->lookupFunction(0x22FDC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2302ACu; }
        if (ctx->pc != 0x2302ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_22fdc8_0x22fde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2302ACu; }
        if (ctx->pc != 0x2302ACu) { return; }
    }
    ctx->pc = 0x2302ACu;
    // 0x2302ac: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x2302acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x2302b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2302b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2302b4: 0xac621290  sw          $v0, 0x1290($v1)
    ctx->pc = 0x2302b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4752), GPR_U32(ctx, 2));
    // 0x2302b8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x2302b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x2302bc: 0x8c44cb94  lw          $a0, -0x346C($v0)
    ctx->pc = 0x2302bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x2302c0: 0x10000141  b           . + 4 + (0x141 << 2)
    ctx->pc = 0x2302C0u;
    {
        const bool branch_taken_0x2302c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2302C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2302C0u;
            // 0x2302c4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2302c0) {
            ctx->pc = 0x2307C8u;
            goto label_2307c8;
        }
    }
    ctx->pc = 0x2302C8u;
label_2302c8:
    // 0x2302c8: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x2302c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x2302cc: 0xc08b852  jal         func_22E148
    ctx->pc = 0x2302CCu;
    SET_GPR_U32(ctx, 31, 0x2302D4u);
    ctx->pc = 0x2302D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2302CCu;
            // 0x2302d0: 0x8e0412a4  lw          $a0, 0x12A4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4772)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E148u;
    if (runtime->hasFunction(0x22E148u)) {
        auto targetFn = runtime->lookupFunction(0x22E148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2302D4u; }
        if (ctx->pc != 0x2302D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022E148_0x22e148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2302D4u; }
        if (ctx->pc != 0x2302D4u) { return; }
    }
    ctx->pc = 0x2302D4u;
    // 0x2302d4: 0x10400158  beqz        $v0, . + 4 + (0x158 << 2)
    ctx->pc = 0x2302D4u;
    {
        const bool branch_taken_0x2302d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2302D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2302D4u;
            // 0x2302d8: 0x8e0212a4  lw          $v0, 0x12A4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2302d4) {
            ctx->pc = 0x230838u;
            goto label_230838;
        }
    }
    ctx->pc = 0x2302DCu;
    // 0x2302dc: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x2302dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x2302e0: 0x2463bc70  addiu       $v1, $v1, -0x4390
    ctx->pc = 0x2302e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950000));
    // 0x2302e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2302e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2302e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2302e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2302ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2302ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2302f0: 0x10400148  beqz        $v0, . + 4 + (0x148 << 2)
    ctx->pc = 0x2302F0u;
    {
        const bool branch_taken_0x2302f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2302F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2302F0u;
            // 0x2302f4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2302f0) {
            ctx->pc = 0x230814u;
            goto label_230814;
        }
    }
    ctx->pc = 0x2302F8u;
    // 0x2302f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2302f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2302fc: 0x8c421290  lw          $v0, 0x1290($v0)
    ctx->pc = 0x2302fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4752)));
    // 0x230300: 0x5443014b  bnel        $v0, $v1, . + 4 + (0x14B << 2)
    ctx->pc = 0x230300u;
    {
        const bool branch_taken_0x230300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x230300) {
            ctx->pc = 0x230304u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x230300u;
            // 0x230304: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x230830u;
            goto label_230830;
        }
    }
    ctx->pc = 0x230308u;
    // 0x230308: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x230308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x23030c: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x23030cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x230310: 0x8c44cb94  lw          $a0, -0x346C($v0)
    ctx->pc = 0x230310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x230314: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x230314u;
    SET_GPR_U32(ctx, 31, 0x23031Cu);
    ctx->pc = 0x230318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230314u;
            // 0x230318: 0xac830274  sw          $v1, 0x274($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 628), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23031Cu; }
        if (ctx->pc != 0x23031Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23031Cu; }
        if (ctx->pc != 0x23031Cu) { return; }
    }
    ctx->pc = 0x23031Cu;
    // 0x23031c: 0x8e2212b0  lw          $v0, 0x12B0($s1)
    ctx->pc = 0x23031cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4784)));
    // 0x230320: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x230320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x230324: 0xc08bd3e  jal         func_22F4F8
    ctx->pc = 0x230324u;
    SET_GPR_U32(ctx, 31, 0x23032Cu);
    ctx->pc = 0x230328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230324u;
            // 0x230328: 0xae2212b0  sw          $v0, 0x12B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4784), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22F4F8u;
    if (runtime->hasFunction(0x22F4F8u)) {
        auto targetFn = runtime->lookupFunction(0x22F4F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23032Cu; }
        if (ctx->pc != 0x23032Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_22f4f8_0x22f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23032Cu; }
        if (ctx->pc != 0x23032Cu) { return; }
    }
    ctx->pc = 0x23032Cu;
    // 0x23032c: 0x10000142  b           . + 4 + (0x142 << 2)
    ctx->pc = 0x23032Cu;
    {
        const bool branch_taken_0x23032c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23032c) {
            ctx->pc = 0x230838u;
            goto label_230838;
        }
    }
    ctx->pc = 0x230334u;
    // 0x230334: 0x0  nop
    ctx->pc = 0x230334u;
    // NOP
label_230338:
    // 0x230338: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x230338u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x23033c: 0xc08baaa  jal         func_22EAA8
    ctx->pc = 0x23033Cu;
    SET_GPR_U32(ctx, 31, 0x230344u);
    ctx->pc = 0x230340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23033Cu;
            // 0x230340: 0x8e0412a4  lw          $a0, 0x12A4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4772)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22EAA8u;
    if (runtime->hasFunction(0x22EAA8u)) {
        auto targetFn = runtime->lookupFunction(0x22EAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230344u; }
        if (ctx->pc != 0x230344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022EAA8_0x22eaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230344u; }
        if (ctx->pc != 0x230344u) { return; }
    }
    ctx->pc = 0x230344u;
    // 0x230344: 0x1040013c  beqz        $v0, . + 4 + (0x13C << 2)
    ctx->pc = 0x230344u;
    {
        const bool branch_taken_0x230344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230344u;
            // 0x230348: 0x8e0212a4  lw          $v0, 0x12A4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230344) {
            ctx->pc = 0x230838u;
            goto label_230838;
        }
    }
    ctx->pc = 0x23034Cu;
    // 0x23034c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x23034cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x230350: 0x2463bc78  addiu       $v1, $v1, -0x4388
    ctx->pc = 0x230350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950008));
    // 0x230354: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x230354u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x230358: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x230358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23035c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x23035cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x230360: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x230360u;
    {
        const bool branch_taken_0x230360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230360u;
            // 0x230364: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230360) {
            ctx->pc = 0x230388u;
            goto label_230388;
        }
    }
    ctx->pc = 0x230368u;
    // 0x230368: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x230368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x23036c: 0x8c6512bc  lw          $a1, 0x12BC($v1)
    ctx->pc = 0x23036cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4796)));
    // 0x230370: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x230370u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x230374: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x230374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x230378: 0xac8012a8  sw          $zero, 0x12A8($a0)
    ctx->pc = 0x230378u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4776), GPR_U32(ctx, 0));
    // 0x23037c: 0x65100b  movn        $v0, $v1, $a1
    ctx->pc = 0x23037cu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x230380: 0x1000012d  b           . + 4 + (0x12D << 2)
    ctx->pc = 0x230380u;
    {
        const bool branch_taken_0x230380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230380u;
            // 0x230384: 0xae2212b0  sw          $v0, 0x12B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4784), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230380) {
            ctx->pc = 0x230838u;
            goto label_230838;
        }
    }
    ctx->pc = 0x230388u;
label_230388:
    // 0x230388: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x230388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x23038c: 0x1000012a  b           . + 4 + (0x12A << 2)
    ctx->pc = 0x23038Cu;
    {
        const bool branch_taken_0x23038c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23038Cu;
            // 0x230390: 0xae2212b0  sw          $v0, 0x12B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4784), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23038c) {
            ctx->pc = 0x230838u;
            goto label_230838;
        }
    }
    ctx->pc = 0x230394u;
label_230394:
    // 0x230394: 0xc08bf72  jal         func_22FDC8
    ctx->pc = 0x230394u;
    SET_GPR_U32(ctx, 31, 0x23039Cu);
    ctx->pc = 0x22FDC8u;
    if (runtime->hasFunction(0x22FDC8u)) {
        auto targetFn = runtime->lookupFunction(0x22FDC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23039Cu; }
        if (ctx->pc != 0x23039Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_22fdc8_0x22fde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23039Cu; }
        if (ctx->pc != 0x23039Cu) { return; }
    }
    ctx->pc = 0x23039Cu;
    // 0x23039c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23039cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2303a0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2303a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2303a4: 0x0  nop
    ctx->pc = 0x2303a4u;
    // NOP
label_2303a8:
    // 0x2303a8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x2303a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x2303ac: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x2303acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2303b0: 0x8c4412a4  lw          $a0, 0x12A4($v0)
    ctx->pc = 0x2303b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4772)));
    // 0x2303b4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x2303b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x2303b8: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x2303b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2303bc: 0x2447be80  addiu       $a3, $v0, -0x4180
    ctx->pc = 0x2303bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950528));
    // 0x2303c0: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x2303c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2303c4: 0x3c03cafe  lui         $v1, 0xCAFE
    ctx->pc = 0x2303c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51966 << 16));
    // 0x2303c8: 0x3463bad1  ori         $v1, $v1, 0xBAD1
    ctx->pc = 0x2303c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47825);
    // 0x2303cc: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x2303ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2303d0: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x2303d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x2303d4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2303d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2303d8: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2303D8u;
    {
        const bool branch_taken_0x2303d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2303d8) {
            ctx->pc = 0x2303DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2303D8u;
            // 0x2303dc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2303E8u;
            goto label_2303e8;
        }
    }
    ctx->pc = 0x2303E0u;
    // 0x2303e0: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x2303e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2303e4: 0x8442000c  lh          $v0, 0xC($v0)
    ctx->pc = 0x2303e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
label_2303e8:
    // 0x2303e8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2303e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2303ec: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2303ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2303f0: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x2303f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2303f4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2303F4u;
    {
        const bool branch_taken_0x2303f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2303F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2303F4u;
            // 0x2303f8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2303f4) {
            ctx->pc = 0x2303A8u;
            runtime->cooperativeGuestYield();
            goto label_2303a8;
        }
    }
    ctx->pc = 0x2303FCu;
    // 0x2303fc: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x2303fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x230400: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x230400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230404: 0xc06deaa  jal         func_1B7AA8
    ctx->pc = 0x230404u;
    SET_GPR_U32(ctx, 31, 0x23040Cu);
    ctx->pc = 0x230408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230404u;
            // 0x230408: 0x8e04cb94  lw          $a0, -0x346C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953876)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7AA8u;
    if (runtime->hasFunction(0x1B7AA8u)) {
        auto targetFn = runtime->lookupFunction(0x1B7AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23040Cu; }
        if (ctx->pc != 0x23040Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7AA8_0x1b7aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23040Cu; }
        if (ctx->pc != 0x23040Cu) { return; }
    }
    ctx->pc = 0x23040Cu;
    // 0x23040c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x23040cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x230410: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x230410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x230414: 0xac621290  sw          $v0, 0x1290($v1)
    ctx->pc = 0x230414u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4752), GPR_U32(ctx, 2));
    // 0x230418: 0x8e04cb94  lw          $a0, -0x346C($s0)
    ctx->pc = 0x230418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953876)));
    // 0x23041c: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x23041Cu;
    {
        const bool branch_taken_0x23041c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23041Cu;
            // 0x230420: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23041c) {
            ctx->pc = 0x2307C8u;
            goto label_2307c8;
        }
    }
    ctx->pc = 0x230424u;
    // 0x230424: 0x0  nop
    ctx->pc = 0x230424u;
    // NOP
label_230428:
    // 0x230428: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x230428u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x23042c: 0xc08b852  jal         func_22E148
    ctx->pc = 0x23042Cu;
    SET_GPR_U32(ctx, 31, 0x230434u);
    ctx->pc = 0x230430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23042Cu;
            // 0x230430: 0x8e0412a4  lw          $a0, 0x12A4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4772)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E148u;
    if (runtime->hasFunction(0x22E148u)) {
        auto targetFn = runtime->lookupFunction(0x22E148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230434u; }
        if (ctx->pc != 0x230434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022E148_0x22e148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230434u; }
        if (ctx->pc != 0x230434u) { return; }
    }
    ctx->pc = 0x230434u;
    // 0x230434: 0x10400100  beqz        $v0, . + 4 + (0x100 << 2)
    ctx->pc = 0x230434u;
    {
        const bool branch_taken_0x230434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230434u;
            // 0x230438: 0x8e0412a4  lw          $a0, 0x12A4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230434) {
            ctx->pc = 0x230838u;
            goto label_230838;
        }
    }
    ctx->pc = 0x23043Cu;
    // 0x23043c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x23043cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x230440: 0x2442bc70  addiu       $v0, $v0, -0x4390
    ctx->pc = 0x230440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950000));
    // 0x230444: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x230444u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x230448: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x230448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23044c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23044cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x230450: 0x104000f0  beqz        $v0, . + 4 + (0xF0 << 2)
    ctx->pc = 0x230450u;
    {
        const bool branch_taken_0x230450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230450u;
            // 0x230454: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230450) {
            ctx->pc = 0x230814u;
            goto label_230814;
        }
    }
    ctx->pc = 0x230458u;
    // 0x230458: 0x8c451290  lw          $a1, 0x1290($v0)
    ctx->pc = 0x230458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4752)));
    // 0x23045c: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23045Cu;
    {
        const bool branch_taken_0x23045c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x23045c) {
            ctx->pc = 0x23046Cu;
            goto label_23046c;
        }
    }
    ctx->pc = 0x230464u;
label_230464:
    // 0x230464: 0x100000f4  b           . + 4 + (0xF4 << 2)
    ctx->pc = 0x230464u;
    {
        const bool branch_taken_0x230464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230464u;
            // 0x230468: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230464) {
            ctx->pc = 0x230838u;
            goto label_230838;
        }
    }
    ctx->pc = 0x23046Cu;
label_23046c:
    // 0x23046c: 0x18a000f2  blez        $a1, . + 4 + (0xF2 << 2)
    ctx->pc = 0x23046Cu;
    {
        const bool branch_taken_0x23046c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x230470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23046Cu;
            // 0x230470: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23046c) {
            ctx->pc = 0x230838u;
            goto label_230838;
        }
    }
    ctx->pc = 0x230474u;
    // 0x230474: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x230474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x230478: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x230478u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x23047c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x23047cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x230480: 0x2467be80  addiu       $a3, $v1, -0x4180
    ctx->pc = 0x230480u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950528));
    // 0x230484: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x230484u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x230488: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x230488u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x23048c: 0xac8512a8  sw          $a1, 0x12A8($a0)
    ctx->pc = 0x23048cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4776), GPR_U32(ctx, 5));
    // 0x230490: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x230490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x230494: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x230494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x230498: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x230498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23049c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23049Cu;
    {
        const bool branch_taken_0x23049c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2304A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23049Cu;
            // 0x2304a0: 0xe31021  addu        $v0, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23049c) {
            ctx->pc = 0x2304B8u;
            goto label_2304b8;
        }
    }
    ctx->pc = 0x2304A4u;
    // 0x2304a4: 0x3c03cafe  lui         $v1, 0xCAFE
    ctx->pc = 0x2304a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51966 << 16));
    // 0x2304a8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2304a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2304ac: 0x3463bad1  ori         $v1, $v1, 0xBAD1
    ctx->pc = 0x2304acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47825);
    // 0x2304b0: 0x104300c9  beq         $v0, $v1, . + 4 + (0xC9 << 2)
    ctx->pc = 0x2304B0u;
    {
        const bool branch_taken_0x2304b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2304B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2304B0u;
            // 0x2304b4: 0x8e2212b0  lw          $v0, 0x12B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4784)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2304b0) {
            ctx->pc = 0x2307D8u;
            goto label_2307d8;
        }
    }
    ctx->pc = 0x2304B8u;
label_2304b8:
    // 0x2304b8: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x2304b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2304bc: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x2304BCu;
    {
        const bool branch_taken_0x2304bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2304C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2304BCu;
            // 0x2304c0: 0xae2212b0  sw          $v0, 0x12B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4784), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2304bc) {
            ctx->pc = 0x230838u;
            goto label_230838;
        }
    }
    ctx->pc = 0x2304C4u;
label_2304c4:
    // 0x2304c4: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x2304c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x2304c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2304c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2304cc: 0xac621290  sw          $v0, 0x1290($v1)
    ctx->pc = 0x2304ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4752), GPR_U32(ctx, 2));
    // 0x2304d0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x2304d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x2304d4: 0x8c44cb94  lw          $a0, -0x346C($v0)
    ctx->pc = 0x2304d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x2304d8: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x2304D8u;
    {
        const bool branch_taken_0x2304d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2304DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2304D8u;
            // 0x2304dc: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2304d8) {
            ctx->pc = 0x2307C8u;
            goto label_2307c8;
        }
    }
    ctx->pc = 0x2304E0u;
label_2304e0:
    // 0x2304e0: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x2304e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x2304e4: 0xc08b852  jal         func_22E148
    ctx->pc = 0x2304E4u;
    SET_GPR_U32(ctx, 31, 0x2304ECu);
    ctx->pc = 0x2304E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2304E4u;
            // 0x2304e8: 0x8e0412a4  lw          $a0, 0x12A4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4772)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E148u;
    if (runtime->hasFunction(0x22E148u)) {
        auto targetFn = runtime->lookupFunction(0x22E148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2304ECu; }
        if (ctx->pc != 0x2304ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022E148_0x22e148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2304ECu; }
        if (ctx->pc != 0x2304ECu) { return; }
    }
    ctx->pc = 0x2304ECu;
    // 0x2304ec: 0x104000d2  beqz        $v0, . + 4 + (0xD2 << 2)
    ctx->pc = 0x2304ECu;
    {
        const bool branch_taken_0x2304ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2304F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2304ECu;
            // 0x2304f0: 0x8e0212a4  lw          $v0, 0x12A4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2304ec) {
            ctx->pc = 0x230838u;
            goto label_230838;
        }
    }
    ctx->pc = 0x2304F4u;
    // 0x2304f4: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x2304f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x2304f8: 0x2463bc70  addiu       $v1, $v1, -0x4390
    ctx->pc = 0x2304f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950000));
    // 0x2304fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2304fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x230500: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x230500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x230504: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x230504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x230508: 0x104000c2  beqz        $v0, . + 4 + (0xC2 << 2)
    ctx->pc = 0x230508u;
    {
        const bool branch_taken_0x230508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23050Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230508u;
            // 0x23050c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230508) {
            ctx->pc = 0x230814u;
            goto label_230814;
        }
    }
    ctx->pc = 0x230510u;
    // 0x230510: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x230510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x230514: 0x8c421290  lw          $v0, 0x1290($v0)
    ctx->pc = 0x230514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4752)));
    // 0x230518: 0x504300af  beql        $v0, $v1, . + 4 + (0xAF << 2)
    ctx->pc = 0x230518u;
    {
        const bool branch_taken_0x230518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x230518) {
            ctx->pc = 0x23051Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x230518u;
            // 0x23051c: 0x8e2212b0  lw          $v0, 0x12B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4784)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2307D8u;
            goto label_2307d8;
        }
    }
    ctx->pc = 0x230520u;
    // 0x230520: 0x144000c5  bnez        $v0, . + 4 + (0xC5 << 2)
    ctx->pc = 0x230520u;
    {
        const bool branch_taken_0x230520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x230524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230520u;
            // 0x230524: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230520) {
            ctx->pc = 0x230838u;
            goto label_230838;
        }
    }
    ctx->pc = 0x230528u;
    // 0x230528: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x230528u;
    {
        const bool branch_taken_0x230528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23052Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230528u;
            // 0x23052c: 0xae2212b0  sw          $v0, 0x12B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4784), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230528) {
            ctx->pc = 0x230838u;
            goto label_230838;
        }
    }
    ctx->pc = 0x230530u;
label_230530:
    // 0x230530: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x230530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x230534: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x230534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x230538: 0x8c42cb94  lw          $v0, -0x346C($v0)
    ctx->pc = 0x230538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x23053c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23053cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230540: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x230540u;
    SET_GPR_U32(ctx, 31, 0x230548u);
    ctx->pc = 0x230544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230540u;
            // 0x230544: 0xac430274  sw          $v1, 0x274($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 628), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230548u; }
        if (ctx->pc != 0x230548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230548u; }
        if (ctx->pc != 0x230548u) { return; }
    }
    ctx->pc = 0x230548u;
    // 0x230548: 0xc08bd3e  jal         func_22F4F8
    ctx->pc = 0x230548u;
    SET_GPR_U32(ctx, 31, 0x230550u);
    ctx->pc = 0x22F4F8u;
    if (runtime->hasFunction(0x22F4F8u)) {
        auto targetFn = runtime->lookupFunction(0x22F4F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230550u; }
        if (ctx->pc != 0x230550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_22f4f8_0x22f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230550u; }
        if (ctx->pc != 0x230550u) { return; }
    }
    ctx->pc = 0x230550u;
    // 0x230550: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x230550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x230554: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x230554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x230558: 0x8c4212a4  lw          $v0, 0x12A4($v0)
    ctx->pc = 0x230558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4772)));
    // 0x23055c: 0x2463bc60  addiu       $v1, $v1, -0x43A0
    ctx->pc = 0x23055cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949984));
    // 0x230560: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x230560u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x230564: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x230564u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x230568: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x230568u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23056c: 0x2484c190  addiu       $a0, $a0, -0x3E70
    ctx->pc = 0x23056cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951312));
    // 0x230570: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x230570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x230574: 0x24a584e8  addiu       $a1, $a1, -0x7B18
    ctx->pc = 0x230574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935784));
    // 0x230578: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x230578u;
    SET_GPR_U32(ctx, 31, 0x230580u);
    ctx->pc = 0x23057Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230578u;
            // 0x23057c: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230580u; }
        if (ctx->pc != 0x230580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230580u; }
        if (ctx->pc != 0x230580u) { return; }
    }
    ctx->pc = 0x230580u;
    // 0x230580: 0x8e2212b0  lw          $v0, 0x12B0($s1)
    ctx->pc = 0x230580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4784)));
    // 0x230584: 0x0  nop
    ctx->pc = 0x230584u;
    // NOP
label_230588:
    // 0x230588: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x230588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x23058c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x23058cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x230590: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x230590u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230594: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x230594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x230598: 0xe4601294  swc1        $f0, 0x1294($v1)
    ctx->pc = 0x230598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4756), bits); }
    // 0x23059c: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x23059Cu;
    {
        const bool branch_taken_0x23059c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2305A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23059Cu;
            // 0x2305a0: 0xae2212b0  sw          $v0, 0x12B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4784), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23059c) {
            ctx->pc = 0x230838u;
            goto label_230838;
        }
    }
    ctx->pc = 0x2305A4u;
label_2305a4:
    // 0x2305a4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x2305a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x2305a8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x2305a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x2305ac: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x2305acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x2305b0: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x2305b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x2305b4: 0x8c4412a4  lw          $a0, 0x12A4($v0)
    ctx->pc = 0x2305b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4772)));
    // 0x2305b8: 0x24a5c190  addiu       $a1, $a1, -0x3E70
    ctx->pc = 0x2305b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951312));
    // 0x2305bc: 0x24c66eb8  addiu       $a2, $a2, 0x6EB8
    ctx->pc = 0x2305bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28344));
    // 0x2305c0: 0xc08ba00  jal         func_22E800
    ctx->pc = 0x2305C0u;
    SET_GPR_U32(ctx, 31, 0x2305C8u);
    ctx->pc = 0x2305C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2305C0u;
            // 0x2305c4: 0x34e74000  ori         $a3, $a3, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E800u;
    if (runtime->hasFunction(0x22E800u)) {
        auto targetFn = runtime->lookupFunction(0x22E800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2305C8u; }
        if (ctx->pc != 0x2305C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022E800_0x22e800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2305C8u; }
        if (ctx->pc != 0x2305C8u) { return; }
    }
    ctx->pc = 0x2305C8u;
    // 0x2305c8: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x2305C8u;
    {
        const bool branch_taken_0x2305c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2305CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2305C8u;
            // 0x2305cc: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2305c8) {
            ctx->pc = 0x2306E0u;
            goto label_2306e0;
        }
    }
    ctx->pc = 0x2305D0u;
    // 0x2305d0: 0x8c421284  lw          $v0, 0x1284($v0)
    ctx->pc = 0x2305d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4740)));
    // 0x2305d4: 0x54400041  bnel        $v0, $zero, . + 4 + (0x41 << 2)
    ctx->pc = 0x2305D4u;
    {
        const bool branch_taken_0x2305d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2305d4) {
            ctx->pc = 0x2305D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2305D4u;
            // 0x2305d8: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2306DCu;
            goto label_2306dc;
        }
    }
    ctx->pc = 0x2305DCu;
    // 0x2305dc: 0x8e2212b0  lw          $v0, 0x12B0($s1)
    ctx->pc = 0x2305dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4784)));
    // 0x2305e0: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x2305E0u;
    {
        const bool branch_taken_0x2305e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2305E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2305E0u;
            // 0x2305e4: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2305e0) {
            ctx->pc = 0x2306DCu;
            goto label_2306dc;
        }
    }
    ctx->pc = 0x2305E8u;
label_2305e8:
    // 0x2305e8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x2305e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x2305ec: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x2305ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2305f0: 0x8c4412a4  lw          $a0, 0x12A4($v0)
    ctx->pc = 0x2305f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4772)));
    // 0x2305f4: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x2305f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x2305f8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x2305f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x2305fc: 0x2463be80  addiu       $v1, $v1, -0x4180
    ctx->pc = 0x2305fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950528));
    // 0x230600: 0x8c4512a8  lw          $a1, 0x12A8($v0)
    ctx->pc = 0x230600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4776)));
    // 0x230604: 0x863018  mult        $a2, $a0, $a2
    ctx->pc = 0x230604u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x230608: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x230608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x23060c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x23060cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x230610: 0x2442bc60  addiu       $v0, $v0, -0x43A0
    ctx->pc = 0x230610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949984));
    // 0x230614: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x230614u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x230618: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x230618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23061c: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x23061cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
    // 0x230620: 0x8c8a0000  lw          $t2, 0x0($a0)
    ctx->pc = 0x230620u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x230624: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x230624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x230628: 0x8e2412b0  lw          $a0, 0x12B0($s1)
    ctx->pc = 0x230628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4784)));
    // 0x23062c: 0xa33021  addu        $a2, $a1, $v1
    ctx->pc = 0x23062cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x230630: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x230630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x230634: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x230634u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
    // 0x230638: 0xc4402d0c  lwc1        $f0, 0x2D0C($v0)
    ctx->pc = 0x230638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23063c: 0x654821  addu        $t1, $v1, $a1
    ctx->pc = 0x23063cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x230640: 0x3c02cafe  lui         $v0, 0xCAFE
    ctx->pc = 0x230640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51966 << 16));
    // 0x230644: 0x3c08002a  lui         $t0, 0x2A
    ctx->pc = 0x230644u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)42 << 16));
    // 0x230648: 0x94e7122c  lhu         $a3, 0x122C($a3)
    ctx->pc = 0x230648u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4652)));
    // 0x23064c: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x23064cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230650: 0x9105cc9c  lbu         $a1, -0x3364($t0)
    ctx->pc = 0x230650u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4294954140)));
    // 0x230654: 0x3442bad1  ori         $v0, $v0, 0xBAD1
    ctx->pc = 0x230654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47825);
    // 0x230658: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x230658u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x23065c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x23065cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x230660: 0xe5200008  swc1        $f0, 0x8($t1)
    ctx->pc = 0x230660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x230664: 0xa0c5000e  sb          $a1, 0xE($a2)
    ctx->pc = 0x230664u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 14), (uint8_t)GPR_U32(ctx, 5));
    // 0x230668: 0xae2412b0  sw          $a0, 0x12B0($s1)
    ctx->pc = 0x230668u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4784), GPR_U32(ctx, 4));
    // 0x23066c: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x23066Cu;
    {
        const bool branch_taken_0x23066c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23066Cu;
            // 0x230670: 0xa4c7000c  sh          $a3, 0xC($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 12), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23066c) {
            ctx->pc = 0x230838u;
            goto label_230838;
        }
    }
    ctx->pc = 0x230674u;
label_230674:
    // 0x230674: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x230674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x230678: 0x24080044  addiu       $t0, $zero, 0x44
    ctx->pc = 0x230678u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x23067c: 0x8c4412a4  lw          $a0, 0x12A4($v0)
    ctx->pc = 0x23067cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4772)));
    // 0x230680: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x230680u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x230684: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x230684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x230688: 0x24c6be80  addiu       $a2, $a2, -0x4180
    ctx->pc = 0x230688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950528));
    // 0x23068c: 0x884018  mult        $t0, $a0, $t0
    ctx->pc = 0x23068cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x230690: 0x8c4912c8  lw          $t1, 0x12C8($v0)
    ctx->pc = 0x230690u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4808)));
    // 0x230694: 0x24c30040  addiu       $v1, $a2, 0x40
    ctx->pc = 0x230694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x230698: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x230698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x23069c: 0x8c451298  lw          $a1, 0x1298($v0)
    ctx->pc = 0x23069cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4760)));
    // 0x2306a0: 0x24070044  addiu       $a3, $zero, 0x44
    ctx->pc = 0x2306a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2306a4: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x2306a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2306a8: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x2306a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x2306ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2306acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2306b0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2306b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2306b4: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x2306b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x2306b8: 0xc08ba00  jal         func_22E800
    ctx->pc = 0x2306B8u;
    SET_GPR_U32(ctx, 31, 0x2306C0u);
    ctx->pc = 0x2306BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2306B8u;
            // 0x2306bc: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E800u;
    if (runtime->hasFunction(0x22E800u)) {
        auto targetFn = runtime->lookupFunction(0x22E800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2306C0u; }
        if (ctx->pc != 0x2306C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022E800_0x22e800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2306C0u; }
        if (ctx->pc != 0x2306C0u) { return; }
    }
    ctx->pc = 0x2306C0u;
    // 0x2306c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2306C0u;
    {
        const bool branch_taken_0x2306c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2306C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2306C0u;
            // 0x2306c4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2306c0) {
            ctx->pc = 0x2306E0u;
            goto label_2306e0;
        }
    }
    ctx->pc = 0x2306C8u;
    // 0x2306c8: 0x8c421284  lw          $v0, 0x1284($v0)
    ctx->pc = 0x2306c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4740)));
    // 0x2306cc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2306CCu;
    {
        const bool branch_taken_0x2306cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2306cc) {
            ctx->pc = 0x2306D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2306CCu;
            // 0x2306d0: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2306DCu;
            goto label_2306dc;
        }
    }
    ctx->pc = 0x2306D4u;
    // 0x2306d4: 0x8e2212b0  lw          $v0, 0x12B0($s1)
    ctx->pc = 0x2306d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4784)));
    // 0x2306d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2306d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2306dc:
    // 0x2306dc: 0xae2212b0  sw          $v0, 0x12B0($s1)
    ctx->pc = 0x2306dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4784), GPR_U32(ctx, 2));
label_2306e0:
    // 0x2306e0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x2306e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x2306e4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x2306e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x2306e8: 0xc4601294  lwc1        $f0, 0x1294($v1)
    ctx->pc = 0x2306e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2306ec: 0xc441c658  lwc1        $f1, -0x39A8($v0)
    ctx->pc = 0x2306ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2306f0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2306f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2306f4: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x2306F4u;
    {
        const bool branch_taken_0x2306f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2306F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2306F4u;
            // 0x2306f8: 0xe4601294  swc1        $f0, 0x1294($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4756), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2306f4) {
            ctx->pc = 0x230838u;
            goto label_230838;
        }
    }
    ctx->pc = 0x2306FCu;
label_2306fc:
    // 0x2306fc: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x2306fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x230700: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x230700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x230704: 0xc4601294  lwc1        $f0, 0x1294($v1)
    ctx->pc = 0x230704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230708: 0xc442c658  lwc1        $f2, -0x39A8($v0)
    ctx->pc = 0x230708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23070c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x23070cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x230710: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x230710u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x230714: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x230714u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x230718: 0x0  nop
    ctx->pc = 0x230718u;
    // NOP
    // 0x23071c: 0x45000046  bc1f        . + 4 + (0x46 << 2)
    ctx->pc = 0x23071Cu;
    {
        const bool branch_taken_0x23071c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x230720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23071Cu;
            // 0x230720: 0xe4601294  swc1        $f0, 0x1294($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4756), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23071c) {
            ctx->pc = 0x230838u;
            goto label_230838;
        }
    }
    ctx->pc = 0x230724u;
    // 0x230724: 0xc08bf72  jal         func_22FDC8
    ctx->pc = 0x230724u;
    SET_GPR_U32(ctx, 31, 0x23072Cu);
    ctx->pc = 0x22FDC8u;
    if (runtime->hasFunction(0x22FDC8u)) {
        auto targetFn = runtime->lookupFunction(0x22FDC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23072Cu; }
        if (ctx->pc != 0x23072Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_22fdc8_0x22fde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23072Cu; }
        if (ctx->pc != 0x23072Cu) { return; }
    }
    ctx->pc = 0x23072Cu;
    // 0x23072c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x23072cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x230730: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x230730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x230734: 0xac621290  sw          $v0, 0x1290($v1)
    ctx->pc = 0x230734u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4752), GPR_U32(ctx, 2));
    // 0x230738: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x230738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x23073c: 0x8c44cb94  lw          $a0, -0x346C($v0)
    ctx->pc = 0x23073cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x230740: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x230740u;
    {
        const bool branch_taken_0x230740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230740u;
            // 0x230744: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230740) {
            ctx->pc = 0x2307C8u;
            goto label_2307c8;
        }
    }
    ctx->pc = 0x230748u;
label_230748:
    // 0x230748: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x230748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x23074c: 0x8c421290  lw          $v0, 0x1290($v0)
    ctx->pc = 0x23074cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4752)));
    // 0x230750: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x230750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x230754: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x230754u;
    {
        const bool branch_taken_0x230754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230754u;
            // 0x230758: 0x2c520001  sltiu       $s2, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x230754) {
            ctx->pc = 0x230838u;
            goto label_230838;
        }
    }
    ctx->pc = 0x23075Cu;
label_23075c:
    // 0x23075c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x23075cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x230760: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x230760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x230764: 0xc4601294  lwc1        $f0, 0x1294($v1)
    ctx->pc = 0x230764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230768: 0xc442c658  lwc1        $f2, -0x39A8($v0)
    ctx->pc = 0x230768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23076c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x23076cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x230770: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x230770u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x230774: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x230774u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x230778: 0x0  nop
    ctx->pc = 0x230778u;
    // NOP
    // 0x23077c: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
    ctx->pc = 0x23077Cu;
    {
        const bool branch_taken_0x23077c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x230780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23077Cu;
            // 0x230780: 0xe4601294  swc1        $f0, 0x1294($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4756), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23077c) {
            ctx->pc = 0x230838u;
            goto label_230838;
        }
    }
    ctx->pc = 0x230784u;
    // 0x230784: 0xc08bf72  jal         func_22FDC8
    ctx->pc = 0x230784u;
    SET_GPR_U32(ctx, 31, 0x23078Cu);
    ctx->pc = 0x22FDC8u;
    if (runtime->hasFunction(0x22FDC8u)) {
        auto targetFn = runtime->lookupFunction(0x22FDC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23078Cu; }
        if (ctx->pc != 0x23078Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_22fdc8_0x22fde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23078Cu; }
        if (ctx->pc != 0x23078Cu) { return; }
    }
    ctx->pc = 0x23078Cu;
    // 0x23078c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x23078cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x230790: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x230790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x230794: 0xac621290  sw          $v0, 0x1290($v1)
    ctx->pc = 0x230794u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4752), GPR_U32(ctx, 2));
    // 0x230798: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x230798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x23079c: 0x8c44cb94  lw          $a0, -0x346C($v0)
    ctx->pc = 0x23079cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x2307a0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2307A0u;
    {
        const bool branch_taken_0x2307a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2307A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2307A0u;
            // 0x2307a4: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2307a0) {
            ctx->pc = 0x2307C8u;
            goto label_2307c8;
        }
    }
    ctx->pc = 0x2307A8u;
label_2307a8:
    // 0x2307a8: 0xc08bf72  jal         func_22FDC8
    ctx->pc = 0x2307A8u;
    SET_GPR_U32(ctx, 31, 0x2307B0u);
    ctx->pc = 0x22FDC8u;
    if (runtime->hasFunction(0x22FDC8u)) {
        auto targetFn = runtime->lookupFunction(0x22FDC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2307B0u; }
        if (ctx->pc != 0x2307B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_22fdc8_0x22fde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2307B0u; }
        if (ctx->pc != 0x2307B0u) { return; }
    }
    ctx->pc = 0x2307B0u;
    // 0x2307b0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x2307b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x2307b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2307b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2307b8: 0xac621290  sw          $v0, 0x1290($v1)
    ctx->pc = 0x2307b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4752), GPR_U32(ctx, 2));
    // 0x2307bc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x2307bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x2307c0: 0x8c44cb94  lw          $a0, -0x346C($v0)
    ctx->pc = 0x2307c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x2307c4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2307c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2307c8:
    // 0x2307c8: 0xac820274  sw          $v0, 0x274($a0)
    ctx->pc = 0x2307c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 628), GPR_U32(ctx, 2));
label_2307cc:
    // 0x2307cc: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x2307CCu;
    SET_GPR_U32(ctx, 31, 0x2307D4u);
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2307D4u; }
        if (ctx->pc != 0x2307D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2307D4u; }
        if (ctx->pc != 0x2307D4u) { return; }
    }
    ctx->pc = 0x2307D4u;
label_2307d4:
    // 0x2307d4: 0x8e2212b0  lw          $v0, 0x12B0($s1)
    ctx->pc = 0x2307d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4784)));
label_2307d8:
    // 0x2307d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2307d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2307dc:
    // 0x2307dc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2307DCu;
    {
        const bool branch_taken_0x2307dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2307E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2307DCu;
            // 0x2307e0: 0xae2212b0  sw          $v0, 0x12B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4784), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2307dc) {
            ctx->pc = 0x230838u;
            goto label_230838;
        }
    }
    ctx->pc = 0x2307E4u;
label_2307e4:
    // 0x2307e4: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x2307e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x2307e8: 0xc08b852  jal         func_22E148
    ctx->pc = 0x2307E8u;
    SET_GPR_U32(ctx, 31, 0x2307F0u);
    ctx->pc = 0x2307ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2307E8u;
            // 0x2307ec: 0x8e0412a4  lw          $a0, 0x12A4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4772)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E148u;
    if (runtime->hasFunction(0x22E148u)) {
        auto targetFn = runtime->lookupFunction(0x22E148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2307F0u; }
        if (ctx->pc != 0x2307F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022E148_0x22e148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2307F0u; }
        if (ctx->pc != 0x2307F0u) { return; }
    }
    ctx->pc = 0x2307F0u;
    // 0x2307f0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2307F0u;
    {
        const bool branch_taken_0x2307f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2307F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2307F0u;
            // 0x2307f4: 0x8e0212a4  lw          $v0, 0x12A4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2307f0) {
            ctx->pc = 0x230838u;
            goto label_230838;
        }
    }
    ctx->pc = 0x2307F8u;
    // 0x2307f8: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x2307f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x2307fc: 0x2463bc70  addiu       $v1, $v1, -0x4390
    ctx->pc = 0x2307fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950000));
    // 0x230800: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x230800u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x230804: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x230804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x230808: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x230808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23080c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23080Cu;
    {
        const bool branch_taken_0x23080c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x230810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23080Cu;
            // 0x230810: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23080c) {
            ctx->pc = 0x230824u;
            goto label_230824;
        }
    }
    ctx->pc = 0x230814u;
label_230814:
    // 0x230814: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x230814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x230818: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x230818u;
    {
        const bool branch_taken_0x230818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23081Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230818u;
            // 0x23081c: 0xae2212b0  sw          $v0, 0x12B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4784), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230818) {
            ctx->pc = 0x230838u;
            goto label_230838;
        }
    }
    ctx->pc = 0x230820u;
label_230820:
    // 0x230820: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x230820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_230824:
    // 0x230824: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x230824u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x230828: 0x8c421290  lw          $v0, 0x1290($v0)
    ctx->pc = 0x230828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4752)));
    // 0x23082c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x23082cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_230830:
    // 0x230830: 0x2900b  movn        $s2, $zero, $v0
    ctx->pc = 0x230830u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
    // 0x230834: 0x0  nop
    ctx->pc = 0x230834u;
    // NOP
label_230838:
    // 0x230838: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x230838u;
    {
        const bool branch_taken_0x230838 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x23083Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230838u;
            // 0x23083c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230838) {
            ctx->pc = 0x230868u;
            goto label_230868;
        }
    }
    ctx->pc = 0x230840u;
    // 0x230840: 0x16420007  bne         $s2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x230840u;
    {
        const bool branch_taken_0x230840 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x230844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230840u;
            // 0x230844: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230840) {
            ctx->pc = 0x230860u;
            goto label_230860;
        }
    }
    ctx->pc = 0x230848u;
    // 0x230848: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x230848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x23084c: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x23084cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x230850: 0x8c44cb94  lw          $a0, -0x346C($v0)
    ctx->pc = 0x230850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x230854: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x230854u;
    SET_GPR_U32(ctx, 31, 0x23085Cu);
    ctx->pc = 0x230858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230854u;
            // 0x230858: 0xac830274  sw          $v1, 0x274($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 628), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23085Cu; }
        if (ctx->pc != 0x23085Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23085Cu; }
        if (ctx->pc != 0x23085Cu) { return; }
    }
    ctx->pc = 0x23085Cu;
    // 0x23085c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x23085cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
label_230860:
    // 0x230860: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x230860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x230864: 0xac6212b0  sw          $v0, 0x12B0($v1)
    ctx->pc = 0x230864u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4784), GPR_U32(ctx, 2));
label_230868:
    // 0x230868: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x230868u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23086c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x23086cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x230870: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x230870u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x230874: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x230874u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x230878: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x230878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23087c: 0x3e00008  jr          $ra
    ctx->pc = 0x23087Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23087Cu;
            // 0x230880: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22FE74u: goto label_22fe74;
            case 0x22FE98u: goto label_22fe98;
            case 0x22FEC8u: goto label_22fec8;
            case 0x22FEF0u: goto label_22fef0;
            case 0x22FF20u: goto label_22ff20;
            case 0x22FF68u: goto label_22ff68;
            case 0x22FFBCu: goto label_22ffbc;
            case 0x22FFE4u: goto label_22ffe4;
            case 0x230008u: goto label_230008;
            case 0x230050u: goto label_230050;
            case 0x2300A4u: goto label_2300a4;
            case 0x2300ACu: goto label_2300ac;
            case 0x2300E0u: goto label_2300e0;
            case 0x230138u: goto label_230138;
            case 0x230188u: goto label_230188;
            case 0x230190u: goto label_230190;
            case 0x2301B0u: goto label_2301b0;
            case 0x2301D0u: goto label_2301d0;
            case 0x230220u: goto label_230220;
            case 0x230278u: goto label_230278;
            case 0x2302A4u: goto label_2302a4;
            case 0x2302C8u: goto label_2302c8;
            case 0x230338u: goto label_230338;
            case 0x230388u: goto label_230388;
            case 0x230394u: goto label_230394;
            case 0x2303A8u: goto label_2303a8;
            case 0x2303E8u: goto label_2303e8;
            case 0x230428u: goto label_230428;
            case 0x230464u: goto label_230464;
            case 0x23046Cu: goto label_23046c;
            case 0x2304B8u: goto label_2304b8;
            case 0x2304C4u: goto label_2304c4;
            case 0x2304E0u: goto label_2304e0;
            case 0x230530u: goto label_230530;
            case 0x230588u: goto label_230588;
            case 0x2305A4u: goto label_2305a4;
            case 0x2305E8u: goto label_2305e8;
            case 0x230674u: goto label_230674;
            case 0x2306DCu: goto label_2306dc;
            case 0x2306E0u: goto label_2306e0;
            case 0x2306FCu: goto label_2306fc;
            case 0x230748u: goto label_230748;
            case 0x23075Cu: goto label_23075c;
            case 0x2307A8u: goto label_2307a8;
            case 0x2307C8u: goto label_2307c8;
            case 0x2307CCu: goto label_2307cc;
            case 0x2307D4u: goto label_2307d4;
            case 0x2307D8u: goto label_2307d8;
            case 0x2307DCu: goto label_2307dc;
            case 0x2307E4u: goto label_2307e4;
            case 0x230814u: goto label_230814;
            case 0x230820u: goto label_230820;
            case 0x230824u: goto label_230824;
            case 0x230830u: goto label_230830;
            case 0x230838u: goto label_230838;
            case 0x230860u: goto label_230860;
            case 0x230868u: goto label_230868;
            default: break;
        }
        return;
    }
    ctx->pc = 0x230884u;
    // 0x230884: 0x0  nop
    ctx->pc = 0x230884u;
    // NOP
    // 0x230888: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x230888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23088c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23088cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x230890: 0xc04f824  jal         func_13E090
    ctx->pc = 0x230890u;
    SET_GPR_U32(ctx, 31, 0x230898u);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230898u; }
        if (ctx->pc != 0x230898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230898u; }
        if (ctx->pc != 0x230898u) { return; }
    }
    ctx->pc = 0x230898u;
    // 0x230898: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x230898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x23089c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x23089cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2308a0: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x2308A0u;
    SET_GPR_U32(ctx, 31, 0x2308A8u);
    ctx->pc = 0x2308A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2308A0u;
            // 0x2308a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2308A8u; }
        if (ctx->pc != 0x2308A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2308A8u; }
        if (ctx->pc != 0x2308A8u) { return; }
    }
    ctx->pc = 0x2308A8u;
    // 0x2308a8: 0xc0915be  jal         func_2456F8
    ctx->pc = 0x2308A8u;
    SET_GPR_U32(ctx, 31, 0x2308B0u);
    ctx->pc = 0x2308ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2308A8u;
            // 0x2308ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2456F8u;
    if (runtime->hasFunction(0x2456F8u)) {
        auto targetFn = runtime->lookupFunction(0x2456F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2308B0u; }
        if (ctx->pc != 0x2308B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002456F8_0x2456f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2308B0u; }
        if (ctx->pc != 0x2308B0u) { return; }
    }
    ctx->pc = 0x2308B0u;
    // 0x2308b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2308b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2308b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2308B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2308B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2308B4u;
            // 0x2308b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22FE74u: goto label_22fe74;
            case 0x22FE98u: goto label_22fe98;
            case 0x22FEC8u: goto label_22fec8;
            case 0x22FEF0u: goto label_22fef0;
            case 0x22FF20u: goto label_22ff20;
            case 0x22FF68u: goto label_22ff68;
            case 0x22FFBCu: goto label_22ffbc;
            case 0x22FFE4u: goto label_22ffe4;
            case 0x230008u: goto label_230008;
            case 0x230050u: goto label_230050;
            case 0x2300A4u: goto label_2300a4;
            case 0x2300ACu: goto label_2300ac;
            case 0x2300E0u: goto label_2300e0;
            case 0x230138u: goto label_230138;
            case 0x230188u: goto label_230188;
            case 0x230190u: goto label_230190;
            case 0x2301B0u: goto label_2301b0;
            case 0x2301D0u: goto label_2301d0;
            case 0x230220u: goto label_230220;
            case 0x230278u: goto label_230278;
            case 0x2302A4u: goto label_2302a4;
            case 0x2302C8u: goto label_2302c8;
            case 0x230338u: goto label_230338;
            case 0x230388u: goto label_230388;
            case 0x230394u: goto label_230394;
            case 0x2303A8u: goto label_2303a8;
            case 0x2303E8u: goto label_2303e8;
            case 0x230428u: goto label_230428;
            case 0x230464u: goto label_230464;
            case 0x23046Cu: goto label_23046c;
            case 0x2304B8u: goto label_2304b8;
            case 0x2304C4u: goto label_2304c4;
            case 0x2304E0u: goto label_2304e0;
            case 0x230530u: goto label_230530;
            case 0x230588u: goto label_230588;
            case 0x2305A4u: goto label_2305a4;
            case 0x2305E8u: goto label_2305e8;
            case 0x230674u: goto label_230674;
            case 0x2306DCu: goto label_2306dc;
            case 0x2306E0u: goto label_2306e0;
            case 0x2306FCu: goto label_2306fc;
            case 0x230748u: goto label_230748;
            case 0x23075Cu: goto label_23075c;
            case 0x2307A8u: goto label_2307a8;
            case 0x2307C8u: goto label_2307c8;
            case 0x2307CCu: goto label_2307cc;
            case 0x2307D4u: goto label_2307d4;
            case 0x2307D8u: goto label_2307d8;
            case 0x2307DCu: goto label_2307dc;
            case 0x2307E4u: goto label_2307e4;
            case 0x230814u: goto label_230814;
            case 0x230820u: goto label_230820;
            case 0x230824u: goto label_230824;
            case 0x230830u: goto label_230830;
            case 0x230838u: goto label_230838;
            case 0x230860u: goto label_230860;
            case 0x230868u: goto label_230868;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2308BCu;
    // 0x2308bc: 0x0  nop
    ctx->pc = 0x2308bcu;
    // NOP
    // 0x2308c0: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2308c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2308c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2308C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2308C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2308C4u;
            // 0x2308c8: 0x244285d0  addiu       $v0, $v0, -0x7A30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936016));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22FE74u: goto label_22fe74;
            case 0x22FE98u: goto label_22fe98;
            case 0x22FEC8u: goto label_22fec8;
            case 0x22FEF0u: goto label_22fef0;
            case 0x22FF20u: goto label_22ff20;
            case 0x22FF68u: goto label_22ff68;
            case 0x22FFBCu: goto label_22ffbc;
            case 0x22FFE4u: goto label_22ffe4;
            case 0x230008u: goto label_230008;
            case 0x230050u: goto label_230050;
            case 0x2300A4u: goto label_2300a4;
            case 0x2300ACu: goto label_2300ac;
            case 0x2300E0u: goto label_2300e0;
            case 0x230138u: goto label_230138;
            case 0x230188u: goto label_230188;
            case 0x230190u: goto label_230190;
            case 0x2301B0u: goto label_2301b0;
            case 0x2301D0u: goto label_2301d0;
            case 0x230220u: goto label_230220;
            case 0x230278u: goto label_230278;
            case 0x2302A4u: goto label_2302a4;
            case 0x2302C8u: goto label_2302c8;
            case 0x230338u: goto label_230338;
            case 0x230388u: goto label_230388;
            case 0x230394u: goto label_230394;
            case 0x2303A8u: goto label_2303a8;
            case 0x2303E8u: goto label_2303e8;
            case 0x230428u: goto label_230428;
            case 0x230464u: goto label_230464;
            case 0x23046Cu: goto label_23046c;
            case 0x2304B8u: goto label_2304b8;
            case 0x2304C4u: goto label_2304c4;
            case 0x2304E0u: goto label_2304e0;
            case 0x230530u: goto label_230530;
            case 0x230588u: goto label_230588;
            case 0x2305A4u: goto label_2305a4;
            case 0x2305E8u: goto label_2305e8;
            case 0x230674u: goto label_230674;
            case 0x2306DCu: goto label_2306dc;
            case 0x2306E0u: goto label_2306e0;
            case 0x2306FCu: goto label_2306fc;
            case 0x230748u: goto label_230748;
            case 0x23075Cu: goto label_23075c;
            case 0x2307A8u: goto label_2307a8;
            case 0x2307C8u: goto label_2307c8;
            case 0x2307CCu: goto label_2307cc;
            case 0x2307D4u: goto label_2307d4;
            case 0x2307D8u: goto label_2307d8;
            case 0x2307DCu: goto label_2307dc;
            case 0x2307E4u: goto label_2307e4;
            case 0x230814u: goto label_230814;
            case 0x230820u: goto label_230820;
            case 0x230824u: goto label_230824;
            case 0x230830u: goto label_230830;
            case 0x230838u: goto label_230838;
            case 0x230860u: goto label_230860;
            case 0x230868u: goto label_230868;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2308CCu;
    // 0x2308cc: 0x0  nop
    ctx->pc = 0x2308ccu;
    // NOP
    // 0x2308d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2308D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2308D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2308D0u;
            // 0x2308d4: 0x2482000c  addiu       $v0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22FE74u: goto label_22fe74;
            case 0x22FE98u: goto label_22fe98;
            case 0x22FEC8u: goto label_22fec8;
            case 0x22FEF0u: goto label_22fef0;
            case 0x22FF20u: goto label_22ff20;
            case 0x22FF68u: goto label_22ff68;
            case 0x22FFBCu: goto label_22ffbc;
            case 0x22FFE4u: goto label_22ffe4;
            case 0x230008u: goto label_230008;
            case 0x230050u: goto label_230050;
            case 0x2300A4u: goto label_2300a4;
            case 0x2300ACu: goto label_2300ac;
            case 0x2300E0u: goto label_2300e0;
            case 0x230138u: goto label_230138;
            case 0x230188u: goto label_230188;
            case 0x230190u: goto label_230190;
            case 0x2301B0u: goto label_2301b0;
            case 0x2301D0u: goto label_2301d0;
            case 0x230220u: goto label_230220;
            case 0x230278u: goto label_230278;
            case 0x2302A4u: goto label_2302a4;
            case 0x2302C8u: goto label_2302c8;
            case 0x230338u: goto label_230338;
            case 0x230388u: goto label_230388;
            case 0x230394u: goto label_230394;
            case 0x2303A8u: goto label_2303a8;
            case 0x2303E8u: goto label_2303e8;
            case 0x230428u: goto label_230428;
            case 0x230464u: goto label_230464;
            case 0x23046Cu: goto label_23046c;
            case 0x2304B8u: goto label_2304b8;
            case 0x2304C4u: goto label_2304c4;
            case 0x2304E0u: goto label_2304e0;
            case 0x230530u: goto label_230530;
            case 0x230588u: goto label_230588;
            case 0x2305A4u: goto label_2305a4;
            case 0x2305E8u: goto label_2305e8;
            case 0x230674u: goto label_230674;
            case 0x2306DCu: goto label_2306dc;
            case 0x2306E0u: goto label_2306e0;
            case 0x2306FCu: goto label_2306fc;
            case 0x230748u: goto label_230748;
            case 0x23075Cu: goto label_23075c;
            case 0x2307A8u: goto label_2307a8;
            case 0x2307C8u: goto label_2307c8;
            case 0x2307CCu: goto label_2307cc;
            case 0x2307D4u: goto label_2307d4;
            case 0x2307D8u: goto label_2307d8;
            case 0x2307DCu: goto label_2307dc;
            case 0x2307E4u: goto label_2307e4;
            case 0x230814u: goto label_230814;
            case 0x230820u: goto label_230820;
            case 0x230824u: goto label_230824;
            case 0x230830u: goto label_230830;
            case 0x230838u: goto label_230838;
            case 0x230860u: goto label_230860;
            case 0x230868u: goto label_230868;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2308D8u;
}
