#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00291220
// Address: 0x291220 - 0x291410
void sub_00291220_0x291220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291220_0x291220");
#endif

    ctx->pc = 0x291220u;

    // 0x291220: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x291220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x291224: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x291224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291228: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x291228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x29122c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x29122cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x291230: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x291230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x291234: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x291234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x291238: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x291238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x29123c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x29123cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291240: 0x2903c  dsll32      $s2, $v0, 0
    ctx->pc = 0x291240u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 0));
    // 0x291244: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x291244u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x291248: 0x2803f  dsra32      $s0, $v0, 0
    ctx->pc = 0x291248u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x29124c: 0x101d03  sra         $v1, $s0, 20
    ctx->pc = 0x29124cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 20));
    // 0x291250: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x291250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x291254: 0x2471fc01  addiu       $s1, $v1, -0x3FF
    ctx->pc = 0x291254u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966273));
    // 0x291258: 0x2a220014  slti        $v0, $s1, 0x14
    ctx->pc = 0x291258u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x29125c: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x29125Cu;
    {
        const bool branch_taken_0x29125c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x291260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29125Cu;
            // 0x291260: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29125c) {
            ctx->pc = 0x29131Cu;
            goto label_29131c;
        }
    }
    ctx->pc = 0x291264u;
    // 0x291264: 0x6210016  bgez        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x291264u;
    {
        const bool branch_taken_0x291264 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x291268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291264u;
            // 0x291268: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291264) {
            ctx->pc = 0x2912C0u;
            goto label_2912c0;
        }
    }
    ctx->pc = 0x29126Cu;
    // 0x29126c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x29126cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x291270: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x291270u;
    SET_GPR_U32(ctx, 31, 0x291278u);
    ctx->pc = 0x291274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291270u;
            // 0x291274: 0xdc456598  ld          $a1, 0x6598($v0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 26008)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291278u; }
        if (ctx->pc != 0x291278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291278u; }
        if (ctx->pc != 0x291278u) { return; }
    }
    ctx->pc = 0x291278u;
    // 0x291278: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x291278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29127c: 0xc0a13b8  jal         func_284EE0
    ctx->pc = 0x29127Cu;
    SET_GPR_U32(ctx, 31, 0x291284u);
    ctx->pc = 0x291280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29127Cu;
            // 0x291280: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284EE0u;
    if (runtime->hasFunction(0x284EE0u)) {
        auto targetFn = runtime->lookupFunction(0x284EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291284u; }
        if (ctx->pc != 0x291284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284EE0_0x284ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291284u; }
        if (ctx->pc != 0x291284u) { return; }
    }
    ctx->pc = 0x291284u;
    // 0x291284: 0x1840004d  blez        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x291284u;
    {
        const bool branch_taken_0x291284 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x291284) {
            ctx->pc = 0x2913BCu;
            goto label_2913bc;
        }
    }
    ctx->pc = 0x29128Cu;
    // 0x29128c: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29128Cu;
    {
        const bool branch_taken_0x29128c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x291290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29128Cu;
            // 0x291290: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29128c) {
            ctx->pc = 0x2912A0u;
            goto label_2912a0;
        }
    }
    ctx->pc = 0x291294u;
    // 0x291294: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x291294u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291298: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x291298u;
    {
        const bool branch_taken_0x291298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29129Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291298u;
            // 0x29129c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291298) {
            ctx->pc = 0x2913BCu;
            goto label_2913bc;
        }
    }
    ctx->pc = 0x2912A0u;
label_2912a0:
    // 0x2912a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2912a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2912a4: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x2912a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x2912a8: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x2912a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x2912ac: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x2912ACu;
    {
        const bool branch_taken_0x2912ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2912ac) {
            ctx->pc = 0x2913BCu;
            goto label_2913bc;
        }
    }
    ctx->pc = 0x2912B4u;
    // 0x2912b4: 0x3c10bff0  lui         $s0, 0xBFF0
    ctx->pc = 0x2912b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)49136 << 16));
    // 0x2912b8: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x2912B8u;
    {
        const bool branch_taken_0x2912b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2912BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2912B8u;
            // 0x2912bc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2912b8) {
            ctx->pc = 0x2913BCu;
            goto label_2913bc;
        }
    }
    ctx->pc = 0x2912C0u;
