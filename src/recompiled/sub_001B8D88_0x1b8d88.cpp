#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B8D88
// Address: 0x1b8d88 - 0x1b8df0
void sub_001B8D88_0x1b8d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8D88_0x1b8d88");
#endif

    ctx->pc = 0x1b8d88u;

    // 0x1b8d88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b8d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b8d8c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1b8d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8d90: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1b8d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1b8d94: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b8d94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8d98: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b8d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b8d9c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1b8d9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8da0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b8da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b8da4: 0xc06e338  jal         func_1B8CE0
    ctx->pc = 0x1B8DA4u;
    SET_GPR_U32(ctx, 31, 0x1B8DACu);
    ctx->pc = 0x1B8DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8DA4u;
            // 0x1b8da8: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8CE0u;
    if (runtime->hasFunction(0x1B8CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B8CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8DACu; }
        if (ctx->pc != 0x1B8DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8CE0_0x1b8ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8DACu; }
        if (ctx->pc != 0x1B8DACu) { return; }
    }
    ctx->pc = 0x1B8DACu;
    // 0x1b8dac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b8dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8db0: 0x204102a  slt         $v0, $s0, $a0
    ctx->pc = 0x1b8db0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1b8db4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B8DB4u;
    {
        const bool branch_taken_0x1b8db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8DB4u;
            // 0x1b8db8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8db4) {
            ctx->pc = 0x1B8DD8u;
            goto label_1b8dd8;
        }
    }
    ctx->pc = 0x1B8DBCu;
    // 0x1b8dbc: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1b8dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1b8dc0: 0x8c63cba4  lw          $v1, -0x345C($v1)
    ctx->pc = 0x1b8dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953892)));
    // 0x1b8dc4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1b8dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1b8dc8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b8dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b8dcc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b8dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b8dd0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b8dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b8dd4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1b8dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1b8dd8:
    // 0x1b8dd8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1b8dd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b8ddc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1b8ddcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8de0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b8de0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8de4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b8de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8de8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8DE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8DE8u;
            // 0x1b8dec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B8DD8u: goto label_1b8dd8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B8DF0u;
}
