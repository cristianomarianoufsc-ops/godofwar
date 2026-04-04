#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025A338
// Address: 0x25a338 - 0x25a3a0
void sub_0025A338_0x25a338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A338_0x25a338");
#endif

    ctx->pc = 0x25a338u;

    // 0x25a338: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25a338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25a33c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25a33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25a340: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25a340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25a344: 0xc06a398  jal         func_1A8E60
    ctx->pc = 0x25A344u;
    SET_GPR_U32(ctx, 31, 0x25A34Cu);
    ctx->pc = 0x25A348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25A344u;
            // 0x25a348: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E60u;
    if (runtime->hasFunction(0x1A8E60u)) {
        auto targetFn = runtime->lookupFunction(0x1A8E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A34Cu; }
        if (ctx->pc != 0x25A34Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a8e60_0x1a8ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A34Cu; }
        if (ctx->pc != 0x25A34Cu) { return; }
    }
    ctx->pc = 0x25A34Cu;
    // 0x25a34c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x25a34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x25a350: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x25a350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25a354: 0x24428e10  addiu       $v0, $v0, -0x71F0
    ctx->pc = 0x25a354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938128));
    // 0x25a358: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x25a358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
    // 0x25a35c: 0xae0200a4  sw          $v0, 0xA4($s0)
    ctx->pc = 0x25a35cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
    // 0x25a360: 0x260300b8  addiu       $v1, $s0, 0xB8
    ctx->pc = 0x25a360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 184));
    // 0x25a364: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x25a364u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x25a368: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x25a368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x25a36c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x25a36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_25a370:
    // 0x25a370: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x25a370u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x25a374: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x25a374u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x25a378: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x25a378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x25a37c: 0x0  nop
    ctx->pc = 0x25a37cu;
    // NOP
    // 0x25a380: 0x0  nop
    ctx->pc = 0x25a380u;
    // NOP
    // 0x25a384: 0x1482fffa  bne         $a0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x25A384u;
    {
        const bool branch_taken_0x25a384 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x25A388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A384u;
            // 0x25a388: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a384) {
            ctx->pc = 0x25A370u;
            runtime->cooperativeGuestYield();
            goto label_25a370;
        }
    }
    ctx->pc = 0x25A38Cu;
    // 0x25a38c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25a38cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a390: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25a390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a394: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25a394u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a398: 0x3e00008  jr          $ra
    ctx->pc = 0x25A398u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A39Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A398u;
            // 0x25a39c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25A370u: goto label_25a370;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25A3A0u;
}
