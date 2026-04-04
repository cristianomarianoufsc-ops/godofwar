#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1dbb88
// Address: 0x1dbb88 - 0x1dbbc0
void entry_1dbb88_0x1dbbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1dbb88_0x1dbbc0");
#endif

    ctx->pc = 0x1dbb88u;

    // 0x1dbb88: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1dbb88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbb8c: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x1dbb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x1dbb90: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x1dbb90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x1dbb94: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x1dbb94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x1dbb98: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x1dbb98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x1dbb9c: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x1dbb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x1dbba0: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x1dbba0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x1dbba4: 0xa4800044  sh          $zero, 0x44($a0)
    ctx->pc = 0x1dbba4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 68), (uint16_t)GPR_U32(ctx, 0));
    // 0x1dbba8: 0xa4800046  sh          $zero, 0x46($a0)
    ctx->pc = 0x1dbba8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 0));
    // 0x1dbbac: 0xa4800048  sh          $zero, 0x48($a0)
    ctx->pc = 0x1dbbacu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 72), (uint16_t)GPR_U32(ctx, 0));
    // 0x1dbbb0: 0xa480004a  sh          $zero, 0x4A($a0)
    ctx->pc = 0x1dbbb0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 74), (uint16_t)GPR_U32(ctx, 0));
    // 0x1dbbb4: 0xa480004c  sh          $zero, 0x4C($a0)
    ctx->pc = 0x1dbbb4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 76), (uint16_t)GPR_U32(ctx, 0));
    // 0x1dbbb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBBB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBBBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBBB8u;
            // 0x1dbbbc: 0xa480004e  sh          $zero, 0x4E($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 78), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DBBC0u;
}
