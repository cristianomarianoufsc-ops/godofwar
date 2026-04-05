#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BB7E8
// Address: 0x1bb7e8 - 0x1bb9b8
void sub_001BB7E8_0x1bb7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB7E8_0x1bb7e8");
#endif

    ctx->pc = 0x1bb7e8u;

    // 0x1bb7e8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1bb7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1bb7ec: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1bb7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x1bb7f0: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x1bb7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x1bb7f4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1bb7f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb7f8: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x1bb7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x1bb7fc: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1bb7fcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb800: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1bb800u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb804: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1bb804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1bb808: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1bb808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1bb80c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bb80cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb810: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1bb810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1bb814: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bb814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb818: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1bb818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1bb81c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1bb81cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bb820: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1bb820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x1bb824: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x1bb824u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bb828: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bb828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bb82c: 0xc0a250f  jal         func_28943C
    ctx->pc = 0x1BB82Cu;
    SET_GPR_U32(ctx, 31, 0x1BB834u);
    ctx->pc = 0x1BB830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB82Cu;
            // 0x1bb830: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB834u; }
        if (ctx->pc != 0x1BB834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28943c_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB834u; }
        if (ctx->pc != 0x1BB834u) { return; }
    }
    ctx->pc = 0x1BB834u;
    // 0x1bb834: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1bb834u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bb838:
    // 0x1bb838: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x1bb838u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x1bb83c: 0x26225280  addiu       $v0, $s1, 0x5280
    ctx->pc = 0x1bb83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 21120));
    // 0x1bb840: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1bb840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1bb844: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1bb844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bb848: 0x8ca20068  lw          $v0, 0x68($a1)
    ctx->pc = 0x1bb848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
    // 0x1bb84c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bb84cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bb850: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x1BB850u;
    {
        const bool branch_taken_0x1bb850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb850) {
            ctx->pc = 0x1BB854u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB850u;
            // 0x1bb854: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BB8D0u;
            goto label_1bb8d0;
        }
    }
    ctx->pc = 0x1BB858u;
    // 0x1bb858: 0x12c0000b  beqz        $s6, . + 4 + (0xB << 2)
    ctx->pc = 0x1BB858u;
    {
        const bool branch_taken_0x1bb858 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB858u;
            // 0x1bb85c: 0x26225280  addiu       $v0, $s1, 0x5280 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 21120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb858) {
            ctx->pc = 0x1BB888u;
            goto label_1bb888;
        }
    }
    ctx->pc = 0x1BB860u;
    // 0x1bb860: 0xc0a349c  jal         func_28D270
    ctx->pc = 0x1BB860u;
    SET_GPR_U32(ctx, 31, 0x1BB868u);
    ctx->pc = 0x1BB864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB860u;
            // 0x1bb864: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D270u;
    if (runtime->hasFunction(0x28D270u)) {
        auto targetFn = runtime->lookupFunction(0x28D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB868u; }
        if (ctx->pc != 0x1BB868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D270_0x28d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB868u; }
        if (ctx->pc != 0x1BB868u) { return; }
    }
    ctx->pc = 0x1BB868u;
    // 0x1bb868: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BB868u;
    {
        const bool branch_taken_0x1bb868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB86Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB868u;
            // 0x1bb86c: 0x26225280  addiu       $v0, $s1, 0x5280 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 21120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb868) {
            ctx->pc = 0x1BB888u;
            goto label_1bb888;
        }
    }
    ctx->pc = 0x1BB870u;
    // 0x1bb870: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bb870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb874: 0x2631004  sllv        $v0, $v1, $s3
    ctx->pc = 0x1bb874u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 19) & 0x1F));
    // 0x1bb878: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1bb878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1bb87c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x1bb87cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x1bb880: 0x282a024  and         $s4, $s4, $v0
    ctx->pc = 0x1bb880u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x1bb884: 0x26225280  addiu       $v0, $s1, 0x5280
    ctx->pc = 0x1bb884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 21120));
