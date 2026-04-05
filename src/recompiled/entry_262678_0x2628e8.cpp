#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_262678
// Address: 0x262678 - 0x2628e8
void entry_262678_0x2628e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_262678_0x2628e8");
#endif

    ctx->pc = 0x262678u;

    // 0x262678: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x262678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26267c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26267cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x262680: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x262680u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262684: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x262684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x262688: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x262688u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26268c: 0x460d0843  div.s       $f1, $f1, $f13
    ctx->pc = 0x26268cu;
    if (ctx->f[13] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[13];
    // 0x262690: 0x94c80002  lhu         $t0, 0x2($a2)
    ctx->pc = 0x262690u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x262694: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x262694u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x262698: 0x94ca0000  lhu         $t2, 0x0($a2)
    ctx->pc = 0x262698u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x26269c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x26269cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2626a0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2626a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2626a4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2626a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2626a8: 0x484823  subu        $t1, $v0, $t0
    ctx->pc = 0x2626a8u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2626ac: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x2626acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2626b0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2626B0u;
    {
        const bool branch_taken_0x2626b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2626B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2626B0u;
            // 0x2626b4: 0xe0602d  daddu       $t4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2626b0) {
            ctx->pc = 0x2626CCu;
            goto label_2626cc;
        }
    }
    ctx->pc = 0x2626B8u;
    // 0x2626b8: 0x2549ffff  addiu       $t1, $t2, -0x1
    ctx->pc = 0x2626b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x2626bc: 0x1281021  addu        $v0, $t1, $t0
    ctx->pc = 0x2626bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x2626c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2626c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2626c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2626c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2626c8: 0x460d0302  mul.s       $f12, $f0, $f13
    ctx->pc = 0x2626c8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
label_2626cc:
    // 0x2626cc: 0x523000f  bgezl       $t1, . + 4 + (0xF << 2)
    ctx->pc = 0x2626CCu;
    {
        const bool branch_taken_0x2626cc = (GPR_S32(ctx, 9) >= 0);
        if (branch_taken_0x2626cc) {
            ctx->pc = 0x2626D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2626CCu;
            // 0x2626d0: 0x90820003  lbu         $v0, 0x3($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26270Cu;
            goto label_26270c;
        }
    }
    ctx->pc = 0x2626D4u;
    // 0x2626d4: 0x5000005  bltz        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2626D4u;
    {
        const bool branch_taken_0x2626d4 = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x2626D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2626D4u;
            // 0x2626d8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2626d4) {
            ctx->pc = 0x2626ECu;
            goto label_2626ec;
        }
    }
    ctx->pc = 0x2626DCu;
    // 0x2626dc: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2626dcu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2626e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2626e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2626e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2626E4u;
    {
        const bool branch_taken_0x2626e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2626E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2626E4u;
            // 0x2626e8: 0x460d0302  mul.s       $f12, $f0, $f13 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2626e4) {
            ctx->pc = 0x262708u;
            goto label_262708;
        }
    }
    ctx->pc = 0x2626ECu;
label_2626ec:
    // 0x2626ec: 0x31020001  andi        $v0, $t0, 0x1
    ctx->pc = 0x2626ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x2626f0: 0x81842  srl         $v1, $t0, 1
    ctx->pc = 0x2626f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
    // 0x2626f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2626f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2626f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2626f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2626fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2626fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x262700: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x262700u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x262704: 0x460d0302  mul.s       $f12, $f0, $f13
    ctx->pc = 0x262704u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
label_262708:
    // 0x262708: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x262708u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_26270c:
    // 0x26270c: 0x1283821  addu        $a3, $t1, $t0
    ctx->pc = 0x26270cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x262710: 0x91850001  lbu         $a1, 0x1($t4)
    ctx->pc = 0x262710u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x262714: 0x1494023  subu        $t0, $t2, $t1
    ctx->pc = 0x262714u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x262718: 0x94c30006  lhu         $v1, 0x6($a2)
    ctx->pc = 0x262718u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x26271c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x26271cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x262720: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x262720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x262724: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x262724u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262728: 0x1252818  mult        $a1, $t1, $a1
    ctx->pc = 0x262728u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x26272c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26272cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x262730: 0x12a182b  sltu        $v1, $t1, $t2
    ctx->pc = 0x262730u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x262734: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x262734u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x262738: 0x95860002  lhu         $a2, 0x2($t4)
    ctx->pc = 0x262738u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x26273c: 0x3400b  movn        $t0, $zero, $v1
    ctx->pc = 0x26273cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
    // 0x262740: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x262740u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262744: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x262744u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262748: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x262748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x26274c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x26274cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x262750: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x262750u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x262754: 0x2c690002  sltiu       $t1, $v1, 0x2
    ctx->pc = 0x262754u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x262758: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x262758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x26275c: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x26275cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x262760: 0x1520000a  bnez        $t1, . + 4 + (0xA << 2)
    ctx->pc = 0x262760u;
    {
        const bool branch_taken_0x262760 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x262764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262760u;
            // 0x262764: 0x460d0082  mul.s       $f2, $f0, $f13 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x262760) {
            ctx->pc = 0x26278Cu;
            goto label_26278c;
        }
    }
    ctx->pc = 0x262768u;
    // 0x262768: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x262768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x26276c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26276cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x262770: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x262770u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x262774: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x262774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262778: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x262778u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x26277c: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x26277cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x262780: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x262780u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x262784: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x262784u;
    {
        const bool branch_taken_0x262784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262784u;
            // 0x262788: 0x46026001  sub.s       $f0, $f12, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x262784) {
            ctx->pc = 0x262794u;
            goto label_262794;
        }
    }
    ctx->pc = 0x26278Cu;
