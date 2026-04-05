#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00147BF8
// Address: 0x147bf8 - 0x148360
void sub_00147BF8_0x147bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00147BF8_0x147bf8");
#endif

    ctx->pc = 0x147bf8u;

    // 0x147bf8: 0x27bdfcd0  addiu       $sp, $sp, -0x330
    ctx->pc = 0x147bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966480));
    // 0x147bfc: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x147bfcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x147c00: 0xafa40250  sw          $a0, 0x250($sp)
    ctx->pc = 0x147c00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 4));
    // 0x147c04: 0x7fb00300  sq          $s0, 0x300($sp)
    ctx->pc = 0x147c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), GPR_VEC(ctx, 16));
    // 0x147c08: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x147c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147c0c: 0x7fb402c0  sq          $s4, 0x2C0($sp)
    ctx->pc = 0x147c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 20));
    // 0x147c10: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x147c10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147c14: 0x7fb602a0  sq          $s6, 0x2A0($sp)
    ctx->pc = 0x147c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 22));
    // 0x147c18: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x147c18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147c1c: 0x7fb102f0  sq          $s1, 0x2F0($sp)
    ctx->pc = 0x147c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 17));
    // 0x147c20: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x147c20u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147c24: 0x7fb202e0  sq          $s2, 0x2E0($sp)
    ctx->pc = 0x147c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 18));
    // 0x147c28: 0x7fb302d0  sq          $s3, 0x2D0($sp)
    ctx->pc = 0x147c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 19));
    // 0x147c2c: 0x7fb502b0  sq          $s5, 0x2B0($sp)
    ctx->pc = 0x147c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 21));
    // 0x147c30: 0x7fb70290  sq          $s7, 0x290($sp)
    ctx->pc = 0x147c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 23));
    // 0x147c34: 0x7fbe0280  sq          $fp, 0x280($sp)
    ctx->pc = 0x147c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 30));
    // 0x147c38: 0xffbf0270  sd          $ra, 0x270($sp)
    ctx->pc = 0x147c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 31));
    // 0x147c3c: 0xe7b70328  swc1        $f23, 0x328($sp)
    ctx->pc = 0x147c3cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 808), bits); }
    // 0x147c40: 0xe7b60320  swc1        $f22, 0x320($sp)
    ctx->pc = 0x147c40u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 800), bits); }
    // 0x147c44: 0xe7b50318  swc1        $f21, 0x318($sp)
    ctx->pc = 0x147c44u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 792), bits); }
    // 0x147c48: 0xe7b40310  swc1        $f20, 0x310($sp)
    ctx->pc = 0x147c48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 784), bits); }
    // 0x147c4c: 0xc0526c4  jal         func_149B10
    ctx->pc = 0x147C4Cu;
    SET_GPR_U32(ctx, 31, 0x147C54u);
    ctx->pc = 0x147C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x147C4Cu;
            // 0x147c50: 0xafa60254  sw          $a2, 0x254($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149B10u;
    if (runtime->hasFunction(0x149B10u)) {
        auto targetFn = runtime->lookupFunction(0x149B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147C54u; }
        if (ctx->pc != 0x147C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00149B10_0x149b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147C54u; }
        if (ctx->pc != 0x147C54u) { return; }
    }
    ctx->pc = 0x147C54u;
    // 0x147c54: 0xafa20258  sw          $v0, 0x258($sp)
    ctx->pc = 0x147c54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 2));
    // 0x147c58: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x147c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x147c5c: 0xafa2025c  sw          $v0, 0x25C($sp)
    ctx->pc = 0x147c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 2));
    // 0x147c60: 0x8c430cd0  lw          $v1, 0xCD0($v0)
    ctx->pc = 0x147c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3280)));
    // 0x147c64: 0xafa30260  sw          $v1, 0x260($sp)
    ctx->pc = 0x147c64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 3));
    // 0x147c68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x147c68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x147c6c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x147c6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x147c70: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x147c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x147c74: 0x4be1033c  vmove.xyzw  $vf1, $vf0
    ctx->pc = 0x147c74u;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x147c78: 0x4be30b3d  vmr32.xyzw  $vf3, $vf1
    ctx->pc = 0x147c78u;
    ctx->vu0_vf[3] = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,1));
    // 0x147c7c: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x147c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x147c80: 0x4be21b3d  vmr32.xyzw  $vf2, $vf3
    ctx->pc = 0x147c80u;
    ctx->vu0_vf[2] = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,1));
    // 0x147c84: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x147c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x147c88: 0x4be4133d  vmr32.xyzw  $vf4, $vf2
    ctx->pc = 0x147c88u;
    ctx->vu0_vf[4] = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,1));
    // 0x147c8c: 0xfba30020  sqc2        $vf3, 0x20($sp)
    ctx->pc = 0x147c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x147c90: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x147c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x147c94: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x147c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x147c98: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x147c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x147c9c: 0x4be1033c  vmove.xyzw  $vf1, $vf0
    ctx->pc = 0x147c9cu;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x147ca0: 0xfba30060  sqc2        $vf3, 0x60($sp)
    ctx->pc = 0x147ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x147ca4: 0xfba20070  sqc2        $vf2, 0x70($sp)
    ctx->pc = 0x147ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x147ca8: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x147ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x147cac: 0xa4450002  sh          $a1, 0x2($v0)
    ctx->pc = 0x147cacu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x147cb0: 0xa4450006  sh          $a1, 0x6($v0)
    ctx->pc = 0x147cb0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 5));
    // 0x147cb4: 0xa4450004  sh          $a1, 0x4($v0)
    ctx->pc = 0x147cb4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 5));
    // 0x147cb8: 0xa7a50040  sh          $a1, 0x40($sp)
    ctx->pc = 0x147cb8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 64), (uint16_t)GPR_U32(ctx, 5));
    // 0x147cbc: 0xfba10240  sqc2        $vf1, 0x240($sp)
    ctx->pc = 0x147cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x147cc0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x147cc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x147cc4: 0x8fa50250  lw          $a1, 0x250($sp)
    ctx->pc = 0x147cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x147cc8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x147cc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147ccc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x147cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x147cd0: 0xc051b7a  jal         func_146DE8
    ctx->pc = 0x147CD0u;
    SET_GPR_U32(ctx, 31, 0x147CD8u);
    ctx->pc = 0x147CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x147CD0u;
            // 0x147cd4: 0xafa00264  sw          $zero, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146DE8u;
    if (runtime->hasFunction(0x146DE8u)) {
        auto targetFn = runtime->lookupFunction(0x146DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147CD8u; }
        if (ctx->pc != 0x147CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_146de8_0x146fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147CD8u; }
        if (ctx->pc != 0x147CD8u) { return; }
    }
    ctx->pc = 0x147CD8u;
    // 0x147cd8: 0x8fa40250  lw          $a0, 0x250($sp)
    ctx->pc = 0x147cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x147cdc: 0x8c900018  lw          $s0, 0x18($a0)
    ctx->pc = 0x147cdcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x147ce0: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x147ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x147ce4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x147ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x147ce8: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x147ce8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x147cec: 0x10400180  beqz        $v0, . + 4 + (0x180 << 2)
    ctx->pc = 0x147CECu;
    {
        const bool branch_taken_0x147cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147CECu;
            // 0x147cf0: 0x4600a586  mov.s       $f22, $f20 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x147cec) {
            ctx->pc = 0x1482F0u;
            goto label_1482f0;
        }
    }
    ctx->pc = 0x147CF4u;
    // 0x147cf4: 0x92120000  lbu         $s2, 0x0($s0)
    ctx->pc = 0x147cf4u;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_147cf8:
    // 0x147cf8: 0x8fa50264  lw          $a1, 0x264($sp)
    ctx->pc = 0x147cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
    // 0x147cfc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x147cfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x147d00: 0x32420080  andi        $v0, $s2, 0x80
    ctx->pc = 0x147d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)128);
    // 0x147d04: 0x5100b  movn        $v0, $zero, $a1
    ctx->pc = 0x147d04u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x147d08: 0x2302b  sltu        $a2, $zero, $v0
    ctx->pc = 0x147d08u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x147d0c: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x147D0Cu;
    {
        const bool branch_taken_0x147d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147D0Cu;
            // 0x147d10: 0xafa60264  sw          $a2, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147d0c) {
            ctx->pc = 0x147E60u;
            goto label_147e60;
        }
    }
    ctx->pc = 0x147D14u;
    // 0x147d14: 0x32420008  andi        $v0, $s2, 0x8
    ctx->pc = 0x147d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)8);
    // 0x147d18: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x147D18u;
    {
        const bool branch_taken_0x147d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147D18u;
            // 0x147d1c: 0x8fad0260  lw          $t5, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147d18) {
            ctx->pc = 0x147DB0u;
            goto label_147db0;
        }
    }
    ctx->pc = 0x147D20u;
    // 0x147d20: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x147d20u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x147d24: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x147d24u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x147d28: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x147d28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x147d2c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x147d2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x147d30: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x147d30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x147d34: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x147d34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x147d38: 0x8da20010  lw          $v0, 0x10($t5)
    ctx->pc = 0x147d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 16)));
    // 0x147d3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x147d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x147d40: 0x94440002  lhu         $a0, 0x2($v0)
    ctx->pc = 0x147d40u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x147d44: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x147d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x147d48: 0x3c013a80  lui         $at, 0x3A80
    ctx->pc = 0x147d48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14976 << 16));
    // 0x147d4c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x147d4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x147d50: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x147d50u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x147d54: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x147d54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x147d58: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x147d58u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x147d5c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x147d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x147d60: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x147d60u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147d64: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x147d64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x147d68: 0x8da50020  lw          $a1, 0x20($t5)
    ctx->pc = 0x147d68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 32)));
    // 0x147d6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147d6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147d70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x147d70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x147d74: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x147d74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x147d78: 0xa4b021  addu        $s6, $a1, $a0
    ctx->pc = 0x147d78u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x147d7c: 0xfba20220  sqc2        $vf2, 0x220($sp)
    ctx->pc = 0x147d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x147d80: 0x460105c2  mul.s       $f23, $f0, $f1
    ctx->pc = 0x147d80u;
    ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x147d84: 0x4403b800  mfc1        $v1, $f23
    ctx->pc = 0x147d84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[23], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x147d88: 0x48a31800  qmtc2.ni    $v1, $vf3
    ctx->pc = 0x147d88u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x147d8c: 0x4b030080  vaddx.x     $vf2, $vf0, $vf3x
    ctx->pc = 0x147d8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x147d90: 0xdba10010  lqc2        $vf1, 0x10($sp)
    ctx->pc = 0x147d90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x147d94: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x147d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x147d98: 0xfba20220  sqc2        $vf2, 0x220($sp)
    ctx->pc = 0x147d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x147d9c: 0xfba10230  sqc2        $vf1, 0x230($sp)
    ctx->pc = 0x147d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x147da0: 0x4a830040  vaddx.y     $vf1, $vf0, $vf3x
    ctx->pc = 0x147da0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x147da4: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x147da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x147da8: 0xfba10230  sqc2        $vf1, 0x230($sp)
    ctx->pc = 0x147da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x147dac: 0x0  nop
    ctx->pc = 0x147dacu;
    // NOP
