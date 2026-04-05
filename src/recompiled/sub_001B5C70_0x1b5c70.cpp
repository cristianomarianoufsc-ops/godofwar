#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B5C70
// Address: 0x1b5c70 - 0x1b5ce0
void sub_001B5C70_0x1b5c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5C70_0x1b5c70");
#endif

    ctx->pc = 0x1b5c70u;

    // 0x1b5c70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b5c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b5c74: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b5c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b5c78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b5c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b5c7c: 0xc06d6d8  jal         func_1B5B60
    ctx->pc = 0x1B5C7Cu;
    SET_GPR_U32(ctx, 31, 0x1B5C84u);
    ctx->pc = 0x1B5C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5C7Cu;
            // 0x1b5c80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5B60u;
    if (runtime->hasFunction(0x1B5B60u)) {
        auto targetFn = runtime->lookupFunction(0x1B5B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5C84u; }
        if (ctx->pc != 0x1B5C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1b5b60_0x1b5ba8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5C84u; }
        if (ctx->pc != 0x1B5C84u) { return; }
    }
    ctx->pc = 0x1B5C84u;
    // 0x1b5c84: 0x240500be  addiu       $a1, $zero, 0xBE
    ctx->pc = 0x1b5c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
    // 0x1b5c88: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1b5c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b5c8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b5c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5c90: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x1b5c90u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x1b5c94: 0x1085000e  beq         $a0, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x1B5C94u;
    {
        const bool branch_taken_0x1b5c94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x1B5C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5C94u;
            // 0x1b5c98: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5c94) {
            ctx->pc = 0x1B5CD0u;
            goto label_1b5cd0;
        }
    }
    ctx->pc = 0x1B5C9Cu;
    // 0x1b5c9c: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1b5c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1b5ca0:
    // 0x1b5ca0: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x1b5ca0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1b5ca4: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x1b5ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1b5ca8: 0x8c4202bc  lw          $v0, 0x2BC($v0)
    ctx->pc = 0x1b5ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 700)));
    // 0x1b5cac: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5CACu;
    {
        const bool branch_taken_0x1b5cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5cac) {
            ctx->pc = 0x1B5CB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5CACu;
            // 0x1b5cb0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B5CBCu;
            goto label_1b5cbc;
        }
    }
    ctx->pc = 0x1B5CB4u;
    // 0x1b5cb4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B5CB4u;
    {
        const bool branch_taken_0x1b5cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5CB4u;
            // 0x1b5cb8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5cb4) {
            ctx->pc = 0x1B5CD0u;
            goto label_1b5cd0;
        }
    }
    ctx->pc = 0x1B5CBCu;
label_1b5cbc:
    // 0x1b5cbc: 0x388200bf  xori        $v0, $a0, 0xBF
    ctx->pc = 0x1b5cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)191);
    // 0x1b5cc0: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x1b5cc0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x1b5cc4: 0x1485fff6  bne         $a0, $a1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1B5CC4u;
    {
        const bool branch_taken_0x1b5cc4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x1B5CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5CC4u;
            // 0x1b5cc8: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5cc4) {
            ctx->pc = 0x1B5CA0u;
            runtime->cooperativeGuestYield();
            goto label_1b5ca0;
        }
    }
    ctx->pc = 0x1B5CCCu;
    // 0x1b5ccc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b5cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b5cd0:
    // 0x1b5cd0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b5cd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5cd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b5cd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5CD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5CD8u;
            // 0x1b5cdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B5CA0u: goto label_1b5ca0;
            case 0x1B5CBCu: goto label_1b5cbc;
            case 0x1B5CD0u: goto label_1b5cd0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B5CE0u;
}
