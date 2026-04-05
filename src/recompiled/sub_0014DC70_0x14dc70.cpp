#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014DC70
// Address: 0x14dc70 - 0x14df58
void sub_0014DC70_0x14dc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014DC70_0x14dc70");
#endif

    ctx->pc = 0x14dc70u;

    // 0x14dc70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x14dc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14dc74: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x14dc74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x14dc78: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x14dc78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x14dc7c: 0x7fb40000  sq          $s4, 0x0($sp)
    ctx->pc = 0x14dc7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 20));
    // 0x14dc80: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x14dc80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x14dc84: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x14dc84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dc88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14dc88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14dc8c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x14dc8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x14dc90: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x14dc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x14dc94: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x14dc94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x14dc98: 0x14430034  bne         $v0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x14DC98u;
    {
        const bool branch_taken_0x14dc98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x14DC9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DC98u;
            // 0x14dc9c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dc98) {
            ctx->pc = 0x14DD6Cu;
            goto label_14dd6c;
        }
    }
    ctx->pc = 0x14DCA0u;
    // 0x14dca0: 0x3c0b0033  lui         $t3, 0x33
    ctx->pc = 0x14dca0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)51 << 16));
    // 0x14dca4: 0x3c0a0033  lui         $t2, 0x33
    ctx->pc = 0x14dca4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)51 << 16));
    // 0x14dca8: 0x25623110  addiu       $v0, $t3, 0x3110
    ctx->pc = 0x14dca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 12560));
    // 0x14dcac: 0x25431910  addiu       $v1, $t2, 0x1910
    ctx->pc = 0x14dcacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 6416));
    // 0x14dcb0: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x14dcb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14dcb4: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x14dcb4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x14dcb8: 0x2ce50200  sltiu       $a1, $a3, 0x200
    ctx->pc = 0x14dcb8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x14dcbc: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x14dcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x14dcc0: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x14dcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x14dcc4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x14dcc4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dcc8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14dcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14dccc: 0x8c840800  lw          $a0, 0x800($a0)
    ctx->pc = 0x14dcccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2048)));
    // 0x14dcd0: 0x8c631000  lw          $v1, 0x1000($v1)
    ctx->pc = 0x14dcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4096)));
    // 0x14dcd4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x14dcd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x14dcd8: 0x10a00021  beqz        $a1, . + 4 + (0x21 << 2)
    ctx->pc = 0x14DCD8u;
    {
        const bool branch_taken_0x14dcd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DCDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DCD8u;
            // 0x14dcdc: 0x431825  or          $v1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dcd8) {
            ctx->pc = 0x14DD60u;
            goto label_14dd60;
        }
    }
    ctx->pc = 0x14DCE0u;
    // 0x14dce0: 0x24c80004  addiu       $t0, $a2, 0x4
    ctx->pc = 0x14dce0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x14dce4: 0x0  nop
    ctx->pc = 0x14dce4u;
    // NOP
label_14dce8:
    // 0x14dce8: 0x25421910  addiu       $v0, $t2, 0x1910
    ctx->pc = 0x14dce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 6416));
    // 0x14dcec: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x14dcecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x14dcf0: 0x1021821  addu        $v1, $t0, $v0
    ctx->pc = 0x14dcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x14dcf4: 0x482021  addu        $a0, $v0, $t0
    ctx->pc = 0x14dcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x14dcf8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x14dcf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dcfc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14dcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14dd00: 0x8c840800  lw          $a0, 0x800($a0)
    ctx->pc = 0x14dd00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2048)));
    // 0x14dd04: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x14dd04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x14dd08: 0x8c421000  lw          $v0, 0x1000($v0)
    ctx->pc = 0x14dd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4096)));
    // 0x14dd0c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14dd0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14dd10: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x14dd10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x14dd14: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14dd14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14dd18: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x14dd18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x14dd1c: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x14dd1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x14dd20: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x14dd20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x14dd24: 0x452825  or          $a1, $v0, $a1
    ctx->pc = 0x14dd24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x14dd28: 0x51078  dsll        $v0, $a1, 1
    ctx->pc = 0x14dd28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 1);
    // 0x14dd2c: 0x462825  or          $a1, $v0, $a2
    ctx->pc = 0x14dd2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x14dd30: 0x51078  dsll        $v0, $a1, 1
    ctx->pc = 0x14dd30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 1);
    // 0x14dd34: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x14dd34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x14dd38: 0x510b8  dsll        $v0, $a1, 2
    ctx->pc = 0x14dd38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 2);
    // 0x14dd3c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x14dd3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x14dd40: 0x51738  dsll        $v0, $a1, 28
    ctx->pc = 0x14dd40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 28);
    // 0x14dd44: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x14dd44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x14dd48: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14DD48u;
    {
        const bool branch_taken_0x14dd48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x14DD4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DD48u;
            // 0x14dd4c: 0x24e90001  addiu       $t1, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dd48) {
            ctx->pc = 0x14DD60u;
            goto label_14dd60;
        }
    }
    ctx->pc = 0x14DD50u;
    // 0x14dd50: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x14dd50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dd54: 0x2ce20200  sltiu       $v0, $a3, 0x200
    ctx->pc = 0x14dd54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x14dd58: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x14DD58u;
    {
        const bool branch_taken_0x14dd58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DD5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DD58u;
            // 0x14dd5c: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dd58) {
            ctx->pc = 0x14DCE8u;
            runtime->cooperativeGuestYield();
            goto label_14dce8;
        }
    }
    ctx->pc = 0x14DD60u;
