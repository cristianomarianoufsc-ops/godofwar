#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E8478
// Address: 0x1e8478 - 0x1e8728
void sub_001E8478_0x1e8478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8478_0x1e8478");
#endif

    ctx->pc = 0x1e8478u;

    // 0x1e8478: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e8478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1e847c: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1e847cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e8480: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1e8480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1e8484: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1e8484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1e8488: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e8488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e848c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1e848cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8490: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1e8490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1e8494: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e8494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e8498: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e8498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e849c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1e849cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1e84a0: 0xae000234  sw          $zero, 0x234($s0)
    ctx->pc = 0x1e84a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 564), GPR_U32(ctx, 0));
    // 0x1e84a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e84a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e84a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e84a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e84ac: 0xae000240  sw          $zero, 0x240($s0)
    ctx->pc = 0x1e84acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 0));
    // 0x1e84b0: 0xc090aa2  jal         func_242A88
    ctx->pc = 0x1E84B0u;
    SET_GPR_U32(ctx, 31, 0x1E84B8u);
    ctx->pc = 0x1E84B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E84B0u;
            // 0x1e84b4: 0xfa010210  sqc2        $vf1, 0x210($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 528), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A88u;
    if (runtime->hasFunction(0x242A88u)) {
        auto targetFn = runtime->lookupFunction(0x242A88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E84B8u; }
        if (ctx->pc != 0x1E84B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a88_0x242a98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E84B8u; }
        if (ctx->pc != 0x1E84B8u) { return; }
    }
    ctx->pc = 0x1E84B8u;
    // 0x1e84b8: 0x3a620001  xori        $v0, $s3, 0x1
    ctx->pc = 0x1e84b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)1);
    // 0x1e84bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e84bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e84c0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E84C0u;
    {
        const bool branch_taken_0x1e84c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e84c0) {
            ctx->pc = 0x1E84C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E84C0u;
            // 0x1e84c4: 0x8e0202dc  lw          $v0, 0x2DC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E84D8u;
            goto label_1e84d8;
        }
    }
    ctx->pc = 0x1E84C8u;
    // 0x1e84c8: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x1e84c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1e84cc: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1e84ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1e84d0: 0xae0202d8  sw          $v0, 0x2D8($s0)
    ctx->pc = 0x1e84d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 2));
    // 0x1e84d4: 0x8e0202dc  lw          $v0, 0x2DC($s0)
    ctx->pc = 0x1e84d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
label_1e84d8:
    // 0x1e84d8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1e84d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1e84dc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E84DCu;
    {
        const bool branch_taken_0x1e84dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E84E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E84DCu;
            // 0x1e84e0: 0x3c030400  lui         $v1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e84dc) {
            ctx->pc = 0x1E8504u;
            goto label_1e8504;
        }
    }
    ctx->pc = 0x1E84E4u;
    // 0x1e84e4: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1e84e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1e84e8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1e84e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1e84ec: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E84ECu;
    {
        const bool branch_taken_0x1e84ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e84ec) {
            ctx->pc = 0x1E84F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E84ECu;
            // 0x1e84f0: 0x8e040324  lw          $a0, 0x324($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E8508u;
            goto label_1e8508;
        }
    }
    ctx->pc = 0x1E84F4u;
    // 0x1e84f4: 0xc0728fc  jal         func_1CA3F0
    ctx->pc = 0x1E84F4u;
    SET_GPR_U32(ctx, 31, 0x1E84FCu);
    ctx->pc = 0x1E84F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E84F4u;
            // 0x1e84f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA3F0u;
    if (runtime->hasFunction(0x1CA3F0u)) {
        auto targetFn = runtime->lookupFunction(0x1CA3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E84FCu; }
        if (ctx->pc != 0x1E84FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA3F0_0x1ca3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E84FCu; }
        if (ctx->pc != 0x1E84FCu) { return; }
    }
    ctx->pc = 0x1E84FCu;
    // 0x1e84fc: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x1E84FCu;
    {
        const bool branch_taken_0x1e84fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E84FCu;
            // 0x1e8500: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e84fc) {
            ctx->pc = 0x1E8708u;
            goto label_1e8708;
        }
    }
    ctx->pc = 0x1E8504u;
