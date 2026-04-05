#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_11da90
// Address: 0x11da90 - 0x11db40
void entry_11da90_0x11db40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_11da90_0x11db40");
#endif

    ctx->pc = 0x11da90u;

    // 0x11da90: 0x10a00028  beqz        $a1, . + 4 + (0x28 << 2)
    ctx->pc = 0x11DA90u;
    {
        const bool branch_taken_0x11da90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DA94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DA90u;
            // 0x11da94: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11da90) {
            ctx->pc = 0x11DB34u;
            goto label_11db34;
        }
    }
    ctx->pc = 0x11DA98u;
    // 0x11da98: 0x8ce31050  lw          $v1, 0x1050($a3)
    ctx->pc = 0x11da98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4176)));
    // 0x11da9c: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x11DA9Cu;
    {
        const bool branch_taken_0x11da9c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x11DAA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DA9Cu;
            // 0x11daa0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11da9c) {
            ctx->pc = 0x11DAD4u;
            goto label_11dad4;
        }
    }
    ctx->pc = 0x11DAA4u;
    // 0x11daa4: 0x8ce2083c  lw          $v0, 0x83C($a3)
    ctx->pc = 0x11daa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2108)));
    // 0x11daa8: 0x5045000b  beql        $v0, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x11DAA8u;
    {
        const bool branch_taken_0x11daa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x11daa8) {
            ctx->pc = 0x11DAACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11DAA8u;
            // 0x11daac: 0x8ce81050  lw          $t0, 0x1050($a3) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11DAD8u;
            goto label_11dad8;
        }
    }
    ctx->pc = 0x11DAB0u;
    // 0x11dab0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x11dab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x11dab4: 0x0  nop
    ctx->pc = 0x11dab4u;
    // NOP
label_11dab8:
    // 0x11dab8: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x11dab8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11dabc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11DABCu;
    {
        const bool branch_taken_0x11dabc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DAC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DABCu;
            // 0x11dac0: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dabc) {
            ctx->pc = 0x11DAD4u;
            goto label_11dad4;
        }
    }
    ctx->pc = 0x11DAC4u;
    // 0x11dac4: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x11dac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x11dac8: 0x8c42083c  lw          $v0, 0x83C($v0)
    ctx->pc = 0x11dac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2108)));
    // 0x11dacc: 0x5445fffa  bnel        $v0, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11DACCu;
    {
        const bool branch_taken_0x11dacc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x11dacc) {
            ctx->pc = 0x11DAD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11DACCu;
            // 0x11dad0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11DAB8u;
            runtime->cooperativeGuestYield();
            goto label_11dab8;
        }
    }
    ctx->pc = 0x11DAD4u;
label_11dad4:
    // 0x11dad4: 0x8ce81050  lw          $t0, 0x1050($a3)
    ctx->pc = 0x11dad4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4176)));
label_11dad8:
    // 0x11dad8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x11dad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x11dadc: 0xc8102a  slt         $v0, $a2, $t0
    ctx->pc = 0x11dadcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x11dae0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x11DAE0u;
    {
        const bool branch_taken_0x11dae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DAE0u;
            // 0x11dae4: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dae0) {
            ctx->pc = 0x11DB18u;
            goto label_11db18;
        }
    }
    ctx->pc = 0x11DAE8u;
    // 0x11dae8: 0x2445fffc  addiu       $a1, $v0, -0x4
    ctx->pc = 0x11dae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x11daec: 0x0  nop
    ctx->pc = 0x11daecu;
    // NOP
label_11daf0:
    // 0x11daf0: 0x24e3083c  addiu       $v1, $a3, 0x83C
    ctx->pc = 0x11daf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 2108));
    // 0x11daf4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x11daf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x11daf8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x11daf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11dafc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x11dafcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x11db00: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x11db00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11db04: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x11db04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11db08: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x11db08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x11db0c: 0xc8102a  slt         $v0, $a2, $t0
    ctx->pc = 0x11db0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x11db10: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x11DB10u;
    {
        const bool branch_taken_0x11db10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DB10u;
            // 0x11db14: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11db10) {
            ctx->pc = 0x11DAF0u;
            runtime->cooperativeGuestYield();
            goto label_11daf0;
        }
    }
    ctx->pc = 0x11DB18u;
label_11db18:
    // 0x11db18: 0x8ce31050  lw          $v1, 0x1050($a3)
    ctx->pc = 0x11db18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4176)));
    // 0x11db1c: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x11db1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x11db20: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11db20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11db24: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x11db24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x11db28: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x11db28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x11db2c: 0xace31050  sw          $v1, 0x1050($a3)
    ctx->pc = 0x11db2cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4176), GPR_U32(ctx, 3));
    // 0x11db30: 0xac40083c  sw          $zero, 0x83C($v0)
    ctx->pc = 0x11db30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2108), GPR_U32(ctx, 0));
label_11db34:
    // 0x11db34: 0x3e00008  jr          $ra
    ctx->pc = 0x11DB34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11DAB8u: goto label_11dab8;
            case 0x11DAD4u: goto label_11dad4;
            case 0x11DAD8u: goto label_11dad8;
            case 0x11DAF0u: goto label_11daf0;
            case 0x11DB18u: goto label_11db18;
            case 0x11DB34u: goto label_11db34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11DB3Cu;
    // 0x11db3c: 0x0  nop
    ctx->pc = 0x11db3cu;
    // NOP
}
