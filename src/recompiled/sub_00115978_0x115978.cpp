#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00115978
// Address: 0x115978 - 0x115c18
void sub_00115978_0x115978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115978_0x115978");
#endif

    ctx->pc = 0x115978u;

    // 0x115978: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x115978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x11597c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x11597cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115980: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x115980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x115984: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x115984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x115988: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x115988u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11598c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x11598cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x115990: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x115990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x115994: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x115994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x115998: 0x10a00032  beqz        $a1, . + 4 + (0x32 << 2)
    ctx->pc = 0x115998u;
    {
        const bool branch_taken_0x115998 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11599Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115998u;
            // 0x11599c: 0x7fb50050  sq          $s5, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115998) {
            ctx->pc = 0x115A64u;
            goto label_115a64;
        }
    }
    ctx->pc = 0x1159A0u;
    // 0x1159a0: 0xc5000018  lwc1        $f0, 0x18($t0)
    ctx->pc = 0x1159a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1159a4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1159a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1159a8: 0xc501001c  lwc1        $f1, 0x1C($t0)
    ctx->pc = 0x1159a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1159ac: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1159acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1159b0: 0xc5020024  lwc1        $f2, 0x24($t0)
    ctx->pc = 0x1159b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1159b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1159b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1159b8: 0x8c45005c  lw          $a1, 0x5C($v0)
    ctx->pc = 0x1159b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1159bc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1159bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1159c0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1159c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1159c4: 0x70632488  pextlw      $a0, $v1, $v1
    ctx->pc = 0x1159c4u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
    // 0x1159c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1159c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1159cc: 0x8d0b01f0  lw          $t3, 0x1F0($t0)
    ctx->pc = 0x1159ccu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 496)));
    // 0x1159d0: 0x70431488  pextlw      $v0, $v0, $v1
    ctx->pc = 0x1159d0u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1159d4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1159d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1159d8: 0x70441488  pextlw      $v0, $v0, $a0
    ctx->pc = 0x1159d8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x1159dc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1159dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1159e0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1159e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1159e4: 0x11600084  beqz        $t3, . + 4 + (0x84 << 2)
    ctx->pc = 0x1159E4u;
    {
        const bool branch_taken_0x1159e4 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x1159E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1159E4u;
            // 0x1159e8: 0xfba20010  sqc2        $vf2, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1159e4) {
            ctx->pc = 0x115BF8u;
            goto label_115bf8;
        }
    }
    ctx->pc = 0x1159ECu;
    // 0x1159ec: 0x0  nop
    ctx->pc = 0x1159ecu;
    // NOP
label_1159f0:
    // 0x1159f0: 0x84e30000  lh          $v1, 0x0($a3)
    ctx->pc = 0x1159f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1159f4: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1159F4u;
    {
        const bool branch_taken_0x1159f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1159F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1159F4u;
            // 0x1159f8: 0xdba10010  lqc2        $vf1, 0x10($sp) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1159f4) {
            ctx->pc = 0x115A4Cu;
            goto label_115a4c;
        }
    }
    ctx->pc = 0x1159FCu;
    // 0x1159fc: 0xa1180  sll         $v0, $t2, 6
    ctx->pc = 0x1159fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 6));
    // 0x115a00: 0x454021  addu        $t0, $v0, $a1
    ctx->pc = 0x115a00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x115a04: 0x2409000f  addiu       $t1, $zero, 0xF
    ctx->pc = 0x115a04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x115a08: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x115a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x115a0c: 0x0  nop
    ctx->pc = 0x115a0cu;
    // NOP
