#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_262100
// Address: 0x262100 - 0x2623d8
void entry_262100_0x2623d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_262100_0x2623d8");
#endif

    ctx->pc = 0x262100u;

    // 0x262100: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x262100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x262104: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x262104u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x262108: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x262108u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26210c: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x26210cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x262110: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x262110u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262114: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x262114u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262118: 0x460d0843  div.s       $f1, $f1, $f13
    ctx->pc = 0x262118u;
    if (ctx->f[13] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[13];
    // 0x26211c: 0x95680002  lhu         $t0, 0x2($t3)
    ctx->pc = 0x26211cu;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x262120: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x262120u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x262124: 0x956a0000  lhu         $t2, 0x0($t3)
    ctx->pc = 0x262124u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x262128: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x262128u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26212c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x26212cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x262130: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x262130u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x262134: 0x484823  subu        $t1, $v0, $t0
    ctx->pc = 0x262134u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x262138: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x262138u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x26213c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26213Cu;
    {
        const bool branch_taken_0x26213c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x262140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26213Cu;
            // 0x262140: 0xe0602d  daddu       $t4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26213c) {
            ctx->pc = 0x262158u;
            goto label_262158;
        }
    }
    ctx->pc = 0x262144u;
    // 0x262144: 0x2549ffff  addiu       $t1, $t2, -0x1
    ctx->pc = 0x262144u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x262148: 0x1281021  addu        $v0, $t1, $t0
    ctx->pc = 0x262148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x26214c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26214cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262150: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x262150u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x262154: 0x460d0302  mul.s       $f12, $f0, $f13
    ctx->pc = 0x262154u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
label_262158:
    // 0x262158: 0x523000f  bgezl       $t1, . + 4 + (0xF << 2)
    ctx->pc = 0x262158u;
    {
        const bool branch_taken_0x262158 = (GPR_S32(ctx, 9) >= 0);
        if (branch_taken_0x262158) {
            ctx->pc = 0x26215Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x262158u;
            // 0x26215c: 0x90820003  lbu         $v0, 0x3($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x262198u;
            goto label_262198;
        }
    }
    ctx->pc = 0x262160u;
    // 0x262160: 0x5000005  bltz        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x262160u;
    {
        const bool branch_taken_0x262160 = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x262164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262160u;
            // 0x262164: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262160) {
            ctx->pc = 0x262178u;
            goto label_262178;
        }
    }
    ctx->pc = 0x262168u;
    // 0x262168: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x262168u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26216c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x26216cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x262170: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x262170u;
    {
        const bool branch_taken_0x262170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262170u;
            // 0x262174: 0x460d0302  mul.s       $f12, $f0, $f13 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x262170) {
            ctx->pc = 0x262194u;
            goto label_262194;
        }
    }
    ctx->pc = 0x262178u;
label_262178:
    // 0x262178: 0x31020001  andi        $v0, $t0, 0x1
    ctx->pc = 0x262178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x26217c: 0x81842  srl         $v1, $t0, 1
    ctx->pc = 0x26217cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
    // 0x262180: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x262180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x262184: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x262184u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262188: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x262188u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x26218c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x26218cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x262190: 0x460d0302  mul.s       $f12, $f0, $f13
    ctx->pc = 0x262190u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