label_147db0:
    // 0x147db0: 0x32420004  andi        $v0, $s2, 0x4
    ctx->pc = 0x147db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
    // 0x147db4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x147DB4u;
    {
        const bool branch_taken_0x147db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147DB4u;
            // 0x147db8: 0x32420002  andi        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x147db4) {
            ctx->pc = 0x147E00u;
            goto label_147e00;
        }
    }
    ctx->pc = 0x147DBCu;
    // 0x147dbc: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x147dbcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x147dc0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x147dc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x147dc4: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x147dc4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x147dc8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x147dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x147dcc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x147dccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x147dd0: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x147dd0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x147dd4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x147dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x147dd8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x147dd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x147ddc: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x147ddcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x147de0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x147de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x147de4: 0xa7a20040  sh          $v0, 0x40($sp)
    ctx->pc = 0x147de4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 64), (uint16_t)GPR_U32(ctx, 2));
    // 0x147de8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x147de8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x147dec: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x147decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x147df0: 0xa7a30042  sh          $v1, 0x42($sp)
    ctx->pc = 0x147df0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 66), (uint16_t)GPR_U32(ctx, 3));
    // 0x147df4: 0xa7a40044  sh          $a0, 0x44($sp)
    ctx->pc = 0x147df4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 68), (uint16_t)GPR_U32(ctx, 4));
    // 0x147df8: 0xa7a50046  sh          $a1, 0x46($sp)
    ctx->pc = 0x147df8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 70), (uint16_t)GPR_U32(ctx, 5));
    // 0x147dfc: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x147dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
