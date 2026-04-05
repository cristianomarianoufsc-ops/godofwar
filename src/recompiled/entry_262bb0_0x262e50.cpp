#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_262bb0
// Address: 0x262bb0 - 0x262e50
void entry_262bb0_0x262e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_262bb0_0x262e50");
#endif

    ctx->pc = 0x262bb0u;

    // 0x262bb0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x262bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x262bb4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x262bb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x262bb8: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x262bb8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262bbc: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x262bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x262bc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x262bc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262bc4: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x262bc4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262bc8: 0x460d0843  div.s       $f1, $f1, $f13
    ctx->pc = 0x262bc8u;
    if (ctx->f[13] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[13];
    // 0x262bcc: 0x95680002  lhu         $t0, 0x2($t3)
    ctx->pc = 0x262bccu;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x262bd0: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x262bd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x262bd4: 0x956a0000  lhu         $t2, 0x0($t3)
    ctx->pc = 0x262bd4u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x262bd8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x262bd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x262bdc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x262bdcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x262be0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x262be0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x262be4: 0x484823  subu        $t1, $v0, $t0
    ctx->pc = 0x262be4u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x262be8: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x262be8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x262bec: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x262BECu;
    {
        const bool branch_taken_0x262bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x262BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262BECu;
            // 0x262bf0: 0xe0602d  daddu       $t4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262bec) {
            ctx->pc = 0x262C08u;
            goto label_262c08;
        }
    }
    ctx->pc = 0x262BF4u;
    // 0x262bf4: 0x2549ffff  addiu       $t1, $t2, -0x1
    ctx->pc = 0x262bf4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x262bf8: 0x1281021  addu        $v0, $t1, $t0
    ctx->pc = 0x262bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x262bfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x262bfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262c00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x262c00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x262c04: 0x460d0302  mul.s       $f12, $f0, $f13
    ctx->pc = 0x262c04u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
label_262c08:
    // 0x262c08: 0x523000f  bgezl       $t1, . + 4 + (0xF << 2)
    ctx->pc = 0x262C08u;
    {
        const bool branch_taken_0x262c08 = (GPR_S32(ctx, 9) >= 0);
        if (branch_taken_0x262c08) {
            ctx->pc = 0x262C0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x262C08u;
            // 0x262c0c: 0x90820003  lbu         $v0, 0x3($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x262C48u;
            goto label_262c48;
        }
    }
    ctx->pc = 0x262C10u;
    // 0x262c10: 0x5000005  bltz        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x262C10u;
    {
        const bool branch_taken_0x262c10 = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x262C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262C10u;
            // 0x262c14: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262c10) {
            ctx->pc = 0x262C28u;
            goto label_262c28;
        }
    }
    ctx->pc = 0x262C18u;
    // 0x262c18: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x262c18u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262c1c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x262c1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x262c20: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x262C20u;
    {
        const bool branch_taken_0x262c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262C20u;
            // 0x262c24: 0x460d0302  mul.s       $f12, $f0, $f13 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x262c20) {
            ctx->pc = 0x262C44u;
            goto label_262c44;
        }
    }
    ctx->pc = 0x262C28u;
label_262c28:
    // 0x262c28: 0x31020001  andi        $v0, $t0, 0x1
    ctx->pc = 0x262c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x262c2c: 0x81842  srl         $v1, $t0, 1
    ctx->pc = 0x262c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
    // 0x262c30: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x262c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x262c34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x262c34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262c38: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x262c38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x262c3c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x262c3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x262c40: 0x460d0302  mul.s       $f12, $f0, $f13
    ctx->pc = 0x262c40u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
