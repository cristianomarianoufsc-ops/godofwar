#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2628e8
// Address: 0x2628e8 - 0x262bb0
void entry_2628e8_0x262bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2628e8_0x262bb0");
#endif

    ctx->pc = 0x2628e8u;

    // 0x2628e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2628e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2628ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2628ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2628f0: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2628f0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2628f4: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x2628f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x2628f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2628f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2628fc: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x2628fcu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262900: 0x460d0843  div.s       $f1, $f1, $f13
    ctx->pc = 0x262900u;
    if (ctx->f[13] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[13];
    // 0x262904: 0x95680002  lhu         $t0, 0x2($t3)
    ctx->pc = 0x262904u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x262908: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x262908u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x26290c: 0x956a0000  lhu         $t2, 0x0($t3)
    ctx->pc = 0x26290cu;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x262910: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x262910u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x262914: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x262914u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x262918: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x262918u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26291c: 0x484823  subu        $t1, $v0, $t0
    ctx->pc = 0x26291cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x262920: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x262920u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x262924: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x262924u;
    {
        const bool branch_taken_0x262924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x262928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262924u;
            // 0x262928: 0xe0602d  daddu       $t4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262924) {
            ctx->pc = 0x262940u;
            goto label_262940;
        }
    }
    ctx->pc = 0x26292Cu;
    // 0x26292c: 0x2549ffff  addiu       $t1, $t2, -0x1
    ctx->pc = 0x26292cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x262930: 0x1281021  addu        $v0, $t1, $t0
    ctx->pc = 0x262930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x262934: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x262934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262938: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x262938u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x26293c: 0x460d0302  mul.s       $f12, $f0, $f13
    ctx->pc = 0x26293cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
label_262940:
    // 0x262940: 0x523000f  bgezl       $t1, . + 4 + (0xF << 2)
    ctx->pc = 0x262940u;
    {
        const bool branch_taken_0x262940 = (GPR_S32(ctx, 9) >= 0);
        if (branch_taken_0x262940) {
            ctx->pc = 0x262944u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x262940u;
            // 0x262944: 0x90820003  lbu         $v0, 0x3($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x262980u;
            goto label_262980;
        }
    }
    ctx->pc = 0x262948u;
    // 0x262948: 0x5000005  bltz        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x262948u;
    {
        const bool branch_taken_0x262948 = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x26294Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262948u;
            // 0x26294c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262948) {
            ctx->pc = 0x262960u;
            goto label_262960;
        }
    }
    ctx->pc = 0x262950u;
    // 0x262950: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x262950u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262954: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x262954u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x262958: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x262958u;
    {
        const bool branch_taken_0x262958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26295Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262958u;
            // 0x26295c: 0x460d0302  mul.s       $f12, $f0, $f13 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x262958) {
            ctx->pc = 0x26297Cu;
            goto label_26297c;
        }
    }
    ctx->pc = 0x262960u;
label_262960:
    // 0x262960: 0x31020001  andi        $v0, $t0, 0x1
    ctx->pc = 0x262960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x262964: 0x81842  srl         $v1, $t0, 1
    ctx->pc = 0x262964u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
    // 0x262968: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x262968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26296c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26296cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262970: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x262970u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x262974: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x262974u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x262978: 0x460d0302  mul.s       $f12, $f0, $f13
    ctx->pc = 0x262978u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