label_14dd60:
    // 0x14dd60: 0x25623110  addiu       $v0, $t3, 0x3110
    ctx->pc = 0x14dd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 12560));
    // 0x14dd64: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x14DD64u;
    {
        const bool branch_taken_0x14dd64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DD68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DD64u;
            // 0x14dd68: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dd64) {
            ctx->pc = 0x14DDD8u;
            goto label_14ddd8;
        }
    }
    ctx->pc = 0x14DD6Cu;
label_14dd6c:
    // 0x14dd6c: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x14dd6cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x14dd70: 0x8d073110  lw          $a3, 0x3110($t0)
    ctx->pc = 0x14dd70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12560)));
    // 0x14dd74: 0x0  nop
    ctx->pc = 0x14dd74u;
    // NOP
label_14dd78:
    // 0x14dd78: 0x2ce20200  sltiu       $v0, $a3, 0x200
    ctx->pc = 0x14dd78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x14dd7c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x14DD7Cu;
    {
        const bool branch_taken_0x14dd7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DD80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DD7Cu;
            // 0x14dd80: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dd7c) {
            ctx->pc = 0x14DDBCu;
            goto label_14ddbc;
        }
    }
    ctx->pc = 0x14DD84u;
    // 0x14dd84: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x14dd84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x14dd88: 0x24421910  addiu       $v0, $v0, 0x1910
    ctx->pc = 0x14dd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6416));
    // 0x14dd8c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x14dd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x14dd90: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x14dd90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14dd94: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x14dd94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14dd98: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x14dd98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14dd9c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x14dd9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dda0: 0x8cc50800  lw          $a1, 0x800($a2)
    ctx->pc = 0x14dda0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2048)));
    // 0x14dda4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x14dda4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x14dda8: 0x8c421000  lw          $v0, 0x1000($v0)
    ctx->pc = 0x14dda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4096)));
    // 0x14ddac: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x14ddacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x14ddb0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14ddb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14ddb4: 0x5064fff0  beql        $v1, $a0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x14DDB4u;
    {
        const bool branch_taken_0x14ddb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x14ddb4) {
            ctx->pc = 0x14DDB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14DDB4u;
            // 0x14ddb8: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14DD78u;
            runtime->cooperativeGuestYield();
            goto label_14dd78;
        }
    }
    ctx->pc = 0x14DDBCu;