label_147e00:
    // 0x147e00: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x147E00u;
    {
        const bool branch_taken_0x147e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147E00u;
            // 0x147e04: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x147e00) {
            ctx->pc = 0x147E30u;
            goto label_147e30;
        }
    }
    ctx->pc = 0x147E08u;
    // 0x147e08: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x147e08u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x147e0c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x147e0cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x147e10: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x147e10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x147e14: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x147e14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x147e18: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x147e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x147e1c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x147e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x147e20: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x147e20u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x147e24: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x147e24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x147e28: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x147e28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x147e2c: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x147e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_147e30:
    // 0x147e30: 0x10400129  beqz        $v0, . + 4 + (0x129 << 2)
    ctx->pc = 0x147E30u;
    {
        const bool branch_taken_0x147e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147E30u;
            // 0x147e34: 0x8fad0250  lw          $t5, 0x250($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147e30) {
            ctx->pc = 0x1482D8u;
            goto label_1482d8;
        }
    }
    ctx->pc = 0x147E38u;
    // 0x147e38: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x147e38u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x147e3c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x147e3cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x147e40: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x147e40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x147e44: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x147e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x147e48: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x147e48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x147e4c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x147e4cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x147e50: 0x4482b000  mtc1        $v0, $f22
    ctx->pc = 0x147e50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x147e54: 0x4680b5a0  cvt.s.w     $f22, $f22
    ctx->pc = 0x147e54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[22], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
    // 0x147e58: 0x1000011f  b           . + 4 + (0x11F << 2)
    ctx->pc = 0x147E58u;
    {
        const bool branch_taken_0x147e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147E58u;
            // 0x147e5c: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147e58) {
            ctx->pc = 0x1482D8u;
            goto label_1482d8;
        }
    }
    ctx->pc = 0x147E60u;
label_147e60:
    // 0x147e60: 0x96c3000c  lhu         $v1, 0xC($s6)
    ctx->pc = 0x147e60u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x147e64: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x147e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x147e68: 0x30630006  andi        $v1, $v1, 0x6
    ctx->pc = 0x147e68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)6);
    // 0x147e6c: 0x1062003a  beq         $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x147E6Cu;
    {
        const bool branch_taken_0x147e6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x147E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147E6Cu;
            // 0x147e70: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147e6c) {
            ctx->pc = 0x147F58u;
            goto label_147f58;
        }
    }
    ctx->pc = 0x147E74u;
    // 0x147e74: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x147e74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x147e78: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x147E78u;
    {
        const bool branch_taken_0x147e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147E78u;
            // 0x147e7c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147e78) {
            ctx->pc = 0x147E90u;
            goto label_147e90;
        }
    }
    ctx->pc = 0x147E80u;
    // 0x147e80: 0x10620033  beq         $v1, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x147E80u;
    {
        const bool branch_taken_0x147e80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x147E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147E80u;
            // 0x147e84: 0xdba60090  lqc2        $vf6, 0x90($sp) (Delay Slot)
        ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147e80) {
            ctx->pc = 0x147F50u;
            goto label_147f50;
        }
    }
    ctx->pc = 0x147E88u;
    // 0x147e88: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x147E88u;
    {
        const bool branch_taken_0x147e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147E88u;
            // 0x147e8c: 0xdba700a0  lqc2        $vf7, 0xA0($sp) (Delay Slot)
        ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147e88) {
            ctx->pc = 0x147F64u;
            goto label_147f64;
        }
    }
    ctx->pc = 0x147E90u;
label_147e90:
    // 0x147e90: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x147e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x147e94: 0x14620032  bne         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x147E94u;
    {
        const bool branch_taken_0x147e94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x147E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147E94u;
            // 0x147e98: 0xdba60090  lqc2        $vf6, 0x90($sp) (Delay Slot)
        ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147e94) {
            ctx->pc = 0x147F60u;
            goto label_147f60;
        }
    }
    ctx->pc = 0x147E9Cu;
    // 0x147e9c: 0xdba700a0  lqc2        $vf7, 0xA0($sp)
    ctx->pc = 0x147e9cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x147ea0: 0xdba800b0  lqc2        $vf8, 0xB0($sp)
    ctx->pc = 0x147ea0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x147ea4: 0xdba400c0  lqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x147ea4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x147ea8: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x147ea8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147eac: 0xdba20010  lqc2        $vf2, 0x10($sp)
    ctx->pc = 0x147eacu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x147eb0: 0xdba30020  lqc2        $vf3, 0x20($sp)
    ctx->pc = 0x147eb0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x147eb4: 0xdba50030  lqc2        $vf5, 0x30($sp)
    ctx->pc = 0x147eb4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x147eb8: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x147eb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x147ebc: 0x4be138bd  vmadday.xyzw $ACC, $vf7, $vf1y
    ctx->pc = 0x147ebcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x147ec0: 0x4be140be  vmaddaz.xyzw $ACC, $vf8, $vf1z
    ctx->pc = 0x147ec0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x147ec4: 0x4be1204b  vmaddw.xyzw $vf1, $vf4, $vf1w
    ctx->pc = 0x147ec4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x147ec8: 0x4be231bc  vmulax.xyzw $ACC, $vf6, $vf2x
    ctx->pc = 0x147ec8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x147ecc: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x147eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x147ed0: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x147ed0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x147ed4: 0x4be240be  vmaddaz.xyzw $ACC, $vf8, $vf2z
    ctx->pc = 0x147ed4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x147ed8: 0x4be2208b  vmaddw.xyzw $vf2, $vf4, $vf2w
    ctx->pc = 0x147ed8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x147edc: 0x4be331bc  vmulax.xyzw $ACC, $vf6, $vf3x
    ctx->pc = 0x147edcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x147ee0: 0xfba20120  sqc2        $vf2, 0x120($sp)
    ctx->pc = 0x147ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x147ee4: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x147ee4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x147ee8: 0x4be340be  vmaddaz.xyzw $ACC, $vf8, $vf3z
    ctx->pc = 0x147ee8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x147eec: 0x4be320cb  vmaddw.xyzw $vf3, $vf4, $vf3w
    ctx->pc = 0x147eecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x147ef0: 0x4be531bc  vmulax.xyzw $ACC, $vf6, $vf5x
    ctx->pc = 0x147ef0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x147ef4: 0xfba30130  sqc2        $vf3, 0x130($sp)
    ctx->pc = 0x147ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x147ef8: 0x4be538bd  vmadday.xyzw $ACC, $vf7, $vf5y
    ctx->pc = 0x147ef8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x147efc: 0x4be540be  vmaddaz.xyzw $ACC, $vf8, $vf5z
    ctx->pc = 0x147efcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x147f00: 0x4be5210b  vmaddw.xyzw $vf4, $vf4, $vf5w
    ctx->pc = 0x147f00u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x147f04: 0xfba40140  sqc2        $vf4, 0x140($sp)
    ctx->pc = 0x147f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x147f08: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x147f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x147f0c: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x147f0cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x147f10: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x147f10u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x147f14: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x147f14u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x147f18: 0x700517c9  prot3w      $v0, $a1
    ctx->pc = 0x147f18u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x147f1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x147f1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147f20: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x147f20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x147f24: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x147f24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x147f28: 0xfba300f0  sqc2        $vf3, 0xF0($sp)
    ctx->pc = 0x147f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x147f2c: 0xfba40100  sqc2        $vf4, 0x100($sp)
    ctx->pc = 0x147f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x147f30: 0xfba200e0  sqc2        $vf2, 0xE0($sp)
    ctx->pc = 0x147f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x147f34: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x147f34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x147f38: 0xc6c00020  lwc1        $f0, 0x20($s6)
    ctx->pc = 0x147f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147f3c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x147f3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147f40: 0x0  nop
    ctx->pc = 0x147f40u;
    // NOP
    // 0x147f44: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x147F44u;
    {
        const bool branch_taken_0x147f44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x147f44) {
            ctx->pc = 0x147F48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x147F44u;
            // 0x147f48: 0x8ede0014  lw          $fp, 0x14($s6) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x147F5Cu;
            goto label_147f5c;
        }
    }
    ctx->pc = 0x147F4Cu;
    // 0x147f4c: 0x0  nop
    ctx->pc = 0x147f4cu;
    // NOP
