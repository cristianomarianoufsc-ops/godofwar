#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00224778
// Address: 0x224778 - 0x2247e8
void sub_00224778_0x224778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224778_0x224778");
#endif

    ctx->pc = 0x224778u;

    // 0x224778: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x224778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22477c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x22477cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x224780: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x224780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224784: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x224784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x224788: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x224788u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22478c: 0x3c120033  lui         $s2, 0x33
    ctx->pc = 0x22478cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
    // 0x224790: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x224790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x224794: 0x8e446ea8  lw          $a0, 0x6EA8($s2)
    ctx->pc = 0x224794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28328)));
    // 0x224798: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x224798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22479c: 0xc08c85c  jal         func_232170
    ctx->pc = 0x22479Cu;
    SET_GPR_U32(ctx, 31, 0x2247A4u);
    ctx->pc = 0x2247A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22479Cu;
            // 0x2247a0: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232170u;
    if (runtime->hasFunction(0x232170u)) {
        auto targetFn = runtime->lookupFunction(0x232170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2247A4u; }
        if (ctx->pc != 0x2247A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00232170_0x232170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2247A4u; }
        if (ctx->pc != 0x2247A4u) { return; }
    }
    ctx->pc = 0x2247A4u;
    // 0x2247a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2247a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2247a8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2247A8u;
    {
        const bool branch_taken_0x2247a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2247ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2247A8u;
            // 0x2247ac: 0x8e446ea8  lw          $a0, 0x6EA8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2247a8) {
            ctx->pc = 0x2247CCu;
            goto label_2247cc;
        }
    }
    ctx->pc = 0x2247B0u;
    // 0x2247b0: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x2247b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x2247b4: 0xafb10004  sw          $s1, 0x4($sp)
    ctx->pc = 0x2247b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
    // 0x2247b8: 0xc08c818  jal         func_232060
    ctx->pc = 0x2247B8u;
    SET_GPR_U32(ctx, 31, 0x2247C0u);
    ctx->pc = 0x2247BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2247B8u;
            // 0x2247bc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232060u;
    if (runtime->hasFunction(0x232060u)) {
        auto targetFn = runtime->lookupFunction(0x232060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2247C0u; }
        if (ctx->pc != 0x2247C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00232060_0x232060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2247C0u; }
        if (ctx->pc != 0x2247C0u) { return; }
    }
    ctx->pc = 0x2247C0u;
    // 0x2247c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2247c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2247c4: 0xc0890c2  jal         func_224308
    ctx->pc = 0x2247C4u;
    SET_GPR_U32(ctx, 31, 0x2247CCu);
    ctx->pc = 0x2247C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2247C4u;
            // 0x2247c8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224308u;
    if (runtime->hasFunction(0x224308u)) {
        auto targetFn = runtime->lookupFunction(0x224308u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2247CCu; }
        if (ctx->pc != 0x2247CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224308_0x224308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2247CCu; }
        if (ctx->pc != 0x2247CCu) { return; }
    }
    ctx->pc = 0x2247CCu;
label_2247cc:
    // 0x2247cc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2247ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2247d0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2247d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2247d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2247d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2247d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2247d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2247dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2247DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2247E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2247DCu;
            // 0x2247e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2247CCu: goto label_2247cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2247E4u;
    // 0x2247e4: 0x0  nop
    ctx->pc = 0x2247e4u;
    // NOP
}
