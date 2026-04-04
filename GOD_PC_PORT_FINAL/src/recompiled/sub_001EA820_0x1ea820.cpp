#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EA820
// Address: 0x1ea820 - 0x1eb1c0
void sub_001EA820_0x1ea820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EA820_0x1ea820");
#endif

    ctx->pc = 0x1ea820u;

    // 0x1ea820: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1ea820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x1ea824: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ea824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ea828: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x1ea828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x1ea82c: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x1ea82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x1ea830: 0x700684a9  por         $s0, $zero, $a2
    ctx->pc = 0x1ea830u;
    SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 6)));
    // 0x1ea834: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x1ea834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x1ea838: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ea838u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea83c: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x1ea83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x1ea840: 0x700794a9  por         $s2, $zero, $a3
    ctx->pc = 0x1ea840u;
    SET_GPR_VEC(ctx, 18, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 7)));
    // 0x1ea844: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x1ea844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x1ea848: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1ea848u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea84c: 0xe7b70128  swc1        $f23, 0x128($sp)
    ctx->pc = 0x1ea84cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x1ea850: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x1ea850u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea854: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x1ea854u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x1ea858: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x1ea858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x1ea85c: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1ea85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1ea860: 0xe7b60120  swc1        $f22, 0x120($sp)
    ctx->pc = 0x1ea860u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x1ea864: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x1ea864u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x1ea868: 0x7fa50020  sq          $a1, 0x20($sp)
    ctx->pc = 0x1ea868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 5));
    // 0x1ea86c: 0xc454c658  lwc1        $f20, -0x39A8($v0)
    ctx->pc = 0x1ea86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ea870: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1ea870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ea874: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x1ea874u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
    // 0x1ea878: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x1ea878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x1ea87c: 0x40f809  jalr        $v0
    ctx->pc = 0x1EA87Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EA884u);
        ctx->pc = 0x1EA880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA87Cu;
            // 0x1ea880: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EA884u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EA8C4u: goto label_1ea8c4;
            case 0x1EA8D8u: goto label_1ea8d8;
            case 0x1EA8F0u: goto label_1ea8f0;
            case 0x1EA968u: goto label_1ea968;
            case 0x1EA978u: goto label_1ea978;
            case 0x1EA984u: goto label_1ea984;
            case 0x1EA9C8u: goto label_1ea9c8;
            case 0x1EA9D0u: goto label_1ea9d0;
            case 0x1EAA98u: goto label_1eaa98;
            case 0x1EAAF8u: goto label_1eaaf8;
            case 0x1EAB08u: goto label_1eab08;
            case 0x1EAB28u: goto label_1eab28;
            case 0x1EAB2Cu: goto label_1eab2c;
            case 0x1EAB50u: goto label_1eab50;
            case 0x1EAB70u: goto label_1eab70;
            case 0x1EAB78u: goto label_1eab78;
            case 0x1EABC0u: goto label_1eabc0;
            case 0x1EAC10u: goto label_1eac10;
            case 0x1EAD28u: goto label_1ead28;
            case 0x1EAD2Cu: goto label_1ead2c;
            case 0x1EAD30u: goto label_1ead30;
            case 0x1EAD78u: goto label_1ead78;
            case 0x1EADCCu: goto label_1eadcc;
            case 0x1EADD0u: goto label_1eadd0;
            case 0x1EAE08u: goto label_1eae08;
            case 0x1EAE14u: goto label_1eae14;
            case 0x1EAEA8u: goto label_1eaea8;
            case 0x1EAEC0u: goto label_1eaec0;
            case 0x1EAEC8u: goto label_1eaec8;
            case 0x1EAF00u: goto label_1eaf00;
            case 0x1EAF18u: goto label_1eaf18;
            case 0x1EAF34u: goto label_1eaf34;
            case 0x1EAF70u: goto label_1eaf70;
            case 0x1EAF80u: goto label_1eaf80;
            case 0x1EAF84u: goto label_1eaf84;
            case 0x1EB03Cu: goto label_1eb03c;
            case 0x1EB040u: goto label_1eb040;
            case 0x1EB044u: goto label_1eb044;
            case 0x1EB0B8u: goto label_1eb0b8;
            case 0x1EB0D8u: goto label_1eb0d8;
            case 0x1EB0F0u: goto label_1eb0f0;
            case 0x1EB0F4u: goto label_1eb0f4;
            case 0x1EB14Cu: goto label_1eb14c;
            case 0x1EB17Cu: goto label_1eb17c;
            case 0x1EB184u: goto label_1eb184;
            case 0x1EB18Cu: goto label_1eb18c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EA884u; }
            if (ctx->pc != 0x1EA884u) { return; }
        }
        }
    }
    ctx->pc = 0x1EA884u;
    // 0x1ea884: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1ea884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1ea888: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ea888u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ea88c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1ea88cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1ea890: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ea890u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ea894: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ea894u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ea898: 0x8e230174  lw          $v1, 0x174($s1)
    ctx->pc = 0x1ea898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1ea89c: 0xc621016c  lwc1        $f1, 0x16C($s1)
    ctx->pc = 0x1ea89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ea8a0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1ea8a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1ea8a4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1ea8a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1ea8a8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ea8a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ea8ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EA8ACu;
    {
        const bool branch_taken_0x1ea8ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA8B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA8ACu;
            // 0x1ea8b0: 0x4600a5c2  mul.s       $f23, $f20, $f0 (Delay Slot)
        ctx->f[23] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea8ac) {
            ctx->pc = 0x1EA8C4u;
            goto label_1ea8c4;
        }
    }
    ctx->pc = 0x1EA8B4u;
    // 0x1ea8b4: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1ea8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1ea8b8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1ea8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ea8bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EA8BCu;
    {
        const bool branch_taken_0x1ea8bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea8bc) {
            ctx->pc = 0x1EA8D8u;
            goto label_1ea8d8;
        }
    }
    ctx->pc = 0x1EA8C4u;
label_1ea8c4:
    // 0x1ea8c4: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1ea8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1ea8c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EA8C8u;
    {
        const bool branch_taken_0x1ea8c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA8C8u;
            // 0x1ea8cc: 0x30620030  andi        $v0, $v1, 0x30 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)48);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea8c8) {
            ctx->pc = 0x1EA8D8u;
            goto label_1ea8d8;
        }
    }
    ctx->pc = 0x1EA8D0u;
    // 0x1ea8d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EA8D0u;
    {
        const bool branch_taken_0x1ea8d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea8d0) {
            ctx->pc = 0x1EA8F0u;
            goto label_1ea8f0;
        }
    }
    ctx->pc = 0x1EA8D8u;
label_1ea8d8:
    // 0x1ea8d8: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x1ea8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1ea8dc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1ea8dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1ea8e0: 0xda210260  lqc2        $vf1, 0x260($s1)
    ctx->pc = 0x1ea8e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x1ea8e4: 0x4b020040  vaddx.x     $vf1, $vf0, $vf2x
    ctx->pc = 0x1ea8e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ea8e8: 0xfa210260  sqc2        $vf1, 0x260($s1)
    ctx->pc = 0x1ea8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 608), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ea8ec: 0x0  nop
    ctx->pc = 0x1ea8ecu;
    // NOP
label_1ea8f0:
    // 0x1ea8f0: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x1ea8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1ea8f4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1ea8f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1ea8f8: 0x26330260  addiu       $s3, $s1, 0x260
    ctx->pc = 0x1ea8f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 608));
    // 0x1ea8fc: 0xda220260  lqc2        $vf2, 0x260($s1)
    ctx->pc = 0x1ea8fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x1ea900: 0x4a810080  vaddx.y     $vf2, $vf0, $vf1x
    ctx->pc = 0x1ea900u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ea904: 0x1280016e  beqz        $s4, . + 4 + (0x16E << 2)
    ctx->pc = 0x1EA904u;
    {
        const bool branch_taken_0x1ea904 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA904u;
            // 0x1ea908: 0xfa220260  sqc2        $vf2, 0x260($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 608), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea904) {
            ctx->pc = 0x1EAEC0u;
            goto label_1eaec0;
        }
    }
    ctx->pc = 0x1EA90Cu;
    // 0x1ea90c: 0x8e230174  lw          $v1, 0x174($s1)
    ctx->pc = 0x1ea90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1ea910: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1ea910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1ea914: 0x1440016c  bnez        $v0, . + 4 + (0x16C << 2)
    ctx->pc = 0x1EA914u;
    {
        const bool branch_taken_0x1ea914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA914u;
            // 0x1ea918: 0x3062004c  andi        $v0, $v1, 0x4C (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)76);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea914) {
            ctx->pc = 0x1EAEC8u;
            goto label_1eaec8;
        }
    }
    ctx->pc = 0x1EA91Cu;
    // 0x1ea91c: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x1ea91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1ea920: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1EA920u;
    {
        const bool branch_taken_0x1ea920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea920) {
            ctx->pc = 0x1EA984u;
            goto label_1ea984;
        }
    }
    ctx->pc = 0x1EA928u;
    // 0x1ea928: 0x8e2202dc  lw          $v0, 0x2DC($s1)
    ctx->pc = 0x1ea928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 732)));
    // 0x1ea92c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1ea92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1ea930: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1EA930u;
    {
        const bool branch_taken_0x1ea930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA930u;
            // 0x1ea934: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea930) {
            ctx->pc = 0x1EA978u;
            goto label_1ea978;
        }
    }
    ctx->pc = 0x1EA938u;
    // 0x1ea938: 0x8e220320  lw          $v0, 0x320($s1)
    ctx->pc = 0x1ea938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x1ea93c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1ea93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ea940: 0x844201b2  lh          $v0, 0x1B2($v0)
    ctx->pc = 0x1ea940u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 434)));
    // 0x1ea944: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EA944u;
    {
        const bool branch_taken_0x1ea944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EA948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA944u;
            // 0x1ea948: 0x70103ca9  por         $a3, $zero, $s0 (Delay Slot)
        SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea944) {
            ctx->pc = 0x1EA968u;
            goto label_1ea968;
        }
    }
    ctx->pc = 0x1EA94Cu;
    // 0x1ea94c: 0x8e240330  lw          $a0, 0x330($s1)
    ctx->pc = 0x1ea94cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 816)));
    // 0x1ea950: 0x7ba60020  lq          $a2, 0x20($sp)
    ctx->pc = 0x1ea950u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ea954: 0x48281000  qmfc2.ni    $t0, $vf2
    ctx->pc = 0x1ea954u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ea958: 0xc07feb4  jal         func_1FFAD0
    ctx->pc = 0x1EA958u;
    SET_GPR_U32(ctx, 31, 0x1EA960u);
    ctx->pc = 0x1EA95Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA958u;
            // 0x1ea95c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFAD0u;
    if (runtime->hasFunction(0x1FFAD0u)) {
        auto targetFn = runtime->lookupFunction(0x1FFAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA960u; }
        if (ctx->pc != 0x1EA960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FFAD0_0x1ffad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA960u; }
        if (ctx->pc != 0x1EA960u) { return; }
    }
    ctx->pc = 0x1EA960u;
    // 0x1ea960: 0x7e220260  sq          $v0, 0x260($s1)
    ctx->pc = 0x1ea960u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 608), GPR_VEC(ctx, 2));
    // 0x1ea964: 0x0  nop
    ctx->pc = 0x1ea964u;
    // NOP