label_1e8504:
    // 0x1e8504: 0x8e040324  lw          $a0, 0x324($s0)
    ctx->pc = 0x1e8504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
label_1e8508:
    // 0x1e8508: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x1e8508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1e850c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E850Cu;
    {
        const bool branch_taken_0x1e850c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E850Cu;
            // 0x1e8510: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e850c) {
            ctx->pc = 0x1E8528u;
            goto label_1e8528;
        }
    }
    ctx->pc = 0x1E8514u;
    // 0x1e8514: 0xc090d5a  jal         func_243568
    ctx->pc = 0x1E8514u;
    SET_GPR_U32(ctx, 31, 0x1E851Cu);
    ctx->pc = 0x243568u;
    if (runtime->hasFunction(0x243568u)) {
        auto targetFn = runtime->lookupFunction(0x243568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E851Cu; }
        if (ctx->pc != 0x1E851Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243568_0x243570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E851Cu; }
        if (ctx->pc != 0x1E851Cu) { return; }
    }
    ctx->pc = 0x1E851Cu;
    // 0x1e851c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e851cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e8520: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1e8520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1e8524: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x1e8524u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e8528:
    // 0x1e8528: 0x16200012  bnez        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1E8528u;
    {
        const bool branch_taken_0x1e8528 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E852Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8528u;
            // 0x1e852c: 0x32620002  andi        $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8528) {
            ctx->pc = 0x1E8574u;
            goto label_1e8574;
        }
    }
    ctx->pc = 0x1E8530u;
    // 0x1e8530: 0x8e040324  lw          $a0, 0x324($s0)
    ctx->pc = 0x1e8530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x1e8534: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x1e8534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1e8538: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E8538u;
    {
        const bool branch_taken_0x1e8538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E853Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8538u;
            // 0x1e853c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8538) {
            ctx->pc = 0x1E8560u;
            goto label_1e8560;
        }
    }
    ctx->pc = 0x1E8540u;
    // 0x1e8540: 0xc090d58  jal         func_243560
    ctx->pc = 0x1E8540u;
    SET_GPR_U32(ctx, 31, 0x1E8548u);
    ctx->pc = 0x243560u;
    if (runtime->hasFunction(0x243560u)) {
        auto targetFn = runtime->lookupFunction(0x243560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8548u; }
        if (ctx->pc != 0x1E8548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243560_0x243568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8548u; }
        if (ctx->pc != 0x1E8548u) { return; }
    }
    ctx->pc = 0x1E8548u;
    // 0x1e8548: 0xc4410178  lwc1        $f1, 0x178($v0)
    ctx->pc = 0x1e8548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e854c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e854cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e8550: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e8550u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8554: 0x0  nop
    ctx->pc = 0x1e8554u;
    // NOP
    // 0x1e8558: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1E8558u;
    {
        const bool branch_taken_0x1e8558 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e8558) {
            ctx->pc = 0x1E855Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8558u;
            // 0x1e855c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E8560u;
            goto label_1e8560;
        }
    }
    ctx->pc = 0x1E8560u;
label_1e8560:
    // 0x1e8560: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E8560u;
    {
        const bool branch_taken_0x1e8560 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E8564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8560u;
            // 0x1e8564: 0x32620002  andi        $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8560) {
            ctx->pc = 0x1E8574u;
            goto label_1e8574;
        }
    }
    ctx->pc = 0x1E8568u;
    // 0x1e8568: 0xc08235e  jal         func_208D78
    ctx->pc = 0x1E8568u;
    SET_GPR_U32(ctx, 31, 0x1E8570u);
    ctx->pc = 0x1E856Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8568u;
            // 0x1e856c: 0x8e040324  lw          $a0, 0x324($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208D78u;
    if (runtime->hasFunction(0x208D78u)) {
        auto targetFn = runtime->lookupFunction(0x208D78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8570u; }
        if (ctx->pc != 0x1E8570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00208D78_0x208d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8570u; }
        if (ctx->pc != 0x1E8570u) { return; }
    }
    ctx->pc = 0x1E8570u;
    // 0x1e8570: 0x32620002  andi        $v0, $s3, 0x2
    ctx->pc = 0x1e8570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
