#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_230ee8
// Address: 0x230ee8 - 0x2311d8
void entry_230ee8_0x2311d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_230ee8_0x2311d8");
#endif

    ctx->pc = 0x230ee8u;

    // 0x230ee8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x230ee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x230eec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x230eecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x230ef0: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x230ef0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230ef4: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x230ef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x230ef8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x230ef8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230efc: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x230efcu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230f00: 0x460d0843  div.s       $f1, $f1, $f13
    ctx->pc = 0x230f00u;
    if (ctx->f[13] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[13];
    // 0x230f04: 0x95680002  lhu         $t0, 0x2($t3)
    ctx->pc = 0x230f04u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x230f08: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x230f08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x230f0c: 0x956a0000  lhu         $t2, 0x0($t3)
    ctx->pc = 0x230f0cu;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x230f10: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x230f10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x230f14: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x230f14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x230f18: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x230f18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x230f1c: 0x484823  subu        $t1, $v0, $t0
    ctx->pc = 0x230f1cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x230f20: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x230f20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x230f24: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x230F24u;
    {
        const bool branch_taken_0x230f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x230F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230F24u;
            // 0x230f28: 0xe0602d  daddu       $t4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230f24) {
            ctx->pc = 0x230F40u;
            goto label_230f40;
        }
    }
    ctx->pc = 0x230F2Cu;
    // 0x230f2c: 0x2549ffff  addiu       $t1, $t2, -0x1
    ctx->pc = 0x230f2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x230f30: 0x1281021  addu        $v0, $t1, $t0
    ctx->pc = 0x230f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x230f34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230f34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230f38: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x230f38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x230f3c: 0x460d0302  mul.s       $f12, $f0, $f13
    ctx->pc = 0x230f3cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
label_230f40:
    // 0x230f40: 0x523000f  bgezl       $t1, . + 4 + (0xF << 2)
    ctx->pc = 0x230F40u;
    {
        const bool branch_taken_0x230f40 = (GPR_S32(ctx, 9) >= 0);
        if (branch_taken_0x230f40) {
            ctx->pc = 0x230F44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x230F40u;
            // 0x230f44: 0x90820003  lbu         $v0, 0x3($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x230F80u;
            goto label_230f80;
        }
    }
    ctx->pc = 0x230F48u;
    // 0x230f48: 0x5000005  bltz        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x230F48u;
    {
        const bool branch_taken_0x230f48 = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x230F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230F48u;
            // 0x230f4c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230f48) {
            ctx->pc = 0x230F60u;
            goto label_230f60;
        }
    }
    ctx->pc = 0x230F50u;
    // 0x230f50: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x230f50u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230f54: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x230f54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x230f58: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x230F58u;
    {
        const bool branch_taken_0x230f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230F58u;
            // 0x230f5c: 0x460d0302  mul.s       $f12, $f0, $f13 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x230f58) {
            ctx->pc = 0x230F7Cu;
            goto label_230f7c;
        }
    }
    ctx->pc = 0x230F60u;
label_230f60:
    // 0x230f60: 0x31020001  andi        $v0, $t0, 0x1
    ctx->pc = 0x230f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x230f64: 0x81842  srl         $v1, $t0, 1
    ctx->pc = 0x230f64u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
    // 0x230f68: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x230f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x230f6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230f6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230f70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x230f70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x230f74: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x230f74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x230f78: 0x460d0302  mul.s       $f12, $f0, $f13
    ctx->pc = 0x230f78u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