label_1bb888:
    // 0x1bb888: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1bb888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1bb88c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1bb88cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bb890: 0x8ca20068  lw          $v0, 0x68($a1)
    ctx->pc = 0x1bb890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
    // 0x1bb894: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bb894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bb898: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1BB898u;
    {
        const bool branch_taken_0x1bb898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb898) {
            ctx->pc = 0x1BB89Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB898u;
            // 0x1bb89c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BB8D0u;
            goto label_1bb8d0;
        }
    }
    ctx->pc = 0x1BB8A0u;
    // 0x1bb8a0: 0x52a0000b  beql        $s5, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1BB8A0u;
    {
        const bool branch_taken_0x1bb8a0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb8a0) {
            ctx->pc = 0x1BB8A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB8A0u;
            // 0x1bb8a4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BB8D0u;
            goto label_1bb8d0;
        }
    }
    ctx->pc = 0x1BB8A8u;
    // 0x1bb8a8: 0xc0a349c  jal         func_28D270
    ctx->pc = 0x1BB8A8u;
    SET_GPR_U32(ctx, 31, 0x1BB8B0u);
    ctx->pc = 0x1BB8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB8A8u;
            // 0x1bb8ac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D270u;
    if (runtime->hasFunction(0x28D270u)) {
        auto targetFn = runtime->lookupFunction(0x28D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB8B0u; }
        if (ctx->pc != 0x1BB8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D270_0x28d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB8B0u; }
        if (ctx->pc != 0x1BB8B0u) { return; }
    }
    ctx->pc = 0x1BB8B0u;
    // 0x1bb8b0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BB8B0u;
    {
        const bool branch_taken_0x1bb8b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb8b0) {
            ctx->pc = 0x1BB8B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB8B0u;
            // 0x1bb8b4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BB8D0u;
            goto label_1bb8d0;
        }
    }
    ctx->pc = 0x1BB8B8u;
    // 0x1bb8b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bb8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb8bc: 0x2631004  sllv        $v0, $v1, $s3
    ctx->pc = 0x1bb8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 19) & 0x1F));
    // 0x1bb8c0: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x1bb8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x1bb8c4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x1bb8c4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x1bb8c8: 0x282a024  and         $s4, $s4, $v0
    ctx->pc = 0x1bb8c8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x1bb8cc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1bb8ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1bb8d0:
    // 0x1bb8d0: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x1bb8d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1bb8d4: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x1BB8D4u;
    {
        const bool branch_taken_0x1bb8d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB8D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB8D4u;
            // 0x1bb8d8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb8d4) {
            ctx->pc = 0x1BB838u;
            runtime->cooperativeGuestYield();
            goto label_1bb838;
        }
    }
    ctx->pc = 0x1BB8DCu;
    // 0x1bb8dc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1bb8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb8e0: 0xc06ed82  jal         func_1BB608
    ctx->pc = 0x1BB8E0u;
    SET_GPR_U32(ctx, 31, 0x1BB8E8u);
    ctx->pc = 0x1BB8E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB8E0u;
            // 0x1bb8e4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB608u;
    if (runtime->hasFunction(0x1BB608u)) {
        auto targetFn = runtime->lookupFunction(0x1BB608u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB8E8u; }
        if (ctx->pc != 0x1BB8E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB608_0x1bb608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB8E8u; }
        if (ctx->pc != 0x1BB8E8u) { return; }
    }
    ctx->pc = 0x1BB8E8u;
    // 0x1bb8e8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1bb8e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb8ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bb8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb8f0: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x1bb8f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb8f4: 0x0  nop
    ctx->pc = 0x1bb8f4u;
    // NOP
