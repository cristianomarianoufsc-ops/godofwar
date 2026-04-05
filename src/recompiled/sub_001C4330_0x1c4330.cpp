#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C4330
// Address: 0x1c4330 - 0x1c4430
void sub_001C4330_0x1c4330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4330_0x1c4330");
#endif

    ctx->pc = 0x1c4330u;

    // 0x1c4330: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c4330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c4334: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x1c4334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x1c4338: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c4338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c433c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1c433cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1c4340: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1c4340u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1c4344: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c4344u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4348: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c4348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c434c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1c434cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1c4350: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c4350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c4354: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1C4354u;
    {
        const bool branch_taken_0x1c4354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4354u;
            // 0x1c4358: 0xae050290  sw          $a1, 0x290($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4354) {
            ctx->pc = 0x1C4390u;
            goto label_1c4390;
        }
    }
    ctx->pc = 0x1C435Cu;
    // 0x1c435c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1c435cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c4360: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x1c4360u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x1c4364: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1c4364u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1c4368: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c4368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c436c: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x1c436cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x1c4370: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1c4370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1c4374: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1c4374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c4378: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c4378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c437c: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C437Cu;
    {
        const bool branch_taken_0x1c437c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1C4380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C437Cu;
            // 0x1c4380: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c437c) {
            ctx->pc = 0x1C4388u;
            goto label_1c4388;
        }
    }
    ctx->pc = 0x1C4384u;
    // 0x1c4384: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c4384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1c4388:
    // 0x1c4388: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C4388u;
    {
        const bool branch_taken_0x1c4388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C438Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4388u;
            // 0x1c438c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4388) {
            ctx->pc = 0x1C4394u;
            goto label_1c4394;
        }
    }
    ctx->pc = 0x1C4390u;
label_1c4390:
    // 0x1c4390: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c4390u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c4394:
    // 0x1c4394: 0x8e03029c  lw          $v1, 0x29C($s0)
    ctx->pc = 0x1c4394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 668)));
    // 0x1c4398: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c4398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c439c: 0x54620012  bnel        $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C439Cu;
    {
        const bool branch_taken_0x1c439c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c439c) {
            ctx->pc = 0x1C43A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C439Cu;
            // 0x1c43a0: 0x8e05029c  lw          $a1, 0x29C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 668)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C43E8u;
            goto label_1c43e8;
        }
    }
    ctx->pc = 0x1C43A4u;
    // 0x1c43a4: 0xda010120  lqc2        $vf1, 0x120($s0)
    ctx->pc = 0x1c43a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x1c43a8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1c43a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1c43ac: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1c43acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c43b0: 0x4b020858  vmulx.x     $vf1, $vf1, $vf2x
    ctx->pc = 0x1c43b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c43b4: 0x3c013fe0  lui         $at, 0x3FE0
    ctx->pc = 0x1c43b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16352 << 16));
    // 0x1c43b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c43b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c43bc: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1c43bcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c43c0: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x1c43c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c43c4: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x1c43c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
    // 0x1c43c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c43c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c43cc: 0x46006b42  mul.s       $f13, $f13, $f0
    ctx->pc = 0x1c43ccu;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x1c43d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c43d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c43d4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1c43d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1c43d8: 0xc085d98  jal         func_217660
    ctx->pc = 0x1C43D8u;
    SET_GPR_U32(ctx, 31, 0x1C43E0u);
    ctx->pc = 0x1C43DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C43D8u;
            // 0x1c43dc: 0x46016b42  mul.s       $f13, $f13, $f1 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x217660u;
    if (runtime->hasFunction(0x217660u)) {
        auto targetFn = runtime->lookupFunction(0x217660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C43E0u; }
        if (ctx->pc != 0x1C43E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_217660_0x2176d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C43E0u; }
        if (ctx->pc != 0x1C43E0u) { return; }
    }
    ctx->pc = 0x1C43E0u;
    // 0x1c43e0: 0xae02029c  sw          $v0, 0x29C($s0)
    ctx->pc = 0x1c43e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 2));
    // 0x1c43e4: 0x8e05029c  lw          $a1, 0x29C($s0)
    ctx->pc = 0x1c43e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 668)));
label_1c43e8:
    // 0x1c43e8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1c43e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1c43ec: 0xc085e04  jal         func_217810
    ctx->pc = 0x1C43ECu;
    SET_GPR_U32(ctx, 31, 0x1C43F4u);
    ctx->pc = 0x1C43F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C43ECu;
            // 0x1c43f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x217810u;
    if (runtime->hasFunction(0x217810u)) {
        auto targetFn = runtime->lookupFunction(0x217810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C43F4u; }
        if (ctx->pc != 0x1C43F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_217810_0x2178d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C43F4u; }
        if (ctx->pc != 0x1C43F4u) { return; }
    }
    ctx->pc = 0x1C43F4u;
    // 0x1c43f4: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x1c43f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c43f8: 0x2404041b  addiu       $a0, $zero, 0x41B
    ctx->pc = 0x1c43f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1051));
    // 0x1c43fc: 0xe6000294  swc1        $f0, 0x294($s0)
    ctx->pc = 0x1c43fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 660), bits); }
    // 0x1c4400: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c4400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4404: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c4404u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4408: 0xc06a160  jal         func_1A8580
    ctx->pc = 0x1C4408u;
    SET_GPR_U32(ctx, 31, 0x1C4410u);
    ctx->pc = 0x1C440Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4408u;
            // 0x1c440c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8580u;
    if (runtime->hasFunction(0x1A8580u)) {
        auto targetFn = runtime->lookupFunction(0x1A8580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4410u; }
        if (ctx->pc != 0x1C4410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a8580_0x1a8690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4410u; }
        if (ctx->pc != 0x1C4410u) { return; }
    }
    ctx->pc = 0x1C4410u;
    // 0x1c4410: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c4410u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c4414: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c4414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4418: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c4418u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c441c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c441cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4420: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1c4420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c4424: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4424u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4424u;
            // 0x1c4428: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C4388u: goto label_1c4388;
            case 0x1C4390u: goto label_1c4390;
            case 0x1C4394u: goto label_1c4394;
            case 0x1C43E8u: goto label_1c43e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C442Cu;
    // 0x1c442c: 0x0  nop
    ctx->pc = 0x1c442cu;
    // NOP
}
