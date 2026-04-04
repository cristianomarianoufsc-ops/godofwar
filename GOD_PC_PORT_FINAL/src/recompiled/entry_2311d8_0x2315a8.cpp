#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2311d8
// Address: 0x2311d8 - 0x2315a8
void entry_2311d8_0x2315a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2311d8_0x2315a8");
#endif

    ctx->pc = 0x2311d8u;

    // 0x2311d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2311d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2311dc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2311dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2311e0: 0x27bdf000  addiu       $sp, $sp, -0x1000
    ctx->pc = 0x2311e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963200));
    // 0x2311e4: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x2311e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x2311e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2311e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2311ec: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x2311ecu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2311f0: 0x460e10c3  div.s       $f3, $f2, $f14
    ctx->pc = 0x2311f0u;
    if (ctx->f[14] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[3] = ctx->f[2] / ctx->f[14];
    // 0x2311f4: 0x94cc0002  lhu         $t4, 0x2($a2)
    ctx->pc = 0x2311f4u;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2311f8: 0x46006840  add.s       $f1, $f13, $f0
    ctx->pc = 0x2311f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x2311fc: 0x94ca0000  lhu         $t2, 0x0($a2)
    ctx->pc = 0x2311fcu;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x231200: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x231200u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x231204: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x231204u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231208: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x231208u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x23120c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x23120cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x231210: 0x46000124  .word       0x46000124                   # cvt.w.s     $f4, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x231210u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x231214: 0x44082000  mfc1        $t0, $f4
    ctx->pc = 0x231214u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x231218: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x231218u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x23121c: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x23121cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x231220: 0x10c4023  subu        $t0, $t0, $t4
    ctx->pc = 0x231220u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x231224: 0x5010005  bgez        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x231224u;
    {
        const bool branch_taken_0x231224 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x231228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231224u;
            // 0x231228: 0x12c4823  subu        $t1, $t1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231224) {
            ctx->pc = 0x23123Cu;
            goto label_23123c;
        }
    }
    ctx->pc = 0x23122Cu;
    // 0x23122c: 0x448c0000  mtc1        $t4, $f0
    ctx->pc = 0x23122cu;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231230: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x231230u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x231234: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x231234u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231238: 0x460e0302  mul.s       $f12, $f0, $f14
    ctx->pc = 0x231238u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
label_23123c:
    // 0x23123c: 0x5210005  bgez        $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x23123Cu;
    {
        const bool branch_taken_0x23123c = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x231240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23123Cu;
            // 0x231240: 0x95a20000  lhu         $v0, 0x0($t5) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23123c) {
            ctx->pc = 0x231254u;
            goto label_231254;
        }
    }
    ctx->pc = 0x231244u;
    // 0x231244: 0x448c0000  mtc1        $t4, $f0
    ctx->pc = 0x231244u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231248: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x231248u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x23124c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x23124cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231250: 0x460e0342  mul.s       $f13, $f0, $f14
    ctx->pc = 0x231250u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
label_231254:
    // 0x231254: 0x2543ffff  addiu       $v1, $t2, -0x1
    ctx->pc = 0x231254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x231258: 0x10a202a  slt         $a0, $t0, $t2
    ctx->pc = 0x231258u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x23125c: 0x12a282a  slt         $a1, $t1, $t2
    ctx->pc = 0x23125cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x231260: 0x64400a  movz        $t0, $v1, $a0
    ctx->pc = 0x231260u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
    // 0x231264: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x231264u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x231268: 0x65480a  movz        $t1, $v1, $a1
    ctx->pc = 0x231268u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
    // 0x23126c: 0x162c021  addu        $t8, $t3, $v0
    ctx->pc = 0x23126cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x231270: 0x90e40001  lbu         $a0, 0x1($a3)
    ctx->pc = 0x231270u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x231274: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x231274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x231278: 0x14820011  bne         $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x231278u;
    {
        const bool branch_taken_0x231278 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x23127Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231278u;
            // 0x23127c: 0x1287023  subu        $t6, $t1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231278) {
            ctx->pc = 0x2312C0u;
            goto label_2312c0;
        }
    }
    ctx->pc = 0x231280u;
    // 0x231280: 0x91a20002  lbu         $v0, 0x2($t5)
    ctx->pc = 0x231280u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x231284: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x231284u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x231288: 0x21703  sra         $v0, $v0, 28
    ctx->pc = 0x231288u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 28));
    // 0x23128c: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23128Cu;
    {
        const bool branch_taken_0x23128c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x23128c) {
            ctx->pc = 0x231290u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23128Cu;
            // 0x231290: 0x441004  sllv        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2312ACu;
            goto label_2312ac;
        }
    }
    ctx->pc = 0x231294u;
    // 0x231294: 0x21023  negu        $v0, $v0
    ctx->pc = 0x231294u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x231298: 0x441004  sllv        $v0, $a0, $v0
    ctx->pc = 0x231298u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x23129c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23129cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2312a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2312a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2312a4: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2312A4u;
    {
        const bool branch_taken_0x2312a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2312A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2312A4u;
            // 0x2312a8: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2312a4) {
            ctx->pc = 0x231334u;
            goto label_231334;
        }
    }
    ctx->pc = 0x2312ACu;
