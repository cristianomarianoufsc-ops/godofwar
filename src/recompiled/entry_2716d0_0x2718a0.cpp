#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2716d0
// Address: 0x2716d0 - 0x2718a0
void entry_2716d0_0x2718a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2716d0_0x2718a0");
#endif

    ctx->pc = 0x2716d0u;

    // 0x2716d0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2716d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2716d4: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x2716d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2716d8: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x2716d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x2716dc: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x2716dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2716e0: 0x2463ffc8  addiu       $v1, $v1, -0x38
    ctx->pc = 0x2716e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967240));
    // 0x2716e4: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x2716e4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x2716e8: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2716e8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2716ec: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2716ECu;
    {
        const bool branch_taken_0x2716ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2716F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2716ECu;
            // 0x2716f0: 0xacc30018  sw          $v1, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2716ec) {
            ctx->pc = 0x271754u;
            goto label_271754;
        }
    }
    ctx->pc = 0x2716F4u;
    // 0x2716f4: 0x8cc80020  lw          $t0, 0x20($a2)
    ctx->pc = 0x2716f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2716f8: 0xdcc90008  ld          $t1, 0x8($a2)
    ctx->pc = 0x2716f8u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2716fc: 0x0  nop
    ctx->pc = 0x2716fcu;
    // NOP
label_271700:
    // 0x271700: 0x8cc50014  lw          $a1, 0x14($a2)
    ctx->pc = 0x271700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x271704: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x271704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x271708: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x271708u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x27170c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x27170cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x271710: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x271710u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x271714: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x271714u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x271718: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x271718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x27171c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x27171cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x271720: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x271720u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x271724: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x271724u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x271728: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x271728u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x27172c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27172Cu;
    {
        const bool branch_taken_0x27172c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27172Cu;
            // 0x271730: 0xacc50014  sw          $a1, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27172c) {
            ctx->pc = 0x27173Cu;
            goto label_27173c;
        }
    }
    ctx->pc = 0x271734u;
    // 0x271734: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x271734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x271738: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x271738u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_27173c:
    // 0x27173c: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x27173cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x271740: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x271740u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x271744: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x271744u;
    {
        const bool branch_taken_0x271744 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x271748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271744u;
            // 0x271748: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271744) {
            ctx->pc = 0x271700u;
            runtime->cooperativeGuestYield();
            goto label_271700;
        }
    }
    ctx->pc = 0x27174Cu;
    // 0x27174c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27174Cu;
    {
        const bool branch_taken_0x27174c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27174Cu;
            // 0x271750: 0xdcc20000  ld          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27174c) {
            ctx->pc = 0x27175Cu;
            goto label_27175c;
        }
    }
    ctx->pc = 0x271754u;
label_271754:
    // 0x271754: 0xdcc90008  ld          $t1, 0x8($a2)
    ctx->pc = 0x271754u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x271758: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x271758u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_27175c:
    // 0x27175c: 0x65250038  daddiu      $a1, $t1, 0x38
    ctx->pc = 0x27175cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)56);
    // 0x271760: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x271760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x271764: 0x2123c  dsll32      $v0, $v0, 8
    ctx->pc = 0x271764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 8));
    // 0x271768: 0xfcc50008  sd          $a1, 0x8($a2)
    ctx->pc = 0x271768u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 5));
    // 0x27176c: 0x2463ffd8  addiu       $v1, $v1, -0x28
    ctx->pc = 0x27176cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
    // 0x271770: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x271770u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x271774: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x271774u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x271778: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x271778u;
    {
        const bool branch_taken_0x271778 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27177Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271778u;
            // 0x27177c: 0xacc30018  sw          $v1, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271778) {
            ctx->pc = 0x2717DCu;
            goto label_2717dc;
        }
    }
    ctx->pc = 0x271780u;
    // 0x271780: 0x8cc80020  lw          $t0, 0x20($a2)
    ctx->pc = 0x271780u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x271784: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x271784u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_271788:
    // 0x271788: 0x8cc50014  lw          $a1, 0x14($a2)
    ctx->pc = 0x271788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x27178c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x27178cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x271790: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x271790u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x271794: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x271794u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x271798: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x271798u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x27179c: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x27179cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2717a0: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2717a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2717a4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2717a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2717a8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2717a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2717ac: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x2717acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2717b0: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x2717b0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x2717b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2717B4u;
    {
        const bool branch_taken_0x2717b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2717B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2717B4u;
            // 0x2717b8: 0xacc50014  sw          $a1, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2717b4) {
            ctx->pc = 0x2717C4u;
            goto label_2717c4;
        }
    }
    ctx->pc = 0x2717BCu;
    // 0x2717bc: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x2717bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x2717c0: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x2717c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_2717c4:
    // 0x2717c4: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x2717c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x2717c8: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2717c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2717cc: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2717CCu;
    {
        const bool branch_taken_0x2717cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2717D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2717CCu;
            // 0x2717d0: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2717cc) {
            ctx->pc = 0x271788u;
            runtime->cooperativeGuestYield();
            goto label_271788;
        }
    }
    ctx->pc = 0x2717D4u;
    // 0x2717d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2717D4u;
    {
        const bool branch_taken_0x2717d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2717D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2717D4u;
            // 0x2717d8: 0x65220028  daddiu      $v0, $t1, 0x28 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)40);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2717d4) {
            ctx->pc = 0x2717E4u;
            goto label_2717e4;
        }
    }
    ctx->pc = 0x2717DCu;