label_115a10:
    // 0x115a10: 0x691024  and         $v0, $v1, $t1
    ctx->pc = 0x115a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x115a14: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x115A14u;
    {
        const bool branch_taken_0x115a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115A14u;
            // 0x115a18: 0x91027  nor         $v0, $zero, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115a14) {
            ctx->pc = 0x115A34u;
            goto label_115a34;
        }
    }
    ctx->pc = 0x115A1Cu;
    // 0x115a1c: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x115a1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x115a20: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x115a20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x115a24: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x115a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x115a28: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x115a28u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x115a2c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x115a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x115a30: 0x21c03  sra         $v1, $v0, 16
    ctx->pc = 0x115a30u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 16));
label_115a34:
    // 0x115a34: 0x91100  sll         $v0, $t1, 4
    ctx->pc = 0x115a34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x115a38: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x115a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x115a3c: 0x3049fff0  andi        $t1, $v0, 0xFFF0
    ctx->pc = 0x115a3cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65520);
    // 0x115a40: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x115A40u;
    {
        const bool branch_taken_0x115a40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x115A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115A40u;
            // 0x115a44: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115a40) {
            ctx->pc = 0x115A10u;
            runtime->cooperativeGuestYield();
            goto label_115a10;
        }
    }
    ctx->pc = 0x115A48u;
    // 0x115a48: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x115a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_115a4c:
    // 0x115a4c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x115a4cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x115a50: 0x14b102b  sltu        $v0, $t2, $t3
    ctx->pc = 0x115a50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x115a54: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x115A54u;
    {
        const bool branch_taken_0x115a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115A54u;
            // 0x115a58: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115a54) {
            ctx->pc = 0x1159F0u;
            runtime->cooperativeGuestYield();
            goto label_1159f0;
        }
    }
    ctx->pc = 0x115A5Cu;
    // 0x115a5c: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x115A5Cu;
    {
        const bool branch_taken_0x115a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115A5Cu;
            // 0x115a60: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115a5c) {
            ctx->pc = 0x115BFCu;
            goto label_115bfc;
        }
    }
    ctx->pc = 0x115A64u;
label_115a64:
    // 0x115a64: 0xc501001c  lwc1        $f1, 0x1C($t0)
    ctx->pc = 0x115a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x115a68: 0xc5000018  lwc1        $f0, 0x18($t0)
    ctx->pc = 0x115a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115a6c: 0xc5020024  lwc1        $f2, 0x24($t0)
    ctx->pc = 0x115a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x115a70: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x115a70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x115a74: 0x8d02004c  lw          $v0, 0x4C($t0)
    ctx->pc = 0x115a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 76)));
    // 0x115a78: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x115a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x115a7c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x115a7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x115a80: 0x8d14005c  lw          $s4, 0x5C($t0)
    ctx->pc = 0x115a80u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 92)));
    // 0x115a84: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x115a84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x115a88: 0x8d15006c  lw          $s5, 0x6C($t0)
    ctx->pc = 0x115a88u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 108)));
    // 0x115a8c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x115a8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x115a90: 0xe440021c  swc1        $f0, 0x21C($v0)
    ctx->pc = 0x115a90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 540), bits); }
    // 0x115a94: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x115a94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x115a98: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x115a98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x115a9c: 0x3c043fff  lui         $a0, 0x3FFF
    ctx->pc = 0x115a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16383 << 16));
    // 0x115aa0: 0x34843fff  ori         $a0, $a0, 0x3FFF
    ctx->pc = 0x115aa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16383);
    // 0x115aa4: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x115aa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x115aa8: 0x34843fff  ori         $a0, $a0, 0x3FFF
    ctx->pc = 0x115aa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16383);
    // 0x115aac: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x115aacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x115ab0: 0x34843fff  ori         $a0, $a0, 0x3FFF
    ctx->pc = 0x115ab0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16383);
    // 0x115ab4: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x115ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x115ab8: 0x8d1301f0  lw          $s3, 0x1F0($t0)
    ctx->pc = 0x115ab8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 496)));
    // 0x115abc: 0x70421488  pextlw      $v0, $v0, $v0
    ctx->pc = 0x115abcu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x115ac0: 0x70631c88  pextlw      $v1, $v1, $v1
    ctx->pc = 0x115ac0u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
    // 0x115ac4: 0x70427488  pextlw      $t6, $v0, $v0
    ctx->pc = 0x115ac4u;
    SET_GPR_VEC(ctx, 14, PS2_PEXTLW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x115ac8: 0x70637c88  pextlw      $t7, $v1, $v1
    ctx->pc = 0x115ac8u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
    // 0x115acc: 0x70a42588  pextlh      $a0, $a1, $a0
    ctx->pc = 0x115accu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLH(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x115ad0: 0x7fae0010  sq          $t6, 0x10($sp)
    ctx->pc = 0x115ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 14));
    // 0x115ad4: 0x700493bc  psllw       $s2, $a0, 14
    ctx->pc = 0x115ad4u;
    SET_GPR_VEC(ctx, 18, _mm_slli_epi32(GPR_VEC(ctx, 4), 14));
    // 0x115ad8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x115ad8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115adc: 0x12600046  beqz        $s3, . + 4 + (0x46 << 2)
    ctx->pc = 0x115ADCu;
    {
        const bool branch_taken_0x115adc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x115AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115ADCu;
            // 0x115ae0: 0x7faf0010  sq          $t7, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115adc) {
            ctx->pc = 0x115BF8u;
            goto label_115bf8;
        }
    }
    ctx->pc = 0x115AE4u;
    // 0x115ae4: 0x7baa0000  lq          $t2, 0x0($sp)
    ctx->pc = 0x115ae4u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115ae8: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x115ae8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115aec: 0x7ba90020  lq          $t1, 0x20($sp)
    ctx->pc = 0x115aecu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115af0: 0x700f1ca9  por         $v1, $zero, $t7
    ctx->pc = 0x115af0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 15)));
    // 0x115af4: 0x7ba40030  lq          $a0, 0x30($sp)
    ctx->pc = 0x115af4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x115af8: 0x7ba80040  lq          $t0, 0x40($sp)
    ctx->pc = 0x115af8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x115afc: 0x0  nop
    ctx->pc = 0x115afcu;
    // NOP
