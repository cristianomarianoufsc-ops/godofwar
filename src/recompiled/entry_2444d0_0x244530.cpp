#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2444d0
// Address: 0x2444d0 - 0x244530
void entry_2444d0_0x244530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2444d0_0x244530");
#endif

    ctx->pc = 0x2444d0u;

    // 0x2444d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2444d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2444d4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2444d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2444d8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2444d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2444dc: 0x2442ead8  addiu       $v0, $v0, -0x1528
    ctx->pc = 0x2444dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961880));
    // 0x2444e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2444e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2444e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2444e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2444e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2444e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2444ec: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2444ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2444f0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2444f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2444f4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2444F4u;
    {
        const bool branch_taken_0x2444f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2444F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2444F4u;
            // 0x2444f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2444f4) {
            ctx->pc = 0x244508u;
            goto label_244508;
        }
    }
    ctx->pc = 0x2444FCu;
    // 0x2444fc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2444fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x244500: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x244500u;
    SET_GPR_U32(ctx, 31, 0x244508u);
    ctx->pc = 0x244504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244500u;
            // 0x244504: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244508u; }
        if (ctx->pc != 0x244508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244508u; }
        if (ctx->pc != 0x244508u) { return; }
    }
    ctx->pc = 0x244508u;
label_244508:
    // 0x244508: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x244508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x24450c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24450Cu;
    {
        const bool branch_taken_0x24450c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24450c) {
            ctx->pc = 0x244510u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24450Cu;
            // 0x244510: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x244520u;
            goto label_244520;
        }
    }
    ctx->pc = 0x244514u;
    // 0x244514: 0xc08a3aa  jal         func_228EA8
    ctx->pc = 0x244514u;
    SET_GPR_U32(ctx, 31, 0x24451Cu);
    ctx->pc = 0x244518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244514u;
            // 0x244518: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228EA8u;
    if (runtime->hasFunction(0x228EA8u)) {
        auto targetFn = runtime->lookupFunction(0x228EA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24451Cu; }
        if (ctx->pc != 0x24451Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_228ea8_0x228ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24451Cu; }
        if (ctx->pc != 0x24451Cu) { return; }
    }
    ctx->pc = 0x24451Cu;
    // 0x24451c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x24451cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_244520:
    // 0x244520: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x244520u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x244524: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x244524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x244528: 0x3e00008  jr          $ra
    ctx->pc = 0x244528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24452Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244528u;
            // 0x24452c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x244508u: goto label_244508;
            case 0x244520u: goto label_244520;
            default: break;
        }
        return;
    }
    ctx->pc = 0x244530u;
}
