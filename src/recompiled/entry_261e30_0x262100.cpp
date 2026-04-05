#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_261e30
// Address: 0x261e30 - 0x262100
void entry_261e30_0x262100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_261e30_0x262100");
#endif

    ctx->pc = 0x261e30u;

    // 0x261e30: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x261e30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x261e34: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x261e34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x261e38: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x261e38u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261e3c: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x261e3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x261e40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x261e40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261e44: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x261e44u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261e48: 0x460d0843  div.s       $f1, $f1, $f13
    ctx->pc = 0x261e48u;
    if (ctx->f[13] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[13];
    // 0x261e4c: 0x95680002  lhu         $t0, 0x2($t3)
    ctx->pc = 0x261e4cu;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x261e50: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x261e50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x261e54: 0x956a0000  lhu         $t2, 0x0($t3)
    ctx->pc = 0x261e54u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x261e58: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x261e58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x261e5c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x261e5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x261e60: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x261e60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x261e64: 0x484823  subu        $t1, $v0, $t0
    ctx->pc = 0x261e64u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x261e68: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x261e68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x261e6c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x261E6Cu;
    {
        const bool branch_taken_0x261e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261E6Cu;
            // 0x261e70: 0xe0602d  daddu       $t4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261e6c) {
            ctx->pc = 0x261E88u;
            goto label_261e88;
        }
    }
    ctx->pc = 0x261E74u;
    // 0x261e74: 0x2549ffff  addiu       $t1, $t2, -0x1
    ctx->pc = 0x261e74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x261e78: 0x1281021  addu        $v0, $t1, $t0
    ctx->pc = 0x261e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x261e7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x261e7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261e80: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x261e80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x261e84: 0x460d0302  mul.s       $f12, $f0, $f13
    ctx->pc = 0x261e84u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
label_261e88:
    // 0x261e88: 0x523000f  bgezl       $t1, . + 4 + (0xF << 2)
    ctx->pc = 0x261E88u;
    {
        const bool branch_taken_0x261e88 = (GPR_S32(ctx, 9) >= 0);
        if (branch_taken_0x261e88) {
            ctx->pc = 0x261E8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x261E88u;
            // 0x261e8c: 0x90820003  lbu         $v0, 0x3($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x261EC8u;
            goto label_261ec8;
        }
    }
    ctx->pc = 0x261E90u;
    // 0x261e90: 0x5000005  bltz        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x261E90u;
    {
        const bool branch_taken_0x261e90 = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x261E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261E90u;
            // 0x261e94: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261e90) {
            ctx->pc = 0x261EA8u;
            goto label_261ea8;
        }
    }
    ctx->pc = 0x261E98u;
    // 0x261e98: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x261e98u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261e9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x261e9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x261ea0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x261EA0u;
    {
        const bool branch_taken_0x261ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261EA0u;
            // 0x261ea4: 0x460d0302  mul.s       $f12, $f0, $f13 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x261ea0) {
            ctx->pc = 0x261EC4u;
            goto label_261ec4;
        }
    }
    ctx->pc = 0x261EA8u;
label_261ea8:
    // 0x261ea8: 0x31020001  andi        $v0, $t0, 0x1
    ctx->pc = 0x261ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x261eac: 0x81842  srl         $v1, $t0, 1
    ctx->pc = 0x261eacu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
    // 0x261eb0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x261eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x261eb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x261eb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261eb8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x261eb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x261ebc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x261ebcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x261ec0: 0x460d0302  mul.s       $f12, $f0, $f13
    ctx->pc = 0x261ec0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
