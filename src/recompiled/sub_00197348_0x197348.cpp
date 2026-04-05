#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00197348
// Address: 0x197348 - 0x197850
void sub_00197348_0x197348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197348_0x197348");
#endif

    ctx->pc = 0x197348u;

    // 0x197348: 0x27bdfdb0  addiu       $sp, $sp, -0x250
    ctx->pc = 0x197348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966704));
    // 0x19734c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19734cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x197350: 0x7fb30200  sq          $s3, 0x200($sp)
    ctx->pc = 0x197350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 19));
    // 0x197354: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x197354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x197358: 0x8c53cd58  lw          $s3, -0x32A8($v0)
    ctx->pc = 0x197358u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x19735c: 0x7fb00230  sq          $s0, 0x230($sp)
    ctx->pc = 0x19735cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 16));
    // 0x197360: 0x7fb10220  sq          $s1, 0x220($sp)
    ctx->pc = 0x197360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 17));
    // 0x197364: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x197364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197368: 0x7fb20210  sq          $s2, 0x210($sp)
    ctx->pc = 0x197368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 18));
    // 0x19736c: 0x7fb401f0  sq          $s4, 0x1F0($sp)
    ctx->pc = 0x19736cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 20));
    // 0x197370: 0x7fb501e0  sq          $s5, 0x1E0($sp)
    ctx->pc = 0x197370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 21));
    // 0x197374: 0xffbf01d0  sd          $ra, 0x1D0($sp)
    ctx->pc = 0x197374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 31));
    // 0x197378: 0xc0761e2  jal         func_1D8788
    ctx->pc = 0x197378u;
    SET_GPR_U32(ctx, 31, 0x197380u);
    ctx->pc = 0x19737Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197378u;
            // 0x19737c: 0xe7b40240  swc1        $f20, 0x240($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 576), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8788u;
    if (runtime->hasFunction(0x1D8788u)) {
        auto targetFn = runtime->lookupFunction(0x1D8788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197380u; }
        if (ctx->pc != 0x197380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d8788_0x1d8800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197380u; }
        if (ctx->pc != 0x197380u) { return; }
    }
    ctx->pc = 0x197380u;
    // 0x197380: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x197380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x197384: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x197384u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x197388: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x197388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19738c: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x19738cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x197390: 0x2463e040  addiu       $v1, $v1, -0x1FC0
    ctx->pc = 0x197390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959168));
    // 0x197394: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x197394u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x197398: 0xc076fd8  jal         func_1DBF60
    ctx->pc = 0x197398u;
    SET_GPR_U32(ctx, 31, 0x1973A0u);
    ctx->pc = 0x19739Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197398u;
            // 0x19739c: 0xc68c001c  lwc1        $f12, 0x1C($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DBF60u;
    if (runtime->hasFunction(0x1DBF60u)) {
        auto targetFn = runtime->lookupFunction(0x1DBF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1973A0u; }
        if (ctx->pc != 0x1973A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DBF60_0x1dbf60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1973A0u; }
        if (ctx->pc != 0x1973A0u) { return; }
    }
    ctx->pc = 0x1973A0u;
    // 0x1973a0: 0x1040011f  beqz        $v0, . + 4 + (0x11F << 2)
    ctx->pc = 0x1973A0u;
    {
        const bool branch_taken_0x1973a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1973A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1973A0u;
            // 0x1973a4: 0x3c04002b  lui         $a0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1973a0) {
            ctx->pc = 0x197820u;
            goto label_197820;
        }
    }
    ctx->pc = 0x1973A8u;
    // 0x1973a8: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x1973a8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1973ac: 0xc05e996  jal         func_17A658
    ctx->pc = 0x1973ACu;
    SET_GPR_U32(ctx, 31, 0x1973B4u);
    ctx->pc = 0x1973B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1973ACu;
            // 0x1973b0: 0x24843920  addiu       $a0, $a0, 0x3920 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1973B4u; }
        if (ctx->pc != 0x1973B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1973B4u; }
        if (ctx->pc != 0x1973B4u) { return; }
    }
    ctx->pc = 0x1973B4u;
    // 0x1973b4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1973B4u;
    {
        const bool branch_taken_0x1973b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1973b4) {
            ctx->pc = 0x1973B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1973B4u;
            // 0x1973b8: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1973D0u;
            goto label_1973d0;
        }
    }
    ctx->pc = 0x1973BCu;
    // 0x1973bc: 0x8e4401a0  lw          $a0, 0x1A0($s2)
    ctx->pc = 0x1973bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 416)));
    // 0x1973c0: 0xc05c294  jal         func_170A50
    ctx->pc = 0x1973C0u;
    SET_GPR_U32(ctx, 31, 0x1973C8u);
    ctx->pc = 0x1973C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1973C0u;
            // 0x1973c4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A50u;
    if (runtime->hasFunction(0x170A50u)) {
        auto targetFn = runtime->lookupFunction(0x170A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1973C8u; }
        if (ctx->pc != 0x1973C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170A50_0x170a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1973C8u; }
        if (ctx->pc != 0x1973C8u) { return; }
    }
    ctx->pc = 0x1973C8u;
    // 0x1973c8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1973c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1973cc: 0x0  nop
    ctx->pc = 0x1973ccu;
    // NOP