label_147f50:
    // 0x147f50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x147F50u;
    {
        const bool branch_taken_0x147f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147F50u;
            // 0x147f54: 0x8ede0010  lw          $fp, 0x10($s6) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147f50) {
            ctx->pc = 0x147F5Cu;
            goto label_147f5c;
        }
    }
    ctx->pc = 0x147F58u;
label_147f58:
    // 0x147f58: 0x8ede0014  lw          $fp, 0x14($s6)
    ctx->pc = 0x147f58u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
label_147f5c:
    // 0x147f5c: 0xdba60090  lqc2        $vf6, 0x90($sp)
    ctx->pc = 0x147f5cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_147f60:
    // 0x147f60: 0xdba700a0  lqc2        $vf7, 0xA0($sp)
    ctx->pc = 0x147f60u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_147f64:
    // 0x147f64: 0xdba800b0  lqc2        $vf8, 0xB0($sp)
    ctx->pc = 0x147f64u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x147f68: 0xdba400c0  lqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x147f68u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x147f6c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x147f6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147f70: 0xdba20010  lqc2        $vf2, 0x10($sp)
    ctx->pc = 0x147f70u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x147f74: 0xdba30020  lqc2        $vf3, 0x20($sp)
    ctx->pc = 0x147f74u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x147f78: 0xdba50030  lqc2        $vf5, 0x30($sp)
    ctx->pc = 0x147f78u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x147f7c: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x147f7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x147f80: 0x4be138bd  vmadday.xyzw $ACC, $vf7, $vf1y
    ctx->pc = 0x147f80u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x147f84: 0x4be140be  vmaddaz.xyzw $ACC, $vf8, $vf1z
    ctx->pc = 0x147f84u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x147f88: 0x4be1204b  vmaddw.xyzw $vf1, $vf4, $vf1w
    ctx->pc = 0x147f88u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x147f8c: 0x4be231bc  vmulax.xyzw $ACC, $vf6, $vf2x
    ctx->pc = 0x147f8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x147f90: 0xfba10190  sqc2        $vf1, 0x190($sp)
    ctx->pc = 0x147f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x147f94: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x147f94u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x147f98: 0x4be240be  vmaddaz.xyzw $ACC, $vf8, $vf2z
    ctx->pc = 0x147f98u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x147f9c: 0x4be2208b  vmaddw.xyzw $vf2, $vf4, $vf2w
    ctx->pc = 0x147f9cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x147fa0: 0x4be331bc  vmulax.xyzw $ACC, $vf6, $vf3x
    ctx->pc = 0x147fa0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x147fa4: 0xfba201a0  sqc2        $vf2, 0x1A0($sp)
    ctx->pc = 0x147fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x147fa8: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x147fa8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x147fac: 0x4be340be  vmaddaz.xyzw $ACC, $vf8, $vf3z
    ctx->pc = 0x147facu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x147fb0: 0x4be320cb  vmaddw.xyzw $vf3, $vf4, $vf3w
    ctx->pc = 0x147fb0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x147fb4: 0x4be531bc  vmulax.xyzw $ACC, $vf6, $vf5x
    ctx->pc = 0x147fb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x147fb8: 0xfba301b0  sqc2        $vf3, 0x1B0($sp)
    ctx->pc = 0x147fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x147fbc: 0x4be538bd  vmadday.xyzw $ACC, $vf7, $vf5y
    ctx->pc = 0x147fbcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x147fc0: 0x4be540be  vmaddaz.xyzw $ACC, $vf8, $vf5z
    ctx->pc = 0x147fc0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x147fc4: 0x4be5210b  vmaddw.xyzw $vf4, $vf4, $vf5w
    ctx->pc = 0x147fc4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x147fc8: 0xfba401c0  sqc2        $vf4, 0x1C0($sp)
    ctx->pc = 0x147fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x147fcc: 0xfba10150  sqc2        $vf1, 0x150($sp)
    ctx->pc = 0x147fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x147fd0: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x147fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x147fd4: 0xfba20160  sqc2        $vf2, 0x160($sp)
    ctx->pc = 0x147fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x147fd8: 0xfba30170  sqc2        $vf3, 0x170($sp)
    ctx->pc = 0x147fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x147fdc: 0xfba40180  sqc2        $vf4, 0x180($sp)
    ctx->pc = 0x147fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x147fe0: 0x8fa60258  lw          $a2, 0x258($sp)
    ctx->pc = 0x147fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x147fe4: 0x96c30006  lhu         $v1, 0x6($s6)
    ctx->pc = 0x147fe4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 6)));
    // 0x147fe8: 0xc4c10030  lwc1        $f1, 0x30($a2)
    ctx->pc = 0x147fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147fec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147fecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147ff0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x147ff0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x147ff4: 0x8cca002c  lw          $t2, 0x2C($a2)
    ctx->pc = 0x147ff4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x147ff8: 0x46170842  mul.s       $f1, $f1, $f23
    ctx->pc = 0x147ff8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
    // 0x147ffc: 0x1421024  and         $v0, $t2, $v0
    ctx->pc = 0x147ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x148000: 0x10400068  beqz        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x148000u;
    {
        const bool branch_taken_0x148000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148000u;
            // 0x148004: 0x46000882  mul.s       $f2, $f1, $f0 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x148000) {
            ctx->pc = 0x1481A4u;
            goto label_1481a4;
        }
    }
    ctx->pc = 0x148008u;
    // 0x148008: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x148008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x14800c: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x14800cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x148010: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x148010u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x148014: 0x46001005  abs.s       $f0, $f2
    ctx->pc = 0x148014u;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
    // 0x148018: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x148018u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14801c: 0x0  nop
    ctx->pc = 0x14801cu;
    // NOP
    // 0x148020: 0x45000060  bc1f        . + 4 + (0x60 << 2)
    ctx->pc = 0x148020u;
    {
        const bool branch_taken_0x148020 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x148024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148020u;
            // 0x148024: 0xa4402  srl         $t0, $t2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148020) {
            ctx->pc = 0x1481A4u;
            goto label_1481a4;
        }
    }
    ctx->pc = 0x148028u;
    // 0x148028: 0xa4a02  srl         $t1, $t2, 8
    ctx->pc = 0x148028u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 10), 8));
    // 0x14802c: 0x314b00ff  andi        $t3, $t2, 0xFF
    ctx->pc = 0x14802cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x148030: 0x86870000  lh          $a3, 0x0($s4)
    ctx->pc = 0x148030u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x148034: 0x86860002  lh          $a2, 0x2($s4)
    ctx->pc = 0x148034u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x148038: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x148038u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x14803c: 0x86850004  lh          $a1, 0x4($s4)
    ctx->pc = 0x14803cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x148040: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x148040u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x148044: 0x86840006  lh          $a0, 0x6($s4)
    ctx->pc = 0x148044u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x148048: 0xa5602  srl         $t2, $t2, 24
    ctx->pc = 0x148048u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 24));
    // 0x14804c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x14804cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x148050: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x148050u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x148054: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x148054u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x148058: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x148058u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x14805c: 0x1073818  mult        $a3, $t0, $a3
    ctx->pc = 0x14805cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x148060: 0x1263018  mult        $a2, $t1, $a2
    ctx->pc = 0x148060u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x148064: 0x27a301d0  addiu       $v1, $sp, 0x1D0
    ctx->pc = 0x148064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x148068: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x148068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14806c: 0x1652818  mult        $a1, $t3, $a1
    ctx->pc = 0x14806cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x148070: 0x1442018  mult        $a0, $t2, $a0
    ctx->pc = 0x148070u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x148074: 0x4602b000  add.s       $f0, $f22, $f2
    ctx->pc = 0x148074u;
    ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[2]);
    // 0x148078: 0xa4620002  sh          $v0, 0x2($v1)
    ctx->pc = 0x148078u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x14807c: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x14807cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x148080: 0x73a03  sra         $a3, $a3, 8
    ctx->pc = 0x148080u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 8));
    // 0x148084: 0xa4620004  sh          $v0, 0x4($v1)
    ctx->pc = 0x148084u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x148088: 0x63203  sra         $a2, $a2, 8
    ctx->pc = 0x148088u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 8));
    // 0x14808c: 0x52a03  sra         $a1, $a1, 8
    ctx->pc = 0x14808cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 8));
    // 0x148090: 0x42203  sra         $a0, $a0, 8
    ctx->pc = 0x148090u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 8));
    // 0x148094: 0xa7a701f0  sh          $a3, 0x1F0($sp)
    ctx->pc = 0x148094u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 496), (uint16_t)GPR_U32(ctx, 7));
    // 0x148098: 0x27b50240  addiu       $s5, $sp, 0x240
    ctx->pc = 0x148098u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x14809c: 0xa7a601f2  sh          $a2, 0x1F2($sp)
    ctx->pc = 0x14809cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 498), (uint16_t)GPR_U32(ctx, 6));
    // 0x1480a0: 0xa7a501f4  sh          $a1, 0x1F4($sp)
    ctx->pc = 0x1480a0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 500), (uint16_t)GPR_U32(ctx, 5));
    // 0x1480a4: 0xa7a401f6  sh          $a0, 0x1F6($sp)
    ctx->pc = 0x1480a4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 502), (uint16_t)GPR_U32(ctx, 4));
    // 0x1480a8: 0xa7aa01d6  sh          $t2, 0x1D6($sp)
    ctx->pc = 0x1480a8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 470), (uint16_t)GPR_U32(ctx, 10));
    // 0x1480ac: 0xa7a801d0  sh          $t0, 0x1D0($sp)
    ctx->pc = 0x1480acu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 464), (uint16_t)GPR_U32(ctx, 8));
    // 0x1480b0: 0xa7a901d2  sh          $t1, 0x1D2($sp)
    ctx->pc = 0x1480b0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 466), (uint16_t)GPR_U32(ctx, 9));
    // 0x1480b4: 0xa7ab01d4  sh          $t3, 0x1D4($sp)
    ctx->pc = 0x1480b4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 468), (uint16_t)GPR_U32(ctx, 11));
    // 0x1480b8: 0x440d0000  mfc1        $t5, $f0
    ctx->pc = 0x1480b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
    // 0x1480bc: 0x6ba201f7  ldl         $v0, 0x1F7($sp)
    ctx->pc = 0x1480bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 503); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1480c0: 0x6fa201f0  ldr         $v0, 0x1F0($sp)
    ctx->pc = 0x1480c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 496); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1480c4: 0xb3a201e7  sdl         $v0, 0x1E7($sp)
    ctx->pc = 0x1480c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 487); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1480c8: 0xb7a201e0  sdr         $v0, 0x1E0($sp)
    ctx->pc = 0x1480c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 480); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1480cc: 0x48ad1000  qmtc2.ni    $t5, $vf2
    ctx->pc = 0x1480ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 13));
    // 0x1480d0: 0xdba10240  lqc2        $vf1, 0x240($sp)
    ctx->pc = 0x1480d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1480d4: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x1480d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1480d8: 0xfba10240  sqc2        $vf1, 0x240($sp)
    ctx->pc = 0x1480d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1480dc: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x1480dcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x1480e0: 0x1240002e  beqz        $s2, . + 4 + (0x2E << 2)
    ctx->pc = 0x1480E0u;
    {
        const bool branch_taken_0x1480e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1480E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1480E0u;
            // 0x1480e4: 0x200b82d  daddu       $s7, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1480e0) {
            ctx->pc = 0x14819Cu;
            goto label_14819c;
        }
    }
    ctx->pc = 0x1480E8u;
    // 0x1480e8: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x1480e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1480ec: 0x0  nop
    ctx->pc = 0x1480ecu;
    // NOP