label_1ea968:
    // 0x1ea968: 0xc0728fc  jal         func_1CA3F0
    ctx->pc = 0x1EA968u;
    SET_GPR_U32(ctx, 31, 0x1EA970u);
    ctx->pc = 0x1EA96Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA968u;
            // 0x1ea96c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA3F0u;
    if (runtime->hasFunction(0x1CA3F0u)) {
        auto targetFn = runtime->lookupFunction(0x1CA3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA970u; }
        if (ctx->pc != 0x1EA970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA3F0_0x1ca3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA970u; }
        if (ctx->pc != 0x1EA970u) { return; }
    }
    ctx->pc = 0x1EA970u;
    // 0x1ea970: 0x10000184  b           . + 4 + (0x184 << 2)
    ctx->pc = 0x1EA970u;
    {
        const bool branch_taken_0x1ea970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA970u;
            // 0x1ea974: 0x8e220324  lw          $v0, 0x324($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea970) {
            ctx->pc = 0x1EAF84u;
            goto label_1eaf84;
        }
    }
    ctx->pc = 0x1EA978u;
label_1ea978:
    // 0x1ea978: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ea978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea97c: 0xc07a11e  jal         func_1E8478
    ctx->pc = 0x1EA97Cu;
    SET_GPR_U32(ctx, 31, 0x1EA984u);
    ctx->pc = 0x1EA980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA97Cu;
            // 0x1ea980: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8478u;
    if (runtime->hasFunction(0x1E8478u)) {
        auto targetFn = runtime->lookupFunction(0x1E8478u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA984u; }
        if (ctx->pc != 0x1EA984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8478_0x1e8478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA984u; }
        if (ctx->pc != 0x1EA984u) { return; }
    }
    ctx->pc = 0x1EA984u;
label_1ea984:
    // 0x1ea984: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1ea984u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ea988: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x1ea988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ea98c: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1ea98cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ea990: 0xdba20090  lqc2        $vf2, 0x90($sp)
    ctx->pc = 0x1ea990u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ea994: 0x4be1106c  vsub.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x1ea994u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ea998: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1ea998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ea99c: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1ea99cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ea9a0: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1ea9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ea9a4: 0x8e2402d8  lw          $a0, 0x2D8($s1)
    ctx->pc = 0x1ea9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 728)));
    // 0x1ea9a8: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x1ea9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x1ea9ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EA9ACu;
    {
        const bool branch_taken_0x1ea9ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea9ac) {
            ctx->pc = 0x1EA9C8u;
            goto label_1ea9c8;
        }
    }
    ctx->pc = 0x1EA9B4u;
    // 0x1ea9b4: 0x8e220320  lw          $v0, 0x320($s1)
    ctx->pc = 0x1ea9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x1ea9b8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1ea9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ea9bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1EA9BCu;
    {
        const bool branch_taken_0x1ea9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA9C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA9BCu;
            // 0x1ea9c0: 0xc4440230  lwc1        $f4, 0x230($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea9bc) {
            ctx->pc = 0x1EA9D0u;
            goto label_1ea9d0;
        }
    }
    ctx->pc = 0x1EA9C4u;
    // 0x1ea9c4: 0x0  nop
    ctx->pc = 0x1ea9c4u;
    // NOP
label_1ea9c8:
    // 0x1ea9c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ea9c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ea9cc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1ea9ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1ea9d0:
    // 0x1ea9d0: 0x8e230174  lw          $v1, 0x174($s1)
    ctx->pc = 0x1ea9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1ea9d4: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1ea9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1ea9d8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1ea9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ea9dc: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1EA9DCu;
    {
        const bool branch_taken_0x1ea9dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA9E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA9DCu;
            // 0x1ea9e0: 0xdba10020  lqc2        $vf1, 0x20($sp) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea9dc) {
            ctx->pc = 0x1EAA98u;
            goto label_1eaa98;
        }
    }
    ctx->pc = 0x1EA9E4u;
    // 0x1ea9e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ea9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea9e8: 0x4b010043  vaddw.x     $vf1, $vf0, $vf1w
    ctx->pc = 0x1ea9e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ea9ec: 0x8e230320  lw          $v1, 0x320($s1)
    ctx->pc = 0x1ea9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x1ea9f0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1ea9f0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ea9f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ea9f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ea9f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ea9f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea9fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ea9fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eaa00: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1eaa00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1eaa04: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x1eaa04u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x1eaa08: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1eaa08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1eaa0c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1eaa0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1eaa10: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1eaa10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1eaa14: 0xc4740218  lwc1        $f20, 0x218($v1)
    ctx->pc = 0x1eaa14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1eaa18: 0xc46f0224  lwc1        $f15, 0x224($v1)
    ctx->pc = 0x1eaa18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1eaa1c: 0xc46e0220  lwc1        $f14, 0x220($v1)
    ctx->pc = 0x1eaa1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1eaa20: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1eaa20u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1eaa24: 0xc470021c  lwc1        $f16, 0x21C($v1)
    ctx->pc = 0x1eaa24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1eaa28: 0x46157bc2  mul.s       $f15, $f15, $f21
    ctx->pc = 0x1eaa28u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[21]);
    // 0x1eaa2c: 0x7a220260  lq          $v0, 0x260($s1)
    ctx->pc = 0x1eaa2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x1eaa30: 0x46157382  mul.s       $f14, $f14, $f21
    ctx->pc = 0x1eaa30u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[21]);
    // 0x1eaa34: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x1eaa34u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1eaa38: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1eaa38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1eaa3c: 0x4615a502  mul.s       $f20, $f20, $f21
    ctx->pc = 0x1eaa3cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x1eaa40: 0xc4760228  lwc1        $f22, 0x228($v1)
    ctx->pc = 0x1eaa40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1eaa44: 0x46177bc2  mul.s       $f15, $f15, $f23
    ctx->pc = 0x1eaa44u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[23]);
    // 0x1eaa48: 0x46177382  mul.s       $f14, $f14, $f23
    ctx->pc = 0x1eaa48u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[23]);
    // 0x1eaa4c: 0x46158402  mul.s       $f16, $f16, $f21
    ctx->pc = 0x1eaa4cu;
    ctx->f[16] = FPU_MUL_S(ctx->f[16], ctx->f[21]);
    // 0x1eaa50: 0xc07950a  jal         func_1E5428
    ctx->pc = 0x1EAA50u;
    SET_GPR_U32(ctx, 31, 0x1EAA58u);
    ctx->pc = 0x1EAA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAA50u;
            // 0x1eaa54: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5428u;
    if (runtime->hasFunction(0x1E5428u)) {
        auto targetFn = runtime->lookupFunction(0x1E5428u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAA58u; }
        if (ctx->pc != 0x1EAA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1e5428_0x1e54c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAA58u; }
        if (ctx->pc != 0x1EAA58u) { return; }
    }
    ctx->pc = 0x1EAA58u;
    // 0x1eaa58: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1eaa58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1eaa5c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1eaa5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1eaa60: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x1eaa60u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1eaa64: 0x4a410080  vaddx.z     $vf2, $vf0, $vf1x
    ctx->pc = 0x1eaa64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1eaa68: 0x8e220320  lw          $v0, 0x320($s1)
    ctx->pc = 0x1eaa68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x1eaa6c: 0xfa620000  sqc2        $vf2, 0x0($s3)
    ctx->pc = 0x1eaa6cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1eaa70: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1eaa70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1eaa74: 0xc4400218  lwc1        $f0, 0x218($v0)
    ctx->pc = 0x1eaa74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eaa78: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1eaa78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1eaa7c: 0x46140029  min.s       $f0, $f0, $f20
    ctx->pc = 0x1eaa7cu;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[20]);
    // 0x1eaa80: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1eaa80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1eaa84: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x1eaa84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1eaa88: 0x4a410080  vaddx.z     $vf2, $vf0, $vf1x
    ctx->pc = 0x1eaa88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1eaa8c: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x1EAA8Cu;
    {
        const bool branch_taken_0x1eaa8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAA8Cu;
            // 0x1eaa90: 0xfa620000  sqc2        $vf2, 0x0($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaa8c) {
            ctx->pc = 0x1EAC10u;
            goto label_1eac10;
        }
    }
    ctx->pc = 0x1EAA94u;
    // 0x1eaa94: 0x0  nop
    ctx->pc = 0x1eaa94u;
    // NOP
