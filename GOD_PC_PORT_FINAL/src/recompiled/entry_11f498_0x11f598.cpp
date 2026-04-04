#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_11f498
// Address: 0x11f498 - 0x11f598
void entry_11f498_0x11f598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_11f498_0x11f598");
#endif

    ctx->pc = 0x11f498u;

    // 0x11f498: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x11f498u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f49c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11f49cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f4a0: 0x94c24630  lhu         $v0, 0x4630($a2)
    ctx->pc = 0x11f4a0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 17968)));
    // 0x11f4a4: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x11F4A4u;
    {
        const bool branch_taken_0x11f4a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F4A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F4A4u;
            // 0x11f4a8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f4a4) {
            ctx->pc = 0x11F554u;
            goto label_11f554;
        }
    }
    ctx->pc = 0x11F4ACu;
    // 0x11f4ac: 0x0  nop
    ctx->pc = 0x11f4acu;
    // NOP
label_11f4b0:
    // 0x11f4b0: 0x5540000c  bnel        $t2, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x11F4B0u;
    {
        const bool branch_taken_0x11f4b0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x11f4b0) {
            ctx->pc = 0x11F4B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11F4B0u;
            // 0x11f4b4: 0x94c24630  lhu         $v0, 0x4630($a2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 17968)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11F4E4u;
            goto label_11f4e4;
        }
    }
    ctx->pc = 0x11F4B8u;
    // 0x11f4b8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x11f4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x11f4bc: 0x1221818  mult        $v1, $t1, $v0
    ctx->pc = 0x11f4bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x11f4c0: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x11f4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x11f4c4: 0x8c420a2c  lw          $v0, 0xA2C($v0)
    ctx->pc = 0x11f4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2604)));
    // 0x11f4c8: 0x14450004  bne         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11F4C8u;
    {
        const bool branch_taken_0x11f4c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x11F4CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F4C8u;
            // 0x11f4cc: 0xc31021  addu        $v0, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f4c8) {
            ctx->pc = 0x11F4DCu;
            goto label_11f4dc;
        }
    }
    ctx->pc = 0x11F4D0u;
    // 0x11f4d0: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x11f4d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11f4d4: 0x8c420a34  lw          $v0, 0xA34($v0)
    ctx->pc = 0x11f4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2612)));
    // 0x11f4d8: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x11f4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_11f4dc:
    // 0x11f4dc: 0x11400019  beqz        $t2, . + 4 + (0x19 << 2)
    ctx->pc = 0x11F4DCu;
    {
        const bool branch_taken_0x11f4dc = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F4E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F4DCu;
            // 0x11f4e0: 0x94c24630  lhu         $v0, 0x4630($a2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 17968)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f4dc) {
            ctx->pc = 0x11F544u;
            goto label_11f544;
        }
    }
    ctx->pc = 0x11F4E4u;
label_11f4e4:
    // 0x11f4e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11f4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11f4e8: 0x122102a  slt         $v0, $t1, $v0
    ctx->pc = 0x11f4e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11f4ec: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x11F4ECu;
    {
        const bool branch_taken_0x11f4ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F4F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F4ECu;
            // 0x11f4f0: 0x292200ff  slti        $v0, $t1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)255) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f4ec) {
            ctx->pc = 0x11F540u;
            goto label_11f540;
        }
    }
    ctx->pc = 0x11F4F4u;
    // 0x11f4f4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11F4F4u;
    {
        const bool branch_taken_0x11f4f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F4F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F4F4u;
            // 0x11f4f8: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f4f4) {
            ctx->pc = 0x11F540u;
            goto label_11f540;
        }
    }
    ctx->pc = 0x11F4FCu;
    // 0x11f4fc: 0x24c30a34  addiu       $v1, $a2, 0xA34
    ctx->pc = 0x11f4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 2612));
    // 0x11f500: 0x1222018  mult        $a0, $t1, $v0
    ctx->pc = 0x11f500u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x11f504: 0x1223818  mult        $a3, $t1, $v0
    ctx->pc = 0x11f504u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x11f508: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x11f508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11f50c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x11f50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11f510: 0xe62021  addu        $a0, $a3, $a2
    ctx->pc = 0x11f510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x11f514: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x11f514u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11f518: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x11f518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x11f51c: 0x8c820a38  lw          $v0, 0xA38($a0)
    ctx->pc = 0x11f51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2616)));
    // 0x11f520: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x11f520u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x11f524: 0x11000006  beqz        $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11F524u;
    {
        const bool branch_taken_0x11f524 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F524u;
            // 0x11f528: 0xac820a2c  sw          $v0, 0xA2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2604), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f524) {
            ctx->pc = 0x11F540u;
            goto label_11f540;
        }
    }
    ctx->pc = 0x11F52Cu;
    // 0x11f52c: 0x24e30a2c  addiu       $v1, $a3, 0xA2C
    ctx->pc = 0x11f52cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 2604));
    // 0x11f530: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x11f530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x11f534: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x11f534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x11f538: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x11f538u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x11f53c: 0xad020040  sw          $v0, 0x40($t0)
    ctx->pc = 0x11f53cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 64), GPR_U32(ctx, 2));
