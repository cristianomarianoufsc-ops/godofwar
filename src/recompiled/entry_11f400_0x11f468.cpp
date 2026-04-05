#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_11f400
// Address: 0x11f400 - 0x11f468
void entry_11f400_0x11f468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_11f400_0x11f468");
#endif

    ctx->pc = 0x11f400u;

    // 0x11f400: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11f400u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f404: 0x2482022c  addiu       $v0, $a0, 0x22C
    ctx->pc = 0x11f404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 556));
label_11f408:
    // 0x11f408: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x11f408u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x11f40c: 0x434021  addu        $t0, $v0, $v1
    ctx->pc = 0x11f40cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11f410: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x11f410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x11f414: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x11F414u;
    {
        const bool branch_taken_0x11f414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11f414) {
            ctx->pc = 0x11F418u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11F414u;
            // 0x11f418: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11F450u;
            goto label_11f450;
        }
    }
    ctx->pc = 0x11F41Cu;
    // 0x11f41c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x11f41cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11f420: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x11f420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x11f424: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11f424u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11f428: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11f428u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11f42c: 0x9482462e  lhu         $v0, 0x462E($a0)
    ctx->pc = 0x11f42cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 17966)));
    // 0x11f430: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x11f430u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x11f434: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x11f434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11f438: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11f438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11f43c: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x11f43cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x11f440: 0xa482462e  sh          $v0, 0x462E($a0)
    ctx->pc = 0x11f440u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 17966), (uint16_t)GPR_U32(ctx, 2));
    // 0x11f444: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x11f444u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f448: 0x3e00008  jr          $ra
    ctx->pc = 0x11F448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F44Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F448u;
            // 0x11f44c: 0xe4600230  swc1        $f0, 0x230($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 560), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11F408u: goto label_11f408;
            case 0x11F450u: goto label_11f450;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11F450u;
label_11f450:
    // 0x11f450: 0x2ce20100  sltiu       $v0, $a3, 0x100
    ctx->pc = 0x11f450u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x11f454: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x11F454u;
    {
        const bool branch_taken_0x11f454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F454u;
            // 0x11f458: 0x2482022c  addiu       $v0, $a0, 0x22C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 556));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f454) {
            ctx->pc = 0x11F408u;
            runtime->cooperativeGuestYield();
            goto label_11f408;
        }
    }
    ctx->pc = 0x11F45Cu;
    // 0x11f45c: 0x3e00008  jr          $ra
    ctx->pc = 0x11F45Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F45Cu;
            // 0x11f460: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11F408u: goto label_11f408;
            case 0x11F450u: goto label_11f450;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11F464u;
    // 0x11f464: 0x0  nop
    ctx->pc = 0x11f464u;
    // NOP
}