label_1973d0:
    // 0x1973d0: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1973d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1973d4: 0x8c500104  lw          $s0, 0x104($v0)
    ctx->pc = 0x1973d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x1973d8: 0x3c15002a  lui         $s5, 0x2A
    ctx->pc = 0x1973d8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)42 << 16));
    // 0x1973dc: 0xdea5bdf8  ld          $a1, -0x4208($s5)
    ctx->pc = 0x1973dcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 21), 4294950392)));
    // 0x1973e0: 0xde020040  ld          $v0, 0x40($s0)
    ctx->pc = 0x1973e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1973e4: 0x10450004  beq         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1973E4u;
    {
        const bool branch_taken_0x1973e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1973E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1973E4u;
            // 0x1973e8: 0x94715048  lhu         $s1, 0x5048($v1) (Delay Slot)
        SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 20552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1973e4) {
            ctx->pc = 0x1973F8u;
            goto label_1973f8;
        }
    }
    ctx->pc = 0x1973ECu;
    // 0x1973ec: 0xc04da64  jal         func_136990
    ctx->pc = 0x1973ECu;
    SET_GPR_U32(ctx, 31, 0x1973F4u);
    ctx->pc = 0x1973F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1973ECu;
            // 0x1973f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1973F4u; }
        if (ctx->pc != 0x1973F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1973F4u; }
        if (ctx->pc != 0x1973F4u) { return; }
    }
    ctx->pc = 0x1973F4u;
    // 0x1973f4: 0x0  nop
    ctx->pc = 0x1973f4u;
    // NOP
