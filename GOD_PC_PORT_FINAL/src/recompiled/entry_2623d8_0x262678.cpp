#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2623d8
// Address: 0x2623d8 - 0x262678
void entry_2623d8_0x262678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2623d8_0x262678");
#endif

    ctx->pc = 0x2623d8u;

    // 0x2623d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2623d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2623dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2623dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2623e0: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2623e0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2623e4: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x2623e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x2623e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2623e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2623ec: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x2623ecu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2623f0: 0x460d0843  div.s       $f1, $f1, $f13
    ctx->pc = 0x2623f0u;
    if (ctx->f[13] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[13];
    // 0x2623f4: 0x95680002  lhu         $t0, 0x2($t3)
    ctx->pc = 0x2623f4u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x2623f8: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x2623f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x2623fc: 0x956a0000  lhu         $t2, 0x0($t3)
    ctx->pc = 0x2623fcu;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x262400: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x262400u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x262404: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x262404u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x262408: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x262408u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26240c: 0x484823  subu        $t1, $v0, $t0
    ctx->pc = 0x26240cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x262410: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x262410u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x262414: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x262414u;
    {
        const bool branch_taken_0x262414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x262418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262414u;
            // 0x262418: 0xe0602d  daddu       $t4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262414) {
            ctx->pc = 0x262430u;
            goto label_262430;
        }
    }
    ctx->pc = 0x26241Cu;
    // 0x26241c: 0x2549ffff  addiu       $t1, $t2, -0x1
    ctx->pc = 0x26241cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x262420: 0x1281021  addu        $v0, $t1, $t0
    ctx->pc = 0x262420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x262424: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x262424u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262428: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x262428u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x26242c: 0x460d0302  mul.s       $f12, $f0, $f13
    ctx->pc = 0x26242cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
label_262430:
    // 0x262430: 0x523000f  bgezl       $t1, . + 4 + (0xF << 2)
    ctx->pc = 0x262430u;
    {
        const bool branch_taken_0x262430 = (GPR_S32(ctx, 9) >= 0);
        if (branch_taken_0x262430) {
            ctx->pc = 0x262434u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x262430u;
            // 0x262434: 0x90820003  lbu         $v0, 0x3($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x262470u;
            goto label_262470;
        }
    }
    ctx->pc = 0x262438u;
    // 0x262438: 0x5000005  bltz        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x262438u;
    {
        const bool branch_taken_0x262438 = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x26243Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262438u;
            // 0x26243c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262438) {
            ctx->pc = 0x262450u;
            goto label_262450;
        }
    }
    ctx->pc = 0x262440u;
    // 0x262440: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x262440u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262444: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x262444u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x262448: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x262448u;
    {
        const bool branch_taken_0x262448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26244Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262448u;
            // 0x26244c: 0x460d0302  mul.s       $f12, $f0, $f13 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x262448) {
            ctx->pc = 0x26246Cu;
            goto label_26246c;
        }
    }
    ctx->pc = 0x262450u;
label_262450:
    // 0x262450: 0x31020001  andi        $v0, $t0, 0x1
    ctx->pc = 0x262450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x262454: 0x81842  srl         $v1, $t0, 1
    ctx->pc = 0x262454u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
    // 0x262458: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x262458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26245c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26245cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262460: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x262460u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x262464: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x262464u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x262468: 0x460d0302  mul.s       $f12, $f0, $f13
    ctx->pc = 0x262468u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
