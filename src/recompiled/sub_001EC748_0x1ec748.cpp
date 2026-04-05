#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EC748
// Address: 0x1ec748 - 0x1ec830
void sub_001EC748_0x1ec748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC748_0x1ec748");
#endif

    ctx->pc = 0x1ec748u;

    // 0x1ec748: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1ec748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1ec74c: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1ec74cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ec750: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1ec750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1ec754: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1ec754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1ec758: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ec758u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec75c: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1ec75cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1ec760: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1ec760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ec764: 0xc0795a4  jal         func_1E5690
    ctx->pc = 0x1EC764u;
    SET_GPR_U32(ctx, 31, 0x1EC76Cu);
    ctx->pc = 0x1EC768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC764u;
            // 0x1ec768: 0x7ba50040  lq          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5690u;
    if (runtime->hasFunction(0x1E5690u)) {
        auto targetFn = runtime->lookupFunction(0x1E5690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC76Cu; }
        if (ctx->pc != 0x1EC76Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E5690_0x1e5690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC76Cu; }
        if (ctx->pc != 0x1EC76Cu) { return; }
    }
    ctx->pc = 0x1EC76Cu;
    // 0x1ec76c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ec76cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ec770: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1ec770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ec774: 0xc454c658  lwc1        $f20, -0x39A8($v0)
    ctx->pc = 0x1ec774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ec778: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x1ec778u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
    // 0x1ec77c: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x1ec77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x1ec780: 0x40f809  jalr        $v0
    ctx->pc = 0x1EC780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EC788u);
        ctx->pc = 0x1EC784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC780u;
            // 0x1ec784: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EC788u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EC818u: goto label_1ec818;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EC788u; }
            if (ctx->pc != 0x1EC788u) { return; }
        }
        }
    }
    ctx->pc = 0x1EC788u;
    // 0x1ec788: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1ec788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1ec78c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ec78cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ec790: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ec790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec794: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1ec794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1ec798: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ec798u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ec79c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ec79cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ec7a0: 0x7ba50040  lq          $a1, 0x40($sp)
    ctx->pc = 0x1ec7a0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ec7a4: 0xc601016c  lwc1        $f1, 0x16C($s0)
    ctx->pc = 0x1ec7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec7a8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1ec7a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1ec7ac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ec7acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ec7b0: 0xc0794f6  jal         func_1E53D8
    ctx->pc = 0x1EC7B0u;
    SET_GPR_U32(ctx, 31, 0x1EC7B8u);
    ctx->pc = 0x1EC7B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC7B0u;
            // 0x1ec7b4: 0x4600a302  mul.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E53D8u;
    if (runtime->hasFunction(0x1E53D8u)) {
        auto targetFn = runtime->lookupFunction(0x1E53D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC7B8u; }
        if (ctx->pc != 0x1EC7B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1e53d8_0x1e5428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC7B8u; }
        if (ctx->pc != 0x1EC7B8u) { return; }
    }
    ctx->pc = 0x1EC7B8u;
    // 0x1ec7b8: 0x70022ca9  por         $a1, $zero, $v0
    ctx->pc = 0x1ec7b8u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1ec7bc: 0x7a030070  lq          $v1, 0x70($s0)
    ctx->pc = 0x1ec7bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1ec7c0: 0x7a020080  lq          $v0, 0x80($s0)
    ctx->pc = 0x1ec7c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1ec7c4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1ec7c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec7c8: 0x7a070050  lq          $a3, 0x50($s0)
    ctx->pc = 0x1ec7c8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1ec7cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ec7ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec7d0: 0x7a080060  lq          $t0, 0x60($s0)
    ctx->pc = 0x1ec7d0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1ec7d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ec7d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ec7d8: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x1ec7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x1ec7dc: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1ec7dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x1ec7e0: 0x7fa70000  sq          $a3, 0x0($sp)
    ctx->pc = 0x1ec7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 7));
    // 0x1ec7e4: 0xc077fda  jal         func_1DFF68
    ctx->pc = 0x1EC7E4u;
    SET_GPR_U32(ctx, 31, 0x1EC7ECu);
    ctx->pc = 0x1EC7E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC7E4u;
            // 0x1ec7e8: 0x7fa80010  sq          $t0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFF68u;
    if (runtime->hasFunction(0x1DFF68u)) {
        auto targetFn = runtime->lookupFunction(0x1DFF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC7ECu; }
        if (ctx->pc != 0x1EC7ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFF68_0x1dff68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC7ECu; }
        if (ctx->pc != 0x1EC7ECu) { return; }
    }
    ctx->pc = 0x1EC7ECu;
    // 0x1ec7ec: 0xc0796ac  jal         func_1E5AB0
    ctx->pc = 0x1EC7ECu;
    SET_GPR_U32(ctx, 31, 0x1EC7F4u);
    ctx->pc = 0x1EC7F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC7ECu;
            // 0x1ec7f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5AB0u;
    if (runtime->hasFunction(0x1E5AB0u)) {
        auto targetFn = runtime->lookupFunction(0x1E5AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC7F4u; }
        if (ctx->pc != 0x1EC7F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E5AB0_0x1e5ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC7F4u; }
        if (ctx->pc != 0x1EC7F4u) { return; }
    }
    ctx->pc = 0x1EC7F4u;
    // 0x1ec7f4: 0x8e03033c  lw          $v1, 0x33C($s0)
    ctx->pc = 0x1ec7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 828)));
    // 0x1ec7f8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EC7F8u;
    {
        const bool branch_taken_0x1ec7f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC7FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC7F8u;
            // 0x1ec7fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec7f8) {
            ctx->pc = 0x1EC818u;
            goto label_1ec818;
        }
    }
    ctx->pc = 0x1EC800u;
    // 0x1ec800: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1ec800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1ec804: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ec804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec808: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x1ec808u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1ec80c: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x1ec80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1ec810: 0x40f809  jalr        $v0
    ctx->pc = 0x1EC810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EC818u);
        ctx->pc = 0x1EC814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC810u;
            // 0x1ec814: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EC818u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EC818u: goto label_1ec818;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EC818u; }
            if (ctx->pc != 0x1EC818u) { return; }
        }
        }
    }
    ctx->pc = 0x1EC818u;
label_1ec818:
    // 0x1ec818: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1ec818u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ec81c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1ec81cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ec820: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1ec820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ec824: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC824u;
            // 0x1ec828: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EC818u: goto label_1ec818;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EC82Cu;
    // 0x1ec82c: 0x0  nop
    ctx->pc = 0x1ec82cu;
    // NOP
}
