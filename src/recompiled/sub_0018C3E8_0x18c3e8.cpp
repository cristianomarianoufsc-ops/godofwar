#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018C3E8
// Address: 0x18c3e8 - 0x18c7a8
void sub_0018C3E8_0x18c3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018C3E8_0x18c3e8");
#endif

    ctx->pc = 0x18c3e8u;

    // 0x18c3e8: 0x27bdfc70  addiu       $sp, $sp, -0x390
    ctx->pc = 0x18c3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966384));
    // 0x18c3ec: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x18c3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x18c3f0: 0x7fb10370  sq          $s1, 0x370($sp)
    ctx->pc = 0x18c3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 880), GPR_VEC(ctx, 17));
    // 0x18c3f4: 0x24a53108  addiu       $a1, $a1, 0x3108
    ctx->pc = 0x18c3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12552));
    // 0x18c3f8: 0x7fb30350  sq          $s3, 0x350($sp)
    ctx->pc = 0x18c3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 848), GPR_VEC(ctx, 19));
    // 0x18c3fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18c3fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c400: 0x26330024  addiu       $s3, $s1, 0x24
    ctx->pc = 0x18c400u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x18c404: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x18c404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c408: 0x7fb00380  sq          $s0, 0x380($sp)
    ctx->pc = 0x18c408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 896), GPR_VEC(ctx, 16));
    // 0x18c40c: 0x7fb20360  sq          $s2, 0x360($sp)
    ctx->pc = 0x18c40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 864), GPR_VEC(ctx, 18));
    // 0x18c410: 0x7fb40340  sq          $s4, 0x340($sp)
    ctx->pc = 0x18c410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 832), GPR_VEC(ctx, 20));
    // 0x18c414: 0x7fb50330  sq          $s5, 0x330($sp)
    ctx->pc = 0x18c414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), GPR_VEC(ctx, 21));
    // 0x18c418: 0xffbf0320  sd          $ra, 0x320($sp)
    ctx->pc = 0x18c418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 800), GPR_U64(ctx, 31));
    // 0x18c41c: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x18C41Cu;
    SET_GPR_U32(ctx, 31, 0x18C424u);
    ctx->pc = 0x18C420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C41Cu;
            // 0x18c420: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C424u; }
        if (ctx->pc != 0x18C424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C424u; }
        if (ctx->pc != 0x18C424u) { return; }
    }
    ctx->pc = 0x18C424u;
    // 0x18c424: 0xc05f9de  jal         func_17E778
    ctx->pc = 0x18C424u;
    SET_GPR_U32(ctx, 31, 0x18C42Cu);
    ctx->pc = 0x18C428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C424u;
            // 0x18c428: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E778u;
    if (runtime->hasFunction(0x17E778u)) {
        auto targetFn = runtime->lookupFunction(0x17E778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C42Cu; }
        if (ctx->pc != 0x18C42Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e778_0x17e7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C42Cu; }
        if (ctx->pc != 0x18C42Cu) { return; }
    }
    ctx->pc = 0x18C42Cu;
    // 0x18c42c: 0x144000d5  bnez        $v0, . + 4 + (0xD5 << 2)
    ctx->pc = 0x18C42Cu;
    {
        const bool branch_taken_0x18c42c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C42Cu;
            // 0x18c430: 0x7bb00380  lq          $s0, 0x380($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c42c) {
            ctx->pc = 0x18C784u;
            goto label_18c784;
        }
    }
    ctx->pc = 0x18C434u;
    // 0x18c434: 0xc05f9b8  jal         func_17E6E0
    ctx->pc = 0x18C434u;
    SET_GPR_U32(ctx, 31, 0x18C43Cu);
    ctx->pc = 0x18C438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C434u;
            // 0x18c438: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E6E0u;
    if (runtime->hasFunction(0x17E6E0u)) {
        auto targetFn = runtime->lookupFunction(0x17E6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C43Cu; }
        if (ctx->pc != 0x18C43Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e6e0_0x17e708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C43Cu; }
        if (ctx->pc != 0x18C43Cu) { return; }
    }
    ctx->pc = 0x18C43Cu;
    // 0x18c43c: 0x27b40100  addiu       $s4, $sp, 0x100
    ctx->pc = 0x18c43cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x18c440: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x18c440u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x18c444: 0x24a530a0  addiu       $a1, $a1, 0x30A0
    ctx->pc = 0x18c444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12448));
    // 0x18c448: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18c448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c44c: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x18C44Cu;
    SET_GPR_U32(ctx, 31, 0x18C454u);
    ctx->pc = 0x18C450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C44Cu;
            // 0x18c450: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C454u; }
        if (ctx->pc != 0x18C454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C454u; }
        if (ctx->pc != 0x18C454u) { return; }
    }
    ctx->pc = 0x18C454u;
    // 0x18c454: 0xc05f9ae  jal         func_17E6B8
    ctx->pc = 0x18C454u;
    SET_GPR_U32(ctx, 31, 0x18C45Cu);
    ctx->pc = 0x18C458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C454u;
            // 0x18c458: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E6B8u;
    if (runtime->hasFunction(0x17E6B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E6B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C45Cu; }
        if (ctx->pc != 0x18C45Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e6b8_0x17e6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C45Cu; }
        if (ctx->pc != 0x18C45Cu) { return; }
    }
    ctx->pc = 0x18C45Cu;
    // 0x18c45c: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x18c45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x18c460: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x18c460u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x18c464: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x18C464u;
    {
        const bool branch_taken_0x18c464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c464) {
            ctx->pc = 0x18C468u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18C464u;
            // 0x18c468: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18C4B8u;
            goto label_18c4b8;
        }
    }
    ctx->pc = 0x18C46Cu;
    // 0x18c46c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x18c46cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18c470: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x18c470u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18c474: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x18C474u;
    {
        const bool branch_taken_0x18c474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c474) {
            ctx->pc = 0x18C478u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18C474u;
            // 0x18c478: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18C4B8u;
            goto label_18c4b8;
        }
    }
    ctx->pc = 0x18C47Cu;
    // 0x18c47c: 0x27b00200  addiu       $s0, $sp, 0x200
    ctx->pc = 0x18c47cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_18c480:
    // 0x18c480: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x18c480u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x18c484: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x18c484u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c488: 0x24a530c0  addiu       $a1, $a1, 0x30C0
    ctx->pc = 0x18c488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12480));
    // 0x18c48c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18c48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c490: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x18C490u;
    SET_GPR_U32(ctx, 31, 0x18C498u);
    ctx->pc = 0x18C494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C490u;
            // 0x18c494: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C498u; }
        if (ctx->pc != 0x18C498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C498u; }
        if (ctx->pc != 0x18C498u) { return; }
    }
    ctx->pc = 0x18C498u;
    // 0x18c498: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x18c498u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x18c49c: 0xc05f9ae  jal         func_17E6B8
    ctx->pc = 0x18C49Cu;
    SET_GPR_U32(ctx, 31, 0x18C4A4u);
    ctx->pc = 0x18C4A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C49Cu;
            // 0x18c4a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E6B8u;
    if (runtime->hasFunction(0x17E6B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E6B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C4A4u; }
        if (ctx->pc != 0x18C4A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e6b8_0x17e6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C4A4u; }
        if (ctx->pc != 0x18C4A4u) { return; }
    }
    ctx->pc = 0x18C4A4u;
    // 0x18c4a4: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x18c4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x18c4a8: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x18c4a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18c4ac: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x18C4ACu;
    {
        const bool branch_taken_0x18c4ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C4B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C4ACu;
            // 0x18c4b0: 0x27b00200  addiu       $s0, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c4ac) {
            ctx->pc = 0x18C480u;
            runtime->cooperativeGuestYield();
            goto label_18c480;
        }
    }
    ctx->pc = 0x18C4B4u;
    // 0x18c4b4: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x18c4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_18c4b8:
    // 0x18c4b8: 0x18400043  blez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x18C4B8u;
    {
        const bool branch_taken_0x18c4b8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x18C4BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C4B8u;
            // 0x18c4bc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c4b8) {
            ctx->pc = 0x18C5C8u;
            goto label_18c5c8;
        }
    }
    ctx->pc = 0x18C4C0u;
