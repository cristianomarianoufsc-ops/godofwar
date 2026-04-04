#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1d1500
// Address: 0x1d1500 - 0x1d15b0
void entry_1d1500_0x1d15b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1d1500_0x1d15b0");
#endif

    ctx->pc = 0x1d1500u;

    // 0x1d1500: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x1d1500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1d1504: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d1504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d1508: 0x84420044  lh          $v0, 0x44($v0)
    ctx->pc = 0x1d1508u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1d150c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D150Cu;
    {
        const bool branch_taken_0x1d150c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D1510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D150Cu;
            // 0x1d1510: 0x8c860000  lw          $a2, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d150c) {
            ctx->pc = 0x1D151Cu;
            goto label_1d151c;
        }
    }
    ctx->pc = 0x1D1514u;
    // 0x1d1514: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1514u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1514u;
            // 0x1d1518: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D151Cu: goto label_1d151c;
            case 0x1D153Cu: goto label_1d153c;
            case 0x1D1554u: goto label_1d1554;
            case 0x1D1578u: goto label_1d1578;
            case 0x1D1580u: goto label_1d1580;
            case 0x1D1598u: goto label_1d1598;
            case 0x1D15A8u: goto label_1d15a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D151Cu;
label_1d151c:
    // 0x1d151c: 0x8ca50174  lw          $a1, 0x174($a1)
    ctx->pc = 0x1d151cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 372)));
    // 0x1d1520: 0x30a20020  andi        $v0, $a1, 0x20
    ctx->pc = 0x1d1520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
    // 0x1d1524: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1524u;
    {
        const bool branch_taken_0x1d1524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1524) {
            ctx->pc = 0x1D1528u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1524u;
            // 0x1d1528: 0x8cc302dc  lw          $v1, 0x2DC($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 732)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D153Cu;
            goto label_1d153c;
        }
    }
    ctx->pc = 0x1D152Cu;
    // 0x1d152c: 0x30a20010  andi        $v0, $a1, 0x10
    ctx->pc = 0x1d152cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
    // 0x1d1530: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D1530u;
    {
        const bool branch_taken_0x1d1530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1530u;
            // 0x1d1534: 0x30a20400  andi        $v0, $a1, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1530) {
            ctx->pc = 0x1D1554u;
            goto label_1d1554;
        }
    }
    ctx->pc = 0x1D1538u;
    // 0x1d1538: 0x8cc302dc  lw          $v1, 0x2DC($a2)
    ctx->pc = 0x1d1538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 732)));
label_1d153c:
    // 0x1d153c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1d153cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1d1540: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D1540u;
    {
        const bool branch_taken_0x1d1540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1540u;
            // 0x1d1544: 0x30a20400  andi        $v0, $a1, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1540) {
            ctx->pc = 0x1D1554u;
            goto label_1d1554;
        }
    }
    ctx->pc = 0x1D1548u;
    // 0x1d1548: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x1d1548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1d154c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D154Cu;
    {
        const bool branch_taken_0x1d154c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D154Cu;
            // 0x1d1550: 0x30a20400  andi        $v0, $a1, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d154c) {
            ctx->pc = 0x1D1578u;
            goto label_1d1578;
        }
    }
    ctx->pc = 0x1D1554u;
label_1d1554:
    // 0x1d1554: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D1554u;
    {
        const bool branch_taken_0x1d1554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1554u;
            // 0x1d1558: 0x30a20080  andi        $v0, $a1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1554) {
            ctx->pc = 0x1D1580u;
            goto label_1d1580;
        }
    }
    ctx->pc = 0x1D155Cu;
    // 0x1d155c: 0x8cc302dc  lw          $v1, 0x2DC($a2)
    ctx->pc = 0x1d155cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 732)));
    // 0x1d1560: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1d1560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1d1564: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D1564u;
    {
        const bool branch_taken_0x1d1564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1564u;
            // 0x1d1568: 0x30a20080  andi        $v0, $a1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1564) {
            ctx->pc = 0x1D1580u;
            goto label_1d1580;
        }
    }
    ctx->pc = 0x1D156Cu;
    // 0x1d156c: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x1d156cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1d1570: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1570u;
    {
        const bool branch_taken_0x1d1570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1570u;
            // 0x1d1574: 0x30a20080  andi        $v0, $a1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1570) {
            ctx->pc = 0x1D1580u;
            goto label_1d1580;
        }
    }
    ctx->pc = 0x1D1578u;
label_1d1578:
    // 0x1d1578: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D157Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1578u;
            // 0x1d157c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D151Cu: goto label_1d151c;
            case 0x1D153Cu: goto label_1d153c;
            case 0x1D1554u: goto label_1d1554;
            case 0x1D1578u: goto label_1d1578;
            case 0x1D1580u: goto label_1d1580;
            case 0x1D1598u: goto label_1d1598;
            case 0x1D15A8u: goto label_1d15a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D1580u;
label_1d1580:
    // 0x1d1580: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1580u;
    {
        const bool branch_taken_0x1d1580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1580) {
            ctx->pc = 0x1D1584u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1580u;
            // 0x1d1584: 0x8cc302dc  lw          $v1, 0x2DC($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 732)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D1598u;
            goto label_1d1598;
        }
    }
    ctx->pc = 0x1D1588u;
    // 0x1d1588: 0x30a20100  andi        $v0, $a1, 0x100
    ctx->pc = 0x1d1588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
    // 0x1d158c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D158Cu;
    {
        const bool branch_taken_0x1d158c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D158Cu;
            // 0x1d1590: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d158c) {
            ctx->pc = 0x1D15A8u;
            goto label_1d15a8;
        }
    }
    ctx->pc = 0x1D1594u;
    // 0x1d1594: 0x8cc302dc  lw          $v1, 0x2DC($a2)
    ctx->pc = 0x1d1594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 732)));
label_1d1598:
    // 0x1d1598: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1d1598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1d159c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D159Cu;
    {
        const bool branch_taken_0x1d159c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D15A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D159Cu;
            // 0x1d15a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d159c) {
            ctx->pc = 0x1D15A8u;
            goto label_1d15a8;
        }
    }
    ctx->pc = 0x1D15A4u;
    // 0x1d15a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d15a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d15a8:
    // 0x1d15a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D15A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D151Cu: goto label_1d151c;
            case 0x1D153Cu: goto label_1d153c;
            case 0x1D1554u: goto label_1d1554;
            case 0x1D1578u: goto label_1d1578;
            case 0x1D1580u: goto label_1d1580;
            case 0x1D1598u: goto label_1d1598;
            case 0x1D15A8u: goto label_1d15a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D15B0u;
}
