#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2315a8
// Address: 0x2315a8 - 0x231860
void entry_2315a8_0x231860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2315a8_0x231860");
#endif

    ctx->pc = 0x2315a8u;

    // 0x2315a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2315a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2315ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2315acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2315b0: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2315b0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2315b4: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x2315b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x2315b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2315b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2315bc: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x2315bcu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2315c0: 0x460d0843  div.s       $f1, $f1, $f13
    ctx->pc = 0x2315c0u;
    if (ctx->f[13] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[13];
    // 0x2315c4: 0x95680002  lhu         $t0, 0x2($t3)
    ctx->pc = 0x2315c4u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x2315c8: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x2315c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x2315cc: 0x956a0000  lhu         $t2, 0x0($t3)
    ctx->pc = 0x2315ccu;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2315d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2315d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2315d4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2315d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2315d8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2315d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2315dc: 0x484823  subu        $t1, $v0, $t0
    ctx->pc = 0x2315dcu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2315e0: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x2315e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2315e4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2315E4u;
    {
        const bool branch_taken_0x2315e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2315E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2315E4u;
            // 0x2315e8: 0xe0602d  daddu       $t4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2315e4) {
            ctx->pc = 0x231600u;
            goto label_231600;
        }
    }
    ctx->pc = 0x2315ECu;
    // 0x2315ec: 0x2549ffff  addiu       $t1, $t2, -0x1
    ctx->pc = 0x2315ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x2315f0: 0x1281021  addu        $v0, $t1, $t0
    ctx->pc = 0x2315f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x2315f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2315f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2315f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2315f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2315fc: 0x460d0302  mul.s       $f12, $f0, $f13
    ctx->pc = 0x2315fcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
label_231600:
    // 0x231600: 0x523000f  bgezl       $t1, . + 4 + (0xF << 2)
    ctx->pc = 0x231600u;
    {
        const bool branch_taken_0x231600 = (GPR_S32(ctx, 9) >= 0);
        if (branch_taken_0x231600) {
            ctx->pc = 0x231604u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x231600u;
            // 0x231604: 0x90820003  lbu         $v0, 0x3($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x231640u;
            goto label_231640;
        }
    }
    ctx->pc = 0x231608u;
    // 0x231608: 0x5000005  bltz        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x231608u;
    {
        const bool branch_taken_0x231608 = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x23160Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231608u;
            // 0x23160c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231608) {
            ctx->pc = 0x231620u;
            goto label_231620;
        }
    }
    ctx->pc = 0x231610u;
    // 0x231610: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x231610u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231614: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x231614u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x231618: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x231618u;
    {
        const bool branch_taken_0x231618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23161Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231618u;
            // 0x23161c: 0x460d0302  mul.s       $f12, $f0, $f13 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x231618) {
            ctx->pc = 0x23163Cu;
            goto label_23163c;
        }
    }
    ctx->pc = 0x231620u;
label_231620:
    // 0x231620: 0x31020001  andi        $v0, $t0, 0x1
    ctx->pc = 0x231620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x231624: 0x81842  srl         $v1, $t0, 1
    ctx->pc = 0x231624u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
    // 0x231628: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x231628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x23162c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23162cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231630: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x231630u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x231634: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x231634u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x231638: 0x460d0302  mul.s       $f12, $f0, $f13
    ctx->pc = 0x231638u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
