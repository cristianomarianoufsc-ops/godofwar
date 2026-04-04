#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FF448
// Address: 0x1ff448 - 0x1ff4a8
void sub_001FF448_0x1ff448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF448_0x1ff448");
#endif

    ctx->pc = 0x1ff448u;

    // 0x1ff448: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ff448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ff44c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ff44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1ff450: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ff450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ff454: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ff454u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff458: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ff458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ff45c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ff45cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff460: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1ff460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ff464: 0x5091000b  beql        $a0, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x1FF464u;
    {
        const bool branch_taken_0x1ff464 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        if (branch_taken_0x1ff464) {
            ctx->pc = 0x1FF468u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF464u;
            // 0x1ff468: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FF494u;
            goto label_1ff494;
        }
    }
    ctx->pc = 0x1FF46Cu;
    // 0x1ff46c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FF46Cu;
    {
        const bool branch_taken_0x1ff46c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff46c) {
            ctx->pc = 0x1FF47Cu;
            goto label_1ff47c;
        }
    }
    ctx->pc = 0x1FF474u;
    // 0x1ff474: 0xc06d422  jal         func_1B5088
    ctx->pc = 0x1FF474u;
    SET_GPR_U32(ctx, 31, 0x1FF47Cu);
    ctx->pc = 0x1FF478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF474u;
            // 0x1ff478: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5088u;
    if (runtime->hasFunction(0x1B5088u)) {
        auto targetFn = runtime->lookupFunction(0x1B5088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF47Cu; }
        if (ctx->pc != 0x1FF47Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5088_0x1b5088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF47Cu; }
        if (ctx->pc != 0x1FF47Cu) { return; }
    }
    ctx->pc = 0x1FF47Cu;
label_1ff47c:
    // 0x1ff47c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FF47Cu;
    {
        const bool branch_taken_0x1ff47c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF47Cu;
            // 0x1ff480: 0xae110008  sw          $s1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff47c) {
            ctx->pc = 0x1FF490u;
            goto label_1ff490;
        }
    }
    ctx->pc = 0x1FF484u;
    // 0x1ff484: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1ff484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ff488: 0xc06d3f2  jal         func_1B4FC8
    ctx->pc = 0x1FF488u;
    SET_GPR_U32(ctx, 31, 0x1FF490u);
    ctx->pc = 0x1FF48Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF488u;
            // 0x1ff48c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4FC8u;
    if (runtime->hasFunction(0x1B4FC8u)) {
        auto targetFn = runtime->lookupFunction(0x1B4FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF490u; }
        if (ctx->pc != 0x1FF490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1b4fc8_0x1b5088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF490u; }
        if (ctx->pc != 0x1FF490u) { return; }
    }
    ctx->pc = 0x1FF490u;
label_1ff490:
    // 0x1ff490: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ff490u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ff494:
    // 0x1ff494: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ff494u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff498: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ff498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff49c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF49Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF4A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF49Cu;
            // 0x1ff4a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FF47Cu: goto label_1ff47c;
            case 0x1FF490u: goto label_1ff490;
            case 0x1FF494u: goto label_1ff494;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FF4A4u;
    // 0x1ff4a4: 0x0  nop
    ctx->pc = 0x1ff4a4u;
    // NOP
}
