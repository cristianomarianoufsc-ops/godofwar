#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00243628
// Address: 0x243628 - 0x243688
void sub_00243628_0x243628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243628_0x243628");
#endif

    ctx->pc = 0x243628u;

    // 0x243628: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x243628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24362c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x24362cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x243630: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x243630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x243634: 0x2442ead8  addiu       $v0, $v0, -0x1528
    ctx->pc = 0x243634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961880));
    // 0x243638: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x243638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x24363c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24363cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243640: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x243640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x243644: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x243644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x243648: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x243648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x24364c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x24364Cu;
    {
        const bool branch_taken_0x24364c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x243650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24364Cu;
            // 0x243650: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24364c) {
            ctx->pc = 0x243660u;
            goto label_243660;
        }
    }
    ctx->pc = 0x243654u;
    // 0x243654: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x243654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x243658: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x243658u;
    SET_GPR_U32(ctx, 31, 0x243660u);
    ctx->pc = 0x24365Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243658u;
            // 0x24365c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243660u; }
        if (ctx->pc != 0x243660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243660u; }
        if (ctx->pc != 0x243660u) { return; }
    }
    ctx->pc = 0x243660u;
label_243660:
    // 0x243660: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x243660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x243664: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x243664u;
    {
        const bool branch_taken_0x243664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x243664) {
            ctx->pc = 0x243668u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x243664u;
            // 0x243668: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x243678u;
            goto label_243678;
        }
    }
    ctx->pc = 0x24366Cu;
    // 0x24366c: 0xc0645ce  jal         func_191738
    ctx->pc = 0x24366Cu;
    SET_GPR_U32(ctx, 31, 0x243674u);
    ctx->pc = 0x243670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24366Cu;
            // 0x243670: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x191738u;
    if (runtime->hasFunction(0x191738u)) {
        auto targetFn = runtime->lookupFunction(0x191738u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243674u; }
        if (ctx->pc != 0x243674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_191738_0x191760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243674u; }
        if (ctx->pc != 0x243674u) { return; }
    }
    ctx->pc = 0x243674u;
    // 0x243674: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x243674u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_243678:
    // 0x243678: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x243678u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24367c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24367cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243680: 0x3e00008  jr          $ra
    ctx->pc = 0x243680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243680u;
            // 0x243684: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x243660u: goto label_243660;
            case 0x243678u: goto label_243678;
            default: break;
        }
        return;
    }
    ctx->pc = 0x243688u;
}
