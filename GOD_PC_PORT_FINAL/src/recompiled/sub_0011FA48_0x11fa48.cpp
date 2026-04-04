#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011FA48
// Address: 0x11fa48 - 0x11fc28
void sub_0011FA48_0x11fa48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011FA48_0x11fa48");
#endif

    ctx->pc = 0x11fa48u;

    // 0x11fa48: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x11fa48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x11fa4c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x11fa4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x11fa50: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x11fa50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x11fa54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11fa54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fa58: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x11fa58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x11fa5c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x11fa5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x11fa60: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x11fa60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11fa64: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x11fa64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x11fa68: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x11fa68u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x11fa6c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x11fa6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11fa70: 0x70661389  pcpyld      $v0, $v1, $a2
    ctx->pc = 0x11fa70u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x11fa74: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x11fa74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x11fa78: 0x70e61b89  pcpyld      $v1, $a3, $a2
    ctx->pc = 0x11fa78u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 6)));
    // 0x11fa7c: 0x70621cc8  ppacw       $v1, $v1, $v0
    ctx->pc = 0x11fa7cu;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x11fa80: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x11fa80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x11fa84: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x11fa84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x11fa88: 0x9202001c  lbu         $v0, 0x1C($s0)
    ctx->pc = 0x11fa88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x11fa8c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11fa8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x11fa90: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11FA90u;
    {
        const bool branch_taken_0x11fa90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FA94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FA90u;
            // 0x11fa94: 0x48a31000  qmtc2.ni    $v1, $vf2 (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fa90) {
            ctx->pc = 0x11FAC0u;
            goto label_11fac0;
        }
    }
    ctx->pc = 0x11FA98u;
    // 0x11fa98: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x11fa98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x11fa9c: 0xd8410020  lqc2        $vf1, 0x20($v0)
    ctx->pc = 0x11fa9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x11faa0: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x11faa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x11faa4: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x11faa4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x11faa8: 0xd8410010  lqc2        $vf1, 0x10($v0)
    ctx->pc = 0x11faa8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x11faac: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x11faacu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x11fab0: 0xd8410020  lqc2        $vf1, 0x20($v0)
    ctx->pc = 0x11fab0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x11fab4: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x11fab4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x11fab8: 0xd8410030  lqc2        $vf1, 0x30($v0)
    ctx->pc = 0x11fab8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x11fabc: 0x4be2088b  vmaddw.xyzw $vf2, $vf1, $vf2w
    ctx->pc = 0x11fabcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
label_11fac0:
    // 0x11fac0: 0x8e070018  lw          $a3, 0x18($s0)
    ctx->pc = 0x11fac0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x11fac4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x11fac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x11fac8: 0x8c44bcf8  lw          $a0, -0x4308($v0)
    ctx->pc = 0x11fac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
    // 0x11facc: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x11faccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x11fad0: 0x8e080010  lw          $t0, 0x10($s0)
    ctx->pc = 0x11fad0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x11fad4: 0x3c030012  lui         $v1, 0x12
    ctx->pc = 0x11fad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18 << 16));
    // 0x11fad8: 0x24a2f170  addiu       $v0, $a1, -0xE90
    ctx->pc = 0x11fad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963568));
    // 0x11fadc: 0xaca7f170  sw          $a3, -0xE90($a1)
    ctx->pc = 0x11fadcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294963568), GPR_U32(ctx, 7));
    // 0x11fae0: 0x2463fc50  addiu       $v1, $v1, -0x3B0
    ctx->pc = 0x11fae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966352));
    // 0x11fae4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x11fae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11fae8: 0xc60c000c  lwc1        $f12, 0xC($s0)
    ctx->pc = 0x11fae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x11faec: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x11faecu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x11faf0: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x11faf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x11faf4: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x11faf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x11faf8: 0xac480014  sw          $t0, 0x14($v0)
    ctx->pc = 0x11faf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 8));
    // 0x11fafc: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x11fafcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x11fb00: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x11fb00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x11fb04: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x11fb04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x11fb08: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x11fb08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x11fb0c: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x11fb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x11fb10: 0xc0479ec  jal         func_11E7B0
    ctx->pc = 0x11FB10u;
    SET_GPR_U32(ctx, 31, 0x11FB18u);
    ctx->pc = 0x11FB14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11FB10u;
            // 0x11fb14: 0xac500020  sw          $s0, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E7B0u;
    if (runtime->hasFunction(0x11E7B0u)) {
        auto targetFn = runtime->lookupFunction(0x11E7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FB18u; }
        if (ctx->pc != 0x11FB18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E7B0_0x11e7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FB18u; }
        if (ctx->pc != 0x11FB18u) { return; }
    }
    ctx->pc = 0x11FB18u;
    // 0x11fb18: 0x8e110014  lw          $s1, 0x14($s0)
    ctx->pc = 0x11fb18u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x11fb1c: 0x5220003b  beql        $s1, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x11FB1Cu;
    {
        const bool branch_taken_0x11fb1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x11fb1c) {
            ctx->pc = 0x11FB20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11FB1Cu;
            // 0x11fb20: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11FC0Cu;
            goto label_11fc0c;
        }
    }
    ctx->pc = 0x11FB24u;
    // 0x11fb24: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x11fb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11fb28: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x11FB28u;
    {
        const bool branch_taken_0x11fb28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FB2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FB28u;
            // 0x11fb2c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fb28) {
            ctx->pc = 0x11FC08u;
            goto label_11fc08;
        }
    }
    ctx->pc = 0x11FB30u;
    // 0x11fb30: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x11fb30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x11fb34: 0x0  nop
    ctx->pc = 0x11fb34u;
    // NOP
