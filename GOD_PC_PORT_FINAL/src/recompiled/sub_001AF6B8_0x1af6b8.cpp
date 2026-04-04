#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AF6B8
// Address: 0x1af6b8 - 0x1af6f8
void sub_001AF6B8_0x1af6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF6B8_0x1af6b8");
#endif

    ctx->pc = 0x1af6b8u;

    // 0x1af6b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1af6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1af6bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1af6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1af6c0: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x1af6c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x1af6c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1af6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1af6c8: 0x261025f0  addiu       $s0, $s0, 0x25F0
    ctx->pc = 0x1af6c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9712));
    // 0x1af6cc: 0xc05bc5c  jal         func_16F170
    ctx->pc = 0x1AF6CCu;
    SET_GPR_U32(ctx, 31, 0x1AF6D4u);
    ctx->pc = 0x1AF6D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF6CCu;
            // 0x1af6d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F170u;
    if (runtime->hasFunction(0x16F170u)) {
        auto targetFn = runtime->lookupFunction(0x16F170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF6D4u; }
        if (ctx->pc != 0x1AF6D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_16f170_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF6D4u; }
        if (ctx->pc != 0x1AF6D4u) { return; }
    }
    ctx->pc = 0x1AF6D4u;
    // 0x1af6d4: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1af6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1af6d8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1af6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1af6dc: 0xc44044b4  lwc1        $f0, 0x44B4($v0)
    ctx->pc = 0x1af6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 17588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1af6e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1af6e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af6e4: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1af6e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1af6e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1af6e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af6ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF6ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF6F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF6ECu;
            // 0x1af6f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AF6F4u;
    // 0x1af6f4: 0x0  nop
    ctx->pc = 0x1af6f4u;
    // NOP
}
