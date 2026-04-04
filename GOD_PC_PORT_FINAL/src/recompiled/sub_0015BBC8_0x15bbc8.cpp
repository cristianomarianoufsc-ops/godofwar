#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015BBC8
// Address: 0x15bbc8 - 0x15bd78
void sub_0015BBC8_0x15bbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015BBC8_0x15bbc8");
#endif

    ctx->pc = 0x15bbc8u;

    // 0x15bbc8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15bbc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x15bbcc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x15bbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x15bbd0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x15bbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x15bbd4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15bbd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bbd8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x15bbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x15bbdc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x15bbdcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bbe0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x15bbe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x15bbe4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x15bbe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x15bbe8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15bbe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15bbec: 0x8e43015c  lw          $v1, 0x15C($s2)
    ctx->pc = 0x15bbecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x15bbf0: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x15BBF0u;
    {
        const bool branch_taken_0x15bbf0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x15BBF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BBF0u;
            // 0x15bbf4: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bbf0) {
            ctx->pc = 0x15BC08u;
            goto label_15bc08;
        }
    }
    ctx->pc = 0x15BBF8u;
    // 0x15bbf8: 0x8e420160  lw          $v0, 0x160($s2)
    ctx->pc = 0x15bbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
    // 0x15bbfc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x15bbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15bc00: 0x53182a  slt         $v1, $v0, $s3
    ctx->pc = 0x15bc00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x15bc04: 0x43980b  movn        $s3, $v0, $v1
    ctx->pc = 0x15bc04u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
label_15bc08:
    // 0x15bc08: 0x12600052  beqz        $s3, . + 4 + (0x52 << 2)
    ctx->pc = 0x15BC08u;
    {
        const bool branch_taken_0x15bc08 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BC0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BC08u;
            // 0x15bc0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bc08) {
            ctx->pc = 0x15BD54u;
            goto label_15bd54;
        }
    }
    ctx->pc = 0x15BC10u;
    // 0x15bc10: 0x8e510178  lw          $s1, 0x178($s2)
    ctx->pc = 0x15bc10u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 376)));
    // 0x15bc14: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x15BC14u;
    {
        const bool branch_taken_0x15bc14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bc14) {
            ctx->pc = 0x15BC2Cu;
            goto label_15bc2c;
        }
    }
    ctx->pc = 0x15BC1Cu;
    // 0x15bc1c: 0x8623002c  lh          $v1, 0x2C($s1)
    ctx->pc = 0x15bc1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x15bc20: 0x8e42016c  lw          $v0, 0x16C($s2)
    ctx->pc = 0x15bc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 364)));
    // 0x15bc24: 0x54620021  bnel        $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x15BC24u;
    {
        const bool branch_taken_0x15bc24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15bc24) {
            ctx->pc = 0x15BC28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15BC24u;
            // 0x15bc28: 0xc6200024  lwc1        $f0, 0x24($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x15BCACu;
            goto label_15bcac;
        }
    }
    ctx->pc = 0x15BC2Cu;