label_1973f8:
    // 0x1973f8: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x1973f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1973fc: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x1973fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x197400: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x197400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x197404: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x197404u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x197408: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x197408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x19740c: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x19740cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x197410: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x197410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x197414: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x197414u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x197418: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x197418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x19741c: 0x78630030  lq          $v1, 0x30($v1)
    ctx->pc = 0x19741cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x197420: 0x7fa30180  sq          $v1, 0x180($sp)
    ctx->pc = 0x197420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 3));
    // 0x197424: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x197424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x197428: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x197428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x19742c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x19742cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x197430: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x197430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x197434: 0x40f809  jalr        $v0
    ctx->pc = 0x197434u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19743Cu);
        ctx->pc = 0x197438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197434u;
            // 0x197438: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19743Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1973D0u: goto label_1973d0;
            case 0x1973F8u: goto label_1973f8;
            case 0x197478u: goto label_197478;
            case 0x19747Cu: goto label_19747c;
            case 0x197500u: goto label_197500;
            case 0x197588u: goto label_197588;
            case 0x1975F8u: goto label_1975f8;
            case 0x197610u: goto label_197610;
            case 0x197638u: goto label_197638;
            case 0x197654u: goto label_197654;
            case 0x197788u: goto label_197788;
            case 0x197808u: goto label_197808;
            case 0x197820u: goto label_197820;
            case 0x19782Cu: goto label_19782c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19743Cu; }
            if (ctx->pc != 0x19743Cu) { return; }
        }
        }
    }
    ctx->pc = 0x19743Cu;
    // 0x19743c: 0x8c450080  lw          $a1, 0x80($v0)
    ctx->pc = 0x19743cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x197440: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x197440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x197444: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x197444u;
    {
        const bool branch_taken_0x197444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x197448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197444u;
            // 0x197448: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197444) {
            ctx->pc = 0x19747Cu;
            goto label_19747c;
        }
    }
    ctx->pc = 0x19744Cu;
    // 0x19744c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x19744cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x197450: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x197450u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x197454: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x197454u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x197458: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x197458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19745c: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x19745cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x197460: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x197460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x197464: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x197464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x197468: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x197468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19746c: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19746Cu;
    {
        const bool branch_taken_0x19746c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x197470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19746Cu;
            // 0x197470: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19746c) {
            ctx->pc = 0x197478u;
            goto label_197478;
        }
    }
    ctx->pc = 0x197474u;
    // 0x197474: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x197474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_197478:
    // 0x197478: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x197478u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19747c:
    // 0x19747c: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x19747Cu;
    {
        const bool branch_taken_0x19747c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x19747c) {
            ctx->pc = 0x197500u;
            goto label_197500;
        }
    }
    ctx->pc = 0x197484u;
    // 0x197484: 0xc0909c4  jal         func_242710
    ctx->pc = 0x197484u;
    SET_GPR_U32(ctx, 31, 0x19748Cu);
    ctx->pc = 0x197488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197484u;
            // 0x197488: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242710u;
    if (runtime->hasFunction(0x242710u)) {
        auto targetFn = runtime->lookupFunction(0x242710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19748Cu; }
        if (ctx->pc != 0x19748Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242710_0x242720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19748Cu; }
        if (ctx->pc != 0x19748Cu) { return; }
    }
    ctx->pc = 0x19748Cu;
    // 0x19748c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x19748cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x197490: 0xd8420030  lqc2        $vf2, 0x30($v0)
    ctx->pc = 0x197490u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x197494: 0x846400b8  lh          $a0, 0xB8($v1)
    ctx->pc = 0x197494u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 184)));
    // 0x197498: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x197498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x19749c: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x19749cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1974a0: 0x40f809  jalr        $v0
    ctx->pc = 0x1974A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1974A8u);
        ctx->pc = 0x1974A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1974A0u;
            // 0x1974a4: 0xfba201b0  sqc2        $vf2, 0x1B0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 432), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1974A8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1973D0u: goto label_1973d0;
            case 0x1973F8u: goto label_1973f8;
            case 0x197478u: goto label_197478;
            case 0x19747Cu: goto label_19747c;
            case 0x197500u: goto label_197500;
            case 0x197588u: goto label_197588;
            case 0x1975F8u: goto label_1975f8;
            case 0x197610u: goto label_197610;
            case 0x197638u: goto label_197638;
            case 0x197654u: goto label_197654;
            case 0x197788u: goto label_197788;
            case 0x197808u: goto label_197808;
            case 0x197820u: goto label_197820;
            case 0x19782Cu: goto label_19782c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1974A8u; }
            if (ctx->pc != 0x1974A8u) { return; }
        }
        }
    }
    ctx->pc = 0x1974A8u;
    // 0x1974a8: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x1974a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x1974ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1974acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1974b0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1974b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1974b4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1974b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1974b8: 0x48a31800  qmtc2.ni    $v1, $vf3
    ctx->pc = 0x1974b8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1974bc: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1974bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1974c0: 0x4a830840  vaddx.y     $vf1, $vf1, $vf3x
    ctx->pc = 0x1974c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1974c4: 0xdba201b0  lqc2        $vf2, 0x1B0($sp)
    ctx->pc = 0x1974c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1974c8: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1974c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1974cc: 0xdba10180  lqc2        $vf1, 0x180($sp)
    ctx->pc = 0x1974ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1974d0: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1974d0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1974d4: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x1974d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1974d8: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1974d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1974dc: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1974dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1974e0: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1974e0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1974e4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1974e4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1974e8: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1974e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1974ec: 0x4a0002ff  vnop
    ctx->pc = 0x1974ecu;
    // NOP operation, no action needed for VU0
    // 0x1974f0: 0x4a0002ff  vnop
    ctx->pc = 0x1974f0u;
    // NOP operation, no action needed for VU0
    // 0x1974f4: 0x4be4133c  vmove.xyzw  $vf4, $vf2
    ctx->pc = 0x1974f4u;
    ctx->vu0_vf[4] = ctx->vu0_vf[2];
    // 0x1974f8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1974F8u;
    {
        const bool branch_taken_0x1974f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1974FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1974F8u;
            // 0x1974fc: 0xfba20040  sqc2        $vf2, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1974f8) {
            ctx->pc = 0x197588u;
            goto label_197588;
        }
    }
    ctx->pc = 0x197500u;
