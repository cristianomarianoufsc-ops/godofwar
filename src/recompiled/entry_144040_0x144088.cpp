#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_144040
// Address: 0x144040 - 0x144088
void entry_144040_0x144088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_144040_0x144088");
#endif

    ctx->pc = 0x144040u;

    // 0x144040: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x144040u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x144044: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x144044u;
    {
        const bool branch_taken_0x144044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x144048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144044u;
            // 0x144048: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144044) {
            ctx->pc = 0x14406Cu;
            goto label_14406c;
        }
    }
    ctx->pc = 0x14404Cu;
    // 0x14404c: 0x0  nop
    ctx->pc = 0x14404cu;
    // NOP
label_144050:
    // 0x144050: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x144050u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x144054: 0x61940  sll         $v1, $a2, 5
    ctx->pc = 0x144054u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x144058: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x144058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14405c: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x14405cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x144060: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x144060u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x144064: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x144064u;
    {
        const bool branch_taken_0x144064 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x144068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144064u;
            // 0x144068: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144064) {
            ctx->pc = 0x144050u;
            runtime->cooperativeGuestYield();
            goto label_144050;
        }
    }
    ctx->pc = 0x14406Cu;
label_14406c:
    // 0x14406c: 0x24030165  addiu       $v1, $zero, 0x165
    ctx->pc = 0x14406cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 357));
    // 0x144070: 0xc3001b  divu        $zero, $a2, $v1
    ctx->pc = 0x144070u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
    // 0x144074: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x144074u;
    {
        const bool branch_taken_0x144074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x144074) {
            ctx->pc = 0x144078u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x144074u;
            // 0x144078: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14407Cu;
            goto label_14407c;
        }
    }
    ctx->pc = 0x14407Cu;
label_14407c:
    // 0x14407c: 0x1010  mfhi        $v0
    ctx->pc = 0x14407cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x144080: 0x3e00008  jr          $ra
    ctx->pc = 0x144080u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x144050u: goto label_144050;
            case 0x14406Cu: goto label_14406c;
            case 0x14407Cu: goto label_14407c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x144088u;
}
