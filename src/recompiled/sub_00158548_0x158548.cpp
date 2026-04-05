#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00158548
// Address: 0x158548 - 0x158b40
void sub_00158548_0x158548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158548_0x158548");
#endif

    ctx->pc = 0x158548u;

    // 0x158548: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x158548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
    // 0x15854c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x15854cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x158550: 0x7fbe0130  sq          $fp, 0x130($sp)
    ctx->pc = 0x158550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 30));
    // 0x158554: 0xe7b401c0  swc1        $f20, 0x1C0($sp)
    ctx->pc = 0x158554u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x158558: 0x8c5e104c  lw          $fp, 0x104C($v0)
    ctx->pc = 0x158558u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4172)));
    // 0x15855c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x15855cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x158560: 0x7fb001b0  sq          $s0, 0x1B0($sp)
    ctx->pc = 0x158560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 16));
    // 0x158564: 0x7fb101a0  sq          $s1, 0x1A0($sp)
    ctx->pc = 0x158564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 17));
    // 0x158568: 0x27c20360  addiu       $v0, $fp, 0x360
    ctx->pc = 0x158568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 864));
    // 0x15856c: 0x7fb20190  sq          $s2, 0x190($sp)
    ctx->pc = 0x15856cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 18));
    // 0x158570: 0x7fb30180  sq          $s3, 0x180($sp)
    ctx->pc = 0x158570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 19));
    // 0x158574: 0x7fb40170  sq          $s4, 0x170($sp)
    ctx->pc = 0x158574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 20));
    // 0x158578: 0x7fb50160  sq          $s5, 0x160($sp)
    ctx->pc = 0x158578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 21));
    // 0x15857c: 0x7fb60150  sq          $s6, 0x150($sp)
    ctx->pc = 0x15857cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 22));
    // 0x158580: 0x7fb70140  sq          $s7, 0x140($sp)
    ctx->pc = 0x158580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 23));
    // 0x158584: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x158584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x158588: 0xafa500b4  sw          $a1, 0xB4($sp)
    ctx->pc = 0x158588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 5));
    // 0x15858c: 0xafa600b8  sw          $a2, 0xB8($sp)
    ctx->pc = 0x15858cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 6));
    // 0x158590: 0xafa700bc  sw          $a3, 0xBC($sp)
    ctx->pc = 0x158590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 7));
    // 0x158594: 0x8fc40360  lw          $a0, 0x360($fp)
    ctx->pc = 0x158594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 864)));
    // 0x158598: 0x10820002  beq         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x158598u;
    {
        const bool branch_taken_0x158598 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x15859Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158598u;
            // 0x15859c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158598) {
            ctx->pc = 0x1585A4u;
            goto label_1585a4;
        }
    }
    ctx->pc = 0x1585A0u;
    // 0x1585a0: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x1585a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1585a4:
    // 0x1585a4: 0x86030060  lh          $v1, 0x60($s0)
    ctx->pc = 0x1585a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1585a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1585a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1585ac: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1585ACu;
    {
        const bool branch_taken_0x1585ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1585B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1585ACu;
            // 0x1585b0: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1585ac) {
            ctx->pc = 0x1585BCu;
            goto label_1585bc;
        }
    }
    ctx->pc = 0x1585B4u;
    // 0x1585b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1585B4u;
    {
        const bool branch_taken_0x1585b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1585B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1585B4u;
            // 0x1585b8: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1585b4) {
            ctx->pc = 0x1585D8u;
            goto label_1585d8;
        }
    }
    ctx->pc = 0x1585BCu;
label_1585bc:
    // 0x1585bc: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x1585bcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1585c0: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1585c0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1585c4: 0x50650005  beql        $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1585C4u;
    {
        const bool branch_taken_0x1585c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1585c4) {
            ctx->pc = 0x1585C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1585C4u;
            // 0x1585c8: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1585DCu;
            goto label_1585dc;
        }
    }
    ctx->pc = 0x1585CCu;
    // 0x1585cc: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1585CCu;
    SET_GPR_U32(ctx, 31, 0x1585D4u);
    ctx->pc = 0x1585D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1585CCu;
            // 0x1585d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1585D4u; }
        if (ctx->pc != 0x1585D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1585D4u; }
        if (ctx->pc != 0x1585D4u) { return; }
    }
    ctx->pc = 0x1585D4u;
    // 0x1585d4: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x1585d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1585d8:
    // 0x1585d8: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x1585d8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