label_197500:
    // 0x197500: 0xc0909c4  jal         func_242710
    ctx->pc = 0x197500u;
    SET_GPR_U32(ctx, 31, 0x197508u);
    ctx->pc = 0x197504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197500u;
            // 0x197504: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242710u;
    if (runtime->hasFunction(0x242710u)) {
        auto targetFn = runtime->lookupFunction(0x242710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197508u; }
        if (ctx->pc != 0x197508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242710_0x242720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197508u; }
        if (ctx->pc != 0x197508u) { return; }
    }
    ctx->pc = 0x197508u;
    // 0x197508: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x197508u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19750c: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x19750cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x197510: 0xfba20130  sqc2        $vf2, 0x130($sp)
    ctx->pc = 0x197510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x197514: 0x4be220ac  vsub.xyzw   $vf2, $vf4, $vf2
    ctx->pc = 0x197514u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x197518: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x197518u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x19751c: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x19751cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x197520: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x197520u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x197524: 0xdba30020  lqc2        $vf3, 0x20($sp)
    ctx->pc = 0x197524u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x197528: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x197528u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x19752c: 0x4a0003bf  vwaitq
    ctx->pc = 0x19752cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x197530: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x197530u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x197534: 0x4a0002ff  vnop
    ctx->pc = 0x197534u;
    // NOP operation, no action needed for VU0
    // 0x197538: 0x4a0002ff  vnop
    ctx->pc = 0x197538u;
    // NOP operation, no action needed for VU0
    // 0x19753c: 0xfba20050  sqc2        $vf2, 0x50($sp)
    ctx->pc = 0x19753cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x197540: 0xfba30140  sqc2        $vf3, 0x140($sp)
    ctx->pc = 0x197540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x197544: 0x4be3212c  vsub.xyzw   $vf4, $vf4, $vf3
    ctx->pc = 0x197544u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x197548: 0x4be410ea  vmul.xyzw   $vf3, $vf2, $vf4
    ctx->pc = 0x197548u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x19754c: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x19754cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x197550: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x197550u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x197554: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x197554u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x197558: 0x4be2212c  vsub.xyzw   $vf4, $vf4, $vf2
    ctx->pc = 0x197558u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x19755c: 0x4be420aa  vmul.xyzw   $vf2, $vf4, $vf4
    ctx->pc = 0x19755cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x197560: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x197560u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x197564: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x197564u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x197568: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x197568u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x19756c: 0x4a0003bf  vwaitq
    ctx->pc = 0x19756cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x197570: 0x4bc0211c  vmulq.xyz   $vf4, $vf4, $Q
    ctx->pc = 0x197570u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x197574: 0x4a0002ff  vnop
    ctx->pc = 0x197574u;
    // NOP operation, no action needed for VU0
    // 0x197578: 0x4a0002ff  vnop
    ctx->pc = 0x197578u;
    // NOP operation, no action needed for VU0
    // 0x19757c: 0x4be1233c  vmove.xyzw  $vf1, $vf4
    ctx->pc = 0x19757cu;
    ctx->vu0_vf[1] = ctx->vu0_vf[4];
    // 0x197580: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x197580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x197584: 0x0  nop
    ctx->pc = 0x197584u;
    // NOP
