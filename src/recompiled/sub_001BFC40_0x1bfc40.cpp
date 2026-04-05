#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BFC40
// Address: 0x1bfc40 - 0x1bfcc0
void sub_001BFC40_0x1bfc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BFC40_0x1bfc40");
#endif

    ctx->pc = 0x1bfc40u;

    // 0x1bfc40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bfc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bfc44: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1bfc44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1bfc48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bfc48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bfc4c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1bfc4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfc50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bfc50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bfc54: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1bfc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bfc58: 0x84430060  lh          $v1, 0x60($v0)
    ctx->pc = 0x1bfc58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1bfc5c: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1bfc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1bfc60: 0x40f809  jalr        $v0
    ctx->pc = 0x1BFC60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BFC68u);
        ctx->pc = 0x1BFC64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFC60u;
            // 0x1bfc64: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BFC68u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BFCA0u: goto label_1bfca0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BFC68u; }
            if (ctx->pc != 0x1BFC68u) { return; }
        }
        }
    }
    ctx->pc = 0x1BFC68u;
    // 0x1bfc68: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1bfc68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfc6c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1bfc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1bfc70: 0x262201c0  addiu       $v0, $s1, 0x1C0
    ctx->pc = 0x1bfc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
    // 0x1bfc74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bfc74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfc78: 0xa0430005  sb          $v1, 0x5($v0)
    ctx->pc = 0x1bfc78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bfc7c: 0xa0400006  sb          $zero, 0x6($v0)
    ctx->pc = 0x1bfc7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bfc80: 0xc080836  jal         func_2020D8
    ctx->pc = 0x1BFC80u;
    SET_GPR_U32(ctx, 31, 0x1BFC88u);
    ctx->pc = 0x1BFC84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFC80u;
            // 0x1bfc84: 0x8e24003c  lw          $a0, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2020D8u;
    if (runtime->hasFunction(0x2020D8u)) {
        auto targetFn = runtime->lookupFunction(0x2020D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFC88u; }
        if (ctx->pc != 0x1BFC88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002020D8_0x2020d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFC88u; }
        if (ctx->pc != 0x1BFC88u) { return; }
    }
    ctx->pc = 0x1BFC88u;
    // 0x1bfc88: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BFC88u;
    {
        const bool branch_taken_0x1bfc88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFC88u;
            // 0x1bfc8c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfc88) {
            ctx->pc = 0x1BFCA0u;
            goto label_1bfca0;
        }
    }
    ctx->pc = 0x1BFC90u;
    // 0x1bfc90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bfc90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1bfc94: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1bfc94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bfc98: 0xc082218  jal         func_208860
    ctx->pc = 0x1BFC98u;
    SET_GPR_U32(ctx, 31, 0x1BFCA0u);
    ctx->pc = 0x1BFC9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFC98u;
            // 0x1bfc9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208860u;
    if (runtime->hasFunction(0x208860u)) {
        auto targetFn = runtime->lookupFunction(0x208860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFCA0u; }
        if (ctx->pc != 0x1BFCA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_208860_0x2088e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFCA0u; }
        if (ctx->pc != 0x1BFCA0u) { return; }
    }
    ctx->pc = 0x1BFCA0u;
label_1bfca0:
    // 0x1bfca0: 0xc08117a  jal         func_2045E8
    ctx->pc = 0x1BFCA0u;
    SET_GPR_U32(ctx, 31, 0x1BFCA8u);
    ctx->pc = 0x1BFCA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFCA0u;
            // 0x1bfca4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2045E8u;
    if (runtime->hasFunction(0x2045E8u)) {
        auto targetFn = runtime->lookupFunction(0x2045E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFCA8u; }
        if (ctx->pc != 0x1BFCA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002045E8_0x2045e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFCA8u; }
        if (ctx->pc != 0x1BFCA8u) { return; }
    }
    ctx->pc = 0x1BFCA8u;
    // 0x1bfca8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1bfca8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bfcac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bfcacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bfcb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bfcb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bfcb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFCB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFCB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFCB4u;
            // 0x1bfcb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BFCA0u: goto label_1bfca0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BFCBCu;
    // 0x1bfcbc: 0x0  nop
    ctx->pc = 0x1bfcbcu;
    // NOP
}
