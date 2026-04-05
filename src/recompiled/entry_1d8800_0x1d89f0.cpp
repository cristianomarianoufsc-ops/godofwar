#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1d8800
// Address: 0x1d8800 - 0x1d89f0
void entry_1d8800_0x1d89f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1d8800_0x1d89f0");
#endif

    ctx->pc = 0x1d8800u;

    // 0x1d8800: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d8800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d8804: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d8804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d8808: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1d8808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1d880c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d880cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8810: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1d8810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1d8814: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d8814u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8818: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d8818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d881c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1d881cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1d8820: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d8820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d8824: 0x8c430174  lw          $v1, 0x174($v0)
    ctx->pc = 0x1d8824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 372)));
    // 0x1d8828: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1d8828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1d882c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D882Cu;
    {
        const bool branch_taken_0x1d882c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D882Cu;
            // 0x1d8830: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d882c) {
            ctx->pc = 0x1D884Cu;
            goto label_1d884c;
        }
    }
    ctx->pc = 0x1D8834u;
    // 0x1d8834: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1d8834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1d8838: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D8838u;
    {
        const bool branch_taken_0x1d8838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D883Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8838u;
            // 0x1d883c: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8838) {
            ctx->pc = 0x1D884Cu;
            goto label_1d884c;
        }
    }
    ctx->pc = 0x1D8840u;
    // 0x1d8840: 0x3062004c  andi        $v0, $v1, 0x4C
    ctx->pc = 0x1d8840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)76);
    // 0x1d8844: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1D8844u;
    {
        const bool branch_taken_0x1d8844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8844u;
            // 0x1d8848: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8844) {
            ctx->pc = 0x1D88F0u;
            goto label_1d88f0;
        }
    }
    ctx->pc = 0x1D884Cu;
label_1d884c:
    // 0x1d884c: 0x90422d3e  lbu         $v0, 0x2D3E($v0)
    ctx->pc = 0x1d884cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11582)));
    // 0x1d8850: 0x2443fffd  addiu       $v1, $v0, -0x3
    ctx->pc = 0x1d8850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x1d8854: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1d8854u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1d8858: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x1D8858u;
    {
        const bool branch_taken_0x1d8858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D885Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8858u;
            // 0x1d885c: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8858) {
            ctx->pc = 0x1D89C8u;
            goto label_1d89c8;
        }
    }
    ctx->pc = 0x1D8860u;
    // 0x1d8860: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d8860u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d8864: 0x24426b20  addiu       $v0, $v0, 0x6B20
    ctx->pc = 0x1d8864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27424));
    // 0x1d8868: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d8868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d886c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d886cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d8870: 0x400008  jr          $v0
    ctx->pc = 0x1D8870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D8878u: goto label_1d8878;
            case 0x1D88A8u: goto label_1d88a8;
            case 0x1D891Cu: goto label_1d891c;
            case 0x1D8950u: goto label_1d8950;
            case 0x1D89A8u: goto label_1d89a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D8878u;
label_1d8878:
    // 0x1d8878: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d8878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d887c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1d887cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d8880: 0xc0761e2  jal         func_1D8788
    ctx->pc = 0x1D8880u;
    SET_GPR_U32(ctx, 31, 0x1D8888u);
    ctx->pc = 0x1D8884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8880u;
            // 0x1d8884: 0x8c44cd58  lw          $a0, -0x32A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8788u;
    if (runtime->hasFunction(0x1D8788u)) {
        auto targetFn = runtime->lookupFunction(0x1D8788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8888u; }
        if (ctx->pc != 0x1D8888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d8788_0x1d8800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8888u; }
        if (ctx->pc != 0x1D8888u) { return; }
    }
    ctx->pc = 0x1D8888u;
    // 0x1d8888: 0x24030038  addiu       $v1, $zero, 0x38
    ctx->pc = 0x1d8888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1d888c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1d888cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d8890: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8894: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1d8894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1d8898: 0x2463deb8  addiu       $v1, $v1, -0x2148
    ctx->pc = 0x1d8898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958776));
    // 0x1d889c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d889cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d88a0: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1D88A0u;
    {
        const bool branch_taken_0x1d88a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D88A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D88A0u;
            // 0x1d88a4: 0xc44c0004  lwc1        $f12, 0x4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d88a0) {
            ctx->pc = 0x1D89B8u;
            goto label_1d89b8;
        }
    }
    ctx->pc = 0x1D88A8u;
