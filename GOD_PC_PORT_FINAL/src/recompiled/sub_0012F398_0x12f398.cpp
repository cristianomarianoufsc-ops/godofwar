#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012F398
// Address: 0x12f398 - 0x12f508
void sub_0012F398_0x12f398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012F398_0x12f398");
#endif

    ctx->pc = 0x12f398u;

    // 0x12f398: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x12f398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x12f39c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x12f39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x12f3a0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x12f3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x12f3a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12f3a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f3a8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x12f3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x12f3ac: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x12f3acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f3b0: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x12f3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x12f3b4: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x12f3b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f3b8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x12f3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x12f3bc: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x12f3bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12f3c0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x12f3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x12f3c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12f3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12f3c8: 0xae710014  sw          $s1, 0x14($s3)
    ctx->pc = 0x12f3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 17));
    // 0x12f3cc: 0x0  nop
    ctx->pc = 0x12f3ccu;
    // NOP
label_12f3d0:
    // 0x12f3d0: 0xc04f824  jal         func_13E090
    ctx->pc = 0x12F3D0u;
    SET_GPR_U32(ctx, 31, 0x12F3D8u);
    ctx->pc = 0x12F3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F3D0u;
            // 0x12f3d4: 0x11a100  sll         $s4, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F3D8u; }
        if (ctx->pc != 0x12F3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F3D8u; }
        if (ctx->pc != 0x12F3D8u) { return; }
    }
    ctx->pc = 0x12F3D8u;
    // 0x12f3d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12f3d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f3dc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12f3dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f3e0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x12f3e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12f3e4: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x12F3E4u;
    SET_GPR_U32(ctx, 31, 0x12F3ECu);
    ctx->pc = 0x12F3E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F3E4u;
            // 0x12f3e8: 0x2632ffff  addiu       $s2, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F3ECu; }
        if (ctx->pc != 0x12F3ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F3ECu; }
        if (ctx->pc != 0x12F3ECu) { return; }
    }
    ctx->pc = 0x12F3ECu;
    // 0x12f3ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12f3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f3f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12f3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12f3f4: 0x1242000b  beq         $s2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x12F3F4u;
    {
        const bool branch_taken_0x12f3f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x12F3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F3F4u;
            // 0x12f3f8: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f3f4) {
            ctx->pc = 0x12F424u;
            goto label_12f424;
        }
    }
    ctx->pc = 0x12F3FCu;
    // 0x12f3fc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12f3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12f400: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12f400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12f404: 0x0  nop
    ctx->pc = 0x12f404u;
    // NOP
label_12f408:
    // 0x12f408: 0x0  nop
    ctx->pc = 0x12f408u;
    // NOP
    // 0x12f40c: 0x0  nop
    ctx->pc = 0x12f40cu;
    // NOP
    // 0x12f410: 0x0  nop
    ctx->pc = 0x12f410u;
    // NOP
    // 0x12f414: 0x0  nop
    ctx->pc = 0x12f414u;
    // NOP
    // 0x12f418: 0x0  nop
    ctx->pc = 0x12f418u;
    // NOP
    // 0x12f41c: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12F41Cu;
    {
        const bool branch_taken_0x12f41c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12F420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F41Cu;
            // 0x12f420: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f41c) {
            ctx->pc = 0x12F408u;
            runtime->cooperativeGuestYield();
            goto label_12f408;
        }
    }
    ctx->pc = 0x12F424u;
label_12f424:
    // 0x12f424: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x12f424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x12f428: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x12f428u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x12f42c: 0x6a1ffe8  bgez        $s5, . + 4 + (-0x18 << 2)
    ctx->pc = 0x12F42Cu;
    {
        const bool branch_taken_0x12f42c = (GPR_S32(ctx, 21) >= 0);
        ctx->pc = 0x12F430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F42Cu;
            // 0x12f430: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f42c) {
            ctx->pc = 0x12F3D0u;
            runtime->cooperativeGuestYield();
            goto label_12f3d0;
        }
    }
    ctx->pc = 0x12F434u;
    // 0x12f434: 0xc04f824  jal         func_13E090
    ctx->pc = 0x12F434u;
    SET_GPR_U32(ctx, 31, 0x12F43Cu);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F43Cu; }
        if (ctx->pc != 0x12F43Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F43Cu; }
        if (ctx->pc != 0x12F43Cu) { return; }
    }
    ctx->pc = 0x12F43Cu;
    // 0x12f43c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12f43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f440: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12f440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f444: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x12F444u;
    SET_GPR_U32(ctx, 31, 0x12F44Cu);
    ctx->pc = 0x12F448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F444u;
            // 0x12f448: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F44Cu; }
        if (ctx->pc != 0x12F44Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F44Cu; }
        if (ctx->pc != 0x12F44Cu) { return; }
    }
    ctx->pc = 0x12F44Cu;
    // 0x12f44c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12f44cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f450: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12f450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12f454: 0x1242000b  beq         $s2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x12F454u;
    {
        const bool branch_taken_0x12f454 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x12F458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F454u;
            // 0x12f458: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f454) {
            ctx->pc = 0x12F484u;
            goto label_12f484;
        }
    }
    ctx->pc = 0x12F45Cu;
    // 0x12f45c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12f45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12f460: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12f460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12f464: 0x0  nop
    ctx->pc = 0x12f464u;
    // NOP
