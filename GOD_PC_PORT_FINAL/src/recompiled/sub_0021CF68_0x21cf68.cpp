#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021CF68
// Address: 0x21cf68 - 0x21d108
void sub_0021CF68_0x21cf68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021CF68_0x21cf68");
#endif

    ctx->pc = 0x21cf68u;

    // 0x21cf68: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21cf68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21cf6c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21cf6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21cf70: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x21cf70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x21cf74: 0x8c44cb94  lw          $a0, -0x346C($v0)
    ctx->pc = 0x21cf74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x21cf78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21cf78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21cf7c: 0xc06dfb4  jal         func_1B7ED0
    ctx->pc = 0x21CF7Cu;
    SET_GPR_U32(ctx, 31, 0x21CF84u);
    ctx->pc = 0x21CF80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CF7Cu;
            // 0x21cf80: 0xac60e5f0  sw          $zero, -0x1A10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960624), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7ED0u;
    if (runtime->hasFunction(0x1B7ED0u)) {
        auto targetFn = runtime->lookupFunction(0x1B7ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CF84u; }
        if (ctx->pc != 0x21CF84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1b7ed0_0x1b7f08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CF84u; }
        if (ctx->pc != 0x21CF84u) { return; }
    }
    ctx->pc = 0x21CF84u;
    // 0x21cf84: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x21CF84u;
    {
        const bool branch_taken_0x21cf84 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x21CF88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21CF84u;
            // 0x21cf88: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cf84) {
            ctx->pc = 0x21CFB0u;
            goto label_21cfb0;
        }
    }
    ctx->pc = 0x21CF8Cu;
    // 0x21cf8c: 0xc0874f8  jal         func_21D3E0
    ctx->pc = 0x21CF8Cu;
    SET_GPR_U32(ctx, 31, 0x21CF94u);
    ctx->pc = 0x21D3E0u;
    if (runtime->hasFunction(0x21D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CF94u; }
        if (ctx->pc != 0x21CF94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021D3E0_0x21d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CF94u; }
        if (ctx->pc != 0x21CF94u) { return; }
    }
    ctx->pc = 0x21CF94u;
    // 0x21cf94: 0x14400059  bnez        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x21CF94u;
    {
        const bool branch_taken_0x21cf94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21CF98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21CF94u;
            // 0x21cf98: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cf94) {
            ctx->pc = 0x21D0FCu;
            goto label_21d0fc;
        }
    }
    ctx->pc = 0x21CF9Cu;
    // 0x21cf9c: 0xc087442  jal         func_21D108
    ctx->pc = 0x21CF9Cu;
    SET_GPR_U32(ctx, 31, 0x21CFA4u);
    ctx->pc = 0x21D108u;
    if (runtime->hasFunction(0x21D108u)) {
        auto targetFn = runtime->lookupFunction(0x21D108u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CFA4u; }
        if (ctx->pc != 0x21CFA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021D108_0x21d108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CFA4u; }
        if (ctx->pc != 0x21CFA4u) { return; }
    }
    ctx->pc = 0x21CFA4u;
    // 0x21cfa4: 0x14400055  bnez        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x21CFA4u;
    {
        const bool branch_taken_0x21cfa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21CFA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21CFA4u;
            // 0x21cfa8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cfa4) {
            ctx->pc = 0x21D0FCu;
            goto label_21d0fc;
        }
    }
    ctx->pc = 0x21CFACu;
    // 0x21cfac: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21cfacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_21cfb0:
    // 0x21cfb0: 0x8c43e560  lw          $v1, -0x1AA0($v0)
    ctx->pc = 0x21cfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960480)));
    // 0x21cfb4: 0x2c620013  sltiu       $v0, $v1, 0x13
    ctx->pc = 0x21cfb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
    // 0x21cfb8: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x21CFB8u;
    {
        const bool branch_taken_0x21cfb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21CFB8u;
            // 0x21cfbc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cfb8) {
            ctx->pc = 0x21D0FCu;
            goto label_21d0fc;
        }
    }
    ctx->pc = 0x21CFC0u;
    // 0x21cfc0: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x21cfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x21cfc4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21cfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21cfc8: 0x24427f80  addiu       $v0, $v0, 0x7F80
    ctx->pc = 0x21cfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32640));
    // 0x21cfcc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21cfccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21cfd0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21cfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21cfd4: 0x400008  jr          $v0
    ctx->pc = 0x21CFD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21CFDCu: goto label_21cfdc;
            case 0x21CFECu: goto label_21cfec;
            case 0x21CFFCu: goto label_21cffc;
            case 0x21D00Cu: goto label_21d00c;
            case 0x21D01Cu: goto label_21d01c;
            case 0x21D02Cu: goto label_21d02c;
            case 0x21D03Cu: goto label_21d03c;
            case 0x21D04Cu: goto label_21d04c;
            case 0x21D05Cu: goto label_21d05c;
            case 0x21D06Cu: goto label_21d06c;
            case 0x21D07Cu: goto label_21d07c;
            case 0x21D08Cu: goto label_21d08c;
            case 0x21D09Cu: goto label_21d09c;
            case 0x21D0ACu: goto label_21d0ac;
            case 0x21D0BCu: goto label_21d0bc;
            case 0x21D0CCu: goto label_21d0cc;
            case 0x21D0DCu: goto label_21d0dc;
            case 0x21D0ECu: goto label_21d0ec;
            case 0x21D0F8u: goto label_21d0f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21CFDCu;
