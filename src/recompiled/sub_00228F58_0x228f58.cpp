#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00228F58
// Address: 0x228f58 - 0x2290d8
void sub_00228F58_0x228f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228F58_0x228f58");
#endif

    ctx->pc = 0x228f58u;

    // 0x228f58: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x228f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x228f5c: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x228f5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x228f60: 0x8c44ec4c  lw          $a0, -0x13B4($v0)
    ctx->pc = 0x228f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962252)));
    // 0x228f64: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x228f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x228f68: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x228f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x228f6c: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x228f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x228f70: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x228f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x228f74: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x228f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x228f78: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x228f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x228f7c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x228f7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228f80: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x228f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x228f84: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x228f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x228f88: 0xc04f856  jal         func_13E158
    ctx->pc = 0x228F88u;
    SET_GPR_U32(ctx, 31, 0x228F90u);
    ctx->pc = 0x228F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228F88u;
            // 0x228f8c: 0x3c150033  lui         $s5, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E158u;
    if (runtime->hasFunction(0x13E158u)) {
        auto targetFn = runtime->lookupFunction(0x13E158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228F90u; }
        if (ctx->pc != 0x228F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e158_0x13e180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228F90u; }
        if (ctx->pc != 0x228F90u) { return; }
    }
    ctx->pc = 0x228F90u;
    // 0x228f90: 0xc08a3be  jal         func_228EF8
    ctx->pc = 0x228F90u;
    SET_GPR_U32(ctx, 31, 0x228F98u);
    ctx->pc = 0x228F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228F90u;
            // 0x228f94: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228EF8u;
    if (runtime->hasFunction(0x228EF8u)) {
        auto targetFn = runtime->lookupFunction(0x228EF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228F98u; }
        if (ctx->pc != 0x228F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_228ef8_0x228f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228F98u; }
        if (ctx->pc != 0x228F98u) { return; }
    }
    ctx->pc = 0x228F98u;
    // 0x228f98: 0x3a0b02d  daddu       $s6, $sp, $zero
    ctx->pc = 0x228f98u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228f9c: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x228F9Cu;
    SET_GPR_U32(ctx, 31, 0x228FA4u);
    ctx->pc = 0x228FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228F9Cu;
            // 0x228fa0: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228FA4u; }
        if (ctx->pc != 0x228FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228FA4u; }
        if (ctx->pc != 0x228FA4u) { return; }
    }
    ctx->pc = 0x228FA4u;
    // 0x228fa4: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x228FA4u;
    SET_GPR_U32(ctx, 31, 0x228FACu);
    ctx->pc = 0x228FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228FA4u;
            // 0x228fa8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228FACu; }
        if (ctx->pc != 0x228FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228FACu; }
        if (ctx->pc != 0x228FACu) { return; }
    }
    ctx->pc = 0x228FACu;
    // 0x228fac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x228facu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228fb0: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x228fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x228fb4: 0x24a58178  addiu       $a1, $a1, -0x7E88
    ctx->pc = 0x228fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934904));
    // 0x228fb8: 0xc060978  jal         func_1825E0
    ctx->pc = 0x228FB8u;
    SET_GPR_U32(ctx, 31, 0x228FC0u);
    ctx->pc = 0x228FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228FB8u;
            // 0x228fbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1825E0u;
    if (runtime->hasFunction(0x1825E0u)) {
        auto targetFn = runtime->lookupFunction(0x1825E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228FC0u; }
        if (ctx->pc != 0x228FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001825E0_0x1825e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228FC0u; }
        if (ctx->pc != 0x228FC0u) { return; }
    }
    ctx->pc = 0x228FC0u;
    // 0x228fc0: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x228fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x228fc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x228fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228fc8: 0x244291b0  addiu       $v0, $v0, -0x6E50
    ctx->pc = 0x228fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939056));
    // 0x228fcc: 0xc060b5a  jal         func_182D68
    ctx->pc = 0x228FCCu;
    SET_GPR_U32(ctx, 31, 0x228FD4u);
    ctx->pc = 0x228FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228FCCu;
            // 0x228fd0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182D68u;
    if (runtime->hasFunction(0x182D68u)) {
        auto targetFn = runtime->lookupFunction(0x182D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228FD4u; }
        if (ctx->pc != 0x228FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182D68_0x182d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228FD4u; }
        if (ctx->pc != 0x228FD4u) { return; }
    }
    ctx->pc = 0x228FD4u;
    // 0x228fd4: 0x8e130038  lw          $s3, 0x38($s0)
    ctx->pc = 0x228fd4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x228fd8: 0xc05fa66  jal         func_17E998
    ctx->pc = 0x228FD8u;
    SET_GPR_U32(ctx, 31, 0x228FE0u);
    ctx->pc = 0x228FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228FD8u;
            // 0x228fdc: 0xaeb06eac  sw          $s0, 0x6EAC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 28332), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E998u;
    if (runtime->hasFunction(0x17E998u)) {
        auto targetFn = runtime->lookupFunction(0x17E998u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228FE0u; }
        if (ctx->pc != 0x228FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E998_0x17e998(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228FE0u; }
        if (ctx->pc != 0x228FE0u) { return; }
    }
    ctx->pc = 0x228FE0u;
    // 0x228fe0: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x228FE0u;
    SET_GPR_U32(ctx, 31, 0x228FE8u);
    ctx->pc = 0x228FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228FE0u;
            // 0x228fe4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228FE8u; }
        if (ctx->pc != 0x228FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228FE8u; }
        if (ctx->pc != 0x228FE8u) { return; }
    }
    ctx->pc = 0x228FE8u;
    // 0x228fe8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x228fe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228fec: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x228fecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x228ff0: 0x3c110023  lui         $s1, 0x23
    ctx->pc = 0x228ff0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)35 << 16));
    // 0x228ff4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x228ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228ff8: 0x24a58180  addiu       $a1, $a1, -0x7E80
    ctx->pc = 0x228ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934912));
    // 0x228ffc: 0x26318ed0  addiu       $s1, $s1, -0x7130
    ctx->pc = 0x228ffcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294938320));
    // 0x229000: 0x8eb26eac  lw          $s2, 0x6EAC($s5)
    ctx->pc = 0x229000u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28332)));
    // 0x229004: 0xc060284  jal         func_180A10
    ctx->pc = 0x229004u;
    SET_GPR_U32(ctx, 31, 0x22900Cu);
    ctx->pc = 0x229008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229004u;
            // 0x229008: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180A10u;
    if (runtime->hasFunction(0x180A10u)) {
        auto targetFn = runtime->lookupFunction(0x180A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22900Cu; }
        if (ctx->pc != 0x22900Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180A10_0x180a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22900Cu; }
        if (ctx->pc != 0x22900Cu) { return; }
    }
    ctx->pc = 0x22900Cu;
    // 0x22900c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x22900cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x229010: 0xae110010  sw          $s1, 0x10($s0)
    ctx->pc = 0x229010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
    // 0x229014: 0x24420430  addiu       $v0, $v0, 0x430
    ctx->pc = 0x229014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1072));
    // 0x229018: 0xae120014  sw          $s2, 0x14($s0)
    ctx->pc = 0x229018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 18));
    // 0x22901c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x22901cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x229020: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x229020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229024: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x229024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x229028: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x229028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22902c: 0xc05fd12  jal         func_17F448
    ctx->pc = 0x22902Cu;
    SET_GPR_U32(ctx, 31, 0x229034u);
    ctx->pc = 0x229030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22902Cu;
            // 0x229030: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F448u;
    if (runtime->hasFunction(0x17F448u)) {
        auto targetFn = runtime->lookupFunction(0x17F448u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229034u; }
        if (ctx->pc != 0x229034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017F448_0x17f448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229034u; }
        if (ctx->pc != 0x229034u) { return; }
    }
    ctx->pc = 0x229034u;
    // 0x229034: 0x27b00018  addiu       $s0, $sp, 0x18
    ctx->pc = 0x229034u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_229038:
    // 0x229038: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x229038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x22903c: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x22903cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x229040: 0x2471c3b8  addiu       $s1, $v1, -0x3C48
    ctx->pc = 0x229040u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951864));
    // 0x229044: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x229044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229048: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x229048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x22904c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x22904cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x229050: 0xc05d5d0  jal         func_175740
    ctx->pc = 0x229050u;
    SET_GPR_U32(ctx, 31, 0x229058u);
    ctx->pc = 0x229054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229050u;
            // 0x229054: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175740u;
    if (runtime->hasFunction(0x175740u)) {
        auto targetFn = runtime->lookupFunction(0x175740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229058u; }
        if (ctx->pc != 0x229058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175740_0x175780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229058u; }
        if (ctx->pc != 0x229058u) { return; }
    }
    ctx->pc = 0x229058u;
    // 0x229058: 0x8ea46eac  lw          $a0, 0x6EAC($s5)
    ctx->pc = 0x229058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28332)));
    // 0x22905c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x22905cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229060: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x229060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229064: 0xc060570  jal         func_1815C0
    ctx->pc = 0x229064u;
    SET_GPR_U32(ctx, 31, 0x22906Cu);
    ctx->pc = 0x229068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229064u;
            // 0x229068: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22906Cu; }
        if (ctx->pc != 0x22906Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22906Cu; }
        if (ctx->pc != 0x22906Cu) { return; }
    }
    ctx->pc = 0x22906Cu;
    // 0x22906c: 0x2a82000f  slti        $v0, $s4, 0xF
    ctx->pc = 0x22906cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x229070: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x229070u;
    {
        const bool branch_taken_0x229070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x229074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229070u;
            // 0x229074: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229070) {
            ctx->pc = 0x229038u;
            runtime->cooperativeGuestYield();
            goto label_229038;
        }
    }
    ctx->pc = 0x229078u;
    // 0x229078: 0x8e24003c  lw          $a0, 0x3C($s1)
    ctx->pc = 0x229078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x22907c: 0xc05d5d0  jal         func_175740
    ctx->pc = 0x22907Cu;
    SET_GPR_U32(ctx, 31, 0x229084u);
    ctx->pc = 0x229080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22907Cu;
            // 0x229080: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175740u;
    if (runtime->hasFunction(0x175740u)) {
        auto targetFn = runtime->lookupFunction(0x175740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229084u; }
        if (ctx->pc != 0x229084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175740_0x175780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229084u; }
        if (ctx->pc != 0x229084u) { return; }
    }
    ctx->pc = 0x229084u;
    // 0x229084: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x229084u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229088: 0x8ea46eac  lw          $a0, 0x6EAC($s5)
    ctx->pc = 0x229088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28332)));
    // 0x22908c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22908cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229090: 0xc060570  jal         func_1815C0
    ctx->pc = 0x229090u;
    SET_GPR_U32(ctx, 31, 0x229098u);
    ctx->pc = 0x229094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229090u;
            // 0x229094: 0x24c70054  addiu       $a3, $a2, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229098u; }
        if (ctx->pc != 0x229098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229098u; }
        if (ctx->pc != 0x229098u) { return; }
    }
    ctx->pc = 0x229098u;
    // 0x229098: 0xc04f860  jal         func_13E180
    ctx->pc = 0x229098u;
    SET_GPR_U32(ctx, 31, 0x2290A0u);
    ctx->pc = 0x13E180u;
    if (runtime->hasFunction(0x13E180u)) {
        auto targetFn = runtime->lookupFunction(0x13E180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2290A0u; }
        if (ctx->pc != 0x2290A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e180_0x13e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2290A0u; }
        if (ctx->pc != 0x2290A0u) { return; }
    }
    ctx->pc = 0x2290A0u;
    // 0x2290a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2290a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2290a4: 0xc091134  jal         func_2444D0
    ctx->pc = 0x2290A4u;
    SET_GPR_U32(ctx, 31, 0x2290ACu);
    ctx->pc = 0x2290A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2290A4u;
            // 0x2290a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2444D0u;
    if (runtime->hasFunction(0x2444D0u)) {
        auto targetFn = runtime->lookupFunction(0x2444D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2290ACu; }
        if (ctx->pc != 0x2290ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2444d0_0x244530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2290ACu; }
        if (ctx->pc != 0x2290ACu) { return; }
    }
    ctx->pc = 0x2290ACu;
    // 0x2290ac: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x2290acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2290b0: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x2290b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2290b4: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x2290b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2290b8: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x2290b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2290bc: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x2290bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2290c0: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x2290c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2290c4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2290c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2290c8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2290c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2290cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2290CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2290D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2290CCu;
            // 0x2290d0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x229038u: goto label_229038;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2290D4u;
    // 0x2290d4: 0x0  nop
    ctx->pc = 0x2290d4u;
    // NOP
}
