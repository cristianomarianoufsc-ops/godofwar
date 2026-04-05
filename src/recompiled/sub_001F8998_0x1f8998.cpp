#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F8998
// Address: 0x1f8998 - 0x1f8fc8
void sub_001F8998_0x1f8998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8998_0x1f8998");
#endif

    ctx->pc = 0x1f8998u;

    // 0x1f8998: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f8998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f899c: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1f899cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1f89a0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f89a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1f89a4: 0x245176c0  addiu       $s1, $v0, 0x76C0
    ctx->pc = 0x1f89a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 30400));
    // 0x1f89a8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1f89a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1f89ac: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1f89acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1f89b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f89b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f89b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f89b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f89b8: 0xc05f9ae  jal         func_17E6B8
    ctx->pc = 0x1F89B8u;
    SET_GPR_U32(ctx, 31, 0x1F89C0u);
    ctx->pc = 0x1F89BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F89B8u;
            // 0x1f89bc: 0x3c120020  lui         $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E6B8u;
    if (runtime->hasFunction(0x17E6B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E6B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F89C0u; }
        if (ctx->pc != 0x1F89C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e6b8_0x17e6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F89C0u; }
        if (ctx->pc != 0x1F89C0u) { return; }
    }
    ctx->pc = 0x1F89C0u;
    // 0x1f89c0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1f89c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1f89c4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f89c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f89c8: 0x24506288  addiu       $s0, $v0, 0x6288
    ctx->pc = 0x1f89c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 25224));
    // 0x1f89cc: 0xa0406288  sb          $zero, 0x6288($v0)
    ctx->pc = 0x1f89ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 25224), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f89d0: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1f89d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1f89d4: 0x24a576d8  addiu       $a1, $a1, 0x76D8
    ctx->pc = 0x1f89d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30424));
    // 0x1f89d8: 0x24c6e39c  addiu       $a2, $a2, -0x1C64
    ctx->pc = 0x1f89d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960028));
    // 0x1f89dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f89dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f89e0: 0xa2000018  sb          $zero, 0x18($s0)
    ctx->pc = 0x1f89e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f89e4: 0xa2000030  sb          $zero, 0x30($s0)
    ctx->pc = 0x1f89e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f89e8: 0xa2000048  sb          $zero, 0x48($s0)
    ctx->pc = 0x1f89e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f89ec: 0xa2000060  sb          $zero, 0x60($s0)
    ctx->pc = 0x1f89ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f89f0: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1F89F0u;
    SET_GPR_U32(ctx, 31, 0x1F89F8u);
    ctx->pc = 0x1F89F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F89F0u;
            // 0x1f89f4: 0xa2000078  sb          $zero, 0x78($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 120), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F89F8u; }
        if (ctx->pc != 0x1F89F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F89F8u; }
        if (ctx->pc != 0x1F89F8u) { return; }
    }
    ctx->pc = 0x1F89F8u;
    // 0x1f89f8: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f89f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f89fc: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1f89fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1f8a00: 0x24a576e0  addiu       $a1, $a1, 0x76E0
    ctx->pc = 0x1f8a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30432));
    // 0x1f8a04: 0x24c6e3a0  addiu       $a2, $a2, -0x1C60
    ctx->pc = 0x1f8a04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960032));
    // 0x1f8a08: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1F8A08u;
    SET_GPR_U32(ctx, 31, 0x1F8A10u);
    ctx->pc = 0x1F8A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8A08u;
            // 0x1f8a0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8A10u; }
        if (ctx->pc != 0x1F8A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8A10u; }
        if (ctx->pc != 0x1F8A10u) { return; }
    }
    ctx->pc = 0x1F8A10u;
    // 0x1f8a10: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f8a10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f8a14: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1f8a14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1f8a18: 0x24a576e8  addiu       $a1, $a1, 0x76E8
    ctx->pc = 0x1f8a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30440));
    // 0x1f8a1c: 0x24c6e3a4  addiu       $a2, $a2, -0x1C5C
    ctx->pc = 0x1f8a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960036));
    // 0x1f8a20: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1F8A20u;
    SET_GPR_U32(ctx, 31, 0x1F8A28u);
    ctx->pc = 0x1F8A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8A20u;
            // 0x1f8a24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8A28u; }
        if (ctx->pc != 0x1F8A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8A28u; }
        if (ctx->pc != 0x1F8A28u) { return; }
    }
    ctx->pc = 0x1F8A28u;
    // 0x1f8a28: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f8a28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f8a2c: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1f8a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1f8a30: 0x24a55ba0  addiu       $a1, $a1, 0x5BA0
    ctx->pc = 0x1f8a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23456));
    // 0x1f8a34: 0x24c6e3a8  addiu       $a2, $a2, -0x1C58
    ctx->pc = 0x1f8a34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960040));
    // 0x1f8a38: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1F8A38u;
    SET_GPR_U32(ctx, 31, 0x1F8A40u);
    ctx->pc = 0x1F8A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8A38u;
            // 0x1f8a3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8A40u; }
        if (ctx->pc != 0x1F8A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8A40u; }
        if (ctx->pc != 0x1F8A40u) { return; }
    }
    ctx->pc = 0x1F8A40u;
    // 0x1f8a40: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f8a40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f8a44: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1f8a44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1f8a48: 0x24a576f0  addiu       $a1, $a1, 0x76F0
    ctx->pc = 0x1f8a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30448));
    // 0x1f8a4c: 0x24c6e3ac  addiu       $a2, $a2, -0x1C54
    ctx->pc = 0x1f8a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960044));
    // 0x1f8a50: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1F8A50u;
    SET_GPR_U32(ctx, 31, 0x1F8A58u);
    ctx->pc = 0x1F8A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8A50u;
            // 0x1f8a54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8A58u; }
        if (ctx->pc != 0x1F8A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8A58u; }
        if (ctx->pc != 0x1F8A58u) { return; }
    }
    ctx->pc = 0x1F8A58u;
    // 0x1f8a58: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f8a58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f8a5c: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1f8a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1f8a60: 0x24a57708  addiu       $a1, $a1, 0x7708
    ctx->pc = 0x1f8a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30472));
    // 0x1f8a64: 0x24c6e3b0  addiu       $a2, $a2, -0x1C50
    ctx->pc = 0x1f8a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960048));
    // 0x1f8a68: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1F8A68u;
    SET_GPR_U32(ctx, 31, 0x1F8A70u);
    ctx->pc = 0x1F8A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8A68u;
            // 0x1f8a6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8A70u; }
        if (ctx->pc != 0x1F8A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8A70u; }
        if (ctx->pc != 0x1F8A70u) { return; }
    }
    ctx->pc = 0x1F8A70u;
    // 0x1f8a70: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f8a70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f8a74: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1f8a74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1f8a78: 0x24a57720  addiu       $a1, $a1, 0x7720
    ctx->pc = 0x1f8a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30496));
    // 0x1f8a7c: 0x24c6e3b4  addiu       $a2, $a2, -0x1C4C
    ctx->pc = 0x1f8a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960052));
    // 0x1f8a80: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1F8A80u;
    SET_GPR_U32(ctx, 31, 0x1F8A88u);
    ctx->pc = 0x1F8A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8A80u;
            // 0x1f8a84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8A88u; }
        if (ctx->pc != 0x1F8A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8A88u; }
        if (ctx->pc != 0x1F8A88u) { return; }
    }
    ctx->pc = 0x1F8A88u;
    // 0x1f8a88: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f8a88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f8a8c: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1f8a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1f8a90: 0x24a57730  addiu       $a1, $a1, 0x7730
    ctx->pc = 0x1f8a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30512));
    // 0x1f8a94: 0x24c6e3b8  addiu       $a2, $a2, -0x1C48
    ctx->pc = 0x1f8a94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960056));
    // 0x1f8a98: 0xc05f7bc  jal         func_17DEF0
    ctx->pc = 0x1F8A98u;
    SET_GPR_U32(ctx, 31, 0x1F8AA0u);
    ctx->pc = 0x1F8A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8A98u;
            // 0x1f8a9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DEF0u;
    if (runtime->hasFunction(0x17DEF0u)) {
        auto targetFn = runtime->lookupFunction(0x17DEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8AA0u; }
        if (ctx->pc != 0x1F8AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DEF0_0x17def0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8AA0u; }
        if (ctx->pc != 0x1F8AA0u) { return; }
    }
    ctx->pc = 0x1F8AA0u;
    // 0x1f8aa0: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f8aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f8aa4: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1f8aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1f8aa8: 0x24a57740  addiu       $a1, $a1, 0x7740
    ctx->pc = 0x1f8aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30528));
    // 0x1f8aac: 0x24c6e3ba  addiu       $a2, $a2, -0x1C46
    ctx->pc = 0x1f8aacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960058));
    // 0x1f8ab0: 0xc05f7bc  jal         func_17DEF0
    ctx->pc = 0x1F8AB0u;
    SET_GPR_U32(ctx, 31, 0x1F8AB8u);
    ctx->pc = 0x1F8AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8AB0u;
            // 0x1f8ab4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DEF0u;
    if (runtime->hasFunction(0x17DEF0u)) {
        auto targetFn = runtime->lookupFunction(0x17DEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8AB8u; }
        if (ctx->pc != 0x1F8AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DEF0_0x17def0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8AB8u; }
        if (ctx->pc != 0x1F8AB8u) { return; }
    }
    ctx->pc = 0x1F8AB8u;
    // 0x1f8ab8: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f8ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f8abc: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1f8abcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1f8ac0: 0x24a57750  addiu       $a1, $a1, 0x7750
    ctx->pc = 0x1f8ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30544));
    // 0x1f8ac4: 0x24c6e3c4  addiu       $a2, $a2, -0x1C3C
    ctx->pc = 0x1f8ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960068));
    // 0x1f8ac8: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1F8AC8u;
    SET_GPR_U32(ctx, 31, 0x1F8AD0u);
    ctx->pc = 0x1F8ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8AC8u;
            // 0x1f8acc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8AD0u; }
        if (ctx->pc != 0x1F8AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8AD0u; }
        if (ctx->pc != 0x1F8AD0u) { return; }
    }
    ctx->pc = 0x1F8AD0u;
    // 0x1f8ad0: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f8ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f8ad4: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1f8ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1f8ad8: 0x24a57768  addiu       $a1, $a1, 0x7768
    ctx->pc = 0x1f8ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30568));
    // 0x1f8adc: 0x24c6e3bc  addiu       $a2, $a2, -0x1C44
    ctx->pc = 0x1f8adcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960060));
    // 0x1f8ae0: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1F8AE0u;
    SET_GPR_U32(ctx, 31, 0x1F8AE8u);
    ctx->pc = 0x1F8AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8AE0u;
            // 0x1f8ae4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8AE8u; }
        if (ctx->pc != 0x1F8AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8AE8u; }
        if (ctx->pc != 0x1F8AE8u) { return; }
    }
    ctx->pc = 0x1F8AE8u;
    // 0x1f8ae8: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f8ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f8aec: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1f8aecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1f8af0: 0x24a57778  addiu       $a1, $a1, 0x7778
    ctx->pc = 0x1f8af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30584));
    // 0x1f8af4: 0x24c6e3c0  addiu       $a2, $a2, -0x1C40
    ctx->pc = 0x1f8af4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960064));
    // 0x1f8af8: 0xc05f76c  jal         func_17DDB0
    ctx->pc = 0x1F8AF8u;
    SET_GPR_U32(ctx, 31, 0x1F8B00u);
    ctx->pc = 0x1F8AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8AF8u;
            // 0x1f8afc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DDB0u;
    if (runtime->hasFunction(0x17DDB0u)) {
        auto targetFn = runtime->lookupFunction(0x17DDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8B00u; }
        if (ctx->pc != 0x1F8B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DDB0_0x17ddb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8B00u; }
        if (ctx->pc != 0x1F8B00u) { return; }
    }
    ctx->pc = 0x1F8B00u;
    // 0x1f8b00: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f8b00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f8b04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f8b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8b08: 0x24a57788  addiu       $a1, $a1, 0x7788
    ctx->pc = 0x1f8b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30600));
    // 0x1f8b0c: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x1f8b0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1f8b10: 0xc05f836  jal         func_17E0D8
    ctx->pc = 0x1F8B10u;
    SET_GPR_U32(ctx, 31, 0x1F8B18u);
    ctx->pc = 0x1F8B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8B10u;
            // 0x1f8b14: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0D8u;
    if (runtime->hasFunction(0x17E0D8u)) {
        auto targetFn = runtime->lookupFunction(0x17E0D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8B18u; }
        if (ctx->pc != 0x1F8B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e0d8_0x17e170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8B18u; }
        if (ctx->pc != 0x1F8B18u) { return; }
    }
    ctx->pc = 0x1F8B18u;
    // 0x1f8b18: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1f8b18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1f8b1c: 0x264887d8  addiu       $t0, $s2, -0x7828
    ctx->pc = 0x1f8b1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936536));
    // 0x1f8b20: 0x90a3c678  lbu         $v1, -0x3988($a1)
    ctx->pc = 0x1f8b20u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294952568)));
    // 0x1f8b24: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1f8b24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8b28: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1F8B28u;
    {
        const bool branch_taken_0x1f8b28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8B28u;
            // 0x1f8b2c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8b28) {
            ctx->pc = 0x1F8B80u;
            goto label_1f8b80;
        }
    }
    ctx->pc = 0x1F8B30u;
    // 0x1f8b30: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f8b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1f8b34: 0x0  nop
    ctx->pc = 0x1f8b34u;
    // NOP