label_262c44:
    // 0x262c44: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x262c44u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_262c48:
    // 0x262c48: 0x93080  sll         $a2, $t1, 2
    ctx->pc = 0x262c48u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x262c4c: 0x91830001  lbu         $v1, 0x1($t4)
    ctx->pc = 0x262c4cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x262c50: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x262c50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x262c54: 0x95650006  lhu         $a1, 0x6($t3)
    ctx->pc = 0x262c54u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x262c58: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x262c58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x262c5c: 0xc33018  mult        $a2, $a2, $v1
    ctx->pc = 0x262c5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x262c60: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x262c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x262c64: 0x37080  sll         $t6, $v1, 2
    ctx->pc = 0x262c64u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x262c68: 0x95870002  lhu         $a3, 0x2($t4)
    ctx->pc = 0x262c68u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x262c6c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x262c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x262c70: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x262c70u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262c74: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x262c74u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x262c78: 0x25230001  addiu       $v1, $t1, 0x1
    ctx->pc = 0x262c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x262c7c: 0x6a182b  sltu        $v1, $v1, $t2
    ctx->pc = 0x262c7cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x262c80: 0x1492823  subu        $a1, $t2, $t1
    ctx->pc = 0x262c80u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x262c84: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x262c84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x262c88: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x262c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x262c8c: 0xa3400a  movz        $t0, $a1, $v1
    ctx->pc = 0x262c8cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 5));
    // 0x262c90: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x262c90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x262c94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x262c94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x262c98: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x262c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x262c9c: 0x1a42021  addu        $a0, $t5, $a0
    ctx->pc = 0x262c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
    // 0x262ca0: 0x2d070002  sltiu       $a3, $t0, 0x2
    ctx->pc = 0x262ca0u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x262ca4: 0x14e0000a  bnez        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x262CA4u;
    {
        const bool branch_taken_0x262ca4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x262CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262CA4u;
            // 0x262ca8: 0x460d0082  mul.s       $f2, $f0, $f13 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x262ca4) {
            ctx->pc = 0x262CD0u;
            goto label_262cd0;
        }
    }
    ctx->pc = 0x262CACu;
    // 0x262cac: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x262cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x262cb0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x262cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x262cb4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x262cb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x262cb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x262cb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262cbc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x262cbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x262cc0: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x262cc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x262cc4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x262cc4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x262cc8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x262CC8u;
    {
        const bool branch_taken_0x262cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262CC8u;
            // 0x262ccc: 0x46026001  sub.s       $f0, $f12, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x262cc8) {
            ctx->pc = 0x262CD8u;
            goto label_262cd8;
        }
    }
    ctx->pc = 0x262CD0u;
label_262cd0:
    // 0x262cd0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x262cd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x262cd4: 0x46026001  sub.s       $f0, $f12, $f2
    ctx->pc = 0x262cd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
label_262cd8:
    // 0x262cd8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x262cd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x262cdc: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x262cdcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x262ce0: 0x46026034  c.lt.s      $f12, $f2
    ctx->pc = 0x262ce0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x262ce4: 0x0  nop
    ctx->pc = 0x262ce4u;
    // NOP
    // 0x262ce8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x262CE8u;
    {
        const bool branch_taken_0x262ce8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x262ce8) {
            ctx->pc = 0x262CECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x262CE8u;
            // 0x262cec: 0x46001306  mov.s       $f12, $f2 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x262CF0u;
            goto label_262cf0;
        }
    }
    ctx->pc = 0x262CF0u;
label_262cf0:
    // 0x262cf0: 0x14e0002e  bnez        $a3, . + 4 + (0x2E << 2)
    ctx->pc = 0x262CF0u;
    {
        const bool branch_taken_0x262cf0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x262cf0) {
            ctx->pc = 0x262DACu;
            goto label_262dac;
        }
    }
    ctx->pc = 0x262CF8u;
    // 0x262cf8: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x262cf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x262cfc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x262cfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x262d00: 0x46016001  sub.s       $f0, $f12, $f1
    ctx->pc = 0x262d00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x262d04: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x262d04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x262d08: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x262D08u;
    {
        const bool branch_taken_0x262d08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x262d08) {
            ctx->pc = 0x262DACu;
            goto label_262dac;
        }
    }
    ctx->pc = 0x262D10u;
    // 0x262d10: 0x46016040  add.s       $f1, $f12, $f1
    ctx->pc = 0x262d10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x262d14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x262d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x262d18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x262d18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262d1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x262d1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x262d20: 0x0  nop
    ctx->pc = 0x262d20u;
    // NOP
    // 0x262d24: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x262D24u;
    {
        const bool branch_taken_0x262d24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x262D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262D24u;
            // 0x262d28: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262d24) {
            ctx->pc = 0x262DACu;
            goto label_262dac;
        }
    }
    ctx->pc = 0x262D2Cu;
    // 0x262d2c: 0x918a0000  lbu         $t2, 0x0($t4)
    ctx->pc = 0x262d2cu;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x262d30: 0x1140001c  beqz        $t2, . + 4 + (0x1C << 2)
    ctx->pc = 0x262D30u;
    {
        const bool branch_taken_0x262d30 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x262D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262D30u;
            // 0x262d34: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262d30) {
            ctx->pc = 0x262DA4u;
            goto label_262da4;
        }
    }
    ctx->pc = 0x262D38u;
    // 0x262d38: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x262d38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262d3c: 0x0  nop
    ctx->pc = 0x262d3cu;
    // NOP
