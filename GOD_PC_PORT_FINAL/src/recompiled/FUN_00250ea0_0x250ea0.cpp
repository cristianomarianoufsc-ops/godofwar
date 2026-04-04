#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00250ea0
// Address: 0x250ea0 - 0x250f00
void FUN_00250ea0_0x250ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00250ea0_0x250ea0");
#endif

    ctx->pc = 0x250ea0u;

    // 0x250ea0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x250ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x250ea4: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x250ea4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250ea8: 0x14a00011  bnez        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x250EA8u;
    {
        const bool branch_taken_0x250ea8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x250EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250EA8u;
            // 0x250eac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250ea8) {
            ctx->pc = 0x250EF0u;
            goto label_250ef0;
        }
    }
    ctx->pc = 0x250EB0u;
    // 0x250eb0: 0x25060048  addiu       $a2, $t0, 0x48
    ctx->pc = 0x250eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 72));
    // 0x250eb4: 0x8d070044  lw          $a3, 0x44($t0)
    ctx->pc = 0x250eb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 68)));
    // 0x250eb8: 0x8cc30080  lw          $v1, 0x80($a2)
    ctx->pc = 0x250eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x250ebc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x250ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x250ec0: 0xe23818  mult        $a3, $a3, $v0
    ctx->pc = 0x250ec0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x250ec4: 0x8d040024  lw          $a0, 0x24($t0)
    ctx->pc = 0x250ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x250ec8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x250ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x250ecc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x250eccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250ed0: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x250ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x250ed4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x250ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x250ed8: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x250ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x250edc: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x250edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x250ee0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x250ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x250ee4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x250EE4u;
    {
        const bool branch_taken_0x250ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250EE4u;
            // 0x250ee8: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250ee4) {
            ctx->pc = 0x250F18u;
            return;
        }
    }
    ctx->pc = 0x250EECu;
    // 0x250eec: 0x0  nop
    ctx->pc = 0x250eecu;
    // NOP
label_250ef0:
    // 0x250ef0: 0x8d040044  lw          $a0, 0x44($t0)
    ctx->pc = 0x250ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 68)));
    // 0x250ef4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x250ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x250ef8: 0x8d030024  lw          $v1, 0x24($t0)
    ctx->pc = 0x250ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x250efc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x250efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
}
