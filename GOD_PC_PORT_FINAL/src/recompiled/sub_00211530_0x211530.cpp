#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00211530
// Address: 0x211530 - 0x211c10
void sub_00211530_0x211530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211530_0x211530");
#endif

    ctx->pc = 0x211530u;

label_211530:
    // 0x211530: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x211530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x211534: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x211534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
    // 0x211538: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x211538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21153c: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x21153cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x211540: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x211540u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211544: 0xe7b40160  swc1        $f20, 0x160($sp)
    ctx->pc = 0x211544u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x211548: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x211548u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21154c: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x21154cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
    // 0x211550: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x211550u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x211554: 0xc06d16c  jal         func_1B45B0
    ctx->pc = 0x211554u;
    SET_GPR_U32(ctx, 31, 0x21155Cu);
    ctx->pc = 0x211558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211554u;
            // 0x211558: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B45B0u;
    if (runtime->hasFunction(0x1B45B0u)) {
        auto targetFn = runtime->lookupFunction(0x1B45B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21155Cu; }
        if (ctx->pc != 0x21155Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B45B0_0x1b45b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21155Cu; }
        if (ctx->pc != 0x21155Cu) { return; }
    }
    ctx->pc = 0x21155Cu;
    // 0x21155c: 0x504000a1  beql        $v0, $zero, . + 4 + (0xA1 << 2)
    ctx->pc = 0x21155Cu;
    {
        const bool branch_taken_0x21155c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21155c) {
            ctx->pc = 0x211560u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21155Cu;
            // 0x211560: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2117E4u;
            goto label_2117e4;
        }
    }
    ctx->pc = 0x211564u;
    // 0x211564: 0x86030264  lh          $v1, 0x264($s0)
    ctx->pc = 0x211564u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x211568: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x211568u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x21156c: 0x1040009c  beqz        $v0, . + 4 + (0x9C << 2)
    ctx->pc = 0x21156Cu;
    {
        const bool branch_taken_0x21156c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21156Cu;
            // 0x211570: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21156c) {
            ctx->pc = 0x2117E0u;
            goto label_2117e0;
        }
    }
    ctx->pc = 0x211574u;
    // 0x211574: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x211574u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x211578: 0x24427d70  addiu       $v0, $v0, 0x7D70
    ctx->pc = 0x211578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32112));
    // 0x21157c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21157cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x211580: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x211580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x211584: 0x400008  jr          $v0
    ctx->pc = 0x211584u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21158Cu: goto label_21158c;
            case 0x211740u: goto label_211740;
            case 0x21176Cu: goto label_21176c;
            case 0x2117BCu: goto label_2117bc;
            case 0x2117E0u: goto label_2117e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21158Cu;