label_21cfdc:
    // 0x21cfdc: 0xc087a62  jal         func_21E988
    ctx->pc = 0x21CFDCu;
    SET_GPR_U32(ctx, 31, 0x21CFE4u);
    ctx->pc = 0x21E988u;
    if (runtime->hasFunction(0x21E988u)) {
        auto targetFn = runtime->lookupFunction(0x21E988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CFE4u; }
        if (ctx->pc != 0x21CFE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021E988_0x21e988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CFE4u; }
        if (ctx->pc != 0x21CFE4u) { return; }
    }
    ctx->pc = 0x21CFE4u;
    // 0x21cfe4: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x21CFE4u;
    {
        const bool branch_taken_0x21cfe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21CFE4u;
            // 0x21cfe8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cfe4) {
            ctx->pc = 0x21D0FCu;
            goto label_21d0fc;
        }
    }
    ctx->pc = 0x21CFECu;
label_21cfec:
    // 0x21cfec: 0xc087a9a  jal         func_21EA68
    ctx->pc = 0x21CFECu;
    SET_GPR_U32(ctx, 31, 0x21CFF4u);
    ctx->pc = 0x21EA68u;
    if (runtime->hasFunction(0x21EA68u)) {
        auto targetFn = runtime->lookupFunction(0x21EA68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CFF4u; }
        if (ctx->pc != 0x21CFF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021EA68_0x21ea68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CFF4u; }
        if (ctx->pc != 0x21CFF4u) { return; }
    }
    ctx->pc = 0x21CFF4u;
    // 0x21cff4: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x21CFF4u;
    {
        const bool branch_taken_0x21cff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CFF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21CFF4u;
            // 0x21cff8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cff4) {
            ctx->pc = 0x21D0FCu;
            goto label_21d0fc;
        }
    }
    ctx->pc = 0x21CFFCu;
label_21cffc:
    // 0x21cffc: 0xc087adc  jal         func_21EB70
    ctx->pc = 0x21CFFCu;
    SET_GPR_U32(ctx, 31, 0x21D004u);
    ctx->pc = 0x21EB70u;
    if (runtime->hasFunction(0x21EB70u)) {
        auto targetFn = runtime->lookupFunction(0x21EB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D004u; }
        if (ctx->pc != 0x21D004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021EB70_0x21eb70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D004u; }
        if (ctx->pc != 0x21D004u) { return; }
    }
    ctx->pc = 0x21D004u;
    // 0x21d004: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x21D004u;
    {
        const bool branch_taken_0x21d004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D004u;
            // 0x21d008: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d004) {
            ctx->pc = 0x21D0FCu;
            goto label_21d0fc;
        }
    }
    ctx->pc = 0x21D00Cu;
label_21d00c:
    // 0x21d00c: 0xc087afe  jal         func_21EBF8
    ctx->pc = 0x21D00Cu;
    SET_GPR_U32(ctx, 31, 0x21D014u);
    ctx->pc = 0x21EBF8u;
    if (runtime->hasFunction(0x21EBF8u)) {
        auto targetFn = runtime->lookupFunction(0x21EBF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D014u; }
        if (ctx->pc != 0x21D014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021EBF8_0x21ebf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D014u; }
        if (ctx->pc != 0x21D014u) { return; }
    }
    ctx->pc = 0x21D014u;
    // 0x21d014: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x21D014u;
    {
        const bool branch_taken_0x21d014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D014u;
            // 0x21d018: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d014) {
            ctx->pc = 0x21D0FCu;
            goto label_21d0fc;
        }
    }
    ctx->pc = 0x21D01Cu;