label_262d40:
    // 0x262d40: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x262d40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x262d44: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x262d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x262d48: 0x84470004  lh          $a3, 0x4($v0)
    ctx->pc = 0x262d48u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x262d4c: 0x50e00012  beql        $a3, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x262D4Cu;
    {
        const bool branch_taken_0x262d4c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x262d4c) {
            ctx->pc = 0x262D50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x262D4Cu;
            // 0x262d50: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x262D98u;
            goto label_262d98;
        }
    }
    ctx->pc = 0x262D54u;
    // 0x262d54: 0x0  nop
    ctx->pc = 0x262d54u;
    // NOP
label_262d58:
    // 0x262d58: 0x71023  negu        $v0, $a3
    ctx->pc = 0x262d58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x262d5c: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x262d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x262d60: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x262d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x262d64: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x262d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x262d68: 0x22023  negu        $a0, $v0
    ctx->pc = 0x262d68u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x262d6c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x262d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x262d70: 0x70802004  plzcw       $a0, $a0
    ctx->pc = 0x262d70u;
    { uint64_t v = GPR_U64(ctx, 4); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 4, out); }
    // 0x262d74: 0xe21026  xor         $v0, $a3, $v0
    ctx->pc = 0x262d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 2));
    // 0x262d78: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x262d78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x262d7c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x262d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x262d80: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x262d80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x262d84: 0x23c03  sra         $a3, $v0, 16
    ctx->pc = 0x262d84u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 16));
    // 0x262d88: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x262d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x262d8c: 0x14e0fff2  bnez        $a3, . + 4 + (-0xE << 2)
    ctx->pc = 0x262D8Cu;
    {
        const bool branch_taken_0x262d8c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x262D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262D8Cu;
            // 0x262d90: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262d8c) {
            ctx->pc = 0x262D58u;
            runtime->cooperativeGuestYield();
            goto label_262d58;
        }
    }
    ctx->pc = 0x262D94u;
    // 0x262d94: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x262d94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_262d98:
    // 0x262d98: 0x10a102b  sltu        $v0, $t0, $t2
    ctx->pc = 0x262d98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x262d9c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x262D9Cu;
    {
        const bool branch_taken_0x262d9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x262DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262D9Cu;
            // 0x262da0: 0x25290040  addiu       $t1, $t1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262d9c) {
            ctx->pc = 0x262D40u;
            runtime->cooperativeGuestYield();
            goto label_262d40;
        }
    }
    ctx->pc = 0x262DA4u;
label_262da4:
    // 0x262da4: 0x3e00008  jr          $ra
    ctx->pc = 0x262DA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x262C08u: goto label_262c08;
            case 0x262C28u: goto label_262c28;
            case 0x262C44u: goto label_262c44;
            case 0x262C48u: goto label_262c48;
            case 0x262CD0u: goto label_262cd0;
            case 0x262CD8u: goto label_262cd8;
            case 0x262CF0u: goto label_262cf0;
            case 0x262D40u: goto label_262d40;
            case 0x262D58u: goto label_262d58;
            case 0x262D98u: goto label_262d98;
            case 0x262DA4u: goto label_262da4;
            case 0x262DACu: goto label_262dac;
            case 0x262DE0u: goto label_262de0;
            case 0x262DF8u: goto label_262df8;
            case 0x262E38u: goto label_262e38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x262DACu;