label_21158c:
    // 0x21158c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x21158cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211590: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x211590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211594: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x211594u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x211598: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x211598u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x21159c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x21159cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2115a0: 0x70461b89  pcpyld      $v1, $v0, $a2
    ctx->pc = 0x2115a0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x2115a4: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x2115a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2115a8: 0x70e81389  pcpyld      $v0, $a3, $t0
    ctx->pc = 0x2115a8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x2115ac: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x2115acu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x2115b0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2115b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x2115b4: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x2115b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x2115b8: 0x7e020110  sq          $v0, 0x110($s0)
    ctx->pc = 0x2115b8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 272), GPR_VEC(ctx, 2));
    // 0x2115bc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2115bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2115c0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2115c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2115c4: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x2115c4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2115c8: 0x4a811080  vaddx.y     $vf2, $vf2, $vf1x
    ctx->pc = 0x2115c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2115cc: 0xda010130  lqc2        $vf1, 0x130($s0)
    ctx->pc = 0x2115ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x2115d0: 0x4be11099  vmuly.xyzw  $vf2, $vf2, $vf1y
    ctx->pc = 0x2115d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2115d4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2115d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2115d8: 0x4be208ac  vsub.xyzw   $vf2, $vf1, $vf2
    ctx->pc = 0x2115d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2115dc: 0x97a2000c  lhu         $v0, 0xC($sp)
    ctx->pc = 0x2115dcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2115e0: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2115e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2115e4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2115e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2115e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2115e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2115ec: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2115ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2115f0: 0x3c0146ff  lui         $at, 0x46FF
    ctx->pc = 0x2115f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18175 << 16));
    // 0x2115f4: 0x3421fe00  ori         $at, $at, 0xFE00
    ctx->pc = 0x2115f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65024);
    // 0x2115f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2115f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2115fc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2115fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x211600: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x211600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x211604: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x211604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x211608: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x211608u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x21160c: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x21160cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x211610: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x211610u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x211614: 0xc060ee2  jal         func_183B88
    ctx->pc = 0x211614u;
    SET_GPR_U32(ctx, 31, 0x21161Cu);
    ctx->pc = 0x211618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211614u;
            // 0x211618: 0xfba20120  sqc2        $vf2, 0x120($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183B88u;
    if (runtime->hasFunction(0x183B88u)) {
        auto targetFn = runtime->lookupFunction(0x183B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21161Cu; }
        if (ctx->pc != 0x21161Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183B88_0x183b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21161Cu; }
        if (ctx->pc != 0x21161Cu) { return; }
    }
    ctx->pc = 0x21161Cu;
    // 0x21161c: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x21161cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x211620: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x211620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x211624: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x211624u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211628: 0x70c51389  pcpyld      $v0, $a2, $a1
    ctx->pc = 0x211628u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 5)));
    // 0x21162c: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x21162cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x211630: 0x70c73389  pcpyld      $a2, $a2, $a3
    ctx->pc = 0x211630u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
    // 0x211634: 0x70c234c8  ppacw       $a2, $a2, $v0
    ctx->pc = 0x211634u;
    SET_GPR_VEC(ctx, 6, PS2_PPACW(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x211638: 0x7fa60060  sq          $a2, 0x60($sp)
    ctx->pc = 0x211638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 6));
    // 0x21163c: 0x7fa600f0  sq          $a2, 0xF0($sp)
    ctx->pc = 0x21163cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 6));
    // 0x211640: 0x7fa60020  sq          $a2, 0x20($sp)
    ctx->pc = 0x211640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 6));
    // 0x211644: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x211644u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x211648: 0x24070000  addiu       $a3, $zero, 0x0
    ctx->pc = 0x211648u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x21164c: 0x70871389  pcpyld      $v0, $a0, $a3
    ctx->pc = 0x21164cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x211650: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x211650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x211654: 0x24070000  addiu       $a3, $zero, 0x0
    ctx->pc = 0x211654u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x211658: 0x70871b89  pcpyld      $v1, $a0, $a3
    ctx->pc = 0x211658u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x21165c: 0x70621cc8  ppacw       $v1, $v1, $v0
    ctx->pc = 0x21165cu;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x211660: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x211660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x211664: 0x7fa30100  sq          $v1, 0x100($sp)
    ctx->pc = 0x211664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 3));
    // 0x211668: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x211668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x21166c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21166cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211670: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x211670u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x211674: 0x712a2389  pcpyld      $a0, $t1, $t2
    ctx->pc = 0x211674u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x211678: 0x7e0300a0  sq          $v1, 0xA0($s0)
    ctx->pc = 0x211678u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 160), GPR_VEC(ctx, 3));
    // 0x21167c: 0x71251389  pcpyld      $v0, $t1, $a1
    ctx->pc = 0x21167cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 5)));
    // 0x211680: 0x704414c8  ppacw       $v0, $v0, $a0
    ctx->pc = 0x211680u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x211684: 0x3c09002a  lui         $t1, 0x2A
    ctx->pc = 0x211684u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)42 << 16));
    // 0x211688: 0xdba20120  lqc2        $vf2, 0x120($sp)
    ctx->pc = 0x211688u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x21168c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x21168cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211690: 0x7e0200b0  sq          $v0, 0xB0($s0)
    ctx->pc = 0x211690u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 176), GPR_VEC(ctx, 2));
    // 0x211694: 0x26280020  addiu       $t0, $s1, 0x20
    ctx->pc = 0x211694u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x211698: 0xdd27bdf8  ld          $a3, -0x4208($t1)
    ctx->pc = 0x211698u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 9), 4294950392)));
    // 0x21169c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21169cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2116a0: 0xfa0200c0  sqc2        $vf2, 0xC0($s0)
    ctx->pc = 0x2116a0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 192), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2116a4: 0x24850050  addiu       $a1, $a0, 0x50
    ctx->pc = 0x2116a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x2116a8: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2116a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x2116ac: 0x64e70001  daddiu      $a3, $a3, 0x1
    ctx->pc = 0x2116acu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)1);
    // 0x2116b0: 0xfba20050  sqc2        $vf2, 0x50($sp)
    ctx->pc = 0x2116b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2116b4: 0x7e060050  sq          $a2, 0x50($s0)
    ctx->pc = 0x2116b4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), GPR_VEC(ctx, 6));
    // 0x2116b8: 0x7e030060  sq          $v1, 0x60($s0)
    ctx->pc = 0x2116b8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 96), GPR_VEC(ctx, 3));
    // 0x2116bc: 0x7e020070  sq          $v0, 0x70($s0)
    ctx->pc = 0x2116bcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), GPR_VEC(ctx, 2));
    // 0x2116c0: 0xfa020080  sqc2        $vf2, 0x80($s0)
    ctx->pc = 0x2116c0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 128), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2116c4: 0x7e060090  sq          $a2, 0x90($s0)
    ctx->pc = 0x2116c4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 6));
    // 0x2116c8: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x2116c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x2116cc: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x2116ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x2116d0: 0x7e260020  sq          $a2, 0x20($s1)
    ctx->pc = 0x2116d0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 6));
    // 0x2116d4: 0x86230060  lh          $v1, 0x60($s1)
    ctx->pc = 0x2116d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x2116d8: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x2116d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2116dc: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x2116dcu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2116e0: 0x7e220030  sq          $v0, 0x30($s1)
    ctx->pc = 0x2116e0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 2));
    // 0x2116e4: 0xe3500a  movz        $t2, $a3, $v1
    ctx->pc = 0x2116e4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 7));
    // 0x2116e8: 0x140182d  daddu       $v1, $t2, $zero
    ctx->pc = 0x2116e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2116ec: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x2116ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2116f0: 0x7e220040  sq          $v0, 0x40($s1)
    ctx->pc = 0x2116f0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 2));
    // 0x2116f4: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x2116f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2116f8: 0x7e220050  sq          $v0, 0x50($s1)
    ctx->pc = 0x2116f8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), GPR_VEC(ctx, 2));
    // 0x2116fc: 0xfd27bdf8  sd          $a3, -0x4208($t1)
    ctx->pc = 0x2116fcu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 4294950392), GPR_U64(ctx, 7));
    // 0x211700: 0xfe230068  sd          $v1, 0x68($s1)
    ctx->pc = 0x211700u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 104), GPR_U64(ctx, 3));
    // 0x211704: 0x7fa60090  sq          $a2, 0x90($sp)
    ctx->pc = 0x211704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 6));
    // 0x211708: 0x79070010  lq          $a3, 0x10($t0)
    ctx->pc = 0x211708u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x21170c: 0x7fa700a0  sq          $a3, 0xA0($sp)
    ctx->pc = 0x21170cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 7));
    // 0x211710: 0x79020020  lq          $v0, 0x20($t0)
    ctx->pc = 0x211710u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x211714: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x211714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x211718: 0x79030030  lq          $v1, 0x30($t0)
    ctx->pc = 0x211718u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x21171c: 0x7e060010  sq          $a2, 0x10($s0)
    ctx->pc = 0x21171cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 6));
    // 0x211720: 0x7e070020  sq          $a3, 0x20($s0)
    ctx->pc = 0x211720u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 7));
    // 0x211724: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x211724u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
    // 0x211728: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x211728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
    // 0x21172c: 0xc077f80  jal         func_1DFE00
    ctx->pc = 0x21172Cu;
    SET_GPR_U32(ctx, 31, 0x211734u);
    ctx->pc = 0x211730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21172Cu;
            // 0x211730: 0x7e030040  sq          $v1, 0x40($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFE00u;
    if (runtime->hasFunction(0x1DFE00u)) {
        auto targetFn = runtime->lookupFunction(0x1DFE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211734u; }
        if (ctx->pc != 0x211734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1dfe00_0x1dfe58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211734u; }
        if (ctx->pc != 0x211734u) { return; }
    }
    ctx->pc = 0x211734u;
    // 0x211734: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x211734u;
    {
        const bool branch_taken_0x211734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211734u;
            // 0x211738: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211734) {
            ctx->pc = 0x2117E4u;
            goto label_2117e4;
        }
    }
    ctx->pc = 0x21173Cu;
    // 0x21173c: 0x0  nop
    ctx->pc = 0x21173cu;
    // NOP
label_211740:
    // 0x211740: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x211740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211744: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x211744u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x211748: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x211748u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21174c: 0x0  nop
    ctx->pc = 0x21174cu;
    // NOP
    // 0x211750: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x211750u;
    {
        const bool branch_taken_0x211750 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x211754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211750u;
            // 0x211754: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211750) {
            ctx->pc = 0x211760u;
            goto label_211760;
        }
    }
    ctx->pc = 0x211758u;
    // 0x211758: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x211758u;
    {
        const bool branch_taken_0x211758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21175Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211758u;
            // 0x21175c: 0x8e2200f4  lw          $v0, 0xF4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211758) {
            ctx->pc = 0x211790u;
            goto label_211790;
        }
    }
    ctx->pc = 0x211760u;
label_211760:
    // 0x211760: 0x8e04026c  lw          $a0, 0x26C($s0)
    ctx->pc = 0x211760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
    // 0x211764: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x211764u;
    {
        const bool branch_taken_0x211764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211764u;
            // 0x211768: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x211764) {
            ctx->pc = 0x2117A0u;
            goto label_2117a0;
        }
    }
    ctx->pc = 0x21176Cu;