label_18c4c0:
    // 0x18c4c0: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x18c4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x18c4c4: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x18c4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x18c4c8: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x18c4c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x18c4cc: 0x2052818  mult        $a1, $s0, $a1
    ctx->pc = 0x18c4ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x18c4d0: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x18c4d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x18c4d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18c4d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c4d8: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x18c4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x18c4dc: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x18c4dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x18c4e0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x18c4e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x18c4e4: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x18c4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x18c4e8: 0xc05f85c  jal         func_17E170
    ctx->pc = 0x18C4E8u;
    SET_GPR_U32(ctx, 31, 0x18C4F0u);
    ctx->pc = 0x18C4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C4E8u;
            // 0x18c4ec: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E170u;
    if (runtime->hasFunction(0x17E170u)) {
        auto targetFn = runtime->lookupFunction(0x17E170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C4F0u; }
        if (ctx->pc != 0x18C4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E170_0x17e170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C4F0u; }
        if (ctx->pc != 0x18C4F0u) { return; }
    }
    ctx->pc = 0x18C4F0u;
    // 0x18c4f0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x18c4f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c4f4: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x18c4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x18c4f8: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x18c4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
    // 0x18c4fc: 0x90a3c678  lbu         $v1, -0x3988($a1)
    ctx->pc = 0x18c4fcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294952568)));
    // 0x18c500: 0x2448c168  addiu       $t0, $v0, -0x3E98
    ctx->pc = 0x18c500u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951272));
    // 0x18c504: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x18C504u;
    {
        const bool branch_taken_0x18c504 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C504u;
            // 0x18c508: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c504) {
            ctx->pc = 0x18C558u;
            goto label_18c558;
        }
    }
    ctx->pc = 0x18C50Cu;
    // 0x18c50c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x18c50cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_18c510:
    // 0x18c510: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x18c510u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18c514: 0x2442c680  addiu       $v0, $v0, -0x3980
    ctx->pc = 0x18c514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952576));
    // 0x18c518: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x18c518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18c51c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18c51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18c520: 0x15020009  bne         $t0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18C520u;
    {
        const bool branch_taken_0x18c520 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x18C524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C520u;
            // 0x18c524: 0x90a2c678  lbu         $v0, -0x3988($a1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294952568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c520) {
            ctx->pc = 0x18C548u;
            goto label_18c548;
        }
    }
    ctx->pc = 0x18C528u;
    // 0x18c528: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x18c528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x18c52c: 0x3c0307ff  lui         $v1, 0x7FF
    ctx->pc = 0x18c52cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2047 << 16));
    // 0x18c530: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x18c530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x18c534: 0x426c0  sll         $a0, $a0, 27
    ctx->pc = 0x18c534u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 27));
    // 0x18c538: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x18c538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x18c53c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x18c53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x18c540: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x18C540u;
    {
        const bool branch_taken_0x18c540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C540u;
            // 0x18c544: 0xace20014  sw          $v0, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c540) {
            ctx->pc = 0x18C5A0u;
            goto label_18c5a0;
        }
    }
    ctx->pc = 0x18C548u;
