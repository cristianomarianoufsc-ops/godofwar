#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DCE40
// Address: 0x1dce40 - 0x1dcf00
void sub_001DCE40_0x1dce40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCE40_0x1dce40");
#endif

    ctx->pc = 0x1dce40u;

    // 0x1dce40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1dce40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1dce44: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1dce44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1dce48: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1dce48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1dce4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dce4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dce50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dce50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1dce54: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1dce54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1dce58: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DCE58u;
    {
        const bool branch_taken_0x1dce58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCE5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCE58u;
            // 0x1dce5c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dce58) {
            ctx->pc = 0x1DCE6Cu;
            goto label_1dce6c;
        }
    }
    ctx->pc = 0x1DCE60u;
    // 0x1dce60: 0xc0777f0  jal         func_1DDFC0
    ctx->pc = 0x1DCE60u;
    SET_GPR_U32(ctx, 31, 0x1DCE68u);
    ctx->pc = 0x1DCE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCE60u;
            // 0x1dce64: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DDFC0u;
    if (runtime->hasFunction(0x1DDFC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DDFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCE68u; }
        if (ctx->pc != 0x1DCE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DDFC0_0x1ddfc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCE68u; }
        if (ctx->pc != 0x1DCE68u) { return; }
    }
    ctx->pc = 0x1DCE68u;
    // 0x1dce68: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1dce68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_1dce6c:
    // 0x1dce6c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1dce6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1dce70: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x1DCE70u;
    {
        const bool branch_taken_0x1dce70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dce70) {
            ctx->pc = 0x1DCE74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCE70u;
            // 0x1dce74: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DCEDCu;
            goto label_1dcedc;
        }
    }
    ctx->pc = 0x1DCE78u;
    // 0x1dce78: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1dce78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x1dce7c: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1DCE7Cu;
    {
        const bool branch_taken_0x1dce7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCE80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCE7Cu;
            // 0x1dce80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dce7c) {
            ctx->pc = 0x1DCEC4u;
            goto label_1dcec4;
        }
    }
    ctx->pc = 0x1DCE84u;
    // 0x1dce84: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1dce84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1dce88: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1dce88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dce8c: 0x1043000d  beq         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1DCE8Cu;
    {
        const bool branch_taken_0x1dce8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DCE90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCE8Cu;
            // 0x1dce90: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dce8c) {
            ctx->pc = 0x1DCEC4u;
            goto label_1dcec4;
        }
    }
    ctx->pc = 0x1DCE94u;
    // 0x1dce94: 0x0  nop
    ctx->pc = 0x1dce94u;
    // NOP
label_1dce98:
    // 0x1dce98: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1dce98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1dce9c: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x1dce9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1dcea0: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x1dcea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x1dcea4: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x1dcea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x1dcea8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DCEA8u;
    {
        const bool branch_taken_0x1dcea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dcea8) {
            ctx->pc = 0x1DCEC4u;
            goto label_1dcec4;
        }
    }
    ctx->pc = 0x1DCEB0u;
    // 0x1dceb0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1dceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dceb4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1dceb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dceb8: 0x1443fff7  bne         $v0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1DCEB8u;
    {
        const bool branch_taken_0x1dceb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1DCEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCEB8u;
            // 0x1dcebc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dceb8) {
            ctx->pc = 0x1DCE98u;
            runtime->cooperativeGuestYield();
            goto label_1dce98;
        }
    }
    ctx->pc = 0x1DCEC0u;
    // 0x1dcec0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dcec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dcec4:
    // 0x1dcec4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DCEC4u;
    {
        const bool branch_taken_0x1dcec4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCEC4u;
            // 0x1dcec8: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcec4) {
            ctx->pc = 0x1DCED4u;
            goto label_1dced4;
        }
    }
    ctx->pc = 0x1DCECCu;
    // 0x1dcecc: 0xc0797a2  jal         func_1E5E88
    ctx->pc = 0x1DCECCu;
    SET_GPR_U32(ctx, 31, 0x1DCED4u);
    ctx->pc = 0x1DCED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCECCu;
            // 0x1dced0: 0x8c44d2ac  lw          $a0, -0x2D54($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5E88u;
    if (runtime->hasFunction(0x1E5E88u)) {
        auto targetFn = runtime->lookupFunction(0x1E5E88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCED4u; }
        if (ctx->pc != 0x1DCED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E5E88_0x1e5e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCED4u; }
        if (ctx->pc != 0x1DCED4u) { return; }
    }
    ctx->pc = 0x1DCED4u;
label_1dced4:
    // 0x1dced4: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1dced4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1dced8: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1dced8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_1dcedc:
    // 0x1dcedc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DCEDCu;
    {
        const bool branch_taken_0x1dcedc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dcedc) {
            ctx->pc = 0x1DCEE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCEDCu;
            // 0x1dcee0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DCEF0u;
            goto label_1dcef0;
        }
    }
    ctx->pc = 0x1DCEE4u;
    // 0x1dcee4: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x1DCEE4u;
    SET_GPR_U32(ctx, 31, 0x1DCEECu);
    ctx->pc = 0x1DCEE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCEE4u;
            // 0x1dcee8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCEECu; }
        if (ctx->pc != 0x1DCEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCEECu; }
        if (ctx->pc != 0x1DCEECu) { return; }
    }
    ctx->pc = 0x1DCEECu;
    // 0x1dceec: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1dceecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1dcef0:
    // 0x1dcef0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1dcef0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dcef4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dcef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dcef8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCEF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCEFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCEF8u;
            // 0x1dcefc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DCE6Cu: goto label_1dce6c;
            case 0x1DCE98u: goto label_1dce98;
            case 0x1DCEC4u: goto label_1dcec4;
            case 0x1DCED4u: goto label_1dced4;
            case 0x1DCEDCu: goto label_1dcedc;
            case 0x1DCEF0u: goto label_1dcef0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DCF00u;
}