label_1f8b38:
    // 0x1f8b38: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1f8b38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1f8b3c: 0x2442c680  addiu       $v0, $v0, -0x3980
    ctx->pc = 0x1f8b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952576));
    // 0x1f8b40: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f8b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f8b44: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f8b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f8b48: 0x15020009  bne         $t0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F8B48u;
    {
        const bool branch_taken_0x1f8b48 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F8B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8B48u;
            // 0x1f8b4c: 0x90a2c678  lbu         $v0, -0x3988($a1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294952568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8b48) {
            ctx->pc = 0x1F8B70u;
            goto label_1f8b70;
        }
    }
    ctx->pc = 0x1F8B50u;
    // 0x1f8b50: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x1f8b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1f8b54: 0x3c0307ff  lui         $v1, 0x7FF
    ctx->pc = 0x1f8b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2047 << 16));
    // 0x1f8b58: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1f8b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1f8b5c: 0x426c0  sll         $a0, $a0, 27
    ctx->pc = 0x1f8b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 27));
    // 0x1f8b60: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f8b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1f8b64: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1f8b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1f8b68: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1F8B68u;
    {
        const bool branch_taken_0x1f8b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8B68u;
            // 0x1f8b6c: 0xace20014  sw          $v0, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8b68) {
            ctx->pc = 0x1F8BC8u;
            goto label_1f8bc8;
        }
    }
    ctx->pc = 0x1F8B70u;
