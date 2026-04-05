#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012ECC8
// Address: 0x12ecc8 - 0x12ed00
void sub_0012ECC8_0x12ecc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012ECC8_0x12ecc8");
#endif

    ctx->pc = 0x12ecc8u;

    // 0x12ecc8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x12ecc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x12eccc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12ecccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12ecd0: 0x8c44bdec  lw          $a0, -0x4214($v0)
    ctx->pc = 0x12ecd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950380)));
    // 0x12ecd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12ecd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12ecd8: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x12ECD8u;
    SET_GPR_U32(ctx, 31, 0x12ECE0u);
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ECE0u; }
        if (ctx->pc != 0x12ECE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ECE0u; }
        if (ctx->pc != 0x12ECE0u) { return; }
    }
    ctx->pc = 0x12ECE0u;
    // 0x12ece0: 0xc090122  jal         func_240488
    ctx->pc = 0x12ECE0u;
    SET_GPR_U32(ctx, 31, 0x12ECE8u);
    ctx->pc = 0x12ECE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12ECE0u;
            // 0x12ece4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x240488u;
    if (runtime->hasFunction(0x240488u)) {
        auto targetFn = runtime->lookupFunction(0x240488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ECE8u; }
        if (ctx->pc != 0x12ECE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00240488_0x240488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ECE8u; }
        if (ctx->pc != 0x12ECE8u) { return; }
    }
    ctx->pc = 0x12ECE8u;
    // 0x12ece8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12ece8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ecec: 0x3e00008  jr          $ra
    ctx->pc = 0x12ECECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12ECF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12ECECu;
            // 0x12ecf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12ECF4u;
    // 0x12ecf4: 0x0  nop
    ctx->pc = 0x12ecf4u;
    // NOP
    // 0x12ecf8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x12ecf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12ecfc: 0x0  nop
    ctx->pc = 0x12ecfcu;
    // NOP
}