label_115b00:
    // 0x115b00: 0x860d0000  lh          $t5, 0x0($s0)
    ctx->pc = 0x115b00u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x115b04: 0x11a00033  beqz        $t5, . + 4 + (0x33 << 2)
    ctx->pc = 0x115B04u;
    {
        const bool branch_taken_0x115b04 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x115B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115B04u;
            // 0x115b08: 0x700a5ca9  por         $t3, $zero, $t2 (Delay Slot)
        SET_GPR_VEC(ctx, 11, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115b04) {
            ctx->pc = 0x115BD4u;
            goto label_115bd4;
        }
    }
    ctx->pc = 0x115B0Cu;
    // 0x115b0c: 0x61180  sll         $v0, $a2, 6
    ctx->pc = 0x115b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x115b10: 0x700954a9  por         $t2, $zero, $t1
    ctx->pc = 0x115b10u;
    SET_GPR_VEC(ctx, 10, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
    // 0x115b14: 0x700364a9  por         $t4, $zero, $v1
    ctx->pc = 0x115b14u;
    SET_GPR_VEC(ctx, 12, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x115b18: 0x70044ca9  por         $t1, $zero, $a0
    ctx->pc = 0x115b18u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 4)));
    // 0x115b1c: 0x552821  addu        $a1, $v0, $s5
    ctx->pc = 0x115b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x115b20: 0x700824a9  por         $a0, $zero, $t0
    ctx->pc = 0x115b20u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x115b24: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x115b24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x115b28: 0x6c880  sll         $t9, $a2, 2
    ctx->pc = 0x115b28u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x115b2c: 0x51c021  addu        $t8, $v0, $s1
    ctx->pc = 0x115b2cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x115b30: 0x544021  addu        $t0, $v0, $s4
    ctx->pc = 0x115b30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x115b34: 0x0  nop
    ctx->pc = 0x115b34u;
    // NOP
