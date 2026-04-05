#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F99F8
// Address: 0x1f99f8 - 0x1f9b08
void sub_001F99F8_0x1f99f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F99F8_0x1f99f8");
#endif

    ctx->pc = 0x1f99f8u;

    // 0x1f99f8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1f99f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1f99fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f99fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f9a00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f9a00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9a04: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1f9a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1f9a08: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f9a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f9a0c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1f9a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1f9a10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f9a10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9a14: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f9a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1f9a18: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1f9a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1f9a1c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1f9a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1f9a20: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f9a20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f9a24: 0x8612008c  lh          $s2, 0x8C($s0)
    ctx->pc = 0x1f9a24u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1f9a28: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x1f9a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x1f9a2c: 0xe60100a4  swc1        $f1, 0xA4($s0)
    ctx->pc = 0x1f9a2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x1f9a30: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x1f9a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x1f9a34: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x1f9a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x1f9a38: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x1f9a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x1f9a3c: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x1f9a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x1f9a40: 0x12420018  beq         $s2, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1F9A40u;
    {
        const bool branch_taken_0x1f9a40 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F9A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9A40u;
            // 0x1f9a44: 0xa6000092  sh          $zero, 0x92($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 146), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9a40) {
            ctx->pc = 0x1F9AA4u;
            goto label_1f9aa4;
        }
    }
    ctx->pc = 0x1F9A48u;
    // 0x1f9a48: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x1f9a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1f9a4c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f9a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f9a50: 0x8c510104  lw          $s1, 0x104($v0)
    ctx->pc = 0x1f9a50u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x1f9a54: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f9a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1f9a58: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1f9a58u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1f9a5c: 0xde220040  ld          $v0, 0x40($s1)
    ctx->pc = 0x1f9a5cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1f9a60: 0x50450005  beql        $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F9A60u;
    {
        const bool branch_taken_0x1f9a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1f9a60) {
            ctx->pc = 0x1F9A64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9A60u;
            // 0x1f9a64: 0x8e23008c  lw          $v1, 0x8C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F9A78u;
            goto label_1f9a78;
        }
    }
    ctx->pc = 0x1F9A68u;
    // 0x1f9a68: 0xc04da64  jal         func_136990
    ctx->pc = 0x1F9A68u;
    SET_GPR_U32(ctx, 31, 0x1F9A70u);
    ctx->pc = 0x1F9A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9A68u;
            // 0x1f9a6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9A70u; }
        if (ctx->pc != 0x1F9A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9A70u; }
        if (ctx->pc != 0x1F9A70u) { return; }
    }
    ctx->pc = 0x1F9A70u;
    // 0x1f9a70: 0x8e23008c  lw          $v1, 0x8C($s1)
    ctx->pc = 0x1f9a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x1f9a74: 0x0  nop
    ctx->pc = 0x1f9a74u;
    // NOP
label_1f9a78:
    // 0x1f9a78: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x1f9a78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x1f9a7c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f9a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f9a80: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1f9a80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f9a84: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x1f9a84u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x1f9a88: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x1f9a88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1f9a8c: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x1f9a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    // 0x1f9a90: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1f9a90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1f9a94: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x1f9a94u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    // 0x1f9a98: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x1f9a98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1f9a9c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1F9A9Cu;
    {
        const bool branch_taken_0x1f9a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9A9Cu;
            // 0x1f9aa0: 0x7e020030  sq          $v0, 0x30($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9a9c) {
            ctx->pc = 0x1F9AD8u;
            goto label_1f9ad8;
        }
    }
    ctx->pc = 0x1F9AA4u;
label_1f9aa4:
    // 0x1f9aa4: 0x4be2033c  vmove.xyzw  $vf2, $vf0
    ctx->pc = 0x1f9aa4u;
    ctx->vu0_vf[2] = ctx->vu0_vf[0];
    // 0x1f9aa8: 0x4be3133d  vmr32.xyzw  $vf3, $vf2
    ctx->pc = 0x1f9aa8u;
    ctx->vu0_vf[3] = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,1));
    // 0x1f9aac: 0xfa020030  sqc2        $vf2, 0x30($s0)
    ctx->pc = 0x1f9aacu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f9ab0: 0x4be11b3d  vmr32.xyzw  $vf1, $vf3
    ctx->pc = 0x1f9ab0u;
    ctx->vu0_vf[1] = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,1));
    // 0x1f9ab4: 0xfa030020  sqc2        $vf3, 0x20($s0)
    ctx->pc = 0x1f9ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1f9ab8: 0x4be40b3d  vmr32.xyzw  $vf4, $vf1
    ctx->pc = 0x1f9ab8u;
    ctx->vu0_vf[4] = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,1));
    // 0x1f9abc: 0xfa010010  sqc2        $vf1, 0x10($s0)
    ctx->pc = 0x1f9abcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f9ac0: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1f9ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f9ac4: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1f9ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f9ac8: 0xfba30010  sqc2        $vf3, 0x10($sp)
    ctx->pc = 0x1f9ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1f9acc: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1f9accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f9ad0: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1f9ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f9ad4: 0x0  nop
    ctx->pc = 0x1f9ad4u;
    // NOP
label_1f9ad8:
    // 0x1f9ad8: 0x7a020030  lq          $v0, 0x30($s0)
    ctx->pc = 0x1f9ad8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1f9adc: 0x8e0300ac  lw          $v1, 0xAC($s0)
    ctx->pc = 0x1f9adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x1f9ae0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F9AE0u;
    {
        const bool branch_taken_0x1f9ae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9AE0u;
            // 0x1f9ae4: 0x7e020040  sq          $v0, 0x40($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9ae0) {
            ctx->pc = 0x1F9AECu;
            goto label_1f9aec;
        }
    }
    ctx->pc = 0x1F9AE8u;
    // 0x1f9ae8: 0xac6000e0  sw          $zero, 0xE0($v1)
    ctx->pc = 0x1f9ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 224), GPR_U32(ctx, 0));
label_1f9aec:
    // 0x1f9aec: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1f9aecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f9af0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1f9af0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f9af4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1f9af4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f9af8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f9af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f9afc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9AFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9AFCu;
            // 0x1f9b00: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F9A78u: goto label_1f9a78;
            case 0x1F9AA4u: goto label_1f9aa4;
            case 0x1F9AD8u: goto label_1f9ad8;
            case 0x1F9AECu: goto label_1f9aec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F9B04u;
    // 0x1f9b04: 0x0  nop
    ctx->pc = 0x1f9b04u;
    // NOP
}