label_26278c:
    // 0x26278c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x26278cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x262790: 0x46026001  sub.s       $f0, $f12, $f2
    ctx->pc = 0x262790u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
label_262794:
    // 0x262794: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x262794u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x262798: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x262798u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26279c: 0x46026034  c.lt.s      $f12, $f2
    ctx->pc = 0x26279cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2627a0: 0x0  nop
    ctx->pc = 0x2627a0u;
    // NOP
    // 0x2627a4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2627A4u;
    {
        const bool branch_taken_0x2627a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2627a4) {
            ctx->pc = 0x2627A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2627A4u;
            // 0x2627a8: 0x46001306  mov.s       $f12, $f2 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2627ACu;
            goto label_2627ac;
        }
    }
    ctx->pc = 0x2627ACu;
label_2627ac:
    // 0x2627ac: 0x15200025  bnez        $t1, . + 4 + (0x25 << 2)
    ctx->pc = 0x2627ACu;
    {
        const bool branch_taken_0x2627ac = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x2627ac) {
            ctx->pc = 0x262844u;
            goto label_262844;
        }
    }
    ctx->pc = 0x2627B4u;
    // 0x2627b4: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x2627b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x2627b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2627b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2627bc: 0x46016001  sub.s       $f0, $f12, $f1
    ctx->pc = 0x2627bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x2627c0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2627c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2627c4: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x2627C4u;
    {
        const bool branch_taken_0x2627c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2627c4) {
            ctx->pc = 0x262844u;
            goto label_262844;
        }
    }
    ctx->pc = 0x2627CCu;
    // 0x2627cc: 0x46016040  add.s       $f1, $f12, $f1
    ctx->pc = 0x2627ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x2627d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2627d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2627d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2627d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2627d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2627d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2627dc: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x2627DCu;
    {
        const bool branch_taken_0x2627dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2627dc) {
            ctx->pc = 0x262844u;
            goto label_262844;
        }
    }
    ctx->pc = 0x2627E4u;
    // 0x2627e4: 0x91850000  lbu         $a1, 0x0($t4)
    ctx->pc = 0x2627e4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x2627e8: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2627E8u;
    {
        const bool branch_taken_0x2627e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2627ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2627E8u;
            // 0x2627ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2627e8) {
            ctx->pc = 0x26283Cu;
            goto label_26283c;
        }
    }
    ctx->pc = 0x2627F0u;
    // 0x2627f0: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x2627f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2627f4: 0x0  nop
    ctx->pc = 0x2627f4u;
    // NOP
label_2627f8:
    // 0x2627f8: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x2627f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x2627fc: 0x84430004  lh          $v1, 0x4($v0)
    ctx->pc = 0x2627fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x262800: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x262800u;
    {
        const bool branch_taken_0x262800 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x262800) {
            ctx->pc = 0x262804u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x262800u;
            // 0x262804: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x262830u;
            goto label_262830;
        }
    }
    ctx->pc = 0x262808u;
    // 0x262808: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x262808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x26280c: 0x0  nop
    ctx->pc = 0x26280cu;
    // NOP
label_262810:
    // 0x262810: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x262810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x262814: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x262814u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x262818: 0x21c03  sra         $v1, $v0, 16
    ctx->pc = 0x262818u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 16));
    // 0x26281c: 0x0  nop
    ctx->pc = 0x26281cu;
    // NOP
    // 0x262820: 0x0  nop
    ctx->pc = 0x262820u;
    // NOP
    // 0x262824: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x262824u;
    {
        const bool branch_taken_0x262824 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x262828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262824u;
            // 0x262828: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262824) {
            ctx->pc = 0x262810u;
            runtime->cooperativeGuestYield();
            goto label_262810;
        }
    }
    ctx->pc = 0x26282Cu;
    // 0x26282c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x26282cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_262830:
    // 0x262830: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x262830u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x262834: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x262834u;
    {
        const bool branch_taken_0x262834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x262838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262834u;
            // 0x262838: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262834) {
            ctx->pc = 0x2627F8u;
            runtime->cooperativeGuestYield();
            goto label_2627f8;
        }
    }
    ctx->pc = 0x26283Cu;
