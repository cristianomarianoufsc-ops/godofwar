#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C08A0
// Address: 0x1c08a0 - 0x1c08f8
void sub_001C08A0_0x1c08a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C08A0_0x1c08a0");
#endif

    ctx->pc = 0x1c08a0u;

    // 0x1c08a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c08a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c08a4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c08a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c08a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c08a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c08ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c08acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c08b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c08b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c08b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c08b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c08b8: 0xc061a06  jal         func_186818
    ctx->pc = 0x1C08B8u;
    SET_GPR_U32(ctx, 31, 0x1C08C0u);
    ctx->pc = 0x1C08BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C08B8u;
            // 0x1c08bc: 0x8e2401b4  lw          $a0, 0x1B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186818u;
    if (runtime->hasFunction(0x186818u)) {
        auto targetFn = runtime->lookupFunction(0x186818u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C08C0u; }
        if (ctx->pc != 0x1C08C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186818_0x186818(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C08C0u; }
        if (ctx->pc != 0x1C08C0u) { return; }
    }
    ctx->pc = 0x1C08C0u;
    // 0x1c08c0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C08C0u;
    {
        const bool branch_taken_0x1c08c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c08c0) {
            ctx->pc = 0x1C08C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C08C0u;
            // 0x1c08c4: 0x8e2403f0  lw          $a0, 0x3F0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1008)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C08DCu;
            goto label_1c08dc;
        }
    }
    ctx->pc = 0x1C08C8u;
    // 0x1c08c8: 0xc05d4ba  jal         func_1752E8
    ctx->pc = 0x1C08C8u;
    SET_GPR_U32(ctx, 31, 0x1C08D0u);
    ctx->pc = 0x1C08CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C08C8u;
            // 0x1c08cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1752E8u;
    if (runtime->hasFunction(0x1752E8u)) {
        auto targetFn = runtime->lookupFunction(0x1752E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C08D0u; }
        if (ctx->pc != 0x1C08D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001752E8_0x1752e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C08D0u; }
        if (ctx->pc != 0x1C08D0u) { return; }
    }
    ctx->pc = 0x1C08D0u;
    // 0x1c08d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C08D0u;
    {
        const bool branch_taken_0x1c08d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C08D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C08D0u;
            // 0x1c08d4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c08d0) {
            ctx->pc = 0x1C08E8u;
            goto label_1c08e8;
        }
    }
    ctx->pc = 0x1C08D8u;
    // 0x1c08d8: 0x8e2403f0  lw          $a0, 0x3F0($s1)
    ctx->pc = 0x1c08d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1008)));
label_1c08dc:
    // 0x1c08dc: 0xc05c294  jal         func_170A50
    ctx->pc = 0x1C08DCu;
    SET_GPR_U32(ctx, 31, 0x1C08E4u);
    ctx->pc = 0x1C08E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C08DCu;
            // 0x1c08e0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A50u;
    if (runtime->hasFunction(0x170A50u)) {
        auto targetFn = runtime->lookupFunction(0x170A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C08E4u; }
        if (ctx->pc != 0x1C08E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170A50_0x170a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C08E4u; }
        if (ctx->pc != 0x1C08E4u) { return; }
    }
    ctx->pc = 0x1C08E4u;
    // 0x1c08e4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c08e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c08e8:
    // 0x1c08e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c08e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c08ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c08ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c08f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C08F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C08F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C08F0u;
            // 0x1c08f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C08DCu: goto label_1c08dc;
            case 0x1C08E8u: goto label_1c08e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C08F8u;
}
