#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D7250
// Address: 0x1d7250 - 0x1d7318
void sub_001D7250_0x1d7250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7250_0x1d7250");
#endif

    ctx->pc = 0x1d7250u;

    // 0x1d7250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d7250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d7254: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d7254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d7258: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d7258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d725c: 0xc06f9e8  jal         func_1BE7A0
    ctx->pc = 0x1D725Cu;
    SET_GPR_U32(ctx, 31, 0x1D7264u);
    ctx->pc = 0x1D7260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D725Cu;
            // 0x1d7260: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE7A0u;
    if (runtime->hasFunction(0x1BE7A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7264u; }
        if (ctx->pc != 0x1D7264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1be7a0_0x1be7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7264u; }
        if (ctx->pc != 0x1D7264u) { return; }
    }
    ctx->pc = 0x1D7264u;
    // 0x1d7264: 0x54400029  bnel        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x1D7264u;
    {
        const bool branch_taken_0x1d7264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7264) {
            ctx->pc = 0x1D7268u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7264u;
            // 0x1d7268: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D730Cu;
            goto label_1d730c;
        }
    }
    ctx->pc = 0x1D726Cu;
    // 0x1d726c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1d726cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d7270: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x1D7270u;
    {
        const bool branch_taken_0x1d7270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7270) {
            ctx->pc = 0x1D7274u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7270u;
            // 0x1d7274: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D730Cu;
            goto label_1d730c;
        }
    }
    ctx->pc = 0x1D7278u;
    // 0x1d7278: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d7278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d727c: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x1d727cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1d7280: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1d7280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x1d7284: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1d7284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1d7288: 0x821026  xor         $v0, $a0, $v0
    ctx->pc = 0x1d7288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x1d728c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x1d728cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1d7290: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1d7290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1d7294: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D7294u;
    {
        const bool branch_taken_0x1d7294 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7294u;
            // 0x1d7298: 0x3c020800  lui         $v0, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7294) {
            ctx->pc = 0x1D72B0u;
            goto label_1d72b0;
        }
    }
    ctx->pc = 0x1D729Cu;
    // 0x1d729c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d729cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d72a0: 0xc075cc6  jal         func_1D7318
    ctx->pc = 0x1D72A0u;
    SET_GPR_U32(ctx, 31, 0x1D72A8u);
    ctx->pc = 0x1D72A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D72A0u;
            // 0x1d72a4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7318u;
    if (runtime->hasFunction(0x1D7318u)) {
        auto targetFn = runtime->lookupFunction(0x1D7318u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D72A8u; }
        if (ctx->pc != 0x1D72A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7318_0x1d7318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D72A8u; }
        if (ctx->pc != 0x1D72A8u) { return; }
    }
    ctx->pc = 0x1D72A8u;
    // 0x1d72a8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1D72A8u;
    {
        const bool branch_taken_0x1d72a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D72ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D72A8u;
            // 0x1d72ac: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d72a8) {
            ctx->pc = 0x1D730Cu;
            goto label_1d730c;
        }
    }
    ctx->pc = 0x1D72B0u;
label_1d72b0:
    // 0x1d72b0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1d72b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1d72b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D72B4u;
    {
        const bool branch_taken_0x1d72b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D72B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D72B4u;
            // 0x1d72b8: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d72b4) {
            ctx->pc = 0x1D72D0u;
            goto label_1d72d0;
        }
    }
    ctx->pc = 0x1D72BCu;
    // 0x1d72bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d72bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d72c0: 0xc075cc6  jal         func_1D7318
    ctx->pc = 0x1D72C0u;
    SET_GPR_U32(ctx, 31, 0x1D72C8u);
    ctx->pc = 0x1D72C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D72C0u;
            // 0x1d72c4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7318u;
    if (runtime->hasFunction(0x1D7318u)) {
        auto targetFn = runtime->lookupFunction(0x1D7318u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D72C8u; }
        if (ctx->pc != 0x1D72C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7318_0x1d7318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D72C8u; }
        if (ctx->pc != 0x1D72C8u) { return; }
    }
    ctx->pc = 0x1D72C8u;
    // 0x1d72c8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1D72C8u;
    {
        const bool branch_taken_0x1d72c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D72CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D72C8u;
            // 0x1d72cc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d72c8) {
            ctx->pc = 0x1D730Cu;
            goto label_1d730c;
        }
    }
    ctx->pc = 0x1D72D0u;
label_1d72d0:
    // 0x1d72d0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1d72d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1d72d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D72D4u;
    {
        const bool branch_taken_0x1d72d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D72D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D72D4u;
            // 0x1d72d8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d72d4) {
            ctx->pc = 0x1D72F0u;
            goto label_1d72f0;
        }
    }
    ctx->pc = 0x1D72DCu;
    // 0x1d72dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d72dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d72e0: 0xc075cc6  jal         func_1D7318
    ctx->pc = 0x1D72E0u;
    SET_GPR_U32(ctx, 31, 0x1D72E8u);
    ctx->pc = 0x1D72E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D72E0u;
            // 0x1d72e4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7318u;
    if (runtime->hasFunction(0x1D7318u)) {
        auto targetFn = runtime->lookupFunction(0x1D7318u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D72E8u; }
        if (ctx->pc != 0x1D72E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7318_0x1d7318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D72E8u; }
        if (ctx->pc != 0x1D72E8u) { return; }
    }
    ctx->pc = 0x1D72E8u;
    // 0x1d72e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1D72E8u;
    {
        const bool branch_taken_0x1d72e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D72ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D72E8u;
            // 0x1d72ec: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d72e8) {
            ctx->pc = 0x1D730Cu;
            goto label_1d730c;
        }
    }
    ctx->pc = 0x1D72F0u;
label_1d72f0:
    // 0x1d72f0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1d72f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1d72f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D72F4u;
    {
        const bool branch_taken_0x1d72f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D72F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D72F4u;
            // 0x1d72f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d72f4) {
            ctx->pc = 0x1D7308u;
            goto label_1d7308;
        }
    }
    ctx->pc = 0x1D72FCu;
    // 0x1d72fc: 0xc075cc6  jal         func_1D7318
    ctx->pc = 0x1D72FCu;
    SET_GPR_U32(ctx, 31, 0x1D7304u);
    ctx->pc = 0x1D7300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D72FCu;
            // 0x1d7300: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7318u;
    if (runtime->hasFunction(0x1D7318u)) {
        auto targetFn = runtime->lookupFunction(0x1D7318u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7304u; }
        if (ctx->pc != 0x1D7304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7318_0x1d7318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7304u; }
        if (ctx->pc != 0x1D7304u) { return; }
    }
    ctx->pc = 0x1D7304u;
    // 0x1d7304: 0x0  nop
    ctx->pc = 0x1d7304u;
    // NOP
label_1d7308:
    // 0x1d7308: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d7308u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d730c:
    // 0x1d730c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d730cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7310: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7310u;
            // 0x1d7314: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D72B0u: goto label_1d72b0;
            case 0x1D72D0u: goto label_1d72d0;
            case 0x1D72F0u: goto label_1d72f0;
            case 0x1D7308u: goto label_1d7308;
            case 0x1D730Cu: goto label_1d730c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D7318u;
}
