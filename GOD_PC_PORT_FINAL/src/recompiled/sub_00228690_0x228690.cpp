#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00228690
// Address: 0x228690 - 0x2289a8
void sub_00228690_0x228690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228690_0x228690");
#endif

    ctx->pc = 0x228690u;

    // 0x228690: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x228690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x228694: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x228694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x228698: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x228698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x22869c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22869cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2286a0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2286a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2286a4: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x2286a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2286a8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2286a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2286ac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2286acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2286b0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2286b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2286b4: 0x30f3ffff  andi        $s3, $a3, 0xFFFF
    ctx->pc = 0x2286b4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x2286b8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2286b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2286bc: 0x30d4ffff  andi        $s4, $a2, 0xFFFF
    ctx->pc = 0x2286bcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2286c0: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x2286c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2286c4: 0x3c150033  lui         $s5, 0x33
    ctx->pc = 0x2286c4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)51 << 16));
    // 0x2286c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2286c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2286cc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2286ccu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2286d0: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x2286d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2286d4: 0x8ea3ed58  lw          $v1, -0x12A8($s5)
    ctx->pc = 0x2286d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294962520)));
    // 0x2286d8: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x2286d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2286dc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2286dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2286e0: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x2286e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2286e4: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x2286e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x2286e8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2286E8u;
    {
        const bool branch_taken_0x2286e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2286ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2286E8u;
            // 0x2286ec: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2286e8) {
            ctx->pc = 0x2286F4u;
            goto label_2286f4;
        }
    }
    ctx->pc = 0x2286F0u;
    // 0x2286f0: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x2286f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_2286f4:
    // 0x2286f4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2286f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2286f8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2286f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2286fc: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x2286fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x228700: 0x1043003d  beq         $v0, $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x228700u;
    {
        const bool branch_taken_0x228700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x228704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228700u;
            // 0x228704: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228700) {
            ctx->pc = 0x2287F8u;
            goto label_2287f8;
        }
    }
    ctx->pc = 0x228708u;
