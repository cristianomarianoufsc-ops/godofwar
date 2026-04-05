#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002785E0
// Address: 0x2785e0 - 0x278680
void sub_002785E0_0x2785e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002785E0_0x2785e0");
#endif

    ctx->pc = 0x2785e0u;

    // 0x2785e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2785e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2785e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2785e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2785e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2785e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2785ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2785ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2785f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2785f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2785f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2785f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2785f8: 0xae0000fc  sw          $zero, 0xFC($s0)
    ctx->pc = 0x2785f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
    // 0x2785fc: 0x8e020860  lw          $v0, 0x860($s0)
    ctx->pc = 0x2785fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2144)));
    // 0x278600: 0xae030864  sw          $v1, 0x864($s0)
    ctx->pc = 0x278600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2148), GPR_U32(ctx, 3));
    // 0x278604: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x278604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x278608: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x278608u;
    SET_GPR_U32(ctx, 31, 0x278610u);
    ctx->pc = 0x27860Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278608u;
            // 0x27860c: 0xae02085c  sw          $v0, 0x85C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278610u; }
        if (ctx->pc != 0x278610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278610u; }
        if (ctx->pc != 0x278610u) { return; }
    }
    ctx->pc = 0x278610u;
    // 0x278610: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278614: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x278614u;
    SET_GPR_U32(ctx, 31, 0x27861Cu);
    ctx->pc = 0x278618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278614u;
            // 0x278618: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27861Cu; }
        if (ctx->pc != 0x27861Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27861Cu; }
        if (ctx->pc != 0x27861Cu) { return; }
    }
    ctx->pc = 0x27861Cu;
    // 0x27861c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27861cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278620: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x278620u;
    SET_GPR_U32(ctx, 31, 0x278628u);
    ctx->pc = 0x278624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278620u;
            // 0x278624: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278628u; }
        if (ctx->pc != 0x278628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278628u; }
        if (ctx->pc != 0x278628u) { return; }
    }
    ctx->pc = 0x278628u;
    // 0x278628: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27862c: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x27862Cu;
    SET_GPR_U32(ctx, 31, 0x278634u);
    ctx->pc = 0x278630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27862Cu;
            // 0x278630: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278634u; }
        if (ctx->pc != 0x278634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278634u; }
        if (ctx->pc != 0x278634u) { return; }
    }
    ctx->pc = 0x278634u;
    // 0x278634: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278638: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x278638u;
    SET_GPR_U32(ctx, 31, 0x278640u);
    ctx->pc = 0x27863Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278638u;
            // 0x27863c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278640u; }
        if (ctx->pc != 0x278640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278640u; }
        if (ctx->pc != 0x278640u) { return; }
    }
    ctx->pc = 0x278640u;
    // 0x278640: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278644: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x278644u;
    SET_GPR_U32(ctx, 31, 0x27864Cu);
    ctx->pc = 0x278648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278644u;
            // 0x278648: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27864Cu; }
        if (ctx->pc != 0x27864Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27864Cu; }
        if (ctx->pc != 0x27864Cu) { return; }
    }
    ctx->pc = 0x27864Cu;
    // 0x27864c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27864cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278650: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x278650u;
    SET_GPR_U32(ctx, 31, 0x278658u);
    ctx->pc = 0x278654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278650u;
            // 0x278654: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278658u; }
        if (ctx->pc != 0x278658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278658u; }
        if (ctx->pc != 0x278658u) { return; }
    }
    ctx->pc = 0x278658u;
    // 0x278658: 0xae0201b4  sw          $v0, 0x1B4($s0)
    ctx->pc = 0x278658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 2));
    // 0x27865c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27865cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278660: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x278660u;
    SET_GPR_U32(ctx, 31, 0x278668u);
    ctx->pc = 0x278664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278660u;
            // 0x278664: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278668u; }
        if (ctx->pc != 0x278668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278668u; }
        if (ctx->pc != 0x278668u) { return; }
    }
    ctx->pc = 0x278668u;
    // 0x278668: 0xae0201b8  sw          $v0, 0x1B8($s0)
    ctx->pc = 0x278668u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 2));
    // 0x27866c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27866cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278670: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x278670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278674: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x278674u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278678: 0x809e306  j           func_278C18
    ctx->pc = 0x278678u;
    ctx->pc = 0x27867Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278678u;
            // 0x27867c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x278C18u;
    if (runtime->hasFunction(0x278C18u)) {
        auto targetFn = runtime->lookupFunction(0x278C18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        entry_278c18_0x278de8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x278680u;
}
