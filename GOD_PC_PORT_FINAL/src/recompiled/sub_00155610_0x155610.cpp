#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00155610
// Address: 0x155610 - 0x155668
void sub_00155610_0x155610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155610_0x155610");
#endif

    ctx->pc = 0x155610u;

    // 0x155610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x155610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x155614: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x155614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x155618: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x155618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x15561c: 0x8c900024  lw          $s0, 0x24($a0)
    ctx->pc = 0x15561cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x155620: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x155620u;
    {
        const bool branch_taken_0x155620 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x155624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155620u;
            // 0x155624: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155620) {
            ctx->pc = 0x155648u;
            goto label_155648;
        }
    }
    ctx->pc = 0x155628u;
    // 0x155628: 0x2604fff8  addiu       $a0, $s0, -0x8
    ctx->pc = 0x155628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x15562c: 0x0  nop
    ctx->pc = 0x15562cu;
    // NOP
label_155630:
    // 0x155630: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x155630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155634: 0xc055572  jal         func_1555C8
    ctx->pc = 0x155634u;
    SET_GPR_U32(ctx, 31, 0x15563Cu);
    ctx->pc = 0x155638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155634u;
            // 0x155638: 0x10200a  movz        $a0, $zero, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1555C8u;
    if (runtime->hasFunction(0x1555C8u)) {
        auto targetFn = runtime->lookupFunction(0x1555C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15563Cu; }
        if (ctx->pc != 0x15563Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1555c8_0x155610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15563Cu; }
        if (ctx->pc != 0x15563Cu) { return; }
    }
    ctx->pc = 0x15563Cu;
    // 0x15563c: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x15563cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x155640: 0x5600fffb  bnel        $s0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x155640u;
    {
        const bool branch_taken_0x155640 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x155640) {
            ctx->pc = 0x155644u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x155640u;
            // 0x155644: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
            ctx->pc = 0x155630u;
            runtime->cooperativeGuestYield();
            goto label_155630;
        }
    }
    ctx->pc = 0x155648u;
label_155648:
    // 0x155648: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x155648u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15564c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15564cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155650: 0x3e00008  jr          $ra
    ctx->pc = 0x155650u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155650u;
            // 0x155654: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x155630u: goto label_155630;
            case 0x155648u: goto label_155648;
            default: break;
        }
        return;
    }
    ctx->pc = 0x155658u;
    // 0x155658: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x155658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15565c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x15565cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x155660: 0x3e00008  jr          $ra
    ctx->pc = 0x155660u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155660u;
            // 0x155664: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x155630u: goto label_155630;
            case 0x155648u: goto label_155648;
            default: break;
        }
        return;
    }
    ctx->pc = 0x155668u;
}