label_228708:
    // 0x228708: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x228708u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x22870c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x22870cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x228710: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x228710u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x228714: 0x94c20012  lhu         $v0, 0x12($a2)
    ctx->pc = 0x228714u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 18)));
    // 0x228718: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x228718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x22871c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22871cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x228720: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x228720u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228724: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x228724u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x228728: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x228728u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x22872c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22872cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x228730: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x228730u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228734: 0x0  nop
    ctx->pc = 0x228734u;
    // NOP
    // 0x228738: 0x4502002d  bc1fl       . + 4 + (0x2D << 2)
    ctx->pc = 0x228738u;
    {
        const bool branch_taken_0x228738 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x228738) {
            ctx->pc = 0x22873Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x228738u;
            // 0x22873c: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2287F0u;
            goto label_2287f0;
        }
    }
    ctx->pc = 0x228740u;
    // 0x228740: 0x94c20010  lhu         $v0, 0x10($a2)
    ctx->pc = 0x228740u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x228744: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x228744u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228748: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x228748u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x22874c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x22874cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x228750: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x228750u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x228754: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x228754u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228758: 0x0  nop
    ctx->pc = 0x228758u;
    // NOP
    // 0x22875c: 0x45020024  bc1fl       . + 4 + (0x24 << 2)
    ctx->pc = 0x22875Cu;
    {
        const bool branch_taken_0x22875c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22875c) {
            ctx->pc = 0x228760u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22875Cu;
            // 0x228760: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2287F0u;
            goto label_2287f0;
        }
    }
    ctx->pc = 0x228764u;
    // 0x228764: 0x94c20014  lhu         $v0, 0x14($a2)
    ctx->pc = 0x228764u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x228768: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x228768u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x22876c: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x22876Cu;
    {
        const bool branch_taken_0x22876c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22876c) {
            ctx->pc = 0x228770u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22876Cu;
            // 0x228770: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2287F0u;
            goto label_2287f0;
        }
    }
    ctx->pc = 0x228774u;
    // 0x228774: 0x94c20016  lhu         $v0, 0x16($a2)
    ctx->pc = 0x228774u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 22)));
    // 0x228778: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x228778u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x22877c: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x22877Cu;
    {
        const bool branch_taken_0x22877c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22877c) {
            ctx->pc = 0x228780u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22877Cu;
            // 0x228780: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2287F0u;
            goto label_2287f0;
        }
    }
    ctx->pc = 0x228784u;
    // 0x228784: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x228784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x228788: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x228788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x22878c: 0x8442cc9c  lh          $v0, -0x3364($v0)
    ctx->pc = 0x22878cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294954140)));
    // 0x228790: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x228790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x228794: 0x94c4001a  lhu         $a0, 0x1A($a2)
    ctx->pc = 0x228794u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 26)));
    // 0x228798: 0x24635ea8  addiu       $v1, $v1, 0x5EA8
    ctx->pc = 0x228798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24232));
    // 0x22879c: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x22879cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2287a0: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2287a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x2287a4: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2287a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2287a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2287a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2287ac: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2287acu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2287b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2287b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2287b4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2287b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2287b8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2287b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2287bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2287bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2287c0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2287c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2287c4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2287c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2287c8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2287c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2287cc: 0x0  nop
    ctx->pc = 0x2287ccu;
    // NOP
    // 0x2287d0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2287D0u;
    {
        const bool branch_taken_0x2287d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2287d0) {
            ctx->pc = 0x2287D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2287D0u;
            // 0x2287d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2287E0u;
            goto label_2287e0;
        }
    }
    ctx->pc = 0x2287D8u;
    // 0x2287d8: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2287d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2287dc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2287dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2287e0:
    // 0x2287e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2287E0u;
    {
        const bool branch_taken_0x2287e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2287E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2287E0u;
            // 0x2287e4: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2287e0) {
            ctx->pc = 0x2287F0u;
            goto label_2287f0;
        }
    }
    ctx->pc = 0x2287E8u;
    // 0x2287e8: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x2287e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2287ec: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x2287ecu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_2287f0:
    // 0x2287f0: 0x1447ffc5  bne         $v0, $a3, . + 4 + (-0x3B << 2)
    ctx->pc = 0x2287F0u;
    {
        const bool branch_taken_0x2287f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x2287F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2287F0u;
            // 0x2287f4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2287f0) {
            ctx->pc = 0x228708u;
            runtime->cooperativeGuestYield();
            goto label_228708;
        }
    }
    ctx->pc = 0x2287F8u;
label_2287f8:
    // 0x2287f8: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x2287f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x2287fc: 0xc04f970  jal         func_13E5C0
    ctx->pc = 0x2287FCu;
    SET_GPR_U32(ctx, 31, 0x228804u);
    ctx->pc = 0x228800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2287FCu;
            // 0x228800: 0x2484b950  addiu       $a0, $a0, -0x46B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E5C0u;
    if (runtime->hasFunction(0x13E5C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228804u; }
        if (ctx->pc != 0x228804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e5c0_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228804u; }
        if (ctx->pc != 0x228804u) { return; }
    }
    ctx->pc = 0x228804u;
    // 0x228804: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x228804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x228808: 0x461500c2  mul.s       $f3, $f0, $f21
    ctx->pc = 0x228808u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x22880c: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x22880cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x228810: 0x10510058  beq         $v0, $s1, . + 4 + (0x58 << 2)
    ctx->pc = 0x228810u;
    {
        const bool branch_taken_0x228810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x228814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228810u;
            // 0x228814: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228810) {
            ctx->pc = 0x228974u;
            goto label_228974;
        }
    }
    ctx->pc = 0x228818u;