label_23163c:
    // 0x23163c: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x23163cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_231640:
    // 0x231640: 0x93080  sll         $a2, $t1, 2
    ctx->pc = 0x231640u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x231644: 0x91830001  lbu         $v1, 0x1($t4)
    ctx->pc = 0x231644u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x231648: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x231648u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x23164c: 0x95650006  lhu         $a1, 0x6($t3)
    ctx->pc = 0x23164cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x231650: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x231650u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x231654: 0xc33018  mult        $a2, $a2, $v1
    ctx->pc = 0x231654u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x231658: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x231658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23165c: 0x37080  sll         $t6, $v1, 2
    ctx->pc = 0x23165cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x231660: 0x95870002  lhu         $a3, 0x2($t4)
    ctx->pc = 0x231660u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x231664: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x231664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x231668: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x231668u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23166c: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x23166cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x231670: 0x25230002  addiu       $v1, $t1, 0x2
    ctx->pc = 0x231670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x231674: 0x6a182b  sltu        $v1, $v1, $t2
    ctx->pc = 0x231674u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x231678: 0x1492823  subu        $a1, $t2, $t1
    ctx->pc = 0x231678u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x23167c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x23167cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x231680: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x231680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x231684: 0xa3400a  movz        $t0, $a1, $v1
    ctx->pc = 0x231684u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 5));
    // 0x231688: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x231688u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23168c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23168cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x231690: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x231690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x231694: 0x1a42021  addu        $a0, $t5, $a0
    ctx->pc = 0x231694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
    // 0x231698: 0x2d070002  sltiu       $a3, $t0, 0x2
    ctx->pc = 0x231698u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x23169c: 0x14e0000a  bnez        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x23169Cu;
    {
        const bool branch_taken_0x23169c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2316A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23169Cu;
            // 0x2316a0: 0x460d0082  mul.s       $f2, $f0, $f13 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23169c) {
            ctx->pc = 0x2316C8u;
            goto label_2316c8;
        }
    }
    ctx->pc = 0x2316A4u;
    // 0x2316a4: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x2316a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x2316a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2316a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2316ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2316acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2316b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2316b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2316b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2316b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2316b8: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x2316b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x2316bc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2316bcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x2316c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2316C0u;
    {
        const bool branch_taken_0x2316c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2316C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2316C0u;
            // 0x2316c4: 0x46026001  sub.s       $f0, $f12, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2316c0) {
            ctx->pc = 0x2316D0u;
            goto label_2316d0;
        }
    }
    ctx->pc = 0x2316C8u;
label_2316c8:
    // 0x2316c8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2316c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2316cc: 0x46026001  sub.s       $f0, $f12, $f2
    ctx->pc = 0x2316ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
label_2316d0:
    // 0x2316d0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2316d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2316d4: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x2316d4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2316d8: 0x46026034  c.lt.s      $f12, $f2
    ctx->pc = 0x2316d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2316dc: 0x0  nop
    ctx->pc = 0x2316dcu;
    // NOP
    // 0x2316e0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2316E0u;
    {
        const bool branch_taken_0x2316e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2316e0) {
            ctx->pc = 0x2316E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2316E0u;
            // 0x2316e4: 0x46001306  mov.s       $f12, $f2 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2316E8u;
            goto label_2316e8;
        }
    }
    ctx->pc = 0x2316E8u;
label_2316e8:
    // 0x2316e8: 0x14e00033  bnez        $a3, . + 4 + (0x33 << 2)
    ctx->pc = 0x2316E8u;
    {
        const bool branch_taken_0x2316e8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2316e8) {
            ctx->pc = 0x2317B8u;
            goto label_2317b8;
        }
    }
    ctx->pc = 0x2316F0u;
    // 0x2316f0: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x2316f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x2316f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2316f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2316f8: 0x46016001  sub.s       $f0, $f12, $f1
    ctx->pc = 0x2316f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x2316fc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2316fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231700: 0x4500002d  bc1f        . + 4 + (0x2D << 2)
    ctx->pc = 0x231700u;
    {
        const bool branch_taken_0x231700 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x231700) {
            ctx->pc = 0x2317B8u;
            goto label_2317b8;
        }
    }
    ctx->pc = 0x231708u;
    // 0x231708: 0x46016040  add.s       $f1, $f12, $f1
    ctx->pc = 0x231708u;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x23170c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23170cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x231710: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x231710u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231714: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x231714u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231718: 0x0  nop
    ctx->pc = 0x231718u;
    // NOP
    // 0x23171c: 0x45000026  bc1f        . + 4 + (0x26 << 2)
    ctx->pc = 0x23171Cu;
    {
        const bool branch_taken_0x23171c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x231720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23171Cu;
            // 0x231720: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23171c) {
            ctx->pc = 0x2317B8u;
            goto label_2317b8;
        }
    }
    ctx->pc = 0x231724u;
    // 0x231724: 0x91890000  lbu         $t1, 0x0($t4)
    ctx->pc = 0x231724u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x231728: 0x11200021  beqz        $t1, . + 4 + (0x21 << 2)
    ctx->pc = 0x231728u;
    {
        const bool branch_taken_0x231728 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x23172Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231728u;
            // 0x23172c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231728) {
            ctx->pc = 0x2317B0u;
            goto label_2317b0;
        }
    }
    ctx->pc = 0x231730u;
    // 0x231730: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x231730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231734: 0x0  nop
    ctx->pc = 0x231734u;
    // NOP