label_21176c:
    // 0x21176c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x21176cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211770: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x211770u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x211774: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x211774u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x211778: 0x0  nop
    ctx->pc = 0x211778u;
    // NOP
    // 0x21177c: 0x45020019  bc1fl       . + 4 + (0x19 << 2)
    ctx->pc = 0x21177Cu;
    {
        const bool branch_taken_0x21177c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21177c) {
            ctx->pc = 0x211780u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21177Cu;
            // 0x211780: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2117E4u;
            goto label_2117e4;
        }
    }
    ctx->pc = 0x211784u;
    // 0x211784: 0x8e2200f4  lw          $v0, 0xF4($s1)
    ctx->pc = 0x211784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x211788: 0x3c03fffc  lui         $v1, 0xFFFC
    ctx->pc = 0x211788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65532 << 16));
    // 0x21178c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x21178cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_211790:
    // 0x211790: 0x8e04026c  lw          $a0, 0x26C($s0)
    ctx->pc = 0x211790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
    // 0x211794: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x211794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x211798: 0xc60c0274  lwc1        $f12, 0x274($s0)
    ctx->pc = 0x211798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21179c: 0xae2200f4  sw          $v0, 0xF4($s1)
    ctx->pc = 0x21179cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
label_2117a0:
    // 0x2117a0: 0xc04015e  jal         func_100578
    ctx->pc = 0x2117A0u;
    SET_GPR_U32(ctx, 31, 0x2117A8u);
    ctx->pc = 0x100578u;
    if (runtime->hasFunction(0x100578u)) {
        auto targetFn = runtime->lookupFunction(0x100578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2117A8u; }
        if (ctx->pc != 0x2117A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100578_0x100578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2117A8u; }
        if (ctx->pc != 0x2117A8u) { return; }
    }
    ctx->pc = 0x2117A8u;
    // 0x2117a8: 0x8e04026c  lw          $a0, 0x26C($s0)
    ctx->pc = 0x2117a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
    // 0x2117ac: 0xc040622  jal         func_101888
    ctx->pc = 0x2117ACu;
    SET_GPR_U32(ctx, 31, 0x2117B4u);
    ctx->pc = 0x2117B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2117ACu;
            // 0x2117b0: 0xe494003c  swc1        $f20, 0x3C($a0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x101888u;
    if (runtime->hasFunction(0x101888u)) {
        auto targetFn = runtime->lookupFunction(0x101888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2117B4u; }
        if (ctx->pc != 0x2117B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101888_0x101888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2117B4u; }
        if (ctx->pc != 0x2117B4u) { return; }
    }
    ctx->pc = 0x2117B4u;
    // 0x2117b4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2117B4u;
    {
        const bool branch_taken_0x2117b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2117B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2117B4u;
            // 0x2117b8: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2117b4) {
            ctx->pc = 0x2117E4u;
            goto label_2117e4;
        }
    }
    ctx->pc = 0x2117BCu;
label_2117bc:
    // 0x2117bc: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2117bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2117c0: 0x8e04026c  lw          $a0, 0x26C($s0)
    ctx->pc = 0x2117c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
    // 0x2117c4: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x2117c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2117c8: 0xc04015e  jal         func_100578
    ctx->pc = 0x2117C8u;
    SET_GPR_U32(ctx, 31, 0x2117D0u);
    ctx->pc = 0x2117CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2117C8u;
            // 0x2117cc: 0xe6000278  swc1        $f0, 0x278($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 632), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x100578u;
    if (runtime->hasFunction(0x100578u)) {
        auto targetFn = runtime->lookupFunction(0x100578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2117D0u; }
        if (ctx->pc != 0x2117D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100578_0x100578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2117D0u; }
        if (ctx->pc != 0x2117D0u) { return; }
    }
    ctx->pc = 0x2117D0u;
    // 0x2117d0: 0x8e02026c  lw          $v0, 0x26C($s0)
    ctx->pc = 0x2117d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
    // 0x2117d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2117d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2117d8: 0xc040622  jal         func_101888
    ctx->pc = 0x2117D8u;
    SET_GPR_U32(ctx, 31, 0x2117E0u);
    ctx->pc = 0x2117DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2117D8u;
            // 0x2117dc: 0xac40003c  sw          $zero, 0x3C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101888u;
    if (runtime->hasFunction(0x101888u)) {
        auto targetFn = runtime->lookupFunction(0x101888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2117E0u; }
        if (ctx->pc != 0x2117E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101888_0x101888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2117E0u; }
        if (ctx->pc != 0x2117E0u) { return; }
    }
    ctx->pc = 0x2117E0u;
label_2117e0:
    // 0x2117e0: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x2117e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_2117e4:
    // 0x2117e4: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x2117e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2117e8: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x2117e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2117ec: 0xc7b40160  lwc1        $f20, 0x160($sp)
    ctx->pc = 0x2117ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2117f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2117F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2117F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2117F0u;
            // 0x2117f4: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x211530u: goto label_211530;
            case 0x21158Cu: goto label_21158c;
            case 0x211740u: goto label_211740;
            case 0x211760u: goto label_211760;
            case 0x21176Cu: goto label_21176c;
            case 0x211790u: goto label_211790;
            case 0x2117A0u: goto label_2117a0;
            case 0x2117BCu: goto label_2117bc;
            case 0x2117E0u: goto label_2117e0;
            case 0x2117E4u: goto label_2117e4;
            case 0x211840u: goto label_211840;
            case 0x211870u: goto label_211870;
            case 0x211874u: goto label_211874;
            case 0x211894u: goto label_211894;
            case 0x211898u: goto label_211898;
            case 0x2118C4u: goto label_2118c4;
            case 0x2118ECu: goto label_2118ec;
            case 0x211914u: goto label_211914;
            case 0x21193Cu: goto label_21193c;
            case 0x21194Cu: goto label_21194c;
            case 0x211968u: goto label_211968;
            case 0x211980u: goto label_211980;
            case 0x2119C0u: goto label_2119c0;
            case 0x2119DCu: goto label_2119dc;
            case 0x211A90u: goto label_211a90;
            case 0x211A94u: goto label_211a94;
            case 0x211AB8u: goto label_211ab8;
            case 0x211AE8u: goto label_211ae8;
            case 0x211B38u: goto label_211b38;
            case 0x211B3Cu: goto label_211b3c;
            case 0x211BA0u: goto label_211ba0;
            case 0x211BD4u: goto label_211bd4;
            case 0x211BDCu: goto label_211bdc;
            case 0x211BE0u: goto label_211be0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2117F8u;
    // 0x2117f8: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x2117f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x2117fc: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x2117fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
    // 0x211800: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x211800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
    // 0x211804: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x211804u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211808: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x211808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x21180c: 0x3c13002a  lui         $s3, 0x2A
    ctx->pc = 0x21180cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)42 << 16));
    // 0x211810: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x211810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x211814: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x211814u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x211818: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x211818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
    // 0x21181c: 0x96510298  lhu         $s1, 0x298($s2)
    ctx->pc = 0x21181cu;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 664)));
    // 0x211820: 0x32220540  andi        $v0, $s1, 0x540
    ctx->pc = 0x211820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1344);
    // 0x211824: 0xa6420298  sh          $v0, 0x298($s2)
    ctx->pc = 0x211824u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 664), (uint16_t)GPR_U32(ctx, 2));
    // 0x211828: 0x9262e446  lbu         $v0, -0x1BBA($s3)
    ctx->pc = 0x211828u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294960198)));
    // 0x21182c: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x21182Cu;
    {
        const bool branch_taken_0x21182c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21182c) {
            ctx->pc = 0x211830u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21182Cu;
            // 0x211830: 0x9242029a  lbu         $v0, 0x29A($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 666)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x211874u;
            goto label_211874;
        }
    }
    ctx->pc = 0x211834u;
    // 0x211834: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x211834u;
    {
        const bool branch_taken_0x211834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211834u;
            // 0x211838: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211834) {
            ctx->pc = 0x211870u;
            goto label_211870;
        }
    }
    ctx->pc = 0x21183Cu;
    // 0x21183c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21183cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_211840:
    // 0x211840: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x211840u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x211844: 0x2442e448  addiu       $v0, $v0, -0x1BB8
    ctx->pc = 0x211844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960200));
    // 0x211848: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x211848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21184c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21184cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x211850: 0xc07814c  jal         func_1E0530
    ctx->pc = 0x211850u;
    SET_GPR_U32(ctx, 31, 0x211858u);
    ctx->pc = 0x211854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211850u;
            // 0x211854: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0530u;
    if (runtime->hasFunction(0x1E0530u)) {
        auto targetFn = runtime->lookupFunction(0x1E0530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211858u; }
        if (ctx->pc != 0x211858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0530_0x1e0530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211858u; }
        if (ctx->pc != 0x211858u) { return; }
    }
    ctx->pc = 0x211858u;
    // 0x211858: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x211858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x21185c: 0x9262e446  lbu         $v0, -0x1BBA($s3)
    ctx->pc = 0x21185cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294960198)));
    // 0x211860: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x211860u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x211864: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x211864u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x211868: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x211868u;
    {
        const bool branch_taken_0x211868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21186Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211868u;
            // 0x21186c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211868) {
            ctx->pc = 0x211840u;
            runtime->cooperativeGuestYield();
            goto label_211840;
        }
    }
    ctx->pc = 0x211870u;