label_26246c:
    // 0x26246c: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x26246cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_262470:
    // 0x262470: 0x93080  sll         $a2, $t1, 2
    ctx->pc = 0x262470u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x262474: 0x91830001  lbu         $v1, 0x1($t4)
    ctx->pc = 0x262474u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x262478: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x262478u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x26247c: 0x95650006  lhu         $a1, 0x6($t3)
    ctx->pc = 0x26247cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x262480: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x262480u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x262484: 0xc33018  mult        $a2, $a2, $v1
    ctx->pc = 0x262484u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x262488: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x262488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x26248c: 0x37080  sll         $t6, $v1, 2
    ctx->pc = 0x26248cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x262490: 0x95870002  lhu         $a3, 0x2($t4)
    ctx->pc = 0x262490u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x262494: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x262494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x262498: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x262498u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26249c: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x26249cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2624a0: 0x25230001  addiu       $v1, $t1, 0x1
    ctx->pc = 0x2624a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2624a4: 0x6a182b  sltu        $v1, $v1, $t2
    ctx->pc = 0x2624a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2624a8: 0x1492823  subu        $a1, $t2, $t1
    ctx->pc = 0x2624a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x2624ac: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2624acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2624b0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2624b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2624b4: 0xa3400a  movz        $t0, $a1, $v1
    ctx->pc = 0x2624b4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 5));
    // 0x2624b8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2624b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2624bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2624bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2624c0: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x2624c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2624c4: 0x1a42021  addu        $a0, $t5, $a0
    ctx->pc = 0x2624c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
    // 0x2624c8: 0x2d070002  sltiu       $a3, $t0, 0x2
    ctx->pc = 0x2624c8u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2624cc: 0x14e0000a  bnez        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x2624CCu;
    {
        const bool branch_taken_0x2624cc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2624D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2624CCu;
            // 0x2624d0: 0x460d0082  mul.s       $f2, $f0, $f13 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2624cc) {
            ctx->pc = 0x2624F8u;
            goto label_2624f8;
        }
    }
    ctx->pc = 0x2624D4u;
    // 0x2624d4: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x2624d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x2624d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2624d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2624dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2624dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2624e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2624e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2624e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2624e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2624e8: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x2624e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x2624ec: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2624ecu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x2624f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2624F0u;
    {
        const bool branch_taken_0x2624f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2624F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2624F0u;
            // 0x2624f4: 0x46026001  sub.s       $f0, $f12, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2624f0) {
            ctx->pc = 0x262500u;
            goto label_262500;
        }
    }
    ctx->pc = 0x2624F8u;
label_2624f8:
    // 0x2624f8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2624f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2624fc: 0x46026001  sub.s       $f0, $f12, $f2
    ctx->pc = 0x2624fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
label_262500:
    // 0x262500: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x262500u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x262504: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x262504u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x262508: 0x46026034  c.lt.s      $f12, $f2
    ctx->pc = 0x262508u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26250c: 0x0  nop
    ctx->pc = 0x26250cu;
    // NOP
    // 0x262510: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x262510u;
    {
        const bool branch_taken_0x262510 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x262510) {
            ctx->pc = 0x262514u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x262510u;
            // 0x262514: 0x46001306  mov.s       $f12, $f2 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x262518u;
            goto label_262518;
        }
    }
    ctx->pc = 0x262518u;
label_262518:
    // 0x262518: 0x14e0002e  bnez        $a3, . + 4 + (0x2E << 2)
    ctx->pc = 0x262518u;
    {
        const bool branch_taken_0x262518 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x262518) {
            ctx->pc = 0x2625D4u;
            goto label_2625d4;
        }
    }
    ctx->pc = 0x262520u;
    // 0x262520: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x262520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x262524: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x262524u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x262528: 0x46016001  sub.s       $f0, $f12, $f1
    ctx->pc = 0x262528u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x26252c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x26252cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x262530: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x262530u;
    {
        const bool branch_taken_0x262530 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x262530) {
            ctx->pc = 0x2625D4u;
            goto label_2625d4;
        }
    }
    ctx->pc = 0x262538u;
    // 0x262538: 0x46016040  add.s       $f1, $f12, $f1
    ctx->pc = 0x262538u;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x26253c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26253cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x262540: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x262540u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262544: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x262544u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x262548: 0x0  nop
    ctx->pc = 0x262548u;
    // NOP
    // 0x26254c: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x26254Cu;
    {
        const bool branch_taken_0x26254c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x262550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26254Cu;
            // 0x262550: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26254c) {
            ctx->pc = 0x2625D4u;
            goto label_2625d4;
        }
    }
    ctx->pc = 0x262554u;
    // 0x262554: 0x918a0000  lbu         $t2, 0x0($t4)
    ctx->pc = 0x262554u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x262558: 0x1140001c  beqz        $t2, . + 4 + (0x1C << 2)
    ctx->pc = 0x262558u;
    {
        const bool branch_taken_0x262558 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x26255Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262558u;
            // 0x26255c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262558) {
            ctx->pc = 0x2625CCu;
            goto label_2625cc;
        }
    }
    ctx->pc = 0x262560u;
    // 0x262560: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x262560u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262564: 0x0  nop
    ctx->pc = 0x262564u;
    // NOP
