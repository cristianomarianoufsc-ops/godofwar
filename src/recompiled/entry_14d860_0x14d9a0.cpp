#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_14d860
// Address: 0x14d860 - 0x14d9a0
void entry_14d860_0x14d9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_14d860_0x14d9a0");
#endif

    ctx->pc = 0x14d860u;

    // 0x14d860: 0x308f001f  andi        $t7, $a0, 0x1F
    ctx->pc = 0x14d860u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x14d864: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x14d864u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x14d868: 0x11e00031  beqz        $t7, . + 4 + (0x31 << 2)
    ctx->pc = 0x14D868u;
    {
        const bool branch_taken_0x14d868 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D86Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D868u;
            // 0x14d86c: 0xc0c02d  daddu       $t8, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d868) {
            ctx->pc = 0x14D930u;
            goto label_14d930;
        }
    }
    ctx->pc = 0x14D870u;
    // 0x14d870: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x14d870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x14d874: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x14d874u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d878: 0x1300002b  beqz        $t8, . + 4 + (0x2B << 2)
    ctx->pc = 0x14D878u;
    {
        const bool branch_taken_0x14d878 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D87Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D878u;
            // 0x14d87c: 0x4fc823  subu        $t9, $v0, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d878) {
            ctx->pc = 0x14D928u;
            goto label_14d928;
        }
    }
    ctx->pc = 0x14D880u;
    // 0x14d880: 0x35880  sll         $t3, $v1, 2
    ctx->pc = 0x14d880u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14d884: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x14d884u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d888: 0x246c0001  addiu       $t4, $v1, 0x1
    ctx->pc = 0x14d888u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14d88c: 0x0  nop
    ctx->pc = 0x14d88cu;
    // NOP
label_14d890:
    // 0x14d890: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x14d890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x14d894: 0x8da60000  lw          $a2, 0x0($t5)
    ctx->pc = 0x14d894u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x14d898: 0x24421910  addiu       $v0, $v0, 0x1910
    ctx->pc = 0x14d898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6416));
    // 0x14d89c: 0xc2880  sll         $a1, $t4, 2
    ctx->pc = 0x14d89cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x14d8a0: 0x1623821  addu        $a3, $t3, $v0
    ctx->pc = 0x14d8a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x14d8a4: 0x1e64004  sllv        $t0, $a2, $t7
    ctx->pc = 0x14d8a4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 15) & 0x1F));
    // 0x14d8a8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x14d8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14d8ac: 0xa24821  addu        $t1, $a1, $v0
    ctx->pc = 0x14d8acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x14d8b0: 0x3263006  srlv        $a2, $a2, $t9
    ctx->pc = 0x14d8b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 25) & 0x1F));
    // 0x14d8b4: 0x24440800  addiu       $a0, $v0, 0x800
    ctx->pc = 0x14d8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x14d8b8: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x14d8b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x14d8bc: 0x1645021  addu        $t2, $t3, $a0
    ctx->pc = 0x14d8bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x14d8c0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x14d8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x14d8c4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x14d8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x14d8c8: 0x24421000  addiu       $v0, $v0, 0x1000
    ctx->pc = 0x14d8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4096));
    // 0x14d8cc: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x14d8ccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x14d8d0: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x14d8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x14d8d4: 0x1623821  addu        $a3, $t3, $v0
    ctx->pc = 0x14d8d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x14d8d8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x14d8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x14d8dc: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x14d8dcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x14d8e0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x14d8e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x14d8e4: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x14d8e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x14d8e8: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x14d8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x14d8ec: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x14d8ecu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x14d8f0: 0x1d8182b  sltu        $v1, $t6, $t8
    ctx->pc = 0x14d8f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 24)) ? 1 : 0);
    // 0x14d8f4: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x14d8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x14d8f8: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x14d8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x14d8fc: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x14d8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x14d900: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x14d900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14d904: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x14d904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x14d908: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x14d908u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x14d90c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x14d90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14d910: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x14d910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x14d914: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x14d914u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x14d918: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x14d918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14d91c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x14d91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x14d920: 0x1460ffdb  bnez        $v1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x14D920u;
    {
        const bool branch_taken_0x14d920 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D920u;
            // 0x14d924: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d920) {
            ctx->pc = 0x14D890u;
            runtime->cooperativeGuestYield();
            goto label_14d890;
        }
    }
    ctx->pc = 0x14D928u;
label_14d928:
    // 0x14d928: 0x3e00008  jr          $ra
    ctx->pc = 0x14D928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14D890u: goto label_14d890;
            case 0x14D928u: goto label_14d928;
            case 0x14D930u: goto label_14d930;
            case 0x14D940u: goto label_14d940;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14D930u;
label_14d930:
    // 0x14d930: 0x1300fffd  beqz        $t8, . + 4 + (-0x3 << 2)
    ctx->pc = 0x14D930u;
    {
        const bool branch_taken_0x14d930 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D930u;
            // 0x14d934: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d930) {
            ctx->pc = 0x14D928u;
            runtime->cooperativeGuestYield();
            goto label_14d928;
        }
    }
    ctx->pc = 0x14D938u;
    // 0x14d938: 0x33880  sll         $a3, $v1, 2
    ctx->pc = 0x14d938u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14d93c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x14d93cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_14d940:
    // 0x14d940: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x14d940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x14d944: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x14d944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x14d948: 0x24631910  addiu       $v1, $v1, 0x1910
    ctx->pc = 0x14d948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6416));
    // 0x14d94c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x14d94cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x14d950: 0xe33021  addu        $a2, $a3, $v1
    ctx->pc = 0x14d950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x14d954: 0x24640800  addiu       $a0, $v1, 0x800
    ctx->pc = 0x14d954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x14d958: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x14d958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14d95c: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x14d95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x14d960: 0x24631000  addiu       $v1, $v1, 0x1000
    ctx->pc = 0x14d960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4096));
    // 0x14d964: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x14d964u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x14d968: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x14d968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x14d96c: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x14d96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x14d970: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x14d970u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x14d974: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x14d974u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x14d978: 0x138302b  sltu        $a2, $t1, $t8
    ctx->pc = 0x14d978u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 24)) ? 1 : 0);
    // 0x14d97c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x14d97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14d980: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x14d980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x14d984: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x14d984u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x14d988: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14d988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14d98c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x14d98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x14d990: 0x14c0ffeb  bnez        $a2, . + 4 + (-0x15 << 2)
    ctx->pc = 0x14D990u;
    {
        const bool branch_taken_0x14d990 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D990u;
            // 0x14d994: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d990) {
            ctx->pc = 0x14D940u;
            runtime->cooperativeGuestYield();
            goto label_14d940;
        }
    }
    ctx->pc = 0x14D998u;
    // 0x14d998: 0x3e00008  jr          $ra
    ctx->pc = 0x14D998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14D890u: goto label_14d890;
            case 0x14D928u: goto label_14d928;
            case 0x14D930u: goto label_14d930;
            case 0x14D940u: goto label_14d940;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14D9A0u;
}
