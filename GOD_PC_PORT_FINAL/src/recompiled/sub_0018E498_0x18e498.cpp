#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018E498
// Address: 0x18e498 - 0x18e668
void sub_0018E498_0x18e498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E498_0x18e498");
#endif

    ctx->pc = 0x18e498u;

    // 0x18e498: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x18e498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18e49c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x18e49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x18e4a0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x18e4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x18e4a4: 0x9042d9e0  lbu         $v0, -0x2620($v0)
    ctx->pc = 0x18e4a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957536)));
    // 0x18e4a8: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x18e4a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x18e4ac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x18e4acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18e4b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18e4b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18e4b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18e4b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18e4b8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x18e4b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x18e4bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18e4bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18e4c0: 0xc4840020  lwc1        $f4, 0x20($a0)
    ctx->pc = 0x18e4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x18e4c4: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x18e4c4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x18e4c8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x18e4c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x18e4cc: 0x460000c0  add.s       $f3, $f0, $f0
    ctx->pc = 0x18e4ccu;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x18e4d0: 0x46001805  abs.s       $f0, $f3
    ctx->pc = 0x18e4d0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[3]);
    // 0x18e4d4: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x18e4d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18e4d8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x18E4D8u;
    {
        const bool branch_taken_0x18e4d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18e4d8) {
            ctx->pc = 0x18E4E8u;
            goto label_18e4e8;
        }
    }
    ctx->pc = 0x18E4E0u;
    // 0x18e4e0: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x18e4e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x18e4e4: 0x0  nop
    ctx->pc = 0x18e4e4u;
    // NOP
label_18e4e8:
    // 0x18e4e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18e4e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18e4ec: 0x46001832  c.eq.s      $f3, $f0
    ctx->pc = 0x18e4ecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18e4f0: 0x0  nop
    ctx->pc = 0x18e4f0u;
    // NOP
    // 0x18e4f4: 0x4503000f  bc1tl       . + 4 + (0xF << 2)
    ctx->pc = 0x18E4F4u;
    {
        const bool branch_taken_0x18e4f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18e4f4) {
            ctx->pc = 0x18E4F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18E4F4u;
            // 0x18e4f8: 0xc4800020  lwc1        $f0, 0x20($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x18E534u;
            goto label_18e534;
        }
    }
    ctx->pc = 0x18E4FCu;
    // 0x18e4fc: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x18e4fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18e500: 0x0  nop
    ctx->pc = 0x18e500u;
    // NOP
    // 0x18e504: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x18E504u;
    {
        const bool branch_taken_0x18e504 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18E508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E504u;
            // 0x18e508: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e504) {
            ctx->pc = 0x18E520u;
            goto label_18e520;
        }
    }
    ctx->pc = 0x18E50Cu;
    // 0x18e50c: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x18e50cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18e510: 0x0  nop
    ctx->pc = 0x18e510u;
    // NOP
    // 0x18e514: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x18E514u;
    {
        const bool branch_taken_0x18e514 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18E518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E514u;
            // 0x18e518: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e514) {
            ctx->pc = 0x18E520u;
            goto label_18e520;
        }
    }
    ctx->pc = 0x18E51Cu;
    // 0x18e51c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18e51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18e520:
    // 0x18e520: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18e520u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18e524: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18e524u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18e528: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x18e528u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x18e52c: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x18e52cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x18e530: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x18e530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18e534:
    // 0x18e534: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x18e534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x18e538: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18e538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18e53c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18e53cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18e540: 0xc4645000  lwc1        $f4, 0x5000($v1)
    ctx->pc = 0x18e540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x18e544: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x18e544u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18e548: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x18e548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
    // 0x18e54c: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x18e54cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x18e550: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x18e550u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18e554: 0x46002005  abs.s       $f0, $f4
    ctx->pc = 0x18e554u;
    ctx->f[0] = FPU_ABS_S(ctx->f[4]);
    // 0x18e558: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x18e558u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18e55c: 0x460118c3  div.s       $f3, $f3, $f1
    ctx->pc = 0x18e55cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[1];
    // 0x18e560: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x18E560u;
    {
        const bool branch_taken_0x18e560 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18E564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E560u;
            // 0x18e564: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e560) {
            ctx->pc = 0x18E58Cu;
            goto label_18e58c;
        }
    }
    ctx->pc = 0x18E568u;
    // 0x18e568: 0xc481001c  lwc1        $f1, 0x1C($a0)
    ctx->pc = 0x18e568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18e56c: 0xc442c658  lwc1        $f2, -0x39A8($v0)
    ctx->pc = 0x18e56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18e570: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x18e570u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x18e574: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x18e574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x18e578: 0xc4405004  lwc1        $f0, 0x5004($v0)
    ctx->pc = 0x18e578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18e57c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x18e57cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x18e580: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18e580u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x18e584: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18E584u;
    {
        const bool branch_taken_0x18e584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E584u;
            // 0x18e588: 0xe4405004  swc1        $f0, 0x5004($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20484), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e584) {
            ctx->pc = 0x18E5A4u;
            goto label_18e5a4;
        }
    }
    ctx->pc = 0x18E58Cu;