label_1f8b70:
    // 0x1f8b70: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f8b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f8b74: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1f8b74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f8b78: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1F8B78u;
    {
        const bool branch_taken_0x1f8b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8B78u;
            // 0x1f8b7c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8b78) {
            ctx->pc = 0x1F8B38u;
            runtime->cooperativeGuestYield();
            goto label_1f8b38;
        }
    }
    ctx->pc = 0x1F8B80u;
label_1f8b80:
    // 0x1f8b80: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1f8b80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1f8b84: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x1f8b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1f8b88: 0x90c4c678  lbu         $a0, -0x3988($a2)
    ctx->pc = 0x1f8b88u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294952568)));
    // 0x1f8b8c: 0x3c0307ff  lui         $v1, 0x7FF
    ctx->pc = 0x1f8b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2047 << 16));
    // 0x1f8b90: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1f8b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1f8b94: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1f8b94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1f8b98: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f8b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1f8b9c: 0x426c0  sll         $a0, $a0, 27
    ctx->pc = 0x1f8b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 27));
    // 0x1f8ba0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1f8ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1f8ba4: 0x24a5c680  addiu       $a1, $a1, -0x3980
    ctx->pc = 0x1f8ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952576));
    // 0x1f8ba8: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x1f8ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
    // 0x1f8bac: 0x216c2  srl         $v0, $v0, 27
    ctx->pc = 0x1f8bacu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 27));
    // 0x1f8bb0: 0x90c3c678  lbu         $v1, -0x3988($a2)
    ctx->pc = 0x1f8bb0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294952568)));
    // 0x1f8bb4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f8bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f8bb8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1f8bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1f8bbc: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x1f8bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x1f8bc0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f8bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f8bc4: 0xa0c3c678  sb          $v1, -0x3988($a2)
    ctx->pc = 0x1f8bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4294952568), (uint8_t)GPR_U32(ctx, 3));
