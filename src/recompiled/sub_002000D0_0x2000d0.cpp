#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002000D0
// Address: 0x2000d0 - 0x200310
void sub_002000D0_0x2000d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002000D0_0x2000d0");
#endif

    ctx->pc = 0x2000d0u;

    // 0x2000d0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2000d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2000d4: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x2000d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x2000d8: 0x8c44ec4c  lw          $a0, -0x13B4($v0)
    ctx->pc = 0x2000d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962252)));
    // 0x2000dc: 0x7fb00160  sq          $s0, 0x160($sp)
    ctx->pc = 0x2000dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 16));
    // 0x2000e0: 0x7fb10150  sq          $s1, 0x150($sp)
    ctx->pc = 0x2000e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 17));
    // 0x2000e4: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x2000e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
    // 0x2000e8: 0xc04f856  jal         func_13E158
    ctx->pc = 0x2000E8u;
    SET_GPR_U32(ctx, 31, 0x2000F0u);
    ctx->pc = 0x2000ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2000E8u;
            // 0x2000ec: 0x3c11002a  lui         $s1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E158u;
    if (runtime->hasFunction(0x13E158u)) {
        auto targetFn = runtime->lookupFunction(0x13E158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2000F0u; }
        if (ctx->pc != 0x2000F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e158_0x13e180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2000F0u; }
        if (ctx->pc != 0x2000F0u) { return; }
    }
    ctx->pc = 0x2000F0u;
    // 0x2000f0: 0xc09104c  jal         func_244130
    ctx->pc = 0x2000F0u;
    SET_GPR_U32(ctx, 31, 0x2000F8u);
    ctx->pc = 0x2000F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2000F0u;
            // 0x2000f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x244130u;
    if (runtime->hasFunction(0x244130u)) {
        auto targetFn = runtime->lookupFunction(0x244130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2000F8u; }
        if (ctx->pc != 0x2000F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_244130_0x244158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2000F8u; }
        if (ctx->pc != 0x2000F8u) { return; }
    }
    ctx->pc = 0x2000F8u;
    // 0x2000f8: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x2000F8u;
    SET_GPR_U32(ctx, 31, 0x200100u);
    ctx->pc = 0x2000FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2000F8u;
            // 0x2000fc: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200100u; }
        if (ctx->pc != 0x200100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200100u; }
        if (ctx->pc != 0x200100u) { return; }
    }
    ctx->pc = 0x200100u;
    // 0x200100: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x200100u;
    SET_GPR_U32(ctx, 31, 0x200108u);
    ctx->pc = 0x200104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200100u;
            // 0x200104: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200108u; }
        if (ctx->pc != 0x200108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200108u; }
        if (ctx->pc != 0x200108u) { return; }
    }
    ctx->pc = 0x200108u;
    // 0x200108: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x200108u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20010c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x20010cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x200110: 0x24a579e0  addiu       $a1, $a1, 0x79E0
    ctx->pc = 0x200110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31200));
    // 0x200114: 0xc060978  jal         func_1825E0
    ctx->pc = 0x200114u;
    SET_GPR_U32(ctx, 31, 0x20011Cu);
    ctx->pc = 0x200118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200114u;
            // 0x200118: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1825E0u;
    if (runtime->hasFunction(0x1825E0u)) {
        auto targetFn = runtime->lookupFunction(0x1825E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20011Cu; }
        if (ctx->pc != 0x20011Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001825E0_0x1825e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20011Cu; }
        if (ctx->pc != 0x20011Cu) { return; }
    }
    ctx->pc = 0x20011Cu;
    // 0x20011c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x20011cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x200120: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x200120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200124: 0x24429638  addiu       $v0, $v0, -0x69C8
    ctx->pc = 0x200124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940216));
    // 0x200128: 0xc060b5a  jal         func_182D68
    ctx->pc = 0x200128u;
    SET_GPR_U32(ctx, 31, 0x200130u);
    ctx->pc = 0x20012Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200128u;
            // 0x20012c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182D68u;
    if (runtime->hasFunction(0x182D68u)) {
        auto targetFn = runtime->lookupFunction(0x182D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200130u; }
        if (ctx->pc != 0x200130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182D68_0x182d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200130u; }
        if (ctx->pc != 0x200130u) { return; }
    }
    ctx->pc = 0x200130u;
    // 0x200130: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x200130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200134: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x200134u;
    SET_GPR_U32(ctx, 31, 0x20013Cu);
    ctx->pc = 0x200138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200134u;
            // 0x200138: 0xae30e424  sw          $s0, -0x1BDC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294960164), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20013Cu; }
        if (ctx->pc != 0x20013Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20013Cu; }
        if (ctx->pc != 0x20013Cu) { return; }
    }
    ctx->pc = 0x20013Cu;
    // 0x20013c: 0x8e24e424  lw          $a0, -0x1BDC($s1)
    ctx->pc = 0x20013cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960164)));
    // 0x200140: 0x3c054c44  lui         $a1, 0x4C44
    ctx->pc = 0x200140u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19524 << 16));
    // 0x200144: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x200144u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200148: 0x27a70018  addiu       $a3, $sp, 0x18
    ctx->pc = 0x200148u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x20014c: 0x34a51610  ori         $a1, $a1, 0x1610
    ctx->pc = 0x20014cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5648);
    // 0x200150: 0xc06081c  jal         func_182070
    ctx->pc = 0x200150u;
    SET_GPR_U32(ctx, 31, 0x200158u);
    ctx->pc = 0x200154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200150u;
            // 0x200154: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200158u; }
        if (ctx->pc != 0x200158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200158u; }
        if (ctx->pc != 0x200158u) { return; }
    }
    ctx->pc = 0x200158u;
    // 0x200158: 0x8e24e424  lw          $a0, -0x1BDC($s1)
    ctx->pc = 0x200158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960164)));
    // 0x20015c: 0x3c054a97  lui         $a1, 0x4A97
    ctx->pc = 0x20015cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19095 << 16));
    // 0x200160: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x200160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200164: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x200164u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x200168: 0x34a55b51  ori         $a1, $a1, 0x5B51
    ctx->pc = 0x200168u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)23377);
    // 0x20016c: 0xc06081c  jal         func_182070
    ctx->pc = 0x20016Cu;
    SET_GPR_U32(ctx, 31, 0x200174u);
    ctx->pc = 0x200170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20016Cu;
            // 0x200170: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200174u; }
        if (ctx->pc != 0x200174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200174u; }
        if (ctx->pc != 0x200174u) { return; }
    }
    ctx->pc = 0x200174u;
    // 0x200174: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x200174u;
    SET_GPR_U32(ctx, 31, 0x20017Cu);
    ctx->pc = 0x200178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200174u;
            // 0x200178: 0x8e24e424  lw          $a0, -0x1BDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960164)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20017Cu; }
        if (ctx->pc != 0x20017Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20017Cu; }
        if (ctx->pc != 0x20017Cu) { return; }
    }
    ctx->pc = 0x20017Cu;
    // 0x20017c: 0x8e24e424  lw          $a0, -0x1BDC($s1)
    ctx->pc = 0x20017cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960164)));
    // 0x200180: 0x3c057a36  lui         $a1, 0x7A36
    ctx->pc = 0x200180u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31286 << 16));
    // 0x200184: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x200184u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200188: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x200188u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x20018c: 0x34a54bbb  ori         $a1, $a1, 0x4BBB
    ctx->pc = 0x20018cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)19387);
    // 0x200190: 0xc06081c  jal         func_182070
    ctx->pc = 0x200190u;
    SET_GPR_U32(ctx, 31, 0x200198u);
    ctx->pc = 0x200194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200190u;
            // 0x200194: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200198u; }
        if (ctx->pc != 0x200198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200198u; }
        if (ctx->pc != 0x200198u) { return; }
    }
    ctx->pc = 0x200198u;
    // 0x200198: 0x8e24e424  lw          $a0, -0x1BDC($s1)
    ctx->pc = 0x200198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960164)));
    // 0x20019c: 0x3c05fd62  lui         $a1, 0xFD62
    ctx->pc = 0x20019cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64866 << 16));
    // 0x2001a0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2001a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2001a4: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x2001a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2001a8: 0x34a55f70  ori         $a1, $a1, 0x5F70
    ctx->pc = 0x2001a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24432);
    // 0x2001ac: 0xc06081c  jal         func_182070
    ctx->pc = 0x2001ACu;
    SET_GPR_U32(ctx, 31, 0x2001B4u);
    ctx->pc = 0x2001B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2001ACu;
            // 0x2001b0: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2001B4u; }
        if (ctx->pc != 0x2001B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2001B4u; }
        if (ctx->pc != 0x2001B4u) { return; }
    }
    ctx->pc = 0x2001B4u;
    // 0x2001b4: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x2001B4u;
    SET_GPR_U32(ctx, 31, 0x2001BCu);
    ctx->pc = 0x2001B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2001B4u;
            // 0x2001b8: 0x8e24e424  lw          $a0, -0x1BDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960164)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2001BCu; }
        if (ctx->pc != 0x2001BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2001BCu; }
        if (ctx->pc != 0x2001BCu) { return; }
    }
    ctx->pc = 0x2001BCu;
    // 0x2001bc: 0x8e24e424  lw          $a0, -0x1BDC($s1)
    ctx->pc = 0x2001bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960164)));
    // 0x2001c0: 0x3c0523a6  lui         $a1, 0x23A6
    ctx->pc = 0x2001c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)9126 << 16));
    // 0x2001c4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2001c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2001c8: 0x27a70078  addiu       $a3, $sp, 0x78
    ctx->pc = 0x2001c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x2001cc: 0x34a5eb84  ori         $a1, $a1, 0xEB84
    ctx->pc = 0x2001ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)60292);
    // 0x2001d0: 0xc06081c  jal         func_182070
    ctx->pc = 0x2001D0u;
    SET_GPR_U32(ctx, 31, 0x2001D8u);
    ctx->pc = 0x2001D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2001D0u;
            // 0x2001d4: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2001D8u; }
        if (ctx->pc != 0x2001D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2001D8u; }
        if (ctx->pc != 0x2001D8u) { return; }
    }
    ctx->pc = 0x2001D8u;
    // 0x2001d8: 0x8e24e424  lw          $a0, -0x1BDC($s1)
    ctx->pc = 0x2001d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960164)));
    // 0x2001dc: 0x3c053684  lui         $a1, 0x3684
    ctx->pc = 0x2001dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)13956 << 16));
    // 0x2001e0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2001e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2001e4: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x2001e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2001e8: 0x34a5b24f  ori         $a1, $a1, 0xB24F
    ctx->pc = 0x2001e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45647);
    // 0x2001ec: 0xc06081c  jal         func_182070
    ctx->pc = 0x2001ECu;
    SET_GPR_U32(ctx, 31, 0x2001F4u);
    ctx->pc = 0x2001F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2001ECu;
            // 0x2001f0: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2001F4u; }
        if (ctx->pc != 0x2001F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2001F4u; }
        if (ctx->pc != 0x2001F4u) { return; }
    }
    ctx->pc = 0x2001F4u;
    // 0x2001f4: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x2001F4u;
    SET_GPR_U32(ctx, 31, 0x2001FCu);
    ctx->pc = 0x2001F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2001F4u;
            // 0x2001f8: 0x8e24e424  lw          $a0, -0x1BDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960164)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2001FCu; }
        if (ctx->pc != 0x2001FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2001FCu; }
        if (ctx->pc != 0x2001FCu) { return; }
    }
    ctx->pc = 0x2001FCu;
    // 0x2001fc: 0x8e24e424  lw          $a0, -0x1BDC($s1)
    ctx->pc = 0x2001fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960164)));
    // 0x200200: 0x3c050893  lui         $a1, 0x893
    ctx->pc = 0x200200u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2195 << 16));
    // 0x200204: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x200204u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200208: 0x27a700a8  addiu       $a3, $sp, 0xA8
    ctx->pc = 0x200208u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x20020c: 0x34a57ad3  ori         $a1, $a1, 0x7AD3
    ctx->pc = 0x20020cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)31443);
    // 0x200210: 0xc06081c  jal         func_182070
    ctx->pc = 0x200210u;
    SET_GPR_U32(ctx, 31, 0x200218u);
    ctx->pc = 0x200214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200210u;
            // 0x200214: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200218u; }
        if (ctx->pc != 0x200218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200218u; }
        if (ctx->pc != 0x200218u) { return; }
    }
    ctx->pc = 0x200218u;
    // 0x200218: 0x8e24e424  lw          $a0, -0x1BDC($s1)
    ctx->pc = 0x200218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960164)));
    // 0x20021c: 0x3c05af5d  lui         $a1, 0xAF5D
    ctx->pc = 0x20021cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44893 << 16));
    // 0x200220: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x200220u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200224: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x200224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x200228: 0x34a5369e  ori         $a1, $a1, 0x369E
    ctx->pc = 0x200228u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)13982);
    // 0x20022c: 0xc06081c  jal         func_182070
    ctx->pc = 0x20022Cu;
    SET_GPR_U32(ctx, 31, 0x200234u);
    ctx->pc = 0x200230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20022Cu;
            // 0x200230: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200234u; }
        if (ctx->pc != 0x200234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200234u; }
        if (ctx->pc != 0x200234u) { return; }
    }
    ctx->pc = 0x200234u;
    // 0x200234: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x200234u;
    SET_GPR_U32(ctx, 31, 0x20023Cu);
    ctx->pc = 0x200238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200234u;
            // 0x200238: 0x8e24e424  lw          $a0, -0x1BDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960164)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20023Cu; }
        if (ctx->pc != 0x20023Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20023Cu; }
        if (ctx->pc != 0x20023Cu) { return; }
    }
    ctx->pc = 0x20023Cu;
    // 0x20023c: 0x8e24e424  lw          $a0, -0x1BDC($s1)
    ctx->pc = 0x20023cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960164)));
    // 0x200240: 0x3c058ff2  lui         $a1, 0x8FF2
    ctx->pc = 0x200240u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36850 << 16));
    // 0x200244: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x200244u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200248: 0x27a700d8  addiu       $a3, $sp, 0xD8
    ctx->pc = 0x200248u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x20024c: 0x34a5d78a  ori         $a1, $a1, 0xD78A
    ctx->pc = 0x20024cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55178);
    // 0x200250: 0xc06081c  jal         func_182070
    ctx->pc = 0x200250u;
    SET_GPR_U32(ctx, 31, 0x200258u);
    ctx->pc = 0x200254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200250u;
            // 0x200254: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200258u; }
        if (ctx->pc != 0x200258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200258u; }
        if (ctx->pc != 0x200258u) { return; }
    }
    ctx->pc = 0x200258u;
    // 0x200258: 0x8e24e424  lw          $a0, -0x1BDC($s1)
    ctx->pc = 0x200258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960164)));
    // 0x20025c: 0x3c054e07  lui         $a1, 0x4E07
    ctx->pc = 0x20025cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19975 << 16));
    // 0x200260: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x200260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200264: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x200264u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x200268: 0x34a5013f  ori         $a1, $a1, 0x13F
    ctx->pc = 0x200268u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)319);
    // 0x20026c: 0xc06081c  jal         func_182070
    ctx->pc = 0x20026Cu;
    SET_GPR_U32(ctx, 31, 0x200274u);
    ctx->pc = 0x200270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20026Cu;
            // 0x200270: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200274u; }
        if (ctx->pc != 0x200274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200274u; }
        if (ctx->pc != 0x200274u) { return; }
    }
    ctx->pc = 0x200274u;
    // 0x200274: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x200274u;
    SET_GPR_U32(ctx, 31, 0x20027Cu);
    ctx->pc = 0x200278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200274u;
            // 0x200278: 0x8e24e424  lw          $a0, -0x1BDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960164)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20027Cu; }
        if (ctx->pc != 0x20027Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20027Cu; }
        if (ctx->pc != 0x20027Cu) { return; }
    }
    ctx->pc = 0x20027Cu;
    // 0x20027c: 0x8e24e424  lw          $a0, -0x1BDC($s1)
    ctx->pc = 0x20027cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960164)));
    // 0x200280: 0x3c055153  lui         $a1, 0x5153
    ctx->pc = 0x200280u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20819 << 16));
    // 0x200284: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x200284u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200288: 0x27a70108  addiu       $a3, $sp, 0x108
    ctx->pc = 0x200288u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x20028c: 0x34a5e5ca  ori         $a1, $a1, 0xE5CA
    ctx->pc = 0x20028cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)58826);
    // 0x200290: 0xc06081c  jal         func_182070
    ctx->pc = 0x200290u;
    SET_GPR_U32(ctx, 31, 0x200298u);
    ctx->pc = 0x200294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200290u;
            // 0x200294: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200298u; }
        if (ctx->pc != 0x200298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200298u; }
        if (ctx->pc != 0x200298u) { return; }
    }
    ctx->pc = 0x200298u;
    // 0x200298: 0x8e24e424  lw          $a0, -0x1BDC($s1)
    ctx->pc = 0x200298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960164)));
    // 0x20029c: 0x3c059c3a  lui         $a1, 0x9C3A
    ctx->pc = 0x20029cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)39994 << 16));
    // 0x2002a0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2002a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2002a4: 0x27a70120  addiu       $a3, $sp, 0x120
    ctx->pc = 0x2002a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2002a8: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x2002a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2002ac: 0xc06081c  jal         func_182070
    ctx->pc = 0x2002ACu;
    SET_GPR_U32(ctx, 31, 0x2002B4u);
    ctx->pc = 0x2002B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2002ACu;
            // 0x2002b0: 0x34a5c295  ori         $a1, $a1, 0xC295 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)49813);
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2002B4u; }
        if (ctx->pc != 0x2002B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2002B4u; }
        if (ctx->pc != 0x2002B4u) { return; }
    }
    ctx->pc = 0x2002B4u;
    // 0x2002b4: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x2002B4u;
    SET_GPR_U32(ctx, 31, 0x2002BCu);
    ctx->pc = 0x2002B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2002B4u;
            // 0x2002b8: 0x8e24e424  lw          $a0, -0x1BDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960164)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2002BCu; }
        if (ctx->pc != 0x2002BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2002BCu; }
        if (ctx->pc != 0x2002BCu) { return; }
    }
    ctx->pc = 0x2002BCu;
    // 0x2002bc: 0x8e24e424  lw          $a0, -0x1BDC($s1)
    ctx->pc = 0x2002bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960164)));
    // 0x2002c0: 0x3c057e02  lui         $a1, 0x7E02
    ctx->pc = 0x2002c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32258 << 16));
    // 0x2002c4: 0x34a56978  ori         $a1, $a1, 0x6978
    ctx->pc = 0x2002c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27000);
    // 0x2002c8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2002c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2002cc: 0xc060812  jal         func_182048
    ctx->pc = 0x2002CCu;
    SET_GPR_U32(ctx, 31, 0x2002D4u);
    ctx->pc = 0x2002D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2002CCu;
            // 0x2002d0: 0x27a70138  addiu       $a3, $sp, 0x138 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182048u;
    if (runtime->hasFunction(0x182048u)) {
        auto targetFn = runtime->lookupFunction(0x182048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2002D4u; }
        if (ctx->pc != 0x2002D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182048_0x182048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2002D4u; }
        if (ctx->pc != 0x2002D4u) { return; }
    }
    ctx->pc = 0x2002D4u;
    // 0x2002d4: 0xc04f860  jal         func_13E180
    ctx->pc = 0x2002D4u;
    SET_GPR_U32(ctx, 31, 0x2002DCu);
    ctx->pc = 0x13E180u;
    if (runtime->hasFunction(0x13E180u)) {
        auto targetFn = runtime->lookupFunction(0x13E180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2002DCu; }
        if (ctx->pc != 0x2002DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e180_0x13e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2002DCu; }
        if (ctx->pc != 0x2002DCu) { return; }
    }
    ctx->pc = 0x2002DCu;
    // 0x2002dc: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2002dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2002e0: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x2002e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2002e4: 0x2442ead8  addiu       $v0, $v0, -0x1528
    ctx->pc = 0x2002e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961880));
    // 0x2002e8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2002E8u;
    {
        const bool branch_taken_0x2002e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2002ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2002E8u;
            // 0x2002ec: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2002e8) {
            ctx->pc = 0x2002F8u;
            goto label_2002f8;
        }
    }
    ctx->pc = 0x2002F0u;
    // 0x2002f0: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x2002F0u;
    SET_GPR_U32(ctx, 31, 0x2002F8u);
    ctx->pc = 0x2002F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2002F0u;
            // 0x2002f4: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2002F8u; }
        if (ctx->pc != 0x2002F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2002F8u; }
        if (ctx->pc != 0x2002F8u) { return; }
    }
    ctx->pc = 0x2002F8u;
label_2002f8:
    // 0x2002f8: 0x7bb00160  lq          $s0, 0x160($sp)
    ctx->pc = 0x2002f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2002fc: 0x7bb10150  lq          $s1, 0x150($sp)
    ctx->pc = 0x2002fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x200300: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x200300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x200304: 0x3e00008  jr          $ra
    ctx->pc = 0x200304u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200304u;
            // 0x200308: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2002F8u: goto label_2002f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20030Cu;
    // 0x20030c: 0x0  nop
    ctx->pc = 0x20030cu;
    // NOP
}
