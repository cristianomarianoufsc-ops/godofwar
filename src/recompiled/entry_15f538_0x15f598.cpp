#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_15f538
// Address: 0x15f538 - 0x15f598
void entry_15f538_0x15f598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_15f538_0x15f598");
#endif

    ctx->pc = 0x15f538u;

    // 0x15f538: 0x24870140  addiu       $a3, $a0, 0x140
    ctx->pc = 0x15f538u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    // 0x15f53c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x15f53cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_15f540:
    // 0x15f540: 0x24850034  addiu       $a1, $a0, 0x34
    ctx->pc = 0x15f540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
    // 0x15f544: 0x0  nop
    ctx->pc = 0x15f544u;
    // NOP
label_15f548:
    // 0x15f548: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x15f548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15f54c: 0x5065000a  beql        $v1, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x15F54Cu;
    {
        const bool branch_taken_0x15f54c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x15f54c) {
            ctx->pc = 0x15F550u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15F54Cu;
            // 0x15f550: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15F578u;
            goto label_15f578;
        }
    }
    ctx->pc = 0x15F554u;
    // 0x15f554: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x15f554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_15f558:
    // 0x15f558: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x15f558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x15f55c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x15f55cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x15f560: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x15f560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15f564: 0x0  nop
    ctx->pc = 0x15f564u;
    // NOP
    // 0x15f568: 0x0  nop
    ctx->pc = 0x15f568u;
    // NOP
    // 0x15f56c: 0x5465fffa  bnel        $v1, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15F56Cu;
    {
        const bool branch_taken_0x15f56c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x15f56c) {
            ctx->pc = 0x15F570u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15F56Cu;
            // 0x15f570: 0x8c62000c  lw          $v0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15F558u;
            runtime->cooperativeGuestYield();
            goto label_15f558;
        }
    }
    ctx->pc = 0x15F574u;
    // 0x15f574: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x15f574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_15f578:
    // 0x15f578: 0x4c1fff3  bgez        $a2, . + 4 + (-0xD << 2)
    ctx->pc = 0x15F578u;
    {
        const bool branch_taken_0x15f578 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x15F57Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F578u;
            // 0x15f57c: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f578) {
            ctx->pc = 0x15F548u;
            runtime->cooperativeGuestYield();
            goto label_15f548;
        }
    }
    ctx->pc = 0x15F580u;
    // 0x15f580: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x15f580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x15f584: 0x87102a  slt         $v0, $a0, $a3
    ctx->pc = 0x15f584u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x15f588: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x15F588u;
    {
        const bool branch_taken_0x15f588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F58Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F588u;
            // 0x15f58c: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f588) {
            ctx->pc = 0x15F540u;
            runtime->cooperativeGuestYield();
            goto label_15f540;
        }
    }
    ctx->pc = 0x15F590u;
    // 0x15f590: 0x3e00008  jr          $ra
    ctx->pc = 0x15F590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15F540u: goto label_15f540;
            case 0x15F548u: goto label_15f548;
            case 0x15F558u: goto label_15f558;
            case 0x15F578u: goto label_15f578;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15F598u;
}
