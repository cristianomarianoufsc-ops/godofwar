#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002438B0
// Address: 0x2438b0 - 0x243910
void sub_002438B0_0x2438b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002438B0_0x2438b0");
#endif

    ctx->pc = 0x2438b0u;

    // 0x2438b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2438b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2438b4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2438b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2438b8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2438b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2438bc: 0x2442ead8  addiu       $v0, $v0, -0x1528
    ctx->pc = 0x2438bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961880));
    // 0x2438c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2438c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2438c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2438c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2438c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2438c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2438cc: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2438ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2438d0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2438d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2438d4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2438D4u;
    {
        const bool branch_taken_0x2438d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2438D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2438D4u;
            // 0x2438d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2438d4) {
            ctx->pc = 0x2438E8u;
            goto label_2438e8;
        }
    }
    ctx->pc = 0x2438DCu;
    // 0x2438dc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2438dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2438e0: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x2438E0u;
    SET_GPR_U32(ctx, 31, 0x2438E8u);
    ctx->pc = 0x2438E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2438E0u;
            // 0x2438e4: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2438E8u; }
        if (ctx->pc != 0x2438E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2438E8u; }
        if (ctx->pc != 0x2438E8u) { return; }
    }
    ctx->pc = 0x2438E8u;
label_2438e8:
    // 0x2438e8: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2438e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x2438ec: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2438ECu;
    {
        const bool branch_taken_0x2438ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2438ec) {
            ctx->pc = 0x2438F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2438ECu;
            // 0x2438f0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x243900u;
            goto label_243900;
        }
    }
    ctx->pc = 0x2438F4u;
    // 0x2438f4: 0xc06785e  jal         func_19E178
    ctx->pc = 0x2438F4u;
    SET_GPR_U32(ctx, 31, 0x2438FCu);
    ctx->pc = 0x2438F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2438F4u;
            // 0x2438f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E178u;
    if (runtime->hasFunction(0x19E178u)) {
        auto targetFn = runtime->lookupFunction(0x19E178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2438FCu; }
        if (ctx->pc != 0x2438FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_19e178_0x19e1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2438FCu; }
        if (ctx->pc != 0x2438FCu) { return; }
    }
    ctx->pc = 0x2438FCu;
    // 0x2438fc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2438fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_243900:
    // 0x243900: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x243900u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243904: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x243904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243908: 0x3e00008  jr          $ra
    ctx->pc = 0x243908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24390Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243908u;
            // 0x24390c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2438E8u: goto label_2438e8;
            case 0x243900u: goto label_243900;
            default: break;
        }
        return;
    }
    ctx->pc = 0x243910u;
}
