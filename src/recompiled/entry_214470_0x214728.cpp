#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_214470
// Address: 0x214470 - 0x214728
void entry_214470_0x214728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_214470_0x214728");
#endif

    ctx->pc = 0x214470u;

    // 0x214470: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x214470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x214474: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x214474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x214478: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x214478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21447c: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x21447cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x214480: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x214480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x214484: 0xc0910d8  jal         func_244360
    ctx->pc = 0x214484u;
    SET_GPR_U32(ctx, 31, 0x21448Cu);
    ctx->pc = 0x214488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214484u;
            // 0x214488: 0x3c11002a  lui         $s1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x244360u;
    if (runtime->hasFunction(0x244360u)) {
        auto targetFn = runtime->lookupFunction(0x244360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21448Cu; }
        if (ctx->pc != 0x21448Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_244360_0x244410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21448Cu; }
        if (ctx->pc != 0x21448Cu) { return; }
    }
    ctx->pc = 0x21448Cu;
    // 0x21448c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x21448cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x214490: 0xc04f856  jal         func_13E158
    ctx->pc = 0x214490u;
    SET_GPR_U32(ctx, 31, 0x214498u);
    ctx->pc = 0x214494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214490u;
            // 0x214494: 0x8c44ec4c  lw          $a0, -0x13B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962252)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E158u;
    if (runtime->hasFunction(0x13E158u)) {
        auto targetFn = runtime->lookupFunction(0x13E158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214498u; }
        if (ctx->pc != 0x214498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e158_0x13e180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214498u; }
        if (ctx->pc != 0x214498u) { return; }
    }
    ctx->pc = 0x214498u;
    // 0x214498: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x214498u;
    SET_GPR_U32(ctx, 31, 0x2144A0u);
    ctx->pc = 0x21449Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214498u;
            // 0x21449c: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2144A0u; }
        if (ctx->pc != 0x2144A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2144A0u; }
        if (ctx->pc != 0x2144A0u) { return; }
    }
    ctx->pc = 0x2144A0u;
    // 0x2144a0: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x2144A0u;
    SET_GPR_U32(ctx, 31, 0x2144A8u);
    ctx->pc = 0x2144A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2144A0u;
            // 0x2144a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2144A8u; }
        if (ctx->pc != 0x2144A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2144A8u; }
        if (ctx->pc != 0x2144A8u) { return; }
    }
    ctx->pc = 0x2144A8u;
    // 0x2144a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2144a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2144ac: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x2144acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x2144b0: 0x24a57df8  addiu       $a1, $a1, 0x7DF8
    ctx->pc = 0x2144b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32248));
    // 0x2144b4: 0xc060978  jal         func_1825E0
    ctx->pc = 0x2144B4u;
    SET_GPR_U32(ctx, 31, 0x2144BCu);
    ctx->pc = 0x2144B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2144B4u;
            // 0x2144b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1825E0u;
    if (runtime->hasFunction(0x1825E0u)) {
        auto targetFn = runtime->lookupFunction(0x1825E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2144BCu; }
        if (ctx->pc != 0x2144BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001825E0_0x1825e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2144BCu; }
        if (ctx->pc != 0x2144BCu) { return; }
    }
    ctx->pc = 0x2144BCu;
    // 0x2144bc: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2144bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2144c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2144c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2144c4: 0x24429450  addiu       $v0, $v0, -0x6BB0
    ctx->pc = 0x2144c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939728));
    // 0x2144c8: 0xc060b5a  jal         func_182D68
    ctx->pc = 0x2144C8u;
    SET_GPR_U32(ctx, 31, 0x2144D0u);
    ctx->pc = 0x2144CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2144C8u;
            // 0x2144cc: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182D68u;
    if (runtime->hasFunction(0x182D68u)) {
        auto targetFn = runtime->lookupFunction(0x182D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2144D0u; }
        if (ctx->pc != 0x2144D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182D68_0x182d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2144D0u; }
        if (ctx->pc != 0x2144D0u) { return; }
    }
    ctx->pc = 0x2144D0u;
    // 0x2144d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2144d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2144d4: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x2144D4u;
    SET_GPR_U32(ctx, 31, 0x2144DCu);
    ctx->pc = 0x2144D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2144D4u;
            // 0x2144d8: 0xae30e46c  sw          $s0, -0x1B94($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294960236), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2144DCu; }
        if (ctx->pc != 0x2144DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2144DCu; }
        if (ctx->pc != 0x2144DCu) { return; }
    }
    ctx->pc = 0x2144DCu;
    // 0x2144dc: 0x8e24e46c  lw          $a0, -0x1B94($s1)
    ctx->pc = 0x2144dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960236)));
    // 0x2144e0: 0x3c05b50a  lui         $a1, 0xB50A
    ctx->pc = 0x2144e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)46346 << 16));
    // 0x2144e4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2144e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2144e8: 0x27a70018  addiu       $a3, $sp, 0x18
    ctx->pc = 0x2144e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x2144ec: 0x34a5547c  ori         $a1, $a1, 0x547C
    ctx->pc = 0x2144ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)21628);
    // 0x2144f0: 0xc06081c  jal         func_182070
    ctx->pc = 0x2144F0u;
    SET_GPR_U32(ctx, 31, 0x2144F8u);
    ctx->pc = 0x2144F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2144F0u;
            // 0x2144f4: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2144F8u; }
        if (ctx->pc != 0x2144F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2144F8u; }
        if (ctx->pc != 0x2144F8u) { return; }
    }
    ctx->pc = 0x2144F8u;
    // 0x2144f8: 0x8e24e46c  lw          $a0, -0x1B94($s1)
    ctx->pc = 0x2144f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960236)));
    // 0x2144fc: 0x3c05b50a  lui         $a1, 0xB50A
    ctx->pc = 0x2144fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)46346 << 16));
    // 0x214500: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x214500u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214504: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x214504u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x214508: 0x34a5547d  ori         $a1, $a1, 0x547D
    ctx->pc = 0x214508u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)21629);
    // 0x21450c: 0xc06081c  jal         func_182070
    ctx->pc = 0x21450Cu;
    SET_GPR_U32(ctx, 31, 0x214514u);
    ctx->pc = 0x214510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21450Cu;
            // 0x214510: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214514u; }
        if (ctx->pc != 0x214514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214514u; }
        if (ctx->pc != 0x214514u) { return; }
    }
    ctx->pc = 0x214514u;
    // 0x214514: 0x8e24e46c  lw          $a0, -0x1B94($s1)
    ctx->pc = 0x214514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960236)));
    // 0x214518: 0x3c05fea2  lui         $a1, 0xFEA2
    ctx->pc = 0x214518u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65186 << 16));
    // 0x21451c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x21451cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214520: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x214520u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x214524: 0x34a592e6  ori         $a1, $a1, 0x92E6
    ctx->pc = 0x214524u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)37606);
    // 0x214528: 0xc06081c  jal         func_182070
    ctx->pc = 0x214528u;
    SET_GPR_U32(ctx, 31, 0x214530u);
    ctx->pc = 0x21452Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214528u;
            // 0x21452c: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214530u; }
        if (ctx->pc != 0x214530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214530u; }
        if (ctx->pc != 0x214530u) { return; }
    }
    ctx->pc = 0x214530u;
    // 0x214530: 0x8e24e46c  lw          $a0, -0x1B94($s1)
    ctx->pc = 0x214530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960236)));
    // 0x214534: 0x3c05fea2  lui         $a1, 0xFEA2
    ctx->pc = 0x214534u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65186 << 16));
    // 0x214538: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x214538u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21453c: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x21453cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x214540: 0x34a592e7  ori         $a1, $a1, 0x92E7
    ctx->pc = 0x214540u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)37607);
    // 0x214544: 0xc06081c  jal         func_182070
    ctx->pc = 0x214544u;
    SET_GPR_U32(ctx, 31, 0x21454Cu);
    ctx->pc = 0x214548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214544u;
            // 0x214548: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21454Cu; }
        if (ctx->pc != 0x21454Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21454Cu; }
        if (ctx->pc != 0x21454Cu) { return; }
    }
    ctx->pc = 0x21454Cu;
    // 0x21454c: 0x8e24e46c  lw          $a0, -0x1B94($s1)
    ctx->pc = 0x21454cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960236)));
    // 0x214550: 0x3c053e92  lui         $a1, 0x3E92
    ctx->pc = 0x214550u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16018 << 16));
    // 0x214554: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x214554u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214558: 0x27a70078  addiu       $a3, $sp, 0x78
    ctx->pc = 0x214558u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x21455c: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x21455cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x214560: 0xc06081c  jal         func_182070
    ctx->pc = 0x214560u;
    SET_GPR_U32(ctx, 31, 0x214568u);
    ctx->pc = 0x214564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214560u;
            // 0x214564: 0x34a5b123  ori         $a1, $a1, 0xB123 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45347);
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214568u; }
        if (ctx->pc != 0x214568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214568u; }
        if (ctx->pc != 0x214568u) { return; }
    }
    ctx->pc = 0x214568u;
    // 0x214568: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x214568u;
    SET_GPR_U32(ctx, 31, 0x214570u);
    ctx->pc = 0x21456Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214568u;
            // 0x21456c: 0x8e24e46c  lw          $a0, -0x1B94($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960236)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214570u; }
        if (ctx->pc != 0x214570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214570u; }
        if (ctx->pc != 0x214570u) { return; }
    }
    ctx->pc = 0x214570u;
    // 0x214570: 0x8e24e46c  lw          $a0, -0x1B94($s1)
    ctx->pc = 0x214570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960236)));
    // 0x214574: 0x3c05b9a0  lui         $a1, 0xB9A0
    ctx->pc = 0x214574u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47520 << 16));
    // 0x214578: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x214578u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21457c: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x21457cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x214580: 0xc0605f6  jal         func_1817D8
    ctx->pc = 0x214580u;
    SET_GPR_U32(ctx, 31, 0x214588u);
    ctx->pc = 0x214584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214580u;
            // 0x214584: 0x34a5d2ad  ori         $a1, $a1, 0xD2AD (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53933);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1817D8u;
    if (runtime->hasFunction(0x1817D8u)) {
        auto targetFn = runtime->lookupFunction(0x1817D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214588u; }
        if (ctx->pc != 0x214588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001817D8_0x1817d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214588u; }
        if (ctx->pc != 0x214588u) { return; }
    }
    ctx->pc = 0x214588u;
    // 0x214588: 0x8e24e46c  lw          $a0, -0x1B94($s1)
    ctx->pc = 0x214588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960236)));
    // 0x21458c: 0x3c054d79  lui         $a1, 0x4D79
    ctx->pc = 0x21458cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19833 << 16));
    // 0x214590: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x214590u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214594: 0x27a70094  addiu       $a3, $sp, 0x94
    ctx->pc = 0x214594u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x214598: 0xc0605f6  jal         func_1817D8
    ctx->pc = 0x214598u;
    SET_GPR_U32(ctx, 31, 0x2145A0u);
    ctx->pc = 0x21459Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214598u;
            // 0x21459c: 0x34a575bf  ori         $a1, $a1, 0x75BF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)30143);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1817D8u;
    if (runtime->hasFunction(0x1817D8u)) {
        auto targetFn = runtime->lookupFunction(0x1817D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2145A0u; }
        if (ctx->pc != 0x2145A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001817D8_0x1817d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2145A0u; }
        if (ctx->pc != 0x2145A0u) { return; }
    }
    ctx->pc = 0x2145A0u;
    // 0x2145a0: 0x8e24e46c  lw          $a0, -0x1B94($s1)
    ctx->pc = 0x2145a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960236)));
    // 0x2145a4: 0x3c054d79  lui         $a1, 0x4D79
    ctx->pc = 0x2145a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19833 << 16));
    // 0x2145a8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2145a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2145ac: 0x27a70098  addiu       $a3, $sp, 0x98
    ctx->pc = 0x2145acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x2145b0: 0xc0605f6  jal         func_1817D8
    ctx->pc = 0x2145B0u;
    SET_GPR_U32(ctx, 31, 0x2145B8u);
    ctx->pc = 0x2145B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2145B0u;
            // 0x2145b4: 0x34a575c0  ori         $a1, $a1, 0x75C0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)30144);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1817D8u;
    if (runtime->hasFunction(0x1817D8u)) {
        auto targetFn = runtime->lookupFunction(0x1817D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2145B8u; }
        if (ctx->pc != 0x2145B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001817D8_0x1817d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2145B8u; }
        if (ctx->pc != 0x2145B8u) { return; }
    }
    ctx->pc = 0x2145B8u;
    // 0x2145b8: 0x8e24e46c  lw          $a0, -0x1B94($s1)
    ctx->pc = 0x2145b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960236)));
    // 0x2145bc: 0x3c05cb86  lui         $a1, 0xCB86
    ctx->pc = 0x2145bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52102 << 16));
    // 0x2145c0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2145c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2145c4: 0x27a7009c  addiu       $a3, $sp, 0x9C
    ctx->pc = 0x2145c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x2145c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2145c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2145cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2145ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2145d0: 0xc06074a  jal         func_181D28
    ctx->pc = 0x2145D0u;
    SET_GPR_U32(ctx, 31, 0x2145D8u);
    ctx->pc = 0x2145D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2145D0u;
            // 0x2145d4: 0x34a55a1c  ori         $a1, $a1, 0x5A1C (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)23068);
        ctx->in_delay_slot = false;
    ctx->pc = 0x181D28u;
    if (runtime->hasFunction(0x181D28u)) {
        auto targetFn = runtime->lookupFunction(0x181D28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2145D8u; }
        if (ctx->pc != 0x2145D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181D28_0x181d28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2145D8u; }
        if (ctx->pc != 0x2145D8u) { return; }
    }
    ctx->pc = 0x2145D8u;
    // 0x2145d8: 0x8e24e46c  lw          $a0, -0x1B94($s1)
    ctx->pc = 0x2145d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960236)));
    // 0x2145dc: 0x3c0556e6  lui         $a1, 0x56E6
    ctx->pc = 0x2145dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22246 << 16));
    // 0x2145e0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2145e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2145e4: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x2145e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2145e8: 0xc060570  jal         func_1815C0
    ctx->pc = 0x2145E8u;
    SET_GPR_U32(ctx, 31, 0x2145F0u);
    ctx->pc = 0x2145ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2145E8u;
            // 0x2145ec: 0x34a56a5f  ori         $a1, $a1, 0x6A5F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27231);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2145F0u; }
        if (ctx->pc != 0x2145F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2145F0u; }
        if (ctx->pc != 0x2145F0u) { return; }
    }
    ctx->pc = 0x2145F0u;
    // 0x2145f0: 0x8e24e46c  lw          $a0, -0x1B94($s1)
    ctx->pc = 0x2145f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960236)));
    // 0x2145f4: 0x3c050c67  lui         $a1, 0xC67
    ctx->pc = 0x2145f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3175 << 16));
    // 0x2145f8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2145f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2145fc: 0x27a7009e  addiu       $a3, $sp, 0x9E
    ctx->pc = 0x2145fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 158));
    // 0x214600: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x214600u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214604: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x214604u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214608: 0xc06074a  jal         func_181D28
    ctx->pc = 0x214608u;
    SET_GPR_U32(ctx, 31, 0x214610u);
    ctx->pc = 0x21460Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214608u;
            // 0x21460c: 0x34a5f4f9  ori         $a1, $a1, 0xF4F9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62713);
        ctx->in_delay_slot = false;
    ctx->pc = 0x181D28u;
    if (runtime->hasFunction(0x181D28u)) {
        auto targetFn = runtime->lookupFunction(0x181D28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214610u; }
        if (ctx->pc != 0x214610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181D28_0x181d28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214610u; }
        if (ctx->pc != 0x214610u) { return; }
    }
    ctx->pc = 0x214610u;
    // 0x214610: 0x8e24e46c  lw          $a0, -0x1B94($s1)
    ctx->pc = 0x214610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960236)));
    // 0x214614: 0x3c0570f2  lui         $a1, 0x70F2
    ctx->pc = 0x214614u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28914 << 16));
    // 0x214618: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x214618u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21461c: 0x27a700a4  addiu       $a3, $sp, 0xA4
    ctx->pc = 0x21461cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x214620: 0xc060570  jal         func_1815C0
    ctx->pc = 0x214620u;
    SET_GPR_U32(ctx, 31, 0x214628u);
    ctx->pc = 0x214624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214620u;
            // 0x214624: 0x34a53994  ori         $a1, $a1, 0x3994 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)14740);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214628u; }
        if (ctx->pc != 0x214628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214628u; }
        if (ctx->pc != 0x214628u) { return; }
    }
    ctx->pc = 0x214628u;
    // 0x214628: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x214628u;
    SET_GPR_U32(ctx, 31, 0x214630u);
    ctx->pc = 0x21462Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214628u;
            // 0x21462c: 0x8e24e46c  lw          $a0, -0x1B94($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960236)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214630u; }
        if (ctx->pc != 0x214630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214630u; }
        if (ctx->pc != 0x214630u) { return; }
    }
    ctx->pc = 0x214630u;
    // 0x214630: 0x8e24e46c  lw          $a0, -0x1B94($s1)
    ctx->pc = 0x214630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960236)));
    // 0x214634: 0x3c0525bb  lui         $a1, 0x25BB
    ctx->pc = 0x214634u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)9659 << 16));
    // 0x214638: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x214638u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21463c: 0x27a700a8  addiu       $a3, $sp, 0xA8
    ctx->pc = 0x21463cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x214640: 0xc060570  jal         func_1815C0
    ctx->pc = 0x214640u;
    SET_GPR_U32(ctx, 31, 0x214648u);
    ctx->pc = 0x214644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214640u;
            // 0x214644: 0x34a5317e  ori         $a1, $a1, 0x317E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)12670);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214648u; }
        if (ctx->pc != 0x214648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214648u; }
        if (ctx->pc != 0x214648u) { return; }
    }
    ctx->pc = 0x214648u;
    // 0x214648: 0x8e24e46c  lw          $a0, -0x1B94($s1)
    ctx->pc = 0x214648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960236)));
    // 0x21464c: 0x3c052b2d  lui         $a1, 0x2B2D
    ctx->pc = 0x21464cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)11053 << 16));
    // 0x214650: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x214650u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214654: 0x27a700ac  addiu       $a3, $sp, 0xAC
    ctx->pc = 0x214654u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x214658: 0xc060570  jal         func_1815C0
    ctx->pc = 0x214658u;
    SET_GPR_U32(ctx, 31, 0x214660u);
    ctx->pc = 0x21465Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214658u;
            // 0x21465c: 0x34a52457  ori         $a1, $a1, 0x2457 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)9303);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214660u; }
        if (ctx->pc != 0x214660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214660u; }
        if (ctx->pc != 0x214660u) { return; }
    }
    ctx->pc = 0x214660u;
    // 0x214660: 0x8e24e46c  lw          $a0, -0x1B94($s1)
    ctx->pc = 0x214660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960236)));
    // 0x214664: 0x3c05b4a0  lui         $a1, 0xB4A0
    ctx->pc = 0x214664u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)46240 << 16));
    // 0x214668: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x214668u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21466c: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x21466cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x214670: 0xc060570  jal         func_1815C0
    ctx->pc = 0x214670u;
    SET_GPR_U32(ctx, 31, 0x214678u);
    ctx->pc = 0x214674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214670u;
            // 0x214674: 0x34a5531b  ori         $a1, $a1, 0x531B (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)21275);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214678u; }
        if (ctx->pc != 0x214678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214678u; }
        if (ctx->pc != 0x214678u) { return; }
    }
    ctx->pc = 0x214678u;
    // 0x214678: 0x8e24e46c  lw          $a0, -0x1B94($s1)
    ctx->pc = 0x214678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960236)));
    // 0x21467c: 0x3c05b2a8  lui         $a1, 0xB2A8
    ctx->pc = 0x21467cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45736 << 16));
    // 0x214680: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x214680u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214684: 0x27a700b4  addiu       $a3, $sp, 0xB4
    ctx->pc = 0x214684u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x214688: 0xc060570  jal         func_1815C0
    ctx->pc = 0x214688u;
    SET_GPR_U32(ctx, 31, 0x214690u);
    ctx->pc = 0x21468Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214688u;
            // 0x21468c: 0x34a5856f  ori         $a1, $a1, 0x856F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34159);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214690u; }
        if (ctx->pc != 0x214690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214690u; }
        if (ctx->pc != 0x214690u) { return; }
    }
    ctx->pc = 0x214690u;
    // 0x214690: 0x27b000b8  addiu       $s0, $sp, 0xB8
    ctx->pc = 0x214690u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x214694: 0x8e24e46c  lw          $a0, -0x1B94($s1)
    ctx->pc = 0x214694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960236)));
    // 0x214698: 0x3c05ca68  lui         $a1, 0xCA68
    ctx->pc = 0x214698u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51816 << 16));
    // 0x21469c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x21469cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2146a0: 0x34a56863  ori         $a1, $a1, 0x6863
    ctx->pc = 0x2146a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26723);
    // 0x2146a4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2146a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2146a8: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x2146A8u;
    SET_GPR_U32(ctx, 31, 0x2146B0u);
    ctx->pc = 0x2146ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2146A8u;
            // 0x2146ac: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2146B0u; }
        if (ctx->pc != 0x2146B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2146B0u; }
        if (ctx->pc != 0x2146B0u) { return; }
    }
    ctx->pc = 0x2146B0u;
    // 0x2146b0: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x2146B0u;
    SET_GPR_U32(ctx, 31, 0x2146B8u);
    ctx->pc = 0x2146B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2146B0u;
            // 0x2146b4: 0x8e24e46c  lw          $a0, -0x1B94($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960236)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2146B8u; }
        if (ctx->pc != 0x2146B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2146B8u; }
        if (ctx->pc != 0x2146B8u) { return; }
    }
    ctx->pc = 0x2146B8u;
    // 0x2146b8: 0x8e24e46c  lw          $a0, -0x1B94($s1)
    ctx->pc = 0x2146b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960236)));
    // 0x2146bc: 0x3c05fb90  lui         $a1, 0xFB90
    ctx->pc = 0x2146bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64400 << 16));
    // 0x2146c0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2146c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2146c4: 0x34a58478  ori         $a1, $a1, 0x8478
    ctx->pc = 0x2146c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)33912);
    // 0x2146c8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2146c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2146cc: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x2146CCu;
    SET_GPR_U32(ctx, 31, 0x2146D4u);
    ctx->pc = 0x2146D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2146CCu;
            // 0x2146d0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2146D4u; }
        if (ctx->pc != 0x2146D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2146D4u; }
        if (ctx->pc != 0x2146D4u) { return; }
    }
    ctx->pc = 0x2146D4u;
    // 0x2146d4: 0x8e24e46c  lw          $a0, -0x1B94($s1)
    ctx->pc = 0x2146d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960236)));
    // 0x2146d8: 0x3c05e88f  lui         $a1, 0xE88F
    ctx->pc = 0x2146d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59535 << 16));
    // 0x2146dc: 0x34a5da39  ori         $a1, $a1, 0xDA39
    ctx->pc = 0x2146dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55865);
    // 0x2146e0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2146e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2146e4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2146e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2146e8: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x2146E8u;
    SET_GPR_U32(ctx, 31, 0x2146F0u);
    ctx->pc = 0x2146ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2146E8u;
            // 0x2146ec: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2146F0u; }
        if (ctx->pc != 0x2146F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2146F0u; }
        if (ctx->pc != 0x2146F0u) { return; }
    }
    ctx->pc = 0x2146F0u;
    // 0x2146f0: 0xc04f860  jal         func_13E180
    ctx->pc = 0x2146F0u;
    SET_GPR_U32(ctx, 31, 0x2146F8u);
    ctx->pc = 0x13E180u;
    if (runtime->hasFunction(0x13E180u)) {
        auto targetFn = runtime->lookupFunction(0x13E180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2146F8u; }
        if (ctx->pc != 0x2146F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e180_0x13e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2146F8u; }
        if (ctx->pc != 0x2146F8u) { return; }
    }
    ctx->pc = 0x2146F8u;
    // 0x2146f8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2146f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2146fc: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x2146fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x214700: 0x2442ead8  addiu       $v0, $v0, -0x1528
    ctx->pc = 0x214700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961880));
    // 0x214704: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x214704u;
    {
        const bool branch_taken_0x214704 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x214708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214704u;
            // 0x214708: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214704) {
            ctx->pc = 0x214714u;
            goto label_214714;
        }
    }
    ctx->pc = 0x21470Cu;
    // 0x21470c: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x21470Cu;
    SET_GPR_U32(ctx, 31, 0x214714u);
    ctx->pc = 0x214710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21470Cu;
            // 0x214710: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214714u; }
        if (ctx->pc != 0x214714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214714u; }
        if (ctx->pc != 0x214714u) { return; }
    }
    ctx->pc = 0x214714u;
label_214714:
    // 0x214714: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x214714u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x214718: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x214718u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x21471c: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x21471cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x214720: 0x3e00008  jr          $ra
    ctx->pc = 0x214720u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214720u;
            // 0x214724: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x214714u: goto label_214714;
            default: break;
        }
        return;
    }
    ctx->pc = 0x214728u;
}
