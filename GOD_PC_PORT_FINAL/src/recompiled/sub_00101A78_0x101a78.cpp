#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00101A78
// Address: 0x101a78 - 0x101dd8
void sub_00101A78_0x101a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101A78_0x101a78");
#endif

    ctx->pc = 0x101a78u;

    // 0x101a78: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x101a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
    // 0x101a7c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x101a7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x101a80: 0x7fb101b0  sq          $s1, 0x1B0($sp)
    ctx->pc = 0x101a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 17));
    // 0x101a84: 0x7fb30190  sq          $s3, 0x190($sp)
    ctx->pc = 0x101a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 19));
    // 0x101a88: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x101a88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101a8c: 0x7fb50170  sq          $s5, 0x170($sp)
    ctx->pc = 0x101a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 21));
    // 0x101a90: 0x7fb001c0  sq          $s0, 0x1C0($sp)
    ctx->pc = 0x101a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 16));
    // 0x101a94: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x101a94u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101a98: 0x7fb201a0  sq          $s2, 0x1A0($sp)
    ctx->pc = 0x101a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 18));
    // 0x101a9c: 0x26a206a0  addiu       $v0, $s5, 0x6A0
    ctx->pc = 0x101a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1696));
    // 0x101aa0: 0x7fb40180  sq          $s4, 0x180($sp)
    ctx->pc = 0x101aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 20));
    // 0x101aa4: 0x7fb60160  sq          $s6, 0x160($sp)
    ctx->pc = 0x101aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 22));
    // 0x101aa8: 0x7fb70150  sq          $s7, 0x150($sp)
    ctx->pc = 0x101aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 23));
    // 0x101aac: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x101aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x101ab0: 0xe7b401d0  swc1        $f20, 0x1D0($sp)
    ctx->pc = 0x101ab0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x101ab4: 0x7fbe0140  sq          $fp, 0x140($sp)
    ctx->pc = 0x101ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 30));
    // 0x101ab8: 0x8ebe0070  lw          $fp, 0x70($s5)
    ctx->pc = 0x101ab8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x101abc: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x101abcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x101ac0: 0x8ea3007c  lw          $v1, 0x7C($s5)
    ctx->pc = 0x101ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
    // 0x101ac4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x101ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x101ac8: 0x8c770018  lw          $s7, 0x18($v1)
    ctx->pc = 0x101ac8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x101acc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x101accu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x101ad0: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x101ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x101ad4: 0xaeb70080  sw          $s7, 0x80($s5)
    ctx->pc = 0x101ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 128), GPR_U32(ctx, 23));
    // 0x101ad8: 0x1ae00051  blez        $s7, . + 4 + (0x51 << 2)
    ctx->pc = 0x101AD8u;
    {
        const bool branch_taken_0x101ad8 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x101ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101AD8u;
            // 0x101adc: 0x629821  addu        $s3, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101ad8) {
            ctx->pc = 0x101C20u;
            goto label_101c20;
        }
    }
    ctx->pc = 0x101AE0u;
