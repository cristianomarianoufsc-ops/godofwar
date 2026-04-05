#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00192FC0
// Address: 0x192fc0 - 0x1937c8
void sub_00192FC0_0x192fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192FC0_0x192fc0");
#endif

    ctx->pc = 0x192fc0u;

label_192fc0:
    // 0x192fc0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x192fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x192fc4: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x192fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x192fc8: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x192fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x192fcc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x192fccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192fd0: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x192fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x192fd4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x192fd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192fd8: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x192fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x192fdc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x192fdcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192fe0: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x192fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x192fe4: 0x3c14002a  lui         $s4, 0x2A
    ctx->pc = 0x192fe4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)42 << 16));
    // 0x192fe8: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x192fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x192fec: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x192fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x192ff0: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x192ff0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x192ff4: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x192ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x192ff8: 0x40f809  jalr        $v0
    ctx->pc = 0x192FF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x193000u);
        ctx->pc = 0x192FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192FF8u;
            // 0x192ffc: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x193000u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x192FC0u: goto label_192fc0;
            case 0x193028u: goto label_193028;
            case 0x193048u: goto label_193048;
            case 0x193064u: goto label_193064;
            case 0x193084u: goto label_193084;
            case 0x1930A0u: goto label_1930a0;
            case 0x193118u: goto label_193118;
            case 0x193148u: goto label_193148;
            case 0x193158u: goto label_193158;
            case 0x1931B8u: goto label_1931b8;
            case 0x193230u: goto label_193230;
            case 0x193268u: goto label_193268;
            case 0x193340u: goto label_193340;
            case 0x193430u: goto label_193430;
            case 0x193480u: goto label_193480;
            case 0x1934A8u: goto label_1934a8;
            case 0x193500u: goto label_193500;
            case 0x193504u: goto label_193504;
            case 0x193514u: goto label_193514;
            case 0x193520u: goto label_193520;
            case 0x193524u: goto label_193524;
            case 0x193534u: goto label_193534;
            case 0x1935A8u: goto label_1935a8;
            case 0x1935ACu: goto label_1935ac;
            case 0x193610u: goto label_193610;
            case 0x193624u: goto label_193624;
            case 0x193680u: goto label_193680;
            case 0x193684u: goto label_193684;
            case 0x193694u: goto label_193694;
            case 0x193698u: goto label_193698;
            case 0x1936F8u: goto label_1936f8;
            case 0x1936FCu: goto label_1936fc;
            case 0x193770u: goto label_193770;
            case 0x193778u: goto label_193778;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x193000u; }
            if (ctx->pc != 0x193000u) { return; }
        }
        }
    }
    ctx->pc = 0x193000u;
    // 0x193000: 0x8c450080  lw          $a1, 0x80($v0)
    ctx->pc = 0x193000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x193004: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x193004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x193008: 0x8e84d2ac  lw          $a0, -0x2D54($s4)
    ctx->pc = 0x193008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294955692)));
    // 0x19300c: 0x515c2  srl         $v0, $a1, 23
    ctx->pc = 0x19300cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x193010: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x193010u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x193014: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x193014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x193018: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x193018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x19301c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19301cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x193020: 0x50450001  beql        $v0, $a1, . + 4 + (0x1 << 2)
    ctx->pc = 0x193020u;
    {
        const bool branch_taken_0x193020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x193020) {
            ctx->pc = 0x193024u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x193020u;
            // 0x193024: 0x8c920004  lw          $s2, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x193028u;
            goto label_193028;
        }
    }
    ctx->pc = 0x193028u;
label_193028:
    // 0x193028: 0x12400142  beqz        $s2, . + 4 + (0x142 << 2)
    ctx->pc = 0x193028u;
    {
        const bool branch_taken_0x193028 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x19302Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193028u;
            // 0x19302c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193028) {
            ctx->pc = 0x193534u;
            goto label_193534;
        }
    }
    ctx->pc = 0x193030u;
    // 0x193030: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x193030u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x193034: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x193034u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x193038: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x193038u;
    {
        const bool branch_taken_0x193038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x19303Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193038u;
            // 0x19303c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193038) {
            ctx->pc = 0x193048u;
            goto label_193048;
        }
    }
    ctx->pc = 0x193040u;
    // 0x193040: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x193040u;
    {
        const bool branch_taken_0x193040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193040u;
            // 0x193044: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193040) {
            ctx->pc = 0x193064u;
            goto label_193064;
        }
    }
    ctx->pc = 0x193048u;
label_193048:
    // 0x193048: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x193048u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x19304c: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x19304cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x193050: 0x50650004  beql        $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x193050u;
    {
        const bool branch_taken_0x193050 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x193050) {
            ctx->pc = 0x193054u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x193050u;
            // 0x193054: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x193064u;
            goto label_193064;
        }
    }
    ctx->pc = 0x193058u;
    // 0x193058: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x193058u;
    SET_GPR_U32(ctx, 31, 0x193060u);
    ctx->pc = 0x19305Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193058u;
            // 0x19305c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193060u; }
        if (ctx->pc != 0x193060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193060u; }
        if (ctx->pc != 0x193060u) { return; }
    }
    ctx->pc = 0x193060u;
    // 0x193060: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x193060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_193064:
    // 0x193064: 0xc06149c  jal         func_185270
    ctx->pc = 0x193064u;
    SET_GPR_U32(ctx, 31, 0x19306Cu);
    ctx->pc = 0x193068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193064u;
            // 0x193068: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185270u;
    if (runtime->hasFunction(0x185270u)) {
        auto targetFn = runtime->lookupFunction(0x185270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19306Cu; }
        if (ctx->pc != 0x19306Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_185270_0x185318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19306Cu; }
        if (ctx->pc != 0x19306Cu) { return; }
    }
    ctx->pc = 0x19306Cu;
    // 0x19306c: 0x86430060  lh          $v1, 0x60($s2)
    ctx->pc = 0x19306cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x193070: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x193070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x193074: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x193074u;
    {
        const bool branch_taken_0x193074 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x193078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193074u;
            // 0x193078: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193074) {
            ctx->pc = 0x193084u;
            goto label_193084;
        }
    }
    ctx->pc = 0x19307Cu;
    // 0x19307c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19307Cu;
    {
        const bool branch_taken_0x19307c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19307Cu;
            // 0x193080: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19307c) {
            ctx->pc = 0x1930A0u;
            goto label_1930a0;
        }
    }
    ctx->pc = 0x193084u;