label_115b38:
    // 0x115b38: 0x1a71024  and         $v0, $t5, $a3
    ctx->pc = 0x115b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & GPR_U64(ctx, 7));
    // 0x115b3c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x115B3Cu;
    {
        const bool branch_taken_0x115b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115B3Cu;
            // 0x115b40: 0x71100  sll         $v0, $a3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115b3c) {
            ctx->pc = 0x115BA8u;
            goto label_115ba8;
        }
    }
    ctx->pc = 0x115B44u;
    // 0x115b44: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x115b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x115b48: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x115b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x115b4c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x115B4Cu;
    {
        const bool branch_taken_0x115b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115B4Cu;
            // 0x115b50: 0x191900  sll         $v1, $t9, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 25), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115b4c) {
            ctx->pc = 0x115B84u;
            goto label_115b84;
        }
    }
    ctx->pc = 0x115B54u;
    // 0x115b54: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x115b54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x115b58: 0x70021fff  psraw       $v1, $v0, 31
    ctx->pc = 0x115b58u;
    SET_GPR_VEC(ctx, 3, _mm_srai_epi32(GPR_VEC(ctx, 2), 31));
    // 0x115b5c: 0x706024e9  pnor        $a0, $v1, $zero
    ctx->pc = 0x115b5cu;
    SET_GPR_VEC(ctx, 4, PS2_PNOR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x115b60: 0x71c31c89  pand        $v1, $t6, $v1
    ctx->pc = 0x115b60u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 14), GPR_VEC(ctx, 3)));
    // 0x115b64: 0x71c42489  pand        $a0, $t6, $a0
    ctx->pc = 0x115b64u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 14), GPR_VEC(ctx, 4)));
    // 0x115b68: 0x70436048  psubw       $t4, $v0, $v1
    ctx->pc = 0x115b68u;
    SET_GPR_VEC(ctx, 12, PS2_PSUBW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x115b6c: 0x71845808  paddw       $t3, $t4, $a0
    ctx->pc = 0x115b6cu;
    SET_GPR_VEC(ctx, 11, PS2_PADDW(GPR_VEC(ctx, 12), GPR_VEC(ctx, 4)));
    // 0x115b70: 0x700b53bf  psraw       $t2, $t3, 14
    ctx->pc = 0x115b70u;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi32(GPR_VEC(ctx, 11), 14));
    // 0x115b74: 0x714f4f09  pmulth      $t1, $t2, $t7
    ctx->pc = 0x115b74u;
    { __m128i prod = _mm_madd_epi16(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)); 
   int32_t p0 = _mm_cvtsi128_si32(prod); 
   int32_t p1 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 4)); 
   int32_t p2 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 8)); 
   int32_t p3 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 12)); 
   int64_t result = (int64_t)p0 + (int64_t)p1 + (int64_t)p2 + (int64_t)p3; 
   ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); 
   SET_GPR_U64(ctx, 9, result); }
    // 0x115b78: 0x71322489  pand        $a0, $t1, $s2
    ctx->pc = 0x115b78u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 9), GPR_VEC(ctx, 18)));
    // 0x115b7c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x115B7Cu;
    {
        const bool branch_taken_0x115b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115B7Cu;
            // 0x115b80: 0x7f040000  sq          $a0, 0x0($t8) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 24), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115b7c) {
            ctx->pc = 0x115B94u;
            goto label_115b94;
        }
    }
    ctx->pc = 0x115B84u;