label_2717dc:
    // 0x2717dc: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2717dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2717e0: 0x65220028  daddiu      $v0, $t1, 0x28
    ctx->pc = 0x2717e0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)40);
label_2717e4:
    // 0x2717e4: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x2717e4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2717e8: 0xfcc20008  sd          $v0, 0x8($a2)
    ctx->pc = 0x2717e8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 2));
    // 0x2717ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2717ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2717f0: 0x417fe  dsrl32      $v0, $a0, 31
    ctx->pc = 0x2717f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> (32 + 31));
    // 0x2717f4: 0x14430028  bne         $v0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x2717F4u;
    {
        const bool branch_taken_0x2717f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2717F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2717F4u;
            // 0x2717f8: 0x240a0038  addiu       $t2, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2717f4) {
            ctx->pc = 0x271898u;
            goto label_271898;
        }
    }
    ctx->pc = 0x2717FCu;
    // 0x2717fc: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x2717fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271800: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x271800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x271804: 0x0  nop
    ctx->pc = 0x271804u;
    // NOP
label_271808:
    // 0x271808: 0x41e38  dsll        $v1, $a0, 24
    ctx->pc = 0x271808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 24);
    // 0x27180c: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x27180cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
    // 0x271810: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x271810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x271814: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x271814u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x271818: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x271818u;
    {
        const bool branch_taken_0x271818 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27181Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271818u;
            // 0x27181c: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271818) {
            ctx->pc = 0x271878u;
            goto label_271878;
        }
    }
    ctx->pc = 0x271820u;
    // 0x271820: 0x8cc80020  lw          $t0, 0x20($a2)
    ctx->pc = 0x271820u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x271824: 0xdcc90008  ld          $t1, 0x8($a2)
    ctx->pc = 0x271824u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 8)));
label_271828:
    // 0x271828: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x271828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x27182c: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x27182cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x271830: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x271830u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x271834: 0xdcc50000  ld          $a1, 0x0($a2)
    ctx->pc = 0x271834u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x271838: 0x1471023  subu        $v0, $t2, $a3
    ctx->pc = 0x271838u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x27183c: 0x442014  dsllv       $a0, $a0, $v0
    ctx->pc = 0x27183cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x271840: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x271840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x271844: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x271844u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x271848: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x271848u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x27184c: 0xfcc50000  sd          $a1, 0x0($a2)
    ctx->pc = 0x27184cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 5));
    // 0x271850: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x271850u;
    {
        const bool branch_taken_0x271850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271850u;
            // 0x271854: 0xacc30014  sw          $v1, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271850) {
            ctx->pc = 0x271860u;
            goto label_271860;
        }
    }
    ctx->pc = 0x271858u;
    // 0x271858: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x271858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x27185c: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x27185cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_271860:
    // 0x271860: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x271860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x271864: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x271864u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x271868: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x271868u;
    {
        const bool branch_taken_0x271868 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27186Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271868u;
            // 0x27186c: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271868) {
            ctx->pc = 0x271828u;
            runtime->cooperativeGuestYield();
            goto label_271828;
        }
    }
    ctx->pc = 0x271870u;
    // 0x271870: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x271870u;
    {
        const bool branch_taken_0x271870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271870u;
            // 0x271874: 0xdcc20000  ld          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271870) {
            ctx->pc = 0x271880u;
            goto label_271880;
        }
    }
    ctx->pc = 0x271878u;
label_271878:
    // 0x271878: 0xdcc90008  ld          $t1, 0x8($a2)
    ctx->pc = 0x271878u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x27187c: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x27187cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_271880:
    // 0x271880: 0x65230018  daddiu      $v1, $t1, 0x18
    ctx->pc = 0x271880u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)24);
    // 0x271884: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x271884u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x271888: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x271888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27188c: 0x41ffe  dsrl32      $v1, $a0, 31
    ctx->pc = 0x27188cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) >> (32 + 31));
    // 0x271890: 0x506bffdd  beql        $v1, $t3, . + 4 + (-0x23 << 2)
    ctx->pc = 0x271890u;
    {
        const bool branch_taken_0x271890 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 11));
        if (branch_taken_0x271890) {
            ctx->pc = 0x271894u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x271890u;
            // 0x271894: 0x8cc20018  lw          $v0, 0x18($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x271808u;
            runtime->cooperativeGuestYield();
            goto label_271808;
        }
    }
    ctx->pc = 0x271898u;
label_271898:
    // 0x271898: 0x3e00008  jr          $ra
    ctx->pc = 0x271898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27189Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271898u;
            // 0x27189c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x271700u: goto label_271700;
            case 0x27173Cu: goto label_27173c;
            case 0x271754u: goto label_271754;
            case 0x27175Cu: goto label_27175c;
            case 0x271788u: goto label_271788;
            case 0x2717C4u: goto label_2717c4;
            case 0x2717DCu: goto label_2717dc;
            case 0x2717E4u: goto label_2717e4;
            case 0x271808u: goto label_271808;
            case 0x271828u: goto label_271828;
            case 0x271860u: goto label_271860;
            case 0x271878u: goto label_271878;
            case 0x271880u: goto label_271880;
            case 0x271898u: goto label_271898;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2718A0u;
}
