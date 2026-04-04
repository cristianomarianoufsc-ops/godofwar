#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022A810
// Address: 0x22a810 - 0x22a920
void sub_0022A810_0x22a810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A810_0x22a810");
#endif

    ctx->pc = 0x22a810u;

    // 0x22a810: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22a810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22a814: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x22a814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x22a818: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22a818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22a81c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x22a81cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a820: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x22a820u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x22a824: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22a824u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a828: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22a828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22a82c: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x22a82cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x22a830: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x22a830u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x22a834: 0xc08a590  jal         func_229640
    ctx->pc = 0x22A834u;
    SET_GPR_U32(ctx, 31, 0x22A83Cu);
    ctx->pc = 0x22A838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A834u;
            // 0x22a838: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x229640u;
    if (runtime->hasFunction(0x229640u)) {
        auto targetFn = runtime->lookupFunction(0x229640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A83Cu; }
        if (ctx->pc != 0x22A83Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00229640_0x229640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A83Cu; }
        if (ctx->pc != 0x22A83Cu) { return; }
    }
    ctx->pc = 0x22A83Cu;
    // 0x22a83c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22A83Cu;
    {
        const bool branch_taken_0x22a83c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A83Cu;
            // 0x22a840: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a83c) {
            ctx->pc = 0x22A84Cu;
            goto label_22a84c;
        }
    }
    ctx->pc = 0x22A844u;
    // 0x22a844: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22a844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22a848: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x22a848u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_22a84c:
    // 0x22a84c: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x22A84Cu;
    {
        const bool branch_taken_0x22a84c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x22A850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A84Cu;
            // 0x22a850: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a84c) {
            ctx->pc = 0x22A898u;
            goto label_22a898;
        }
    }
    ctx->pc = 0x22A854u;
    // 0x22a854: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x22A854u;
    {
        const bool branch_taken_0x22a854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a854) {
            ctx->pc = 0x22A858u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22A854u;
            // 0x22a858: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22A86Cu;
            goto label_22a86c;
        }
    }
    ctx->pc = 0x22A85Cu;
    // 0x22a85c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22A85Cu;
    {
        const bool branch_taken_0x22a85c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A85Cu;
            // 0x22a860: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a85c) {
            ctx->pc = 0x22A87Cu;
            goto label_22a87c;
        }
    }
    ctx->pc = 0x22A864u;
    // 0x22a864: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x22A864u;
    {
        const bool branch_taken_0x22a864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A864u;
            // 0x22a868: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a864) {
            ctx->pc = 0x22A90Cu;
            goto label_22a90c;
        }
    }
    ctx->pc = 0x22A86Cu;
label_22a86c:
    // 0x22a86c: 0x12020018  beq         $s0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x22A86Cu;
    {
        const bool branch_taken_0x22a86c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x22A870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A86Cu;
            // 0x22a870: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a86c) {
            ctx->pc = 0x22A8D0u;
            goto label_22a8d0;
        }
    }
    ctx->pc = 0x22A874u;
    // 0x22a874: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x22A874u;
    {
        const bool branch_taken_0x22a874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A874u;
            // 0x22a878: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a874) {
            ctx->pc = 0x22A90Cu;
            goto label_22a90c;
        }
    }
    ctx->pc = 0x22A87Cu;
label_22a87c:
    // 0x22a87c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22a87cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22a880: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x22a880u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x22a884: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22a884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a888: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x22a888u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22a88c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22a88cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22a890: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x22A890u;
    {
        const bool branch_taken_0x22a890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A890u;
            // 0x22a894: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a890) {
            ctx->pc = 0x22A8ACu;
            goto label_22a8ac;
        }
    }
    ctx->pc = 0x22A898u;
