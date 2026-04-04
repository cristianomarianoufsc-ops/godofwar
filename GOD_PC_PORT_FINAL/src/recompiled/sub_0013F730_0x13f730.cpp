#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013F730
// Address: 0x13f730 - 0x13f7c8
void sub_0013F730_0x13f730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013F730_0x13f730");
#endif

    ctx->pc = 0x13f730u;

    // 0x13f730: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13f730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13f734: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13f734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13f738: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13f738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13f73c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13f73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13f740: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13F740u;
    {
        const bool branch_taken_0x13f740 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x13F744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F740u;
            // 0x13f744: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f740) {
            ctx->pc = 0x13F758u;
            goto label_13f758;
        }
    }
    ctx->pc = 0x13F748u;
    // 0x13f748: 0xc0a4fb4  jal         func_293ED0
    ctx->pc = 0x13F748u;
    SET_GPR_U32(ctx, 31, 0x13F750u);
    ctx->pc = 0x13F74Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F748u;
            // 0x13f74c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293ED0u;
    if (runtime->hasFunction(0x293ED0u)) {
        auto targetFn = runtime->lookupFunction(0x293ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F750u; }
        if (ctx->pc != 0x13F750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293ed0_0x293ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F750u; }
        if (ctx->pc != 0x13F750u) { return; }
    }
    ctx->pc = 0x13F750u;
    // 0x13f750: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13F750u;
    {
        const bool branch_taken_0x13f750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F750u;
            // 0x13f754: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f750) {
            ctx->pc = 0x13F764u;
            goto label_13f764;
        }
    }
    ctx->pc = 0x13F758u;
label_13f758:
    // 0x13f758: 0xc0a4fa8  jal         func_293EA0
    ctx->pc = 0x13F758u;
    SET_GPR_U32(ctx, 31, 0x13F760u);
    ctx->pc = 0x13F75Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F758u;
            // 0x13f75c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293EA0u;
    if (runtime->hasFunction(0x293EA0u)) {
        auto targetFn = runtime->lookupFunction(0x293EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F760u; }
        if (ctx->pc != 0x13F760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293ea0_0x293ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F760u; }
        if (ctx->pc != 0x13F760u) { return; }
    }
    ctx->pc = 0x13F760u;
    // 0x13f760: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13f760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13f764:
    // 0x13f764: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13F764u;
    {
        const bool branch_taken_0x13f764 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x13F768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F764u;
            // 0x13f768: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f764) {
            ctx->pc = 0x13F788u;
            goto label_13f788;
        }
    }
    ctx->pc = 0x13F76Cu;
    // 0x13f76c: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x13F76Cu;
    {
        const bool branch_taken_0x13f76c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f76c) {
            ctx->pc = 0x13F770u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13F76Cu;
            // 0x13f770: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13F7BCu;
            goto label_13f7bc;
        }
    }
    ctx->pc = 0x13F774u;
    // 0x13f774: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x13f774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13f778: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13F778u;
    {
        const bool branch_taken_0x13f778 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x13F77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F778u;
            // 0x13f77c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f778) {
            ctx->pc = 0x13F7A4u;
            goto label_13f7a4;
        }
    }
    ctx->pc = 0x13F780u;
    // 0x13f780: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x13F780u;
    {
        const bool branch_taken_0x13f780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F780u;
            // 0x13f784: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f780) {
            ctx->pc = 0x13F7C0u;
            goto label_13f7c0;
        }
    }
    ctx->pc = 0x13F788u;
label_13f788:
    // 0x13f788: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x13f788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x13f78c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x13f78cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x13f790: 0x8c441020  lw          $a0, 0x1020($v0)
    ctx->pc = 0x13f790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4128)));
    // 0x13f794: 0xc09e884  jal         func_27A210
    ctx->pc = 0x13F794u;
    SET_GPR_U32(ctx, 31, 0x13F79Cu);
    ctx->pc = 0x13F798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F794u;
            // 0x13f798: 0x8c65101c  lw          $a1, 0x101C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4124)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27A210u;
    if (runtime->hasFunction(0x27A210u)) {
        auto targetFn = runtime->lookupFunction(0x27A210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F79Cu; }
        if (ctx->pc != 0x13F79Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_27a210_0x27a298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F79Cu; }
        if (ctx->pc != 0x13F79Cu) { return; }
    }
    ctx->pc = 0x13F79Cu;
    // 0x13f79c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x13F79Cu;
    {
        const bool branch_taken_0x13f79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F7A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F79Cu;
            // 0x13f7a0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f79c) {
            ctx->pc = 0x13F7BCu;
            goto label_13f7bc;
        }
    }
    ctx->pc = 0x13F7A4u;
label_13f7a4:
    // 0x13f7a4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x13f7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x13f7a8: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x13f7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x13f7ac: 0x8c441024  lw          $a0, 0x1024($v0)
    ctx->pc = 0x13f7acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4132)));
    // 0x13f7b0: 0xc09e884  jal         func_27A210
    ctx->pc = 0x13F7B0u;
    SET_GPR_U32(ctx, 31, 0x13F7B8u);
    ctx->pc = 0x13F7B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F7B0u;
            // 0x13f7b4: 0x8c65101c  lw          $a1, 0x101C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4124)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27A210u;
    if (runtime->hasFunction(0x27A210u)) {
        auto targetFn = runtime->lookupFunction(0x27A210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F7B8u; }
        if (ctx->pc != 0x13F7B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_27a210_0x27a298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F7B8u; }
        if (ctx->pc != 0x13F7B8u) { return; }
    }
    ctx->pc = 0x13F7B8u;
    // 0x13f7b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13f7b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13f7bc:
    // 0x13f7bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13f7bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13f7c0:
    // 0x13f7c0: 0x3e00008  jr          $ra
    ctx->pc = 0x13F7C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F7C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F7C0u;
            // 0x13f7c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13F758u: goto label_13f758;
            case 0x13F764u: goto label_13f764;
            case 0x13F788u: goto label_13f788;
            case 0x13F7A4u: goto label_13f7a4;
            case 0x13F7BCu: goto label_13f7bc;
            case 0x13F7C0u: goto label_13f7c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13F7C8u;
}
