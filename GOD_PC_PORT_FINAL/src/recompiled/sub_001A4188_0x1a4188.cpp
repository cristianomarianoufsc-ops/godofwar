#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A4188
// Address: 0x1a4188 - 0x1a4268
void sub_001A4188_0x1a4188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4188_0x1a4188");
#endif

    ctx->pc = 0x1a4188u;

    // 0x1a4188: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a4188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a418c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a418cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a4190: 0xc0699f2  jal         func_1A67C8
    ctx->pc = 0x1A4190u;
    SET_GPR_U32(ctx, 31, 0x1A4198u);
    ctx->pc = 0x1A67C8u;
    if (runtime->hasFunction(0x1A67C8u)) {
        auto targetFn = runtime->lookupFunction(0x1A67C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4198u; }
        if (ctx->pc != 0x1A4198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A67C8_0x1a67c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4198u; }
        if (ctx->pc != 0x1A4198u) { return; }
    }
    ctx->pc = 0x1A4198u;
    // 0x1a4198: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x1a4198u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
    // 0x1a419c: 0xc069b06  jal         func_1A6C18
    ctx->pc = 0x1A419Cu;
    SET_GPR_U32(ctx, 31, 0x1A41A4u);
    ctx->pc = 0x1A41A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A419Cu;
            // 0x1a41a0: 0x24844590  addiu       $a0, $a0, 0x4590 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6C18u;
    if (runtime->hasFunction(0x1A6C18u)) {
        auto targetFn = runtime->lookupFunction(0x1A6C18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A41A4u; }
        if (ctx->pc != 0x1A41A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a6c18_0x1a6c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A41A4u; }
        if (ctx->pc != 0x1A41A4u) { return; }
    }
    ctx->pc = 0x1A41A4u;
    // 0x1a41a4: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x1a41a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
    // 0x1a41a8: 0xc069b06  jal         func_1A6C18
    ctx->pc = 0x1A41A8u;
    SET_GPR_U32(ctx, 31, 0x1A41B0u);
    ctx->pc = 0x1A41ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A41A8u;
            // 0x1a41ac: 0x248445c8  addiu       $a0, $a0, 0x45C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6C18u;
    if (runtime->hasFunction(0x1A6C18u)) {
        auto targetFn = runtime->lookupFunction(0x1A6C18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A41B0u; }
        if (ctx->pc != 0x1A41B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a6c18_0x1a6c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A41B0u; }
        if (ctx->pc != 0x1A41B0u) { return; }
    }
    ctx->pc = 0x1A41B0u;
    // 0x1a41b0: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x1a41b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
    // 0x1a41b4: 0xc069b06  jal         func_1A6C18
    ctx->pc = 0x1A41B4u;
    SET_GPR_U32(ctx, 31, 0x1A41BCu);
    ctx->pc = 0x1A41B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A41B4u;
            // 0x1a41b8: 0x24844600  addiu       $a0, $a0, 0x4600 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6C18u;
    if (runtime->hasFunction(0x1A6C18u)) {
        auto targetFn = runtime->lookupFunction(0x1A6C18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A41BCu; }
        if (ctx->pc != 0x1A41BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a6c18_0x1a6c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A41BCu; }
        if (ctx->pc != 0x1A41BCu) { return; }
    }
    ctx->pc = 0x1A41BCu;
    // 0x1a41bc: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x1a41bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
    // 0x1a41c0: 0xc069b06  jal         func_1A6C18
    ctx->pc = 0x1A41C0u;
    SET_GPR_U32(ctx, 31, 0x1A41C8u);
    ctx->pc = 0x1A41C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A41C0u;
            // 0x1a41c4: 0x24844638  addiu       $a0, $a0, 0x4638 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6C18u;
    if (runtime->hasFunction(0x1A6C18u)) {
        auto targetFn = runtime->lookupFunction(0x1A6C18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A41C8u; }
        if (ctx->pc != 0x1A41C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a6c18_0x1a6c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A41C8u; }
        if (ctx->pc != 0x1A41C8u) { return; }
    }
    ctx->pc = 0x1A41C8u;
    // 0x1a41c8: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x1a41c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
    // 0x1a41cc: 0xc069b06  jal         func_1A6C18
    ctx->pc = 0x1A41CCu;
    SET_GPR_U32(ctx, 31, 0x1A41D4u);
    ctx->pc = 0x1A41D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A41CCu;
            // 0x1a41d0: 0x24844670  addiu       $a0, $a0, 0x4670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18032));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6C18u;
    if (runtime->hasFunction(0x1A6C18u)) {
        auto targetFn = runtime->lookupFunction(0x1A6C18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A41D4u; }
        if (ctx->pc != 0x1A41D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a6c18_0x1a6c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A41D4u; }
        if (ctx->pc != 0x1A41D4u) { return; }
    }
    ctx->pc = 0x1A41D4u;
    // 0x1a41d4: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x1a41d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
    // 0x1a41d8: 0xc069b06  jal         func_1A6C18
    ctx->pc = 0x1A41D8u;
    SET_GPR_U32(ctx, 31, 0x1A41E0u);
    ctx->pc = 0x1A41DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A41D8u;
            // 0x1a41dc: 0x248446a8  addiu       $a0, $a0, 0x46A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6C18u;
    if (runtime->hasFunction(0x1A6C18u)) {
        auto targetFn = runtime->lookupFunction(0x1A6C18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A41E0u; }
        if (ctx->pc != 0x1A41E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a6c18_0x1a6c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A41E0u; }
        if (ctx->pc != 0x1A41E0u) { return; }
    }
    ctx->pc = 0x1A41E0u;
    // 0x1a41e0: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x1a41e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
    // 0x1a41e4: 0xc069b06  jal         func_1A6C18
    ctx->pc = 0x1A41E4u;
    SET_GPR_U32(ctx, 31, 0x1A41ECu);
    ctx->pc = 0x1A41E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A41E4u;
            // 0x1a41e8: 0x248446e0  addiu       $a0, $a0, 0x46E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6C18u;
    if (runtime->hasFunction(0x1A6C18u)) {
        auto targetFn = runtime->lookupFunction(0x1A6C18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A41ECu; }
        if (ctx->pc != 0x1A41ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a6c18_0x1a6c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A41ECu; }
        if (ctx->pc != 0x1A41ECu) { return; }
    }
    ctx->pc = 0x1A41ECu;
    // 0x1a41ec: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x1a41ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
    // 0x1a41f0: 0xc069b06  jal         func_1A6C18
    ctx->pc = 0x1A41F0u;
    SET_GPR_U32(ctx, 31, 0x1A41F8u);
    ctx->pc = 0x1A41F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A41F0u;
            // 0x1a41f4: 0x24844718  addiu       $a0, $a0, 0x4718 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6C18u;
    if (runtime->hasFunction(0x1A6C18u)) {
        auto targetFn = runtime->lookupFunction(0x1A6C18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A41F8u; }
        if (ctx->pc != 0x1A41F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a6c18_0x1a6c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A41F8u; }
        if (ctx->pc != 0x1A41F8u) { return; }
    }
    ctx->pc = 0x1A41F8u;
    // 0x1a41f8: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x1a41f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
    // 0x1a41fc: 0xc069b06  jal         func_1A6C18
    ctx->pc = 0x1A41FCu;
    SET_GPR_U32(ctx, 31, 0x1A4204u);
    ctx->pc = 0x1A4200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A41FCu;
            // 0x1a4200: 0x24844750  addiu       $a0, $a0, 0x4750 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6C18u;
    if (runtime->hasFunction(0x1A6C18u)) {
        auto targetFn = runtime->lookupFunction(0x1A6C18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4204u; }
        if (ctx->pc != 0x1A4204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a6c18_0x1a6c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4204u; }
        if (ctx->pc != 0x1A4204u) { return; }
    }
    ctx->pc = 0x1A4204u;
    // 0x1a4204: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x1a4204u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
    // 0x1a4208: 0xc069b06  jal         func_1A6C18
    ctx->pc = 0x1A4208u;
    SET_GPR_U32(ctx, 31, 0x1A4210u);
    ctx->pc = 0x1A420Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4208u;
            // 0x1a420c: 0x24844788  addiu       $a0, $a0, 0x4788 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6C18u;
    if (runtime->hasFunction(0x1A6C18u)) {
        auto targetFn = runtime->lookupFunction(0x1A6C18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4210u; }
        if (ctx->pc != 0x1A4210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a6c18_0x1a6c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4210u; }
        if (ctx->pc != 0x1A4210u) { return; }
    }
    ctx->pc = 0x1A4210u;
    // 0x1a4210: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x1a4210u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
    // 0x1a4214: 0xc069b06  jal         func_1A6C18
    ctx->pc = 0x1A4214u;
    SET_GPR_U32(ctx, 31, 0x1A421Cu);
    ctx->pc = 0x1A4218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4214u;
            // 0x1a4218: 0x248447c0  addiu       $a0, $a0, 0x47C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6C18u;
    if (runtime->hasFunction(0x1A6C18u)) {
        auto targetFn = runtime->lookupFunction(0x1A6C18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A421Cu; }
        if (ctx->pc != 0x1A421Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a6c18_0x1a6c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A421Cu; }
        if (ctx->pc != 0x1A421Cu) { return; }
    }
    ctx->pc = 0x1A421Cu;
    // 0x1a421c: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x1a421cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
    // 0x1a4220: 0xc069b06  jal         func_1A6C18
    ctx->pc = 0x1A4220u;
    SET_GPR_U32(ctx, 31, 0x1A4228u);
    ctx->pc = 0x1A4224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4220u;
            // 0x1a4224: 0x248447f8  addiu       $a0, $a0, 0x47F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18424));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6C18u;
    if (runtime->hasFunction(0x1A6C18u)) {
        auto targetFn = runtime->lookupFunction(0x1A6C18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4228u; }
        if (ctx->pc != 0x1A4228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a6c18_0x1a6c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4228u; }
        if (ctx->pc != 0x1A4228u) { return; }
    }
    ctx->pc = 0x1A4228u;
    // 0x1a4228: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x1a4228u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
    // 0x1a422c: 0xc069b06  jal         func_1A6C18
    ctx->pc = 0x1A422Cu;
    SET_GPR_U32(ctx, 31, 0x1A4234u);
    ctx->pc = 0x1A4230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A422Cu;
            // 0x1a4230: 0x24844830  addiu       $a0, $a0, 0x4830 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6C18u;
    if (runtime->hasFunction(0x1A6C18u)) {
        auto targetFn = runtime->lookupFunction(0x1A6C18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4234u; }
        if (ctx->pc != 0x1A4234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a6c18_0x1a6c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4234u; }
        if (ctx->pc != 0x1A4234u) { return; }
    }
    ctx->pc = 0x1A4234u;
    // 0x1a4234: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x1a4234u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
    // 0x1a4238: 0xc069b06  jal         func_1A6C18
    ctx->pc = 0x1A4238u;
    SET_GPR_U32(ctx, 31, 0x1A4240u);
    ctx->pc = 0x1A423Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4238u;
            // 0x1a423c: 0x24844870  addiu       $a0, $a0, 0x4870 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6C18u;
    if (runtime->hasFunction(0x1A6C18u)) {
        auto targetFn = runtime->lookupFunction(0x1A6C18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4240u; }
        if (ctx->pc != 0x1A4240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a6c18_0x1a6c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4240u; }
        if (ctx->pc != 0x1A4240u) { return; }
    }
    ctx->pc = 0x1A4240u;
    // 0x1a4240: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x1a4240u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
    // 0x1a4244: 0xc069b06  jal         func_1A6C18
    ctx->pc = 0x1A4244u;
    SET_GPR_U32(ctx, 31, 0x1A424Cu);
    ctx->pc = 0x1A4248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4244u;
            // 0x1a4248: 0x248448b0  addiu       $a0, $a0, 0x48B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6C18u;
    if (runtime->hasFunction(0x1A6C18u)) {
        auto targetFn = runtime->lookupFunction(0x1A6C18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A424Cu; }
        if (ctx->pc != 0x1A424Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a6c18_0x1a6c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A424Cu; }
        if (ctx->pc != 0x1A424Cu) { return; }
    }
    ctx->pc = 0x1A424Cu;
    // 0x1a424c: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x1a424cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
    // 0x1a4250: 0xc069b06  jal         func_1A6C18
    ctx->pc = 0x1A4250u;
    SET_GPR_U32(ctx, 31, 0x1A4258u);
    ctx->pc = 0x1A4254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4250u;
            // 0x1a4254: 0x248448e8  addiu       $a0, $a0, 0x48E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6C18u;
    if (runtime->hasFunction(0x1A6C18u)) {
        auto targetFn = runtime->lookupFunction(0x1A6C18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4258u; }
        if (ctx->pc != 0x1A4258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a6c18_0x1a6c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4258u; }
        if (ctx->pc != 0x1A4258u) { return; }
    }
    ctx->pc = 0x1A4258u;
    // 0x1a4258: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a4258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a425c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A425Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A425Cu;
            // 0x1a4260: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A4264u;
    // 0x1a4264: 0x0  nop
    ctx->pc = 0x1a4264u;
    // NOP
}