label_1e8574:
    // 0x1e8574: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E8574u;
    {
        const bool branch_taken_0x1e8574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8574) {
            ctx->pc = 0x1E8578u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8574u;
            // 0x1e8578: 0x8e040174  lw          $a0, 0x174($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E8590u;
            goto label_1e8590;
        }
    }
    ctx->pc = 0x1E857Cu;
    // 0x1e857c: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1e857cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1e8580: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1e8580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1e8584: 0x54400060  bnel        $v0, $zero, . + 4 + (0x60 << 2)
    ctx->pc = 0x1E8584u;
    {
        const bool branch_taken_0x1e8584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8584) {
            ctx->pc = 0x1E8588u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8584u;
            // 0x1e8588: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E8708u;
            goto label_1e8708;
        }
    }
    ctx->pc = 0x1E858Cu;
    // 0x1e858c: 0x8e040174  lw          $a0, 0x174($s0)
    ctx->pc = 0x1e858cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
label_1e8590:
    // 0x1e8590: 0x30820008  andi        $v0, $a0, 0x8
    ctx->pc = 0x1e8590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x1e8594: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E8594u;
    {
        const bool branch_taken_0x1e8594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8594) {
            ctx->pc = 0x1E85C4u;
            goto label_1e85c4;
        }
    }
    ctx->pc = 0x1E859Cu;
    // 0x1e859c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1e859cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1e85a0: 0x8e0302d8  lw          $v1, 0x2D8($s0)
    ctx->pc = 0x1e85a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1e85a4: 0x3442f800  ori         $v0, $v0, 0xF800
    ctx->pc = 0x1e85a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x1e85a8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1e85a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1e85ac: 0x30630300  andi        $v1, $v1, 0x300
    ctx->pc = 0x1e85acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)768);
    // 0x1e85b0: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1e85b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1e85b4: 0x1460002b  bnez        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x1E85B4u;
    {
        const bool branch_taken_0x1e85b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E85B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E85B4u;
            // 0x1e85b8: 0xae020174  sw          $v0, 0x174($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e85b4) {
            ctx->pc = 0x1E8664u;
            goto label_1e8664;
        }
    }
    ctx->pc = 0x1E85BCu;
    // 0x1e85bc: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1E85BCu;
    {
        const bool branch_taken_0x1e85bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E85C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E85BCu;
            // 0x1e85c0: 0xae0002b8  sw          $zero, 0x2B8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 696), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e85bc) {
            ctx->pc = 0x1E8664u;
            goto label_1e8664;
        }
    }
    ctx->pc = 0x1E85C4u;
label_1e85c4:
    // 0x1e85c4: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1E85C4u;
    {
        const bool branch_taken_0x1e85c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E85C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E85C4u;
            // 0x1e85c8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e85c4) {
            ctx->pc = 0x1E8618u;
            goto label_1e8618;
        }
    }
    ctx->pc = 0x1E85CCu;
    // 0x1e85cc: 0x8e020320  lw          $v0, 0x320($s0)
    ctx->pc = 0x1e85ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x1e85d0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1e85d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1e85d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e85d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e85d8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1e85d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e85dc: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1e85dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1e85e0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1e85e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e85e4: 0xc44000dc  lwc1        $f0, 0xDC($v0)
    ctx->pc = 0x1e85e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e85e8: 0x7a0200e0  lq          $v0, 0xE0($s0)
    ctx->pc = 0x1e85e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1e85ec: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e85ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1e85f0: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x1e85f0u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1e85f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e85f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e85f8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1e85f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1e85fc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1e85fcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1e8600: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e8600u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8604: 0x0  nop
    ctx->pc = 0x1e8604u;
    // NOP
    // 0x1e8608: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1E8608u;
    {
        const bool branch_taken_0x1e8608 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e8608) {
            ctx->pc = 0x1E860Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8608u;
            // 0x1e860c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E8610u;
            goto label_1e8610;
        }
    }
    ctx->pc = 0x1E8610u;
