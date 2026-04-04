#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019F7B8
// Address: 0x19f7b8 - 0x19f808
void sub_0019F7B8_0x19f7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F7B8_0x19f7b8");
#endif

    ctx->pc = 0x19f7b8u;

    // 0x19f7b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19f7b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19f7bc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19f7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19f7c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19f7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19f7c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19f7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19f7c8: 0xc067e02  jal         func_19F808
    ctx->pc = 0x19F7C8u;
    SET_GPR_U32(ctx, 31, 0x19F7D0u);
    ctx->pc = 0x19F808u;
    if (runtime->hasFunction(0x19F808u)) {
        auto targetFn = runtime->lookupFunction(0x19F808u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F7D0u; }
        if (ctx->pc != 0x19F7D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_19f808_0x19f830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F7D0u; }
        if (ctx->pc != 0x19F7D0u) { return; }
    }
    ctx->pc = 0x19F7D0u;
    // 0x19f7d0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19F7D0u;
    {
        const bool branch_taken_0x19f7d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F7D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F7D0u;
            // 0x19f7d4: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f7d0) {
            ctx->pc = 0x19F7F4u;
            goto label_19f7f4;
        }
    }
    ctx->pc = 0x19F7D8u;
    // 0x19f7d8: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x19f7d8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x19f7dc: 0xc04c9da  jal         func_132768
    ctx->pc = 0x19F7DCu;
    SET_GPR_U32(ctx, 31, 0x19F7E4u);
    ctx->pc = 0x19F7E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F7DCu;
            // 0x19f7e0: 0x8e04c9f0  lw          $a0, -0x3610($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132768u;
    if (runtime->hasFunction(0x132768u)) {
        auto targetFn = runtime->lookupFunction(0x132768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F7E4u; }
        if (ctx->pc != 0x19F7E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132768_0x132768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F7E4u; }
        if (ctx->pc != 0x19F7E4u) { return; }
    }
    ctx->pc = 0x19F7E4u;
    // 0x19f7e4: 0xc04c9da  jal         func_132768
    ctx->pc = 0x19F7E4u;
    SET_GPR_U32(ctx, 31, 0x19F7ECu);
    ctx->pc = 0x19F7E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F7E4u;
            // 0x19f7e8: 0x8e24c9f4  lw          $a0, -0x360C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953460)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132768u;
    if (runtime->hasFunction(0x132768u)) {
        auto targetFn = runtime->lookupFunction(0x132768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F7ECu; }
        if (ctx->pc != 0x19F7ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132768_0x132768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F7ECu; }
        if (ctx->pc != 0x19F7ECu) { return; }
    }
    ctx->pc = 0x19F7ECu;
    // 0x19f7ec: 0xae00c9f0  sw          $zero, -0x3610($s0)
    ctx->pc = 0x19f7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294953456), GPR_U32(ctx, 0));
    // 0x19f7f0: 0xae20c9f4  sw          $zero, -0x360C($s1)
    ctx->pc = 0x19f7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294953460), GPR_U32(ctx, 0));
label_19f7f4:
    // 0x19f7f4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19f7f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f7f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19f7f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f7fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19f7fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f800: 0x3e00008  jr          $ra
    ctx->pc = 0x19F800u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F800u;
            // 0x19f804: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19F7F4u: goto label_19f7f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19F808u;
}