label_197588:
    // 0x197588: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x197588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x19758c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x19758cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x197590: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x197590u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x197594: 0xfba20190  sqc2        $vf2, 0x190($sp)
    ctx->pc = 0x197594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x197598: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x197598u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x19759c: 0x7ba50180  lq          $a1, 0x180($sp)
    ctx->pc = 0x19759cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1975a0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1975a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1975a4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1975a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1975a8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1975a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1975ac: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x1975acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1975b0: 0x4be410a8  vadd.xyzw   $vf2, $vf2, $vf4
    ctx->pc = 0x1975b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1975b4: 0x48261000  qmfc2.ni    $a2, $vf2
    ctx->pc = 0x1975b4u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1975b8: 0xdba20190  lqc2        $vf2, 0x190($sp)
    ctx->pc = 0x1975b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1975bc: 0x4a811080  vaddx.y     $vf2, $vf2, $vf1x
    ctx->pc = 0x1975bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1975c0: 0xc0613d0  jal         func_184F40
    ctx->pc = 0x1975C0u;
    SET_GPR_U32(ctx, 31, 0x1975C8u);
    ctx->pc = 0x1975C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1975C0u;
            // 0x1975c4: 0x48271000  qmfc2.ni    $a3, $vf2 (Delay Slot)
        SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184F40u;
    if (runtime->hasFunction(0x184F40u)) {
        auto targetFn = runtime->lookupFunction(0x184F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1975C8u; }
        if (ctx->pc != 0x1975C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184F40_0x184f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1975C8u; }
        if (ctx->pc != 0x1975C8u) { return; }
    }
    ctx->pc = 0x1975C8u;
    // 0x1975c8: 0xc06589a  jal         func_196268
    ctx->pc = 0x1975C8u;
    SET_GPR_U32(ctx, 31, 0x1975D0u);
    ctx->pc = 0x1975CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1975C8u;
            // 0x1975cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196268u;
    if (runtime->hasFunction(0x196268u)) {
        auto targetFn = runtime->lookupFunction(0x196268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1975D0u; }
        if (ctx->pc != 0x1975D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196268_0x196268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1975D0u; }
        if (ctx->pc != 0x1975D0u) { return; }
    }
    ctx->pc = 0x1975D0u;
    // 0x1975d0: 0x27b100f0  addiu       $s1, $sp, 0xF0
    ctx->pc = 0x1975d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1975d4: 0xc090e12  jal         func_243848
    ctx->pc = 0x1975D4u;
    SET_GPR_U32(ctx, 31, 0x1975DCu);
    ctx->pc = 0x1975D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1975D4u;
            // 0x1975d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243848u;
    if (runtime->hasFunction(0x243848u)) {
        auto targetFn = runtime->lookupFunction(0x243848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1975DCu; }
        if (ctx->pc != 0x1975DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243848_0x243850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1975DCu; }
        if (ctx->pc != 0x1975DCu) { return; }
    }
    ctx->pc = 0x1975DCu;
    // 0x1975dc: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x1975dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1975e0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1975e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1975e4: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x1975e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1975e8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1975E8u;
    {
        const bool branch_taken_0x1975e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1975ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1975E8u;
            // 0x1975ec: 0xdea5bdf8  ld          $a1, -0x4208($s5) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 21), 4294950392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1975e8) {
            ctx->pc = 0x1975F8u;
            goto label_1975f8;
        }
    }
    ctx->pc = 0x1975F0u;
    // 0x1975f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1975F0u;
    {
        const bool branch_taken_0x1975f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1975F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1975F0u;
            // 0x1975f4: 0x26020020  addiu       $v0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1975f0) {
            ctx->pc = 0x197610u;
            goto label_197610;
        }
    }
    ctx->pc = 0x1975F8u;
label_1975f8:
    // 0x1975f8: 0xde020068  ld          $v0, 0x68($s0)
    ctx->pc = 0x1975f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1975fc: 0x10450004  beq         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1975FCu;
    {
        const bool branch_taken_0x1975fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x197600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1975FCu;
            // 0x197600: 0x26020070  addiu       $v0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1975fc) {
            ctx->pc = 0x197610u;
            goto label_197610;
        }
    }
    ctx->pc = 0x197604u;
    // 0x197604: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x197604u;
    SET_GPR_U32(ctx, 31, 0x19760Cu);
    ctx->pc = 0x197608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197604u;
            // 0x197608: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19760Cu; }
        if (ctx->pc != 0x19760Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19760Cu; }
        if (ctx->pc != 0x19760Cu) { return; }
    }
    ctx->pc = 0x19760Cu;
    // 0x19760c: 0x26020070  addiu       $v0, $s0, 0x70
    ctx->pc = 0x19760cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_197610:
    // 0x197610: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x197610u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x197614: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x197614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x197618: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x197618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19761c: 0x8c50c994  lw          $s0, -0x366C($v0)
    ctx->pc = 0x19761cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953364)));
    // 0x197620: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x197620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x197624: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x197624u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x197628: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x197628u;
    {
        const bool branch_taken_0x197628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x19762Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197628u;
            // 0x19762c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197628) {
            ctx->pc = 0x197638u;
            goto label_197638;
        }
    }
    ctx->pc = 0x197630u;
    // 0x197630: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x197630u;
    {
        const bool branch_taken_0x197630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197630u;
            // 0x197634: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197630) {
            ctx->pc = 0x197654u;
            goto label_197654;
        }
    }
    ctx->pc = 0x197638u;
