#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1d1410
// Address: 0x1d1410 - 0x1d1500
void entry_1d1410_0x1d1500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1d1410_0x1d1500");
#endif

    ctx->pc = 0x1d1410u;

    // 0x1d1410: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x1d1410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1d1414: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d1414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d1418: 0x84420044  lh          $v0, 0x44($v0)
    ctx->pc = 0x1d1418u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1d141c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D141Cu;
    {
        const bool branch_taken_0x1d141c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D1420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D141Cu;
            // 0x1d1420: 0x8c860000  lw          $a2, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d141c) {
            ctx->pc = 0x1D142Cu;
            goto label_1d142c;
        }
    }
    ctx->pc = 0x1D1424u;
    // 0x1d1424: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1424u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1424u;
            // 0x1d1428: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D142Cu: goto label_1d142c;
            case 0x1D144Cu: goto label_1d144c;
            case 0x1D1464u: goto label_1d1464;
            case 0x1D1488u: goto label_1d1488;
            case 0x1D1490u: goto label_1d1490;
            case 0x1D149Cu: goto label_1d149c;
            case 0x1D14A4u: goto label_1d14a4;
            case 0x1D14C8u: goto label_1d14c8;
            case 0x1D14E0u: goto label_1d14e0;
            case 0x1D14F4u: goto label_1d14f4;
            case 0x1D14F8u: goto label_1d14f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D142Cu;
label_1d142c:
    // 0x1d142c: 0x8ca40174  lw          $a0, 0x174($a1)
    ctx->pc = 0x1d142cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 372)));
    // 0x1d1430: 0x30820020  andi        $v0, $a0, 0x20
    ctx->pc = 0x1d1430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x1d1434: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1434u;
    {
        const bool branch_taken_0x1d1434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1434) {
            ctx->pc = 0x1D1438u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1434u;
            // 0x1d1438: 0x8cc30174  lw          $v1, 0x174($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D144Cu;
            goto label_1d144c;
        }
    }
    ctx->pc = 0x1D143Cu;
    // 0x1d143c: 0x30820010  andi        $v0, $a0, 0x10
    ctx->pc = 0x1d143cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x1d1440: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D1440u;
    {
        const bool branch_taken_0x1d1440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1440u;
            // 0x1d1444: 0x30820400  andi        $v0, $a0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1440) {
            ctx->pc = 0x1D1464u;
            goto label_1d1464;
        }
    }
    ctx->pc = 0x1D1448u;
    // 0x1d1448: 0x8cc30174  lw          $v1, 0x174($a2)
    ctx->pc = 0x1d1448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 372)));
label_1d144c:
    // 0x1d144c: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1d144cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1d1450: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D1450u;
    {
        const bool branch_taken_0x1d1450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1450u;
            // 0x1d1454: 0x30820400  andi        $v0, $a0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1450) {
            ctx->pc = 0x1D1464u;
            goto label_1d1464;
        }
    }
    ctx->pc = 0x1D1458u;
    // 0x1d1458: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x1d1458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1d145c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D145Cu;
    {
        const bool branch_taken_0x1d145c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D145Cu;
            // 0x1d1460: 0x30820400  andi        $v0, $a0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d145c) {
            ctx->pc = 0x1D1488u;
            goto label_1d1488;
        }
    }
    ctx->pc = 0x1D1464u;
label_1d1464:
    // 0x1d1464: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1D1464u;
    {
        const bool branch_taken_0x1d1464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1464) {
            ctx->pc = 0x1D1468u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1464u;
            // 0x1d1468: 0x8cc20174  lw          $v0, 0x174($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D1490u;
            goto label_1d1490;
        }
    }
    ctx->pc = 0x1D146Cu;
    // 0x1d146c: 0x8cc30174  lw          $v1, 0x174($a2)
    ctx->pc = 0x1d146cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 372)));
    // 0x1d1470: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x1d1470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x1d1474: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D1474u;
    {
        const bool branch_taken_0x1d1474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1474u;
            // 0x1d1478: 0x30820400  andi        $v0, $a0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1474) {
            ctx->pc = 0x1D149Cu;
            goto label_1d149c;
        }
    }
    ctx->pc = 0x1D147Cu;
    // 0x1d147c: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x1d147cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1d1480: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1480u;
    {
        const bool branch_taken_0x1d1480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1480) {
            ctx->pc = 0x1D1484u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1480u;
            // 0x1d1484: 0x8cc20174  lw          $v0, 0x174($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D1490u;
            goto label_1d1490;
        }
    }
    ctx->pc = 0x1D1488u;
