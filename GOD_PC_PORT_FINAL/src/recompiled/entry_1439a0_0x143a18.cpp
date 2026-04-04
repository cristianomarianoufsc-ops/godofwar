#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1439a0
// Address: 0x1439a0 - 0x143a18
void entry_1439a0_0x143a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1439a0_0x143a18");
#endif

    ctx->pc = 0x1439a0u;

    // 0x1439a0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1439a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1439a4: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1439A4u;
    {
        const bool branch_taken_0x1439a4 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1439A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1439A4u;
            // 0x1439a8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1439a4) {
            ctx->pc = 0x1439B4u;
            goto label_1439b4;
        }
    }
    ctx->pc = 0x1439ACu;
    // 0x1439ac: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1439acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1439b0: 0x52823  negu        $a1, $a1
    ctx->pc = 0x1439b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
label_1439b4:
    // 0x1439b4: 0x3c080030  lui         $t0, 0x30
    ctx->pc = 0x1439b4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)48 << 16));
    // 0x1439b8: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x1439b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1439bc: 0x25024928  addiu       $v0, $t0, 0x4928
    ctx->pc = 0x1439bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 18728));
    // 0x1439c0: 0xa040001f  sb          $zero, 0x1F($v0)
    ctx->pc = 0x1439c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 31), (uint8_t)GPR_U32(ctx, 0));
    // 0x1439c4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1439c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1439c8:
    // 0x1439c8: 0x25074928  addiu       $a3, $t0, 0x4928
    ctx->pc = 0x1439c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 18728));
    // 0x1439cc: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x1439ccu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1439d0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1439D0u;
    {
        const bool branch_taken_0x1439d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1439d0) {
            ctx->pc = 0x1439D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1439D0u;
            // 0x1439d4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1439D8u;
            goto label_1439d8;
        }
    }
    ctx->pc = 0x1439D8u;
label_1439d8:
    // 0x1439d8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1439d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1439dc: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1439dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1439e0: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x1439e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1439e4: 0x1810  mfhi        $v1
    ctx->pc = 0x1439e4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1439e8: 0x2812  mflo        $a1
    ctx->pc = 0x1439e8u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1439ec: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x1439ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1439f0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1439f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1439f4: 0x5ca0fff4  bgtzl       $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1439F4u;
    {
        const bool branch_taken_0x1439f4 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x1439f4) {
            ctx->pc = 0x1439F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1439F4u;
            // 0x1439f8: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1439C8u;
            runtime->cooperativeGuestYield();
            goto label_1439c8;
        }
    }
    ctx->pc = 0x1439FCu;
    // 0x1439fc: 0x11200004  beqz        $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1439FCu;
    {
        const bool branch_taken_0x1439fc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x143A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1439FCu;
            // 0x143a00: 0x2403002d  addiu       $v1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1439fc) {
            ctx->pc = 0x143A10u;
            goto label_143a10;
        }
    }
    ctx->pc = 0x143A04u;
    // 0x143a04: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x143a04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x143a08: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x143a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x143a0c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x143a0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_143a10:
    // 0x143a10: 0x3e00008  jr          $ra
    ctx->pc = 0x143A10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143A10u;
            // 0x143a14: 0xc71021  addu        $v0, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1439B4u: goto label_1439b4;
            case 0x1439C8u: goto label_1439c8;
            case 0x1439D8u: goto label_1439d8;
            case 0x143A10u: goto label_143a10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x143A18u;
}