label_193084:
    // 0x193084: 0xde430068  ld          $v1, 0x68($s2)
    ctx->pc = 0x193084u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x193088: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x193088u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x19308c: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19308Cu;
    {
        const bool branch_taken_0x19308c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x193090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19308Cu;
            // 0x193090: 0x26440070  addiu       $a0, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19308c) {
            ctx->pc = 0x1930A0u;
            goto label_1930a0;
        }
    }
    ctx->pc = 0x193094u;
    // 0x193094: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x193094u;
    SET_GPR_U32(ctx, 31, 0x19309Cu);
    ctx->pc = 0x193098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193094u;
            // 0x193098: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19309Cu; }
        if (ctx->pc != 0x19309Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19309Cu; }
        if (ctx->pc != 0x19309Cu) { return; }
    }
    ctx->pc = 0x19309Cu;
    // 0x19309c: 0x26440070  addiu       $a0, $s2, 0x70
    ctx->pc = 0x19309cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_1930a0:
    // 0x1930a0: 0xd8810030  lqc2        $vf1, 0x30($a0)
    ctx->pc = 0x1930a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1930a4: 0xdba20030  lqc2        $vf2, 0x30($sp)
    ctx->pc = 0x1930a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1930a8: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1930a8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1930ac: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1930acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1930b0: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x1930b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1930b4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1930b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1930b8: 0x4be30b3c  vmove.xyzw  $vf3, $vf1
    ctx->pc = 0x1930b8u;
    ctx->vu0_vf[3] = ctx->vu0_vf[1];
    // 0x1930bc: 0x4a8200c0  vaddx.y     $vf3, $vf0, $vf2x
    ctx->pc = 0x1930bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1930c0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1930c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1930c4: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x1930c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1930c8: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x1930c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1930cc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1930ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1930d0: 0x0  nop
    ctx->pc = 0x1930d0u;
    // NOP
    // 0x1930d4: 0x4501010a  bc1t        . + 4 + (0x10A << 2)
    ctx->pc = 0x1930D4u;
    {
        const bool branch_taken_0x1930d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1930D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1930D4u;
            // 0x1930d8: 0xfba30070  sqc2        $vf3, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1930d4) {
            ctx->pc = 0x193500u;
            goto label_193500;
        }
    }
    ctx->pc = 0x1930DCu;
    // 0x1930dc: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x1930dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1930e0: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x1930e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1930e4: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1930e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1930e8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1930e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1930ec: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1930ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1930f0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1930f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1930f4: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1930f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1930f8: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1930f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1930fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1930fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193100: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x193100u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x193104: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x193104u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193108: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x193108u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19310c: 0x0  nop
    ctx->pc = 0x19310cu;
    // NOP
    // 0x193110: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x193110u;
    {
        const bool branch_taken_0x193110 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x193110) {
            ctx->pc = 0x193114u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x193110u;
            // 0x193114: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x193118u;
            goto label_193118;
        }
    }
    ctx->pc = 0x193118u;
label_193118:
    // 0x193118: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x193118u;
    {
        const bool branch_taken_0x193118 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19311Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193118u;
            // 0x19311c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193118) {
            ctx->pc = 0x193158u;
            goto label_193158;
        }
    }
    ctx->pc = 0x193120u;
    // 0x193120: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x193120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193124: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x193124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193128: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x193128u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19312c: 0x0  nop
    ctx->pc = 0x19312cu;
    // NOP
    // 0x193130: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x193130u;
    {
        const bool branch_taken_0x193130 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x193134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193130u;
            // 0x193134: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193130) {
            ctx->pc = 0x193148u;
            goto label_193148;
        }
    }
    ctx->pc = 0x193138u;
    // 0x193138: 0xc064ba8  jal         func_192EA0
    ctx->pc = 0x193138u;
    SET_GPR_U32(ctx, 31, 0x193140u);
    ctx->pc = 0x19313Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193138u;
            // 0x19313c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192EA0u;
    if (runtime->hasFunction(0x192EA0u)) {
        auto targetFn = runtime->lookupFunction(0x192EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193140u; }
        if (ctx->pc != 0x193140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192EA0_0x192ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193140u; }
        if (ctx->pc != 0x193140u) { return; }
    }
    ctx->pc = 0x193140u;
    // 0x193140: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x193140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x193144: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x193144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_193148:
    // 0x193148: 0xc441c658  lwc1        $f1, -0x39A8($v0)
    ctx->pc = 0x193148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19314c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x19314cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x193150: 0x100000f3  b           . + 4 + (0xF3 << 2)
    ctx->pc = 0x193150u;
    {
        const bool branch_taken_0x193150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193150u;
            // 0x193154: 0xe620001c  swc1        $f0, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x193150) {
            ctx->pc = 0x193520u;
            goto label_193520;
        }
    }
    ctx->pc = 0x193158u;
label_193158:
    // 0x193158: 0xc4620020  lwc1        $f2, 0x20($v1)
    ctx->pc = 0x193158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19315c: 0xc441c658  lwc1        $f1, -0x39A8($v0)
    ctx->pc = 0x19315cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193160: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x193160u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x193164: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x193164u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x193168: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x193168u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x19316c: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x19316cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x193170: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x193170u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193174: 0x46000004  c1          0x4
    ctx->pc = 0x193174u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x193178: 0x460110c2  mul.s       $f3, $f2, $f1
    ctx->pc = 0x193178u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x19317c: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x19317cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193180: 0x0  nop
    ctx->pc = 0x193180u;
    // NOP
    // 0x193184: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
    ctx->pc = 0x193184u;
    {
        const bool branch_taken_0x193184 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x193184) {
            ctx->pc = 0x193188u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x193184u;
            // 0x193188: 0xc4620024  lwc1        $f2, 0x24($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1931B8u;
            goto label_1931b8;
        }
    }
    ctx->pc = 0x19318Cu;
    // 0x19318c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x19318cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x193190: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x193190u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x193194: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x193194u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x193198: 0x4a0003bf  vwaitq
    ctx->pc = 0x193198u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x19319c: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x19319cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1931a0: 0x4a0002ff  vnop
    ctx->pc = 0x1931a0u;
    // NOP operation, no action needed for VU0
    // 0x1931a4: 0x4a0002ff  vnop
    ctx->pc = 0x1931a4u;
    // NOP operation, no action needed for VU0
    // 0x1931a8: 0x4be11b3c  vmove.xyzw  $vf1, $vf3
    ctx->pc = 0x1931a8u;
    ctx->vu0_vf[1] = ctx->vu0_vf[3];
    // 0x1931ac: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1931acu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1931b0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1931B0u;
    {
        const bool branch_taken_0x1931b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1931B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1931B0u;
            // 0x1931b4: 0xfba10040  sqc2        $vf1, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1931b0) {
            ctx->pc = 0x193230u;
            goto label_193230;
        }
    }
    ctx->pc = 0x1931B8u;
label_1931b8:
    // 0x1931b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1931b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1931bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1931bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1931c0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1931c0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1931c4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1931c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1931c8: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x1931c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1931cc: 0x4be21898  vmulx.xyzw  $vf2, $vf3, $vf2x
    ctx->pc = 0x1931ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1931d0: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x1931d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1931d4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1931d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1931d8: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x1931d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1931dc: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1931dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1931e0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1931e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1931e4: 0x48a41800  qmtc2.ni    $a0, $vf3
    ctx->pc = 0x1931e4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1931e8: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1931e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1931ec: 0x4be30858  vmulx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x1931ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1931f0: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1931f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1931f4: 0xfba20070  sqc2        $vf2, 0x70($sp)
    ctx->pc = 0x1931f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1931f8: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x1931f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1931fc: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1931fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x193200: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x193200u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x193204: 0x44051800  mfc1        $a1, $f3
    ctx->pc = 0x193204u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x193208: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x193208u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x19320c: 0x4a0003bf  vwaitq
    ctx->pc = 0x19320cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x193210: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x193210u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x193214: 0x4a0002ff  vnop
    ctx->pc = 0x193214u;
    // NOP operation, no action needed for VU0
    // 0x193218: 0x4a0002ff  vnop
    ctx->pc = 0x193218u;
    // NOP operation, no action needed for VU0
    // 0x19321c: 0x48a51800  qmtc2.ni    $a1, $vf3
    ctx->pc = 0x19321cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x193220: 0xfba20050  sqc2        $vf2, 0x50($sp)
    ctx->pc = 0x193220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x193224: 0xfa220000  sqc2        $vf2, 0x0($s1)
    ctx->pc = 0x193224u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x193228: 0x4be31098  vmulx.xyzw  $vf2, $vf2, $vf3x
    ctx->pc = 0x193228u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19322c: 0xfba20070  sqc2        $vf2, 0x70($sp)
    ctx->pc = 0x19322cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[2]));