label_1d1488:
    // 0x1d1488: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D148Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1488u;
            // 0x1d148c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D142Cu: goto label_1d142c;
            case 0x1D144Cu: goto label_1d144c;
            case 0x1D1464u: goto label_1d1464;
            case 0x1D1488u: goto label_1d1488;
            case 0x1D1490u: goto label_1d1490;
            case 0x1D149Cu: goto label_1d149c;
            case 0x1D14A4u: goto label_1d14a4;
            case 0x1D14C8u: goto label_1d14c8;
            case 0x1D14E0u: goto label_1d14e0;
            case 0x1D14F4u: goto label_1d14f4;
            case 0x1D14F8u: goto label_1d14f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D1490u;
label_1d1490:
    // 0x1d1490: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x1d1490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x1d1494: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1494u;
    {
        const bool branch_taken_0x1d1494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1494u;
            // 0x1d1498: 0x30820400  andi        $v0, $a0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1494) {
            ctx->pc = 0x1D14A4u;
            goto label_1d14a4;
        }
    }
    ctx->pc = 0x1D149Cu;
label_1d149c:
    // 0x1d149c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D149Cu;
    {
        const bool branch_taken_0x1d149c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d149c) {
            ctx->pc = 0x1D1488u;
            runtime->cooperativeGuestYield();
            goto label_1d1488;
        }
    }
    ctx->pc = 0x1D14A4u;
label_1d14a4:
    // 0x1d14a4: 0x8cc30174  lw          $v1, 0x174($a2)
    ctx->pc = 0x1d14a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 372)));
    // 0x1d14a8: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1d14a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1d14ac: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D14ACu;
    {
        const bool branch_taken_0x1d14ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d14ac) {
            ctx->pc = 0x1D14B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D14ACu;
            // 0x1d14b0: 0x8ca50174  lw          $a1, 0x174($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D14C8u;
            goto label_1d14c8;
        }
    }
    ctx->pc = 0x1D14B4u;
    // 0x1d14b4: 0x8ca20174  lw          $v0, 0x174($a1)
    ctx->pc = 0x1d14b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 372)));
    // 0x1d14b8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1d14b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1d14bc: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1D14BCu;
    {
        const bool branch_taken_0x1d14bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d14bc) {
            ctx->pc = 0x1D1488u;
            runtime->cooperativeGuestYield();
            goto label_1d1488;
        }
    }
    ctx->pc = 0x1D14C4u;
    // 0x1d14c4: 0x8ca50174  lw          $a1, 0x174($a1)
    ctx->pc = 0x1d14c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 372)));
label_1d14c8:
    // 0x1d14c8: 0x30a20080  andi        $v0, $a1, 0x80
    ctx->pc = 0x1d14c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x1d14cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D14CCu;
    {
        const bool branch_taken_0x1d14cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D14D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D14CCu;
            // 0x1d14d0: 0x30620080  andi        $v0, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d14cc) {
            ctx->pc = 0x1D14E0u;
            goto label_1d14e0;
        }
    }
    ctx->pc = 0x1D14D4u;
    // 0x1d14d4: 0x30a20100  andi        $v0, $a1, 0x100
    ctx->pc = 0x1d14d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
    // 0x1d14d8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D14D8u;
    {
        const bool branch_taken_0x1d14d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D14DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D14D8u;
            // 0x1d14dc: 0x30620080  andi        $v0, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d14d8) {
            ctx->pc = 0x1D14F4u;
            goto label_1d14f4;
        }
    }
    ctx->pc = 0x1D14E0u;
label_1d14e0:
    // 0x1d14e0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D14E0u;
    {
        const bool branch_taken_0x1d14e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D14E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D14E0u;
            // 0x1d14e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d14e0) {
            ctx->pc = 0x1D14F8u;
            goto label_1d14f8;
        }
    }
    ctx->pc = 0x1D14E8u;
    // 0x1d14e8: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x1d14e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x1d14ec: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D14ECu;
    {
        const bool branch_taken_0x1d14ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D14F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D14ECu;
            // 0x1d14f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d14ec) {
            ctx->pc = 0x1D14F8u;
            goto label_1d14f8;
        }
    }
    ctx->pc = 0x1D14F4u;
label_1d14f4:
    // 0x1d14f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d14f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d14f8:
    // 0x1d14f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D14F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D142Cu: goto label_1d142c;
            case 0x1D144Cu: goto label_1d144c;
            case 0x1D1464u: goto label_1d1464;
            case 0x1D1488u: goto label_1d1488;
            case 0x1D1490u: goto label_1d1490;
            case 0x1D149Cu: goto label_1d149c;
            case 0x1D14A4u: goto label_1d14a4;
            case 0x1D14C8u: goto label_1d14c8;
            case 0x1D14E0u: goto label_1d14e0;
            case 0x1D14F4u: goto label_1d14f4;
            case 0x1D14F8u: goto label_1d14f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D1500u;
}