label_1480f0:
    // 0x1480f0: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x1480f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1480f4: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x1480f4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1480f8: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x1480f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x1480fc: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1480fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x148100: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x148100u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x148104: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x148104u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x148108: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x148108u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14810c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x14810cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x148110: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x148110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x148114: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x148114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x148118: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x148118u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x14811c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x14811cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x148120: 0xa4202b  sltu        $a0, $a1, $a0
    ctx->pc = 0x148120u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x148124: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x148124u;
    {
        const bool branch_taken_0x148124 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x148128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148124u;
            // 0x148128: 0x29c03  sra         $s3, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148124) {
            ctx->pc = 0x148188u;
            goto label_148188;
        }
    }
    ctx->pc = 0x14812Cu;
    // 0x14812c: 0x4406a000  mfc1        $a2, $f20
    ctx->pc = 0x14812cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x148130: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x148130u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x148134: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x148134u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x148138: 0x4b020040  vaddx.x     $vf1, $vf0, $vf2x
    ctx->pc = 0x148138u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x14813c: 0xfaa10000  sqc2        $vf1, 0x0($s5)
    ctx->pc = 0x14813cu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x148140: 0xdba20240  lqc2        $vf2, 0x240($sp)
    ctx->pc = 0x148140u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x148144: 0xdba10090  lqc2        $vf1, 0x90($sp)
    ctx->pc = 0x148144u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x148148: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x148148u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x14814c: 0xdba100a0  lqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x14814cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x148150: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x148150u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x148154: 0xdba100b0  lqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x148154u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x148158: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x148158u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x14815c: 0xdba100c0  lqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x14815cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x148160: 0x4be2084b  vmaddw.xyzw $vf1, $vf1, $vf2w
    ctx->pc = 0x148160u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x148164: 0xfba10180  sqc2        $vf1, 0x180($sp)
    ctx->pc = 0x148164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x148168: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x148168u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x14816c: 0x8fa60254  lw          $a2, 0x254($sp)
    ctx->pc = 0x14816cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x148170: 0x8fa5025c  lw          $a1, 0x25C($sp)
    ctx->pc = 0x148170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
    // 0x148174: 0x3c42021  addu        $a0, $fp, $a0
    ctx->pc = 0x148174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x148178: 0x27a70150  addiu       $a3, $sp, 0x150
    ctx->pc = 0x148178u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x14817c: 0xc0527e8  jal         func_149FA0
    ctx->pc = 0x14817Cu;
    SET_GPR_U32(ctx, 31, 0x148184u);
    ctx->pc = 0x148180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14817Cu;
            // 0x148180: 0x27a801e0  addiu       $t0, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149FA0u;
    if (runtime->hasFunction(0x149FA0u)) {
        auto targetFn = runtime->lookupFunction(0x149FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148184u; }
        if (ctx->pc != 0x148184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00149FA0_0x149fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148184u; }
        if (ctx->pc != 0x148184u) { return; }
    }
    ctx->pc = 0x148184u;
    // 0x148184: 0x0  nop
    ctx->pc = 0x148184u;
    // NOP
