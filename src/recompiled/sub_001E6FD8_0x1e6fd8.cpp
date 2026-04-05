#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E6FD8
// Address: 0x1e6fd8 - 0x1e7268
void sub_001E6FD8_0x1e6fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6FD8_0x1e6fd8");
#endif

    ctx->pc = 0x1e6fd8u;

    // 0x1e6fd8: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1e6fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x1e6fdc: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x1e6fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x1e6fe0: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x1e6fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x1e6fe4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1e6fe4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6fe8: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x1e6fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x1e6fec: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1e6fecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6ff0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e6ff0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6ff4: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x1e6ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x1e6ff8: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x1e6ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x1e6ffc: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x1e6ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x1e7000: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1e7000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1e7004: 0xc077988  jal         func_1DE620
    ctx->pc = 0x1E7004u;
    SET_GPR_U32(ctx, 31, 0x1E700Cu);
    ctx->pc = 0x1E7008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7004u;
            // 0x1e7008: 0xe7b400f0  swc1        $f20, 0xF0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DE620u;
    if (runtime->hasFunction(0x1DE620u)) {
        auto targetFn = runtime->lookupFunction(0x1DE620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E700Cu; }
        if (ctx->pc != 0x1E700Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DE620_0x1de620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E700Cu; }
        if (ctx->pc != 0x1E700Cu) { return; }
    }
    ctx->pc = 0x1E700Cu;
    // 0x1e700c: 0x267402e0  addiu       $s4, $s3, 0x2E0
    ctx->pc = 0x1e700cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 736));
    // 0x1e7010: 0x8e820030  lw          $v0, 0x30($s4)
    ctx->pc = 0x1e7010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x1e7014: 0x3c15ffff  lui         $s5, 0xFFFF
    ctx->pc = 0x1e7014u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65535 << 16));
    // 0x1e7018: 0x36b5e008  ori         $s5, $s5, 0xE008
    ctx->pc = 0x1e7018u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)57352);
    // 0x1e701c: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1e701cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e7020: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x1e7020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x1e7024: 0xae820030  sw          $v0, 0x30($s4)
    ctx->pc = 0x1e7024u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 2));
    // 0x1e7028: 0xfa6102e0  sqc2        $vf1, 0x2E0($s3)
    ctx->pc = 0x1e7028u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 736), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e702c: 0xfa810010  sqc2        $vf1, 0x10($s4)
    ctx->pc = 0x1e702cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e7030: 0xfa810020  sqc2        $vf1, 0x20($s4)
    ctx->pc = 0x1e7030u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e7034: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1e7034u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1e7038: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1e7038u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e703c: 0xfa810020  sqc2        $vf1, 0x20($s4)
    ctx->pc = 0x1e703cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e7040: 0xae600340  sw          $zero, 0x340($s3)
    ctx->pc = 0x1e7040u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 832), GPR_U32(ctx, 0));
    // 0x1e7044: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1e7044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1e7048: 0xa262035c  sb          $v0, 0x35C($s3)
    ctx->pc = 0x1e7048u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 860), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e704c: 0xe67402c4  swc1        $f20, 0x2C4($s3)
    ctx->pc = 0x1e704cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 708), bits); }
    // 0x1e7050: 0xe67402c0  swc1        $f20, 0x2C0($s3)
    ctx->pc = 0x1e7050u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 704), bits); }
    // 0x1e7054: 0xae710320  sw          $s1, 0x320($s3)
    ctx->pc = 0x1e7054u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 800), GPR_U32(ctx, 17));
    // 0x1e7058: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E7058u;
    {
        const bool branch_taken_0x1e7058 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E705Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7058u;
            // 0x1e705c: 0xae70033c  sw          $s0, 0x33C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 828), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7058) {
            ctx->pc = 0x1E7078u;
            goto label_1e7078;
        }
    }
    ctx->pc = 0x1E7060u;
    // 0x1e7060: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1e7060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1e7064: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e7064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7068: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1e7068u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1e706c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1e706cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1e7070: 0x40f809  jalr        $v0
    ctx->pc = 0x1E7070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E7078u);
        ctx->pc = 0x1E7074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7070u;
            // 0x1e7074: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E7078u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E7078u: goto label_1e7078;
            case 0x1E7210u: goto label_1e7210;
            case 0x1E7214u: goto label_1e7214;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E7078u; }
            if (ctx->pc != 0x1E7078u) { return; }
        }
        }
    }
    ctx->pc = 0x1E7078u;