label_18e58c:
    // 0x18e58c: 0x46032002  mul.s       $f0, $f4, $f3
    ctx->pc = 0x18e58cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x18e590: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x18e590u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18e594: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18e594u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18e598: 0x0  nop
    ctx->pc = 0x18e598u;
    // NOP
    // 0x18e59c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x18E59Cu;
    {
        const bool branch_taken_0x18e59c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18e59c) {
            ctx->pc = 0x18E5A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18E59Cu;
            // 0x18e5a0: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x18E5A4u;
            goto label_18e5a4;
        }
    }
    ctx->pc = 0x18E5A4u;
label_18e5a4:
    // 0x18e5a4: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x18e5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18e5a8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x18e5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x18e5ac: 0xc442c658  lwc1        $f2, -0x39A8($v0)
    ctx->pc = 0x18e5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18e5b0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x18e5b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x18e5b4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x18e5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x18e5b8: 0xc4405004  lwc1        $f0, 0x5004($v0)
    ctx->pc = 0x18e5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18e5bc: 0xc46c5000  lwc1        $f12, 0x5000($v1)
    ctx->pc = 0x18e5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18e5c0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x18e5c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x18e5c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18e5c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18e5c8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x18e5c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x18e5cc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x18e5ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x18e5d0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x18e5d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x18e5d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18e5d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x18e5d8: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x18e5d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x18e5dc: 0xe4405004  swc1        $f0, 0x5004($v0)
    ctx->pc = 0x18e5dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20484), bits); }
    // 0x18e5e0: 0x46026300  add.s       $f12, $f12, $f2
    ctx->pc = 0x18e5e0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x18e5e4: 0x46036328  max.s       $f12, $f12, $f3
    ctx->pc = 0x18e5e4u;
    ctx->f[12] = std::max(ctx->f[12], ctx->f[3]);
    // 0x18e5e8: 0x46046329  min.s       $f12, $f12, $f4
    ctx->pc = 0x18e5e8u;
    ctx->f[12] = std::min(ctx->f[12], ctx->f[4]);
    // 0x18e5ec: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x18e5ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x18e5f0: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x18e5f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x18e5f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18e5f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18e5f8: 0xe46c5000  swc1        $f12, 0x5000($v1)
    ctx->pc = 0x18e5f8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20480), bits); }
    // 0x18e5fc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x18e5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18e600: 0xc060ee2  jal         func_183B88
    ctx->pc = 0x18E600u;
    SET_GPR_U32(ctx, 31, 0x18E608u);
    ctx->pc = 0x18E604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E600u;
            // 0x18e604: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183B88u;
    if (runtime->hasFunction(0x183B88u)) {
        auto targetFn = runtime->lookupFunction(0x183B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E608u; }
        if (ctx->pc != 0x18E608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183B88_0x183b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E608u; }
        if (ctx->pc != 0x18E608u) { return; }
    }
    ctx->pc = 0x18E608u;
    // 0x18e608: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x18e608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x18e60c: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x18e60cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x18e610: 0x70851389  pcpyld      $v0, $a0, $a1
    ctx->pc = 0x18e610u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x18e614: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x18e614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18e618: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x18e618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x18e61c: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x18e61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x18e620: 0x70851b89  pcpyld      $v1, $a0, $a1
    ctx->pc = 0x18e620u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x18e624: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x18e624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x18e628: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x18e628u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18e62c: 0x706214c8  ppacw       $v0, $v1, $v0
    ctx->pc = 0x18e62cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x18e630: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x18e630u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x18e634: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x18e634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x18e638: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x18e638u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x18e63c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x18e63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x18e640: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x18e640u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x18e644: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x18e644u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x18e648: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x18e648u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x18e64c: 0x70c71389  pcpyld      $v0, $a2, $a3
    ctx->pc = 0x18e64cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
    // 0x18e650: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x18e650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18e654: 0x70621cc8  ppacw       $v1, $v1, $v0
    ctx->pc = 0x18e654u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x18e658: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x18e658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x18e65c: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x18e65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x18e660: 0x3e00008  jr          $ra
    ctx->pc = 0x18E660u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E660u;
            // 0x18e664: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18E4E8u: goto label_18e4e8;
            case 0x18E520u: goto label_18e520;
            case 0x18E534u: goto label_18e534;
            case 0x18E58Cu: goto label_18e58c;
            case 0x18E5A4u: goto label_18e5a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18E668u;
}