label_262194:
    // 0x262194: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x262194u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_262198:
    // 0x262198: 0x93080  sll         $a2, $t1, 2
    ctx->pc = 0x262198u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x26219c: 0x91830001  lbu         $v1, 0x1($t4)
    ctx->pc = 0x26219cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x2621a0: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x2621a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x2621a4: 0x95650006  lhu         $a1, 0x6($t3)
    ctx->pc = 0x2621a4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x2621a8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2621a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2621ac: 0xc33018  mult        $a2, $a2, $v1
    ctx->pc = 0x2621acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2621b0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2621b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2621b4: 0x37080  sll         $t6, $v1, 2
    ctx->pc = 0x2621b4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2621b8: 0x95870002  lhu         $a3, 0x2($t4)
    ctx->pc = 0x2621b8u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x2621bc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2621bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2621c0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2621c0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2621c4: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x2621c4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2621c8: 0x25230002  addiu       $v1, $t1, 0x2
    ctx->pc = 0x2621c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x2621cc: 0x6a182b  sltu        $v1, $v1, $t2
    ctx->pc = 0x2621ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2621d0: 0x1492823  subu        $a1, $t2, $t1
    ctx->pc = 0x2621d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x2621d4: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2621d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2621d8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2621d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2621dc: 0xa3400a  movz        $t0, $a1, $v1
    ctx->pc = 0x2621dcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 5));
    // 0x2621e0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2621e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2621e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2621e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2621e8: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x2621e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2621ec: 0x1a42021  addu        $a0, $t5, $a0
    ctx->pc = 0x2621ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
    // 0x2621f0: 0x2d070002  sltiu       $a3, $t0, 0x2
    ctx->pc = 0x2621f0u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2621f4: 0x14e0000a  bnez        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x2621F4u;
    {
        const bool branch_taken_0x2621f4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2621F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2621F4u;
            // 0x2621f8: 0x460d0082  mul.s       $f2, $f0, $f13 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2621f4) {
            ctx->pc = 0x262220u;
            goto label_262220;
        }
    }
    ctx->pc = 0x2621FCu;
    // 0x2621fc: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x2621fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x262200: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x262200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x262204: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x262204u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x262208: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x262208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26220c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x26220cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x262210: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x262210u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x262214: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x262214u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x262218: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x262218u;
    {
        const bool branch_taken_0x262218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26221Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262218u;
            // 0x26221c: 0x46026001  sub.s       $f0, $f12, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x262218) {
            ctx->pc = 0x262228u;
            goto label_262228;
        }
    }
    ctx->pc = 0x262220u;
label_262220:
    // 0x262220: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x262220u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x262224: 0x46026001  sub.s       $f0, $f12, $f2
    ctx->pc = 0x262224u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
label_262228:
    // 0x262228: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x262228u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26222c: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x26222cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x262230: 0x46026034  c.lt.s      $f12, $f2
    ctx->pc = 0x262230u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x262234: 0x0  nop
    ctx->pc = 0x262234u;
    // NOP
    // 0x262238: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x262238u;
    {
        const bool branch_taken_0x262238 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x262238) {
            ctx->pc = 0x26223Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x262238u;
            // 0x26223c: 0x46001306  mov.s       $f12, $f2 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x262240u;
            goto label_262240;
        }
    }
    ctx->pc = 0x262240u;
label_262240:
    // 0x262240: 0x14e00038  bnez        $a3, . + 4 + (0x38 << 2)
    ctx->pc = 0x262240u;
    {
        const bool branch_taken_0x262240 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x262240) {
            ctx->pc = 0x262324u;
            goto label_262324;
        }
    }
    ctx->pc = 0x262248u;
    // 0x262248: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x262248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x26224c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26224cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x262250: 0x46016001  sub.s       $f0, $f12, $f1
    ctx->pc = 0x262250u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x262254: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x262254u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x262258: 0x45000032  bc1f        . + 4 + (0x32 << 2)
    ctx->pc = 0x262258u;
    {
        const bool branch_taken_0x262258 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x262258) {
            ctx->pc = 0x262324u;
            goto label_262324;
        }
    }
    ctx->pc = 0x262260u;
    // 0x262260: 0x46016040  add.s       $f1, $f12, $f1
    ctx->pc = 0x262260u;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x262264: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x262264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x262268: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x262268u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26226c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26226cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x262270: 0x0  nop
    ctx->pc = 0x262270u;
    // NOP
    // 0x262274: 0x4500002b  bc1f        . + 4 + (0x2B << 2)
    ctx->pc = 0x262274u;
    {
        const bool branch_taken_0x262274 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x262278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262274u;
            // 0x262278: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262274) {
            ctx->pc = 0x262324u;
            goto label_262324;
        }
    }
    ctx->pc = 0x26227Cu;
    // 0x26227c: 0x91890000  lbu         $t1, 0x0($t4)
    ctx->pc = 0x26227cu;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x262280: 0x11200026  beqz        $t1, . + 4 + (0x26 << 2)
    ctx->pc = 0x262280u;
    {
        const bool branch_taken_0x262280 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x262284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262280u;
            // 0x262284: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262280) {
            ctx->pc = 0x26231Cu;
            goto label_26231c;
        }
    }
    ctx->pc = 0x262288u;
    // 0x262288: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x262288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26228c: 0x0  nop
    ctx->pc = 0x26228cu;
    // NOP
