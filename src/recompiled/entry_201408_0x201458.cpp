#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_201408
// Address: 0x201408 - 0x201458
void entry_201408_0x201458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_201408_0x201458");
#endif

    ctx->pc = 0x201408u;

    // 0x201408: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x201408u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x20140c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x20140cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x201410: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x201410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x201414: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x201414u;
    {
        const bool branch_taken_0x201414 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x201418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201414u;
            // 0x201418: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201414) {
            ctx->pc = 0x201450u;
            goto label_201450;
        }
    }
    ctx->pc = 0x20141Cu;
    // 0x20141c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x20141cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x201420: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x201420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x201424: 0x1044000a  beq         $v0, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x201424u;
    {
        const bool branch_taken_0x201424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x201428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201424u;
            // 0x201428: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201424) {
            ctx->pc = 0x201450u;
            goto label_201450;
        }
    }
    ctx->pc = 0x20142Cu;
    // 0x20142c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x20142cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_201430:
    // 0x201430: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x201430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x201434: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x201434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x201438: 0x0  nop
    ctx->pc = 0x201438u;
    // NOP
    // 0x20143c: 0x0  nop
    ctx->pc = 0x20143cu;
    // NOP
    // 0x201440: 0x0  nop
    ctx->pc = 0x201440u;
    // NOP
    // 0x201444: 0x1464fffa  bne         $v1, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x201444u;
    {
        const bool branch_taken_0x201444 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x201448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201444u;
            // 0x201448: 0xe44c00b4  swc1        $f12, 0xB4($v0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 180), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x201444) {
            ctx->pc = 0x201430u;
            runtime->cooperativeGuestYield();
            goto label_201430;
        }
    }
    ctx->pc = 0x20144Cu;
    // 0x20144c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x20144cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_201450:
    // 0x201450: 0x3e00008  jr          $ra
    ctx->pc = 0x201450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201450u;
            // 0x201454: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x201430u: goto label_201430;
            case 0x201450u: goto label_201450;
            default: break;
        }
        return;
    }
    ctx->pc = 0x201458u;
}
