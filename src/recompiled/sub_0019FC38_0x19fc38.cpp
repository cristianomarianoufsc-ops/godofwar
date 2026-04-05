#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019FC38
// Address: 0x19fc38 - 0x1a09b0
void sub_0019FC38_0x19fc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019FC38_0x19fc38");
#endif

    ctx->pc = 0x19fc38u;

label_19fc38:
    // 0x19fc38: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x19fc38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x19fc3c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19fc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19fc40: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x19fc40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x19fc44: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x19fc44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x19fc48: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x19fc48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x19fc4c: 0x24843f08  addiu       $a0, $a0, 0x3F08
    ctx->pc = 0x19fc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16136));
    // 0x19fc50: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x19fc50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x19fc54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19fc54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fc58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x19fc58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x19fc5c: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x19fc5cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x19fc60: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x19fc60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x19fc64: 0x3c120033  lui         $s2, 0x33
    ctx->pc = 0x19fc64u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
    // 0x19fc68: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x19fc68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x19fc6c: 0x3c130033  lui         $s3, 0x33
    ctx->pc = 0x19fc6cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)51 << 16));
    // 0x19fc70: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x19fc70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x19fc74: 0x3c140033  lui         $s4, 0x33
    ctx->pc = 0x19fc74u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)51 << 16));
    // 0x19fc78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19fc78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19fc7c: 0x3c150033  lui         $s5, 0x33
    ctx->pc = 0x19fc7cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)51 << 16));
    // 0x19fc80: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x19fc80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x19fc84: 0x3c160033  lui         $s6, 0x33
    ctx->pc = 0x19fc84u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)51 << 16));
    // 0x19fc88: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x19fc88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x19fc8c: 0x3c170033  lui         $s7, 0x33
    ctx->pc = 0x19fc8cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)51 << 16));
    // 0x19fc90: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19fc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19fc94: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19fc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19fc98: 0x8c420104  lw          $v0, 0x104($v0)
    ctx->pc = 0x19fc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x19fc9c: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x19fc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x19fca0: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x19FCA0u;
    SET_GPR_U32(ctx, 31, 0x19FCA8u);
    ctx->pc = 0x19FCA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FCA0u;
            // 0x19fca4: 0x8c50001c  lw          $s0, 0x1C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FCA8u; }
        if (ctx->pc != 0x19FCA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FCA8u; }
        if (ctx->pc != 0x19FCA8u) { return; }
    }
    ctx->pc = 0x19FCA8u;
    // 0x19fca8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fcac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19fcacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fcb0: 0xc045ab2  jal         func_116AC8
    ctx->pc = 0x19FCB0u;
    SET_GPR_U32(ctx, 31, 0x19FCB8u);
    ctx->pc = 0x19FCB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FCB0u;
            // 0x19fcb4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116AC8u;
    if (runtime->hasFunction(0x116AC8u)) {
        auto targetFn = runtime->lookupFunction(0x116AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FCB8u; }
        if (ctx->pc != 0x19FCB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_116ac8_0x116b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FCB8u; }
        if (ctx->pc != 0x19FCB8u) { return; }
    }
    ctx->pc = 0x19FCB8u;
    // 0x19fcb8: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x19fcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x19fcbc: 0xa6225060  sh          $v0, 0x5060($s1)
    ctx->pc = 0x19fcbcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20576), (uint16_t)GPR_U32(ctx, 2));
    // 0x19fcc0: 0x24843f18  addiu       $a0, $a0, 0x3F18
    ctx->pc = 0x19fcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16152));
    // 0x19fcc4: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x19FCC4u;
    SET_GPR_U32(ctx, 31, 0x19FCCCu);
    ctx->pc = 0x19FCC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FCC4u;
            // 0x19fcc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FCCCu; }
        if (ctx->pc != 0x19FCCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FCCCu; }
        if (ctx->pc != 0x19FCCCu) { return; }
    }
    ctx->pc = 0x19FCCCu;
    // 0x19fccc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fcccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fcd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19fcd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fcd4: 0xc045ab2  jal         func_116AC8
    ctx->pc = 0x19FCD4u;
    SET_GPR_U32(ctx, 31, 0x19FCDCu);
    ctx->pc = 0x19FCD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FCD4u;
            // 0x19fcd8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116AC8u;
    if (runtime->hasFunction(0x116AC8u)) {
        auto targetFn = runtime->lookupFunction(0x116AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FCDCu; }
        if (ctx->pc != 0x19FCDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_116ac8_0x116b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FCDCu; }
        if (ctx->pc != 0x19FCDCu) { return; }
    }
    ctx->pc = 0x19FCDCu;
    // 0x19fcdc: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x19fcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x19fce0: 0xa6425062  sh          $v0, 0x5062($s2)
    ctx->pc = 0x19fce0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 20578), (uint16_t)GPR_U32(ctx, 2));
    // 0x19fce4: 0x24843f28  addiu       $a0, $a0, 0x3F28
    ctx->pc = 0x19fce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16168));
    // 0x19fce8: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x19FCE8u;
    SET_GPR_U32(ctx, 31, 0x19FCF0u);
    ctx->pc = 0x19FCECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FCE8u;
            // 0x19fcec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FCF0u; }
        if (ctx->pc != 0x19FCF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FCF0u; }
        if (ctx->pc != 0x19FCF0u) { return; }
    }
    ctx->pc = 0x19FCF0u;
    // 0x19fcf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fcf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fcf4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19fcf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fcf8: 0xc045ab2  jal         func_116AC8
    ctx->pc = 0x19FCF8u;
    SET_GPR_U32(ctx, 31, 0x19FD00u);
    ctx->pc = 0x19FCFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FCF8u;
            // 0x19fcfc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116AC8u;
    if (runtime->hasFunction(0x116AC8u)) {
        auto targetFn = runtime->lookupFunction(0x116AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FD00u; }
        if (ctx->pc != 0x19FD00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_116ac8_0x116b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FD00u; }
        if (ctx->pc != 0x19FD00u) { return; }
    }
    ctx->pc = 0x19FD00u;
    // 0x19fd00: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x19fd00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x19fd04: 0xa6625064  sh          $v0, 0x5064($s3)
    ctx->pc = 0x19fd04u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 20580), (uint16_t)GPR_U32(ctx, 2));
    // 0x19fd08: 0x24843f38  addiu       $a0, $a0, 0x3F38
    ctx->pc = 0x19fd08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16184));
    // 0x19fd0c: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x19FD0Cu;
    SET_GPR_U32(ctx, 31, 0x19FD14u);
    ctx->pc = 0x19FD10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FD0Cu;
            // 0x19fd10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FD14u; }
        if (ctx->pc != 0x19FD14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FD14u; }
        if (ctx->pc != 0x19FD14u) { return; }
    }
    ctx->pc = 0x19FD14u;
    // 0x19fd14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fd14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fd18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19fd18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fd1c: 0xc045ab2  jal         func_116AC8
    ctx->pc = 0x19FD1Cu;
    SET_GPR_U32(ctx, 31, 0x19FD24u);
    ctx->pc = 0x19FD20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FD1Cu;
            // 0x19fd20: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116AC8u;
    if (runtime->hasFunction(0x116AC8u)) {
        auto targetFn = runtime->lookupFunction(0x116AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FD24u; }
        if (ctx->pc != 0x19FD24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_116ac8_0x116b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FD24u; }
        if (ctx->pc != 0x19FD24u) { return; }
    }
    ctx->pc = 0x19FD24u;
    // 0x19fd24: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x19fd24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x19fd28: 0xa6825066  sh          $v0, 0x5066($s4)
    ctx->pc = 0x19fd28u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 20582), (uint16_t)GPR_U32(ctx, 2));
    // 0x19fd2c: 0x24843f48  addiu       $a0, $a0, 0x3F48
    ctx->pc = 0x19fd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16200));
    // 0x19fd30: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x19FD30u;
    SET_GPR_U32(ctx, 31, 0x19FD38u);
    ctx->pc = 0x19FD34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FD30u;
            // 0x19fd34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FD38u; }
        if (ctx->pc != 0x19FD38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FD38u; }
        if (ctx->pc != 0x19FD38u) { return; }
    }
    ctx->pc = 0x19FD38u;
    // 0x19fd38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fd38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fd3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19fd3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fd40: 0xc045ab2  jal         func_116AC8
    ctx->pc = 0x19FD40u;
    SET_GPR_U32(ctx, 31, 0x19FD48u);
    ctx->pc = 0x19FD44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FD40u;
            // 0x19fd44: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116AC8u;
    if (runtime->hasFunction(0x116AC8u)) {
        auto targetFn = runtime->lookupFunction(0x116AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FD48u; }
        if (ctx->pc != 0x19FD48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_116ac8_0x116b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FD48u; }
        if (ctx->pc != 0x19FD48u) { return; }
    }
    ctx->pc = 0x19FD48u;
    // 0x19fd48: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x19fd48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x19fd4c: 0xa6a25068  sh          $v0, 0x5068($s5)
    ctx->pc = 0x19fd4cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 20584), (uint16_t)GPR_U32(ctx, 2));
    // 0x19fd50: 0x24843f58  addiu       $a0, $a0, 0x3F58
    ctx->pc = 0x19fd50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16216));
    // 0x19fd54: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x19FD54u;
    SET_GPR_U32(ctx, 31, 0x19FD5Cu);
    ctx->pc = 0x19FD58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FD54u;
            // 0x19fd58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FD5Cu; }
        if (ctx->pc != 0x19FD5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FD5Cu; }
        if (ctx->pc != 0x19FD5Cu) { return; }
    }
    ctx->pc = 0x19FD5Cu;
    // 0x19fd5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fd5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fd60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19fd60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fd64: 0xc045ab2  jal         func_116AC8
    ctx->pc = 0x19FD64u;
    SET_GPR_U32(ctx, 31, 0x19FD6Cu);
    ctx->pc = 0x19FD68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FD64u;
            // 0x19fd68: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116AC8u;
    if (runtime->hasFunction(0x116AC8u)) {
        auto targetFn = runtime->lookupFunction(0x116AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FD6Cu; }
        if (ctx->pc != 0x19FD6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_116ac8_0x116b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FD6Cu; }
        if (ctx->pc != 0x19FD6Cu) { return; }
    }
    ctx->pc = 0x19FD6Cu;
    // 0x19fd6c: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x19fd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x19fd70: 0xa6c2506a  sh          $v0, 0x506A($s6)
    ctx->pc = 0x19fd70u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 20586), (uint16_t)GPR_U32(ctx, 2));
    // 0x19fd74: 0x24843f70  addiu       $a0, $a0, 0x3F70
    ctx->pc = 0x19fd74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16240));
    // 0x19fd78: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x19FD78u;
    SET_GPR_U32(ctx, 31, 0x19FD80u);
    ctx->pc = 0x19FD7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FD78u;
            // 0x19fd7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FD80u; }
        if (ctx->pc != 0x19FD80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FD80u; }
        if (ctx->pc != 0x19FD80u) { return; }
    }
    ctx->pc = 0x19FD80u;
    // 0x19fd80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fd80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fd84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19fd84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fd88: 0xc045ab2  jal         func_116AC8
    ctx->pc = 0x19FD88u;
    SET_GPR_U32(ctx, 31, 0x19FD90u);
    ctx->pc = 0x19FD8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FD88u;
            // 0x19fd8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116AC8u;
    if (runtime->hasFunction(0x116AC8u)) {
        auto targetFn = runtime->lookupFunction(0x116AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FD90u; }
        if (ctx->pc != 0x19FD90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_116ac8_0x116b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FD90u; }
        if (ctx->pc != 0x19FD90u) { return; }
    }
    ctx->pc = 0x19FD90u;
    // 0x19fd90: 0xa6e2506c  sh          $v0, 0x506C($s7)
    ctx->pc = 0x19fd90u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 20588), (uint16_t)GPR_U32(ctx, 2));
    // 0x19fd94: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x19fd94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19fd98: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x19fd98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19fd9c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x19fd9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19fda0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x19fda0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19fda4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x19fda4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19fda8: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x19fda8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19fdac: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x19fdacu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19fdb0: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x19fdb0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19fdb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19fdb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19fdb8: 0x3e00008  jr          $ra
    ctx->pc = 0x19FDB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FDBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FDB8u;
            // 0x19fdbc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19FC38u: goto label_19fc38;
            case 0x19FDF0u: goto label_19fdf0;
            case 0x19FE88u: goto label_19fe88;
            case 0x19FE8Cu: goto label_19fe8c;
            case 0x19FEF8u: goto label_19fef8;
            case 0x19FF50u: goto label_19ff50;
            case 0x19FF64u: goto label_19ff64;
            case 0x19FF78u: goto label_19ff78;
            case 0x1A0028u: goto label_1a0028;
            case 0x1A0074u: goto label_1a0074;
            case 0x1A0098u: goto label_1a0098;
            case 0x1A00B4u: goto label_1a00b4;
            case 0x1A0108u: goto label_1a0108;
            case 0x1A0120u: goto label_1a0120;
            case 0x1A0128u: goto label_1a0128;
            case 0x1A012Cu: goto label_1a012c;
            case 0x1A0148u: goto label_1a0148;
            case 0x1A0208u: goto label_1a0208;
            case 0x1A0250u: goto label_1a0250;
            case 0x1A026Cu: goto label_1a026c;
            case 0x1A02D8u: goto label_1a02d8;
            case 0x1A0320u: goto label_1a0320;
            case 0x1A033Cu: goto label_1a033c;
            case 0x1A037Cu: goto label_1a037c;
            case 0x1A0390u: goto label_1a0390;
            case 0x1A03C4u: goto label_1a03c4;
            case 0x1A03C8u: goto label_1a03c8;
            case 0x1A0470u: goto label_1a0470;
            case 0x1A0474u: goto label_1a0474;
            case 0x1A04F0u: goto label_1a04f0;
            case 0x1A04F4u: goto label_1a04f4;
            case 0x1A0578u: goto label_1a0578;
            case 0x1A05BCu: goto label_1a05bc;
            case 0x1A05E8u: goto label_1a05e8;
            case 0x1A05ECu: goto label_1a05ec;
            case 0x1A0620u: goto label_1a0620;
            case 0x1A064Cu: goto label_1a064c;
            case 0x1A0658u: goto label_1a0658;
            case 0x1A0670u: goto label_1a0670;
            case 0x1A06A0u: goto label_1a06a0;
            case 0x1A06B0u: goto label_1a06b0;
            case 0x1A06C0u: goto label_1a06c0;
            case 0x1A06D0u: goto label_1a06d0;
            case 0x1A06F8u: goto label_1a06f8;
            case 0x1A06FCu: goto label_1a06fc;
            case 0x1A0754u: goto label_1a0754;
            case 0x1A0800u: goto label_1a0800;
            case 0x1A0860u: goto label_1a0860;
            case 0x1A0868u: goto label_1a0868;
            case 0x1A086Cu: goto label_1a086c;
            case 0x1A08B0u: goto label_1a08b0;
            case 0x1A08B4u: goto label_1a08b4;
            case 0x1A08DCu: goto label_1a08dc;
            case 0x1A08E8u: goto label_1a08e8;
            case 0x1A0948u: goto label_1a0948;
            case 0x1A094Cu: goto label_1a094c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19FDC0u;
    // 0x19fdc0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x19fdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x19fdc4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19fdc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19fdc8: 0x9062c9f9  lbu         $v0, -0x3607($v1)
    ctx->pc = 0x19fdc8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294953465)));
    // 0x19fdcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19fdccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19fdd0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19fdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x19fdd4: 0xa062c9f9  sb          $v0, -0x3607($v1)
    ctx->pc = 0x19fdd4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294953465), (uint8_t)GPR_U32(ctx, 2));
    // 0x19fdd8: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x19fdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x19fddc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19FDDCu;
    {
        const bool branch_taken_0x19fddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FDE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FDDCu;
            // 0x19fde0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fddc) {
            ctx->pc = 0x19FDF0u;
            goto label_19fdf0;
        }
    }
    ctx->pc = 0x19FDE4u;
    // 0x19fde4: 0xc067ee6  jal         func_19FB98
    ctx->pc = 0x19FDE4u;
    SET_GPR_U32(ctx, 31, 0x19FDECu);
    ctx->pc = 0x19FB98u;
    if (runtime->hasFunction(0x19FB98u)) {
        auto targetFn = runtime->lookupFunction(0x19FB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FDECu; }
        if (ctx->pc != 0x19FDECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019FB98_0x19fb98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FDECu; }
        if (ctx->pc != 0x19FDECu) { return; }
    }
    ctx->pc = 0x19FDECu;
    // 0x19fdec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19fdecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19fdf0:
    // 0x19fdf0: 0x3e00008  jr          $ra
    ctx->pc = 0x19FDF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FDF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FDF0u;
            // 0x19fdf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19FC38u: goto label_19fc38;
            case 0x19FDF0u: goto label_19fdf0;
            case 0x19FE88u: goto label_19fe88;
            case 0x19FE8Cu: goto label_19fe8c;
            case 0x19FEF8u: goto label_19fef8;
            case 0x19FF50u: goto label_19ff50;
            case 0x19FF64u: goto label_19ff64;
            case 0x19FF78u: goto label_19ff78;
            case 0x1A0028u: goto label_1a0028;
            case 0x1A0074u: goto label_1a0074;
            case 0x1A0098u: goto label_1a0098;
            case 0x1A00B4u: goto label_1a00b4;
            case 0x1A0108u: goto label_1a0108;
            case 0x1A0120u: goto label_1a0120;
            case 0x1A0128u: goto label_1a0128;
            case 0x1A012Cu: goto label_1a012c;
            case 0x1A0148u: goto label_1a0148;
            case 0x1A0208u: goto label_1a0208;
            case 0x1A0250u: goto label_1a0250;
            case 0x1A026Cu: goto label_1a026c;
            case 0x1A02D8u: goto label_1a02d8;
            case 0x1A0320u: goto label_1a0320;
            case 0x1A033Cu: goto label_1a033c;
            case 0x1A037Cu: goto label_1a037c;
            case 0x1A0390u: goto label_1a0390;
            case 0x1A03C4u: goto label_1a03c4;
            case 0x1A03C8u: goto label_1a03c8;
            case 0x1A0470u: goto label_1a0470;
            case 0x1A0474u: goto label_1a0474;
            case 0x1A04F0u: goto label_1a04f0;
            case 0x1A04F4u: goto label_1a04f4;
            case 0x1A0578u: goto label_1a0578;
            case 0x1A05BCu: goto label_1a05bc;
            case 0x1A05E8u: goto label_1a05e8;
            case 0x1A05ECu: goto label_1a05ec;
            case 0x1A0620u: goto label_1a0620;
            case 0x1A064Cu: goto label_1a064c;
            case 0x1A0658u: goto label_1a0658;
            case 0x1A0670u: goto label_1a0670;
            case 0x1A06A0u: goto label_1a06a0;
            case 0x1A06B0u: goto label_1a06b0;
            case 0x1A06C0u: goto label_1a06c0;
            case 0x1A06D0u: goto label_1a06d0;
            case 0x1A06F8u: goto label_1a06f8;
            case 0x1A06FCu: goto label_1a06fc;
            case 0x1A0754u: goto label_1a0754;
            case 0x1A0800u: goto label_1a0800;
            case 0x1A0860u: goto label_1a0860;
            case 0x1A0868u: goto label_1a0868;
            case 0x1A086Cu: goto label_1a086c;
            case 0x1A08B0u: goto label_1a08b0;
            case 0x1A08B4u: goto label_1a08b4;
            case 0x1A08DCu: goto label_1a08dc;
            case 0x1A08E8u: goto label_1a08e8;
            case 0x1A0948u: goto label_1a0948;
            case 0x1A094Cu: goto label_1a094c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19FDF8u;
    // 0x19fdf8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x19fdf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x19fdfc: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x19fdfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x19fe00: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x19fe00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x19fe04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19fe04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fe08: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x19fe08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x19fe0c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x19fe0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x19fe10: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x19fe10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x19fe14: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x19fe14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x19fe18: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x19fe18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x19fe1c: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x19fe1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x19fe20: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x19fe20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x19fe24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19fe24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19fe28: 0xe7b800d0  swc1        $f24, 0xD0($sp)
    ctx->pc = 0x19fe28u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x19fe2c: 0xe7b700c8  swc1        $f23, 0xC8($sp)
    ctx->pc = 0x19fe2cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x19fe30: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x19fe30u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x19fe34: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x19fe34u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x19fe38: 0xc067e02  jal         func_19F808
    ctx->pc = 0x19FE38u;
    SET_GPR_U32(ctx, 31, 0x19FE40u);
    ctx->pc = 0x19FE3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FE38u;
            // 0x19fe3c: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F808u;
    if (runtime->hasFunction(0x19F808u)) {
        auto targetFn = runtime->lookupFunction(0x19F808u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FE40u; }
        if (ctx->pc != 0x19FE40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_19f808_0x19f830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FE40u; }
        if (ctx->pc != 0x19FE40u) { return; }
    }
    ctx->pc = 0x19FE40u;
    // 0x19fe40: 0x10400161  beqz        $v0, . + 4 + (0x161 << 2)
    ctx->pc = 0x19FE40u;
    {
        const bool branch_taken_0x19fe40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FE40u;
            // 0x19fe44: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fe40) {
            ctx->pc = 0x1A03C8u;
            goto label_1a03c8;
        }
    }
    ctx->pc = 0x19FE48u;
    // 0x19fe48: 0x8e250060  lw          $a1, 0x60($s1)
    ctx->pc = 0x19fe48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x19fe4c: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x19fe4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x19fe50: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x19FE50u;
    {
        const bool branch_taken_0x19fe50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FE50u;
            // 0x19fe54: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fe50) {
            ctx->pc = 0x19FE8Cu;
            goto label_19fe8c;
        }
    }
    ctx->pc = 0x19FE58u;
    // 0x19fe58: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x19fe58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x19fe5c: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x19fe5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x19fe60: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x19fe60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x19fe64: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19fe64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19fe68: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x19fe68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x19fe6c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x19fe6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x19fe70: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x19fe70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19fe74: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19fe74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19fe78: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19FE78u;
    {
        const bool branch_taken_0x19fe78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x19FE7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FE78u;
            // 0x19fe7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fe78) {
            ctx->pc = 0x19FE88u;
            goto label_19fe88;
        }
    }
    ctx->pc = 0x19FE80u;
    // 0x19fe80: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x19fe80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x19fe84: 0x0  nop
    ctx->pc = 0x19fe84u;
    // NOP