label_2912c0:
    // 0x2912c0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2912c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2912c4: 0x222a007  srav        $s4, $v0, $s1
    ctx->pc = 0x2912c4u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x2912c8: 0x2141824  and         $v1, $s0, $s4
    ctx->pc = 0x2912c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 20));
    // 0x2912cc: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x2912ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x2912d0: 0x10600045  beqz        $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x2912D0u;
    {
        const bool branch_taken_0x2912d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2912D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2912D0u;
            // 0x2912d4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2912d0) {
            ctx->pc = 0x2913E8u;
            goto label_2913e8;
        }
    }
    ctx->pc = 0x2912D8u;
    // 0x2912d8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2912d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2912dc: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x2912DCu;
    SET_GPR_U32(ctx, 31, 0x2912E4u);
    ctx->pc = 0x2912E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2912DCu;
            // 0x2912e0: 0xdc456598  ld          $a1, 0x6598($v0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 26008)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2912E4u; }
        if (ctx->pc != 0x2912E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2912E4u; }
        if (ctx->pc != 0x2912E4u) { return; }
    }
    ctx->pc = 0x2912E4u;
    // 0x2912e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2912e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2912e8: 0xc0a13b8  jal         func_284EE0
    ctx->pc = 0x2912E8u;
    SET_GPR_U32(ctx, 31, 0x2912F0u);
    ctx->pc = 0x2912ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2912E8u;
            // 0x2912ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284EE0u;
    if (runtime->hasFunction(0x284EE0u)) {
        auto targetFn = runtime->lookupFunction(0x284EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2912F0u; }
        if (ctx->pc != 0x2912F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284EE0_0x284ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2912F0u; }
        if (ctx->pc != 0x2912F0u) { return; }
    }
    ctx->pc = 0x2912F0u;
    // 0x2912f0: 0x18400032  blez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2912F0u;
    {
        const bool branch_taken_0x2912f0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2912f0) {
            ctx->pc = 0x2913BCu;
            goto label_2913bc;
        }
    }
    ctx->pc = 0x2912F8u;
    // 0x2912f8: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2912F8u;
    {
        const bool branch_taken_0x2912f8 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2912FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2912F8u;
            // 0x2912fc: 0x141027  nor         $v0, $zero, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2912f8) {
            ctx->pc = 0x291310u;
            goto label_291310;
        }
    }
    ctx->pc = 0x291300u;
    // 0x291300: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x291300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x291304: 0x2221007  srav        $v0, $v0, $s1
    ctx->pc = 0x291304u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x291308: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x291308u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x29130c: 0x141027  nor         $v0, $zero, $s4
    ctx->pc = 0x29130cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 20)));
label_291310:
    // 0x291310: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x291310u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291314: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x291314u;
    {
        const bool branch_taken_0x291314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291314u;
            // 0x291318: 0x2028024  and         $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291314) {
            ctx->pc = 0x2913BCu;
            goto label_2913bc;
        }
    }
    ctx->pc = 0x29131Cu;
label_29131c:
    // 0x29131c: 0x2a220034  slti        $v0, $s1, 0x34
    ctx->pc = 0x29131cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)52) ? 1 : 0);
    // 0x291320: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x291320u;
    {
        const bool branch_taken_0x291320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x291324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291320u;
            // 0x291324: 0x2464fbed  addiu       $a0, $v1, -0x413 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966253));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291320) {
            ctx->pc = 0x291344u;
            goto label_291344;
        }
    }
    ctx->pc = 0x291328u;
    // 0x291328: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x291328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x29132c: 0x1622002f  bne         $s1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x29132Cu;
    {
        const bool branch_taken_0x29132c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x291330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29132Cu;
            // 0x291330: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29132c) {
            ctx->pc = 0x2913ECu;
            goto label_2913ec;
        }
    }
    ctx->pc = 0x291334u;
    // 0x291334: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x291334u;
    SET_GPR_U32(ctx, 31, 0x29133Cu);
    ctx->pc = 0x291338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291334u;
            // 0x291338: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29133Cu; }
        if (ctx->pc != 0x29133Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29133Cu; }
        if (ctx->pc != 0x29133Cu) { return; }
    }
    ctx->pc = 0x29133Cu;
    // 0x29133c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x29133Cu;
    {
        const bool branch_taken_0x29133c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29133Cu;
            // 0x291340: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29133c) {
            ctx->pc = 0x2913F0u;
            goto label_2913f0;
        }
    }
    ctx->pc = 0x291344u;