label_231738:
    // 0x231738: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x231738u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x23173c: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x23173cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x231740: 0x84470004  lh          $a3, 0x4($v0)
    ctx->pc = 0x231740u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x231744: 0x50e00017  beql        $a3, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x231744u;
    {
        const bool branch_taken_0x231744 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x231744) {
            ctx->pc = 0x231748u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x231744u;
            // 0x231748: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2317A4u;
            goto label_2317a4;
        }
    }
    ctx->pc = 0x23174Cu;
    // 0x23174c: 0x0  nop
    ctx->pc = 0x23174cu;
    // NOP
label_231750:
    // 0x231750: 0xce1021  addu        $v0, $a2, $t6
    ctx->pc = 0x231750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 14)));
    // 0x231754: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x231754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231758: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x231758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23175c: 0x71823  negu        $v1, $a3
    ctx->pc = 0x23175cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x231760: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x231760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x231764: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x231764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x231768: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x231768u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x23176c: 0x31023  negu        $v0, $v1
    ctx->pc = 0x23176cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x231770: 0x70401004  plzcw       $v0, $v0
    ctx->pc = 0x231770u;
    { uint64_t v = GPR_U64(ctx, 2); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 2, out); }
    // 0x231774: 0xe31826  xor         $v1, $a3, $v1
    ctx->pc = 0x231774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 3));
    // 0x231778: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x231778u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23177c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x23177cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x231780: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x231780u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x231784: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x231784u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x231788: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x231788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x23178c: 0x33c03  sra         $a3, $v1, 16
    ctx->pc = 0x23178cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 16));
    // 0x231790: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x231790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x231794: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x231794u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x231798: 0x14e0ffed  bnez        $a3, . + 4 + (-0x13 << 2)
    ctx->pc = 0x231798u;
    {
        const bool branch_taken_0x231798 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x23179Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231798u;
            // 0x23179c: 0xe4810000  swc1        $f1, 0x0($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x231798) {
            ctx->pc = 0x231750u;
            runtime->cooperativeGuestYield();
            goto label_231750;
        }
    }
    ctx->pc = 0x2317A0u;
    // 0x2317a0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2317a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_2317a4:
    // 0x2317a4: 0x109102b  sltu        $v0, $t0, $t1
    ctx->pc = 0x2317a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2317a8: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x2317A8u;
    {
        const bool branch_taken_0x2317a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2317ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2317A8u;
            // 0x2317ac: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2317a8) {
            ctx->pc = 0x231738u;
            runtime->cooperativeGuestYield();
            goto label_231738;
        }
    }
    ctx->pc = 0x2317B0u;
label_2317b0:
    // 0x2317b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2317B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x231600u: goto label_231600;
            case 0x231620u: goto label_231620;
            case 0x23163Cu: goto label_23163c;
            case 0x231640u: goto label_231640;
            case 0x2316C8u: goto label_2316c8;
            case 0x2316D0u: goto label_2316d0;
            case 0x2316E8u: goto label_2316e8;
            case 0x231738u: goto label_231738;
            case 0x231750u: goto label_231750;
            case 0x2317A4u: goto label_2317a4;
            case 0x2317B0u: goto label_2317b0;
            case 0x2317B8u: goto label_2317b8;
            case 0x2317F0u: goto label_2317f0;
            case 0x231808u: goto label_231808;
            case 0x231848u: goto label_231848;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2317B8u;
