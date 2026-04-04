#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00192BF8
// Address: 0x192bf8 - 0x192d20
void sub_00192BF8_0x192bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192BF8_0x192bf8");
#endif

    ctx->pc = 0x192bf8u;

    // 0x192bf8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x192bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x192bfc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x192bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x192c00: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x192c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c04: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x192c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x192c08: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x192c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x192c0c: 0xc090de6  jal         func_243798
    ctx->pc = 0x192C0Cu;
    SET_GPR_U32(ctx, 31, 0x192C14u);
    ctx->pc = 0x192C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192C0Cu;
            // 0x192c10: 0x3c11002a  lui         $s1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243798u;
    if (runtime->hasFunction(0x243798u)) {
        auto targetFn = runtime->lookupFunction(0x243798u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192C14u; }
        if (ctx->pc != 0x192C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243798_0x2437c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192C14u; }
        if (ctx->pc != 0x192C14u) { return; }
    }
    ctx->pc = 0x192C14u;
    // 0x192c14: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x192C14u;
    SET_GPR_U32(ctx, 31, 0x192C1Cu);
    ctx->pc = 0x192C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192C14u;
            // 0x192c18: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192C1Cu; }
        if (ctx->pc != 0x192C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192C1Cu; }
        if (ctx->pc != 0x192C1Cu) { return; }
    }
    ctx->pc = 0x192C1Cu;
    // 0x192c1c: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x192C1Cu;
    SET_GPR_U32(ctx, 31, 0x192C24u);
    ctx->pc = 0x192C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192C1Cu;
            // 0x192c20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192C24u; }
        if (ctx->pc != 0x192C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192C24u; }
        if (ctx->pc != 0x192C24u) { return; }
    }
    ctx->pc = 0x192C24u;
    // 0x192c24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x192c24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c28: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x192c28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x192c2c: 0x24a53348  addiu       $a1, $a1, 0x3348
    ctx->pc = 0x192c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13128));
    // 0x192c30: 0xc060978  jal         func_1825E0
    ctx->pc = 0x192C30u;
    SET_GPR_U32(ctx, 31, 0x192C38u);
    ctx->pc = 0x192C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192C30u;
            // 0x192c34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1825E0u;
    if (runtime->hasFunction(0x1825E0u)) {
        auto targetFn = runtime->lookupFunction(0x1825E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192C38u; }
        if (ctx->pc != 0x192C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001825E0_0x1825e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192C38u; }
        if (ctx->pc != 0x192C38u) { return; }
    }
    ctx->pc = 0x192C38u;
    // 0x192c38: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x192c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x192c3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x192c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c40: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x192c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x192c44: 0xc060b5a  jal         func_182D68
    ctx->pc = 0x192C44u;
    SET_GPR_U32(ctx, 31, 0x192C4Cu);
    ctx->pc = 0x192C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192C44u;
            // 0x192c48: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182D68u;
    if (runtime->hasFunction(0x182D68u)) {
        auto targetFn = runtime->lookupFunction(0x182D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192C4Cu; }
        if (ctx->pc != 0x192C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182D68_0x182d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192C4Cu; }
        if (ctx->pc != 0x192C4Cu) { return; }
    }
    ctx->pc = 0x192C4Cu;
    // 0x192c4c: 0x3c0514c1  lui         $a1, 0x14C1
    ctx->pc = 0x192c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5313 << 16));
    // 0x192c50: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x192c50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c54: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x192c54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x192c58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x192c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c5c: 0xae30c908  sw          $s0, -0x36F8($s1)
    ctx->pc = 0x192c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294953224), GPR_U32(ctx, 16));
    // 0x192c60: 0xc060570  jal         func_1815C0
    ctx->pc = 0x192C60u;
    SET_GPR_U32(ctx, 31, 0x192C68u);
    ctx->pc = 0x192C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192C60u;
            // 0x192c64: 0x34a58fc7  ori         $a1, $a1, 0x8FC7 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)36807);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192C68u; }
        if (ctx->pc != 0x192C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192C68u; }
        if (ctx->pc != 0x192C68u) { return; }
    }
    ctx->pc = 0x192C68u;
    // 0x192c68: 0x8e24c908  lw          $a0, -0x36F8($s1)
    ctx->pc = 0x192c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953224)));
    // 0x192c6c: 0x3c05a15a  lui         $a1, 0xA15A
    ctx->pc = 0x192c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41306 << 16));
    // 0x192c70: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x192c70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c74: 0x27a70024  addiu       $a3, $sp, 0x24
    ctx->pc = 0x192c74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x192c78: 0xc060570  jal         func_1815C0
    ctx->pc = 0x192C78u;
    SET_GPR_U32(ctx, 31, 0x192C80u);
    ctx->pc = 0x192C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192C78u;
            // 0x192c7c: 0x34a5704c  ori         $a1, $a1, 0x704C (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)28748);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192C80u; }
        if (ctx->pc != 0x192C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192C80u; }
        if (ctx->pc != 0x192C80u) { return; }
    }
    ctx->pc = 0x192C80u;
    // 0x192c80: 0x8e24c908  lw          $a0, -0x36F8($s1)
    ctx->pc = 0x192c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953224)));
    // 0x192c84: 0x3c05d5e5  lui         $a1, 0xD5E5
    ctx->pc = 0x192c84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54757 << 16));
    // 0x192c88: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x192c88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c8c: 0x27a70018  addiu       $a3, $sp, 0x18
    ctx->pc = 0x192c8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x192c90: 0xc060570  jal         func_1815C0
    ctx->pc = 0x192C90u;
    SET_GPR_U32(ctx, 31, 0x192C98u);
    ctx->pc = 0x192C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192C90u;
            // 0x192c94: 0x34a50958  ori         $a1, $a1, 0x958 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2392);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192C98u; }
        if (ctx->pc != 0x192C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192C98u; }
        if (ctx->pc != 0x192C98u) { return; }
    }
    ctx->pc = 0x192C98u;
    // 0x192c98: 0x8e24c908  lw          $a0, -0x36F8($s1)
    ctx->pc = 0x192c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953224)));
    // 0x192c9c: 0x3c059372  lui         $a1, 0x9372
    ctx->pc = 0x192c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37746 << 16));
    // 0x192ca0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x192ca0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192ca4: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x192ca4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x192ca8: 0xc060570  jal         func_1815C0
    ctx->pc = 0x192CA8u;
    SET_GPR_U32(ctx, 31, 0x192CB0u);
    ctx->pc = 0x192CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192CA8u;
            // 0x192cac: 0x34a5e259  ori         $a1, $a1, 0xE259 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)57945);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192CB0u; }
        if (ctx->pc != 0x192CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192CB0u; }
        if (ctx->pc != 0x192CB0u) { return; }
    }
    ctx->pc = 0x192CB0u;
    // 0x192cb0: 0x8e24c908  lw          $a0, -0x36F8($s1)
    ctx->pc = 0x192cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953224)));
    // 0x192cb4: 0x3c05ed26  lui         $a1, 0xED26
    ctx->pc = 0x192cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60710 << 16));
    // 0x192cb8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x192cb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192cbc: 0x27a70028  addiu       $a3, $sp, 0x28
    ctx->pc = 0x192cbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x192cc0: 0xc060570  jal         func_1815C0
    ctx->pc = 0x192CC0u;
    SET_GPR_U32(ctx, 31, 0x192CC8u);
    ctx->pc = 0x192CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192CC0u;
            // 0x192cc4: 0x34a5746a  ori         $a1, $a1, 0x746A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)29802);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192CC8u; }
        if (ctx->pc != 0x192CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192CC8u; }
        if (ctx->pc != 0x192CC8u) { return; }
    }
    ctx->pc = 0x192CC8u;
    // 0x192cc8: 0x8e24c908  lw          $a0, -0x36F8($s1)
    ctx->pc = 0x192cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953224)));
    // 0x192ccc: 0x3c05a556  lui         $a1, 0xA556
    ctx->pc = 0x192cccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42326 << 16));
    // 0x192cd0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x192cd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192cd4: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x192cd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x192cd8: 0x34a53949  ori         $a1, $a1, 0x3949
    ctx->pc = 0x192cd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)14665);
    // 0x192cdc: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x192CDCu;
    SET_GPR_U32(ctx, 31, 0x192CE4u);
    ctx->pc = 0x192CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192CDCu;
            // 0x192ce0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192CE4u; }
        if (ctx->pc != 0x192CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192CE4u; }
        if (ctx->pc != 0x192CE4u) { return; }
    }
    ctx->pc = 0x192CE4u;
    // 0x192ce4: 0x8e24c908  lw          $a0, -0x36F8($s1)
    ctx->pc = 0x192ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953224)));
    // 0x192ce8: 0x3c05a63c  lui         $a1, 0xA63C
    ctx->pc = 0x192ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42556 << 16));
    // 0x192cec: 0x34a5d52c  ori         $a1, $a1, 0xD52C
    ctx->pc = 0x192cecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54572);
    // 0x192cf0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x192cf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192cf4: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x192cf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x192cf8: 0xc06081c  jal         func_182070
    ctx->pc = 0x192CF8u;
    SET_GPR_U32(ctx, 31, 0x192D00u);
    ctx->pc = 0x192CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192CF8u;
            // 0x192cfc: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192D00u; }
        if (ctx->pc != 0x192D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192D00u; }
        if (ctx->pc != 0x192D00u) { return; }
    }
    ctx->pc = 0x192D00u;
    // 0x192d00: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x192d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192d04: 0xc090dce  jal         func_243738
    ctx->pc = 0x192D04u;
    SET_GPR_U32(ctx, 31, 0x192D0Cu);
    ctx->pc = 0x192D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192D04u;
            // 0x192d08: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243738u;
    if (runtime->hasFunction(0x243738u)) {
        auto targetFn = runtime->lookupFunction(0x243738u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192D0Cu; }
        if (ctx->pc != 0x192D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00243738_0x243738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192D0Cu; }
        if (ctx->pc != 0x192D0Cu) { return; }
    }
    ctx->pc = 0x192D0Cu;
    // 0x192d0c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x192d0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x192d10: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x192d10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x192d14: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x192d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x192d18: 0x3e00008  jr          $ra
    ctx->pc = 0x192D18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192D18u;
            // 0x192d1c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x192D20u;
}