label_18c548:
    // 0x18c548: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x18c548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x18c54c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x18c54cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18c550: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x18C550u;
    {
        const bool branch_taken_0x18c550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C550u;
            // 0x18c554: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c550) {
            ctx->pc = 0x18C510u;
            runtime->cooperativeGuestYield();
            goto label_18c510;
        }
    }
    ctx->pc = 0x18C558u;
label_18c558:
    // 0x18c558: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x18c558u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x18c55c: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x18c55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x18c560: 0x90c4c678  lbu         $a0, -0x3988($a2)
    ctx->pc = 0x18c560u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294952568)));
    // 0x18c564: 0x3c0307ff  lui         $v1, 0x7FF
    ctx->pc = 0x18c564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2047 << 16));
    // 0x18c568: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x18c568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x18c56c: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x18c56cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x18c570: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x18c570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x18c574: 0x426c0  sll         $a0, $a0, 27
    ctx->pc = 0x18c574u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 27));
    // 0x18c578: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x18c578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x18c57c: 0x24a5c680  addiu       $a1, $a1, -0x3980
    ctx->pc = 0x18c57cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952576));
    // 0x18c580: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x18c580u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
    // 0x18c584: 0x216c2  srl         $v0, $v0, 27
    ctx->pc = 0x18c584u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 27));
    // 0x18c588: 0x90c3c678  lbu         $v1, -0x3988($a2)
    ctx->pc = 0x18c588u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294952568)));
    // 0x18c58c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18c58cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18c590: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x18c590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x18c594: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x18c594u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x18c598: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18c598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18c59c: 0xa0c3c678  sb          $v1, -0x3988($a2)
    ctx->pc = 0x18c59cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4294952568), (uint8_t)GPR_U32(ctx, 3));
