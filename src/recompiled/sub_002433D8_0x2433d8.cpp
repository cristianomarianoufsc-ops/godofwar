#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002433D8
// Address: 0x2433d8 - 0x243438
void sub_002433D8_0x2433d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002433D8_0x2433d8");
#endif

    ctx->pc = 0x2433d8u;

    // 0x2433d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2433d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2433dc: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2433dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2433e0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2433e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2433e4: 0x2442ead8  addiu       $v0, $v0, -0x1528
    ctx->pc = 0x2433e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961880));
    // 0x2433e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2433e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2433ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2433ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2433f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2433f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2433f4: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2433f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2433f8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2433f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2433fc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2433FCu;
    {
        const bool branch_taken_0x2433fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x243400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2433FCu;
            // 0x243400: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2433fc) {
            ctx->pc = 0x243410u;
            goto label_243410;
        }
    }
    ctx->pc = 0x243404u;
    // 0x243404: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x243404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x243408: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x243408u;
    SET_GPR_U32(ctx, 31, 0x243410u);
    ctx->pc = 0x24340Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243408u;
            // 0x24340c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243410u; }
        if (ctx->pc != 0x243410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243410u; }
        if (ctx->pc != 0x243410u) { return; }
    }
    ctx->pc = 0x243410u;
label_243410:
    // 0x243410: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x243410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x243414: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x243414u;
    {
        const bool branch_taken_0x243414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x243414) {
            ctx->pc = 0x243418u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x243414u;
            // 0x243418: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x243428u;
            goto label_243428;
        }
    }
    ctx->pc = 0x24341Cu;
    // 0x24341c: 0xc062baa  jal         func_18AEA8
    ctx->pc = 0x24341Cu;
    SET_GPR_U32(ctx, 31, 0x243424u);
    ctx->pc = 0x243420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24341Cu;
            // 0x243420: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AEA8u;
    if (runtime->hasFunction(0x18AEA8u)) {
        auto targetFn = runtime->lookupFunction(0x18AEA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243424u; }
        if (ctx->pc != 0x243424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_18aea8_0x18aed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243424u; }
        if (ctx->pc != 0x243424u) { return; }
    }
    ctx->pc = 0x243424u;
    // 0x243424: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x243424u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_243428:
    // 0x243428: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x243428u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24342c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24342cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243430: 0x3e00008  jr          $ra
    ctx->pc = 0x243430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243430u;
            // 0x243434: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x243410u: goto label_243410;
            case 0x243428u: goto label_243428;
            default: break;
        }
        return;
    }
    ctx->pc = 0x243438u;
}