label_1e8610:
    // 0x1e8610: 0x50600015  beql        $v1, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1E8610u;
    {
        const bool branch_taken_0x1e8610 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8610) {
            ctx->pc = 0x1E8614u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8610u;
            // 0x1e8614: 0x8e020320  lw          $v0, 0x320($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E8668u;
            goto label_1e8668;
        }
    }
    ctx->pc = 0x1E8618u;
label_1e8618:
    // 0x1e8618: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1e8618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e861c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1e861cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1e8620: 0xc454c658  lwc1        $f20, -0x39A8($v0)
    ctx->pc = 0x1e8620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e8624: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x1e8624u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
    // 0x1e8628: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x1e8628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x1e862c: 0x40f809  jalr        $v0
    ctx->pc = 0x1E862Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E8634u);
        ctx->pc = 0x1E8630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E862Cu;
            // 0x1e8630: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E8634u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E84D8u: goto label_1e84d8;
            case 0x1E8504u: goto label_1e8504;
            case 0x1E8508u: goto label_1e8508;
            case 0x1E8528u: goto label_1e8528;
            case 0x1E8560u: goto label_1e8560;
            case 0x1E8574u: goto label_1e8574;
            case 0x1E8590u: goto label_1e8590;
            case 0x1E85C4u: goto label_1e85c4;
            case 0x1E8610u: goto label_1e8610;
            case 0x1E8618u: goto label_1e8618;
            case 0x1E8664u: goto label_1e8664;
            case 0x1E8668u: goto label_1e8668;
            case 0x1E86A0u: goto label_1e86a0;
            case 0x1E86E4u: goto label_1e86e4;
            case 0x1E86ECu: goto label_1e86ec;
            case 0x1E8708u: goto label_1e8708;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E8634u; }
            if (ctx->pc != 0x1E8634u) { return; }
        }
        }
    }
    ctx->pc = 0x1E8634u;
    // 0x1e8634: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1e8634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1e8638: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e8638u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e863c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1e863cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1e8640: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1e8640u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e8644: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e8644u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e8648: 0xc602016c  lwc1        $f2, 0x16C($s0)
    ctx->pc = 0x1e8648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e864c: 0xc60102b8  lwc1        $f1, 0x2B8($s0)
    ctx->pc = 0x1e864cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e8650: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1e8650u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1e8654: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1e8654u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1e8658: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1e8658u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1e865c: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x1e865cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x1e8660: 0xe60102b8  swc1        $f1, 0x2B8($s0)
    ctx->pc = 0x1e8660u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 696), bits); }
label_1e8664:
    // 0x1e8664: 0x8e020320  lw          $v0, 0x320($s0)
    ctx->pc = 0x1e8664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
label_1e8668:
    // 0x1e8668: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e8668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e866c: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1e866cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1e8670: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1e8670u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e8674: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1e8674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e8678: 0x7a0200e0  lq          $v0, 0xE0($s0)
    ctx->pc = 0x1e8678u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1e867c: 0xc46000e0  lwc1        $f0, 0xE0($v1)
    ctx->pc = 0x1e867cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8680: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x1e8680u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1e8684: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e8684u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e8688: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1e8688u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1e868c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1e868cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1e8690: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e8690u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8694: 0x0  nop
    ctx->pc = 0x1e8694u;
    // NOP
    // 0x1e8698: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1E8698u;
    {
        const bool branch_taken_0x1e8698 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e8698) {
            ctx->pc = 0x1E869Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8698u;
            // 0x1e869c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E86A0u;
            goto label_1e86a0;
        }
    }
    ctx->pc = 0x1E86A0u;
