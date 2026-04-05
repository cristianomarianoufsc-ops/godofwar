#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_299230
// Address: 0x299230 - 0x299280
void entry_299230_0x299280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_299230_0x299280");
#endif

    ctx->pc = 0x299230u;

    // 0x299230: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x299230u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x299234: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x299234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x299238: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x299238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x29923c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x29923Cu;
    {
        const bool branch_taken_0x29923c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x299240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29923Cu;
            // 0x299240: 0x3202b  sltu        $a0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29923c) {
            ctx->pc = 0x299274u;
            goto label_299274;
        }
    }
    ctx->pc = 0x299244u;
    // 0x299244: 0x0  nop
    ctx->pc = 0x299244u;
    // NOP
label_299248:
    // 0x299248: 0x42000039  di
    ctx->pc = 0x299248u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x29924c: 0x40f  sync.p
    ctx->pc = 0x29924cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x299250: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x299250u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x299254: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x299254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x299258: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x299258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x29925c: 0x0  nop
    ctx->pc = 0x29925cu;
    // NOP
    // 0x299260: 0x0  nop
    ctx->pc = 0x299260u;
    // NOP
    // 0x299264: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x299264u;
    {
        const bool branch_taken_0x299264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x299264) {
            ctx->pc = 0x299248u;
            runtime->cooperativeGuestYield();
            goto label_299248;
        }
    }
    ctx->pc = 0x29926Cu;
    // 0x29926c: 0x3e00008  jr          $ra
    ctx->pc = 0x29926Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29926Cu;
            // 0x299270: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x299248u: goto label_299248;
            case 0x299274u: goto label_299274;
            default: break;
        }
        return;
    }
    ctx->pc = 0x299274u;
label_299274:
    // 0x299274: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x299274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299278: 0x3e00008  jr          $ra
    ctx->pc = 0x299278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29927Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299278u;
            // 0x29927c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x299248u: goto label_299248;
            case 0x299274u: goto label_299274;
            default: break;
        }
        return;
    }
    ctx->pc = 0x299280u;
}