label_11f540:
    // 0x11f540: 0x94c24630  lhu         $v0, 0x4630($a2)
    ctx->pc = 0x11f540u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 17968)));
label_11f544:
    // 0x11f544: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x11f544u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x11f548: 0x122102a  slt         $v0, $t1, $v0
    ctx->pc = 0x11f548u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11f54c: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x11F54Cu;
    {
        const bool branch_taken_0x11f54c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11f54c) {
            ctx->pc = 0x11F4B0u;
            runtime->cooperativeGuestYield();
            goto label_11f4b0;
        }
    }
    ctx->pc = 0x11F554u;
label_11f554:
    // 0x11f554: 0x1140000d  beqz        $t2, . + 4 + (0xD << 2)
    ctx->pc = 0x11F554u;
    {
        const bool branch_taken_0x11f554 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F554u;
            // 0x11f558: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f554) {
            ctx->pc = 0x11F58Cu;
            goto label_11f58c;
        }
    }
    ctx->pc = 0x11F55Cu;
    // 0x11f55c: 0x94c34630  lhu         $v1, 0x4630($a2)
    ctx->pc = 0x11f55cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 17968)));
    // 0x11f560: 0x94c24630  lhu         $v0, 0x4630($a2)
    ctx->pc = 0x11f560u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 17968)));
    // 0x11f564: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x11f564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f568: 0x853818  mult        $a3, $a0, $a1
    ctx->pc = 0x11f568u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x11f56c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x11f56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x11f570: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11f570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11f574: 0xa4c24630  sh          $v0, 0x4630($a2)
    ctx->pc = 0x11f574u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 17968), (uint16_t)GPR_U32(ctx, 2));
    // 0x11f578: 0xe62021  addu        $a0, $a3, $a2
    ctx->pc = 0x11f578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x11f57c: 0x653818  mult        $a3, $v1, $a1
    ctx->pc = 0x11f57cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x11f580: 0xac800a20  sw          $zero, 0xA20($a0)
    ctx->pc = 0x11f580u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2592), GPR_U32(ctx, 0));
    // 0x11f584: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x11f584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x11f588: 0xac600a34  sw          $zero, 0xA34($v1)
    ctx->pc = 0x11f588u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2612), GPR_U32(ctx, 0));
label_11f58c:
    // 0x11f58c: 0x3e00008  jr          $ra
    ctx->pc = 0x11F58Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11F4B0u: goto label_11f4b0;
            case 0x11F4DCu: goto label_11f4dc;
            case 0x11F4E4u: goto label_11f4e4;
            case 0x11F540u: goto label_11f540;
            case 0x11F544u: goto label_11f544;
            case 0x11F554u: goto label_11f554;
            case 0x11F58Cu: goto label_11f58c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11F594u;
    // 0x11f594: 0x0  nop
    ctx->pc = 0x11f594u;
    // NOP
}
