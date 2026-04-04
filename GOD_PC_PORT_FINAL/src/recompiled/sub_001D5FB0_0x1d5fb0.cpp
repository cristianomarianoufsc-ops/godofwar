#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D5FB0
// Address: 0x1d5fb0 - 0x1d6130
void sub_001D5FB0_0x1d5fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5FB0_0x1d5fb0");
#endif

    ctx->pc = 0x1d5fb0u;

    // 0x1d5fb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d5fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d5fb4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d5fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d5fb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d5fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d5fbc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d5fbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5fc0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d5fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d5fc4: 0x8c44cd58  lw          $a0, -0x32A8($v0)
    ctx->pc = 0x1d5fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x1d5fc8: 0x10800053  beqz        $a0, . + 4 + (0x53 << 2)
    ctx->pc = 0x1D5FC8u;
    {
        const bool branch_taken_0x1d5fc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5FC8u;
            // 0x1d5fcc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5fc8) {
            ctx->pc = 0x1D6118u;
            goto label_1d6118;
        }
    }
    ctx->pc = 0x1D5FD0u;
    // 0x1d5fd0: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x1d5fd0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d5fd4: 0x1200004e  beqz        $s0, . + 4 + (0x4E << 2)
    ctx->pc = 0x1D5FD4u;
    {
        const bool branch_taken_0x1d5fd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5fd4) {
            ctx->pc = 0x1D6110u;
            goto label_1d6110;
        }
    }
    ctx->pc = 0x1D5FDCu;
    // 0x1d5fdc: 0x8e020240  lw          $v0, 0x240($s0)
    ctx->pc = 0x1d5fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 576)));
    // 0x1d5fe0: 0x5622000b  bnel        $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D5FE0u;
    {
        const bool branch_taken_0x1d5fe0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d5fe0) {
            ctx->pc = 0x1D5FE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5FE0u;
            // 0x1d5fe4: 0x8e020244  lw          $v0, 0x244($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 580)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D6010u;
            goto label_1d6010;
        }
    }
    ctx->pc = 0x1D5FE8u;
    // 0x1d5fe8: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1d5fe8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d5fec: 0xae000234  sw          $zero, 0x234($s0)
    ctx->pc = 0x1d5fecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 564), GPR_U32(ctx, 0));
    // 0x1d5ff0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d5ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ff4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d5ff4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ff8: 0xae000240  sw          $zero, 0x240($s0)
    ctx->pc = 0x1d5ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 0));
    // 0x1d5ffc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6000: 0xc090aa2  jal         func_242A88
    ctx->pc = 0x1D6000u;
    SET_GPR_U32(ctx, 31, 0x1D6008u);
    ctx->pc = 0x1D6004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6000u;
            // 0x1d6004: 0xfa010210  sqc2        $vf1, 0x210($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 528), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A88u;
    if (runtime->hasFunction(0x242A88u)) {
        auto targetFn = runtime->lookupFunction(0x242A88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6008u; }
        if (ctx->pc != 0x1D6008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a88_0x242a98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6008u; }
        if (ctx->pc != 0x1D6008u) { return; }
    }
    ctx->pc = 0x1D6008u;
    // 0x1d6008: 0x8e020244  lw          $v0, 0x244($s0)
    ctx->pc = 0x1d6008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 580)));
    // 0x1d600c: 0x0  nop
    ctx->pc = 0x1d600cu;
    // NOP
label_1d6010:
    // 0x1d6010: 0x56220007  bnel        $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D6010u;
    {
        const bool branch_taken_0x1d6010 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d6010) {
            ctx->pc = 0x1D6014u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6010u;
            // 0x1d6014: 0x8e020248  lw          $v0, 0x248($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 584)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D6030u;
            goto label_1d6030;
        }
    }
    ctx->pc = 0x1D6018u;
    // 0x1d6018: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1d6018u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d601c: 0xae000238  sw          $zero, 0x238($s0)
    ctx->pc = 0x1d601cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 0));
    // 0x1d6020: 0xfa010220  sqc2        $vf1, 0x220($s0)
    ctx->pc = 0x1d6020u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 544), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d6024: 0xae000244  sw          $zero, 0x244($s0)
    ctx->pc = 0x1d6024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 580), GPR_U32(ctx, 0));
    // 0x1d6028: 0x8e020248  lw          $v0, 0x248($s0)
    ctx->pc = 0x1d6028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 584)));
    // 0x1d602c: 0x0  nop
    ctx->pc = 0x1d602cu;
    // NOP