label_115b84:
    // 0x115b84: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x115b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x115b88: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x115b88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x115b8c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x115b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x115b90: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x115b90u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_115b94:
    // 0x115b94: 0x71027  nor         $v0, $zero, $a3
    ctx->pc = 0x115b94u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 7)));
    // 0x115b98: 0x1a21024  and         $v0, $t5, $v0
    ctx->pc = 0x115b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & GPR_U64(ctx, 2));
    // 0x115b9c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x115b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x115ba0: 0x26c03  sra         $t5, $v0, 16
    ctx->pc = 0x115ba0u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 2), 16));
    // 0x115ba4: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x115ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_115ba8:
    // 0x115ba8: 0x27180010  addiu       $t8, $t8, 0x10
    ctx->pc = 0x115ba8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x115bac: 0x3047fff0  andi        $a3, $v0, 0xFFF0
    ctx->pc = 0x115bacu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65520);
    // 0x115bb0: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x115bb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x115bb4: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x115bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x115bb8: 0x15a0ffdf  bnez        $t5, . + 4 + (-0x21 << 2)
    ctx->pc = 0x115BB8u;
    {
        const bool branch_taken_0x115bb8 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x115BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115BB8u;
            // 0x115bbc: 0x27390001  addiu       $t9, $t9, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115bb8) {
            ctx->pc = 0x115B38u;
            runtime->cooperativeGuestYield();
            goto label_115b38;
        }
    }
    ctx->pc = 0x115BC0u;
    // 0x115bc0: 0x700444a9  por         $t0, $zero, $a0
    ctx->pc = 0x115bc0u;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 4)));
    // 0x115bc4: 0x700c1ca9  por         $v1, $zero, $t4
    ctx->pc = 0x115bc4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 12)));
    // 0x115bc8: 0x700924a9  por         $a0, $zero, $t1
    ctx->pc = 0x115bc8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
    // 0x115bcc: 0x700a4ca9  por         $t1, $zero, $t2
    ctx->pc = 0x115bccu;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x115bd0: 0x700b54a9  por         $t2, $zero, $t3
    ctx->pc = 0x115bd0u;
    SET_GPR_VEC(ctx, 10, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 11)));
label_115bd4:
    // 0x115bd4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x115bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x115bd8: 0xd3102b  sltu        $v0, $a2, $s3
    ctx->pc = 0x115bd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x115bdc: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x115BDCu;
    {
        const bool branch_taken_0x115bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115BDCu;
            // 0x115be0: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115bdc) {
            ctx->pc = 0x115B00u;
            runtime->cooperativeGuestYield();
            goto label_115b00;
        }
    }
    ctx->pc = 0x115BE4u;
    // 0x115be4: 0x7fa80040  sq          $t0, 0x40($sp)
    ctx->pc = 0x115be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 8));
    // 0x115be8: 0x7fa40030  sq          $a0, 0x30($sp)
    ctx->pc = 0x115be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
    // 0x115bec: 0x7fa90020  sq          $t1, 0x20($sp)
    ctx->pc = 0x115becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 9));
    // 0x115bf0: 0x7faa0000  sq          $t2, 0x0($sp)
    ctx->pc = 0x115bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 10));
    // 0x115bf4: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x115bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_115bf8:
    // 0x115bf8: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x115bf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_115bfc:
    // 0x115bfc: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x115bfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x115c00: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x115c00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x115c04: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x115c04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x115c08: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x115c08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x115c0c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x115c0cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x115c10: 0x3e00008  jr          $ra
    ctx->pc = 0x115C10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115C10u;
            // 0x115c14: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1159F0u: goto label_1159f0;
            case 0x115A10u: goto label_115a10;
            case 0x115A34u: goto label_115a34;
            case 0x115A4Cu: goto label_115a4c;
            case 0x115A64u: goto label_115a64;
            case 0x115B00u: goto label_115b00;
            case 0x115B38u: goto label_115b38;
            case 0x115B84u: goto label_115b84;
            case 0x115B94u: goto label_115b94;
            case 0x115BA8u: goto label_115ba8;
            case 0x115BD4u: goto label_115bd4;
            case 0x115BF8u: goto label_115bf8;
            case 0x115BFCu: goto label_115bfc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x115C18u;
}
