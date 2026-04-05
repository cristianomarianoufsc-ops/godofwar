#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_289340
// Address: 0x289340 - 0x28943c
void entry_289340_0x28943c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_289340_0x28943c");
#endif

    ctx->pc = 0x289340u;

    // 0x289340: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x289340u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289344: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x289344u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x289348: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x289348u;
    {
        const bool branch_taken_0x289348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28934Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289348u;
            // 0x28934c: 0x100182d  daddu       $v1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289348) {
            ctx->pc = 0x289394u;
            goto label_289394;
        }
    }
    ctx->pc = 0x289350u;
    // 0x289350: 0xa63821  addu        $a3, $a1, $a2
    ctx->pc = 0x289350u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x289354: 0x107102b  sltu        $v0, $t0, $a3
    ctx->pc = 0x289354u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x289358: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x289358u;
    {
        const bool branch_taken_0x289358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28935Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289358u;
            // 0x28935c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289358) {
            ctx->pc = 0x289394u;
            goto label_289394;
        }
    }
    ctx->pc = 0x289360u;
    // 0x289360: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x289360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x289364: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x289364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x289368: 0x10c20032  beq         $a2, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x289368u;
    {
        const bool branch_taken_0x289368 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x28936Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289368u;
            // 0x28936c: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289368) {
            ctx->pc = 0x289434u;
            goto label_289434;
        }
    }
    ctx->pc = 0x289370u;
    // 0x289370: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x289370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_289374:
    // 0x289374: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x289374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x289378: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x289378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x28937c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x28937cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x289380: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x289380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x289384: 0x14c4fffb  bne         $a2, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x289384u;
    {
        const bool branch_taken_0x289384 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x289388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289384u;
            // 0x289388: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289384) {
            ctx->pc = 0x289374u;
            runtime->cooperativeGuestYield();
            goto label_289374;
        }
    }
    ctx->pc = 0x28938Cu;
    // 0x28938c: 0x3e00008  jr          $ra
    ctx->pc = 0x28938Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28938Cu;
            // 0x289390: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x289374u: goto label_289374;
            case 0x289394u: goto label_289394;
            case 0x2893B4u: goto label_2893b4;
            case 0x2893ECu: goto label_2893ec;
            case 0x28940Cu: goto label_28940c;
            case 0x289410u: goto label_289410;
            case 0x28941Cu: goto label_28941c;
            case 0x289434u: goto label_289434;
            default: break;
        }
        return;
    }
    ctx->pc = 0x289394u;
label_289394:
    // 0x289394: 0x2cc20020  sltiu       $v0, $a2, 0x20
    ctx->pc = 0x289394u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x289398: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x289398u;
    {
        const bool branch_taken_0x289398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x289398) {
            ctx->pc = 0x28939Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x289398u;
            // 0x28939c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x289410u;
            goto label_289410;
        }
    }
    ctx->pc = 0x2893A0u;
    // 0x2893a0: 0xa31025  or          $v0, $a1, $v1
    ctx->pc = 0x2893a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2893a4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2893a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2893a8: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x2893A8u;
    {
        const bool branch_taken_0x2893a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2893a8) {
            ctx->pc = 0x2893ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2893A8u;
            // 0x2893ac: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x289410u;
            goto label_289410;
        }
    }
    ctx->pc = 0x2893B0u;
    // 0x2893b0: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x2893b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2893b4:
    // 0x2893b4: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x2893b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2893b8: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x2893b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x2893bc: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x2893bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2893c0: 0x2cc40020  sltiu       $a0, $a2, 0x20
    ctx->pc = 0x2893c0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x2893c4: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x2893c4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x2893c8: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x2893c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x2893cc: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x2893ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2893d0: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x2893d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2893d4: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x2893d4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x2893d8: 0x1080fff6  beqz        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2893D8u;
    {
        const bool branch_taken_0x2893d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2893DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2893D8u;
            // 0x2893dc: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2893d8) {
            ctx->pc = 0x2893B4u;
            runtime->cooperativeGuestYield();
            goto label_2893b4;
        }
    }
    ctx->pc = 0x2893E0u;
    // 0x2893e0: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x2893e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2893e4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2893E4u;
    {
        const bool branch_taken_0x2893e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2893E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2893E4u;
            // 0x2893e8: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2893e4) {
            ctx->pc = 0x28940Cu;
            goto label_28940c;
        }
    }
    ctx->pc = 0x2893ECu;
label_2893ec:
    // 0x2893ec: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x2893ecu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2893f0: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x2893f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x2893f4: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2893f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2893f8: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x2893f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2893fc: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x2893fcu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x289400: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x289400u;
    {
        const bool branch_taken_0x289400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289400u;
            // 0x289404: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289400) {
            ctx->pc = 0x2893ECu;
            runtime->cooperativeGuestYield();
            goto label_2893ec;
        }
    }
    ctx->pc = 0x289408u;
    // 0x289408: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x289408u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_28940c:
    // 0x28940c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x28940cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_289410:
    // 0x289410: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x289410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x289414: 0x10c20007  beq         $a2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x289414u;
    {
        const bool branch_taken_0x289414 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x289418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289414u;
            // 0x289418: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289414) {
            ctx->pc = 0x289434u;
            goto label_289434;
        }
    }
    ctx->pc = 0x28941Cu;
label_28941c:
    // 0x28941c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x28941cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x289420: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x289420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x289424: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x289424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x289428: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x289428u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x28942c: 0x14c4fffb  bne         $a2, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x28942Cu;
    {
        const bool branch_taken_0x28942c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x289430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28942Cu;
            // 0x289430: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28942c) {
            ctx->pc = 0x28941Cu;
            runtime->cooperativeGuestYield();
            goto label_28941c;
        }
    }
    ctx->pc = 0x289434u;
label_289434:
    // 0x289434: 0x3e00008  jr          $ra
    ctx->pc = 0x289434u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289434u;
            // 0x289438: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x289374u: goto label_289374;
            case 0x289394u: goto label_289394;
            case 0x2893B4u: goto label_2893b4;
            case 0x2893ECu: goto label_2893ec;
            case 0x28940Cu: goto label_28940c;
            case 0x289410u: goto label_289410;
            case 0x28941Cu: goto label_28941c;
            case 0x289434u: goto label_289434;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28943Cu;
}