label_228818:
    // 0x228818: 0x8fb10004  lw          $s1, 0x4($sp)
    ctx->pc = 0x228818u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x22881c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x22881cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x228820: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x228820u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x228824: 0x96220012  lhu         $v0, 0x12($s1)
    ctx->pc = 0x228824u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x228828: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x228828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x22882c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22882cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x228830: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x228830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228834: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x228834u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x228838: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x228838u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x22883c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22883cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x228840: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x228840u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228844: 0x0  nop
    ctx->pc = 0x228844u;
    // NOP
    // 0x228848: 0x45020047  bc1fl       . + 4 + (0x47 << 2)
    ctx->pc = 0x228848u;
    {
        const bool branch_taken_0x228848 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x228848) {
            ctx->pc = 0x22884Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x228848u;
            // 0x22884c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x228968u;
            goto label_228968;
        }
    }
    ctx->pc = 0x228850u;
    // 0x228850: 0x96220010  lhu         $v0, 0x10($s1)
    ctx->pc = 0x228850u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x228854: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x228854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228858: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x228858u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x22885c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x22885cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x228860: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x228860u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x228864: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x228864u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228868: 0x0  nop
    ctx->pc = 0x228868u;
    // NOP
    // 0x22886c: 0x4502003e  bc1fl       . + 4 + (0x3E << 2)
    ctx->pc = 0x22886Cu;
    {
        const bool branch_taken_0x22886c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22886c) {
            ctx->pc = 0x228870u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22886Cu;
            // 0x228870: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x228968u;
            goto label_228968;
        }
    }
    ctx->pc = 0x228874u;
    // 0x228874: 0x96220014  lhu         $v0, 0x14($s1)
    ctx->pc = 0x228874u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x228878: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x228878u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x22887c: 0x5440003a  bnel        $v0, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x22887Cu;
    {
        const bool branch_taken_0x22887c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22887c) {
            ctx->pc = 0x228880u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22887Cu;
            // 0x228880: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x228968u;
            goto label_228968;
        }
    }
    ctx->pc = 0x228884u;
    // 0x228884: 0x96220016  lhu         $v0, 0x16($s1)
    ctx->pc = 0x228884u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x228888: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x228888u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x22888c: 0x54400036  bnel        $v0, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x22888Cu;
    {
        const bool branch_taken_0x22888c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22888c) {
            ctx->pc = 0x228890u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22888Cu;
            // 0x228890: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x228968u;
            goto label_228968;
        }
    }
    ctx->pc = 0x228894u;
    // 0x228894: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x228894u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x228898: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x228898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x22889c: 0x84c2cc9c  lh          $v0, -0x3364($a2)
    ctx->pc = 0x22889cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4294954140)));
    // 0x2288a0: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x2288a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x2288a4: 0x9625001a  lhu         $a1, 0x1A($s1)
    ctx->pc = 0x2288a4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x2288a8: 0x24e45ea8  addiu       $a0, $a3, 0x5EA8
    ctx->pc = 0x2288a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 24232));
    // 0x2288ac: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2288acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2288b0: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2288b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x2288b4: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2288b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2288b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2288b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2288bc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2288bcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2288c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2288c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2288c4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2288c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2288c8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2288c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2288cc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2288ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2288d0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2288d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2288d4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2288d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2288d8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2288d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2288dc: 0x0  nop
    ctx->pc = 0x2288dcu;
    // NOP
    // 0x2288e0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2288E0u;
    {
        const bool branch_taken_0x2288e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2288e0) {
            ctx->pc = 0x2288E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2288E0u;
            // 0x2288e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2288F0u;
            goto label_2288f0;
        }
    }
    ctx->pc = 0x2288E8u;
    // 0x2288e8: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2288e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2288ec: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2288ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2288f0:
    // 0x2288f0: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x2288F0u;
    {
        const bool branch_taken_0x2288f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2288f0) {
            ctx->pc = 0x2288F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2288F0u;
            // 0x2288f4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x228968u;
            goto label_228968;
        }
    }
    ctx->pc = 0x2288F8u;
    // 0x2288f8: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2288f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2288fc: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x2288fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228900: 0x0  nop
    ctx->pc = 0x228900u;
    // NOP
    // 0x228904: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x228904u;
    {
        const bool branch_taken_0x228904 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x228908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228904u;
            // 0x228908: 0x84c2cc9c  lh          $v0, -0x3364($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4294954140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228904) {
            ctx->pc = 0x228960u;
            goto label_228960;
        }
    }
    ctx->pc = 0x22890Cu;
    // 0x22890c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x22890cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x228910: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x228910u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x228914: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x228914u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x228918: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x228918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x22891c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x22891cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x228920: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x228920u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228924: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x228924u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x228928: 0x24e45ea8  addiu       $a0, $a3, 0x5EA8
    ctx->pc = 0x228928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 24232));
    // 0x22892c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x22892cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x228930: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x228930u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x228934: 0xc461c658  lwc1        $f1, -0x39A8($v1)
    ctx->pc = 0x228934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228938: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x228938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x22893c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x22893cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228940: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x228940u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x228944: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x228944u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[1];
    // 0x228948: 0xc0a14de  jal         func_285378
    ctx->pc = 0x228948u;
    SET_GPR_U32(ctx, 31, 0x228950u);
    ctx->pc = 0x22894Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228948u;
            // 0x22894c: 0x8eb0ed58  lw          $s0, -0x12A8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294962520)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285378u;
    if (runtime->hasFunction(0x285378u)) {
        auto targetFn = runtime->lookupFunction(0x285378u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228950u; }
        if (ctx->pc != 0x228950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_285378_0x285410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228950u; }
        if (ctx->pc != 0x228950u) { return; }
    }
    ctx->pc = 0x228950u;
    // 0x228950: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x228950u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x228954: 0xae500008  sw          $s0, 0x8($s2)
    ctx->pc = 0x228954u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 16));
    // 0x228958: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x228958u;
    {
        const bool branch_taken_0x228958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22895Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228958u;
            // 0x22895c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228958) {
            ctx->pc = 0x228978u;
            goto label_228978;
        }
    }
    ctx->pc = 0x228960u;