label_1f8bc8:
    // 0x1f8bc8: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f8bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f8bcc: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x1f8bccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x1f8bd0: 0x24a577a0  addiu       $a1, $a1, 0x77A0
    ctx->pc = 0x1f8bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30624));
    // 0x1f8bd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f8bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8bd8: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x1f8bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1f8bdc: 0xc05f836  jal         func_17E0D8
    ctx->pc = 0x1F8BDCu;
    SET_GPR_U32(ctx, 31, 0x1F8BE4u);
    ctx->pc = 0x1F8BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8BDCu;
            // 0x1f8be0: 0x24c662a0  addiu       $a2, $a2, 0x62A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0D8u;
    if (runtime->hasFunction(0x17E0D8u)) {
        auto targetFn = runtime->lookupFunction(0x17E0D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8BE4u; }
        if (ctx->pc != 0x1F8BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e0d8_0x17e170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8BE4u; }
        if (ctx->pc != 0x1F8BE4u) { return; }
    }
    ctx->pc = 0x1F8BE4u;
    // 0x1f8be4: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1f8be4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1f8be8: 0x264887d8  addiu       $t0, $s2, -0x7828
    ctx->pc = 0x1f8be8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936536));
    // 0x1f8bec: 0x90a3c678  lbu         $v1, -0x3988($a1)
    ctx->pc = 0x1f8becu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294952568)));
    // 0x1f8bf0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1f8bf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8bf4: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1F8BF4u;
    {
        const bool branch_taken_0x1f8bf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8BF4u;
            // 0x1f8bf8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8bf4) {
            ctx->pc = 0x1F8C48u;
            goto label_1f8c48;
        }
    }
    ctx->pc = 0x1F8BFCu;
    // 0x1f8bfc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f8bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1f8c00:
    // 0x1f8c00: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1f8c00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1f8c04: 0x2442c680  addiu       $v0, $v0, -0x3980
    ctx->pc = 0x1f8c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952576));
    // 0x1f8c08: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f8c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f8c0c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f8c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f8c10: 0x15020009  bne         $t0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F8C10u;
    {
        const bool branch_taken_0x1f8c10 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F8C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8C10u;
            // 0x1f8c14: 0x90a2c678  lbu         $v0, -0x3988($a1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294952568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8c10) {
            ctx->pc = 0x1F8C38u;
            goto label_1f8c38;
        }
    }
    ctx->pc = 0x1F8C18u;
    // 0x1f8c18: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x1f8c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1f8c1c: 0x3c0307ff  lui         $v1, 0x7FF
    ctx->pc = 0x1f8c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2047 << 16));
    // 0x1f8c20: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1f8c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1f8c24: 0x426c0  sll         $a0, $a0, 27
    ctx->pc = 0x1f8c24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 27));
    // 0x1f8c28: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f8c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1f8c2c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1f8c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1f8c30: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1F8C30u;
    {
        const bool branch_taken_0x1f8c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8C30u;
            // 0x1f8c34: 0xace20014  sw          $v0, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8c30) {
            ctx->pc = 0x1F8C90u;
            goto label_1f8c90;
        }
    }
    ctx->pc = 0x1F8C38u;
label_1f8c38:
    // 0x1f8c38: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f8c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f8c3c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1f8c3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f8c40: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1F8C40u;
    {
        const bool branch_taken_0x1f8c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8C40u;
            // 0x1f8c44: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8c40) {
            ctx->pc = 0x1F8C00u;
            runtime->cooperativeGuestYield();
            goto label_1f8c00;
        }
    }
    ctx->pc = 0x1F8C48u;
label_1f8c48:
    // 0x1f8c48: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1f8c48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1f8c4c: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x1f8c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1f8c50: 0x90c4c678  lbu         $a0, -0x3988($a2)
    ctx->pc = 0x1f8c50u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294952568)));
    // 0x1f8c54: 0x3c0307ff  lui         $v1, 0x7FF
    ctx->pc = 0x1f8c54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2047 << 16));
    // 0x1f8c58: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1f8c58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1f8c5c: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1f8c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1f8c60: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f8c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1f8c64: 0x426c0  sll         $a0, $a0, 27
    ctx->pc = 0x1f8c64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 27));
    // 0x1f8c68: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1f8c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1f8c6c: 0x24a5c680  addiu       $a1, $a1, -0x3980
    ctx->pc = 0x1f8c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952576));
    // 0x1f8c70: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x1f8c70u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
    // 0x1f8c74: 0x216c2  srl         $v0, $v0, 27
    ctx->pc = 0x1f8c74u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 27));
    // 0x1f8c78: 0x90c3c678  lbu         $v1, -0x3988($a2)
    ctx->pc = 0x1f8c78u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294952568)));
    // 0x1f8c7c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f8c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f8c80: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1f8c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1f8c84: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x1f8c84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x1f8c88: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f8c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f8c8c: 0xa0c3c678  sb          $v1, -0x3988($a2)
    ctx->pc = 0x1f8c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4294952568), (uint8_t)GPR_U32(ctx, 3));