label_262568:
    // 0x262568: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x262568u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x26256c: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x26256cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x262570: 0x84470004  lh          $a3, 0x4($v0)
    ctx->pc = 0x262570u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x262574: 0x50e00012  beql        $a3, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x262574u;
    {
        const bool branch_taken_0x262574 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x262574) {
            ctx->pc = 0x262578u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x262574u;
            // 0x262578: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2625C0u;
            goto label_2625c0;
        }
    }
    ctx->pc = 0x26257Cu;
    // 0x26257c: 0x0  nop
    ctx->pc = 0x26257cu;
    // NOP
label_262580:
    // 0x262580: 0x71023  negu        $v0, $a3
    ctx->pc = 0x262580u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x262584: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x262584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x262588: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x262588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x26258c: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x26258cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x262590: 0x22023  negu        $a0, $v0
    ctx->pc = 0x262590u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x262594: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x262594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x262598: 0x70802004  plzcw       $a0, $a0
    ctx->pc = 0x262598u;
    { uint64_t v = GPR_U64(ctx, 4); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 4, out); }
    // 0x26259c: 0xe21026  xor         $v0, $a3, $v0
    ctx->pc = 0x26259cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 2));
    // 0x2625a0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2625a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2625a4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2625a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2625a8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2625a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2625ac: 0x23c03  sra         $a3, $v0, 16
    ctx->pc = 0x2625acu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2625b0: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2625b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2625b4: 0x14e0fff2  bnez        $a3, . + 4 + (-0xE << 2)
    ctx->pc = 0x2625B4u;
    {
        const bool branch_taken_0x2625b4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2625B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2625B4u;
            // 0x2625b8: 0xa4650000  sh          $a1, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2625b4) {
            ctx->pc = 0x262580u;
            runtime->cooperativeGuestYield();
            goto label_262580;
        }
    }
    ctx->pc = 0x2625BCu;
    // 0x2625bc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2625bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_2625c0:
    // 0x2625c0: 0x10a102b  sltu        $v0, $t0, $t2
    ctx->pc = 0x2625c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2625c4: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2625C4u;
    {
        const bool branch_taken_0x2625c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2625C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2625C4u;
            // 0x2625c8: 0x25290020  addiu       $t1, $t1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2625c4) {
            ctx->pc = 0x262568u;
            runtime->cooperativeGuestYield();
            goto label_262568;
        }
    }
    ctx->pc = 0x2625CCu;
label_2625cc:
    // 0x2625cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2625CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x262430u: goto label_262430;
            case 0x262450u: goto label_262450;
            case 0x26246Cu: goto label_26246c;
            case 0x262470u: goto label_262470;
            case 0x2624F8u: goto label_2624f8;
            case 0x262500u: goto label_262500;
            case 0x262518u: goto label_262518;
            case 0x262568u: goto label_262568;
            case 0x262580u: goto label_262580;
            case 0x2625C0u: goto label_2625c0;
            case 0x2625CCu: goto label_2625cc;
            case 0x2625D4u: goto label_2625d4;
            case 0x262608u: goto label_262608;
            case 0x262620u: goto label_262620;
            case 0x262660u: goto label_262660;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2625D4u;