label_15bc2c:
    // 0x15bc2c: 0xc056ffe  jal         func_15BFF8
    ctx->pc = 0x15BC2Cu;
    SET_GPR_U32(ctx, 31, 0x15BC34u);
    ctx->pc = 0x15BC30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BC2Cu;
            // 0x15bc30: 0x8e440174  lw          $a0, 0x174($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BFF8u;
    if (runtime->hasFunction(0x15BFF8u)) {
        auto targetFn = runtime->lookupFunction(0x15BFF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BC34u; }
        if (ctx->pc != 0x15BC34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015BFF8_0x15bff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BC34u; }
        if (ctx->pc != 0x15BC34u) { return; }
    }
    ctx->pc = 0x15BC34u;
    // 0x15bc34: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15bc34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bc38: 0x12200046  beqz        $s1, . + 4 + (0x46 << 2)
    ctx->pc = 0x15BC38u;
    {
        const bool branch_taken_0x15bc38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BC3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BC38u;
            // 0x15bc3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bc38) {
            ctx->pc = 0x15BD54u;
            goto label_15bd54;
        }
    }
    ctx->pc = 0x15BC40u;
    // 0x15bc40: 0x4be000ec  vsub.xyzw   $vf3, $vf0, $vf0
    ctx->pc = 0x15bc40u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x15bc44: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x15bc44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x15bc48: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x15bc48u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x15bc4c: 0xda210010  lqc2        $vf1, 0x10($s1)
    ctx->pc = 0x15bc4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x15bc50: 0x4a221840  vaddx.w     $vf1, $vf3, $vf2x
    ctx->pc = 0x15bc50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15bc54: 0xfa210010  sqc2        $vf1, 0x10($s1)
    ctx->pc = 0x15bc54u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15bc58: 0xa6200028  sh          $zero, 0x28($s1)
    ctx->pc = 0x15bc58u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 40), (uint16_t)GPR_U32(ctx, 0));
    // 0x15bc5c: 0xa620002a  sh          $zero, 0x2A($s1)
    ctx->pc = 0x15bc5cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 42), (uint16_t)GPR_U32(ctx, 0));
    // 0x15bc60: 0xa620002c  sh          $zero, 0x2C($s1)
    ctx->pc = 0x15bc60u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 44), (uint16_t)GPR_U32(ctx, 0));
    // 0x15bc64: 0xc6400168  lwc1        $f0, 0x168($s2)
    ctx->pc = 0x15bc64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15bc68: 0x96420154  lhu         $v0, 0x154($s2)
    ctx->pc = 0x15bc68u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 340)));
    // 0x15bc6c: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x15bc6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x15bc70: 0xa622002e  sh          $v0, 0x2E($s1)
    ctx->pc = 0x15bc70u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 46), (uint16_t)GPR_U32(ctx, 2));
    // 0x15bc74: 0x7a420130  lq          $v0, 0x130($s2)
    ctx->pc = 0x15bc74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x15bc78: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x15bc78u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x15bc7c: 0x8e420178  lw          $v0, 0x178($s2)
    ctx->pc = 0x15bc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 376)));
    // 0x15bc80: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x15BC80u;
    {
        const bool branch_taken_0x15bc80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bc80) {
            ctx->pc = 0x15BC84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15BC80u;
            // 0x15bc84: 0xae51017c  sw          $s1, 0x17C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 380), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15BCA0u;
            goto label_15bca0;
        }
    }
    ctx->pc = 0x15BC88u;
    // 0x15bc88: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x15bc88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x15bc8c: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x15bc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x15bc90: 0x8e420178  lw          $v0, 0x178($s2)
    ctx->pc = 0x15bc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 376)));
    // 0x15bc94: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15BC94u;
    {
        const bool branch_taken_0x15bc94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BC94u;
            // 0x15bc98: 0xac510020  sw          $s1, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bc94) {
            ctx->pc = 0x15BCA4u;
            goto label_15bca4;
        }
    }
    ctx->pc = 0x15BC9Cu;
    // 0x15bc9c: 0x0  nop
    ctx->pc = 0x15bc9cu;
    // NOP
label_15bca0:
    // 0x15bca0: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x15bca0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