label_1eaa98:
    // 0x1eaa98: 0x3062004c  andi        $v0, $v1, 0x4C
    ctx->pc = 0x1eaa98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)76);
    // 0x1eaa9c: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1EAA9Cu;
    {
        const bool branch_taken_0x1eaa9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAAA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAA9Cu;
            // 0x1eaaa0: 0x30820300  andi        $v0, $a0, 0x300 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaa9c) {
            ctx->pc = 0x1EAB50u;
            goto label_1eab50;
        }
    }
    ctx->pc = 0x1EAAA4u;
    // 0x1eaaa4: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1EAAA4u;
    {
        const bool branch_taken_0x1eaaa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eaaa4) {
            ctx->pc = 0x1EAAA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAAA4u;
            // 0x1eaaa8: 0x7a220070  lq          $v0, 0x70($s1) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EAAF8u;
            goto label_1eaaf8;
        }
    }
    ctx->pc = 0x1EAAACu;
    // 0x1eaaac: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1eaaacu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eaab0: 0x4b010043  vaddw.x     $vf1, $vf0, $vf1w
    ctx->pc = 0x1eaab0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1eaab4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1eaab4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1eaab8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eaab8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eaabc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1eaabcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1eaac0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1eaac0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1eaac4: 0xdba20030  lqc2        $vf2, 0x30($sp)
    ctx->pc = 0x1eaac4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1eaac8: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x1eaac8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1eaacc: 0xda210070  lqc2        $vf1, 0x70($s1)
    ctx->pc = 0x1eaaccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x1eaad0: 0x4be110aa  vmul.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1eaad0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1eaad4: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1eaad4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1eaad8: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1eaad8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1eaadc: 0x44042000  mfc1        $a0, $f4
    ctx->pc = 0x1eaadcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1eaae0: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x1eaae0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1eaae4: 0x4b020858  vmulx.x     $vf1, $vf1, $vf2x
    ctx->pc = 0x1eaae4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1eaae8: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1eaae8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1eaaec: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x1eaaecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1eaaf0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1EAAF0u;
    {
        const bool branch_taken_0x1eaaf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAAF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAAF0u;
            // 0x1eaaf4: 0x8e2202d8  lw          $v0, 0x2D8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 728)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaaf0) {
            ctx->pc = 0x1EAB08u;
            goto label_1eab08;
        }
    }
    ctx->pc = 0x1EAAF8u;
label_1eaaf8:
    // 0x1eaaf8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1eaaf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1eaafc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1eaafcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1eab00: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1eab00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x1eab04: 0x8e2202d8  lw          $v0, 0x2D8($s1)
    ctx->pc = 0x1eab04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 728)));
label_1eab08:
    // 0x1eab08: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1eab08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1eab0c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1eab0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1eab10: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EAB10u;
    {
        const bool branch_taken_0x1eab10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eab10) {
            ctx->pc = 0x1EAB28u;
            goto label_1eab28;
        }
    }
    ctx->pc = 0x1EAB18u;
    // 0x1eab18: 0x8e220320  lw          $v0, 0x320($s1)
    ctx->pc = 0x1eab18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x1eab1c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1eab1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1eab20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EAB20u;
    {
        const bool branch_taken_0x1eab20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAB20u;
            // 0x1eab24: 0xc45600e4  lwc1        $f22, 0xE4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eab20) {
            ctx->pc = 0x1EAB2Cu;
            goto label_1eab2c;
        }
    }
    ctx->pc = 0x1EAB28u;
label_1eab28:
    // 0x1eab28: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x1eab28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_1eab2c:
    // 0x1eab2c: 0x8e220320  lw          $v0, 0x320($s1)
    ctx->pc = 0x1eab2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x1eab30: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1eab30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1eab34: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1eab34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eab38: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1eab38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1eab3c: 0xc44000d8  lwc1        $f0, 0xD8($v0)
    ctx->pc = 0x1eab3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eab40: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1eab40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1eab44: 0x461703c2  mul.s       $f15, $f0, $f23
    ctx->pc = 0x1eab44u;
    ctx->f[15] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x1eab48: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1EAB48u;
    {
        const bool branch_taken_0x1eab48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAB4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAB48u;
            // 0x1eab4c: 0x46007b86  mov.s       $f14, $f15 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eab48) {
            ctx->pc = 0x1EABC0u;
            goto label_1eabc0;
        }
    }
    ctx->pc = 0x1EAB50u;
label_1eab50:
    // 0x1eab50: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1eab50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1eab54: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1eab54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1eab58: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EAB58u;
    {
        const bool branch_taken_0x1eab58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eab58) {
            ctx->pc = 0x1EAB70u;
            goto label_1eab70;
        }
    }
    ctx->pc = 0x1EAB60u;
    // 0x1eab60: 0x8e220320  lw          $v0, 0x320($s1)
    ctx->pc = 0x1eab60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x1eab64: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1eab64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1eab68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1EAB68u;
    {
        const bool branch_taken_0x1eab68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAB6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAB68u;
            // 0x1eab6c: 0xc45600fc  lwc1        $f22, 0xFC($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eab68) {
            ctx->pc = 0x1EAB78u;
            goto label_1eab78;
        }
    }
    ctx->pc = 0x1EAB70u;
label_1eab70:
    // 0x1eab70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1eab70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1eab74: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1eab74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_1eab78:
    // 0x1eab78: 0x8e220320  lw          $v0, 0x320($s1)
    ctx->pc = 0x1eab78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x1eab7c: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1eab7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1eab80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1eab80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eab84: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1eab84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1eab88: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1eab88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eab8c: 0xc44300f4  lwc1        $f3, 0xF4($v0)
    ctx->pc = 0x1eab8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1eab90: 0x4b010043  vaddw.x     $vf1, $vf0, $vf1w
    ctx->pc = 0x1eab90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1eab94: 0xc44200f8  lwc1        $f2, 0xF8($v0)
    ctx->pc = 0x1eab94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1eab98: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x1eab98u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1eab9c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1eab9cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1eaba0: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1eaba0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1eaba4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1eaba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1eaba8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1eaba8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eabac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eabacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eabb0: 0x46000869  min.s       $f1, $f1, $f0
    ctx->pc = 0x1eabb0u;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[0]);
    // 0x1eabb4: 0x46171b82  mul.s       $f14, $f3, $f23
    ctx->pc = 0x1eabb4u;
    ctx->f[14] = FPU_MUL_S(ctx->f[3], ctx->f[23]);
    // 0x1eabb8: 0x46040902  mul.s       $f4, $f1, $f4
    ctx->pc = 0x1eabb8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1eabbc: 0x461713c2  mul.s       $f15, $f2, $f23
    ctx->pc = 0x1eabbcu;
    ctx->f[15] = FPU_MUL_S(ctx->f[2], ctx->f[23]);
label_1eabc0:
    // 0x1eabc0: 0x8e220320  lw          $v0, 0x320($s1)
    ctx->pc = 0x1eabc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x1eabc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1eabc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eabc8: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1eabc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1eabcc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1eabccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eabd0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1eabd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1eabd4: 0x7a220260  lq          $v0, 0x260($s1)
    ctx->pc = 0x1eabd4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x1eabd8: 0xc46c00ec  lwc1        $f12, 0xEC($v1)
    ctx->pc = 0x1eabd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1eabdc: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x1eabdcu;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1eabe0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1eabe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1eabe4: 0xc47000f0  lwc1        $f16, 0xF0($v1)
    ctx->pc = 0x1eabe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1eabe8: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x1eabe8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1eabec: 0x46008402  mul.s       $f16, $f16, $f0
    ctx->pc = 0x1eabecu;
    ctx->f[16] = FPU_MUL_S(ctx->f[16], ctx->f[0]);
    // 0x1eabf0: 0xc07950a  jal         func_1E5428
    ctx->pc = 0x1EABF0u;
    SET_GPR_U32(ctx, 31, 0x1EABF8u);
    ctx->pc = 0x1EABF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EABF0u;
            // 0x1eabf4: 0x46046302  mul.s       $f12, $f12, $f4 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[4]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5428u;
    if (runtime->hasFunction(0x1E5428u)) {
        auto targetFn = runtime->lookupFunction(0x1E5428u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EABF8u; }
        if (ctx->pc != 0x1EABF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1e5428_0x1e54c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EABF8u; }
        if (ctx->pc != 0x1EABF8u) { return; }
    }
    ctx->pc = 0x1EABF8u;
    // 0x1eabf8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1eabf8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1eabfc: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x1eabfcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1eac00: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1eac00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1eac04: 0x4a420040  vaddx.z     $vf1, $vf0, $vf2x
    ctx->pc = 0x1eac04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1eac08: 0xfa610000  sqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1eac08u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1eac0c: 0x0  nop
    ctx->pc = 0x1eac0cu;
    // NOP