label_2625d4:
    // 0x2625d4: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x2625d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x2625d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2625d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2625dc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2625dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2625e0: 0x918a0000  lbu         $t2, 0x0($t4)
    ctx->pc = 0x2625e0u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x2625e4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2625e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2625e8: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x2625e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x2625ec: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x2625ecu;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x2625f0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2625f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2625f4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2625f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2625f8: 0x4e2818  mult        $a1, $v0, $t6
    ctx->pc = 0x2625f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2625fc: 0x1140fff3  beqz        $t2, . + 4 + (-0xD << 2)
    ctx->pc = 0x2625FCu;
    {
        const bool branch_taken_0x2625fc = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x262600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2625FCu;
            // 0x262600: 0xa33021  addu        $a2, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2625fc) {
            ctx->pc = 0x2625CCu;
            runtime->cooperativeGuestYield();
            goto label_2625cc;
        }
    }
    ctx->pc = 0x262604u;
    // 0x262604: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x262604u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_262608:
    // 0x262608: 0x91040  sll         $v0, $t1, 1
    ctx->pc = 0x262608u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x26260c: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x26260cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x262610: 0x84470004  lh          $a3, 0x4($v0)
    ctx->pc = 0x262610u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x262614: 0x50e00012  beql        $a3, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x262614u;
    {
        const bool branch_taken_0x262614 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x262614) {
            ctx->pc = 0x262618u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x262614u;
            // 0x262618: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x262660u;
            goto label_262660;
        }
    }
    ctx->pc = 0x26261Cu;
    // 0x26261c: 0x0  nop
    ctx->pc = 0x26261cu;
    // NOP
label_262620:
    // 0x262620: 0x71023  negu        $v0, $a3
    ctx->pc = 0x262620u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x262624: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x262624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x262628: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x262628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x26262c: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x26262cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x262630: 0x22023  negu        $a0, $v0
    ctx->pc = 0x262630u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x262634: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x262634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x262638: 0x70802004  plzcw       $a0, $a0
    ctx->pc = 0x262638u;
    { uint64_t v = GPR_U64(ctx, 4); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 4, out); }
    // 0x26263c: 0xe21026  xor         $v0, $a3, $v0
    ctx->pc = 0x26263cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 2));
    // 0x262640: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x262640u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x262644: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x262644u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x262648: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x262648u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x26264c: 0x23c03  sra         $a3, $v0, 16
    ctx->pc = 0x26264cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 16));
    // 0x262650: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x262650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x262654: 0x14e0fff2  bnez        $a3, . + 4 + (-0xE << 2)
    ctx->pc = 0x262654u;
    {
        const bool branch_taken_0x262654 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x262658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262654u;
            // 0x262658: 0xa4650000  sh          $a1, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262654) {
            ctx->pc = 0x262620u;
            runtime->cooperativeGuestYield();
            goto label_262620;
        }
    }
    ctx->pc = 0x26265Cu;
    // 0x26265c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x26265cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_262660:
    // 0x262660: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x262660u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x262664: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x262664u;
    {
        const bool branch_taken_0x262664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x262668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262664u;
            // 0x262668: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262664) {
            ctx->pc = 0x262608u;
            runtime->cooperativeGuestYield();
            goto label_262608;
        }
    }
    ctx->pc = 0x26266Cu;
    // 0x26266c: 0x3e00008  jr          $ra
    ctx->pc = 0x26266Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x262430u: goto label_262430;
            case 0x262450u: goto label_262450;
            case 0x26246Cu: goto label_26246c;
            case 0x262470u: goto label_262470;
            case 0x2624F8u: goto label_2624f8;
            case 0x262500u: goto label_262500;
            case 0x262518u: goto label_262518;
            case 0x262568u: goto label_262568;
            case 0x262580u: goto label_262580;
            case 0x2625C0u: goto label_2625c0;
            case 0x2625CCu: goto label_2625cc;
            case 0x2625D4u: goto label_2625d4;
            case 0x262608u: goto label_262608;
            case 0x262620u: goto label_262620;
            case 0x262660u: goto label_262660;
            default: break;
        }
        return;
    }
    ctx->pc = 0x262674u;
    // 0x262674: 0x0  nop
    ctx->pc = 0x262674u;
    // NOP
}