label_101ae0:
    // 0x101ae0: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x101ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x101ae4: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x101ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x101ae8: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x101ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x101aec: 0x600013  mtlo        $v1
    ctx->pc = 0x101aecu;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x101af0: 0x72229000  madd        $s2, $s1, $v0
    ctx->pc = 0x101af0u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x101af4: 0x2261018  mult        $v0, $s1, $a2
    ctx->pc = 0x101af4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x101af8: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x101af8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x101afc: 0x8e080004  lw          $t0, 0x4($s0)
    ctx->pc = 0x101afcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x101b00: 0x8e090000  lw          $t1, 0x0($s0)
    ctx->pc = 0x101b00u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x101b04: 0x71091b89  pcpyld      $v1, $t0, $t1
    ctx->pc = 0x101b04u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9)));
    // 0x101b08: 0x8e090008  lw          $t1, 0x8($s0)
    ctx->pc = 0x101b08u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x101b0c: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x101b0cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x101b10: 0x71091389  pcpyld      $v0, $t0, $t1
    ctx->pc = 0x101b10u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9)));
    // 0x101b14: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x101b14u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x101b18: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x101b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x101b1c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x101b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x101b20: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x101b20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101b24: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x101b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x101b28: 0x10e20022  beq         $a3, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x101B28u;
    {
        const bool branch_taken_0x101b28 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x101B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101B28u;
            // 0x101b2c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101b28) {
            ctx->pc = 0x101BB4u;
            goto label_101bb4;
        }
    }
    ctx->pc = 0x101B30u;
    // 0x101b30: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x101b30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x101b34: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x101b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x101b38: 0xdc43bdf8  ld          $v1, -0x4208($v0)
    ctx->pc = 0x101b38u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x101b3c: 0xdfc20040  ld          $v0, 0x40($fp)
    ctx->pc = 0x101b3cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 64)));
    // 0x101b40: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x101B40u;
    {
        const bool branch_taken_0x101b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x101B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101B40u;
            // 0x101b44: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101b40) {
            ctx->pc = 0x101B58u;
            goto label_101b58;
        }
    }
    ctx->pc = 0x101B48u;
    // 0x101b48: 0xc04daf6  jal         func_136BD8
    ctx->pc = 0x101B48u;
    SET_GPR_U32(ctx, 31, 0x101B50u);
    ctx->pc = 0x101B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101B48u;
            // 0x101b4c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136BD8u;
    if (runtime->hasFunction(0x136BD8u)) {
        auto targetFn = runtime->lookupFunction(0x136BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101B50u; }
        if (ctx->pc != 0x101B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136BD8_0x136bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101B50u; }
        if (ctx->pc != 0x101B50u) { return; }
    }
    ctx->pc = 0x101B50u;
    // 0x101b50: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x101B50u;
    {
        const bool branch_taken_0x101b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101B50u;
            // 0x101b54: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101b50) {
            ctx->pc = 0x101B88u;
            goto label_101b88;
        }
    }
    ctx->pc = 0x101B58u;
label_101b58:
    // 0x101b58: 0x8fc2008c  lw          $v0, 0x8C($fp)
    ctx->pc = 0x101b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 140)));
    // 0x101b5c: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x101b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x101b60: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x101b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x101b64: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x101b64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x101b68: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x101b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x101b6c: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x101b6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x101b70: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x101b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x101b74: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x101b74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x101b78: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x101b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x101b7c: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x101b7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x101b80: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x101b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x101b84: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x101b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_101b88:
    // 0x101b88: 0x7ba50050  lq          $a1, 0x50($sp)
    ctx->pc = 0x101b88u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x101b8c: 0x2241018  mult        $v0, $s1, $a0
    ctx->pc = 0x101b8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x101b90: 0x7ba60060  lq          $a2, 0x60($sp)
    ctx->pc = 0x101b90u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x101b94: 0x7ba30080  lq          $v1, 0x80($sp)
    ctx->pc = 0x101b94u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x101b98: 0x7fa50010  sq          $a1, 0x10($sp)
    ctx->pc = 0x101b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
    // 0x101b9c: 0x7fa60020  sq          $a2, 0x20($sp)
    ctx->pc = 0x101b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 6));
    // 0x101ba0: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x101ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x101ba4: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x101ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x101ba8: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x101ba8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x101bac: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x101bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x101bb0: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x101bb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_101bb4:
    // 0x101bb4: 0xdba20110  lqc2        $vf2, 0x110($sp)
    ctx->pc = 0x101bb4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x101bb8: 0xdba10010  lqc2        $vf1, 0x10($sp)
    ctx->pc = 0x101bb8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101bbc: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x101bbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x101bc0: 0xfa420040  sqc2        $vf2, 0x40($s2)
    ctx->pc = 0x101bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x101bc4: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x101bc4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101bc8: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x101bc8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x101bcc: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x101bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x101bd0: 0xdba10030  lqc2        $vf1, 0x30($sp)
    ctx->pc = 0x101bd0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x101bd4: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x101bd4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x101bd8: 0xdba10040  lqc2        $vf1, 0x40($sp)
    ctx->pc = 0x101bd8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x101bdc: 0x4be2084b  vmaddw.xyzw $vf1, $vf1, $vf2w
    ctx->pc = 0x101bdcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x101be0: 0xae470050  sw          $a3, 0x50($s2)
    ctx->pc = 0x101be0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 7));
    // 0x101be4: 0xfa410010  sqc2        $vf1, 0x10($s2)
    ctx->pc = 0x101be4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x101be8: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x101be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x101bec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x101becu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x101bf0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x101bf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x101bf4: 0x2221818  mult        $v1, $s1, $v0
    ctx->pc = 0x101bf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x101bf8: 0xfa410000  sqc2        $vf1, 0x0($s2)
    ctx->pc = 0x101bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x101bfc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x101bfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x101c00: 0xe6410020  swc1        $f1, 0x20($s2)
    ctx->pc = 0x101c00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x101c04: 0xe640002c  swc1        $f0, 0x2C($s2)
    ctx->pc = 0x101c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 44), bits); }
    // 0x101c08: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x101c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x101c0c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x101c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x101c10: 0x237182a  slt         $v1, $s1, $s7
    ctx->pc = 0x101c10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x101c14: 0x1460ffb2  bnez        $v1, . + 4 + (-0x4E << 2)
    ctx->pc = 0x101C14u;
    {
        const bool branch_taken_0x101c14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x101C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101C14u;
            // 0x101c18: 0xae420030  sw          $v0, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101c14) {
            ctx->pc = 0x101AE0u;
            runtime->cooperativeGuestYield();
            goto label_101ae0;
        }
    }
    ctx->pc = 0x101C1Cu;
    // 0x101c1c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x101c1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_101c20:
    // 0x101c20: 0x1ae0005e  blez        $s7, . + 4 + (0x5E << 2)
    ctx->pc = 0x101C20u;
    {
        const bool branch_taken_0x101c20 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x101C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101C20u;
            // 0x101c24: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101c20) {
            ctx->pc = 0x101D9Cu;
            goto label_101d9c;
        }
    }
    ctx->pc = 0x101C28u;
    // 0x101c28: 0x26b60090  addiu       $s6, $s5, 0x90
    ctx->pc = 0x101c28u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
    // 0x101c2c: 0x0  nop
    ctx->pc = 0x101c2cu;
    // NOP
