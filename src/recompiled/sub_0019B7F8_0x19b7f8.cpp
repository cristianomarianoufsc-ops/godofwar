#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019B7F8
// Address: 0x19b7f8 - 0x19ba30
void sub_0019B7F8_0x19b7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019B7F8_0x19b7f8");
#endif

    ctx->pc = 0x19b7f8u;

    // 0x19b7f8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x19b7f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x19b7fc: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x19b7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x19b800: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19b800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b804: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x19b804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x19b808: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x19b808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x19b80c: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x19b80cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x19b810: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x19b810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x19b814: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x19b814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x19b818: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x19b818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x19b81c: 0xc090c7a  jal         func_2431E8
    ctx->pc = 0x19B81Cu;
    SET_GPR_U32(ctx, 31, 0x19B824u);
    ctx->pc = 0x19B820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B81Cu;
            // 0x19b820: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2431E8u;
    if (runtime->hasFunction(0x2431E8u)) {
        auto targetFn = runtime->lookupFunction(0x2431E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B824u; }
        if (ctx->pc != 0x19B824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2431e8_0x243210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B824u; }
        if (ctx->pc != 0x19B824u) { return; }
    }
    ctx->pc = 0x19B824u;
    // 0x19b824: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x19B824u;
    SET_GPR_U32(ctx, 31, 0x19B82Cu);
    ctx->pc = 0x19B828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B824u;
            // 0x19b828: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B82Cu; }
        if (ctx->pc != 0x19B82Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B82Cu; }
        if (ctx->pc != 0x19B82Cu) { return; }
    }
    ctx->pc = 0x19B82Cu;
    // 0x19b82c: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x19B82Cu;
    SET_GPR_U32(ctx, 31, 0x19B834u);
    ctx->pc = 0x19B830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B82Cu;
            // 0x19b830: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B834u; }
        if (ctx->pc != 0x19B834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B834u; }
        if (ctx->pc != 0x19B834u) { return; }
    }
    ctx->pc = 0x19B834u;
    // 0x19b834: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19b834u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b838: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x19b838u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x19b83c: 0x24a53a48  addiu       $a1, $a1, 0x3A48
    ctx->pc = 0x19b83cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14920));
    // 0x19b840: 0xc060978  jal         func_1825E0
    ctx->pc = 0x19B840u;
    SET_GPR_U32(ctx, 31, 0x19B848u);
    ctx->pc = 0x19B844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B840u;
            // 0x19b844: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1825E0u;
    if (runtime->hasFunction(0x1825E0u)) {
        auto targetFn = runtime->lookupFunction(0x1825E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B848u; }
        if (ctx->pc != 0x19B848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001825E0_0x1825e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B848u; }
        if (ctx->pc != 0x19B848u) { return; }
    }
    ctx->pc = 0x19B848u;
    // 0x19b848: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x19b848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x19b84c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b84cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b850: 0x2442a3f0  addiu       $v0, $v0, -0x5C10
    ctx->pc = 0x19b850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943728));
    // 0x19b854: 0xc060b5a  jal         func_182D68
    ctx->pc = 0x19B854u;
    SET_GPR_U32(ctx, 31, 0x19B85Cu);
    ctx->pc = 0x19B858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B854u;
            // 0x19b858: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182D68u;
    if (runtime->hasFunction(0x182D68u)) {
        auto targetFn = runtime->lookupFunction(0x182D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B85Cu; }
        if (ctx->pc != 0x19B85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182D68_0x182d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B85Cu; }
        if (ctx->pc != 0x19B85Cu) { return; }
    }
    ctx->pc = 0x19B85Cu;
    // 0x19b85c: 0xae30c9bc  sw          $s0, -0x3644($s1)
    ctx->pc = 0x19b85cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294953404), GPR_U32(ctx, 16));
    // 0x19b860: 0x27b30018  addiu       $s3, $sp, 0x18
    ctx->pc = 0x19b860u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x19b864: 0x27b20048  addiu       $s2, $sp, 0x48
    ctx->pc = 0x19b864u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x19b868: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x19b868u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x19b86c: 0x0  nop
    ctx->pc = 0x19b86cu;
    // NOP
