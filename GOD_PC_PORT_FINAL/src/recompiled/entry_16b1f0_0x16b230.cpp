#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_16b1f0
// Address: 0x16b1f0 - 0x16b230
void entry_16b1f0_0x16b230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_16b1f0_0x16b230");
#endif

    ctx->pc = 0x16b1f0u;

    // 0x16b1f0: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x16b1f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16b1f4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x16b1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x16b1f8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x16b1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x16b1fc: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x16b1fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x16b200: 0xc3001a  div         $zero, $a2, $v1
    ctx->pc = 0x16b200u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x16b204: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x16B204u;
    {
        const bool branch_taken_0x16b204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b204) {
            ctx->pc = 0x16B208u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16B204u;
            // 0x16b208: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x16B20Cu;
            goto label_16b20c;
        }
    }
    ctx->pc = 0x16B20Cu;
label_16b20c:
    // 0x16b20c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x16b20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x16b210: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x16b210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x16b214: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x16b214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x16b218: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x16b218u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x16b21c: 0x3010  mfhi        $a2
    ctx->pc = 0x16b21cu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x16b220: 0x3e00008  jr          $ra
    ctx->pc = 0x16B220u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B220u;
            // 0x16b224: 0xac860004  sw          $a2, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16B20Cu: goto label_16b20c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16B228u;
    // 0x16b228: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x16b228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16b22c: 0x0  nop
    ctx->pc = 0x16b22cu;
    // NOP
}