label_101c30:
    // 0x101c30: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x101c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x101c34: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x101c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x101c38: 0x600013  mtlo        $v1
    ctx->pc = 0x101c38u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x101c3c: 0x72221000  madd        $v0, $s1, $v0
    ctx->pc = 0x101c3cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x101c40: 0x8c460050  lw          $a2, 0x50($v0)
    ctx->pc = 0x101c40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x101c44: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x101c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x101c48: 0xdc43bdf8  ld          $v1, -0x4208($v0)
    ctx->pc = 0x101c48u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x101c4c: 0xdfc20040  ld          $v0, 0x40($fp)
    ctx->pc = 0x101c4cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 64)));
    // 0x101c50: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x101C50u;
    {
        const bool branch_taken_0x101c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x101C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101C50u;
            // 0x101c54: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101c50) {
            ctx->pc = 0x101C68u;
            goto label_101c68;
        }
    }
    ctx->pc = 0x101C58u;
    // 0x101c58: 0xc04daf6  jal         func_136BD8
    ctx->pc = 0x101C58u;
    SET_GPR_U32(ctx, 31, 0x101C60u);
    ctx->pc = 0x101C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101C58u;
            // 0x101c5c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136BD8u;
    if (runtime->hasFunction(0x136BD8u)) {
        auto targetFn = runtime->lookupFunction(0x136BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101C60u; }
        if (ctx->pc != 0x101C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136BD8_0x136bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101C60u; }
        if (ctx->pc != 0x101C60u) { return; }
    }
    ctx->pc = 0x101C60u;
    // 0x101c60: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x101C60u;
    {
        const bool branch_taken_0x101c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101C60u;
            // 0x101c64: 0xdba100d0  lqc2        $vf1, 0xD0($sp) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101c60) {
            ctx->pc = 0x101C98u;
            goto label_101c98;
        }
    }
    ctx->pc = 0x101C68u;
