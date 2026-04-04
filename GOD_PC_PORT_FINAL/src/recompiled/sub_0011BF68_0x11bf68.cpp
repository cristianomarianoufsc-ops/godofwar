#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011BF68
// Address: 0x11bf68 - 0x11bfb8
void sub_0011BF68_0x11bf68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011BF68_0x11bf68");
#endif

    ctx->pc = 0x11bf68u;

    // 0x11bf68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11bf68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11bf6c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x11bf6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x11bf70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11bf70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11bf74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11bf74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bf78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11bf78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11bf7c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x11bf7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x11bf80: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BF80u;
    {
        const bool branch_taken_0x11bf80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BF80u;
            // 0x11bf84: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bf80) {
            ctx->pc = 0x11BF90u;
            goto label_11bf90;
        }
    }
    ctx->pc = 0x11BF88u;
    // 0x11bf88: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x11BF88u;
    SET_GPR_U32(ctx, 31, 0x11BF90u);
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BF90u; }
        if (ctx->pc != 0x11BF90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BF90u; }
        if (ctx->pc != 0x11BF90u) { return; }
    }
    ctx->pc = 0x11BF90u;
label_11bf90:
    // 0x11bf90: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x11bf90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x11bf94: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x11BF94u;
    {
        const bool branch_taken_0x11bf94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11bf94) {
            ctx->pc = 0x11BF98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11BF94u;
            // 0x11bf98: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11BFA8u;
            goto label_11bfa8;
        }
    }
    ctx->pc = 0x11BF9Cu;
    // 0x11bf9c: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x11BF9Cu;
    SET_GPR_U32(ctx, 31, 0x11BFA4u);
    ctx->pc = 0x11BFA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BF9Cu;
            // 0x11bfa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BFA4u; }
        if (ctx->pc != 0x11BFA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BFA4u; }
        if (ctx->pc != 0x11BFA4u) { return; }
    }
    ctx->pc = 0x11BFA4u;
    // 0x11bfa4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x11bfa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_11bfa8:
    // 0x11bfa8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11bfa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11bfac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11bfacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11bfb0: 0x3e00008  jr          $ra
    ctx->pc = 0x11BFB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BFB0u;
            // 0x11bfb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11BF90u: goto label_11bf90;
            case 0x11BFA8u: goto label_11bfa8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11BFB8u;
}
