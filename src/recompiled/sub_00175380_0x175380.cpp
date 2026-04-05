#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00175380
// Address: 0x175380 - 0x1753d0
void sub_00175380_0x175380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175380_0x175380");
#endif

    ctx->pc = 0x175380u;

    // 0x175380: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x175380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x175384: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x175384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x175388: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x175388u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17538c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17538cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x175390: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x175390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x175394: 0x68940  sll         $s1, $a2, 5
    ctx->pc = 0x175394u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x175398: 0xc04f824  jal         func_13E090
    ctx->pc = 0x175398u;
    SET_GPR_U32(ctx, 31, 0x1753A0u);
    ctx->pc = 0x17539Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175398u;
            // 0x17539c: 0xae060004  sw          $a2, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1753A0u; }
        if (ctx->pc != 0x1753A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1753A0u; }
        if (ctx->pc != 0x1753A0u) { return; }
    }
    ctx->pc = 0x1753A0u;
    // 0x1753a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1753a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1753a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1753a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1753a8: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x1753A8u;
    SET_GPR_U32(ctx, 31, 0x1753B0u);
    ctx->pc = 0x1753ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1753A8u;
            // 0x1753ac: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1753B0u; }
        if (ctx->pc != 0x1753B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1753B0u; }
        if (ctx->pc != 0x1753B0u) { return; }
    }
    ctx->pc = 0x1753B0u;
    // 0x1753b0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1753b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1753b4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1753b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1753b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1753b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1753bc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1753bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1753c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1753c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1753c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1753c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1753c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1753C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1753CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1753C8u;
            // 0x1753cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1753D0u;
}