label_11fb38:
    // 0x11fb38: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x11fb38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x11fb3c: 0xc29021  addu        $s2, $a2, $v0
    ctx->pc = 0x11fb3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x11fb40: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x11fb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11fb44: 0x4600028  bltz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x11FB44u;
    {
        const bool branch_taken_0x11fb44 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x11FB48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FB44u;
            // 0x11fb48: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fb44) {
            ctx->pc = 0x11FBE8u;
            goto label_11fbe8;
        }
    }
    ctx->pc = 0x11FB4Cu;
    // 0x11fb4c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x11fb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11fb50: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x11fb50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11fb54: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x11fb54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x11fb58: 0x24c2fffc  addiu       $v0, $a2, -0x4
    ctx->pc = 0x11fb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x11fb5c: 0x12420009  beq         $s2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11FB5Cu;
    {
        const bool branch_taken_0x11fb5c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x11FB60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FB5Cu;
            // 0x11fb60: 0x26450004  addiu       $a1, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fb5c) {
            ctx->pc = 0x11FB84u;
            goto label_11fb84;
        }
    }
    ctx->pc = 0x11FB64u;
    // 0x11fb64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11fb64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fb68: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x11fb68u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x11fb6c: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x11fb6cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
    // 0x11fb70: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x11FB70u;
    SET_GPR_U32(ctx, 31, 0x11FB78u);
    ctx->pc = 0x11FB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11FB70u;
            // 0x11fb74: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FB78u; }
        if (ctx->pc != 0x11FB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FB78u; }
        if (ctx->pc != 0x11FB78u) { return; }
    }
    ctx->pc = 0x11FB78u;
    // 0x11fb78: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x11fb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11fb7c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11FB7Cu;
    {
        const bool branch_taken_0x11fb7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FB7Cu;
            // 0x11fb80: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fb7c) {
            ctx->pc = 0x11FB88u;
            goto label_11fb88;
        }
    }
    ctx->pc = 0x11FB84u;
