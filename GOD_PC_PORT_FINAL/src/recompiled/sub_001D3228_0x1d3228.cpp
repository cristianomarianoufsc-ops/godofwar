#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D3228
// Address: 0x1d3228 - 0x1d3258
void sub_001D3228_0x1d3228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3228_0x1d3228");
#endif

    ctx->pc = 0x1d3228u;

    // 0x1d3228: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d3228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d322c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d322cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d3230: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d3230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d3234: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d3234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d3238: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d3238u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d323c: 0xc074ce4  jal         func_1D3390
    ctx->pc = 0x1D323Cu;
    SET_GPR_U32(ctx, 31, 0x1D3244u);
    ctx->pc = 0x1D3240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D323Cu;
            // 0x1d3240: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3390u;
    if (runtime->hasFunction(0x1D3390u)) {
        auto targetFn = runtime->lookupFunction(0x1D3390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3244u; }
        if (ctx->pc != 0x1D3244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3390_0x1d3390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3244u; }
        if (ctx->pc != 0x1D3244u) { return; }
    }
    ctx->pc = 0x1D3244u;
    // 0x1d3244: 0xa6020074  sh          $v0, 0x74($s0)
    ctx->pc = 0x1d3244u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 116), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d3248: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d3248u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d324c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d324cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3250: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3250u;
            // 0x1d3254: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D3258u;
}