label_101c68:
    // 0x101c68: 0x8fc2008c  lw          $v0, 0x8C($fp)
    ctx->pc = 0x101c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 140)));
    // 0x101c6c: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x101c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x101c70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x101c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x101c74: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x101c74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x101c78: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x101c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x101c7c: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x101c7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x101c80: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x101c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x101c84: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x101c84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x101c88: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x101c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x101c8c: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x101c8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x101c90: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x101c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x101c94: 0xdba100d0  lqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x101c94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_101c98:
    // 0x101c98: 0x7ba400e0  lq          $a0, 0xE0($sp)
    ctx->pc = 0x101c98u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x101c9c: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x101c9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x101ca0: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x101ca0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x101ca4: 0x7ba30100  lq          $v1, 0x100($sp)
    ctx->pc = 0x101ca4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x101ca8: 0x7fa400a0  sq          $a0, 0xA0($sp)
    ctx->pc = 0x101ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 4));
    // 0x101cac: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x101cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x101cb0: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x101cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
    // 0x101cb4: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x101cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x101cb8: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x101cb8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x101cbc: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x101cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x101cc0: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x101cc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x101cc4: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x101cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x101cc8: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x101cc8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x101ccc: 0x400013  mtlo        $v0
    ctx->pc = 0x101cccu;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x101cd0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x101cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101cd4: 0x72252800  madd        $a1, $s1, $a1
    ctx->pc = 0x101cd4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x101cd8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x101cd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x101cdc: 0x46000504  c1          0x504
    ctx->pc = 0x101cdcu;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x101ce0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x101ce0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101ce4: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x101ce4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101ce8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x101ce8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x101cec: 0xc0417ce  jal         func_105F38
    ctx->pc = 0x101CECu;
    SET_GPR_U32(ctx, 31, 0x101CF4u);
    ctx->pc = 0x101CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101CECu;
            // 0x101cf0: 0x149180  sll         $s2, $s4, 6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x105F38u;
    if (runtime->hasFunction(0x105F38u)) {
        auto targetFn = runtime->lookupFunction(0x105F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101CF4u; }
        if (ctx->pc != 0x101CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_105f38_0x106180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101CF4u; }
        if (ctx->pc != 0x101CF4u) { return; }
    }
    ctx->pc = 0x101CF4u;
    // 0x101cf4: 0x8ed30034  lw          $s3, 0x34($s6)
    ctx->pc = 0x101cf4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 52)));
    // 0x101cf8: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x101cf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x101cfc: 0x54400023  bnel        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x101CFCu;
    {
        const bool branch_taken_0x101cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x101cfc) {
            ctx->pc = 0x101D00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x101CFCu;
            // 0x101d00: 0x2338821  addu        $s1, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x101D8Cu;
            goto label_101d8c;
        }
    }
    ctx->pc = 0x101D04u;
    // 0x101d04: 0xafb40124  sw          $s4, 0x124($sp)
    ctx->pc = 0x101d04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 20));
    // 0x101d08: 0x1a600017  blez        $s3, . + 4 + (0x17 << 2)
    ctx->pc = 0x101D08u;
    {
        const bool branch_taken_0x101d08 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x101D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101D08u;
            // 0x101d0c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101d08) {
            ctx->pc = 0x101D68u;
            goto label_101d68;
        }
    }
    ctx->pc = 0x101D10u;
    // 0x101d10: 0x26420090  addiu       $v0, $s2, 0x90
    ctx->pc = 0x101d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x101d14: 0x559021  addu        $s2, $v0, $s5
    ctx->pc = 0x101d14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_101d18:
    // 0x101d18: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x101d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x101d1c: 0x2303021  addu        $a2, $s1, $s0
    ctx->pc = 0x101d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x101d20: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x101d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x101d24: 0x26020002  addiu       $v0, $s0, 0x2
    ctx->pc = 0x101d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x101d28: 0x600013  mtlo        $v1
    ctx->pc = 0x101d28u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x101d2c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x101d2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x101d30: 0x70c52800  madd        $a1, $a2, $a1
    ctx->pc = 0x101d30u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x101d34: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x101d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x101d38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x101d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x101d3c: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x101d3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x101d40: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x101d40u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x101d44: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x101d44u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x101d48: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x101d48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x101d4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x101d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101d50: 0xc33821  addu        $a3, $a2, $v1
    ctx->pc = 0x101d50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x101d54: 0xc0417ce  jal         func_105F38
    ctx->pc = 0x101D54u;
    SET_GPR_U32(ctx, 31, 0x101D5Cu);
    ctx->pc = 0x101D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101D54u;
            // 0x101d58: 0x26d60040  addiu       $s6, $s6, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x105F38u;
    if (runtime->hasFunction(0x105F38u)) {
        auto targetFn = runtime->lookupFunction(0x105F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101D5Cu; }
        if (ctx->pc != 0x101D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_105f38_0x106180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101D5Cu; }
        if (ctx->pc != 0x101D5Cu) { return; }
    }
    ctx->pc = 0x101D5Cu;
    // 0x101d5c: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x101d5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x101d60: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x101D60u;
    {
        const bool branch_taken_0x101d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101D60u;
            // 0x101d64: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101d60) {
            ctx->pc = 0x101D18u;
            runtime->cooperativeGuestYield();
            goto label_101d18;
        }
    }
    ctx->pc = 0x101D68u;