label_262dac:
    // 0x262dac: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x262dacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x262db0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x262db0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262db4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x262db4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x262db8: 0x918a0000  lbu         $t2, 0x0($t4)
    ctx->pc = 0x262db8u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x262dbc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x262dbcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262dc0: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x262dc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x262dc4: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x262dc4u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x262dc8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x262dc8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x262dcc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x262dccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x262dd0: 0x4e2818  mult        $a1, $v0, $t6
    ctx->pc = 0x262dd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x262dd4: 0x1140fff3  beqz        $t2, . + 4 + (-0xD << 2)
    ctx->pc = 0x262DD4u;
    {
        const bool branch_taken_0x262dd4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x262DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262DD4u;
            // 0x262dd8: 0xa33021  addu        $a2, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262dd4) {
            ctx->pc = 0x262DA4u;
            runtime->cooperativeGuestYield();
            goto label_262da4;
        }
    }
    ctx->pc = 0x262DDCu;
    // 0x262ddc: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x262ddcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_262de0:
    // 0x262de0: 0x91040  sll         $v0, $t1, 1
    ctx->pc = 0x262de0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x262de4: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x262de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x262de8: 0x84470004  lh          $a3, 0x4($v0)
    ctx->pc = 0x262de8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x262dec: 0x50e00012  beql        $a3, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x262DECu;
    {
        const bool branch_taken_0x262dec = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x262dec) {
            ctx->pc = 0x262DF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x262DECu;
            // 0x262df0: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x262E38u;
            goto label_262e38;
        }
    }
    ctx->pc = 0x262DF4u;
    // 0x262df4: 0x0  nop
    ctx->pc = 0x262df4u;
    // NOP
label_262df8:
    // 0x262df8: 0x71023  negu        $v0, $a3
    ctx->pc = 0x262df8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x262dfc: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x262dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x262e00: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x262e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x262e04: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x262e04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x262e08: 0x22023  negu        $a0, $v0
    ctx->pc = 0x262e08u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x262e0c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x262e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x262e10: 0x70802004  plzcw       $a0, $a0
    ctx->pc = 0x262e10u;
    { uint64_t v = GPR_U64(ctx, 4); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 4, out); }
    // 0x262e14: 0xe21026  xor         $v0, $a3, $v0
    ctx->pc = 0x262e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 2));
    // 0x262e18: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x262e18u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x262e1c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x262e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x262e20: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x262e20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x262e24: 0x23c03  sra         $a3, $v0, 16
    ctx->pc = 0x262e24u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 16));
    // 0x262e28: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x262e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x262e2c: 0x14e0fff2  bnez        $a3, . + 4 + (-0xE << 2)
    ctx->pc = 0x262E2Cu;
    {
        const bool branch_taken_0x262e2c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x262E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262E2Cu;
            // 0x262e30: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262e2c) {
            ctx->pc = 0x262DF8u;
            runtime->cooperativeGuestYield();
            goto label_262df8;
        }
    }
    ctx->pc = 0x262E34u;
    // 0x262e34: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x262e34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_262e38:
    // 0x262e38: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x262e38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x262e3c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x262E3Cu;
    {
        const bool branch_taken_0x262e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x262E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262E3Cu;
            // 0x262e40: 0x25080040  addiu       $t0, $t0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262e3c) {
            ctx->pc = 0x262DE0u;
            runtime->cooperativeGuestYield();
            goto label_262de0;
        }
    }
    ctx->pc = 0x262E44u;
    // 0x262e44: 0x3e00008  jr          $ra
    ctx->pc = 0x262E44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x262C08u: goto label_262c08;
            case 0x262C28u: goto label_262c28;
            case 0x262C44u: goto label_262c44;
            case 0x262C48u: goto label_262c48;
            case 0x262CD0u: goto label_262cd0;
            case 0x262CD8u: goto label_262cd8;
            case 0x262CF0u: goto label_262cf0;
            case 0x262D40u: goto label_262d40;
            case 0x262D58u: goto label_262d58;
            case 0x262D98u: goto label_262d98;
            case 0x262DA4u: goto label_262da4;
            case 0x262DACu: goto label_262dac;
            case 0x262DE0u: goto label_262de0;
            case 0x262DF8u: goto label_262df8;
            case 0x262E38u: goto label_262e38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x262E4Cu;
    // 0x262e4c: 0x0  nop
    ctx->pc = 0x262e4cu;
    // NOP
}