label_1f8c90:
    // 0x1f8c90: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f8c90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f8c94: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x1f8c94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x1f8c98: 0x24a577b8  addiu       $a1, $a1, 0x77B8
    ctx->pc = 0x1f8c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30648));
    // 0x1f8c9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f8c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8ca0: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x1f8ca0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1f8ca4: 0xc05f836  jal         func_17E0D8
    ctx->pc = 0x1F8CA4u;
    SET_GPR_U32(ctx, 31, 0x1F8CACu);
    ctx->pc = 0x1F8CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8CA4u;
            // 0x1f8ca8: 0x24c662b8  addiu       $a2, $a2, 0x62B8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0D8u;
    if (runtime->hasFunction(0x17E0D8u)) {
        auto targetFn = runtime->lookupFunction(0x17E0D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8CACu; }
        if (ctx->pc != 0x1F8CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e0d8_0x17e170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8CACu; }
        if (ctx->pc != 0x1F8CACu) { return; }
    }
    ctx->pc = 0x1F8CACu;
    // 0x1f8cac: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1f8cacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1f8cb0: 0x264887d8  addiu       $t0, $s2, -0x7828
    ctx->pc = 0x1f8cb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936536));
    // 0x1f8cb4: 0x90a3c678  lbu         $v1, -0x3988($a1)
    ctx->pc = 0x1f8cb4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294952568)));
    // 0x1f8cb8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1f8cb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8cbc: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1F8CBCu;
    {
        const bool branch_taken_0x1f8cbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8CBCu;
            // 0x1f8cc0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8cbc) {
            ctx->pc = 0x1F8D10u;
            goto label_1f8d10;
        }
    }
    ctx->pc = 0x1F8CC4u;
    // 0x1f8cc4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f8cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1f8cc8:
    // 0x1f8cc8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1f8cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1f8ccc: 0x2442c680  addiu       $v0, $v0, -0x3980
    ctx->pc = 0x1f8cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952576));
    // 0x1f8cd0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f8cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f8cd4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f8cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f8cd8: 0x15020009  bne         $t0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F8CD8u;
    {
        const bool branch_taken_0x1f8cd8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F8CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8CD8u;
            // 0x1f8cdc: 0x90a2c678  lbu         $v0, -0x3988($a1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294952568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8cd8) {
            ctx->pc = 0x1F8D00u;
            goto label_1f8d00;
        }
    }
    ctx->pc = 0x1F8CE0u;
    // 0x1f8ce0: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x1f8ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1f8ce4: 0x3c0307ff  lui         $v1, 0x7FF
    ctx->pc = 0x1f8ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2047 << 16));
    // 0x1f8ce8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1f8ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1f8cec: 0x426c0  sll         $a0, $a0, 27
    ctx->pc = 0x1f8cecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 27));
    // 0x1f8cf0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f8cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1f8cf4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1f8cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1f8cf8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1F8CF8u;
    {
        const bool branch_taken_0x1f8cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8CF8u;
            // 0x1f8cfc: 0xace20014  sw          $v0, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8cf8) {
            ctx->pc = 0x1F8D58u;
            goto label_1f8d58;
        }
    }
    ctx->pc = 0x1F8D00u;
label_1f8d00:
    // 0x1f8d00: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f8d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f8d04: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1f8d04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f8d08: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1F8D08u;
    {
        const bool branch_taken_0x1f8d08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8D08u;
            // 0x1f8d0c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8d08) {
            ctx->pc = 0x1F8CC8u;
            runtime->cooperativeGuestYield();
            goto label_1f8cc8;
        }
    }
    ctx->pc = 0x1F8D10u;
label_1f8d10:
    // 0x1f8d10: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1f8d10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1f8d14: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x1f8d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1f8d18: 0x90c4c678  lbu         $a0, -0x3988($a2)
    ctx->pc = 0x1f8d18u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294952568)));
    // 0x1f8d1c: 0x3c0307ff  lui         $v1, 0x7FF
    ctx->pc = 0x1f8d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2047 << 16));
    // 0x1f8d20: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1f8d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1f8d24: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1f8d24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1f8d28: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f8d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1f8d2c: 0x426c0  sll         $a0, $a0, 27
    ctx->pc = 0x1f8d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 27));
    // 0x1f8d30: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1f8d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1f8d34: 0x24a5c680  addiu       $a1, $a1, -0x3980
    ctx->pc = 0x1f8d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952576));
    // 0x1f8d38: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x1f8d38u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
    // 0x1f8d3c: 0x216c2  srl         $v0, $v0, 27
    ctx->pc = 0x1f8d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 27));
    // 0x1f8d40: 0x90c3c678  lbu         $v1, -0x3988($a2)
    ctx->pc = 0x1f8d40u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294952568)));
    // 0x1f8d44: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f8d44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f8d48: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1f8d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1f8d4c: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x1f8d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x1f8d50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f8d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f8d54: 0xa0c3c678  sb          $v1, -0x3988($a2)
    ctx->pc = 0x1f8d54u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4294952568), (uint8_t)GPR_U32(ctx, 3));
