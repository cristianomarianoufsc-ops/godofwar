#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D5108
// Address: 0x1d5108 - 0x1d5308
void sub_001D5108_0x1d5108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5108_0x1d5108");
#endif

    ctx->pc = 0x1d5108u;

    // 0x1d5108: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d5108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d510c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1d510cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1d5110: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1d5110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1d5114: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d5114u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5118: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d5118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d511c: 0xc05f9ae  jal         func_17E6B8
    ctx->pc = 0x1D511Cu;
    SET_GPR_U32(ctx, 31, 0x1D5124u);
    ctx->pc = 0x1D5120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D511Cu;
            // 0x1d5120: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E6B8u;
    if (runtime->hasFunction(0x17E6B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E6B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5124u; }
        if (ctx->pc != 0x1D5124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e6b8_0x17e6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5124u; }
        if (ctx->pc != 0x1D5124u) { return; }
    }
    ctx->pc = 0x1D5124u;
    // 0x1d5124: 0x4be00053  vmaxw.xyzw  $vf1, $vf0, $vf0w
    ctx->pc = 0x1d5124u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d5128: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1d5128u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d512c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d512cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d5130: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d5130u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5134: 0x3c0140b0  lui         $at, 0x40B0
    ctx->pc = 0x1d5134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16560 << 16));
    // 0x1d5138: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d5138u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d513c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1d513cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1d5140: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1d5140u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d5144: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1d5144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1d5148: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1d5148u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1d514c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1d514cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1d5150: 0xe601003c  swc1        $f1, 0x3C($s0)
    ctx->pc = 0x1d5150u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x1d5154: 0xe6020040  swc1        $f2, 0x40($s0)
    ctx->pc = 0x1d5154u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x1d5158: 0xe6030044  swc1        $f3, 0x44($s0)
    ctx->pc = 0x1d5158u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x1d515c: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1d515cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x1d5160: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x1d5160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x1d5164: 0x3c043f19  lui         $a0, 0x3F19
    ctx->pc = 0x1d5164u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16153 << 16));
    // 0x1d5168: 0x3484999a  ori         $a0, $a0, 0x999A
    ctx->pc = 0x1d5168u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39322);
    // 0x1d516c: 0x3c053f00  lui         $a1, 0x3F00
    ctx->pc = 0x1d516cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16128 << 16));
    // 0x1d5170: 0x70851b89  pcpyld      $v1, $a0, $a1
    ctx->pc = 0x1d5170u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1d5174: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1d5174u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1d5178: 0x3c053f40  lui         $a1, 0x3F40
    ctx->pc = 0x1d5178u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16192 << 16));
    // 0x1d517c: 0x70851389  pcpyld      $v0, $a0, $a1
    ctx->pc = 0x1d517cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1d5180: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1d5180u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1d5184: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x1d5184u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    // 0x1d5188: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1d5188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1d518c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1d518cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1d5190: 0xfa010010  sqc2        $vf1, 0x10($s0)
    ctx->pc = 0x1d5190u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d5194: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d5194u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d5198: 0x24a56788  addiu       $a1, $a1, 0x6788
    ctx->pc = 0x1d5198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26504));
    // 0x1d519c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d519cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d51a0: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D51A0u;
    SET_GPR_U32(ctx, 31, 0x1D51A8u);
    ctx->pc = 0x1D51A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D51A0u;
            // 0x1d51a4: 0x26060030  addiu       $a2, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D51A8u; }
        if (ctx->pc != 0x1D51A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D51A8u; }
        if (ctx->pc != 0x1D51A8u) { return; }
    }
    ctx->pc = 0x1D51A8u;
    // 0x1d51a8: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d51a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d51ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d51acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d51b0: 0x24a56798  addiu       $a1, $a1, 0x6798
    ctx->pc = 0x1d51b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26520));
    // 0x1d51b4: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D51B4u;
    SET_GPR_U32(ctx, 31, 0x1D51BCu);
    ctx->pc = 0x1D51B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D51B4u;
            // 0x1d51b8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D51BCu; }
        if (ctx->pc != 0x1D51BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D51BCu; }
        if (ctx->pc != 0x1D51BCu) { return; }
    }
    ctx->pc = 0x1D51BCu;
    // 0x1d51bc: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d51bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d51c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d51c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d51c4: 0x24a567a8  addiu       $a1, $a1, 0x67A8
    ctx->pc = 0x1d51c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26536));
    // 0x1d51c8: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D51C8u;
    SET_GPR_U32(ctx, 31, 0x1D51D0u);
    ctx->pc = 0x1D51CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D51C8u;
            // 0x1d51cc: 0x26060004  addiu       $a2, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D51D0u; }
        if (ctx->pc != 0x1D51D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D51D0u; }
        if (ctx->pc != 0x1D51D0u) { return; }
    }
    ctx->pc = 0x1D51D0u;
    // 0x1d51d0: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d51d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d51d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d51d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d51d8: 0x24a567b8  addiu       $a1, $a1, 0x67B8
    ctx->pc = 0x1d51d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26552));
    // 0x1d51dc: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D51DCu;
    SET_GPR_U32(ctx, 31, 0x1D51E4u);
    ctx->pc = 0x1D51E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D51DCu;
            // 0x1d51e0: 0x26060008  addiu       $a2, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D51E4u; }
        if (ctx->pc != 0x1D51E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D51E4u; }
        if (ctx->pc != 0x1D51E4u) { return; }
    }
    ctx->pc = 0x1D51E4u;
    // 0x1d51e4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d51e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d51e8: 0x2606000c  addiu       $a2, $s0, 0xC
    ctx->pc = 0x1d51e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1d51ec: 0x24a567c8  addiu       $a1, $a1, 0x67C8
    ctx->pc = 0x1d51ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26568));
    // 0x1d51f0: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D51F0u;
    SET_GPR_U32(ctx, 31, 0x1D51F8u);
    ctx->pc = 0x1D51F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D51F0u;
            // 0x1d51f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D51F8u; }
        if (ctx->pc != 0x1D51F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D51F8u; }
        if (ctx->pc != 0x1D51F8u) { return; }
    }
    ctx->pc = 0x1D51F8u;
    // 0x1d51f8: 0xc05f94a  jal         func_17E528
    ctx->pc = 0x1D51F8u;
    SET_GPR_U32(ctx, 31, 0x1D5200u);
    ctx->pc = 0x1D51FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D51F8u;
            // 0x1d51fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E528u;
    if (runtime->hasFunction(0x17E528u)) {
        auto targetFn = runtime->lookupFunction(0x17E528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5200u; }
        if (ctx->pc != 0x1D5200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e528_0x17e530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5200u; }
        if (ctx->pc != 0x1D5200u) { return; }
    }
    ctx->pc = 0x1D5200u;
    // 0x1d5200: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d5200u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d5204: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d5204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5208: 0x24a567d8  addiu       $a1, $a1, 0x67D8
    ctx->pc = 0x1d5208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26584));
    // 0x1d520c: 0xc05f82a  jal         func_17E0A8
    ctx->pc = 0x1D520Cu;
    SET_GPR_U32(ctx, 31, 0x1D5214u);
    ctx->pc = 0x1D5210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D520Cu;
            // 0x1d5210: 0x26060034  addiu       $a2, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0A8u;
    if (runtime->hasFunction(0x17E0A8u)) {
        auto targetFn = runtime->lookupFunction(0x17E0A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5214u; }
        if (ctx->pc != 0x1D5214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E0A8_0x17e0a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5214u; }
        if (ctx->pc != 0x1D5214u) { return; }
    }
    ctx->pc = 0x1D5214u;
    // 0x1d5214: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d5214u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d5218: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d5218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d521c: 0x24a567e8  addiu       $a1, $a1, 0x67E8
    ctx->pc = 0x1d521cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26600));
    // 0x1d5220: 0xc05f82a  jal         func_17E0A8
    ctx->pc = 0x1D5220u;
    SET_GPR_U32(ctx, 31, 0x1D5228u);
    ctx->pc = 0x1D5224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5220u;
            // 0x1d5224: 0x26060038  addiu       $a2, $s0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0A8u;
    if (runtime->hasFunction(0x17E0A8u)) {
        auto targetFn = runtime->lookupFunction(0x17E0A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5228u; }
        if (ctx->pc != 0x1D5228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E0A8_0x17e0a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5228u; }
        if (ctx->pc != 0x1D5228u) { return; }
    }
    ctx->pc = 0x1D5228u;
    // 0x1d5228: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d5228u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d522c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d522cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5230: 0x24a56808  addiu       $a1, $a1, 0x6808
    ctx->pc = 0x1d5230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26632));
    // 0x1d5234: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D5234u;
    SET_GPR_U32(ctx, 31, 0x1D523Cu);
    ctx->pc = 0x1D5238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5234u;
            // 0x1d5238: 0x2606003c  addiu       $a2, $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D523Cu; }
        if (ctx->pc != 0x1D523Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D523Cu; }
        if (ctx->pc != 0x1D523Cu) { return; }
    }
    ctx->pc = 0x1D523Cu;
    // 0x1d523c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d523cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d5240: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d5240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5244: 0x24a56820  addiu       $a1, $a1, 0x6820
    ctx->pc = 0x1d5244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26656));
    // 0x1d5248: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D5248u;
    SET_GPR_U32(ctx, 31, 0x1D5250u);
    ctx->pc = 0x1D524Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5248u;
            // 0x1d524c: 0x26060040  addiu       $a2, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5250u; }
        if (ctx->pc != 0x1D5250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5250u; }
        if (ctx->pc != 0x1D5250u) { return; }
    }
    ctx->pc = 0x1D5250u;
    // 0x1d5250: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d5250u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d5254: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d5254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5258: 0x24a56838  addiu       $a1, $a1, 0x6838
    ctx->pc = 0x1d5258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26680));
    // 0x1d525c: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D525Cu;
    SET_GPR_U32(ctx, 31, 0x1D5264u);
    ctx->pc = 0x1D5260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D525Cu;
            // 0x1d5260: 0x26060044  addiu       $a2, $s0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5264u; }
        if (ctx->pc != 0x1D5264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5264u; }
        if (ctx->pc != 0x1D5264u) { return; }
    }
    ctx->pc = 0x1D5264u;
    // 0x1d5264: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d5264u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d5268: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d5268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d526c: 0x24a56850  addiu       $a1, $a1, 0x6850
    ctx->pc = 0x1d526cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26704));
    // 0x1d5270: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D5270u;
    SET_GPR_U32(ctx, 31, 0x1D5278u);
    ctx->pc = 0x1D5274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5270u;
            // 0x1d5274: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5278u; }
        if (ctx->pc != 0x1D5278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5278u; }
        if (ctx->pc != 0x1D5278u) { return; }
    }
    ctx->pc = 0x1D5278u;
    // 0x1d5278: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d5278u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d527c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d527cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5280: 0x24a56860  addiu       $a1, $a1, 0x6860
    ctx->pc = 0x1d5280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26720));
    // 0x1d5284: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D5284u;
    SET_GPR_U32(ctx, 31, 0x1D528Cu);
    ctx->pc = 0x1D5288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5284u;
            // 0x1d5288: 0x26060024  addiu       $a2, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D528Cu; }
        if (ctx->pc != 0x1D528Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D528Cu; }
        if (ctx->pc != 0x1D528Cu) { return; }
    }
    ctx->pc = 0x1D528Cu;
    // 0x1d528c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d528cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d5290: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d5290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5294: 0x24a56870  addiu       $a1, $a1, 0x6870
    ctx->pc = 0x1d5294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26736));
    // 0x1d5298: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D5298u;
    SET_GPR_U32(ctx, 31, 0x1D52A0u);
    ctx->pc = 0x1D529Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5298u;
            // 0x1d529c: 0x26060028  addiu       $a2, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D52A0u; }
        if (ctx->pc != 0x1D52A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D52A0u; }
        if (ctx->pc != 0x1D52A0u) { return; }
    }
    ctx->pc = 0x1D52A0u;
    // 0x1d52a0: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d52a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d52a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d52a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52a8: 0x24a56880  addiu       $a1, $a1, 0x6880
    ctx->pc = 0x1d52a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26752));
    // 0x1d52ac: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D52ACu;
    SET_GPR_U32(ctx, 31, 0x1D52B4u);
    ctx->pc = 0x1D52B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D52ACu;
            // 0x1d52b0: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D52B4u; }
        if (ctx->pc != 0x1D52B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D52B4u; }
        if (ctx->pc != 0x1D52B4u) { return; }
    }
    ctx->pc = 0x1D52B4u;
    // 0x1d52b4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d52b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d52b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d52b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52bc: 0x24a56898  addiu       $a1, $a1, 0x6898
    ctx->pc = 0x1d52bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26776));
    // 0x1d52c0: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D52C0u;
    SET_GPR_U32(ctx, 31, 0x1D52C8u);
    ctx->pc = 0x1D52C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D52C0u;
            // 0x1d52c4: 0x26060014  addiu       $a2, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D52C8u; }
        if (ctx->pc != 0x1D52C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D52C8u; }
        if (ctx->pc != 0x1D52C8u) { return; }
    }
    ctx->pc = 0x1D52C8u;
    // 0x1d52c8: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d52c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d52cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d52ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52d0: 0x24a568b0  addiu       $a1, $a1, 0x68B0
    ctx->pc = 0x1d52d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26800));
    // 0x1d52d4: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D52D4u;
    SET_GPR_U32(ctx, 31, 0x1D52DCu);
    ctx->pc = 0x1D52D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D52D4u;
            // 0x1d52d8: 0x26060018  addiu       $a2, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D52DCu; }
        if (ctx->pc != 0x1D52DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D52DCu; }
        if (ctx->pc != 0x1D52DCu) { return; }
    }
    ctx->pc = 0x1D52DCu;
    // 0x1d52dc: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d52dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d52e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d52e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52e4: 0x2606001c  addiu       $a2, $s0, 0x1C
    ctx->pc = 0x1d52e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x1d52e8: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D52E8u;
    SET_GPR_U32(ctx, 31, 0x1D52F0u);
    ctx->pc = 0x1D52ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D52E8u;
            // 0x1d52ec: 0x24a568c8  addiu       $a1, $a1, 0x68C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26824));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D52F0u; }
        if (ctx->pc != 0x1D52F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D52F0u; }
        if (ctx->pc != 0x1D52F0u) { return; }
    }
    ctx->pc = 0x1D52F0u;
    // 0x1d52f0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1d52f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d52f4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1d52f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d52f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d52f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d52fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D52FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D52FCu;
            // 0x1d5300: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D5304u;
    // 0x1d5304: 0x0  nop
    ctx->pc = 0x1d5304u;
    // NOP
}
