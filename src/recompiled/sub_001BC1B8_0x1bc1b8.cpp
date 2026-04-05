#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BC1B8
// Address: 0x1bc1b8 - 0x1bc1f8
void sub_001BC1B8_0x1bc1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC1B8_0x1bc1b8");
#endif

    ctx->pc = 0x1bc1b8u;

    // 0x1bc1b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bc1b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bc1bc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1bc1bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc1c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1bc1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1bc1c4: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1bc1c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x1bc1c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bc1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bc1cc: 0xc0a349c  jal         func_28D270
    ctx->pc = 0x1BC1CCu;
    SET_GPR_U32(ctx, 31, 0x1BC1D4u);
    ctx->pc = 0x1BC1D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC1CCu;
            // 0x1bc1d0: 0x2604cc60  addiu       $a0, $s0, -0x33A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D270u;
    if (runtime->hasFunction(0x28D270u)) {
        auto targetFn = runtime->lookupFunction(0x28D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC1D4u; }
        if (ctx->pc != 0x1BC1D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D270_0x28d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC1D4u; }
        if (ctx->pc != 0x1BC1D4u) { return; }
    }
    ctx->pc = 0x1BC1D4u;
    // 0x1bc1d4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BC1D4u;
    {
        const bool branch_taken_0x1bc1d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc1d4) {
            ctx->pc = 0x1BC1D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC1D4u;
            // 0x1bc1d8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BC1ECu;
            goto label_1bc1ec;
        }
    }
    ctx->pc = 0x1BC1DCu;
    // 0x1bc1dc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1bc1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1bc1e0: 0xa200cc60  sb          $zero, -0x33A0($s0)
    ctx->pc = 0x1bc1e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4294954080), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bc1e4: 0xac40e574  sw          $zero, -0x1A8C($v0)
    ctx->pc = 0x1bc1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960500), GPR_U32(ctx, 0));
    // 0x1bc1e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1bc1e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bc1ec:
    // 0x1bc1ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bc1ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bc1f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC1F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC1F0u;
            // 0x1bc1f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BC1ECu: goto label_1bc1ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BC1F8u;
}
