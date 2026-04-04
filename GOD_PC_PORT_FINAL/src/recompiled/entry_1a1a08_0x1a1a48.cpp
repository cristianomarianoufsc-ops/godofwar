#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1a1a08
// Address: 0x1a1a08 - 0x1a1a48
void entry_1a1a08_0x1a1a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1a1a08_0x1a1a48");
#endif

    ctx->pc = 0x1a1a08u;

    // 0x1a1a08: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1a1a08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1a0c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a1a0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a1a10: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1a1a10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a1a14: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1a1a14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1a18: 0x10a40007  beq         $a1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A1A18u;
    {
        const bool branch_taken_0x1a1a18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x1A1A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1A18u;
            // 0x1a1a1c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1a18) {
            ctx->pc = 0x1A1A38u;
            goto label_1a1a38;
        }
    }
    ctx->pc = 0x1A1A20u;
    // 0x1a1a20: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1a1a20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1a1a24: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x1a1a24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x1a1a28: 0xc0686d6  jal         func_1A1B58
    ctx->pc = 0x1A1A28u;
    SET_GPR_U32(ctx, 31, 0x1A1A30u);
    ctx->pc = 0x1A1A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1A28u;
            // 0x1a1a2c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B58u;
    if (runtime->hasFunction(0x1A1B58u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1A30u; }
        if (ctx->pc != 0x1A1A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B58_0x1a1b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1A30u; }
        if (ctx->pc != 0x1A1A30u) { return; }
    }
    ctx->pc = 0x1A1A30u;
    // 0x1a1a30: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1A30u;
    {
        const bool branch_taken_0x1a1a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1A30u;
            // 0x1a1a34: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1a30) {
            ctx->pc = 0x1A1A40u;
            goto label_1a1a40;
        }
    }
    ctx->pc = 0x1A1A38u;
label_1a1a38:
    // 0x1a1a38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a1a38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1a3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a1a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a1a40:
    // 0x1a1a40: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1A40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1A40u;
            // 0x1a1a44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A1A38u: goto label_1a1a38;
            case 0x1A1A40u: goto label_1a1a40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A1A48u;
}