label_1eac10:
    // 0x1eac10: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x1eac10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
    // 0x1eac14: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x1eac14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x1eac18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1eac18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eac1c: 0x26300050  addiu       $s0, $s1, 0x50
    ctx->pc = 0x1eac1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x1eac20: 0x7a040020  lq          $a0, 0x20($s0)
    ctx->pc = 0x1eac20u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1eac24: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1eac24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1eac28: 0x4600bd03  div.s       $f20, $f23, $f0
    ctx->pc = 0x1eac28u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[23] * 0.0f); } else ctx->f[20] = ctx->f[23] / ctx->f[0];
    // 0x1eac2c: 0x7ba50030  lq          $a1, 0x30($sp)
    ctx->pc = 0x1eac2cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1eac30: 0xc07954c  jal         func_1E5530
    ctx->pc = 0x1EAC30u;
    SET_GPR_U32(ctx, 31, 0x1EAC38u);
    ctx->pc = 0x1EAC34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAC30u;
            // 0x1eac34: 0x4614b302  mul.s       $f12, $f22, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5530u;
    if (runtime->hasFunction(0x1E5530u)) {
        auto targetFn = runtime->lookupFunction(0x1E5530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAC38u; }
        if (ctx->pc != 0x1EAC38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E5530_0x1e5530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAC38u; }
        if (ctx->pc != 0x1EAC38u) { return; }
    }
    ctx->pc = 0x1EAC38u;
    // 0x1eac38: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x1eac38u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1eac3c: 0xfa030020  sqc2        $vf3, 0x20($s0)
    ctx->pc = 0x1eac3cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1eac40: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1eac40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1eac44: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1eac44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1eac48: 0xdba20090  lqc2        $vf2, 0x90($sp)
    ctx->pc = 0x1eac48u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1eac4c: 0x4a811080  vaddx.y     $vf2, $vf2, $vf1x
    ctx->pc = 0x1eac4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1eac50: 0x4be3192a  vmul.xyzw   $vf4, $vf3, $vf3
    ctx->pc = 0x1eac50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1eac54: 0xfa020010  sqc2        $vf2, 0x10($s0)
    ctx->pc = 0x1eac54u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1eac58: 0x4b042041  vaddy.x     $vf1, $vf4, $vf4y
    ctx->pc = 0x1eac58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1eac5c: 0x4b040842  vaddz.x     $vf1, $vf1, $vf4z
    ctx->pc = 0x1eac5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1eac60: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x1eac60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eac64: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1eac64u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1eac68: 0x4a0003bf  vwaitq
    ctx->pc = 0x1eac68u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1eac6c: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x1eac6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1eac70: 0x4a0002ff  vnop
    ctx->pc = 0x1eac70u;
    // NOP operation, no action needed for VU0
    // 0x1eac74: 0x4a0002ff  vnop
    ctx->pc = 0x1eac74u;
    // NOP operation, no action needed for VU0
    // 0x1eac78: 0x4bc312fe  vopmula.xyz $ACC, $vf2, $vf3
    ctx->pc = 0x1eac78u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[3]);
    // 0x1eac7c: 0xfba30000  sqc2        $vf3, 0x0($sp)
    ctx->pc = 0x1eac7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1eac80: 0x4bc218ae  vopmsub.xyz $vf2, $vf3, $vf2
    ctx->pc = 0x1eac80u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1eac84: 0xfa030020  sqc2        $vf3, 0x20($s0)
    ctx->pc = 0x1eac84u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1eac88: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x1eac88u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1eac8c: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x1eac8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1eac90: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1eac90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1eac94: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1eac94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1eac98: 0x8e230174  lw          $v1, 0x174($s1)
    ctx->pc = 0x1eac98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1eac9c: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1eac9cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1eaca0: 0x4a0003bf  vwaitq
    ctx->pc = 0x1eaca0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1eaca4: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1eaca4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1eaca8: 0x4a0002ff  vnop
    ctx->pc = 0x1eaca8u;
    // NOP operation, no action needed for VU0
    // 0x1eacac: 0x4a0002ff  vnop
    ctx->pc = 0x1eacacu;
    // NOP operation, no action needed for VU0
    // 0x1eacb0: 0xfa220050  sqc2        $vf2, 0x50($s1)
    ctx->pc = 0x1eacb0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1eacb4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1eacb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1eacb8: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1EACB8u;
    {
        const bool branch_taken_0x1eacb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EACBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EACB8u;
            // 0x1eacbc: 0xfba20010  sqc2        $vf2, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eacb8) {
            ctx->pc = 0x1EAD2Cu;
            goto label_1ead2c;
        }
    }
    ctx->pc = 0x1EACC0u;
    // 0x1eacc0: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1eacc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1eacc4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1eacc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1eacc8: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1EACC8u;
    {
        const bool branch_taken_0x1eacc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eacc8) {
            ctx->pc = 0x1EACCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EACC8u;
            // 0x1eaccc: 0x8e230174  lw          $v1, 0x174($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EAD30u;
            goto label_1ead30;
        }
    }
    ctx->pc = 0x1EACD0u;
    // 0x1eacd0: 0x8e2202dc  lw          $v0, 0x2DC($s1)
    ctx->pc = 0x1eacd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 732)));
    // 0x1eacd4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1eacd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1eacd8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1eacd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1eacdc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1EACDCu;
    {
        const bool branch_taken_0x1eacdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EACE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EACDCu;
            // 0x1eace0: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eacdc) {
            ctx->pc = 0x1EAD28u;
            goto label_1ead28;
        }
    }
    ctx->pc = 0x1EACE4u;
    // 0x1eace4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1eace4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1eace8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1eace8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1eacec: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1eacecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1eacf0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1eacf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1eacf4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1eacf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eacf8: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x1eacf8u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x1eacfc: 0x8e220320  lw          $v0, 0x320($s1)
    ctx->pc = 0x1eacfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x1ead00: 0x46020029  min.s       $f0, $f0, $f2
    ctx->pc = 0x1ead00u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[2]);
    // 0x1ead04: 0xc62202bc  lwc1        $f2, 0x2BC($s1)
    ctx->pc = 0x1ead04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ead08: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1ead08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ead0c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1ead0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1ead10: 0xc44100fc  lwc1        $f1, 0xFC($v0)
    ctx->pc = 0x1ead10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ead14: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1ead14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x1ead18: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ead18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ead1c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1ead1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1ead20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EAD20u;
    {
        const bool branch_taken_0x1ead20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAD24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAD20u;
            // 0x1ead24: 0xe62002bc  swc1        $f0, 0x2BC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 700), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ead20) {
            ctx->pc = 0x1EAD2Cu;
            goto label_1ead2c;
        }
    }
    ctx->pc = 0x1EAD28u;
label_1ead28:
    // 0x1ead28: 0xae2002bc  sw          $zero, 0x2BC($s1)
    ctx->pc = 0x1ead28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 700), GPR_U32(ctx, 0));
label_1ead2c:
    // 0x1ead2c: 0x8e230174  lw          $v1, 0x174($s1)
    ctx->pc = 0x1ead2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
label_1ead30:
    // 0x1ead30: 0x3062004c  andi        $v0, $v1, 0x4C
    ctx->pc = 0x1ead30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)76);
    // 0x1ead34: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1EAD34u;
    {
        const bool branch_taken_0x1ead34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ead34) {
            ctx->pc = 0x1EAD38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAD34u;
            // 0x1ead38: 0x8e230174  lw          $v1, 0x174($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EAD78u;
            goto label_1ead78;
        }
    }
    ctx->pc = 0x1EAD3Cu;
    // 0x1ead3c: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x1ead3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1ead40: 0x54400023  bnel        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x1EAD40u;
    {
        const bool branch_taken_0x1ead40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ead40) {
            ctx->pc = 0x1EAD44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAD40u;
            // 0x1ead44: 0xda2100e0  lqc2        $vf1, 0xE0($s1) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 224)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EADD0u;
            goto label_1eadd0;
        }
    }
    ctx->pc = 0x1EAD48u;
    // 0x1ead48: 0xda210260  lqc2        $vf1, 0x260($s1)
    ctx->pc = 0x1ead48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x1ead4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ead4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ead50: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1ead50u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ead54: 0x70031789  pexew       $v0, $v1
    ctx->pc = 0x1ead54u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1ead58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ead58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ead5c: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x1ead5cu;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x1ead60: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1ead60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1ead64: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x1ead64u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1ead68: 0x4a420040  vaddx.z     $vf1, $vf0, $vf2x
    ctx->pc = 0x1ead68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ead6c: 0xfa210260  sqc2        $vf1, 0x260($s1)
    ctx->pc = 0x1ead6cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 608), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ead70: 0x8e230174  lw          $v1, 0x174($s1)
    ctx->pc = 0x1ead70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1ead74: 0x0  nop
    ctx->pc = 0x1ead74u;
    // NOP
