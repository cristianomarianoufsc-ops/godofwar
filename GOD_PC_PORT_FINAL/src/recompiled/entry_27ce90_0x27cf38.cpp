#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_27ce90
// Address: 0x27ce90 - 0x27cf38
void entry_27ce90_0x27cf38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_27ce90_0x27cf38");
#endif

    ctx->pc = 0x27ce90u;

    // 0x27ce90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27ce90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27ce94: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x27ce94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x27ce98: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x27ce98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x27ce9c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x27ce9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27cea0: 0x24520380  addiu       $s2, $v0, 0x380
    ctx->pc = 0x27cea0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x27cea4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27cea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27cea8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x27cea8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ceac: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x27ceacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x27ceb0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x27ceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x27ceb4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27CEB4u;
    {
        const bool branch_taken_0x27ceb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27CEB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CEB4u;
            // 0x27ceb8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ceb4) {
            ctx->pc = 0x27CEC4u;
            goto label_27cec4;
        }
    }
    ctx->pc = 0x27CEBCu;
    // 0x27cebc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x27CEBCu;
    {
        const bool branch_taken_0x27cebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CEC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CEBCu;
            // 0x27cec0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cebc) {
            ctx->pc = 0x27CF1Cu;
            goto label_27cf1c;
        }
    }
    ctx->pc = 0x27CEC4u;
label_27cec4:
    // 0x27cec4: 0x56200001  bnel        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x27CEC4u;
    {
        const bool branch_taken_0x27cec4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x27cec4) {
            ctx->pc = 0x27CEC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27CEC4u;
            // 0x27cec8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27CECCu;
            goto label_27cecc;
        }
    }
    ctx->pc = 0x27CECCu;
label_27cecc:
    // 0x27cecc: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27CECCu;
    {
        const bool branch_taken_0x27cecc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x27CED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CECCu;
            // 0x27ced0: 0x3c020031  lui         $v0, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cecc) {
            ctx->pc = 0x27CEE4u;
            goto label_27cee4;
        }
    }
    ctx->pc = 0x27CED4u;
    // 0x27ced4: 0xc0a4f18  jal         func_293C60
    ctx->pc = 0x27CED4u;
    SET_GPR_U32(ctx, 31, 0x27CEDCu);
    ctx->pc = 0x27CED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CED4u;
            // 0x27ced8: 0x8c4408a8  lw          $a0, 0x8A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2216)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C60u;
    if (runtime->hasFunction(0x293C60u)) {
        auto targetFn = runtime->lookupFunction(0x293C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CEDCu; }
        if (ctx->pc != 0x27CEDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c60_0x293c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CEDCu; }
        if (ctx->pc != 0x27CEDCu) { return; }
    }
    ctx->pc = 0x27CEDCu;
    // 0x27cedc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x27CEDCu;
    {
        const bool branch_taken_0x27cedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cedc) {
            ctx->pc = 0x27CEF4u;
            goto label_27cef4;
        }
    }
    ctx->pc = 0x27CEE4u;
label_27cee4:
    // 0x27cee4: 0xc0a4f1c  jal         func_293C70
    ctx->pc = 0x27CEE4u;
    SET_GPR_U32(ctx, 31, 0x27CEECu);
    ctx->pc = 0x27CEE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CEE4u;
            // 0x27cee8: 0x8c4408a8  lw          $a0, 0x8A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2216)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C70u;
    if (runtime->hasFunction(0x293C70u)) {
        auto targetFn = runtime->lookupFunction(0x293C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CEECu; }
        if (ctx->pc != 0x27CEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293c70_0x293cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CEECu; }
        if (ctx->pc != 0x27CEECu) { return; }
    }
    ctx->pc = 0x27CEECu;
    // 0x27ceec: 0x440000b  bltz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x27CEECu;
    {
        const bool branch_taken_0x27ceec = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x27CEF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CEECu;
            // 0x27cef0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ceec) {
            ctx->pc = 0x27CF1Cu;
            goto label_27cf1c;
        }
    }
    ctx->pc = 0x27CEF4u;
label_27cef4:
    // 0x27cef4: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27CEF4u;
    {
        const bool branch_taken_0x27cef4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cef4) {
            ctx->pc = 0x27CF04u;
            goto label_27cf04;
        }
    }
    ctx->pc = 0x27CEFCu;
    // 0x27cefc: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x27cefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x27cf00: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x27cf00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_27cf04:
    // 0x27cf04: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x27CF04u;
    {
        const bool branch_taken_0x27cf04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cf04) {
            ctx->pc = 0x27CF08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27CF04u;
            // 0x27cf08: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27CF18u;
            goto label_27cf18;
        }
    }
    ctx->pc = 0x27CF0Cu;
    // 0x27cf0c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x27cf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x27cf10: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x27cf10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x27cf14: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x27cf14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_27cf18:
    // 0x27cf18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27cf18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27cf1c:
    // 0x27cf1c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x27cf1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27cf20: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x27cf20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27cf24: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x27cf24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27cf28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27cf28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27cf2c: 0x3e00008  jr          $ra
    ctx->pc = 0x27CF2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27CF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CF2Cu;
            // 0x27cf30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27CEC4u: goto label_27cec4;
            case 0x27CECCu: goto label_27cecc;
            case 0x27CEE4u: goto label_27cee4;
            case 0x27CEF4u: goto label_27cef4;
            case 0x27CF04u: goto label_27cf04;
            case 0x27CF18u: goto label_27cf18;
            case 0x27CF1Cu: goto label_27cf1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27CF34u;
    // 0x27cf34: 0x0  nop
    ctx->pc = 0x27cf34u;
    // NOP
}
