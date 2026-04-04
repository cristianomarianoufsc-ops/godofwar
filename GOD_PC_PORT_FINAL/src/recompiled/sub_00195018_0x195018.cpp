#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00195018
// Address: 0x195018 - 0x1952c0
void sub_00195018_0x195018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00195018_0x195018");
#endif

    ctx->pc = 0x195018u;

    // 0x195018: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x195018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x19501c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x19501cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x195020: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x195020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x195024: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x195024u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195028: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x195028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x19502c: 0x3c14002a  lui         $s4, 0x2A
    ctx->pc = 0x19502cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)42 << 16));
    // 0x195030: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x195030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x195034: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x195034u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195038: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x195038u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x19503c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x19503cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195040: 0x8e84cd58  lw          $a0, -0x32A8($s4)
    ctx->pc = 0x195040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294954328)));
    // 0x195044: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x195044u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x195048: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x195048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x19504c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19504cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x195050: 0xc0761e2  jal         func_1D8788
    ctx->pc = 0x195050u;
    SET_GPR_U32(ctx, 31, 0x195058u);
    ctx->pc = 0x195054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195050u;
            // 0x195054: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8788u;
    if (runtime->hasFunction(0x1D8788u)) {
        auto targetFn = runtime->lookupFunction(0x1D8788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195058u; }
        if (ctx->pc != 0x195058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d8788_0x1d8800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195058u; }
        if (ctx->pc != 0x195058u) { return; }
    }
    ctx->pc = 0x195058u;
    // 0x195058: 0x24030038  addiu       $v1, $zero, 0x38
    ctx->pc = 0x195058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x19505c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x19505cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x195060: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x195060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x195064: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x195064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x195068: 0x2463deb8  addiu       $v1, $v1, -0x2148
    ctx->pc = 0x195068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958776));
    // 0x19506c: 0x10b10023  beq         $a1, $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x19506Cu;
    {
        const bool branch_taken_0x19506c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 17));
        ctx->pc = 0x195070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19506Cu;
            // 0x195070: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19506c) {
            ctx->pc = 0x1950FCu;
            goto label_1950fc;
        }
    }
    ctx->pc = 0x195074u;
    // 0x195074: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x195074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x195078: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x195078u;
    {
        const bool branch_taken_0x195078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19507Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195078u;
            // 0x19507c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195078) {
            ctx->pc = 0x1950B0u;
            goto label_1950b0;
        }
    }
    ctx->pc = 0x195080u;
    // 0x195080: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x195080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x195084: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x195084u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x195088: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x195088u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x19508c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19508cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x195090: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x195090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x195094: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x195094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x195098: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x195098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19509c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19509cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1950a0: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1950A0u;
    {
        const bool branch_taken_0x1950a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1950a0) {
            ctx->pc = 0x1950B0u;
            goto label_1950b0;
        }
    }
    ctx->pc = 0x1950A8u;
    // 0x1950a8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1950a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1950ac: 0x0  nop
    ctx->pc = 0x1950acu;
    // NOP
label_1950b0:
    // 0x1950b0: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1950B0u;
    {
        const bool branch_taken_0x1950b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1950b0) {
            ctx->pc = 0x1950B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1950B0u;
            // 0x1950b4: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1950D0u;
            goto label_1950d0;
        }
    }
    ctx->pc = 0x1950B8u;
    // 0x1950b8: 0x4be00053  vmaxw.xyzw  $vf1, $vf0, $vf0w
    ctx->pc = 0x1950b8u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1950bc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1950bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1950c0: 0xc077e00  jal         func_1DF800
    ctx->pc = 0x1950C0u;
    SET_GPR_U32(ctx, 31, 0x1950C8u);
    ctx->pc = 0x1950C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1950C0u;
            // 0x1950c4: 0x48250800  qmfc2.ni    $a1, $vf1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF800u;
    if (runtime->hasFunction(0x1DF800u)) {
        auto targetFn = runtime->lookupFunction(0x1DF800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1950C8u; }
        if (ctx->pc != 0x1950C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1df800_0x1df850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1950C8u; }
        if (ctx->pc != 0x1950C8u) { return; }
    }
    ctx->pc = 0x1950C8u;
    // 0x1950c8: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1950c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1950cc: 0x0  nop
    ctx->pc = 0x1950ccu;
    // NOP
