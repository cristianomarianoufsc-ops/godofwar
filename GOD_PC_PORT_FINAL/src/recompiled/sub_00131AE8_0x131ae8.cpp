#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00131AE8
// Address: 0x131ae8 - 0x131c18
void sub_00131AE8_0x131ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131AE8_0x131ae8");
#endif

    ctx->pc = 0x131ae8u;

    // 0x131ae8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x131ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x131aec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x131aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x131af0: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x131af0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131af4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x131af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x131af8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x131af8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131afc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x131afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x131b00: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x131b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x131b04: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x131b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x131b08: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x131B08u;
    {
        const bool branch_taken_0x131b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x131B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131B08u;
            // 0x131b0c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131b08) {
            ctx->pc = 0x131B18u;
            goto label_131b18;
        }
    }
    ctx->pc = 0x131B10u;
    // 0x131b10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x131B10u;
    {
        const bool branch_taken_0x131b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131B10u;
            // 0x131b14: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131b10) {
            ctx->pc = 0x131B1Cu;
            goto label_131b1c;
        }
    }
    ctx->pc = 0x131B18u;
label_131b18:
    // 0x131b18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x131b18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_131b1c:
    // 0x131b1c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x131b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x131b20: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x131b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131b24: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x131B24u;
    {
        const bool branch_taken_0x131b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x131b24) {
            ctx->pc = 0x131BF8u;
            goto label_131bf8;
        }
    }
    ctx->pc = 0x131B2Cu;
    // 0x131b2c: 0x0  nop
    ctx->pc = 0x131b2cu;
    // NOP
label_131b30:
    // 0x131b30: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x131b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131b34: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x131b34u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x131b38: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x131b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x131b3c: 0x18400022  blez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x131B3Cu;
    {
        const bool branch_taken_0x131b3c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x131b3c) {
            ctx->pc = 0x131BC8u;
            goto label_131bc8;
        }
    }
    ctx->pc = 0x131B44u;
    // 0x131b44: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x131b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_131b48:
    // 0x131b48: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x131b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x131b4c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x131b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x131b50: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x131b50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x131b54: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x131b54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x131b58: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x131b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x131b5c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x131b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x131b60: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x131b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131b64: 0x8c447910  lw          $a0, 0x7910($v0)
    ctx->pc = 0x131b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
    // 0x131b68: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x131b68u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x131b6c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x131b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x131b70: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x131b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x131b74: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x131b74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x131b78: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x131b78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x131b7c: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x131B7Cu;
    SET_GPR_U32(ctx, 31, 0x131B84u);
    ctx->pc = 0x131B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131B7Cu;
            // 0x131b80: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131B84u; }
        if (ctx->pc != 0x131B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131B84u; }
        if (ctx->pc != 0x131B84u) { return; }
    }
    ctx->pc = 0x131B84u;
    // 0x131b84: 0xc04c398  jal         func_130E60
    ctx->pc = 0x131B84u;
    SET_GPR_U32(ctx, 31, 0x131B8Cu);
    ctx->pc = 0x131B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131B84u;
            // 0x131b88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130E60u;
    if (runtime->hasFunction(0x130E60u)) {
        auto targetFn = runtime->lookupFunction(0x130E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131B8Cu; }
        if (ctx->pc != 0x131B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00130E60_0x130e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131B8Cu; }
        if (ctx->pc != 0x131B8Cu) { return; }
    }
    ctx->pc = 0x131B8Cu;
    // 0x131b8c: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x131b8cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x131b90: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x131b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x131b94: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x131b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x131b98: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x131b98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x131b9c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x131b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x131ba0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x131ba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131ba4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x131ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x131ba8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x131ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x131bac: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x131bacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x131bb0: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x131bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x131bb4: 0x40f809  jalr        $v0
    ctx->pc = 0x131BB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x131BBCu);
        ctx->pc = 0x131BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131BB4u;
            // 0x131bb8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x131BBCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x131B18u: goto label_131b18;
            case 0x131B1Cu: goto label_131b1c;
            case 0x131B30u: goto label_131b30;
            case 0x131B48u: goto label_131b48;
            case 0x131BC8u: goto label_131bc8;
            case 0x131BD8u: goto label_131bd8;
            case 0x131BF8u: goto label_131bf8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x131BBCu; }
            if (ctx->pc != 0x131BBCu) { return; }
        }
        }
    }
    ctx->pc = 0x131BBCu;
    // 0x131bbc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x131bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x131bc0: 0x5c40ffe1  bgtzl       $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x131BC0u;
    {
        const bool branch_taken_0x131bc0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x131bc0) {
            ctx->pc = 0x131BC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x131BC0u;
            // 0x131bc4: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x131B48u;
            runtime->cooperativeGuestYield();
            goto label_131b48;
        }
    }
    ctx->pc = 0x131BC8u;
label_131bc8:
    // 0x131bc8: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x131BC8u;
    {
        const bool branch_taken_0x131bc8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x131BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131BC8u;
            // 0x131bcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131bc8) {
            ctx->pc = 0x131BD8u;
            goto label_131bd8;
        }
    }
    ctx->pc = 0x131BD0u;
    // 0x131bd0: 0xc08e608  jal         func_239820
    ctx->pc = 0x131BD0u;
    SET_GPR_U32(ctx, 31, 0x131BD8u);
    ctx->pc = 0x131BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131BD0u;
            // 0x131bd4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239820u;
    if (runtime->hasFunction(0x239820u)) {
        auto targetFn = runtime->lookupFunction(0x239820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131BD8u; }
        if (ctx->pc != 0x131BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239820_0x239820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131BD8u; }
        if (ctx->pc != 0x131BD8u) { return; }
    }
    ctx->pc = 0x131BD8u;
label_131bd8:
    // 0x131bd8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x131bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131bdc: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x131bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x131be0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x131be0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x131be4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x131be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x131be8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x131be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x131bec: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x131BECu;
    {
        const bool branch_taken_0x131bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x131BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131BECu;
            // 0x131bf0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131bec) {
            ctx->pc = 0x131B30u;
            runtime->cooperativeGuestYield();
            goto label_131b30;
        }
    }
    ctx->pc = 0x131BF4u;
    // 0x131bf4: 0x0  nop
    ctx->pc = 0x131bf4u;
    // NOP
label_131bf8:
    // 0x131bf8: 0xc08c2c6  jal         func_230B18
    ctx->pc = 0x131BF8u;
    SET_GPR_U32(ctx, 31, 0x131C00u);
    ctx->pc = 0x131BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131BF8u;
            // 0x131bfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230B18u;
    if (runtime->hasFunction(0x230B18u)) {
        auto targetFn = runtime->lookupFunction(0x230B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131C00u; }
        if (ctx->pc != 0x131C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230B18_0x230b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131C00u; }
        if (ctx->pc != 0x131C00u) { return; }
    }
    ctx->pc = 0x131C00u;
    // 0x131c00: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x131c00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x131c04: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x131c04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x131c08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x131c08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x131c0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x131c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131c10: 0x3e00008  jr          $ra
    ctx->pc = 0x131C10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131C10u;
            // 0x131c14: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x131B18u: goto label_131b18;
            case 0x131B1Cu: goto label_131b1c;
            case 0x131B30u: goto label_131b30;
            case 0x131B48u: goto label_131b48;
            case 0x131BC8u: goto label_131bc8;
            case 0x131BD8u: goto label_131bd8;
            case 0x131BF8u: goto label_131bf8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x131C18u;
}