label_2312ac:
    // 0x2312ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2312acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2312b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2312b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2312b4: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2312b4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x2312b8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2312B8u;
    {
        const bool branch_taken_0x2312b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2312BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2312B8u;
            // 0x2312bc: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2312b8) {
            ctx->pc = 0x231334u;
            goto label_231334;
        }
    }
    ctx->pc = 0x2312C0u;
label_2312c0:
    // 0x2312c0: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x2312c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2312c4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2312c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2312c8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2312c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2312cc: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2312CCu;
    {
        const bool branch_taken_0x2312cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2312D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2312CCu;
            // 0x2312d0: 0xe21021  addu        $v0, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2312cc) {
            ctx->pc = 0x231334u;
            goto label_231334;
        }
    }
    ctx->pc = 0x2312D4u;
    // 0x2312d4: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x2312d4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2312d8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2312d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2312dc: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2312dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2312e0:
    // 0x2312e0: 0x81630000  lb          $v1, 0x0($t3)
    ctx->pc = 0x2312e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2312e4: 0x4610008  bgez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2312E4u;
    {
        const bool branch_taken_0x2312e4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2312E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2312E4u;
            // 0x2312e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2312e4) {
            ctx->pc = 0x231308u;
            goto label_231308;
        }
    }
    ctx->pc = 0x2312ECu;
    // 0x2312ec: 0x31023  negu        $v0, $v1
    ctx->pc = 0x2312ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x2312f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2312f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2312f4: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x2312f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x2312f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2312f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2312fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2312fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x231300: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x231300u;
    {
        const bool branch_taken_0x231300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231300u;
            // 0x231304: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x231300) {
            ctx->pc = 0x231324u;
            goto label_231324;
        }
    }
    ctx->pc = 0x231308u;
label_231308:
    // 0x231308: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x231308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23130c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23130cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231310: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x231310u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x231314: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x231314u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x231318: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x231318u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x23131c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x23131cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x231320: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x231320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_231324:
    // 0x231324: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x231324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x231328: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x231328u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x23132c: 0x1540ffec  bnez        $t2, . + 4 + (-0x14 << 2)
    ctx->pc = 0x23132Cu;
    {
        const bool branch_taken_0x23132c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x231330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23132Cu;
            // 0x231330: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23132c) {
            ctx->pc = 0x2312E0u;
            runtime->cooperativeGuestYield();
            goto label_2312e0;
        }
    }
    ctx->pc = 0x231334u;
label_231334:
    // 0x231334: 0x15c0003a  bnez        $t6, . + 4 + (0x3A << 2)
    ctx->pc = 0x231334u;
    {
        const bool branch_taken_0x231334 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x231338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231334u;
            // 0x231338: 0x891818  mult        $v1, $a0, $t1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x231334) {
            ctx->pc = 0x231420u;
            goto label_231420;
        }
    }
    ctx->pc = 0x23133Cu;
    // 0x23133c: 0x91a20003  lbu         $v0, 0x3($t5)
    ctx->pc = 0x23133cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 3)));
    // 0x231340: 0x460c6801  sub.s       $f0, $f13, $f12
    ctx->pc = 0x231340u;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[12]);
    // 0x231344: 0x881818  mult        $v1, $a0, $t0
    ctx->pc = 0x231344u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x231348: 0x94e50002  lhu         $a1, 0x2($a3)
    ctx->pc = 0x231348u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x23134c: 0x94c40006  lhu         $a0, 0x6($a2)
    ctx->pc = 0x23134cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x231350: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x231350u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x231354: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x231354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x231358: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x231358u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x23135c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23135cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x231360: 0x90ed0000  lbu         $t5, 0x0($a3)
    ctx->pc = 0x231360u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x231364: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x231364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x231368: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x231368u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x23136c: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x23136cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x231370: 0x460f0302  mul.s       $f12, $f0, $f15
    ctx->pc = 0x231370u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[15]);
    // 0x231374: 0x1cd102b  sltu        $v0, $t6, $t5
    ctx->pc = 0x231374u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x231378: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x231378u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23137c: 0x10400087  beqz        $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x23137Cu;
    {
        const bool branch_taken_0x23137c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23137Cu;
            // 0x231380: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23137c) {
            ctx->pc = 0x23159Cu;
            goto label_23159c;
        }
    }
    ctx->pc = 0x231384u;
    // 0x231384: 0x300282d  daddu       $a1, $t8, $zero
    ctx->pc = 0x231384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
