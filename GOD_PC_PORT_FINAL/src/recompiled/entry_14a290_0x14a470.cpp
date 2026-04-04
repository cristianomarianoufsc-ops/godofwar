#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_14a290
// Address: 0x14a290 - 0x14a470
void entry_14a290_0x14a470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_14a290_0x14a470");
#endif

    ctx->pc = 0x14a290u;

    // 0x14a290: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x14a290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x14a294: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x14a294u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
    // 0x14a298: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x14a298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x14a29c: 0x24c6bc60  addiu       $a2, $a2, -0x43A0
    ctx->pc = 0x14a29cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949984));
    // 0x14a2a0: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x14a2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x14a2a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x14a2a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a2a8: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x14a2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x14a2ac: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x14a2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x14a2b0: 0xc0540d0  jal         func_150340
    ctx->pc = 0x14A2B0u;
    SET_GPR_U32(ctx, 31, 0x14A2B8u);
    ctx->pc = 0x14A2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A2B0u;
            // 0x14a2b4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x150340u;
    if (runtime->hasFunction(0x150340u)) {
        auto targetFn = runtime->lookupFunction(0x150340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A2B8u; }
        if (ctx->pc != 0x14A2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00150340_0x150340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A2B8u; }
        if (ctx->pc != 0x14A2B8u) { return; }
    }
    ctx->pc = 0x14A2B8u;
    // 0x14a2b8: 0xc04f824  jal         func_13E090
    ctx->pc = 0x14A2B8u;
    SET_GPR_U32(ctx, 31, 0x14A2C0u);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A2C0u; }
        if (ctx->pc != 0x14A2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A2C0u; }
        if (ctx->pc != 0x14A2C0u) { return; }
    }
    ctx->pc = 0x14A2C0u;
    // 0x14a2c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14a2c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a2c4: 0x24050d40  addiu       $a1, $zero, 0xD40
    ctx->pc = 0x14a2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3392));
    // 0x14a2c8: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x14A2C8u;
    SET_GPR_U32(ctx, 31, 0x14A2D0u);
    ctx->pc = 0x14A2CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A2C8u;
            // 0x14a2cc: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A2D0u; }
        if (ctx->pc != 0x14A2D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A2D0u; }
        if (ctx->pc != 0x14A2D0u) { return; }
    }
    ctx->pc = 0x14A2D0u;
    // 0x14a2d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14a2d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a2d4: 0x4be2033c  vmove.xyzw  $vf2, $vf0
    ctx->pc = 0x14a2d4u;
    ctx->vu0_vf[2] = ctx->vu0_vf[0];
    // 0x14a2d8: 0x4be3133d  vmr32.xyzw  $vf3, $vf2
    ctx->pc = 0x14a2d8u;
    ctx->vu0_vf[3] = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,1));
    // 0x14a2dc: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x14a2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x14a2e0: 0x4be11b3d  vmr32.xyzw  $vf1, $vf3
    ctx->pc = 0x14a2e0u;
    ctx->vu0_vf[1] = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,1));
    // 0x14a2e4: 0xfba30010  sqc2        $vf3, 0x10($sp)
    ctx->pc = 0x14a2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x14a2e8: 0x4be40b3d  vmr32.xyzw  $vf4, $vf1
    ctx->pc = 0x14a2e8u;
    ctx->vu0_vf[4] = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,1));
    // 0x14a2ec: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x14a2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x14a2f0: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x14a2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x14a2f4: 0x26220040  addiu       $v0, $s1, 0x40
    ctx->pc = 0x14a2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x14a2f8: 0xfa240000  sqc2        $vf4, 0x0($s1)
    ctx->pc = 0x14a2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x14a2fc: 0xfa210010  sqc2        $vf1, 0x10($s1)
    ctx->pc = 0x14a2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x14a300: 0xfa230020  sqc2        $vf3, 0x20($s1)
    ctx->pc = 0x14a300u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x14a304: 0xfa220030  sqc2        $vf2, 0x30($s1)
    ctx->pc = 0x14a304u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x14a308: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x14a308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x14a30c: 0xfba30050  sqc2        $vf3, 0x50($sp)
    ctx->pc = 0x14a30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x14a310: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x14a310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x14a314: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x14a314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x14a318: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x14a318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x14a31c: 0xfa240040  sqc2        $vf4, 0x40($s1)
    ctx->pc = 0x14a31cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x14a320: 0xf8420030  sqc2        $vf2, 0x30($v0)
    ctx->pc = 0x14a320u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x14a324: 0xf8410010  sqc2        $vf1, 0x10($v0)
    ctx->pc = 0x14a324u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x14a328: 0xf8430020  sqc2        $vf3, 0x20($v0)
    ctx->pc = 0x14a328u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x14a32c: 0xfba20080  sqc2        $vf2, 0x80($sp)
    ctx->pc = 0x14a32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x14a330: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x14a330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14a334: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x14a334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14a338: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x14a338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14a33c: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x14a33cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x14a340: 0xfba30090  sqc2        $vf3, 0x90($sp)
    ctx->pc = 0x14a340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x14a344: 0x262200c0  addiu       $v0, $s1, 0xC0
    ctx->pc = 0x14a344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x14a348: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x14a348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x14a34c: 0x3c08002c  lui         $t0, 0x2C
    ctx->pc = 0x14a34cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)44 << 16));
    // 0x14a350: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x14a350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x14a354: 0xfa240080  sqc2        $vf4, 0x80($s1)
    ctx->pc = 0x14a354u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x14a358: 0xf8820030  sqc2        $vf2, 0x30($a0)
    ctx->pc = 0x14a358u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x14a35c: 0xf8810010  sqc2        $vf1, 0x10($a0)
    ctx->pc = 0x14a35cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x14a360: 0xf8830020  sqc2        $vf3, 0x20($a0)
    ctx->pc = 0x14a360u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x14a364: 0xa4430002  sh          $v1, 0x2($v0)
    ctx->pc = 0x14a364u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x14a368: 0xa4430006  sh          $v1, 0x6($v0)
    ctx->pc = 0x14a368u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x14a36c: 0xa4430004  sh          $v1, 0x4($v0)
    ctx->pc = 0x14a36cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x14a370: 0xa62300c0  sh          $v1, 0xC0($s1)
    ctx->pc = 0x14a370u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 192), (uint16_t)GPR_U32(ctx, 3));
    // 0x14a374: 0xae300cd0  sw          $s0, 0xCD0($s1)
    ctx->pc = 0x14a374u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3280), GPR_U32(ctx, 16));
    // 0x14a378: 0xae250d0c  sw          $a1, 0xD0C($s1)
    ctx->pc = 0x14a378u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3340), GPR_U32(ctx, 5));
    // 0x14a37c: 0xae200cd4  sw          $zero, 0xCD4($s1)
    ctx->pc = 0x14a37cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3284), GPR_U32(ctx, 0));
    // 0x14a380: 0xae200cd8  sw          $zero, 0xCD8($s1)
    ctx->pc = 0x14a380u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3288), GPR_U32(ctx, 0));
    // 0x14a384: 0xae200cdc  sw          $zero, 0xCDC($s1)
    ctx->pc = 0x14a384u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3292), GPR_U32(ctx, 0));
    // 0x14a388: 0xae200ce0  sw          $zero, 0xCE0($s1)
    ctx->pc = 0x14a388u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3296), GPR_U32(ctx, 0));
    // 0x14a38c: 0xae200ce4  sw          $zero, 0xCE4($s1)
    ctx->pc = 0x14a38cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3300), GPR_U32(ctx, 0));
    // 0x14a390: 0xae200ce8  sw          $zero, 0xCE8($s1)
    ctx->pc = 0x14a390u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3304), GPR_U32(ctx, 0));
    // 0x14a394: 0xae200cec  sw          $zero, 0xCEC($s1)
    ctx->pc = 0x14a394u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3308), GPR_U32(ctx, 0));
    // 0x14a398: 0xae200cf0  sw          $zero, 0xCF0($s1)
    ctx->pc = 0x14a398u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3312), GPR_U32(ctx, 0));
    // 0x14a39c: 0xae200cf4  sw          $zero, 0xCF4($s1)
    ctx->pc = 0x14a39cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3316), GPR_U32(ctx, 0));
    // 0x14a3a0: 0xae200cf8  sw          $zero, 0xCF8($s1)
    ctx->pc = 0x14a3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3320), GPR_U32(ctx, 0));
    // 0x14a3a4: 0xae200cfc  sw          $zero, 0xCFC($s1)
    ctx->pc = 0x14a3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3324), GPR_U32(ctx, 0));
    // 0x14a3a8: 0xae200d00  sw          $zero, 0xD00($s1)
    ctx->pc = 0x14a3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3328), GPR_U32(ctx, 0));
    // 0x14a3ac: 0xae250d04  sw          $a1, 0xD04($s1)
    ctx->pc = 0x14a3acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3332), GPR_U32(ctx, 5));
    // 0x14a3b0: 0xae200d08  sw          $zero, 0xD08($s1)
    ctx->pc = 0x14a3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3336), GPR_U32(ctx, 0));
    // 0x14a3b4: 0xae200d10  sw          $zero, 0xD10($s1)
    ctx->pc = 0x14a3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3344), GPR_U32(ctx, 0));
    // 0x14a3b8: 0xae200d14  sw          $zero, 0xD14($s1)
    ctx->pc = 0x14a3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3348), GPR_U32(ctx, 0));
    // 0x14a3bc: 0xae200d18  sw          $zero, 0xD18($s1)
    ctx->pc = 0x14a3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3352), GPR_U32(ctx, 0));
    // 0x14a3c0: 0xae200d1c  sw          $zero, 0xD1C($s1)
    ctx->pc = 0x14a3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3356), GPR_U32(ctx, 0));
    // 0x14a3c4: 0xae200d20  sw          $zero, 0xD20($s1)
    ctx->pc = 0x14a3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3360), GPR_U32(ctx, 0));
    // 0x14a3c8: 0xae200d24  sw          $zero, 0xD24($s1)
    ctx->pc = 0x14a3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3364), GPR_U32(ctx, 0));
    // 0x14a3cc: 0xae200d30  sw          $zero, 0xD30($s1)
    ctx->pc = 0x14a3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3376), GPR_U32(ctx, 0));
    // 0x14a3d0: 0xae260d34  sw          $a2, 0xD34($s1)
    ctx->pc = 0x14a3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3380), GPR_U32(ctx, 6));
    // 0x14a3d4: 0xae5100e0  sw          $s1, 0xE0($s2)
    ctx->pc = 0x14a3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 17));
    // 0x14a3d8: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x14a3d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14a3dc: 0x8d027908  lw          $v0, 0x7908($t0)
    ctx->pc = 0x14a3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 30984)));
    // 0x14a3e0: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x14a3e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14a3e4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14A3E4u;
    {
        const bool branch_taken_0x14a3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A3E4u;
            // 0x14a3e8: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a3e4) {
            ctx->pc = 0x14A400u;
            goto label_14a400;
        }
    }
    ctx->pc = 0x14A3ECu;
    // 0x14a3ec: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x14a3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x14a3f0: 0xdc823628  ld          $v0, 0x3628($a0)
    ctx->pc = 0x14a3f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 13864)));
    // 0x14a3f4: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x14a3f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x14a3f8: 0xfc823628  sd          $v0, 0x3628($a0)
    ctx->pc = 0x14a3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 13864), GPR_U64(ctx, 2));
    // 0x14a3fc: 0x0  nop
    ctx->pc = 0x14a3fcu;
    // NOP
