#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2944e8
// Address: 0x2944e8 - 0x294590
void entry_2944e8_0x294590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2944e8_0x294590");
#endif

    ctx->pc = 0x2944e8u;

    // 0x2944e8: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x2944e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x2944ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2944ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2944f0: 0x34e7f000  ori         $a3, $a3, 0xF000
    ctx->pc = 0x2944f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)61440);
    // 0x2944f4: 0x0  nop
    ctx->pc = 0x2944f4u;
    // NOP
label_2944f8:
    // 0x2944f8: 0xf  sync
    ctx->pc = 0x2944f8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2944fc: 0xbcd00000  cache       0x10, 0x0($a2)
    ctx->pc = 0x2944fcu;
    // CACHE instruction (ignored)
    // 0x294500: 0xf  sync
    ctx->pc = 0x294500u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x294504: 0x4002e000  mfc0        $v0, TagLo
    ctx->pc = 0x294504u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_taglo);
    // 0x294508: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x294508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x29450c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x29450cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x294510: 0xa2182b  sltu        $v1, $a1, $v0
    ctx->pc = 0x294510u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x294514: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x294514u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x294518: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x294518u;
    {
        const bool branch_taken_0x294518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x294518) {
            ctx->pc = 0x294534u;
            goto label_294534;
        }
    }
    ctx->pc = 0x294520u;
    // 0x294520: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x294520u;
    {
        const bool branch_taken_0x294520 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x294520) {
            ctx->pc = 0x294534u;
            goto label_294534;
        }
    }
    ctx->pc = 0x294528u;
    // 0x294528: 0xf  sync
    ctx->pc = 0x294528u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x29452c: 0xbcd60000  cache       0x16, 0x0($a2)
    ctx->pc = 0x29452cu;
    // CACHE instruction (ignored)
    // 0x294530: 0xf  sync
    ctx->pc = 0x294530u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_294534:
    // 0x294534: 0xf  sync
    ctx->pc = 0x294534u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x294538: 0xbcd00001  cache       0x10, 0x1($a2)
    ctx->pc = 0x294538u;
    // CACHE instruction (ignored)
    // 0x29453c: 0xf  sync
    ctx->pc = 0x29453cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x294540: 0x4002e000  mfc0        $v0, TagLo
    ctx->pc = 0x294540u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_taglo);
    // 0x294544: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x294544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x294548: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x294548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x29454c: 0xa2182b  sltu        $v1, $a1, $v0
    ctx->pc = 0x29454cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x294550: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x294550u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x294554: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x294554u;
    {
        const bool branch_taken_0x294554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x294554) {
            ctx->pc = 0x294570u;
            goto label_294570;
        }
    }
    ctx->pc = 0x29455Cu;
    // 0x29455c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29455Cu;
    {
        const bool branch_taken_0x29455c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29455c) {
            ctx->pc = 0x294570u;
            goto label_294570;
        }
    }
    ctx->pc = 0x294564u;
    // 0x294564: 0xf  sync
    ctx->pc = 0x294564u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x294568: 0xbcd60001  cache       0x16, 0x1($a2)
    ctx->pc = 0x294568u;
    // CACHE instruction (ignored)
    // 0x29456c: 0xf  sync
    ctx->pc = 0x29456cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_294570:
    // 0x294570: 0xf  sync
    ctx->pc = 0x294570u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x294574: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x294574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x294578: 0x28c21000  slti        $v0, $a2, 0x1000
    ctx->pc = 0x294578u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4096) ? 1 : 0);
    // 0x29457c: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x29457Cu;
    {
        const bool branch_taken_0x29457c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29457c) {
            ctx->pc = 0x2944F8u;
            runtime->cooperativeGuestYield();
            goto label_2944f8;
        }
    }
    ctx->pc = 0x294584u;
    // 0x294584: 0x3e00008  jr          $ra
    ctx->pc = 0x294584u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2944F8u: goto label_2944f8;
            case 0x294534u: goto label_294534;
            case 0x294570u: goto label_294570;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29458Cu;
    // 0x29458c: 0x0  nop
    ctx->pc = 0x29458cu;
    // NOP
}