label_14ddbc:
    // 0x14ddbc: 0x25053110  addiu       $a1, $t0, 0x3110
    ctx->pc = 0x14ddbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 12560));
    // 0x14ddc0: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x14ddc0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ddc4: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x14ddc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x14ddc8: 0xad073110  sw          $a3, 0x3110($t0)
    ctx->pc = 0x14ddc8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12560), GPR_U32(ctx, 7));
    // 0x14ddcc: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x14ddccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x14ddd0: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x14ddd0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x14ddd4: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x14ddd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_14ddd8:
    // 0x14ddd8: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x14ddd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x14dddc: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x14dddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x14dde0: 0x24631910  addiu       $v1, $v1, 0x1910
    ctx->pc = 0x14dde0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6416));
    // 0x14dde4: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x14dde4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x14dde8: 0x24640800  addiu       $a0, $v1, 0x800
    ctx->pc = 0x14dde8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x14ddec: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x14ddecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14ddf0: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x14DDF0u;
    {
        const bool branch_taken_0x14ddf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DDF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DDF0u;
            // 0x14ddf4: 0x24651000  addiu       $a1, $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ddf0) {
            ctx->pc = 0x14DF34u;
            goto label_14df34;
        }
    }
    ctx->pc = 0x14DDF8u;
    // 0x14ddf8: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x14ddf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x14ddfc: 0x436821  addu        $t5, $v0, $v1
    ctx->pc = 0x14ddfcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14de00: 0x456021  addu        $t4, $v0, $a1
    ctx->pc = 0x14de00u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x14de04: 0x445821  addu        $t3, $v0, $a0
    ctx->pc = 0x14de04u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x14de08: 0x1a0802d  daddu       $s0, $t5, $zero
    ctx->pc = 0x14de08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14de0c: 0x160c82d  daddu       $t9, $t3, $zero
    ctx->pc = 0x14de0cu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14de10: 0x180c02d  daddu       $t8, $t4, $zero
    ctx->pc = 0x14de10u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14de14: 0x0  nop
    ctx->pc = 0x14de14u;
    // NOP
label_14de18:
    // 0x14de18: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x14de18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x14de1c: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x14de1cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14de20: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x14de20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x14de24: 0x8d850000  lw          $a1, 0x0($t4)
    ctx->pc = 0x14de24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x14de28: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x14de28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x14de2c: 0x8da20004  lw          $v0, 0x4($t5)
    ctx->pc = 0x14de2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x14de30: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x14de30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x14de34: 0x8d640004  lw          $a0, 0x4($t3)
    ctx->pc = 0x14de34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x14de38: 0x8d850004  lw          $a1, 0x4($t4)
    ctx->pc = 0x14de38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x14de3c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x14de3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x14de40: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x14de40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x14de44: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x14de44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x14de48: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x14de48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x14de4c: 0x9e930000  lwu         $s3, 0x0($s4)
    ctx->pc = 0x14de4cu;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x14de50: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x14de50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x14de54: 0x439025  or          $s2, $v0, $v1
    ctx->pc = 0x14de54u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x14de58: 0x1f31014  dsllv       $v0, $s3, $t7
    ctx->pc = 0x14de58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (GPR_U32(ctx, 15) & 0x3F));
    // 0x14de5c: 0x0  nop
    ctx->pc = 0x14de5cu;
    // NOP
label_14de60:
    // 0x14de60: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x14de60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x14de64: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x14DE64u;
    {
        const bool branch_taken_0x14de64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14de64) {
            ctx->pc = 0x14DE68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14DE64u;
            // 0x14de68: 0x25ef0001  addiu       $t7, $t7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14DEFCu;
            goto label_14defc;
        }
    }
    ctx->pc = 0x14DE6Cu;
    // 0x14de6c: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x14de6cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14de70: 0x1d1102b  sltu        $v0, $t6, $s1
    ctx->pc = 0x14de70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x14de74: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x14DE74u;
    {
        const bool branch_taken_0x14de74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DE78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DE74u;
            // 0x14de78: 0x268a0004  addiu       $t2, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14de74) {
            ctx->pc = 0x14DEECu;
            goto label_14deec;
        }
    }
    ctx->pc = 0x14DE7Cu;
    // 0x14de7c: 0x27090004  addiu       $t1, $t8, 0x4
    ctx->pc = 0x14de7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x14de80: 0x27280004  addiu       $t0, $t9, 0x4
    ctx->pc = 0x14de80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 25), 4));
    // 0x14de84: 0x26060004  addiu       $a2, $s0, 0x4
    ctx->pc = 0x14de84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_14de88:
    // 0x14de88: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x14de88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x14de8c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x14de8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14de90: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x14de90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x14de94: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x14de94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x14de98: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x14de98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x14de9c: 0x8d040004  lw          $a0, 0x4($t0)
    ctx->pc = 0x14de9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x14dea0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x14dea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x14dea4: 0x8d250004  lw          $a1, 0x4($t1)
    ctx->pc = 0x14dea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x14dea8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x14dea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x14deac: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x14deacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x14deb0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x14deb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x14deb4: 0x9d440000  lwu         $a0, 0x0($t2)
    ctx->pc = 0x14deb4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x14deb8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x14deb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x14debc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x14debcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x14dec0: 0x1e42014  dsllv       $a0, $a0, $t7
    ctx->pc = 0x14dec0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 15) & 0x3F));
    // 0x14dec4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x14dec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x14dec8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x14dec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x14decc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14DECCu;
    {
        const bool branch_taken_0x14decc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DECCu;
            // 0x14ded0: 0x25ce0001  addiu       $t6, $t6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14decc) {
            ctx->pc = 0x14DEF8u;
            goto label_14def8;
        }
    }
    ctx->pc = 0x14DED4u;
    // 0x14ded4: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x14ded4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x14ded8: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x14ded8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x14dedc: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x14dedcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x14dee0: 0x1d1102b  sltu        $v0, $t6, $s1
    ctx->pc = 0x14dee0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x14dee4: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x14DEE4u;
    {
        const bool branch_taken_0x14dee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DEE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DEE4u;
            // 0x14dee8: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dee4) {
            ctx->pc = 0x14DE88u;
            runtime->cooperativeGuestYield();
            goto label_14de88;
        }
    }
    ctx->pc = 0x14DEECu;
