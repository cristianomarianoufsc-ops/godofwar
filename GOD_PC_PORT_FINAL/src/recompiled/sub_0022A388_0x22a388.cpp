#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022A388
// Address: 0x22a388 - 0x22a4c8
void sub_0022A388_0x22a388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A388_0x22a388");
#endif

    ctx->pc = 0x22a388u;

    // 0x22a388: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x22a388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x22a38c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x22a38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x22a390: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22a390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22a394: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22a394u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a398: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x22a398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x22a39c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x22a39cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a3a0: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x22a3a0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x22a3a4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x22a3a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a3a8: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x22a3a8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x22a3ac: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x22a3acu;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x22a3b0: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x22a3b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x22a3b4: 0x46007546  mov.s       $f21, $f14
    ctx->pc = 0x22a3b4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[14]);
    // 0x22a3b8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x22a3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x22a3bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22a3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22a3c0: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x22a3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x22a3c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22a3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22a3c8: 0x10620034  beq         $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x22A3C8u;
    {
        const bool branch_taken_0x22a3c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22A3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A3C8u;
            // 0x22a3cc: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a3c8) {
            ctx->pc = 0x22A49Cu;
            goto label_22a49c;
        }
    }
    ctx->pc = 0x22A3D0u;
    // 0x22a3d0: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x22a3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x22a3d4: 0x24110060  addiu       $s1, $zero, 0x60
    ctx->pc = 0x22a3d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x22a3d8: 0x712018  mult        $a0, $v1, $s1
    ctx->pc = 0x22a3d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x22a3dc: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x22a3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x22a3e0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x22a3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22a3e4: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x22A3E4u;
    {
        const bool branch_taken_0x22a3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A3E4u;
            // 0x22a3e8: 0x38620001  xori        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a3e4) {
            ctx->pc = 0x22A468u;
            goto label_22a468;
        }
    }
    ctx->pc = 0x22A3ECu;
    // 0x22a3ec: 0x511818  mult        $v1, $v0, $s1
    ctx->pc = 0x22a3ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x22a3f0: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x22a3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x22a3f4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x22a3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x22a3f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22A3F8u;
    {
        const bool branch_taken_0x22a3f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a3f8) {
            ctx->pc = 0x22A410u;
            goto label_22a410;
        }
    }
    ctx->pc = 0x22A400u;
    // 0x22a400: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22a400u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22a404: 0xc08a6b4  jal         func_229AD0
    ctx->pc = 0x22A404u;
    SET_GPR_U32(ctx, 31, 0x22A40Cu);
    ctx->pc = 0x22A408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A404u;
            // 0x22a408: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x229AD0u;
    if (runtime->hasFunction(0x229AD0u)) {
        auto targetFn = runtime->lookupFunction(0x229AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A40Cu; }
        if (ctx->pc != 0x22A40Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00229AD0_0x229ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A40Cu; }
        if (ctx->pc != 0x22A40Cu) { return; }
    }
    ctx->pc = 0x22A40Cu;
    // 0x22a40c: 0x0  nop
    ctx->pc = 0x22a40cu;
    // NOP
label_22a410:
    // 0x22a410: 0x1a40000c  blez        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x22A410u;
    {
        const bool branch_taken_0x22a410 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x22A414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A410u;
            // 0x22a414: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a410) {
            ctx->pc = 0x22A444u;
            goto label_22a444;
        }
    }
    ctx->pc = 0x22A418u;
    // 0x22a418: 0x8e0400c0  lw          $a0, 0xC0($s0)
    ctx->pc = 0x22a418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x22a41c: 0x44926000  mtc1        $s2, $f12
    ctx->pc = 0x22a41cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22a420: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x22a420u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x22a424: 0x3c013a80  lui         $at, 0x3A80
    ctx->pc = 0x22a424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14976 << 16));
    // 0x22a428: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22a428u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22a42c: 0x911018  mult        $v0, $a0, $s1
    ctx->pc = 0x22a42cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22a430: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x22a430u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x22a434: 0xc08a6ae  jal         func_229AB8
    ctx->pc = 0x22A434u;
    SET_GPR_U32(ctx, 31, 0x22A43Cu);
    ctx->pc = 0x22A438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A434u;
            // 0x22a438: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x229AB8u;
    if (runtime->hasFunction(0x229AB8u)) {
        auto targetFn = runtime->lookupFunction(0x229AB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A43Cu; }
        if (ctx->pc != 0x22A43Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_229ab8_0x229ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A43Cu; }
        if (ctx->pc != 0x22A43Cu) { return; }
    }
    ctx->pc = 0x22A43Cu;
    // 0x22a43c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x22A43Cu;
    {
        const bool branch_taken_0x22a43c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A43Cu;
            // 0x22a440: 0x8e0200c0  lw          $v0, 0xC0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a43c) {
            ctx->pc = 0x22A460u;
            goto label_22a460;
        }
    }
    ctx->pc = 0x22A444u;
