#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00296ed8
// Address: 0x296ed8 - 0x296f08
void FUN_00296ed8_0x296ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00296ed8_0x296ed8");
#endif

    ctx->pc = 0x296ed8u;

    // 0x296ed8: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x296ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x296edc: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x296edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x296ee0: 0xa3001a  div         $zero, $a1, $v1
    ctx->pc = 0x296ee0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x296ee4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x296EE4u;
    {
        const bool branch_taken_0x296ee4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x296ee4) {
            ctx->pc = 0x296EE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x296EE4u;
            // 0x296ee8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x296EECu;
            goto label_296eec;
        }
    }
    ctx->pc = 0x296EECu;
label_296eec:
    // 0x296eec: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x296eecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x296ef0: 0x1010  mfhi        $v0
    ctx->pc = 0x296ef0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x296ef4: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x296ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x296ef8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x296ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x296efc: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x296efcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x296f00: 0x3e00008  jr          $ra
    ctx->pc = 0x296F00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296F00u;
            // 0x296f04: 0xa21021  addu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x296EECu: goto label_296eec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x296F08u;
}
