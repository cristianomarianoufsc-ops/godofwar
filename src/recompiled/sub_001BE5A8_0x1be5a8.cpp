#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BE5A8
// Address: 0x1be5a8 - 0x1be600
void sub_001BE5A8_0x1be5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE5A8_0x1be5a8");
#endif

    ctx->pc = 0x1be5a8u;

    // 0x1be5a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1be5a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1be5ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1be5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1be5b0: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x1be5b0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1be5b4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1be5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1be5b8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1BE5B8u;
    {
        const bool branch_taken_0x1be5b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE5BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE5B8u;
            // 0x1be5bc: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be5b8) {
            ctx->pc = 0x1BE5F0u;
            goto label_1be5f0;
        }
    }
    ctx->pc = 0x1BE5C0u;
    // 0x1be5c0: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x1be5c0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1be5c4: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1be5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1be5c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1be5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1be5cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1be5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1be5d0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1be5d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be5d4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1be5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1be5d8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1be5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1be5dc: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1be5dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1be5e0: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1be5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1be5e4: 0x40f809  jalr        $v0
    ctx->pc = 0x1BE5E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BE5ECu);
        ctx->pc = 0x1BE5E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE5E4u;
            // 0x1be5e8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BE5ECu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BE5F0u: goto label_1be5f0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BE5ECu; }
            if (ctx->pc != 0x1BE5ECu) { return; }
        }
        }
    }
    ctx->pc = 0x1BE5ECu;
    // 0x1be5ec: 0x0  nop
    ctx->pc = 0x1be5ecu;
    // NOP
label_1be5f0:
    // 0x1be5f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be5f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be5f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE5F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE5F4u;
            // 0x1be5f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BE5F0u: goto label_1be5f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BE5FCu;
    // 0x1be5fc: 0x0  nop
    ctx->pc = 0x1be5fcu;
    // NOP
}
