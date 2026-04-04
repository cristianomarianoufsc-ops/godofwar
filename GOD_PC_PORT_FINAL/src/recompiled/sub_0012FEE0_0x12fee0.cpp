#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012FEE0
// Address: 0x12fee0 - 0x12ff30
void sub_0012FEE0_0x12fee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012FEE0_0x12fee0");
#endif

    ctx->pc = 0x12fee0u;

    // 0x12fee0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12fee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12fee4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x12fee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12fee8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x12fee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x12feec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12feecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12fef0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12fef0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fef4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x12fef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x12fef8: 0x24a40010  addiu       $a0, $a1, 0x10
    ctx->pc = 0x12fef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x12fefc: 0x94a30008  lhu         $v1, 0x8($a1)
    ctx->pc = 0x12fefcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x12ff00: 0xae060004  sw          $a2, 0x4($s0)
    ctx->pc = 0x12ff00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
    // 0x12ff04: 0xa6030008  sh          $v1, 0x8($s0)
    ctx->pc = 0x12ff04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x12ff08: 0x94a2000a  lhu         $v0, 0xA($a1)
    ctx->pc = 0x12ff08u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x12ff0c: 0xc04be82  jal         func_12FA08
    ctx->pc = 0x12FF0Cu;
    SET_GPR_U32(ctx, 31, 0x12FF14u);
    ctx->pc = 0x12FF10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12FF0Cu;
            // 0x12ff10: 0xa602000a  sh          $v0, 0xA($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FA08u;
    if (runtime->hasFunction(0x12FA08u)) {
        auto targetFn = runtime->lookupFunction(0x12FA08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FF14u; }
        if (ctx->pc != 0x12FF14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012FA08_0x12fa08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FF14u; }
        if (ctx->pc != 0x12FF14u) { return; }
    }
    ctx->pc = 0x12FF14u;
    // 0x12ff14: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x12ff14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x12ff18: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x12ff18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ff1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12ff1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ff20: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x12ff20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12ff24: 0x3e00008  jr          $ra
    ctx->pc = 0x12FF24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FF24u;
            // 0x12ff28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12FF2Cu;
    // 0x12ff2c: 0x0  nop
    ctx->pc = 0x12ff2cu;
    // NOP
}