label_231388:
    // 0x231388: 0xb1040  sll         $v0, $t3, 1
    ctx->pc = 0x231388u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x23138c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x23138cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x231390: 0x84480004  lh          $t0, 0x4($v0)
    ctx->pc = 0x231390u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x231394: 0x1100001c  beqz        $t0, . + 4 + (0x1C << 2)
    ctx->pc = 0x231394u;
    {
        const bool branch_taken_0x231394 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x231398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231394u;
            // 0x231398: 0xc1080  sll         $v0, $t4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231394) {
            ctx->pc = 0x231408u;
            goto label_231408;
        }
    }
    ctx->pc = 0x23139Cu;
    // 0x23139c: 0xc1840  sll         $v1, $t4, 1
    ctx->pc = 0x23139cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x2313a0: 0x5d5021  addu        $t2, $v0, $sp
    ctx->pc = 0x2313a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2313a4: 0x664821  addu        $t1, $v1, $a2
    ctx->pc = 0x2313a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2313a8:
    // 0x2313a8: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x2313a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2313ac: 0x81823  negu        $v1, $t0
    ctx->pc = 0x2313acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 8)));
    // 0x2313b0: 0x1031824  and         $v1, $t0, $v1
    ctx->pc = 0x2313b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x2313b4: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x2313b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2313b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2313b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2313bc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2313bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2313c0: 0xc5420000  lwc1        $f2, 0x0($t2)
    ctx->pc = 0x2313c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2313c4: 0x31023  negu        $v0, $v1
    ctx->pc = 0x2313c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x2313c8: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x2313c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x2313cc: 0x70401004  plzcw       $v0, $v0
    ctx->pc = 0x2313ccu;
    { uint64_t v = GPR_U64(ctx, 2); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 2, out); }
    // 0x2313d0: 0x1031826  xor         $v1, $t0, $v1
    ctx->pc = 0x2313d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 3));
    // 0x2313d4: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x2313d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x2313d8: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x2313d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2313dc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2313dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2313e0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2313e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2313e4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2313e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2313e8: 0x34403  sra         $t0, $v1, 16
    ctx->pc = 0x2313e8u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 3), 16));
    // 0x2313ec: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2313ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2313f0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2313f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2313f4: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x2313f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x2313f8: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x2313f8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x2313fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2313fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x231400: 0x1500ffe9  bnez        $t0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x231400u;
    {
        const bool branch_taken_0x231400 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x231404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231400u;
            // 0x231404: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x231400) {
            ctx->pc = 0x2313A8u;
            runtime->cooperativeGuestYield();
            goto label_2313a8;
        }
    }
    ctx->pc = 0x231408u;
label_231408:
    // 0x231408: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x231408u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x23140c: 0x16d102b  sltu        $v0, $t3, $t5
    ctx->pc = 0x23140cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x231410: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x231410u;
    {
        const bool branch_taken_0x231410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x231414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231410u;
            // 0x231414: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231410) {
            ctx->pc = 0x231388u;
            runtime->cooperativeGuestYield();
            goto label_231388;
        }
    }
    ctx->pc = 0x231418u;
    // 0x231418: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x231418u;
    {
        const bool branch_taken_0x231418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231418) {
            ctx->pc = 0x23159Cu;
            goto label_23159c;
        }
    }
    ctx->pc = 0x231420u;