label_1d88a8:
    // 0x1d88a8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d88a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d88ac: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1d88acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d88b0: 0xc0761e2  jal         func_1D8788
    ctx->pc = 0x1D88B0u;
    SET_GPR_U32(ctx, 31, 0x1D88B8u);
    ctx->pc = 0x1D88B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D88B0u;
            // 0x1d88b4: 0x8c44cd58  lw          $a0, -0x32A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8788u;
    if (runtime->hasFunction(0x1D8788u)) {
        auto targetFn = runtime->lookupFunction(0x1D8788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D88B8u; }
        if (ctx->pc != 0x1D88B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d8788_0x1d8800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D88B8u; }
        if (ctx->pc != 0x1D88B8u) { return; }
    }
    ctx->pc = 0x1D88B8u;
    // 0x1d88b8: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x1d88b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1d88bc: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1d88bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d88c0: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1d88c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x1d88c4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1d88c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1d88c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d88c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d88cc: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1d88ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1d88d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d88d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d88d4: 0x2463e040  addiu       $v1, $v1, -0x1FC0
    ctx->pc = 0x1d88d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959168));
    // 0x1d88d8: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1d88d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d88dc: 0xc60c000c  lwc1        $f12, 0xC($s0)
    ctx->pc = 0x1d88dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d88e0: 0xc076fd8  jal         func_1DBF60
    ctx->pc = 0x1D88E0u;
    SET_GPR_U32(ctx, 31, 0x1D88E8u);
    ctx->pc = 0x1D88E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D88E0u;
            // 0x1d88e4: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DBF60u;
    if (runtime->hasFunction(0x1DBF60u)) {
        auto targetFn = runtime->lookupFunction(0x1DBF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D88E8u; }
        if (ctx->pc != 0x1D88E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DBF60_0x1dbf60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D88E8u; }
        if (ctx->pc != 0x1D88E8u) { return; }
    }
    ctx->pc = 0x1D88E8u;
    // 0x1d88e8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D88E8u;
    {
        const bool branch_taken_0x1d88e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d88e8) {
            ctx->pc = 0x1D88ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D88E8u;
            // 0x1d88ec: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D88F8u;
            goto label_1d88f8;
        }
    }
    ctx->pc = 0x1D88F0u;
label_1d88f0:
    // 0x1d88f0: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1D88F0u;
    {
        const bool branch_taken_0x1d88f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D88F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D88F0u;
            // 0x1d88f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d88f0) {
            ctx->pc = 0x1D89D4u;
            goto label_1d89d4;
        }
    }
    ctx->pc = 0x1D88F8u;
label_1d88f8:
    // 0x1d88f8: 0x8c420174  lw          $v0, 0x174($v0)
    ctx->pc = 0x1d88f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 372)));
    // 0x1d88fc: 0x3042004c  andi        $v0, $v0, 0x4C
    ctx->pc = 0x1d88fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)76);
    // 0x1d8900: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1D8900u;
    {
        const bool branch_taken_0x1d8900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8900u;
            // 0x1d8904: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8900) {
            ctx->pc = 0x1D89CCu;
            goto label_1d89cc;
        }
    }
    ctx->pc = 0x1D8908u;
    // 0x1d8908: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1d8908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1d890c: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1D890Cu;
    {
        const bool branch_taken_0x1d890c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D890Cu;
            // 0x1d8910: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d890c) {
            ctx->pc = 0x1D89D0u;
            goto label_1d89d0;
        }
    }
    ctx->pc = 0x1D8914u;
    // 0x1d8914: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1D8914u;
    {
        const bool branch_taken_0x1d8914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8914u;
            // 0x1d8918: 0xc60c001c  lwc1        $f12, 0x1C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8914) {
            ctx->pc = 0x1D89B4u;
            goto label_1d89b4;
        }
    }
    ctx->pc = 0x1D891Cu;
label_1d891c:
    // 0x1d891c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d891cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d8920: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1d8920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d8924: 0xc0761e2  jal         func_1D8788
    ctx->pc = 0x1D8924u;
    SET_GPR_U32(ctx, 31, 0x1D892Cu);
    ctx->pc = 0x1D8928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8924u;
            // 0x1d8928: 0x8c44cd58  lw          $a0, -0x32A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8788u;
    if (runtime->hasFunction(0x1D8788u)) {
        auto targetFn = runtime->lookupFunction(0x1D8788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D892Cu; }
        if (ctx->pc != 0x1D892Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d8788_0x1d8800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D892Cu; }
        if (ctx->pc != 0x1D892Cu) { return; }
    }
    ctx->pc = 0x1D892Cu;
    // 0x1d892c: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x1d892cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1d8930: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1d8930u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d8934: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8938: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1d8938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1d893c: 0x2463e440  addiu       $v1, $v1, -0x1BC0
    ctx->pc = 0x1d893cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960192));
    // 0x1d8940: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d8940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d8944: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1D8944u;
    {
        const bool branch_taken_0x1d8944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8944u;
            // 0x1d8948: 0xc44c0004  lwc1        $f12, 0x4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8944) {
            ctx->pc = 0x1D89B8u;
            goto label_1d89b8;
        }
    }
    ctx->pc = 0x1D894Cu;
    // 0x1d894c: 0x0  nop
    ctx->pc = 0x1d894cu;
    // NOP
