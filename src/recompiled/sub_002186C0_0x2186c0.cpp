#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002186C0
// Address: 0x2186c0 - 0x218718
void sub_002186C0_0x2186c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002186C0_0x2186c0");
#endif

    ctx->pc = 0x2186c0u;

    // 0x2186c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2186c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2186c4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x2186c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x2186c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2186c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2186cc: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x2186ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x2186d0: 0x3c10002b  lui         $s0, 0x2B
    ctx->pc = 0x2186d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)43 << 16));
    // 0x2186d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2186d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2186d8: 0x26105b90  addiu       $s0, $s0, 0x5B90
    ctx->pc = 0x2186d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23440));
    // 0x2186dc: 0x24a57e20  addiu       $a1, $a1, 0x7E20
    ctx->pc = 0x2186dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32288));
    // 0x2186e0: 0x24c6e4b8  addiu       $a2, $a2, -0x1B48
    ctx->pc = 0x2186e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960312));
    // 0x2186e4: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x2186E4u;
    SET_GPR_U32(ctx, 31, 0x2186ECu);
    ctx->pc = 0x2186E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2186E4u;
            // 0x2186e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2186ECu; }
        if (ctx->pc != 0x2186ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2186ECu; }
        if (ctx->pc != 0x2186ECu) { return; }
    }
    ctx->pc = 0x2186ECu;
    // 0x2186ec: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x2186ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x2186f0: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x2186f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x2186f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2186f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2186f8: 0x24a57e40  addiu       $a1, $a1, 0x7E40
    ctx->pc = 0x2186f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32320));
    // 0x2186fc: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x2186FCu;
    SET_GPR_U32(ctx, 31, 0x218704u);
    ctx->pc = 0x218700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2186FCu;
            // 0x218700: 0x24c6e4bc  addiu       $a2, $a2, -0x1B44 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960316));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218704u; }
        if (ctx->pc != 0x218704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218704u; }
        if (ctx->pc != 0x218704u) { return; }
    }
    ctx->pc = 0x218704u;
    // 0x218704: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x218704u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218708: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x218708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21870c: 0x3e00008  jr          $ra
    ctx->pc = 0x21870Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21870Cu;
            // 0x218710: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x218714u;
    // 0x218714: 0x0  nop
    ctx->pc = 0x218714u;
    // NOP
}
