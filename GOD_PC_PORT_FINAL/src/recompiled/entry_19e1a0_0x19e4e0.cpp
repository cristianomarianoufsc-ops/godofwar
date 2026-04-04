#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_19e1a0
// Address: 0x19e1a0 - 0x19e4e0
void entry_19e1a0_0x19e4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_19e1a0_0x19e4e0");
#endif

    ctx->pc = 0x19e1a0u;

    // 0x19e1a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19e1a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19e1a4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x19e1a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x19e1a8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x19e1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x19e1ac: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x19e1acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x19e1b0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x19e1b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19e1b4: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x19e1b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x19e1b8: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x19e1b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x19e1bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19e1bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19e1c0: 0x240300d0  addiu       $v1, $zero, 0xD0
    ctx->pc = 0x19e1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x19e1c4: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x19e1c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x19e1c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19e1c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19e1cc: 0x24429e90  addiu       $v0, $v0, -0x6170
    ctx->pc = 0x19e1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942352));
    // 0x19e1d0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x19e1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x19e1d4: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x19e1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x19e1d8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x19e1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x19e1dc: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x19e1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x19e1e0: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x19e1e0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x19e1e4: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x19e1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x19e1e8: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x19e1e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x19e1ec: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x19e1ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x19e1f0: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x19e1f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x19e1f4: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x19e1f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x19e1f8: 0xa7a3002c  sh          $v1, 0x2C($sp)
    ctx->pc = 0x19e1f8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 44), (uint16_t)GPR_U32(ctx, 3));
    // 0x19e1fc: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x19e1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x19e200: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x19e200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x19e204: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x19e204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x19e208: 0xa7a00010  sh          $zero, 0x10($sp)
    ctx->pc = 0x19e208u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x19e20c: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x19e20cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x19e210: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x19E210u;
    SET_GPR_U32(ctx, 31, 0x19E218u);
    ctx->pc = 0x19E214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E210u;
            // 0x19e214: 0xa3a0002e  sb          $zero, 0x2E($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 46), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E218u; }
        if (ctx->pc != 0x19E218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E218u; }
        if (ctx->pc != 0x19E218u) { return; }
    }
    ctx->pc = 0x19E218u;
    // 0x19e218: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x19E218u;
    SET_GPR_U32(ctx, 31, 0x19E220u);
    ctx->pc = 0x19E21Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E218u;
            // 0x19e21c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E220u; }
        if (ctx->pc != 0x19E220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E220u; }
        if (ctx->pc != 0x19E220u) { return; }
    }
    ctx->pc = 0x19E220u;
    // 0x19e220: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19e220u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e224: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x19e224u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x19e228: 0x24a53d40  addiu       $a1, $a1, 0x3D40
    ctx->pc = 0x19e228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15680));
    // 0x19e22c: 0xc060978  jal         func_1825E0
    ctx->pc = 0x19E22Cu;
    SET_GPR_U32(ctx, 31, 0x19E234u);
    ctx->pc = 0x19E230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E22Cu;
            // 0x19e230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1825E0u;
    if (runtime->hasFunction(0x1825E0u)) {
        auto targetFn = runtime->lookupFunction(0x1825E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E234u; }
        if (ctx->pc != 0x19E234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001825E0_0x1825e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E234u; }
        if (ctx->pc != 0x19E234u) { return; }
    }
    ctx->pc = 0x19E234u;
    // 0x19e234: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x19e234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x19e238: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e23c: 0x24429e50  addiu       $v0, $v0, -0x61B0
    ctx->pc = 0x19e23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942288));
    // 0x19e240: 0xc060b5a  jal         func_182D68
    ctx->pc = 0x19E240u;
    SET_GPR_U32(ctx, 31, 0x19E248u);
    ctx->pc = 0x19E244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E240u;
            // 0x19e244: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182D68u;
    if (runtime->hasFunction(0x182D68u)) {
        auto targetFn = runtime->lookupFunction(0x182D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E248u; }
        if (ctx->pc != 0x19E248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182D68_0x182d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E248u; }
        if (ctx->pc != 0x19E248u) { return; }
    }
    ctx->pc = 0x19E248u;
    // 0x19e248: 0x3c058466  lui         $a1, 0x8466
    ctx->pc = 0x19e248u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33894 << 16));
    // 0x19e24c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19e24cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e250: 0x27a70018  addiu       $a3, $sp, 0x18
    ctx->pc = 0x19e250u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x19e254: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e258: 0xae30c9e0  sw          $s0, -0x3620($s1)
    ctx->pc = 0x19e258u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294953440), GPR_U32(ctx, 16));
    // 0x19e25c: 0xc060570  jal         func_1815C0
    ctx->pc = 0x19E25Cu;
    SET_GPR_U32(ctx, 31, 0x19E264u);
    ctx->pc = 0x19E260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E25Cu;
            // 0x19e260: 0x34a53fb5  ori         $a1, $a1, 0x3FB5 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16309);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E264u; }
        if (ctx->pc != 0x19E264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E264u; }
        if (ctx->pc != 0x19E264u) { return; }
    }
    ctx->pc = 0x19E264u;
    // 0x19e264: 0x8e24c9e0  lw          $a0, -0x3620($s1)
    ctx->pc = 0x19e264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953440)));
    // 0x19e268: 0x3c05ac15  lui         $a1, 0xAC15
    ctx->pc = 0x19e268u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44053 << 16));
    // 0x19e26c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19e26cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e270: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x19e270u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x19e274: 0xc060570  jal         func_1815C0
    ctx->pc = 0x19E274u;
    SET_GPR_U32(ctx, 31, 0x19E27Cu);
    ctx->pc = 0x19E278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E274u;
            // 0x19e278: 0x34a5f86b  ori         $a1, $a1, 0xF86B (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)63595);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E27Cu; }
        if (ctx->pc != 0x19E27Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E27Cu; }
        if (ctx->pc != 0x19E27Cu) { return; }
    }
    ctx->pc = 0x19E27Cu;
    // 0x19e27c: 0x8e24c9e0  lw          $a0, -0x3620($s1)
    ctx->pc = 0x19e27cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953440)));
    // 0x19e280: 0x3c0526b7  lui         $a1, 0x26B7
    ctx->pc = 0x19e280u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)9911 << 16));
    // 0x19e284: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19e284u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e288: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x19e288u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19e28c: 0xc060570  jal         func_1815C0
    ctx->pc = 0x19E28Cu;
    SET_GPR_U32(ctx, 31, 0x19E294u);
    ctx->pc = 0x19E290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E28Cu;
            // 0x19e290: 0x34a5499f  ori         $a1, $a1, 0x499F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)18847);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E294u; }
        if (ctx->pc != 0x19E294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E294u; }
        if (ctx->pc != 0x19E294u) { return; }
    }
    ctx->pc = 0x19E294u;
    // 0x19e294: 0x8e24c9e0  lw          $a0, -0x3620($s1)
    ctx->pc = 0x19e294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953440)));
    // 0x19e298: 0x3c056394  lui         $a1, 0x6394
    ctx->pc = 0x19e298u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25492 << 16));
    // 0x19e29c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19e29cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e2a0: 0x27a70024  addiu       $a3, $sp, 0x24
    ctx->pc = 0x19e2a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x19e2a4: 0xc060570  jal         func_1815C0
    ctx->pc = 0x19E2A4u;
    SET_GPR_U32(ctx, 31, 0x19E2ACu);
    ctx->pc = 0x19E2A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E2A4u;
            // 0x19e2a8: 0x34a5a6f2  ori         $a1, $a1, 0xA6F2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)42738);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E2ACu; }
        if (ctx->pc != 0x19E2ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E2ACu; }
        if (ctx->pc != 0x19E2ACu) { return; }
    }
    ctx->pc = 0x19E2ACu;
    // 0x19e2ac: 0x8e24c9e0  lw          $a0, -0x3620($s1)
    ctx->pc = 0x19e2acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953440)));
    // 0x19e2b0: 0x3c059ed0  lui         $a1, 0x9ED0
    ctx->pc = 0x19e2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40656 << 16));
    // 0x19e2b4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19e2b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e2b8: 0x27a70028  addiu       $a3, $sp, 0x28
    ctx->pc = 0x19e2b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x19e2bc: 0xc060570  jal         func_1815C0
    ctx->pc = 0x19E2BCu;
    SET_GPR_U32(ctx, 31, 0x19E2C4u);
    ctx->pc = 0x19E2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E2BCu;
            // 0x19e2c0: 0x34a54ae0  ori         $a1, $a1, 0x4AE0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)19168);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E2C4u; }
        if (ctx->pc != 0x19E2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E2C4u; }
        if (ctx->pc != 0x19E2C4u) { return; }
    }
    ctx->pc = 0x19E2C4u;
    // 0x19e2c4: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x19e2c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x19e2c8: 0x8e24c9e0  lw          $a0, -0x3620($s1)
    ctx->pc = 0x19e2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953440)));
    // 0x19e2cc: 0x3c0509e0  lui         $a1, 0x9E0
    ctx->pc = 0x19e2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2528 << 16));
    // 0x19e2d0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19e2d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e2d4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x19e2d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e2d8: 0x34a50284  ori         $a1, $a1, 0x284
    ctx->pc = 0x19e2d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)644);
    // 0x19e2dc: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x19E2DCu;
    SET_GPR_U32(ctx, 31, 0x19E2E4u);
    ctx->pc = 0x19E2E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E2DCu;
            // 0x19e2e0: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E2E4u; }
        if (ctx->pc != 0x19E2E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E2E4u; }
        if (ctx->pc != 0x19E2E4u) { return; }
    }
    ctx->pc = 0x19E2E4u;
    // 0x19e2e4: 0x8e24c9e0  lw          $a0, -0x3620($s1)
    ctx->pc = 0x19e2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953440)));
    // 0x19e2e8: 0x3c05099f  lui         $a1, 0x99F
    ctx->pc = 0x19e2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2463 << 16));
    // 0x19e2ec: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19e2ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e2f0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x19e2f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e2f4: 0x34a50388  ori         $a1, $a1, 0x388
    ctx->pc = 0x19e2f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)904);
    // 0x19e2f8: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x19E2F8u;
    SET_GPR_U32(ctx, 31, 0x19E300u);
    ctx->pc = 0x19E2FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E2F8u;
            // 0x19e2fc: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E300u; }
        if (ctx->pc != 0x19E300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E300u; }
        if (ctx->pc != 0x19E300u) { return; }
    }
    ctx->pc = 0x19E300u;
    // 0x19e300: 0x8e24c9e0  lw          $a0, -0x3620($s1)
    ctx->pc = 0x19e300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953440)));
    // 0x19e304: 0x3c0509e0  lui         $a1, 0x9E0
    ctx->pc = 0x19e304u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2528 << 16));
    // 0x19e308: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19e308u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e30c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x19e30cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e310: 0x34a50285  ori         $a1, $a1, 0x285
    ctx->pc = 0x19e310u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)645);
    // 0x19e314: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x19E314u;
    SET_GPR_U32(ctx, 31, 0x19E31Cu);
    ctx->pc = 0x19E318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E314u;
            // 0x19e318: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E31Cu; }
        if (ctx->pc != 0x19E31Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E31Cu; }
        if (ctx->pc != 0x19E31Cu) { return; }
    }
    ctx->pc = 0x19E31Cu;
    // 0x19e31c: 0x8e24c9e0  lw          $a0, -0x3620($s1)
    ctx->pc = 0x19e31cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953440)));
    // 0x19e320: 0x3c05099f  lui         $a1, 0x99F
    ctx->pc = 0x19e320u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2463 << 16));
    // 0x19e324: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19e324u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e328: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x19e328u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e32c: 0x34a50389  ori         $a1, $a1, 0x389
    ctx->pc = 0x19e32cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)905);
    // 0x19e330: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x19E330u;
    SET_GPR_U32(ctx, 31, 0x19E338u);
    ctx->pc = 0x19E334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E330u;
            // 0x19e334: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E338u; }
        if (ctx->pc != 0x19E338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E338u; }
        if (ctx->pc != 0x19E338u) { return; }
    }
    ctx->pc = 0x19E338u;
    // 0x19e338: 0x8e24c9e0  lw          $a0, -0x3620($s1)
    ctx->pc = 0x19e338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953440)));
    // 0x19e33c: 0x3c0509e0  lui         $a1, 0x9E0
    ctx->pc = 0x19e33cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2528 << 16));
    // 0x19e340: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19e340u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e344: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x19e344u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e348: 0x34a50286  ori         $a1, $a1, 0x286
    ctx->pc = 0x19e348u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)646);
    // 0x19e34c: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x19E34Cu;
    SET_GPR_U32(ctx, 31, 0x19E354u);
    ctx->pc = 0x19E350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E34Cu;
            // 0x19e350: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E354u; }
        if (ctx->pc != 0x19E354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E354u; }
        if (ctx->pc != 0x19E354u) { return; }
    }
    ctx->pc = 0x19E354u;
    // 0x19e354: 0x8e24c9e0  lw          $a0, -0x3620($s1)
    ctx->pc = 0x19e354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953440)));
    // 0x19e358: 0x3c05099f  lui         $a1, 0x99F
    ctx->pc = 0x19e358u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2463 << 16));
    // 0x19e35c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19e35cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e360: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x19e360u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e364: 0x34a5038a  ori         $a1, $a1, 0x38A
    ctx->pc = 0x19e364u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)906);
    // 0x19e368: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x19E368u;
    SET_GPR_U32(ctx, 31, 0x19E370u);
    ctx->pc = 0x19E36Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E368u;
            // 0x19e36c: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E370u; }
        if (ctx->pc != 0x19E370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E370u; }
        if (ctx->pc != 0x19E370u) { return; }
    }
    ctx->pc = 0x19E370u;
    // 0x19e370: 0x8e24c9e0  lw          $a0, -0x3620($s1)
    ctx->pc = 0x19e370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953440)));
    // 0x19e374: 0x3c058e00  lui         $a1, 0x8E00
    ctx->pc = 0x19e374u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36352 << 16));
    // 0x19e378: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19e378u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e37c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x19e37cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e380: 0x34a56fff  ori         $a1, $a1, 0x6FFF
    ctx->pc = 0x19e380u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)28671);
    // 0x19e384: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x19E384u;
    SET_GPR_U32(ctx, 31, 0x19E38Cu);
    ctx->pc = 0x19E388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E384u;
            // 0x19e388: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E38Cu; }
        if (ctx->pc != 0x19E38Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E38Cu; }
        if (ctx->pc != 0x19E38Cu) { return; }
    }
    ctx->pc = 0x19E38Cu;
    // 0x19e38c: 0x8e24c9e0  lw          $a0, -0x3620($s1)
    ctx->pc = 0x19e38cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953440)));
    // 0x19e390: 0x3c05a0bd  lui         $a1, 0xA0BD
    ctx->pc = 0x19e390u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41149 << 16));
    // 0x19e394: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19e394u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e398: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x19e398u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e39c: 0x34a504ef  ori         $a1, $a1, 0x4EF
    ctx->pc = 0x19e39cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1263);
    // 0x19e3a0: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x19E3A0u;
    SET_GPR_U32(ctx, 31, 0x19E3A8u);
    ctx->pc = 0x19E3A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E3A0u;
            // 0x19e3a4: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E3A8u; }
        if (ctx->pc != 0x19E3A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E3A8u; }
        if (ctx->pc != 0x19E3A8u) { return; }
    }
    ctx->pc = 0x19E3A8u;
    // 0x19e3a8: 0x8e24c9e0  lw          $a0, -0x3620($s1)
    ctx->pc = 0x19e3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953440)));
    // 0x19e3ac: 0x3c0551f0  lui         $a1, 0x51F0
    ctx->pc = 0x19e3acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20976 << 16));
    // 0x19e3b0: 0x34a5e2e1  ori         $a1, $a1, 0xE2E1
    ctx->pc = 0x19e3b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)58081);
    // 0x19e3b4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19e3b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e3b8: 0x27a7002e  addiu       $a3, $sp, 0x2E
    ctx->pc = 0x19e3b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 46));
    // 0x19e3bc: 0xc06081c  jal         func_182070
    ctx->pc = 0x19E3BCu;
    SET_GPR_U32(ctx, 31, 0x19E3C4u);
    ctx->pc = 0x19E3C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E3BCu;
            // 0x19e3c0: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E3C4u; }
        if (ctx->pc != 0x19E3C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E3C4u; }
        if (ctx->pc != 0x19E3C4u) { return; }
    }
    ctx->pc = 0x19E3C4u;
    // 0x19e3c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19e3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e3c8: 0xc090e2c  jal         func_2438B0
    ctx->pc = 0x19E3C8u;
    SET_GPR_U32(ctx, 31, 0x19E3D0u);
    ctx->pc = 0x19E3CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E3C8u;
            // 0x19e3cc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2438B0u;
    if (runtime->hasFunction(0x2438B0u)) {
        auto targetFn = runtime->lookupFunction(0x2438B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E3D0u; }
        if (ctx->pc != 0x19E3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002438B0_0x2438b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E3D0u; }
        if (ctx->pc != 0x19E3D0u) { return; }
    }
    ctx->pc = 0x19E3D0u;
    // 0x19e3d0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x19e3d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19e3d4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x19e3d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19e3d8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x19e3d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19e3dc: 0x3e00008  jr          $ra
    ctx->pc = 0x19E3DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E3E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E3DCu;
            // 0x19e3e0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19E408u: goto label_19e408;
            case 0x19E428u: goto label_19e428;
            case 0x19E43Cu: goto label_19e43c;
            case 0x19E458u: goto label_19e458;
            case 0x19E46Cu: goto label_19e46c;
            case 0x19E480u: goto label_19e480;
            case 0x19E488u: goto label_19e488;
            case 0x19E48Cu: goto label_19e48c;
            case 0x19E4B0u: goto label_19e4b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19E3E4u;
    // 0x19e3e4: 0x0  nop
    ctx->pc = 0x19e3e4u;
    // NOP
    // 0x19e3e8: 0x9483002c  lhu         $v1, 0x2C($a0)
    ctx->pc = 0x19e3e8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x19e3ec: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x19e3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x19e3f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19E3F0u;
    {
        const bool branch_taken_0x19e3f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E3F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E3F0u;
            // 0x19e3f4: 0x27bdffb0  addiu       $sp, $sp, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e3f0) {
            ctx->pc = 0x19E408u;
            goto label_19e408;
        }
    }
    ctx->pc = 0x19E3F8u;
    // 0x19e3f8: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x19e3f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19e3fc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x19E3FCu;
    {
        const bool branch_taken_0x19e3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E3FCu;
            // 0x19e400: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e3fc) {
            ctx->pc = 0x19E488u;
            goto label_19e488;
        }
    }
    ctx->pc = 0x19E404u;
    // 0x19e404: 0x0  nop
    ctx->pc = 0x19e404u;
    // NOP