label_19fe88:
    // 0x19fe88: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x19fe88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19fe8c:
    // 0x19fe8c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x19fe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x19fe90: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x19fe90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x19fe94: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x19fe94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x19fe98: 0x40f809  jalr        $v0
    ctx->pc = 0x19FE98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19FEA0u);
        ctx->pc = 0x19FE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FE98u;
            // 0x19fe9c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19FEA0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19FC38u: goto label_19fc38;
            case 0x19FDF0u: goto label_19fdf0;
            case 0x19FE88u: goto label_19fe88;
            case 0x19FE8Cu: goto label_19fe8c;
            case 0x19FEF8u: goto label_19fef8;
            case 0x19FF50u: goto label_19ff50;
            case 0x19FF64u: goto label_19ff64;
            case 0x19FF78u: goto label_19ff78;
            case 0x1A0028u: goto label_1a0028;
            case 0x1A0074u: goto label_1a0074;
            case 0x1A0098u: goto label_1a0098;
            case 0x1A00B4u: goto label_1a00b4;
            case 0x1A0108u: goto label_1a0108;
            case 0x1A0120u: goto label_1a0120;
            case 0x1A0128u: goto label_1a0128;
            case 0x1A012Cu: goto label_1a012c;
            case 0x1A0148u: goto label_1a0148;
            case 0x1A0208u: goto label_1a0208;
            case 0x1A0250u: goto label_1a0250;
            case 0x1A026Cu: goto label_1a026c;
            case 0x1A02D8u: goto label_1a02d8;
            case 0x1A0320u: goto label_1a0320;
            case 0x1A033Cu: goto label_1a033c;
            case 0x1A037Cu: goto label_1a037c;
            case 0x1A0390u: goto label_1a0390;
            case 0x1A03C4u: goto label_1a03c4;
            case 0x1A03C8u: goto label_1a03c8;
            case 0x1A0470u: goto label_1a0470;
            case 0x1A0474u: goto label_1a0474;
            case 0x1A04F0u: goto label_1a04f0;
            case 0x1A04F4u: goto label_1a04f4;
            case 0x1A0578u: goto label_1a0578;
            case 0x1A05BCu: goto label_1a05bc;
            case 0x1A05E8u: goto label_1a05e8;
            case 0x1A05ECu: goto label_1a05ec;
            case 0x1A0620u: goto label_1a0620;
            case 0x1A064Cu: goto label_1a064c;
            case 0x1A0658u: goto label_1a0658;
            case 0x1A0670u: goto label_1a0670;
            case 0x1A06A0u: goto label_1a06a0;
            case 0x1A06B0u: goto label_1a06b0;
            case 0x1A06C0u: goto label_1a06c0;
            case 0x1A06D0u: goto label_1a06d0;
            case 0x1A06F8u: goto label_1a06f8;
            case 0x1A06FCu: goto label_1a06fc;
            case 0x1A0754u: goto label_1a0754;
            case 0x1A0800u: goto label_1a0800;
            case 0x1A0860u: goto label_1a0860;
            case 0x1A0868u: goto label_1a0868;
            case 0x1A086Cu: goto label_1a086c;
            case 0x1A08B0u: goto label_1a08b0;
            case 0x1A08B4u: goto label_1a08b4;
            case 0x1A08DCu: goto label_1a08dc;
            case 0x1A08E8u: goto label_1a08e8;
            case 0x1A0948u: goto label_1a0948;
            case 0x1A094Cu: goto label_1a094c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19FEA0u; }
            if (ctx->pc != 0x19FEA0u) { return; }
        }
        }
    }
    ctx->pc = 0x19FEA0u;
    // 0x19fea0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x19fea0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fea4: 0x96220044  lhu         $v0, 0x44($s1)
    ctx->pc = 0x19fea4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x19fea8: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x19fea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x19feac: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x19FEACu;
    {
        const bool branch_taken_0x19feac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FEB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FEACu;
            // 0x19feb0: 0x3c1e002a  lui         $fp, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19feac) {
            ctx->pc = 0x19FEF8u;
            goto label_19fef8;
        }
    }
    ctx->pc = 0x19FEB4u;
    // 0x19feb4: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x19feb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x19feb8: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x19feb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x19febc: 0x2442fdc0  addiu       $v0, $v0, -0x240
    ctx->pc = 0x19febcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966720));
    // 0x19fec0: 0xa6230044  sh          $v1, 0x44($s1)
    ctx->pc = 0x19fec0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 68), (uint16_t)GPR_U32(ctx, 3));
    // 0x19fec4: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x19fec4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x19fec8: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x19fec8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x19fecc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x19feccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x19fed0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19fed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19fed4: 0x9083c9f9  lbu         $v1, -0x3607($a0)
    ctx->pc = 0x19fed4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294953465)));
    // 0x19fed8: 0xac405070  sw          $zero, 0x5070($v0)
    ctx->pc = 0x19fed8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20592), GPR_U32(ctx, 0));
    // 0x19fedc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19fedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19fee0: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x19fee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x19fee4: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x19fee4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x19fee8: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19FEE8u;
    {
        const bool branch_taken_0x19fee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x19FEECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FEE8u;
            // 0x19feec: 0xa083c9f9  sb          $v1, -0x3607($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4294953465), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fee8) {
            ctx->pc = 0x19FEF8u;
            goto label_19fef8;
        }
    }
    ctx->pc = 0x19FEF0u;
    // 0x19fef0: 0xc067f0e  jal         func_19FC38
    ctx->pc = 0x19FEF0u;
    SET_GPR_U32(ctx, 31, 0x19FEF8u);
    ctx->pc = 0x19FC38u;
    runtime->cooperativeGuestYield();
    goto label_19fc38;
    ctx->pc = 0x19FEF8u;
label_19fef8:
    // 0x19fef8: 0x8e300064  lw          $s0, 0x64($s1)
    ctx->pc = 0x19fef8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x19fefc: 0x8fc4cd58  lw          $a0, -0x32A8($fp)
    ctx->pc = 0x19fefcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294954328)));
    // 0x19ff00: 0xc0761e2  jal         func_1D8788
    ctx->pc = 0x19FF00u;
    SET_GPR_U32(ctx, 31, 0x19FF08u);
    ctx->pc = 0x19FF04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FF00u;
            // 0x19ff04: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8788u;
    if (runtime->hasFunction(0x1D8788u)) {
        auto targetFn = runtime->lookupFunction(0x1D8788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FF08u; }
        if (ctx->pc != 0x19FF08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d8788_0x1d8800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FF08u; }
        if (ctx->pc != 0x19FF08u) { return; }
    }
    ctx->pc = 0x19FF08u;
    // 0x19ff08: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x19ff08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x19ff0c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x19ff0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19ff10: 0x3c16002a  lui         $s6, 0x2A
    ctx->pc = 0x19ff10u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)42 << 16));
    // 0x19ff14: 0x82c5c9fa  lb          $a1, -0x3606($s6)
    ctx->pc = 0x19ff14u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 4294953466)));
    // 0x19ff18: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x19ff18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x19ff1c: 0x2463e440  addiu       $v1, $v1, -0x1BC0
    ctx->pc = 0x19ff1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960192));
    // 0x19ff20: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x19ff20u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ff24: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x19ff24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x19ff28: 0x28a40003  slti        $a0, $a1, 0x3
    ctx->pc = 0x19ff28u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x19ff2c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19FF2Cu;
    {
        const bool branch_taken_0x19ff2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FF2Cu;
            // 0x19ff30: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ff2c) {
            ctx->pc = 0x19FF50u;
            goto label_19ff50;
        }
    }
    ctx->pc = 0x19FF34u;
    // 0x19ff34: 0x1ca00010  bgtz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x19FF34u;
    {
        const bool branch_taken_0x19ff34 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x19FF38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FF34u;
            // 0x19ff38: 0x3c130033  lui         $s3, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ff34) {
            ctx->pc = 0x19FF78u;
            goto label_19ff78;
        }
    }
    ctx->pc = 0x19FF3Cu;
    // 0x19ff3c: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x19FF3Cu;
    {
        const bool branch_taken_0x19ff3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FF40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FF3Cu;
            // 0x19ff40: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ff3c) {
            ctx->pc = 0x19FF64u;
            goto label_19ff64;
        }
    }
    ctx->pc = 0x19FF44u;
    // 0x19ff44: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x19FF44u;
    {
        const bool branch_taken_0x19ff44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FF48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FF44u;
            // 0x19ff48: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ff44) {
            ctx->pc = 0x1A0148u;
            goto label_1a0148;
        }
    }
    ctx->pc = 0x19FF4Cu;
    // 0x19ff4c: 0x0  nop
    ctx->pc = 0x19ff4cu;
    // NOP
label_19ff50:
    // 0x19ff50: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19ff50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19ff54: 0x50a20075  beql        $a1, $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x19FF54u;
    {
        const bool branch_taken_0x19ff54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x19ff54) {
            ctx->pc = 0x19FF58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19FF54u;
            // 0x19ff58: 0xc64c0008  lwc1        $f12, 0x8($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A012Cu;
            goto label_1a012c;
        }
    }
    ctx->pc = 0x19FF5Cu;
    // 0x19ff5c: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x19FF5Cu;
    {
        const bool branch_taken_0x19ff5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FF60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FF5Cu;
            // 0x19ff60: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ff5c) {
            ctx->pc = 0x1A0148u;
            goto label_1a0148;
        }
    }
    ctx->pc = 0x19FF64u;
label_19ff64:
    // 0x19ff64: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19ff64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19ff68: 0xc07d8fa  jal         func_1F63E8
    ctx->pc = 0x19FF68u;
    SET_GPR_U32(ctx, 31, 0x19FF70u);
    ctx->pc = 0x19FF6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FF68u;
            // 0x19ff6c: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F63E8u;
    if (runtime->hasFunction(0x1F63E8u)) {
        auto targetFn = runtime->lookupFunction(0x1F63E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FF70u; }
        if (ctx->pc != 0x19FF70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F63E8_0x1f63e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FF70u; }
        if (ctx->pc != 0x19FF70u) { return; }
    }
    ctx->pc = 0x19FF70u;
    // 0x19ff70: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x19FF70u;
    {
        const bool branch_taken_0x19ff70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FF70u;
            // 0x19ff74: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ff70) {
            ctx->pc = 0x1A0148u;
            goto label_1a0148;
        }
    }
    ctx->pc = 0x19FF78u;