label_19b870:
    // 0x19b870: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19b870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b874: 0xc05d5d0  jal         func_175740
    ctx->pc = 0x19B874u;
    SET_GPR_U32(ctx, 31, 0x19B87Cu);
    ctx->pc = 0x19B878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B874u;
            // 0x19b878: 0x24843a58  addiu       $a0, $a0, 0x3A58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175740u;
    if (runtime->hasFunction(0x175740u)) {
        auto targetFn = runtime->lookupFunction(0x175740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B87Cu; }
        if (ctx->pc != 0x19B87Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175740_0x175780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B87Cu; }
        if (ctx->pc != 0x19B87Cu) { return; }
    }
    ctx->pc = 0x19B87Cu;
    // 0x19b87c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19b87cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b880: 0xc050e68  jal         func_1439A0
    ctx->pc = 0x19B880u;
    SET_GPR_U32(ctx, 31, 0x19B888u);
    ctx->pc = 0x19B884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B880u;
            // 0x19b884: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1439A0u;
    if (runtime->hasFunction(0x1439A0u)) {
        auto targetFn = runtime->lookupFunction(0x1439A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B888u; }
        if (ctx->pc != 0x19B888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1439a0_0x143a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B888u; }
        if (ctx->pc != 0x19B888u) { return; }
    }
    ctx->pc = 0x19B888u;
    // 0x19b888: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19b888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b88c: 0xc05d5d0  jal         func_175740
    ctx->pc = 0x19B88Cu;
    SET_GPR_U32(ctx, 31, 0x19B894u);
    ctx->pc = 0x19B890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B88Cu;
            // 0x19b890: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175740u;
    if (runtime->hasFunction(0x175740u)) {
        auto targetFn = runtime->lookupFunction(0x175740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B894u; }
        if (ctx->pc != 0x19B894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175740_0x175780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B894u; }
        if (ctx->pc != 0x19B894u) { return; }
    }
    ctx->pc = 0x19B894u;
    // 0x19b894: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19b894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b898: 0x8e24c9bc  lw          $a0, -0x3644($s1)
    ctx->pc = 0x19b898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953404)));
    // 0x19b89c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19b89cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b8a0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x19b8a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b8a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19b8a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b8a8: 0xc06063a  jal         func_1818E8
    ctx->pc = 0x19B8A8u;
    SET_GPR_U32(ctx, 31, 0x19B8B0u);
    ctx->pc = 0x19B8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B8A8u;
            // 0x19b8ac: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818E8u;
    if (runtime->hasFunction(0x1818E8u)) {
        auto targetFn = runtime->lookupFunction(0x1818E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B8B0u; }
        if (ctx->pc != 0x19B8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001818E8_0x1818e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B8B0u; }
        if (ctx->pc != 0x19B8B0u) { return; }
    }
    ctx->pc = 0x19B8B0u;
    // 0x19b8b0: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x19b8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x19b8b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19b8b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b8b8: 0xc05d5d0  jal         func_175740
    ctx->pc = 0x19B8B8u;
    SET_GPR_U32(ctx, 31, 0x19B8C0u);
    ctx->pc = 0x19B8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B8B8u;
            // 0x19b8bc: 0x24843a60  addiu       $a0, $a0, 0x3A60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175740u;
    if (runtime->hasFunction(0x175740u)) {
        auto targetFn = runtime->lookupFunction(0x175740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B8C0u; }
        if (ctx->pc != 0x19B8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175740_0x175780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B8C0u; }
        if (ctx->pc != 0x19B8C0u) { return; }
    }
    ctx->pc = 0x19B8C0u;
    // 0x19b8c0: 0x29d3821  addu        $a3, $s4, $sp
    ctx->pc = 0x19b8c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
    // 0x19b8c4: 0x8e24c9bc  lw          $a0, -0x3644($s1)
    ctx->pc = 0x19b8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953404)));
    // 0x19b8c8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19b8c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b8cc: 0x24e70060  addiu       $a3, $a3, 0x60
    ctx->pc = 0x19b8ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
    // 0x19b8d0: 0xc0606c2  jal         func_181B08
    ctx->pc = 0x19B8D0u;
    SET_GPR_U32(ctx, 31, 0x19B8D8u);
    ctx->pc = 0x19B8D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B8D0u;
            // 0x19b8d4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181B08u;
    if (runtime->hasFunction(0x181B08u)) {
        auto targetFn = runtime->lookupFunction(0x181B08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B8D8u; }
        if (ctx->pc != 0x19B8D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181B08_0x181b08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B8D8u; }
        if (ctx->pc != 0x19B8D8u) { return; }
    }
    ctx->pc = 0x19B8D8u;
    // 0x19b8d8: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x19b8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x19b8dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19b8dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b8e0: 0xc05d5d0  jal         func_175740
    ctx->pc = 0x19B8E0u;
    SET_GPR_U32(ctx, 31, 0x19B8E8u);
    ctx->pc = 0x19B8E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B8E0u;
            // 0x19b8e4: 0x24843a68  addiu       $a0, $a0, 0x3A68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175740u;
    if (runtime->hasFunction(0x175740u)) {
        auto targetFn = runtime->lookupFunction(0x175740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B8E8u; }
        if (ctx->pc != 0x19B8E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175740_0x175780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B8E8u; }
        if (ctx->pc != 0x19B8E8u) { return; }
    }
    ctx->pc = 0x19B8E8u;
    // 0x19b8e8: 0x8e24c9bc  lw          $a0, -0x3644($s1)
    ctx->pc = 0x19b8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953404)));
    // 0x19b8ec: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x19b8ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b8f0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19b8f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b8f4: 0xc060570  jal         func_1815C0
    ctx->pc = 0x19B8F4u;
    SET_GPR_U32(ctx, 31, 0x19B8FCu);
    ctx->pc = 0x19B8F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B8F4u;
            // 0x19b8f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B8FCu; }
        if (ctx->pc != 0x19B8FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B8FCu; }
        if (ctx->pc != 0x19B8FCu) { return; }
    }
    ctx->pc = 0x19B8FCu;
    // 0x19b8fc: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x19b8fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x19b900: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x19b900u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x19b904: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19b904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b908: 0xc05d5d0  jal         func_175740
    ctx->pc = 0x19B908u;
    SET_GPR_U32(ctx, 31, 0x19B910u);
    ctx->pc = 0x19B90Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B908u;
            // 0x19b90c: 0x24843a78  addiu       $a0, $a0, 0x3A78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14968));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175740u;
    if (runtime->hasFunction(0x175740u)) {
        auto targetFn = runtime->lookupFunction(0x175740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B910u; }
        if (ctx->pc != 0x19B910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175740_0x175780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B910u; }
        if (ctx->pc != 0x19B910u) { return; }
    }
    ctx->pc = 0x19B910u;
    // 0x19b910: 0x29d3821  addu        $a3, $s4, $sp
    ctx->pc = 0x19b910u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
    // 0x19b914: 0x8e24c9bc  lw          $a0, -0x3644($s1)
    ctx->pc = 0x19b914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953404)));
    // 0x19b918: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19b918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b91c: 0x24e7006c  addiu       $a3, $a3, 0x6C
    ctx->pc = 0x19b91cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 108));
    // 0x19b920: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19b920u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b924: 0xc0606c2  jal         func_181B08
    ctx->pc = 0x19B924u;
    SET_GPR_U32(ctx, 31, 0x19B92Cu);
    ctx->pc = 0x19B928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B924u;
            // 0x19b928: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181B08u;
    if (runtime->hasFunction(0x181B08u)) {
        auto targetFn = runtime->lookupFunction(0x181B08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B92Cu; }
        if (ctx->pc != 0x19B92Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181B08_0x181b08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B92Cu; }
        if (ctx->pc != 0x19B92Cu) { return; }
    }
    ctx->pc = 0x19B92Cu;
    // 0x19b92c: 0x2a82000a  slti        $v0, $s4, 0xA
    ctx->pc = 0x19b92cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x19b930: 0x5440ffcf  bnel        $v0, $zero, . + 4 + (-0x31 << 2)
    ctx->pc = 0x19B930u;
    {
        const bool branch_taken_0x19b930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b930) {
            ctx->pc = 0x19B934u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19B930u;
            // 0x19b934: 0x3c04002b  lui         $a0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19B870u;
            runtime->cooperativeGuestYield();
            goto label_19b870;
        }
    }
    ctx->pc = 0x19B938u;
    // 0x19b938: 0x8e24c9bc  lw          $a0, -0x3644($s1)
    ctx->pc = 0x19b938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953404)));
    // 0x19b93c: 0x3c05eb83  lui         $a1, 0xEB83
    ctx->pc = 0x19b93cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60291 << 16));
    // 0x19b940: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19b940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b944: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x19b944u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x19b948: 0xc06067e  jal         func_1819F8
    ctx->pc = 0x19B948u;
    SET_GPR_U32(ctx, 31, 0x19B950u);
    ctx->pc = 0x19B94Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B948u;
            // 0x19b94c: 0x34a516bf  ori         $a1, $a1, 0x16BF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5823);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1819F8u;
    if (runtime->hasFunction(0x1819F8u)) {
        auto targetFn = runtime->lookupFunction(0x1819F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B950u; }
        if (ctx->pc != 0x19B950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001819F8_0x1819f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B950u; }
        if (ctx->pc != 0x19B950u) { return; }
    }
    ctx->pc = 0x19B950u;
    // 0x19b950: 0x8e24c9bc  lw          $a0, -0x3644($s1)
    ctx->pc = 0x19b950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953404)));
    // 0x19b954: 0x3c051bef  lui         $a1, 0x1BEF
    ctx->pc = 0x19b954u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7151 << 16));
    // 0x19b958: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19b958u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b95c: 0x27a7006a  addiu       $a3, $sp, 0x6A
    ctx->pc = 0x19b95cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 106));
    // 0x19b960: 0xc0606c2  jal         func_181B08
    ctx->pc = 0x19B960u;
    SET_GPR_U32(ctx, 31, 0x19B968u);
    ctx->pc = 0x19B964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B960u;
            // 0x19b964: 0x34a57071  ori         $a1, $a1, 0x7071 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)28785);
        ctx->in_delay_slot = false;
    ctx->pc = 0x181B08u;
    if (runtime->hasFunction(0x181B08u)) {
        auto targetFn = runtime->lookupFunction(0x181B08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B968u; }
        if (ctx->pc != 0x19B968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181B08_0x181b08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B968u; }
        if (ctx->pc != 0x19B968u) { return; }
    }
    ctx->pc = 0x19B968u;
    // 0x19b968: 0x8e24c9bc  lw          $a0, -0x3644($s1)
    ctx->pc = 0x19b968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953404)));
    // 0x19b96c: 0x3c053d23  lui         $a1, 0x3D23
    ctx->pc = 0x19b96cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15651 << 16));
    // 0x19b970: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19b970u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b974: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x19b974u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19b978: 0xc060570  jal         func_1815C0
    ctx->pc = 0x19B978u;
    SET_GPR_U32(ctx, 31, 0x19B980u);
    ctx->pc = 0x19B97Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B978u;
            // 0x19b97c: 0x34a5ce1e  ori         $a1, $a1, 0xCE1E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52766);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B980u; }
        if (ctx->pc != 0x19B980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B980u; }
        if (ctx->pc != 0x19B980u) { return; }
    }
    ctx->pc = 0x19B980u;
    // 0x19b980: 0x8e24c9bc  lw          $a0, -0x3644($s1)
    ctx->pc = 0x19b980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953404)));
    // 0x19b984: 0x3c05f919  lui         $a1, 0xF919
    ctx->pc = 0x19b984u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63769 << 16));
    // 0x19b988: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19b988u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b98c: 0x27a70076  addiu       $a3, $sp, 0x76
    ctx->pc = 0x19b98cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 118));
    // 0x19b990: 0xc0606c2  jal         func_181B08
    ctx->pc = 0x19B990u;
    SET_GPR_U32(ctx, 31, 0x19B998u);
    ctx->pc = 0x19B994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B990u;
            // 0x19b994: 0x34a5b6fa  ori         $a1, $a1, 0xB6FA (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46842);
        ctx->in_delay_slot = false;
    ctx->pc = 0x181B08u;
    if (runtime->hasFunction(0x181B08u)) {
        auto targetFn = runtime->lookupFunction(0x181B08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B998u; }
        if (ctx->pc != 0x19B998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181B08_0x181b08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B998u; }
        if (ctx->pc != 0x19B998u) { return; }
    }
    ctx->pc = 0x19B998u;
    // 0x19b998: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x19B998u;
    SET_GPR_U32(ctx, 31, 0x19B9A0u);
    ctx->pc = 0x19B99Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B998u;
            // 0x19b99c: 0x8e24c9bc  lw          $a0, -0x3644($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953404)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B9A0u; }
        if (ctx->pc != 0x19B9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B9A0u; }
        if (ctx->pc != 0x19B9A0u) { return; }
    }
    ctx->pc = 0x19B9A0u;
    // 0x19b9a0: 0x8e24c9bc  lw          $a0, -0x3644($s1)
    ctx->pc = 0x19b9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953404)));
    // 0x19b9a4: 0x3c05eb83  lui         $a1, 0xEB83
    ctx->pc = 0x19b9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60291 << 16));
    // 0x19b9a8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19b9a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b9ac: 0x27a7005e  addiu       $a3, $sp, 0x5E
    ctx->pc = 0x19b9acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 94));
    // 0x19b9b0: 0xc06067e  jal         func_1819F8
    ctx->pc = 0x19B9B0u;
    SET_GPR_U32(ctx, 31, 0x19B9B8u);
    ctx->pc = 0x19B9B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B9B0u;
            // 0x19b9b4: 0x34a516c0  ori         $a1, $a1, 0x16C0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5824);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1819F8u;
    if (runtime->hasFunction(0x1819F8u)) {
        auto targetFn = runtime->lookupFunction(0x1819F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B9B8u; }
        if (ctx->pc != 0x19B9B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001819F8_0x1819f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B9B8u; }
        if (ctx->pc != 0x19B9B8u) { return; }
    }
    ctx->pc = 0x19B9B8u;
    // 0x19b9b8: 0x8e24c9bc  lw          $a0, -0x3644($s1)
    ctx->pc = 0x19b9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953404)));
    // 0x19b9bc: 0x3c052b70  lui         $a1, 0x2B70
    ctx->pc = 0x19b9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)11120 << 16));
    // 0x19b9c0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19b9c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b9c4: 0x27a7006b  addiu       $a3, $sp, 0x6B
    ctx->pc = 0x19b9c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 107));
    // 0x19b9c8: 0xc0606c2  jal         func_181B08
    ctx->pc = 0x19B9C8u;
    SET_GPR_U32(ctx, 31, 0x19B9D0u);
    ctx->pc = 0x19B9CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B9C8u;
            // 0x19b9cc: 0x34a5ee72  ori         $a1, $a1, 0xEE72 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61042);
        ctx->in_delay_slot = false;
    ctx->pc = 0x181B08u;
    if (runtime->hasFunction(0x181B08u)) {
        auto targetFn = runtime->lookupFunction(0x181B08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B9D0u; }
        if (ctx->pc != 0x19B9D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181B08_0x181b08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B9D0u; }
        if (ctx->pc != 0x19B9D0u) { return; }
    }
    ctx->pc = 0x19B9D0u;
    // 0x19b9d0: 0x8e24c9bc  lw          $a0, -0x3644($s1)
    ctx->pc = 0x19b9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953404)));
    // 0x19b9d4: 0x3c054e2f  lui         $a1, 0x4E2F
    ctx->pc = 0x19b9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20015 << 16));
    // 0x19b9d8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19b9d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b9dc: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x19b9dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x19b9e0: 0xc060570  jal         func_1815C0
    ctx->pc = 0x19B9E0u;
    SET_GPR_U32(ctx, 31, 0x19B9E8u);
    ctx->pc = 0x19B9E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B9E0u;
            // 0x19b9e4: 0x34a5091f  ori         $a1, $a1, 0x91F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2335);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B9E8u; }
        if (ctx->pc != 0x19B9E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B9E8u; }
        if (ctx->pc != 0x19B9E8u) { return; }
    }
    ctx->pc = 0x19B9E8u;
    // 0x19b9e8: 0x8e24c9bc  lw          $a0, -0x3644($s1)
    ctx->pc = 0x19b9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953404)));
    // 0x19b9ec: 0x3c05e69d  lui         $a1, 0xE69D
    ctx->pc = 0x19b9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59037 << 16));
    // 0x19b9f0: 0x34a573fb  ori         $a1, $a1, 0x73FB
    ctx->pc = 0x19b9f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)29691);
    // 0x19b9f4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19b9f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b9f8: 0xc0606c2  jal         func_181B08
    ctx->pc = 0x19B9F8u;
    SET_GPR_U32(ctx, 31, 0x19BA00u);
    ctx->pc = 0x19B9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B9F8u;
            // 0x19b9fc: 0x27a70077  addiu       $a3, $sp, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 119));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181B08u;
    if (runtime->hasFunction(0x181B08u)) {
        auto targetFn = runtime->lookupFunction(0x181B08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BA00u; }
        if (ctx->pc != 0x19BA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181B08_0x181b08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BA00u; }
        if (ctx->pc != 0x19BA00u) { return; }
    }
    ctx->pc = 0x19BA00u;
    // 0x19ba00: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19ba00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ba04: 0xc090c62  jal         func_243188
    ctx->pc = 0x19BA04u;
    SET_GPR_U32(ctx, 31, 0x19BA0Cu);
    ctx->pc = 0x19BA08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BA04u;
            // 0x19ba08: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243188u;
    if (runtime->hasFunction(0x243188u)) {
        auto targetFn = runtime->lookupFunction(0x243188u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BA0Cu; }
        if (ctx->pc != 0x19BA0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243188_0x2431e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BA0Cu; }
        if (ctx->pc != 0x19BA0Cu) { return; }
    }
    ctx->pc = 0x19BA0Cu;
    // 0x19ba0c: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x19ba0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x19ba10: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x19ba10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x19ba14: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x19ba14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x19ba18: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x19ba18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x19ba1c: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x19ba1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19ba20: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x19ba20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19ba24: 0x3e00008  jr          $ra
    ctx->pc = 0x19BA24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BA28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BA24u;
            // 0x19ba28: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19B870u: goto label_19b870;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19BA2Cu;
    // 0x19ba2c: 0x0  nop
    ctx->pc = 0x19ba2cu;
    // NOP
}
