#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_15f1e8
// Address: 0x15f1e8 - 0x15f240
void entry_15f1e8_0x15f240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_15f1e8_0x15f240");
#endif

    ctx->pc = 0x15f1e8u;

    // 0x15f1e8: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x15f1e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x15f1ec: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x15f1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x15f1f0: 0xad070010  sw          $a3, 0x10($t0)
    ctx->pc = 0x15f1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 7));
    // 0x15f1f4: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x15f1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15f1f8: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x15f1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15f1fc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x15f1fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f200: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x15f200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x15f204: 0x24c60034  addiu       $a2, $a2, 0x34
    ctx->pc = 0x15f204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 52));
label_15f208:
    // 0x15f208: 0x50660007  beql        $v1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x15F208u;
    {
        const bool branch_taken_0x15f208 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x15f208) {
            ctx->pc = 0x15F20Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15F208u;
            // 0x15f20c: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15F228u;
            goto label_15f228;
        }
    }
    ctx->pc = 0x15F210u;
    // 0x15f210: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x15f210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x15f214: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x15f214u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x15f218: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x15F218u;
    {
        const bool branch_taken_0x15f218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f218) {
            ctx->pc = 0x15F21Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15F218u;
            // 0x15f21c: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15F208u;
            runtime->cooperativeGuestYield();
            goto label_15f208;
        }
    }
    ctx->pc = 0x15F220u;
    // 0x15f220: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x15f220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x15f224: 0x0  nop
    ctx->pc = 0x15f224u;
    // NOP
label_15f228:
    // 0x15f228: 0xac680004  sw          $t0, 0x4($v1)
    ctx->pc = 0x15f228u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 8));
    // 0x15f22c: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x15f22cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x15f230: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x15f230u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x15f234: 0x3e00008  jr          $ra
    ctx->pc = 0x15F234u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F234u;
            // 0x15f238: 0xac480000  sw          $t0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15F208u: goto label_15f208;
            case 0x15F228u: goto label_15f228;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15F23Cu;
    // 0x15f23c: 0x0  nop
    ctx->pc = 0x15f23cu;
    // NOP
}
