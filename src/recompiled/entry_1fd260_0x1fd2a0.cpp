#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1fd260
// Address: 0x1fd260 - 0x1fd2a0
void entry_1fd260_0x1fd2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1fd260_0x1fd2a0");
#endif

    ctx->pc = 0x1fd260u;

    // 0x1fd260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fd260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fd264: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1fd264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1fd268: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1fd268u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x1fd26c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd26cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fd270: 0x8e02e3f4  lw          $v0, -0x1C0C($s0)
    ctx->pc = 0x1fd270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960116)));
    // 0x1fd274: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FD274u;
    {
        const bool branch_taken_0x1fd274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd274) {
            ctx->pc = 0x1FD284u;
            goto label_1fd284;
        }
    }
    ctx->pc = 0x1FD27Cu;
    // 0x1fd27c: 0xc07f4b2  jal         func_1FD2C8
    ctx->pc = 0x1FD27Cu;
    SET_GPR_U32(ctx, 31, 0x1FD284u);
    ctx->pc = 0x1FD2C8u;
    if (runtime->hasFunction(0x1FD2C8u)) {
        auto targetFn = runtime->lookupFunction(0x1FD2C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD284u; }
        if (ctx->pc != 0x1FD284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FD2C8_0x1fd2c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD284u; }
        if (ctx->pc != 0x1FD284u) { return; }
    }
    ctx->pc = 0x1FD284u;
label_1fd284:
    // 0x1fd284: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1FD284u;
    SET_GPR_U32(ctx, 31, 0x1FD28Cu);
    ctx->pc = 0x1FD288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD284u;
            // 0x1fd288: 0x8e04e3f4  lw          $a0, -0x1C0C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960116)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD28Cu; }
        if (ctx->pc != 0x1FD28Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD28Cu; }
        if (ctx->pc != 0x1FD28Cu) { return; }
    }
    ctx->pc = 0x1FD28Cu;
    // 0x1fd28c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1fd28cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd290: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd294: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD294u;
            // 0x1fd298: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FD284u: goto label_1fd284;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FD29Cu;
    // 0x1fd29c: 0x0  nop
    ctx->pc = 0x1fd29cu;
    // NOP
}