label_22a898:
    // 0x22a898: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x22a898u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22a89c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22a89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a8a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22a8a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22a8a4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22a8a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22a8a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22a8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22a8ac:
    // 0x22a8ac: 0xc08a9d4  jal         func_22A750
    ctx->pc = 0x22A8ACu;
    SET_GPR_U32(ctx, 31, 0x22A8B4u);
    ctx->pc = 0x22A8B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A8ACu;
            // 0x22a8b0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A750u;
    if (runtime->hasFunction(0x22A750u)) {
        auto targetFn = runtime->lookupFunction(0x22A750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A8B4u; }
        if (ctx->pc != 0x22A8B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_22a750_0x22a770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A8B4u; }
        if (ctx->pc != 0x22A8B4u) { return; }
    }
    ctx->pc = 0x22A8B4u;
    // 0x22a8b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22a8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a8b8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x22a8b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x22a8bc: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x22a8bcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x22a8c0: 0xc08a9d4  jal         func_22A750
    ctx->pc = 0x22A8C0u;
    SET_GPR_U32(ctx, 31, 0x22A8C8u);
    ctx->pc = 0x22A8C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A8C0u;
            // 0x22a8c4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A750u;
    if (runtime->hasFunction(0x22A750u)) {
        auto targetFn = runtime->lookupFunction(0x22A750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A8C8u; }
        if (ctx->pc != 0x22A8C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_22a750_0x22a770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A8C8u; }
        if (ctx->pc != 0x22A8C8u) { return; }
    }
    ctx->pc = 0x22A8C8u;
    // 0x22a8c8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x22A8C8u;
    {
        const bool branch_taken_0x22a8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A8C8u;
            // 0x22a8cc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a8c8) {
            ctx->pc = 0x22A908u;
            goto label_22a908;
        }
    }
    ctx->pc = 0x22A8D0u;
label_22a8d0:
    // 0x22a8d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22a8d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22a8d4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22a8d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22a8d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22a8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a8dc: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x22a8dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22a8e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22a8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22a8e4: 0x46156301  sub.s       $f12, $f12, $f21
    ctx->pc = 0x22a8e4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[21]);
    // 0x22a8e8: 0xc08a9d4  jal         func_22A750
    ctx->pc = 0x22A8E8u;
    SET_GPR_U32(ctx, 31, 0x22A8F0u);
    ctx->pc = 0x22A8ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A8E8u;
            // 0x22a8ec: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A750u;
    if (runtime->hasFunction(0x22A750u)) {
        auto targetFn = runtime->lookupFunction(0x22A750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A8F0u; }
        if (ctx->pc != 0x22A8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_22a750_0x22a770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A8F0u; }
        if (ctx->pc != 0x22A8F0u) { return; }
    }
    ctx->pc = 0x22A8F0u;
    // 0x22a8f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22a8f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a8f4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x22a8f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x22a8f8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x22a8f8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x22a8fc: 0xc08a9d4  jal         func_22A750
    ctx->pc = 0x22A8FCu;
    SET_GPR_U32(ctx, 31, 0x22A904u);
    ctx->pc = 0x22A900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A8FCu;
            // 0x22a900: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A750u;
    if (runtime->hasFunction(0x22A750u)) {
        auto targetFn = runtime->lookupFunction(0x22A750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A904u; }
        if (ctx->pc != 0x22A904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_22a750_0x22a770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A904u; }
        if (ctx->pc != 0x22A904u) { return; }
    }
    ctx->pc = 0x22A904u;
    // 0x22a904: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x22a904u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22a908:
    // 0x22a908: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22a908u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22a90c:
    // 0x22a90c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22a90cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a910: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x22a910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x22a914: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x22a914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22a918: 0x3e00008  jr          $ra
    ctx->pc = 0x22A918u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A91Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A918u;
            // 0x22a91c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22A84Cu: goto label_22a84c;
            case 0x22A86Cu: goto label_22a86c;
            case 0x22A87Cu: goto label_22a87c;
            case 0x22A898u: goto label_22a898;
            case 0x22A8ACu: goto label_22a8ac;
            case 0x22A8D0u: goto label_22a8d0;
            case 0x22A908u: goto label_22a908;
            case 0x22A90Cu: goto label_22a90c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22A920u;
}