label_193230:
    // 0x193230: 0xdba20070  lqc2        $vf2, 0x70($sp)
    ctx->pc = 0x193230u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x193234: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x193234u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x193238: 0xfba20070  sqc2        $vf2, 0x70($sp)
    ctx->pc = 0x193238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19323c: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x19323cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x193240: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x193240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x193244: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x193244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x193248: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x193248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19324c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19324Cu;
    {
        const bool branch_taken_0x19324c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x193250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19324Cu;
            // 0x193250: 0x3c040033  lui         $a0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19324c) {
            ctx->pc = 0x193268u;
            goto label_193268;
        }
    }
    ctx->pc = 0x193254u;
    // 0x193254: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x193254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x193258: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x193258u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x19325c: 0x4a810080  vaddx.y     $vf2, $vf0, $vf1x
    ctx->pc = 0x19325cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x193260: 0xfba20070  sqc2        $vf2, 0x70($sp)
    ctx->pc = 0x193260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x193264: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x193264u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
label_193268:
    // 0x193268: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x193268u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x19326c: 0x3c030431  lui         $v1, 0x431
    ctx->pc = 0x19326cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1073 << 16));
    // 0x193270: 0xdba30030  lqc2        $vf3, 0x30($sp)
    ctx->pc = 0x193270u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x193274: 0xdba10070  lqc2        $vf1, 0x70($sp)
    ctx->pc = 0x193274u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x193278: 0x2482f170  addiu       $v0, $a0, -0xE90
    ctx->pc = 0x193278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963568));
    // 0x19327c: 0xac85f170  sw          $a1, -0xE90($a0)
    ctx->pc = 0x19327cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294963568), GPR_U32(ctx, 5));
    // 0x193280: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x193280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x193284: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x193284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x193288: 0x4be118e8  vadd.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x193288u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x19328c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x19328cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x193290: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x193290u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x193294: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x193294u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x193298: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x193298u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x19329c: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x19329cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1932a0: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x1932a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x1932a4: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1932a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1932a8: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1932a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1932ac: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x1932acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x1932b0: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x1932b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x1932b4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1932b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1932b8: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1932b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1932bc: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x1932bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1932c0: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x1932c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1932c4: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x1932c4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x1932c8: 0x4be118ac  vsub.xyzw   $vf2, $vf3, $vf1
    ctx->pc = 0x1932c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1932cc: 0x8e44bcf8  lw          $a0, -0x4308($s2)
    ctx->pc = 0x1932ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950136)));
    // 0x1932d0: 0x48261000  qmfc2.ni    $a2, $vf2
    ctx->pc = 0x1932d0u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1932d4: 0x4be118a8  vadd.xyzw   $vf2, $vf3, $vf1
    ctx->pc = 0x1932d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1932d8: 0xc047864  jal         func_11E190
    ctx->pc = 0x1932D8u;
    SET_GPR_U32(ctx, 31, 0x1932E0u);
    ctx->pc = 0x1932DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1932D8u;
            // 0x1932dc: 0x48251000  qmfc2.ni    $a1, $vf2 (Delay Slot)
        SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1932E0u; }
        if (ctx->pc != 0x1932E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1932E0u; }
        if (ctx->pc != 0x1932E0u) { return; }
    }
    ctx->pc = 0x1932E0u;
    // 0x1932e0: 0x1040008c  beqz        $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x1932E0u;
    {
        const bool branch_taken_0x1932e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1932E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1932E0u;
            // 0x1932e4: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1932e0) {
            ctx->pc = 0x193514u;
            goto label_193514;
        }
    }
    ctx->pc = 0x1932E8u;
    // 0x1932e8: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x1932e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1932ec: 0x24427790  addiu       $v0, $v0, 0x7790
    ctx->pc = 0x1932ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30608));
    // 0x1932f0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1932f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1932f4: 0x700227c9  prot3w      $a0, $v0
    ctx->pc = 0x1932f4u;
    SET_GPR_VEC(ctx, 4, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1932f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1932f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1932fc: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x1932fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x193300: 0x846400b8  lh          $a0, 0xB8($v1)
    ctx->pc = 0x193300u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 184)));
    // 0x193304: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x193304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x193308: 0x40f809  jalr        $v0
    ctx->pc = 0x193308u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x193310u);
        ctx->pc = 0x19330Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193308u;
            // 0x19330c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x193310u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x192FC0u: goto label_192fc0;
            case 0x193028u: goto label_193028;
            case 0x193048u: goto label_193048;
            case 0x193064u: goto label_193064;
            case 0x193084u: goto label_193084;
            case 0x1930A0u: goto label_1930a0;
            case 0x193118u: goto label_193118;
            case 0x193148u: goto label_193148;
            case 0x193158u: goto label_193158;
            case 0x1931B8u: goto label_1931b8;
            case 0x193230u: goto label_193230;
            case 0x193268u: goto label_193268;
            case 0x193340u: goto label_193340;
            case 0x193430u: goto label_193430;
            case 0x193480u: goto label_193480;
            case 0x1934A8u: goto label_1934a8;
            case 0x193500u: goto label_193500;
            case 0x193504u: goto label_193504;
            case 0x193514u: goto label_193514;
            case 0x193520u: goto label_193520;
            case 0x193524u: goto label_193524;
            case 0x193534u: goto label_193534;
            case 0x1935A8u: goto label_1935a8;
            case 0x1935ACu: goto label_1935ac;
            case 0x193610u: goto label_193610;
            case 0x193624u: goto label_193624;
            case 0x193680u: goto label_193680;
            case 0x193684u: goto label_193684;
            case 0x193694u: goto label_193694;
            case 0x193698u: goto label_193698;
            case 0x1936F8u: goto label_1936f8;
            case 0x1936FCu: goto label_1936fc;
            case 0x193770u: goto label_193770;
            case 0x193778u: goto label_193778;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x193310u; }
            if (ctx->pc != 0x193310u) { return; }
        }
        }
    }
    ctx->pc = 0x193310u;
    // 0x193310: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x193310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x193314: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x193314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x193318: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x193318u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19331c: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x19331cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x193320: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x193320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x193324: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x193324u;
    {
        const bool branch_taken_0x193324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x193328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193324u;
            // 0x193328: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x193324) {
            ctx->pc = 0x193340u;
            goto label_193340;
        }
    }
    ctx->pc = 0x19332Cu;
    // 0x19332c: 0xdba10090  lqc2        $vf1, 0x90($sp)
    ctx->pc = 0x19332cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x193330: 0xdba20030  lqc2        $vf2, 0x30($sp)
    ctx->pc = 0x193330u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x193334: 0x4a820041  vaddy.y     $vf1, $vf0, $vf2y
    ctx->pc = 0x193334u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x193338: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x193338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19333c: 0x0  nop
    ctx->pc = 0x19333cu;
    // NOP