label_230f7c:
    // 0x230f7c: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x230f7cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_230f80:
    // 0x230f80: 0x93040  sll         $a2, $t1, 1
    ctx->pc = 0x230f80u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x230f84: 0x91830001  lbu         $v1, 0x1($t4)
    ctx->pc = 0x230f84u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x230f88: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x230f88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x230f8c: 0x95650006  lhu         $a1, 0x6($t3)
    ctx->pc = 0x230f8cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x230f90: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x230f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x230f94: 0xc33018  mult        $a2, $a2, $v1
    ctx->pc = 0x230f94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x230f98: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x230f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x230f9c: 0x37040  sll         $t6, $v1, 1
    ctx->pc = 0x230f9cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x230fa0: 0x95870002  lhu         $a3, 0x2($t4)
    ctx->pc = 0x230fa0u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x230fa4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x230fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x230fa8: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x230fa8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230fac: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x230facu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x230fb0: 0x25230002  addiu       $v1, $t1, 0x2
    ctx->pc = 0x230fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x230fb4: 0x6a182b  sltu        $v1, $v1, $t2
    ctx->pc = 0x230fb4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x230fb8: 0x1492823  subu        $a1, $t2, $t1
    ctx->pc = 0x230fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x230fbc: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x230fbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x230fc0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x230fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x230fc4: 0xa3400a  movz        $t0, $a1, $v1
    ctx->pc = 0x230fc4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 5));
    // 0x230fc8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x230fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x230fcc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x230fccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x230fd0: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x230fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x230fd4: 0x1a42021  addu        $a0, $t5, $a0
    ctx->pc = 0x230fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
    // 0x230fd8: 0x2d070002  sltiu       $a3, $t0, 0x2
    ctx->pc = 0x230fd8u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x230fdc: 0x14e0000a  bnez        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x230FDCu;
    {
        const bool branch_taken_0x230fdc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x230FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230FDCu;
            // 0x230fe0: 0x460d0082  mul.s       $f2, $f0, $f13 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x230fdc) {
            ctx->pc = 0x231008u;
            goto label_231008;
        }
    }
    ctx->pc = 0x230FE4u;
    // 0x230fe4: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x230fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x230fe8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x230fe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x230fec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x230fecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x230ff0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230ff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230ff4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x230ff4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x230ff8: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x230ff8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x230ffc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x230ffcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x231000: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x231000u;
    {
        const bool branch_taken_0x231000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231000u;
            // 0x231004: 0x46026001  sub.s       $f0, $f12, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x231000) {
            ctx->pc = 0x231010u;
            goto label_231010;
        }
    }
    ctx->pc = 0x231008u;
label_231008:
    // 0x231008: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x231008u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23100c: 0x46026001  sub.s       $f0, $f12, $f2
    ctx->pc = 0x23100cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
label_231010:
    // 0x231010: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x231010u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x231014: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x231014u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x231018: 0x46026034  c.lt.s      $f12, $f2
    ctx->pc = 0x231018u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23101c: 0x0  nop
    ctx->pc = 0x23101cu;
    // NOP
    // 0x231020: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x231020u;
    {
        const bool branch_taken_0x231020 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x231020) {
            ctx->pc = 0x231024u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x231020u;
            // 0x231024: 0x46001306  mov.s       $f12, $f2 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x231028u;
            goto label_231028;
        }
    }
    ctx->pc = 0x231028u;
label_231028:
    // 0x231028: 0x14e0003b  bnez        $a3, . + 4 + (0x3B << 2)
    ctx->pc = 0x231028u;
    {
        const bool branch_taken_0x231028 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x231028) {
            ctx->pc = 0x231118u;
            goto label_231118;
        }
    }
    ctx->pc = 0x231030u;
    // 0x231030: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x231030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x231034: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x231034u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x231038: 0x46016001  sub.s       $f0, $f12, $f1
    ctx->pc = 0x231038u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x23103c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x23103cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231040: 0x45000035  bc1f        . + 4 + (0x35 << 2)
    ctx->pc = 0x231040u;
    {
        const bool branch_taken_0x231040 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x231040) {
            ctx->pc = 0x231118u;
            goto label_231118;
        }
    }
    ctx->pc = 0x231048u;
    // 0x231048: 0x46016040  add.s       $f1, $f12, $f1
    ctx->pc = 0x231048u;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x23104c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23104cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x231050: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x231050u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231054: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x231054u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231058: 0x0  nop
    ctx->pc = 0x231058u;
    // NOP
    // 0x23105c: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
    ctx->pc = 0x23105Cu;
    {
        const bool branch_taken_0x23105c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x231060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23105Cu;
            // 0x231060: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23105c) {
            ctx->pc = 0x231118u;
            goto label_231118;
        }
    }
    ctx->pc = 0x231064u;
    // 0x231064: 0x918b0000  lbu         $t3, 0x0($t4)
    ctx->pc = 0x231064u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x231068: 0x11600029  beqz        $t3, . + 4 + (0x29 << 2)
    ctx->pc = 0x231068u;
    {
        const bool branch_taken_0x231068 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x23106Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231068u;
            // 0x23106c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231068) {
            ctx->pc = 0x231110u;
            goto label_231110;
        }
    }
    ctx->pc = 0x231070u;
    // 0x231070: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x231070u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231074: 0x0  nop
    ctx->pc = 0x231074u;
    // NOP
