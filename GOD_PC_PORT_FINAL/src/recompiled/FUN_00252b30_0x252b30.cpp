#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00252b30
// Address: 0x252b30 - 0x252b90
void FUN_00252b30_0x252b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00252b30_0x252b30");
#endif

    ctx->pc = 0x252b30u;

    // 0x252b30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x252b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x252b34: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x252b34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252b38: 0x14a00011  bnez        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x252B38u;
    {
        const bool branch_taken_0x252b38 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x252B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252B38u;
            // 0x252b3c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252b38) {
            ctx->pc = 0x252B80u;
            goto label_252b80;
        }
    }
    ctx->pc = 0x252B40u;
    // 0x252b40: 0x25060048  addiu       $a2, $t0, 0x48
    ctx->pc = 0x252b40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 72));
    // 0x252b44: 0x8d070044  lw          $a3, 0x44($t0)
    ctx->pc = 0x252b44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 68)));
    // 0x252b48: 0x8cc30080  lw          $v1, 0x80($a2)
    ctx->pc = 0x252b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x252b4c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x252b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x252b50: 0xe23818  mult        $a3, $a3, $v0
    ctx->pc = 0x252b50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x252b54: 0x8d040024  lw          $a0, 0x24($t0)
    ctx->pc = 0x252b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x252b58: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x252b58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x252b5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x252b5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252b60: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x252b60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x252b64: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x252b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x252b68: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x252b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x252b6c: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x252b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x252b70: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x252b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x252b74: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x252B74u;
    {
        const bool branch_taken_0x252b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252B74u;
            // 0x252b78: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252b74) {
            ctx->pc = 0x252BA8u;
            return;
        }
    }
    ctx->pc = 0x252B7Cu;
    // 0x252b7c: 0x0  nop
    ctx->pc = 0x252b7cu;
    // NOP
label_252b80:
    // 0x252b80: 0x8d040044  lw          $a0, 0x44($t0)
    ctx->pc = 0x252b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 68)));
    // 0x252b84: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x252b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x252b88: 0x8d030024  lw          $v1, 0x24($t0)
    ctx->pc = 0x252b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x252b8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x252b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
}