label_26297c:
    // 0x26297c: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x26297cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_262980:
    // 0x262980: 0x93080  sll         $a2, $t1, 2
    ctx->pc = 0x262980u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x262984: 0x91830001  lbu         $v1, 0x1($t4)
    ctx->pc = 0x262984u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x262988: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x262988u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x26298c: 0x95650006  lhu         $a1, 0x6($t3)
    ctx->pc = 0x26298cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x262990: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x262990u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x262994: 0xc33018  mult        $a2, $a2, $v1
    ctx->pc = 0x262994u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x262998: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x262998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x26299c: 0x37080  sll         $t6, $v1, 2
    ctx->pc = 0x26299cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2629a0: 0x95870002  lhu         $a3, 0x2($t4)
    ctx->pc = 0x2629a0u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x2629a4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2629a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2629a8: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2629a8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2629ac: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x2629acu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2629b0: 0x25230002  addiu       $v1, $t1, 0x2
    ctx->pc = 0x2629b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x2629b4: 0x6a182b  sltu        $v1, $v1, $t2
    ctx->pc = 0x2629b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2629b8: 0x1492823  subu        $a1, $t2, $t1
    ctx->pc = 0x2629b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x2629bc: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2629bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2629c0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2629c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2629c4: 0xa3400a  movz        $t0, $a1, $v1
    ctx->pc = 0x2629c4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 5));
    // 0x2629c8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2629c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2629cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2629ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2629d0: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x2629d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2629d4: 0x1a42021  addu        $a0, $t5, $a0
    ctx->pc = 0x2629d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
    // 0x2629d8: 0x2d070002  sltiu       $a3, $t0, 0x2
    ctx->pc = 0x2629d8u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2629dc: 0x14e0000a  bnez        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x2629DCu;
    {
        const bool branch_taken_0x2629dc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2629E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2629DCu;
            // 0x2629e0: 0x460d0082  mul.s       $f2, $f0, $f13 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2629dc) {
            ctx->pc = 0x262A08u;
            goto label_262a08;
        }
    }
    ctx->pc = 0x2629E4u;
    // 0x2629e4: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x2629e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x2629e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2629e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2629ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2629ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2629f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2629f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2629f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2629f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2629f8: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x2629f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x2629fc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2629fcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x262a00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x262A00u;
    {
        const bool branch_taken_0x262a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262A00u;
            // 0x262a04: 0x46026001  sub.s       $f0, $f12, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x262a00) {
            ctx->pc = 0x262A10u;
            goto label_262a10;
        }
    }
    ctx->pc = 0x262A08u;
label_262a08:
    // 0x262a08: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x262a08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x262a0c: 0x46026001  sub.s       $f0, $f12, $f2
    ctx->pc = 0x262a0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
label_262a10:
    // 0x262a10: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x262a10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x262a14: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x262a14u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x262a18: 0x46026034  c.lt.s      $f12, $f2
    ctx->pc = 0x262a18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x262a1c: 0x0  nop
    ctx->pc = 0x262a1cu;
    // NOP
    // 0x262a20: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x262A20u;
    {
        const bool branch_taken_0x262a20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x262a20) {
            ctx->pc = 0x262A24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x262A20u;
            // 0x262a24: 0x46001306  mov.s       $f12, $f2 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x262A28u;
            goto label_262a28;
        }
    }
    ctx->pc = 0x262A28u;
label_262a28:
    // 0x262a28: 0x14e00038  bnez        $a3, . + 4 + (0x38 << 2)
    ctx->pc = 0x262A28u;
    {
        const bool branch_taken_0x262a28 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x262a28) {
            ctx->pc = 0x262B0Cu;
            goto label_262b0c;
        }
    }
    ctx->pc = 0x262A30u;
    // 0x262a30: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x262a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x262a34: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x262a34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x262a38: 0x46016001  sub.s       $f0, $f12, $f1
    ctx->pc = 0x262a38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x262a3c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x262a3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x262a40: 0x45000032  bc1f        . + 4 + (0x32 << 2)
    ctx->pc = 0x262A40u;
    {
        const bool branch_taken_0x262a40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x262a40) {
            ctx->pc = 0x262B0Cu;
            goto label_262b0c;
        }
    }
    ctx->pc = 0x262A48u;
    // 0x262a48: 0x46016040  add.s       $f1, $f12, $f1
    ctx->pc = 0x262a48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x262a4c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x262a4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x262a50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x262a50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262a54: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x262a54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x262a58: 0x0  nop
    ctx->pc = 0x262a58u;
    // NOP
    // 0x262a5c: 0x4500002b  bc1f        . + 4 + (0x2B << 2)
    ctx->pc = 0x262A5Cu;
    {
        const bool branch_taken_0x262a5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x262A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262A5Cu;
            // 0x262a60: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262a5c) {
            ctx->pc = 0x262B0Cu;
            goto label_262b0c;
        }
    }
    ctx->pc = 0x262A64u;
    // 0x262a64: 0x91890000  lbu         $t1, 0x0($t4)
    ctx->pc = 0x262a64u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x262a68: 0x11200026  beqz        $t1, . + 4 + (0x26 << 2)
    ctx->pc = 0x262A68u;
    {
        const bool branch_taken_0x262a68 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x262A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262A68u;
            // 0x262a6c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262a68) {
            ctx->pc = 0x262B04u;
            goto label_262b04;
        }
    }
    ctx->pc = 0x262A70u;
    // 0x262a70: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x262a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262a74: 0x0  nop
    ctx->pc = 0x262a74u;
    // NOP