label_231420:
    // 0x231420: 0x91a20003  lbu         $v0, 0x3($t5)
    ctx->pc = 0x231420u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 3)));
    // 0x231424: 0x882018  mult        $a0, $a0, $t0
    ctx->pc = 0x231424u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x231428: 0x94c50006  lhu         $a1, 0x6($a2)
    ctx->pc = 0x231428u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x23142c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x23142cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x231430: 0x94e60002  lhu         $a2, 0x2($a3)
    ctx->pc = 0x231430u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x231434: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x231434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x231438: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x231438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x23143c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x23143cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x231440: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x231440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x231444: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x231444u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x231448: 0x43c821  addu        $t9, $v0, $v1
    ctx->pc = 0x231448u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23144c: 0x5c10012  bgez        $t6, . + 4 + (0x12 << 2)
    ctx->pc = 0x23144Cu;
    {
        const bool branch_taken_0x23144c = (GPR_S32(ctx, 14) >= 0);
        ctx->pc = 0x231450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23144Cu;
            // 0x231450: 0x443021  addu        $a2, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23144c) {
            ctx->pc = 0x231498u;
            goto label_231498;
        }
    }
    ctx->pc = 0x231454u;
    // 0x231454: 0x12c1021  addu        $v0, $t1, $t4
    ctx->pc = 0x231454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
    // 0x231458: 0x460d1882  mul.s       $f2, $f3, $f13
    ctx->pc = 0x231458u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[13]);
    // 0x23145c: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x23145cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x231460: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x231460u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x231464: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x231464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x231468: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x231468u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23146c: 0x460c1802  mul.s       $f0, $f3, $f12
    ctx->pc = 0x23146cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[12]);
    // 0x231470: 0x10c1021  addu        $v0, $t0, $t4
    ctx->pc = 0x231470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x231474: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x231474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x231478: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x231478u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x23147c: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x23147cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x231480: 0x46007bc7  neg.s       $f15, $f15
    ctx->pc = 0x231480u;
    ctx->f[15] = FPU_NEG_S(ctx->f[15]);
    // 0x231484: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x231484u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x231488: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x231488u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x23148c: 0x460f0302  mul.s       $f12, $f0, $f15
    ctx->pc = 0x23148cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[15]);
    // 0x231490: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x231490u;
    {
        const bool branch_taken_0x231490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231490u;
            // 0x231494: 0x460f0b42  mul.s       $f13, $f1, $f15 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[15]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x231490) {
            ctx->pc = 0x2314D4u;
            goto label_2314d4;
        }
    }
    ctx->pc = 0x231498u;
label_231498:
    // 0x231498: 0x10c1021  addu        $v0, $t0, $t4
    ctx->pc = 0x231498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x23149c: 0x460c1882  mul.s       $f2, $f3, $f12
    ctx->pc = 0x23149cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[12]);
    // 0x2314a0: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x2314a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2314a4: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2314a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2314a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2314a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2314ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2314acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2314b0: 0x460d1802  mul.s       $f0, $f3, $f13
    ctx->pc = 0x2314b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[13]);
    // 0x2314b4: 0x12c1021  addu        $v0, $t1, $t4
    ctx->pc = 0x2314b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
    // 0x2314b8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2314b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2314bc: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2314bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2314c0: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x2314c0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x2314c4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2314c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2314c8: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2314c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2314cc: 0x460f0342  mul.s       $f13, $f0, $f15
    ctx->pc = 0x2314ccu;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[15]);
    // 0x2314d0: 0x460f0b02  mul.s       $f12, $f1, $f15
    ctx->pc = 0x2314d0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[15]);
label_2314d4:
    // 0x2314d4: 0x90ef0000  lbu         $t7, 0x0($a3)
    ctx->pc = 0x2314d4u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2314d8: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x2314d8u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2314dc: 0x11e0002f  beqz        $t7, . + 4 + (0x2F << 2)
    ctx->pc = 0x2314DCu;
    {
        const bool branch_taken_0x2314dc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2314E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2314DCu;
            // 0x2314e0: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2314dc) {
            ctx->pc = 0x23159Cu;
            goto label_23159c;
        }
    }
    ctx->pc = 0x2314E4u;
    // 0x2314e4: 0x300682d  daddu       $t5, $t8, $zero
    ctx->pc = 0x2314e4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
