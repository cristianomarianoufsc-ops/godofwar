#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_167860
// Address: 0x167860 - 0x1679f8
void entry_167860_0x1679f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_167860_0x1679f8");
#endif

    ctx->pc = 0x167860u;

    // 0x167860: 0x14e00041  bnez        $a3, . + 4 + (0x41 << 2)
    ctx->pc = 0x167860u;
    {
        const bool branch_taken_0x167860 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x167864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167860u;
            // 0x167864: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167860) {
            ctx->pc = 0x167968u;
            goto label_167968;
        }
    }
    ctx->pc = 0x167868u;
    // 0x167868: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x167868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x16786c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x16786cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x167870: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x167870u;
    {
        const bool branch_taken_0x167870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167870u;
            // 0x167874: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167870) {
            ctx->pc = 0x1679ECu;
            goto label_1679ec;
        }
    }
    ctx->pc = 0x167878u;
    // 0x167878: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x167878u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16787c: 0x244223d0  addiu       $v0, $v0, 0x23D0
    ctx->pc = 0x16787cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9168));
    // 0x167880: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x167880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x167884: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x167884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x167888: 0x400008  jr          $v0
    ctx->pc = 0x167888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x167890u: goto label_167890;
            case 0x1678BCu: goto label_1678bc;
            case 0x1678E8u: goto label_1678e8;
            case 0x167918u: goto label_167918;
            case 0x167940u: goto label_167940;
            default: break;
        }
        return;
    }
    ctx->pc = 0x167890u;
label_167890:
    // 0x167890: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x167890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x167894: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x167894u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x167898: 0x246349a8  addiu       $v1, $v1, 0x49A8
    ctx->pc = 0x167898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18856));
    // 0x16789c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x16789cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1678a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1678a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1678a4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1678a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1678a8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1678a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1678ac: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x1678acu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x1678b0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1678b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1678b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1678B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1678B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1678B4u;
            // 0x1678b8: 0xad220000  sw          $v0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x167890u: goto label_167890;
            case 0x1678BCu: goto label_1678bc;
            case 0x1678E8u: goto label_1678e8;
            case 0x16790Cu: goto label_16790c;
            case 0x167918u: goto label_167918;
            case 0x167940u: goto label_167940;
            case 0x167968u: goto label_167968;
            case 0x1679A0u: goto label_1679a0;
            case 0x1679CCu: goto label_1679cc;
            case 0x1679ECu: goto label_1679ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1678BCu;
label_1678bc:
    // 0x1678bc: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1678bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1678c0: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x1678c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1678c4: 0x246349a8  addiu       $v1, $v1, 0x49A8
    ctx->pc = 0x1678c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18856));
    // 0x1678c8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1678c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1678cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1678ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1678d0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1678d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1678d4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1678d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1678d8: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x1678d8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x1678dc: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1678dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1678e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1678E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1678E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1678E0u;
            // 0x1678e4: 0xad220000  sw          $v0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x167890u: goto label_167890;
            case 0x1678BCu: goto label_1678bc;
            case 0x1678E8u: goto label_1678e8;
            case 0x16790Cu: goto label_16790c;
            case 0x167918u: goto label_167918;
            case 0x167940u: goto label_167940;
            case 0x167968u: goto label_167968;
            case 0x1679A0u: goto label_1679a0;
            case 0x1679CCu: goto label_1679cc;
            case 0x1679ECu: goto label_1679ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1678E8u;
label_1678e8:
    // 0x1678e8: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1678e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1678ec: 0x52140  sll         $a0, $a1, 5
    ctx->pc = 0x1678ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1678f0: 0x246349a8  addiu       $v1, $v1, 0x49A8
    ctx->pc = 0x1678f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18856));
    // 0x1678f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1678f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1678f8: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1678f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1678fc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1678fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167900: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x167900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x167904: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x167904u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x167908: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x167908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_16790c:
    // 0x16790c: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x16790cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x167910: 0x3e00008  jr          $ra
    ctx->pc = 0x167910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167910u;
            // 0x167914: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x167890u: goto label_167890;
            case 0x1678BCu: goto label_1678bc;
            case 0x1678E8u: goto label_1678e8;
            case 0x16790Cu: goto label_16790c;
            case 0x167918u: goto label_167918;
            case 0x167940u: goto label_167940;
            case 0x167968u: goto label_167968;
            case 0x1679A0u: goto label_1679a0;
            case 0x1679CCu: goto label_1679cc;
            case 0x1679ECu: goto label_1679ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x167918u;