label_14deec:
    // 0x14deec: 0x71140  sll         $v0, $a3, 5
    ctx->pc = 0x14deecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x14def0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x14DEF0u;
    {
        const bool branch_taken_0x14def0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DEF0u;
            // 0x14def4: 0x4f1021  addu        $v0, $v0, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14def0) {
            ctx->pc = 0x14DF38u;
            goto label_14df38;
        }
    }
    ctx->pc = 0x14DEF8u;
label_14def8:
    // 0x14def8: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x14def8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_14defc:
    // 0x14defc: 0x2de20020  sltiu       $v0, $t7, 0x20
    ctx->pc = 0x14defcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x14df00: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x14DF00u;
    {
        const bool branch_taken_0x14df00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DF00u;
            // 0x14df04: 0x1f31014  dsllv       $v0, $s3, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (GPR_U32(ctx, 15) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14df00) {
            ctx->pc = 0x14DE60u;
            runtime->cooperativeGuestYield();
            goto label_14de60;
        }
    }
    ctx->pc = 0x14DF08u;
    // 0x14df08: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x14df08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x14df0c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x14df0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x14df10: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x14df10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x14df14: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x14df14u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x14df18: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x14df18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14df1c: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x14df1cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x14df20: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x14df20u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x14df24: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x14df24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x14df28: 0x27390004  addiu       $t9, $t9, 0x4
    ctx->pc = 0x14df28u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4));
    // 0x14df2c: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
    ctx->pc = 0x14DF2Cu;
    {
        const bool branch_taken_0x14df2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DF2Cu;
            // 0x14df30: 0x27180004  addiu       $t8, $t8, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14df2c) {
            ctx->pc = 0x14DE18u;
            runtime->cooperativeGuestYield();
            goto label_14de18;
        }
    }
    ctx->pc = 0x14DF34u;
label_14df34:
    // 0x14df34: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x14df34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14df38:
    // 0x14df38: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x14df38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14df3c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x14df3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14df40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14df40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14df44: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x14df44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14df48: 0x7bb40000  lq          $s4, 0x0($sp)
    ctx->pc = 0x14df48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14df4c: 0x3e00008  jr          $ra
    ctx->pc = 0x14DF4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14DF50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DF4Cu;
            // 0x14df50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14DCE8u: goto label_14dce8;
            case 0x14DD60u: goto label_14dd60;
            case 0x14DD6Cu: goto label_14dd6c;
            case 0x14DD78u: goto label_14dd78;
            case 0x14DDBCu: goto label_14ddbc;
            case 0x14DDD8u: goto label_14ddd8;
            case 0x14DE18u: goto label_14de18;
            case 0x14DE60u: goto label_14de60;
            case 0x14DE88u: goto label_14de88;
            case 0x14DEECu: goto label_14deec;
            case 0x14DEF8u: goto label_14def8;
            case 0x14DEFCu: goto label_14defc;
            case 0x14DF34u: goto label_14df34;
            case 0x14DF38u: goto label_14df38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14DF54u;
    // 0x14df54: 0x0  nop
    ctx->pc = 0x14df54u;
    // NOP
}