label_193340:
    // 0x193340: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x193340u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x193344: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x193344u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x193348: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x193348u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x19334c: 0xdba300a0  lqc2        $vf3, 0xA0($sp)
    ctx->pc = 0x19334cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x193350: 0x4a8118c0  vaddx.y     $vf3, $vf3, $vf1x
    ctx->pc = 0x193350u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x193354: 0x4be32128  vadd.xyzw   $vf4, $vf4, $vf3
    ctx->pc = 0x193354u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x193358: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x193358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x19335c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x19335cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x193360: 0xdba20070  lqc2        $vf2, 0x70($sp)
    ctx->pc = 0x193360u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x193364: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x193364u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x193368: 0xdba10090  lqc2        $vf1, 0x90($sp)
    ctx->pc = 0x193368u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19336c: 0x4be30868  vadd.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x19336cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x193370: 0x8e44bcf8  lw          $a0, -0x4308($s2)
    ctx->pc = 0x193370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950136)));
    // 0x193374: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x193374u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x193378: 0x4be2206c  vsub.xyzw   $vf1, $vf4, $vf2
    ctx->pc = 0x193378u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19337c: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x19337cu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x193380: 0xc047864  jal         func_11E190
    ctx->pc = 0x193380u;
    SET_GPR_U32(ctx, 31, 0x193388u);
    ctx->pc = 0x193384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193380u;
            // 0x193384: 0x48250800  qmfc2.ni    $a1, $vf1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193388u; }
        if (ctx->pc != 0x193388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193388u; }
        if (ctx->pc != 0x193388u) { return; }
    }
    ctx->pc = 0x193388u;
    // 0x193388: 0x5440005e  bnel        $v0, $zero, . + 4 + (0x5E << 2)
    ctx->pc = 0x193388u;
    {
        const bool branch_taken_0x193388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193388) {
            ctx->pc = 0x19338Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x193388u;
            // 0x19338c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x193504u;
            goto label_193504;
        }
    }
    ctx->pc = 0x193390u;
    // 0x193390: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x193390u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x193394: 0x4be420ea  vmul.xyzw   $vf3, $vf4, $vf4
    ctx->pc = 0x193394u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x193398: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x193398u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19339c: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x19339cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1933a0: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1933a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1933a4: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1933a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1933a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1933a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1933ac: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1933acu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1933b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1933b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1933b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1933b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1933b8: 0x0  nop
    ctx->pc = 0x1933b8u;
    // NOP
    // 0x1933bc: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x1933BCu;
    {
        const bool branch_taken_0x1933bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1933C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1933BCu;
            // 0x1933c0: 0xdba20090  lqc2        $vf2, 0x90($sp) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1933bc) {
            ctx->pc = 0x193430u;
            goto label_193430;
        }
    }
    ctx->pc = 0x1933C4u;
    // 0x1933c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1933c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1933c8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1933c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1933cc: 0xdba200a0  lqc2        $vf2, 0xA0($sp)
    ctx->pc = 0x1933ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1933d0: 0x4a811080  vaddx.y     $vf2, $vf2, $vf1x
    ctx->pc = 0x1933d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1933d4: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1933d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1933d8: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1933d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1933dc: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1933dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1933e0: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1933e0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1933e4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1933e4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1933e8: 0x4bc0211c  vmulq.xyz   $vf4, $vf4, $Q
    ctx->pc = 0x1933e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1933ec: 0x4a0002ff  vnop
    ctx->pc = 0x1933ecu;
    // NOP operation, no action needed for VU0
    // 0x1933f0: 0x4a0002ff  vnop
    ctx->pc = 0x1933f0u;
    // NOP operation, no action needed for VU0
    // 0x1933f4: 0x4be1233c  vmove.xyzw  $vf1, $vf4
    ctx->pc = 0x1933f4u;
    ctx->vu0_vf[1] = ctx->vu0_vf[4];
    // 0x1933f8: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1933f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1933fc: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x1933fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x193400: 0xdba300a0  lqc2        $vf3, 0xA0($sp)
    ctx->pc = 0x193400u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x193404: 0x4be1186c  vsub.xyzw   $vf1, $vf3, $vf1
    ctx->pc = 0x193404u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x193408: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x193408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19340c: 0x4bc112fe  vopmula.xyz $ACC, $vf2, $vf1
    ctx->pc = 0x19340cu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]);
    // 0x193410: 0x4bc208ae  vopmsub.xyz $vf2, $vf1, $vf2
    ctx->pc = 0x193410u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x193414: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x193414u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x193418: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x193418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19341c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x19341cu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]);
    // 0x193420: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x193420u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x193424: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x193424u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x193428: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x193428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19342c: 0xdba20090  lqc2        $vf2, 0x90($sp)
    ctx->pc = 0x19342cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_193430:
    // 0x193430: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x193430u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193434: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x193434u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193438: 0x7ba40020  lq          $a0, 0x20($sp)
    ctx->pc = 0x193438u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19343c: 0x7e620050  sq          $v0, 0x50($s3)
    ctx->pc = 0x19343cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 80), GPR_VEC(ctx, 2));
    // 0x193440: 0x7e630060  sq          $v1, 0x60($s3)
    ctx->pc = 0x193440u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 96), GPR_VEC(ctx, 3));
    // 0x193444: 0x7e640070  sq          $a0, 0x70($s3)
    ctx->pc = 0x193444u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 112), GPR_VEC(ctx, 4));
    // 0x193448: 0xfa620080  sqc2        $vf2, 0x80($s3)
    ctx->pc = 0x193448u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 128), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19344c: 0xfba20030  sqc2        $vf2, 0x30($sp)
    ctx->pc = 0x19344cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x193450: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x193450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x193454: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x193454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x193458: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x193458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19345c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x19345Cu;
    {
        const bool branch_taken_0x19345c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19345c) {
            ctx->pc = 0x193460u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19345Cu;
            // 0x193460: 0x8e250014  lw          $a1, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x193480u;
            goto label_193480;
        }
    }
    ctx->pc = 0x193464u;
    // 0x193464: 0x48b00800  qmtc2.ni    $s0, $vf1
    ctx->pc = 0x193464u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 16));
    // 0x193468: 0x4a810080  vaddx.y     $vf2, $vf0, $vf1x
    ctx->pc = 0x193468u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19346c: 0x4be1133c  vmove.xyzw  $vf1, $vf2
    ctx->pc = 0x19346cu;
    ctx->vu0_vf[1] = ctx->vu0_vf[2];
    // 0x193470: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x193470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x193474: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x193474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x193478: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x193478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x19347c: 0x0  nop
    ctx->pc = 0x19347cu;
    // NOP
label_193480:
    // 0x193480: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x193480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x193484: 0x8e84d2ac  lw          $a0, -0x2D54($s4)
    ctx->pc = 0x193484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294955692)));
    // 0x193488: 0x515c2  srl         $v0, $a1, 23
    ctx->pc = 0x193488u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x19348c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x19348cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x193490: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x193490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x193494: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x193494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x193498: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x193498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19349c: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19349Cu;
    {
        const bool branch_taken_0x19349c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1934A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19349Cu;
            // 0x1934a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19349c) {
            ctx->pc = 0x1934A8u;
            goto label_1934a8;
        }
    }
    ctx->pc = 0x1934A4u;
    // 0x1934a4: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x1934a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1934a8:
    // 0x1934a8: 0x10c0001d  beqz        $a2, . + 4 + (0x1D << 2)
    ctx->pc = 0x1934A8u;
    {
        const bool branch_taken_0x1934a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1934ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1934A8u;
            // 0x1934ac: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1934a8) {
            ctx->pc = 0x193520u;
            goto label_193520;
        }
    }
    ctx->pc = 0x1934B0u;
    // 0x1934b0: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x1934b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1934b4: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1934b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1934b8: 0xdcc5bdf8  ld          $a1, -0x4208($a2)
    ctx->pc = 0x1934b8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 4294950392)));
    // 0x1934bc: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x1934bcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x1934c0: 0x84830060  lh          $v1, 0x60($a0)
    ctx->pc = 0x1934c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x1934c4: 0x64a50001  daddiu      $a1, $a1, 0x1
    ctx->pc = 0x1934c4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
    // 0x1934c8: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x1934c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1934cc: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x1934ccu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x1934d0: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x1934d0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x1934d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1934d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1934d8: 0xa3100a  movz        $v0, $a1, $v1
    ctx->pc = 0x1934d8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x1934dc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1934dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1934e0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x1934e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1934e4: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x1934e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
    // 0x1934e8: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x1934e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1934ec: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x1934ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
    // 0x1934f0: 0xfcc5bdf8  sd          $a1, -0x4208($a2)
    ctx->pc = 0x1934f0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 4294950392), GPR_U64(ctx, 5));
    // 0x1934f4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1934F4u;
    {
        const bool branch_taken_0x1934f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1934F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1934F4u;
            // 0x1934f8: 0xfc830068  sd          $v1, 0x68($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 104), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1934f4) {
            ctx->pc = 0x193520u;
            goto label_193520;
        }
    }
    ctx->pc = 0x1934FCu;
    // 0x1934fc: 0x0  nop
    ctx->pc = 0x1934fcu;
    // NOP