label_19ff78:
    // 0x19ff78: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19ff78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19ff7c: 0xc442c658  lwc1        $f2, -0x39A8($v0)
    ctx->pc = 0x19ff7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19ff80: 0xc6615070  lwc1        $f1, 0x5070($s3)
    ctx->pc = 0x19ff80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19ff84: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x19ff84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19ff88: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x19ff88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x19ff8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19ff8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19ff90: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x19ff90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x19ff94: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x19ff94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x19ff98: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x19ff98u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x19ff9c: 0xe6615070  swc1        $f1, 0x5070($s3)
    ctx->pc = 0x19ff9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20592), bits); }
    // 0x19ffa0: 0x46170028  max.s       $f0, $f0, $f23
    ctx->pc = 0x19ffa0u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[23]);
    // 0x19ffa4: 0x9602000a  lhu         $v0, 0xA($s0)
    ctx->pc = 0x19ffa4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x19ffa8: 0x461805a9  min.s       $f22, $f0, $f24
    ctx->pc = 0x19ffa8u;
    ctx->f[22] = std::min(ctx->f[0], ctx->f[24]);
    // 0x19ffac: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x19ffacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
    // 0x19ffb0: 0x3421ff00  ori         $at, $at, 0xFF00
    ctx->pc = 0x19ffb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65280);
    // 0x19ffb4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19ffb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19ffb8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19ffb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ffbc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19ffbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19ffc0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x19ffc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x19ffc4: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x19ffc4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x19ffc8: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x19ffc8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x19ffcc: 0xc07d8ea  jal         func_1F63A8
    ctx->pc = 0x19FFCCu;
    SET_GPR_U32(ctx, 31, 0x19FFD4u);
    ctx->pc = 0x19FFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FFCCu;
            // 0x19ffd0: 0x460cb302  mul.s       $f12, $f22, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[22], ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F63A8u;
    if (runtime->hasFunction(0x1F63A8u)) {
        auto targetFn = runtime->lookupFunction(0x1F63A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FFD4u; }
        if (ctx->pc != 0x19FFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1f63a8_0x1f63e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FFD4u; }
        if (ctx->pc != 0x19FFD4u) { return; }
    }
    ctx->pc = 0x19FFD4u;
    // 0x19ffd4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19ffd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ffd8: 0xc07d8fa  jal         func_1F63E8
    ctx->pc = 0x19FFD8u;
    SET_GPR_U32(ctx, 31, 0x19FFE0u);
    ctx->pc = 0x19FFDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FFD8u;
            // 0x19ffdc: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F63E8u;
    if (runtime->hasFunction(0x1F63E8u)) {
        auto targetFn = runtime->lookupFunction(0x1F63E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FFE0u; }
        if (ctx->pc != 0x19FFE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F63E8_0x1f63e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FFE0u; }
        if (ctx->pc != 0x19FFE0u) { return; }
    }
    ctx->pc = 0x19FFE0u;
    // 0x19ffe0: 0x8e05c9f4  lw          $a1, -0x360C($s0)
    ctx->pc = 0x19ffe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953460)));
    // 0x19ffe4: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x19ffe4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x19ffe8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x19ffe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x19ffec: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x19FFECu;
    {
        const bool branch_taken_0x19ffec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FFECu;
            // 0x19fff0: 0x8e02c9f4  lw          $v0, -0x360C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953460)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ffec) {
            ctx->pc = 0x1A0028u;
            goto label_1a0028;
        }
    }
    ctx->pc = 0x19FFF4u;
    // 0x19fff4: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x19fff4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19fff8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x19fff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x19fffc: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x19fffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1a0000: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a0000u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a0004: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a0004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a0008: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1a0008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a000c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1a000cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1a0010: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1a0010u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1a0014: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1a0014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1a0018: 0x40f809  jalr        $v0
    ctx->pc = 0x1A0018u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A0020u);
        ctx->pc = 0x1A001Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0018u;
            // 0x1a001c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A0020u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19FC38u: goto label_19fc38;
            case 0x19FDF0u: goto label_19fdf0;
            case 0x19FE88u: goto label_19fe88;
            case 0x19FE8Cu: goto label_19fe8c;
            case 0x19FEF8u: goto label_19fef8;
            case 0x19FF50u: goto label_19ff50;
            case 0x19FF64u: goto label_19ff64;
            case 0x19FF78u: goto label_19ff78;
            case 0x1A0028u: goto label_1a0028;
            case 0x1A0074u: goto label_1a0074;
            case 0x1A0098u: goto label_1a0098;
            case 0x1A00B4u: goto label_1a00b4;
            case 0x1A0108u: goto label_1a0108;
            case 0x1A0120u: goto label_1a0120;
            case 0x1A0128u: goto label_1a0128;
            case 0x1A012Cu: goto label_1a012c;
            case 0x1A0148u: goto label_1a0148;
            case 0x1A0208u: goto label_1a0208;
            case 0x1A0250u: goto label_1a0250;
            case 0x1A026Cu: goto label_1a026c;
            case 0x1A02D8u: goto label_1a02d8;
            case 0x1A0320u: goto label_1a0320;
            case 0x1A033Cu: goto label_1a033c;
            case 0x1A037Cu: goto label_1a037c;
            case 0x1A0390u: goto label_1a0390;
            case 0x1A03C4u: goto label_1a03c4;
            case 0x1A03C8u: goto label_1a03c8;
            case 0x1A0470u: goto label_1a0470;
            case 0x1A0474u: goto label_1a0474;
            case 0x1A04F0u: goto label_1a04f0;
            case 0x1A04F4u: goto label_1a04f4;
            case 0x1A0578u: goto label_1a0578;
            case 0x1A05BCu: goto label_1a05bc;
            case 0x1A05E8u: goto label_1a05e8;
            case 0x1A05ECu: goto label_1a05ec;
            case 0x1A0620u: goto label_1a0620;
            case 0x1A064Cu: goto label_1a064c;
            case 0x1A0658u: goto label_1a0658;
            case 0x1A0670u: goto label_1a0670;
            case 0x1A06A0u: goto label_1a06a0;
            case 0x1A06B0u: goto label_1a06b0;
            case 0x1A06C0u: goto label_1a06c0;
            case 0x1A06D0u: goto label_1a06d0;
            case 0x1A06F8u: goto label_1a06f8;
            case 0x1A06FCu: goto label_1a06fc;
            case 0x1A0754u: goto label_1a0754;
            case 0x1A0800u: goto label_1a0800;
            case 0x1A0860u: goto label_1a0860;
            case 0x1A0868u: goto label_1a0868;
            case 0x1A086Cu: goto label_1a086c;
            case 0x1A08B0u: goto label_1a08b0;
            case 0x1A08B4u: goto label_1a08b4;
            case 0x1A08DCu: goto label_1a08dc;
            case 0x1A08E8u: goto label_1a08e8;
            case 0x1A0948u: goto label_1a0948;
            case 0x1A094Cu: goto label_1a094c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A0020u; }
            if (ctx->pc != 0x1A0020u) { return; }
        }
        }
    }
    ctx->pc = 0x1A0020u;
    // 0x1a0020: 0x8e02c9f4  lw          $v0, -0x360C($s0)
    ctx->pc = 0x1a0020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953460)));
    // 0x1a0024: 0x0  nop
    ctx->pc = 0x1a0024u;
    // NOP
label_1a0028:
    // 0x1a0028: 0x4600c546  mov.s       $f21, $f24
    ctx->pc = 0x1a0028u;
    ctx->f[21] = FPU_MOV_S(ctx->f[24]);
    // 0x1a002c: 0x4615b034  c.lt.s      $f22, $f21
    ctx->pc = 0x1a002cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a0030: 0x8c420104  lw          $v0, 0x104($v0)
    ctx->pc = 0x1a0030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x1a0034: 0x8c500088  lw          $s0, 0x88($v0)
    ctx->pc = 0x1a0034u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1a0038: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1A0038u;
    {
        const bool branch_taken_0x1a0038 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A003Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0038u;
            // 0x1a003c: 0xe617003c  swc1        $f23, 0x3C($s0) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0038) {
            ctx->pc = 0x1A0074u;
            goto label_1a0074;
        }
    }
    ctx->pc = 0x1A0040u;
    // 0x1a0040: 0xc0402fc  jal         func_100BF0
    ctx->pc = 0x1A0040u;
    SET_GPR_U32(ctx, 31, 0x1A0048u);
    ctx->pc = 0x1A0044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0040u;
            // 0x1a0044: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100BF0u;
    if (runtime->hasFunction(0x100BF0u)) {
        auto targetFn = runtime->lookupFunction(0x100BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0048u; }
        if (ctx->pc != 0x1A0048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100BF0_0x100bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0048u; }
        if (ctx->pc != 0x1A0048u) { return; }
    }
    ctx->pc = 0x1A0048u;
    // 0x1a0048: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x1a0048u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x1a004c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a004cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0050: 0xc04015e  jal         func_100578
    ctx->pc = 0x1A0050u;
    SET_GPR_U32(ctx, 31, 0x1A0058u);
    ctx->pc = 0x1A0054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0050u;
            // 0x1a0054: 0x4600b302  mul.s       $f12, $f22, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x100578u;
    if (runtime->hasFunction(0x100578u)) {
        auto targetFn = runtime->lookupFunction(0x100578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0058u; }
        if (ctx->pc != 0x1A0058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100578_0x100578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0058u; }
        if (ctx->pc != 0x1A0058u) { return; }
    }
    ctx->pc = 0x1A0058u;
    // 0x1a0058: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1a0058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1a005c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x1a005cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x1a0060: 0x84445066  lh          $a0, 0x5066($v0)
    ctx->pc = 0x1a0060u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20582)));
    // 0x1a0064: 0xc067e72  jal         func_19F9C8
    ctx->pc = 0x1A0064u;
    SET_GPR_U32(ctx, 31, 0x1A006Cu);
    ctx->pc = 0x1A0068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0064u;
            // 0x1a0068: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F9C8u;
    if (runtime->hasFunction(0x19F9C8u)) {
        auto targetFn = runtime->lookupFunction(0x19F9C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A006Cu; }
        if (ctx->pc != 0x1A006Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F9C8_0x19f9c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A006Cu; }
        if (ctx->pc != 0x1A006Cu) { return; }
    }
    ctx->pc = 0x1A006Cu;
    // 0x1a006c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1A006Cu;
    {
        const bool branch_taken_0x1a006c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a006c) {
            ctx->pc = 0x1A00B4u;
            goto label_1a00b4;
        }
    }
    ctx->pc = 0x1A0074u;
label_1a0074:
    // 0x1a0074: 0xc6605070  lwc1        $f0, 0x5070($s3)
    ctx->pc = 0x1a0074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0078: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x1a0078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a007c: 0x46010501  sub.s       $f20, $f0, $f1
    ctx->pc = 0x1a007cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1a0080: 0x4614a836  c.le.s      $f21, $f20
    ctx->pc = 0x1a0080u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a0084: 0x0  nop
    ctx->pc = 0x1a0084u;
    // NOP
    // 0x1a0088: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0088u;
    {
        const bool branch_taken_0x1a0088 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A008Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0088u;
            // 0x1a008c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0088) {
            ctx->pc = 0x1A0098u;
            goto label_1a0098;
        }
    }
    ctx->pc = 0x1A0090u;
    // 0x1a0090: 0xe6615070  swc1        $f1, 0x5070($s3)
    ctx->pc = 0x1a0090u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20592), bits); }
    // 0x1a0094: 0x4600bd06  mov.s       $f20, $f23
    ctx->pc = 0x1a0094u;
    ctx->f[20] = FPU_MOV_S(ctx->f[23]);
label_1a0098:
    // 0x1a0098: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a009c: 0xc0402fc  jal         func_100BF0
    ctx->pc = 0x1A009Cu;
    SET_GPR_U32(ctx, 31, 0x1A00A4u);
    ctx->pc = 0x1A00A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A009Cu;
            // 0x1a00a0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100BF0u;
    if (runtime->hasFunction(0x100BF0u)) {
        auto targetFn = runtime->lookupFunction(0x100BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A00A4u; }
        if (ctx->pc != 0x1A00A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100BF0_0x100bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A00A4u; }
        if (ctx->pc != 0x1A00A4u) { return; }
    }
    ctx->pc = 0x1A00A4u;
    // 0x1a00a4: 0x46180001  sub.s       $f0, $f0, $f24
    ctx->pc = 0x1a00a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[24]);
    // 0x1a00a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a00a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a00ac: 0xc04015e  jal         func_100578
    ctx->pc = 0x1A00ACu;
    SET_GPR_U32(ctx, 31, 0x1A00B4u);
    ctx->pc = 0x1A00B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A00ACu;
            // 0x1a00b0: 0x46140300  add.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x100578u;
    if (runtime->hasFunction(0x100578u)) {
        auto targetFn = runtime->lookupFunction(0x100578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A00B4u; }
        if (ctx->pc != 0x1A00B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100578_0x100578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A00B4u; }
        if (ctx->pc != 0x1A00B4u) { return; }
    }
    ctx->pc = 0x1A00B4u;
label_1a00b4:
    // 0x1a00b4: 0xc06f9e8  jal         func_1BE7A0
    ctx->pc = 0x1A00B4u;
    SET_GPR_U32(ctx, 31, 0x1A00BCu);
    ctx->pc = 0x1BE7A0u;
    if (runtime->hasFunction(0x1BE7A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A00BCu; }
        if (ctx->pc != 0x1A00BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1be7a0_0x1be7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A00BCu; }
        if (ctx->pc != 0x1A00BCu) { return; }
    }
    ctx->pc = 0x1A00BCu;
    // 0x1a00bc: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x1A00BCu;
    {
        const bool branch_taken_0x1a00bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a00bc) {
            ctx->pc = 0x1A00C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A00BCu;
            // 0x1a00c0: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A0148u;
            goto label_1a0148;
        }
    }
    ctx->pc = 0x1A00C4u;
    // 0x1a00c4: 0x8fc2cd58  lw          $v0, -0x32A8($fp)
    ctx->pc = 0x1a00c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294954328)));
    // 0x1a00c8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1a00c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1a00cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a00ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a00d0: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x1a00d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1a00d4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1a00d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1a00d8: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x1A00D8u;
    {
        const bool branch_taken_0x1a00d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a00d8) {
            ctx->pc = 0x1A00DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A00D8u;
            // 0x1a00dc: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A0148u;
            goto label_1a0148;
        }
    }
    ctx->pc = 0x1A00E0u;
    // 0x1a00e0: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x1a00e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a00e4: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x1a00e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a00e8: 0x0  nop
    ctx->pc = 0x1a00e8u;
    // NOP
    // 0x1a00ec: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1A00ECu;
    {
        const bool branch_taken_0x1a00ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A00F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A00ECu;
            // 0x1a00f0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a00ec) {
            ctx->pc = 0x1A0108u;
            goto label_1a0108;
        }
    }
    ctx->pc = 0x1A00F4u;
    // 0x1a00f4: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1a00f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x1a00f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a00f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a00fc: 0xa2c2c9fa  sb          $v0, -0x3606($s6)
    ctx->pc = 0x1a00fcu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 4294953466), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a0100: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1A0100u;
    {
        const bool branch_taken_0x1a0100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0100u;
            // 0x1a0104: 0xa083c9fb  sb          $v1, -0x3605($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4294953467), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0100) {
            ctx->pc = 0x1A0128u;
            goto label_1a0128;
        }
    }
    ctx->pc = 0x1A0108u;
label_1a0108:
    // 0x1a0108: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x1a0108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a010c: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x1a010cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a0110: 0x0  nop
    ctx->pc = 0x1a0110u;
    // NOP
    // 0x1a0114: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A0114u;
    {
        const bool branch_taken_0x1a0114 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A0118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0114u;
            // 0x1a0118: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0114) {
            ctx->pc = 0x1A0120u;
            goto label_1a0120;
        }
    }
    ctx->pc = 0x1A011Cu;
    // 0x1a011c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a011cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a0120:
    // 0x1a0120: 0xa2c2c9fa  sb          $v0, -0x3606($s6)
    ctx->pc = 0x1a0120u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 4294953466), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a0124: 0x0  nop
    ctx->pc = 0x1a0124u;
    // NOP
label_1a0128:
    // 0x1a0128: 0xc64c0008  lwc1        $f12, 0x8($s2)
    ctx->pc = 0x1a0128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a012c:
    // 0x1a012c: 0xc07d8fa  jal         func_1F63E8
    ctx->pc = 0x1A012Cu;
    SET_GPR_U32(ctx, 31, 0x1A0134u);
    ctx->pc = 0x1A0130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A012Cu;
            // 0x1a0130: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F63E8u;
    if (runtime->hasFunction(0x1F63E8u)) {
        auto targetFn = runtime->lookupFunction(0x1F63E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0134u; }
        if (ctx->pc != 0x1A0134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F63E8_0x1f63e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0134u; }
        if (ctx->pc != 0x1A0134u) { return; }
    }
    ctx->pc = 0x1A0134u;
    // 0x1a0134: 0xc067ee6  jal         func_19FB98
    ctx->pc = 0x1A0134u;
    SET_GPR_U32(ctx, 31, 0x1A013Cu);
    ctx->pc = 0x19FB98u;
    if (runtime->hasFunction(0x19FB98u)) {
        auto targetFn = runtime->lookupFunction(0x19FB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A013Cu; }
        if (ctx->pc != 0x1A013Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019FB98_0x19fb98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A013Cu; }
        if (ctx->pc != 0x1A013Cu) { return; }
    }
    ctx->pc = 0x1A013Cu;
    // 0x1a013c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a013cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a0140: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x1A0140u;
    {
        const bool branch_taken_0x1a0140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0140u;
            // 0x1a0144: 0xa622002a  sh          $v0, 0x2A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 42), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0140) {
            ctx->pc = 0x1A03C4u;
            goto label_1a03c4;
        }
    }
    ctx->pc = 0x1A0148u;
