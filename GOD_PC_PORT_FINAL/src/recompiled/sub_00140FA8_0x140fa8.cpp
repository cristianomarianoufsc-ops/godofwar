#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00140FA8
// Address: 0x140fa8 - 0x141030
void sub_00140FA8_0x140fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140FA8_0x140fa8");
#endif

    ctx->pc = 0x140fa8u;

    // 0x140fa8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x140fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x140fac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x140facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x140fb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x140fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x140fb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x140fb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140fb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x140fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x140fbc: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x140fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x140fc0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x140fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x140fc4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x140fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x140fc8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x140FC8u;
    {
        const bool branch_taken_0x140fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x140FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140FC8u;
            // 0x140fcc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140fc8) {
            ctx->pc = 0x140FF4u;
            goto label_140ff4;
        }
    }
    ctx->pc = 0x140FD0u;
    // 0x140fd0: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x140FD0u;
    SET_GPR_U32(ctx, 31, 0x140FD8u);
    ctx->pc = 0x140FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140FD0u;
            // 0x140fd4: 0x8e0400f0  lw          $a0, 0xF0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140FD8u; }
        if (ctx->pc != 0x140FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140FD8u; }
        if (ctx->pc != 0x140FD8u) { return; }
    }
    ctx->pc = 0x140FD8u;
    // 0x140fd8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x140fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x140fdc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x140fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x140fe0: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x140fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x140fe4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x140FE4u;
    {
        const bool branch_taken_0x140fe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140fe4) {
            ctx->pc = 0x140FF4u;
            goto label_140ff4;
        }
    }
    ctx->pc = 0x140FECu;
    // 0x140fec: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x140FECu;
    SET_GPR_U32(ctx, 31, 0x140FF4u);
    ctx->pc = 0x140FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140FECu;
            // 0x140ff0: 0x8e0400f4  lw          $a0, 0xF4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140FF4u; }
        if (ctx->pc != 0x140FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140FF4u; }
        if (ctx->pc != 0x140FF4u) { return; }
    }
    ctx->pc = 0x140FF4u;
label_140ff4:
    // 0x140ff4: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x140FF4u;
    SET_GPR_U32(ctx, 31, 0x140FFCu);
    ctx->pc = 0x140FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140FF4u;
            // 0x140ff8: 0x8e040140  lw          $a0, 0x140($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140FFCu; }
        if (ctx->pc != 0x140FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140FFCu; }
        if (ctx->pc != 0x140FFCu) { return; }
    }
    ctx->pc = 0x140FFCu;
    // 0x140ffc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x140ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141000: 0xc08e4b2  jal         func_2392C8
    ctx->pc = 0x141000u;
    SET_GPR_U32(ctx, 31, 0x141008u);
    ctx->pc = 0x141004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141000u;
            // 0x141004: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2392C8u;
    if (runtime->hasFunction(0x2392C8u)) {
        auto targetFn = runtime->lookupFunction(0x2392C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141008u; }
        if (ctx->pc != 0x141008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002392C8_0x2392c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141008u; }
        if (ctx->pc != 0x141008u) { return; }
    }
    ctx->pc = 0x141008u;
    // 0x141008: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x141008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x14100c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14100Cu;
    {
        const bool branch_taken_0x14100c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14100c) {
            ctx->pc = 0x141010u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14100Cu;
            // 0x141010: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x141020u;
            goto label_141020;
        }
    }
    ctx->pc = 0x141014u;
    // 0x141014: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x141014u;
    SET_GPR_U32(ctx, 31, 0x14101Cu);
    ctx->pc = 0x141018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141014u;
            // 0x141018: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14101Cu; }
        if (ctx->pc != 0x14101Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14101Cu; }
        if (ctx->pc != 0x14101Cu) { return; }
    }
    ctx->pc = 0x14101Cu;
    // 0x14101c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x14101cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_141020:
    // 0x141020: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x141020u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141024: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x141024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141028: 0x3e00008  jr          $ra
    ctx->pc = 0x141028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14102Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141028u;
            // 0x14102c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x140FF4u: goto label_140ff4;
            case 0x141020u: goto label_141020;
            default: break;
        }
        return;
    }
    ctx->pc = 0x141030u;
}