label_1f8d58:
    // 0x1f8d58: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f8d58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f8d5c: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x1f8d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x1f8d60: 0x24a577d0  addiu       $a1, $a1, 0x77D0
    ctx->pc = 0x1f8d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30672));
    // 0x1f8d64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f8d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8d68: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x1f8d68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1f8d6c: 0xc05f836  jal         func_17E0D8
    ctx->pc = 0x1F8D6Cu;
    SET_GPR_U32(ctx, 31, 0x1F8D74u);
    ctx->pc = 0x1F8D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8D6Cu;
            // 0x1f8d70: 0x24c662d0  addiu       $a2, $a2, 0x62D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25296));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0D8u;
    if (runtime->hasFunction(0x17E0D8u)) {
        auto targetFn = runtime->lookupFunction(0x17E0D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8D74u; }
        if (ctx->pc != 0x1F8D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e0d8_0x17e170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8D74u; }
        if (ctx->pc != 0x1F8D74u) { return; }
    }
    ctx->pc = 0x1F8D74u;
    // 0x1f8d74: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1f8d74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1f8d78: 0x264887d8  addiu       $t0, $s2, -0x7828
    ctx->pc = 0x1f8d78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936536));
    // 0x1f8d7c: 0x90a3c678  lbu         $v1, -0x3988($a1)
    ctx->pc = 0x1f8d7cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294952568)));
    // 0x1f8d80: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1f8d80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8d84: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1F8D84u;
    {
        const bool branch_taken_0x1f8d84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8D84u;
            // 0x1f8d88: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8d84) {
            ctx->pc = 0x1F8DD8u;
            goto label_1f8dd8;
        }
    }
    ctx->pc = 0x1F8D8Cu;
    // 0x1f8d8c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f8d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1f8d90:
    // 0x1f8d90: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1f8d90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1f8d94: 0x2442c680  addiu       $v0, $v0, -0x3980
    ctx->pc = 0x1f8d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952576));
    // 0x1f8d98: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f8d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f8d9c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f8d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f8da0: 0x15020009  bne         $t0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F8DA0u;
    {
        const bool branch_taken_0x1f8da0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F8DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8DA0u;
            // 0x1f8da4: 0x90a2c678  lbu         $v0, -0x3988($a1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294952568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8da0) {
            ctx->pc = 0x1F8DC8u;
            goto label_1f8dc8;
        }
    }
    ctx->pc = 0x1F8DA8u;
    // 0x1f8da8: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x1f8da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1f8dac: 0x3c0307ff  lui         $v1, 0x7FF
    ctx->pc = 0x1f8dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2047 << 16));
    // 0x1f8db0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1f8db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1f8db4: 0x426c0  sll         $a0, $a0, 27
    ctx->pc = 0x1f8db4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 27));
    // 0x1f8db8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f8db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1f8dbc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1f8dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1f8dc0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1F8DC0u;
    {
        const bool branch_taken_0x1f8dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8DC0u;
            // 0x1f8dc4: 0xace20014  sw          $v0, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8dc0) {
            ctx->pc = 0x1F8E20u;
            goto label_1f8e20;
        }
    }
    ctx->pc = 0x1F8DC8u;
label_1f8dc8:
    // 0x1f8dc8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f8dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f8dcc: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1f8dccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f8dd0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1F8DD0u;
    {
        const bool branch_taken_0x1f8dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8DD0u;
            // 0x1f8dd4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8dd0) {
            ctx->pc = 0x1F8D90u;
            runtime->cooperativeGuestYield();
            goto label_1f8d90;
        }
    }
    ctx->pc = 0x1F8DD8u;
label_1f8dd8:
    // 0x1f8dd8: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1f8dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1f8ddc: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x1f8ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1f8de0: 0x90c4c678  lbu         $a0, -0x3988($a2)
    ctx->pc = 0x1f8de0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294952568)));
    // 0x1f8de4: 0x3c0307ff  lui         $v1, 0x7FF
    ctx->pc = 0x1f8de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2047 << 16));
    // 0x1f8de8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1f8de8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1f8dec: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1f8decu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1f8df0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f8df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1f8df4: 0x426c0  sll         $a0, $a0, 27
    ctx->pc = 0x1f8df4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 27));
    // 0x1f8df8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1f8df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1f8dfc: 0x24a5c680  addiu       $a1, $a1, -0x3980
    ctx->pc = 0x1f8dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952576));
    // 0x1f8e00: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x1f8e00u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
    // 0x1f8e04: 0x216c2  srl         $v0, $v0, 27
    ctx->pc = 0x1f8e04u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 27));
    // 0x1f8e08: 0x90c3c678  lbu         $v1, -0x3988($a2)
    ctx->pc = 0x1f8e08u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294952568)));
    // 0x1f8e0c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f8e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f8e10: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1f8e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1f8e14: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x1f8e14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x1f8e18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f8e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f8e1c: 0xa0c3c678  sb          $v1, -0x3988($a2)
    ctx->pc = 0x1f8e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4294952568), (uint8_t)GPR_U32(ctx, 3));
