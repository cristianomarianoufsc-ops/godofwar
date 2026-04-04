#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DEB28
// Address: 0x1deb28 - 0x1deb80
void sub_001DEB28_0x1deb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DEB28_0x1deb28");
#endif

    ctx->pc = 0x1deb28u;

    // 0x1deb28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1deb28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1deb2c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1deb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1deb30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1deb30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1deb34: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1deb34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1deb38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1deb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1deb3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1deb3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1deb40: 0xc061a3c  jal         func_1868F0
    ctx->pc = 0x1DEB40u;
    SET_GPR_U32(ctx, 31, 0x1DEB48u);
    ctx->pc = 0x1DEB44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEB40u;
            // 0x1deb44: 0x8e2401b4  lw          $a0, 0x1B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1868F0u;
    if (runtime->hasFunction(0x1868F0u)) {
        auto targetFn = runtime->lookupFunction(0x1868F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEB48u; }
        if (ctx->pc != 0x1DEB48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001868F0_0x1868f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEB48u; }
        if (ctx->pc != 0x1DEB48u) { return; }
    }
    ctx->pc = 0x1DEB48u;
    // 0x1deb48: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DEB48u;
    {
        const bool branch_taken_0x1deb48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1deb48) {
            ctx->pc = 0x1DEB4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEB48u;
            // 0x1deb4c: 0x8e2401a0  lw          $a0, 0x1A0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DEB64u;
            goto label_1deb64;
        }
    }
    ctx->pc = 0x1DEB50u;
    // 0x1deb50: 0xc05d49a  jal         func_175268
    ctx->pc = 0x1DEB50u;
    SET_GPR_U32(ctx, 31, 0x1DEB58u);
    ctx->pc = 0x1DEB54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEB50u;
            // 0x1deb54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175268u;
    if (runtime->hasFunction(0x175268u)) {
        auto targetFn = runtime->lookupFunction(0x175268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEB58u; }
        if (ctx->pc != 0x1DEB58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175268_0x175268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEB58u; }
        if (ctx->pc != 0x1DEB58u) { return; }
    }
    ctx->pc = 0x1DEB58u;
    // 0x1deb58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DEB58u;
    {
        const bool branch_taken_0x1deb58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEB5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEB58u;
            // 0x1deb5c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deb58) {
            ctx->pc = 0x1DEB70u;
            goto label_1deb70;
        }
    }
    ctx->pc = 0x1DEB60u;
    // 0x1deb60: 0x8e2401a0  lw          $a0, 0x1A0($s1)
    ctx->pc = 0x1deb60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
label_1deb64:
    // 0x1deb64: 0xc05c302  jal         func_170C08
    ctx->pc = 0x1DEB64u;
    SET_GPR_U32(ctx, 31, 0x1DEB6Cu);
    ctx->pc = 0x1DEB68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEB64u;
            // 0x1deb68: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170C08u;
    if (runtime->hasFunction(0x170C08u)) {
        auto targetFn = runtime->lookupFunction(0x170C08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEB6Cu; }
        if (ctx->pc != 0x1DEB6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170C08_0x170c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEB6Cu; }
        if (ctx->pc != 0x1DEB6Cu) { return; }
    }
    ctx->pc = 0x1DEB6Cu;
    // 0x1deb6c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1deb6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1deb70:
    // 0x1deb70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1deb70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1deb74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1deb74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1deb78: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEB78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEB78u;
            // 0x1deb7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DEB64u: goto label_1deb64;
            case 0x1DEB70u: goto label_1deb70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DEB80u;
}
