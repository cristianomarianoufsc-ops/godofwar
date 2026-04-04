#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00227A58
// Address: 0x227a58 - 0x227d70
void sub_00227A58_0x227a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227A58_0x227a58");
#endif

    ctx->pc = 0x227a58u;

    // 0x227a58: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x227a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x227a5c: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x227a5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x227a60: 0x8c44ec4c  lw          $a0, -0x13B4($v0)
    ctx->pc = 0x227a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962252)));
    // 0x227a64: 0x7fb00180  sq          $s0, 0x180($sp)
    ctx->pc = 0x227a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 16));
    // 0x227a68: 0x7fb20160  sq          $s2, 0x160($sp)
    ctx->pc = 0x227a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 18));
    // 0x227a6c: 0x7fb30150  sq          $s3, 0x150($sp)
    ctx->pc = 0x227a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 19));
    // 0x227a70: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x227a70u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x227a74: 0x7fb40140  sq          $s4, 0x140($sp)
    ctx->pc = 0x227a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 20));
    // 0x227a78: 0x7fb10170  sq          $s1, 0x170($sp)
    ctx->pc = 0x227a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 17));
    // 0x227a7c: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x227a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x227a80: 0xc04f856  jal         func_13E158
    ctx->pc = 0x227A80u;
    SET_GPR_U32(ctx, 31, 0x227A88u);
    ctx->pc = 0x227A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227A80u;
            // 0x227a84: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E158u;
    if (runtime->hasFunction(0x13E158u)) {
        auto targetFn = runtime->lookupFunction(0x13E158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227A88u; }
        if (ctx->pc != 0x227A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e158_0x13e180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227A88u; }
        if (ctx->pc != 0x227A88u) { return; }
    }
    ctx->pc = 0x227A88u;
    // 0x227a88: 0xc0913ac  jal         func_244EB0
    ctx->pc = 0x227A88u;
    SET_GPR_U32(ctx, 31, 0x227A90u);
    ctx->pc = 0x227A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227A88u;
            // 0x227a8c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x244EB0u;
    if (runtime->hasFunction(0x244EB0u)) {
        auto targetFn = runtime->lookupFunction(0x244EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227A90u; }
        if (ctx->pc != 0x227A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_244eb0_0x244ed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227A90u; }
        if (ctx->pc != 0x227A90u) { return; }
    }
    ctx->pc = 0x227A90u;
    // 0x227a90: 0x3a0a02d  daddu       $s4, $sp, $zero
    ctx->pc = 0x227a90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227a94: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x227A94u;
    SET_GPR_U32(ctx, 31, 0x227A9Cu);
    ctx->pc = 0x227A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227A94u;
            // 0x227a98: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227A9Cu; }
        if (ctx->pc != 0x227A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227A9Cu; }
        if (ctx->pc != 0x227A9Cu) { return; }
    }
    ctx->pc = 0x227A9Cu;
    // 0x227a9c: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x227A9Cu;
    SET_GPR_U32(ctx, 31, 0x227AA4u);
    ctx->pc = 0x227AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227A9Cu;
            // 0x227aa0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227AA4u; }
        if (ctx->pc != 0x227AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227AA4u; }
        if (ctx->pc != 0x227AA4u) { return; }
    }
    ctx->pc = 0x227AA4u;
    // 0x227aa4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x227aa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227aa8: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x227aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x227aac: 0x24a580a0  addiu       $a1, $a1, -0x7F60
    ctx->pc = 0x227aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934688));
    // 0x227ab0: 0xc060978  jal         func_1825E0
    ctx->pc = 0x227AB0u;
    SET_GPR_U32(ctx, 31, 0x227AB8u);
    ctx->pc = 0x227AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227AB0u;
            // 0x227ab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1825E0u;
    if (runtime->hasFunction(0x1825E0u)) {
        auto targetFn = runtime->lookupFunction(0x1825E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227AB8u; }
        if (ctx->pc != 0x227AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001825E0_0x1825e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227AB8u; }
        if (ctx->pc != 0x227AB8u) { return; }
    }
    ctx->pc = 0x227AB8u;
    // 0x227ab8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x227ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x227abc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227ac0: 0x24428928  addiu       $v0, $v0, -0x76D8
    ctx->pc = 0x227ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936872));
    // 0x227ac4: 0xc060b5a  jal         func_182D68
    ctx->pc = 0x227AC4u;
    SET_GPR_U32(ctx, 31, 0x227ACCu);
    ctx->pc = 0x227AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227AC4u;
            // 0x227ac8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182D68u;
    if (runtime->hasFunction(0x182D68u)) {
        auto targetFn = runtime->lookupFunction(0x182D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227ACCu; }
        if (ctx->pc != 0x227ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182D68_0x182d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227ACCu; }
        if (ctx->pc != 0x227ACCu) { return; }
    }
    ctx->pc = 0x227ACCu;
    // 0x227acc: 0x3c05d109  lui         $a1, 0xD109
    ctx->pc = 0x227accu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53513 << 16));
    // 0x227ad0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x227ad0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227ad4: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x227ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x227ad8: 0x34a5e694  ori         $a1, $a1, 0xE694
    ctx->pc = 0x227ad8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)59028);
    // 0x227adc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227ae0: 0xc060570  jal         func_1815C0
    ctx->pc = 0x227AE0u;
    SET_GPR_U32(ctx, 31, 0x227AE8u);
    ctx->pc = 0x227AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227AE0u;
            // 0x227ae4: 0xae5011c8  sw          $s0, 0x11C8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4552), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227AE8u; }
        if (ctx->pc != 0x227AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227AE8u; }
        if (ctx->pc != 0x227AE8u) { return; }
    }
    ctx->pc = 0x227AE8u;
    // 0x227ae8: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x227AE8u;
    SET_GPR_U32(ctx, 31, 0x227AF0u);
    ctx->pc = 0x227AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227AE8u;
            // 0x227aec: 0x8e4411c8  lw          $a0, 0x11C8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4552)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227AF0u; }
        if (ctx->pc != 0x227AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227AF0u; }
        if (ctx->pc != 0x227AF0u) { return; }
    }
    ctx->pc = 0x227AF0u;
    // 0x227af0: 0x8e4411c8  lw          $a0, 0x11C8($s2)
    ctx->pc = 0x227af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4552)));
    // 0x227af4: 0x3c0557a0  lui         $a1, 0x57A0
    ctx->pc = 0x227af4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22432 << 16));
    // 0x227af8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x227af8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227afc: 0x27a70018  addiu       $a3, $sp, 0x18
    ctx->pc = 0x227afcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x227b00: 0xc060570  jal         func_1815C0
    ctx->pc = 0x227B00u;
    SET_GPR_U32(ctx, 31, 0x227B08u);
    ctx->pc = 0x227B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227B00u;
            // 0x227b04: 0x34a52b56  ori         $a1, $a1, 0x2B56 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)11094);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227B08u; }
        if (ctx->pc != 0x227B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227B08u; }
        if (ctx->pc != 0x227B08u) { return; }
    }
    ctx->pc = 0x227B08u;
    // 0x227b08: 0x8e4411c8  lw          $a0, 0x11C8($s2)
    ctx->pc = 0x227b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4552)));
    // 0x227b0c: 0x3c057af1  lui         $a1, 0x7AF1
    ctx->pc = 0x227b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31473 << 16));
    // 0x227b10: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x227b10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227b14: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x227b14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x227b18: 0xc060570  jal         func_1815C0
    ctx->pc = 0x227B18u;
    SET_GPR_U32(ctx, 31, 0x227B20u);
    ctx->pc = 0x227B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227B18u;
            // 0x227b1c: 0x34a5a83d  ori         $a1, $a1, 0xA83D (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)43069);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227B20u; }
        if (ctx->pc != 0x227B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227B20u; }
        if (ctx->pc != 0x227B20u) { return; }
    }
    ctx->pc = 0x227B20u;
    // 0x227b20: 0x8e4411c8  lw          $a0, 0x11C8($s2)
    ctx->pc = 0x227b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4552)));
    // 0x227b24: 0x3c05472f  lui         $a1, 0x472F
    ctx->pc = 0x227b24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18223 << 16));
    // 0x227b28: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x227b28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227b2c: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x227b2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x227b30: 0xc060570  jal         func_1815C0
    ctx->pc = 0x227B30u;
    SET_GPR_U32(ctx, 31, 0x227B38u);
    ctx->pc = 0x227B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227B30u;
            // 0x227b34: 0x34a56035  ori         $a1, $a1, 0x6035 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24629);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227B38u; }
        if (ctx->pc != 0x227B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227B38u; }
        if (ctx->pc != 0x227B38u) { return; }
    }
    ctx->pc = 0x227B38u;
    // 0x227b38: 0x8e4411c8  lw          $a0, 0x11C8($s2)
    ctx->pc = 0x227b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4552)));
    // 0x227b3c: 0x3c054d77  lui         $a1, 0x4D77
    ctx->pc = 0x227b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19831 << 16));
    // 0x227b40: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x227b40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227b44: 0x27a70024  addiu       $a3, $sp, 0x24
    ctx->pc = 0x227b44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x227b48: 0xc060570  jal         func_1815C0
    ctx->pc = 0x227B48u;
    SET_GPR_U32(ctx, 31, 0x227B50u);
    ctx->pc = 0x227B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227B48u;
            // 0x227b4c: 0x34a5623f  ori         $a1, $a1, 0x623F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)25151);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227B50u; }
        if (ctx->pc != 0x227B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227B50u; }
        if (ctx->pc != 0x227B50u) { return; }
    }
    ctx->pc = 0x227B50u;
    // 0x227b50: 0x8e4411c8  lw          $a0, 0x11C8($s2)
    ctx->pc = 0x227b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4552)));
    // 0x227b54: 0x3c057413  lui         $a1, 0x7413
    ctx->pc = 0x227b54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)29715 << 16));
    // 0x227b58: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x227b58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227b5c: 0x27a70028  addiu       $a3, $sp, 0x28
    ctx->pc = 0x227b5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x227b60: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x227b60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227b64: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x227b64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227b68: 0xc06074a  jal         func_181D28
    ctx->pc = 0x227B68u;
    SET_GPR_U32(ctx, 31, 0x227B70u);
    ctx->pc = 0x227B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227B68u;
            // 0x227b6c: 0x34a58923  ori         $a1, $a1, 0x8923 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)35107);
        ctx->in_delay_slot = false;
    ctx->pc = 0x181D28u;
    if (runtime->hasFunction(0x181D28u)) {
        auto targetFn = runtime->lookupFunction(0x181D28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227B70u; }
        if (ctx->pc != 0x227B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181D28_0x181d28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227B70u; }
        if (ctx->pc != 0x227B70u) { return; }
    }
    ctx->pc = 0x227B70u;
    // 0x227b70: 0x8e4411c8  lw          $a0, 0x11C8($s2)
    ctx->pc = 0x227b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4552)));
    // 0x227b74: 0x3c0527a0  lui         $a1, 0x27A0
    ctx->pc = 0x227b74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10144 << 16));
    // 0x227b78: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x227b78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227b7c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x227b7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x227b80: 0xc060570  jal         func_1815C0
    ctx->pc = 0x227B80u;
    SET_GPR_U32(ctx, 31, 0x227B88u);
    ctx->pc = 0x227B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227B80u;
            // 0x227b84: 0x34a544dd  ori         $a1, $a1, 0x44DD (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)17629);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227B88u; }
        if (ctx->pc != 0x227B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227B88u; }
        if (ctx->pc != 0x227B88u) { return; }
    }
    ctx->pc = 0x227B88u;
    // 0x227b88: 0x8e4411c8  lw          $a0, 0x11C8($s2)
    ctx->pc = 0x227b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4552)));
    // 0x227b8c: 0x3c054af1  lui         $a1, 0x4AF1
    ctx->pc = 0x227b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19185 << 16));
    // 0x227b90: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x227b90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227b94: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x227b94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x227b98: 0xc060570  jal         func_1815C0
    ctx->pc = 0x227B98u;
    SET_GPR_U32(ctx, 31, 0x227BA0u);
    ctx->pc = 0x227B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227B98u;
            // 0x227b9c: 0x34a5c1c4  ori         $a1, $a1, 0xC1C4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)49604);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227BA0u; }
        if (ctx->pc != 0x227BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227BA0u; }
        if (ctx->pc != 0x227BA0u) { return; }
    }
    ctx->pc = 0x227BA0u;
    // 0x227ba0: 0x8e4411c8  lw          $a0, 0x11C8($s2)
    ctx->pc = 0x227ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4552)));
    // 0x227ba4: 0x3c0578b4  lui         $a1, 0x78B4
    ctx->pc = 0x227ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30900 << 16));
    // 0x227ba8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x227ba8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227bac: 0x27a70034  addiu       $a3, $sp, 0x34
    ctx->pc = 0x227bacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x227bb0: 0xc060570  jal         func_1815C0
    ctx->pc = 0x227BB0u;
    SET_GPR_U32(ctx, 31, 0x227BB8u);
    ctx->pc = 0x227BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227BB0u;
            // 0x227bb4: 0x34a507bc  ori         $a1, $a1, 0x7BC (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1980);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227BB8u; }
        if (ctx->pc != 0x227BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227BB8u; }
        if (ctx->pc != 0x227BB8u) { return; }
    }
    ctx->pc = 0x227BB8u;
    // 0x227bb8: 0x8e4411c8  lw          $a0, 0x11C8($s2)
    ctx->pc = 0x227bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4552)));
    // 0x227bbc: 0x3c05cedd  lui         $a1, 0xCEDD
    ctx->pc = 0x227bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52957 << 16));
    // 0x227bc0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x227bc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227bc4: 0x27a70038  addiu       $a3, $sp, 0x38
    ctx->pc = 0x227bc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x227bc8: 0xc060570  jal         func_1815C0
    ctx->pc = 0x227BC8u;
    SET_GPR_U32(ctx, 31, 0x227BD0u);
    ctx->pc = 0x227BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227BC8u;
            // 0x227bcc: 0x34a53738  ori         $a1, $a1, 0x3738 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)14136);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227BD0u; }
        if (ctx->pc != 0x227BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227BD0u; }
        if (ctx->pc != 0x227BD0u) { return; }
    }
    ctx->pc = 0x227BD0u;
    // 0x227bd0: 0x8e4411c8  lw          $a0, 0x11C8($s2)
    ctx->pc = 0x227bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4552)));
    // 0x227bd4: 0x3c05fcc4  lui         $a1, 0xFCC4
    ctx->pc = 0x227bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64708 << 16));
    // 0x227bd8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x227bd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227bdc: 0x27a7003c  addiu       $a3, $sp, 0x3C
    ctx->pc = 0x227bdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x227be0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x227be0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227be4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x227be4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227be8: 0xc06074a  jal         func_181D28
    ctx->pc = 0x227BE8u;
    SET_GPR_U32(ctx, 31, 0x227BF0u);
    ctx->pc = 0x227BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227BE8u;
            // 0x227bec: 0x34a5ec1c  ori         $a1, $a1, 0xEC1C (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)60444);
        ctx->in_delay_slot = false;
    ctx->pc = 0x181D28u;
    if (runtime->hasFunction(0x181D28u)) {
        auto targetFn = runtime->lookupFunction(0x181D28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227BF0u; }
        if (ctx->pc != 0x227BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181D28_0x181d28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227BF0u; }
        if (ctx->pc != 0x227BF0u) { return; }
    }
    ctx->pc = 0x227BF0u;
    // 0x227bf0: 0x8e4411c8  lw          $a0, 0x11C8($s2)
    ctx->pc = 0x227bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4552)));
    // 0x227bf4: 0x3c05158c  lui         $a1, 0x158C
    ctx->pc = 0x227bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5516 << 16));
    // 0x227bf8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x227bf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227bfc: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x227bfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x227c00: 0xc060570  jal         func_1815C0
    ctx->pc = 0x227C00u;
    SET_GPR_U32(ctx, 31, 0x227C08u);
    ctx->pc = 0x227C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227C00u;
            // 0x227c04: 0x34a5f928  ori         $a1, $a1, 0xF928 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)63784);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227C08u; }
        if (ctx->pc != 0x227C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227C08u; }
        if (ctx->pc != 0x227C08u) { return; }
    }
    ctx->pc = 0x227C08u;
    // 0x227c08: 0x8e4411c8  lw          $a0, 0x11C8($s2)
    ctx->pc = 0x227c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4552)));
    // 0x227c0c: 0x3c052ad2  lui         $a1, 0x2AD2
    ctx->pc = 0x227c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10962 << 16));
    // 0x227c10: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x227c10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227c14: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x227c14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x227c18: 0xc060570  jal         func_1815C0
    ctx->pc = 0x227C18u;
    SET_GPR_U32(ctx, 31, 0x227C20u);
    ctx->pc = 0x227C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227C18u;
            // 0x227c1c: 0x34a5dd5a  ori         $a1, $a1, 0xDD5A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)56666);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227C20u; }
        if (ctx->pc != 0x227C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227C20u; }
        if (ctx->pc != 0x227C20u) { return; }
    }
    ctx->pc = 0x227C20u;
    // 0x227c20: 0x8e4411c8  lw          $a0, 0x11C8($s2)
    ctx->pc = 0x227c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4552)));
    // 0x227c24: 0x3c050840  lui         $a1, 0x840
    ctx->pc = 0x227c24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2112 << 16));
    // 0x227c28: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x227c28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227c2c: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x227c2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x227c30: 0xc060570  jal         func_1815C0
    ctx->pc = 0x227C30u;
    SET_GPR_U32(ctx, 31, 0x227C38u);
    ctx->pc = 0x227C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227C30u;
            // 0x227c34: 0x34a54743  ori         $a1, $a1, 0x4743 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)18243);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227C38u; }
        if (ctx->pc != 0x227C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227C38u; }
        if (ctx->pc != 0x227C38u) { return; }
    }
    ctx->pc = 0x227C38u;
    // 0x227c38: 0x3c059885  lui         $a1, 0x9885
    ctx->pc = 0x227c38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)39045 << 16));
    // 0x227c3c: 0x8e4411c8  lw          $a0, 0x11C8($s2)
    ctx->pc = 0x227c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4552)));
    // 0x227c40: 0x34a51ec7  ori         $a1, $a1, 0x1EC7
    ctx->pc = 0x227c40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)7879);
    // 0x227c44: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x227c44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227c48: 0xc060570  jal         func_1815C0
    ctx->pc = 0x227C48u;
    SET_GPR_U32(ctx, 31, 0x227C50u);
    ctx->pc = 0x227C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227C48u;
            // 0x227c4c: 0x27a7004c  addiu       $a3, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227C50u; }
        if (ctx->pc != 0x227C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227C50u; }
        if (ctx->pc != 0x227C50u) { return; }
    }
    ctx->pc = 0x227C50u;
    // 0x227c50: 0x27b000b0  addiu       $s0, $sp, 0xB0
    ctx->pc = 0x227c50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x227c54: 0x0  nop
    ctx->pc = 0x227c54u;
    // NOP
