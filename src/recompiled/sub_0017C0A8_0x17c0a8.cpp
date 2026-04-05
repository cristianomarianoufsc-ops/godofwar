#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017C0A8
// Address: 0x17c0a8 - 0x17c0f8
void sub_0017C0A8_0x17c0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C0A8_0x17c0a8");
#endif

    ctx->pc = 0x17c0a8u;

    // 0x17c0a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17c0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17c0ac: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x17c0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x17c0b0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17c0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17c0b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17c0b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c0b8: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x17c0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x17c0bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17c0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17c0c0: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x17c0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x17c0c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17c0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c0c8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x17c0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x17c0cc: 0x260500c0  addiu       $a1, $s0, 0xC0
    ctx->pc = 0x17c0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x17c0d0: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x17c0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x17c0d4: 0xc09ee24  jal         func_27B890
    ctx->pc = 0x17C0D4u;
    SET_GPR_U32(ctx, 31, 0x17C0DCu);
    ctx->pc = 0x17C0D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C0D4u;
            // 0x17c0d8: 0xae060004  sw          $a2, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27B890u;
    if (runtime->hasFunction(0x27B890u)) {
        auto targetFn = runtime->lookupFunction(0x27B890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C0DCu; }
        if (ctx->pc != 0x17C0DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027B890_0x27b890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C0DCu; }
        if (ctx->pc != 0x17C0DCu) { return; }
    }
    ctx->pc = 0x17C0DCu;
    // 0x17c0dc: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x17c0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    // 0x17c0e0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x17c0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x17c0e4: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x17c0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x17c0e8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x17c0e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17c0ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17c0ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17c0f0: 0x3e00008  jr          $ra
    ctx->pc = 0x17C0F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C0F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C0F0u;
            // 0x17c0f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17C0F8u;
}
