#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00217DC8
// Address: 0x217dc8 - 0x217e08
void sub_00217DC8_0x217dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217DC8_0x217dc8");
#endif

    ctx->pc = 0x217dc8u;

    // 0x217dc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x217dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x217dcc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x217dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x217dd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x217dd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217dd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x217dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x217dd8: 0xc085f2a  jal         func_217CA8
    ctx->pc = 0x217DD8u;
    SET_GPR_U32(ctx, 31, 0x217DE0u);
    ctx->pc = 0x217DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217DD8u;
            // 0x217ddc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x217CA8u;
    if (runtime->hasFunction(0x217CA8u)) {
        auto targetFn = runtime->lookupFunction(0x217CA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217DE0u; }
        if (ctx->pc != 0x217DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00217CA8_0x217ca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217DE0u; }
        if (ctx->pc != 0x217DE0u) { return; }
    }
    ctx->pc = 0x217DE0u;
    // 0x217de0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x217de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x217de4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x217de4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x217de8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x217de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x217dec: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x217decu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x217df0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x217df0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217df4: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x217df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x217df8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x217df8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217dfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x217dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217e00: 0x3e00008  jr          $ra
    ctx->pc = 0x217E00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217E00u;
            // 0x217e04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x217E08u;
}
