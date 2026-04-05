#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002453A0
// Address: 0x2453a0 - 0x2453e0
void sub_002453A0_0x2453a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002453A0_0x2453a0");
#endif

    ctx->pc = 0x2453a0u;

    // 0x2453a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2453a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2453a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2453a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2453a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2453a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2453ac: 0xc04e1c2  jal         func_138708
    ctx->pc = 0x2453ACu;
    SET_GPR_U32(ctx, 31, 0x2453B4u);
    ctx->pc = 0x2453B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2453ACu;
            // 0x2453b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138708u;
    if (runtime->hasFunction(0x138708u)) {
        auto targetFn = runtime->lookupFunction(0x138708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2453B4u; }
        if (ctx->pc != 0x2453B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00138708_0x138708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2453B4u; }
        if (ctx->pc != 0x2453B4u) { return; }
    }
    ctx->pc = 0x2453B4u;
    // 0x2453b4: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x2453b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x2453b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2453b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2453bc: 0x24638748  addiu       $v1, $v1, -0x78B8
    ctx->pc = 0x2453bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936392));
    // 0x2453c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2453c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2453c4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2453c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2453c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2453c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2453cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2453CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2453D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2453CCu;
            // 0x2453d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2453D4u;
    // 0x2453d4: 0x0  nop
    ctx->pc = 0x2453d4u;
    // NOP
    // 0x2453d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2453D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2453DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2453D8u;
            // 0x2453dc: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2453E0u;
}