label_193500:
    // 0x193500: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x193500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_193504:
    // 0x193504: 0xc064ba8  jal         func_192EA0
    ctx->pc = 0x193504u;
    SET_GPR_U32(ctx, 31, 0x19350Cu);
    ctx->pc = 0x193508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193504u;
            // 0x193508: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192EA0u;
    if (runtime->hasFunction(0x192EA0u)) {
        auto targetFn = runtime->lookupFunction(0x192EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19350Cu; }
        if (ctx->pc != 0x19350Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192EA0_0x192ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19350Cu; }
        if (ctx->pc != 0x19350Cu) { return; }
    }
    ctx->pc = 0x19350Cu;
    // 0x19350c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x19350Cu;
    {
        const bool branch_taken_0x19350c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19350Cu;
            // 0x193510: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19350c) {
            ctx->pc = 0x193524u;
            goto label_193524;
        }
    }
    ctx->pc = 0x193514u;
label_193514:
    // 0x193514: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x193514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193518: 0xc064ba8  jal         func_192EA0
    ctx->pc = 0x193518u;
    SET_GPR_U32(ctx, 31, 0x193520u);
    ctx->pc = 0x19351Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193518u;
            // 0x19351c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192EA0u;
    if (runtime->hasFunction(0x192EA0u)) {
        auto targetFn = runtime->lookupFunction(0x192EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193520u; }
        if (ctx->pc != 0x193520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192EA0_0x192ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193520u; }
        if (ctx->pc != 0x193520u) { return; }
    }
    ctx->pc = 0x193520u;
label_193520:
    // 0x193520: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x193520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_193524:
    // 0x193524: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x193524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193528: 0xc441c658  lwc1        $f1, -0x39A8($v0)
    ctx->pc = 0x193528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19352c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x19352cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x193530: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x193530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_193534:
    // 0x193534: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x193534u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x193538: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x193538u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x19353c: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x19353cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x193540: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x193540u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x193544: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x193544u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x193548: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x193548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x19354c: 0x3e00008  jr          $ra
    ctx->pc = 0x19354Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19354Cu;
            // 0x193550: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x192FC0u: goto label_192fc0;
            case 0x193028u: goto label_193028;
            case 0x193048u: goto label_193048;
            case 0x193064u: goto label_193064;
            case 0x193084u: goto label_193084;
            case 0x1930A0u: goto label_1930a0;
            case 0x193118u: goto label_193118;
            case 0x193148u: goto label_193148;
            case 0x193158u: goto label_193158;
            case 0x1931B8u: goto label_1931b8;
            case 0x193230u: goto label_193230;
            case 0x193268u: goto label_193268;
            case 0x193340u: goto label_193340;
            case 0x193430u: goto label_193430;
            case 0x193480u: goto label_193480;
            case 0x1934A8u: goto label_1934a8;
            case 0x193500u: goto label_193500;
            case 0x193504u: goto label_193504;
            case 0x193514u: goto label_193514;
            case 0x193520u: goto label_193520;
            case 0x193524u: goto label_193524;
            case 0x193534u: goto label_193534;
            case 0x1935A8u: goto label_1935a8;
            case 0x1935ACu: goto label_1935ac;
            case 0x193610u: goto label_193610;
            case 0x193624u: goto label_193624;
            case 0x193680u: goto label_193680;
            case 0x193684u: goto label_193684;
            case 0x193694u: goto label_193694;
            case 0x193698u: goto label_193698;
            case 0x1936F8u: goto label_1936f8;
            case 0x1936FCu: goto label_1936fc;
            case 0x193770u: goto label_193770;
            case 0x193778u: goto label_193778;
            default: break;
        }
        return;
    }
    ctx->pc = 0x193554u;
    // 0x193554: 0x0  nop
    ctx->pc = 0x193554u;
    // NOP
    // 0x193558: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x193558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19355c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19355cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x193560: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x193560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x193564: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x193564u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193568: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x193568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19356c: 0x8e250060  lw          $a1, 0x60($s1)
    ctx->pc = 0x19356cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x193570: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x193570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x193574: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x193574u;
    {
        const bool branch_taken_0x193574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x193578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193574u;
            // 0x193578: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193574) {
            ctx->pc = 0x1935ACu;
            goto label_1935ac;
        }
    }
    ctx->pc = 0x19357Cu;
    // 0x19357c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x19357cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x193580: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x193580u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x193584: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x193584u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x193588: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x193588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19358c: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x19358cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x193590: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x193590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x193594: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x193594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x193598: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x193598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19359c: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19359Cu;
    {
        const bool branch_taken_0x19359c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1935A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19359Cu;
            // 0x1935a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19359c) {
            ctx->pc = 0x1935A8u;
            goto label_1935a8;
        }
    }
    ctx->pc = 0x1935A4u;
    // 0x1935a4: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1935a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1935a8:
    // 0x1935a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1935a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1935ac:
    // 0x1935ac: 0x52000018  beql        $s0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1935ACu;
    {
        const bool branch_taken_0x1935ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1935ac) {
            ctx->pc = 0x1935B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1935ACu;
            // 0x1935b0: 0x8e24004c  lw          $a0, 0x4C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x193610u;
            goto label_193610;
        }
    }
    ctx->pc = 0x1935B4u;
    // 0x1935b4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1935b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1935b8: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1935b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1935bc: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1935bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1935c0: 0x40f809  jalr        $v0
    ctx->pc = 0x1935C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1935C8u);
        ctx->pc = 0x1935C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1935C0u;
            // 0x1935c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1935C8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x192FC0u: goto label_192fc0;
            case 0x193028u: goto label_193028;
            case 0x193048u: goto label_193048;
            case 0x193064u: goto label_193064;
            case 0x193084u: goto label_193084;
            case 0x1930A0u: goto label_1930a0;
            case 0x193118u: goto label_193118;
            case 0x193148u: goto label_193148;
            case 0x193158u: goto label_193158;
            case 0x1931B8u: goto label_1931b8;
            case 0x193230u: goto label_193230;
            case 0x193268u: goto label_193268;
            case 0x193340u: goto label_193340;
            case 0x193430u: goto label_193430;
            case 0x193480u: goto label_193480;
            case 0x1934A8u: goto label_1934a8;
            case 0x193500u: goto label_193500;
            case 0x193504u: goto label_193504;
            case 0x193514u: goto label_193514;
            case 0x193520u: goto label_193520;
            case 0x193524u: goto label_193524;
            case 0x193534u: goto label_193534;
            case 0x1935A8u: goto label_1935a8;
            case 0x1935ACu: goto label_1935ac;
            case 0x193610u: goto label_193610;
            case 0x193624u: goto label_193624;
            case 0x193680u: goto label_193680;
            case 0x193684u: goto label_193684;
            case 0x193694u: goto label_193694;
            case 0x193698u: goto label_193698;
            case 0x1936F8u: goto label_1936f8;
            case 0x1936FCu: goto label_1936fc;
            case 0x193770u: goto label_193770;
            case 0x193778u: goto label_193778;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1935C8u; }
            if (ctx->pc != 0x1935C8u) { return; }
        }
        }
    }
    ctx->pc = 0x1935C8u;
    // 0x1935c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1935c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1935cc: 0xc081a5a  jal         func_206968
    ctx->pc = 0x1935CCu;
    SET_GPR_U32(ctx, 31, 0x1935D4u);
    ctx->pc = 0x1935D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1935CCu;
            // 0x1935d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x206968u;
    if (runtime->hasFunction(0x206968u)) {
        auto targetFn = runtime->lookupFunction(0x206968u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1935D4u; }
        if (ctx->pc != 0x1935D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00206968_0x206968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1935D4u; }
        if (ctx->pc != 0x1935D4u) { return; }
    }
    ctx->pc = 0x1935D4u;
    // 0x1935d4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1935d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1935d8: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1935d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1935dc: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1935dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1935e0: 0x40f809  jalr        $v0
    ctx->pc = 0x1935E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1935E8u);
        ctx->pc = 0x1935E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1935E0u;
            // 0x1935e4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1935E8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x192FC0u: goto label_192fc0;
            case 0x193028u: goto label_193028;
            case 0x193048u: goto label_193048;
            case 0x193064u: goto label_193064;
            case 0x193084u: goto label_193084;
            case 0x1930A0u: goto label_1930a0;
            case 0x193118u: goto label_193118;
            case 0x193148u: goto label_193148;
            case 0x193158u: goto label_193158;
            case 0x1931B8u: goto label_1931b8;
            case 0x193230u: goto label_193230;
            case 0x193268u: goto label_193268;
            case 0x193340u: goto label_193340;
            case 0x193430u: goto label_193430;
            case 0x193480u: goto label_193480;
            case 0x1934A8u: goto label_1934a8;
            case 0x193500u: goto label_193500;
            case 0x193504u: goto label_193504;
            case 0x193514u: goto label_193514;
            case 0x193520u: goto label_193520;
            case 0x193524u: goto label_193524;
            case 0x193534u: goto label_193534;
            case 0x1935A8u: goto label_1935a8;
            case 0x1935ACu: goto label_1935ac;
            case 0x193610u: goto label_193610;
            case 0x193624u: goto label_193624;
            case 0x193680u: goto label_193680;
            case 0x193684u: goto label_193684;
            case 0x193694u: goto label_193694;
            case 0x193698u: goto label_193698;
            case 0x1936F8u: goto label_1936f8;
            case 0x1936FCu: goto label_1936fc;
            case 0x193770u: goto label_193770;
            case 0x193778u: goto label_193778;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1935E8u; }
            if (ctx->pc != 0x1935E8u) { return; }
        }
        }
    }
    ctx->pc = 0x1935E8u;
    // 0x1935e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1935e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1935ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1935ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1935f0: 0xc081a18  jal         func_206860
    ctx->pc = 0x1935F0u;
    SET_GPR_U32(ctx, 31, 0x1935F8u);
    ctx->pc = 0x1935F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1935F0u;
            // 0x1935f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x206860u;
    if (runtime->hasFunction(0x206860u)) {
        auto targetFn = runtime->lookupFunction(0x206860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1935F8u; }
        if (ctx->pc != 0x1935F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00206860_0x206860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1935F8u; }
        if (ctx->pc != 0x1935F8u) { return; }
    }
    ctx->pc = 0x1935F8u;
    // 0x1935f8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1935F8u;
    {
        const bool branch_taken_0x1935f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1935f8) {
            ctx->pc = 0x1935FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1935F8u;
            // 0x1935fc: 0x8e24004c  lw          $a0, 0x4C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x193610u;
            goto label_193610;
        }
    }
    ctx->pc = 0x193600u;
    // 0x193600: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x193600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x193604: 0xc04c4ec  jal         func_1313B0
    ctx->pc = 0x193604u;
    SET_GPR_U32(ctx, 31, 0x19360Cu);
    ctx->pc = 0x193608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193604u;
            // 0x193608: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1313B0u;
    if (runtime->hasFunction(0x1313B0u)) {
        auto targetFn = runtime->lookupFunction(0x1313B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19360Cu; }
        if (ctx->pc != 0x19360Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001313B0_0x1313b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19360Cu; }
        if (ctx->pc != 0x19360Cu) { return; }
    }
    ctx->pc = 0x19360Cu;
    // 0x19360c: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x19360cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_193610:
    // 0x193610: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x193610u;
    {
        const bool branch_taken_0x193610 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x193610) {
            ctx->pc = 0x193614u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x193610u;
            // 0x193614: 0xae20004c  sw          $zero, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x193624u;
            goto label_193624;
        }
    }
    ctx->pc = 0x193618u;
    // 0x193618: 0xc064b8a  jal         func_192E28
    ctx->pc = 0x193618u;
    SET_GPR_U32(ctx, 31, 0x193620u);
    ctx->pc = 0x19361Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193618u;
            // 0x19361c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192E28u;
    if (runtime->hasFunction(0x192E28u)) {
        auto targetFn = runtime->lookupFunction(0x192E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193620u; }
        if (ctx->pc != 0x193620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192E28_0x192e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193620u; }
        if (ctx->pc != 0x193620u) { return; }
    }
    ctx->pc = 0x193620u;
    // 0x193620: 0xae20004c  sw          $zero, 0x4C($s1)
    ctx->pc = 0x193620u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