label_1585dc:
    // 0x1585dc: 0xde0200f0  ld          $v0, 0xF0($s0)
    ctx->pc = 0x1585dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1585e0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1585e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1585e4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1585E4u;
    {
        const bool branch_taken_0x1585e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1585E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1585E4u;
            // 0x1585e8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1585e4) {
            ctx->pc = 0x158620u;
            goto label_158620;
        }
    }
    ctx->pc = 0x1585ECu;
    // 0x1585ec: 0xc0614c6  jal         func_185318
    ctx->pc = 0x1585ECu;
    SET_GPR_U32(ctx, 31, 0x1585F4u);
    ctx->pc = 0x1585F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1585ECu;
            // 0x1585f0: 0xfe0300f0  sd          $v1, 0xF0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 240), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185318u;
    if (runtime->hasFunction(0x185318u)) {
        auto targetFn = runtime->lookupFunction(0x185318u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1585F4u; }
        if (ctx->pc != 0x1585F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185318_0x185318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1585F4u; }
        if (ctx->pc != 0x1585F4u) { return; }
    }
    ctx->pc = 0x1585F4u;
    // 0x1585f4: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x1585f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1585f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1585f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1585fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1585fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x158600: 0x7e0200b0  sq          $v0, 0xB0($s0)
    ctx->pc = 0x158600u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 176), GPR_VEC(ctx, 2));
    // 0x158604: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x158604u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x158608: 0x7e0200c0  sq          $v0, 0xC0($s0)
    ctx->pc = 0x158608u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 192), GPR_VEC(ctx, 2));
    // 0x15860c: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x15860cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x158610: 0x7e0200d0  sq          $v0, 0xD0($s0)
    ctx->pc = 0x158610u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 208), GPR_VEC(ctx, 2));
    // 0x158614: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x158614u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x158618: 0xc08ed6e  jal         func_23B5B8
    ctx->pc = 0x158618u;
    SET_GPR_U32(ctx, 31, 0x158620u);
    ctx->pc = 0x15861Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158618u;
            // 0x15861c: 0x7e0200e0  sq          $v0, 0xE0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 224), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B5B8u;
    if (runtime->hasFunction(0x23B5B8u)) {
        auto targetFn = runtime->lookupFunction(0x23B5B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158620u; }
        if (ctx->pc != 0x158620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23b5b8_0x23b5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158620u; }
        if (ctx->pc != 0x158620u) { return; }
    }
    ctx->pc = 0x158620u;
label_158620:
    // 0x158620: 0x7a0200b0  lq          $v0, 0xB0($s0)
    ctx->pc = 0x158620u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x158624: 0x260500b0  addiu       $a1, $s0, 0xB0
    ctx->pc = 0x158624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x158628: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x158628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x15862c: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x15862cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x158630: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x158630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x158634: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x158634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x158638: 0xd86100b0  lqc2        $vf1, 0xB0($v1)
    ctx->pc = 0x158638u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x15863c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x15863cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x158640: 0x4b010043  vaddw.x     $vf1, $vf0, $vf1w
    ctx->pc = 0x158640u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x158644: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x158644u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x158648: 0x8fa600bc  lw          $a2, 0xBC($sp)
    ctx->pc = 0x158648u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x15864c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x15864cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x158650: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x158650u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x158654: 0x8fa800b4  lw          $t0, 0xB4($sp)
    ctx->pc = 0x158654u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x158658: 0xafa40100  sw          $a0, 0x100($sp)
    ctx->pc = 0x158658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 4));
    // 0x15865c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15865cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x158660: 0x8ce71058  lw          $a3, 0x1058($a3)
    ctx->pc = 0x158660u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4184)));
    // 0x158664: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x158664u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x158668: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x158668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x15866c: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x15866cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x158670: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x158670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x158674: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x158674u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158678: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x158678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
    // 0x15867c: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x15867cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x158680: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x158680u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158684: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x158684u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x158688: 0x8d0600d0  lw          $a2, 0xD0($t0)
    ctx->pc = 0x158688u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 208)));
    // 0x15868c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x15868cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x158690: 0xafa70104  sw          $a3, 0x104($sp)
    ctx->pc = 0x158690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 7));
    // 0x158694: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x158694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x158698: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x158698u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x15869c: 0x8fa80100  lw          $t0, 0x100($sp)
    ctx->pc = 0x15869cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1586a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1586a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1586a4: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x1586a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x1586a8: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1586a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x1586ac: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x1586acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1586b0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1586b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1586b4: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x1586b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1586b8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1586B8u;
    {
        const bool branch_taken_0x1586b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1586BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1586B8u;
            // 0x1586bc: 0xafa60108  sw          $a2, 0x108($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1586b8) {
            ctx->pc = 0x1586D8u;
            goto label_1586d8;
        }
    }
    ctx->pc = 0x1586C0u;
    // 0x1586c0: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x1586c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1586c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1586c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1586c8: 0xdc6200c0  ld          $v0, 0xC0($v1)
    ctx->pc = 0x1586c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x1586cc: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1586ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1586d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1586d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1586d4: 0x2280b  movn        $a1, $zero, $v0
    ctx->pc = 0x1586d4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_1586d8:
    // 0x1586d8: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x1586d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1586dc: 0x8fa70100  lw          $a3, 0x100($sp)
    ctx->pc = 0x1586dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1586e0: 0x5300b  movn        $a2, $zero, $a1
    ctx->pc = 0x1586e0u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    // 0x1586e4: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x1586e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
    // 0x1586e8: 0x10e00108  beqz        $a3, . + 4 + (0x108 << 2)
    ctx->pc = 0x1586E8u;
    {
        const bool branch_taken_0x1586e8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1586ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1586E8u;
            // 0x1586ec: 0xafa6010c  sw          $a2, 0x10C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1586e8) {
            ctx->pc = 0x158B0Cu;
            goto label_158b0c;
        }
    }
    ctx->pc = 0x1586F0u;
    // 0x1586f0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1586f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1586f4: 0x0  nop
    ctx->pc = 0x1586f4u;
    // NOP
