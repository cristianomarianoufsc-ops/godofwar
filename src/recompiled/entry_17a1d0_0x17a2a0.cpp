#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_17a1d0
// Address: 0x17a1d0 - 0x17a2a0
void entry_17a1d0_0x17a2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_17a1d0_0x17a2a0");
#endif

    ctx->pc = 0x17a1d0u;

    // 0x17a1d0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17a1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17a1d4: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17A1D4u;
    {
        const bool branch_taken_0x17a1d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x17A1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A1D4u;
            // 0x17a1d8: 0x3c05002a  lui         $a1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a1d4) {
            ctx->pc = 0x17A1ECu;
            goto label_17a1ec;
        }
    }
    ctx->pc = 0x17A1DCu;
    // 0x17a1dc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x17a1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x17a1e0: 0x8c42c7d4  lw          $v0, -0x382C($v0)
    ctx->pc = 0x17a1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952916)));
    // 0x17a1e4: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x17a1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17a1e8: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x17a1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_17a1ec:
    // 0x17a1ec: 0x8ca2c7d4  lw          $v0, -0x382C($a1)
    ctx->pc = 0x17a1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294952916)));
    // 0x17a1f0: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x17a1f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x17a1f4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x17A1F4u;
    {
        const bool branch_taken_0x17a1f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A1F4u;
            // 0x17a1f8: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a1f4) {
            ctx->pc = 0x17A23Cu;
            goto label_17a23c;
        }
    }
    ctx->pc = 0x17A1FCu;
    // 0x17a1fc: 0x240207d0  addiu       $v0, $zero, 0x7D0
    ctx->pc = 0x17a1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
label_17a200:
    // 0x17a200: 0x401021  addu        $v0, $v0, $zero
    ctx->pc = 0x17a200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 0)));
label_17a204:
    // 0x17a204: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17a204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17a208: 0x0  nop
    ctx->pc = 0x17a208u;
    // NOP
    // 0x17a20c: 0x0  nop
    ctx->pc = 0x17a20cu;
    // NOP
    // 0x17a210: 0x0  nop
    ctx->pc = 0x17a210u;
    // NOP
    // 0x17a214: 0x0  nop
    ctx->pc = 0x17a214u;
    // NOP
    // 0x17a218: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17A218u;
    {
        const bool branch_taken_0x17a218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a218) {
            ctx->pc = 0x17A204u;
            runtime->cooperativeGuestYield();
            goto label_17a204;
        }
    }
    ctx->pc = 0x17A220u;
    // 0x17a220: 0x0  nop
    ctx->pc = 0x17a220u;
    // NOP
    // 0x17a224: 0x8ca2c7d4  lw          $v0, -0x382C($a1)
    ctx->pc = 0x17a224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294952916)));
    // 0x17a228: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x17a228u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x17a22c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x17A22Cu;
    {
        const bool branch_taken_0x17a22c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17A230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A22Cu;
            // 0x17a230: 0x240207d0  addiu       $v0, $zero, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a22c) {
            ctx->pc = 0x17A200u;
            runtime->cooperativeGuestYield();
            goto label_17a200;
        }
    }
    ctx->pc = 0x17A234u;
    // 0x17a234: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x17A234u;
    {
        const bool branch_taken_0x17a234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A234u;
            // 0x17a238: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a234) {
            ctx->pc = 0x17A290u;
            goto label_17a290;
        }
    }
    ctx->pc = 0x17A23Cu;
label_17a23c:
    // 0x17a23c: 0x8c42c664  lw          $v0, -0x399C($v0)
    ctx->pc = 0x17a23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952548)));
    // 0x17a240: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x17A240u;
    {
        const bool branch_taken_0x17a240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17A244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A240u;
            // 0x17a244: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a240) {
            ctx->pc = 0x17A290u;
            goto label_17a290;
        }
    }
    ctx->pc = 0x17A248u;
    // 0x17a248: 0x8ca2c7d4  lw          $v0, -0x382C($a1)
    ctx->pc = 0x17a248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294952916)));
    // 0x17a24c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x17a24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17a250: 0x240207d0  addiu       $v0, $zero, 0x7D0
    ctx->pc = 0x17a250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    // 0x17a254: 0x0  nop
    ctx->pc = 0x17a254u;
    // NOP
label_17a258:
    // 0x17a258: 0x401021  addu        $v0, $v0, $zero
    ctx->pc = 0x17a258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 0)));
label_17a25c:
    // 0x17a25c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17a25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17a260: 0x0  nop
    ctx->pc = 0x17a260u;
    // NOP
    // 0x17a264: 0x0  nop
    ctx->pc = 0x17a264u;
    // NOP
    // 0x17a268: 0x0  nop
    ctx->pc = 0x17a268u;
    // NOP
    // 0x17a26c: 0x0  nop
    ctx->pc = 0x17a26cu;
    // NOP
    // 0x17a270: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17A270u;
    {
        const bool branch_taken_0x17a270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a270) {
            ctx->pc = 0x17A25Cu;
            runtime->cooperativeGuestYield();
            goto label_17a25c;
        }
    }
    ctx->pc = 0x17A278u;
    // 0x17a278: 0x0  nop
    ctx->pc = 0x17a278u;
    // NOP
    // 0x17a27c: 0x8ca2c7d4  lw          $v0, -0x382C($a1)
    ctx->pc = 0x17a27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294952916)));
    // 0x17a280: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x17a280u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17a284: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x17A284u;
    {
        const bool branch_taken_0x17a284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17A288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A284u;
            // 0x17a288: 0x240207d0  addiu       $v0, $zero, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a284) {
            ctx->pc = 0x17A258u;
            runtime->cooperativeGuestYield();
            goto label_17a258;
        }
    }
    ctx->pc = 0x17A28Cu;
    // 0x17a28c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x17a28cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_17a290:
    // 0x17a290: 0xac40c7d4  sw          $zero, -0x382C($v0)
    ctx->pc = 0x17a290u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294952916), GPR_U32(ctx, 0));
    // 0x17a294: 0x3e00008  jr          $ra
    ctx->pc = 0x17A294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A1ECu: goto label_17a1ec;
            case 0x17A200u: goto label_17a200;
            case 0x17A204u: goto label_17a204;
            case 0x17A23Cu: goto label_17a23c;
            case 0x17A258u: goto label_17a258;
            case 0x17A25Cu: goto label_17a25c;
            case 0x17A290u: goto label_17a290;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17A29Cu;
    // 0x17a29c: 0x0  nop
    ctx->pc = 0x17a29cu;
    // NOP
}