label_148188:
    // 0x148188: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x148188u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14818c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14818cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x148190: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x148190u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x148194: 0x1620ffd6  bnez        $s1, . + 4 + (-0x2A << 2)
    ctx->pc = 0x148194u;
    {
        const bool branch_taken_0x148194 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x148198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148194u;
            // 0x148198: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x148194) {
            ctx->pc = 0x1480F0u;
            runtime->cooperativeGuestYield();
            goto label_1480f0;
        }
    }
    ctx->pc = 0x14819Cu;
label_14819c:
    // 0x14819c: 0x4600ad06  mov.s       $f20, $f21
    ctx->pc = 0x14819cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[21]);
    // 0x1481a0: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x1481a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1481a4:
    // 0x1481a4: 0x86860000  lh          $a2, 0x0($s4)
    ctx->pc = 0x1481a4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1481a8: 0x27b30240  addiu       $s3, $sp, 0x240
    ctx->pc = 0x1481a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x1481ac: 0x87a20040  lh          $v0, 0x40($sp)
    ctx->pc = 0x1481acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1481b0: 0x440db000  mfc1        $t5, $f22
    ctx->pc = 0x1481b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
    // 0x1481b4: 0x48ad1000  qmtc2.ni    $t5, $vf2
    ctx->pc = 0x1481b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 13));
    // 0x1481b8: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x1481b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1481bc: 0x86870002  lh          $a3, 0x2($s4)
    ctx->pc = 0x1481bcu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x1481c0: 0x86880004  lh          $t0, 0x4($s4)
    ctx->pc = 0x1481c0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1481c4: 0x86860006  lh          $a2, 0x6($s4)
    ctx->pc = 0x1481c4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x1481c8: 0x87a30042  lh          $v1, 0x42($sp)
    ctx->pc = 0x1481c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 66)));
    // 0x1481cc: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1481ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1481d0: 0x87a40044  lh          $a0, 0x44($sp)
    ctx->pc = 0x1481d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1481d4: 0x87a50046  lh          $a1, 0x46($sp)
    ctx->pc = 0x1481d4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 70)));
    // 0x1481d8: 0x671818  mult        $v1, $v1, $a3
    ctx->pc = 0x1481d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1481dc: 0x882018  mult        $a0, $a0, $t0
    ctx->pc = 0x1481dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1481e0: 0xa7a20210  sh          $v0, 0x210($sp)
    ctx->pc = 0x1481e0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 528), (uint16_t)GPR_U32(ctx, 2));
    // 0x1481e4: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x1481e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1481e8: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x1481e8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x1481ec: 0x42203  sra         $a0, $a0, 8
    ctx->pc = 0x1481ecu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 8));
    // 0x1481f0: 0xa7a30212  sh          $v1, 0x212($sp)
    ctx->pc = 0x1481f0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 530), (uint16_t)GPR_U32(ctx, 3));
    // 0x1481f4: 0x52a03  sra         $a1, $a1, 8
    ctx->pc = 0x1481f4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 8));
    // 0x1481f8: 0xa7a40214  sh          $a0, 0x214($sp)
    ctx->pc = 0x1481f8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 532), (uint16_t)GPR_U32(ctx, 4));
    // 0x1481fc: 0xa7a50216  sh          $a1, 0x216($sp)
    ctx->pc = 0x1481fcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 534), (uint16_t)GPR_U32(ctx, 5));
    // 0x148200: 0x6ba20217  ldl         $v0, 0x217($sp)
    ctx->pc = 0x148200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 535); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x148204: 0x6fa20210  ldr         $v0, 0x210($sp)
    ctx->pc = 0x148204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 528); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x148208: 0xb3a20207  sdl         $v0, 0x207($sp)
    ctx->pc = 0x148208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 519); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14820c: 0xb7a20200  sdr         $v0, 0x200($sp)
    ctx->pc = 0x14820cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 512); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x148210: 0xdba10240  lqc2        $vf1, 0x240($sp)
    ctx->pc = 0x148210u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x148214: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x148214u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x148218: 0x1240002e  beqz        $s2, . + 4 + (0x2E << 2)
    ctx->pc = 0x148218u;
    {
        const bool branch_taken_0x148218 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x14821Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148218u;
            // 0x14821c: 0xfba10240  sqc2        $vf1, 0x240($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 576), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148218) {
            ctx->pc = 0x1482D4u;
            goto label_1482d4;
        }
    }
    ctx->pc = 0x148220u;
    // 0x148220: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x148220u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148224: 0x0  nop
    ctx->pc = 0x148224u;
    // NOP