label_197638:
    // 0x197638: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x197638u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x19763c: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x19763cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x197640: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x197640u;
    {
        const bool branch_taken_0x197640 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x197644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197640u;
            // 0x197644: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197640) {
            ctx->pc = 0x197654u;
            goto label_197654;
        }
    }
    ctx->pc = 0x197648u;
    // 0x197648: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x197648u;
    SET_GPR_U32(ctx, 31, 0x197650u);
    ctx->pc = 0x19764Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197648u;
            // 0x19764c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197650u; }
        if (ctx->pc != 0x197650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197650u; }
        if (ctx->pc != 0x197650u) { return; }
    }
    ctx->pc = 0x197650u;
    // 0x197650: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x197650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_197654:
    // 0x197654: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x197654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x197658: 0xdba30090  lqc2        $vf3, 0x90($sp)
    ctx->pc = 0x197658u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19765c: 0xc4415058  lwc1        $f1, 0x5058($v0)
    ctx->pc = 0x19765cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x197660: 0xd8810030  lqc2        $vf1, 0x30($a0)
    ctx->pc = 0x197660u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x197664: 0xdba400f0  lqc2        $vf4, 0xF0($sp)
    ctx->pc = 0x197664u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x197668: 0x4a810101  vaddy.y     $vf4, $vf0, $vf1y
    ctx->pc = 0x197668u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x19766c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x19766cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x197670: 0xfba400f0  sqc2        $vf4, 0xF0($sp)
    ctx->pc = 0x197670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x197674: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x197674u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x197678: 0xfba30150  sqc2        $vf3, 0x150($sp)
    ctx->pc = 0x197678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x19767c: 0x4be11858  vmulx.xyzw  $vf1, $vf3, $vf1x
    ctx->pc = 0x19767cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x197680: 0xfba10160  sqc2        $vf1, 0x160($sp)
    ctx->pc = 0x197680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x197684: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x197684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x197688: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x197688u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x19768c: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x19768cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x197690: 0x4be12068  vadd.xyzw   $vf1, $vf4, $vf1
    ctx->pc = 0x197690u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x197694: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x197694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x197698: 0xfba30170  sqc2        $vf3, 0x170($sp)
    ctx->pc = 0x197698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x19769c: 0xdba10190  lqc2        $vf1, 0x190($sp)
    ctx->pc = 0x19769cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1976a0: 0x4be308ec  vsub.xyzw   $vf3, $vf1, $vf3
    ctx->pc = 0x1976a0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1976a4: 0xfba30100  sqc2        $vf3, 0x100($sp)
    ctx->pc = 0x1976a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1976a8: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1976a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1976ac: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1976acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1976b0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1976b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1976b4: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x1976b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x1976b8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1976b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1976bc: 0xc6800010  lwc1        $f0, 0x10($s4)
    ctx->pc = 0x1976bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1976c0: 0xc4425054  lwc1        $f2, 0x5054($v0)
    ctx->pc = 0x1976c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1976c4: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1976c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1976c8: 0xa7a00128  sh          $zero, 0x128($sp)
    ctx->pc = 0x1976c8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 296), (uint16_t)GPR_U32(ctx, 0));
    // 0x1976cc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1976ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1976d0: 0xe7a20124  swc1        $f2, 0x124($sp)
    ctx->pc = 0x1976d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x1976d4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1976d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1976d8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1976d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1976dc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1976dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1976e0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1976e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1976e4: 0xe7a10120  swc1        $f1, 0x120($sp)
    ctx->pc = 0x1976e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x1976e8: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x1976e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1976ec: 0x4be32128  vadd.xyzw   $vf4, $vf4, $vf3
    ctx->pc = 0x1976ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1976f0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1976f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1976f4: 0xc68c001c  lwc1        $f12, 0x1C($s4)
    ctx->pc = 0x1976f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1976f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1976f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1976fc: 0xac62c990  sw          $v0, -0x3670($v1)
    ctx->pc = 0x1976fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294953360), GPR_U32(ctx, 2));
    // 0x197700: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x197700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197704: 0xfba401c0  sqc2        $vf4, 0x1C0($sp)
    ctx->pc = 0x197704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x197708: 0xc076fa6  jal         func_1DBE98
    ctx->pc = 0x197708u;
    SET_GPR_U32(ctx, 31, 0x197710u);
    ctx->pc = 0x19770Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197708u;
            // 0x19770c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DBE98u;
    if (runtime->hasFunction(0x1DBE98u)) {
        auto targetFn = runtime->lookupFunction(0x1DBE98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197710u; }
        if (ctx->pc != 0x197710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DBE98_0x1dbe98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197710u; }
        if (ctx->pc != 0x197710u) { return; }
    }
    ctx->pc = 0x197710u;
    // 0x197710: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x197710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x197714: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x197714u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x197718: 0xc68c0010  lwc1        $f12, 0x10($s4)
    ctx->pc = 0x197718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19771c: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x19771cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x197720: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x197720u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x197724: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x197724u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x197728: 0xdba401c0  lqc2        $vf4, 0x1C0($sp)
    ctx->pc = 0x197728u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x19772c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19772cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x197730: 0x8c44bcf8  lw          $a0, -0x4308($v0)
    ctx->pc = 0x197730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
    // 0x197734: 0x46146302  mul.s       $f12, $f12, $f20
    ctx->pc = 0x197734u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x197738: 0x24a2f170  addiu       $v0, $a1, -0xE90
    ctx->pc = 0x197738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963568));
    // 0x19773c: 0xaca3f170  sw          $v1, -0xE90($a1)
    ctx->pc = 0x19773cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294963568), GPR_U32(ctx, 3));
    // 0x197740: 0x24c65ad8  addiu       $a2, $a2, 0x5AD8
    ctx->pc = 0x197740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23256));
    // 0x197744: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x197744u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197748: 0x48252000  qmfc2.ni    $a1, $vf4
    ctx->pc = 0x197748u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x19774c: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x19774cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x197750: 0xac47000c  sw          $a3, 0xC($v0)
    ctx->pc = 0x197750u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
    // 0x197754: 0xac480014  sw          $t0, 0x14($v0)
    ctx->pc = 0x197754u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 8));
    // 0x197758: 0xac510020  sw          $s1, 0x20($v0)
    ctx->pc = 0x197758u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 17));
    // 0x19775c: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x19775cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x197760: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x197760u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x197764: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x197764u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x197768: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x197768u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x19776c: 0xc047a34  jal         func_11E8D0
    ctx->pc = 0x19776Cu;
    SET_GPR_U32(ctx, 31, 0x197774u);
    ctx->pc = 0x197770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19776Cu;
            // 0x197770: 0xac40001c  sw          $zero, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E8D0u;
    if (runtime->hasFunction(0x11E8D0u)) {
        auto targetFn = runtime->lookupFunction(0x11E8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197774u; }
        if (ctx->pc != 0x197774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11e8d0_0x11ea98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197774u; }
        if (ctx->pc != 0x197774u) { return; }
    }
    ctx->pc = 0x197774u;
    // 0x197774: 0x87a20128  lh          $v0, 0x128($sp)
    ctx->pc = 0x197774u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x197778: 0x1840002c  blez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x197778u;
    {
        const bool branch_taken_0x197778 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x19777Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197778u;
            // 0x19777c: 0x7bb00230  lq          $s0, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197778) {
            ctx->pc = 0x19782Cu;
            goto label_19782c;
        }
    }
    ctx->pc = 0x197780u;
    // 0x197780: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x197780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x197784: 0x0  nop
    ctx->pc = 0x197784u;
    // NOP
