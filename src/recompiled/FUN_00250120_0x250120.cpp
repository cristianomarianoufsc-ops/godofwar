#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00250120
// Address: 0x250120 - 0x250180
void FUN_00250120_0x250120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00250120_0x250120");
#endif

    ctx->pc = 0x250120u;

    // 0x250120: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x250120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x250124: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x250124u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250128: 0x14a00011  bnez        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x250128u;
    {
        const bool branch_taken_0x250128 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x25012Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250128u;
            // 0x25012c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250128) {
            ctx->pc = 0x250170u;
            goto label_250170;
        }
    }
    ctx->pc = 0x250130u;
    // 0x250130: 0x25060048  addiu       $a2, $t0, 0x48
    ctx->pc = 0x250130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 72));
    // 0x250134: 0x8d070044  lw          $a3, 0x44($t0)
    ctx->pc = 0x250134u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 68)));
    // 0x250138: 0x8cc30080  lw          $v1, 0x80($a2)
    ctx->pc = 0x250138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x25013c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x25013cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x250140: 0xe23818  mult        $a3, $a3, $v0
    ctx->pc = 0x250140u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x250144: 0x8d040024  lw          $a0, 0x24($t0)
    ctx->pc = 0x250144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x250148: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x250148u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25014c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25014cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250150: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x250150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x250154: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x250154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x250158: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x250158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x25015c: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x25015cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x250160: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x250160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x250164: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x250164u;
    {
        const bool branch_taken_0x250164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250164u;
            // 0x250168: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250164) {
            ctx->pc = 0x250198u;
            return;
        }
    }
    ctx->pc = 0x25016Cu;
    // 0x25016c: 0x0  nop
    ctx->pc = 0x25016cu;
    // NOP
label_250170:
    // 0x250170: 0x8d040044  lw          $a0, 0x44($t0)
    ctx->pc = 0x250170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 68)));
    // 0x250174: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x250174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x250178: 0x8d030024  lw          $v1, 0x24($t0)
    ctx->pc = 0x250178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x25017c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25017cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
}