label_21d01c:
    // 0x21d01c: 0xc087b42  jal         func_21ED08
    ctx->pc = 0x21D01Cu;
    SET_GPR_U32(ctx, 31, 0x21D024u);
    ctx->pc = 0x21ED08u;
    if (runtime->hasFunction(0x21ED08u)) {
        auto targetFn = runtime->lookupFunction(0x21ED08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D024u; }
        if (ctx->pc != 0x21D024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021ED08_0x21ed08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D024u; }
        if (ctx->pc != 0x21D024u) { return; }
    }
    ctx->pc = 0x21D024u;
    // 0x21d024: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x21D024u;
    {
        const bool branch_taken_0x21d024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D024u;
            // 0x21d028: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d024) {
            ctx->pc = 0x21D0FCu;
            goto label_21d0fc;
        }
    }
    ctx->pc = 0x21D02Cu;
label_21d02c:
    // 0x21d02c: 0xc087b70  jal         func_21EDC0
    ctx->pc = 0x21D02Cu;
    SET_GPR_U32(ctx, 31, 0x21D034u);
    ctx->pc = 0x21EDC0u;
    if (runtime->hasFunction(0x21EDC0u)) {
        auto targetFn = runtime->lookupFunction(0x21EDC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D034u; }
        if (ctx->pc != 0x21D034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021EDC0_0x21edc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D034u; }
        if (ctx->pc != 0x21D034u) { return; }
    }
    ctx->pc = 0x21D034u;
    // 0x21d034: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x21D034u;
    {
        const bool branch_taken_0x21d034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D034u;
            // 0x21d038: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d034) {
            ctx->pc = 0x21D0FCu;
            goto label_21d0fc;
        }
    }
    ctx->pc = 0x21D03Cu;
label_21d03c:
    // 0x21d03c: 0xc087bb6  jal         func_21EED8
    ctx->pc = 0x21D03Cu;
    SET_GPR_U32(ctx, 31, 0x21D044u);
    ctx->pc = 0x21EED8u;
    if (runtime->hasFunction(0x21EED8u)) {
        auto targetFn = runtime->lookupFunction(0x21EED8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D044u; }
        if (ctx->pc != 0x21D044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021EED8_0x21eed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D044u; }
        if (ctx->pc != 0x21D044u) { return; }
    }
    ctx->pc = 0x21D044u;
    // 0x21d044: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x21D044u;
    {
        const bool branch_taken_0x21d044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D044u;
            // 0x21d048: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d044) {
            ctx->pc = 0x21D0FCu;
            goto label_21d0fc;
        }
    }
    ctx->pc = 0x21D04Cu;
label_21d04c:
    // 0x21d04c: 0xc087b8c  jal         func_21EE30
    ctx->pc = 0x21D04Cu;
    SET_GPR_U32(ctx, 31, 0x21D054u);
    ctx->pc = 0x21EE30u;
    if (runtime->hasFunction(0x21EE30u)) {
        auto targetFn = runtime->lookupFunction(0x21EE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D054u; }
        if (ctx->pc != 0x21D054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021EE30_0x21ee30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D054u; }
        if (ctx->pc != 0x21D054u) { return; }
    }
    ctx->pc = 0x21D054u;
    // 0x21d054: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x21D054u;
    {
        const bool branch_taken_0x21d054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D054u;
            // 0x21d058: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d054) {
            ctx->pc = 0x21D0FCu;
            goto label_21d0fc;
        }
    }
    ctx->pc = 0x21D05Cu;
label_21d05c:
    // 0x21d05c: 0xc087bea  jal         func_21EFA8
    ctx->pc = 0x21D05Cu;
    SET_GPR_U32(ctx, 31, 0x21D064u);
    ctx->pc = 0x21EFA8u;
    if (runtime->hasFunction(0x21EFA8u)) {
        auto targetFn = runtime->lookupFunction(0x21EFA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D064u; }
        if (ctx->pc != 0x21D064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021EFA8_0x21efa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D064u; }
        if (ctx->pc != 0x21D064u) { return; }
    }
    ctx->pc = 0x21D064u;
    // 0x21d064: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x21D064u;
    {
        const bool branch_taken_0x21d064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D064u;
            // 0x21d068: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d064) {
            ctx->pc = 0x21D0FCu;
            goto label_21d0fc;
        }
    }
    ctx->pc = 0x21D06Cu;
