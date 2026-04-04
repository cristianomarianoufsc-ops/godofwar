#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00183B88
// Address: 0x183b88 - 0x183bc0
void sub_00183B88_0x183b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183B88_0x183b88");
#endif

    ctx->pc = 0x183b88u;

    // 0x183b88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x183b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x183b8c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x183b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x183b90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x183b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x183b94: 0xc060eae  jal         func_183AB8
    ctx->pc = 0x183B94u;
    SET_GPR_U32(ctx, 31, 0x183B9Cu);
    ctx->pc = 0x183B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183B94u;
            // 0x183b98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183AB8u;
    if (runtime->hasFunction(0x183AB8u)) {
        auto targetFn = runtime->lookupFunction(0x183AB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183B9Cu; }
        if (ctx->pc != 0x183B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183ab8_0x183b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183B9Cu; }
        if (ctx->pc != 0x183B9Cu) { return; }
    }
    ctx->pc = 0x183B9Cu;
    // 0x183b9c: 0x4822f800  qmfc2.ni    $v0, $vf31
    ctx->pc = 0x183b9cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x183ba0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x183ba0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x183ba4: 0x70021fc9  prot3w      $v1, $v0
    ctx->pc = 0x183ba4u;
    SET_GPR_VEC(ctx, 3, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x183ba8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x183ba8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x183bac: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x183bacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x183bb0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x183bb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183bb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x183bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x183BB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183BB8u;
            // 0x183bbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x183BC0u;
}