label_101d68:
    // 0x101d68: 0x8fa80124  lw          $t0, 0x124($sp)
    ctx->pc = 0x101d68u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x101d6c: 0x26840001  addiu       $a0, $s4, 0x1
    ctx->pc = 0x101d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x101d70: 0x81980  sll         $v1, $t0, 6
    ctx->pc = 0x101d70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
    // 0x101d74: 0x751021  addu        $v0, $v1, $s5
    ctx->pc = 0x101d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x101d78: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x101d78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101d7c: 0xac4400c0  sw          $a0, 0xC0($v0)
    ctx->pc = 0x101d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 4));
    // 0x101d80: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x101d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x101d84: 0xac6200c4  sw          $v0, 0xC4($v1)
    ctx->pc = 0x101d84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 196), GPR_U32(ctx, 2));
    // 0x101d88: 0x2338821  addu        $s1, $s1, $s3
    ctx->pc = 0x101d88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_101d8c:
    // 0x101d8c: 0x26d60040  addiu       $s6, $s6, 0x40
    ctx->pc = 0x101d8cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 64));
    // 0x101d90: 0x237102a  slt         $v0, $s1, $s7
    ctx->pc = 0x101d90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x101d94: 0x1440ffa6  bnez        $v0, . + 4 + (-0x5A << 2)
    ctx->pc = 0x101D94u;
    {
        const bool branch_taken_0x101d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101D94u;
            // 0x101d98: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101d94) {
            ctx->pc = 0x101C30u;
            runtime->cooperativeGuestYield();
            goto label_101c30;
        }
    }
    ctx->pc = 0x101D9Cu;
label_101d9c:
    // 0x101d9c: 0xaeb40690  sw          $s4, 0x690($s5)
    ctx->pc = 0x101d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1680), GPR_U32(ctx, 20));
    // 0x101da0: 0x7bb001c0  lq          $s0, 0x1C0($sp)
    ctx->pc = 0x101da0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x101da4: 0x7bb101b0  lq          $s1, 0x1B0($sp)
    ctx->pc = 0x101da4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x101da8: 0x7bb201a0  lq          $s2, 0x1A0($sp)
    ctx->pc = 0x101da8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x101dac: 0x7bb30190  lq          $s3, 0x190($sp)
    ctx->pc = 0x101dacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x101db0: 0x7bb40180  lq          $s4, 0x180($sp)
    ctx->pc = 0x101db0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x101db4: 0x7bb50170  lq          $s5, 0x170($sp)
    ctx->pc = 0x101db4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x101db8: 0x7bb60160  lq          $s6, 0x160($sp)
    ctx->pc = 0x101db8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x101dbc: 0x7bb70150  lq          $s7, 0x150($sp)
    ctx->pc = 0x101dbcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x101dc0: 0x7bbe0140  lq          $fp, 0x140($sp)
    ctx->pc = 0x101dc0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x101dc4: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x101dc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x101dc8: 0xc7b401d0  lwc1        $f20, 0x1D0($sp)
    ctx->pc = 0x101dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x101dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x101DCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101DCCu;
            // 0x101dd0: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x101AE0u: goto label_101ae0;
            case 0x101B58u: goto label_101b58;
            case 0x101B88u: goto label_101b88;
            case 0x101BB4u: goto label_101bb4;
            case 0x101C20u: goto label_101c20;
            case 0x101C30u: goto label_101c30;
            case 0x101C68u: goto label_101c68;
            case 0x101C98u: goto label_101c98;
            case 0x101D18u: goto label_101d18;
            case 0x101D68u: goto label_101d68;
            case 0x101D8Cu: goto label_101d8c;
            case 0x101D9Cu: goto label_101d9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x101DD4u;
    // 0x101dd4: 0x0  nop
    ctx->pc = 0x101dd4u;
    // NOP
}