label_1a0148:
    // 0x1a0148: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a0148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a014c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1a014cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1a0150: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1a0150u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1a0154: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1a0154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1a0158: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1a0158u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a015c: 0x40f809  jalr        $v0
    ctx->pc = 0x1A015Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A0164u);
        ctx->pc = 0x1A0160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A015Cu;
            // 0x1a0160: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A0164u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19FC38u: goto label_19fc38;
            case 0x19FDF0u: goto label_19fdf0;
            case 0x19FE88u: goto label_19fe88;
            case 0x19FE8Cu: goto label_19fe8c;
            case 0x19FEF8u: goto label_19fef8;
            case 0x19FF50u: goto label_19ff50;
            case 0x19FF64u: goto label_19ff64;
            case 0x19FF78u: goto label_19ff78;
            case 0x1A0028u: goto label_1a0028;
            case 0x1A0074u: goto label_1a0074;
            case 0x1A0098u: goto label_1a0098;
            case 0x1A00B4u: goto label_1a00b4;
            case 0x1A0108u: goto label_1a0108;
            case 0x1A0120u: goto label_1a0120;
            case 0x1A0128u: goto label_1a0128;
            case 0x1A012Cu: goto label_1a012c;
            case 0x1A0148u: goto label_1a0148;
            case 0x1A0208u: goto label_1a0208;
            case 0x1A0250u: goto label_1a0250;
            case 0x1A026Cu: goto label_1a026c;
            case 0x1A02D8u: goto label_1a02d8;
            case 0x1A0320u: goto label_1a0320;
            case 0x1A033Cu: goto label_1a033c;
            case 0x1A037Cu: goto label_1a037c;
            case 0x1A0390u: goto label_1a0390;
            case 0x1A03C4u: goto label_1a03c4;
            case 0x1A03C8u: goto label_1a03c8;
            case 0x1A0470u: goto label_1a0470;
            case 0x1A0474u: goto label_1a0474;
            case 0x1A04F0u: goto label_1a04f0;
            case 0x1A04F4u: goto label_1a04f4;
            case 0x1A0578u: goto label_1a0578;
            case 0x1A05BCu: goto label_1a05bc;
            case 0x1A05E8u: goto label_1a05e8;
            case 0x1A05ECu: goto label_1a05ec;
            case 0x1A0620u: goto label_1a0620;
            case 0x1A064Cu: goto label_1a064c;
            case 0x1A0658u: goto label_1a0658;
            case 0x1A0670u: goto label_1a0670;
            case 0x1A06A0u: goto label_1a06a0;
            case 0x1A06B0u: goto label_1a06b0;
            case 0x1A06C0u: goto label_1a06c0;
            case 0x1A06D0u: goto label_1a06d0;
            case 0x1A06F8u: goto label_1a06f8;
            case 0x1A06FCu: goto label_1a06fc;
            case 0x1A0754u: goto label_1a0754;
            case 0x1A0800u: goto label_1a0800;
            case 0x1A0860u: goto label_1a0860;
            case 0x1A0868u: goto label_1a0868;
            case 0x1A086Cu: goto label_1a086c;
            case 0x1A08B0u: goto label_1a08b0;
            case 0x1A08B4u: goto label_1a08b4;
            case 0x1A08DCu: goto label_1a08dc;
            case 0x1A08E8u: goto label_1a08e8;
            case 0x1A0948u: goto label_1a0948;
            case 0x1A094Cu: goto label_1a094c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A0164u; }
            if (ctx->pc != 0x1A0164u) { return; }
        }
        }
    }
    ctx->pc = 0x1A0164u;
    // 0x1a0164: 0xc44401b8  lwc1        $f4, 0x1B8($v0)
    ctx->pc = 0x1a0164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a0168: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x1a0168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
    // 0x1a016c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1a016cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1a0170: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1a0170u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a0174: 0x46002005  abs.s       $f0, $f4
    ctx->pc = 0x1a0174u;
    ctx->f[0] = FPU_ABS_S(ctx->f[4]);
    // 0x1a0178: 0x3c013f05  lui         $at, 0x3F05
    ctx->pc = 0x1a0178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16133 << 16));
    // 0x1a017c: 0x34211eb9  ori         $at, $at, 0x1EB9
    ctx->pc = 0x1a017cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7865);
    // 0x1a0180: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a0180u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a0184: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1a0184u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1a0188: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1a0188u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1a018c: 0x46140028  max.s       $f0, $f0, $f20
    ctx->pc = 0x1a018cu;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[20]);
    // 0x1a0190: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x1a0190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
    // 0x1a0194: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a0194u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a0198: 0x46160029  min.s       $f0, $f0, $f22
    ctx->pc = 0x1a0198u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[22]);
    // 0x1a019c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1a019cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1a01a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a01a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a01a4: 0x46041836  c.le.s      $f3, $f4
    ctx->pc = 0x1a01a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a01a8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1a01a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1a01ac: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
    ctx->pc = 0x1A01ACu;
    {
        const bool branch_taken_0x1a01ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A01B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A01ACu;
            // 0x1a01b0: 0x46010540  add.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a01ac) {
            ctx->pc = 0x1A026Cu;
            goto label_1a026c;
        }
    }
    ctx->pc = 0x1A01B4u;
    // 0x1a01b4: 0x12e00014  beqz        $s7, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A01B4u;
    {
        const bool branch_taken_0x1a01b4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A01B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A01B4u;
            // 0x1a01b8: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a01b4) {
            ctx->pc = 0x1A0208u;
            goto label_1a0208;
        }
    }
    ctx->pc = 0x1A01BCu;
    // 0x1a01bc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1a01bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1a01c0: 0xc067eb4  jal         func_19FAD0
    ctx->pc = 0x1A01C0u;
    SET_GPR_U32(ctx, 31, 0x1A01C8u);
    ctx->pc = 0x1A01C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A01C0u;
            // 0x1a01c4: 0x84445062  lh          $a0, 0x5062($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20578)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FAD0u;
    if (runtime->hasFunction(0x19FAD0u)) {
        auto targetFn = runtime->lookupFunction(0x19FAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A01C8u; }
        if (ctx->pc != 0x1A01C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019FAD0_0x19fad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A01C8u; }
        if (ctx->pc != 0x1A01C8u) { return; }
    }
    ctx->pc = 0x1A01C8u;
    // 0x1a01c8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1a01c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1a01cc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1a01ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1a01d0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1a01d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a01d4: 0x84445064  lh          $a0, 0x5064($v0)
    ctx->pc = 0x1a01d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20580)));
    // 0x1a01d8: 0xc067e72  jal         func_19F9C8
    ctx->pc = 0x1A01D8u;
    SET_GPR_U32(ctx, 31, 0x1A01E0u);
    ctx->pc = 0x1A01DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A01D8u;
            // 0x1a01dc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F9C8u;
    if (runtime->hasFunction(0x19F9C8u)) {
        auto targetFn = runtime->lookupFunction(0x19F9C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A01E0u; }
        if (ctx->pc != 0x1A01E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F9C8_0x19f9c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A01E0u; }
        if (ctx->pc != 0x1A01E0u) { return; }
    }
    ctx->pc = 0x1A01E0u;
    // 0x1a01e0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1a01e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1a01e4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1a01e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1a01e8: 0xc067eb4  jal         func_19FAD0
    ctx->pc = 0x1A01E8u;
    SET_GPR_U32(ctx, 31, 0x1A01F0u);
    ctx->pc = 0x1A01ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A01E8u;
            // 0x1a01ec: 0x8444506a  lh          $a0, 0x506A($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20586)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FAD0u;
    if (runtime->hasFunction(0x19FAD0u)) {
        auto targetFn = runtime->lookupFunction(0x19FAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A01F0u; }
        if (ctx->pc != 0x1A01F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019FAD0_0x19fad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A01F0u; }
        if (ctx->pc != 0x1A01F0u) { return; }
    }
    ctx->pc = 0x1A01F0u;
    // 0x1a01f0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1a01f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1a01f4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1a01f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1a01f8: 0xc067eb4  jal         func_19FAD0
    ctx->pc = 0x1A01F8u;
    SET_GPR_U32(ctx, 31, 0x1A0200u);
    ctx->pc = 0x1A01FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A01F8u;
            // 0x1a01fc: 0x8444506c  lh          $a0, 0x506C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20588)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FAD0u;
    if (runtime->hasFunction(0x19FAD0u)) {
        auto targetFn = runtime->lookupFunction(0x19FAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0200u; }
        if (ctx->pc != 0x1A0200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019FAD0_0x19fad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0200u; }
        if (ctx->pc != 0x1A0200u) { return; }
    }
    ctx->pc = 0x1A0200u;
    // 0x1a0200: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1A0200u;
    {
        const bool branch_taken_0x1a0200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0200u;
            // 0x1a0204: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0200) {
            ctx->pc = 0x1A0250u;
            goto label_1a0250;
        }
    }
    ctx->pc = 0x1A0208u;
label_1a0208:
    // 0x1a0208: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1a0208u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1a020c: 0xc067eb4  jal         func_19FAD0
    ctx->pc = 0x1A020Cu;
    SET_GPR_U32(ctx, 31, 0x1A0214u);
    ctx->pc = 0x1A0210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A020Cu;
            // 0x1a0210: 0x84445062  lh          $a0, 0x5062($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20578)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FAD0u;
    if (runtime->hasFunction(0x19FAD0u)) {
        auto targetFn = runtime->lookupFunction(0x19FAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0214u; }
        if (ctx->pc != 0x1A0214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019FAD0_0x19fad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0214u; }
        if (ctx->pc != 0x1A0214u) { return; }
    }
    ctx->pc = 0x1A0214u;
    // 0x1a0214: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1a0214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1a0218: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1a0218u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1a021c: 0xc067eb4  jal         func_19FAD0
    ctx->pc = 0x1A021Cu;
    SET_GPR_U32(ctx, 31, 0x1A0224u);
    ctx->pc = 0x1A0220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A021Cu;
            // 0x1a0220: 0x84445064  lh          $a0, 0x5064($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20580)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FAD0u;
    if (runtime->hasFunction(0x19FAD0u)) {
        auto targetFn = runtime->lookupFunction(0x19FAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0224u; }
        if (ctx->pc != 0x1A0224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019FAD0_0x19fad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0224u; }
        if (ctx->pc != 0x1A0224u) { return; }
    }
    ctx->pc = 0x1A0224u;
    // 0x1a0224: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1a0224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1a0228: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1a0228u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1a022c: 0xc067eb4  jal         func_19FAD0
    ctx->pc = 0x1A022Cu;
    SET_GPR_U32(ctx, 31, 0x1A0234u);
    ctx->pc = 0x1A0230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A022Cu;
            // 0x1a0230: 0x8444506a  lh          $a0, 0x506A($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20586)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FAD0u;
    if (runtime->hasFunction(0x19FAD0u)) {
        auto targetFn = runtime->lookupFunction(0x19FAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0234u; }
        if (ctx->pc != 0x1A0234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019FAD0_0x19fad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0234u; }
        if (ctx->pc != 0x1A0234u) { return; }
    }
    ctx->pc = 0x1A0234u;
    // 0x1a0234: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1a0234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1a0238: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1a0238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1a023c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1a023cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a0240: 0x8444506c  lh          $a0, 0x506C($v0)
    ctx->pc = 0x1a0240u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20588)));
    // 0x1a0244: 0xc067e72  jal         func_19F9C8
    ctx->pc = 0x1A0244u;
    SET_GPR_U32(ctx, 31, 0x1A024Cu);
    ctx->pc = 0x1A0248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0244u;
            // 0x1a0248: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F9C8u;
    if (runtime->hasFunction(0x19F9C8u)) {
        auto targetFn = runtime->lookupFunction(0x19F9C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A024Cu; }
        if (ctx->pc != 0x1A024Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F9C8_0x19f9c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A024Cu; }
        if (ctx->pc != 0x1A024Cu) { return; }
    }
    ctx->pc = 0x1A024Cu;
    // 0x1a024c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1a024cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_1a0250:
    // 0x1a0250: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1a0250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1a0254: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a0254u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a0258: 0x84445060  lh          $a0, 0x5060($v0)
    ctx->pc = 0x1a0258u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20576)));
    // 0x1a025c: 0xc067eb4  jal         func_19FAD0
    ctx->pc = 0x1A025Cu;
    SET_GPR_U32(ctx, 31, 0x1A0264u);
    ctx->pc = 0x1A0260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A025Cu;
            // 0x1a0260: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FAD0u;
    if (runtime->hasFunction(0x19FAD0u)) {
        auto targetFn = runtime->lookupFunction(0x19FAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0264u; }
        if (ctx->pc != 0x1A0264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019FAD0_0x19fad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0264u; }
        if (ctx->pc != 0x1A0264u) { return; }
    }
    ctx->pc = 0x1A0264u;
    // 0x1a0264: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1A0264u;
    {
        const bool branch_taken_0x1a0264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0264u;
            // 0x1a0268: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0264) {
            ctx->pc = 0x1A037Cu;
            goto label_1a037c;
        }
    }
    ctx->pc = 0x1A026Cu;
label_1a026c:
    // 0x1a026c: 0x3c01bda3  lui         $at, 0xBDA3
    ctx->pc = 0x1a026cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48547 << 16));
    // 0x1a0270: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1a0270u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1a0274: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a0274u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a0278: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x1a0278u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a027c: 0x0  nop
    ctx->pc = 0x1a027cu;
    // NOP
    // 0x1a0280: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
    ctx->pc = 0x1A0280u;
    {
        const bool branch_taken_0x1a0280 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A0284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0280u;
            // 0x1a0284: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0280) {
            ctx->pc = 0x1A033Cu;
            goto label_1a033c;
        }
    }
    ctx->pc = 0x1A0288u;
    // 0x1a0288: 0x12e00013  beqz        $s7, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A0288u;
    {
        const bool branch_taken_0x1a0288 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A028Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0288u;
            // 0x1a028c: 0x84445062  lh          $a0, 0x5062($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20578)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0288) {
            ctx->pc = 0x1A02D8u;
            goto label_1a02d8;
        }
    }
    ctx->pc = 0x1A0290u;
    // 0x1a0290: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1a0290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1a0294: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1a0294u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a0298: 0xc067e72  jal         func_19F9C8
    ctx->pc = 0x1A0298u;
    SET_GPR_U32(ctx, 31, 0x1A02A0u);
    ctx->pc = 0x1A029Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0298u;
            // 0x1a029c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F9C8u;
    if (runtime->hasFunction(0x19F9C8u)) {
        auto targetFn = runtime->lookupFunction(0x19F9C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A02A0u; }
        if (ctx->pc != 0x1A02A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F9C8_0x19f9c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A02A0u; }
        if (ctx->pc != 0x1A02A0u) { return; }
    }
    ctx->pc = 0x1A02A0u;
    // 0x1a02a0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1a02a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1a02a4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1a02a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1a02a8: 0xc067eb4  jal         func_19FAD0
    ctx->pc = 0x1A02A8u;
    SET_GPR_U32(ctx, 31, 0x1A02B0u);
    ctx->pc = 0x1A02ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A02A8u;
            // 0x1a02ac: 0x84445064  lh          $a0, 0x5064($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20580)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FAD0u;
    if (runtime->hasFunction(0x19FAD0u)) {
        auto targetFn = runtime->lookupFunction(0x19FAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A02B0u; }
        if (ctx->pc != 0x1A02B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019FAD0_0x19fad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A02B0u; }
        if (ctx->pc != 0x1A02B0u) { return; }
    }
    ctx->pc = 0x1A02B0u;
    // 0x1a02b0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1a02b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1a02b4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1a02b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1a02b8: 0xc067eb4  jal         func_19FAD0
    ctx->pc = 0x1A02B8u;
    SET_GPR_U32(ctx, 31, 0x1A02C0u);
    ctx->pc = 0x1A02BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A02B8u;
            // 0x1a02bc: 0x8444506a  lh          $a0, 0x506A($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20586)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FAD0u;
    if (runtime->hasFunction(0x19FAD0u)) {
        auto targetFn = runtime->lookupFunction(0x19FAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A02C0u; }
        if (ctx->pc != 0x1A02C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019FAD0_0x19fad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A02C0u; }
        if (ctx->pc != 0x1A02C0u) { return; }
    }
    ctx->pc = 0x1A02C0u;
    // 0x1a02c0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1a02c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1a02c4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1a02c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1a02c8: 0xc067eb4  jal         func_19FAD0
    ctx->pc = 0x1A02C8u;
    SET_GPR_U32(ctx, 31, 0x1A02D0u);
    ctx->pc = 0x1A02CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A02C8u;
            // 0x1a02cc: 0x8444506c  lh          $a0, 0x506C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20588)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FAD0u;
    if (runtime->hasFunction(0x19FAD0u)) {
        auto targetFn = runtime->lookupFunction(0x19FAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A02D0u; }
        if (ctx->pc != 0x1A02D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019FAD0_0x19fad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A02D0u; }
        if (ctx->pc != 0x1A02D0u) { return; }
    }
    ctx->pc = 0x1A02D0u;
    // 0x1a02d0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1A02D0u;
    {
        const bool branch_taken_0x1a02d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A02D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A02D0u;
            // 0x1a02d4: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a02d0) {
            ctx->pc = 0x1A0320u;
            goto label_1a0320;
        }
    }
    ctx->pc = 0x1A02D8u;
label_1a02d8:
    // 0x1a02d8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1a02d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1a02dc: 0xc067eb4  jal         func_19FAD0
    ctx->pc = 0x1A02DCu;
    SET_GPR_U32(ctx, 31, 0x1A02E4u);
    ctx->pc = 0x1A02E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A02DCu;
            // 0x1a02e0: 0x84445062  lh          $a0, 0x5062($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20578)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FAD0u;
    if (runtime->hasFunction(0x19FAD0u)) {
        auto targetFn = runtime->lookupFunction(0x19FAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A02E4u; }
        if (ctx->pc != 0x1A02E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019FAD0_0x19fad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A02E4u; }
        if (ctx->pc != 0x1A02E4u) { return; }
    }
    ctx->pc = 0x1A02E4u;
    // 0x1a02e4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1a02e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1a02e8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1a02e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1a02ec: 0xc067eb4  jal         func_19FAD0
    ctx->pc = 0x1A02ECu;
    SET_GPR_U32(ctx, 31, 0x1A02F4u);
    ctx->pc = 0x1A02F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A02ECu;
            // 0x1a02f0: 0x84445064  lh          $a0, 0x5064($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20580)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FAD0u;
    if (runtime->hasFunction(0x19FAD0u)) {
        auto targetFn = runtime->lookupFunction(0x19FAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A02F4u; }
        if (ctx->pc != 0x1A02F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019FAD0_0x19fad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A02F4u; }
        if (ctx->pc != 0x1A02F4u) { return; }
    }
    ctx->pc = 0x1A02F4u;
    // 0x1a02f4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1a02f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1a02f8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1a02f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1a02fc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1a02fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a0300: 0x8444506a  lh          $a0, 0x506A($v0)
    ctx->pc = 0x1a0300u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20586)));
    // 0x1a0304: 0xc067e72  jal         func_19F9C8
    ctx->pc = 0x1A0304u;
    SET_GPR_U32(ctx, 31, 0x1A030Cu);
    ctx->pc = 0x1A0308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0304u;
            // 0x1a0308: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F9C8u;
    if (runtime->hasFunction(0x19F9C8u)) {
        auto targetFn = runtime->lookupFunction(0x19F9C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A030Cu; }
        if (ctx->pc != 0x1A030Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F9C8_0x19f9c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A030Cu; }
        if (ctx->pc != 0x1A030Cu) { return; }
    }
    ctx->pc = 0x1A030Cu;
    // 0x1a030c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1a030cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1a0310: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1a0310u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1a0314: 0xc067eb4  jal         func_19FAD0
    ctx->pc = 0x1A0314u;
    SET_GPR_U32(ctx, 31, 0x1A031Cu);
    ctx->pc = 0x1A0318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0314u;
            // 0x1a0318: 0x8444506c  lh          $a0, 0x506C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20588)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FAD0u;
    if (runtime->hasFunction(0x19FAD0u)) {
        auto targetFn = runtime->lookupFunction(0x19FAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A031Cu; }
        if (ctx->pc != 0x1A031Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019FAD0_0x19fad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A031Cu; }
        if (ctx->pc != 0x1A031Cu) { return; }
    }
    ctx->pc = 0x1A031Cu;
    // 0x1a031c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1a031cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_1a0320:
    // 0x1a0320: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1a0320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1a0324: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a0324u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a0328: 0x84445060  lh          $a0, 0x5060($v0)
    ctx->pc = 0x1a0328u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20576)));
    // 0x1a032c: 0xc067eb4  jal         func_19FAD0
    ctx->pc = 0x1A032Cu;
    SET_GPR_U32(ctx, 31, 0x1A0334u);
    ctx->pc = 0x1A0330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A032Cu;
            // 0x1a0330: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FAD0u;
    if (runtime->hasFunction(0x19FAD0u)) {
        auto targetFn = runtime->lookupFunction(0x19FAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0334u; }
        if (ctx->pc != 0x1A0334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019FAD0_0x19fad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0334u; }
        if (ctx->pc != 0x1A0334u) { return; }
    }
    ctx->pc = 0x1A0334u;
    // 0x1a0334: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1A0334u;
    {
        const bool branch_taken_0x1a0334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0334u;
            // 0x1a0338: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0334) {
            ctx->pc = 0x1A037Cu;
            goto label_1a037c;
        }
    }
    ctx->pc = 0x1A033Cu;
