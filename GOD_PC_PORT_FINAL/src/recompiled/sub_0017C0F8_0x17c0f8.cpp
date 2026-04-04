#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017C0F8
// Address: 0x17c0f8 - 0x17c130
void sub_0017C0F8_0x17c0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C0F8_0x17c0f8");
#endif

    ctx->pc = 0x17c0f8u;

    // 0x17c0f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17c0f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17c0fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17c0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17c100: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17c100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17c104: 0xc05efb4  jal         func_17BED0
    ctx->pc = 0x17C104u;
    SET_GPR_U32(ctx, 31, 0x17C10Cu);
    ctx->pc = 0x17C108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C104u;
            // 0x17c108: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17BED0u;
    if (runtime->hasFunction(0x17BED0u)) {
        auto targetFn = runtime->lookupFunction(0x17BED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C10Cu; }
        if (ctx->pc != 0x17C10Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17bed0_0x17bf20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C10Cu; }
        if (ctx->pc != 0x17C10Cu) { return; }
    }
    ctx->pc = 0x17C10Cu;
    // 0x17c10c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17c10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17c110: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x17c110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x17c114: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x17c114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    // 0x17c118: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x17c118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x17c11c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17c11cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c120: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17c120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c124: 0x3e00008  jr          $ra
    ctx->pc = 0x17C124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C124u;
            // 0x17c128: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17C12Cu;
    // 0x17c12c: 0x0  nop
    ctx->pc = 0x17c12cu;
    // NOP
}