label_193624:
    // 0x193624: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x193624u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193628: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x193628u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19362c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19362cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193630: 0x3e00008  jr          $ra
    ctx->pc = 0x193630u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193630u;
            // 0x193634: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x192FC0u: goto label_192fc0;
            case 0x193028u: goto label_193028;
            case 0x193048u: goto label_193048;
            case 0x193064u: goto label_193064;
            case 0x193084u: goto label_193084;
            case 0x1930A0u: goto label_1930a0;
            case 0x193118u: goto label_193118;
            case 0x193148u: goto label_193148;
            case 0x193158u: goto label_193158;
            case 0x1931B8u: goto label_1931b8;
            case 0x193230u: goto label_193230;
            case 0x193268u: goto label_193268;
            case 0x193340u: goto label_193340;
            case 0x193430u: goto label_193430;
            case 0x193480u: goto label_193480;
            case 0x1934A8u: goto label_1934a8;
            case 0x193500u: goto label_193500;
            case 0x193504u: goto label_193504;
            case 0x193514u: goto label_193514;
            case 0x193520u: goto label_193520;
            case 0x193524u: goto label_193524;
            case 0x193534u: goto label_193534;
            case 0x1935A8u: goto label_1935a8;
            case 0x1935ACu: goto label_1935ac;
            case 0x193610u: goto label_193610;
            case 0x193624u: goto label_193624;
            case 0x193680u: goto label_193680;
            case 0x193684u: goto label_193684;
            case 0x193694u: goto label_193694;
            case 0x193698u: goto label_193698;
            case 0x1936F8u: goto label_1936f8;
            case 0x1936FCu: goto label_1936fc;
            case 0x193770u: goto label_193770;
            case 0x193778u: goto label_193778;
            default: break;
        }
        return;
    }
    ctx->pc = 0x193638u;
    // 0x193638: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x193638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19363c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19363cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x193640: 0x8c860060  lw          $a2, 0x60($a0)
    ctx->pc = 0x193640u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x193644: 0x30c20007  andi        $v0, $a2, 0x7
    ctx->pc = 0x193644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
    // 0x193648: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x193648u;
    {
        const bool branch_taken_0x193648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19364Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193648u;
            // 0x19364c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193648) {
            ctx->pc = 0x193680u;
            goto label_193680;
        }
    }
    ctx->pc = 0x193650u;
    // 0x193650: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x193650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x193654: 0x61dc2  srl         $v1, $a2, 23
    ctx->pc = 0x193654u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 23));
    // 0x193658: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x193658u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x19365c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19365cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x193660: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x193660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x193664: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x193664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x193668: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x193668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19366c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19366cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x193670: 0x54460004  bnel        $v0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x193670u;
    {
        const bool branch_taken_0x193670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x193670) {
            ctx->pc = 0x193674u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x193670u;
            // 0x193674: 0x8c84004c  lw          $a0, 0x4C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x193684u;
            goto label_193684;
        }
    }
    ctx->pc = 0x193678u;
    // 0x193678: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x193678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x19367c: 0x0  nop
    ctx->pc = 0x19367cu;
    // NOP