label_148228:
    // 0x148228: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x148228u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x14822c: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x14822cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x148230: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x148230u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x148234: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x148234u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x148238: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x148238u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x14823c: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x14823cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x148240: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x148240u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x148244: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x148244u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x148248: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x148248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x14824c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x14824cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x148250: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x148250u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x148254: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x148254u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x148258: 0xa4202b  sltu        $a0, $a1, $a0
    ctx->pc = 0x148258u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x14825c: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x14825Cu;
    {
        const bool branch_taken_0x14825c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x148260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14825Cu;
            // 0x148260: 0x29403  sra         $s2, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14825c) {
            ctx->pc = 0x1482C0u;
            goto label_1482c0;
        }
    }
    ctx->pc = 0x148264u;
    // 0x148264: 0x4406a000  mfc1        $a2, $f20
    ctx->pc = 0x148264u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x148268: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x148268u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x14826c: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x14826cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x148270: 0x4b020040  vaddx.x     $vf1, $vf0, $vf2x
    ctx->pc = 0x148270u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x148274: 0xfa610000  sqc2        $vf1, 0x0($s3)
    ctx->pc = 0x148274u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x148278: 0xdba20240  lqc2        $vf2, 0x240($sp)
    ctx->pc = 0x148278u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x14827c: 0xdba10090  lqc2        $vf1, 0x90($sp)
    ctx->pc = 0x14827cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x148280: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x148280u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x148284: 0xdba100a0  lqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x148284u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x148288: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x148288u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x14828c: 0xdba100b0  lqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x14828cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x148290: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x148290u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x148294: 0xdba100c0  lqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x148294u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x148298: 0x4be2084b  vmaddw.xyzw $vf1, $vf1, $vf2w
    ctx->pc = 0x148298u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x14829c: 0xfba10180  sqc2        $vf1, 0x180($sp)
    ctx->pc = 0x14829cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1482a0: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1482a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1482a4: 0x8fa60254  lw          $a2, 0x254($sp)
    ctx->pc = 0x1482a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x1482a8: 0x8fa5025c  lw          $a1, 0x25C($sp)
    ctx->pc = 0x1482a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
    // 0x1482ac: 0x3c42021  addu        $a0, $fp, $a0
    ctx->pc = 0x1482acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x1482b0: 0x27a70150  addiu       $a3, $sp, 0x150
    ctx->pc = 0x1482b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1482b4: 0xc0527e8  jal         func_149FA0
    ctx->pc = 0x1482B4u;
    SET_GPR_U32(ctx, 31, 0x1482BCu);
    ctx->pc = 0x1482B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1482B4u;
            // 0x1482b8: 0x27a80200  addiu       $t0, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149FA0u;
    if (runtime->hasFunction(0x149FA0u)) {
        auto targetFn = runtime->lookupFunction(0x149FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1482BCu; }
        if (ctx->pc != 0x1482BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00149FA0_0x149fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1482BCu; }
        if (ctx->pc != 0x1482BCu) { return; }
    }
    ctx->pc = 0x1482BCu;
    // 0x1482bc: 0x0  nop
    ctx->pc = 0x1482bcu;
    // NOP
