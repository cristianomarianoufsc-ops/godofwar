#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1d8cb0
// Address: 0x1d8cb0 - 0x1d8d28
void entry_1d8cb0_0x1d8d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1d8cb0_0x1d8d28");
#endif

    ctx->pc = 0x1d8cb0u;

    // 0x1d8cb0: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1d8cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1d8cb4: 0x24432cc0  addiu       $v1, $v0, 0x2CC0
    ctx->pc = 0x1d8cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
    // 0x1d8cb8: 0x9062007d  lbu         $v0, 0x7D($v1)
    ctx->pc = 0x1d8cb8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 125)));
    // 0x1d8cbc: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x1d8cbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1d8cc0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D8CC0u;
    {
        const bool branch_taken_0x1d8cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8cc0) {
            ctx->pc = 0x1D8CF8u;
            goto label_1d8cf8;
        }
    }
    ctx->pc = 0x1D8CC8u;
    // 0x1d8cc8: 0x90620078  lbu         $v0, 0x78($v1)
    ctx->pc = 0x1d8cc8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x1d8ccc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1d8cccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d8cd0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D8CD0u;
    {
        const bool branch_taken_0x1d8cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8cd0) {
            ctx->pc = 0x1D8CF8u;
            goto label_1d8cf8;
        }
    }
    ctx->pc = 0x1D8CD8u;
    // 0x1d8cd8: 0x90620079  lbu         $v0, 0x79($v1)
    ctx->pc = 0x1d8cd8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 121)));
    // 0x1d8cdc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1d8cdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d8ce0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D8CE0u;
    {
        const bool branch_taken_0x1d8ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8ce0) {
            ctx->pc = 0x1D8CF8u;
            goto label_1d8cf8;
        }
    }
    ctx->pc = 0x1D8CE8u;
    // 0x1d8ce8: 0x9062007a  lbu         $v0, 0x7A($v1)
    ctx->pc = 0x1d8ce8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 122)));
    // 0x1d8cec: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1d8cecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d8cf0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D8CF0u;
    {
        const bool branch_taken_0x1d8cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8cf0) {
            ctx->pc = 0x1D8CF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8CF0u;
            // 0x1d8cf4: 0x9062007b  lbu         $v0, 0x7B($v1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 123)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D8D00u;
            goto label_1d8d00;
        }
    }
    ctx->pc = 0x1D8CF8u;
label_1d8cf8:
    // 0x1d8cf8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8CF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8CF8u;
            // 0x1d8cfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D8CF8u: goto label_1d8cf8;
            case 0x1D8D00u: goto label_1d8d00;
            case 0x1D8D1Cu: goto label_1d8d1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D8D00u;
label_1d8d00:
    // 0x1d8d00: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1d8d00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d8d04: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D8D04u;
    {
        const bool branch_taken_0x1d8d04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8d04) {
            ctx->pc = 0x1D8D1Cu;
            goto label_1d8d1c;
        }
    }
    ctx->pc = 0x1D8D0Cu;
    // 0x1d8d0c: 0x9062007c  lbu         $v0, 0x7C($v1)
    ctx->pc = 0x1d8d0cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x1d8d10: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1d8d10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d8d14: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8D14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8D14u;
            // 0x1d8d18: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D8CF8u: goto label_1d8cf8;
            case 0x1D8D00u: goto label_1d8d00;
            case 0x1D8D1Cu: goto label_1d8d1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D8D1Cu;
label_1d8d1c:
    // 0x1d8d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8D1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8D1Cu;
            // 0x1d8d20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D8CF8u: goto label_1d8cf8;
            case 0x1D8D00u: goto label_1d8d00;
            case 0x1D8D1Cu: goto label_1d8d1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D8D24u;
    // 0x1d8d24: 0x0  nop
    ctx->pc = 0x1d8d24u;
    // NOP
}
