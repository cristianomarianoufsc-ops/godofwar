#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001952C0
// Address: 0x1952c0 - 0x195400
void sub_001952C0_0x1952c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001952C0_0x1952c0");
#endif

    ctx->pc = 0x1952c0u;

    // 0x1952c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1952c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1952c4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1952c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1952c8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1952c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1952cc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1952ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1952d0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1952d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1952d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1952d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1952d8: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x1952d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1952dc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1952dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1952e0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1952e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1952e4: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1952e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1952e8: 0x10b00015  beq         $a1, $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1952E8u;
    {
        const bool branch_taken_0x1952e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 16));
        ctx->pc = 0x1952ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1952E8u;
            // 0x1952ec: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1952e8) {
            ctx->pc = 0x195340u;
            goto label_195340;
        }
    }
    ctx->pc = 0x1952F0u;
    // 0x1952f0: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x1952f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x1952f4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1952F4u;
    {
        const bool branch_taken_0x1952f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1952F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1952F4u;
            // 0x1952f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1952f4) {
            ctx->pc = 0x195328u;
            goto label_195328;
        }
    }
    ctx->pc = 0x1952FCu;
    // 0x1952fc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1952fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x195300: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x195300u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x195304: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x195304u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x195308: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x195308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19530c: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x19530cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x195310: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x195310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x195314: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x195314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x195318: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x195318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19531c: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19531Cu;
    {
        const bool branch_taken_0x19531c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x19531c) {
            ctx->pc = 0x195328u;
            goto label_195328;
        }
    }
    ctx->pc = 0x195324u;
    // 0x195324: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x195324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_195328:
    // 0x195328: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x195328u;
    {
        const bool branch_taken_0x195328 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19532Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195328u;
            // 0x19532c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195328) {
            ctx->pc = 0x195344u;
            goto label_195344;
        }
    }
    ctx->pc = 0x195330u;
    // 0x195330: 0x4be00053  vmaxw.xyzw  $vf1, $vf0, $vf0w
    ctx->pc = 0x195330u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x195334: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x195334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x195338: 0xc077e00  jal         func_1DF800
    ctx->pc = 0x195338u;
    SET_GPR_U32(ctx, 31, 0x195340u);
    ctx->pc = 0x19533Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195338u;
            // 0x19533c: 0x48250800  qmfc2.ni    $a1, $vf1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF800u;
    if (runtime->hasFunction(0x1DF800u)) {
        auto targetFn = runtime->lookupFunction(0x1DF800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195340u; }
        if (ctx->pc != 0x195340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1df800_0x1df850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195340u; }
        if (ctx->pc != 0x195340u) { return; }
    }
    ctx->pc = 0x195340u;
label_195340:
    // 0x195340: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x195340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_195344:
    // 0x195344: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x195344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195348: 0xc441c658  lwc1        $f1, -0x39A8($v0)
    ctx->pc = 0x195348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19534c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x19534cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x195350: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x195350u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x195354: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x195354u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x195358: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x195358u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19535c: 0x0  nop
    ctx->pc = 0x19535cu;
    // NOP
    // 0x195360: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x195360u;
    {
        const bool branch_taken_0x195360 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x195364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195360u;
            // 0x195364: 0xe6200008  swc1        $f0, 0x8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x195360) {
            ctx->pc = 0x1953E0u;
            goto label_1953e0;
        }
    }
    ctx->pc = 0x195368u;
    // 0x195368: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x195368u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x19536c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x19536cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x195370: 0x8603c910  lh          $v1, -0x36F0($s0)
    ctx->pc = 0x195370u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4294953232)));
    // 0x195374: 0x2402040f  addiu       $v0, $zero, 0x40F
    ctx->pc = 0x195374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1039));
    // 0x195378: 0xa7a20000  sh          $v0, 0x0($sp)
    ctx->pc = 0x195378u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x19537c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19537cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x195380: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x195380u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x195384: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x195384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x195388: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x195388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x19538c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x19538cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x195390: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x195390u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[0] = ctx->f[20] / ctx->f[0];
    // 0x195394: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x195394u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x195398: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x195398u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x19539c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x19539cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1953a0: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1953a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1953a4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1953a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1953a8: 0x8c44e89c  lw          $a0, -0x1764($v0)
    ctx->pc = 0x1953a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961308)));
    // 0x1953ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1953acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1953b0: 0xc047d6a  jal         func_11F5A8
    ctx->pc = 0x1953B0u;
    SET_GPR_U32(ctx, 31, 0x1953B8u);
    ctx->pc = 0x1953B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1953B0u;
            // 0x1953b4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F5A8u;
    if (runtime->hasFunction(0x11F5A8u)) {
        auto targetFn = runtime->lookupFunction(0x11F5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1953B8u; }
        if (ctx->pc != 0x1953B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11f5a8_0x11f5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1953B8u; }
        if (ctx->pc != 0x1953B8u) { return; }
    }
    ctx->pc = 0x1953B8u;
    // 0x1953b8: 0x8602c910  lh          $v0, -0x36F0($s0)
    ctx->pc = 0x1953b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4294953232)));
    // 0x1953bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1953bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1953c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1953c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1953c4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1953c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1953c8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1953c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1953cc: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1953ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1953d0: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x1953d0u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x1953d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1953d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1953d8: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1953d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x1953dc: 0x0  nop
    ctx->pc = 0x1953dcu;
    // NOP
label_1953e0:
    // 0x1953e0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1953e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1953e4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1953e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1953e8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1953e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1953ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1953ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1953f0: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1953f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1953f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1953F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1953F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1953F4u;
            // 0x1953f8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x195328u: goto label_195328;
            case 0x195340u: goto label_195340;
            case 0x195344u: goto label_195344;
            case 0x1953E0u: goto label_1953e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1953FCu;
    // 0x1953fc: 0x0  nop
    ctx->pc = 0x1953fcu;
    // NOP
}
