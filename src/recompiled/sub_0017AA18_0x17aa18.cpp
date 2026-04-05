#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017AA18
// Address: 0x17aa18 - 0x17aa78
void sub_0017AA18_0x17aa18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017AA18_0x17aa18");
#endif

    ctx->pc = 0x17aa18u;

    // 0x17aa18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17aa18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17aa1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17aa1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17aa20: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x17aa20u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x17aa24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17aa24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17aa28: 0x8e02c4d8  lw          $v0, -0x3B28($s0)
    ctx->pc = 0x17aa28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952152)));
    // 0x17aa2c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x17AA2Cu;
    {
        const bool branch_taken_0x17aa2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17aa2c) {
            ctx->pc = 0x17AA30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17AA2Cu;
            // 0x17aa30: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17AA50u;
            goto label_17aa50;
        }
    }
    ctx->pc = 0x17AA34u;
    // 0x17aa34: 0x0  nop
    ctx->pc = 0x17aa34u;
    // NOP
label_17aa38:
    // 0x17aa38: 0xc05ea7a  jal         func_17A9E8
    ctx->pc = 0x17AA38u;
    SET_GPR_U32(ctx, 31, 0x17AA40u);
    ctx->pc = 0x17A9E8u;
    if (runtime->hasFunction(0x17A9E8u)) {
        auto targetFn = runtime->lookupFunction(0x17A9E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AA40u; }
        if (ctx->pc != 0x17AA40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A9E8_0x17a9e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AA40u; }
        if (ctx->pc != 0x17AA40u) { return; }
    }
    ctx->pc = 0x17AA40u;
    // 0x17aa40: 0x8e02c4d8  lw          $v0, -0x3B28($s0)
    ctx->pc = 0x17aa40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952152)));
    // 0x17aa44: 0x1040fffc  beqz        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x17AA44u;
    {
        const bool branch_taken_0x17aa44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17aa44) {
            ctx->pc = 0x17AA38u;
            runtime->cooperativeGuestYield();
            goto label_17aa38;
        }
    }
    ctx->pc = 0x17AA4Cu;
    // 0x17aa4c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17aa4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17aa50:
    // 0x17aa50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17aa50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17aa54: 0x3e00008  jr          $ra
    ctx->pc = 0x17AA54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AA58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AA54u;
            // 0x17aa58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17AA38u: goto label_17aa38;
            case 0x17AA50u: goto label_17aa50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17AA5Cu;
    // 0x17aa5c: 0x0  nop
    ctx->pc = 0x17aa5cu;
    // NOP
    // 0x17aa60: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x17aa60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x17aa64: 0x0  nop
    ctx->pc = 0x17aa64u;
    // NOP
    // 0x17aa68: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x17aa68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17aa6c: 0x0  nop
    ctx->pc = 0x17aa6cu;
    // NOP
    // 0x17aa70: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x17aa70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17aa74: 0x0  nop
    ctx->pc = 0x17aa74u;
    // NOP
}
