#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012FF30
// Address: 0x12ff30 - 0x12ff70
void sub_0012FF30_0x12ff30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012FF30_0x12ff30");
#endif

    ctx->pc = 0x12ff30u;

    // 0x12ff30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12ff30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12ff34: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12ff34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12ff38: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x12ff38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x12ff3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12ff3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12ff40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12ff40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ff44: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x12ff44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x12ff48: 0xae060004  sw          $a2, 0x4($s0)
    ctx->pc = 0x12ff48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
    // 0x12ff4c: 0xa602000a  sh          $v0, 0xA($s0)
    ctx->pc = 0x12ff4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x12ff50: 0xc04bfb6  jal         func_12FED8
    ctx->pc = 0x12FF50u;
    SET_GPR_U32(ctx, 31, 0x12FF58u);
    ctx->pc = 0x12FF54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12FF50u;
            // 0x12ff54: 0xa6020008  sh          $v0, 0x8($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FED8u;
    if (runtime->hasFunction(0x12FED8u)) {
        auto targetFn = runtime->lookupFunction(0x12FED8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FF58u; }
        if (ctx->pc != 0x12FF58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_12fed8_0x12fee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FF58u; }
        if (ctx->pc != 0x12FF58u) { return; }
    }
    ctx->pc = 0x12FF58u;
    // 0x12ff58: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x12ff58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ff5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12ff5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ff60: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x12ff60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12ff64: 0x3e00008  jr          $ra
    ctx->pc = 0x12FF64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FF68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FF64u;
            // 0x12ff68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12FF6Cu;
    // 0x12ff6c: 0x0  nop
    ctx->pc = 0x12ff6cu;
    // NOP
}