label_1e7078:
    // 0x1e7078: 0xc07d8ba  jal         func_1F62E8
    ctx->pc = 0x1E7078u;
    SET_GPR_U32(ctx, 31, 0x1E7080u);
    ctx->pc = 0x1E707Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7078u;
            // 0x1e707c: 0x240400f0  addiu       $a0, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F62E8u;
    if (runtime->hasFunction(0x1F62E8u)) {
        auto targetFn = runtime->lookupFunction(0x1F62E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7080u; }
        if (ctx->pc != 0x1E7080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F62E8_0x1f62e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7080u; }
        if (ctx->pc != 0x1E7080u) { return; }
    }
    ctx->pc = 0x1E7080u;
    // 0x1e7080: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1e7080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e7084: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1e7084u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x1e7088: 0x8e640320  lw          $a0, 0x320($s3)
    ctx->pc = 0x1e7088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 800)));
    // 0x1e708c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1e708cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7090: 0x84710018  lh          $s1, 0x18($v1)
    ctx->pc = 0x1e7090u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1e7094: 0xc090aa6  jal         func_242A98
    ctx->pc = 0x1E7094u;
    SET_GPR_U32(ctx, 31, 0x1E709Cu);
    ctx->pc = 0x1E7098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7094u;
            // 0x1e7098: 0x2610d3f0  addiu       $s0, $s0, -0x2C10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A98u;
    if (runtime->hasFunction(0x242A98u)) {
        auto targetFn = runtime->lookupFunction(0x242A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E709Cu; }
        if (ctx->pc != 0x1E709Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a98_0x242d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E709Cu; }
        if (ctx->pc != 0x1E709Cu) { return; }
    }
    ctx->pc = 0x1E709Cu;
    // 0x1e709c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1e709cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e70a0: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x1e70a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1e70a4: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1e70a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e70a8: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1e70a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e70ac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e70acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e70b0: 0xc07dc1e  jal         func_1F7078
    ctx->pc = 0x1E70B0u;
    SET_GPR_U32(ctx, 31, 0x1E70B8u);
    ctx->pc = 0x1E70B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E70B0u;
            // 0x1e70b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F7078u;
    if (runtime->hasFunction(0x1F7078u)) {
        auto targetFn = runtime->lookupFunction(0x1F7078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E70B8u; }
        if (ctx->pc != 0x1E70B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F7078_0x1f7078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E70B8u; }
        if (ctx->pc != 0x1E70B8u) { return; }
    }
    ctx->pc = 0x1E70B8u;
    // 0x1e70b8: 0x8e830030  lw          $v1, 0x30($s4)
    ctx->pc = 0x1e70b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x1e70bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e70bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e70c0: 0xae600338  sw          $zero, 0x338($s3)
    ctx->pc = 0x1e70c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 824), GPR_U32(ctx, 0));
    // 0x1e70c4: 0x751824  and         $v1, $v1, $s5
    ctx->pc = 0x1e70c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 21));
    // 0x1e70c8: 0xae620328  sw          $v0, 0x328($s3)
    ctx->pc = 0x1e70c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 808), GPR_U32(ctx, 2));
    // 0x1e70cc: 0xae830030  sw          $v1, 0x30($s4)
    ctx->pc = 0x1e70ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 3));
    // 0x1e70d0: 0x9265035c  lbu         $a1, 0x35C($s3)
    ctx->pc = 0x1e70d0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 860)));
    // 0x1e70d4: 0xc079b96  jal         func_1E6E58
    ctx->pc = 0x1E70D4u;
    SET_GPR_U32(ctx, 31, 0x1E70DCu);
    ctx->pc = 0x1E70D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E70D4u;
            // 0x1e70d8: 0x30a50001  andi        $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6E58u;
    if (runtime->hasFunction(0x1E6E58u)) {
        auto targetFn = runtime->lookupFunction(0x1E6E58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E70DCu; }
        if (ctx->pc != 0x1E70DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6E58_0x1e6e58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E70DCu; }
        if (ctx->pc != 0x1E70DCu) { return; }
    }
    ctx->pc = 0x1E70DCu;
    // 0x1e70dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e70dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e70e0: 0xe6740348  swc1        $f20, 0x348($s3)
    ctx->pc = 0x1e70e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 840), bits); }
    // 0x1e70e4: 0xe674034c  swc1        $f20, 0x34C($s3)
    ctx->pc = 0x1e70e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 844), bits); }
    // 0x1e70e8: 0x24040210  addiu       $a0, $zero, 0x210
    ctx->pc = 0x1e70e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    // 0x1e70ec: 0xa6620344  sh          $v0, 0x344($s3)
    ctx->pc = 0x1e70ecu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 836), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e70f0: 0xc0806ac  jal         func_201AB0
    ctx->pc = 0x1E70F0u;
    SET_GPR_U32(ctx, 31, 0x1E70F8u);
    ctx->pc = 0x1E70F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E70F0u;
            // 0x1e70f4: 0xa6620346  sh          $v0, 0x346($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 838), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201AB0u;
    if (runtime->hasFunction(0x201AB0u)) {
        auto targetFn = runtime->lookupFunction(0x201AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E70F8u; }
        if (ctx->pc != 0x1E70F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00201AB0_0x201ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E70F8u; }
        if (ctx->pc != 0x1E70F8u) { return; }
    }
    ctx->pc = 0x1E70F8u;
    // 0x1e70f8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e70f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e70fc: 0xc0808ae  jal         func_2022B8
    ctx->pc = 0x1E70FCu;
    SET_GPR_U32(ctx, 31, 0x1E7104u);
    ctx->pc = 0x1E7100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E70FCu;
            // 0x1e7100: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2022B8u;
    if (runtime->hasFunction(0x2022B8u)) {
        auto targetFn = runtime->lookupFunction(0x2022B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7104u; }
        if (ctx->pc != 0x1E7104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002022B8_0x2022b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7104u; }
        if (ctx->pc != 0x1E7104u) { return; }
    }
    ctx->pc = 0x1E7104u;
    // 0x1e7104: 0x8e630320  lw          $v1, 0x320($s3)
    ctx->pc = 0x1e7104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 800)));
    // 0x1e7108: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e7108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e710c: 0xae620324  sw          $v0, 0x324($s3)
    ctx->pc = 0x1e710cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 804), GPR_U32(ctx, 2));
    // 0x1e7110: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1e7110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1e7114: 0xc08220c  jal         func_208830
    ctx->pc = 0x1E7114u;
    SET_GPR_U32(ctx, 31, 0x1E711Cu);
    ctx->pc = 0x1E7118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7114u;
            // 0x1e7118: 0x8c450240  lw          $a1, 0x240($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 576)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208830u;
    if (runtime->hasFunction(0x208830u)) {
        auto targetFn = runtime->lookupFunction(0x208830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E711Cu; }
        if (ctx->pc != 0x1E711Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00208830_0x208830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E711Cu; }
        if (ctx->pc != 0x1E711Cu) { return; }
    }
    ctx->pc = 0x1E711Cu;
    // 0x1e711c: 0xae600330  sw          $zero, 0x330($s3)
    ctx->pc = 0x1e711cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 816), GPR_U32(ctx, 0));
    // 0x1e7120: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e7120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7124: 0xae600334  sw          $zero, 0x334($s3)
    ctx->pc = 0x1e7124u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 820), GPR_U32(ctx, 0));
    // 0x1e7128: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1e7128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e712c: 0x78670020  lq          $a3, 0x20($v1)
    ctx->pc = 0x1e712cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1e7130: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1e7130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1e7134: 0x7fa70000  sq          $a3, 0x0($sp)
    ctx->pc = 0x1e7134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 7));
    // 0x1e7138: 0x78660010  lq          $a2, 0x10($v1)
    ctx->pc = 0x1e7138u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1e713c: 0x7fa60010  sq          $a2, 0x10($sp)
    ctx->pc = 0x1e713cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
    // 0x1e7140: 0x78650020  lq          $a1, 0x20($v1)
    ctx->pc = 0x1e7140u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1e7144: 0x7fa50020  sq          $a1, 0x20($sp)
    ctx->pc = 0x1e7144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 5));
    // 0x1e7148: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x1e7148u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1e714c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1e714cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x1e7150: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x1e7150u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1e7154: 0x7e660020  sq          $a2, 0x20($s3)
    ctx->pc = 0x1e7154u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), GPR_VEC(ctx, 6));
    // 0x1e7158: 0x7e670010  sq          $a3, 0x10($s3)
    ctx->pc = 0x1e7158u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 7));
    // 0x1e715c: 0x7e650030  sq          $a1, 0x30($s3)
    ctx->pc = 0x1e715cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 48), GPR_VEC(ctx, 5));
    // 0x1e7160: 0x7e620040  sq          $v0, 0x40($s3)
    ctx->pc = 0x1e7160u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 64), GPR_VEC(ctx, 2));
    // 0x1e7164: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1e7164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x1e7168: 0x7fa60050  sq          $a2, 0x50($sp)
    ctx->pc = 0x1e7168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 6));
    // 0x1e716c: 0x7fa50060  sq          $a1, 0x60($sp)
    ctx->pc = 0x1e716cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 5));
    // 0x1e7170: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x1e7170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x1e7174: 0xc0799d8  jal         func_1E6760
    ctx->pc = 0x1E7174u;
    SET_GPR_U32(ctx, 31, 0x1E717Cu);
    ctx->pc = 0x1E7178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7174u;
            // 0x1e7178: 0x7fa70040  sq          $a3, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6760u;
    if (runtime->hasFunction(0x1E6760u)) {
        auto targetFn = runtime->lookupFunction(0x1E6760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E717Cu; }
        if (ctx->pc != 0x1E717Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6760_0x1e6760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E717Cu; }
        if (ctx->pc != 0x1E717Cu) { return; }
    }
    ctx->pc = 0x1E717Cu;
    // 0x1e717c: 0xae600290  sw          $zero, 0x290($s3)
    ctx->pc = 0x1e717cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 656), GPR_U32(ctx, 0));
    // 0x1e7180: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e7180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e7184: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1e7184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1e7188: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x1e7188u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1e718c: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x1e718cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1e7190: 0x40f809  jalr        $v0
    ctx->pc = 0x1E7190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E7198u);
        ctx->pc = 0x1E7194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7190u;
            // 0x1e7194: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E7198u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E7078u: goto label_1e7078;
            case 0x1E7210u: goto label_1e7210;
            case 0x1E7214u: goto label_1e7214;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E7198u; }
            if (ctx->pc != 0x1E7198u) { return; }
        }
        }
    }
    ctx->pc = 0x1E7198u;
    // 0x1e7198: 0xc07fcd0  jal         func_1FF340
    ctx->pc = 0x1E7198u;
    SET_GPR_U32(ctx, 31, 0x1E71A0u);
    ctx->pc = 0x1E719Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7198u;
            // 0x1e719c: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF340u;
    if (runtime->hasFunction(0x1FF340u)) {
        auto targetFn = runtime->lookupFunction(0x1FF340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E71A0u; }
        if (ctx->pc != 0x1E71A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FF340_0x1ff340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E71A0u; }
        if (ctx->pc != 0x1E71A0u) { return; }
    }
    ctx->pc = 0x1E71A0u;
    // 0x1e71a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e71a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e71a4: 0xc07fd00  jal         func_1FF400
    ctx->pc = 0x1E71A4u;
    SET_GPR_U32(ctx, 31, 0x1E71ACu);
    ctx->pc = 0x1E71A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E71A4u;
            // 0x1e71a8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF400u;
    if (runtime->hasFunction(0x1FF400u)) {
        auto targetFn = runtime->lookupFunction(0x1FF400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E71ACu; }
        if (ctx->pc != 0x1E71ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1ff400_0x1ff448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E71ACu; }
        if (ctx->pc != 0x1E71ACu) { return; }
    }
    ctx->pc = 0x1E71ACu;
    // 0x1e71ac: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1e71acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e71b0: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x1e71b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
    // 0x1e71b4: 0xae62032c  sw          $v0, 0x32C($s3)
    ctx->pc = 0x1e71b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 812), GPR_U32(ctx, 2));
    // 0x1e71b8: 0x3c04fdff  lui         $a0, 0xFDFF
    ctx->pc = 0x1e71b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65023 << 16));
    // 0x1e71bc: 0x8ca300f4  lw          $v1, 0xF4($a1)
    ctx->pc = 0x1e71bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 244)));
    // 0x1e71c0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1e71c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1e71c4: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x1e71c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x1e71c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e71c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e71cc: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1e71ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1e71d0: 0xaca300f4  sw          $v1, 0xF4($a1)
    ctx->pc = 0x1e71d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 244), GPR_U32(ctx, 3));
    // 0x1e71d4: 0xe6600288  swc1        $f0, 0x288($s3)
    ctx->pc = 0x1e71d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 648), bits); }
    // 0x1e71d8: 0x8e620174  lw          $v0, 0x174($s3)
    ctx->pc = 0x1e71d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 372)));
    // 0x1e71dc: 0xe660028c  swc1        $f0, 0x28C($s3)
    ctx->pc = 0x1e71dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 652), bits); }
    // 0x1e71e0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1e71e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1e71e4: 0xae620174  sw          $v0, 0x174($s3)
    ctx->pc = 0x1e71e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 372), GPR_U32(ctx, 2));
    // 0x1e71e8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1e71e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1e71ec: 0x8c42ec94  lw          $v0, -0x136C($v0)
    ctx->pc = 0x1e71ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962324)));
    // 0x1e71f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e71f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e71f4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1e71f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1e71f8: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x1e71f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1e71fc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E71FCu;
    {
        const bool branch_taken_0x1e71fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E71FCu;
            // 0x1e7200: 0x2482ffec  addiu       $v0, $a0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e71fc) {
            ctx->pc = 0x1E7210u;
            goto label_1e7210;
        }
    }
    ctx->pc = 0x1E7204u;
    // 0x1e7204: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e7204u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7208: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E7208u;
    {
        const bool branch_taken_0x1e7208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E720Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7208u;
            // 0x1e720c: 0x44800b  movn        $s0, $v0, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7208) {
            ctx->pc = 0x1E7214u;
            goto label_1e7214;
        }
    }
    ctx->pc = 0x1E7210u;