label_2314e8:
    // 0x2314e8: 0xc1040  sll         $v0, $t4, 1
    ctx->pc = 0x2314e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x2314ec: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2314ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2314f0: 0x84480004  lh          $t0, 0x4($v0)
    ctx->pc = 0x2314f0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2314f4: 0x11000025  beqz        $t0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2314F4u;
    {
        const bool branch_taken_0x2314f4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2314F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2314F4u;
            // 0x2314f8: 0xe1080  sll         $v0, $t6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2314f4) {
            ctx->pc = 0x23158Cu;
            goto label_23158c;
        }
    }
    ctx->pc = 0x2314FCu;
    // 0x2314fc: 0xe1840  sll         $v1, $t6, 1
    ctx->pc = 0x2314fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 14), 1));
    // 0x231500: 0x5d5821  addu        $t3, $v0, $sp
    ctx->pc = 0x231500u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x231504: 0x665021  addu        $t2, $v1, $a2
    ctx->pc = 0x231504u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x231508: 0x794821  addu        $t1, $v1, $t9
    ctx->pc = 0x231508u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 25)));
    // 0x23150c: 0x0  nop
    ctx->pc = 0x23150cu;
    // NOP
label_231510:
    // 0x231510: 0x85430000  lh          $v1, 0x0($t2)
    ctx->pc = 0x231510u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x231514: 0x81023  negu        $v0, $t0
    ctx->pc = 0x231514u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 8)));
    // 0x231518: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x231518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x23151c: 0x85250000  lh          $a1, 0x0($t1)
    ctx->pc = 0x23151cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x231520: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x231520u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x231524: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x231524u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x231528: 0x22023  negu        $a0, $v0
    ctx->pc = 0x231528u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x23152c: 0x70802004  plzcw       $a0, $a0
    ctx->pc = 0x23152cu;
    { uint64_t v = GPR_U64(ctx, 4); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 4, out); }
    // 0x231530: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x231530u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x231534: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x231534u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x231538: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x231538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x23153c: 0xc5630000  lwc1        $f3, 0x0($t3)
    ctx->pc = 0x23153cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x231540: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x231540u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x231544: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x231544u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x231548: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x231548u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23154c: 0x460d1082  mul.s       $f2, $f2, $f13
    ctx->pc = 0x23154cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[13]);
    // 0x231550: 0x6d1821  addu        $v1, $v1, $t5
    ctx->pc = 0x231550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x231554: 0x1021026  xor         $v0, $t0, $v0
    ctx->pc = 0x231554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 2));
    // 0x231558: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x231558u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x23155c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x23155cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231560: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x231560u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x231564: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x231564u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x231568: 0x24403  sra         $t0, $v0, 16
    ctx->pc = 0x231568u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 16));
    // 0x23156c: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x23156cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x231570: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x231570u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x231574: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x231574u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x231578: 0x254a0002  addiu       $t2, $t2, 0x2
    ctx->pc = 0x231578u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x23157c: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x23157cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x231580: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x231580u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x231584: 0x1500ffe2  bnez        $t0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x231584u;
    {
        const bool branch_taken_0x231584 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x231588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231584u;
            // 0x231588: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x231584) {
            ctx->pc = 0x231510u;
            runtime->cooperativeGuestYield();
            goto label_231510;
        }
    }
    ctx->pc = 0x23158Cu;
label_23158c:
    // 0x23158c: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x23158cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x231590: 0x18f102b  sltu        $v0, $t4, $t7
    ctx->pc = 0x231590u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x231594: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x231594u;
    {
        const bool branch_taken_0x231594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x231598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231594u;
            // 0x231598: 0x25ad0040  addiu       $t5, $t5, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231594) {
            ctx->pc = 0x2314E8u;
            runtime->cooperativeGuestYield();
            goto label_2314e8;
        }
    }
    ctx->pc = 0x23159Cu;
label_23159c:
    // 0x23159c: 0x3e00008  jr          $ra
    ctx->pc = 0x23159Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2315A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23159Cu;
            // 0x2315a0: 0x27bd1000  addiu       $sp, $sp, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4096));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23123Cu: goto label_23123c;
            case 0x231254u: goto label_231254;
            case 0x2312ACu: goto label_2312ac;
            case 0x2312C0u: goto label_2312c0;
            case 0x2312E0u: goto label_2312e0;
            case 0x231308u: goto label_231308;
            case 0x231324u: goto label_231324;
            case 0x231334u: goto label_231334;
            case 0x231388u: goto label_231388;
            case 0x2313A8u: goto label_2313a8;
            case 0x231408u: goto label_231408;
            case 0x231420u: goto label_231420;
            case 0x231498u: goto label_231498;
            case 0x2314D4u: goto label_2314d4;
            case 0x2314E8u: goto label_2314e8;
            case 0x231510u: goto label_231510;
            case 0x23158Cu: goto label_23158c;
            case 0x23159Cu: goto label_23159c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2315A4u;
    // 0x2315a4: 0x0  nop
    ctx->pc = 0x2315a4u;
    // NOP
}
