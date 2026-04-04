#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00239180
// Address: 0x239180 - 0x2391d8
void sub_00239180_0x239180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239180_0x239180");
#endif

    ctx->pc = 0x239180u;

    // 0x239180: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x239180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x239184: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x239184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x239188: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x239188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23918c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23918cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239190: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x239190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x239194: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x239194u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239198: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x239198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x23919c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23919Cu;
    {
        const bool branch_taken_0x23919c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2391A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23919Cu;
            // 0x2391a0: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23919c) {
            ctx->pc = 0x2391ACu;
            goto label_2391ac;
        }
    }
    ctx->pc = 0x2391A4u;
    // 0x2391a4: 0xc05daca  jal         func_176B28
    ctx->pc = 0x2391A4u;
    SET_GPR_U32(ctx, 31, 0x2391ACu);
    ctx->pc = 0x176B28u;
    if (runtime->hasFunction(0x176B28u)) {
        auto targetFn = runtime->lookupFunction(0x176B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2391ACu; }
        if (ctx->pc != 0x2391ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00176B28_0x176b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2391ACu; }
        if (ctx->pc != 0x2391ACu) { return; }
    }
    ctx->pc = 0x2391ACu;
label_2391ac:
    // 0x2391ac: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2391acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x2391b0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2391B0u;
    {
        const bool branch_taken_0x2391b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2391b0) {
            ctx->pc = 0x2391B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2391B0u;
            // 0x2391b4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2391C4u;
            goto label_2391c4;
        }
    }
    ctx->pc = 0x2391B8u;
    // 0x2391b8: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x2391B8u;
    SET_GPR_U32(ctx, 31, 0x2391C0u);
    ctx->pc = 0x2391BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2391B8u;
            // 0x2391bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2391C0u; }
        if (ctx->pc != 0x2391C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2391C0u; }
        if (ctx->pc != 0x2391C0u) { return; }
    }
    ctx->pc = 0x2391C0u;
    // 0x2391c0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2391c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2391c4:
    // 0x2391c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2391c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2391c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2391c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2391cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2391CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2391D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2391CCu;
            // 0x2391d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2391ACu: goto label_2391ac;
            case 0x2391C4u: goto label_2391c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2391D4u;
    // 0x2391d4: 0x0  nop
    ctx->pc = 0x2391d4u;
    // NOP
}