label_1d8950:
    // 0x1d8950: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d8950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d8954: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1d8954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1d8958: 0xc0761e2  jal         func_1D8788
    ctx->pc = 0x1D8958u;
    SET_GPR_U32(ctx, 31, 0x1D8960u);
    ctx->pc = 0x1D895Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8958u;
            // 0x1d895c: 0x8c44cd58  lw          $a0, -0x32A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8788u;
    if (runtime->hasFunction(0x1D8788u)) {
        auto targetFn = runtime->lookupFunction(0x1D8788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8960u; }
        if (ctx->pc != 0x1D8960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d8788_0x1d8800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8960u; }
        if (ctx->pc != 0x1D8960u) { return; }
    }
    ctx->pc = 0x1D8960u;
    // 0x1d8960: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1d8960u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1d8964: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1d8964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1d8968: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d896c: 0x2463e1e8  addiu       $v1, $v1, -0x1E18
    ctx->pc = 0x1d896cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959592));
    // 0x1d8970: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d8970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d8974: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1d8974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8978: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d8978u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d897c: 0xc44c0004  lwc1        $f12, 0x4($v0)
    ctx->pc = 0x1d897cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d8980: 0xc076fd8  jal         func_1DBF60
    ctx->pc = 0x1D8980u;
    SET_GPR_U32(ctx, 31, 0x1D8988u);
    ctx->pc = 0x1D8984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8980u;
            // 0x1d8984: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DBF60u;
    if (runtime->hasFunction(0x1DBF60u)) {
        auto targetFn = runtime->lookupFunction(0x1DBF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8988u; }
        if (ctx->pc != 0x1D8988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DBF60_0x1dbf60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8988u; }
        if (ctx->pc != 0x1D8988u) { return; }
    }
    ctx->pc = 0x1D8988u;
    // 0x1d8988: 0x1040ffd9  beqz        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x1D8988u;
    {
        const bool branch_taken_0x1d8988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D898Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8988u;
            // 0x1d898c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8988) {
            ctx->pc = 0x1D88F0u;
            runtime->cooperativeGuestYield();
            goto label_1d88f0;
        }
    }
    ctx->pc = 0x1D8990u;
    // 0x1d8990: 0x8c42c9d8  lw          $v0, -0x3628($v0)
    ctx->pc = 0x1d8990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953432)));
    // 0x1d8994: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D8994u;
    {
        const bool branch_taken_0x1d8994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8994u;
            // 0x1d8998: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8994) {
            ctx->pc = 0x1D89C8u;
            goto label_1d89c8;
        }
    }
    ctx->pc = 0x1D899Cu;
    // 0x1d899c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1D899Cu;
    {
        const bool branch_taken_0x1d899c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D89A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D899Cu;
            // 0x1d89a0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d899c) {
            ctx->pc = 0x1D89D8u;
            goto label_1d89d8;
        }
    }
    ctx->pc = 0x1D89A4u;
    // 0x1d89a4: 0x0  nop
    ctx->pc = 0x1d89a4u;
    // NOP
label_1d89a8:
    // 0x1d89a8: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1d89a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1d89ac: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1d89acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1d89b0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1d89b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d89b4:
    // 0x1d89b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d89b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d89b8:
    // 0x1d89b8: 0xc076fd8  jal         func_1DBF60
    ctx->pc = 0x1D89B8u;
    SET_GPR_U32(ctx, 31, 0x1D89C0u);
    ctx->pc = 0x1DBF60u;
    if (runtime->hasFunction(0x1DBF60u)) {
        auto targetFn = runtime->lookupFunction(0x1DBF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D89C0u; }
        if (ctx->pc != 0x1D89C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DBF60_0x1dbf60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D89C0u; }
        if (ctx->pc != 0x1D89C0u) { return; }
    }
    ctx->pc = 0x1D89C0u;
    // 0x1d89c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D89C0u;
    {
        const bool branch_taken_0x1d89c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D89C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D89C0u;
            // 0x1d89c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d89c0) {
            ctx->pc = 0x1D89D4u;
            goto label_1d89d4;
        }
    }
    ctx->pc = 0x1D89C8u;
label_1d89c8:
    // 0x1d89c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d89c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d89cc:
    // 0x1d89cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d89ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d89d0:
    // 0x1d89d0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1d89d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1d89d4:
    // 0x1d89d4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1d89d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d89d8:
    // 0x1d89d8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d89d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d89dc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1d89dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d89e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d89e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d89e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D89E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D89E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D89E4u;
            // 0x1d89e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D884Cu: goto label_1d884c;
            case 0x1D8878u: goto label_1d8878;
            case 0x1D88A8u: goto label_1d88a8;
            case 0x1D88F0u: goto label_1d88f0;
            case 0x1D88F8u: goto label_1d88f8;
            case 0x1D891Cu: goto label_1d891c;
            case 0x1D8950u: goto label_1d8950;
            case 0x1D89A8u: goto label_1d89a8;
            case 0x1D89B4u: goto label_1d89b4;
            case 0x1D89B8u: goto label_1d89b8;
            case 0x1D89C8u: goto label_1d89c8;
            case 0x1D89CCu: goto label_1d89cc;
            case 0x1D89D0u: goto label_1d89d0;
            case 0x1D89D4u: goto label_1d89d4;
            case 0x1D89D8u: goto label_1d89d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D89ECu;
    // 0x1d89ec: 0x0  nop
    ctx->pc = 0x1d89ecu;
    // NOP
}