label_21d06c:
    // 0x21d06c: 0xc087c60  jal         func_21F180
    ctx->pc = 0x21D06Cu;
    SET_GPR_U32(ctx, 31, 0x21D074u);
    ctx->pc = 0x21F180u;
    if (runtime->hasFunction(0x21F180u)) {
        auto targetFn = runtime->lookupFunction(0x21F180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D074u; }
        if (ctx->pc != 0x21D074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021F180_0x21f180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D074u; }
        if (ctx->pc != 0x21D074u) { return; }
    }
    ctx->pc = 0x21D074u;
    // 0x21d074: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x21D074u;
    {
        const bool branch_taken_0x21d074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D074u;
            // 0x21d078: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d074) {
            ctx->pc = 0x21D0FCu;
            goto label_21d0fc;
        }
    }
    ctx->pc = 0x21D07Cu;
label_21d07c:
    // 0x21d07c: 0xc087cca  jal         func_21F328
    ctx->pc = 0x21D07Cu;
    SET_GPR_U32(ctx, 31, 0x21D084u);
    ctx->pc = 0x21F328u;
    if (runtime->hasFunction(0x21F328u)) {
        auto targetFn = runtime->lookupFunction(0x21F328u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D084u; }
        if (ctx->pc != 0x21D084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021F328_0x21f328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D084u; }
        if (ctx->pc != 0x21D084u) { return; }
    }
    ctx->pc = 0x21D084u;
    // 0x21d084: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x21D084u;
    {
        const bool branch_taken_0x21d084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D084u;
            // 0x21d088: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d084) {
            ctx->pc = 0x21D0FCu;
            goto label_21d0fc;
        }
    }
    ctx->pc = 0x21D08Cu;
label_21d08c:
    // 0x21d08c: 0xc087cf2  jal         func_21F3C8
    ctx->pc = 0x21D08Cu;
    SET_GPR_U32(ctx, 31, 0x21D094u);
    ctx->pc = 0x21F3C8u;
    if (runtime->hasFunction(0x21F3C8u)) {
        auto targetFn = runtime->lookupFunction(0x21F3C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D094u; }
        if (ctx->pc != 0x21D094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021F3C8_0x21f3c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D094u; }
        if (ctx->pc != 0x21D094u) { return; }
    }
    ctx->pc = 0x21D094u;
    // 0x21d094: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x21D094u;
    {
        const bool branch_taken_0x21d094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D094u;
            // 0x21d098: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d094) {
            ctx->pc = 0x21D0FCu;
            goto label_21d0fc;
        }
    }
    ctx->pc = 0x21D09Cu;
label_21d09c:
    // 0x21d09c: 0xc087d8e  jal         func_21F638
    ctx->pc = 0x21D09Cu;
    SET_GPR_U32(ctx, 31, 0x21D0A4u);
    ctx->pc = 0x21F638u;
    if (runtime->hasFunction(0x21F638u)) {
        auto targetFn = runtime->lookupFunction(0x21F638u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D0A4u; }
        if (ctx->pc != 0x21D0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021F638_0x21f638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D0A4u; }
        if (ctx->pc != 0x21D0A4u) { return; }
    }
    ctx->pc = 0x21D0A4u;
    // 0x21d0a4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x21D0A4u;
    {
        const bool branch_taken_0x21d0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D0A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D0A4u;
            // 0x21d0a8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d0a4) {
            ctx->pc = 0x21D0FCu;
            goto label_21d0fc;
        }
    }
    ctx->pc = 0x21D0ACu;
label_21d0ac:
    // 0x21d0ac: 0xc087dcc  jal         func_21F730
    ctx->pc = 0x21D0ACu;
    SET_GPR_U32(ctx, 31, 0x21D0B4u);
    ctx->pc = 0x21F730u;
    if (runtime->hasFunction(0x21F730u)) {
        auto targetFn = runtime->lookupFunction(0x21F730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D0B4u; }
        if (ctx->pc != 0x21D0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021F730_0x21f730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D0B4u; }
        if (ctx->pc != 0x21D0B4u) { return; }
    }
    ctx->pc = 0x21D0B4u;
    // 0x21d0b4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x21D0B4u;
    {
        const bool branch_taken_0x21d0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D0B4u;
            // 0x21d0b8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d0b4) {
            ctx->pc = 0x21D0FCu;
            goto label_21d0fc;
        }
    }
    ctx->pc = 0x21D0BCu;
