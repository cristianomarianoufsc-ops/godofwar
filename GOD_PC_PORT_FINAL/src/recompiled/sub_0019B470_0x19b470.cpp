#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019B470
// Address: 0x19b470 - 0x19b4e8
void sub_0019B470_0x19b470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019B470_0x19b470");
#endif

    ctx->pc = 0x19b470u;

    // 0x19b470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19b470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19b474: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19b474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19b478: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19b478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19b47c: 0xc05d656  jal         func_175958
    ctx->pc = 0x19B47Cu;
    SET_GPR_U32(ctx, 31, 0x19B484u);
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B484u; }
        if (ctx->pc != 0x19B484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B484u; }
        if (ctx->pc != 0x19B484u) { return; }
    }
    ctx->pc = 0x19B484u;
    // 0x19b484: 0xc066d3a  jal         func_19B4E8
    ctx->pc = 0x19B484u;
    SET_GPR_U32(ctx, 31, 0x19B48Cu);
    ctx->pc = 0x19B488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B484u;
            // 0x19b488: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B4E8u;
    if (runtime->hasFunction(0x19B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x19B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B48Cu; }
        if (ctx->pc != 0x19B48Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B4E8_0x19b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B48Cu; }
        if (ctx->pc != 0x19B48Cu) { return; }
    }
    ctx->pc = 0x19B48Cu;
    // 0x19b48c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x19b48cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x19b490: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x19b490u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x19b494: 0x24a53220  addiu       $a1, $a1, 0x3220
    ctx->pc = 0x19b494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12832));
    // 0x19b498: 0x24c6a028  addiu       $a2, $a2, -0x5FD8
    ctx->pc = 0x19b498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942760));
    // 0x19b49c: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x19B49Cu;
    SET_GPR_U32(ctx, 31, 0x19B4A4u);
    ctx->pc = 0x19B4A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B49Cu;
            // 0x19b4a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B4A4u; }
        if (ctx->pc != 0x19B4A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B4A4u; }
        if (ctx->pc != 0x19B4A4u) { return; }
    }
    ctx->pc = 0x19B4A4u;
    // 0x19b4a4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x19b4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x19b4a8: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x19b4a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x19b4ac: 0x24a53a10  addiu       $a1, $a1, 0x3A10
    ctx->pc = 0x19b4acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14864));
    // 0x19b4b0: 0x24c6b140  addiu       $a2, $a2, -0x4EC0
    ctx->pc = 0x19b4b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947136));
    // 0x19b4b4: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x19B4B4u;
    SET_GPR_U32(ctx, 31, 0x19B4BCu);
    ctx->pc = 0x19B4B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B4B4u;
            // 0x19b4b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B4BCu; }
        if (ctx->pc != 0x19B4BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B4BCu; }
        if (ctx->pc != 0x19B4BCu) { return; }
    }
    ctx->pc = 0x19B4BCu;
    // 0x19b4bc: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x19b4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x19b4c0: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x19b4c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x19b4c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b4c8: 0x24a53a28  addiu       $a1, $a1, 0x3A28
    ctx->pc = 0x19b4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14888));
    // 0x19b4cc: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x19B4CCu;
    SET_GPR_U32(ctx, 31, 0x19B4D4u);
    ctx->pc = 0x19B4D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B4CCu;
            // 0x19b4d0: 0x24c6b3c8  addiu       $a2, $a2, -0x4C38 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B4D4u; }
        if (ctx->pc != 0x19B4D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B4D4u; }
        if (ctx->pc != 0x19B4D4u) { return; }
    }
    ctx->pc = 0x19B4D4u;
    // 0x19b4d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19b4d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b4d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19b4d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b4dc: 0x3e00008  jr          $ra
    ctx->pc = 0x19B4DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B4E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B4DCu;
            // 0x19b4e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19B4E4u;
    // 0x19b4e4: 0x0  nop
    ctx->pc = 0x19b4e4u;
    // NOP
}