label_1a033c:
    // 0x1a033c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1a033cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1a0340: 0xc067eb4  jal         func_19FAD0
    ctx->pc = 0x1A0340u;
    SET_GPR_U32(ctx, 31, 0x1A0348u);
    ctx->pc = 0x1A0344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0340u;
            // 0x1a0344: 0x84445062  lh          $a0, 0x5062($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20578)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FAD0u;
    if (runtime->hasFunction(0x19FAD0u)) {
        auto targetFn = runtime->lookupFunction(0x19FAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0348u; }
        if (ctx->pc != 0x1A0348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019FAD0_0x19fad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0348u; }
        if (ctx->pc != 0x1A0348u) { return; }
    }
    ctx->pc = 0x1A0348u;
    // 0x1a0348: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1a0348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1a034c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1a034cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1a0350: 0xc067eb4  jal         func_19FAD0
    ctx->pc = 0x1A0350u;
    SET_GPR_U32(ctx, 31, 0x1A0358u);
    ctx->pc = 0x1A0354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0350u;
            // 0x1a0354: 0x84445064  lh          $a0, 0x5064($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20580)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FAD0u;
    if (runtime->hasFunction(0x19FAD0u)) {
        auto targetFn = runtime->lookupFunction(0x19FAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0358u; }
        if (ctx->pc != 0x1A0358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019FAD0_0x19fad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0358u; }
        if (ctx->pc != 0x1A0358u) { return; }
    }
    ctx->pc = 0x1A0358u;
    // 0x1a0358: 0x12e0000d  beqz        $s7, . + 4 + (0xD << 2)
    ctx->pc = 0x1A0358u;
    {
        const bool branch_taken_0x1a0358 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A035Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0358u;
            // 0x1a035c: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0358) {
            ctx->pc = 0x1A0390u;
            goto label_1a0390;
        }
    }
    ctx->pc = 0x1A0360u;
    // 0x1a0360: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1a0360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1a0364: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a0364u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a0368: 0x84445060  lh          $a0, 0x5060($v0)
    ctx->pc = 0x1a0368u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20576)));
    // 0x1a036c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1a036cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1a0370: 0xc067e72  jal         func_19F9C8
    ctx->pc = 0x1A0370u;
    SET_GPR_U32(ctx, 31, 0x1A0378u);
    ctx->pc = 0x1A0374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0370u;
            // 0x1a0374: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F9C8u;
    if (runtime->hasFunction(0x19F9C8u)) {
        auto targetFn = runtime->lookupFunction(0x19F9C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0378u; }
        if (ctx->pc != 0x1A0378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F9C8_0x19f9c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0378u; }
        if (ctx->pc != 0x1A0378u) { return; }
    }
    ctx->pc = 0x1A0378u;
    // 0x1a0378: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1a0378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_1a037c:
    // 0x1a037c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1a037cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1a0380: 0xc067eb4  jal         func_19FAD0
    ctx->pc = 0x1A0380u;
    SET_GPR_U32(ctx, 31, 0x1A0388u);
    ctx->pc = 0x1A0384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0380u;
            // 0x1a0384: 0x84445068  lh          $a0, 0x5068($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20584)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FAD0u;
    if (runtime->hasFunction(0x19FAD0u)) {
        auto targetFn = runtime->lookupFunction(0x19FAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0388u; }
        if (ctx->pc != 0x1A0388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019FAD0_0x19fad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0388u; }
        if (ctx->pc != 0x1A0388u) { return; }
    }
    ctx->pc = 0x1A0388u;
    // 0x1a0388: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1A0388u;
    {
        const bool branch_taken_0x1a0388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A038Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0388u;
            // 0x1a038c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0388) {
            ctx->pc = 0x1A03C8u;
            goto label_1a03c8;
        }
    }
    ctx->pc = 0x1A0390u;
label_1a0390:
    // 0x1a0390: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1a0390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0394: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A0394u;
    {
        const bool branch_taken_0x1a0394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0394u;
            // 0x1a0398: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0394) {
            ctx->pc = 0x1A03C4u;
            goto label_1a03c4;
        }
    }
    ctx->pc = 0x1A039Cu;
    // 0x1a039c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1a039cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1a03a0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a03a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a03a4: 0x84445060  lh          $a0, 0x5060($v0)
    ctx->pc = 0x1a03a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20576)));
    // 0x1a03a8: 0xc067eb4  jal         func_19FAD0
    ctx->pc = 0x1A03A8u;
    SET_GPR_U32(ctx, 31, 0x1A03B0u);
    ctx->pc = 0x1A03ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A03A8u;
            // 0x1a03ac: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FAD0u;
    if (runtime->hasFunction(0x19FAD0u)) {
        auto targetFn = runtime->lookupFunction(0x19FAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A03B0u; }
        if (ctx->pc != 0x1A03B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019FAD0_0x19fad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A03B0u; }
        if (ctx->pc != 0x1A03B0u) { return; }
    }
    ctx->pc = 0x1A03B0u;
    // 0x1a03b0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1a03b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1a03b4: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1a03b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1a03b8: 0x84445068  lh          $a0, 0x5068($v0)
    ctx->pc = 0x1a03b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20584)));
    // 0x1a03bc: 0xc067e72  jal         func_19F9C8
    ctx->pc = 0x1A03BCu;
    SET_GPR_U32(ctx, 31, 0x1A03C4u);
    ctx->pc = 0x1A03C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A03BCu;
            // 0x1a03c0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F9C8u;
    if (runtime->hasFunction(0x19F9C8u)) {
        auto targetFn = runtime->lookupFunction(0x19F9C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A03C4u; }
        if (ctx->pc != 0x1A03C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F9C8_0x19f9c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A03C4u; }
        if (ctx->pc != 0x1A03C4u) { return; }
    }
    ctx->pc = 0x1A03C4u;
label_1a03c4:
    // 0x1a03c4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1a03c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1a03c8:
    // 0x1a03c8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1a03c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a03cc: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1a03ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a03d0: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1a03d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a03d4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1a03d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a03d8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1a03d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a03dc: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x1a03dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a03e0: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x1a03e0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a03e4: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x1a03e4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a03e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a03e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a03ec: 0xc7b800d0  lwc1        $f24, 0xD0($sp)
    ctx->pc = 0x1a03ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1a03f0: 0xc7b700c8  lwc1        $f23, 0xC8($sp)
    ctx->pc = 0x1a03f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1a03f4: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x1a03f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1a03f8: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x1a03f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1a03fc: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x1a03fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a0400: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0400u;
            // 0x1a0404: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19FC38u: goto label_19fc38;
            case 0x19FDF0u: goto label_19fdf0;
            case 0x19FE88u: goto label_19fe88;
            case 0x19FE8Cu: goto label_19fe8c;
            case 0x19FEF8u: goto label_19fef8;
            case 0x19FF50u: goto label_19ff50;
            case 0x19FF64u: goto label_19ff64;
            case 0x19FF78u: goto label_19ff78;
            case 0x1A0028u: goto label_1a0028;
            case 0x1A0074u: goto label_1a0074;
            case 0x1A0098u: goto label_1a0098;
            case 0x1A00B4u: goto label_1a00b4;
            case 0x1A0108u: goto label_1a0108;
            case 0x1A0120u: goto label_1a0120;
            case 0x1A0128u: goto label_1a0128;
            case 0x1A012Cu: goto label_1a012c;
            case 0x1A0148u: goto label_1a0148;
            case 0x1A0208u: goto label_1a0208;
            case 0x1A0250u: goto label_1a0250;
            case 0x1A026Cu: goto label_1a026c;
            case 0x1A02D8u: goto label_1a02d8;
            case 0x1A0320u: goto label_1a0320;
            case 0x1A033Cu: goto label_1a033c;
            case 0x1A037Cu: goto label_1a037c;
            case 0x1A0390u: goto label_1a0390;
            case 0x1A03C4u: goto label_1a03c4;
            case 0x1A03C8u: goto label_1a03c8;
            case 0x1A0470u: goto label_1a0470;
            case 0x1A0474u: goto label_1a0474;
            case 0x1A04F0u: goto label_1a04f0;
            case 0x1A04F4u: goto label_1a04f4;
            case 0x1A0578u: goto label_1a0578;
            case 0x1A05BCu: goto label_1a05bc;
            case 0x1A05E8u: goto label_1a05e8;
            case 0x1A05ECu: goto label_1a05ec;
            case 0x1A0620u: goto label_1a0620;
            case 0x1A064Cu: goto label_1a064c;
            case 0x1A0658u: goto label_1a0658;
            case 0x1A0670u: goto label_1a0670;
            case 0x1A06A0u: goto label_1a06a0;
            case 0x1A06B0u: goto label_1a06b0;
            case 0x1A06C0u: goto label_1a06c0;
            case 0x1A06D0u: goto label_1a06d0;
            case 0x1A06F8u: goto label_1a06f8;
            case 0x1A06FCu: goto label_1a06fc;
            case 0x1A0754u: goto label_1a0754;
            case 0x1A0800u: goto label_1a0800;
            case 0x1A0860u: goto label_1a0860;
            case 0x1A0868u: goto label_1a0868;
            case 0x1A086Cu: goto label_1a086c;
            case 0x1A08B0u: goto label_1a08b0;
            case 0x1A08B4u: goto label_1a08b4;
            case 0x1A08DCu: goto label_1a08dc;
            case 0x1A08E8u: goto label_1a08e8;
            case 0x1A0948u: goto label_1a0948;
            case 0x1A094Cu: goto label_1a094c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A0408u;
    // 0x1a0408: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1a0408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x1a040c: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x1a040cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x1a0410: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x1a0410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x1a0414: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1a0414u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0418: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x1a0418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x1a041c: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x1a041cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x1a0420: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x1a0420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x1a0424: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x1a0424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x1a0428: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x1a0428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x1a042c: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1a042cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1a0430: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x1a0430u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x1a0434: 0x8e850060  lw          $a1, 0x60($s4)
    ctx->pc = 0x1a0434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
    // 0x1a0438: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x1a0438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x1a043c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A043Cu;
    {
        const bool branch_taken_0x1a043c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A043Cu;
            // 0x1a0440: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a043c) {
            ctx->pc = 0x1A0474u;
            goto label_1a0474;
        }
    }
    ctx->pc = 0x1A0444u;
    // 0x1a0444: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1a0444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1a0448: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x1a0448u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x1a044c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1a044cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1a0450: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a0450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a0454: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x1a0454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x1a0458: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1a0458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1a045c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1a045cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a0460: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a0460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a0464: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A0464u;
    {
        const bool branch_taken_0x1a0464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1A0468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0464u;
            // 0x1a0468: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0464) {
            ctx->pc = 0x1A0470u;
            goto label_1a0470;
        }
    }
    ctx->pc = 0x1A046Cu;
    // 0x1a046c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1a046cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1a0470:
    // 0x1a0470: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a0470u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a0474:
    // 0x1a0474: 0x3c16002a  lui         $s6, 0x2A
    ctx->pc = 0x1a0474u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)42 << 16));
    // 0x1a0478: 0x8e950064  lw          $s5, 0x64($s4)
    ctx->pc = 0x1a0478u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
    // 0x1a047c: 0x8ec4cd58  lw          $a0, -0x32A8($s6)
    ctx->pc = 0x1a047cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954328)));
    // 0x1a0480: 0xc0761e2  jal         func_1D8788
    ctx->pc = 0x1A0480u;
    SET_GPR_U32(ctx, 31, 0x1A0488u);
    ctx->pc = 0x1A0484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0480u;
            // 0x1a0484: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8788u;
    if (runtime->hasFunction(0x1D8788u)) {
        auto targetFn = runtime->lookupFunction(0x1D8788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0488u; }
        if (ctx->pc != 0x1A0488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d8788_0x1d8800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0488u; }
        if (ctx->pc != 0x1A0488u) { return; }
    }
    ctx->pc = 0x1A0488u;
    // 0x1a0488: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x1a0488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1a048c: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x1a048cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1a0490: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1a0490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1a0494: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1a0494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1a0498: 0x2463e440  addiu       $v1, $v1, -0x1BC0
    ctx->pc = 0x1a0498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960192));
    // 0x1a049c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1a049cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1a04a0: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1a04a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1a04a4: 0xa38821  addu        $s1, $a1, $v1
    ctx->pc = 0x1a04a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a04a8: 0x40f809  jalr        $v0
    ctx->pc = 0x1A04A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A04B0u);
        ctx->pc = 0x1A04ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A04A8u;
            // 0x1a04ac: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A04B0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19FC38u: goto label_19fc38;
            case 0x19FDF0u: goto label_19fdf0;
            case 0x19FE88u: goto label_19fe88;
            case 0x19FE8Cu: goto label_19fe8c;
            case 0x19FEF8u: goto label_19fef8;
            case 0x19FF50u: goto label_19ff50;
            case 0x19FF64u: goto label_19ff64;
            case 0x19FF78u: goto label_19ff78;
            case 0x1A0028u: goto label_1a0028;
            case 0x1A0074u: goto label_1a0074;
            case 0x1A0098u: goto label_1a0098;
            case 0x1A00B4u: goto label_1a00b4;
            case 0x1A0108u: goto label_1a0108;
            case 0x1A0120u: goto label_1a0120;
            case 0x1A0128u: goto label_1a0128;
            case 0x1A012Cu: goto label_1a012c;
            case 0x1A0148u: goto label_1a0148;
            case 0x1A0208u: goto label_1a0208;
            case 0x1A0250u: goto label_1a0250;
            case 0x1A026Cu: goto label_1a026c;
            case 0x1A02D8u: goto label_1a02d8;
            case 0x1A0320u: goto label_1a0320;
            case 0x1A033Cu: goto label_1a033c;
            case 0x1A037Cu: goto label_1a037c;
            case 0x1A0390u: goto label_1a0390;
            case 0x1A03C4u: goto label_1a03c4;
            case 0x1A03C8u: goto label_1a03c8;
            case 0x1A0470u: goto label_1a0470;
            case 0x1A0474u: goto label_1a0474;
            case 0x1A04F0u: goto label_1a04f0;
            case 0x1A04F4u: goto label_1a04f4;
            case 0x1A0578u: goto label_1a0578;
            case 0x1A05BCu: goto label_1a05bc;
            case 0x1A05E8u: goto label_1a05e8;
            case 0x1A05ECu: goto label_1a05ec;
            case 0x1A0620u: goto label_1a0620;
            case 0x1A064Cu: goto label_1a064c;
            case 0x1A0658u: goto label_1a0658;
            case 0x1A0670u: goto label_1a0670;
            case 0x1A06A0u: goto label_1a06a0;
            case 0x1A06B0u: goto label_1a06b0;
            case 0x1A06C0u: goto label_1a06c0;
            case 0x1A06D0u: goto label_1a06d0;
            case 0x1A06F8u: goto label_1a06f8;
            case 0x1A06FCu: goto label_1a06fc;
            case 0x1A0754u: goto label_1a0754;
            case 0x1A0800u: goto label_1a0800;
            case 0x1A0860u: goto label_1a0860;
            case 0x1A0868u: goto label_1a0868;
            case 0x1A086Cu: goto label_1a086c;
            case 0x1A08B0u: goto label_1a08b0;
            case 0x1A08B4u: goto label_1a08b4;
            case 0x1A08DCu: goto label_1a08dc;
            case 0x1A08E8u: goto label_1a08e8;
            case 0x1A0948u: goto label_1a0948;
            case 0x1A094Cu: goto label_1a094c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A04B0u; }
            if (ctx->pc != 0x1A04B0u) { return; }
        }
        }
    }
    ctx->pc = 0x1A04B0u;
    // 0x1a04b0: 0x8c450080  lw          $a1, 0x80($v0)
    ctx->pc = 0x1a04b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x1a04b4: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x1a04b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x1a04b8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A04B8u;
    {
        const bool branch_taken_0x1a04b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A04BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A04B8u;
            // 0x1a04bc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a04b8) {
            ctx->pc = 0x1A04F4u;
            goto label_1a04f4;
        }
    }
    ctx->pc = 0x1A04C0u;
    // 0x1a04c0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1a04c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1a04c4: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x1a04c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x1a04c8: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1a04c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1a04cc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a04ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a04d0: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x1a04d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x1a04d4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1a04d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1a04d8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1a04d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a04dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a04dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a04e0: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A04E0u;
    {
        const bool branch_taken_0x1a04e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1A04E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A04E0u;
            // 0x1a04e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a04e0) {
            ctx->pc = 0x1A04F0u;
            goto label_1a04f0;
        }
    }
    ctx->pc = 0x1A04E8u;
    // 0x1a04e8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1a04e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1a04ec: 0x0  nop
    ctx->pc = 0x1a04ecu;
    // NOP
