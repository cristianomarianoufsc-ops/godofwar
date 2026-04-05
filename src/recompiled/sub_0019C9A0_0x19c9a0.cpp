#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019C9A0
// Address: 0x19c9a0 - 0x19cb60
void sub_0019C9A0_0x19c9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C9A0_0x19c9a0");
#endif

    ctx->pc = 0x19c9a0u;

    // 0x19c9a0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x19c9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x19c9a4: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x19c9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x19c9a8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x19c9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x19c9ac: 0x24533c40  addiu       $s3, $v0, 0x3C40
    ctx->pc = 0x19c9acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 15424));
    // 0x19c9b0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x19c9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x19c9b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19c9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c9b8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x19c9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x19c9bc: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x19c9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x19c9c0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19c9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19c9c4: 0xc05f9ae  jal         func_17E6B8
    ctx->pc = 0x19C9C4u;
    SET_GPR_U32(ctx, 31, 0x19C9CCu);
    ctx->pc = 0x19C9C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C9C4u;
            // 0x19c9c8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E6B8u;
    if (runtime->hasFunction(0x17E6B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E6B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C9CCu; }
        if (ctx->pc != 0x19C9CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e6b8_0x17e6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C9CCu; }
        if (ctx->pc != 0x19C9CCu) { return; }
    }
    ctx->pc = 0x19C9CCu;
    // 0x19c9cc: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x19c9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x19c9d0: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x19c9d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x19c9d4: 0x24a533f0  addiu       $a1, $a1, 0x33F0
    ctx->pc = 0x19c9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13296));
    // 0x19c9d8: 0x24c6c9c4  addiu       $a2, $a2, -0x363C
    ctx->pc = 0x19c9d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953412));
    // 0x19c9dc: 0xc05f76c  jal         func_17DDB0
    ctx->pc = 0x19C9DCu;
    SET_GPR_U32(ctx, 31, 0x19C9E4u);
    ctx->pc = 0x19C9E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C9DCu;
            // 0x19c9e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DDB0u;
    if (runtime->hasFunction(0x17DDB0u)) {
        auto targetFn = runtime->lookupFunction(0x17DDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C9E4u; }
        if (ctx->pc != 0x19C9E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DDB0_0x17ddb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C9E4u; }
        if (ctx->pc != 0x19C9E4u) { return; }
    }
    ctx->pc = 0x19C9E4u;
    // 0x19c9e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19c9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19c9e8:
    // 0x19c9e8: 0xc05f94a  jal         func_17E528
    ctx->pc = 0x19C9E8u;
    SET_GPR_U32(ctx, 31, 0x19C9F0u);
    ctx->pc = 0x19C9ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C9E8u;
            // 0x19c9ec: 0x128940  sll         $s1, $s2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E528u;
    if (runtime->hasFunction(0x17E528u)) {
        auto targetFn = runtime->lookupFunction(0x17E528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C9F0u; }
        if (ctx->pc != 0x19C9F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e528_0x17e530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C9F0u; }
        if (ctx->pc != 0x19C9F0u) { return; }
    }
    ctx->pc = 0x19C9F0u;
    // 0x19c9f0: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x19c9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x19c9f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19c9f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c9f8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x19c9f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c9fc: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x19C9FCu;
    SET_GPR_U32(ctx, 31, 0x19CA04u);
    ctx->pc = 0x19CA00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C9FCu;
            // 0x19ca00: 0x24a53c58  addiu       $a1, $a1, 0x3C58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CA04u; }
        if (ctx->pc != 0x19CA04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CA04u; }
        if (ctx->pc != 0x19CA04u) { return; }
    }
    ctx->pc = 0x19CA04u;
    // 0x19ca04: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x19ca04u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x19ca08: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19ca08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ca0c: 0x2610e1e8  addiu       $s0, $s0, -0x1E18
    ctx->pc = 0x19ca0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959592));
    // 0x19ca10: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19ca10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ca14: 0xc05f76c  jal         func_17DDB0
    ctx->pc = 0x19CA14u;
    SET_GPR_U32(ctx, 31, 0x19CA1Cu);
    ctx->pc = 0x19CA18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CA14u;
            // 0x19ca18: 0x2303021  addu        $a2, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DDB0u;
    if (runtime->hasFunction(0x17DDB0u)) {
        auto targetFn = runtime->lookupFunction(0x17DDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CA1Cu; }
        if (ctx->pc != 0x19CA1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DDB0_0x17ddb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CA1Cu; }
        if (ctx->pc != 0x19CA1Cu) { return; }
    }
    ctx->pc = 0x19CA1Cu;
    // 0x19ca1c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x19ca1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x19ca20: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19ca20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ca24: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x19ca24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ca28: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x19CA28u;
    SET_GPR_U32(ctx, 31, 0x19CA30u);
    ctx->pc = 0x19CA2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CA28u;
            // 0x19ca2c: 0x24a534a8  addiu       $a1, $a1, 0x34A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CA30u; }
        if (ctx->pc != 0x19CA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CA30u; }
        if (ctx->pc != 0x19CA30u) { return; }
    }
    ctx->pc = 0x19CA30u;
    // 0x19ca30: 0x26060004  addiu       $a2, $s0, 0x4
    ctx->pc = 0x19ca30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x19ca34: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19ca34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ca38: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x19ca38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x19ca3c: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x19CA3Cu;
    SET_GPR_U32(ctx, 31, 0x19CA44u);
    ctx->pc = 0x19CA40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CA3Cu;
            // 0x19ca40: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CA44u; }
        if (ctx->pc != 0x19CA44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CA44u; }
        if (ctx->pc != 0x19CA44u) { return; }
    }
    ctx->pc = 0x19CA44u;
    // 0x19ca44: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x19ca44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x19ca48: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19ca48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ca4c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x19ca4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ca50: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x19CA50u;
    SET_GPR_U32(ctx, 31, 0x19CA58u);
    ctx->pc = 0x19CA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CA50u;
            // 0x19ca54: 0x24a53c70  addiu       $a1, $a1, 0x3C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CA58u; }
        if (ctx->pc != 0x19CA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CA58u; }
        if (ctx->pc != 0x19CA58u) { return; }
    }
    ctx->pc = 0x19CA58u;
    // 0x19ca58: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x19ca58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x19ca5c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19ca5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ca60: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x19ca60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x19ca64: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x19CA64u;
    SET_GPR_U32(ctx, 31, 0x19CA6Cu);
    ctx->pc = 0x19CA68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CA64u;
            // 0x19ca68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CA6Cu; }
        if (ctx->pc != 0x19CA6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CA6Cu; }
        if (ctx->pc != 0x19CA6Cu) { return; }
    }
    ctx->pc = 0x19CA6Cu;
    // 0x19ca6c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x19ca6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x19ca70: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19ca70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ca74: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x19ca74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ca78: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x19CA78u;
    SET_GPR_U32(ctx, 31, 0x19CA80u);
    ctx->pc = 0x19CA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CA78u;
            // 0x19ca7c: 0x24a53c88  addiu       $a1, $a1, 0x3C88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CA80u; }
        if (ctx->pc != 0x19CA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CA80u; }
        if (ctx->pc != 0x19CA80u) { return; }
    }
    ctx->pc = 0x19CA80u;
    // 0x19ca80: 0x2606000c  addiu       $a2, $s0, 0xC
    ctx->pc = 0x19ca80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x19ca84: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19ca84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ca88: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x19ca88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x19ca8c: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x19CA8Cu;
    SET_GPR_U32(ctx, 31, 0x19CA94u);
    ctx->pc = 0x19CA90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CA8Cu;
            // 0x19ca90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CA94u; }
        if (ctx->pc != 0x19CA94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CA94u; }
        if (ctx->pc != 0x19CA94u) { return; }
    }
    ctx->pc = 0x19CA94u;
    // 0x19ca94: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x19ca94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x19ca98: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19ca98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ca9c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x19ca9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19caa0: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x19CAA0u;
    SET_GPR_U32(ctx, 31, 0x19CAA8u);
    ctx->pc = 0x19CAA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CAA0u;
            // 0x19caa4: 0x24a53ca0  addiu       $a1, $a1, 0x3CA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CAA8u; }
        if (ctx->pc != 0x19CAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CAA8u; }
        if (ctx->pc != 0x19CAA8u) { return; }
    }
    ctx->pc = 0x19CAA8u;
    // 0x19caa8: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x19caa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x19caac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19caacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cab0: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x19cab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x19cab4: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x19CAB4u;
    SET_GPR_U32(ctx, 31, 0x19CABCu);
    ctx->pc = 0x19CAB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CAB4u;
            // 0x19cab8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CABCu; }
        if (ctx->pc != 0x19CABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CABCu; }
        if (ctx->pc != 0x19CABCu) { return; }
    }
    ctx->pc = 0x19CABCu;
    // 0x19cabc: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x19cabcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x19cac0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19cac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cac4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x19cac4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cac8: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x19CAC8u;
    SET_GPR_U32(ctx, 31, 0x19CAD0u);
    ctx->pc = 0x19CACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CAC8u;
            // 0x19cacc: 0x24a53cb8  addiu       $a1, $a1, 0x3CB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CAD0u; }
        if (ctx->pc != 0x19CAD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CAD0u; }
        if (ctx->pc != 0x19CAD0u) { return; }
    }
    ctx->pc = 0x19CAD0u;
    // 0x19cad0: 0x26060014  addiu       $a2, $s0, 0x14
    ctx->pc = 0x19cad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x19cad4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19cad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cad8: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x19cad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x19cadc: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x19CADCu;
    SET_GPR_U32(ctx, 31, 0x19CAE4u);
    ctx->pc = 0x19CAE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CADCu;
            // 0x19cae0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CAE4u; }
        if (ctx->pc != 0x19CAE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CAE4u; }
        if (ctx->pc != 0x19CAE4u) { return; }
    }
    ctx->pc = 0x19CAE4u;
    // 0x19cae4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x19cae4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x19cae8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19cae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19caec: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x19caecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19caf0: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x19CAF0u;
    SET_GPR_U32(ctx, 31, 0x19CAF8u);
    ctx->pc = 0x19CAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CAF0u;
            // 0x19caf4: 0x24a53cd0  addiu       $a1, $a1, 0x3CD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15568));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CAF8u; }
        if (ctx->pc != 0x19CAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CAF8u; }
        if (ctx->pc != 0x19CAF8u) { return; }
    }
    ctx->pc = 0x19CAF8u;
    // 0x19caf8: 0x26060018  addiu       $a2, $s0, 0x18
    ctx->pc = 0x19caf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x19cafc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19cafcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cb00: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x19cb00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x19cb04: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x19CB04u;
    SET_GPR_U32(ctx, 31, 0x19CB0Cu);
    ctx->pc = 0x19CB08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CB04u;
            // 0x19cb08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CB0Cu; }
        if (ctx->pc != 0x19CB0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CB0Cu; }
        if (ctx->pc != 0x19CB0Cu) { return; }
    }
    ctx->pc = 0x19CB0Cu;
    // 0x19cb0c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x19cb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x19cb10: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19cb10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cb14: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x19cb14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cb18: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x19CB18u;
    SET_GPR_U32(ctx, 31, 0x19CB20u);
    ctx->pc = 0x19CB1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CB18u;
            // 0x19cb1c: 0x24a53ce8  addiu       $a1, $a1, 0x3CE8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CB20u; }
        if (ctx->pc != 0x19CB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CB20u; }
        if (ctx->pc != 0x19CB20u) { return; }
    }
    ctx->pc = 0x19CB20u;
    // 0x19cb20: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x19cb20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x19cb24: 0x2610001c  addiu       $s0, $s0, 0x1C
    ctx->pc = 0x19cb24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x19cb28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19cb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cb2c: 0x2303021  addu        $a2, $s1, $s0
    ctx->pc = 0x19cb2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x19cb30: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x19CB30u;
    SET_GPR_U32(ctx, 31, 0x19CB38u);
    ctx->pc = 0x19CB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CB30u;
            // 0x19cb34: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CB38u; }
        if (ctx->pc != 0x19CB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CB38u; }
        if (ctx->pc != 0x19CB38u) { return; }
    }
    ctx->pc = 0x19CB38u;
    // 0x19cb38: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x19cb38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x19cb3c: 0x1440ffaa  bnez        $v0, . + 4 + (-0x56 << 2)
    ctx->pc = 0x19CB3Cu;
    {
        const bool branch_taken_0x19cb3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19CB40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CB3Cu;
            // 0x19cb40: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cb3c) {
            ctx->pc = 0x19C9E8u;
            runtime->cooperativeGuestYield();
            goto label_19c9e8;
        }
    }
    ctx->pc = 0x19CB44u;
    // 0x19cb44: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x19cb44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19cb48: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x19cb48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19cb4c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x19cb4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19cb50: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x19cb50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19cb54: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19cb54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19cb58: 0x3e00008  jr          $ra
    ctx->pc = 0x19CB58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CB5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CB58u;
            // 0x19cb5c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19C9E8u: goto label_19c9e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19CB60u;
}
