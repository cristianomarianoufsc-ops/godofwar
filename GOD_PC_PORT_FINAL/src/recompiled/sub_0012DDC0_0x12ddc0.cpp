#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012DDC0
// Address: 0x12ddc0 - 0x12de70
void sub_0012DDC0_0x12ddc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012DDC0_0x12ddc0");
#endif

    ctx->pc = 0x12ddc0u;

    // 0x12ddc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x12ddc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x12ddc4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x12ddc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x12ddc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x12ddc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x12ddcc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12ddccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ddd0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x12ddd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x12ddd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12ddd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12ddd8: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x12ddd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x12dddc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12DDDCu;
    {
        const bool branch_taken_0x12dddc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DDE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DDDCu;
            // 0x12dde0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dddc) {
            ctx->pc = 0x12DDECu;
            goto label_12ddec;
        }
    }
    ctx->pc = 0x12DDE4u;
    // 0x12dde4: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x12DDE4u;
    SET_GPR_U32(ctx, 31, 0x12DDECu);
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DDECu; }
        if (ctx->pc != 0x12DDECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DDECu; }
        if (ctx->pc != 0x12DDECu) { return; }
    }
    ctx->pc = 0x12DDECu;
label_12ddec:
    // 0x12ddec: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x12ddecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x12ddf0: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x12DDF0u;
    {
        const bool branch_taken_0x12ddf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DDF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DDF0u;
            // 0x12ddf4: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ddf0) {
            ctx->pc = 0x12DE48u;
            goto label_12de48;
        }
    }
    ctx->pc = 0x12DDF8u;
    // 0x12ddf8: 0xc05e394  jal         func_178E50
    ctx->pc = 0x12DDF8u;
    SET_GPR_U32(ctx, 31, 0x12DE00u);
    ctx->pc = 0x12DDFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12DDF8u;
            // 0x12ddfc: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178E50u;
    if (runtime->hasFunction(0x178E50u)) {
        auto targetFn = runtime->lookupFunction(0x178E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DE00u; }
        if (ctx->pc != 0x12DE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_178e50_0x178e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DE00u; }
        if (ctx->pc != 0x12DE00u) { return; }
    }
    ctx->pc = 0x12DE00u;
    // 0x12de00: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x12de00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x12de04: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x12de04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12de08: 0x1050000a  beq         $v0, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x12DE08u;
    {
        const bool branch_taken_0x12de08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x12DE0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DE08u;
            // 0x12de0c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12de08) {
            ctx->pc = 0x12DE34u;
            goto label_12de34;
        }
    }
    ctx->pc = 0x12DE10u;
    // 0x12de10: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x12de10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12de14: 0x0  nop
    ctx->pc = 0x12de14u;
    // NOP
label_12de18:
    // 0x12de18: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x12de18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12de1c: 0xc05e374  jal         func_178DD0
    ctx->pc = 0x12DE1Cu;
    SET_GPR_U32(ctx, 31, 0x12DE24u);
    ctx->pc = 0x12DE20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12DE1Cu;
            // 0x12de20: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178DD0u;
    if (runtime->hasFunction(0x178DD0u)) {
        auto targetFn = runtime->lookupFunction(0x178DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DE24u; }
        if (ctx->pc != 0x12DE24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_178dd0_0x178df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DE24u; }
        if (ctx->pc != 0x12DE24u) { return; }
    }
    ctx->pc = 0x12DE24u;
    // 0x12de24: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x12de24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12de28: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12de28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12de2c: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12DE2Cu;
    {
        const bool branch_taken_0x12de2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12DE30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DE2Cu;
            // 0x12de30: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12de2c) {
            ctx->pc = 0x12DE18u;
            runtime->cooperativeGuestYield();
            goto label_12de18;
        }
    }
    ctx->pc = 0x12DE34u;
label_12de34:
    // 0x12de34: 0xae100000  sw          $s0, 0x0($s0)
    ctx->pc = 0x12de34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
    // 0x12de38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12de38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12de3c: 0xc08e204  jal         func_238810
    ctx->pc = 0x12DE3Cu;
    SET_GPR_U32(ctx, 31, 0x12DE44u);
    ctx->pc = 0x12DE40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12DE3Cu;
            // 0x12de40: 0xae100004  sw          $s0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238810u;
    if (runtime->hasFunction(0x238810u)) {
        auto targetFn = runtime->lookupFunction(0x238810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DE44u; }
        if (ctx->pc != 0x12DE44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238810_0x238810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DE44u; }
        if (ctx->pc != 0x12DE44u) { return; }
    }
    ctx->pc = 0x12DE44u;
    // 0x12de44: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x12de44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_12de48:
    // 0x12de48: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12DE48u;
    {
        const bool branch_taken_0x12de48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DE48u;
            // 0x12de4c: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12de48) {
            ctx->pc = 0x12DE58u;
            goto label_12de58;
        }
    }
    ctx->pc = 0x12DE50u;
    // 0x12de50: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x12DE50u;
    SET_GPR_U32(ctx, 31, 0x12DE58u);
    ctx->pc = 0x12DE54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12DE50u;
            // 0x12de54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DE58u; }
        if (ctx->pc != 0x12DE58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DE58u; }
        if (ctx->pc != 0x12DE58u) { return; }
    }
    ctx->pc = 0x12DE58u;
label_12de58:
    // 0x12de58: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x12de58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12de5c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x12de5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12de60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12de60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12de64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12de64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12de68: 0x3e00008  jr          $ra
    ctx->pc = 0x12DE68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DE6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DE68u;
            // 0x12de6c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12DDECu: goto label_12ddec;
            case 0x12DE18u: goto label_12de18;
            case 0x12DE34u: goto label_12de34;
            case 0x12DE48u: goto label_12de48;
            case 0x12DE58u: goto label_12de58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12DE70u;
}
