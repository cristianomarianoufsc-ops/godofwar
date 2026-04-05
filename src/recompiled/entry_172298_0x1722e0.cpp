#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_172298
// Address: 0x172298 - 0x1722e0
void entry_172298_0x1722e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_172298_0x1722e0");
#endif

    ctx->pc = 0x172298u;

    // 0x172298: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x172298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17229c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17229cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1722a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1722a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1722a4: 0x8c900024  lw          $s0, 0x24($a0)
    ctx->pc = 0x1722a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1722a8: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1722A8u;
    {
        const bool branch_taken_0x1722a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1722a8) {
            ctx->pc = 0x1722ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1722A8u;
            // 0x1722ac: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1722D0u;
            goto label_1722d0;
        }
    }
    ctx->pc = 0x1722B0u;
    // 0x1722b0: 0x2604fff8  addiu       $a0, $s0, -0x8
    ctx->pc = 0x1722b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x1722b4: 0x0  nop
    ctx->pc = 0x1722b4u;
    // NOP
label_1722b8:
    // 0x1722b8: 0xc05c208  jal         func_170820
    ctx->pc = 0x1722B8u;
    SET_GPR_U32(ctx, 31, 0x1722C0u);
    ctx->pc = 0x1722BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1722B8u;
            // 0x1722bc: 0x10200a  movz        $a0, $zero, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170820u;
    if (runtime->hasFunction(0x170820u)) {
        auto targetFn = runtime->lookupFunction(0x170820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1722C0u; }
        if (ctx->pc != 0x1722C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170820_0x170820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1722C0u; }
        if (ctx->pc != 0x1722C0u) { return; }
    }
    ctx->pc = 0x1722C0u;
    // 0x1722c0: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1722c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1722c4: 0x5600fffc  bnel        $s0, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1722C4u;
    {
        const bool branch_taken_0x1722c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1722c4) {
            ctx->pc = 0x1722C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1722C4u;
            // 0x1722c8: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1722B8u;
            runtime->cooperativeGuestYield();
            goto label_1722b8;
        }
    }
    ctx->pc = 0x1722CCu;
    // 0x1722cc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1722ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1722d0:
    // 0x1722d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1722d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1722d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1722D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1722D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1722D4u;
            // 0x1722d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1722B8u: goto label_1722b8;
            case 0x1722D0u: goto label_1722d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1722DCu;
    // 0x1722dc: 0x0  nop
    ctx->pc = 0x1722dcu;
    // NOP
}
