#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029A2F8
// Address: 0x29a2f8 - 0x29a378
void sub_0029A2F8_0x29a2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A2F8_0x29a2f8");
#endif

    ctx->pc = 0x29a2f8u;

    // 0x29a2f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x29a2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x29a2fc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x29a2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x29a300: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x29a300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x29a304: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x29a304u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a308: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29a308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29a30c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x29a30cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a310: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29a310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29a314: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29a314u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a318: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x29a318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x29a31c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x29a31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x29a320: 0xc0a648c  jal         func_299230
    ctx->pc = 0x29A320u;
    SET_GPR_U32(ctx, 31, 0x29A328u);
    ctx->pc = 0x29A324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A320u;
            // 0x29a324: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299230u;
    if (runtime->hasFunction(0x299230u)) {
        auto targetFn = runtime->lookupFunction(0x299230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A328u; }
        if (ctx->pc != 0x29A328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299230_0x299280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A328u; }
        if (ctx->pc != 0x29A328u) { return; }
    }
    ctx->pc = 0x29A328u;
    // 0x29a328: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29a328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a32c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x29a32cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a330: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29a330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a334: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x29a334u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a338: 0xc0a6880  jal         func_29A200
    ctx->pc = 0x29A338u;
    SET_GPR_U32(ctx, 31, 0x29A340u);
    ctx->pc = 0x29A33Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A338u;
            // 0x29a33c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29A200u;
    if (runtime->hasFunction(0x29A200u)) {
        auto targetFn = runtime->lookupFunction(0x29A200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A340u; }
        if (ctx->pc != 0x29A340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_29a200_0x29a2f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A340u; }
        if (ctx->pc != 0x29A340u) { return; }
    }
    ctx->pc = 0x29A340u;
    // 0x29a340: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x29A340u;
    {
        const bool branch_taken_0x29a340 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A340u;
            // 0x29a344: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a340) {
            ctx->pc = 0x29A350u;
            goto label_29a350;
        }
    }
    ctx->pc = 0x29A348u;
    // 0x29a348: 0xc0a64a0  jal         func_299280
    ctx->pc = 0x29A348u;
    SET_GPR_U32(ctx, 31, 0x29A350u);
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A350u; }
        if (ctx->pc != 0x29A350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299280_0x299298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A350u; }
        if (ctx->pc != 0x29A350u) { return; }
    }
    ctx->pc = 0x29A350u;
label_29a350:
    // 0x29a350: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29a350u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a354: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x29a354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29a358: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x29a358u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29a35c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x29a35cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29a360: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29a360u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29a364: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29a364u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a368: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29a368u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a36c: 0x3e00008  jr          $ra
    ctx->pc = 0x29A36Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A36Cu;
            // 0x29a370: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29A350u: goto label_29a350;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29A374u;
    // 0x29a374: 0x0  nop
    ctx->pc = 0x29a374u;
    // NOP
}