label_22a444:
    // 0x22a444: 0x8e0400c0  lw          $a0, 0xC0($s0)
    ctx->pc = 0x22a444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x22a448: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22a448u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22a44c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x22a44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x22a450: 0x911018  mult        $v0, $a0, $s1
    ctx->pc = 0x22a450u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22a454: 0xc08a6b4  jal         func_229AD0
    ctx->pc = 0x22A454u;
    SET_GPR_U32(ctx, 31, 0x22A45Cu);
    ctx->pc = 0x22A458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A454u;
            // 0x22a458: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x229AD0u;
    if (runtime->hasFunction(0x229AD0u)) {
        auto targetFn = runtime->lookupFunction(0x229AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A45Cu; }
        if (ctx->pc != 0x22A45Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00229AD0_0x229ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A45Cu; }
        if (ctx->pc != 0x22A45Cu) { return; }
    }
    ctx->pc = 0x22A45Cu;
    // 0x22a45c: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x22a45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_22a460:
    // 0x22a460: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x22a460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x22a464: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x22a464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
label_22a468:
    // 0x22a468: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x22a468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x22a46c: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x22a46cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x22a470: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22a470u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22a474: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x22a474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a478: 0x441818  mult        $v1, $v0, $a0
    ctx->pc = 0x22a478u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x22a47c: 0xc08a732  jal         func_229CC8
    ctx->pc = 0x22A47Cu;
    SET_GPR_U32(ctx, 31, 0x22A484u);
    ctx->pc = 0x22A480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A47Cu;
            // 0x22a480: 0x702021  addu        $a0, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x229CC8u;
    if (runtime->hasFunction(0x229CC8u)) {
        auto targetFn = runtime->lookupFunction(0x229CC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A484u; }
        if (ctx->pc != 0x22A484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00229CC8_0x229cc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A484u; }
        if (ctx->pc != 0x22A484u) { return; }
    }
    ctx->pc = 0x22A484u;
    // 0x22a484: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x22a484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x22a488: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22a488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22a48c: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x22a48cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
    // 0x22a490: 0xe61500cc  swc1        $f21, 0xCC($s0)
    ctx->pc = 0x22a490u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 204), bits); }
    // 0x22a494: 0xe61600d0  swc1        $f22, 0xD0($s0)
    ctx->pc = 0x22a494u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x22a498: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x22a498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_22a49c:
    // 0x22a49c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x22a49cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22a4a0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x22a4a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22a4a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22a4a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22a4a8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x22a4a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a4ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22a4acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a4b0: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x22a4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x22a4b4: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x22a4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x22a4b8: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x22a4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22a4bc: 0x3e00008  jr          $ra
    ctx->pc = 0x22A4BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A4C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A4BCu;
            // 0x22a4c0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22A410u: goto label_22a410;
            case 0x22A444u: goto label_22a444;
            case 0x22A460u: goto label_22a460;
            case 0x22A468u: goto label_22a468;
            case 0x22A49Cu: goto label_22a49c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22A4C4u;
    // 0x22a4c4: 0x0  nop
    ctx->pc = 0x22a4c4u;
    // NOP
}