label_231078:
    // 0x231078: 0x91040  sll         $v0, $t1, 1
    ctx->pc = 0x231078u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x23107c: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x23107cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x231080: 0x84470004  lh          $a3, 0x4($v0)
    ctx->pc = 0x231080u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x231084: 0x50e0001f  beql        $a3, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x231084u;
    {
        const bool branch_taken_0x231084 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x231084) {
            ctx->pc = 0x231088u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x231084u;
            // 0x231088: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x231104u;
            goto label_231104;
        }
    }
    ctx->pc = 0x23108Cu;
    // 0x23108c: 0xce4021  addu        $t0, $a2, $t6
    ctx->pc = 0x23108cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 14)));
label_231090:
    // 0x231090: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x231090u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x231094: 0x71823  negu        $v1, $a3
    ctx->pc = 0x231094u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x231098: 0x85050000  lh          $a1, 0x0($t0)
    ctx->pc = 0x231098u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x23109c: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x23109cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x2310a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2310a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2310a4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2310a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2310a8: 0x32023  negu        $a0, $v1
    ctx->pc = 0x2310a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x2310ac: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2310acu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2310b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2310b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2310b4: 0x3c0139c9  lui         $at, 0x39C9
    ctx->pc = 0x2310b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14793 << 16));
    // 0x2310b8: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x2310b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x2310bc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2310bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2310c0: 0x70802004  plzcw       $a0, $a0
    ctx->pc = 0x2310c0u;
    { uint64_t v = GPR_U64(ctx, 4); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 4, out); }
    // 0x2310c4: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x2310c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2310c8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2310c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2310cc: 0xe31826  xor         $v1, $a3, $v1
    ctx->pc = 0x2310ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 3));
    // 0x2310d0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2310d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2310d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2310d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2310d8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2310d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2310dc: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x2310dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2310e0: 0x33c03  sra         $a3, $v1, 16
    ctx->pc = 0x2310e0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 16));
    // 0x2310e4: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x2310e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x2310e8: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x2310e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2310ec: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x2310ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x2310f0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2310f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2310f4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2310f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2310f8: 0x14e0ffe5  bnez        $a3, . + 4 + (-0x1B << 2)
    ctx->pc = 0x2310F8u;
    {
        const bool branch_taken_0x2310f8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2310FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2310F8u;
            // 0x2310fc: 0xe4410000  swc1        $f1, 0x0($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2310f8) {
            ctx->pc = 0x231090u;
            runtime->cooperativeGuestYield();
            goto label_231090;
        }
    }
    ctx->pc = 0x231100u;
    // 0x231100: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x231100u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_231104:
    // 0x231104: 0x12b102b  sltu        $v0, $t1, $t3
    ctx->pc = 0x231104u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x231108: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x231108u;
    {
        const bool branch_taken_0x231108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23110Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231108u;
            // 0x23110c: 0x254a0040  addiu       $t2, $t2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231108) {
            ctx->pc = 0x231078u;
            runtime->cooperativeGuestYield();
            goto label_231078;
        }
    }
    ctx->pc = 0x231110u;
label_231110:
    // 0x231110: 0x3e00008  jr          $ra
    ctx->pc = 0x231110u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x230F40u: goto label_230f40;
            case 0x230F60u: goto label_230f60;
            case 0x230F7Cu: goto label_230f7c;
            case 0x230F80u: goto label_230f80;
            case 0x231008u: goto label_231008;
            case 0x231010u: goto label_231010;
            case 0x231028u: goto label_231028;
            case 0x231078u: goto label_231078;
            case 0x231090u: goto label_231090;
            case 0x231104u: goto label_231104;
            case 0x231110u: goto label_231110;
            case 0x231118u: goto label_231118;
            case 0x231150u: goto label_231150;
            case 0x231168u: goto label_231168;
            case 0x2311C0u: goto label_2311c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x231118u;