label_261ec4:
    // 0x261ec4: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x261ec4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_261ec8:
    // 0x261ec8: 0x93040  sll         $a2, $t1, 1
    ctx->pc = 0x261ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x261ecc: 0x91830001  lbu         $v1, 0x1($t4)
    ctx->pc = 0x261eccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x261ed0: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x261ed0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x261ed4: 0x95650006  lhu         $a1, 0x6($t3)
    ctx->pc = 0x261ed4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x261ed8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x261ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x261edc: 0xc33018  mult        $a2, $a2, $v1
    ctx->pc = 0x261edcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x261ee0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x261ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x261ee4: 0x37040  sll         $t6, $v1, 1
    ctx->pc = 0x261ee4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x261ee8: 0x95870002  lhu         $a3, 0x2($t4)
    ctx->pc = 0x261ee8u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x261eec: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x261eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x261ef0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x261ef0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261ef4: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x261ef4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x261ef8: 0x25230002  addiu       $v1, $t1, 0x2
    ctx->pc = 0x261ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x261efc: 0x6a182b  sltu        $v1, $v1, $t2
    ctx->pc = 0x261efcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x261f00: 0x1492823  subu        $a1, $t2, $t1
    ctx->pc = 0x261f00u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x261f04: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x261f04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x261f08: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x261f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x261f0c: 0xa3400a  movz        $t0, $a1, $v1
    ctx->pc = 0x261f0cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 5));
    // 0x261f10: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x261f10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x261f14: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x261f14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x261f18: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x261f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x261f1c: 0x1a42021  addu        $a0, $t5, $a0
    ctx->pc = 0x261f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
    // 0x261f20: 0x2d070002  sltiu       $a3, $t0, 0x2
    ctx->pc = 0x261f20u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x261f24: 0x14e0000a  bnez        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x261F24u;
    {
        const bool branch_taken_0x261f24 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x261F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261F24u;
            // 0x261f28: 0x460d0082  mul.s       $f2, $f0, $f13 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x261f24) {
            ctx->pc = 0x261F50u;
            goto label_261f50;
        }
    }
    ctx->pc = 0x261F2Cu;
    // 0x261f2c: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x261f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x261f30: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x261f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x261f34: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x261f34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x261f38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x261f38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261f3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x261f3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x261f40: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x261f40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x261f44: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x261f44u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x261f48: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x261F48u;
    {
        const bool branch_taken_0x261f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261F48u;
            // 0x261f4c: 0x46026001  sub.s       $f0, $f12, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x261f48) {
            ctx->pc = 0x261F58u;
            goto label_261f58;
        }
    }
    ctx->pc = 0x261F50u;
label_261f50:
    // 0x261f50: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x261f50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x261f54: 0x46026001  sub.s       $f0, $f12, $f2
    ctx->pc = 0x261f54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
label_261f58:
    // 0x261f58: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x261f58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x261f5c: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x261f5cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x261f60: 0x46026034  c.lt.s      $f12, $f2
    ctx->pc = 0x261f60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x261f64: 0x0  nop
    ctx->pc = 0x261f64u;
    // NOP
    // 0x261f68: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x261F68u;
    {
        const bool branch_taken_0x261f68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x261f68) {
            ctx->pc = 0x261F6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x261F68u;
            // 0x261f6c: 0x46001306  mov.s       $f12, $f2 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x261F70u;
            goto label_261f70;
        }
    }
    ctx->pc = 0x261F70u;
label_261f70:
    // 0x261f70: 0x14e00039  bnez        $a3, . + 4 + (0x39 << 2)
    ctx->pc = 0x261F70u;
    {
        const bool branch_taken_0x261f70 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x261f70) {
            ctx->pc = 0x262058u;
            goto label_262058;
        }
    }
    ctx->pc = 0x261F78u;
    // 0x261f78: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x261f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x261f7c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x261f7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x261f80: 0x46016001  sub.s       $f0, $f12, $f1
    ctx->pc = 0x261f80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x261f84: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x261f84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x261f88: 0x45000033  bc1f        . + 4 + (0x33 << 2)
    ctx->pc = 0x261F88u;
    {
        const bool branch_taken_0x261f88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x261f88) {
            ctx->pc = 0x262058u;
            goto label_262058;
        }
    }
    ctx->pc = 0x261F90u;
    // 0x261f90: 0x46016040  add.s       $f1, $f12, $f1
    ctx->pc = 0x261f90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x261f94: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x261f94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x261f98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x261f98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261f9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x261f9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x261fa0: 0x0  nop
    ctx->pc = 0x261fa0u;
    // NOP
    // 0x261fa4: 0x4500002c  bc1f        . + 4 + (0x2C << 2)
    ctx->pc = 0x261FA4u;
    {
        const bool branch_taken_0x261fa4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x261FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261FA4u;
            // 0x261fa8: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261fa4) {
            ctx->pc = 0x262058u;
            goto label_262058;
        }
    }
    ctx->pc = 0x261FACu;
    // 0x261fac: 0x918b0000  lbu         $t3, 0x0($t4)
    ctx->pc = 0x261facu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x261fb0: 0x11600027  beqz        $t3, . + 4 + (0x27 << 2)
    ctx->pc = 0x261FB0u;
    {
        const bool branch_taken_0x261fb0 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x261FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261FB0u;
            // 0x261fb4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261fb0) {
            ctx->pc = 0x262050u;
            goto label_262050;
        }
    }
    ctx->pc = 0x261FB8u;
    // 0x261fb8: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x261fb8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261fbc: 0x0  nop
    ctx->pc = 0x261fbcu;
    // NOP