label_167918:
    // 0x167918: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x167918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x16791c: 0x52140  sll         $a0, $a1, 5
    ctx->pc = 0x16791cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x167920: 0x246349a8  addiu       $v1, $v1, 0x49A8
    ctx->pc = 0x167920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18856));
    // 0x167924: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x167924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167928: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x167928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16792c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x16792cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167930: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x167930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x167934: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x167934u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x167938: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x167938u;
    {
        const bool branch_taken_0x167938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16793Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167938u;
            // 0x16793c: 0x8c620018  lw          $v0, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167938) {
            ctx->pc = 0x16790Cu;
            runtime->cooperativeGuestYield();
            goto label_16790c;
        }
    }
    ctx->pc = 0x167940u;
label_167940:
    // 0x167940: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x167940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x167944: 0x52140  sll         $a0, $a1, 5
    ctx->pc = 0x167944u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x167948: 0x246349a8  addiu       $v1, $v1, 0x49A8
    ctx->pc = 0x167948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18856));
    // 0x16794c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16794cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167950: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x167950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x167954: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x167954u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167958: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x167958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x16795c: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x16795cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x167960: 0x1000ffea  b           . + 4 + (-0x16 << 2)
    ctx->pc = 0x167960u;
    {
        const bool branch_taken_0x167960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167960u;
            // 0x167964: 0x8c62001c  lw          $v0, 0x1C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167960) {
            ctx->pc = 0x16790Cu;
            runtime->cooperativeGuestYield();
            goto label_16790c;
        }
    }
    ctx->pc = 0x167968u;
label_167968:
    // 0x167968: 0x54e2000d  bnel        $a3, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x167968u;
    {
        const bool branch_taken_0x167968 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x167968) {
            ctx->pc = 0x16796Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x167968u;
            // 0x16796c: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1679A0u;
            goto label_1679a0;
        }
    }
    ctx->pc = 0x167970u;
    // 0x167970: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x167970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x167974: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x167974u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x167978: 0x246349a8  addiu       $v1, $v1, 0x49A8
    ctx->pc = 0x167978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18856));
    // 0x16797c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x16797cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x167980: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x167980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x167984: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x167984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x167988: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x167988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x16798c: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x16798cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x167990: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x167990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x167994: 0x3e00008  jr          $ra
    ctx->pc = 0x167994u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167994u;
            // 0x167998: 0xad220000  sw          $v0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x167890u: goto label_167890;
            case 0x1678BCu: goto label_1678bc;
            case 0x1678E8u: goto label_1678e8;
            case 0x16790Cu: goto label_16790c;
            case 0x167918u: goto label_167918;
            case 0x167940u: goto label_167940;
            case 0x167968u: goto label_167968;
            case 0x1679A0u: goto label_1679a0;
            case 0x1679CCu: goto label_1679cc;
            case 0x1679ECu: goto label_1679ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16799Cu;
    // 0x16799c: 0x0  nop
    ctx->pc = 0x16799cu;
    // NOP
label_1679a0:
    // 0x1679a0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1679A0u;
    {
        const bool branch_taken_0x1679a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1679A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1679A0u;
            // 0x1679a4: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1679a0) {
            ctx->pc = 0x1679CCu;
            goto label_1679cc;
        }
    }
    ctx->pc = 0x1679A8u;
    // 0x1679a8: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x1679a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1679ac: 0x244249a8  addiu       $v0, $v0, 0x49A8
    ctx->pc = 0x1679acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18856));
    // 0x1679b0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1679b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1679b4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1679b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1679b8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1679b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1679bc: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x1679bcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x1679c0: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x1679c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1679c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1679C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1679C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1679C4u;
            // 0x1679c8: 0xad220000  sw          $v0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x167890u: goto label_167890;
            case 0x1678BCu: goto label_1678bc;
            case 0x1678E8u: goto label_1678e8;
            case 0x16790Cu: goto label_16790c;
            case 0x167918u: goto label_167918;
            case 0x167940u: goto label_167940;
            case 0x167968u: goto label_167968;
            case 0x1679A0u: goto label_1679a0;
            case 0x1679CCu: goto label_1679cc;
            case 0x1679ECu: goto label_1679ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1679CCu;
label_1679cc:
    // 0x1679cc: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x1679ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1679d0: 0x244249a8  addiu       $v0, $v0, 0x49A8
    ctx->pc = 0x1679d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18856));
    // 0x1679d4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1679d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1679d8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1679d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1679dc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1679dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1679e0: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x1679e0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x1679e4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1679e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1679e8: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x1679e8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
label_1679ec:
    // 0x1679ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1679ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x167890u: goto label_167890;
            case 0x1678BCu: goto label_1678bc;
            case 0x1678E8u: goto label_1678e8;
            case 0x16790Cu: goto label_16790c;
            case 0x167918u: goto label_167918;
            case 0x167940u: goto label_167940;
            case 0x167968u: goto label_167968;
            case 0x1679A0u: goto label_1679a0;
            case 0x1679CCu: goto label_1679cc;
            case 0x1679ECu: goto label_1679ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1679F4u;
    // 0x1679f4: 0x0  nop
    ctx->pc = 0x1679f4u;
    // NOP
}
