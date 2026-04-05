#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_294c98
// Address: 0x294c98 - 0x294d00
void entry_294c98_0x294d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_294c98_0x294d00");
#endif

    ctx->pc = 0x294c98u;

    // 0x294c98: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x294c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x294c9c: 0x24437380  addiu       $v1, $v0, 0x7380
    ctx->pc = 0x294c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 29568));
    // 0x294ca0: 0xac447380  sw          $a0, 0x7380($v0)
    ctx->pc = 0x294ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29568), GPR_U32(ctx, 4));
    // 0x294ca4: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x294ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x294ca8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x294ca8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294cac: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x294cacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x294cb0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x294cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x294cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x294CB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294CB4u;
            // 0x294cb8: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x294CF4u: goto label_294cf4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x294CBCu;
    // 0x294cbc: 0x0  nop
    ctx->pc = 0x294cbcu;
    // NOP
    // 0x294cc0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x294cc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294cc4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x294cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x294cc8: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x294cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x294ccc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x294cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x294cd0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x294cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x294cd4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x294cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x294cd8: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x294cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x294cdc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x294cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x294ce0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x294ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x294ce4: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x294CE4u;
    {
        const bool branch_taken_0x294ce4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x294CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294CE4u;
            // 0x294ce8: 0xaca4000c  sw          $a0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294ce4) {
            ctx->pc = 0x294CF4u;
            goto label_294cf4;
        }
    }
    ctx->pc = 0x294CECu;
    // 0x294cec: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x294cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x294cf0: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x294cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_294cf4:
    // 0x294cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x294CF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x294CF4u: goto label_294cf4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x294CFCu;
    // 0x294cfc: 0x0  nop
    ctx->pc = 0x294cfcu;
    // NOP
}