label_11fb84:
    // 0x11fb84: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x11fb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_11fb88:
    // 0x11fb88: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x11fb88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x11fb8c: 0x9202001c  lbu         $v0, 0x1C($s0)
    ctx->pc = 0x11fb8cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x11fb90: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x11fb90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x11fb94: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x11FB94u;
    {
        const bool branch_taken_0x11fb94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FB94u;
            // 0x11fb98: 0x24020077  addiu       $v0, $zero, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fb94) {
            ctx->pc = 0x11FBF8u;
            goto label_11fbf8;
        }
    }
    ctx->pc = 0x11FB9Cu;
    // 0x11fb9c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x11fb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11fba0: 0xa7a20010  sh          $v0, 0x10($sp)
    ctx->pc = 0x11fba0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x11fba4: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x11fba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x11fba8: 0xafb00014  sw          $s0, 0x14($sp)
    ctx->pc = 0x11fba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 16));
    // 0x11fbac: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x11fbacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x11fbb0: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x11fbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x11fbb4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x11fbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x11fbb8: 0x8c44e89c  lw          $a0, -0x1764($v0)
    ctx->pc = 0x11fbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961308)));
    // 0x11fbbc: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x11fbbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x11fbc0: 0xc047d6a  jal         func_11F5A8
    ctx->pc = 0x11FBC0u;
    SET_GPR_U32(ctx, 31, 0x11FBC8u);
    ctx->pc = 0x11FBC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11FBC0u;
            // 0x11fbc4: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F5A8u;
    if (runtime->hasFunction(0x11F5A8u)) {
        auto targetFn = runtime->lookupFunction(0x11F5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FBC8u; }
        if (ctx->pc != 0x11FBC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11f5a8_0x11f5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FBC8u; }
        if (ctx->pc != 0x11FBC8u) { return; }
    }
    ctx->pc = 0x11FBC8u;
    // 0x11fbc8: 0x9202001c  lbu         $v0, 0x1C($s0)
    ctx->pc = 0x11fbc8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x11fbcc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x11fbccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x11fbd0: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x11FBD0u;
    {
        const bool branch_taken_0x11fbd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11fbd0) {
            ctx->pc = 0x11FBD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11FBD0u;
            // 0x11fbd4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11FBFCu;
            goto label_11fbfc;
        }
    }
    ctx->pc = 0x11FBD8u;
    // 0x11fbd8: 0xc047f0a  jal         func_11FC28
    ctx->pc = 0x11FBD8u;
    SET_GPR_U32(ctx, 31, 0x11FBE0u);
    ctx->pc = 0x11FBDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11FBD8u;
            // 0x11fbdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11FC28u;
    if (runtime->hasFunction(0x11FC28u)) {
        auto targetFn = runtime->lookupFunction(0x11FC28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FBE0u; }
        if (ctx->pc != 0x11FBE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011FC28_0x11fc28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FBE0u; }
        if (ctx->pc != 0x11FBE0u) { return; }
    }
    ctx->pc = 0x11FBE0u;
    // 0x11fbe0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11FBE0u;
    {
        const bool branch_taken_0x11fbe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FBE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FBE0u;
            // 0x11fbe4: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fbe0) {
            ctx->pc = 0x11FC0Cu;
            goto label_11fc0c;
        }
    }
    ctx->pc = 0x11FBE8u;
label_11fbe8:
    // 0x11fbe8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x11fbe8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x11fbec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11fbecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11fbf0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x11fbf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x11fbf4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x11fbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_11fbf8:
    // 0x11fbf8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x11fbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_11fbfc:
    // 0x11fbfc: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x11fbfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11fc00: 0x5440ffcd  bnel        $v0, $zero, . + 4 + (-0x33 << 2)
    ctx->pc = 0x11FC00u;
    {
        const bool branch_taken_0x11fc00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11fc00) {
            ctx->pc = 0x11FC04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11FC00u;
            // 0x11fc04: 0x8e260004  lw          $a2, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11FB38u;
            runtime->cooperativeGuestYield();
            goto label_11fb38;
        }
    }
    ctx->pc = 0x11FC08u;
label_11fc08:
    // 0x11fc08: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x11fc08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_11fc0c:
    // 0x11fc0c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x11fc0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11fc10: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x11fc10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11fc14: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x11fc14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11fc18: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11fc18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11fc1c: 0x3e00008  jr          $ra
    ctx->pc = 0x11FC1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FC1Cu;
            // 0x11fc20: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11FAC0u: goto label_11fac0;
            case 0x11FB38u: goto label_11fb38;
            case 0x11FB84u: goto label_11fb84;
            case 0x11FB88u: goto label_11fb88;
            case 0x11FBE8u: goto label_11fbe8;
            case 0x11FBF8u: goto label_11fbf8;
            case 0x11FBFCu: goto label_11fbfc;
            case 0x11FC08u: goto label_11fc08;
            case 0x11FC0Cu: goto label_11fc0c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11FC24u;
    // 0x11fc24: 0x0  nop
    ctx->pc = 0x11fc24u;
    // NOP
}