label_18c5a0:
    // 0x18c5a0: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x18c5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x18c5a4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x18c5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x18c5a8: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x18c5a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x18c5ac: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x18c5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x18c5b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18c5b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18c5b4: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x18c5b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18c5b8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18c5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18c5bc: 0xace20010  sw          $v0, 0x10($a3)
    ctx->pc = 0x18c5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 2));
    // 0x18c5c0: 0x1460ffbf  bnez        $v1, . + 4 + (-0x41 << 2)
    ctx->pc = 0x18C5C0u;
    {
        const bool branch_taken_0x18c5c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C5C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C5C0u;
            // 0x18c5c4: 0xac510000  sw          $s1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c5c0) {
            ctx->pc = 0x18C4C0u;
            runtime->cooperativeGuestYield();
            goto label_18c4c0;
        }
    }
    ctx->pc = 0x18C5C8u;
label_18c5c8:
    // 0x18c5c8: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x18c5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x18c5cc: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x18c5ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x18c5d0: 0x1440005b  bnez        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x18C5D0u;
    {
        const bool branch_taken_0x18c5d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C5D0u;
            // 0x18c5d4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c5d0) {
            ctx->pc = 0x18C740u;
            goto label_18c740;
        }
    }
    ctx->pc = 0x18C5D8u;
    // 0x18c5d8: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x18c5d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18c5dc: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x18C5DCu;
    {
        const bool branch_taken_0x18c5dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C5DCu;
            // 0x18c5e0: 0x27b50100  addiu       $s5, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c5dc) {
            ctx->pc = 0x18C740u;
            goto label_18c740;
        }
    }
    ctx->pc = 0x18C5E4u;
    // 0x18c5e4: 0x0  nop
    ctx->pc = 0x18c5e4u;
    // NOP
label_18c5e8:
    // 0x18c5e8: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x18c5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x18c5ec: 0x24a530c0  addiu       $a1, $a1, 0x30C0
    ctx->pc = 0x18c5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12480));
    // 0x18c5f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x18c5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c5f4: 0x26260024  addiu       $a2, $s1, 0x24
    ctx->pc = 0x18c5f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x18c5f8: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x18C5F8u;
    SET_GPR_U32(ctx, 31, 0x18C600u);
    ctx->pc = 0x18C5FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C5F8u;
            // 0x18c5fc: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C600u; }
        if (ctx->pc != 0x18C600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C600u; }
        if (ctx->pc != 0x18C600u) { return; }
    }
    ctx->pc = 0x18C600u;
    // 0x18c600: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x18c600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x18c604: 0x18400049  blez        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x18C604u;
    {
        const bool branch_taken_0x18c604 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x18C608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C604u;
            // 0x18c608: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c604) {
            ctx->pc = 0x18C72Cu;
            goto label_18c72c;
        }
    }
    ctx->pc = 0x18C60Cu;
    // 0x18c60c: 0x0  nop
    ctx->pc = 0x18c60cu;
    // NOP