label_21d0bc:
    // 0x21d0bc: 0xc087de6  jal         func_21F798
    ctx->pc = 0x21D0BCu;
    SET_GPR_U32(ctx, 31, 0x21D0C4u);
    ctx->pc = 0x21F798u;
    if (runtime->hasFunction(0x21F798u)) {
        auto targetFn = runtime->lookupFunction(0x21F798u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D0C4u; }
        if (ctx->pc != 0x21D0C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021F798_0x21f798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D0C4u; }
        if (ctx->pc != 0x21D0C4u) { return; }
    }
    ctx->pc = 0x21D0C4u;
    // 0x21d0c4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x21D0C4u;
    {
        const bool branch_taken_0x21d0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D0C4u;
            // 0x21d0c8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d0c4) {
            ctx->pc = 0x21D0FCu;
            goto label_21d0fc;
        }
    }
    ctx->pc = 0x21D0CCu;
label_21d0cc:
    // 0x21d0cc: 0xc087e46  jal         func_21F918
    ctx->pc = 0x21D0CCu;
    SET_GPR_U32(ctx, 31, 0x21D0D4u);
    ctx->pc = 0x21F918u;
    if (runtime->hasFunction(0x21F918u)) {
        auto targetFn = runtime->lookupFunction(0x21F918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D0D4u; }
        if (ctx->pc != 0x21D0D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021F918_0x21f918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D0D4u; }
        if (ctx->pc != 0x21D0D4u) { return; }
    }
    ctx->pc = 0x21D0D4u;
    // 0x21d0d4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x21D0D4u;
    {
        const bool branch_taken_0x21d0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D0D4u;
            // 0x21d0d8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d0d4) {
            ctx->pc = 0x21D0FCu;
            goto label_21d0fc;
        }
    }
    ctx->pc = 0x21D0DCu;
label_21d0dc:
    // 0x21d0dc: 0xc087e90  jal         func_21FA40
    ctx->pc = 0x21D0DCu;
    SET_GPR_U32(ctx, 31, 0x21D0E4u);
    ctx->pc = 0x21FA40u;
    if (runtime->hasFunction(0x21FA40u)) {
        auto targetFn = runtime->lookupFunction(0x21FA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D0E4u; }
        if (ctx->pc != 0x21D0E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FA40_0x21fa40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D0E4u; }
        if (ctx->pc != 0x21D0E4u) { return; }
    }
    ctx->pc = 0x21D0E4u;
    // 0x21d0e4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21D0E4u;
    {
        const bool branch_taken_0x21d0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D0E4u;
            // 0x21d0e8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d0e4) {
            ctx->pc = 0x21D0FCu;
            goto label_21d0fc;
        }
    }
    ctx->pc = 0x21D0ECu;
label_21d0ec:
    // 0x21d0ec: 0xc087ede  jal         func_21FB78
    ctx->pc = 0x21D0ECu;
    SET_GPR_U32(ctx, 31, 0x21D0F4u);
    ctx->pc = 0x21FB78u;
    if (runtime->hasFunction(0x21FB78u)) {
        auto targetFn = runtime->lookupFunction(0x21FB78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D0F4u; }
        if (ctx->pc != 0x21D0F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FB78_0x21fb78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D0F4u; }
        if (ctx->pc != 0x21D0F4u) { return; }
    }
    ctx->pc = 0x21D0F4u;
    // 0x21d0f4: 0x0  nop
    ctx->pc = 0x21d0f4u;
    // NOP
label_21d0f8:
    // 0x21d0f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21d0f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21d0fc:
    // 0x21d0fc: 0x3e00008  jr          $ra
    ctx->pc = 0x21D0FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D0FCu;
            // 0x21d100: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21CFB0u: goto label_21cfb0;
            case 0x21CFDCu: goto label_21cfdc;
            case 0x21CFECu: goto label_21cfec;
            case 0x21CFFCu: goto label_21cffc;
            case 0x21D00Cu: goto label_21d00c;
            case 0x21D01Cu: goto label_21d01c;
            case 0x21D02Cu: goto label_21d02c;
            case 0x21D03Cu: goto label_21d03c;
            case 0x21D04Cu: goto label_21d04c;
            case 0x21D05Cu: goto label_21d05c;
            case 0x21D06Cu: goto label_21d06c;
            case 0x21D07Cu: goto label_21d07c;
            case 0x21D08Cu: goto label_21d08c;
            case 0x21D09Cu: goto label_21d09c;
            case 0x21D0ACu: goto label_21d0ac;
            case 0x21D0BCu: goto label_21d0bc;
            case 0x21D0CCu: goto label_21d0cc;
            case 0x21D0DCu: goto label_21d0dc;
            case 0x21D0ECu: goto label_21d0ec;
            case 0x21D0F8u: goto label_21d0f8;
            case 0x21D0FCu: goto label_21d0fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21D104u;
    // 0x21d104: 0x0  nop
    ctx->pc = 0x21d104u;
    // NOP
}
