#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022FDE0
// Address: 0x22fde0 - 0x22fe30
void sub_0022FDE0_0x22fde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022FDE0_0x22fde0");
#endif

    ctx->pc = 0x22fde0u;

    // 0x22fde0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22fde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22fde4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22fde4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x22fde8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22fde8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22fdec: 0xc08b610  jal         func_22D840
    ctx->pc = 0x22FDECu;
    SET_GPR_U32(ctx, 31, 0x22FDF4u);
    ctx->pc = 0x22FDF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22FDECu;
            // 0x22fdf0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D840u;
    if (runtime->hasFunction(0x22D840u)) {
        auto targetFn = runtime->lookupFunction(0x22D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FDF4u; }
        if (ctx->pc != 0x22FDF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D840_0x22d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FDF4u; }
        if (ctx->pc != 0x22FDF4u) { return; }
    }
    ctx->pc = 0x22FDF4u;
    // 0x22fdf4: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x22fdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x22fdf8: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x22fdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x22fdfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22fdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22fe00: 0xac7012bc  sw          $s0, 0x12BC($v1)
    ctx->pc = 0x22fe00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4796), GPR_U32(ctx, 16));
    // 0x22fe04: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x22fe04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x22fe08: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x22fe08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x22fe0c: 0xac8212c0  sw          $v0, 0x12C0($a0)
    ctx->pc = 0x22fe0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4800), GPR_U32(ctx, 2));
    // 0x22fe10: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22fe10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22fe14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22fe14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fe18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22fe18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22fe1c: 0xacc012b0  sw          $zero, 0x12B0($a2)
    ctx->pc = 0x22fe1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4784), GPR_U32(ctx, 0));
    // 0x22fe20: 0xaca012ac  sw          $zero, 0x12AC($a1)
    ctx->pc = 0x22fe20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4780), GPR_U32(ctx, 0));
    // 0x22fe24: 0x3e00008  jr          $ra
    ctx->pc = 0x22FE24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22FE28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FE24u;
            // 0x22fe28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22FE2Cu;
    // 0x22fe2c: 0x0  nop
    ctx->pc = 0x22fe2cu;
    // NOP
}