label_1e86a0:
    // 0x1e86a0: 0x14800012  bnez        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1E86A0u;
    {
        const bool branch_taken_0x1e86a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E86A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E86A0u;
            // 0x1e86a4: 0x24030017  addiu       $v1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e86a0) {
            ctx->pc = 0x1E86ECu;
            goto label_1e86ec;
        }
    }
    ctx->pc = 0x1E86A8u;
    // 0x1e86a8: 0x7a020260  lq          $v0, 0x260($s0)
    ctx->pc = 0x1e86a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1e86ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e86acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e86b0: 0x3c01c180  lui         $at, 0xC180
    ctx->pc = 0x1e86b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49536 << 16));
    // 0x1e86b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e86b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e86b8: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x1e86b8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1e86bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e86bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e86c0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e86c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e86c4: 0x0  nop
    ctx->pc = 0x1e86c4u;
    // NOP
    // 0x1e86c8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1E86C8u;
    {
        const bool branch_taken_0x1e86c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E86CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E86C8u;
            // 0x1e86cc: 0x24030015  addiu       $v1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e86c8) {
            ctx->pc = 0x1E86E4u;
            goto label_1e86e4;
        }
    }
    ctx->pc = 0x1E86D0u;
    // 0x1e86d0: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1e86d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e86d4: 0x0  nop
    ctx->pc = 0x1e86d4u;
    // NOP
    // 0x1e86d8: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x1E86D8u;
    {
        const bool branch_taken_0x1e86d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e86d8) {
            ctx->pc = 0x1E86DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E86D8u;
            // 0x1e86dc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E86E4u;
            goto label_1e86e4;
        }
    }
    ctx->pc = 0x1E86E0u;
    // 0x1e86e0: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x1e86e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1e86e4:
    // 0x1e86e4: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1e86e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1e86e8: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x1e86e8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_1e86ec:
    // 0x1e86ec: 0x8e020328  lw          $v0, 0x328($s0)
    ctx->pc = 0x1e86ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 808)));
    // 0x1e86f0: 0xa44300e0  sh          $v1, 0xE0($v0)
    ctx->pc = 0x1e86f0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 224), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e86f4: 0x3c015511  lui         $at, 0x5511
    ctx->pc = 0x1e86f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)21777 << 16));
    // 0x1e86f8: 0x342184e7  ori         $at, $at, 0x84E7
    ctx->pc = 0x1e86f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34023);
    // 0x1e86fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e86fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e8700: 0xe6000164  swc1        $f0, 0x164($s0)
    ctx->pc = 0x1e8700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 356), bits); }
    // 0x1e8704: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1e8704u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e8708:
    // 0x1e8708: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1e8708u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e870c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e870cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e8710: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1e8710u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8714: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e8714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8718: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1e8718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e871c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E871Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E871Cu;
            // 0x1e8720: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E84D8u: goto label_1e84d8;
            case 0x1E8504u: goto label_1e8504;
            case 0x1E8508u: goto label_1e8508;
            case 0x1E8528u: goto label_1e8528;
            case 0x1E8560u: goto label_1e8560;
            case 0x1E8574u: goto label_1e8574;
            case 0x1E8590u: goto label_1e8590;
            case 0x1E85C4u: goto label_1e85c4;
            case 0x1E8610u: goto label_1e8610;
            case 0x1E8618u: goto label_1e8618;
            case 0x1E8664u: goto label_1e8664;
            case 0x1E8668u: goto label_1e8668;
            case 0x1E86A0u: goto label_1e86a0;
            case 0x1E86E4u: goto label_1e86e4;
            case 0x1E86ECu: goto label_1e86ec;
            case 0x1E8708u: goto label_1e8708;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E8724u;
    // 0x1e8724: 0x0  nop
    ctx->pc = 0x1e8724u;
    // NOP
}
