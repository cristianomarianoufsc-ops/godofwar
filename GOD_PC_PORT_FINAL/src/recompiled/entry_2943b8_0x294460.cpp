#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2943b8
// Address: 0x2943b8 - 0x294460
void entry_2943b8_0x294460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2943b8_0x294460");
#endif

    ctx->pc = 0x2943b8u;

    // 0x2943b8: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x2943b8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x2943bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2943bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2943c0: 0x34e7f000  ori         $a3, $a3, 0xF000
    ctx->pc = 0x2943c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)61440);
    // 0x2943c4: 0x0  nop
    ctx->pc = 0x2943c4u;
    // NOP
label_2943c8:
    // 0x2943c8: 0xf  sync
    ctx->pc = 0x2943c8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2943cc: 0xbcd00000  cache       0x10, 0x0($a2)
    ctx->pc = 0x2943ccu;
    // CACHE instruction (ignored)
    // 0x2943d0: 0xf  sync
    ctx->pc = 0x2943d0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2943d4: 0x4002e000  mfc0        $v0, TagLo
    ctx->pc = 0x2943d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_taglo);
    // 0x2943d8: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x2943d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x2943dc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2943dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2943e0: 0xa2182b  sltu        $v1, $a1, $v0
    ctx->pc = 0x2943e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2943e4: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2943e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2943e8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2943E8u;
    {
        const bool branch_taken_0x2943e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2943e8) {
            ctx->pc = 0x294404u;
            goto label_294404;
        }
    }
    ctx->pc = 0x2943F0u;
    // 0x2943f0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2943F0u;
    {
        const bool branch_taken_0x2943f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2943f0) {
            ctx->pc = 0x294404u;
            goto label_294404;
        }
    }
    ctx->pc = 0x2943F8u;
    // 0x2943f8: 0xf  sync
    ctx->pc = 0x2943f8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2943fc: 0xbcd40000  cache       0x14, 0x0($a2)
    ctx->pc = 0x2943fcu;
    // CACHE instruction (ignored)
    // 0x294400: 0xf  sync
    ctx->pc = 0x294400u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_294404:
    // 0x294404: 0xf  sync
    ctx->pc = 0x294404u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x294408: 0xbcd00001  cache       0x10, 0x1($a2)
    ctx->pc = 0x294408u;
    // CACHE instruction (ignored)
    // 0x29440c: 0xf  sync
    ctx->pc = 0x29440cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x294410: 0x4002e000  mfc0        $v0, TagLo
    ctx->pc = 0x294410u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_taglo);
    // 0x294414: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x294414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x294418: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x294418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x29441c: 0xa2182b  sltu        $v1, $a1, $v0
    ctx->pc = 0x29441cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x294420: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x294420u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x294424: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x294424u;
    {
        const bool branch_taken_0x294424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x294424) {
            ctx->pc = 0x294440u;
            goto label_294440;
        }
    }
    ctx->pc = 0x29442Cu;
    // 0x29442c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29442Cu;
    {
        const bool branch_taken_0x29442c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29442c) {
            ctx->pc = 0x294440u;
            goto label_294440;
        }
    }
    ctx->pc = 0x294434u;
    // 0x294434: 0xf  sync
    ctx->pc = 0x294434u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x294438: 0xbcd40001  cache       0x14, 0x1($a2)
    ctx->pc = 0x294438u;
    // CACHE instruction (ignored)
    // 0x29443c: 0xf  sync
    ctx->pc = 0x29443cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_294440:
    // 0x294440: 0xf  sync
    ctx->pc = 0x294440u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x294444: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x294444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x294448: 0x28c21000  slti        $v0, $a2, 0x1000
    ctx->pc = 0x294448u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4096) ? 1 : 0);
    // 0x29444c: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x29444Cu;
    {
        const bool branch_taken_0x29444c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29444c) {
            ctx->pc = 0x2943C8u;
            runtime->cooperativeGuestYield();
            goto label_2943c8;
        }
    }
    ctx->pc = 0x294454u;
    // 0x294454: 0x3e00008  jr          $ra
    ctx->pc = 0x294454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2943C8u: goto label_2943c8;
            case 0x294404u: goto label_294404;
            case 0x294440u: goto label_294440;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29445Cu;
    // 0x29445c: 0x0  nop
    ctx->pc = 0x29445cu;
    // NOP
}
