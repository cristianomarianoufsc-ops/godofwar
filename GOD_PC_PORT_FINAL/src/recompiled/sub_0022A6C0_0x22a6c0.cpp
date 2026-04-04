#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022A6C0
// Address: 0x22a6c0 - 0x22a750
void sub_0022A6C0_0x22a6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A6C0_0x22a6c0");
#endif

    ctx->pc = 0x22a6c0u;

    // 0x22a6c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22a6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22a6c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22a6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22a6c8: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x22a6c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x22a6cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22a6ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a6d0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x22a6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x22a6d4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x22a6d4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x22a6d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22a6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22a6dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22a6dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a6e0: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x22a6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x22a6e4: 0x0  nop
    ctx->pc = 0x22a6e4u;
    // NOP
label_22a6e8:
    // 0x22a6e8: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x22a6e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x22a6ec: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x22a6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x22a6f0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x22a6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x22a6f4: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x22a6f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x22a6f8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x22a6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x22a6fc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22A6FCu;
    {
        const bool branch_taken_0x22a6fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A6FCu;
            // 0x22a700: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a6fc) {
            ctx->pc = 0x22A714u;
            goto label_22a714;
        }
    }
    ctx->pc = 0x22A704u;
    // 0x22a704: 0xc08a6b4  jal         func_229AD0
    ctx->pc = 0x22A704u;
    SET_GPR_U32(ctx, 31, 0x22A70Cu);
    ctx->pc = 0x22A708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A704u;
            // 0x22a708: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x229AD0u;
    if (runtime->hasFunction(0x229AD0u)) {
        auto targetFn = runtime->lookupFunction(0x229AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A70Cu; }
        if (ctx->pc != 0x22A70Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00229AD0_0x229ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A70Cu; }
        if (ctx->pc != 0x22A70Cu) { return; }
    }
    ctx->pc = 0x22A70Cu;
    // 0x22a70c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x22A70Cu;
    {
        const bool branch_taken_0x22a70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A70Cu;
            // 0x22a710: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a70c) {
            ctx->pc = 0x22A724u;
            goto label_22a724;
        }
    }
    ctx->pc = 0x22A714u;
label_22a714:
    // 0x22a714: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22a714u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22a718: 0xc08a6b4  jal         func_229AD0
    ctx->pc = 0x22A718u;
    SET_GPR_U32(ctx, 31, 0x22A720u);
    ctx->pc = 0x22A71Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A718u;
            // 0x22a71c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x229AD0u;
    if (runtime->hasFunction(0x229AD0u)) {
        auto targetFn = runtime->lookupFunction(0x229AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A720u; }
        if (ctx->pc != 0x22A720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00229AD0_0x229ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A720u; }
        if (ctx->pc != 0x22A720u) { return; }
    }
    ctx->pc = 0x22A720u;
    // 0x22a720: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x22a720u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_22a724:
    // 0x22a724: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x22a724u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x22a728: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x22A728u;
    {
        const bool branch_taken_0x22a728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a728) {
            ctx->pc = 0x22A72Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22A728u;
            // 0x22a72c: 0x24020060  addiu       $v0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22A6E8u;
            runtime->cooperativeGuestYield();
            goto label_22a6e8;
        }
    }
    ctx->pc = 0x22A730u;
    // 0x22a730: 0xae2000c4  sw          $zero, 0xC4($s1)
    ctx->pc = 0x22a730u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 0));
    // 0x22a734: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x22a734u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22a738: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22a738u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a73c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22a73cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a740: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x22a740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22a744: 0x3e00008  jr          $ra
    ctx->pc = 0x22A744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A744u;
            // 0x22a748: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22A6E8u: goto label_22a6e8;
            case 0x22A714u: goto label_22a714;
            case 0x22A724u: goto label_22a724;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22A74Cu;
    // 0x22a74c: 0x0  nop
    ctx->pc = 0x22a74cu;
    // NOP
}