label_1d6030:
    // 0x1d6030: 0x56220007  bnel        $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D6030u;
    {
        const bool branch_taken_0x1d6030 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d6030) {
            ctx->pc = 0x1D6034u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6030u;
            // 0x1d6034: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D6050u;
            goto label_1d6050;
        }
    }
    ctx->pc = 0x1D6038u;
    // 0x1d6038: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1d6038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1d603c: 0xae00023c  sw          $zero, 0x23C($s0)
    ctx->pc = 0x1d603cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 572), GPR_U32(ctx, 0));
    // 0x1d6040: 0xc44069fc  lwc1        $f0, 0x69FC($v0)
    ctx->pc = 0x1d6040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 27132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d6044: 0xae000248  sw          $zero, 0x248($s0)
    ctx->pc = 0x1d6044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 584), GPR_U32(ctx, 0));
    // 0x1d6048: 0xe6000230  swc1        $f0, 0x230($s0)
    ctx->pc = 0x1d6048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 560), bits); }
    // 0x1d604c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1d604cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1d6050:
    // 0x1d6050: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1d6050u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1d6054: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1d6054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1d6058: 0x40f809  jalr        $v0
    ctx->pc = 0x1D6058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D6060u);
        ctx->pc = 0x1D605Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6058u;
            // 0x1d605c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D6060u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D6010u: goto label_1d6010;
            case 0x1D6030u: goto label_1d6030;
            case 0x1D6050u: goto label_1d6050;
            case 0x1D60A0u: goto label_1d60a0;
            case 0x1D60A4u: goto label_1d60a4;
            case 0x1D6110u: goto label_1d6110;
            case 0x1D6118u: goto label_1d6118;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D6060u; }
            if (ctx->pc != 0x1D6060u) { return; }
        }
        }
    }
    ctx->pc = 0x1D6060u;
    // 0x1d6060: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d6060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6064: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x1D6064u;
    {
        const bool branch_taken_0x1d6064 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6064u;
            // 0x1d6068: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6064) {
            ctx->pc = 0x1D60A0u;
            goto label_1d60a0;
        }
    }
    ctx->pc = 0x1D606Cu;
    // 0x1d606c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1d606cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d6070: 0x8c43e84c  lw          $v1, -0x17B4($v0)
    ctx->pc = 0x1d6070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x1d6074: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1d6074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1d6078: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1d6078u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1d607c: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1d607cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1d6080: 0x40f809  jalr        $v0
    ctx->pc = 0x1D6080u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D6088u);
        ctx->pc = 0x1D6084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6080u;
            // 0x1d6084: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D6088u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D6010u: goto label_1d6010;
            case 0x1D6030u: goto label_1d6030;
            case 0x1D6050u: goto label_1d6050;
            case 0x1D60A0u: goto label_1d60a0;
            case 0x1D60A4u: goto label_1d60a4;
            case 0x1D6110u: goto label_1d6110;
            case 0x1D6118u: goto label_1d6118;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D6088u; }
            if (ctx->pc != 0x1D6088u) { return; }
        }
        }
    }
    ctx->pc = 0x1D6088u;
    // 0x1d6088: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x1d6088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1d608c: 0x54510005  bnel        $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D608Cu;
    {
        const bool branch_taken_0x1d608c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1d608c) {
            ctx->pc = 0x1D6090u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D608Cu;
            // 0x1d6090: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D60A4u;
            goto label_1d60a4;
        }
    }
    ctx->pc = 0x1D6094u;
    // 0x1d6094: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6098: 0xc07110c  jal         func_1C4430
    ctx->pc = 0x1D6098u;
    SET_GPR_U32(ctx, 31, 0x1D60A0u);
    ctx->pc = 0x1D609Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6098u;
            // 0x1d609c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C4430u;
    if (runtime->hasFunction(0x1C4430u)) {
        auto targetFn = runtime->lookupFunction(0x1C4430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D60A0u; }
        if (ctx->pc != 0x1D60A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C4430_0x1c4430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D60A0u; }
        if (ctx->pc != 0x1D60A0u) { return; }
    }
    ctx->pc = 0x1D60A0u;
