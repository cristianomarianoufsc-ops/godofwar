#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00195ED8
// Address: 0x195ed8 - 0x196268
void sub_00195ED8_0x195ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00195ED8_0x195ed8");
#endif

    ctx->pc = 0x195ed8u;

    // 0x195ed8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x195ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x195edc: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x195edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x195ee0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x195ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x195ee4: 0x245236d0  addiu       $s2, $v0, 0x36D0
    ctx->pc = 0x195ee4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 14032));
    // 0x195ee8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x195ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x195eec: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x195eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x195ef0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x195ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195ef4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x195ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x195ef8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x195ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x195efc: 0xc05f9ae  jal         func_17E6B8
    ctx->pc = 0x195EFCu;
    SET_GPR_U32(ctx, 31, 0x195F04u);
    ctx->pc = 0x195F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195EFCu;
            // 0x195f00: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E6B8u;
    if (runtime->hasFunction(0x17E6B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E6B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195F04u; }
        if (ctx->pc != 0x195F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e6b8_0x17e6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195F04u; }
        if (ctx->pc != 0x195F04u) { return; }
    }
    ctx->pc = 0x195F04u;
    // 0x195f04: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x195f04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x195f08: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x195f08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x195f0c: 0x24a536e8  addiu       $a1, $a1, 0x36E8
    ctx->pc = 0x195f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14056));
    // 0x195f10: 0x24c6c950  addiu       $a2, $a2, -0x36B0
    ctx->pc = 0x195f10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953296));
    // 0x195f14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x195f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195f18: 0xc05f836  jal         func_17E0D8
    ctx->pc = 0x195F18u;
    SET_GPR_U32(ctx, 31, 0x195F20u);
    ctx->pc = 0x195F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195F18u;
            // 0x195f1c: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0D8u;
    if (runtime->hasFunction(0x17E0D8u)) {
        auto targetFn = runtime->lookupFunction(0x17E0D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195F20u; }
        if (ctx->pc != 0x195F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e0d8_0x17e170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195F20u; }
        if (ctx->pc != 0x195F20u) { return; }
    }
    ctx->pc = 0x195F20u;
    // 0x195f20: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x195f20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x195f24: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x195f24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x195f28: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x195f28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x195f2c: 0x24a536f8  addiu       $a1, $a1, 0x36F8
    ctx->pc = 0x195f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14072));
    // 0x195f30: 0x24c6c968  addiu       $a2, $a2, -0x3698
    ctx->pc = 0x195f30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953320));
    // 0x195f34: 0xc05f836  jal         func_17E0D8
    ctx->pc = 0x195F34u;
    SET_GPR_U32(ctx, 31, 0x195F3Cu);
    ctx->pc = 0x195F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195F34u;
            // 0x195f38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0D8u;
    if (runtime->hasFunction(0x17E0D8u)) {
        auto targetFn = runtime->lookupFunction(0x17E0D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195F3Cu; }
        if (ctx->pc != 0x195F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e0d8_0x17e170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195F3Cu; }
        if (ctx->pc != 0x195F3Cu) { return; }
    }
    ctx->pc = 0x195F3Cu;
    // 0x195f3c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x195f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x195f40: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x195f40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x195f44: 0x24a53708  addiu       $a1, $a1, 0x3708
    ctx->pc = 0x195f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14088));
    // 0x195f48: 0x24c6c984  addiu       $a2, $a2, -0x367C
    ctx->pc = 0x195f48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953348));
    // 0x195f4c: 0xc05f7bc  jal         func_17DEF0
    ctx->pc = 0x195F4Cu;
    SET_GPR_U32(ctx, 31, 0x195F54u);
    ctx->pc = 0x195F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195F4Cu;
            // 0x195f50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DEF0u;
    if (runtime->hasFunction(0x17DEF0u)) {
        auto targetFn = runtime->lookupFunction(0x17DEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195F54u; }
        if (ctx->pc != 0x195F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DEF0_0x17def0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195F54u; }
        if (ctx->pc != 0x195F54u) { return; }
    }
    ctx->pc = 0x195F54u;
    // 0x195f54: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x195f54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x195f58: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x195f58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x195f5c: 0x24a53718  addiu       $a1, $a1, 0x3718
    ctx->pc = 0x195f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14104));
    // 0x195f60: 0x24c6c986  addiu       $a2, $a2, -0x367A
    ctx->pc = 0x195f60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953350));
    // 0x195f64: 0xc05f7bc  jal         func_17DEF0
    ctx->pc = 0x195F64u;
    SET_GPR_U32(ctx, 31, 0x195F6Cu);
    ctx->pc = 0x195F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195F64u;
            // 0x195f68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DEF0u;
    if (runtime->hasFunction(0x17DEF0u)) {
        auto targetFn = runtime->lookupFunction(0x17DEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195F6Cu; }
        if (ctx->pc != 0x195F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DEF0_0x17def0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195F6Cu; }
        if (ctx->pc != 0x195F6Cu) { return; }
    }
    ctx->pc = 0x195F6Cu;
    // 0x195f6c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x195f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x195f70: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x195f70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x195f74: 0x24a53730  addiu       $a1, $a1, 0x3730
    ctx->pc = 0x195f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14128));
    // 0x195f78: 0x24c6c980  addiu       $a2, $a2, -0x3680
    ctx->pc = 0x195f78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953344));
    // 0x195f7c: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x195F7Cu;
    SET_GPR_U32(ctx, 31, 0x195F84u);
    ctx->pc = 0x195F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195F7Cu;
            // 0x195f80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195F84u; }
        if (ctx->pc != 0x195F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195F84u; }
        if (ctx->pc != 0x195F84u) { return; }
    }
    ctx->pc = 0x195F84u;
    // 0x195f84: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x195f84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x195f88: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x195f88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x195f8c: 0x24a53740  addiu       $a1, $a1, 0x3740
    ctx->pc = 0x195f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14144));
    // 0x195f90: 0x24c6c988  addiu       $a2, $a2, -0x3678
    ctx->pc = 0x195f90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953352));
    // 0x195f94: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x195F94u;
    SET_GPR_U32(ctx, 31, 0x195F9Cu);
    ctx->pc = 0x195F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195F94u;
            // 0x195f98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195F9Cu; }
        if (ctx->pc != 0x195F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195F9Cu; }
        if (ctx->pc != 0x195F9Cu) { return; }
    }
    ctx->pc = 0x195F9Cu;
    // 0x195f9c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x195f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x195fa0: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x195fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x195fa4: 0x24a53750  addiu       $a1, $a1, 0x3750
    ctx->pc = 0x195fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14160));
    // 0x195fa8: 0x24c6c98c  addiu       $a2, $a2, -0x3674
    ctx->pc = 0x195fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953356));
    // 0x195fac: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x195FACu;
    SET_GPR_U32(ctx, 31, 0x195FB4u);
    ctx->pc = 0x195FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195FACu;
            // 0x195fb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195FB4u; }
        if (ctx->pc != 0x195FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195FB4u; }
        if (ctx->pc != 0x195FB4u) { return; }
    }
    ctx->pc = 0x195FB4u;
    // 0x195fb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x195fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_195fb8:
    // 0x195fb8: 0xc05f94a  jal         func_17E528
    ctx->pc = 0x195FB8u;
    SET_GPR_U32(ctx, 31, 0x195FC0u);
    ctx->pc = 0x195FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195FB8u;
            // 0x195fbc: 0x24110060  addiu       $s1, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E528u;
    if (runtime->hasFunction(0x17E528u)) {
        auto targetFn = runtime->lookupFunction(0x17E528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195FC0u; }
        if (ctx->pc != 0x195FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e528_0x17e530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195FC0u; }
        if (ctx->pc != 0x195FC0u) { return; }
    }
    ctx->pc = 0x195FC0u;
    // 0x195fc0: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x195fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x195fc4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x195fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195fc8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x195fc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195fcc: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x195FCCu;
    SET_GPR_U32(ctx, 31, 0x195FD4u);
    ctx->pc = 0x195FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195FCCu;
            // 0x195fd0: 0x24a53760  addiu       $a1, $a1, 0x3760 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195FD4u; }
        if (ctx->pc != 0x195FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195FD4u; }
        if (ctx->pc != 0x195FD4u) { return; }
    }
    ctx->pc = 0x195FD4u;
    // 0x195fd4: 0x2713018  mult        $a2, $s3, $s1
    ctx->pc = 0x195fd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x195fd8: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x195fd8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x195fdc: 0x2610e040  addiu       $s0, $s0, -0x1FC0
    ctx->pc = 0x195fdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959168));
    // 0x195fe0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x195fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195fe4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x195fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195fe8: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x195FE8u;
    SET_GPR_U32(ctx, 31, 0x195FF0u);
    ctx->pc = 0x195FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195FE8u;
            // 0x195fec: 0xd03021  addu        $a2, $a2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195FF0u; }
        if (ctx->pc != 0x195FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195FF0u; }
        if (ctx->pc != 0x195FF0u) { return; }
    }
    ctx->pc = 0x195FF0u;
    // 0x195ff0: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x195ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x195ff4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x195ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195ff8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x195ff8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195ffc: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x195FFCu;
    SET_GPR_U32(ctx, 31, 0x196004u);
    ctx->pc = 0x196000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195FFCu;
            // 0x196000: 0x24a53778  addiu       $a1, $a1, 0x3778 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196004u; }
        if (ctx->pc != 0x196004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196004u; }
        if (ctx->pc != 0x196004u) { return; }
    }
    ctx->pc = 0x196004u;
    // 0x196004: 0x2711018  mult        $v0, $s3, $s1
    ctx->pc = 0x196004u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x196008: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x196008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x19600c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19600cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196010: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x196010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196014: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x196014u;
    SET_GPR_U32(ctx, 31, 0x19601Cu);
    ctx->pc = 0x196018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196014u;
            // 0x196018: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19601Cu; }
        if (ctx->pc != 0x19601Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19601Cu; }
        if (ctx->pc != 0x19601Cu) { return; }
    }
    ctx->pc = 0x19601Cu;
    // 0x19601c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x19601cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x196020: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x196020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196024: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x196024u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196028: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x196028u;
    SET_GPR_U32(ctx, 31, 0x196030u);
    ctx->pc = 0x19602Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196028u;
            // 0x19602c: 0x24a53790  addiu       $a1, $a1, 0x3790 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196030u; }
        if (ctx->pc != 0x196030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196030u; }
        if (ctx->pc != 0x196030u) { return; }
    }
    ctx->pc = 0x196030u;
    // 0x196030: 0x2711018  mult        $v0, $s3, $s1
    ctx->pc = 0x196030u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x196034: 0x26060004  addiu       $a2, $s0, 0x4
    ctx->pc = 0x196034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x196038: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x196038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19603c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19603cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196040: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x196040u;
    SET_GPR_U32(ctx, 31, 0x196048u);
    ctx->pc = 0x196044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196040u;
            // 0x196044: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196048u; }
        if (ctx->pc != 0x196048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196048u; }
        if (ctx->pc != 0x196048u) { return; }
    }
    ctx->pc = 0x196048u;
    // 0x196048: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x196048u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x19604c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19604cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196050: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x196050u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196054: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x196054u;
    SET_GPR_U32(ctx, 31, 0x19605Cu);
    ctx->pc = 0x196058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196054u;
            // 0x196058: 0x24a537a8  addiu       $a1, $a1, 0x37A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19605Cu; }
        if (ctx->pc != 0x19605Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19605Cu; }
        if (ctx->pc != 0x19605Cu) { return; }
    }
    ctx->pc = 0x19605Cu;
    // 0x19605c: 0x2711018  mult        $v0, $s3, $s1
    ctx->pc = 0x19605cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x196060: 0x2606000c  addiu       $a2, $s0, 0xC
    ctx->pc = 0x196060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x196064: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x196064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196068: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x196068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19606c: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x19606Cu;
    SET_GPR_U32(ctx, 31, 0x196074u);
    ctx->pc = 0x196070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19606Cu;
            // 0x196070: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196074u; }
        if (ctx->pc != 0x196074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196074u; }
        if (ctx->pc != 0x196074u) { return; }
    }
    ctx->pc = 0x196074u;
    // 0x196074: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x196074u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x196078: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x196078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19607c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x19607cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196080: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x196080u;
    SET_GPR_U32(ctx, 31, 0x196088u);
    ctx->pc = 0x196084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196080u;
            // 0x196084: 0x24a537b8  addiu       $a1, $a1, 0x37B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196088u; }
        if (ctx->pc != 0x196088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196088u; }
        if (ctx->pc != 0x196088u) { return; }
    }
    ctx->pc = 0x196088u;
    // 0x196088: 0x2711018  mult        $v0, $s3, $s1
    ctx->pc = 0x196088u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19608c: 0x2606002c  addiu       $a2, $s0, 0x2C
    ctx->pc = 0x19608cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x196090: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x196090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196094: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x196094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196098: 0xc05f794  jal         func_17DE50
    ctx->pc = 0x196098u;
    SET_GPR_U32(ctx, 31, 0x1960A0u);
    ctx->pc = 0x19609Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196098u;
            // 0x19609c: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DE50u;
    if (runtime->hasFunction(0x17DE50u)) {
        auto targetFn = runtime->lookupFunction(0x17DE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1960A0u; }
        if (ctx->pc != 0x1960A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DE50_0x17de50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1960A0u; }
        if (ctx->pc != 0x1960A0u) { return; }
    }
    ctx->pc = 0x1960A0u;
    // 0x1960a0: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1960a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1960a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1960a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1960a8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1960a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1960ac: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x1960ACu;
    SET_GPR_U32(ctx, 31, 0x1960B4u);
    ctx->pc = 0x1960B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1960ACu;
            // 0x1960b0: 0x24a537d0  addiu       $a1, $a1, 0x37D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1960B4u; }
        if (ctx->pc != 0x1960B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1960B4u; }
        if (ctx->pc != 0x1960B4u) { return; }
    }
    ctx->pc = 0x1960B4u;
    // 0x1960b4: 0x2718818  mult        $s1, $s3, $s1
    ctx->pc = 0x1960b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x1960b8: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x1960b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1960bc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1960bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1960c0: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x1960c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1960c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1960c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1960c8: 0xc05f836  jal         func_17E0D8
    ctx->pc = 0x1960C8u;
    SET_GPR_U32(ctx, 31, 0x1960D0u);
    ctx->pc = 0x1960CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1960C8u;
            // 0x1960cc: 0x2263021  addu        $a2, $s1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0D8u;
    if (runtime->hasFunction(0x17E0D8u)) {
        auto targetFn = runtime->lookupFunction(0x17E0D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1960D0u; }
        if (ctx->pc != 0x1960D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e0d8_0x17e170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1960D0u; }
        if (ctx->pc != 0x1960D0u) { return; }
    }
    ctx->pc = 0x1960D0u;
    // 0x1960d0: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1960d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1960d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1960d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1960d8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1960d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1960dc: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x1960DCu;
    SET_GPR_U32(ctx, 31, 0x1960E4u);
    ctx->pc = 0x1960E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1960DCu;
            // 0x1960e0: 0x24a537e0  addiu       $a1, $a1, 0x37E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1960E4u; }
        if (ctx->pc != 0x1960E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1960E4u; }
        if (ctx->pc != 0x1960E4u) { return; }
    }
    ctx->pc = 0x1960E4u;
    // 0x1960e4: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x1960e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1960e8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1960e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1960ec: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x1960ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x1960f0: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1960F0u;
    SET_GPR_U32(ctx, 31, 0x1960F8u);
    ctx->pc = 0x1960F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1960F0u;
            // 0x1960f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1960F8u; }
        if (ctx->pc != 0x1960F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1960F8u; }
        if (ctx->pc != 0x1960F8u) { return; }
    }
    ctx->pc = 0x1960F8u;
    // 0x1960f8: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1960f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1960fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1960fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196100: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x196100u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196104: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x196104u;
    SET_GPR_U32(ctx, 31, 0x19610Cu);
    ctx->pc = 0x196108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196104u;
            // 0x196108: 0x24a537f8  addiu       $a1, $a1, 0x37F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19610Cu; }
        if (ctx->pc != 0x19610Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19610Cu; }
        if (ctx->pc != 0x19610Cu) { return; }
    }
    ctx->pc = 0x19610Cu;
    // 0x19610c: 0x26060018  addiu       $a2, $s0, 0x18
    ctx->pc = 0x19610cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x196110: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x196110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196114: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x196114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x196118: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x196118u;
    SET_GPR_U32(ctx, 31, 0x196120u);
    ctx->pc = 0x19611Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196118u;
            // 0x19611c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196120u; }
        if (ctx->pc != 0x196120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196120u; }
        if (ctx->pc != 0x196120u) { return; }
    }
    ctx->pc = 0x196120u;
    // 0x196120: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x196120u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x196124: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x196124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196128: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x196128u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19612c: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x19612Cu;
    SET_GPR_U32(ctx, 31, 0x196134u);
    ctx->pc = 0x196130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19612Cu;
            // 0x196130: 0x24a53818  addiu       $a1, $a1, 0x3818 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196134u; }
        if (ctx->pc != 0x196134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196134u; }
        if (ctx->pc != 0x196134u) { return; }
    }
    ctx->pc = 0x196134u;
    // 0x196134: 0x26060014  addiu       $a2, $s0, 0x14
    ctx->pc = 0x196134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x196138: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x196138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19613c: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x19613cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x196140: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x196140u;
    SET_GPR_U32(ctx, 31, 0x196148u);
    ctx->pc = 0x196144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196140u;
            // 0x196144: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196148u; }
        if (ctx->pc != 0x196148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196148u; }
        if (ctx->pc != 0x196148u) { return; }
    }
    ctx->pc = 0x196148u;
    // 0x196148: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x196148u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x19614c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19614cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196150: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x196150u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196154: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x196154u;
    SET_GPR_U32(ctx, 31, 0x19615Cu);
    ctx->pc = 0x196158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196154u;
            // 0x196158: 0x24a53838  addiu       $a1, $a1, 0x3838 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19615Cu; }
        if (ctx->pc != 0x19615Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19615Cu; }
        if (ctx->pc != 0x19615Cu) { return; }
    }
    ctx->pc = 0x19615Cu;
    // 0x19615c: 0x2606001c  addiu       $a2, $s0, 0x1C
    ctx->pc = 0x19615cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x196160: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x196160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196164: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x196164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x196168: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x196168u;
    SET_GPR_U32(ctx, 31, 0x196170u);
    ctx->pc = 0x19616Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196168u;
            // 0x19616c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196170u; }
        if (ctx->pc != 0x196170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196170u; }
        if (ctx->pc != 0x196170u) { return; }
    }
    ctx->pc = 0x196170u;
    // 0x196170: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x196170u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x196174: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x196174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196178: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x196178u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19617c: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x19617Cu;
    SET_GPR_U32(ctx, 31, 0x196184u);
    ctx->pc = 0x196180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19617Cu;
            // 0x196180: 0x24a53850  addiu       $a1, $a1, 0x3850 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196184u; }
        if (ctx->pc != 0x196184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196184u; }
        if (ctx->pc != 0x196184u) { return; }
    }
    ctx->pc = 0x196184u;
    // 0x196184: 0x2606002e  addiu       $a2, $s0, 0x2E
    ctx->pc = 0x196184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 46));
    // 0x196188: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x196188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19618c: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x19618cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x196190: 0xc05f794  jal         func_17DE50
    ctx->pc = 0x196190u;
    SET_GPR_U32(ctx, 31, 0x196198u);
    ctx->pc = 0x196194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196190u;
            // 0x196194: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DE50u;
    if (runtime->hasFunction(0x17DE50u)) {
        auto targetFn = runtime->lookupFunction(0x17DE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196198u; }
        if (ctx->pc != 0x196198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DE50_0x17de50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196198u; }
        if (ctx->pc != 0x196198u) { return; }
    }
    ctx->pc = 0x196198u;
    // 0x196198: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x196198u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x19619c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19619cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1961a0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1961a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1961a4: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x1961A4u;
    SET_GPR_U32(ctx, 31, 0x1961ACu);
    ctx->pc = 0x1961A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1961A4u;
            // 0x1961a8: 0x24a53870  addiu       $a1, $a1, 0x3870 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1961ACu; }
        if (ctx->pc != 0x1961ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1961ACu; }
        if (ctx->pc != 0x1961ACu) { return; }
    }
    ctx->pc = 0x1961ACu;
    // 0x1961ac: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x1961acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1961b0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1961b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1961b4: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x1961b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x1961b8: 0xc05f82a  jal         func_17E0A8
    ctx->pc = 0x1961B8u;
    SET_GPR_U32(ctx, 31, 0x1961C0u);
    ctx->pc = 0x1961BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1961B8u;
            // 0x1961bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0A8u;
    if (runtime->hasFunction(0x17E0A8u)) {
        auto targetFn = runtime->lookupFunction(0x17E0A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1961C0u; }
        if (ctx->pc != 0x1961C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E0A8_0x17e0a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1961C0u; }
        if (ctx->pc != 0x1961C0u) { return; }
    }
    ctx->pc = 0x1961C0u;
    // 0x1961c0: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1961c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1961c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1961c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1961c8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1961c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1961cc: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x1961CCu;
    SET_GPR_U32(ctx, 31, 0x1961D4u);
    ctx->pc = 0x1961D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1961CCu;
            // 0x1961d0: 0x24a53890  addiu       $a1, $a1, 0x3890 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1961D4u; }
        if (ctx->pc != 0x1961D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1961D4u; }
        if (ctx->pc != 0x1961D4u) { return; }
    }
    ctx->pc = 0x1961D4u;
    // 0x1961d4: 0x26060048  addiu       $a2, $s0, 0x48
    ctx->pc = 0x1961d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x1961d8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1961d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1961dc: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x1961dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1961e0: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x1961e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x1961e4: 0xc05f836  jal         func_17E0D8
    ctx->pc = 0x1961E4u;
    SET_GPR_U32(ctx, 31, 0x1961ECu);
    ctx->pc = 0x1961E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1961E4u;
            // 0x1961e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0D8u;
    if (runtime->hasFunction(0x17E0D8u)) {
        auto targetFn = runtime->lookupFunction(0x17E0D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1961ECu; }
        if (ctx->pc != 0x1961ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e0d8_0x17e170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1961ECu; }
        if (ctx->pc != 0x1961ECu) { return; }
    }
    ctx->pc = 0x1961ECu;
    // 0x1961ec: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1961ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1961f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1961f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1961f4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1961f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1961f8: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x1961F8u;
    SET_GPR_U32(ctx, 31, 0x196200u);
    ctx->pc = 0x1961FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1961F8u;
            // 0x1961fc: 0x24a538a8  addiu       $a1, $a1, 0x38A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196200u; }
        if (ctx->pc != 0x196200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196200u; }
        if (ctx->pc != 0x196200u) { return; }
    }
    ctx->pc = 0x196200u;
    // 0x196200: 0x26060024  addiu       $a2, $s0, 0x24
    ctx->pc = 0x196200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x196204: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x196204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196208: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x196208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x19620c: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x19620Cu;
    SET_GPR_U32(ctx, 31, 0x196214u);
    ctx->pc = 0x196210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19620Cu;
            // 0x196210: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196214u; }
        if (ctx->pc != 0x196214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196214u; }
        if (ctx->pc != 0x196214u) { return; }
    }
    ctx->pc = 0x196214u;
    // 0x196214: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x196214u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x196218: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x196218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19621c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x19621cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196220: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x196220u;
    SET_GPR_U32(ctx, 31, 0x196228u);
    ctx->pc = 0x196224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196220u;
            // 0x196224: 0x24a538c0  addiu       $a1, $a1, 0x38C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196228u; }
        if (ctx->pc != 0x196228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196228u; }
        if (ctx->pc != 0x196228u) { return; }
    }
    ctx->pc = 0x196228u;
    // 0x196228: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x196228u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x19622c: 0x26100028  addiu       $s0, $s0, 0x28
    ctx->pc = 0x19622cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x196230: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x196230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196234: 0x2303021  addu        $a2, $s1, $s0
    ctx->pc = 0x196234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x196238: 0xc05f82a  jal         func_17E0A8
    ctx->pc = 0x196238u;
    SET_GPR_U32(ctx, 31, 0x196240u);
    ctx->pc = 0x19623Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196238u;
            // 0x19623c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0A8u;
    if (runtime->hasFunction(0x17E0A8u)) {
        auto targetFn = runtime->lookupFunction(0x17E0A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196240u; }
        if (ctx->pc != 0x196240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E0A8_0x17e0a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196240u; }
        if (ctx->pc != 0x196240u) { return; }
    }
    ctx->pc = 0x196240u;
    // 0x196240: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x196240u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x196244: 0x1440ff5c  bnez        $v0, . + 4 + (-0xA4 << 2)
    ctx->pc = 0x196244u;
    {
        const bool branch_taken_0x196244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x196248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196244u;
            // 0x196248: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196244) {
            ctx->pc = 0x195FB8u;
            runtime->cooperativeGuestYield();
            goto label_195fb8;
        }
    }
    ctx->pc = 0x19624Cu;
    // 0x19624c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x19624cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x196250: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x196250u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x196254: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x196254u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196258: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x196258u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19625c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19625cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x196260: 0x3e00008  jr          $ra
    ctx->pc = 0x196260u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196260u;
            // 0x196264: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x195FB8u: goto label_195fb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x196268u;
}
