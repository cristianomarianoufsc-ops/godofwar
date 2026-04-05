#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_002525c0
// Address: 0x2525c0 - 0x252620
void FUN_002525c0_0x2525c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002525c0_0x2525c0");
#endif

    ctx->pc = 0x2525c0u;

    // 0x2525c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2525c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2525c4: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2525c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2525c8: 0x14a00011  bnez        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2525C8u;
    {
        const bool branch_taken_0x2525c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2525CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2525C8u;
            // 0x2525cc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2525c8) {
            ctx->pc = 0x252610u;
            goto label_252610;
        }
    }
    ctx->pc = 0x2525D0u;
    // 0x2525d0: 0x25060048  addiu       $a2, $t0, 0x48
    ctx->pc = 0x2525d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 72));
    // 0x2525d4: 0x8d070044  lw          $a3, 0x44($t0)
    ctx->pc = 0x2525d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 68)));
    // 0x2525d8: 0x8cc30080  lw          $v1, 0x80($a2)
    ctx->pc = 0x2525d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x2525dc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2525dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2525e0: 0xe23818  mult        $a3, $a3, $v0
    ctx->pc = 0x2525e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2525e4: 0x8d040024  lw          $a0, 0x24($t0)
    ctx->pc = 0x2525e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x2525e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2525e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2525ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2525ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2525f0: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x2525f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2525f4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2525f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2525f8: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x2525f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2525fc: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x2525fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x252600: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x252600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x252604: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x252604u;
    {
        const bool branch_taken_0x252604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252604u;
            // 0x252608: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252604) {
            ctx->pc = 0x252638u;
            return;
        }
    }
    ctx->pc = 0x25260Cu;
    // 0x25260c: 0x0  nop
    ctx->pc = 0x25260cu;
    // NOP
label_252610:
    // 0x252610: 0x8d040044  lw          $a0, 0x44($t0)
    ctx->pc = 0x252610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 68)));
    // 0x252614: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x252614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x252618: 0x8d030024  lw          $v1, 0x24($t0)
    ctx->pc = 0x252618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x25261c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25261cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
}