label_197788:
    // 0x197788: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x197788u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x19778c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19778cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x197790: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x197790u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x197794: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x197794u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x197798: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x197798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x19779c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x19779cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1977a0: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x1977a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x1977a4: 0x78630050  lq          $v1, 0x50($v1)
    ctx->pc = 0x1977a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x1977a8: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x1977a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x1977ac: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x1977acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1977b0: 0x40f809  jalr        $v0
    ctx->pc = 0x1977B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1977B8u);
        ctx->pc = 0x1977B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1977B0u;
            // 0x1977b4: 0x7fa301a0  sq          $v1, 0x1A0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1977B8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1973D0u: goto label_1973d0;
            case 0x1973F8u: goto label_1973f8;
            case 0x197478u: goto label_197478;
            case 0x19747Cu: goto label_19747c;
            case 0x197500u: goto label_197500;
            case 0x197588u: goto label_197588;
            case 0x1975F8u: goto label_1975f8;
            case 0x197610u: goto label_197610;
            case 0x197638u: goto label_197638;
            case 0x197654u: goto label_197654;
            case 0x197788u: goto label_197788;
            case 0x197808u: goto label_197808;
            case 0x197820u: goto label_197820;
            case 0x19782Cu: goto label_19782c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1977B8u; }
            if (ctx->pc != 0x1977B8u) { return; }
        }
        }
    }
    ctx->pc = 0x1977B8u;
    // 0x1977b8: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x1977b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x1977bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1977bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1977c0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1977c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1977c4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1977c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1977c8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1977c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1977cc: 0xdba10190  lqc2        $vf1, 0x190($sp)
    ctx->pc = 0x1977ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1977d0: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x1977d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1977d4: 0x701024a9  por         $a0, $zero, $s0
    ctx->pc = 0x1977d4u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
    // 0x1977d8: 0xdba201a0  lqc2        $vf2, 0x1A0($sp)
    ctx->pc = 0x1977d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1977dc: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1977dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1977e0: 0xc06562c  jal         func_1958B0
    ctx->pc = 0x1977E0u;
    SET_GPR_U32(ctx, 31, 0x1977E8u);
    ctx->pc = 0x1977E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1977E0u;
            // 0x1977e4: 0x48251000  qmfc2.ni    $a1, $vf2 (Delay Slot)
        SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1958B0u;
    if (runtime->hasFunction(0x1958B0u)) {
        auto targetFn = runtime->lookupFunction(0x1958B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1977E8u; }
        if (ctx->pc != 0x1977E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1958b0_0x195ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1977E8u; }
        if (ctx->pc != 0x1977E8u) { return; }
    }
    ctx->pc = 0x1977E8u;
    // 0x1977e8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1977E8u;
    {
        const bool branch_taken_0x1977e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1977ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1977E8u;
            // 0x1977ec: 0x87a20128  lh          $v0, 0x128($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1977e8) {
            ctx->pc = 0x197808u;
            goto label_197808;
        }
    }
    ctx->pc = 0x1977F0u;
    // 0x1977f0: 0x9682002e  lhu         $v0, 0x2E($s4)
    ctx->pc = 0x1977f0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 46)));
    // 0x1977f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1977f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1977f8: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1977f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1977fc: 0xc0782f0  jal         func_1E0BC0
    ctx->pc = 0x1977FCu;
    SET_GPR_U32(ctx, 31, 0x197804u);
    ctx->pc = 0x197800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1977FCu;
            // 0x197800: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0BC0u;
    if (runtime->hasFunction(0x1E0BC0u)) {
        auto targetFn = runtime->lookupFunction(0x1E0BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197804u; }
        if (ctx->pc != 0x197804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0BC0_0x1e0bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197804u; }
        if (ctx->pc != 0x197804u) { return; }
    }
    ctx->pc = 0x197804u;
    // 0x197804: 0x87a20128  lh          $v0, 0x128($sp)
    ctx->pc = 0x197804u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 296)));
