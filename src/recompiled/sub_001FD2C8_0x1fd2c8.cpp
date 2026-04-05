#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FD2C8
// Address: 0x1fd2c8 - 0x1fd320
void sub_001FD2C8_0x1fd2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD2C8_0x1fd2c8");
#endif

    ctx->pc = 0x1fd2c8u;

    // 0x1fd2c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fd2c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fd2cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1fd2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1fd2d0: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1fd2d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x1fd2d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fd2d8: 0x8e02e3f4  lw          $v0, -0x1C0C($s0)
    ctx->pc = 0x1fd2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960116)));
    // 0x1fd2dc: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1FD2DCu;
    {
        const bool branch_taken_0x1fd2dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd2dc) {
            ctx->pc = 0x1FD2E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD2DCu;
            // 0x1fd2e0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FD30Cu;
            goto label_1fd30c;
        }
    }
    ctx->pc = 0x1FD2E4u;
    // 0x1fd2e4: 0xc06f9a8  jal         func_1BE6A0
    ctx->pc = 0x1FD2E4u;
    SET_GPR_U32(ctx, 31, 0x1FD2ECu);
    ctx->pc = 0x1BE6A0u;
    if (runtime->hasFunction(0x1BE6A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD2ECu; }
        if (ctx->pc != 0x1FD2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE6A0_0x1be6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD2ECu; }
        if (ctx->pc != 0x1FD2ECu) { return; }
    }
    ctx->pc = 0x1FD2ECu;
    // 0x1fd2ec: 0x8c440074  lw          $a0, 0x74($v0)
    ctx->pc = 0x1fd2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x1fd2f0: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x1fd2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1fd2f4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1fd2f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1fd2f8: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x1fd2f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1fd2fc: 0xc04f644  jal         func_13D910
    ctx->pc = 0x1FD2FCu;
    SET_GPR_U32(ctx, 31, 0x1FD304u);
    ctx->pc = 0x1FD300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD2FCu;
            // 0x1fd300: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D910u;
    if (runtime->hasFunction(0x13D910u)) {
        auto targetFn = runtime->lookupFunction(0x13D910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD304u; }
        if (ctx->pc != 0x1FD304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D910_0x13d910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD304u; }
        if (ctx->pc != 0x1FD304u) { return; }
    }
    ctx->pc = 0x1FD304u;
    // 0x1fd304: 0xae02e3f4  sw          $v0, -0x1C0C($s0)
    ctx->pc = 0x1fd304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294960116), GPR_U32(ctx, 2));
    // 0x1fd308: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1fd308u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fd30c:
    // 0x1fd30c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd30cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd310: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD310u;
            // 0x1fd314: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FD30Cu: goto label_1fd30c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FD318u;
    // 0x1fd318: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1fd318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1fd31c: 0x0  nop
    ctx->pc = 0x1fd31cu;
    // NOP
}