label_12f468:
    // 0x12f468: 0x0  nop
    ctx->pc = 0x12f468u;
    // NOP
    // 0x12f46c: 0x0  nop
    ctx->pc = 0x12f46cu;
    // NOP
    // 0x12f470: 0x0  nop
    ctx->pc = 0x12f470u;
    // NOP
    // 0x12f474: 0x0  nop
    ctx->pc = 0x12f474u;
    // NOP
    // 0x12f478: 0x0  nop
    ctx->pc = 0x12f478u;
    // NOP
    // 0x12f47c: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12F47Cu;
    {
        const bool branch_taken_0x12f47c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12F480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F47Cu;
            // 0x12f480: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f47c) {
            ctx->pc = 0x12F468u;
            runtime->cooperativeGuestYield();
            goto label_12f468;
        }
    }
    ctx->pc = 0x12F484u;
label_12f484:
    // 0x12f484: 0xc04f824  jal         func_13E090
    ctx->pc = 0x12F484u;
    SET_GPR_U32(ctx, 31, 0x12F48Cu);
    ctx->pc = 0x12F488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F484u;
            // 0x12f488: 0xae64000c  sw          $a0, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F48Cu; }
        if (ctx->pc != 0x12F48Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F48Cu; }
        if (ctx->pc != 0x12F48Cu) { return; }
    }
    ctx->pc = 0x12F48Cu;
    // 0x12f48c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12f48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f490: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12f490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f494: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x12F494u;
    SET_GPR_U32(ctx, 31, 0x12F49Cu);
    ctx->pc = 0x12F498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F494u;
            // 0x12f498: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F49Cu; }
        if (ctx->pc != 0x12F49Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F49Cu; }
        if (ctx->pc != 0x12F49Cu) { return; }
    }
    ctx->pc = 0x12F49Cu;
    // 0x12f49c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12f49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f4a0: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x12f4a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f4a4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12f4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12f4a8: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x12F4A8u;
    {
        const bool branch_taken_0x12f4a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12f4a8) {
            ctx->pc = 0x12F4ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12F4A8u;
            // 0x12f4ac: 0xae640010  sw          $a0, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12F4D8u;
            goto label_12f4d8;
        }
    }
    ctx->pc = 0x12F4B0u;
    // 0x12f4b0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12f4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12f4b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12f4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12f4b8:
    // 0x12f4b8: 0x0  nop
    ctx->pc = 0x12f4b8u;
    // NOP
    // 0x12f4bc: 0x0  nop
    ctx->pc = 0x12f4bcu;
    // NOP
    // 0x12f4c0: 0x0  nop
    ctx->pc = 0x12f4c0u;
    // NOP
    // 0x12f4c4: 0x0  nop
    ctx->pc = 0x12f4c4u;
    // NOP
    // 0x12f4c8: 0x0  nop
    ctx->pc = 0x12f4c8u;
    // NOP
    // 0x12f4cc: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12F4CCu;
    {
        const bool branch_taken_0x12f4cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12F4D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F4CCu;
            // 0x12f4d0: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f4cc) {
            ctx->pc = 0x12F4B8u;
            runtime->cooperativeGuestYield();
            goto label_12f4b8;
        }
    }
    ctx->pc = 0x12F4D4u;
    // 0x12f4d4: 0xae640010  sw          $a0, 0x10($s3)
    ctx->pc = 0x12f4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 4));
label_12f4d8:
    // 0x12f4d8: 0xc04bcd2  jal         func_12F348
    ctx->pc = 0x12F4D8u;
    SET_GPR_U32(ctx, 31, 0x12F4E0u);
    ctx->pc = 0x12F4DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F4D8u;
            // 0x12f4dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F348u;
    if (runtime->hasFunction(0x12F348u)) {
        auto targetFn = runtime->lookupFunction(0x12F348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F4E0u; }
        if (ctx->pc != 0x12F4E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_12f348_0x12f398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F4E0u; }
        if (ctx->pc != 0x12F4E0u) { return; }
    }
    ctx->pc = 0x12F4E0u;
    // 0x12f4e0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x12f4e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f4e4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x12f4e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f4e8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x12f4e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12f4ec: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x12f4ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12f4f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x12f4f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12f4f4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x12f4f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12f4f8: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x12f4f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12f4fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12f4fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f500: 0x3e00008  jr          $ra
    ctx->pc = 0x12F500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F500u;
            // 0x12f504: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12F3D0u: goto label_12f3d0;
            case 0x12F408u: goto label_12f408;
            case 0x12F424u: goto label_12f424;
            case 0x12F468u: goto label_12f468;
            case 0x12F484u: goto label_12f484;
            case 0x12F4B8u: goto label_12f4b8;
            case 0x12F4D8u: goto label_12f4d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12F508u;
}
