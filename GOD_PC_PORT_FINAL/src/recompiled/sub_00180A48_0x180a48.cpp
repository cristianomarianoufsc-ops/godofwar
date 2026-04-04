#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00180A48
// Address: 0x180a48 - 0x180a80
void sub_00180A48_0x180a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180A48_0x180a48");
#endif

    ctx->pc = 0x180a48u;

    // 0x180a48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x180a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x180a4c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x180a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x180a50: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x180a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x180a54: 0x24420458  addiu       $v0, $v0, 0x458
    ctx->pc = 0x180a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1112));
    // 0x180a58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x180a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x180a5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x180a5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180a60: 0xc0602ba  jal         func_180AE8
    ctx->pc = 0x180A60u;
    SET_GPR_U32(ctx, 31, 0x180A68u);
    ctx->pc = 0x180A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180A60u;
            // 0x180a64: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180AE8u;
    if (runtime->hasFunction(0x180AE8u)) {
        auto targetFn = runtime->lookupFunction(0x180AE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180A68u; }
        if (ctx->pc != 0x180A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180AE8_0x180ae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180A68u; }
        if (ctx->pc != 0x180A68u) { return; }
    }
    ctx->pc = 0x180A68u;
    // 0x180a68: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x180a68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180a6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180a70: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x180a70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180a74: 0x3e00008  jr          $ra
    ctx->pc = 0x180A74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180A74u;
            // 0x180a78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x180A7Cu;
    // 0x180a7c: 0x0  nop
    ctx->pc = 0x180a7cu;
    // NOP
}