label_211870:
    // 0x211870: 0x9242029a  lbu         $v0, 0x29A($s2)
    ctx->pc = 0x211870u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 666)));
label_211874:
    // 0x211874: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x211874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x211878: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x211878u;
    {
        const bool branch_taken_0x211878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x211878) {
            ctx->pc = 0x21187Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x211878u;
            // 0x21187c: 0x86430264  lh          $v1, 0x264($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 612)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x211898u;
            goto label_211898;
        }
    }
    ctx->pc = 0x211880u;
    // 0x211880: 0x9242029b  lbu         $v0, 0x29B($s2)
    ctx->pc = 0x211880u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 667)));
    // 0x211884: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x211884u;
    {
        const bool branch_taken_0x211884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x211884) {
            ctx->pc = 0x211888u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x211884u;
            // 0x211888: 0x86430264  lh          $v1, 0x264($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 612)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x211898u;
            goto label_211898;
        }
    }
    ctx->pc = 0x21188Cu;
    // 0x21188c: 0xc08454c  jal         func_211530
    ctx->pc = 0x21188Cu;
    SET_GPR_U32(ctx, 31, 0x211894u);
    ctx->pc = 0x211890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21188Cu;
            // 0x211890: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211530u;
    runtime->cooperativeGuestYield();
    goto label_211530;
    ctx->pc = 0x211894u;
label_211894:
    // 0x211894: 0x86430264  lh          $v1, 0x264($s2)
    ctx->pc = 0x211894u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 612)));
label_211898:
    // 0x211898: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x211898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21189c: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21189Cu;
    {
        const bool branch_taken_0x21189c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2118A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21189Cu;
            // 0x2118a0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21189c) {
            ctx->pc = 0x2118C4u;
            goto label_2118c4;
        }
    }
    ctx->pc = 0x2118A4u;
    // 0x2118a4: 0x8e42026c  lw          $v0, 0x26C($s2)
    ctx->pc = 0x2118a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 620)));
    // 0x2118a8: 0x104000cc  beqz        $v0, . + 4 + (0xCC << 2)
    ctx->pc = 0x2118A8u;
    {
        const bool branch_taken_0x2118a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2118ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2118A8u;
            // 0x2118ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2118a8) {
            ctx->pc = 0x211BDCu;
            goto label_211bdc;
        }
    }
    ctx->pc = 0x2118B0u;
    // 0x2118b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2118b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2118b4: 0xc08477e  jal         func_211DF8
    ctx->pc = 0x2118B4u;
    SET_GPR_U32(ctx, 31, 0x2118BCu);
    ctx->pc = 0x2118B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2118B4u;
            // 0x2118b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211DF8u;
    if (runtime->hasFunction(0x211DF8u)) {
        auto targetFn = runtime->lookupFunction(0x211DF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2118BCu; }
        if (ctx->pc != 0x2118BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211DF8_0x211df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2118BCu; }
        if (ctx->pc != 0x2118BCu) { return; }
    }
    ctx->pc = 0x2118BCu;
    // 0x2118bc: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x2118BCu;
    {
        const bool branch_taken_0x2118bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2118C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2118BCu;
            // 0x2118c0: 0x9243029a  lbu         $v1, 0x29A($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 666)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2118bc) {
            ctx->pc = 0x211BE0u;
            goto label_211be0;
        }
    }
    ctx->pc = 0x2118C4u;
label_2118c4:
    // 0x2118c4: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2118C4u;
    {
        const bool branch_taken_0x2118c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2118C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2118C4u;
            // 0x2118c8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2118c4) {
            ctx->pc = 0x2118ECu;
            goto label_2118ec;
        }
    }
    ctx->pc = 0x2118CCu;
    // 0x2118cc: 0x8e42026c  lw          $v0, 0x26C($s2)
    ctx->pc = 0x2118ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 620)));
    // 0x2118d0: 0x104000c2  beqz        $v0, . + 4 + (0xC2 << 2)
    ctx->pc = 0x2118D0u;
    {
        const bool branch_taken_0x2118d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2118D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2118D0u;
            // 0x2118d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2118d0) {
            ctx->pc = 0x211BDCu;
            goto label_211bdc;
        }
    }
    ctx->pc = 0x2118D8u;
    // 0x2118d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2118d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2118dc: 0xc08477e  jal         func_211DF8
    ctx->pc = 0x2118DCu;
    SET_GPR_U32(ctx, 31, 0x2118E4u);
    ctx->pc = 0x2118E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2118DCu;
            // 0x2118e0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211DF8u;
    if (runtime->hasFunction(0x211DF8u)) {
        auto targetFn = runtime->lookupFunction(0x211DF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2118E4u; }
        if (ctx->pc != 0x2118E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211DF8_0x211df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2118E4u; }
        if (ctx->pc != 0x2118E4u) { return; }
    }
    ctx->pc = 0x2118E4u;
    // 0x2118e4: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x2118E4u;
    {
        const bool branch_taken_0x2118e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2118E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2118E4u;
            // 0x2118e8: 0x9243029a  lbu         $v1, 0x29A($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 666)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2118e4) {
            ctx->pc = 0x211BE0u;
            goto label_211be0;
        }
    }
    ctx->pc = 0x2118ECu;