label_14a400:
    // 0x14a400: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x14a400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x14a404: 0x7203c  dsll32      $a0, $a3, 0
    ctx->pc = 0x14a404u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 0));
    // 0x14a408: 0xdc423628  ld          $v0, 0x3628($v0)
    ctx->pc = 0x14a408u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 13864)));
    // 0x14a40c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x14a40cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x14a410: 0xad077908  sw          $a3, 0x7908($t0)
    ctx->pc = 0x14a410u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 30984), GPR_U32(ctx, 7));
    // 0x14a414: 0x2405024a  addiu       $a1, $zero, 0x24A
    ctx->pc = 0x14a414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 586));
    // 0x14a418: 0xc0a0fc6  jal         func_283F18
    ctx->pc = 0x14A418u;
    SET_GPR_U32(ctx, 31, 0x14A420u);
    ctx->pc = 0x14A41Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A418u;
            // 0x14a41c: 0x44202d  daddu       $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283F18u;
    if (runtime->hasFunction(0x283F18u)) {
        auto targetFn = runtime->lookupFunction(0x283F18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A420u; }
        if (ctx->pc != 0x14A420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_283f18_0x2844e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A420u; }
        if (ctx->pc != 0x14A420u) { return; }
    }
    ctx->pc = 0x14A420u;
    // 0x14a420: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x14a420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x14a424: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x14a424u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x14a428: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x14a428u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a42c: 0xae220cf0  sw          $v0, 0xCF0($s1)
    ctx->pc = 0x14a42cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3312), GPR_U32(ctx, 2));
    // 0x14a430: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x14a430u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14a434: 0x0  nop
    ctx->pc = 0x14a434u;
    // NOP
label_14a438:
    // 0x14a438: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x14a438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x14a43c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14a43cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14a440: 0xac4000e4  sw          $zero, 0xE4($v0)
    ctx->pc = 0x14a440u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 228), GPR_U32(ctx, 0));
    // 0x14a444: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x14a444u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x14a448: 0x0  nop
    ctx->pc = 0x14a448u;
    // NOP
    // 0x14a44c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14A44Cu;
    {
        const bool branch_taken_0x14a44c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A44Cu;
            // 0x14a450: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a44c) {
            ctx->pc = 0x14A438u;
            runtime->cooperativeGuestYield();
            goto label_14a438;
        }
    }
    ctx->pc = 0x14A454u;
    // 0x14a454: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x14a454u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a458: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x14a458u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x14a45c: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x14a45cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x14a460: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x14a460u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x14a464: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x14a464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x14a468: 0x3e00008  jr          $ra
    ctx->pc = 0x14A468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A46Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A468u;
            // 0x14a46c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14A400u: goto label_14a400;
            case 0x14A438u: goto label_14a438;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14A470u;
}
