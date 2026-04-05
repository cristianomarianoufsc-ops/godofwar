#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029A7A8
// Address: 0x29a7a8 - 0x29a7f8
void sub_0029A7A8_0x29a7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A7A8_0x29a7a8");
#endif

    ctx->pc = 0x29a7a8u;

    // 0x29a7a8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x29a7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x29a7ac: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29a7acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29a7b0: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x29a7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x29a7b4: 0x2442d5c8  addiu       $v0, $v0, -0x2A38
    ctx->pc = 0x29a7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956488));
    // 0x29a7b8: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x29a7b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x29a7bc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x29a7bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x29a7c0: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x29a7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x29a7c4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x29a7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x29a7c8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29a7c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a7cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29a7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29a7d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29a7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29a7d4: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x29a7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x29a7d8: 0xc0a5014  jal         func_294050
    ctx->pc = 0x29A7D8u;
    SET_GPR_U32(ctx, 31, 0x29A7E0u);
    ctx->pc = 0x29A7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A7D8u;
            // 0x29a7dc: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294050u;
    if (runtime->hasFunction(0x294050u)) {
        auto targetFn = runtime->lookupFunction(0x294050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A7E0u; }
        if (ctx->pc != 0x29A7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_294050_0x2940a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A7E0u; }
        if (ctx->pc != 0x29A7E0u) { return; }
    }
    ctx->pc = 0x29A7E0u;
    // 0x29a7e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29a7e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a7e4: 0x3e00008  jr          $ra
    ctx->pc = 0x29A7E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A7E4u;
            // 0x29a7e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29A7ECu;
    // 0x29a7ec: 0x0  nop
    ctx->pc = 0x29a7ecu;
    // NOP
    // 0x29a7f0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x29a7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29a7f4: 0x0  nop
    ctx->pc = 0x29a7f4u;
    // NOP
}
