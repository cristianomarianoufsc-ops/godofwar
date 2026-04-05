#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002436B0
// Address: 0x2436b0 - 0x243710
void sub_002436B0_0x2436b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002436B0_0x2436b0");
#endif

    ctx->pc = 0x2436b0u;

    // 0x2436b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2436b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2436b4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2436b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2436b8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2436b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2436bc: 0x2442ead8  addiu       $v0, $v0, -0x1528
    ctx->pc = 0x2436bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961880));
    // 0x2436c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2436c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2436c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2436c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2436c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2436c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2436cc: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2436ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2436d0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2436d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2436d4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2436D4u;
    {
        const bool branch_taken_0x2436d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2436D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2436D4u;
            // 0x2436d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2436d4) {
            ctx->pc = 0x2436E8u;
            goto label_2436e8;
        }
    }
    ctx->pc = 0x2436DCu;
    // 0x2436dc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2436dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2436e0: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x2436E0u;
    SET_GPR_U32(ctx, 31, 0x2436E8u);
    ctx->pc = 0x2436E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2436E0u;
            // 0x2436e4: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2436E8u; }
        if (ctx->pc != 0x2436E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2436E8u; }
        if (ctx->pc != 0x2436E8u) { return; }
    }
    ctx->pc = 0x2436E8u;
label_2436e8:
    // 0x2436e8: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2436e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x2436ec: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2436ECu;
    {
        const bool branch_taken_0x2436ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2436ec) {
            ctx->pc = 0x2436F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2436ECu;
            // 0x2436f0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x243700u;
            goto label_243700;
        }
    }
    ctx->pc = 0x2436F4u;
    // 0x2436f4: 0xc0645ea  jal         func_1917A8
    ctx->pc = 0x2436F4u;
    SET_GPR_U32(ctx, 31, 0x2436FCu);
    ctx->pc = 0x2436F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2436F4u;
            // 0x2436f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1917A8u;
    if (runtime->hasFunction(0x1917A8u)) {
        auto targetFn = runtime->lookupFunction(0x1917A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2436FCu; }
        if (ctx->pc != 0x2436FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1917a8_0x1917d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2436FCu; }
        if (ctx->pc != 0x2436FCu) { return; }
    }
    ctx->pc = 0x2436FCu;
    // 0x2436fc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2436fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_243700:
    // 0x243700: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x243700u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243704: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x243704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243708: 0x3e00008  jr          $ra
    ctx->pc = 0x243708u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24370Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243708u;
            // 0x24370c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2436E8u: goto label_2436e8;
            case 0x243700u: goto label_243700;
            default: break;
        }
        return;
    }
    ctx->pc = 0x243710u;
}