label_26283c:
    // 0x26283c: 0x3e00008  jr          $ra
    ctx->pc = 0x26283Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2626CCu: goto label_2626cc;
            case 0x2626ECu: goto label_2626ec;
            case 0x262708u: goto label_262708;
            case 0x26270Cu: goto label_26270c;
            case 0x26278Cu: goto label_26278c;
            case 0x262794u: goto label_262794;
            case 0x2627ACu: goto label_2627ac;
            case 0x2627F8u: goto label_2627f8;
            case 0x262810u: goto label_262810;
            case 0x262830u: goto label_262830;
            case 0x26283Cu: goto label_26283c;
            case 0x262844u: goto label_262844;
            case 0x262878u: goto label_262878;
            case 0x262890u: goto label_262890;
            case 0x2628D0u: goto label_2628d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x262844u;
label_262844:
    // 0x262844: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x262844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x262848: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x262848u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26284c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x26284cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x262850: 0x918d0000  lbu         $t5, 0x0($t4)
    ctx->pc = 0x262850u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x262854: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x262854u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262858: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x262858u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x26285c: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x26285cu;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x262860: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x262860u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x262864: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x262864u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x262868: 0x4e1818  mult        $v1, $v0, $t6
    ctx->pc = 0x262868u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x26286c: 0x11a0fff3  beqz        $t5, . + 4 + (-0xD << 2)
    ctx->pc = 0x26286Cu;
    {
        const bool branch_taken_0x26286c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x262870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26286Cu;
            // 0x262870: 0x653021  addu        $a2, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26286c) {
            ctx->pc = 0x26283Cu;
            runtime->cooperativeGuestYield();
            goto label_26283c;
        }
    }
    ctx->pc = 0x262874u;
    // 0x262874: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x262874u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_262878:
    // 0x262878: 0xb1040  sll         $v0, $t3, 1
    ctx->pc = 0x262878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x26287c: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x26287cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x262880: 0x84490004  lh          $t1, 0x4($v0)
    ctx->pc = 0x262880u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x262884: 0x51200012  beql        $t1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x262884u;
    {
        const bool branch_taken_0x262884 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x262884) {
            ctx->pc = 0x262888u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x262884u;
            // 0x262888: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2628D0u;
            goto label_2628d0;
        }
    }
    ctx->pc = 0x26288Cu;
    // 0x26288c: 0x0  nop
    ctx->pc = 0x26288cu;
    // NOP
label_262890:
    // 0x262890: 0x91023  negu        $v0, $t1
    ctx->pc = 0x262890u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 9)));
    // 0x262894: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x262894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x262898: 0x1221024  and         $v0, $t1, $v0
    ctx->pc = 0x262898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x26289c: 0x90c50000  lbu         $a1, 0x0($a2)
    ctx->pc = 0x26289cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2628a0: 0x22023  negu        $a0, $v0
    ctx->pc = 0x2628a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2628a4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2628a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2628a8: 0x70802004  plzcw       $a0, $a0
    ctx->pc = 0x2628a8u;
    { uint64_t v = GPR_U64(ctx, 4); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 4, out); }
    // 0x2628ac: 0x1221026  xor         $v0, $t1, $v0
    ctx->pc = 0x2628acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 2));
    // 0x2628b0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2628b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2628b4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2628b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2628b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2628b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2628bc: 0x24c03  sra         $t1, $v0, 16
    ctx->pc = 0x2628bcu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2628c0: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x2628c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2628c4: 0x1520fff2  bnez        $t1, . + 4 + (-0xE << 2)
    ctx->pc = 0x2628C4u;
    {
        const bool branch_taken_0x2628c4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x2628C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2628C4u;
            // 0x2628c8: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2628c4) {
            ctx->pc = 0x262890u;
            runtime->cooperativeGuestYield();
            goto label_262890;
        }
    }
    ctx->pc = 0x2628CCu;
    // 0x2628cc: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x2628ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_2628d0:
    // 0x2628d0: 0x16d102b  sltu        $v0, $t3, $t5
    ctx->pc = 0x2628d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x2628d4: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2628D4u;
    {
        const bool branch_taken_0x2628d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2628D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2628D4u;
            // 0x2628d8: 0x254a0040  addiu       $t2, $t2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2628d4) {
            ctx->pc = 0x262878u;
            runtime->cooperativeGuestYield();
            goto label_262878;
        }
    }
    ctx->pc = 0x2628DCu;
    // 0x2628dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2628DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2626CCu: goto label_2626cc;
            case 0x2626ECu: goto label_2626ec;
            case 0x262708u: goto label_262708;
            case 0x26270Cu: goto label_26270c;
            case 0x26278Cu: goto label_26278c;
            case 0x262794u: goto label_262794;
            case 0x2627ACu: goto label_2627ac;
            case 0x2627F8u: goto label_2627f8;
            case 0x262810u: goto label_262810;
            case 0x262830u: goto label_262830;
            case 0x26283Cu: goto label_26283c;
            case 0x262844u: goto label_262844;
            case 0x262878u: goto label_262878;
            case 0x262890u: goto label_262890;
            case 0x2628D0u: goto label_2628d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2628E4u;
    // 0x2628e4: 0x0  nop
    ctx->pc = 0x2628e4u;
    // NOP
}
