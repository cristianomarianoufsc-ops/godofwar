#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BE6A0
// Address: 0x1be6a0 - 0x1be718
void sub_001BE6A0_0x1be6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE6A0_0x1be6a0");
#endif

    ctx->pc = 0x1be6a0u;

    // 0x1be6a0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1be6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1be6a4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1be6a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1be6a8: 0x8c42cc58  lw          $v0, -0x33A8($v0)
    ctx->pc = 0x1be6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954072)));
    // 0x1be6ac: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1BE6ACu;
    {
        const bool branch_taken_0x1be6ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE6B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE6ACu;
            // 0x1be6b0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be6ac) {
            ctx->pc = 0x1BE708u;
            goto label_1be708;
        }
    }
    ctx->pc = 0x1BE6B4u;
    // 0x1be6b4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1be6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1be6b8: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x1be6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x1be6bc: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1be6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1be6c0: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1be6c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x1be6c4: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x1be6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x1be6c8: 0x40f809  jalr        $v0
    ctx->pc = 0x1BE6C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BE6D0u);
        ctx->pc = 0x1BE6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE6C8u;
            // 0x1be6cc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BE6D0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BE6E8u: goto label_1be6e8;
            case 0x1BE708u: goto label_1be708;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BE6D0u; }
            if (ctx->pc != 0x1BE6D0u) { return; }
        }
        }
    }
    ctx->pc = 0x1BE6D0u;
    // 0x1be6d0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1be6d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be6d4: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x1be6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x1be6d8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BE6D8u;
    {
        const bool branch_taken_0x1be6d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE6D8u;
            // 0x1be6dc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be6d8) {
            ctx->pc = 0x1BE708u;
            goto label_1be708;
        }
    }
    ctx->pc = 0x1BE6E0u;
    // 0x1be6e0: 0x8c630050  lw          $v1, 0x50($v1)
    ctx->pc = 0x1be6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x1be6e4: 0x0  nop
    ctx->pc = 0x1be6e4u;
    // NOP
label_1be6e8:
    // 0x1be6e8: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x1be6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x1be6ec: 0x0  nop
    ctx->pc = 0x1be6ecu;
    // NOP
    // 0x1be6f0: 0x0  nop
    ctx->pc = 0x1be6f0u;
    // NOP
    // 0x1be6f4: 0x0  nop
    ctx->pc = 0x1be6f4u;
    // NOP
    // 0x1be6f8: 0x0  nop
    ctx->pc = 0x1be6f8u;
    // NOP
    // 0x1be6fc: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1BE6FCu;
    {
        const bool branch_taken_0x1be6fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be6fc) {
            ctx->pc = 0x1BE700u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE6FCu;
            // 0x1be700: 0x8c630050  lw          $v1, 0x50($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BE6E8u;
            runtime->cooperativeGuestYield();
            goto label_1be6e8;
        }
    }
    ctx->pc = 0x1BE704u;
    // 0x1be704: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1be704u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1be708:
    // 0x1be708: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be70c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE70Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE70Cu;
            // 0x1be710: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BE6E8u: goto label_1be6e8;
            case 0x1BE708u: goto label_1be708;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BE714u;
    // 0x1be714: 0x0  nop
    ctx->pc = 0x1be714u;
    // NOP
}
