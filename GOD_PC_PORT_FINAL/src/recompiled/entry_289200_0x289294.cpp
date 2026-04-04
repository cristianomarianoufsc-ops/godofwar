#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_289200
// Address: 0x289200 - 0x289294
void entry_289200_0x289294(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_289200_0x289294");
#endif

    ctx->pc = 0x289200u;

    // 0x289200: 0x2cc20010  sltiu       $v0, $a2, 0x10
    ctx->pc = 0x289200u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x289204: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x289204u;
    {
        const bool branch_taken_0x289204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x289208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289204u;
            // 0x289208: 0x851025  or          $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289204) {
            ctx->pc = 0x28924Cu;
            goto label_28924c;
        }
    }
    ctx->pc = 0x28920Cu;
    // 0x28920c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x28920cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x289210: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x289210u;
    {
        const bool branch_taken_0x289210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x289210) {
            ctx->pc = 0x28924Cu;
            goto label_28924c;
        }
    }
    ctx->pc = 0x289218u;
label_289218:
    // 0x289218: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x289218u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28921c: 0x2cc70020  sltiu       $a3, $a2, 0x20
    ctx->pc = 0x28921cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x289220: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x289220u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x289224: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x289224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x289228: 0x704344c9  pxor        $t0, $v0, $v1
    ctx->pc = 0x289228u;
    SET_GPR_VEC(ctx, 8, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x28922c: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x28922cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x289230: 0x710753a9  pcpyud      $t2, $t0, $a3
    ctx->pc = 0x289230u;
    SET_GPR_VEC(ctx, 10, _mm_unpackhi_epi64(GPR_VEC(ctx, 8), GPR_VEC(ctx, 7)));
    // 0x289234: 0x1484825  or          $t1, $t2, $t0
    ctx->pc = 0x289234u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 8));
    // 0x289238: 0x49280a  movz        $a1, $v0, $t1
    ctx->pc = 0x289238u;
    if (GPR_U64(ctx, 9) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x28923c: 0x55200003  bnel        $t1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x28923Cu;
    {
        const bool branch_taken_0x28923c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x28923c) {
            ctx->pc = 0x289240u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28923Cu;
            // 0x289240: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28924Cu;
            goto label_28924c;
        }
    }
    ctx->pc = 0x289244u;
    // 0x289244: 0x10e0fff4  beqz        $a3, . + 4 + (-0xC << 2)
    ctx->pc = 0x289244u;
    {
        const bool branch_taken_0x289244 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x289248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289244u;
            // 0x289248: 0x24c6fff0  addiu       $a2, $a2, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289244) {
            ctx->pc = 0x289218u;
            runtime->cooperativeGuestYield();
            goto label_289218;
        }
    }
    ctx->pc = 0x28924Cu;
label_28924c:
    // 0x28924c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x28924cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x289250: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x289250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x289254: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x289254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x289258: 0x10c2000c  beq         $a2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x289258u;
    {
        const bool branch_taken_0x289258 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x289258) {
            ctx->pc = 0x28928Cu;
            goto label_28928c;
        }
    }
    ctx->pc = 0x289260u;
    // 0x289260: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x289260u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x289264: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x289264u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_289268:
    // 0x289268: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x289268u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28926c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x28926cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x289270: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x289270u;
    {
        const bool branch_taken_0x289270 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x289274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289270u;
            // 0x289274: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289270) {
            ctx->pc = 0x289280u;
            goto label_289280;
        }
    }
    ctx->pc = 0x289278u;
    // 0x289278: 0x3e00008  jr          $ra
    ctx->pc = 0x289278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28927Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289278u;
            // 0x28927c: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x289218u: goto label_289218;
            case 0x28924Cu: goto label_28924c;
            case 0x289268u: goto label_289268;
            case 0x289280u: goto label_289280;
            case 0x28928Cu: goto label_28928c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x289280u;
label_289280:
    // 0x289280: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x289280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x289284: 0x14c7fff8  bne         $a2, $a3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x289284u;
    {
        const bool branch_taken_0x289284 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        ctx->pc = 0x289288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289284u;
            // 0x289288: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289284) {
            ctx->pc = 0x289268u;
            runtime->cooperativeGuestYield();
            goto label_289268;
        }
    }
    ctx->pc = 0x28928Cu;
label_28928c:
    // 0x28928c: 0x3e00008  jr          $ra
    ctx->pc = 0x28928Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28928Cu;
            // 0x289290: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x289218u: goto label_289218;
            case 0x28924Cu: goto label_28924c;
            case 0x289268u: goto label_289268;
            case 0x289280u: goto label_289280;
            case 0x28928Cu: goto label_28928c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x289294u;
}
