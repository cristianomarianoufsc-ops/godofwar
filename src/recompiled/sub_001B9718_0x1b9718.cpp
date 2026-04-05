#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B9718
// Address: 0x1b9718 - 0x1b9780
void sub_001B9718_0x1b9718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9718_0x1b9718");
#endif

    ctx->pc = 0x1b9718u;

    // 0x1b9718: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b9718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b971c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b971cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9720: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b9720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b9724: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b9724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b9728: 0xc481153c  lwc1        $f1, 0x153C($a0)
    ctx->pc = 0x1b9728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 5436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b972c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1b972cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9730: 0x0  nop
    ctx->pc = 0x1b9730u;
    // NOP
    // 0x1b9734: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1B9734u;
    {
        const bool branch_taken_0x1b9734 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B9738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9734u;
            // 0x1b9738: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9734) {
            ctx->pc = 0x1B9758u;
            goto label_1b9758;
        }
    }
    ctx->pc = 0x1B973Cu;
    // 0x1b973c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b973cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b9740: 0xc06f9c6  jal         func_1BE718
    ctx->pc = 0x1B9740u;
    SET_GPR_U32(ctx, 31, 0x1B9748u);
    ctx->pc = 0x1B9744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9740u;
            // 0x1b9744: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE718u;
    if (runtime->hasFunction(0x1BE718u)) {
        auto targetFn = runtime->lookupFunction(0x1BE718u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9748u; }
        if (ctx->pc != 0x1B9748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE718_0x1be718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9748u; }
        if (ctx->pc != 0x1B9748u) { return; }
    }
    ctx->pc = 0x1B9748u;
    // 0x1b9748: 0xc08736e  jal         func_21CDB8
    ctx->pc = 0x1B9748u;
    SET_GPR_U32(ctx, 31, 0x1B9750u);
    ctx->pc = 0x1B974Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9748u;
            // 0x1b974c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CDB8u;
    if (runtime->hasFunction(0x21CDB8u)) {
        auto targetFn = runtime->lookupFunction(0x21CDB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9750u; }
        if (ctx->pc != 0x1B9750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_21cdb8_0x21cdc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9750u; }
        if (ctx->pc != 0x1B9750u) { return; }
    }
    ctx->pc = 0x1B9750u;
    // 0x1b9750: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B9750u;
    {
        const bool branch_taken_0x1b9750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9750u;
            // 0x1b9754: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9750) {
            ctx->pc = 0x1B9770u;
            goto label_1b9770;
        }
    }
    ctx->pc = 0x1B9758u;
label_1b9758:
    // 0x1b9758: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b9758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b975c: 0xc06f9c6  jal         func_1BE718
    ctx->pc = 0x1B975Cu;
    SET_GPR_U32(ctx, 31, 0x1B9764u);
    ctx->pc = 0x1B9760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B975Cu;
            // 0x1b9760: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE718u;
    if (runtime->hasFunction(0x1BE718u)) {
        auto targetFn = runtime->lookupFunction(0x1BE718u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9764u; }
        if (ctx->pc != 0x1B9764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE718_0x1be718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9764u; }
        if (ctx->pc != 0x1B9764u) { return; }
    }
    ctx->pc = 0x1B9764u;
    // 0x1b9764: 0xc08736e  jal         func_21CDB8
    ctx->pc = 0x1B9764u;
    SET_GPR_U32(ctx, 31, 0x1B976Cu);
    ctx->pc = 0x1B9768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9764u;
            // 0x1b9768: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CDB8u;
    if (runtime->hasFunction(0x21CDB8u)) {
        auto targetFn = runtime->lookupFunction(0x21CDB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B976Cu; }
        if (ctx->pc != 0x1B976Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_21cdb8_0x21cdc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B976Cu; }
        if (ctx->pc != 0x1B976Cu) { return; }
    }
    ctx->pc = 0x1B976Cu;
    // 0x1b976c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b976cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b9770:
    // 0x1b9770: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b9770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9774: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9774u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9774u;
            // 0x1b9778: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B9758u: goto label_1b9758;
            case 0x1B9770u: goto label_1b9770;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B977Cu;
    // 0x1b977c: 0x0  nop
    ctx->pc = 0x1b977cu;
    // NOP
}