label_1f8e20:
    // 0x1f8e20: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f8e20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f8e24: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x1f8e24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x1f8e28: 0x24a577e8  addiu       $a1, $a1, 0x77E8
    ctx->pc = 0x1f8e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30696));
    // 0x1f8e2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f8e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8e30: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x1f8e30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1f8e34: 0xc05f836  jal         func_17E0D8
    ctx->pc = 0x1F8E34u;
    SET_GPR_U32(ctx, 31, 0x1F8E3Cu);
    ctx->pc = 0x1F8E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8E34u;
            // 0x1f8e38: 0x24c662e8  addiu       $a2, $a2, 0x62E8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0D8u;
    if (runtime->hasFunction(0x17E0D8u)) {
        auto targetFn = runtime->lookupFunction(0x17E0D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8E3Cu; }
        if (ctx->pc != 0x1F8E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e0d8_0x17e170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8E3Cu; }
        if (ctx->pc != 0x1F8E3Cu) { return; }
    }
    ctx->pc = 0x1F8E3Cu;
    // 0x1f8e3c: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1f8e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1f8e40: 0x264887d8  addiu       $t0, $s2, -0x7828
    ctx->pc = 0x1f8e40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936536));
    // 0x1f8e44: 0x90a3c678  lbu         $v1, -0x3988($a1)
    ctx->pc = 0x1f8e44u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294952568)));
    // 0x1f8e48: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1f8e48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8e4c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1F8E4Cu;
    {
        const bool branch_taken_0x1f8e4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8E4Cu;
            // 0x1f8e50: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8e4c) {
            ctx->pc = 0x1F8EA0u;
            goto label_1f8ea0;
        }
    }
    ctx->pc = 0x1F8E54u;
    // 0x1f8e54: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f8e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1f8e58:
    // 0x1f8e58: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1f8e58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1f8e5c: 0x2442c680  addiu       $v0, $v0, -0x3980
    ctx->pc = 0x1f8e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952576));
    // 0x1f8e60: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f8e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f8e64: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f8e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f8e68: 0x15020009  bne         $t0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F8E68u;
    {
        const bool branch_taken_0x1f8e68 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F8E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8E68u;
            // 0x1f8e6c: 0x90a2c678  lbu         $v0, -0x3988($a1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294952568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8e68) {
            ctx->pc = 0x1F8E90u;
            goto label_1f8e90;
        }
    }
    ctx->pc = 0x1F8E70u;
    // 0x1f8e70: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x1f8e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1f8e74: 0x3c0307ff  lui         $v1, 0x7FF
    ctx->pc = 0x1f8e74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2047 << 16));
    // 0x1f8e78: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1f8e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1f8e7c: 0x426c0  sll         $a0, $a0, 27
    ctx->pc = 0x1f8e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 27));
    // 0x1f8e80: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f8e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1f8e84: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1f8e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1f8e88: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1F8E88u;
    {
        const bool branch_taken_0x1f8e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8E88u;
            // 0x1f8e8c: 0xace20014  sw          $v0, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8e88) {
            ctx->pc = 0x1F8EE8u;
            goto label_1f8ee8;
        }
    }
    ctx->pc = 0x1F8E90u;
label_1f8e90:
    // 0x1f8e90: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f8e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f8e94: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1f8e94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f8e98: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1F8E98u;
    {
        const bool branch_taken_0x1f8e98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8E98u;
            // 0x1f8e9c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8e98) {
            ctx->pc = 0x1F8E58u;
            runtime->cooperativeGuestYield();
            goto label_1f8e58;
        }
    }
    ctx->pc = 0x1F8EA0u;
label_1f8ea0:
    // 0x1f8ea0: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1f8ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1f8ea4: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x1f8ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1f8ea8: 0x90c4c678  lbu         $a0, -0x3988($a2)
    ctx->pc = 0x1f8ea8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294952568)));
    // 0x1f8eac: 0x3c0307ff  lui         $v1, 0x7FF
    ctx->pc = 0x1f8eacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2047 << 16));
    // 0x1f8eb0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1f8eb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1f8eb4: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1f8eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1f8eb8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f8eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1f8ebc: 0x426c0  sll         $a0, $a0, 27
    ctx->pc = 0x1f8ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 27));
    // 0x1f8ec0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1f8ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1f8ec4: 0x24a5c680  addiu       $a1, $a1, -0x3980
    ctx->pc = 0x1f8ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952576));
    // 0x1f8ec8: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x1f8ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
    // 0x1f8ecc: 0x216c2  srl         $v0, $v0, 27
    ctx->pc = 0x1f8eccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 27));
    // 0x1f8ed0: 0x90c3c678  lbu         $v1, -0x3988($a2)
    ctx->pc = 0x1f8ed0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294952568)));
    // 0x1f8ed4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f8ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f8ed8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1f8ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1f8edc: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x1f8edcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x1f8ee0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f8ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f8ee4: 0xa0c3c678  sb          $v1, -0x3988($a2)
    ctx->pc = 0x1f8ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4294952568), (uint8_t)GPR_U32(ctx, 3));
