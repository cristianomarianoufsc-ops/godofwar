#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014CEE8
// Address: 0x14cee8 - 0x14cf20
void sub_0014CEE8_0x14cee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014CEE8_0x14cee8");
#endif

    ctx->pc = 0x14cee8u;

    // 0x14cee8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14cee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14ceec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14ceecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14cef0: 0x94820042  lhu         $v0, 0x42($a0)
    ctx->pc = 0x14cef0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 66)));
    // 0x14cef4: 0x8c850044  lw          $a1, 0x44($a0)
    ctx->pc = 0x14cef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x14cef8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14cef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14cefc: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x14cefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x14cf00: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14CF00u;
    {
        const bool branch_taken_0x14cf00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CF00u;
            // 0x14cf04: 0xa4820042  sh          $v0, 0x42($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 66), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cf00) {
            ctx->pc = 0x14CF10u;
            goto label_14cf10;
        }
    }
    ctx->pc = 0x14CF08u;
    // 0x14cf08: 0xc054070  jal         func_1501C0
    ctx->pc = 0x14CF08u;
    SET_GPR_U32(ctx, 31, 0x14CF10u);
    ctx->pc = 0x14CF0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CF08u;
            // 0x14cf0c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1501C0u;
    if (runtime->hasFunction(0x1501C0u)) {
        auto targetFn = runtime->lookupFunction(0x1501C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CF10u; }
        if (ctx->pc != 0x14CF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1501c0_0x150220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CF10u; }
        if (ctx->pc != 0x14CF10u) { return; }
    }
    ctx->pc = 0x14CF10u;
label_14cf10:
    // 0x14cf10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14cf10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14cf14: 0x3e00008  jr          $ra
    ctx->pc = 0x14CF14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CF18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CF14u;
            // 0x14cf18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14CF10u: goto label_14cf10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14CF1Cu;
    // 0x14cf1c: 0x0  nop
    ctx->pc = 0x14cf1cu;
    // NOP
}
