#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001994F8
// Address: 0x1994f8 - 0x199530
void sub_001994F8_0x1994f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001994F8_0x1994f8");
#endif

    ctx->pc = 0x1994f8u;

    // 0x1994f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1994f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1994fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1994fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x199500: 0xc05d656  jal         func_175958
    ctx->pc = 0x199500u;
    SET_GPR_U32(ctx, 31, 0x199508u);
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199508u; }
        if (ctx->pc != 0x199508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199508u; }
        if (ctx->pc != 0x199508u) { return; }
    }
    ctx->pc = 0x199508u;
    // 0x199508: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x199508u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x19950c: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x19950cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x199510: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x199510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199514: 0x24a539f8  addiu       $a1, $a1, 0x39F8
    ctx->pc = 0x199514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14840));
    // 0x199518: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x199518u;
    SET_GPR_U32(ctx, 31, 0x199520u);
    ctx->pc = 0x19951Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199518u;
            // 0x19951c: 0x24c69460  addiu       $a2, $a2, -0x6BA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939744));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199520u; }
        if (ctx->pc != 0x199520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199520u; }
        if (ctx->pc != 0x199520u) { return; }
    }
    ctx->pc = 0x199520u;
    // 0x199520: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x199520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199524: 0x3e00008  jr          $ra
    ctx->pc = 0x199524u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199524u;
            // 0x199528: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19952Cu;
    // 0x19952c: 0x0  nop
    ctx->pc = 0x19952cu;
    // NOP
}
