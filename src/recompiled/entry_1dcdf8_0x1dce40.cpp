#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1dcdf8
// Address: 0x1dcdf8 - 0x1dce40
void entry_1dcdf8_0x1dce40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1dcdf8_0x1dce40");
#endif

    ctx->pc = 0x1dcdf8u;

    // 0x1dcdf8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1dcdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1dcdfc: 0x8c42e84c  lw          $v0, -0x17B4($v0)
    ctx->pc = 0x1dcdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x1dce00: 0x8c4500d8  lw          $a1, 0xD8($v0)
    ctx->pc = 0x1dce00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
    // 0x1dce04: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DCE04u;
    {
        const bool branch_taken_0x1dce04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCE04u;
            // 0x1dce08: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dce04) {
            ctx->pc = 0x1DCE18u;
            goto label_1dce18;
        }
    }
    ctx->pc = 0x1DCE0Cu;
    // 0x1dce0c: 0x8ca200f8  lw          $v0, 0xF8($a1)
    ctx->pc = 0x1dce0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 248)));
    // 0x1dce10: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1dce10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1dce14: 0xaca200f8  sw          $v0, 0xF8($a1)
    ctx->pc = 0x1dce14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 248), GPR_U32(ctx, 2));
label_1dce18:
    // 0x1dce18: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1dce18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1dce1c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1dce1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dce20: 0x8c63cb08  lw          $v1, -0x34F8($v1)
    ctx->pc = 0x1dce20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953736)));
    // 0x1dce24: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x1dce24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x1dce28: 0xa083002e  sb          $v1, 0x2E($a0)
    ctx->pc = 0x1dce28u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 46), (uint8_t)GPR_U32(ctx, 3));
    // 0x1dce2c: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x1dce2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x1dce30: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1dce30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1dce34: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x1dce34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x1dce38: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCE38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCE38u;
            // 0x1dce3c: 0xac800018  sw          $zero, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DCE18u: goto label_1dce18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DCE40u;
}
