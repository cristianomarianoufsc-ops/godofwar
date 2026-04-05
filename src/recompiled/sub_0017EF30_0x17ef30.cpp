#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017EF30
// Address: 0x17ef30 - 0x17ef60
void sub_0017EF30_0x17ef30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017EF30_0x17ef30");
#endif

    ctx->pc = 0x17ef30u;

    // 0x17ef30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17ef30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17ef34: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x17ef34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x17ef38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17ef38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17ef3c: 0x244203a8  addiu       $v0, $v0, 0x3A8
    ctx->pc = 0x17ef3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 936));
    // 0x17ef40: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x17ef40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x17ef44: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17EF44u;
    {
        const bool branch_taken_0x17ef44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EF48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EF44u;
            // 0x17ef48: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ef44) {
            ctx->pc = 0x17EF54u;
            goto label_17ef54;
        }
    }
    ctx->pc = 0x17EF4Cu;
    // 0x17ef4c: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x17EF4Cu;
    SET_GPR_U32(ctx, 31, 0x17EF54u);
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EF54u; }
        if (ctx->pc != 0x17EF54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EF54u; }
        if (ctx->pc != 0x17EF54u) { return; }
    }
    ctx->pc = 0x17EF54u;
label_17ef54:
    // 0x17ef54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17ef54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ef58: 0x3e00008  jr          $ra
    ctx->pc = 0x17EF58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EF5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EF58u;
            // 0x17ef5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17EF54u: goto label_17ef54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17EF60u;
}