label_261fc0:
    // 0x261fc0: 0x91040  sll         $v0, $t1, 1
    ctx->pc = 0x261fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x261fc4: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x261fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x261fc8: 0x84470004  lh          $a3, 0x4($v0)
    ctx->pc = 0x261fc8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x261fcc: 0x50e0001d  beql        $a3, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x261FCCu;
    {
        const bool branch_taken_0x261fcc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x261fcc) {
            ctx->pc = 0x261FD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x261FCCu;
            // 0x261fd0: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x262044u;
            goto label_262044;
        }
    }
    ctx->pc = 0x261FD4u;
    // 0x261fd4: 0xce4021  addu        $t0, $a2, $t6
    ctx->pc = 0x261fd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 14)));
label_261fd8:
    // 0x261fd8: 0x84c50000  lh          $a1, 0x0($a2)
    ctx->pc = 0x261fd8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x261fdc: 0x71823  negu        $v1, $a3
    ctx->pc = 0x261fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x261fe0: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x261fe0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x261fe4: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x261fe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x261fe8: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x261fe8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x261fec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x261fecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x261ff0: 0x32023  negu        $a0, $v1
    ctx->pc = 0x261ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x261ff4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x261ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x261ff8: 0xe31826  xor         $v1, $a3, $v1
    ctx->pc = 0x261ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 3));
    // 0x261ffc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x261ffcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262000: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x262000u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x262004: 0x70802004  plzcw       $a0, $a0
    ctx->pc = 0x262004u;
    { uint64_t v = GPR_U64(ctx, 4); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 4, out); }
    // 0x262008: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x262008u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x26200c: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x26200cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x262010: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x262010u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x262014: 0x33c03  sra         $a3, $v1, 16
    ctx->pc = 0x262014u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 16));
    // 0x262018: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x262018u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x26201c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x26201cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x262020: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x262020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x262024: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x262024u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x262028: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x262028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x26202c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x26202cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x262030: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x262030u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x262034: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x262034u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x262038: 0x14e0ffe7  bnez        $a3, . + 4 + (-0x19 << 2)
    ctx->pc = 0x262038u;
    {
        const bool branch_taken_0x262038 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x26203Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262038u;
            // 0x26203c: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262038) {
            ctx->pc = 0x261FD8u;
            runtime->cooperativeGuestYield();
            goto label_261fd8;
        }
    }
    ctx->pc = 0x262040u;
    // 0x262040: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x262040u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_262044:
    // 0x262044: 0x12b102b  sltu        $v0, $t1, $t3
    ctx->pc = 0x262044u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x262048: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x262048u;
    {
        const bool branch_taken_0x262048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26204Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262048u;
            // 0x26204c: 0x254a0020  addiu       $t2, $t2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262048) {
            ctx->pc = 0x261FC0u;
            runtime->cooperativeGuestYield();
            goto label_261fc0;
        }
    }
    ctx->pc = 0x262050u;
label_262050:
    // 0x262050: 0x3e00008  jr          $ra
    ctx->pc = 0x262050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x261E88u: goto label_261e88;
            case 0x261EA8u: goto label_261ea8;
            case 0x261EC4u: goto label_261ec4;
            case 0x261EC8u: goto label_261ec8;
            case 0x261F50u: goto label_261f50;
            case 0x261F58u: goto label_261f58;
            case 0x261F70u: goto label_261f70;
            case 0x261FC0u: goto label_261fc0;
            case 0x261FD8u: goto label_261fd8;
            case 0x262044u: goto label_262044;
            case 0x262050u: goto label_262050;
            case 0x262058u: goto label_262058;
            case 0x262090u: goto label_262090;
            case 0x2620A8u: goto label_2620a8;
            case 0x2620E8u: goto label_2620e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x262058u;
