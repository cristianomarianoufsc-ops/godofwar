#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_14da78
// Address: 0x14da78 - 0x14db88
void entry_14da78_0x14db88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_14da78_0x14db88");
#endif

    ctx->pc = 0x14da78u;

    // 0x14da78: 0x308e001f  andi        $t6, $a0, 0x1F
    ctx->pc = 0x14da78u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x14da7c: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x14da7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x14da80: 0x11c00029  beqz        $t6, . + 4 + (0x29 << 2)
    ctx->pc = 0x14DA80u;
    {
        const bool branch_taken_0x14da80 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DA84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DA80u;
            // 0x14da84: 0xc0782d  daddu       $t7, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da80) {
            ctx->pc = 0x14DB28u;
            goto label_14db28;
        }
    }
    ctx->pc = 0x14DA88u;
    // 0x14da88: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x14da88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x14da8c: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x14da8cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14da90: 0x11e00023  beqz        $t7, . + 4 + (0x23 << 2)
    ctx->pc = 0x14DA90u;
    {
        const bool branch_taken_0x14da90 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DA94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DA90u;
            // 0x14da94: 0x4ec023  subu        $t8, $v0, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da90) {
            ctx->pc = 0x14DB20u;
            goto label_14db20;
        }
    }
    ctx->pc = 0x14DA98u;
    // 0x14da98: 0x35080  sll         $t2, $v1, 2
    ctx->pc = 0x14da98u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14da9c: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x14da9cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14daa0: 0x246b0001  addiu       $t3, $v1, 0x1
    ctx->pc = 0x14daa0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14daa4: 0x0  nop
    ctx->pc = 0x14daa4u;
    // NOP
label_14daa8:
    // 0x14daa8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x14daa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x14daac: 0x8d860000  lw          $a2, 0x0($t4)
    ctx->pc = 0x14daacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x14dab0: 0x24421910  addiu       $v0, $v0, 0x1910
    ctx->pc = 0x14dab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6416));
    // 0x14dab4: 0xb2880  sll         $a1, $t3, 2
    ctx->pc = 0x14dab4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x14dab8: 0x24440800  addiu       $a0, $v0, 0x800
    ctx->pc = 0x14dab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x14dabc: 0x1c64804  sllv        $t1, $a2, $t6
    ctx->pc = 0x14dabcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 14) & 0x1F));
    // 0x14dac0: 0x1443821  addu        $a3, $t2, $a0
    ctx->pc = 0x14dac0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x14dac4: 0x24421000  addiu       $v0, $v0, 0x1000
    ctx->pc = 0x14dac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4096));
    // 0x14dac8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x14dac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14dacc: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x14daccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x14dad0: 0x1424021  addu        $t0, $t2, $v0
    ctx->pc = 0x14dad0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x14dad4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x14dad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x14dad8: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x14dad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x14dadc: 0x3063006  srlv        $a2, $a2, $t8
    ctx->pc = 0x14dadcu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 24) & 0x1F));
    // 0x14dae0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x14dae0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x14dae4: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x14dae4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x14dae8: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x14dae8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x14daec: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x14daecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x14daf0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x14daf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14daf4: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x14daf4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x14daf8: 0x1af182b  sltu        $v1, $t5, $t7
    ctx->pc = 0x14daf8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x14dafc: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x14dafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x14db00: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x14db00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x14db04: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x14db04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x14db08: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x14db08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x14db0c: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x14db0cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x14db10: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x14db10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14db14: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x14db14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x14db18: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x14DB18u;
    {
        const bool branch_taken_0x14db18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DB18u;
            // 0x14db1c: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14db18) {
            ctx->pc = 0x14DAA8u;
            runtime->cooperativeGuestYield();
            goto label_14daa8;
        }
    }
    ctx->pc = 0x14DB20u;
label_14db20:
    // 0x14db20: 0x3e00008  jr          $ra
    ctx->pc = 0x14DB20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14DAA8u: goto label_14daa8;
            case 0x14DB20u: goto label_14db20;
            case 0x14DB28u: goto label_14db28;
            case 0x14DB38u: goto label_14db38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14DB28u;
label_14db28:
    // 0x14db28: 0x11e0fffd  beqz        $t7, . + 4 + (-0x3 << 2)
    ctx->pc = 0x14DB28u;
    {
        const bool branch_taken_0x14db28 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DB2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DB28u;
            // 0x14db2c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14db28) {
            ctx->pc = 0x14DB20u;
            runtime->cooperativeGuestYield();
            goto label_14db20;
        }
    }
    ctx->pc = 0x14DB30u;
    // 0x14db30: 0x33880  sll         $a3, $v1, 2
    ctx->pc = 0x14db30u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14db34: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x14db34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_14db38:
    // 0x14db38: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x14db38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x14db3c: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x14db3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x14db40: 0x24631910  addiu       $v1, $v1, 0x1910
    ctx->pc = 0x14db40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6416));
    // 0x14db44: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x14db44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x14db48: 0x24640800  addiu       $a0, $v1, 0x800
    ctx->pc = 0x14db48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x14db4c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x14db4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x14db50: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x14db50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x14db54: 0x24631000  addiu       $v1, $v1, 0x1000
    ctx->pc = 0x14db54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4096));
    // 0x14db58: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x14db58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14db5c: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x14db5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x14db60: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x14db60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x14db64: 0x12f282b  sltu        $a1, $t1, $t7
    ctx->pc = 0x14db64u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x14db68: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x14db68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x14db6c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x14db6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x14db70: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14db70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14db74: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x14db74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x14db78: 0x14a0ffef  bnez        $a1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x14DB78u;
    {
        const bool branch_taken_0x14db78 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DB78u;
            // 0x14db7c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14db78) {
            ctx->pc = 0x14DB38u;
            runtime->cooperativeGuestYield();
            goto label_14db38;
        }
    }
    ctx->pc = 0x14DB80u;
    // 0x14db80: 0x3e00008  jr          $ra
    ctx->pc = 0x14DB80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14DAA8u: goto label_14daa8;
            case 0x14DB20u: goto label_14db20;
            case 0x14DB28u: goto label_14db28;
            case 0x14DB38u: goto label_14db38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14DB88u;
}