label_193680:
    // 0x193680: 0x8c84004c  lw          $a0, 0x4C($a0)
    ctx->pc = 0x193680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_193684:
    // 0x193684: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x193684u;
    {
        const bool branch_taken_0x193684 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x193688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193684u;
            // 0x193688: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193684) {
            ctx->pc = 0x193698u;
            goto label_193698;
        }
    }
    ctx->pc = 0x19368Cu;
    // 0x19368c: 0xc064bf0  jal         func_192FC0
    ctx->pc = 0x19368Cu;
    SET_GPR_U32(ctx, 31, 0x193694u);
    ctx->pc = 0x192FC0u;
    runtime->cooperativeGuestYield();
    goto label_192fc0;
    ctx->pc = 0x193694u;
label_193694:
    // 0x193694: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x193694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_193698:
    // 0x193698: 0x3e00008  jr          $ra
    ctx->pc = 0x193698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19369Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193698u;
            // 0x19369c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x192FC0u: goto label_192fc0;
            case 0x193028u: goto label_193028;
            case 0x193048u: goto label_193048;
            case 0x193064u: goto label_193064;
            case 0x193084u: goto label_193084;
            case 0x1930A0u: goto label_1930a0;
            case 0x193118u: goto label_193118;
            case 0x193148u: goto label_193148;
            case 0x193158u: goto label_193158;
            case 0x1931B8u: goto label_1931b8;
            case 0x193230u: goto label_193230;
            case 0x193268u: goto label_193268;
            case 0x193340u: goto label_193340;
            case 0x193430u: goto label_193430;
            case 0x193480u: goto label_193480;
            case 0x1934A8u: goto label_1934a8;
            case 0x193500u: goto label_193500;
            case 0x193504u: goto label_193504;
            case 0x193514u: goto label_193514;
            case 0x193520u: goto label_193520;
            case 0x193524u: goto label_193524;
            case 0x193534u: goto label_193534;
            case 0x1935A8u: goto label_1935a8;
            case 0x1935ACu: goto label_1935ac;
            case 0x193610u: goto label_193610;
            case 0x193624u: goto label_193624;
            case 0x193680u: goto label_193680;
            case 0x193684u: goto label_193684;
            case 0x193694u: goto label_193694;
            case 0x193698u: goto label_193698;
            case 0x1936F8u: goto label_1936f8;
            case 0x1936FCu: goto label_1936fc;
            case 0x193770u: goto label_193770;
            case 0x193778u: goto label_193778;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1936A0u;
    // 0x1936a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1936a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1936a4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1936a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1936a8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1936a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1936ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1936acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1936b0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1936b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1936b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1936b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1936b8: 0x8e250060  lw          $a1, 0x60($s1)
    ctx->pc = 0x1936b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1936bc: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x1936bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x1936c0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1936C0u;
    {
        const bool branch_taken_0x1936c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1936C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1936C0u;
            // 0x1936c4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1936c0) {
            ctx->pc = 0x1936FCu;
            goto label_1936fc;
        }
    }
    ctx->pc = 0x1936C8u;
    // 0x1936c8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1936c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1936cc: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x1936ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x1936d0: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1936d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1936d4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1936d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1936d8: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x1936d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x1936dc: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1936dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1936e0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1936e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1936e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1936e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1936e8: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1936E8u;
    {
        const bool branch_taken_0x1936e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1936ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1936E8u;
            // 0x1936ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1936e8) {
            ctx->pc = 0x1936F8u;
            goto label_1936f8;
        }
    }
    ctx->pc = 0x1936F0u;
    // 0x1936f0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1936f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1936f4: 0x0  nop
    ctx->pc = 0x1936f4u;
    // NOP
label_1936f8:
    // 0x1936f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1936f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1936fc:
    // 0x1936fc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1936fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x193700: 0x8e320068  lw          $s2, 0x68($s1)
    ctx->pc = 0x193700u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x193704: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x193704u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x193708: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x193708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x19370c: 0x40f809  jalr        $v0
    ctx->pc = 0x19370Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x193714u);
        ctx->pc = 0x193710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19370Cu;
            // 0x193710: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x193714u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x192FC0u: goto label_192fc0;
            case 0x193028u: goto label_193028;
            case 0x193048u: goto label_193048;
            case 0x193064u: goto label_193064;
            case 0x193084u: goto label_193084;
            case 0x1930A0u: goto label_1930a0;
            case 0x193118u: goto label_193118;
            case 0x193148u: goto label_193148;
            case 0x193158u: goto label_193158;
            case 0x1931B8u: goto label_1931b8;
            case 0x193230u: goto label_193230;
            case 0x193268u: goto label_193268;
            case 0x193340u: goto label_193340;
            case 0x193430u: goto label_193430;
            case 0x193480u: goto label_193480;
            case 0x1934A8u: goto label_1934a8;
            case 0x193500u: goto label_193500;
            case 0x193504u: goto label_193504;
            case 0x193514u: goto label_193514;
            case 0x193520u: goto label_193520;
            case 0x193524u: goto label_193524;
            case 0x193534u: goto label_193534;
            case 0x1935A8u: goto label_1935a8;
            case 0x1935ACu: goto label_1935ac;
            case 0x193610u: goto label_193610;
            case 0x193624u: goto label_193624;
            case 0x193680u: goto label_193680;
            case 0x193684u: goto label_193684;
            case 0x193694u: goto label_193694;
            case 0x193698u: goto label_193698;
            case 0x1936F8u: goto label_1936f8;
            case 0x1936FCu: goto label_1936fc;
            case 0x193770u: goto label_193770;
            case 0x193778u: goto label_193778;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x193714u; }
            if (ctx->pc != 0x193714u) { return; }
        }
        }
    }
    ctx->pc = 0x193714u;
    // 0x193714: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x193714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193718: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x193718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19371c: 0xc081a18  jal         func_206860
    ctx->pc = 0x19371Cu;
    SET_GPR_U32(ctx, 31, 0x193724u);
    ctx->pc = 0x193720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19371Cu;
            // 0x193720: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x206860u;
    if (runtime->hasFunction(0x206860u)) {
        auto targetFn = runtime->lookupFunction(0x206860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193724u; }
        if (ctx->pc != 0x193724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00206860_0x206860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193724u; }
        if (ctx->pc != 0x193724u) { return; }
    }
    ctx->pc = 0x193724u;
    // 0x193724: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x193724u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193728: 0x54600011  bnel        $v1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x193728u;
    {
        const bool branch_taken_0x193728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x193728) {
            ctx->pc = 0x19372Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x193728u;
            // 0x19372c: 0x8c62004c  lw          $v0, 0x4C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x193770u;
            goto label_193770;
        }
    }
    ctx->pc = 0x193730u;
    // 0x193730: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x193730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x193734: 0xc04c4c0  jal         func_131300
    ctx->pc = 0x193734u;
    SET_GPR_U32(ctx, 31, 0x19373Cu);
    ctx->pc = 0x193738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193734u;
            // 0x193738: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131300u;
    if (runtime->hasFunction(0x131300u)) {
        auto targetFn = runtime->lookupFunction(0x131300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19373Cu; }
        if (ctx->pc != 0x19373Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131300_0x131300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19373Cu; }
        if (ctx->pc != 0x19373Cu) { return; }
    }
    ctx->pc = 0x19373Cu;
    // 0x19373c: 0xc0783d6  jal         func_1E0F58
    ctx->pc = 0x19373Cu;
    SET_GPR_U32(ctx, 31, 0x193744u);
    ctx->pc = 0x193740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19373Cu;
            // 0x193740: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0F58u;
    if (runtime->hasFunction(0x1E0F58u)) {
        auto targetFn = runtime->lookupFunction(0x1E0F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193744u; }
        if (ctx->pc != 0x193744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0F58_0x1e0f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193744u; }
        if (ctx->pc != 0x193744u) { return; }
    }
    ctx->pc = 0x193744u;
    // 0x193744: 0xc04f824  jal         func_13E090
    ctx->pc = 0x193744u;
    SET_GPR_U32(ctx, 31, 0x19374Cu);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19374Cu; }
        if (ctx->pc != 0x19374Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19374Cu; }
        if (ctx->pc != 0x19374Cu) { return; }
    }
    ctx->pc = 0x19374Cu;
    // 0x19374c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19374cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193750: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x193750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x193754: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x193754u;
    SET_GPR_U32(ctx, 31, 0x19375Cu);
    ctx->pc = 0x193758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193754u;
            // 0x193758: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19375Cu; }
        if (ctx->pc != 0x19375Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19375Cu; }
        if (ctx->pc != 0x19375Cu) { return; }
    }
    ctx->pc = 0x19375Cu;
    // 0x19375c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19375cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193760: 0xc064b64  jal         func_192D90
    ctx->pc = 0x193760u;
    SET_GPR_U32(ctx, 31, 0x193768u);
    ctx->pc = 0x193764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193760u;
            // 0x193764: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192D90u;
    if (runtime->hasFunction(0x192D90u)) {
        auto targetFn = runtime->lookupFunction(0x192D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193768u; }
        if (ctx->pc != 0x193768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192D90_0x192d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193768u; }
        if (ctx->pc != 0x193768u) { return; }
    }
    ctx->pc = 0x193768u;
    // 0x193768: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x193768u;
    {
        const bool branch_taken_0x193768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19376Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193768u;
            // 0x19376c: 0xae22004c  sw          $v0, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193768) {
            ctx->pc = 0x193778u;
            goto label_193778;
        }
    }
    ctx->pc = 0x193770u;