label_1586f8:
    // 0x1586f8: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x1586f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1586fc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1586fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x158700: 0x71021b89  pcpyld      $v1, $t0, $v0
    ctx->pc = 0x158700u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 2)));
    // 0x158704: 0x8e470008  lw          $a3, 0x8($s2)
    ctx->pc = 0x158704u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x158708: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x158708u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x15870c: 0x70c71389  pcpyld      $v0, $a2, $a3
    ctx->pc = 0x15870cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
    // 0x158710: 0xdba200c0  lqc2        $vf2, 0xC0($sp)
    ctx->pc = 0x158710u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x158714: 0x704344c8  ppacw       $t0, $v0, $v1
    ctx->pc = 0x158714u;
    SET_GPR_VEC(ctx, 8, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x158718: 0x48a80800  qmtc2.ni    $t0, $vf1
    ctx->pc = 0x158718u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x15871c: 0x4be111bc  vmulax.xyzw $ACC, $vf2, $vf1x
    ctx->pc = 0x15871cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x158720: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x158720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x158724: 0xdba200d0  lqc2        $vf2, 0xD0($sp)
    ctx->pc = 0x158724u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x158728: 0x4be110bd  vmadday.xyzw $ACC, $vf2, $vf1y
    ctx->pc = 0x158728u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x15872c: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x15872cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x158730: 0xdba200e0  lqc2        $vf2, 0xE0($sp)
    ctx->pc = 0x158730u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x158734: 0x4be110be  vmaddaz.xyzw $ACC, $vf2, $vf1z
    ctx->pc = 0x158734u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x158738: 0xdba200f0  lqc2        $vf2, 0xF0($sp)
    ctx->pc = 0x158738u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x15873c: 0x4be1104b  vmaddw.xyzw $vf1, $vf2, $vf1w
    ctx->pc = 0x15873cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x158740: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x158740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x158744: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x158744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x158748: 0x48a31800  qmtc2.ni    $v1, $vf3
    ctx->pc = 0x158748u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x15874c: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x15874cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x158750: 0x4a231040  vaddx.w     $vf1, $vf2, $vf3x
    ctx->pc = 0x158750u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x158754: 0xc7c50384  lwc1        $f5, 0x384($fp)
    ctx->pc = 0x158754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x158758: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x158758u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15875c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x15875cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x158760: 0x70041789  pexew       $v0, $a0
    ctx->pc = 0x158760u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x158764: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x158764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x158768: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x158768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15876c: 0x44843000  mtc1        $a0, $f6
    ctx->pc = 0x15876cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x158770: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x158770u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158774: 0x700417c9  prot3w      $v0, $a0
    ctx->pc = 0x158774u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x158778: 0x44823800  mtc1        $v0, $f7
    ctx->pc = 0x158778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x15877c: 0x4b010083  vaddw.x     $vf2, $vf0, $vf1w
    ctx->pc = 0x15877cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x158780: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x158780u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x158784: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x158784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x158788: 0x46032081  sub.s       $f2, $f4, $f3
    ctx->pc = 0x158788u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x15878c: 0x46022836  c.le.s      $f5, $f2
    ctx->pc = 0x15878cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158790: 0x0  nop
    ctx->pc = 0x158790u;
    // NOP
    // 0x158794: 0x4503003c  bc1tl       . + 4 + (0x3C << 2)
    ctx->pc = 0x158794u;
    {
        const bool branch_taken_0x158794 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x158794) {
            ctx->pc = 0x158798u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158794u;
            // 0x158798: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x158888u;
            goto label_158888;
        }
    }
    ctx->pc = 0x15879Cu;
    // 0x15879c: 0x46032000  add.s       $f0, $f4, $f3
    ctx->pc = 0x15879cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x1587a0: 0xc7c10388  lwc1        $f1, 0x388($fp)
    ctx->pc = 0x1587a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1587a4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1587a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1587a8: 0x0  nop
    ctx->pc = 0x1587a8u;
    // NOP
    // 0x1587ac: 0x45030036  bc1tl       . + 4 + (0x36 << 2)
    ctx->pc = 0x1587ACu;
    {
        const bool branch_taken_0x1587ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1587ac) {
            ctx->pc = 0x1587B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1587ACu;
            // 0x1587b0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x158888u;
            goto label_158888;
        }
    }
    ctx->pc = 0x1587B4u;
    // 0x1587b4: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x1587b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1587b8: 0x0  nop
    ctx->pc = 0x1587b8u;
    // NOP
    // 0x1587bc: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x1587BCu;
    {
        const bool branch_taken_0x1587bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1587bc) {
            ctx->pc = 0x1587C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1587BCu;
            // 0x1587c0: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1587C8u;
            goto label_1587c8;
        }
    }
    ctx->pc = 0x1587C4u;
    // 0x1587c4: 0x0  nop
    ctx->pc = 0x1587c4u;
    // NOP
