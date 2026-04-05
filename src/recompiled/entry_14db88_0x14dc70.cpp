#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_14db88
// Address: 0x14db88 - 0x14dc70
void entry_14db88_0x14dc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_14db88_0x14dc70");
#endif

    ctx->pc = 0x14db88u;

    // 0x14db88: 0x308c001f  andi        $t4, $a0, 0x1F
    ctx->pc = 0x14db88u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x14db8c: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x14db8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x14db90: 0xc0682d  daddu       $t5, $a2, $zero
    ctx->pc = 0x14db90u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14db94: 0x11800023  beqz        $t4, . + 4 + (0x23 << 2)
    ctx->pc = 0x14DB94u;
    {
        const bool branch_taken_0x14db94 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DB94u;
            // 0x14db98: 0xe0782d  daddu       $t7, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14db94) {
            ctx->pc = 0x14DC24u;
            goto label_14dc24;
        }
    }
    ctx->pc = 0x14DB9Cu;
    // 0x14db9c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x14db9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x14dba0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x14dba0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dba4: 0x11a0001d  beqz        $t5, . + 4 + (0x1D << 2)
    ctx->pc = 0x14DBA4u;
    {
        const bool branch_taken_0x14dba4 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DBA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DBA4u;
            // 0x14dba8: 0x4c7023  subu        $t6, $v0, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dba4) {
            ctx->pc = 0x14DC1Cu;
            goto label_14dc1c;
        }
    }
    ctx->pc = 0x14DBACu;
    // 0x14dbac: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x14dbacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dbb0: 0x35080  sll         $t2, $v1, 2
    ctx->pc = 0x14dbb0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14dbb4: 0x24690001  addiu       $t1, $v1, 0x1
    ctx->pc = 0x14dbb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14dbb8: 0xf3ac0  sll         $a3, $t7, 11
    ctx->pc = 0x14dbb8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 15), 11));
    // 0x14dbbc: 0x0  nop
    ctx->pc = 0x14dbbcu;
    // NOP
label_14dbc0:
    // 0x14dbc0: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x14dbc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x14dbc4: 0x24a51910  addiu       $a1, $a1, 0x1910
    ctx->pc = 0x14dbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6416));
    // 0x14dbc8: 0x1472021  addu        $a0, $t2, $a3
    ctx->pc = 0x14dbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x14dbcc: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x14dbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x14dbd0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x14dbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14dbd4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x14dbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14dbd8: 0x93080  sll         $a2, $t1, 2
    ctx->pc = 0x14dbd8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x14dbdc: 0x1821004  sllv        $v0, $v0, $t4
    ctx->pc = 0x14dbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 12) & 0x1F));
    // 0x14dbe0: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x14dbe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x14dbe4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14dbe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14dbe8: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x14dbe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x14dbec: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x14dbecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x14dbf0: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x14dbf0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x14dbf4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x14dbf4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x14dbf8: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x14dbf8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x14dbfc: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x14dbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x14dc00: 0x16d202b  sltu        $a0, $t3, $t5
    ctx->pc = 0x14dc00u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x14dc04: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x14dc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14dc08: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x14dc08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x14dc0c: 0x1c31806  srlv        $v1, $v1, $t6
    ctx->pc = 0x14dc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 14) & 0x1F));
    // 0x14dc10: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x14dc10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x14dc14: 0x1480ffea  bnez        $a0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x14DC14u;
    {
        const bool branch_taken_0x14dc14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DC18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DC14u;
            // 0x14dc18: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dc14) {
            ctx->pc = 0x14DBC0u;
            runtime->cooperativeGuestYield();
            goto label_14dbc0;
        }
    }
    ctx->pc = 0x14DC1Cu;
label_14dc1c:
    // 0x14dc1c: 0x3e00008  jr          $ra
    ctx->pc = 0x14DC1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14DBC0u: goto label_14dbc0;
            case 0x14DC1Cu: goto label_14dc1c;
            case 0x14DC24u: goto label_14dc24;
            case 0x14DC30u: goto label_14dc30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14DC24u;
label_14dc24:
    // 0x14dc24: 0x11a0fffd  beqz        $t5, . + 4 + (-0x3 << 2)
    ctx->pc = 0x14DC24u;
    {
        const bool branch_taken_0x14dc24 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DC24u;
            // 0x14dc28: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dc24) {
            ctx->pc = 0x14DC1Cu;
            runtime->cooperativeGuestYield();
            goto label_14dc1c;
        }
    }
    ctx->pc = 0x14DC2Cu;
    // 0x14dc2c: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x14dc2cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_14dc30:
    // 0x14dc30: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x14dc30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x14dc34: 0xf1ac0  sll         $v1, $t7, 11
    ctx->pc = 0x14dc34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 15), 11));
    // 0x14dc38: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x14dc38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x14dc3c: 0x24421910  addiu       $v0, $v0, 0x1910
    ctx->pc = 0x14dc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6416));
    // 0x14dc40: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14dc40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14dc44: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x14dc44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14dc48: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14dc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14dc4c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x14dc4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x14dc50: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x14dc50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x14dc54: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x14dc54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x14dc58: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x14dc58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x14dc5c: 0xed202b  sltu        $a0, $a3, $t5
    ctx->pc = 0x14dc5cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x14dc60: 0x1480fff3  bnez        $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x14DC60u;
    {
        const bool branch_taken_0x14dc60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DC64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DC60u;
            // 0x14dc64: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dc60) {
            ctx->pc = 0x14DC30u;
            runtime->cooperativeGuestYield();
            goto label_14dc30;
        }
    }
    ctx->pc = 0x14DC68u;
    // 0x14dc68: 0x3e00008  jr          $ra
    ctx->pc = 0x14DC68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14DBC0u: goto label_14dbc0;
            case 0x14DC1Cu: goto label_14dc1c;
            case 0x14DC24u: goto label_14dc24;
            case 0x14DC30u: goto label_14dc30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14DC70u;
}