label_262058:
    // 0x262058: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x262058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x26205c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26205cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262060: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x262060u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x262064: 0x918a0000  lbu         $t2, 0x0($t4)
    ctx->pc = 0x262064u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x262068: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x262068u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26206c: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x26206cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x262070: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x262070u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x262074: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x262074u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x262078: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x262078u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26207c: 0x4e2818  mult        $a1, $v0, $t6
    ctx->pc = 0x26207cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x262080: 0x1140fff3  beqz        $t2, . + 4 + (-0xD << 2)
    ctx->pc = 0x262080u;
    {
        const bool branch_taken_0x262080 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x262084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262080u;
            // 0x262084: 0xa33021  addu        $a2, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262080) {
            ctx->pc = 0x262050u;
            runtime->cooperativeGuestYield();
            goto label_262050;
        }
    }
    ctx->pc = 0x262088u;
    // 0x262088: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x262088u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26208c: 0x0  nop
    ctx->pc = 0x26208cu;
    // NOP
label_262090:
    // 0x262090: 0x91040  sll         $v0, $t1, 1
    ctx->pc = 0x262090u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x262094: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x262094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x262098: 0x84470004  lh          $a3, 0x4($v0)
    ctx->pc = 0x262098u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26209c: 0x50e00012  beql        $a3, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x26209Cu;
    {
        const bool branch_taken_0x26209c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x26209c) {
            ctx->pc = 0x2620A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26209Cu;
            // 0x2620a0: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2620E8u;
            goto label_2620e8;
        }
    }
    ctx->pc = 0x2620A4u;
    // 0x2620a4: 0x0  nop
    ctx->pc = 0x2620a4u;
    // NOP
label_2620a8:
    // 0x2620a8: 0x71023  negu        $v0, $a3
    ctx->pc = 0x2620a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x2620ac: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x2620acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2620b0: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x2620b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x2620b4: 0x84c50000  lh          $a1, 0x0($a2)
    ctx->pc = 0x2620b4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2620b8: 0x22023  negu        $a0, $v0
    ctx->pc = 0x2620b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2620bc: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x2620bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x2620c0: 0x70802004  plzcw       $a0, $a0
    ctx->pc = 0x2620c0u;
    { uint64_t v = GPR_U64(ctx, 4); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 4, out); }
    // 0x2620c4: 0xe21026  xor         $v0, $a3, $v0
    ctx->pc = 0x2620c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 2));
    // 0x2620c8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2620c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2620cc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2620ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2620d0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2620d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2620d4: 0x23c03  sra         $a3, $v0, 16
    ctx->pc = 0x2620d4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2620d8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2620d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2620dc: 0x14e0fff2  bnez        $a3, . + 4 + (-0xE << 2)
    ctx->pc = 0x2620DCu;
    {
        const bool branch_taken_0x2620dc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2620E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2620DCu;
            // 0x2620e0: 0xa4650000  sh          $a1, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2620dc) {
            ctx->pc = 0x2620A8u;
            runtime->cooperativeGuestYield();
            goto label_2620a8;
        }
    }
    ctx->pc = 0x2620E4u;
    // 0x2620e4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2620e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_2620e8:
    // 0x2620e8: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x2620e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2620ec: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2620ECu;
    {
        const bool branch_taken_0x2620ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2620F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2620ECu;
            // 0x2620f0: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2620ec) {
            ctx->pc = 0x262090u;
            runtime->cooperativeGuestYield();
            goto label_262090;
        }
    }
    ctx->pc = 0x2620F4u;
    // 0x2620f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2620F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x261E88u: goto label_261e88;
            case 0x261EA8u: goto label_261ea8;
            case 0x261EC4u: goto label_261ec4;
            case 0x261EC8u: goto label_261ec8;
            case 0x261F50u: goto label_261f50;
            case 0x261F58u: goto label_261f58;
            case 0x261F70u: goto label_261f70;
            case 0x261FC0u: goto label_261fc0;
            case 0x261FD8u: goto label_261fd8;
            case 0x262044u: goto label_262044;
            case 0x262050u: goto label_262050;
            case 0x262058u: goto label_262058;
            case 0x262090u: goto label_262090;
            case 0x2620A8u: goto label_2620a8;
            case 0x2620E8u: goto label_2620e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2620FCu;
    // 0x2620fc: 0x0  nop
    ctx->pc = 0x2620fcu;
    // NOP
}
