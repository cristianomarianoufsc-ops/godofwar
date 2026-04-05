#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00243738
// Address: 0x243738 - 0x243798
void sub_00243738_0x243738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243738_0x243738");
#endif

    ctx->pc = 0x243738u;

    // 0x243738: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x243738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24373c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x24373cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x243740: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x243740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x243744: 0x2442ead8  addiu       $v0, $v0, -0x1528
    ctx->pc = 0x243744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961880));
    // 0x243748: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x243748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x24374c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24374cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243750: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x243750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x243754: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x243754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x243758: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x243758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x24375c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x24375Cu;
    {
        const bool branch_taken_0x24375c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x243760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24375Cu;
            // 0x243760: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24375c) {
            ctx->pc = 0x243770u;
            goto label_243770;
        }
    }
    ctx->pc = 0x243764u;
    // 0x243764: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x243764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x243768: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x243768u;
    SET_GPR_U32(ctx, 31, 0x243770u);
    ctx->pc = 0x24376Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243768u;
            // 0x24376c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243770u; }
        if (ctx->pc != 0x243770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243770u; }
        if (ctx->pc != 0x243770u) { return; }
    }
    ctx->pc = 0x243770u;
label_243770:
    // 0x243770: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x243770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x243774: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x243774u;
    {
        const bool branch_taken_0x243774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x243774) {
            ctx->pc = 0x243778u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x243774u;
            // 0x243778: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x243788u;
            goto label_243788;
        }
    }
    ctx->pc = 0x24377Cu;
    // 0x24377c: 0xc064af4  jal         func_192BD0
    ctx->pc = 0x24377Cu;
    SET_GPR_U32(ctx, 31, 0x243784u);
    ctx->pc = 0x243780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24377Cu;
            // 0x243780: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192BD0u;
    if (runtime->hasFunction(0x192BD0u)) {
        auto targetFn = runtime->lookupFunction(0x192BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243784u; }
        if (ctx->pc != 0x243784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_192bd0_0x192bf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243784u; }
        if (ctx->pc != 0x243784u) { return; }
    }
    ctx->pc = 0x243784u;
    // 0x243784: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x243784u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_243788:
    // 0x243788: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x243788u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24378c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24378cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243790: 0x3e00008  jr          $ra
    ctx->pc = 0x243790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243790u;
            // 0x243794: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x243770u: goto label_243770;
            case 0x243788u: goto label_243788;
            default: break;
        }
        return;
    }
    ctx->pc = 0x243798u;
}