label_1a04f0:
    // 0x1a04f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a04f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a04f4:
    // 0x1a04f4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1a04f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a04f8: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x1a04f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1a04fc: 0xd8410040  lqc2        $vf1, 0x40($v0)
    ctx->pc = 0x1a04fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1a0500: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1a0500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1a0504: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x1a0504u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1a0508: 0xfba30070  sqc2        $vf3, 0x70($sp)
    ctx->pc = 0x1a0508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1a050c: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x1a050cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1a0510: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x1a0510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1a0514: 0x70851b89  pcpyld      $v1, $a0, $a1
    ctx->pc = 0x1a0514u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1a0518: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x1a0518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1a051c: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x1a051cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1a0520: 0x70851389  pcpyld      $v0, $a0, $a1
    ctx->pc = 0x1a0520u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1a0524: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1a0524u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1a0528: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x1a0528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x1a052c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A052Cu;
    {
        const bool branch_taken_0x1a052c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A052Cu;
            // 0x1a0530: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a052c) {
            ctx->pc = 0x1A0578u;
            goto label_1a0578;
        }
    }
    ctx->pc = 0x1A0534u;
    // 0x1a0534: 0x7a0200e0  lq          $v0, 0xE0($s0)
    ctx->pc = 0x1a0534u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1a0538: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a0538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a053c: 0x8e130000  lw          $s3, 0x0($s0)
    ctx->pc = 0x1a053cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a0540: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x1a0540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x1a0544: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1a0544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a0548: 0x844400e8  lh          $a0, 0xE8($v0)
    ctx->pc = 0x1a0548u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 232)));
    // 0x1a054c: 0x8c4200ec  lw          $v0, 0xEC($v0)
    ctx->pc = 0x1a054cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 236)));
    // 0x1a0550: 0x40f809  jalr        $v0
    ctx->pc = 0x1A0550u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A0558u);
        ctx->pc = 0x1A0554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0550u;
            // 0x1a0554: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A0558u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19FC38u: goto label_19fc38;
            case 0x19FDF0u: goto label_19fdf0;
            case 0x19FE88u: goto label_19fe88;
            case 0x19FE8Cu: goto label_19fe8c;
            case 0x19FEF8u: goto label_19fef8;
            case 0x19FF50u: goto label_19ff50;
            case 0x19FF64u: goto label_19ff64;
            case 0x19FF78u: goto label_19ff78;
            case 0x1A0028u: goto label_1a0028;
            case 0x1A0074u: goto label_1a0074;
            case 0x1A0098u: goto label_1a0098;
            case 0x1A00B4u: goto label_1a00b4;
            case 0x1A0108u: goto label_1a0108;
            case 0x1A0120u: goto label_1a0120;
            case 0x1A0128u: goto label_1a0128;
            case 0x1A012Cu: goto label_1a012c;
            case 0x1A0148u: goto label_1a0148;
            case 0x1A0208u: goto label_1a0208;
            case 0x1A0250u: goto label_1a0250;
            case 0x1A026Cu: goto label_1a026c;
            case 0x1A02D8u: goto label_1a02d8;
            case 0x1A0320u: goto label_1a0320;
            case 0x1A033Cu: goto label_1a033c;
            case 0x1A037Cu: goto label_1a037c;
            case 0x1A0390u: goto label_1a0390;
            case 0x1A03C4u: goto label_1a03c4;
            case 0x1A03C8u: goto label_1a03c8;
            case 0x1A0470u: goto label_1a0470;
            case 0x1A0474u: goto label_1a0474;
            case 0x1A04F0u: goto label_1a04f0;
            case 0x1A04F4u: goto label_1a04f4;
            case 0x1A0578u: goto label_1a0578;
            case 0x1A05BCu: goto label_1a05bc;
            case 0x1A05E8u: goto label_1a05e8;
            case 0x1A05ECu: goto label_1a05ec;
            case 0x1A0620u: goto label_1a0620;
            case 0x1A064Cu: goto label_1a064c;
            case 0x1A0658u: goto label_1a0658;
            case 0x1A0670u: goto label_1a0670;
            case 0x1A06A0u: goto label_1a06a0;
            case 0x1A06B0u: goto label_1a06b0;
            case 0x1A06C0u: goto label_1a06c0;
            case 0x1A06D0u: goto label_1a06d0;
            case 0x1A06F8u: goto label_1a06f8;
            case 0x1A06FCu: goto label_1a06fc;
            case 0x1A0754u: goto label_1a0754;
            case 0x1A0800u: goto label_1a0800;
            case 0x1A0860u: goto label_1a0860;
            case 0x1A0868u: goto label_1a0868;
            case 0x1A086Cu: goto label_1a086c;
            case 0x1A08B0u: goto label_1a08b0;
            case 0x1A08B4u: goto label_1a08b4;
            case 0x1A08DCu: goto label_1a08dc;
            case 0x1A08E8u: goto label_1a08e8;
            case 0x1A0948u: goto label_1a0948;
            case 0x1A094Cu: goto label_1a094c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A0558u; }
            if (ctx->pc != 0x1A0558u) { return; }
        }
        }
    }
    ctx->pc = 0x1A0558u;
    // 0x1a0558: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x1a0558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x1a055c: 0xc0909c4  jal         func_242710
    ctx->pc = 0x1A055Cu;
    SET_GPR_U32(ctx, 31, 0x1A0564u);
    ctx->pc = 0x1A0560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A055Cu;
            // 0x1a0560: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242710u;
    if (runtime->hasFunction(0x242710u)) {
        auto targetFn = runtime->lookupFunction(0x242710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0564u; }
        if (ctx->pc != 0x1A0564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242710_0x242720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0564u; }
        if (ctx->pc != 0x1A0564u) { return; }
    }
    ctx->pc = 0x1A0564u;
    // 0x1a0564: 0xd8410030  lqc2        $vf1, 0x30($v0)
    ctx->pc = 0x1a0564u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1a0568: 0xdba20080  lqc2        $vf2, 0x80($sp)
    ctx->pc = 0x1a0568u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a056c: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1a056cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1a0570: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1A0570u;
    {
        const bool branch_taken_0x1a0570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0570u;
            // 0x1a0574: 0xfba20070  sqc2        $vf2, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0570) {
            ctx->pc = 0x1A0658u;
            goto label_1a0658;
        }
    }
    ctx->pc = 0x1A0578u;
label_1a0578:
    // 0x1a0578: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1a0578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1a057c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a057cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0580: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1a0580u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1a0584: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1a0584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1a0588: 0x40f809  jalr        $v0
    ctx->pc = 0x1A0588u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A0590u);
        ctx->pc = 0x1A058Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0588u;
            // 0x1a058c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A0590u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19FC38u: goto label_19fc38;
            case 0x19FDF0u: goto label_19fdf0;
            case 0x19FE88u: goto label_19fe88;
            case 0x19FE8Cu: goto label_19fe8c;
            case 0x19FEF8u: goto label_19fef8;
            case 0x19FF50u: goto label_19ff50;
            case 0x19FF64u: goto label_19ff64;
            case 0x19FF78u: goto label_19ff78;
            case 0x1A0028u: goto label_1a0028;
            case 0x1A0074u: goto label_1a0074;
            case 0x1A0098u: goto label_1a0098;
            case 0x1A00B4u: goto label_1a00b4;
            case 0x1A0108u: goto label_1a0108;
            case 0x1A0120u: goto label_1a0120;
            case 0x1A0128u: goto label_1a0128;
            case 0x1A012Cu: goto label_1a012c;
            case 0x1A0148u: goto label_1a0148;
            case 0x1A0208u: goto label_1a0208;
            case 0x1A0250u: goto label_1a0250;
            case 0x1A026Cu: goto label_1a026c;
            case 0x1A02D8u: goto label_1a02d8;
            case 0x1A0320u: goto label_1a0320;
            case 0x1A033Cu: goto label_1a033c;
            case 0x1A037Cu: goto label_1a037c;
            case 0x1A0390u: goto label_1a0390;
            case 0x1A03C4u: goto label_1a03c4;
            case 0x1A03C8u: goto label_1a03c8;
            case 0x1A0470u: goto label_1a0470;
            case 0x1A0474u: goto label_1a0474;
            case 0x1A04F0u: goto label_1a04f0;
            case 0x1A04F4u: goto label_1a04f4;
            case 0x1A0578u: goto label_1a0578;
            case 0x1A05BCu: goto label_1a05bc;
            case 0x1A05E8u: goto label_1a05e8;
            case 0x1A05ECu: goto label_1a05ec;
            case 0x1A0620u: goto label_1a0620;
            case 0x1A064Cu: goto label_1a064c;
            case 0x1A0658u: goto label_1a0658;
            case 0x1A0670u: goto label_1a0670;
            case 0x1A06A0u: goto label_1a06a0;
            case 0x1A06B0u: goto label_1a06b0;
            case 0x1A06C0u: goto label_1a06c0;
            case 0x1A06D0u: goto label_1a06d0;
            case 0x1A06F8u: goto label_1a06f8;
            case 0x1A06FCu: goto label_1a06fc;
            case 0x1A0754u: goto label_1a0754;
            case 0x1A0800u: goto label_1a0800;
            case 0x1A0860u: goto label_1a0860;
            case 0x1A0868u: goto label_1a0868;
            case 0x1A086Cu: goto label_1a086c;
            case 0x1A08B0u: goto label_1a08b0;
            case 0x1A08B4u: goto label_1a08b4;
            case 0x1A08DCu: goto label_1a08dc;
            case 0x1A08E8u: goto label_1a08e8;
            case 0x1A0948u: goto label_1a0948;
            case 0x1A094Cu: goto label_1a094c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A0590u; }
            if (ctx->pc != 0x1A0590u) { return; }
        }
        }
    }
    ctx->pc = 0x1A0590u;
    // 0x1a0590: 0x8c450080  lw          $a1, 0x80($v0)
    ctx->pc = 0x1a0590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x1a0594: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1a0594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1a0598: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1a0598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1a059c: 0x515c2  srl         $v0, $a1, 23
    ctx->pc = 0x1a059cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x1a05a0: 0x8c63d2ac  lw          $v1, -0x2D54($v1)
    ctx->pc = 0x1a05a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955692)));
    // 0x1a05a4: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x1a05a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1a05a8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1a05a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1a05ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a05acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a05b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a05b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a05b4: 0x50450001  beql        $v0, $a1, . + 4 + (0x1 << 2)
    ctx->pc = 0x1A05B4u;
    {
        const bool branch_taken_0x1a05b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1a05b4) {
            ctx->pc = 0x1A05B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A05B4u;
            // 0x1a05b8: 0x8c700004  lw          $s0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A05BCu;
            goto label_1a05bc;
        }
    }
    ctx->pc = 0x1A05BCu;
label_1a05bc:
    // 0x1a05bc: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x1a05bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a05c0: 0x12600025  beqz        $s3, . + 4 + (0x25 << 2)
    ctx->pc = 0x1A05C0u;
    {
        const bool branch_taken_0x1a05c0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A05C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A05C0u;
            // 0x1a05c4: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a05c0) {
            ctx->pc = 0x1A0658u;
            goto label_1a0658;
        }
    }
    ctx->pc = 0x1A05C8u;
    // 0x1a05c8: 0x8c42ec94  lw          $v0, -0x136C($v0)
    ctx->pc = 0x1a05c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962324)));
    // 0x1a05cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a05ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a05d0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1a05d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1a05d4: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x1a05d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1a05d8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A05D8u;
    {
        const bool branch_taken_0x1a05d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A05DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A05D8u;
            // 0x1a05dc: 0x2462ffec  addiu       $v0, $v1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a05d8) {
            ctx->pc = 0x1A05E8u;
            goto label_1a05e8;
        }
    }
    ctx->pc = 0x1A05E0u;
    // 0x1a05e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A05E0u;
    {
        const bool branch_taken_0x1a05e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A05E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A05E0u;
            // 0x1a05e4: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a05e0) {
            ctx->pc = 0x1A05ECu;
            goto label_1a05ec;
        }
    }
    ctx->pc = 0x1A05E8u;
label_1a05e8:
    // 0x1a05e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a05e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a05ec:
    // 0x1a05ec: 0x8c4200e4  lw          $v0, 0xE4($v0)
    ctx->pc = 0x1a05ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
    // 0x1a05f0: 0x8e050104  lw          $a1, 0x104($s0)
    ctx->pc = 0x1a05f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x1a05f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a05f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a05f8: 0x8c460034  lw          $a2, 0x34($v0)
    ctx->pc = 0x1a05f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1a05fc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a05fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a0600: 0xdc43bdf8  ld          $v1, -0x4208($v0)
    ctx->pc = 0x1a0600u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1a0604: 0xdca20040  ld          $v0, 0x40($a1)
    ctx->pc = 0x1a0604u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x1a0608: 0x50430005  beql        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A0608u;
    {
        const bool branch_taken_0x1a0608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a0608) {
            ctx->pc = 0x1A060Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0608u;
            // 0x1a060c: 0x8ca2008c  lw          $v0, 0x8C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A0620u;
            goto label_1a0620;
        }
    }
    ctx->pc = 0x1A0610u;
    // 0x1a0610: 0xc04daf6  jal         func_136BD8
    ctx->pc = 0x1A0610u;
    SET_GPR_U32(ctx, 31, 0x1A0618u);
    ctx->pc = 0x1A0614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0610u;
            // 0x1a0614: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136BD8u;
    if (runtime->hasFunction(0x136BD8u)) {
        auto targetFn = runtime->lookupFunction(0x136BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0618u; }
        if (ctx->pc != 0x1A0618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136BD8_0x136bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0618u; }
        if (ctx->pc != 0x1A0618u) { return; }
    }
    ctx->pc = 0x1A0618u;
    // 0x1a0618: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1A0618u;
    {
        const bool branch_taken_0x1a0618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A061Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0618u;
            // 0x1a061c: 0xda020050  lqc2        $vf2, 0x50($s0) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0618) {
            ctx->pc = 0x1A064Cu;
            goto label_1a064c;
        }
    }
    ctx->pc = 0x1A0620u;
label_1a0620:
    // 0x1a0620: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x1a0620u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x1a0624: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a0624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a0628: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1a0628u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a062c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1a062cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1a0630: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x1a0630u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1a0634: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1a0634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1a0638: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1a0638u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1a063c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1a063cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x1a0640: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x1a0640u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1a0644: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1a0644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x1a0648: 0xda020050  lqc2        $vf2, 0x50($s0)
    ctx->pc = 0x1a0648u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 80)));
label_1a064c:
    // 0x1a064c: 0xdba10040  lqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1a064cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0650: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x1a0650u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1a0654: 0xfba30070  sqc2        $vf3, 0x70($sp)
    ctx->pc = 0x1a0654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[3]));
label_1a0658:
    // 0x1a0658: 0x86a2000c  lh          $v0, 0xC($s5)
    ctx->pc = 0x1a0658u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1a065c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a065cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0660: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0660u;
    {
        const bool branch_taken_0x1a0660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1A0664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0660u;
            // 0x1a0664: 0xc6340004  lwc1        $f20, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0660) {
            ctx->pc = 0x1A0670u;
            goto label_1a0670;
        }
    }
    ctx->pc = 0x1A0668u;
    // 0x1a0668: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1A0668u;
    {
        const bool branch_taken_0x1a0668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A066Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0668u;
            // 0x1a066c: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0668) {
            ctx->pc = 0x1A06F8u;
            goto label_1a06f8;
        }
    }
    ctx->pc = 0x1A0670u;
label_1a0670:
    // 0x1a0670: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1a0670u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1a0674: 0x80c3c9fa  lb          $v1, -0x3606($a2)
    ctx->pc = 0x1a0674u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294953466)));
    // 0x1a0678: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a0678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a067c: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A067Cu;
    {
        const bool branch_taken_0x1a067c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A0680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A067Cu;
            // 0x1a0680: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a067c) {
            ctx->pc = 0x1A06C0u;
            goto label_1a06c0;
        }
    }
    ctx->pc = 0x1A0684u;
    // 0x1a0684: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x1a0684u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a0688: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A0688u;
    {
        const bool branch_taken_0x1a0688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A068Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0688u;
            // 0x1a068c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0688) {
            ctx->pc = 0x1A06A0u;
            goto label_1a06a0;
        }
    }
    ctx->pc = 0x1A0690u;
    // 0x1a0690: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A0690u;
    {
        const bool branch_taken_0x1a0690 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1A0694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0690u;
            // 0x1a0694: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0690) {
            ctx->pc = 0x1A06B0u;
            goto label_1a06b0;
        }
    }
    ctx->pc = 0x1A0698u;
    // 0x1a0698: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1A0698u;
    {
        const bool branch_taken_0x1a0698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0698) {
            ctx->pc = 0x1A06FCu;
            goto label_1a06fc;
        }
    }
    ctx->pc = 0x1A06A0u;
label_1a06a0:
    // 0x1a06a0: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A06A0u;
    {
        const bool branch_taken_0x1a06a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A06A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A06A0u;
            // 0x1a06a4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a06a0) {
            ctx->pc = 0x1A06D0u;
            goto label_1a06d0;
        }
    }
    ctx->pc = 0x1A06A8u;
    // 0x1a06a8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1A06A8u;
    {
        const bool branch_taken_0x1a06a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a06a8) {
            ctx->pc = 0x1A06FCu;
            goto label_1a06fc;
        }
    }
    ctx->pc = 0x1A06B0u;