label_231118:
    // 0x231118: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x231118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x23111c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23111cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231120: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x231120u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x231124: 0x91890000  lbu         $t1, 0x0($t4)
    ctx->pc = 0x231124u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x231128: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x231128u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23112c: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x23112cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x231130: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x231130u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x231134: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x231134u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x231138: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x231138u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x23113c: 0x4e2818  mult        $a1, $v0, $t6
    ctx->pc = 0x23113cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x231140: 0x1120fff3  beqz        $t1, . + 4 + (-0xD << 2)
    ctx->pc = 0x231140u;
    {
        const bool branch_taken_0x231140 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x231144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231140u;
            // 0x231144: 0xa33021  addu        $a2, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231140) {
            ctx->pc = 0x231110u;
            runtime->cooperativeGuestYield();
            goto label_231110;
        }
    }
    ctx->pc = 0x231148u;
    // 0x231148: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x231148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23114c: 0x0  nop
    ctx->pc = 0x23114cu;
    // NOP
label_231150:
    // 0x231150: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x231150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x231154: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x231154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x231158: 0x84470004  lh          $a3, 0x4($v0)
    ctx->pc = 0x231158u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x23115c: 0x50e00018  beql        $a3, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x23115Cu;
    {
        const bool branch_taken_0x23115c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x23115c) {
            ctx->pc = 0x231160u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23115Cu;
            // 0x231160: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2311C0u;
            goto label_2311c0;
        }
    }
    ctx->pc = 0x231164u;
    // 0x231164: 0x0  nop
    ctx->pc = 0x231164u;
    // NOP
label_231168:
    // 0x231168: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x231168u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x23116c: 0x72023  negu        $a0, $a3
    ctx->pc = 0x23116cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x231170: 0xe42024  and         $a0, $a3, $a0
    ctx->pc = 0x231170u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x231174: 0x3c0139c9  lui         $at, 0x39C9
    ctx->pc = 0x231174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14793 << 16));
    // 0x231178: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x231178u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x23117c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x23117cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x231180: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x231180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231184: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x231184u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x231188: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x231188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x23118c: 0x41023  negu        $v0, $a0
    ctx->pc = 0x23118cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x231190: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x231190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x231194: 0x70401004  plzcw       $v0, $v0
    ctx->pc = 0x231194u;
    { uint64_t v = GPR_U64(ctx, 2); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 2, out); }
    // 0x231198: 0xe42026  xor         $a0, $a3, $a0
    ctx->pc = 0x231198u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 4));
    // 0x23119c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x23119cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2311a0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2311a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2311a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2311a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2311a8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2311a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2311ac: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2311acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2311b0: 0x43c03  sra         $a3, $a0, 16
    ctx->pc = 0x2311b0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 4), 16));
    // 0x2311b4: 0x14e0ffec  bnez        $a3, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2311B4u;
    {
        const bool branch_taken_0x2311b4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2311B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2311B4u;
            // 0x2311b8: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2311b4) {
            ctx->pc = 0x231168u;
            runtime->cooperativeGuestYield();
            goto label_231168;
        }
    }
    ctx->pc = 0x2311BCu;
    // 0x2311bc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2311bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_2311c0:
    // 0x2311c0: 0x109102b  sltu        $v0, $t0, $t1
    ctx->pc = 0x2311c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2311c4: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x2311C4u;
    {
        const bool branch_taken_0x2311c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2311C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2311C4u;
            // 0x2311c8: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2311c4) {
            ctx->pc = 0x231150u;
            runtime->cooperativeGuestYield();
            goto label_231150;
        }
    }
    ctx->pc = 0x2311CCu;
    // 0x2311cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2311CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x230F40u: goto label_230f40;
            case 0x230F60u: goto label_230f60;
            case 0x230F7Cu: goto label_230f7c;
            case 0x230F80u: goto label_230f80;
            case 0x231008u: goto label_231008;
            case 0x231010u: goto label_231010;
            case 0x231028u: goto label_231028;
            case 0x231078u: goto label_231078;
            case 0x231090u: goto label_231090;
            case 0x231104u: goto label_231104;
            case 0x231110u: goto label_231110;
            case 0x231118u: goto label_231118;
            case 0x231150u: goto label_231150;
            case 0x231168u: goto label_231168;
            case 0x2311C0u: goto label_2311c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2311D4u;
    // 0x2311d4: 0x0  nop
    ctx->pc = 0x2311d4u;
    // NOP
}