label_1587c8:
    // 0x1587c8: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1587c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1587cc: 0x0  nop
    ctx->pc = 0x1587ccu;
    // NOP
    // 0x1587d0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1587D0u;
    {
        const bool branch_taken_0x1587d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1587d0) {
            ctx->pc = 0x1587D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1587D0u;
            // 0x1587d4: 0x34630010  ori         $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1587D8u;
            goto label_1587d8;
        }
    }
    ctx->pc = 0x1587D8u;
label_1587d8:
    // 0x1587d8: 0xc7c002c0  lwc1        $f0, 0x2C0($fp)
    ctx->pc = 0x1587d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1587dc: 0xc7c102c8  lwc1        $f1, 0x2C8($fp)
    ctx->pc = 0x1587dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1587e0: 0x46003082  mul.s       $f2, $f6, $f0
    ctx->pc = 0x1587e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x1587e4: 0x46001005  abs.s       $f0, $f2
    ctx->pc = 0x1587e4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
    // 0x1587e8: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x1587e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1587ec: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1587ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1587f0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1587f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1587f4: 0x0  nop
    ctx->pc = 0x1587f4u;
    // NOP
    // 0x1587f8: 0x45010023  bc1t        . + 4 + (0x23 << 2)
    ctx->pc = 0x1587F8u;
    {
        const bool branch_taken_0x1587f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1587FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1587F8u;
            // 0x1587fc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1587f8) {
            ctx->pc = 0x158888u;
            goto label_158888;
        }
    }
    ctx->pc = 0x158800u;
    // 0x158800: 0x46020800  add.s       $f0, $f1, $f2
    ctx->pc = 0x158800u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x158804: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x158804u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158808: 0x0  nop
    ctx->pc = 0x158808u;
    // NOP
    // 0x15880c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x15880Cu;
    {
        const bool branch_taken_0x15880c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15880c) {
            ctx->pc = 0x158810u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15880Cu;
            // 0x158810: 0x34630001  ori         $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x158814u;
            goto label_158814;
        }
    }
    ctx->pc = 0x158814u;
label_158814:
    // 0x158814: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x158814u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x158818: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x158818u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15881c: 0x0  nop
    ctx->pc = 0x15881cu;
    // NOP
    // 0x158820: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x158820u;
    {
        const bool branch_taken_0x158820 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x158820) {
            ctx->pc = 0x158824u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158820u;
            // 0x158824: 0x34630002  ori         $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x158828u;
            goto label_158828;
        }
    }
    ctx->pc = 0x158828u;
label_158828:
    // 0x158828: 0xc7c002d4  lwc1        $f0, 0x2D4($fp)
    ctx->pc = 0x158828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15882c: 0xc7c102d8  lwc1        $f1, 0x2D8($fp)
    ctx->pc = 0x15882cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158830: 0x46003882  mul.s       $f2, $f7, $f0
    ctx->pc = 0x158830u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x158834: 0x46001005  abs.s       $f0, $f2
    ctx->pc = 0x158834u;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
    // 0x158838: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x158838u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x15883c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x15883cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x158840: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x158840u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158844: 0x0  nop
    ctx->pc = 0x158844u;
    // NOP
    // 0x158848: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x158848u;
    {
        const bool branch_taken_0x158848 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15884Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158848u;
            // 0x15884c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158848) {
            ctx->pc = 0x158888u;
            goto label_158888;
        }
    }
    ctx->pc = 0x158850u;
    // 0x158850: 0x46020800  add.s       $f0, $f1, $f2
    ctx->pc = 0x158850u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x158854: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x158854u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158858: 0x0  nop
    ctx->pc = 0x158858u;
    // NOP
    // 0x15885c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x15885Cu;
    {
        const bool branch_taken_0x15885c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15885c) {
            ctx->pc = 0x158860u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15885Cu;
            // 0x158860: 0x34630008  ori         $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
            ctx->pc = 0x158864u;
            goto label_158864;
        }
    }
    ctx->pc = 0x158864u;