label_1482c0:
    // 0x1482c0: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1482c0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1482c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1482c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1482c8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1482c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1482cc: 0x1620ffd6  bnez        $s1, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1482CCu;
    {
        const bool branch_taken_0x1482cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1482D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1482CCu;
            // 0x1482d0: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1482cc) {
            ctx->pc = 0x148228u;
            runtime->cooperativeGuestYield();
            goto label_148228;
        }
    }
    ctx->pc = 0x1482D4u;
label_1482d4:
    // 0x1482d4: 0x8fad0250  lw          $t5, 0x250($sp)
    ctx->pc = 0x1482d4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
label_1482d8:
    // 0x1482d8: 0x8da20018  lw          $v0, 0x18($t5)
    ctx->pc = 0x1482d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 24)));
    // 0x1482dc: 0x8da30014  lw          $v1, 0x14($t5)
    ctx->pc = 0x1482dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 20)));
    // 0x1482e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1482e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1482e4: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1482e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1482e8: 0x5440fe83  bnel        $v0, $zero, . + 4 + (-0x17D << 2)
    ctx->pc = 0x1482E8u;
    {
        const bool branch_taken_0x1482e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1482e8) {
            ctx->pc = 0x1482ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1482E8u;
            // 0x1482ec: 0x92120000  lbu         $s2, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x147CF8u;
            runtime->cooperativeGuestYield();
            goto label_147cf8;
        }
    }
    ctx->pc = 0x1482F0u;
label_1482f0:
    // 0x1482f0: 0x7bb00300  lq          $s0, 0x300($sp)
    ctx->pc = 0x1482f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x1482f4: 0x7bb102f0  lq          $s1, 0x2F0($sp)
    ctx->pc = 0x1482f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x1482f8: 0x7bb202e0  lq          $s2, 0x2E0($sp)
    ctx->pc = 0x1482f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x1482fc: 0x7bb302d0  lq          $s3, 0x2D0($sp)
    ctx->pc = 0x1482fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x148300: 0x7bb402c0  lq          $s4, 0x2C0($sp)
    ctx->pc = 0x148300u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x148304: 0x7bb502b0  lq          $s5, 0x2B0($sp)
    ctx->pc = 0x148304u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x148308: 0x7bb602a0  lq          $s6, 0x2A0($sp)
    ctx->pc = 0x148308u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x14830c: 0x7bb70290  lq          $s7, 0x290($sp)
    ctx->pc = 0x14830cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x148310: 0x7bbe0280  lq          $fp, 0x280($sp)
    ctx->pc = 0x148310u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x148314: 0xdfbf0270  ld          $ra, 0x270($sp)
    ctx->pc = 0x148314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x148318: 0xc7b70328  lwc1        $f23, 0x328($sp)
    ctx->pc = 0x148318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x14831c: 0xc7b60320  lwc1        $f22, 0x320($sp)
    ctx->pc = 0x14831cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x148320: 0xc7b50318  lwc1        $f21, 0x318($sp)
    ctx->pc = 0x148320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x148324: 0xc7b40310  lwc1        $f20, 0x310($sp)
    ctx->pc = 0x148324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x148328: 0x3e00008  jr          $ra
    ctx->pc = 0x148328u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14832Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148328u;
            // 0x14832c: 0x27bd0330  addiu       $sp, $sp, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x147CF8u: goto label_147cf8;
            case 0x147DB0u: goto label_147db0;
            case 0x147E00u: goto label_147e00;
            case 0x147E30u: goto label_147e30;
            case 0x147E60u: goto label_147e60;
            case 0x147E90u: goto label_147e90;
            case 0x147F50u: goto label_147f50;
            case 0x147F58u: goto label_147f58;
            case 0x147F5Cu: goto label_147f5c;
            case 0x147F60u: goto label_147f60;
            case 0x147F64u: goto label_147f64;
            case 0x1480F0u: goto label_1480f0;
            case 0x148188u: goto label_148188;
            case 0x14819Cu: goto label_14819c;
            case 0x1481A4u: goto label_1481a4;
            case 0x148228u: goto label_148228;
            case 0x1482C0u: goto label_1482c0;
            case 0x1482D4u: goto label_1482d4;
            case 0x1482D8u: goto label_1482d8;
            case 0x1482F0u: goto label_1482f0;
            case 0x148354u: goto label_148354;
            default: break;
        }
        return;
    }
    ctx->pc = 0x148330u;
    // 0x148330: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x148330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x148334: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x148334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x148338: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x148338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14833c: 0x2442f4e0  addiu       $v0, $v0, -0xB20
    ctx->pc = 0x14833cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964448));
    // 0x148340: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x148340u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x148344: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x148344u;
    {
        const bool branch_taken_0x148344 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x148348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148344u;
            // 0x148348: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148344) {
            ctx->pc = 0x148354u;
            goto label_148354;
        }
    }
    ctx->pc = 0x14834Cu;
    // 0x14834c: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x14834Cu;
    SET_GPR_U32(ctx, 31, 0x148354u);
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148354u; }
        if (ctx->pc != 0x148354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148354u; }
        if (ctx->pc != 0x148354u) { return; }
    }
    ctx->pc = 0x148354u;
label_148354:
    // 0x148354: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x148354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148358: 0x3e00008  jr          $ra
    ctx->pc = 0x148358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14835Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148358u;
            // 0x14835c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x147CF8u: goto label_147cf8;
            case 0x147DB0u: goto label_147db0;
            case 0x147E00u: goto label_147e00;
            case 0x147E30u: goto label_147e30;
            case 0x147E60u: goto label_147e60;
            case 0x147E90u: goto label_147e90;
            case 0x147F50u: goto label_147f50;
            case 0x147F58u: goto label_147f58;
            case 0x147F5Cu: goto label_147f5c;
            case 0x147F60u: goto label_147f60;
            case 0x147F64u: goto label_147f64;
            case 0x1480F0u: goto label_1480f0;
            case 0x148188u: goto label_148188;
            case 0x14819Cu: goto label_14819c;
            case 0x1481A4u: goto label_1481a4;
            case 0x148228u: goto label_148228;
            case 0x1482C0u: goto label_1482c0;
            case 0x1482D4u: goto label_1482d4;
            case 0x1482D8u: goto label_1482d8;
            case 0x1482F0u: goto label_1482f0;
            case 0x148354u: goto label_148354;
            default: break;
        }
        return;
    }
    ctx->pc = 0x148360u;
}