label_2317b8:
    // 0x2317b8: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x2317b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x2317bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2317bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2317c0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2317c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2317c4: 0x91890000  lbu         $t1, 0x0($t4)
    ctx->pc = 0x2317c4u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x2317c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2317c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2317cc: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x2317ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x2317d0: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x2317d0u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x2317d4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2317d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2317d8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2317d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2317dc: 0x4e2818  mult        $a1, $v0, $t6
    ctx->pc = 0x2317dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2317e0: 0x1120fff3  beqz        $t1, . + 4 + (-0xD << 2)
    ctx->pc = 0x2317E0u;
    {
        const bool branch_taken_0x2317e0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2317E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2317E0u;
            // 0x2317e4: 0xa33021  addu        $a2, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2317e0) {
            ctx->pc = 0x2317B0u;
            runtime->cooperativeGuestYield();
            goto label_2317b0;
        }
    }
    ctx->pc = 0x2317E8u;
    // 0x2317e8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2317e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2317ec: 0x0  nop
    ctx->pc = 0x2317ecu;
    // NOP
label_2317f0:
    // 0x2317f0: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x2317f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x2317f4: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x2317f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x2317f8: 0x84470004  lh          $a3, 0x4($v0)
    ctx->pc = 0x2317f8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2317fc: 0x50e00012  beql        $a3, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2317FCu;
    {
        const bool branch_taken_0x2317fc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2317fc) {
            ctx->pc = 0x231800u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2317FCu;
            // 0x231800: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x231848u;
            goto label_231848;
        }
    }
    ctx->pc = 0x231804u;
    // 0x231804: 0x0  nop
    ctx->pc = 0x231804u;
    // NOP
label_231808:
    // 0x231808: 0x71023  negu        $v0, $a3
    ctx->pc = 0x231808u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x23180c: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x23180cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x231810: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x231810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x231814: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x231814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231818: 0x22023  negu        $a0, $v0
    ctx->pc = 0x231818u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x23181c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x23181cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x231820: 0x70802004  plzcw       $a0, $a0
    ctx->pc = 0x231820u;
    { uint64_t v = GPR_U64(ctx, 4); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 4, out); }
    // 0x231824: 0xe21026  xor         $v0, $a3, $v0
    ctx->pc = 0x231824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 2));
    // 0x231828: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x231828u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x23182c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x23182cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x231830: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x231830u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x231834: 0x23c03  sra         $a3, $v0, 16
    ctx->pc = 0x231834u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 16));
    // 0x231838: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x231838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x23183c: 0x14e0fff2  bnez        $a3, . + 4 + (-0xE << 2)
    ctx->pc = 0x23183Cu;
    {
        const bool branch_taken_0x23183c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x231840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23183Cu;
            // 0x231840: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23183c) {
            ctx->pc = 0x231808u;
            runtime->cooperativeGuestYield();
            goto label_231808;
        }
    }
    ctx->pc = 0x231844u;
    // 0x231844: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x231844u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_231848:
    // 0x231848: 0x109102b  sltu        $v0, $t0, $t1
    ctx->pc = 0x231848u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x23184c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x23184Cu;
    {
        const bool branch_taken_0x23184c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x231850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23184Cu;
            // 0x231850: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23184c) {
            ctx->pc = 0x2317F0u;
            runtime->cooperativeGuestYield();
            goto label_2317f0;
        }
    }
    ctx->pc = 0x231854u;
    // 0x231854: 0x3e00008  jr          $ra
    ctx->pc = 0x231854u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x231600u: goto label_231600;
            case 0x231620u: goto label_231620;
            case 0x23163Cu: goto label_23163c;
            case 0x231640u: goto label_231640;
            case 0x2316C8u: goto label_2316c8;
            case 0x2316D0u: goto label_2316d0;
            case 0x2316E8u: goto label_2316e8;
            case 0x231738u: goto label_231738;
            case 0x231750u: goto label_231750;
            case 0x2317A4u: goto label_2317a4;
            case 0x2317B0u: goto label_2317b0;
            case 0x2317B8u: goto label_2317b8;
            case 0x2317F0u: goto label_2317f0;
            case 0x231808u: goto label_231808;
            case 0x231848u: goto label_231848;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23185Cu;
    // 0x23185c: 0x0  nop
    ctx->pc = 0x23185cu;
    // NOP
}