label_1a06b0:
    // 0x1a06b0: 0xc634001c  lwc1        $f20, 0x1C($s1)
    ctx->pc = 0x1a06b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a06b4: 0xa0c0c9fa  sb          $zero, -0x3606($a2)
    ctx->pc = 0x1a06b4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4294953466), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a06b8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1A06B8u;
    {
        const bool branch_taken_0x1a06b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A06BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A06B8u;
            // 0x1a06bc: 0x8e250014  lw          $a1, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a06b8) {
            ctx->pc = 0x1A06F8u;
            goto label_1a06f8;
        }
    }
    ctx->pc = 0x1A06C0u;
label_1a06c0:
    // 0x1a06c0: 0xc6340028  lwc1        $f20, 0x28($s1)
    ctx->pc = 0x1a06c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a06c4: 0xa0c0c9fa  sb          $zero, -0x3606($a2)
    ctx->pc = 0x1a06c4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4294953466), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a06c8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1A06C8u;
    {
        const bool branch_taken_0x1a06c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A06CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A06C8u;
            // 0x1a06cc: 0x8e250020  lw          $a1, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a06c8) {
            ctx->pc = 0x1A06F8u;
            goto label_1a06f8;
        }
    }
    ctx->pc = 0x1A06D0u;
label_1a06d0:
    // 0x1a06d0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1a06d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1a06d4: 0x8062c9fb  lb          $v0, -0x3605($v1)
    ctx->pc = 0x1a06d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294953467)));
    // 0x1a06d8: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A06D8u;
    {
        const bool branch_taken_0x1a06d8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1A06DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A06D8u;
            // 0x1a06dc: 0x9064c9fb  lbu         $a0, -0x3605($v1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294953467)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a06d8) {
            ctx->pc = 0x1A06F8u;
            goto label_1a06f8;
        }
    }
    ctx->pc = 0x1A06E0u;
    // 0x1a06e0: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x1a06e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1a06e4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1a06e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a06e8: 0xa062c9fb  sb          $v0, -0x3605($v1)
    ctx->pc = 0x1a06e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294953467), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a06ec: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1a06ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1a06f0: 0x58400001  blezl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1A06F0u;
    {
        const bool branch_taken_0x1a06f0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a06f0) {
            ctx->pc = 0x1A06F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A06F0u;
            // 0x1a06f4: 0xa0c0c9fa  sb          $zero, -0x3606($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 4294953466), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A06F8u;
            goto label_1a06f8;
        }
    }
    ctx->pc = 0x1A06F8u;
label_1a06f8:
    // 0x1a06f8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a06f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a06fc:
    // 0x1a06fc: 0x10a20015  beq         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1A06FCu;
    {
        const bool branch_taken_0x1a06fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A0700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A06FCu;
            // 0x1a0700: 0x3c11002a  lui         $s1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a06fc) {
            ctx->pc = 0x1A0754u;
            goto label_1a0754;
        }
    }
    ctx->pc = 0x1A0704u;
    // 0x1a0704: 0x8e22c9f0  lw          $v0, -0x3610($s1)
    ctx->pc = 0x1a0704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953456)));
    // 0x1a0708: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A0708u;
    {
        const bool branch_taken_0x1a0708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A070Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0708u;
            // 0x1a070c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0708) {
            ctx->pc = 0x1A0754u;
            goto label_1a0754;
        }
    }
    ctx->pc = 0x1A0710u;
    // 0x1a0710: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a0710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0714: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x1A0714u;
    SET_GPR_U32(ctx, 31, 0x1A071Cu);
    ctx->pc = 0x1A0718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0714u;
            // 0x1a0718: 0x8c441188  lw          $a0, 0x1188($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4488)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A071Cu; }
        if (ctx->pc != 0x1A071Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A071Cu; }
        if (ctx->pc != 0x1A071Cu) { return; }
    }
    ctx->pc = 0x1A071Cu;
    // 0x1a071c: 0xc067da4  jal         func_19F690
    ctx->pc = 0x1A071Cu;
    SET_GPR_U32(ctx, 31, 0x1A0724u);
    ctx->pc = 0x1A0720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A071Cu;
            // 0x1a0720: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F690u;
    if (runtime->hasFunction(0x19F690u)) {
        auto targetFn = runtime->lookupFunction(0x19F690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0724u; }
        if (ctx->pc != 0x1A0724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F690_0x19f690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0724u; }
        if (ctx->pc != 0x1A0724u) { return; }
    }
    ctx->pc = 0x1A0724u;
    // 0x1a0724: 0x8e23c9f0  lw          $v1, -0x3610($s1)
    ctx->pc = 0x1a0724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953456)));
    // 0x1a0728: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a072c: 0x7ba80070  lq          $t0, 0x70($sp)
    ctx->pc = 0x1a072cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a0730: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1a0730u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0734: 0x7ba90060  lq          $t1, 0x60($sp)
    ctx->pc = 0x1a0734u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a0738: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a0738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a073c: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x1a073cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a0740: 0xc0886d2  jal         func_221B48
    ctx->pc = 0x1A0740u;
    SET_GPR_U32(ctx, 31, 0x1A0748u);
    ctx->pc = 0x1A0744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0740u;
            // 0x1a0744: 0x846a0060  lh          $t2, 0x60($v1) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221B48u;
    if (runtime->hasFunction(0x221B48u)) {
        auto targetFn = runtime->lookupFunction(0x221B48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0748u; }
        if (ctx->pc != 0x1A0748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00221B48_0x221b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0748u; }
        if (ctx->pc != 0x1A0748u) { return; }
    }
    ctx->pc = 0x1A0748u;
    // 0x1a0748: 0x8ec4cd58  lw          $a0, -0x32A8($s6)
    ctx->pc = 0x1a0748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954328)));
    // 0x1a074c: 0xc076fa6  jal         func_1DBE98
    ctx->pc = 0x1A074Cu;
    SET_GPR_U32(ctx, 31, 0x1A0754u);
    ctx->pc = 0x1A0750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A074Cu;
            // 0x1a0750: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DBE98u;
    if (runtime->hasFunction(0x1DBE98u)) {
        auto targetFn = runtime->lookupFunction(0x1DBE98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0754u; }
        if (ctx->pc != 0x1A0754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DBE98_0x1dbe98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0754u; }
        if (ctx->pc != 0x1A0754u) { return; }
    }
    ctx->pc = 0x1A0754u;
label_1a0754:
    // 0x1a0754: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a0754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a0758: 0xa682002a  sh          $v0, 0x2A($s4)
    ctx->pc = 0x1a0758u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a075c: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x1a075cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1a0760: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x1a0760u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1a0764: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x1a0764u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1a0768: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x1a0768u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1a076c: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x1a076cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1a0770: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x1a0770u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1a0774: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x1a0774u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1a0778: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1a0778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a077c: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x1a077cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a0780: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0780u;
            // 0x1a0784: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19FC38u: goto label_19fc38;
            case 0x19FDF0u: goto label_19fdf0;
            case 0x19FE88u: goto label_19fe88;
            case 0x19FE8Cu: goto label_19fe8c;
            case 0x19FEF8u: goto label_19fef8;
            case 0x19FF50u: goto label_19ff50;
            case 0x19FF64u: goto label_19ff64;
            case 0x19FF78u: goto label_19ff78;
            case 0x1A0028u: goto label_1a0028;
            case 0x1A0074u: goto label_1a0074;
            case 0x1A0098u: goto label_1a0098;
            case 0x1A00B4u: goto label_1a00b4;
            case 0x1A0108u: goto label_1a0108;
            case 0x1A0120u: goto label_1a0120;
            case 0x1A0128u: goto label_1a0128;
            case 0x1A012Cu: goto label_1a012c;
            case 0x1A0148u: goto label_1a0148;
            case 0x1A0208u: goto label_1a0208;
            case 0x1A0250u: goto label_1a0250;
            case 0x1A026Cu: goto label_1a026c;
            case 0x1A02D8u: goto label_1a02d8;
            case 0x1A0320u: goto label_1a0320;
            case 0x1A033Cu: goto label_1a033c;
            case 0x1A037Cu: goto label_1a037c;
            case 0x1A0390u: goto label_1a0390;
            case 0x1A03C4u: goto label_1a03c4;
            case 0x1A03C8u: goto label_1a03c8;
            case 0x1A0470u: goto label_1a0470;
            case 0x1A0474u: goto label_1a0474;
            case 0x1A04F0u: goto label_1a04f0;
            case 0x1A04F4u: goto label_1a04f4;
            case 0x1A0578u: goto label_1a0578;
            case 0x1A05BCu: goto label_1a05bc;
            case 0x1A05E8u: goto label_1a05e8;
            case 0x1A05ECu: goto label_1a05ec;
            case 0x1A0620u: goto label_1a0620;
            case 0x1A064Cu: goto label_1a064c;
            case 0x1A0658u: goto label_1a0658;
            case 0x1A0670u: goto label_1a0670;
            case 0x1A06A0u: goto label_1a06a0;
            case 0x1A06B0u: goto label_1a06b0;
            case 0x1A06C0u: goto label_1a06c0;
            case 0x1A06D0u: goto label_1a06d0;
            case 0x1A06F8u: goto label_1a06f8;
            case 0x1A06FCu: goto label_1a06fc;
            case 0x1A0754u: goto label_1a0754;
            case 0x1A0800u: goto label_1a0800;
            case 0x1A0860u: goto label_1a0860;
            case 0x1A0868u: goto label_1a0868;
            case 0x1A086Cu: goto label_1a086c;
            case 0x1A08B0u: goto label_1a08b0;
            case 0x1A08B4u: goto label_1a08b4;
            case 0x1A08DCu: goto label_1a08dc;
            case 0x1A08E8u: goto label_1a08e8;
            case 0x1A0948u: goto label_1a0948;
            case 0x1A094Cu: goto label_1a094c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A0788u;
    // 0x1a0788: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1a0788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1a078c: 0x9062c9fc  lbu         $v0, -0x3604($v1)
    ctx->pc = 0x1a078cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294953468)));
    // 0x1a0790: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a0790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a0794: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0794u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0794u;
            // 0x1a0798: 0xa062c9fc  sb          $v0, -0x3604($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294953468), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19FC38u: goto label_19fc38;
            case 0x19FDF0u: goto label_19fdf0;
            case 0x19FE88u: goto label_19fe88;
            case 0x19FE8Cu: goto label_19fe8c;
            case 0x19FEF8u: goto label_19fef8;
            case 0x19FF50u: goto label_19ff50;
            case 0x19FF64u: goto label_19ff64;
            case 0x19FF78u: goto label_19ff78;
            case 0x1A0028u: goto label_1a0028;
            case 0x1A0074u: goto label_1a0074;
            case 0x1A0098u: goto label_1a0098;
            case 0x1A00B4u: goto label_1a00b4;
            case 0x1A0108u: goto label_1a0108;
            case 0x1A0120u: goto label_1a0120;
            case 0x1A0128u: goto label_1a0128;
            case 0x1A012Cu: goto label_1a012c;
            case 0x1A0148u: goto label_1a0148;
            case 0x1A0208u: goto label_1a0208;
            case 0x1A0250u: goto label_1a0250;
            case 0x1A026Cu: goto label_1a026c;
            case 0x1A02D8u: goto label_1a02d8;
            case 0x1A0320u: goto label_1a0320;
            case 0x1A033Cu: goto label_1a033c;
            case 0x1A037Cu: goto label_1a037c;
            case 0x1A0390u: goto label_1a0390;
            case 0x1A03C4u: goto label_1a03c4;
            case 0x1A03C8u: goto label_1a03c8;
            case 0x1A0470u: goto label_1a0470;
            case 0x1A0474u: goto label_1a0474;
            case 0x1A04F0u: goto label_1a04f0;
            case 0x1A04F4u: goto label_1a04f4;
            case 0x1A0578u: goto label_1a0578;
            case 0x1A05BCu: goto label_1a05bc;
            case 0x1A05E8u: goto label_1a05e8;
            case 0x1A05ECu: goto label_1a05ec;
            case 0x1A0620u: goto label_1a0620;
            case 0x1A064Cu: goto label_1a064c;
            case 0x1A0658u: goto label_1a0658;
            case 0x1A0670u: goto label_1a0670;
            case 0x1A06A0u: goto label_1a06a0;
            case 0x1A06B0u: goto label_1a06b0;
            case 0x1A06C0u: goto label_1a06c0;
            case 0x1A06D0u: goto label_1a06d0;
            case 0x1A06F8u: goto label_1a06f8;
            case 0x1A06FCu: goto label_1a06fc;
            case 0x1A0754u: goto label_1a0754;
            case 0x1A0800u: goto label_1a0800;
            case 0x1A0860u: goto label_1a0860;
            case 0x1A0868u: goto label_1a0868;
            case 0x1A086Cu: goto label_1a086c;
            case 0x1A08B0u: goto label_1a08b0;
            case 0x1A08B4u: goto label_1a08b4;
            case 0x1A08DCu: goto label_1a08dc;
            case 0x1A08E8u: goto label_1a08e8;
            case 0x1A0948u: goto label_1a0948;
            case 0x1A094Cu: goto label_1a094c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A079Cu;
    // 0x1a079c: 0x0  nop
    ctx->pc = 0x1a079cu;
    // NOP
    // 0x1a07a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a07a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a07a4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a07a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1a07a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a07a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a07ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a07acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a07b0: 0x94820044  lhu         $v0, 0x44($a0)
    ctx->pc = 0x1a07b0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x1a07b4: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1a07b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1a07b8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A07B8u;
    {
        const bool branch_taken_0x1a07b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A07BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A07B8u;
            // 0x1a07bc: 0x3c11002a  lui         $s1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a07b8) {
            ctx->pc = 0x1A0800u;
            goto label_1a0800;
        }
    }
    ctx->pc = 0x1A07C0u;
    // 0x1a07c0: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x1a07c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x1a07c4: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x1a07c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x1a07c8: 0x24420788  addiu       $v0, $v0, 0x788
    ctx->pc = 0x1a07c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1928));
    // 0x1a07cc: 0xa4830044  sh          $v1, 0x44($a0)
    ctx->pc = 0x1a07ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 68), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a07d0: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x1a07d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x1a07d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a07d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a07d8: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1a07d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x1a07dc: 0x9082c9fc  lbu         $v0, -0x3604($a0)
    ctx->pc = 0x1a07dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294953468)));
    // 0x1a07e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a07e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a07e4: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1a07e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1a07e8: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x1a07e8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
    // 0x1a07ec: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A07ECu;
    {
        const bool branch_taken_0x1a07ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1A07F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A07ECu;
            // 0x1a07f0: 0xa082c9fc  sb          $v0, -0x3604($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4294953468), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a07ec) {
            ctx->pc = 0x1A0800u;
            goto label_1a0800;
        }
    }
    ctx->pc = 0x1A07F4u;
    // 0x1a07f4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a07f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a07f8: 0xa040c9fa  sb          $zero, -0x3606($v0)
    ctx->pc = 0x1a07f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294953466), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a07fc: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x1a07fcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
label_1a0800:
    // 0x1a0800: 0x8e22cd58  lw          $v0, -0x32A8($s1)
    ctx->pc = 0x1a0800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954328)));
    // 0x1a0804: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1a0804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1a0808: 0xc06f9e8  jal         func_1BE7A0
    ctx->pc = 0x1A0808u;
    SET_GPR_U32(ctx, 31, 0x1A0810u);
    ctx->pc = 0x1A080Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0808u;
            // 0x1a080c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE7A0u;
    if (runtime->hasFunction(0x1BE7A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0810u; }
        if (ctx->pc != 0x1A0810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1be7a0_0x1be7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0810u; }
        if (ctx->pc != 0x1A0810u) { return; }
    }
    ctx->pc = 0x1A0810u;
    // 0x1a0810: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1A0810u;
    {
        const bool branch_taken_0x1a0810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0810u;
            // 0x1a0814: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0810) {
            ctx->pc = 0x1A08B4u;
            goto label_1a08b4;
        }
    }
    ctx->pc = 0x1A0818u;
    // 0x1a0818: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1a0818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1a081c: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1a081cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1a0820: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x1a0820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1a0824: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1a0824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1a0828: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x1a0828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1a082c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1A082Cu;
    {
        const bool branch_taken_0x1a082c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A082Cu;
            // 0x1a0830: 0x3c05002a  lui         $a1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a082c) {
            ctx->pc = 0x1A086Cu;
            goto label_1a086c;
        }
    }
    ctx->pc = 0x1A0834u;
    // 0x1a0834: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1a0834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a0838: 0x80a2c9fa  lb          $v0, -0x3606($a1)
    ctx->pc = 0x1a0838u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294953466)));
    // 0x1a083c: 0x14440008  bne         $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A083Cu;
    {
        const bool branch_taken_0x1a083c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1A0840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A083Cu;
            // 0x1a0840: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a083c) {
            ctx->pc = 0x1A0860u;
            goto label_1a0860;
        }
    }
    ctx->pc = 0x1A0844u;
    // 0x1a0844: 0x8062c9fb  lb          $v0, -0x3605($v1)
    ctx->pc = 0x1a0844u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294953467)));
    // 0x1a0848: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1a0848u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a084c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A084Cu;
    {
        const bool branch_taken_0x1a084c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A084Cu;
            // 0x1a0850: 0x9064c9fb  lbu         $a0, -0x3605($v1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294953467)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a084c) {
            ctx->pc = 0x1A086Cu;
            goto label_1a086c;
        }
    }
    ctx->pc = 0x1A0854u;
    // 0x1a0854: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A0854u;
    {
        const bool branch_taken_0x1a0854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0854u;
            // 0x1a0858: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0854) {
            ctx->pc = 0x1A0868u;
            goto label_1a0868;
        }
    }
    ctx->pc = 0x1A085Cu;
    // 0x1a085c: 0x0  nop
    ctx->pc = 0x1a085cu;
    // NOP