label_2118ec:
    // 0x2118ec: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2118ECu;
    {
        const bool branch_taken_0x2118ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2118F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2118ECu;
            // 0x2118f0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2118ec) {
            ctx->pc = 0x211914u;
            goto label_211914;
        }
    }
    ctx->pc = 0x2118F4u;
    // 0x2118f4: 0x8e42026c  lw          $v0, 0x26C($s2)
    ctx->pc = 0x2118f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 620)));
    // 0x2118f8: 0x104000b8  beqz        $v0, . + 4 + (0xB8 << 2)
    ctx->pc = 0x2118F8u;
    {
        const bool branch_taken_0x2118f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2118FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2118F8u;
            // 0x2118fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2118f8) {
            ctx->pc = 0x211BDCu;
            goto label_211bdc;
        }
    }
    ctx->pc = 0x211900u;
    // 0x211900: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x211900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211904: 0xc08477e  jal         func_211DF8
    ctx->pc = 0x211904u;
    SET_GPR_U32(ctx, 31, 0x21190Cu);
    ctx->pc = 0x211908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211904u;
            // 0x211908: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211DF8u;
    if (runtime->hasFunction(0x211DF8u)) {
        auto targetFn = runtime->lookupFunction(0x211DF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21190Cu; }
        if (ctx->pc != 0x21190Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211DF8_0x211df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21190Cu; }
        if (ctx->pc != 0x21190Cu) { return; }
    }
    ctx->pc = 0x21190Cu;
    // 0x21190c: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x21190Cu;
    {
        const bool branch_taken_0x21190c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21190Cu;
            // 0x211910: 0x9243029a  lbu         $v1, 0x29A($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 666)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21190c) {
            ctx->pc = 0x211BE0u;
            goto label_211be0;
        }
    }
    ctx->pc = 0x211914u;
label_211914:
    // 0x211914: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x211914u;
    {
        const bool branch_taken_0x211914 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x211918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211914u;
            // 0x211918: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211914) {
            ctx->pc = 0x21193Cu;
            goto label_21193c;
        }
    }
    ctx->pc = 0x21191Cu;
    // 0x21191c: 0x8e42026c  lw          $v0, 0x26C($s2)
    ctx->pc = 0x21191cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 620)));
    // 0x211920: 0x104000ae  beqz        $v0, . + 4 + (0xAE << 2)
    ctx->pc = 0x211920u;
    {
        const bool branch_taken_0x211920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211920u;
            // 0x211924: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211920) {
            ctx->pc = 0x211BDCu;
            goto label_211bdc;
        }
    }
    ctx->pc = 0x211928u;
    // 0x211928: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x211928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21192c: 0xc08477e  jal         func_211DF8
    ctx->pc = 0x21192Cu;
    SET_GPR_U32(ctx, 31, 0x211934u);
    ctx->pc = 0x211930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21192Cu;
            // 0x211930: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211DF8u;
    if (runtime->hasFunction(0x211DF8u)) {
        auto targetFn = runtime->lookupFunction(0x211DF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211934u; }
        if (ctx->pc != 0x211934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211DF8_0x211df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211934u; }
        if (ctx->pc != 0x211934u) { return; }
    }
    ctx->pc = 0x211934u;
    // 0x211934: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x211934u;
    {
        const bool branch_taken_0x211934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211934u;
            // 0x211938: 0x9243029a  lbu         $v1, 0x29A($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 666)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211934) {
            ctx->pc = 0x211BE0u;
            goto label_211be0;
        }
    }
    ctx->pc = 0x21193Cu;
label_21193c:
    // 0x21193c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21193Cu;
    {
        const bool branch_taken_0x21193c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x211940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21193Cu;
            // 0x211940: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21193c) {
            ctx->pc = 0x21194Cu;
            goto label_21194c;
        }
    }
    ctx->pc = 0x211944u;
    // 0x211944: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x211944u;
    {
        const bool branch_taken_0x211944 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x211944) {
            ctx->pc = 0x211968u;
            goto label_211968;
        }
    }
    ctx->pc = 0x21194Cu;
label_21194c:
    // 0x21194c: 0x8e42026c  lw          $v0, 0x26C($s2)
    ctx->pc = 0x21194cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 620)));
    // 0x211950: 0x504000a3  beql        $v0, $zero, . + 4 + (0xA3 << 2)
    ctx->pc = 0x211950u;
    {
        const bool branch_taken_0x211950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x211950) {
            ctx->pc = 0x211954u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x211950u;
            // 0x211954: 0x9243029a  lbu         $v1, 0x29A($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 666)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x211BE0u;
            goto label_211be0;
        }
    }
    ctx->pc = 0x211958u;
    // 0x211958: 0xc084704  jal         func_211C10
    ctx->pc = 0x211958u;
    SET_GPR_U32(ctx, 31, 0x211960u);
    ctx->pc = 0x21195Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211958u;
            // 0x21195c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211C10u;
    if (runtime->hasFunction(0x211C10u)) {
        auto targetFn = runtime->lookupFunction(0x211C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211960u; }
        if (ctx->pc != 0x211960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211C10_0x211c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211960u; }
        if (ctx->pc != 0x211960u) { return; }
    }
    ctx->pc = 0x211960u;
    // 0x211960: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x211960u;
    {
        const bool branch_taken_0x211960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211960u;
            // 0x211964: 0x9243029a  lbu         $v1, 0x29A($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 666)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211960) {
            ctx->pc = 0x211BE0u;
            goto label_211be0;
        }
    }
    ctx->pc = 0x211968u;
label_211968:
    // 0x211968: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x211968u;
    {
        const bool branch_taken_0x211968 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21196Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211968u;
            // 0x21196c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211968) {
            ctx->pc = 0x211980u;
            goto label_211980;
        }
    }
    ctx->pc = 0x211970u;
    // 0x211970: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x211970u;
    {
        const bool branch_taken_0x211970 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x211974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211970u;
            // 0x211974: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211970) {
            ctx->pc = 0x211980u;
            goto label_211980;
        }
    }
    ctx->pc = 0x211978u;
    // 0x211978: 0x54620099  bnel        $v1, $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x211978u;
    {
        const bool branch_taken_0x211978 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x211978) {
            ctx->pc = 0x21197Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x211978u;
            // 0x21197c: 0x9243029a  lbu         $v1, 0x29A($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 666)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x211BE0u;
            goto label_211be0;
        }
    }
    ctx->pc = 0x211980u;