label_1ead78:
    // 0x1ead78: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x1ead78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1ead7c: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1EAD7Cu;
    {
        const bool branch_taken_0x1ead7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ead7c) {
            ctx->pc = 0x1EAD80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAD7Cu;
            // 0x1ead80: 0xda2100e0  lqc2        $vf1, 0xE0($s1) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 224)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EADD0u;
            goto label_1eadd0;
        }
    }
    ctx->pc = 0x1EAD84u;
    // 0x1ead84: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1ead84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x1ead88: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1ead88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ead8c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1EAD8Cu;
    {
        const bool branch_taken_0x1ead8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ead8c) {
            ctx->pc = 0x1EAD90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAD8Cu;
            // 0x1ead90: 0xda2100e0  lqc2        $vf1, 0xE0($s1) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 224)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EADD0u;
            goto label_1eadd0;
        }
    }
    ctx->pc = 0x1EAD94u;
    // 0x1ead94: 0x8e2202dc  lw          $v0, 0x2DC($s1)
    ctx->pc = 0x1ead94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 732)));
    // 0x1ead98: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x1ead98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x1ead9c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1ead9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1eada0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1EADA0u;
    {
        const bool branch_taken_0x1eada0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eada0) {
            ctx->pc = 0x1EADA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EADA0u;
            // 0x1eada4: 0xda2100e0  lqc2        $vf1, 0xE0($s1) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 224)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EADD0u;
            goto label_1eadd0;
        }
    }
    ctx->pc = 0x1EADA8u;
    // 0x1eada8: 0xc07a3ec  jal         func_1E8FB0
    ctx->pc = 0x1EADA8u;
    SET_GPR_U32(ctx, 31, 0x1EADB0u);
    ctx->pc = 0x1EADACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EADA8u;
            // 0x1eadac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8FB0u;
    if (runtime->hasFunction(0x1E8FB0u)) {
        auto targetFn = runtime->lookupFunction(0x1E8FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EADB0u; }
        if (ctx->pc != 0x1EADB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8FB0_0x1e8fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EADB0u; }
        if (ctx->pc != 0x1EADB0u) { return; }
    }
    ctx->pc = 0x1EADB0u;
    // 0x1eadb0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EADB0u;
    {
        const bool branch_taken_0x1eadb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EADB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EADB0u;
            // 0x1eadb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eadb0) {
            ctx->pc = 0x1EADCCu;
            goto label_1eadcc;
        }
    }
    ctx->pc = 0x1EADB8u;
    // 0x1eadb8: 0x70122ca9  por         $a1, $zero, $s2
    ctx->pc = 0x1eadb8u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 18)));
    // 0x1eadbc: 0xc0794f6  jal         func_1E53D8
    ctx->pc = 0x1EADBCu;
    SET_GPR_U32(ctx, 31, 0x1EADC4u);
    ctx->pc = 0x1EADC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EADBCu;
            // 0x1eadc0: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E53D8u;
    if (runtime->hasFunction(0x1E53D8u)) {
        auto targetFn = runtime->lookupFunction(0x1E53D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EADC4u; }
        if (ctx->pc != 0x1EADC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1e53d8_0x1e5428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EADC4u; }
        if (ctx->pc != 0x1EADC4u) { return; }
    }
    ctx->pc = 0x1EADC4u;
    // 0x1eadc4: 0x100000f1  b           . + 4 + (0xF1 << 2)
    ctx->pc = 0x1EADC4u;
    {
        const bool branch_taken_0x1eadc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EADC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EADC4u;
            // 0x1eadc8: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eadc4) {
            ctx->pc = 0x1EB18Cu;
            goto label_1eb18c;
        }
    }
    ctx->pc = 0x1EADCCu;
label_1eadcc:
    // 0x1eadcc: 0xda2100e0  lqc2        $vf1, 0xE0($s1)
    ctx->pc = 0x1eadccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 224)));
label_1eadd0:
    // 0x1eadd0: 0xdba50090  lqc2        $vf5, 0x90($sp)
    ctx->pc = 0x1eadd0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1eadd4: 0x4a812941  vaddy.y     $vf5, $vf5, $vf1y
    ctx->pc = 0x1eadd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1eadd8: 0x8e220234  lw          $v0, 0x234($s1)
    ctx->pc = 0x1eadd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 564)));
    // 0x1eaddc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1EADDCu;
    {
        const bool branch_taken_0x1eaddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eaddc) {
            ctx->pc = 0x1EAE08u;
            goto label_1eae08;
        }
    }
    ctx->pc = 0x1EADE4u;
    // 0x1eade4: 0x8e220174  lw          $v0, 0x174($s1)
    ctx->pc = 0x1eade4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1eade8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1eade8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1eadec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EADECu;
    {
        const bool branch_taken_0x1eadec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eadec) {
            ctx->pc = 0x1EAE08u;
            goto label_1eae08;
        }
    }
    ctx->pc = 0x1EADF4u;
    // 0x1eadf4: 0x7a220210  lq          $v0, 0x210($s1)
    ctx->pc = 0x1eadf4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x1eadf8: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x1eadf8u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1eadfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eadfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eae00: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1EAE00u;
    {
        const bool branch_taken_0x1eae00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAE04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAE00u;
            // 0x1eae04: 0xda220050  lqc2        $vf2, 0x50($s1) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eae00) {
            ctx->pc = 0x1EAE14u;
            goto label_1eae14;
        }
    }
    ctx->pc = 0x1EAE08u;
label_1eae08:
    // 0x1eae08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1eae08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1eae0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1eae0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eae10: 0xda220050  lqc2        $vf2, 0x50($s1)
    ctx->pc = 0x1eae10u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 80)));
label_1eae14:
    // 0x1eae14: 0xda230260  lqc2        $vf3, 0x260($s1)
    ctx->pc = 0x1eae14u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x1eae18: 0x4be31098  vmulx.xyzw  $vf2, $vf2, $vf3x
    ctx->pc = 0x1eae18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1eae1c: 0xfba20050  sqc2        $vf2, 0x50($sp)
    ctx->pc = 0x1eae1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1eae20: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1eae20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1eae24: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1eae24u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1eae28: 0x4be41098  vmulx.xyzw  $vf2, $vf2, $vf4x
    ctx->pc = 0x1eae28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1eae2c: 0xda610010  lqc2        $vf1, 0x10($s3)
    ctx->pc = 0x1eae2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1eae30: 0x4be30859  vmuly.xyzw  $vf1, $vf1, $vf3y
    ctx->pc = 0x1eae30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1eae34: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1eae34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1eae38: 0x4be510a8  vadd.xyzw   $vf2, $vf2, $vf5
    ctx->pc = 0x1eae38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1eae3c: 0xda610020  lqc2        $vf1, 0x20($s3)
    ctx->pc = 0x1eae3cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x1eae40: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1eae40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1eae44: 0xdba50090  lqc2        $vf5, 0x90($sp)
    ctx->pc = 0x1eae44u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1eae48: 0x4be1286c  vsub.xyzw   $vf1, $vf5, $vf1
    ctx->pc = 0x1eae48u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1eae4c: 0x4be3085a  vmulz.xyzw  $vf1, $vf1, $vf3z
    ctx->pc = 0x1eae4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1eae50: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1eae50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1eae54: 0x4be40858  vmulx.xyzw  $vf1, $vf1, $vf4x
    ctx->pc = 0x1eae54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1eae58: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1eae58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1eae5c: 0xfa2200e0  sqc2        $vf2, 0xE0($s1)
    ctx->pc = 0x1eae5cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 224), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1eae60: 0xda2300f0  lqc2        $vf3, 0xF0($s1)
    ctx->pc = 0x1eae60u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1eae64: 0x4be310a8  vadd.xyzw   $vf2, $vf2, $vf3
    ctx->pc = 0x1eae64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1eae68: 0xfa2200e0  sqc2        $vf2, 0xE0($s1)
    ctx->pc = 0x1eae68u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 224), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1eae6c: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x1eae6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1eae70: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1eae70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1eae74: 0x4a8100c0  vaddx.y     $vf3, $vf0, $vf1x
    ctx->pc = 0x1eae74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1eae78: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1eae78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eae7c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1eae7cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1eae80: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x1eae80u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1eae84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eae84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eae88: 0xfa2300f0  sqc2        $vf3, 0xF0($s1)
    ctx->pc = 0x1eae88u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 240), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1eae8c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1eae8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1eae90: 0x0  nop
    ctx->pc = 0x1eae90u;
    // NOP
    // 0x1eae94: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1EAE94u;
    {
        const bool branch_taken_0x1eae94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EAE98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAE94u;
            // 0x1eae98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eae94) {
            ctx->pc = 0x1EAEA8u;
            goto label_1eaea8;
        }
    }
    ctx->pc = 0x1EAE9Cu;
    // 0x1eae9c: 0x8e220174  lw          $v0, 0x174($s1)
    ctx->pc = 0x1eae9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1eaea0: 0x3042004c  andi        $v0, $v0, 0x4C
    ctx->pc = 0x1eaea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)76);
    // 0x1eaea4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1eaea4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1eaea8:
    // 0x1eaea8: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1EAEA8u;
    {
        const bool branch_taken_0x1eaea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAEACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAEA8u;
            // 0x1eaeac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaea8) {
            ctx->pc = 0x1EAF80u;
            goto label_1eaf80;
        }
    }
    ctx->pc = 0x1EAEB0u;
    // 0x1eaeb0: 0xc07a11e  jal         func_1E8478
    ctx->pc = 0x1EAEB0u;
    SET_GPR_U32(ctx, 31, 0x1EAEB8u);
    ctx->pc = 0x1EAEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAEB0u;
            // 0x1eaeb4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8478u;
    if (runtime->hasFunction(0x1E8478u)) {
        auto targetFn = runtime->lookupFunction(0x1E8478u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAEB8u; }
        if (ctx->pc != 0x1EAEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8478_0x1e8478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAEB8u; }
        if (ctx->pc != 0x1EAEB8u) { return; }
    }
    ctx->pc = 0x1EAEB8u;
    // 0x1eaeb8: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1EAEB8u;
    {
        const bool branch_taken_0x1eaeb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAEB8u;
            // 0x1eaebc: 0x8e220324  lw          $v0, 0x324($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaeb8) {
            ctx->pc = 0x1EAF84u;
            goto label_1eaf84;
        }
    }
    ctx->pc = 0x1EAEC0u;
