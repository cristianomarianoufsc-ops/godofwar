#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_243188
// Address: 0x243188 - 0x2431e8
void entry_243188_0x2431e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_243188_0x2431e8");
#endif

    ctx->pc = 0x243188u;

    // 0x243188: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x243188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24318c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x24318cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x243190: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x243190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x243194: 0x2442ead8  addiu       $v0, $v0, -0x1528
    ctx->pc = 0x243194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961880));
    // 0x243198: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x243198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x24319c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24319cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2431a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2431a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2431a4: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2431a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2431a8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2431a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2431ac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2431ACu;
    {
        const bool branch_taken_0x2431ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2431B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2431ACu;
            // 0x2431b0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2431ac) {
            ctx->pc = 0x2431C0u;
            goto label_2431c0;
        }
    }
    ctx->pc = 0x2431B4u;
    // 0x2431b4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2431b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2431b8: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x2431B8u;
    SET_GPR_U32(ctx, 31, 0x2431C0u);
    ctx->pc = 0x2431BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2431B8u;
            // 0x2431bc: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2431C0u; }
        if (ctx->pc != 0x2431C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2431C0u; }
        if (ctx->pc != 0x2431C0u) { return; }
    }
    ctx->pc = 0x2431C0u;
label_2431c0:
    // 0x2431c0: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2431c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x2431c4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2431C4u;
    {
        const bool branch_taken_0x2431c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2431c4) {
            ctx->pc = 0x2431C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2431C4u;
            // 0x2431c8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2431D8u;
            goto label_2431d8;
        }
    }
    ctx->pc = 0x2431CCu;
    // 0x2431cc: 0xc066df4  jal         func_19B7D0
    ctx->pc = 0x2431CCu;
    SET_GPR_U32(ctx, 31, 0x2431D4u);
    ctx->pc = 0x2431D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2431CCu;
            // 0x2431d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B7D0u;
    if (runtime->hasFunction(0x19B7D0u)) {
        auto targetFn = runtime->lookupFunction(0x19B7D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2431D4u; }
        if (ctx->pc != 0x2431D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_19b7d0_0x19b7f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2431D4u; }
        if (ctx->pc != 0x2431D4u) { return; }
    }
    ctx->pc = 0x2431D4u;
    // 0x2431d4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2431d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2431d8:
    // 0x2431d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2431d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2431dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2431dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2431e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2431E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2431E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2431E0u;
            // 0x2431e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2431C0u: goto label_2431c0;
            case 0x2431D8u: goto label_2431d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2431E8u;
}