label_158864:
    // 0x158864: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x158864u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x158868: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x158868u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15886c: 0x0  nop
    ctx->pc = 0x15886cu;
    // NOP
    // 0x158870: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x158870u;
    {
        const bool branch_taken_0x158870 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x158870) {
            ctx->pc = 0x158874u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158870u;
            // 0x158874: 0x34630004  ori         $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
            ctx->pc = 0x158878u;
            goto label_158878;
        }
    }
    ctx->pc = 0x158878u;
label_158878:
    // 0x158878: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x158878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15887c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15887cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158880: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x158880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x158884: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x158884u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_158888:
    // 0x158888: 0x1480009a  bnez        $a0, . + 4 + (0x9A << 2)
    ctx->pc = 0x158888u;
    {
        const bool branch_taken_0x158888 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x15888Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158888u;
            // 0x15888c: 0x8fa20110  lw          $v0, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158888) {
            ctx->pc = 0x158AF4u;
            goto label_158af4;
        }
    }
    ctx->pc = 0x158890u;
    // 0x158890: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x158890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x158894: 0x8fa600bc  lw          $a2, 0xBC($sp)
    ctx->pc = 0x158894u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x158898: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x158898u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x15889c: 0xafa50114  sw          $a1, 0x114($sp)
    ctx->pc = 0x15889cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 5));
    // 0x1588a0: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x1588a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1588a4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1588a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1588a8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1588a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1588ac: 0xafa20118  sw          $v0, 0x118($sp)
    ctx->pc = 0x1588acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
    // 0x1588b0: 0x94460000  lhu         $a2, 0x0($v0)
    ctx->pc = 0x1588b0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1588b4: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x1588b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1588b8: 0x14c20009  bne         $a2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1588B8u;
    {
        const bool branch_taken_0x1588b8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1588BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1588B8u;
            // 0x1588bc: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1588b8) {
            ctx->pc = 0x1588E0u;
            goto label_1588e0;
        }
    }
    ctx->pc = 0x1588C0u;
    // 0x1588c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1588c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1588c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1588c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1588c8: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x1588c8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1588cc: 0x0  nop
    ctx->pc = 0x1588ccu;
    // NOP
    // 0x1588d0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1588D0u;
    {
        const bool branch_taken_0x1588d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1588D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1588D0u;
            // 0x1588d4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1588d0) {
            ctx->pc = 0x1588E8u;
            goto label_1588e8;
        }
    }
    ctx->pc = 0x1588D8u;
    // 0x1588d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1588D8u;
    {
        const bool branch_taken_0x1588d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1588DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1588D8u;
            // 0x1588dc: 0x8c47c2b8  lw          $a3, -0x3D48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1588d8) {
            ctx->pc = 0x1588F8u;
            goto label_1588f8;
        }
    }
    ctx->pc = 0x1588E0u;
label_1588e0:
    // 0x1588e0: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1588E0u;
    {
        const bool branch_taken_0x1588e0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1588E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1588E0u;
            // 0x1588e4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1588e0) {
            ctx->pc = 0x1588F4u;
            goto label_1588f4;
        }
    }
    ctx->pc = 0x1588E8u;
label_1588e8:
    // 0x1588e8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1588e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1588ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1588ECu;
    {
        const bool branch_taken_0x1588ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1588F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1588ECu;
            // 0x1588f0: 0x8c47c2bc  lw          $a3, -0x3D44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1588ec) {
            ctx->pc = 0x1588F8u;
            goto label_1588f8;
        }
    }
    ctx->pc = 0x1588F4u;
label_1588f4:
    // 0x1588f4: 0x8c47c2c0  lw          $a3, -0x3D40($v0)
    ctx->pc = 0x1588f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951616)));
label_1588f8:
    // 0x1588f8: 0x8fa80118  lw          $t0, 0x118($sp)
    ctx->pc = 0x1588f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1588fc: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x1588fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x158900: 0x95020008  lhu         $v0, 0x8($t0)
    ctx->pc = 0x158900u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x158904: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x158904u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x158908: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x158908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15890c: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x15890cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x158910: 0x8ea50044  lw          $a1, 0x44($s5)
    ctx->pc = 0x158910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x158914: 0x50a0000d  beql        $a1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x158914u;
    {
        const bool branch_taken_0x158914 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x158914) {
            ctx->pc = 0x158918u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158914u;
            // 0x158918: 0x96a2003c  lhu         $v0, 0x3C($s5) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 60)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15894Cu;
            goto label_15894c;
        }
    }
    ctx->pc = 0x15891Cu;
    // 0x15891c: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x15891cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x158920: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x158920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x158924: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x158924u;
    {
        const bool branch_taken_0x158924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x158928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158924u;
            // 0x158928: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158924) {
            ctx->pc = 0x158948u;
            goto label_158948;
        }
    }
    ctx->pc = 0x15892Cu;
    // 0x15892c: 0x8c44e854  lw          $a0, -0x17AC($v0)
    ctx->pc = 0x15892cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961236)));
    // 0x158930: 0x8c8300d8  lw          $v1, 0xD8($a0)
    ctx->pc = 0x158930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x158934: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x158934u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x158938: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x158938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x15893c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15893cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x158940: 0xac4500dc  sw          $a1, 0xDC($v0)
    ctx->pc = 0x158940u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 220), GPR_U32(ctx, 5));
    // 0x158944: 0xac8300d8  sw          $v1, 0xD8($a0)
    ctx->pc = 0x158944u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 3));