label_1a0860:
    // 0x1a0860: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a0860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0864: 0xa0a4c9fa  sb          $a0, -0x3606($a1)
    ctx->pc = 0x1a0864u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294953466), (uint8_t)GPR_U32(ctx, 4));
label_1a0868:
    // 0x1a0868: 0xa062c9fb  sb          $v0, -0x3605($v1)
    ctx->pc = 0x1a0868u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294953467), (uint8_t)GPR_U32(ctx, 2));
label_1a086c:
    // 0x1a086c: 0x8e24cd58  lw          $a0, -0x32A8($s1)
    ctx->pc = 0x1a086cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954328)));
    // 0x1a0870: 0xc0761e2  jal         func_1D8788
    ctx->pc = 0x1A0870u;
    SET_GPR_U32(ctx, 31, 0x1A0878u);
    ctx->pc = 0x1A0874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0870u;
            // 0x1a0874: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8788u;
    if (runtime->hasFunction(0x1D8788u)) {
        auto targetFn = runtime->lookupFunction(0x1D8788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0878u; }
        if (ctx->pc != 0x1A0878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d8788_0x1d8800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0878u; }
        if (ctx->pc != 0x1A0878u) { return; }
    }
    ctx->pc = 0x1A0878u;
    // 0x1a0878: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x1a0878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1a087c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1a087cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1a0880: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1a0880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1a0884: 0x2463e440  addiu       $v1, $v1, -0x1BC0
    ctx->pc = 0x1a0884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960192));
    // 0x1a0888: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a0888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a088c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1a088cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1a0890: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A0890u;
    {
        const bool branch_taken_0x1a0890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0890u;
            // 0x1a0894: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0890) {
            ctx->pc = 0x1A08B4u;
            goto label_1a08b4;
        }
    }
    ctx->pc = 0x1A0898u;
    // 0x1a0898: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1a0898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1a089c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1a089cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1a08a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A08A0u;
    {
        const bool branch_taken_0x1a08a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A08A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A08A0u;
            // 0x1a08a4: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a08a0) {
            ctx->pc = 0x1A08B0u;
            goto label_1a08b0;
        }
    }
    ctx->pc = 0x1A08A8u;
    // 0x1a08a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a08a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a08ac: 0xa062c9fa  sb          $v0, -0x3606($v1)
    ctx->pc = 0x1a08acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294953466), (uint8_t)GPR_U32(ctx, 2));
label_1a08b0:
    // 0x1a08b0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a08b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1a08b4:
    // 0x1a08b4: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1a08b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1a08b8: 0x8c44cd58  lw          $a0, -0x32A8($v0)
    ctx->pc = 0x1a08b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x1a08bc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a08bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a08c0: 0x8062c9fa  lb          $v0, -0x3606($v1)
    ctx->pc = 0x1a08c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294953466)));
    // 0x1a08c4: 0x14450005  bne         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A08C4u;
    {
        const bool branch_taken_0x1a08c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1A08C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A08C4u;
            // 0x1a08c8: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a08c4) {
            ctx->pc = 0x1A08DCu;
            goto label_1a08dc;
        }
    }
    ctx->pc = 0x1A08CCu;
    // 0x1a08cc: 0xc0783be  jal         func_1E0EF8
    ctx->pc = 0x1A08CCu;
    SET_GPR_U32(ctx, 31, 0x1A08D4u);
    ctx->pc = 0x1E0EF8u;
    if (runtime->hasFunction(0x1E0EF8u)) {
        auto targetFn = runtime->lookupFunction(0x1E0EF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A08D4u; }
        if (ctx->pc != 0x1A08D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0EF8_0x1e0ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A08D4u; }
        if (ctx->pc != 0x1A08D4u) { return; }
    }
    ctx->pc = 0x1A08D4u;
    // 0x1a08d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A08D4u;
    {
        const bool branch_taken_0x1a08d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A08D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A08D4u;
            // 0x1a08d8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a08d4) {
            ctx->pc = 0x1A08E8u;
            goto label_1a08e8;
        }
    }
    ctx->pc = 0x1A08DCu;
label_1a08dc:
    // 0x1a08dc: 0xc0783d6  jal         func_1E0F58
    ctx->pc = 0x1A08DCu;
    SET_GPR_U32(ctx, 31, 0x1A08E4u);
    ctx->pc = 0x1E0F58u;
    if (runtime->hasFunction(0x1E0F58u)) {
        auto targetFn = runtime->lookupFunction(0x1E0F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A08E4u; }
        if (ctx->pc != 0x1A08E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0F58_0x1e0f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A08E4u; }
        if (ctx->pc != 0x1A08E4u) { return; }
    }
    ctx->pc = 0x1A08E4u;
    // 0x1a08e4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a08e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a08e8:
    // 0x1a08e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a08e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a08ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a08ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a08f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A08F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A08F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A08F0u;
            // 0x1a08f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19FC38u: goto label_19fc38;
            case 0x19FDF0u: goto label_19fdf0;
            case 0x19FE88u: goto label_19fe88;
            case 0x19FE8Cu: goto label_19fe8c;
            case 0x19FEF8u: goto label_19fef8;
            case 0x19FF50u: goto label_19ff50;
            case 0x19FF64u: goto label_19ff64;
            case 0x19FF78u: goto label_19ff78;
            case 0x1A0028u: goto label_1a0028;
            case 0x1A0074u: goto label_1a0074;
            case 0x1A0098u: goto label_1a0098;
            case 0x1A00B4u: goto label_1a00b4;
            case 0x1A0108u: goto label_1a0108;
            case 0x1A0120u: goto label_1a0120;
            case 0x1A0128u: goto label_1a0128;
            case 0x1A012Cu: goto label_1a012c;
            case 0x1A0148u: goto label_1a0148;
            case 0x1A0208u: goto label_1a0208;
            case 0x1A0250u: goto label_1a0250;
            case 0x1A026Cu: goto label_1a026c;
            case 0x1A02D8u: goto label_1a02d8;
            case 0x1A0320u: goto label_1a0320;
            case 0x1A033Cu: goto label_1a033c;
            case 0x1A037Cu: goto label_1a037c;
            case 0x1A0390u: goto label_1a0390;
            case 0x1A03C4u: goto label_1a03c4;
            case 0x1A03C8u: goto label_1a03c8;
            case 0x1A0470u: goto label_1a0470;
            case 0x1A0474u: goto label_1a0474;
            case 0x1A04F0u: goto label_1a04f0;
            case 0x1A04F4u: goto label_1a04f4;
            case 0x1A0578u: goto label_1a0578;
            case 0x1A05BCu: goto label_1a05bc;
            case 0x1A05E8u: goto label_1a05e8;
            case 0x1A05ECu: goto label_1a05ec;
            case 0x1A0620u: goto label_1a0620;
            case 0x1A064Cu: goto label_1a064c;
            case 0x1A0658u: goto label_1a0658;
            case 0x1A0670u: goto label_1a0670;
            case 0x1A06A0u: goto label_1a06a0;
            case 0x1A06B0u: goto label_1a06b0;
            case 0x1A06C0u: goto label_1a06c0;
            case 0x1A06D0u: goto label_1a06d0;
            case 0x1A06F8u: goto label_1a06f8;
            case 0x1A06FCu: goto label_1a06fc;
            case 0x1A0754u: goto label_1a0754;
            case 0x1A0800u: goto label_1a0800;
            case 0x1A0860u: goto label_1a0860;
            case 0x1A0868u: goto label_1a0868;
            case 0x1A086Cu: goto label_1a086c;
            case 0x1A08B0u: goto label_1a08b0;
            case 0x1A08B4u: goto label_1a08b4;
            case 0x1A08DCu: goto label_1a08dc;
            case 0x1A08E8u: goto label_1a08e8;
            case 0x1A0948u: goto label_1a0948;
            case 0x1A094Cu: goto label_1a094c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A08F8u;
    // 0x1a08f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a08f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a08fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a08fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a0900: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a0900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1a0904: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a0904u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0908: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a0908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a090c: 0x8e250060  lw          $a1, 0x60($s1)
    ctx->pc = 0x1a090cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1a0910: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x1a0910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x1a0914: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A0914u;
    {
        const bool branch_taken_0x1a0914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0914u;
            // 0x1a0918: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0914) {
            ctx->pc = 0x1A094Cu;
            goto label_1a094c;
        }
    }
    ctx->pc = 0x1A091Cu;
    // 0x1a091c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1a091cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1a0920: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x1a0920u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x1a0924: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1a0924u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1a0928: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a0928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a092c: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x1a092cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x1a0930: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1a0930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1a0934: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1a0934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a0938: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a0938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a093c: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A093Cu;
    {
        const bool branch_taken_0x1a093c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1A0940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A093Cu;
            // 0x1a0940: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a093c) {
            ctx->pc = 0x1A0948u;
            goto label_1a0948;
        }
    }
    ctx->pc = 0x1A0944u;
    // 0x1a0944: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1a0944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1a0948:
    // 0x1a0948: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1a0948u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a094c:
    // 0x1a094c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1a094cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a0950: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x1a0950u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1a0954: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x1a0954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1a0958: 0x40f809  jalr        $v0
    ctx->pc = 0x1A0958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A0960u);
        ctx->pc = 0x1A095Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0958u;
            // 0x1a095c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A0960u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19FC38u: goto label_19fc38;
            case 0x19FDF0u: goto label_19fdf0;
            case 0x19FE88u: goto label_19fe88;
            case 0x19FE8Cu: goto label_19fe8c;
            case 0x19FEF8u: goto label_19fef8;
            case 0x19FF50u: goto label_19ff50;
            case 0x19FF64u: goto label_19ff64;
            case 0x19FF78u: goto label_19ff78;
            case 0x1A0028u: goto label_1a0028;
            case 0x1A0074u: goto label_1a0074;
            case 0x1A0098u: goto label_1a0098;
            case 0x1A00B4u: goto label_1a00b4;
            case 0x1A0108u: goto label_1a0108;
            case 0x1A0120u: goto label_1a0120;
            case 0x1A0128u: goto label_1a0128;
            case 0x1A012Cu: goto label_1a012c;
            case 0x1A0148u: goto label_1a0148;
            case 0x1A0208u: goto label_1a0208;
            case 0x1A0250u: goto label_1a0250;
            case 0x1A026Cu: goto label_1a026c;
            case 0x1A02D8u: goto label_1a02d8;
            case 0x1A0320u: goto label_1a0320;
            case 0x1A033Cu: goto label_1a033c;
            case 0x1A037Cu: goto label_1a037c;
            case 0x1A0390u: goto label_1a0390;
            case 0x1A03C4u: goto label_1a03c4;
            case 0x1A03C8u: goto label_1a03c8;
            case 0x1A0470u: goto label_1a0470;
            case 0x1A0474u: goto label_1a0474;
            case 0x1A04F0u: goto label_1a04f0;
            case 0x1A04F4u: goto label_1a04f4;
            case 0x1A0578u: goto label_1a0578;
            case 0x1A05BCu: goto label_1a05bc;
            case 0x1A05E8u: goto label_1a05e8;
            case 0x1A05ECu: goto label_1a05ec;
            case 0x1A0620u: goto label_1a0620;
            case 0x1A064Cu: goto label_1a064c;
            case 0x1A0658u: goto label_1a0658;
            case 0x1A0670u: goto label_1a0670;
            case 0x1A06A0u: goto label_1a06a0;
            case 0x1A06B0u: goto label_1a06b0;
            case 0x1A06C0u: goto label_1a06c0;
            case 0x1A06D0u: goto label_1a06d0;
            case 0x1A06F8u: goto label_1a06f8;
            case 0x1A06FCu: goto label_1a06fc;
            case 0x1A0754u: goto label_1a0754;
            case 0x1A0800u: goto label_1a0800;
            case 0x1A0860u: goto label_1a0860;
            case 0x1A0868u: goto label_1a0868;
            case 0x1A086Cu: goto label_1a086c;
            case 0x1A08B0u: goto label_1a08b0;
            case 0x1A08B4u: goto label_1a08b4;
            case 0x1A08DCu: goto label_1a08dc;
            case 0x1A08E8u: goto label_1a08e8;
            case 0x1A0948u: goto label_1a0948;
            case 0x1A094Cu: goto label_1a094c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A0960u; }
            if (ctx->pc != 0x1A0960u) { return; }
        }
        }
    }
    ctx->pc = 0x1A0960u;
    // 0x1a0960: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1a0960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1a0964: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a0964u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0968: 0x8c64cd58  lw          $a0, -0x32A8($v1)
    ctx->pc = 0x1a0968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954328)));
    // 0x1a096c: 0xc0761e2  jal         func_1D8788
    ctx->pc = 0x1A096Cu;
    SET_GPR_U32(ctx, 31, 0x1A0974u);
    ctx->pc = 0x1A0970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A096Cu;
            // 0x1a0970: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8788u;
    if (runtime->hasFunction(0x1D8788u)) {
        auto targetFn = runtime->lookupFunction(0x1D8788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0974u; }
        if (ctx->pc != 0x1A0974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d8788_0x1d8800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0974u; }
        if (ctx->pc != 0x1A0974u) { return; }
    }
    ctx->pc = 0x1A0974u;
    // 0x1a0974: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x1a0974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1a0978: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1a0978u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1a097c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a097cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0980: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1a0980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1a0984: 0x2463e440  addiu       $v1, $v1, -0x1BC0
    ctx->pc = 0x1a0984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960192));
    // 0x1a0988: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a0988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a098c: 0xc07d8fa  jal         func_1F63E8
    ctx->pc = 0x1A098Cu;
    SET_GPR_U32(ctx, 31, 0x1A0994u);
    ctx->pc = 0x1A0990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A098Cu;
            // 0x1a0990: 0xc44c0008  lwc1        $f12, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F63E8u;
    if (runtime->hasFunction(0x1F63E8u)) {
        auto targetFn = runtime->lookupFunction(0x1F63E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0994u; }
        if (ctx->pc != 0x1A0994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F63E8_0x1f63e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0994u; }
        if (ctx->pc != 0x1A0994u) { return; }
    }
    ctx->pc = 0x1A0994u;
    // 0x1a0994: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a0994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a0998: 0xa622002a  sh          $v0, 0x2A($s1)
    ctx->pc = 0x1a0998u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a099c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a099cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a09a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a09a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a09a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a09a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a09a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A09A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A09ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A09A8u;
            // 0x1a09ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19FC38u: goto label_19fc38;
            case 0x19FDF0u: goto label_19fdf0;
            case 0x19FE88u: goto label_19fe88;
            case 0x19FE8Cu: goto label_19fe8c;
            case 0x19FEF8u: goto label_19fef8;
            case 0x19FF50u: goto label_19ff50;
            case 0x19FF64u: goto label_19ff64;
            case 0x19FF78u: goto label_19ff78;
            case 0x1A0028u: goto label_1a0028;
            case 0x1A0074u: goto label_1a0074;
            case 0x1A0098u: goto label_1a0098;
            case 0x1A00B4u: goto label_1a00b4;
            case 0x1A0108u: goto label_1a0108;
            case 0x1A0120u: goto label_1a0120;
            case 0x1A0128u: goto label_1a0128;
            case 0x1A012Cu: goto label_1a012c;
            case 0x1A0148u: goto label_1a0148;
            case 0x1A0208u: goto label_1a0208;
            case 0x1A0250u: goto label_1a0250;
            case 0x1A026Cu: goto label_1a026c;
            case 0x1A02D8u: goto label_1a02d8;
            case 0x1A0320u: goto label_1a0320;
            case 0x1A033Cu: goto label_1a033c;
            case 0x1A037Cu: goto label_1a037c;
            case 0x1A0390u: goto label_1a0390;
            case 0x1A03C4u: goto label_1a03c4;
            case 0x1A03C8u: goto label_1a03c8;
            case 0x1A0470u: goto label_1a0470;
            case 0x1A0474u: goto label_1a0474;
            case 0x1A04F0u: goto label_1a04f0;
            case 0x1A04F4u: goto label_1a04f4;
            case 0x1A0578u: goto label_1a0578;
            case 0x1A05BCu: goto label_1a05bc;
            case 0x1A05E8u: goto label_1a05e8;
            case 0x1A05ECu: goto label_1a05ec;
            case 0x1A0620u: goto label_1a0620;
            case 0x1A064Cu: goto label_1a064c;
            case 0x1A0658u: goto label_1a0658;
            case 0x1A0670u: goto label_1a0670;
            case 0x1A06A0u: goto label_1a06a0;
            case 0x1A06B0u: goto label_1a06b0;
            case 0x1A06C0u: goto label_1a06c0;
            case 0x1A06D0u: goto label_1a06d0;
            case 0x1A06F8u: goto label_1a06f8;
            case 0x1A06FCu: goto label_1a06fc;
            case 0x1A0754u: goto label_1a0754;
            case 0x1A0800u: goto label_1a0800;
            case 0x1A0860u: goto label_1a0860;
            case 0x1A0868u: goto label_1a0868;
            case 0x1A086Cu: goto label_1a086c;
            case 0x1A08B0u: goto label_1a08b0;
            case 0x1A08B4u: goto label_1a08b4;
            case 0x1A08DCu: goto label_1a08dc;
            case 0x1A08E8u: goto label_1a08e8;
            case 0x1A0948u: goto label_1a0948;
            case 0x1A094Cu: goto label_1a094c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A09B0u;
}