label_18c610:
    // 0x18c610: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x18c610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x18c614: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x18c614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x18c618: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x18c618u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x18c61c: 0x2052818  mult        $a1, $s0, $a1
    ctx->pc = 0x18c61cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x18c620: 0x12a080  sll         $s4, $s2, 2
    ctx->pc = 0x18c620u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x18c624: 0x26330004  addiu       $s3, $s1, 0x4
    ctx->pc = 0x18c624u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x18c628: 0x2741021  addu        $v0, $s3, $s4
    ctx->pc = 0x18c628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x18c62c: 0x8e270018  lw          $a3, 0x18($s1)
    ctx->pc = 0x18c62cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x18c630: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x18c630u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18c634: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x18c634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c638: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x18c638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x18c63c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x18c63cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x18c640: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x18c640u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x18c644: 0xc05f85c  jal         func_17E170
    ctx->pc = 0x18C644u;
    SET_GPR_U32(ctx, 31, 0x18C64Cu);
    ctx->pc = 0x18C648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C644u;
            // 0x18c648: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E170u;
    if (runtime->hasFunction(0x17E170u)) {
        auto targetFn = runtime->lookupFunction(0x17E170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C64Cu; }
        if (ctx->pc != 0x18C64Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E170_0x17e170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C64Cu; }
        if (ctx->pc != 0x18C64Cu) { return; }
    }
    ctx->pc = 0x18C64Cu;
    // 0x18c64c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x18c64cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c650: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x18c650u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x18c654: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x18c654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
    // 0x18c658: 0x90a3c678  lbu         $v1, -0x3988($a1)
    ctx->pc = 0x18c658u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294952568)));
    // 0x18c65c: 0x2448c168  addiu       $t0, $v0, -0x3E98
    ctx->pc = 0x18c65cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951272));
    // 0x18c660: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x18C660u;
    {
        const bool branch_taken_0x18c660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C660u;
            // 0x18c664: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c660) {
            ctx->pc = 0x18C6B8u;
            goto label_18c6b8;
        }
    }
    ctx->pc = 0x18C668u;
    // 0x18c668: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x18c668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x18c66c: 0x0  nop
    ctx->pc = 0x18c66cu;
    // NOP
label_18c670:
    // 0x18c670: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x18c670u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18c674: 0x2442c680  addiu       $v0, $v0, -0x3980
    ctx->pc = 0x18c674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952576));
    // 0x18c678: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x18c678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18c67c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18c67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18c680: 0x15020009  bne         $t0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18C680u;
    {
        const bool branch_taken_0x18c680 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x18C684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C680u;
            // 0x18c684: 0x90a2c678  lbu         $v0, -0x3988($a1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294952568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c680) {
            ctx->pc = 0x18C6A8u;
            goto label_18c6a8;
        }
    }
    ctx->pc = 0x18C688u;
    // 0x18c688: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x18c688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x18c68c: 0x3c0307ff  lui         $v1, 0x7FF
    ctx->pc = 0x18c68cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2047 << 16));
    // 0x18c690: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x18c690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x18c694: 0x426c0  sll         $a0, $a0, 27
    ctx->pc = 0x18c694u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 27));
    // 0x18c698: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x18c698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x18c69c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x18c69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x18c6a0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x18C6A0u;
    {
        const bool branch_taken_0x18c6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C6A0u;
            // 0x18c6a4: 0xace20014  sw          $v0, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c6a0) {
            ctx->pc = 0x18C700u;
            goto label_18c700;
        }
    }
    ctx->pc = 0x18C6A8u;