label_1eaec0:
    // 0x1eaec0: 0x8e230174  lw          $v1, 0x174($s1)
    ctx->pc = 0x1eaec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1eaec4: 0x3062004c  andi        $v0, $v1, 0x4C
    ctx->pc = 0x1eaec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)76);
label_1eaec8:
    // 0x1eaec8: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1EAEC8u;
    {
        const bool branch_taken_0x1eaec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EAECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAEC8u;
            // 0x1eaecc: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaec8) {
            ctx->pc = 0x1EAF34u;
            goto label_1eaf34;
        }
    }
    ctx->pc = 0x1EAED0u;
    // 0x1eaed0: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x1eaed0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1eaed4: 0x30620030  andi        $v0, $v1, 0x30
    ctx->pc = 0x1eaed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)48);
    // 0x1eaed8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EAED8u;
    {
        const bool branch_taken_0x1eaed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAEDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAED8u;
            // 0x1eaedc: 0xfa220260  sqc2        $vf2, 0x260($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 608), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaed8) {
            ctx->pc = 0x1EAF00u;
            goto label_1eaf00;
        }
    }
    ctx->pc = 0x1EAEE0u;
    // 0x1eaee0: 0xda210070  lqc2        $vf1, 0x70($s1)
    ctx->pc = 0x1eaee0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x1eaee4: 0xfa2200e0  sqc2        $vf2, 0xE0($s1)
    ctx->pc = 0x1eaee4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 224), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1eaee8: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x1eaee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1eaeec: 0x4be1106c  vsub.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x1eaeecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1eaef0: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1eaef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1eaef4: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1eaef4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1eaef8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1EAEF8u;
    {
        const bool branch_taken_0x1eaef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAEFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAEF8u;
            // 0x1eaefc: 0xfba10020  sqc2        $vf1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaef8) {
            ctx->pc = 0x1EAF80u;
            goto label_1eaf80;
        }
    }
    ctx->pc = 0x1EAF00u;
label_1eaf00:
    // 0x1eaf00: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1eaf00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1eaf04: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EAF04u;
    {
        const bool branch_taken_0x1eaf04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eaf04) {
            ctx->pc = 0x1EAF08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAF04u;
            // 0x1eaf08: 0x8e220320  lw          $v0, 0x320($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EAF18u;
            goto label_1eaf18;
        }
    }
    ctx->pc = 0x1EAF0Cu;
    // 0x1eaf0c: 0x5680001d  bnel        $s4, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x1EAF0Cu;
    {
        const bool branch_taken_0x1eaf0c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eaf0c) {
            ctx->pc = 0x1EAF10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAF0Cu;
            // 0x1eaf10: 0x8e220324  lw          $v0, 0x324($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EAF84u;
            goto label_1eaf84;
        }
    }
    ctx->pc = 0x1EAF14u;
    // 0x1eaf14: 0x8e220320  lw          $v0, 0x320($s1)
    ctx->pc = 0x1eaf14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
label_1eaf18:
    // 0x1eaf18: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x1eaf18u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x1eaf1c: 0x7a2400e0  lq          $a0, 0xE0($s1)
    ctx->pc = 0x1eaf1cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x1eaf20: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1eaf20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1eaf24: 0xc077f54  jal         func_1DFD50
    ctx->pc = 0x1EAF24u;
    SET_GPR_U32(ctx, 31, 0x1EAF2Cu);
    ctx->pc = 0x1EAF28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAF24u;
            // 0x1eaf28: 0xc44c0088  lwc1        $f12, 0x88($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFD50u;
    if (runtime->hasFunction(0x1DFD50u)) {
        auto targetFn = runtime->lookupFunction(0x1DFD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAF2Cu; }
        if (ctx->pc != 0x1EAF2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFD50_0x1dfd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAF2Cu; }
        if (ctx->pc != 0x1EAF2Cu) { return; }
    }
    ctx->pc = 0x1EAF2Cu;
    // 0x1eaf2c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1EAF2Cu;
    {
        const bool branch_taken_0x1eaf2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAF2Cu;
            // 0x1eaf30: 0x7e2200e0  sq          $v0, 0xE0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 224), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaf2c) {
            ctx->pc = 0x1EAF80u;
            goto label_1eaf80;
        }
    }
    ctx->pc = 0x1EAF34u;
label_1eaf34:
    // 0x1eaf34: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1EAF34u;
    {
        const bool branch_taken_0x1eaf34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAF38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAF34u;
            // 0x1eaf38: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaf34) {
            ctx->pc = 0x1EAF80u;
            goto label_1eaf80;
        }
    }
    ctx->pc = 0x1EAF3Cu;
    // 0x1eaf3c: 0x8e220320  lw          $v0, 0x320($s1)
    ctx->pc = 0x1eaf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x1eaf40: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1eaf40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1eaf44: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1eaf44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1eaf48: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1eaf48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1eaf4c: 0x7a2200e0  lq          $v0, 0xE0($s1)
    ctx->pc = 0x1eaf4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x1eaf50: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x1eaf50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eaf54: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x1eaf54u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1eaf58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1eaf58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eaf5c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1eaf5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1eaf60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1eaf60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1eaf64: 0x0  nop
    ctx->pc = 0x1eaf64u;
    // NOP
    // 0x1eaf68: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1EAF68u;
    {
        const bool branch_taken_0x1eaf68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1eaf68) {
            ctx->pc = 0x1EAF6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAF68u;
            // 0x1eaf6c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EAF70u;
            goto label_1eaf70;
        }
    }
    ctx->pc = 0x1EAF70u;
label_1eaf70:
    // 0x1eaf70: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EAF70u;
    {
        const bool branch_taken_0x1eaf70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAF70u;
            // 0x1eaf74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaf70) {
            ctx->pc = 0x1EAF80u;
            goto label_1eaf80;
        }
    }
    ctx->pc = 0x1EAF78u;
    // 0x1eaf78: 0xc07a11e  jal         func_1E8478
    ctx->pc = 0x1EAF78u;
    SET_GPR_U32(ctx, 31, 0x1EAF80u);
    ctx->pc = 0x1EAF7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAF78u;
            // 0x1eaf7c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8478u;
    if (runtime->hasFunction(0x1E8478u)) {
        auto targetFn = runtime->lookupFunction(0x1E8478u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAF80u; }
        if (ctx->pc != 0x1EAF80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8478_0x1e8478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAF80u; }
        if (ctx->pc != 0x1EAF80u) { return; }
    }
    ctx->pc = 0x1EAF80u;
label_1eaf80:
    // 0x1eaf80: 0x8e220324  lw          $v0, 0x324($s1)
    ctx->pc = 0x1eaf80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
