#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001937C8
// Address: 0x1937c8 - 0x193810
void sub_001937C8_0x1937c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001937C8_0x1937c8");
#endif

    ctx->pc = 0x1937c8u;

    // 0x1937c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1937c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1937cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1937ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1937d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1937d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1937d4: 0xc05d656  jal         func_175958
    ctx->pc = 0x1937D4u;
    SET_GPR_U32(ctx, 31, 0x1937DCu);
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1937DCu; }
        if (ctx->pc != 0x1937DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1937DCu; }
        if (ctx->pc != 0x1937DCu) { return; }
    }
    ctx->pc = 0x1937DCu;
    // 0x1937dc: 0xc064afe  jal         func_192BF8
    ctx->pc = 0x1937DCu;
    SET_GPR_U32(ctx, 31, 0x1937E4u);
    ctx->pc = 0x1937E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1937DCu;
            // 0x1937e0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192BF8u;
    if (runtime->hasFunction(0x192BF8u)) {
        auto targetFn = runtime->lookupFunction(0x192BF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1937E4u; }
        if (ctx->pc != 0x1937E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192BF8_0x192bf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1937E4u; }
        if (ctx->pc != 0x1937E4u) { return; }
    }
    ctx->pc = 0x1937E4u;
    // 0x1937e4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1937e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1937e8: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x1937e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x1937ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1937ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1937f0: 0x24a53360  addiu       $a1, $a1, 0x3360
    ctx->pc = 0x1937f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13152));
    // 0x1937f4: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x1937F4u;
    SET_GPR_U32(ctx, 31, 0x1937FCu);
    ctx->pc = 0x1937F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1937F4u;
            // 0x1937f8: 0x24c636a0  addiu       $a2, $a2, 0x36A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13984));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1937FCu; }
        if (ctx->pc != 0x1937FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1937FCu; }
        if (ctx->pc != 0x1937FCu) { return; }
    }
    ctx->pc = 0x1937FCu;
    // 0x1937fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1937fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193800: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x193800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193804: 0x3e00008  jr          $ra
    ctx->pc = 0x193804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193804u;
            // 0x193808: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19380Cu;
    // 0x19380c: 0x0  nop
    ctx->pc = 0x19380cu;
    // NOP
}