label_18c6a8:
    // 0x18c6a8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x18c6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x18c6ac: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x18c6acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18c6b0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x18C6B0u;
    {
        const bool branch_taken_0x18c6b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C6B0u;
            // 0x18c6b4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c6b0) {
            ctx->pc = 0x18C670u;
            runtime->cooperativeGuestYield();
            goto label_18c670;
        }
    }
    ctx->pc = 0x18C6B8u;
label_18c6b8:
    // 0x18c6b8: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x18c6b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x18c6bc: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x18c6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x18c6c0: 0x90c4c678  lbu         $a0, -0x3988($a2)
    ctx->pc = 0x18c6c0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294952568)));
    // 0x18c6c4: 0x3c0307ff  lui         $v1, 0x7FF
    ctx->pc = 0x18c6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2047 << 16));
    // 0x18c6c8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x18c6c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x18c6cc: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x18c6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x18c6d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x18c6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x18c6d4: 0x426c0  sll         $a0, $a0, 27
    ctx->pc = 0x18c6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 27));
    // 0x18c6d8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x18c6d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x18c6dc: 0x24a5c680  addiu       $a1, $a1, -0x3980
    ctx->pc = 0x18c6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952576));
    // 0x18c6e0: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x18c6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
    // 0x18c6e4: 0x216c2  srl         $v0, $v0, 27
    ctx->pc = 0x18c6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 27));
    // 0x18c6e8: 0x90c3c678  lbu         $v1, -0x3988($a2)
    ctx->pc = 0x18c6e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294952568)));
    // 0x18c6ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18c6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18c6f0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x18c6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x18c6f4: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x18c6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x18c6f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18c6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18c6fc: 0xa0c3c678  sb          $v1, -0x3988($a2)
    ctx->pc = 0x18c6fcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4294952568), (uint8_t)GPR_U32(ctx, 3));
label_18c700:
    // 0x18c700: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x18c700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x18c704: 0x2741821  addu        $v1, $s3, $s4
    ctx->pc = 0x18c704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x18c708: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x18c708u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x18c70c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x18c70cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18c710: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x18c710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x18c714: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18c714u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18c718: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x18c718u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18c71c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18c71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18c720: 0xace20010  sw          $v0, 0x10($a3)
    ctx->pc = 0x18c720u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 2));
    // 0x18c724: 0x1460ffba  bnez        $v1, . + 4 + (-0x46 << 2)
    ctx->pc = 0x18C724u;
    {
        const bool branch_taken_0x18c724 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C724u;
            // 0x18c728: 0xac510000  sw          $s1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c724) {
            ctx->pc = 0x18C610u;
            runtime->cooperativeGuestYield();
            goto label_18c610;
        }
    }
    ctx->pc = 0x18C72Cu;
label_18c72c:
    // 0x18c72c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x18c72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x18c730: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x18c730u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x18c734: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x18c734u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18c738: 0x1440ffab  bnez        $v0, . + 4 + (-0x55 << 2)
    ctx->pc = 0x18C738u;
    {
        const bool branch_taken_0x18c738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C73Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C738u;
            // 0x18c73c: 0x27b50100  addiu       $s5, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c738) {
            ctx->pc = 0x18C5E8u;
            runtime->cooperativeGuestYield();
            goto label_18c5e8;
        }
    }
    ctx->pc = 0x18C740u;