label_1eaf84:
    // 0x1eaf84: 0x8e230174  lw          $v1, 0x174($s1)
    ctx->pc = 0x1eaf84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1eaf88: 0xc44c002c  lwc1        $f12, 0x2C($v0)
    ctx->pc = 0x1eaf88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1eaf8c: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x1eaf8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1eaf90: 0x54400058  bnel        $v0, $zero, . + 4 + (0x58 << 2)
    ctx->pc = 0x1EAF90u;
    {
        const bool branch_taken_0x1eaf90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eaf90) {
            ctx->pc = 0x1EAF94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAF90u;
            // 0x1eaf94: 0x46176302  mul.s       $f12, $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[23]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EB0F4u;
            goto label_1eb0f4;
        }
    }
    ctx->pc = 0x1EAF98u;
    // 0x1eaf98: 0x30620030  andi        $v0, $v1, 0x30
    ctx->pc = 0x1eaf98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)48);
    // 0x1eaf9c: 0x54400055  bnel        $v0, $zero, . + 4 + (0x55 << 2)
    ctx->pc = 0x1EAF9Cu;
    {
        const bool branch_taken_0x1eaf9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eaf9c) {
            ctx->pc = 0x1EAFA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAF9Cu;
            // 0x1eafa0: 0x46176302  mul.s       $f12, $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[23]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EB0F4u;
            goto label_1eb0f4;
        }
    }
    ctx->pc = 0x1EAFA4u;
    // 0x1eafa4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1eafa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1eafa8: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x1EAFA8u;
    {
        const bool branch_taken_0x1eafa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eafa8) {
            ctx->pc = 0x1EAFACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAFA8u;
            // 0x1eafac: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EB044u;
            goto label_1eb044;
        }
    }
    ctx->pc = 0x1EAFB0u;
    // 0x1eafb0: 0x4600022  bltz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1EAFB0u;
    {
        const bool branch_taken_0x1eafb0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1EAFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAFB0u;
            // 0x1eafb4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eafb0) {
            ctx->pc = 0x1EB03Cu;
            goto label_1eb03c;
        }
    }
    ctx->pc = 0x1EAFB8u;
    // 0x1eafb8: 0x8e22024c  lw          $v0, 0x24C($s1)
    ctx->pc = 0x1eafb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 588)));
    // 0x1eafbc: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x1EAFBCu;
    {
        const bool branch_taken_0x1eafbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eafbc) {
            ctx->pc = 0x1EAFC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAFBCu;
            // 0x1eafc0: 0xaea40000  sw          $a0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EB040u;
            goto label_1eb040;
        }
    }
    ctx->pc = 0x1EAFC4u;
    // 0x1eafc4: 0x7a2300e0  lq          $v1, 0xE0($s1)
    ctx->pc = 0x1eafc4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x1eafc8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1eafc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eafcc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1eafccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eafd0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1eafd0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1eafd4: 0x0  nop
    ctx->pc = 0x1eafd4u;
    // NOP
    // 0x1eafd8: 0x45020019  bc1fl       . + 4 + (0x19 << 2)
    ctx->pc = 0x1EAFD8u;
    {
        const bool branch_taken_0x1eafd8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1eafd8) {
            ctx->pc = 0x1EAFDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAFD8u;
            // 0x1eafdc: 0xaea40000  sw          $a0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EB040u;
            goto label_1eb040;
        }
    }
    ctx->pc = 0x1EAFE0u;
    // 0x1eafe0: 0x70031789  pexew       $v0, $v1
    ctx->pc = 0x1eafe0u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1eafe4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eafe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eafe8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1eafe8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1eafec: 0x0  nop
    ctx->pc = 0x1eafecu;
    // NOP
    // 0x1eaff0: 0x45020013  bc1fl       . + 4 + (0x13 << 2)
    ctx->pc = 0x1EAFF0u;
    {
        const bool branch_taken_0x1eaff0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1eaff0) {
            ctx->pc = 0x1EAFF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAFF0u;
            // 0x1eaff4: 0xaea40000  sw          $a0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EB040u;
            goto label_1eb040;
        }
    }
    ctx->pc = 0x1EAFF8u;
    // 0x1eaff8: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1eaff8u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eaffc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1eaffcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1eb000: 0x0  nop
    ctx->pc = 0x1eb000u;
    // NOP
    // 0x1eb004: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
    ctx->pc = 0x1EB004u;
    {
        const bool branch_taken_0x1eb004 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1eb004) {
            ctx->pc = 0x1EB008u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB004u;
            // 0x1eb008: 0xaea40000  sw          $a0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EB040u;
            goto label_1eb040;
        }
    }
    ctx->pc = 0x1EB00Cu;
    // 0x1eb00c: 0x701217c9  prot3w      $v0, $s2
    ctx->pc = 0x1eb00cu;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1eb010: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eb010u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb014: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1eb014u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1eb018: 0x0  nop
    ctx->pc = 0x1eb018u;
    // NOP
    // 0x1eb01c: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x1EB01Cu;
    {
        const bool branch_taken_0x1eb01c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1eb01c) {
            ctx->pc = 0x1EB020u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB01Cu;
            // 0x1eb020: 0xaea40000  sw          $a0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EB040u;
            goto label_1eb040;
        }
    }
    ctx->pc = 0x1EB024u;
    // 0x1eb024: 0x70121789  pexew       $v0, $s2
    ctx->pc = 0x1eb024u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1eb028: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eb028u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb02c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1eb02cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1eb030: 0x0  nop
    ctx->pc = 0x1eb030u;
    // NOP
    // 0x1eb034: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1EB034u;
    {
        const bool branch_taken_0x1eb034 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1eb034) {
            ctx->pc = 0x1EB038u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB034u;
            // 0x1eb038: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EB03Cu;
            goto label_1eb03c;
        }
    }
    ctx->pc = 0x1EB03Cu;
label_1eb03c:
    // 0x1eb03c: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x1eb03cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
label_1eb040:
    // 0x1eb040: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1eb040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1eb044:
    // 0x1eb044: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1EB044u;
    {
        const bool branch_taken_0x1eb044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB044u;
            // 0x1eb048: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb044) {
            ctx->pc = 0x1EB0D8u;
            goto label_1eb0d8;
        }
    }
    ctx->pc = 0x1EB04Cu;
    // 0x1eb04c: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1eb04cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1eb050: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1eb050u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1eb054: 0xc4405e98  lwc1        $f0, 0x5E98($v0)
    ctx->pc = 0x1eb054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb058: 0xda2200e0  lqc2        $vf2, 0xE0($s1)
    ctx->pc = 0x1eb058u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x1eb05c: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x1eb05cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x1eb060: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x1eb060u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x1eb064: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1eb064u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1eb068: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1eb068u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1eb06c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1eb06cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1eb070: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x1eb070u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1eb074: 0x4a811040  vaddx.y     $vf1, $vf2, $vf1x
    ctx->pc = 0x1eb074u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1eb078: 0x8e220320  lw          $v0, 0x320($s1)
    ctx->pc = 0x1eb078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x1eb07c: 0x4a810081  vaddy.y     $vf2, $vf0, $vf1y
    ctx->pc = 0x1eb07cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1eb080: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x1eb080u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1eb084: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1eb084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1eb088: 0x70041fc9  prot3w      $v1, $a0
    ctx->pc = 0x1eb088u;
    SET_GPR_VEC(ctx, 3, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1eb08c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1eb08cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eb090: 0xfa2200e0  sqc2        $vf2, 0xE0($s1)
    ctx->pc = 0x1eb090u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 224), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1eb094: 0xc44000dc  lwc1        $f0, 0xDC($v0)
    ctx->pc = 0x1eb094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb098: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1eb098u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1eb09c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1eb09cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1eb0a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1eb0a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1eb0a4: 0x0  nop
    ctx->pc = 0x1eb0a4u;
    // NOP
    // 0x1eb0a8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1EB0A8u;
    {
        const bool branch_taken_0x1eb0a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EB0ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB0A8u;
            // 0x1eb0ac: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb0a8) {
            ctx->pc = 0x1EB0B8u;
            goto label_1eb0b8;
        }
    }
    ctx->pc = 0x1EB0B0u;
    // 0x1eb0b0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1eb0b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb0b4: 0x0  nop
    ctx->pc = 0x1eb0b4u;
    // NOP
label_1eb0b8:
    // 0x1eb0b8: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1EB0B8u;
    {
        const bool branch_taken_0x1eb0b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb0b8) {
            ctx->pc = 0x1EB0BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB0B8u;
            // 0x1eb0bc: 0x46176302  mul.s       $f12, $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[23]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EB0F4u;
            goto label_1eb0f4;
        }
    }
    ctx->pc = 0x1EB0C0u;
    // 0x1eb0c0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1eb0c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1eb0c4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1eb0c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1eb0c8: 0x4a810080  vaddx.y     $vf2, $vf0, $vf1x
    ctx->pc = 0x1eb0c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1eb0cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EB0CCu;
    {
        const bool branch_taken_0x1eb0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB0D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB0CCu;
            // 0x1eb0d0: 0xfa2200e0  sqc2        $vf2, 0xE0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 224), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb0cc) {
            ctx->pc = 0x1EB0F0u;
            goto label_1eb0f0;
        }
    }
    ctx->pc = 0x1EB0D4u;
    // 0x1eb0d4: 0x0  nop
    ctx->pc = 0x1eb0d4u;
    // NOP
label_1eb0d8:
    // 0x1eb0d8: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x1eb0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1eb0dc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1eb0dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1eb0e0: 0xda2100e0  lqc2        $vf1, 0xE0($s1)
    ctx->pc = 0x1eb0e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x1eb0e4: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x1eb0e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1eb0e8: 0xfa2100e0  sqc2        $vf1, 0xE0($s1)
    ctx->pc = 0x1eb0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1eb0ec: 0x0  nop
    ctx->pc = 0x1eb0ecu;
    // NOP
label_1eb0f0:
    // 0x1eb0f0: 0x46176302  mul.s       $f12, $f12, $f23
    ctx->pc = 0x1eb0f0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[23]);