label_262290:
    // 0x262290: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x262290u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x262294: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x262294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x262298: 0x84470004  lh          $a3, 0x4($v0)
    ctx->pc = 0x262298u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26229c: 0x50e0001c  beql        $a3, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x26229Cu;
    {
        const bool branch_taken_0x26229c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x26229c) {
            ctx->pc = 0x2622A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26229Cu;
            // 0x2622a0: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x262310u;
            goto label_262310;
        }
    }
    ctx->pc = 0x2622A4u;
    // 0x2622a4: 0x0  nop
    ctx->pc = 0x2622a4u;
    // NOP
label_2622a8:
    // 0x2622a8: 0xce1021  addu        $v0, $a2, $t6
    ctx->pc = 0x2622a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 14)));
    // 0x2622ac: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2622acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2622b0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2622b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2622b4: 0x71823  negu        $v1, $a3
    ctx->pc = 0x2622b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x2622b8: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x2622b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x2622bc: 0x3c014580  lui         $at, 0x4580
    ctx->pc = 0x2622bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17792 << 16));
    // 0x2622c0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2622c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2622c4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2622c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2622c8: 0x31023  negu        $v0, $v1
    ctx->pc = 0x2622c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x2622cc: 0x70401004  plzcw       $v0, $v0
    ctx->pc = 0x2622ccu;
    { uint64_t v = GPR_U64(ctx, 2); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 2, out); }
    // 0x2622d0: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x2622d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2622d4: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x2622d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2622d8: 0xe31826  xor         $v1, $a3, $v1
    ctx->pc = 0x2622d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 3));
    // 0x2622dc: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x2622dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x2622e0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2622e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2622e4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2622e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2622e8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2622e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2622ec: 0x33c03  sra         $a3, $v1, 16
    ctx->pc = 0x2622ecu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 16));
    // 0x2622f0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2622f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2622f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2622f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2622f8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2622f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2622fc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2622fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x262300: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x262300u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x262304: 0x14e0ffe8  bnez        $a3, . + 4 + (-0x18 << 2)
    ctx->pc = 0x262304u;
    {
        const bool branch_taken_0x262304 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x262308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262304u;
            // 0x262308: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262304) {
            ctx->pc = 0x2622A8u;
            runtime->cooperativeGuestYield();
            goto label_2622a8;
        }
    }
    ctx->pc = 0x26230Cu;
    // 0x26230c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x26230cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_262310:
    // 0x262310: 0x109102b  sltu        $v0, $t0, $t1
    ctx->pc = 0x262310u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x262314: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x262314u;
    {
        const bool branch_taken_0x262314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x262318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262314u;
            // 0x262318: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262314) {
            ctx->pc = 0x262290u;
            runtime->cooperativeGuestYield();
            goto label_262290;
        }
    }
    ctx->pc = 0x26231Cu;
label_26231c:
    // 0x26231c: 0x3e00008  jr          $ra
    ctx->pc = 0x26231Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x262158u: goto label_262158;
            case 0x262178u: goto label_262178;
            case 0x262194u: goto label_262194;
            case 0x262198u: goto label_262198;
            case 0x262220u: goto label_262220;
            case 0x262228u: goto label_262228;
            case 0x262240u: goto label_262240;
            case 0x262290u: goto label_262290;
            case 0x2622A8u: goto label_2622a8;
            case 0x262310u: goto label_262310;
            case 0x26231Cu: goto label_26231c;
            case 0x262324u: goto label_262324;
            case 0x262358u: goto label_262358;
            case 0x262370u: goto label_262370;
            case 0x2623C4u: goto label_2623c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x262324u;
