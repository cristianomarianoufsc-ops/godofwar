#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021CE50
// Address: 0x21ce50 - 0x21ce98
void sub_0021CE50_0x21ce50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021CE50_0x21ce50");
#endif

    ctx->pc = 0x21ce50u;

    // 0x21ce50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21ce50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21ce54: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21ce54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21ce58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21ce58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x21ce5c: 0x8c42cb94  lw          $v0, -0x346C($v0)
    ctx->pc = 0x21ce5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x21ce60: 0x8c421530  lw          $v0, 0x1530($v0)
    ctx->pc = 0x21ce60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5424)));
    // 0x21ce64: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21CE64u;
    {
        const bool branch_taken_0x21ce64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x21CE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21CE64u;
            // 0x21ce68: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ce64) {
            ctx->pc = 0x21CE8Cu;
            goto label_21ce8c;
        }
    }
    ctx->pc = 0x21CE6Cu;
    // 0x21ce6c: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x21ce6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x21ce70: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x21ce70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x21ce74: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21ce74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ce78: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x21ce78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x21ce7c: 0xafa60018  sw          $a2, 0x18($sp)
    ctx->pc = 0x21ce7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
    // 0x21ce80: 0xafa7001c  sw          $a3, 0x1C($sp)
    ctx->pc = 0x21ce80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 7));
    // 0x21ce84: 0xc0876d8  jal         func_21DB60
    ctx->pc = 0x21CE84u;
    SET_GPR_U32(ctx, 31, 0x21CE8Cu);
    ctx->pc = 0x21CE88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CE84u;
            // 0x21ce88: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DB60u;
    if (runtime->hasFunction(0x21DB60u)) {
        auto targetFn = runtime->lookupFunction(0x21DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CE8Cu; }
        if (ctx->pc != 0x21CE8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_21db60_0x21dc48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CE8Cu; }
        if (ctx->pc != 0x21CE8Cu) { return; }
    }
    ctx->pc = 0x21CE8Cu;
label_21ce8c:
    // 0x21ce8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21ce8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21ce90: 0x3e00008  jr          $ra
    ctx->pc = 0x21CE90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21CE90u;
            // 0x21ce94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21CE8Cu: goto label_21ce8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21CE98u;
}
