#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BFD40
// Address: 0x1bfd40 - 0x1bfdb0
void sub_001BFD40_0x1bfd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BFD40_0x1bfd40");
#endif

    ctx->pc = 0x1bfd40u;

    // 0x1bfd40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bfd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bfd44: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1bfd44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1bfd48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bfd48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bfd4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bfd4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfd50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bfd50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bfd54: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1bfd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1bfd58: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1bfd58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1bfd5c: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1bfd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1bfd60: 0x40f809  jalr        $v0
    ctx->pc = 0x1BFD60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BFD68u);
        ctx->pc = 0x1BFD64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFD60u;
            // 0x1bfd64: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BFD68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BFD68u; }
            if (ctx->pc != 0x1BFD68u) { return; }
        }
        }
    }
    ctx->pc = 0x1BFD68u;
    // 0x1bfd68: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1bfd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1bfd6c: 0x8c51004c  lw          $s1, 0x4C($v0)
    ctx->pc = 0x1bfd6cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1bfd70: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x1bfd70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x1bfd74: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x1bfd74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x1bfd78: 0x40f809  jalr        $v0
    ctx->pc = 0x1BFD78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BFD80u);
        ctx->pc = 0x1BFD7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFD78u;
            // 0x1bfd7c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BFD80u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BFD80u; }
            if (ctx->pc != 0x1BFD80u) { return; }
        }
        }
    }
    ctx->pc = 0x1BFD80u;
    // 0x1bfd80: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1bfd80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1bfd84: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x1bfd84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1bfd88: 0xc080836  jal         func_2020D8
    ctx->pc = 0x1BFD88u;
    SET_GPR_U32(ctx, 31, 0x1BFD90u);
    ctx->pc = 0x1BFD8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFD88u;
            // 0x1bfd8c: 0x8465ccc8  lh          $a1, -0x3338($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294954184)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2020D8u;
    if (runtime->hasFunction(0x2020D8u)) {
        auto targetFn = runtime->lookupFunction(0x2020D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFD90u; }
        if (ctx->pc != 0x1BFD90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002020D8_0x2020d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFD90u; }
        if (ctx->pc != 0x1BFD90u) { return; }
    }
    ctx->pc = 0x1BFD90u;
    // 0x1bfd90: 0x2228826  xor         $s1, $s1, $v0
    ctx->pc = 0x1bfd90u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 2));
    // 0x1bfd94: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1bfd94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bfd98: 0x2e220001  sltiu       $v0, $s1, 0x1
    ctx->pc = 0x1bfd98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1bfd9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bfd9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bfda0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bfda0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bfda4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFDA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFDA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFDA4u;
            // 0x1bfda8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BFDACu;
    // 0x1bfdac: 0x0  nop
    ctx->pc = 0x1bfdacu;
    // NOP
}