label_19e408:
    // 0x19e408: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x19e408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x19e40c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19E40Cu;
    {
        const bool branch_taken_0x19e40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E40Cu;
            // 0x19e410: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e40c) {
            ctx->pc = 0x19E428u;
            goto label_19e428;
        }
    }
    ctx->pc = 0x19E414u;
    // 0x19e414: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x19e414u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19e418: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x19e418u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19e41c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x19E41Cu;
    {
        const bool branch_taken_0x19e41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E41Cu;
            // 0x19e420: 0xfba20010  sqc2        $vf2, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e41c) {
            ctx->pc = 0x19E480u;
            goto label_19e480;
        }
    }
    ctx->pc = 0x19E424u;
    // 0x19e424: 0x0  nop
    ctx->pc = 0x19e424u;
    // NOP
label_19e428:
    // 0x19e428: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19E428u;
    {
        const bool branch_taken_0x19e428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E42Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E428u;
            // 0x19e42c: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e428) {
            ctx->pc = 0x19E43Cu;
            goto label_19e43c;
        }
    }
    ctx->pc = 0x19E430u;
    // 0x19e430: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x19e430u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x19e434: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x19E434u;
    {
        const bool branch_taken_0x19e434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E434u;
            // 0x19e438: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e434) {
            ctx->pc = 0x19E488u;
            goto label_19e488;
        }
    }
    ctx->pc = 0x19E43Cu;