label_1950d0:
    // 0x1950d0: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x1950d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1950d4: 0x70441b89  pcpyld      $v1, $v0, $a0
    ctx->pc = 0x1950d4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x1950d8: 0x8e10002c  lw          $s0, 0x2C($s0)
    ctx->pc = 0x1950d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1950dc: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x1950dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x1950e0: 0x70f01389  pcpyld      $v0, $a3, $s0
    ctx->pc = 0x1950e0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 16)));
    // 0x1950e4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1950e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1950e8: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1950e8u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1950ec: 0x70022ca9  por         $a1, $zero, $v0
    ctx->pc = 0x1950ecu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1950f0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1950f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1950f4: 0xc077e00  jal         func_1DF800
    ctx->pc = 0x1950F4u;
    SET_GPR_U32(ctx, 31, 0x1950FCu);
    ctx->pc = 0x1950F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1950F4u;
            // 0x1950f8: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF800u;
    if (runtime->hasFunction(0x1DF800u)) {
        auto targetFn = runtime->lookupFunction(0x1DF800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1950FCu; }
        if (ctx->pc != 0x1950FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1df800_0x1df850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1950FCu; }
        if (ctx->pc != 0x1950FCu) { return; }
    }
    ctx->pc = 0x1950FCu;
label_1950fc:
    // 0x1950fc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1950fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x195100: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x195100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195104: 0xc441c658  lwc1        $f1, -0x39A8($v0)
    ctx->pc = 0x195104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195108: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x195108u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19510c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x19510cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x195110: 0xae710004  sw          $s1, 0x4($s3)
    ctx->pc = 0x195110u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 17));
    // 0x195114: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x195114u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x195118: 0x0  nop
    ctx->pc = 0x195118u;
    // NOP
    // 0x19511c: 0x4500005f  bc1f        . + 4 + (0x5F << 2)
    ctx->pc = 0x19511Cu;
    {
        const bool branch_taken_0x19511c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x195120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19511Cu;
            // 0x195120: 0xe6600008  swc1        $f0, 0x8($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19511c) {
            ctx->pc = 0x19529Cu;
            goto label_19529c;
        }
    }
    ctx->pc = 0x195124u;
    // 0x195124: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x195124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x195128: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x195128u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x19512c: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x19512cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x195130: 0x40f809  jalr        $v0
    ctx->pc = 0x195130u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195138u);
        ctx->pc = 0x195134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195130u;
            // 0x195134: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x195138u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1950B0u: goto label_1950b0;
            case 0x1950D0u: goto label_1950d0;
            case 0x1950FCu: goto label_1950fc;
            case 0x195164u: goto label_195164;
            case 0x195168u: goto label_195168;
            case 0x19518Cu: goto label_19518c;
            case 0x195260u: goto label_195260;
            case 0x195278u: goto label_195278;
            case 0x19529Cu: goto label_19529c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x195138u; }
            if (ctx->pc != 0x195138u) { return; }
        }
        }
    }
    ctx->pc = 0x195138u;
    // 0x195138: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x195138u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19513c: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x19513cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x195140: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x195140u;
    {
        const bool branch_taken_0x195140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x195144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195140u;
            // 0x195144: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195140) {
            ctx->pc = 0x195164u;
            goto label_195164;
        }
    }
    ctx->pc = 0x195148u;
    // 0x195148: 0x8e030098  lw          $v1, 0x98($s0)
    ctx->pc = 0x195148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x19514c: 0x8c42ed58  lw          $v0, -0x12A8($v0)
    ctx->pc = 0x19514cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962520)));
    // 0x195150: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x195150u;
    {
        const bool branch_taken_0x195150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x195154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195150u;
            // 0x195154: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195150) {
            ctx->pc = 0x195168u;
            goto label_195168;
        }
    }
    ctx->pc = 0x195158u;
    // 0x195158: 0xae020098  sw          $v0, 0x98($s0)
    ctx->pc = 0x195158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
    // 0x19515c: 0xc081522  jal         func_205488
    ctx->pc = 0x19515Cu;
    SET_GPR_U32(ctx, 31, 0x195164u);
    ctx->pc = 0x195160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19515Cu;
            // 0x195160: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x205488u;
    if (runtime->hasFunction(0x205488u)) {
        auto targetFn = runtime->lookupFunction(0x205488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195164u; }
        if (ctx->pc != 0x195164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00205488_0x205488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195164u; }
        if (ctx->pc != 0x195164u) { return; }
    }
    ctx->pc = 0x195164u;
