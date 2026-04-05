#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_26ff88
// Address: 0x26ff88 - 0x26ffd0
void entry_26ff88_0x26ffd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_26ff88_0x26ffd0");
#endif

    ctx->pc = 0x26ff88u;

    // 0x26ff88: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x26ff88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x26ff8c: 0x8c880040  lw          $t0, 0x40($a0)
    ctx->pc = 0x26ff8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x26ff90: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x26ff90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x26ff94: 0x2503000c  addiu       $v1, $t0, 0xC
    ctx->pc = 0x26ff94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
    // 0x26ff98: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x26ff98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x26ff9c: 0x1052021  addu        $a0, $t0, $a1
    ctx->pc = 0x26ff9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x26ffa0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26ffa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26ffa4: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x26ffa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x26ffa8: 0xac870010  sw          $a3, 0x10($a0)
    ctx->pc = 0x26ffa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 7));
    // 0x26ffac: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x26ffacu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ffb0: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x26ffb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ffb4: 0x3e00008  jr          $ra
    ctx->pc = 0x26FFB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26FFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FFB4u;
            // 0x26ffb8: 0xad030014  sw          $v1, 0x14($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26FFBCu;
    // 0x26ffbc: 0x0  nop
    ctx->pc = 0x26ffbcu;
    // NOP
    // 0x26ffc0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x26ffc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26ffc4: 0x0  nop
    ctx->pc = 0x26ffc4u;
    // NOP
    // 0x26ffc8: 0x8c62087c  lw          $v0, 0x87C($v1)
    ctx->pc = 0x26ffc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2172)));
    // 0x26ffcc: 0x0  nop
    ctx->pc = 0x26ffccu;
    // NOP
}