label_1d60a0:
    // 0x1d60a0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1d60a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1d60a4:
    // 0x1d60a4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x1d60a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1d60a8: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x1d60a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1d60ac: 0x40f809  jalr        $v0
    ctx->pc = 0x1D60ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D60B4u);
        ctx->pc = 0x1D60B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D60ACu;
            // 0x1d60b0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D60B4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D6010u: goto label_1d6010;
            case 0x1D6030u: goto label_1d6030;
            case 0x1D6050u: goto label_1d6050;
            case 0x1D60A0u: goto label_1d60a0;
            case 0x1D60A4u: goto label_1d60a4;
            case 0x1D6110u: goto label_1d6110;
            case 0x1D6118u: goto label_1d6118;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D60B4u; }
            if (ctx->pc != 0x1D60B4u) { return; }
        }
        }
    }
    ctx->pc = 0x1D60B4u;
    // 0x1d60b4: 0x8c4200cc  lw          $v0, 0xCC($v0)
    ctx->pc = 0x1d60b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
    // 0x1d60b8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D60B8u;
    {
        const bool branch_taken_0x1d60b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d60b8) {
            ctx->pc = 0x1D6110u;
            goto label_1d6110;
        }
    }
    ctx->pc = 0x1D60C0u;
    // 0x1d60c0: 0xc04f870  jal         func_13E1C0
    ctx->pc = 0x1D60C0u;
    SET_GPR_U32(ctx, 31, 0x1D60C8u);
    ctx->pc = 0x1D60C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D60C0u;
            // 0x1d60c4: 0x8c440038  lw          $a0, 0x38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E1C0u;
    if (runtime->hasFunction(0x13E1C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D60C8u; }
        if (ctx->pc != 0x1D60C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e1c0_0x13e1f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D60C8u; }
        if (ctx->pc != 0x1D60C8u) { return; }
    }
    ctx->pc = 0x1D60C8u;
    // 0x1d60c8: 0x8e230074  lw          $v1, 0x74($s1)
    ctx->pc = 0x1d60c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x1d60cc: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D60CCu;
    {
        const bool branch_taken_0x1d60cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d60cc) {
            ctx->pc = 0x1D6110u;
            goto label_1d6110;
        }
    }
    ctx->pc = 0x1D60D4u;
    // 0x1d60d4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1d60d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d60d8: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1d60d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1d60dc: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1d60dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1d60e0: 0x40f809  jalr        $v0
    ctx->pc = 0x1D60E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D60E8u);
        ctx->pc = 0x1D60E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D60E0u;
            // 0x1d60e4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D60E8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D6010u: goto label_1d6010;
            case 0x1D6030u: goto label_1d6030;
            case 0x1D6050u: goto label_1d6050;
            case 0x1D60A0u: goto label_1d60a0;
            case 0x1D60A4u: goto label_1d60a4;
            case 0x1D6110u: goto label_1d6110;
            case 0x1D6118u: goto label_1d6118;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D60E8u; }
            if (ctx->pc != 0x1D60E8u) { return; }
        }
        }
    }
    ctx->pc = 0x1D60E8u;
    // 0x1d60e8: 0xc08235e  jal         func_208D78
    ctx->pc = 0x1D60E8u;
    SET_GPR_U32(ctx, 31, 0x1D60F0u);
    ctx->pc = 0x1D60ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D60E8u;
            // 0x1d60ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208D78u;
    if (runtime->hasFunction(0x208D78u)) {
        auto targetFn = runtime->lookupFunction(0x208D78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D60F0u; }
        if (ctx->pc != 0x1D60F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00208D78_0x208d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D60F0u; }
        if (ctx->pc != 0x1D60F0u) { return; }
    }
    ctx->pc = 0x1D60F0u;
    // 0x1d60f0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1d60f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d60f4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x1d60f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1d60f8: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x1d60f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1d60fc: 0x40f809  jalr        $v0
    ctx->pc = 0x1D60FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D6104u);
        ctx->pc = 0x1D6100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D60FCu;
            // 0x1d6100: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D6104u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D6010u: goto label_1d6010;
            case 0x1D6030u: goto label_1d6030;
            case 0x1D6050u: goto label_1d6050;
            case 0x1D60A0u: goto label_1d60a0;
            case 0x1D60A4u: goto label_1d60a4;
            case 0x1D6110u: goto label_1d6110;
            case 0x1D6118u: goto label_1d6118;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D6104u; }
            if (ctx->pc != 0x1D6104u) { return; }
        }
        }
    }
    ctx->pc = 0x1D6104u;
    // 0x1d6104: 0xc07dca4  jal         func_1F7290
    ctx->pc = 0x1D6104u;
    SET_GPR_U32(ctx, 31, 0x1D610Cu);
    ctx->pc = 0x1D6108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6104u;
            // 0x1d6108: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F7290u;
    if (runtime->hasFunction(0x1F7290u)) {
        auto targetFn = runtime->lookupFunction(0x1F7290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D610Cu; }
        if (ctx->pc != 0x1D610Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F7290_0x1f7290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D610Cu; }
        if (ctx->pc != 0x1D610Cu) { return; }
    }
    ctx->pc = 0x1D610Cu;
    // 0x1d610c: 0x0  nop
    ctx->pc = 0x1d610cu;
    // NOP
label_1d6110:
    // 0x1d6110: 0xc067cf6  jal         func_19F3D8
    ctx->pc = 0x1D6110u;
    SET_GPR_U32(ctx, 31, 0x1D6118u);
    ctx->pc = 0x19F3D8u;
    if (runtime->hasFunction(0x19F3D8u)) {
        auto targetFn = runtime->lookupFunction(0x19F3D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6118u; }
        if (ctx->pc != 0x1D6118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F3D8_0x19f3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6118u; }
        if (ctx->pc != 0x1D6118u) { return; }
    }
    ctx->pc = 0x1D6118u;
label_1d6118:
    // 0x1d6118: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d6118u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d611c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d611cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6120: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6124: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6124u;
            // 0x1d6128: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D6010u: goto label_1d6010;
            case 0x1D6030u: goto label_1d6030;
            case 0x1D6050u: goto label_1d6050;
            case 0x1D60A0u: goto label_1d60a0;
            case 0x1D60A4u: goto label_1d60a4;
            case 0x1D6110u: goto label_1d6110;
            case 0x1D6118u: goto label_1d6118;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D612Cu;
    // 0x1d612c: 0x0  nop
    ctx->pc = 0x1d612cu;
    // NOP
}
