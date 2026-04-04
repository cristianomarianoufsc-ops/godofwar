#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B79E0
// Address: 0x1b79e0 - 0x1b7a20
void sub_001B79E0_0x1b79e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B79E0_0x1b79e0");
#endif

    ctx->pc = 0x1b79e0u;

    // 0x1b79e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b79e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b79e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b79e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b79e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b79e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b79ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b79ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b79f0: 0x8e02154c  lw          $v0, 0x154C($s0)
    ctx->pc = 0x1b79f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5452)));
    // 0x1b79f4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B79F4u;
    {
        const bool branch_taken_0x1b79f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B79F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B79F4u;
            // 0x1b79f8: 0x8ca400e0  lw          $a0, 0xE0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b79f4) {
            ctx->pc = 0x1B7A0Cu;
            goto label_1b7a0c;
        }
    }
    ctx->pc = 0x1B79FCu;
    // 0x1b79fc: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1b79fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1b7a00: 0xc052b4a  jal         func_14AD28
    ctx->pc = 0x1B7A00u;
    SET_GPR_U32(ctx, 31, 0x1B7A08u);
    ctx->pc = 0x1B7A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7A00u;
            // 0x1b7a04: 0x24a555c0  addiu       $a1, $a1, 0x55C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14AD28u;
    if (runtime->hasFunction(0x14AD28u)) {
        auto targetFn = runtime->lookupFunction(0x14AD28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7A08u; }
        if (ctx->pc != 0x1B7A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014AD28_0x14ad28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7A08u; }
        if (ctx->pc != 0x1B7A08u) { return; }
    }
    ctx->pc = 0x1B7A08u;
    // 0x1b7a08: 0xae02154c  sw          $v0, 0x154C($s0)
    ctx->pc = 0x1b7a08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5452), GPR_U32(ctx, 2));
label_1b7a0c:
    // 0x1b7a0c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b7a0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7a10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b7a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7a14: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7A14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7A14u;
            // 0x1b7a18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B7A0Cu: goto label_1b7a0c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B7A1Cu;
    // 0x1b7a1c: 0x0  nop
    ctx->pc = 0x1b7a1cu;
    // NOP
}
