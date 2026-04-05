#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00259F70
// Address: 0x259f70 - 0x259fa8
void sub_00259F70_0x259f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259F70_0x259f70");
#endif

    ctx->pc = 0x259f70u;

    // 0x259f70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x259f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x259f74: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x259f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x259f78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x259f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x259f7c: 0xc06a398  jal         func_1A8E60
    ctx->pc = 0x259F7Cu;
    SET_GPR_U32(ctx, 31, 0x259F84u);
    ctx->pc = 0x259F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259F7Cu;
            // 0x259f80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E60u;
    if (runtime->hasFunction(0x1A8E60u)) {
        auto targetFn = runtime->lookupFunction(0x1A8E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259F84u; }
        if (ctx->pc != 0x259F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a8e60_0x1a8ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259F84u; }
        if (ctx->pc != 0x259F84u) { return; }
    }
    ctx->pc = 0x259F84u;
    // 0x259f84: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x259f84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x259f88: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x259f88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259f8c: 0x24639090  addiu       $v1, $v1, -0x6F70
    ctx->pc = 0x259f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938768));
    // 0x259f90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x259f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259f94: 0xae0300a4  sw          $v1, 0xA4($s0)
    ctx->pc = 0x259f94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
    // 0x259f98: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x259f98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x259F9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259F9Cu;
            // 0x259fa0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x259FA4u;
    // 0x259fa4: 0x0  nop
    ctx->pc = 0x259fa4u;
    // NOP
}