label_262a78:
    // 0x262a78: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x262a78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x262a7c: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x262a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x262a80: 0x84470004  lh          $a3, 0x4($v0)
    ctx->pc = 0x262a80u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x262a84: 0x50e0001c  beql        $a3, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x262A84u;
    {
        const bool branch_taken_0x262a84 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x262a84) {
            ctx->pc = 0x262A88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x262A84u;
            // 0x262a88: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x262AF8u;
            goto label_262af8;
        }
    }
    ctx->pc = 0x262A8Cu;
    // 0x262a8c: 0xce1021  addu        $v0, $a2, $t6
    ctx->pc = 0x262a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 14)));
label_262a90:
    // 0x262a90: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x262a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x262a94: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x262a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x262a98: 0x71823  negu        $v1, $a3
    ctx->pc = 0x262a98u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x262a9c: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x262a9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x262aa0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x262aa0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x262aa4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x262aa4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x262aa8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x262aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x262aac: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x262aacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x262ab0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x262ab0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262ab4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x262ab4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x262ab8: 0x32023  negu        $a0, $v1
    ctx->pc = 0x262ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x262abc: 0x70802004  plzcw       $a0, $a0
    ctx->pc = 0x262abcu;
    { uint64_t v = GPR_U64(ctx, 4); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 4, out); }
    // 0x262ac0: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x262ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x262ac4: 0xe31826  xor         $v1, $a3, $v1
    ctx->pc = 0x262ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 3));
    // 0x262ac8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x262ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x262acc: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x262accu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x262ad0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x262ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x262ad4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x262ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x262ad8: 0x33c03  sra         $a3, $v1, 16
    ctx->pc = 0x262ad8u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 16));
    // 0x262adc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x262adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x262ae0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x262ae0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x262ae4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x262ae4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x262ae8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x262ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x262aec: 0x14e0ffe8  bnez        $a3, . + 4 + (-0x18 << 2)
    ctx->pc = 0x262AECu;
    {
        const bool branch_taken_0x262aec = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x262AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262AECu;
            // 0x262af0: 0xce1021  addu        $v0, $a2, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262aec) {
            ctx->pc = 0x262A90u;
            runtime->cooperativeGuestYield();
            goto label_262a90;
        }
    }
    ctx->pc = 0x262AF4u;
    // 0x262af4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x262af4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_262af8:
    // 0x262af8: 0x109102b  sltu        $v0, $t0, $t1
    ctx->pc = 0x262af8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x262afc: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x262AFCu;
    {
        const bool branch_taken_0x262afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x262B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262AFCu;
            // 0x262b00: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262afc) {
            ctx->pc = 0x262A78u;
            runtime->cooperativeGuestYield();
            goto label_262a78;
        }
    }
    ctx->pc = 0x262B04u;
label_262b04:
    // 0x262b04: 0x3e00008  jr          $ra
    ctx->pc = 0x262B04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x262940u: goto label_262940;
            case 0x262960u: goto label_262960;
            case 0x26297Cu: goto label_26297c;
            case 0x262980u: goto label_262980;
            case 0x262A08u: goto label_262a08;
            case 0x262A10u: goto label_262a10;
            case 0x262A28u: goto label_262a28;
            case 0x262A78u: goto label_262a78;
            case 0x262A90u: goto label_262a90;
            case 0x262AF8u: goto label_262af8;
            case 0x262B04u: goto label_262b04;
            case 0x262B0Cu: goto label_262b0c;
            case 0x262B40u: goto label_262b40;
            case 0x262B58u: goto label_262b58;
            case 0x262B98u: goto label_262b98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x262B0Cu;
