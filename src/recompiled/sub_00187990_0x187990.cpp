#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00187990
// Address: 0x187990 - 0x187a08
void sub_00187990_0x187990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187990_0x187990");
#endif

    ctx->pc = 0x187990u;

    // 0x187990: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x187990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x187994: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x187994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x187998: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x187998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x18799c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18799cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1879a0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1879a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1879a4: 0x8c900024  lw          $s0, 0x24($a0)
    ctx->pc = 0x1879a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1879a8: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x1879A8u;
    {
        const bool branch_taken_0x1879a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1879ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1879A8u;
            // 0x1879ac: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1879a8) {
            ctx->pc = 0x1879E8u;
            goto label_1879e8;
        }
    }
    ctx->pc = 0x1879B0u;
    // 0x1879b0: 0x2602fff8  addiu       $v0, $s0, -0x8
    ctx->pc = 0x1879b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x1879b4: 0x0  nop
    ctx->pc = 0x1879b4u;
    // NOP
label_1879b8:
    // 0x1879b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1879b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1879bc: 0x50880b  movn        $s1, $v0, $s0
    ctx->pc = 0x1879bcu;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x1879c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1879c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1879c4: 0x8e250034  lw          $a1, 0x34($s1)
    ctx->pc = 0x1879c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1879c8: 0xc0a349c  jal         func_28D270
    ctx->pc = 0x1879C8u;
    SET_GPR_U32(ctx, 31, 0x1879D0u);
    ctx->pc = 0x1879CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1879C8u;
            // 0x1879cc: 0x24a50034  addiu       $a1, $a1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D270u;
    if (runtime->hasFunction(0x28D270u)) {
        auto targetFn = runtime->lookupFunction(0x28D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1879D0u; }
        if (ctx->pc != 0x1879D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D270_0x28d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1879D0u; }
        if (ctx->pc != 0x1879D0u) { return; }
    }
    ctx->pc = 0x1879D0u;
    // 0x1879d0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1879D0u;
    {
        const bool branch_taken_0x1879d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1879d0) {
            ctx->pc = 0x1879D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1879D0u;
            // 0x1879d4: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1879E0u;
            goto label_1879e0;
        }
    }
    ctx->pc = 0x1879D8u;
    // 0x1879d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1879D8u;
    {
        const bool branch_taken_0x1879d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1879DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1879D8u;
            // 0x1879dc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1879d8) {
            ctx->pc = 0x1879ECu;
            goto label_1879ec;
        }
    }
    ctx->pc = 0x1879E0u;
label_1879e0:
    // 0x1879e0: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1879E0u;
    {
        const bool branch_taken_0x1879e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1879E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1879E0u;
            // 0x1879e4: 0x2602fff8  addiu       $v0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1879e0) {
            ctx->pc = 0x1879B8u;
            runtime->cooperativeGuestYield();
            goto label_1879b8;
        }
    }
    ctx->pc = 0x1879E8u;
label_1879e8:
    // 0x1879e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1879e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1879ec:
    // 0x1879ec: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1879ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1879f0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1879f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1879f4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1879f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1879f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1879f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1879fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1879FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1879FCu;
            // 0x187a00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1879B8u: goto label_1879b8;
            case 0x1879E0u: goto label_1879e0;
            case 0x1879E8u: goto label_1879e8;
            case 0x1879ECu: goto label_1879ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x187A04u;
    // 0x187a04: 0x0  nop
    ctx->pc = 0x187a04u;
    // NOP
}
