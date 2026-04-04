#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021D808
// Address: 0x21d808 - 0x21d868
void sub_0021D808_0x21d808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D808_0x21d808");
#endif

    ctx->pc = 0x21d808u;

    // 0x21d808: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21d808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21d80c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21d80cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21d810: 0xc0876b8  jal         func_21DAE0
    ctx->pc = 0x21D810u;
    SET_GPR_U32(ctx, 31, 0x21D818u);
    ctx->pc = 0x21DAE0u;
    if (runtime->hasFunction(0x21DAE0u)) {
        auto targetFn = runtime->lookupFunction(0x21DAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D818u; }
        if (ctx->pc != 0x21D818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021DAE0_0x21dae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D818u; }
        if (ctx->pc != 0x21D818u) { return; }
    }
    ctx->pc = 0x21D818u;
    // 0x21d818: 0xc0873c6  jal         func_21CF18
    ctx->pc = 0x21D818u;
    SET_GPR_U32(ctx, 31, 0x21D820u);
    ctx->pc = 0x21CF18u;
    if (runtime->hasFunction(0x21CF18u)) {
        auto targetFn = runtime->lookupFunction(0x21CF18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D820u; }
        if (ctx->pc != 0x21D820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021CF18_0x21cf18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D820u; }
        if (ctx->pc != 0x21D820u) { return; }
    }
    ctx->pc = 0x21D820u;
    // 0x21d820: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21d820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21d824: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21d824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d828: 0xc06e25a  jal         func_1B8968
    ctx->pc = 0x21D828u;
    SET_GPR_U32(ctx, 31, 0x21D830u);
    ctx->pc = 0x21D82Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D828u;
            // 0x21d82c: 0x8c44cb94  lw          $a0, -0x346C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8968u;
    if (runtime->hasFunction(0x1B8968u)) {
        auto targetFn = runtime->lookupFunction(0x1B8968u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D830u; }
        if (ctx->pc != 0x21D830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8968_0x1b8968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D830u; }
        if (ctx->pc != 0x21D830u) { return; }
    }
    ctx->pc = 0x21D830u;
    // 0x21d830: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21d830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21d834: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x21d834u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21d838: 0xc08a9b0  jal         func_22A6C0
    ctx->pc = 0x21D838u;
    SET_GPR_U32(ctx, 31, 0x21D840u);
    ctx->pc = 0x21D83Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D838u;
            // 0x21d83c: 0x8c4411d0  lw          $a0, 0x11D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A6C0u;
    if (runtime->hasFunction(0x22A6C0u)) {
        auto targetFn = runtime->lookupFunction(0x22A6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D840u; }
        if (ctx->pc != 0x21D840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A6C0_0x22a6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D840u; }
        if (ctx->pc != 0x21D840u) { return; }
    }
    ctx->pc = 0x21D840u;
    // 0x21d840: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21d840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21d844: 0xc08b23e  jal         func_22C8F8
    ctx->pc = 0x21D844u;
    SET_GPR_U32(ctx, 31, 0x21D84Cu);
    ctx->pc = 0x21D848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D844u;
            // 0x21d848: 0xac40e57c  sw          $zero, -0x1A84($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294960508), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22C8F8u;
    if (runtime->hasFunction(0x22C8F8u)) {
        auto targetFn = runtime->lookupFunction(0x22C8F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D84Cu; }
        if (ctx->pc != 0x21D84Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022C8F8_0x22c8f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D84Cu; }
        if (ctx->pc != 0x21D84Cu) { return; }
    }
    ctx->pc = 0x21D84Cu;
    // 0x21d84c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21d84cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d850: 0xc087c18  jal         func_21F060
    ctx->pc = 0x21D850u;
    SET_GPR_U32(ctx, 31, 0x21D858u);
    ctx->pc = 0x21D854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D850u;
            // 0x21d854: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21F060u;
    if (runtime->hasFunction(0x21F060u)) {
        auto targetFn = runtime->lookupFunction(0x21F060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D858u; }
        if (ctx->pc != 0x21D858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021F060_0x21f060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D858u; }
        if (ctx->pc != 0x21D858u) { return; }
    }
    ctx->pc = 0x21D858u;
    // 0x21d858: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21d858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d85c: 0x3e00008  jr          $ra
    ctx->pc = 0x21D85Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D85Cu;
            // 0x21d860: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21D864u;
    // 0x21d864: 0x0  nop
    ctx->pc = 0x21d864u;
    // NOP
}
