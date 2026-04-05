#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_16afa0
// Address: 0x16afa0 - 0x16afd8
void entry_16afa0_0x16afd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_16afa0_0x16afd8");
#endif

    ctx->pc = 0x16afa0u;

    // 0x16afa0: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x16afa0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16afa4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x16afa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x16afa8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x16afa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x16afac: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x16afacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x16afb0: 0xc3001a  div         $zero, $a2, $v1
    ctx->pc = 0x16afb0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x16afb4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x16AFB4u;
    {
        const bool branch_taken_0x16afb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16afb4) {
            ctx->pc = 0x16AFB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16AFB4u;
            // 0x16afb8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x16AFBCu;
            goto label_16afbc;
        }
    }
    ctx->pc = 0x16AFBCu;
label_16afbc:
    // 0x16afbc: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x16afbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x16afc0: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x16afc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x16afc4: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x16afc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x16afc8: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x16afc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x16afcc: 0x3010  mfhi        $a2
    ctx->pc = 0x16afccu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x16afd0: 0x3e00008  jr          $ra
    ctx->pc = 0x16AFD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AFD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AFD0u;
            // 0x16afd4: 0xac860008  sw          $a2, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16AFBCu: goto label_16afbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16AFD8u;
}
