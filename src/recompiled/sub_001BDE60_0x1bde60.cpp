#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BDE60
// Address: 0x1bde60 - 0x1bdef0
void sub_001BDE60_0x1bde60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BDE60_0x1bde60");
#endif

    ctx->pc = 0x1bde60u;

    // 0x1bde60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1bde60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1bde64: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bde64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bde68: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1bde68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1bde6c: 0x24425a40  addiu       $v0, $v0, 0x5A40
    ctx->pc = 0x1bde6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23104));
    // 0x1bde70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bde70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bde74: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1bde74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1bde78: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1bde78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1bde7c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1bde7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1bde80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bde80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bde84: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x1bde84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bde88: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1bde88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bde8c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1bde8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bde90: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x1bde90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x1bde94: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1BDE94u;
    {
        const bool branch_taken_0x1bde94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BDE98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDE94u;
            // 0x1bde98: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bde94) {
            ctx->pc = 0x1BDED8u;
            goto label_1bded8;
        }
    }
    ctx->pc = 0x1BDE9Cu;
    // 0x1bde9c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1bde9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1bdea0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bdea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bdea4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BDEA4u;
    {
        const bool branch_taken_0x1bdea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDEA4u;
            // 0x1bdea8: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdea4) {
            ctx->pc = 0x1BDEBCu;
            goto label_1bdebc;
        }
    }
    ctx->pc = 0x1BDEACu;
    // 0x1bdeac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bdeacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdeb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bdeb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdeb4: 0xc06ec3e  jal         func_1BB0F8
    ctx->pc = 0x1BDEB4u;
    SET_GPR_U32(ctx, 31, 0x1BDEBCu);
    ctx->pc = 0x1BDEB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDEB4u;
            // 0x1bdeb8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB0F8u;
    if (runtime->hasFunction(0x1BB0F8u)) {
        auto targetFn = runtime->lookupFunction(0x1BB0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDEBCu; }
        if (ctx->pc != 0x1BDEBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1bb0f8_0x1bb1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDEBCu; }
        if (ctx->pc != 0x1BDEBCu) { return; }
    }
    ctx->pc = 0x1BDEBCu;
label_1bdebc:
    // 0x1bdebc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bdebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdec0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1bdec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1bdec4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1bdec4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdec8: 0xc06ec3e  jal         func_1BB0F8
    ctx->pc = 0x1BDEC8u;
    SET_GPR_U32(ctx, 31, 0x1BDED0u);
    ctx->pc = 0x1BDECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDEC8u;
            // 0x1bdecc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB0F8u;
    if (runtime->hasFunction(0x1BB0F8u)) {
        auto targetFn = runtime->lookupFunction(0x1BB0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDED0u; }
        if (ctx->pc != 0x1BDED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1bb0f8_0x1bb1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDED0u; }
        if (ctx->pc != 0x1BDED0u) { return; }
    }
    ctx->pc = 0x1BDED0u;
    // 0x1bded0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1bded0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bded4: 0xa4510006  sh          $s1, 0x6($v0)
    ctx->pc = 0x1bded4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 17));
label_1bded8:
    // 0x1bded8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1bded8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bdedc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1bdedcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bdee0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1bdee0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bdee4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bdee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bdee8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDEE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDEECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDEE8u;
            // 0x1bdeec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BDEBCu: goto label_1bdebc;
            case 0x1BDED8u: goto label_1bded8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BDEF0u;
}
