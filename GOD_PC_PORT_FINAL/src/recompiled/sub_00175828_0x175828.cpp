#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00175828
// Address: 0x175828 - 0x175890
void sub_00175828_0x175828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175828_0x175828");
#endif

    ctx->pc = 0x175828u;

    // 0x175828: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x175828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17582c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x17582cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x175830: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x175830u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175834: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x175834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x175838: 0xc05d5f6  jal         func_1757D8
    ctx->pc = 0x175838u;
    SET_GPR_U32(ctx, 31, 0x175840u);
    ctx->pc = 0x17583Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175838u;
            // 0x17583c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1757D8u;
    if (runtime->hasFunction(0x1757D8u)) {
        auto targetFn = runtime->lookupFunction(0x1757D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175840u; }
        if (ctx->pc != 0x175840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1757d8_0x175828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175840u; }
        if (ctx->pc != 0x175840u) { return; }
    }
    ctx->pc = 0x175840u;
    // 0x175840: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x175840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175844: 0xc05d5d0  jal         func_175740
    ctx->pc = 0x175844u;
    SET_GPR_U32(ctx, 31, 0x17584Cu);
    ctx->pc = 0x175848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175844u;
            // 0x175848: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175740u;
    if (runtime->hasFunction(0x175740u)) {
        auto targetFn = runtime->lookupFunction(0x175740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17584Cu; }
        if (ctx->pc != 0x17584Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175740_0x175780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17584Cu; }
        if (ctx->pc != 0x17584Cu) { return; }
    }
    ctx->pc = 0x17584Cu;
    // 0x17584c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17584cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175850: 0xc05da7e  jal         func_1769F8
    ctx->pc = 0x175850u;
    SET_GPR_U32(ctx, 31, 0x175858u);
    ctx->pc = 0x175854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175850u;
            // 0x175854: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1769F8u;
    if (runtime->hasFunction(0x1769F8u)) {
        auto targetFn = runtime->lookupFunction(0x1769F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175858u; }
        if (ctx->pc != 0x175858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001769F8_0x1769f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175858u; }
        if (ctx->pc != 0x175858u) { return; }
    }
    ctx->pc = 0x175858u;
    // 0x175858: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x175858u;
    {
        const bool branch_taken_0x175858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175858) {
            ctx->pc = 0x17585Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x175858u;
            // 0x17585c: 0x8c430004  lw          $v1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x175868u;
            goto label_175868;
        }
    }
    ctx->pc = 0x175860u;
    // 0x175860: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x175860u;
    {
        const bool branch_taken_0x175860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175860u;
            // 0x175864: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175860) {
            ctx->pc = 0x175874u;
            goto label_175874;
        }
    }
    ctx->pc = 0x175868u;
label_175868:
    // 0x175868: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x175868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x17586c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x17586cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x175870: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x175870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_175874:
    // 0x175874: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x175874u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x175878: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x175878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17587c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x17587cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x175880: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x175880u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x175884: 0x3e00008  jr          $ra
    ctx->pc = 0x175884u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175884u;
            // 0x175888: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175868u: goto label_175868;
            case 0x175874u: goto label_175874;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17588Cu;
    // 0x17588c: 0x0  nop
    ctx->pc = 0x17588cu;
    // NOP
}
