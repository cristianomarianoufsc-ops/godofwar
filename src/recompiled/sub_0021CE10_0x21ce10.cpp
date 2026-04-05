#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021CE10
// Address: 0x21ce10 - 0x21ce50
void sub_0021CE10_0x21ce10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021CE10_0x21ce10");
#endif

    ctx->pc = 0x21ce10u;

    // 0x21ce10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21ce10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21ce14: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21ce14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21ce18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21ce18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x21ce1c: 0x8c42cb94  lw          $v0, -0x346C($v0)
    ctx->pc = 0x21ce1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x21ce20: 0x8c42152c  lw          $v0, 0x152C($v0)
    ctx->pc = 0x21ce20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5420)));
    // 0x21ce24: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21CE24u;
    {
        const bool branch_taken_0x21ce24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x21CE28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21CE24u;
            // 0x21ce28: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ce24) {
            ctx->pc = 0x21CE40u;
            goto label_21ce40;
        }
    }
    ctx->pc = 0x21CE2Cu;
    // 0x21ce2c: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x21ce2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x21ce30: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x21ce30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x21ce34: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21ce34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ce38: 0xc0876d8  jal         func_21DB60
    ctx->pc = 0x21CE38u;
    SET_GPR_U32(ctx, 31, 0x21CE40u);
    ctx->pc = 0x21CE3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CE38u;
            // 0x21ce3c: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DB60u;
    if (runtime->hasFunction(0x21DB60u)) {
        auto targetFn = runtime->lookupFunction(0x21DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CE40u; }
        if (ctx->pc != 0x21CE40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_21db60_0x21dc48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CE40u; }
        if (ctx->pc != 0x21CE40u) { return; }
    }
    ctx->pc = 0x21CE40u;
label_21ce40:
    // 0x21ce40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21ce40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21ce44: 0x3e00008  jr          $ra
    ctx->pc = 0x21CE44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21CE44u;
            // 0x21ce48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21CE40u: goto label_21ce40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21CE4Cu;
    // 0x21ce4c: 0x0  nop
    ctx->pc = 0x21ce4cu;
    // NOP
}