label_195164:
    // 0x195164: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x195164u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195168:
    // 0x195168: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x195168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19516c: 0xc090d5c  jal         func_243570
    ctx->pc = 0x19516Cu;
    SET_GPR_U32(ctx, 31, 0x195174u);
    ctx->pc = 0x195170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19516Cu;
            // 0x195170: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243570u;
    if (runtime->hasFunction(0x243570u)) {
        auto targetFn = runtime->lookupFunction(0x243570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195174u; }
        if (ctx->pc != 0x195174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243570_0x243580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195174u; }
        if (ctx->pc != 0x195174u) { return; }
    }
    ctx->pc = 0x195174u;
    // 0x195174: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x195174u;
    {
        const bool branch_taken_0x195174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x195174) {
            ctx->pc = 0x195178u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x195174u;
            // 0x195178: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19518Cu;
            goto label_19518c;
        }
    }
    ctx->pc = 0x19517Cu;
    // 0x19517c: 0xc06f9e8  jal         func_1BE7A0
    ctx->pc = 0x19517Cu;
    SET_GPR_U32(ctx, 31, 0x195184u);
    ctx->pc = 0x1BE7A0u;
    if (runtime->hasFunction(0x1BE7A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195184u; }
        if (ctx->pc != 0x195184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1be7a0_0x1be7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195184u; }
        if (ctx->pc != 0x195184u) { return; }
    }
    ctx->pc = 0x195184u;
    // 0x195184: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x195184u;
    {
        const bool branch_taken_0x195184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x195184) {
            ctx->pc = 0x195188u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x195184u;
            // 0x195188: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19518Cu;
            goto label_19518c;
        }
    }
    ctx->pc = 0x19518Cu;
