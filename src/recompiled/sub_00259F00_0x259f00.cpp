#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00259F00
// Address: 0x259f00 - 0x259f38
void sub_00259F00_0x259f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259F00_0x259f00");
#endif

    ctx->pc = 0x259f00u;

    // 0x259f00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x259f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x259f04: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x259f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x259f08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x259f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x259f0c: 0xc06a398  jal         func_1A8E60
    ctx->pc = 0x259F0Cu;
    SET_GPR_U32(ctx, 31, 0x259F14u);
    ctx->pc = 0x259F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259F0Cu;
            // 0x259f10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E60u;
    if (runtime->hasFunction(0x1A8E60u)) {
        auto targetFn = runtime->lookupFunction(0x1A8E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259F14u; }
        if (ctx->pc != 0x259F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a8e60_0x1a8ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259F14u; }
        if (ctx->pc != 0x259F14u) { return; }
    }
    ctx->pc = 0x259F14u;
    // 0x259f14: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x259f14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x259f18: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x259f18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259f1c: 0x24639110  addiu       $v1, $v1, -0x6EF0
    ctx->pc = 0x259f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938896));
    // 0x259f20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x259f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259f24: 0xae0300a4  sw          $v1, 0xA4($s0)
    ctx->pc = 0x259f24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
    // 0x259f28: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x259f28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x259F2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259F2Cu;
            // 0x259f30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x259F34u;
    // 0x259f34: 0x0  nop
    ctx->pc = 0x259f34u;
    // NOP
}