label_211980:
    // 0x211980: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x211980u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x211984: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x211984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x211988: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x211988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21198c: 0xc0795a4  jal         func_1E5690
    ctx->pc = 0x21198Cu;
    SET_GPR_U32(ctx, 31, 0x211994u);
    ctx->pc = 0x211990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21198Cu;
            // 0x211990: 0x7ba500e0  lq          $a1, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5690u;
    if (runtime->hasFunction(0x1E5690u)) {
        auto targetFn = runtime->lookupFunction(0x1E5690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211994u; }
        if (ctx->pc != 0x211994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E5690_0x1e5690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211994u; }
        if (ctx->pc != 0x211994u) { return; }
    }
    ctx->pc = 0x211994u;
    // 0x211994: 0x8e420174  lw          $v0, 0x174($s2)
    ctx->pc = 0x211994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
    // 0x211998: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x211998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x21199c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x21199Cu;
    {
        const bool branch_taken_0x21199c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21199c) {
            ctx->pc = 0x2119A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21199Cu;
            // 0x2119a0: 0xafa000c0  sw          $zero, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2119C0u;
            goto label_2119c0;
        }
    }
    ctx->pc = 0x2119A4u;
    // 0x2119a4: 0xc084382  jal         func_210E08
    ctx->pc = 0x2119A4u;
    SET_GPR_U32(ctx, 31, 0x2119ACu);
    ctx->pc = 0x2119A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2119A4u;
            // 0x2119a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x210E08u;
    if (runtime->hasFunction(0x210E08u)) {
        auto targetFn = runtime->lookupFunction(0x210E08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2119ACu; }
        if (ctx->pc != 0x2119ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00210E08_0x210e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2119ACu; }
        if (ctx->pc != 0x2119ACu) { return; }
    }
    ctx->pc = 0x2119ACu;
    // 0x2119ac: 0x9243029a  lbu         $v1, 0x29A($s2)
    ctx->pc = 0x2119acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 666)));
    // 0x2119b0: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x2119b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x2119b4: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2119b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2119b8: 0xa243029a  sb          $v1, 0x29A($s2)
    ctx->pc = 0x2119b8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 666), (uint8_t)GPR_U32(ctx, 3));
    // 0x2119bc: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x2119bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_2119c0:
    // 0x2119c0: 0x8e430174  lw          $v1, 0x174($s2)
    ctx->pc = 0x2119c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
    // 0x2119c4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2119c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2119c8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2119C8u;
    {
        const bool branch_taken_0x2119c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2119CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2119C8u;
            // 0x2119cc: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2119c8) {
            ctx->pc = 0x2119DCu;
            goto label_2119dc;
        }
    }
    ctx->pc = 0x2119D0u;
    // 0x2119d0: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2119d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2119d4: 0x5040002f  beql        $v0, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x2119D4u;
    {
        const bool branch_taken_0x2119d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2119d4) {
            ctx->pc = 0x2119D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2119D4u;
            // 0x2119d8: 0x8e420174  lw          $v0, 0x174($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x211A94u;
            goto label_211a94;
        }
    }
    ctx->pc = 0x2119DCu;
label_2119dc:
    // 0x2119dc: 0x8e420234  lw          $v0, 0x234($s2)
    ctx->pc = 0x2119dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 564)));
    // 0x2119e0: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2119E0u;
    {
        const bool branch_taken_0x2119e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2119E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2119E0u;
            // 0x2119e4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2119e0) {
            ctx->pc = 0x211A90u;
            goto label_211a90;
        }
    }
    ctx->pc = 0x2119E8u;
    // 0x2119e8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2119e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2119ec: 0xc454c658  lwc1        $f20, -0x39A8($v0)
    ctx->pc = 0x2119ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2119f0: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x2119f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
    // 0x2119f4: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x2119f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x2119f8: 0x40f809  jalr        $v0
    ctx->pc = 0x2119F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x211A00u);
        ctx->pc = 0x2119FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2119F8u;
            // 0x2119fc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x211A00u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x211530u: goto label_211530;
            case 0x21158Cu: goto label_21158c;
            case 0x211740u: goto label_211740;
            case 0x211760u: goto label_211760;
            case 0x21176Cu: goto label_21176c;
            case 0x211790u: goto label_211790;
            case 0x2117A0u: goto label_2117a0;
            case 0x2117BCu: goto label_2117bc;
            case 0x2117E0u: goto label_2117e0;
            case 0x2117E4u: goto label_2117e4;
            case 0x211840u: goto label_211840;
            case 0x211870u: goto label_211870;
            case 0x211874u: goto label_211874;
            case 0x211894u: goto label_211894;
            case 0x211898u: goto label_211898;
            case 0x2118C4u: goto label_2118c4;
            case 0x2118ECu: goto label_2118ec;
            case 0x211914u: goto label_211914;
            case 0x21193Cu: goto label_21193c;
            case 0x21194Cu: goto label_21194c;
            case 0x211968u: goto label_211968;
            case 0x211980u: goto label_211980;
            case 0x2119C0u: goto label_2119c0;
            case 0x2119DCu: goto label_2119dc;
            case 0x211A90u: goto label_211a90;
            case 0x211A94u: goto label_211a94;
            case 0x211AB8u: goto label_211ab8;
            case 0x211AE8u: goto label_211ae8;
            case 0x211B38u: goto label_211b38;
            case 0x211B3Cu: goto label_211b3c;
            case 0x211BA0u: goto label_211ba0;
            case 0x211BD4u: goto label_211bd4;
            case 0x211BDCu: goto label_211bdc;
            case 0x211BE0u: goto label_211be0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x211A00u; }
            if (ctx->pc != 0x211A00u) { return; }
        }
        }
    }
    ctx->pc = 0x211A00u;
    // 0x211a00: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x211a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x211a04: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x211a04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x211a08: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x211a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x211a0c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x211a0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x211a10: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x211a10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x211a14: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x211a14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x211a18: 0x8c435e7c  lw          $v1, 0x5E7C($v0)
    ctx->pc = 0x211a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24188)));
    // 0x211a1c: 0xc641016c  lwc1        $f1, 0x16C($s2)
    ctx->pc = 0x211a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211a20: 0x8e420234  lw          $v0, 0x234($s2)
    ctx->pc = 0x211a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 564)));
    // 0x211a24: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x211a24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x211a28: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x211a28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x211a2c: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x211a2cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x211a30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x211a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x211a34: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x211a34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x211a38: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x211a38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x211a3c: 0x8c641184  lw          $a0, 0x1184($v1)
    ctx->pc = 0x211a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4484)));
    // 0x211a40: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x211A40u;
    SET_GPR_U32(ctx, 31, 0x211A48u);
    ctx->pc = 0x211A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211A40u;
            // 0x211a44: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211A48u; }
        if (ctx->pc != 0x211A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211A48u; }
        if (ctx->pc != 0x211A48u) { return; }
    }
    ctx->pc = 0x211A48u;
    // 0x211a48: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x211a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x211a4c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x211a4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x211a50: 0xc4410044  lwc1        $f1, 0x44($v0)
    ctx->pc = 0x211a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211a54: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x211a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211a58: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x211a58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x211a5c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x211a5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x211a60: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x211a60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x211a64: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x211a64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x211a68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x211a68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211a6c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x211a6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x211a70: 0x70461b89  pcpyld      $v1, $v0, $a2
    ctx->pc = 0x211a70u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x211a74: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x211a74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x211a78: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x211a78u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x211a7c: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x211a7cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x211a80: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x211a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x211a84: 0x700284a9  por         $s0, $zero, $v0
    ctx->pc = 0x211a84u;
    SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x211a88: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x211a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x211a8c: 0x0  nop
    ctx->pc = 0x211a8cu;
    // NOP
