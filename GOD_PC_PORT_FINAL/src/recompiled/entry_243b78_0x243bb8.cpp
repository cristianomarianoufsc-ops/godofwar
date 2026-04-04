#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_243b78
// Address: 0x243b78 - 0x243bb8
void entry_243b78_0x243bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_243b78_0x243bb8");
#endif

    ctx->pc = 0x243b78u;

    // 0x243b78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x243b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x243b7c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x243b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x243b80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x243b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x243b84: 0xc04e1c2  jal         func_138708
    ctx->pc = 0x243B84u;
    SET_GPR_U32(ctx, 31, 0x243B8Cu);
    ctx->pc = 0x243B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243B84u;
            // 0x243b88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138708u;
    if (runtime->hasFunction(0x138708u)) {
        auto targetFn = runtime->lookupFunction(0x138708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243B8Cu; }
        if (ctx->pc != 0x243B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00138708_0x138708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243B8Cu; }
        if (ctx->pc != 0x243B8Cu) { return; }
    }
    ctx->pc = 0x243B8Cu;
    // 0x243b8c: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x243b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x243b90: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x243b90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243b94: 0x24639ad0  addiu       $v1, $v1, -0x6530
    ctx->pc = 0x243b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941392));
    // 0x243b98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x243b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243b9c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x243b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x243ba0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x243ba0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x243BA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243BA4u;
            // 0x243ba8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x243BACu;
    // 0x243bac: 0x0  nop
    ctx->pc = 0x243bacu;
    // NOP
    // 0x243bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x243BB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243BB0u;
            // 0x243bb4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x243BB8u;
}