label_19e43c:
    // 0x19e43c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19E43Cu;
    {
        const bool branch_taken_0x19e43c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E43Cu;
            // 0x19e440: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e43c) {
            ctx->pc = 0x19E458u;
            goto label_19e458;
        }
    }
    ctx->pc = 0x19E444u;
    // 0x19e444: 0xd8a20010  lqc2        $vf2, 0x10($a1)
    ctx->pc = 0x19e444u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x19e448: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x19e448u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19e44c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x19E44Cu;
    {
        const bool branch_taken_0x19e44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E44Cu;
            // 0x19e450: 0xfba20020  sqc2        $vf2, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e44c) {
            ctx->pc = 0x19E480u;
            goto label_19e480;
        }
    }
    ctx->pc = 0x19E454u;
    // 0x19e454: 0x0  nop
    ctx->pc = 0x19e454u;
    // NOP
label_19e458:
    // 0x19e458: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19E458u;
    {
        const bool branch_taken_0x19e458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E45Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E458u;
            // 0x19e45c: 0x30620010  andi        $v0, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e458) {
            ctx->pc = 0x19E46Cu;
            goto label_19e46c;
        }
    }
    ctx->pc = 0x19E460u;
    // 0x19e460: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x19e460u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x19e464: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19E464u;
    {
        const bool branch_taken_0x19e464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E464u;
            // 0x19e468: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e464) {
            ctx->pc = 0x19E488u;
            goto label_19e488;
        }
    }
    ctx->pc = 0x19E46Cu;