label_1f8ee8:
    // 0x1f8ee8: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f8ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f8eec: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x1f8eecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x1f8ef0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f8ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8ef4: 0x24a57800  addiu       $a1, $a1, 0x7800
    ctx->pc = 0x1f8ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30720));
    // 0x1f8ef8: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x1f8ef8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1f8efc: 0xc05f836  jal         func_17E0D8
    ctx->pc = 0x1F8EFCu;
    SET_GPR_U32(ctx, 31, 0x1F8F04u);
    ctx->pc = 0x1F8F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8EFCu;
            // 0x1f8f00: 0x24c66300  addiu       $a2, $a2, 0x6300 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0D8u;
    if (runtime->hasFunction(0x17E0D8u)) {
        auto targetFn = runtime->lookupFunction(0x17E0D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8F04u; }
        if (ctx->pc != 0x1F8F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e0d8_0x17e170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8F04u; }
        if (ctx->pc != 0x1F8F04u) { return; }
    }
    ctx->pc = 0x1F8F04u;
    // 0x1f8f04: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1f8f04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1f8f08: 0x264887d8  addiu       $t0, $s2, -0x7828
    ctx->pc = 0x1f8f08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936536));
    // 0x1f8f0c: 0x90a3c678  lbu         $v1, -0x3988($a1)
    ctx->pc = 0x1f8f0cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294952568)));
    // 0x1f8f10: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1f8f10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8f14: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1F8F14u;
    {
        const bool branch_taken_0x1f8f14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8F14u;
            // 0x1f8f18: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8f14) {
            ctx->pc = 0x1F8F68u;
            goto label_1f8f68;
        }
    }
    ctx->pc = 0x1F8F1Cu;
    // 0x1f8f1c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f8f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1f8f20:
    // 0x1f8f20: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1f8f20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1f8f24: 0x2442c680  addiu       $v0, $v0, -0x3980
    ctx->pc = 0x1f8f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952576));
    // 0x1f8f28: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f8f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f8f2c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f8f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f8f30: 0x15020009  bne         $t0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F8F30u;
    {
        const bool branch_taken_0x1f8f30 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F8F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8F30u;
            // 0x1f8f34: 0x90a2c678  lbu         $v0, -0x3988($a1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294952568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8f30) {
            ctx->pc = 0x1F8F58u;
            goto label_1f8f58;
        }
    }
    ctx->pc = 0x1F8F38u;
    // 0x1f8f38: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x1f8f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1f8f3c: 0x3c0307ff  lui         $v1, 0x7FF
    ctx->pc = 0x1f8f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2047 << 16));
    // 0x1f8f40: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1f8f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1f8f44: 0x426c0  sll         $a0, $a0, 27
    ctx->pc = 0x1f8f44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 27));
    // 0x1f8f48: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f8f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1f8f4c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1f8f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1f8f50: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1F8F50u;
    {
        const bool branch_taken_0x1f8f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8F50u;
            // 0x1f8f54: 0xace20014  sw          $v0, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8f50) {
            ctx->pc = 0x1F8FB0u;
            goto label_1f8fb0;
        }
    }
    ctx->pc = 0x1F8F58u;
label_1f8f58:
    // 0x1f8f58: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f8f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f8f5c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1f8f5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f8f60: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1F8F60u;
    {
        const bool branch_taken_0x1f8f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8F60u;
            // 0x1f8f64: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8f60) {
            ctx->pc = 0x1F8F20u;
            runtime->cooperativeGuestYield();
            goto label_1f8f20;
        }
    }
    ctx->pc = 0x1F8F68u;
label_1f8f68:
    // 0x1f8f68: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1f8f68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1f8f6c: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x1f8f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1f8f70: 0x90c4c678  lbu         $a0, -0x3988($a2)
    ctx->pc = 0x1f8f70u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294952568)));
    // 0x1f8f74: 0x3c0307ff  lui         $v1, 0x7FF
    ctx->pc = 0x1f8f74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2047 << 16));
    // 0x1f8f78: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1f8f78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1f8f7c: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1f8f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1f8f80: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f8f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1f8f84: 0x426c0  sll         $a0, $a0, 27
    ctx->pc = 0x1f8f84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 27));
    // 0x1f8f88: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1f8f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1f8f8c: 0x24a5c680  addiu       $a1, $a1, -0x3980
    ctx->pc = 0x1f8f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952576));
    // 0x1f8f90: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x1f8f90u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
    // 0x1f8f94: 0x216c2  srl         $v0, $v0, 27
    ctx->pc = 0x1f8f94u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 27));
    // 0x1f8f98: 0x90c3c678  lbu         $v1, -0x3988($a2)
    ctx->pc = 0x1f8f98u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294952568)));
    // 0x1f8f9c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f8f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f8fa0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1f8fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1f8fa4: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x1f8fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x1f8fa8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f8fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f8fac: 0xa0c3c678  sb          $v1, -0x3988($a2)
    ctx->pc = 0x1f8facu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4294952568), (uint8_t)GPR_U32(ctx, 3));
label_1f8fb0:
    // 0x1f8fb0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1f8fb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8fb4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f8fb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f8fb8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1f8fb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f8fbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f8fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f8fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8FC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8FC0u;
            // 0x1f8fc4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F8B38u: goto label_1f8b38;
            case 0x1F8B70u: goto label_1f8b70;
            case 0x1F8B80u: goto label_1f8b80;
            case 0x1F8BC8u: goto label_1f8bc8;
            case 0x1F8C00u: goto label_1f8c00;
            case 0x1F8C38u: goto label_1f8c38;
            case 0x1F8C48u: goto label_1f8c48;
            case 0x1F8C90u: goto label_1f8c90;
            case 0x1F8CC8u: goto label_1f8cc8;
            case 0x1F8D00u: goto label_1f8d00;
            case 0x1F8D10u: goto label_1f8d10;
            case 0x1F8D58u: goto label_1f8d58;
            case 0x1F8D90u: goto label_1f8d90;
            case 0x1F8DC8u: goto label_1f8dc8;
            case 0x1F8DD8u: goto label_1f8dd8;
            case 0x1F8E20u: goto label_1f8e20;
            case 0x1F8E58u: goto label_1f8e58;
            case 0x1F8E90u: goto label_1f8e90;
            case 0x1F8EA0u: goto label_1f8ea0;
            case 0x1F8EE8u: goto label_1f8ee8;
            case 0x1F8F20u: goto label_1f8f20;
            case 0x1F8F58u: goto label_1f8f58;
            case 0x1F8F68u: goto label_1f8f68;
            case 0x1F8FB0u: goto label_1f8fb0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F8FC8u;
}