label_262b0c:
    // 0x262b0c: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x262b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x262b10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x262b10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262b14: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x262b14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x262b18: 0x918a0000  lbu         $t2, 0x0($t4)
    ctx->pc = 0x262b18u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x262b1c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x262b1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262b20: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x262b20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x262b24: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x262b24u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x262b28: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x262b28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x262b2c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x262b2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x262b30: 0x4e2818  mult        $a1, $v0, $t6
    ctx->pc = 0x262b30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x262b34: 0x1140fff3  beqz        $t2, . + 4 + (-0xD << 2)
    ctx->pc = 0x262B34u;
    {
        const bool branch_taken_0x262b34 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x262B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262B34u;
            // 0x262b38: 0xa33021  addu        $a2, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262b34) {
            ctx->pc = 0x262B04u;
            runtime->cooperativeGuestYield();
            goto label_262b04;
        }
    }
    ctx->pc = 0x262B3Cu;
    // 0x262b3c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x262b3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_262b40:
    // 0x262b40: 0x91040  sll         $v0, $t1, 1
    ctx->pc = 0x262b40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x262b44: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x262b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x262b48: 0x84470004  lh          $a3, 0x4($v0)
    ctx->pc = 0x262b48u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x262b4c: 0x50e00012  beql        $a3, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x262B4Cu;
    {
        const bool branch_taken_0x262b4c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x262b4c) {
            ctx->pc = 0x262B50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x262B4Cu;
            // 0x262b50: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x262B98u;
            goto label_262b98;
        }
    }
    ctx->pc = 0x262B54u;
    // 0x262b54: 0x0  nop
    ctx->pc = 0x262b54u;
    // NOP
label_262b58:
    // 0x262b58: 0x71023  negu        $v0, $a3
    ctx->pc = 0x262b58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x262b5c: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x262b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x262b60: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x262b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x262b64: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x262b64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x262b68: 0x22023  negu        $a0, $v0
    ctx->pc = 0x262b68u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x262b6c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x262b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x262b70: 0x70802004  plzcw       $a0, $a0
    ctx->pc = 0x262b70u;
    { uint64_t v = GPR_U64(ctx, 4); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 4, out); }
    // 0x262b74: 0xe21026  xor         $v0, $a3, $v0
    ctx->pc = 0x262b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 2));
    // 0x262b78: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x262b78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x262b7c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x262b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x262b80: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x262b80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x262b84: 0x23c03  sra         $a3, $v0, 16
    ctx->pc = 0x262b84u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 16));
    // 0x262b88: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x262b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x262b8c: 0x14e0fff2  bnez        $a3, . + 4 + (-0xE << 2)
    ctx->pc = 0x262B8Cu;
    {
        const bool branch_taken_0x262b8c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x262B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262B8Cu;
            // 0x262b90: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262b8c) {
            ctx->pc = 0x262B58u;
            runtime->cooperativeGuestYield();
            goto label_262b58;
        }
    }
    ctx->pc = 0x262B94u;
    // 0x262b94: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x262b94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_262b98:
    // 0x262b98: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x262b98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x262b9c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x262B9Cu;
    {
        const bool branch_taken_0x262b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x262BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262B9Cu;
            // 0x262ba0: 0x25080040  addiu       $t0, $t0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262b9c) {
            ctx->pc = 0x262B40u;
            runtime->cooperativeGuestYield();
            goto label_262b40;
        }
    }
    ctx->pc = 0x262BA4u;
    // 0x262ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x262BA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x262940u: goto label_262940;
            case 0x262960u: goto label_262960;
            case 0x26297Cu: goto label_26297c;
            case 0x262980u: goto label_262980;
            case 0x262A08u: goto label_262a08;
            case 0x262A10u: goto label_262a10;
            case 0x262A28u: goto label_262a28;
            case 0x262A78u: goto label_262a78;
            case 0x262A90u: goto label_262a90;
            case 0x262AF8u: goto label_262af8;
            case 0x262B04u: goto label_262b04;
            case 0x262B0Cu: goto label_262b0c;
            case 0x262B40u: goto label_262b40;
            case 0x262B58u: goto label_262b58;
            case 0x262B98u: goto label_262b98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x262BACu;
    // 0x262bac: 0x0  nop
    ctx->pc = 0x262bacu;
    // NOP
}