label_193770:
    // 0x193770: 0xae22004c  sw          $v0, 0x4C($s1)
    ctx->pc = 0x193770u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
    // 0x193774: 0xac60004c  sw          $zero, 0x4C($v1)
    ctx->pc = 0x193774u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 0));
label_193778:
    // 0x193778: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x193778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
    // 0x19377c: 0x3c030019  lui         $v1, 0x19
    ctx->pc = 0x19377cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25 << 16));
    // 0x193780: 0x24423558  addiu       $v0, $v0, 0x3558
    ctx->pc = 0x193780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13656));
    // 0x193784: 0x24633638  addiu       $v1, $v1, 0x3638
    ctx->pc = 0x193784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13880));
    // 0x193788: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x193788u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x19378c: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x19378cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
    // 0x193790: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x193790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x193794: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x193794u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x193798: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x193798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x19379c: 0x40f809  jalr        $v0
    ctx->pc = 0x19379Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1937A4u);
        ctx->pc = 0x1937A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19379Cu;
            // 0x1937a0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1937A4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x192FC0u: goto label_192fc0;
            case 0x193028u: goto label_193028;
            case 0x193048u: goto label_193048;
            case 0x193064u: goto label_193064;
            case 0x193084u: goto label_193084;
            case 0x1930A0u: goto label_1930a0;
            case 0x193118u: goto label_193118;
            case 0x193148u: goto label_193148;
            case 0x193158u: goto label_193158;
            case 0x1931B8u: goto label_1931b8;
            case 0x193230u: goto label_193230;
            case 0x193268u: goto label_193268;
            case 0x193340u: goto label_193340;
            case 0x193430u: goto label_193430;
            case 0x193480u: goto label_193480;
            case 0x1934A8u: goto label_1934a8;
            case 0x193500u: goto label_193500;
            case 0x193504u: goto label_193504;
            case 0x193514u: goto label_193514;
            case 0x193520u: goto label_193520;
            case 0x193524u: goto label_193524;
            case 0x193534u: goto label_193534;
            case 0x1935A8u: goto label_1935a8;
            case 0x1935ACu: goto label_1935ac;
            case 0x193610u: goto label_193610;
            case 0x193624u: goto label_193624;
            case 0x193680u: goto label_193680;
            case 0x193684u: goto label_193684;
            case 0x193694u: goto label_193694;
            case 0x193698u: goto label_193698;
            case 0x1936F8u: goto label_1936f8;
            case 0x1936FCu: goto label_1936fc;
            case 0x193770u: goto label_193770;
            case 0x193778u: goto label_193778;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1937A4u; }
            if (ctx->pc != 0x1937A4u) { return; }
        }
        }
    }
    ctx->pc = 0x1937A4u;
    // 0x1937a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1937a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1937a8: 0xc081a44  jal         func_206910
    ctx->pc = 0x1937A8u;
    SET_GPR_U32(ctx, 31, 0x1937B0u);
    ctx->pc = 0x1937ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1937A8u;
            // 0x1937ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x206910u;
    if (runtime->hasFunction(0x206910u)) {
        auto targetFn = runtime->lookupFunction(0x206910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1937B0u; }
        if (ctx->pc != 0x1937B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00206910_0x206910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1937B0u; }
        if (ctx->pc != 0x1937B0u) { return; }
    }
    ctx->pc = 0x1937B0u;
    // 0x1937b0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1937b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1937b4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1937b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1937b8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1937b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1937bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1937bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1937c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1937C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1937C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1937C0u;
            // 0x1937c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x192FC0u: goto label_192fc0;
            case 0x193028u: goto label_193028;
            case 0x193048u: goto label_193048;
            case 0x193064u: goto label_193064;
            case 0x193084u: goto label_193084;
            case 0x1930A0u: goto label_1930a0;
            case 0x193118u: goto label_193118;
            case 0x193148u: goto label_193148;
            case 0x193158u: goto label_193158;
            case 0x1931B8u: goto label_1931b8;
            case 0x193230u: goto label_193230;
            case 0x193268u: goto label_193268;
            case 0x193340u: goto label_193340;
            case 0x193430u: goto label_193430;
            case 0x193480u: goto label_193480;
            case 0x1934A8u: goto label_1934a8;
            case 0x193500u: goto label_193500;
            case 0x193504u: goto label_193504;
            case 0x193514u: goto label_193514;
            case 0x193520u: goto label_193520;
            case 0x193524u: goto label_193524;
            case 0x193534u: goto label_193534;
            case 0x1935A8u: goto label_1935a8;
            case 0x1935ACu: goto label_1935ac;
            case 0x193610u: goto label_193610;
            case 0x193624u: goto label_193624;
            case 0x193680u: goto label_193680;
            case 0x193684u: goto label_193684;
            case 0x193694u: goto label_193694;
            case 0x193698u: goto label_193698;
            case 0x1936F8u: goto label_1936f8;
            case 0x1936FCu: goto label_1936fc;
            case 0x193770u: goto label_193770;
            case 0x193778u: goto label_193778;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1937C8u;
}