label_262324:
    // 0x262324: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x262324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x262328: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x262328u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26232c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x26232cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x262330: 0x91890000  lbu         $t1, 0x0($t4)
    ctx->pc = 0x262330u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x262334: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x262334u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262338: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x262338u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x26233c: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x26233cu;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x262340: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x262340u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x262344: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x262344u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x262348: 0x4e2818  mult        $a1, $v0, $t6
    ctx->pc = 0x262348u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x26234c: 0x1120fff3  beqz        $t1, . + 4 + (-0xD << 2)
    ctx->pc = 0x26234Cu;
    {
        const bool branch_taken_0x26234c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x262350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26234Cu;
            // 0x262350: 0xa33021  addu        $a2, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26234c) {
            ctx->pc = 0x26231Cu;
            runtime->cooperativeGuestYield();
            goto label_26231c;
        }
    }
    ctx->pc = 0x262354u;
    // 0x262354: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x262354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_262358:
    // 0x262358: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x262358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x26235c: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x26235cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x262360: 0x84470004  lh          $a3, 0x4($v0)
    ctx->pc = 0x262360u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x262364: 0x50e00017  beql        $a3, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x262364u;
    {
        const bool branch_taken_0x262364 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x262364) {
            ctx->pc = 0x262368u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x262364u;
            // 0x262368: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2623C4u;
            goto label_2623c4;
        }
    }
    ctx->pc = 0x26236Cu;
    // 0x26236c: 0x0  nop
    ctx->pc = 0x26236cu;
    // NOP
label_262370:
    // 0x262370: 0x72023  negu        $a0, $a3
    ctx->pc = 0x262370u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x262374: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x262374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262378: 0xe42024  and         $a0, $a3, $a0
    ctx->pc = 0x262378u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x26237c: 0x3c014580  lui         $at, 0x4580
    ctx->pc = 0x26237cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17792 << 16));
    // 0x262380: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x262380u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x262384: 0x41823  negu        $v1, $a0
    ctx->pc = 0x262384u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x262388: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x262388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x26238c: 0x70601804  plzcw       $v1, $v1
    ctx->pc = 0x26238cu;
    { uint64_t v = GPR_U64(ctx, 3); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 3, out); }
    // 0x262390: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x262390u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x262394: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x262394u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x262398: 0xe42026  xor         $a0, $a3, $a0
    ctx->pc = 0x262398u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 4));
    // 0x26239c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26239cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2623a0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2623a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2623a4: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2623a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2623a8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2623a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2623ac: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2623acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2623b0: 0x43c03  sra         $a3, $a0, 16
    ctx->pc = 0x2623b0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 4), 16));
    // 0x2623b4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2623b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2623b8: 0x14e0ffed  bnez        $a3, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2623B8u;
    {
        const bool branch_taken_0x2623b8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2623BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2623B8u;
            // 0x2623bc: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2623b8) {
            ctx->pc = 0x262370u;
            runtime->cooperativeGuestYield();
            goto label_262370;
        }
    }
    ctx->pc = 0x2623C0u;
    // 0x2623c0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2623c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_2623c4:
    // 0x2623c4: 0x109102b  sltu        $v0, $t0, $t1
    ctx->pc = 0x2623c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2623c8: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x2623C8u;
    {
        const bool branch_taken_0x2623c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2623CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2623C8u;
            // 0x2623cc: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2623c8) {
            ctx->pc = 0x262358u;
            runtime->cooperativeGuestYield();
            goto label_262358;
        }
    }
    ctx->pc = 0x2623D0u;
    // 0x2623d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2623D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x262158u: goto label_262158;
            case 0x262178u: goto label_262178;
            case 0x262194u: goto label_262194;
            case 0x262198u: goto label_262198;
            case 0x262220u: goto label_262220;
            case 0x262228u: goto label_262228;
            case 0x262240u: goto label_262240;
            case 0x262290u: goto label_262290;
            case 0x2622A8u: goto label_2622a8;
            case 0x262310u: goto label_262310;
            case 0x26231Cu: goto label_26231c;
            case 0x262324u: goto label_262324;
            case 0x262358u: goto label_262358;
            case 0x262370u: goto label_262370;
            case 0x2623C4u: goto label_2623c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2623D8u;
}
