#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E7268
// Address: 0x1e7268 - 0x1e72f0
void sub_001E7268_0x1e7268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7268_0x1e7268");
#endif

    ctx->pc = 0x1e7268u;

    // 0x1e7268: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e7268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e726c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1e726cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1e7270: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1e7270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1e7274: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e7274u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7278: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e7278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e727c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x1e727cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7280: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1e7280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1e7284: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1e7284u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7288: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e7288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e728c: 0xc07841e  jal         func_1E1078
    ctx->pc = 0x1E728Cu;
    SET_GPR_U32(ctx, 31, 0x1E7294u);
    ctx->pc = 0x1E7290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E728Cu;
            // 0x1e7290: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1078u;
    if (runtime->hasFunction(0x1E1078u)) {
        auto targetFn = runtime->lookupFunction(0x1E1078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7294u; }
        if (ctx->pc != 0x1E7294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1078_0x1e1078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7294u; }
        if (ctx->pc != 0x1E7294u) { return; }
    }
    ctx->pc = 0x1E7294u;
    // 0x1e7294: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1e7294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1e7298: 0x2442a528  addiu       $v0, $v0, -0x5AD8
    ctx->pc = 0x1e7298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944040));
    // 0x1e729c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1e729cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1e72a0: 0xae2002dc  sw          $zero, 0x2DC($s1)
    ctx->pc = 0x1e72a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 732), GPR_U32(ctx, 0));
    // 0x1e72a4: 0xae200310  sw          $zero, 0x310($s1)
    ctx->pc = 0x1e72a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 784), GPR_U32(ctx, 0));
    // 0x1e72a8: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E72A8u;
    {
        const bool branch_taken_0x1e72a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E72ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E72A8u;
            // 0x1e72ac: 0xae20032c  sw          $zero, 0x32C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 812), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e72a8) {
            ctx->pc = 0x1E72C0u;
            goto label_1e72c0;
        }
    }
    ctx->pc = 0x1E72B0u;
    // 0x1e72b0: 0x8e220174  lw          $v0, 0x174($s1)
    ctx->pc = 0x1e72b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1e72b4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1e72b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1e72b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1e72b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e72bc: 0xae220174  sw          $v0, 0x174($s1)
    ctx->pc = 0x1e72bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 372), GPR_U32(ctx, 2));
label_1e72c0:
    // 0x1e72c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e72c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e72c4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1e72c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e72c8: 0xc079bf6  jal         func_1E6FD8
    ctx->pc = 0x1E72C8u;
    SET_GPR_U32(ctx, 31, 0x1E72D0u);
    ctx->pc = 0x1E72CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E72C8u;
            // 0x1e72cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6FD8u;
    if (runtime->hasFunction(0x1E6FD8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E72D0u; }
        if (ctx->pc != 0x1E72D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6FD8_0x1e6fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E72D0u; }
        if (ctx->pc != 0x1E72D0u) { return; }
    }
    ctx->pc = 0x1E72D0u;
    // 0x1e72d0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e72d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e72d4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1e72d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e72d8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1e72d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e72dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e72dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e72e0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1e72e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e72e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e72e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e72e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E72E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E72ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E72E8u;
            // 0x1e72ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E72C0u: goto label_1e72c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E72F0u;
}