label_197808:
    // 0x197808: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x197808u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x19780c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x19780cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x197810: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x197810u;
    {
        const bool branch_taken_0x197810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x197814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197810u;
            // 0x197814: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197810) {
            ctx->pc = 0x197788u;
            runtime->cooperativeGuestYield();
            goto label_197788;
        }
    }
    ctx->pc = 0x197818u;
    // 0x197818: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x197818u;
    {
        const bool branch_taken_0x197818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19781Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197818u;
            // 0x19781c: 0x7bb00230  lq          $s0, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197818) {
            ctx->pc = 0x19782Cu;
            goto label_19782c;
        }
    }
    ctx->pc = 0x197820u;
label_197820:
    // 0x197820: 0xc065e14  jal         func_197850
    ctx->pc = 0x197820u;
    SET_GPR_U32(ctx, 31, 0x197828u);
    ctx->pc = 0x197850u;
    if (runtime->hasFunction(0x197850u)) {
        auto targetFn = runtime->lookupFunction(0x197850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197828u; }
        if (ctx->pc != 0x197828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197850_0x197850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197828u; }
        if (ctx->pc != 0x197828u) { return; }
    }
    ctx->pc = 0x197828u;
    // 0x197828: 0x7bb00230  lq          $s0, 0x230($sp)
    ctx->pc = 0x197828u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 560)));
label_19782c:
    // 0x19782c: 0x7bb10220  lq          $s1, 0x220($sp)
    ctx->pc = 0x19782cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x197830: 0x7bb20210  lq          $s2, 0x210($sp)
    ctx->pc = 0x197830u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x197834: 0x7bb30200  lq          $s3, 0x200($sp)
    ctx->pc = 0x197834u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x197838: 0x7bb401f0  lq          $s4, 0x1F0($sp)
    ctx->pc = 0x197838u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x19783c: 0x7bb501e0  lq          $s5, 0x1E0($sp)
    ctx->pc = 0x19783cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x197840: 0xdfbf01d0  ld          $ra, 0x1D0($sp)
    ctx->pc = 0x197840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x197844: 0xc7b40240  lwc1        $f20, 0x240($sp)
    ctx->pc = 0x197844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x197848: 0x3e00008  jr          $ra
    ctx->pc = 0x197848u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19784Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197848u;
            // 0x19784c: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1973D0u: goto label_1973d0;
            case 0x1973F8u: goto label_1973f8;
            case 0x197478u: goto label_197478;
            case 0x19747Cu: goto label_19747c;
            case 0x197500u: goto label_197500;
            case 0x197588u: goto label_197588;
            case 0x1975F8u: goto label_1975f8;
            case 0x197610u: goto label_197610;
            case 0x197638u: goto label_197638;
            case 0x197654u: goto label_197654;
            case 0x197788u: goto label_197788;
            case 0x197808u: goto label_197808;
            case 0x197820u: goto label_197820;
            case 0x19782Cu: goto label_19782c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x197850u;
}