label_211a90:
    // 0x211a90: 0x8e420174  lw          $v0, 0x174($s2)
    ctx->pc = 0x211a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
label_211a94:
    // 0x211a94: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x211a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x211a98: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x211A98u;
    {
        const bool branch_taken_0x211a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x211A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211A98u;
            // 0x211a9c: 0x8fa200c0  lw          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211a98) {
            ctx->pc = 0x211AB8u;
            goto label_211ab8;
        }
    }
    ctx->pc = 0x211AA0u;
    // 0x211aa0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x211aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211aa4: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x211aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x211aa8: 0xc08439c  jal         func_210E70
    ctx->pc = 0x211AA8u;
    SET_GPR_U32(ctx, 31, 0x211AB0u);
    ctx->pc = 0x211AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211AA8u;
            // 0x211aac: 0x701034a9  por         $a2, $zero, $s0 (Delay Slot)
        SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x210E70u;
    if (runtime->hasFunction(0x210E70u)) {
        auto targetFn = runtime->lookupFunction(0x210E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211AB0u; }
        if (ctx->pc != 0x211AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00210E70_0x210e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211AB0u; }
        if (ctx->pc != 0x211AB0u) { return; }
    }
    ctx->pc = 0x211AB0u;
    // 0x211ab0: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x211ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x211ab4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x211ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_211ab8:
    // 0x211ab8: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x211AB8u;
    {
        const bool branch_taken_0x211ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x211ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211AB8u;
            // 0x211abc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211ab8) {
            ctx->pc = 0x211B3Cu;
            goto label_211b3c;
        }
    }
    ctx->pc = 0x211AC0u;
    // 0x211ac0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x211ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x211ac4: 0x8e430290  lw          $v1, 0x290($s2)
    ctx->pc = 0x211ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 656)));
    // 0x211ac8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x211ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x211acc: 0xae40024c  sw          $zero, 0x24C($s2)
    ctx->pc = 0x211accu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 588), GPR_U32(ctx, 0));
    // 0x211ad0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x211ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x211ad4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x211AD4u;
    {
        const bool branch_taken_0x211ad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x211AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211AD4u;
            // 0x211ad8: 0xae420250  sw          $v0, 0x250($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211ad4) {
            ctx->pc = 0x211AE8u;
            goto label_211ae8;
        }
    }
    ctx->pc = 0x211ADCu;
    // 0x211adc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x211adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211ae0: 0xc083e98  jal         func_20FA60
    ctx->pc = 0x211AE0u;
    SET_GPR_U32(ctx, 31, 0x211AE8u);
    ctx->pc = 0x211AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211AE0u;
            // 0x211ae4: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FA60u;
    if (runtime->hasFunction(0x20FA60u)) {
        auto targetFn = runtime->lookupFunction(0x20FA60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211AE8u; }
        if (ctx->pc != 0x211AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020FA60_0x20fa60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211AE8u; }
        if (ctx->pc != 0x211AE8u) { return; }
    }
    ctx->pc = 0x211AE8u;
label_211ae8:
    // 0x211ae8: 0x7ba500d0  lq          $a1, 0xD0($sp)
    ctx->pc = 0x211ae8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x211aec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x211aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211af0: 0xc08408a  jal         func_210228
    ctx->pc = 0x211AF0u;
    SET_GPR_U32(ctx, 31, 0x211AF8u);
    ctx->pc = 0x211AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211AF0u;
            // 0x211af4: 0x3c13002a  lui         $s3, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x210228u;
    if (runtime->hasFunction(0x210228u)) {
        auto targetFn = runtime->lookupFunction(0x210228u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211AF8u; }
        if (ctx->pc != 0x211AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00210228_0x210228(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211AF8u; }
        if (ctx->pc != 0x211AF8u) { return; }
    }
    ctx->pc = 0x211AF8u;
    // 0x211af8: 0x8e63d2a8  lw          $v1, -0x2D58($s3)
    ctx->pc = 0x211af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294955688)));
    // 0x211afc: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x211AFCu;
    {
        const bool branch_taken_0x211afc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x211B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211AFCu;
            // 0x211b00: 0x7fa200d0  sq          $v0, 0xD0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211afc) {
            ctx->pc = 0x211B38u;
            goto label_211b38;
        }
    }
    ctx->pc = 0x211B04u;
    // 0x211b04: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x211b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x211b08: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x211b08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x211b0c: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x211b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x211b10: 0x2402040f  addiu       $v0, $zero, 0x40F
    ctx->pc = 0x211b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1039));
    // 0x211b14: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x211b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x211b18: 0xa7a20010  sh          $v0, 0x10($sp)
    ctx->pc = 0x211b18u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x211b1c: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x211b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x211b20: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x211b20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x211b24: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x211b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x211b28: 0x8c44e89c  lw          $a0, -0x1764($v0)
    ctx->pc = 0x211b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961308)));
    // 0x211b2c: 0xc047d6a  jal         func_11F5A8
    ctx->pc = 0x211B2Cu;
    SET_GPR_U32(ctx, 31, 0x211B34u);
    ctx->pc = 0x211B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211B2Cu;
            // 0x211b30: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F5A8u;
    if (runtime->hasFunction(0x11F5A8u)) {
        auto targetFn = runtime->lookupFunction(0x11F5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211B34u; }
        if (ctx->pc != 0x211B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11f5a8_0x11f5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211B34u; }
        if (ctx->pc != 0x211B34u) { return; }
    }
    ctx->pc = 0x211B34u;
    // 0x211b34: 0xae60d2a8  sw          $zero, -0x2D58($s3)
    ctx->pc = 0x211b34u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294955688), GPR_U32(ctx, 0));