label_291344:
    // 0x291344: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x291344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x291348: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x291348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x29134c: 0x82a006  srlv        $s4, $v0, $a0
    ctx->pc = 0x29134cu;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x291350: 0x2541824  and         $v1, $s2, $s4
    ctx->pc = 0x291350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & GPR_U64(ctx, 20));
    // 0x291354: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x291354u;
    {
        const bool branch_taken_0x291354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x291358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291354u;
            // 0x291358: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291354) {
            ctx->pc = 0x2913E8u;
            goto label_2913e8;
        }
    }
    ctx->pc = 0x29135Cu;
    // 0x29135c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x29135cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x291360: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x291360u;
    SET_GPR_U32(ctx, 31, 0x291368u);
    ctx->pc = 0x291364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291360u;
            // 0x291364: 0xdc456598  ld          $a1, 0x6598($v0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 26008)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291368u; }
        if (ctx->pc != 0x291368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291368u; }
        if (ctx->pc != 0x291368u) { return; }
    }
    ctx->pc = 0x291368u;
    // 0x291368: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x291368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29136c: 0xc0a13b8  jal         func_284EE0
    ctx->pc = 0x29136Cu;
    SET_GPR_U32(ctx, 31, 0x291374u);
    ctx->pc = 0x291370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29136Cu;
            // 0x291370: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284EE0u;
    if (runtime->hasFunction(0x284EE0u)) {
        auto targetFn = runtime->lookupFunction(0x284EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291374u; }
        if (ctx->pc != 0x291374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284EE0_0x284ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291374u; }
        if (ctx->pc != 0x291374u) { return; }
    }
    ctx->pc = 0x291374u;
    // 0x291374: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x291374u;
    {
        const bool branch_taken_0x291374 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x291374) {
            ctx->pc = 0x2913BCu;
            goto label_2913bc;
        }
    }
    ctx->pc = 0x29137Cu;
    // 0x29137c: 0x601000e  bgez        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x29137Cu;
    {
        const bool branch_taken_0x29137c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x291380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29137Cu;
            // 0x291380: 0x141027  nor         $v0, $zero, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29137c) {
            ctx->pc = 0x2913B8u;
            goto label_2913b8;
        }
    }
    ctx->pc = 0x291384u;
    // 0x291384: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x291384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x291388: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x291388u;
    {
        const bool branch_taken_0x291388 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x29138Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291388u;
            // 0x29138c: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291388) {
            ctx->pc = 0x291398u;
            goto label_291398;
        }
    }
    ctx->pc = 0x291390u;
    // 0x291390: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x291390u;
    {
        const bool branch_taken_0x291390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291390u;
            // 0x291394: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291390) {
            ctx->pc = 0x2913B4u;
            goto label_2913b4;
        }
    }
    ctx->pc = 0x291398u;
label_291398:
    // 0x291398: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x291398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29139c: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x29139cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2913a0: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x2913a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x2913a4: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2913a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2913a8: 0x72102b  sltu        $v0, $v1, $s2
    ctx->pc = 0x2913a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2913ac: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2913acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2913b0: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x2913b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2913b4:
    // 0x2913b4: 0x141027  nor         $v0, $zero, $s4
    ctx->pc = 0x2913b4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 20)));
label_2913b8:
    // 0x2913b8: 0x2429024  and         $s2, $s2, $v0
    ctx->pc = 0x2913b8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
label_2913bc:
    // 0x2913bc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2913bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2913c0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2913c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2913c4: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x2913c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x2913c8: 0x2639824  and         $s3, $s3, $v1
    ctx->pc = 0x2913c8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 3));
    // 0x2913cc: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x2913ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x2913d0: 0x2649825  or          $s3, $s3, $a0
    ctx->pc = 0x2913d0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 4));
    // 0x2913d4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2913d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2913d8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2913d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2913dc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2913dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2913e0: 0x2639824  and         $s3, $s3, $v1
    ctx->pc = 0x2913e0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 3));
    // 0x2913e4: 0x2622825  or          $a1, $s3, $v0
    ctx->pc = 0x2913e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_2913e8:
    // 0x2913e8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2913e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2913ec:
    // 0x2913ec: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2913ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2913f0:
    // 0x2913f0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2913f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2913f4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2913f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2913f8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2913f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2913fc: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2913fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291400: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x291400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291404: 0x3e00008  jr          $ra
    ctx->pc = 0x291404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291404u;
            // 0x291408: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2912A0u: goto label_2912a0;
            case 0x2912C0u: goto label_2912c0;
            case 0x291310u: goto label_291310;
            case 0x29131Cu: goto label_29131c;
            case 0x291344u: goto label_291344;
            case 0x291398u: goto label_291398;
            case 0x2913B4u: goto label_2913b4;
            case 0x2913B8u: goto label_2913b8;
            case 0x2913BCu: goto label_2913bc;
            case 0x2913E8u: goto label_2913e8;
            case 0x2913ECu: goto label_2913ec;
            case 0x2913F0u: goto label_2913f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29140Cu;
    // 0x29140c: 0x0  nop
    ctx->pc = 0x29140cu;
    // NOP
}