label_158948:
    // 0x158948: 0x96a2003c  lhu         $v0, 0x3C($s5)
    ctx->pc = 0x158948u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 60)));
label_15894c:
    // 0x15894c: 0x8fa4010c  lw          $a0, 0x10C($sp)
    ctx->pc = 0x15894cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x158950: 0x444825  or          $t1, $v0, $a0
    ctx->pc = 0x158950u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x158954: 0x31228000  andi        $v0, $t1, 0x8000
    ctx->pc = 0x158954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)32768);
    // 0x158958: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x158958u;
    {
        const bool branch_taken_0x158958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158958) {
            ctx->pc = 0x15895Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158958u;
            // 0x15895c: 0x96a3003e  lhu         $v1, 0x3E($s5) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 62)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x158970u;
            goto label_158970;
        }
    }
    ctx->pc = 0x158960u;
    // 0x158960: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x158960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x158964: 0x14c20002  bne         $a2, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x158964u;
    {
        const bool branch_taken_0x158964 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x158968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158964u;
            // 0x158968: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158964) {
            ctx->pc = 0x158970u;
            goto label_158970;
        }
    }
    ctx->pc = 0x15896Cu;
    // 0x15896c: 0x96a3003e  lhu         $v1, 0x3E($s5)
    ctx->pc = 0x15896cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 62)));
label_158970:
    // 0x158970: 0x8fa50104  lw          $a1, 0x104($sp)
    ctx->pc = 0x158970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x158974: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x158974u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x158978: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x158978u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x15897c: 0x24e60024  addiu       $a2, $a3, 0x24
    ctx->pc = 0x15897cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 36));
    // 0x158980: 0x52140  sll         $a0, $a1, 5
    ctx->pc = 0x158980u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x158984: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x158984u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x158988: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x158988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x15898c: 0x86a80040  lh          $t0, 0x40($s5)
    ctx->pc = 0x15898cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 64)));
    // 0x158990: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x158990u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x158994: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x158994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x158998: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x158998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15899c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15899cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1589a0: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x1589a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1589a4: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1589a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1589a8: 0x8fa70118  lw          $a3, 0x118($sp)
    ctx->pc = 0x1589a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1589ac: 0x2510ffff  addiu       $s0, $t0, -0x1
    ctx->pc = 0x1589acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x1589b0: 0x8c630068  lw          $v1, 0x68($v1)
    ctx->pc = 0x1589b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1589b4: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x1589b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1589b8: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x1589b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1589bc: 0x8c47499c  lw          $a3, 0x499C($v0)
    ctx->pc = 0x1589bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18844)));
    // 0x1589c0: 0x31227fff  andi        $v0, $t1, 0x7FFF
    ctx->pc = 0x1589c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)32767);
    // 0x1589c4: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x1589c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x1589c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1589c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1589cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1589ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1589d0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1589d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1589d4: 0x400013  mtlo        $v0
    ctx->pc = 0x1589d4u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x1589d8: 0x70870000  madd        $zero, $a0, $a3
    ctx->pc = 0x1589d8u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
    // 0x1589dc: 0x1012  mflo        $v0
    ctx->pc = 0x1589dcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1589e0: 0xafa2011c  sw          $v0, 0x11C($sp)
    ctx->pc = 0x1589e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 2));
    // 0x1589e4: 0x6000042  bltz        $s0, . + 4 + (0x42 << 2)
    ctx->pc = 0x1589E4u;
    {
        const bool branch_taken_0x1589e4 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1589E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1589E4u;
            // 0x1589e8: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1589e4) {
            ctx->pc = 0x158AF0u;
            goto label_158af0;
        }
    }
    ctx->pc = 0x1589ECu;
    // 0x1589ec: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1589ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1589f0: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x1589f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1589f4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1589f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1589f8:
    // 0x1589f8: 0x2b41021  addu        $v0, $s5, $s4
    ctx->pc = 0x1589f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x1589fc: 0x8c510060  lw          $s1, 0x60($v0)
    ctx->pc = 0x1589fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x158a00: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x158a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x158a04: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x158a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x158a08: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x158A08u;
    {
        const bool branch_taken_0x158a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x158A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158A08u;
            // 0x158a0c: 0x8fa300b4  lw          $v1, 0xB4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158a08) {
            ctx->pc = 0x158A40u;
            goto label_158a40;
        }
    }
    ctx->pc = 0x158A10u;
    // 0x158a10: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x158a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x158a14: 0x8c44007c  lw          $a0, 0x7C($v0)
    ctx->pc = 0x158a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x158a18: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x158A18u;
    {
        const bool branch_taken_0x158a18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x158A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158A18u;
            // 0x158a1c: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158a18) {
            ctx->pc = 0x158A40u;
            goto label_158a40;
        }
    }
    ctx->pc = 0x158A20u;
    // 0x158a20: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x158a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x158a24: 0x8c42ed58  lw          $v0, -0x12A8($v0)
    ctx->pc = 0x158a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962520)));
    // 0x158a28: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x158a28u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x158a2c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x158A2Cu;
    {
        const bool branch_taken_0x158a2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x158A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158A2Cu;
            // 0x158a30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158a2c) {
            ctx->pc = 0x158A40u;
            goto label_158a40;
        }
    }
    ctx->pc = 0x158A34u;
    // 0x158a34: 0xc055c40  jal         func_157100
    ctx->pc = 0x158A34u;
    SET_GPR_U32(ctx, 31, 0x158A3Cu);
    ctx->pc = 0x158A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158A34u;
            // 0x158a38: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157100u;
    if (runtime->hasFunction(0x157100u)) {
        auto targetFn = runtime->lookupFunction(0x157100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158A3Cu; }
        if (ctx->pc != 0x158A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157100_0x157100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158A3Cu; }
        if (ctx->pc != 0x158A3Cu) { return; }
    }
    ctx->pc = 0x158A3Cu;
    // 0x158a3c: 0x0  nop
    ctx->pc = 0x158a3cu;
    // NOP
