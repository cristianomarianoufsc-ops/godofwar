#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1b5b60
// Address: 0x1b5b60 - 0x1b5ba8
void entry_1b5b60_0x1b5ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1b5b60_0x1b5ba8");
#endif

    ctx->pc = 0x1b5b60u;

    // 0x1b5b60: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x1b5b60u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b5b64: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B5B64u;
    {
        const bool branch_taken_0x1b5b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5B64u;
            // 0x1b5b68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5b64) {
            ctx->pc = 0x1B5B8Cu;
            goto label_1b5b8c;
        }
    }
    ctx->pc = 0x1B5B6Cu;
    // 0x1b5b6c: 0x0  nop
    ctx->pc = 0x1b5b6cu;
    // NOP
label_1b5b70:
    // 0x1b5b70: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x1b5b70u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b5b74: 0x61940  sll         $v1, $a2, 5
    ctx->pc = 0x1b5b74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x1b5b78: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b5b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1b5b7c: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1b5b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1b5b80: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x1b5b80u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b5b84: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B5B84u;
    {
        const bool branch_taken_0x1b5b84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5B84u;
            // 0x1b5b88: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5b84) {
            ctx->pc = 0x1B5B70u;
            runtime->cooperativeGuestYield();
            goto label_1b5b70;
        }
    }
    ctx->pc = 0x1B5B8Cu;
label_1b5b8c:
    // 0x1b5b8c: 0x240300bf  addiu       $v1, $zero, 0xBF
    ctx->pc = 0x1b5b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
    // 0x1b5b90: 0xc3001b  divu        $zero, $a2, $v1
    ctx->pc = 0x1b5b90u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
    // 0x1b5b94: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B5B94u;
    {
        const bool branch_taken_0x1b5b94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5b94) {
            ctx->pc = 0x1B5B98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5B94u;
            // 0x1b5b98: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B5B9Cu;
            goto label_1b5b9c;
        }
    }
    ctx->pc = 0x1B5B9Cu;
label_1b5b9c:
    // 0x1b5b9c: 0x1010  mfhi        $v0
    ctx->pc = 0x1b5b9cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1b5ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5BA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B5B70u: goto label_1b5b70;
            case 0x1B5B8Cu: goto label_1b5b8c;
            case 0x1B5B9Cu: goto label_1b5b9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B5BA8u;
}
