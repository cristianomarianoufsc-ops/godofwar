#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1832e8
// Address: 0x1832e8 - 0x183330
void entry_1832e8_0x183330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1832e8_0x183330");
#endif

    ctx->pc = 0x1832e8u;

    // 0x1832e8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1832e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1832ec: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1832ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1832f0: 0x8c45f1b4  lw          $a1, -0xE4C($v0)
    ctx->pc = 0x1832f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963636)));
    // 0x1832f4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1832f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1832f8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1832f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1832fc: 0x84661078  lh          $a2, 0x1078($v1)
    ctx->pc = 0x1832fcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4216)));
    // 0x183300: 0x84474f5c  lh          $a3, 0x4F5C($v0)
    ctx->pc = 0x183300u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20316)));
    // 0x183304: 0x30a50002  andi        $a1, $a1, 0x2
    ctx->pc = 0x183304u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x183308: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x183308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18330c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18330cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183310: 0xc09e60e  jal         func_279838
    ctx->pc = 0x183310u;
    SET_GPR_U32(ctx, 31, 0x183318u);
    ctx->pc = 0x183314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183310u;
            // 0x183314: 0x5282b  sltu        $a1, $zero, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x279838u;
    if (runtime->hasFunction(0x279838u)) {
        auto targetFn = runtime->lookupFunction(0x279838u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183318u; }
        if (ctx->pc != 0x183318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00279838_0x279838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183318u; }
        if (ctx->pc != 0x183318u) { return; }
    }
    ctx->pc = 0x183318u;
    // 0x183318: 0xc09e676  jal         func_2799D8
    ctx->pc = 0x183318u;
    SET_GPR_U32(ctx, 31, 0x183320u);
    ctx->pc = 0x2799D8u;
    if (runtime->hasFunction(0x2799D8u)) {
        auto targetFn = runtime->lookupFunction(0x2799D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183320u; }
        if (ctx->pc != 0x183320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2799d8_0x279a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183320u; }
        if (ctx->pc != 0x183320u) { return; }
    }
    ctx->pc = 0x183320u;
    // 0x183320: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x183320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183324: 0x3e00008  jr          $ra
    ctx->pc = 0x183324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183324u;
            // 0x183328: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18332Cu;
    // 0x18332c: 0x0  nop
    ctx->pc = 0x18332cu;
    // NOP
}