label_15bca4:
    // 0x15bca4: 0xae510178  sw          $s1, 0x178($s2)
    ctx->pc = 0x15bca4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 376), GPR_U32(ctx, 17));
    // 0x15bca8: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x15bca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15bcac:
    // 0x15bcac: 0x26430148  addiu       $v1, $s2, 0x148
    ctx->pc = 0x15bcacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 328));
    // 0x15bcb0: 0x8e50016c  lw          $s0, 0x16C($s2)
    ctx->pc = 0x15bcb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 364)));
    // 0x15bcb4: 0x26280030  addiu       $t0, $s1, 0x30
    ctx->pc = 0x15bcb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x15bcb8: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x15bcb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x15bcbc: 0x8e45001c  lw          $a1, 0x1C($s2)
    ctx->pc = 0x15bcbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x15bcc0: 0x8622002c  lh          $v0, 0x2C($s1)
    ctx->pc = 0x15bcc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x15bcc4: 0x90670009  lbu         $a3, 0x9($v1)
    ctx->pc = 0x15bcc4u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 9)));
    // 0x15bcc8: 0x9066000a  lbu         $a2, 0xA($v1)
    ctx->pc = 0x15bcc8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x15bccc: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x15bcccu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15bcd0: 0x8623002e  lh          $v1, 0x2E($s1)
    ctx->pc = 0x15bcd0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 46)));
    // 0x15bcd4: 0x473818  mult        $a3, $v0, $a3
    ctx->pc = 0x15bcd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x15bcd8: 0x463018  mult        $a2, $v0, $a2
    ctx->pc = 0x15bcd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x15bcdc: 0x8ca50058  lw          $a1, 0x58($a1)
    ctx->pc = 0x15bcdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x15bce0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x15bce0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x15bce4: 0x270102a  slt         $v0, $s3, $s0
    ctx->pc = 0x15bce4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x15bce8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x15bce8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x15bcec: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x15bcecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x15bcf0: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x15bcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x15bcf4: 0x262800b  movn        $s0, $s3, $v0
    ctx->pc = 0x15bcf4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 19));
    // 0x15bcf8: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x15bcf8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x15bcfc: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x15bcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x15bd00: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x15bd00u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x15bd04: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x15bd04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x15bd08: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x15bd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x15bd0c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x15bd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x15bd10: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x15bd10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x15bd14: 0x2050018  mult        $zero, $s0, $a1
    ctx->pc = 0x15bd14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x15bd18: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x15bd18u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x15bd1c: 0xae880008  sw          $t0, 0x8($s4)
    ctx->pc = 0x15bd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 8));
    // 0x15bd20: 0xae84000c  sw          $a0, 0xC($s4)
    ctx->pc = 0x15bd20u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 4));
    // 0x15bd24: 0xae910010  sw          $s1, 0x10($s4)
    ctx->pc = 0x15bd24u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 17));
    // 0x15bd28: 0x2812  mflo        $a1
    ctx->pc = 0x15bd28u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x15bd2c: 0xc056d62  jal         func_15B588
    ctx->pc = 0x15BD2Cu;
    SET_GPR_U32(ctx, 31, 0x15BD34u);
    ctx->pc = 0x15BD30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BD2Cu;
            // 0x15bd30: 0x7a440130  lq          $a0, 0x130($s2) (Delay Slot)
        SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 18), 304)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B588u;
    if (runtime->hasFunction(0x15B588u)) {
        auto targetFn = runtime->lookupFunction(0x15B588u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BD34u; }
        if (ctx->pc != 0x15BD34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B588_0x15b588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BD34u; }
        if (ctx->pc != 0x15BD34u) { return; }
    }
    ctx->pc = 0x15BD34u;
    // 0x15bd34: 0x7e420130  sq          $v0, 0x130($s2)
    ctx->pc = 0x15bd34u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 304), GPR_VEC(ctx, 2));
    // 0x15bd38: 0x8e440160  lw          $a0, 0x160($s2)
    ctx->pc = 0x15bd38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
    // 0x15bd3c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x15bd3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bd40: 0x9623002c  lhu         $v1, 0x2C($s1)
    ctx->pc = 0x15bd40u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x15bd44: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x15bd44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x15bd48: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x15bd48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x15bd4c: 0xae440160  sw          $a0, 0x160($s2)
    ctx->pc = 0x15bd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 352), GPR_U32(ctx, 4));
    // 0x15bd50: 0xa623002c  sh          $v1, 0x2C($s1)
    ctx->pc = 0x15bd50u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 44), (uint16_t)GPR_U32(ctx, 3));
label_15bd54:
    // 0x15bd54: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x15bd54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15bd58: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x15bd58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15bd5c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x15bd5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15bd60: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x15bd60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15bd64: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x15bd64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bd68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15bd68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15bd6c: 0x3e00008  jr          $ra
    ctx->pc = 0x15BD6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BD70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BD6Cu;
            // 0x15bd70: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15BC08u: goto label_15bc08;
            case 0x15BC2Cu: goto label_15bc2c;
            case 0x15BCA0u: goto label_15bca0;
            case 0x15BCA4u: goto label_15bca4;
            case 0x15BCACu: goto label_15bcac;
            case 0x15BD54u: goto label_15bd54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15BD74u;
    // 0x15bd74: 0x0  nop
    ctx->pc = 0x15bd74u;
    // NOP
}
