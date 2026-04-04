#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002920A0
// Address: 0x2920a0 - 0x292100
void sub_002920A0_0x2920a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002920A0_0x2920a0");
#endif

    ctx->pc = 0x2920a0u;

    // 0x2920a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2920a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2920a4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2920a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2920a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2920a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2920ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2920acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2920b0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2920b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2920b4: 0x3c110036  lui         $s1, 0x36
    ctx->pc = 0x2920b4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)54 << 16));
    // 0x2920b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2920b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2920bc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2920bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2920c0: 0xc0a50e8  jal         func_2943A0
    ctx->pc = 0x2920C0u;
    SET_GPR_U32(ctx, 31, 0x2920C8u);
    ctx->pc = 0x2920C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2920C0u;
            // 0x2920c4: 0xae20c1a4  sw          $zero, -0x3E5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294951332), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2943A0u;
    if (runtime->hasFunction(0x2943A0u)) {
        auto targetFn = runtime->lookupFunction(0x2943A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2920C8u; }
        if (ctx->pc != 0x2920C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2943a0_0x2943b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2920C8u; }
        if (ctx->pc != 0x2920C8u) { return; }
    }
    ctx->pc = 0x2920C8u;
    // 0x2920c8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2920c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2920cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2920ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2920d0: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2920D0u;
    {
        const bool branch_taken_0x2920d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2920d0) {
            ctx->pc = 0x2920D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2920D0u;
            // 0x2920d4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2920E8u;
            goto label_2920e8;
        }
    }
    ctx->pc = 0x2920D8u;
    // 0x2920d8: 0x8e22c1a4  lw          $v0, -0x3E5C($s1)
    ctx->pc = 0x2920d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294951332)));
    // 0x2920dc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2920DCu;
    {
        const bool branch_taken_0x2920dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2920dc) {
            ctx->pc = 0x2920E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2920DCu;
            // 0x2920e0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2920E4u;
            goto label_2920e4;
        }
    }
    ctx->pc = 0x2920E4u;
label_2920e4:
    // 0x2920e4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2920e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2920e8:
    // 0x2920e8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2920e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2920ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2920ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2920f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2920f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2920f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2920F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2920F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2920F4u;
            // 0x2920f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2920E4u: goto label_2920e4;
            case 0x2920E8u: goto label_2920e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2920FCu;
    // 0x2920fc: 0x0  nop
    ctx->pc = 0x2920fcu;
    // NOP
}