label_18c740:
    // 0x18c740: 0xc05f94a  jal         func_17E528
    ctx->pc = 0x18C740u;
    SET_GPR_U32(ctx, 31, 0x18C748u);
    ctx->pc = 0x18C744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C740u;
            // 0x18c744: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E528u;
    if (runtime->hasFunction(0x17E528u)) {
        auto targetFn = runtime->lookupFunction(0x17E528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C748u; }
        if (ctx->pc != 0x18C748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e528_0x17e530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C748u; }
        if (ctx->pc != 0x18C748u) { return; }
    }
    ctx->pc = 0x18C748u;
    // 0x18c748: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x18c748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c74c: 0xc045aec  jal         func_116BB0
    ctx->pc = 0x18C74Cu;
    SET_GPR_U32(ctx, 31, 0x18C754u);
    ctx->pc = 0x18C750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C74Cu;
            // 0x18c750: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116BB0u;
    if (runtime->hasFunction(0x116BB0u)) {
        auto targetFn = runtime->lookupFunction(0x116BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C754u; }
        if (ctx->pc != 0x18C754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116BB0_0x116bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C754u; }
        if (ctx->pc != 0x18C754u) { return; }
    }
    ctx->pc = 0x18C754u;
    // 0x18c754: 0x27b00300  addiu       $s0, $sp, 0x300
    ctx->pc = 0x18c754u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x18c758: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x18c758u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x18c75c: 0x24a53118  addiu       $a1, $a1, 0x3118
    ctx->pc = 0x18c75cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12568));
    // 0x18c760: 0x26260024  addiu       $a2, $s1, 0x24
    ctx->pc = 0x18c760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x18c764: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x18C764u;
    SET_GPR_U32(ctx, 31, 0x18C76Cu);
    ctx->pc = 0x18C768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C764u;
            // 0x18c768: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C76Cu; }
        if (ctx->pc != 0x18C76Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C76Cu; }
        if (ctx->pc != 0x18C76Cu) { return; }
    }
    ctx->pc = 0x18C76Cu;
    // 0x18c76c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18c76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c770: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x18c770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c774: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18c774u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c778: 0xc05f9e8  jal         func_17E7A0
    ctx->pc = 0x18C778u;
    SET_GPR_U32(ctx, 31, 0x18C780u);
    ctx->pc = 0x18C77Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C778u;
            // 0x18c77c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E7A0u;
    if (runtime->hasFunction(0x17E7A0u)) {
        auto targetFn = runtime->lookupFunction(0x17E7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C780u; }
        if (ctx->pc != 0x18C780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E7A0_0x17e7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C780u; }
        if (ctx->pc != 0x18C780u) { return; }
    }
    ctx->pc = 0x18C780u;
    // 0x18c780: 0x7bb00380  lq          $s0, 0x380($sp)
    ctx->pc = 0x18c780u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 896)));
label_18c784:
    // 0x18c784: 0x7bb10370  lq          $s1, 0x370($sp)
    ctx->pc = 0x18c784u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x18c788: 0x7bb20360  lq          $s2, 0x360($sp)
    ctx->pc = 0x18c788u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x18c78c: 0x7bb30350  lq          $s3, 0x350($sp)
    ctx->pc = 0x18c78cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x18c790: 0x7bb40340  lq          $s4, 0x340($sp)
    ctx->pc = 0x18c790u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x18c794: 0x7bb50330  lq          $s5, 0x330($sp)
    ctx->pc = 0x18c794u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x18c798: 0xdfbf0320  ld          $ra, 0x320($sp)
    ctx->pc = 0x18c798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x18c79c: 0x3e00008  jr          $ra
    ctx->pc = 0x18C79Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C7A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C79Cu;
            // 0x18c7a0: 0x27bd0390  addiu       $sp, $sp, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18C480u: goto label_18c480;
            case 0x18C4B8u: goto label_18c4b8;
            case 0x18C4C0u: goto label_18c4c0;
            case 0x18C510u: goto label_18c510;
            case 0x18C548u: goto label_18c548;
            case 0x18C558u: goto label_18c558;
            case 0x18C5A0u: goto label_18c5a0;
            case 0x18C5C8u: goto label_18c5c8;
            case 0x18C5E8u: goto label_18c5e8;
            case 0x18C610u: goto label_18c610;
            case 0x18C670u: goto label_18c670;
            case 0x18C6A8u: goto label_18c6a8;
            case 0x18C6B8u: goto label_18c6b8;
            case 0x18C700u: goto label_18c700;
            case 0x18C72Cu: goto label_18c72c;
            case 0x18C740u: goto label_18c740;
            case 0x18C784u: goto label_18c784;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18C7A4u;
    // 0x18c7a4: 0x0  nop
    ctx->pc = 0x18c7a4u;
    // NOP
}
