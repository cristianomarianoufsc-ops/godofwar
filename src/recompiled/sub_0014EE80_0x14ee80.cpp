#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014EE80
// Address: 0x14ee80 - 0x14ef00
void sub_0014EE80_0x14ee80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014EE80_0x14ee80");
#endif

    ctx->pc = 0x14ee80u;

    // 0x14ee80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14ee80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14ee84: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14ee84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14ee88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14ee88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14ee8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14ee8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ee90: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x14ee90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14ee94: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14EE94u;
    {
        const bool branch_taken_0x14ee94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ee94) {
            ctx->pc = 0x14EE98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14EE94u;
            // 0x14ee98: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14EEACu;
            goto label_14eeac;
        }
    }
    ctx->pc = 0x14EE9Cu;
    // 0x14ee9c: 0xc05404e  jal         func_150138
    ctx->pc = 0x14EE9Cu;
    SET_GPR_U32(ctx, 31, 0x14EEA4u);
    ctx->pc = 0x14EEA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14EE9Cu;
            // 0x14eea0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x150138u;
    if (runtime->hasFunction(0x150138u)) {
        auto targetFn = runtime->lookupFunction(0x150138u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EEA4u; }
        if (ctx->pc != 0x14EEA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_150138_0x1501c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EEA4u; }
        if (ctx->pc != 0x14EEA4u) { return; }
    }
    ctx->pc = 0x14EEA4u;
    // 0x14eea4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x14EEA4u;
    {
        const bool branch_taken_0x14eea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EEA4u;
            // 0x14eea8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eea4) {
            ctx->pc = 0x14EEF4u;
            goto label_14eef4;
        }
    }
    ctx->pc = 0x14EEACu;
label_14eeac:
    // 0x14eeac: 0x90620030  lbu         $v0, 0x30($v1)
    ctx->pc = 0x14eeacu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x14eeb0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14eeb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x14eeb4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14EEB4u;
    {
        const bool branch_taken_0x14eeb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14eeb4) {
            ctx->pc = 0x14EED8u;
            goto label_14eed8;
        }
    }
    ctx->pc = 0x14EEBCu;
    // 0x14eebc: 0x9467001e  lhu         $a3, 0x1E($v1)
    ctx->pc = 0x14eebcu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
    // 0x14eec0: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x14eec0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14eec4: 0x84650014  lh          $a1, 0x14($v1)
    ctx->pc = 0x14eec4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x14eec8: 0xc05395c  jal         func_14E570
    ctx->pc = 0x14EEC8u;
    SET_GPR_U32(ctx, 31, 0x14EED0u);
    ctx->pc = 0x14EECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14EEC8u;
            // 0x14eecc: 0x84660016  lh          $a2, 0x16($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 22)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E570u;
    if (runtime->hasFunction(0x14E570u)) {
        auto targetFn = runtime->lookupFunction(0x14E570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EED0u; }
        if (ctx->pc != 0x14EED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E570_0x14e570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EED0u; }
        if (ctx->pc != 0x14EED0u) { return; }
    }
    ctx->pc = 0x14EED0u;
    // 0x14eed0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14EED0u;
    {
        const bool branch_taken_0x14eed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EED0u;
            // 0x14eed4: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eed0) {
            ctx->pc = 0x14EEE4u;
            goto label_14eee4;
        }
    }
    ctx->pc = 0x14EED8u;
label_14eed8:
    // 0x14eed8: 0xc053b40  jal         func_14ED00
    ctx->pc = 0x14EED8u;
    SET_GPR_U32(ctx, 31, 0x14EEE0u);
    ctx->pc = 0x14EEDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14EED8u;
            // 0x14eedc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14ED00u;
    if (runtime->hasFunction(0x14ED00u)) {
        auto targetFn = runtime->lookupFunction(0x14ED00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EEE0u; }
        if (ctx->pc != 0x14EEE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_14ed00_0x14ed30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EEE0u; }
        if (ctx->pc != 0x14EEE0u) { return; }
    }
    ctx->pc = 0x14EEE0u;
    // 0x14eee0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x14eee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_14eee4:
    // 0x14eee4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14eee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14eee8: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x14EEE8u;
    SET_GPR_U32(ctx, 31, 0x14EEF0u);
    ctx->pc = 0x14EEECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14EEE8u;
            // 0x14eeec: 0x8c4416f8  lw          $a0, 0x16F8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5880)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EEF0u; }
        if (ctx->pc != 0x14EEF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EEF0u; }
        if (ctx->pc != 0x14EEF0u) { return; }
    }
    ctx->pc = 0x14EEF0u;
    // 0x14eef0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14eef0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_14eef4:
    // 0x14eef4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14eef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14eef8: 0x3e00008  jr          $ra
    ctx->pc = 0x14EEF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14EEFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EEF8u;
            // 0x14eefc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14EEACu: goto label_14eeac;
            case 0x14EED8u: goto label_14eed8;
            case 0x14EEE4u: goto label_14eee4;
            case 0x14EEF4u: goto label_14eef4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14EF00u;
}