label_227c58:
    // 0x227c58: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x227c58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x227c5c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x227c5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227c60: 0x24a580b0  addiu       $a1, $a1, -0x7F50
    ctx->pc = 0x227c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934704));
    // 0x227c64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227c68: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x227C68u;
    SET_GPR_U32(ctx, 31, 0x227C70u);
    ctx->pc = 0x227C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227C68u;
            // 0x227c6c: 0x24110014  addiu       $s1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227C70u; }
        if (ctx->pc != 0x227C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227C70u; }
        if (ctx->pc != 0x227C70u) { return; }
    }
    ctx->pc = 0x227C70u;
    // 0x227c70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227c74: 0xc05d5d0  jal         func_175740
    ctx->pc = 0x227C74u;
    SET_GPR_U32(ctx, 31, 0x227C7Cu);
    ctx->pc = 0x227C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227C74u;
            // 0x227c78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175740u;
    if (runtime->hasFunction(0x175740u)) {
        auto targetFn = runtime->lookupFunction(0x175740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227C7Cu; }
        if (ctx->pc != 0x227C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175740_0x175780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227C7Cu; }
        if (ctx->pc != 0x227C7Cu) { return; }
    }
    ctx->pc = 0x227C7Cu;
    // 0x227c7c: 0x2711818  mult        $v1, $s3, $s1
    ctx->pc = 0x227c7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x227c80: 0x8e4411c8  lw          $a0, 0x11C8($s2)
    ctx->pc = 0x227c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4552)));
    // 0x227c84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x227c84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227c88: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x227c88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227c8c: 0x743821  addu        $a3, $v1, $s4
    ctx->pc = 0x227c8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x227c90: 0xc060570  jal         func_1815C0
    ctx->pc = 0x227C90u;
    SET_GPR_U32(ctx, 31, 0x227C98u);
    ctx->pc = 0x227C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227C90u;
            // 0x227c94: 0x24e70058  addiu       $a3, $a3, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227C98u; }
        if (ctx->pc != 0x227C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227C98u; }
        if (ctx->pc != 0x227C98u) { return; }
    }
    ctx->pc = 0x227C98u;
    // 0x227c98: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x227c98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x227c9c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x227c9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227ca0: 0x24a580c0  addiu       $a1, $a1, -0x7F40
    ctx->pc = 0x227ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934720));
    // 0x227ca4: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x227CA4u;
    SET_GPR_U32(ctx, 31, 0x227CACu);
    ctx->pc = 0x227CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227CA4u;
            // 0x227ca8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227CACu; }
        if (ctx->pc != 0x227CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227CACu; }
        if (ctx->pc != 0x227CACu) { return; }
    }
    ctx->pc = 0x227CACu;
    // 0x227cac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227cb0: 0xc05d5d0  jal         func_175740
    ctx->pc = 0x227CB0u;
    SET_GPR_U32(ctx, 31, 0x227CB8u);
    ctx->pc = 0x227CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227CB0u;
            // 0x227cb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175740u;
    if (runtime->hasFunction(0x175740u)) {
        auto targetFn = runtime->lookupFunction(0x175740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227CB8u; }
        if (ctx->pc != 0x227CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175740_0x175780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227CB8u; }
        if (ctx->pc != 0x227CB8u) { return; }
    }
    ctx->pc = 0x227CB8u;
    // 0x227cb8: 0x2711818  mult        $v1, $s3, $s1
    ctx->pc = 0x227cb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x227cbc: 0x8e4411c8  lw          $a0, 0x11C8($s2)
    ctx->pc = 0x227cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4552)));
    // 0x227cc0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x227cc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227cc4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x227cc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227cc8: 0x743821  addu        $a3, $v1, $s4
    ctx->pc = 0x227cc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x227ccc: 0xc060570  jal         func_1815C0
    ctx->pc = 0x227CCCu;
    SET_GPR_U32(ctx, 31, 0x227CD4u);
    ctx->pc = 0x227CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227CCCu;
            // 0x227cd0: 0x24e7005c  addiu       $a3, $a3, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 92));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227CD4u; }
        if (ctx->pc != 0x227CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227CD4u; }
        if (ctx->pc != 0x227CD4u) { return; }
    }
    ctx->pc = 0x227CD4u;
    // 0x227cd4: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x227cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x227cd8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x227cd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227cdc: 0x24a580d0  addiu       $a1, $a1, -0x7F30
    ctx->pc = 0x227cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934736));
    // 0x227ce0: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x227CE0u;
    SET_GPR_U32(ctx, 31, 0x227CE8u);
    ctx->pc = 0x227CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227CE0u;
            // 0x227ce4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227CE8u; }
        if (ctx->pc != 0x227CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227CE8u; }
        if (ctx->pc != 0x227CE8u) { return; }
    }
    ctx->pc = 0x227CE8u;
    // 0x227ce8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227cec: 0xc05d5d0  jal         func_175740
    ctx->pc = 0x227CECu;
    SET_GPR_U32(ctx, 31, 0x227CF4u);
    ctx->pc = 0x227CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227CECu;
            // 0x227cf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175740u;
    if (runtime->hasFunction(0x175740u)) {
        auto targetFn = runtime->lookupFunction(0x175740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227CF4u; }
        if (ctx->pc != 0x227CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175740_0x175780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227CF4u; }
        if (ctx->pc != 0x227CF4u) { return; }
    }
    ctx->pc = 0x227CF4u;
    // 0x227cf4: 0x2711818  mult        $v1, $s3, $s1
    ctx->pc = 0x227cf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x227cf8: 0x8e4411c8  lw          $a0, 0x11C8($s2)
    ctx->pc = 0x227cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4552)));
    // 0x227cfc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x227cfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227d00: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x227d00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227d04: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x227d04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227d08: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x227d08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227d0c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x227d0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x227d10: 0x748821  addu        $s1, $v1, $s4
    ctx->pc = 0x227d10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x227d14: 0xc06074a  jal         func_181D28
    ctx->pc = 0x227D14u;
    SET_GPR_U32(ctx, 31, 0x227D1Cu);
    ctx->pc = 0x227D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227D14u;
            // 0x227d18: 0x26270060  addiu       $a3, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181D28u;
    if (runtime->hasFunction(0x181D28u)) {
        auto targetFn = runtime->lookupFunction(0x181D28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227D1Cu; }
        if (ctx->pc != 0x227D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181D28_0x181d28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227D1Cu; }
        if (ctx->pc != 0x227D1Cu) { return; }
    }
    ctx->pc = 0x227D1Cu;
    // 0x227d1c: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x227d1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x227d20: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x227D20u;
    {
        const bool branch_taken_0x227d20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x227D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227D20u;
            // 0x227d24: 0x27b000b0  addiu       $s0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227d20) {
            ctx->pc = 0x227C58u;
            runtime->cooperativeGuestYield();
            goto label_227c58;
        }
    }
    ctx->pc = 0x227D28u;
    // 0x227d28: 0xc04f860  jal         func_13E180
    ctx->pc = 0x227D28u;
    SET_GPR_U32(ctx, 31, 0x227D30u);
    ctx->pc = 0x13E180u;
    if (runtime->hasFunction(0x13E180u)) {
        auto targetFn = runtime->lookupFunction(0x13E180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227D30u; }
        if (ctx->pc != 0x227D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e180_0x13e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227D30u; }
        if (ctx->pc != 0x227D30u) { return; }
    }
    ctx->pc = 0x227D30u;
    // 0x227d30: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x227d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x227d34: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x227d34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x227d38: 0x2442ead8  addiu       $v0, $v0, -0x1528
    ctx->pc = 0x227d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961880));
    // 0x227d3c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x227D3Cu;
    {
        const bool branch_taken_0x227d3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x227D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227D3Cu;
            // 0x227d40: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227d3c) {
            ctx->pc = 0x227D4Cu;
            goto label_227d4c;
        }
    }
    ctx->pc = 0x227D44u;
    // 0x227d44: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x227D44u;
    SET_GPR_U32(ctx, 31, 0x227D4Cu);
    ctx->pc = 0x227D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227D44u;
            // 0x227d48: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227D4Cu; }
        if (ctx->pc != 0x227D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227D4Cu; }
        if (ctx->pc != 0x227D4Cu) { return; }
    }
    ctx->pc = 0x227D4Cu;
label_227d4c:
    // 0x227d4c: 0x7bb00180  lq          $s0, 0x180($sp)
    ctx->pc = 0x227d4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x227d50: 0x7bb10170  lq          $s1, 0x170($sp)
    ctx->pc = 0x227d50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x227d54: 0x7bb20160  lq          $s2, 0x160($sp)
    ctx->pc = 0x227d54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x227d58: 0x7bb30150  lq          $s3, 0x150($sp)
    ctx->pc = 0x227d58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x227d5c: 0x7bb40140  lq          $s4, 0x140($sp)
    ctx->pc = 0x227d5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x227d60: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x227d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x227d64: 0x3e00008  jr          $ra
    ctx->pc = 0x227D64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227D64u;
            // 0x227d68: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x227C58u: goto label_227c58;
            case 0x227D4Cu: goto label_227d4c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x227D6Cu;
    // 0x227d6c: 0x0  nop
    ctx->pc = 0x227d6cu;
    // NOP
}
