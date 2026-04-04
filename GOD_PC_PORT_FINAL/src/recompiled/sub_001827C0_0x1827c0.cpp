#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001827C0
// Address: 0x1827c0 - 0x182810
void sub_001827C0_0x1827c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001827C0_0x1827c0");
#endif

    ctx->pc = 0x1827c0u;

    // 0x1827c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1827c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1827c4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1827c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1827c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1827c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1827cc: 0x2442ea98  addiu       $v0, $v0, -0x1568
    ctx->pc = 0x1827ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961816));
    // 0x1827d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1827d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1827d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1827d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1827d8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1827d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1827dc: 0x8e050034  lw          $a1, 0x34($s0)
    ctx->pc = 0x1827dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1827e0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1827E0u;
    {
        const bool branch_taken_0x1827e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1827E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1827E0u;
            // 0x1827e4: 0x26040034  addiu       $a0, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1827e0) {
            ctx->pc = 0x1827F0u;
            goto label_1827f0;
        }
    }
    ctx->pc = 0x1827E8u;
    // 0x1827e8: 0xc05daca  jal         func_176B28
    ctx->pc = 0x1827E8u;
    SET_GPR_U32(ctx, 31, 0x1827F0u);
    ctx->pc = 0x176B28u;
    if (runtime->hasFunction(0x176B28u)) {
        auto targetFn = runtime->lookupFunction(0x176B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1827F0u; }
        if (ctx->pc != 0x1827F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00176B28_0x176b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1827F0u; }
        if (ctx->pc != 0x1827F0u) { return; }
    }
    ctx->pc = 0x1827F0u;
label_1827f0:
    // 0x1827f0: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1827f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1827f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1827f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1827f8: 0x2442ebc0  addiu       $v0, $v0, -0x1440
    ctx->pc = 0x1827f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962112));
    // 0x1827fc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1827fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x182800: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x182800u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182804: 0x3e00008  jr          $ra
    ctx->pc = 0x182804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182804u;
            // 0x182808: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1827F0u: goto label_1827f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18280Cu;
    // 0x18280c: 0x0  nop
    ctx->pc = 0x18280cu;
    // NOP
}