label_211b38:
    // 0x211b38: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x211b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_211b3c:
    // 0x211b3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x211b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211b40: 0xc0844dc  jal         func_211370
    ctx->pc = 0x211B40u;
    SET_GPR_U32(ctx, 31, 0x211B48u);
    ctx->pc = 0x211B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211B40u;
            // 0x211b44: 0x701034a9  por         $a2, $zero, $s0 (Delay Slot)
        SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211B48u; }
        if (ctx->pc != 0x211B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211B48u; }
        if (ctx->pc != 0x211B48u) { return; }
    }
    ctx->pc = 0x211B48u;
    // 0x211b48: 0x70102ca9  por         $a1, $zero, $s0
    ctx->pc = 0x211b48u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
    // 0x211b4c: 0xc0844b0  jal         func_2112C0
    ctx->pc = 0x211B4Cu;
    SET_GPR_U32(ctx, 31, 0x211B54u);
    ctx->pc = 0x211B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211B4Cu;
            // 0x211b50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2112C0u;
    if (runtime->hasFunction(0x2112C0u)) {
        auto targetFn = runtime->lookupFunction(0x2112C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211B54u; }
        if (ctx->pc != 0x211B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002112C0_0x2112c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211B54u; }
        if (ctx->pc != 0x211B54u) { return; }
    }
    ctx->pc = 0x211B54u;
    // 0x211b54: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x211b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x211b58: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x211B58u;
    {
        const bool branch_taken_0x211b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211B58u;
            // 0x211b5c: 0x26510050  addiu       $s1, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211b58) {
            ctx->pc = 0x211BA0u;
            goto label_211ba0;
        }
    }
    ctx->pc = 0x211B60u;
    // 0x211b60: 0x7a480050  lq          $t0, 0x50($s2)
    ctx->pc = 0x211b60u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x211b64: 0x7a470060  lq          $a3, 0x60($s2)
    ctx->pc = 0x211b64u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x211b68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x211b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211b6c: 0x7a430070  lq          $v1, 0x70($s2)
    ctx->pc = 0x211b6cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x211b70: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x211b70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x211b74: 0x7a420080  lq          $v0, 0x80($s2)
    ctx->pc = 0x211b74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x211b78: 0x7a300030  lq          $s0, 0x30($s1)
    ctx->pc = 0x211b78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x211b7c: 0x7ba500d0  lq          $a1, 0xD0($sp)
    ctx->pc = 0x211b7cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x211b80: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x211b80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x211b84: 0x7fa80030  sq          $t0, 0x30($sp)
    ctx->pc = 0x211b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 8));
    // 0x211b88: 0x7fa70040  sq          $a3, 0x40($sp)
    ctx->pc = 0x211b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 7));
    // 0x211b8c: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x211b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x211b90: 0xc077fda  jal         func_1DFF68
    ctx->pc = 0x211B90u;
    SET_GPR_U32(ctx, 31, 0x211B98u);
    ctx->pc = 0x211B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211B90u;
            // 0x211b94: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFF68u;
    if (runtime->hasFunction(0x1DFF68u)) {
        auto targetFn = runtime->lookupFunction(0x1DFF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211B98u; }
        if (ctx->pc != 0x211B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFF68_0x1dff68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211B98u; }
        if (ctx->pc != 0x211B98u) { return; }
    }
    ctx->pc = 0x211B98u;
    // 0x211b98: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x211B98u;
    {
        const bool branch_taken_0x211b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211B98u;
            // 0x211b9c: 0x7e300030  sq          $s0, 0x30($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211b98) {
            ctx->pc = 0x211BD4u;
            goto label_211bd4;
        }
    }
    ctx->pc = 0x211BA0u;
label_211ba0:
    // 0x211ba0: 0x7a480050  lq          $t0, 0x50($s2)
    ctx->pc = 0x211ba0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x211ba4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x211ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211ba8: 0x7a470060  lq          $a3, 0x60($s2)
    ctx->pc = 0x211ba8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x211bac: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x211bacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x211bb0: 0x7a420070  lq          $v0, 0x70($s2)
    ctx->pc = 0x211bb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x211bb4: 0x7a430080  lq          $v1, 0x80($s2)
    ctx->pc = 0x211bb4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x211bb8: 0x7ba500d0  lq          $a1, 0xD0($sp)
    ctx->pc = 0x211bb8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x211bbc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x211bbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x211bc0: 0x7fa80070  sq          $t0, 0x70($sp)
    ctx->pc = 0x211bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
    // 0x211bc4: 0x7fa70080  sq          $a3, 0x80($sp)
    ctx->pc = 0x211bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 7));
    // 0x211bc8: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x211bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x211bcc: 0xc077fda  jal         func_1DFF68
    ctx->pc = 0x211BCCu;
    SET_GPR_U32(ctx, 31, 0x211BD4u);
    ctx->pc = 0x211BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211BCCu;
            // 0x211bd0: 0x7fa300a0  sq          $v1, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFF68u;
    if (runtime->hasFunction(0x1DFF68u)) {
        auto targetFn = runtime->lookupFunction(0x1DFF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211BD4u; }
        if (ctx->pc != 0x211BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFF68_0x1dff68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211BD4u; }
        if (ctx->pc != 0x211BD4u) { return; }
    }
    ctx->pc = 0x211BD4u;
label_211bd4:
    // 0x211bd4: 0xc0796ac  jal         func_1E5AB0
    ctx->pc = 0x211BD4u;
    SET_GPR_U32(ctx, 31, 0x211BDCu);
    ctx->pc = 0x211BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211BD4u;
            // 0x211bd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5AB0u;
    if (runtime->hasFunction(0x1E5AB0u)) {
        auto targetFn = runtime->lookupFunction(0x1E5AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211BDCu; }
        if (ctx->pc != 0x211BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E5AB0_0x1e5ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211BDCu; }
        if (ctx->pc != 0x211BDCu) { return; }
    }
    ctx->pc = 0x211BDCu;
label_211bdc:
    // 0x211bdc: 0x9243029a  lbu         $v1, 0x29A($s2)
    ctx->pc = 0x211bdcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 666)));
label_211be0:
    // 0x211be0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x211be0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211be4: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x211be4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x211be8: 0x306300fe  andi        $v1, $v1, 0xFE
    ctx->pc = 0x211be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
    // 0x211bec: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x211becu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x211bf0: 0xa243029a  sb          $v1, 0x29A($s2)
    ctx->pc = 0x211bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 666), (uint8_t)GPR_U32(ctx, 3));
    // 0x211bf4: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x211bf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x211bf8: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x211bf8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x211bfc: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x211bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x211c00: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x211c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x211c04: 0x3e00008  jr          $ra
    ctx->pc = 0x211C04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211C04u;
            // 0x211c08: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x211530u: goto label_211530;
            case 0x21158Cu: goto label_21158c;
            case 0x211740u: goto label_211740;
            case 0x211760u: goto label_211760;
            case 0x21176Cu: goto label_21176c;
            case 0x211790u: goto label_211790;
            case 0x2117A0u: goto label_2117a0;
            case 0x2117BCu: goto label_2117bc;
            case 0x2117E0u: goto label_2117e0;
            case 0x2117E4u: goto label_2117e4;
            case 0x211840u: goto label_211840;
            case 0x211870u: goto label_211870;
            case 0x211874u: goto label_211874;
            case 0x211894u: goto label_211894;
            case 0x211898u: goto label_211898;
            case 0x2118C4u: goto label_2118c4;
            case 0x2118ECu: goto label_2118ec;
            case 0x211914u: goto label_211914;
            case 0x21193Cu: goto label_21193c;
            case 0x21194Cu: goto label_21194c;
            case 0x211968u: goto label_211968;
            case 0x211980u: goto label_211980;
            case 0x2119C0u: goto label_2119c0;
            case 0x2119DCu: goto label_2119dc;
            case 0x211A90u: goto label_211a90;
            case 0x211A94u: goto label_211a94;
            case 0x211AB8u: goto label_211ab8;
            case 0x211AE8u: goto label_211ae8;
            case 0x211B38u: goto label_211b38;
            case 0x211B3Cu: goto label_211b3c;
            case 0x211BA0u: goto label_211ba0;
            case 0x211BD4u: goto label_211bd4;
            case 0x211BDCu: goto label_211bdc;
            case 0x211BE0u: goto label_211be0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x211C0Cu;
    // 0x211c0c: 0x0  nop
    ctx->pc = 0x211c0cu;
    // NOP
}