label_1bb8f8:
    // 0x1bb8f8: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x1bb8f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb8fc: 0x2b3880b  movn        $s1, $s5, $s3
    ctx->pc = 0x1bb8fcu;
    if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 21));
    // 0x1bb900: 0x5220001e  beql        $s1, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x1BB900u;
    {
        const bool branch_taken_0x1bb900 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb900) {
            ctx->pc = 0x1BB904u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB900u;
            // 0x1bb904: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BB97Cu;
            goto label_1bb97c;
        }
    }
    ctx->pc = 0x1BB908u;
    // 0x1bb908: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1bb908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bb90c: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x1BB90Cu;
    {
        const bool branch_taken_0x1bb90c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb90c) {
            ctx->pc = 0x1BB910u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB90Cu;
            // 0x1bb910: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BB97Cu;
            goto label_1bb97c;
        }
    }
    ctx->pc = 0x1BB914u;
    // 0x1bb914: 0x2682ffff  addiu       $v0, $s4, -0x1
    ctx->pc = 0x1bb914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x1bb918: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1bb918u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x1bb91c: 0x30500001  andi        $s0, $v0, 0x1
    ctx->pc = 0x1bb91cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bb920: 0x24845280  addiu       $a0, $a0, 0x5280
    ctx->pc = 0x1bb920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21120));
    // 0x1bb924: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1bb924u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1bb928: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bb928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb92c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bb92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bb930: 0x2021004  sllv        $v0, $v0, $s0
    ctx->pc = 0x1bb930u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x1bb934: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x1bb934u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x1bb938: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1bb938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bb93c: 0x282a024  and         $s4, $s4, $v0
    ctx->pc = 0x1bb93cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x1bb940: 0x8c620068  lw          $v0, 0x68($v1)
    ctx->pc = 0x1bb940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1bb944: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1bb944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1bb948: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BB948u;
    {
        const bool branch_taken_0x1bb948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB94Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB948u;
            // 0x1bb94c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb948) {
            ctx->pc = 0x1BB960u;
            goto label_1bb960;
        }
    }
    ctx->pc = 0x1BB950u;
    // 0x1bb950: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bb950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb954: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bb954u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb958: 0xc06ec3e  jal         func_1BB0F8
    ctx->pc = 0x1BB958u;
    SET_GPR_U32(ctx, 31, 0x1BB960u);
    ctx->pc = 0x1BB95Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB958u;
            // 0x1bb95c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB0F8u;
    if (runtime->hasFunction(0x1BB0F8u)) {
        auto targetFn = runtime->lookupFunction(0x1BB0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB960u; }
        if (ctx->pc != 0x1BB960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1bb0f8_0x1bb1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB960u; }
        if (ctx->pc != 0x1BB960u) { return; }
    }
    ctx->pc = 0x1BB960u;
label_1bb960:
    // 0x1bb960: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bb960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb964: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1bb964u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb968: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1bb968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bb96c: 0xc06ec3e  jal         func_1BB0F8
    ctx->pc = 0x1BB96Cu;
    SET_GPR_U32(ctx, 31, 0x1BB974u);
    ctx->pc = 0x1BB970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB96Cu;
            // 0x1bb970: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB0F8u;
    if (runtime->hasFunction(0x1BB0F8u)) {
        auto targetFn = runtime->lookupFunction(0x1BB0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB974u; }
        if (ctx->pc != 0x1BB974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1bb0f8_0x1bb1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB974u; }
        if (ctx->pc != 0x1BB974u) { return; }
    }
    ctx->pc = 0x1BB974u;
    // 0x1bb974: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1bb974u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb978: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1bb978u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1bb97c:
    // 0x1bb97c: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x1bb97cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1bb980: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1BB980u;
    {
        const bool branch_taken_0x1bb980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB980u;
            // 0x1bb984: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb980) {
            ctx->pc = 0x1BB8F8u;
            runtime->cooperativeGuestYield();
            goto label_1bb8f8;
        }
    }
    ctx->pc = 0x1BB988u;
    // 0x1bb988: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1bb988u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1bb98c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1bb98cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb990: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1bb990u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bb994: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1bb994u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bb998: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1bb998u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bb99c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1bb99cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bb9a0: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x1bb9a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bb9a4: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x1bb9a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bb9a8: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x1bb9a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bb9ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bb9acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bb9b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB9B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB9B0u;
            // 0x1bb9b4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BB838u: goto label_1bb838;
            case 0x1BB888u: goto label_1bb888;
            case 0x1BB8D0u: goto label_1bb8d0;
            case 0x1BB8F8u: goto label_1bb8f8;
            case 0x1BB960u: goto label_1bb960;
            case 0x1BB97Cu: goto label_1bb97c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BB9B8u;
}
