#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_243320
// Address: 0x243320 - 0x243360
void entry_243320_0x243360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_243320_0x243360");
#endif

    ctx->pc = 0x243320u;

    // 0x243320: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x243320u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243324: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x243324u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x243328: 0x3e00008  jr          $ra
    ctx->pc = 0x243328u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24332Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243328u;
            // 0x24332c: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x243330u;
    // 0x243330: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x243330u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243334: 0x0  nop
    ctx->pc = 0x243334u;
    // NOP
    // 0x243338: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x243338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x24333c: 0x0  nop
    ctx->pc = 0x24333cu;
    // NOP
    // 0x243340: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x243340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x243344: 0x0  nop
    ctx->pc = 0x243344u;
    // NOP
    // 0x243348: 0x8c4274a8  lw          $v0, 0x74A8($v0)
    ctx->pc = 0x243348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29864)));
    // 0x24334c: 0x0  nop
    ctx->pc = 0x24334cu;
    // NOP
    // 0x243350: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x243350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x243354: 0x0  nop
    ctx->pc = 0x243354u;
    // NOP
    // 0x243358: 0x3e00008  jr          $ra
    ctx->pc = 0x243358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24335Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243358u;
            // 0x24335c: 0xac850018  sw          $a1, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x243360u;
}