label_228960:
    // 0x228960: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x228960u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x228964: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x228964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_228968:
    // 0x228968: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x228968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22896c: 0x1443ffaa  bne         $v0, $v1, . + 4 + (-0x56 << 2)
    ctx->pc = 0x22896Cu;
    {
        const bool branch_taken_0x22896c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x228970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22896Cu;
            // 0x228970: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22896c) {
            ctx->pc = 0x228818u;
            runtime->cooperativeGuestYield();
            goto label_228818;
        }
    }
    ctx->pc = 0x228974u;
label_228974:
    // 0x228974: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x228974u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_228978:
    // 0x228978: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x228978u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22897c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x22897cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x228980: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x228980u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x228984: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x228984u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x228988: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x228988u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22898c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x22898cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228990: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x228990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228994: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x228994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x228998: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x228998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22899c: 0x3e00008  jr          $ra
    ctx->pc = 0x22899Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2289A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22899Cu;
            // 0x2289a0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2286F4u: goto label_2286f4;
            case 0x228708u: goto label_228708;
            case 0x2287E0u: goto label_2287e0;
            case 0x2287F0u: goto label_2287f0;
            case 0x2287F8u: goto label_2287f8;
            case 0x228818u: goto label_228818;
            case 0x2288F0u: goto label_2288f0;
            case 0x228960u: goto label_228960;
            case 0x228968u: goto label_228968;
            case 0x228974u: goto label_228974;
            case 0x228978u: goto label_228978;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2289A4u;
    // 0x2289a4: 0x0  nop
    ctx->pc = 0x2289a4u;
    // NOP
}
