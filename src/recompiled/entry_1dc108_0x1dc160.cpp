#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1dc108
// Address: 0x1dc108 - 0x1dc160
void entry_1dc108_0x1dc160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1dc108_0x1dc160");
#endif

    ctx->pc = 0x1dc108u;

    // 0x1dc108: 0x460d6301  sub.s       $f12, $f12, $f13
    ctx->pc = 0x1dc108u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[13]);
    // 0x1dc10c: 0x3c01c334  lui         $at, 0xC334
    ctx->pc = 0x1dc10cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49972 << 16));
    // 0x1dc110: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1dc110u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dc114: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1dc114u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dc118: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1DC118u;
    {
        const bool branch_taken_0x1dc118 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dc118) {
            ctx->pc = 0x1DC130u;
            goto label_1dc130;
        }
    }
    ctx->pc = 0x1DC120u;
    // 0x1dc120: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x1dc120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x1dc124: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1dc124u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dc128: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1DC128u;
    {
        const bool branch_taken_0x1dc128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC12Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC128u;
            // 0x1dc12c: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc128) {
            ctx->pc = 0x1DC150u;
            goto label_1dc150;
        }
    }
    ctx->pc = 0x1DC130u;
label_1dc130:
    // 0x1dc130: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x1dc130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x1dc134: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1dc134u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dc138: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x1dc138u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dc13c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1DC13Cu;
    {
        const bool branch_taken_0x1dc13c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dc13c) {
            ctx->pc = 0x1DC150u;
            goto label_1dc150;
        }
    }
    ctx->pc = 0x1DC144u;
    // 0x1dc144: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x1dc144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x1dc148: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1dc148u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dc14c: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x1dc14cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_1dc150:
    // 0x1dc150: 0x46006005  abs.s       $f0, $f12
    ctx->pc = 0x1dc150u;
    ctx->f[0] = FPU_ABS_S(ctx->f[12]);
    // 0x1dc154: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC154u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DC130u: goto label_1dc130;
            case 0x1DC150u: goto label_1dc150;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DC15Cu;
    // 0x1dc15c: 0x0  nop
    ctx->pc = 0x1dc15cu;
    // NOP
}
