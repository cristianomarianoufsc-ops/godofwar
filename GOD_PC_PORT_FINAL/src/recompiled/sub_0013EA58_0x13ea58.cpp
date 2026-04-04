#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013EA58
// Address: 0x13ea58 - 0x13eb48
void sub_0013EA58_0x13ea58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013EA58_0x13ea58");
#endif

    ctx->pc = 0x13ea58u;

    // 0x13ea58: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x13ea58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x13ea5c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x13ea5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x13ea60: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x13ea60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x13ea64: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13ea64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ea68: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x13ea68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x13ea6c: 0xc04c0dc  jal         func_130370
    ctx->pc = 0x13EA6Cu;
    SET_GPR_U32(ctx, 31, 0x13EA74u);
    ctx->pc = 0x13EA70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13EA6Cu;
            // 0x13ea70: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130370u;
    if (runtime->hasFunction(0x130370u)) {
        auto targetFn = runtime->lookupFunction(0x130370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EA74u; }
        if (ctx->pc != 0x13EA74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00130370_0x130370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EA74u; }
        if (ctx->pc != 0x13EA74u) { return; }
    }
    ctx->pc = 0x13EA74u;
    // 0x13ea74: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x13ea74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ea78: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x13ea78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13ea7c: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x13ea7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x13ea80: 0xae300100  sw          $s0, 0x100($s1)
    ctx->pc = 0x13ea80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 16));
    // 0x13ea84: 0xe62000f8  swc1        $f0, 0xF8($s1)
    ctx->pc = 0x13ea84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 248), bits); }
    // 0x13ea88: 0xc05e996  jal         func_17A658
    ctx->pc = 0x13EA88u;
    SET_GPR_U32(ctx, 31, 0x13EA90u);
    ctx->pc = 0x13EA8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13EA88u;
            // 0x13ea8c: 0x24840078  addiu       $a0, $a0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EA90u; }
        if (ctx->pc != 0x13EA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EA90u; }
        if (ctx->pc != 0x13EA90u) { return; }
    }
    ctx->pc = 0x13EA90u;
    // 0x13ea90: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13EA90u;
    {
        const bool branch_taken_0x13ea90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ea90) {
            ctx->pc = 0x13EAB8u;
            goto label_13eab8;
        }
    }
    ctx->pc = 0x13EA98u;
    // 0x13ea98: 0xc05d656  jal         func_175958
    ctx->pc = 0x13EA98u;
    SET_GPR_U32(ctx, 31, 0x13EAA0u);
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EAA0u; }
        if (ctx->pc != 0x13EAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EAA0u; }
        if (ctx->pc != 0x13EAA0u) { return; }
    }
    ctx->pc = 0x13EAA0u;
    // 0x13eaa0: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x13eaa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x13eaa4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13eaa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eaa8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x13eaa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eaac: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x13EAACu;
    SET_GPR_U32(ctx, 31, 0x13EAB4u);
    ctx->pc = 0x13EAB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13EAACu;
            // 0x13eab0: 0x24a50078  addiu       $a1, $a1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EAB4u; }
        if (ctx->pc != 0x13EAB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EAB4u; }
        if (ctx->pc != 0x13EAB4u) { return; }
    }
    ctx->pc = 0x13EAB4u;
    // 0x13eab4: 0x0  nop
    ctx->pc = 0x13eab4u;
    // NOP
label_13eab8:
    // 0x13eab8: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x13eab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
    // 0x13eabc: 0x34213483  ori         $at, $at, 0x3483
    ctx->pc = 0x13eabcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13443);
    // 0x13eac0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13eac0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13eac4: 0x262300b0  addiu       $v1, $s1, 0xB0
    ctx->pc = 0x13eac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    // 0x13eac8: 0xe62000fc  swc1        $f0, 0xFC($s1)
    ctx->pc = 0x13eac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 252), bits); }
    // 0x13eacc: 0x4be3033c  vmove.xyzw  $vf3, $vf0
    ctx->pc = 0x13eaccu;
    ctx->vu0_vf[3] = ctx->vu0_vf[0];
    // 0x13ead0: 0x4be41b3d  vmr32.xyzw  $vf4, $vf3
    ctx->pc = 0x13ead0u;
    ctx->vu0_vf[4] = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,1));
    // 0x13ead4: 0xfba30000  sqc2        $vf3, 0x0($sp)
    ctx->pc = 0x13ead4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13ead8: 0x4be2233d  vmr32.xyzw  $vf2, $vf4
    ctx->pc = 0x13ead8u;
    ctx->vu0_vf[2] = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,1));
    // 0x13eadc: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x13eadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x13eae0: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x13eae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x13eae4: 0x4be1133d  vmr32.xyzw  $vf1, $vf2
    ctx->pc = 0x13eae4u;
    ctx->vu0_vf[1] = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,1));
    // 0x13eae8: 0xfa2100b0  sqc2        $vf1, 0xB0($s1)
    ctx->pc = 0x13eae8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13eaec: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x13eaecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x13eaf0: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x13eaf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13eaf4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x13eaf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eaf8: 0x3c01c2c8  lui         $at, 0xC2C8
    ctx->pc = 0x13eaf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49864 << 16));
    // 0x13eafc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13eafcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13eb00: 0x3c01c348  lui         $at, 0xC348
    ctx->pc = 0x13eb00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49992 << 16));
    // 0x13eb04: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13eb04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13eb08: 0xf8630030  sqc2        $vf3, 0x30($v1)
    ctx->pc = 0x13eb08u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13eb0c: 0xf8620010  sqc2        $vf2, 0x10($v1)
    ctx->pc = 0x13eb0cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x13eb10: 0xf8640020  sqc2        $vf4, 0x20($v1)
    ctx->pc = 0x13eb10u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x13eb14: 0xae300100  sw          $s0, 0x100($s1)
    ctx->pc = 0x13eb14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 16));
    // 0x13eb18: 0xe620010c  swc1        $f0, 0x10C($s1)
    ctx->pc = 0x13eb18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 268), bits); }
    // 0x13eb1c: 0xe6210110  swc1        $f1, 0x110($s1)
    ctx->pc = 0x13eb1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 272), bits); }
    // 0x13eb20: 0xae240114  sw          $a0, 0x114($s1)
    ctx->pc = 0x13eb20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 276), GPR_U32(ctx, 4));
    // 0x13eb24: 0xfe2000f0  sd          $zero, 0xF0($s1)
    ctx->pc = 0x13eb24u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 240), GPR_U64(ctx, 0));
    // 0x13eb28: 0xae200104  sw          $zero, 0x104($s1)
    ctx->pc = 0x13eb28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 0));
    // 0x13eb2c: 0xae200108  sw          $zero, 0x108($s1)
    ctx->pc = 0x13eb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 0));
    // 0x13eb30: 0xae200118  sw          $zero, 0x118($s1)
    ctx->pc = 0x13eb30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 0));
    // 0x13eb34: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x13eb34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13eb38: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x13eb38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13eb3c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x13eb3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13eb40: 0x3e00008  jr          $ra
    ctx->pc = 0x13EB40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EB44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EB40u;
            // 0x13eb44: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13EAB8u: goto label_13eab8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13EB48u;
}