label_158a40:
    // 0x158a40: 0x8e770000  lw          $s7, 0x0($s3)
    ctx->pc = 0x158a40u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x158a44: 0x16e00006  bnez        $s7, . + 4 + (0x6 << 2)
    ctx->pc = 0x158A44u;
    {
        const bool branch_taken_0x158a44 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x158A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158A44u;
            // 0x158a48: 0x260b02d  daddu       $s6, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158a44) {
            ctx->pc = 0x158A60u;
            goto label_158a60;
        }
    }
    ctx->pc = 0x158A4Cu;
    // 0x158a4c: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x158a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x158a50: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x158A50u;
    {
        const bool branch_taken_0x158a50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x158A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158A50u;
            // 0x158a54: 0x3c060033  lui         $a2, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158a50) {
            ctx->pc = 0x158A68u;
            goto label_158a68;
        }
    }
    ctx->pc = 0x158A58u;
    // 0x158a58: 0xc059afa  jal         func_166BE8
    ctx->pc = 0x158A58u;
    SET_GPR_U32(ctx, 31, 0x158A60u);
    ctx->pc = 0x166BE8u;
    if (runtime->hasFunction(0x166BE8u)) {
        auto targetFn = runtime->lookupFunction(0x166BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158A60u; }
        if (ctx->pc != 0x158A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166BE8_0x166be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158A60u; }
        if (ctx->pc != 0x158A60u) { return; }
    }
    ctx->pc = 0x158A60u;
label_158a60:
    // 0x158a60: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x158a60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x158a64: 0x0  nop
    ctx->pc = 0x158a64u;
    // NOP
label_158a68:
    // 0x158a68: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x158a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x158a6c: 0x8cc51060  lw          $a1, 0x1060($a2)
    ctx->pc = 0x158a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4192)));
    // 0x158a70: 0x2673fffc  addiu       $s3, $s3, -0x4
    ctx->pc = 0x158a70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
    // 0x158a74: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x158a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x158a78: 0x2694fffc  addiu       $s4, $s4, -0x4
    ctx->pc = 0x158a78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967292));
    // 0x158a7c: 0x8c63105c  lw          $v1, 0x105C($v1)
    ctx->pc = 0x158a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4188)));
    // 0x158a80: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x158a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x158a84: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x158a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x158a88: 0x24a40018  addiu       $a0, $a1, 0x18
    ctx->pc = 0x158a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x158a8c: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x158a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x158a90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x158a90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x158a94: 0xacc41060  sw          $a0, 0x1060($a2)
    ctx->pc = 0x158a94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4192), GPR_U32(ctx, 4));
    // 0x158a98: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x158a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x158a9c: 0x8fa500bc  lw          $a1, 0xBC($sp)
    ctx->pc = 0x158a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x158aa0: 0x8fa60114  lw          $a2, 0x114($sp)
    ctx->pc = 0x158aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x158aa4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x158aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x158aa8: 0xd02021  addu        $a0, $a2, $s0
    ctx->pc = 0x158aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x158aac: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x158aacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x158ab0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x158ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x158ab4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x158ab4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x158ab8: 0x8ca449a8  lw          $a0, 0x49A8($a1)
    ctx->pc = 0x158ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18856)));
    // 0x158abc: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x158abcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x158ac0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x158ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x158ac4: 0xac770000  sw          $s7, 0x0($v1)
    ctx->pc = 0x158ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 23));
    // 0x158ac8: 0xa0620016  sb          $v0, 0x16($v1)
    ctx->pc = 0x158ac8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 22), (uint8_t)GPR_U32(ctx, 2));
    // 0x158acc: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x158accu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x158ad0: 0xac71000c  sw          $s1, 0xC($v1)
    ctx->pc = 0x158ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 17));
    // 0x158ad4: 0xa0650015  sb          $a1, 0x15($v1)
    ctx->pc = 0x158ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 21), (uint8_t)GPR_U32(ctx, 5));
    // 0x158ad8: 0x8fa70118  lw          $a3, 0x118($sp)
    ctx->pc = 0x158ad8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x158adc: 0xe4740010  swc1        $f20, 0x10($v1)
    ctx->pc = 0x158adcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x158ae0: 0xac670004  sw          $a3, 0x4($v1)
    ctx->pc = 0x158ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
    // 0x158ae4: 0x8fa8011c  lw          $t0, 0x11C($sp)
    ctx->pc = 0x158ae4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x158ae8: 0x601ffc3  bgez        $s0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x158AE8u;
    {
        const bool branch_taken_0x158ae8 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x158AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158AE8u;
            // 0x158aec: 0xa0680014  sb          $t0, 0x14($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 20), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158ae8) {
            ctx->pc = 0x1589F8u;
            runtime->cooperativeGuestYield();
            goto label_1589f8;
        }
    }
    ctx->pc = 0x158AF0u;
