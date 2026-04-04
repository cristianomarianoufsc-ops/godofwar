#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00107C48
// Address: 0x107c48 - 0x107cb8
void sub_00107C48_0x107c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107C48_0x107c48");
#endif

    ctx->pc = 0x107c48u;

    // 0x107c48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x107c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x107c4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x107c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x107c50: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x107c50u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x107c54: 0x24910014  addiu       $s1, $a0, 0x14
    ctx->pc = 0x107c54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x107c58: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x107c58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x107c5c: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x107c5cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x107c60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x107c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x107c64: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x107c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x107c68: 0x8c900014  lw          $s0, 0x14($a0)
    ctx->pc = 0x107c68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x107c6c: 0x1211000b  beq         $s0, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x107C6Cu;
    {
        const bool branch_taken_0x107c6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x107C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107C6Cu;
            // 0x107c70: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x107c6c) {
            ctx->pc = 0x107C9Cu;
            goto label_107c9c;
        }
    }
    ctx->pc = 0x107C74u;
    // 0x107c74: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x107c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_107c78:
    // 0x107c78: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x107c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x107c7c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x107C7Cu;
    {
        const bool branch_taken_0x107c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107C7Cu;
            // 0x107c80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107c7c) {
            ctx->pc = 0x107C90u;
            goto label_107c90;
        }
    }
    ctx->pc = 0x107C84u;
    // 0x107c84: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x107c84u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x107c88: 0xc045dbe  jal         func_1176F8
    ctx->pc = 0x107C88u;
    SET_GPR_U32(ctx, 31, 0x107C90u);
    ctx->pc = 0x107C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107C88u;
            // 0x107c8c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1176F8u;
    if (runtime->hasFunction(0x1176F8u)) {
        auto targetFn = runtime->lookupFunction(0x1176F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107C90u; }
        if (ctx->pc != 0x107C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001176F8_0x1176f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107C90u; }
        if (ctx->pc != 0x107C90u) { return; }
    }
    ctx->pc = 0x107C90u;
label_107c90:
    // 0x107c90: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x107c90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x107c94: 0x5611fff8  bnel        $s0, $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x107C94u;
    {
        const bool branch_taken_0x107c94 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x107c94) {
            ctx->pc = 0x107C98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x107C94u;
            // 0x107c98: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x107C78u;
            runtime->cooperativeGuestYield();
            goto label_107c78;
        }
    }
    ctx->pc = 0x107C9Cu;
label_107c9c:
    // 0x107c9c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x107c9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x107ca0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x107ca0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x107ca4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107ca8: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x107ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x107cac: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x107cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x107cb0: 0x3e00008  jr          $ra
    ctx->pc = 0x107CB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107CB0u;
            // 0x107cb4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x107C78u: goto label_107c78;
            case 0x107C90u: goto label_107c90;
            case 0x107C9Cu: goto label_107c9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x107CB8u;
}
