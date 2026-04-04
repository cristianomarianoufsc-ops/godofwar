#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00157370
// Address: 0x157370 - 0x157458
void sub_00157370_0x157370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00157370_0x157370");
#endif

    ctx->pc = 0x157370u;

    // 0x157370: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x157370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x157374: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x157374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x157378: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x157378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15737c: 0xc0543e0  jal         func_150F80
    ctx->pc = 0x15737Cu;
    SET_GPR_U32(ctx, 31, 0x157384u);
    ctx->pc = 0x157380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15737Cu;
            // 0x157380: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x150F80u;
    if (runtime->hasFunction(0x150F80u)) {
        auto targetFn = runtime->lookupFunction(0x150F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157384u; }
        if (ctx->pc != 0x157384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00150F80_0x150f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157384u; }
        if (ctx->pc != 0x157384u) { return; }
    }
    ctx->pc = 0x157384u;
    // 0x157384: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x157384u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x157388: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x157388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x15738c: 0x2442c0d8  addiu       $v0, $v0, -0x3F28
    ctx->pc = 0x15738cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951128));
    // 0x157390: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x157390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x157394: 0x3063ffdf  andi        $v1, $v1, 0xFFDF
    ctx->pc = 0x157394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65503);
    // 0x157398: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x157398u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x15739c: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x15739cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x1573a0: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x1573a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x1573a4: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x1573a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x1573a8: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x1573a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x1573ac: 0xc04f824  jal         func_13E090
    ctx->pc = 0x1573ACu;
    SET_GPR_U32(ctx, 31, 0x1573B4u);
    ctx->pc = 0x1573B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1573ACu;
            // 0x1573b0: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1573B4u; }
        if (ctx->pc != 0x1573B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1573B4u; }
        if (ctx->pc != 0x1573B4u) { return; }
    }
    ctx->pc = 0x1573B4u;
    // 0x1573b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1573b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1573b8: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x1573b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1573bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1573bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1573c0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1573c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1573c4: 0xc04f644  jal         func_13D910
    ctx->pc = 0x1573C4u;
    SET_GPR_U32(ctx, 31, 0x1573CCu);
    ctx->pc = 0x1573C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1573C4u;
            // 0x1573c8: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D910u;
    if (runtime->hasFunction(0x13D910u)) {
        auto targetFn = runtime->lookupFunction(0x13D910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1573CCu; }
        if (ctx->pc != 0x1573CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D910_0x13d910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1573CCu; }
        if (ctx->pc != 0x1573CCu) { return; }
    }
    ctx->pc = 0x1573CCu;
    // 0x1573cc: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x1573ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x1573d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1573d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1573d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1573d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1573d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1573d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1573dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1573DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1573E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1573DCu;
            // 0x1573e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15741Cu: goto label_15741c;
            case 0x157430u: goto label_157430;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1573E4u;
    // 0x1573e4: 0x0  nop
    ctx->pc = 0x1573e4u;
    // NOP
    // 0x1573e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1573e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1573ec: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1573ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1573f0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1573f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1573f4: 0x2442c0d8  addiu       $v0, $v0, -0x3F28
    ctx->pc = 0x1573f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951128));
    // 0x1573f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1573f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1573fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1573fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157400: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x157400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x157404: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x157404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x157408: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x157408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x15740c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15740Cu;
    {
        const bool branch_taken_0x15740c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x157410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15740Cu;
            // 0x157410: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15740c) {
            ctx->pc = 0x15741Cu;
            goto label_15741c;
        }
    }
    ctx->pc = 0x157414u;
    // 0x157414: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x157414u;
    SET_GPR_U32(ctx, 31, 0x15741Cu);
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15741Cu; }
        if (ctx->pc != 0x15741Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15741Cu; }
        if (ctx->pc != 0x15741Cu) { return; }
    }
    ctx->pc = 0x15741Cu;
label_15741c:
    // 0x15741c: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x15741cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x157420: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x157420u;
    {
        const bool branch_taken_0x157420 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x157420) {
            ctx->pc = 0x157430u;
            goto label_157430;
        }
    }
    ctx->pc = 0x157428u;
    // 0x157428: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x157428u;
    SET_GPR_U32(ctx, 31, 0x157430u);
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157430u; }
        if (ctx->pc != 0x157430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157430u; }
        if (ctx->pc != 0x157430u) { return; }
    }
    ctx->pc = 0x157430u;
label_157430:
    // 0x157430: 0xc04f6ca  jal         func_13DB28
    ctx->pc = 0x157430u;
    SET_GPR_U32(ctx, 31, 0x157438u);
    ctx->pc = 0x157434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157430u;
            // 0x157434: 0x8e040064  lw          $a0, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB28u;
    if (runtime->hasFunction(0x13DB28u)) {
        auto targetFn = runtime->lookupFunction(0x13DB28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157438u; }
        if (ctx->pc != 0x157438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DB28_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157438u; }
        if (ctx->pc != 0x157438u) { return; }
    }
    ctx->pc = 0x157438u;
    // 0x157438: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x157438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15743c: 0xc08ec5c  jal         func_23B170
    ctx->pc = 0x15743Cu;
    SET_GPR_U32(ctx, 31, 0x157444u);
    ctx->pc = 0x157440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15743Cu;
            // 0x157440: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B170u;
    if (runtime->hasFunction(0x23B170u)) {
        auto targetFn = runtime->lookupFunction(0x23B170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157444u; }
        if (ctx->pc != 0x157444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023B170_0x23b170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157444u; }
        if (ctx->pc != 0x157444u) { return; }
    }
    ctx->pc = 0x157444u;
    // 0x157444: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x157444u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x157448: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x157448u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15744c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15744cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x157450: 0x3e00008  jr          $ra
    ctx->pc = 0x157450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157450u;
            // 0x157454: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15741Cu: goto label_15741c;
            case 0x157430u: goto label_157430;
            default: break;
        }
        return;
    }
    ctx->pc = 0x157458u;
}