label_19518c:
    // 0x19518c: 0x1620003a  bnez        $s1, . + 4 + (0x3A << 2)
    ctx->pc = 0x19518Cu;
    {
        const bool branch_taken_0x19518c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x195190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19518Cu;
            // 0x195190: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19518c) {
            ctx->pc = 0x195278u;
            goto label_195278;
        }
    }
    ctx->pc = 0x195194u;
    // 0x195194: 0xc076a7e  jal         func_1DA9F8
    ctx->pc = 0x195194u;
    SET_GPR_U32(ctx, 31, 0x19519Cu);
    ctx->pc = 0x195198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195194u;
            // 0x195198: 0x8e84cd58  lw          $a0, -0x32A8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294954328)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA9F8u;
    if (runtime->hasFunction(0x1DA9F8u)) {
        auto targetFn = runtime->lookupFunction(0x1DA9F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19519Cu; }
        if (ctx->pc != 0x19519Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1da9f8_0x1daa10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19519Cu; }
        if (ctx->pc != 0x19519Cu) { return; }
    }
    ctx->pc = 0x19519Cu;
    // 0x19519c: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x19519cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1951a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1951a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1951a4: 0xc077abc  jal         func_1DEAF0
    ctx->pc = 0x1951A4u;
    SET_GPR_U32(ctx, 31, 0x1951ACu);
    ctx->pc = 0x1951A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1951A4u;
            // 0x1951a8: 0x24a5c928  addiu       $a1, $a1, -0x36D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DEAF0u;
    if (runtime->hasFunction(0x1DEAF0u)) {
        auto targetFn = runtime->lookupFunction(0x1DEAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1951ACu; }
        if (ctx->pc != 0x1951ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DEAF0_0x1deaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1951ACu; }
        if (ctx->pc != 0x1951ACu) { return; }
    }
    ctx->pc = 0x1951ACu;
    // 0x1951ac: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1951acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1951b0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1951b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1951b4: 0x8442c910  lh          $v0, -0x36F0($v0)
    ctx->pc = 0x1951b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294953232)));
    // 0x1951b8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1951b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1951bc: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1951bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1951c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1951c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1951c4: 0x460ca303  div.s       $f12, $f20, $f12
    ctx->pc = 0x1951c4u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[12];
    // 0x1951c8: 0x8c65c940  lw          $a1, -0x36C0($v1)
    ctx->pc = 0x1951c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953280)));
    // 0x1951cc: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1951ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1951d0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1951d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1951d4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1951d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1951d8: 0x48280800  qmfc2.ni    $t0, $vf1
    ctx->pc = 0x1951d8u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1951dc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1951dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1951e0: 0xc080eba  jal         func_203AE8
    ctx->pc = 0x1951E0u;
    SET_GPR_U32(ctx, 31, 0x1951E8u);
    ctx->pc = 0x1951E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1951E0u;
            // 0x1951e4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x203AE8u;
    if (runtime->hasFunction(0x203AE8u)) {
        auto targetFn = runtime->lookupFunction(0x203AE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1951E8u; }
        if (ctx->pc != 0x1951E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00203AE8_0x203ae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1951E8u; }
        if (ctx->pc != 0x1951E8u) { return; }
    }
    ctx->pc = 0x1951E8u;
    // 0x1951e8: 0xc0909c4  jal         func_242710
    ctx->pc = 0x1951E8u;
    SET_GPR_U32(ctx, 31, 0x1951F0u);
    ctx->pc = 0x1951ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1951E8u;
            // 0x1951ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242710u;
    if (runtime->hasFunction(0x242710u)) {
        auto targetFn = runtime->lookupFunction(0x242710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1951F0u; }
        if (ctx->pc != 0x1951F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242710_0x242720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1951F0u; }
        if (ctx->pc != 0x1951F0u) { return; }
    }
    ctx->pc = 0x1951F0u;
    // 0x1951f0: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x1951f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1951f4: 0x8e83cd58  lw          $v1, -0x32A8($s4)
    ctx->pc = 0x1951f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294954328)));
    // 0x1951f8: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1951f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x1951fc: 0xc0909c4  jal         func_242710
    ctx->pc = 0x1951FCu;
    SET_GPR_U32(ctx, 31, 0x195204u);
    ctx->pc = 0x195200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1951FCu;
            // 0x195200: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242710u;
    if (runtime->hasFunction(0x242710u)) {
        auto targetFn = runtime->lookupFunction(0x242710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195204u; }
        if (ctx->pc != 0x195204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242710_0x242720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195204u; }
        if (ctx->pc != 0x195204u) { return; }
    }
    ctx->pc = 0x195204u;
    // 0x195204: 0xd8410030  lqc2        $vf1, 0x30($v0)
    ctx->pc = 0x195204u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x195208: 0xdba20030  lqc2        $vf2, 0x30($sp)
    ctx->pc = 0x195208u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19520c: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x19520cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x195210: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x195210u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x195214: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x195214u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x195218: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x195218u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19521c: 0x8e420174  lw          $v0, 0x174($s2)
    ctx->pc = 0x19521cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
    // 0x195220: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x195220u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x195224: 0x4a0003bf  vwaitq
    ctx->pc = 0x195224u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x195228: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x195228u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x19522c: 0x4a0002ff  vnop
    ctx->pc = 0x19522cu;
    // NOP operation, no action needed for VU0
    // 0x195230: 0x4a0002ff  vnop
    ctx->pc = 0x195230u;
    // NOP operation, no action needed for VU0
    // 0x195234: 0x4be11b3c  vmove.xyzw  $vf1, $vf3
    ctx->pc = 0x195234u;
    ctx->vu0_vf[1] = ctx->vu0_vf[3];
    // 0x195238: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x195238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x19523c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19523Cu;
    {
        const bool branch_taken_0x19523c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x195240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19523Cu;
            // 0x195240: 0xfba10010  sqc2        $vf1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19523c) {
            ctx->pc = 0x195260u;
            goto label_195260;
        }
    }
    ctx->pc = 0x195244u;
    // 0x195244: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x195244u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x195248: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x195248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19524c: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x19524cu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x195250: 0xc080b8e  jal         func_202E38
    ctx->pc = 0x195250u;
    SET_GPR_U32(ctx, 31, 0x195258u);
    ctx->pc = 0x195254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195250u;
            // 0x195254: 0x24c6df60  addiu       $a2, $a2, -0x20A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x202E38u;
    if (runtime->hasFunction(0x202E38u)) {
        auto targetFn = runtime->lookupFunction(0x202E38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195258u; }
        if (ctx->pc != 0x195258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00202E38_0x202e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195258u; }
        if (ctx->pc != 0x195258u) { return; }
    }
    ctx->pc = 0x195258u;
    // 0x195258: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x195258u;
    {
        const bool branch_taken_0x195258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19525Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195258u;
            // 0x19525c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195258) {
            ctx->pc = 0x195278u;
            goto label_195278;
        }
    }
    ctx->pc = 0x195260u;
