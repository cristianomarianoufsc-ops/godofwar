#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F4F00
// Address: 0x1f4f00 - 0x1f4f58
void sub_001F4F00_0x1f4f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4F00_0x1f4f00");
#endif

    ctx->pc = 0x1f4f00u;

    // 0x1f4f00: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f4f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1f4f04: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f4f04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f4f08: 0x8c45cd60  lw          $a1, -0x32A0($v0)
    ctx->pc = 0x1f4f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954336)));
    // 0x1f4f0c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1f4f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1f4f10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f4f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f4f14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f4f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f4f18: 0x8c64e388  lw          $a0, -0x1C78($v1)
    ctx->pc = 0x1f4f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
    // 0x1f4f1c: 0xc07cd22  jal         func_1F3488
    ctx->pc = 0x1F4F1Cu;
    SET_GPR_U32(ctx, 31, 0x1F4F24u);
    ctx->pc = 0x1F4F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4F1Cu;
            // 0x1f4f20: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F3488u;
    if (runtime->hasFunction(0x1F3488u)) {
        auto targetFn = runtime->lookupFunction(0x1F3488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4F24u; }
        if (ctx->pc != 0x1F4F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1f3488_0x1f34b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4F24u; }
        if (ctx->pc != 0x1F4F24u) { return; }
    }
    ctx->pc = 0x1F4F24u;
    // 0x1f4f24: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f4f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1f4f28: 0xc07cd22  jal         func_1F3488
    ctx->pc = 0x1F4F28u;
    SET_GPR_U32(ctx, 31, 0x1F4F30u);
    ctx->pc = 0x1F4F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4F28u;
            // 0x1f4f2c: 0x8c44e38c  lw          $a0, -0x1C74($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960012)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F3488u;
    if (runtime->hasFunction(0x1F3488u)) {
        auto targetFn = runtime->lookupFunction(0x1F3488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4F30u; }
        if (ctx->pc != 0x1F4F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1f3488_0x1f34b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4F30u; }
        if (ctx->pc != 0x1F4F30u) { return; }
    }
    ctx->pc = 0x1F4F30u;
    // 0x1f4f30: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f4f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1f4f34: 0xc07cd22  jal         func_1F3488
    ctx->pc = 0x1F4F34u;
    SET_GPR_U32(ctx, 31, 0x1F4F3Cu);
    ctx->pc = 0x1F4F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4F34u;
            // 0x1f4f38: 0x8c44e380  lw          $a0, -0x1C80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960000)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F3488u;
    if (runtime->hasFunction(0x1F3488u)) {
        auto targetFn = runtime->lookupFunction(0x1F3488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4F3Cu; }
        if (ctx->pc != 0x1F4F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1f3488_0x1f34b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4F3Cu; }
        if (ctx->pc != 0x1F4F3Cu) { return; }
    }
    ctx->pc = 0x1F4F3Cu;
    // 0x1f4f3c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f4f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1f4f40: 0xc07cd22  jal         func_1F3488
    ctx->pc = 0x1F4F40u;
    SET_GPR_U32(ctx, 31, 0x1F4F48u);
    ctx->pc = 0x1F4F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4F40u;
            // 0x1f4f44: 0x8c44e384  lw          $a0, -0x1C7C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960004)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F3488u;
    if (runtime->hasFunction(0x1F3488u)) {
        auto targetFn = runtime->lookupFunction(0x1F3488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4F48u; }
        if (ctx->pc != 0x1F4F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1f3488_0x1f34b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4F48u; }
        if (ctx->pc != 0x1F4F48u) { return; }
    }
    ctx->pc = 0x1F4F48u;
    // 0x1f4f48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f4f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4F4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4F4Cu;
            // 0x1f4f50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F4F54u;
    // 0x1f4f54: 0x0  nop
    ctx->pc = 0x1f4f54u;
    // NOP
}