label_1e7210:
    // 0x1e7210: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e7210u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e7214:
    // 0x1e7214: 0x8e620174  lw          $v0, 0x174($s3)
    ctx->pc = 0x1e7214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 372)));
    // 0x1e7218: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1e7218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1e721c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1e721cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e7220: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e7220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e7224: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1e7224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1e7228: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e722c: 0xc055a72  jal         func_1569C8
    ctx->pc = 0x1E722Cu;
    SET_GPR_U32(ctx, 31, 0x1E7234u);
    ctx->pc = 0x1E7230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E722Cu;
            // 0x1e7230: 0xc2280a  movz        $a1, $a2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1569C8u;
    if (runtime->hasFunction(0x1569C8u)) {
        auto targetFn = runtime->lookupFunction(0x1569C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7234u; }
        if (ctx->pc != 0x1E7234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001569C8_0x1569c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7234u; }
        if (ctx->pc != 0x1E7234u) { return; }
    }
    ctx->pc = 0x1E7234u;
    // 0x1e7234: 0xc055a8c  jal         func_156A30
    ctx->pc = 0x1E7234u;
    SET_GPR_U32(ctx, 31, 0x1E723Cu);
    ctx->pc = 0x1E7238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7234u;
            // 0x1e7238: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156A30u;
    if (runtime->hasFunction(0x156A30u)) {
        auto targetFn = runtime->lookupFunction(0x156A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E723Cu; }
        if (ctx->pc != 0x1E723Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156A30_0x156a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E723Cu; }
        if (ctx->pc != 0x1E723Cu) { return; }
    }
    ctx->pc = 0x1E723Cu;
    // 0x1e723c: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x1e723cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1e7240: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x1e7240u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1e7244: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x1e7244u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e7248: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x1e7248u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e724c: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x1e724cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e7250: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x1e7250u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e7254: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1e7254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e7258: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x1e7258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e725c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E725Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E725Cu;
            // 0x1e7260: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E7078u: goto label_1e7078;
            case 0x1E7210u: goto label_1e7210;
            case 0x1E7214u: goto label_1e7214;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E7264u;
    // 0x1e7264: 0x0  nop
    ctx->pc = 0x1e7264u;
    // NOP
}