label_1eb0f4:
    // 0x1eb0f4: 0x70122ca9  por         $a1, $zero, $s2
    ctx->pc = 0x1eb0f4u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 18)));
    // 0x1eb0f8: 0xc0794f6  jal         func_1E53D8
    ctx->pc = 0x1EB0F8u;
    SET_GPR_U32(ctx, 31, 0x1EB100u);
    ctx->pc = 0x1EB0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB0F8u;
            // 0x1eb0fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E53D8u;
    if (runtime->hasFunction(0x1E53D8u)) {
        auto targetFn = runtime->lookupFunction(0x1E53D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB100u; }
        if (ctx->pc != 0x1EB100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1e53d8_0x1e5428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB100u; }
        if (ctx->pc != 0x1EB100u) { return; }
    }
    ctx->pc = 0x1EB100u;
    // 0x1eb100: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x1eb100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1eb104: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1EB104u;
    {
        const bool branch_taken_0x1eb104 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB104u;
            // 0x1eb108: 0x700284a9  por         $s0, $zero, $v0 (Delay Slot)
        SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb104) {
            ctx->pc = 0x1EB17Cu;
            goto label_1eb17c;
        }
    }
    ctx->pc = 0x1EB10Cu;
    // 0x1eb10c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1eb10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1eb110: 0x8e240174  lw          $a0, 0x174($s1)
    ctx->pc = 0x1eb110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1eb114: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1eb114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1eb118: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1eb118u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x1eb11c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1eb11cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1eb120: 0xae220250  sw          $v0, 0x250($s1)
    ctx->pc = 0x1eb120u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
    // 0x1eb124: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EB124u;
    {
        const bool branch_taken_0x1eb124 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB124u;
            // 0x1eb128: 0xae20024c  sw          $zero, 0x24C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 588), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb124) {
            ctx->pc = 0x1EB14Cu;
            goto label_1eb14c;
        }
    }
    ctx->pc = 0x1EB12Cu;
    // 0x1eb12c: 0x8e2202dc  lw          $v0, 0x2DC($s1)
    ctx->pc = 0x1eb12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 732)));
    // 0x1eb130: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1eb130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1eb134: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EB134u;
    {
        const bool branch_taken_0x1eb134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB134u;
            // 0x1eb138: 0x7ba60020  lq          $a2, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb134) {
            ctx->pc = 0x1EB14Cu;
            goto label_1eb14c;
        }
    }
    ctx->pc = 0x1EB13Cu;
    // 0x1eb13c: 0x70102ca9  por         $a1, $zero, $s0
    ctx->pc = 0x1eb13cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
    // 0x1eb140: 0xc071b18  jal         func_1C6C60
    ctx->pc = 0x1EB140u;
    SET_GPR_U32(ctx, 31, 0x1EB148u);
    ctx->pc = 0x1EB144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB140u;
            // 0x1eb144: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C6C60u;
    if (runtime->hasFunction(0x1C6C60u)) {
        auto targetFn = runtime->lookupFunction(0x1C6C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB148u; }
        if (ctx->pc != 0x1EB148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C6C60_0x1c6c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB148u; }
        if (ctx->pc != 0x1EB148u) { return; }
    }
    ctx->pc = 0x1EB148u;
    // 0x1eb148: 0x700284a9  por         $s0, $zero, $v0
    ctx->pc = 0x1eb148u;
    SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
label_1eb14c:
    // 0x1eb14c: 0x70102ca9  por         $a1, $zero, $s0
    ctx->pc = 0x1eb14cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
    // 0x1eb150: 0xc07a68e  jal         func_1E9A38
    ctx->pc = 0x1EB150u;
    SET_GPR_U32(ctx, 31, 0x1EB158u);
    ctx->pc = 0x1EB154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB150u;
            // 0x1eb154: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E9A38u;
    if (runtime->hasFunction(0x1E9A38u)) {
        auto targetFn = runtime->lookupFunction(0x1E9A38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB158u; }
        if (ctx->pc != 0x1EB158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E9A38_0x1e9a38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB158u; }
        if (ctx->pc != 0x1EB158u) { return; }
    }
    ctx->pc = 0x1EB158u;
    // 0x1eb158: 0x8e2302dc  lw          $v1, 0x2DC($s1)
    ctx->pc = 0x1eb158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 732)));
    // 0x1eb15c: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1eb15cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1eb160: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EB160u;
    {
        const bool branch_taken_0x1eb160 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB160u;
            // 0x1eb164: 0x700284a9  por         $s0, $zero, $v0 (Delay Slot)
        SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb160) {
            ctx->pc = 0x1EB184u;
            goto label_1eb184;
        }
    }
    ctx->pc = 0x1EB168u;
    // 0x1eb168: 0x70102ca9  por         $a1, $zero, $s0
    ctx->pc = 0x1eb168u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
    // 0x1eb16c: 0xc0723fe  jal         func_1C8FF8
    ctx->pc = 0x1EB16Cu;
    SET_GPR_U32(ctx, 31, 0x1EB174u);
    ctx->pc = 0x1EB170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB16Cu;
            // 0x1eb170: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C8FF8u;
    if (runtime->hasFunction(0x1C8FF8u)) {
        auto targetFn = runtime->lookupFunction(0x1C8FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB174u; }
        if (ctx->pc != 0x1EB174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8FF8_0x1c8ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB174u; }
        if (ctx->pc != 0x1EB174u) { return; }
    }
    ctx->pc = 0x1EB174u;
    // 0x1eb174: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1EB174u;
    {
        const bool branch_taken_0x1eb174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB174u;
            // 0x1eb178: 0x700284a9  por         $s0, $zero, $v0 (Delay Slot)
        SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb174) {
            ctx->pc = 0x1EB184u;
            goto label_1eb184;
        }
    }
    ctx->pc = 0x1EB17Cu;
label_1eb17c:
    // 0x1eb17c: 0xc07a22e  jal         func_1E88B8
    ctx->pc = 0x1EB17Cu;
    SET_GPR_U32(ctx, 31, 0x1EB184u);
    ctx->pc = 0x1EB180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB17Cu;
            // 0x1eb180: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E88B8u;
    if (runtime->hasFunction(0x1E88B8u)) {
        auto targetFn = runtime->lookupFunction(0x1E88B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB184u; }
        if (ctx->pc != 0x1EB184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E88B8_0x1e88b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB184u; }
        if (ctx->pc != 0x1EB184u) { return; }
    }
    ctx->pc = 0x1EB184u;
label_1eb184:
    // 0x1eb184: 0x701014a9  por         $v0, $zero, $s0
    ctx->pc = 0x1eb184u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
    // 0x1eb188: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x1eb188u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_1eb18c:
    // 0x1eb18c: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x1eb18cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1eb190: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x1eb190u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1eb194: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x1eb194u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1eb198: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x1eb198u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1eb19c: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x1eb19cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1eb1a0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1eb1a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1eb1a4: 0xc7b70128  lwc1        $f23, 0x128($sp)
    ctx->pc = 0x1eb1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1eb1a8: 0xc7b60120  lwc1        $f22, 0x120($sp)
    ctx->pc = 0x1eb1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1eb1ac: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x1eb1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1eb1b0: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x1eb1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1eb1b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB1B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB1B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB1B4u;
            // 0x1eb1b8: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EA8C4u: goto label_1ea8c4;
            case 0x1EA8D8u: goto label_1ea8d8;
            case 0x1EA8F0u: goto label_1ea8f0;
            case 0x1EA968u: goto label_1ea968;
            case 0x1EA978u: goto label_1ea978;
            case 0x1EA984u: goto label_1ea984;
            case 0x1EA9C8u: goto label_1ea9c8;
            case 0x1EA9D0u: goto label_1ea9d0;
            case 0x1EAA98u: goto label_1eaa98;
            case 0x1EAAF8u: goto label_1eaaf8;
            case 0x1EAB08u: goto label_1eab08;
            case 0x1EAB28u: goto label_1eab28;
            case 0x1EAB2Cu: goto label_1eab2c;
            case 0x1EAB50u: goto label_1eab50;
            case 0x1EAB70u: goto label_1eab70;
            case 0x1EAB78u: goto label_1eab78;
            case 0x1EABC0u: goto label_1eabc0;
            case 0x1EAC10u: goto label_1eac10;
            case 0x1EAD28u: goto label_1ead28;
            case 0x1EAD2Cu: goto label_1ead2c;
            case 0x1EAD30u: goto label_1ead30;
            case 0x1EAD78u: goto label_1ead78;
            case 0x1EADCCu: goto label_1eadcc;
            case 0x1EADD0u: goto label_1eadd0;
            case 0x1EAE08u: goto label_1eae08;
            case 0x1EAE14u: goto label_1eae14;
            case 0x1EAEA8u: goto label_1eaea8;
            case 0x1EAEC0u: goto label_1eaec0;
            case 0x1EAEC8u: goto label_1eaec8;
            case 0x1EAF00u: goto label_1eaf00;
            case 0x1EAF18u: goto label_1eaf18;
            case 0x1EAF34u: goto label_1eaf34;
            case 0x1EAF70u: goto label_1eaf70;
            case 0x1EAF80u: goto label_1eaf80;
            case 0x1EAF84u: goto label_1eaf84;
            case 0x1EB03Cu: goto label_1eb03c;
            case 0x1EB040u: goto label_1eb040;
            case 0x1EB044u: goto label_1eb044;
            case 0x1EB0B8u: goto label_1eb0b8;
            case 0x1EB0D8u: goto label_1eb0d8;
            case 0x1EB0F0u: goto label_1eb0f0;
            case 0x1EB0F4u: goto label_1eb0f4;
            case 0x1EB14Cu: goto label_1eb14c;
            case 0x1EB17Cu: goto label_1eb17c;
            case 0x1EB184u: goto label_1eb184;
            case 0x1EB18Cu: goto label_1eb18c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EB1BCu;
    // 0x1eb1bc: 0x0  nop
    ctx->pc = 0x1eb1bcu;
    // NOP
}
