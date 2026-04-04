#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BBBA0
// Address: 0x1bbba0 - 0x1bbbf8
void sub_001BBBA0_0x1bbba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BBBA0_0x1bbba0");
#endif

    ctx->pc = 0x1bbba0u;

    // 0x1bbba0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1bbba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1bbba4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bbba4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bbba8: 0x8c46cd58  lw          $a2, -0x32A8($v0)
    ctx->pc = 0x1bbba8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x1bbbac: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x1BBBACu;
    {
        const bool branch_taken_0x1bbbac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBBB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBBACu;
            // 0x1bbbb0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbbac) {
            ctx->pc = 0x1BBBE8u;
            goto label_1bbbe8;
        }
    }
    ctx->pc = 0x1BBBB4u;
    // 0x1bbbb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bbbb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bbbb8:
    // 0x1bbbb8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bbbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bbbbc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1bbbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1bbbc0: 0x24425a40  addiu       $v0, $v0, 0x5A40
    ctx->pc = 0x1bbbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23104));
    // 0x1bbbc4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1bbbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bbbc8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bbbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bbbcc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1bbbccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1bbbd0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1bbbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bbbd4: 0x28a30006  slti        $v1, $a1, 0x6
    ctx->pc = 0x1bbbd4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1bbbd8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1BBBD8u;
    {
        const bool branch_taken_0x1bbbd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BBBDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBBD8u;
            // 0x1bbbdc: 0xa4440004  sh          $a0, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbbd8) {
            ctx->pc = 0x1BBBB8u;
            runtime->cooperativeGuestYield();
            goto label_1bbbb8;
        }
    }
    ctx->pc = 0x1BBBE0u;
    // 0x1bbbe0: 0xc075b34  jal         func_1D6CD0
    ctx->pc = 0x1BBBE0u;
    SET_GPR_U32(ctx, 31, 0x1BBBE8u);
    ctx->pc = 0x1BBBE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBBE0u;
            // 0x1bbbe4: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6CD0u;
    if (runtime->hasFunction(0x1D6CD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBBE8u; }
        if (ctx->pc != 0x1BBBE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6CD0_0x1d6cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBBE8u; }
        if (ctx->pc != 0x1BBBE8u) { return; }
    }
    ctx->pc = 0x1BBBE8u;
label_1bbbe8:
    // 0x1bbbe8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bbbe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbbec: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBBECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBBF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBBECu;
            // 0x1bbbf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BBBB8u: goto label_1bbbb8;
            case 0x1BBBE8u: goto label_1bbbe8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BBBF4u;
    // 0x1bbbf4: 0x0  nop
    ctx->pc = 0x1bbbf4u;
    // NOP
}
