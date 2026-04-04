#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_14b680
// Address: 0x14b680 - 0x14b6c8
void entry_14b680_0x14b6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_14b680_0x14b6c8");
#endif

    ctx->pc = 0x14b680u;

    // 0x14b680: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x14b680u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14b684: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x14b684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14b688: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x14b688u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x14b68c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x14b68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x14b690: 0x21023  negu        $v0, $v0
    ctx->pc = 0x14b690u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x14b694: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x14b694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x14b698: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x14b698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x14b69c: 0x94a30002  lhu         $v1, 0x2($a1)
    ctx->pc = 0x14b69cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x14b6a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x14b6a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b6a4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x14b6a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b6a8: 0xc3380b  movn        $a3, $a2, $v1
    ctx->pc = 0x14b6a8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 6));
    // 0x14b6ac: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x14b6acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x14b6b0: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x14b6b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b6b4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x14b6b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x14b6b8: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x14b6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x14b6bc: 0x3e00008  jr          $ra
    ctx->pc = 0x14B6BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B6BCu;
            // 0x14b6c0: 0xac860000  sw          $a2, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14B6C4u;
    // 0x14b6c4: 0x0  nop
    ctx->pc = 0x14b6c4u;
    // NOP
}