label_19e46c:
    // 0x19e46c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x19E46Cu;
    {
        const bool branch_taken_0x19e46c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e46c) {
            ctx->pc = 0x19E470u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19E46Cu;
            // 0x19e470: 0x9482002c  lhu         $v0, 0x2C($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 44)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19E48Cu;
            goto label_19e48c;
        }
    }
    ctx->pc = 0x19E474u;
    // 0x19e474: 0xd8a20020  lqc2        $vf2, 0x20($a1)
    ctx->pc = 0x19e474u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x19e478: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x19e478u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19e47c: 0xfba20030  sqc2        $vf2, 0x30($sp)
    ctx->pc = 0x19e47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[2]));
label_19e480:
    // 0x19e480: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x19e480u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19e484: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x19e484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_19e488:
    // 0x19e488: 0x9482002c  lhu         $v0, 0x2C($a0)
    ctx->pc = 0x19e488u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 44)));
label_19e48c:
    // 0x19e48c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x19e48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x19e490: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19E490u;
    {
        const bool branch_taken_0x19e490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E490u;
            // 0x19e494: 0xdba10040  lqc2        $vf1, 0x40($sp) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e490) {
            ctx->pc = 0x19E4B0u;
            goto label_19e4b0;
        }
    }
    ctx->pc = 0x19E498u;
    // 0x19e498: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x19e498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x19e49c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x19e49cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x19e4a0: 0xdba10040  lqc2        $vf1, 0x40($sp)
    ctx->pc = 0x19e4a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19e4a4: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x19e4a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19e4a8: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x19e4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19e4ac: 0xdba10040  lqc2        $vf1, 0x40($sp)
    ctx->pc = 0x19e4acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_19e4b0:
    // 0x19e4b0: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x19e4b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x19e4b4: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x19e4b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19e4b8: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x19e4b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19e4bc: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x19e4bcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x19e4c0: 0x4a0003bf  vwaitq
    ctx->pc = 0x19e4c0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x19e4c4: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x19e4c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19e4c8: 0x4a0002ff  vnop
    ctx->pc = 0x19e4c8u;
    // NOP operation, no action needed for VU0
    // 0x19e4cc: 0x4a0002ff  vnop
    ctx->pc = 0x19e4ccu;
    // NOP operation, no action needed for VU0
    // 0x19e4d0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x19e4d0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19e4d4: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x19e4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19e4d8: 0x3e00008  jr          $ra
    ctx->pc = 0x19E4D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E4D8u;
            // 0x19e4dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19E408u: goto label_19e408;
            case 0x19E428u: goto label_19e428;
            case 0x19E43Cu: goto label_19e43c;
            case 0x19E458u: goto label_19e458;
            case 0x19E46Cu: goto label_19e46c;
            case 0x19E480u: goto label_19e480;
            case 0x19E488u: goto label_19e488;
            case 0x19E48Cu: goto label_19e48c;
            case 0x19E4B0u: goto label_19e4b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19E4E0u;
}
