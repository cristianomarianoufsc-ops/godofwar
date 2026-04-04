#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00201598
// Address: 0x201598 - 0x2015e8
void sub_00201598_0x201598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201598_0x201598");
#endif

    ctx->pc = 0x201598u;

    // 0x201598: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x201598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20159c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20159cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2015a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2015a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2015a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2015a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2015a8: 0xc080592  jal         func_201648
    ctx->pc = 0x2015A8u;
    SET_GPR_U32(ctx, 31, 0x2015B0u);
    ctx->pc = 0x2015ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2015A8u;
            // 0x2015ac: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201648u;
    if (runtime->hasFunction(0x201648u)) {
        auto targetFn = runtime->lookupFunction(0x201648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2015B0u; }
        if (ctx->pc != 0x2015B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00201648_0x201648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2015B0u; }
        if (ctx->pc != 0x2015B0u) { return; }
    }
    ctx->pc = 0x2015B0u;
    // 0x2015b0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2015b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2015b4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2015B4u;
    {
        const bool branch_taken_0x2015b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2015b4) {
            ctx->pc = 0x2015B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2015B4u;
            // 0x2015b8: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2015C8u;
            goto label_2015c8;
        }
    }
    ctx->pc = 0x2015BCu;
    // 0x2015bc: 0xc07f3cc  jal         func_1FCF30
    ctx->pc = 0x2015BCu;
    SET_GPR_U32(ctx, 31, 0x2015C4u);
    ctx->pc = 0x1FCF30u;
    if (runtime->hasFunction(0x1FCF30u)) {
        auto targetFn = runtime->lookupFunction(0x1FCF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2015C4u; }
        if (ctx->pc != 0x2015C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FCF30_0x1fcf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2015C4u; }
        if (ctx->pc != 0x2015C4u) { return; }
    }
    ctx->pc = 0x2015C4u;
    // 0x2015c4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2015c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2015c8:
    // 0x2015c8: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x2015c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2015cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2015ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2015d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2015d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2015d4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2015d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2015d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2015d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2015dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2015DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2015E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2015DCu;
            // 0x2015e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2015C8u: goto label_2015c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2015E4u;
    // 0x2015e4: 0x0  nop
    ctx->pc = 0x2015e4u;
    // NOP
}