label_158af0:
    // 0x158af0: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x158af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_158af4:
    // 0x158af4: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x158af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x158af8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x158af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x158afc: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x158afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x158b00: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x158b00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x158b04: 0x1440fefc  bnez        $v0, . + 4 + (-0x104 << 2)
    ctx->pc = 0x158B04u;
    {
        const bool branch_taken_0x158b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x158B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158B04u;
            // 0x158b08: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158b04) {
            ctx->pc = 0x1586F8u;
            runtime->cooperativeGuestYield();
            goto label_1586f8;
        }
    }
    ctx->pc = 0x158B0Cu;
label_158b0c:
    // 0x158b0c: 0x7bb001b0  lq          $s0, 0x1B0($sp)
    ctx->pc = 0x158b0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x158b10: 0x7bb101a0  lq          $s1, 0x1A0($sp)
    ctx->pc = 0x158b10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x158b14: 0x7bb20190  lq          $s2, 0x190($sp)
    ctx->pc = 0x158b14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x158b18: 0x7bb30180  lq          $s3, 0x180($sp)
    ctx->pc = 0x158b18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x158b1c: 0x7bb40170  lq          $s4, 0x170($sp)
    ctx->pc = 0x158b1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x158b20: 0x7bb50160  lq          $s5, 0x160($sp)
    ctx->pc = 0x158b20u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x158b24: 0x7bb60150  lq          $s6, 0x150($sp)
    ctx->pc = 0x158b24u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x158b28: 0x7bb70140  lq          $s7, 0x140($sp)
    ctx->pc = 0x158b28u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x158b2c: 0x7bbe0130  lq          $fp, 0x130($sp)
    ctx->pc = 0x158b2cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x158b30: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x158b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x158b34: 0xc7b401c0  lwc1        $f20, 0x1C0($sp)
    ctx->pc = 0x158b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x158b38: 0x3e00008  jr          $ra
    ctx->pc = 0x158B38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158B38u;
            // 0x158b3c: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1585A4u: goto label_1585a4;
            case 0x1585BCu: goto label_1585bc;
            case 0x1585D8u: goto label_1585d8;
            case 0x1585DCu: goto label_1585dc;
            case 0x158620u: goto label_158620;
            case 0x1586D8u: goto label_1586d8;
            case 0x1586F8u: goto label_1586f8;
            case 0x1587C8u: goto label_1587c8;
            case 0x1587D8u: goto label_1587d8;
            case 0x158814u: goto label_158814;
            case 0x158828u: goto label_158828;
            case 0x158864u: goto label_158864;
            case 0x158878u: goto label_158878;
            case 0x158888u: goto label_158888;
            case 0x1588E0u: goto label_1588e0;
            case 0x1588E8u: goto label_1588e8;
            case 0x1588F4u: goto label_1588f4;
            case 0x1588F8u: goto label_1588f8;
            case 0x158948u: goto label_158948;
            case 0x15894Cu: goto label_15894c;
            case 0x158970u: goto label_158970;
            case 0x1589F8u: goto label_1589f8;
            case 0x158A40u: goto label_158a40;
            case 0x158A60u: goto label_158a60;
            case 0x158A68u: goto label_158a68;
            case 0x158AF0u: goto label_158af0;
            case 0x158AF4u: goto label_158af4;
            case 0x158B0Cu: goto label_158b0c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x158B40u;
}