label_195260:
    // 0x195260: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x195260u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x195264: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x195264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195268: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x195268u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19526c: 0xc080b8e  jal         func_202E38
    ctx->pc = 0x19526Cu;
    SET_GPR_U32(ctx, 31, 0x195274u);
    ctx->pc = 0x195270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19526Cu;
            // 0x195270: 0x24c6df68  addiu       $a2, $a2, -0x2098 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x202E38u;
    if (runtime->hasFunction(0x202E38u)) {
        auto targetFn = runtime->lookupFunction(0x202E38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195274u; }
        if (ctx->pc != 0x195274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00202E38_0x202e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195274u; }
        if (ctx->pc != 0x195274u) { return; }
    }
    ctx->pc = 0x195274u;
    // 0x195274: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x195274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_195278:
    // 0x195278: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x195278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19527c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x19527cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x195280: 0x8442c910  lh          $v0, -0x36F0($v0)
    ctx->pc = 0x195280u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294953232)));
    // 0x195284: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x195284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195288: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x195288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19528c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19528cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x195290: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x195290u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[1];
    // 0x195294: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x195294u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x195298: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x195298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_19529c:
    // 0x19529c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x19529cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1952a0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1952a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1952a4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1952a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1952a8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1952a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1952ac: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1952acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1952b0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1952b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1952b4: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x1952b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1952b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1952B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1952BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1952B8u;
            // 0x1952bc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1950B0u: goto label_1950b0;
            case 0x1950D0u: goto label_1950d0;
            case 0x1950FCu: goto label_1950fc;
            case 0x195164u: goto label_195164;
            case 0x195168u: goto label_195168;
            case 0x19518Cu: goto label_19518c;
            case 0x195260u: goto label_195260;
            case 0x195278u: goto label_195278;
            case 0x19529Cu: goto label_19529c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1952C0u;
}
