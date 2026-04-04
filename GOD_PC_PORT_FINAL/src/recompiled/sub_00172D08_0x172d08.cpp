#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00172D08
// Address: 0x172d08 - 0x172df0
void sub_00172D08_0x172d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172D08_0x172d08");
#endif

    ctx->pc = 0x172d08u;

label_172d08:
    // 0x172d08: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x172d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x172d0c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x172d0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x172d10: 0x8c42c38c  lw          $v0, -0x3C74($v0)
    ctx->pc = 0x172d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951820)));
    // 0x172d14: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x172D14u;
    {
        const bool branch_taken_0x172d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172D14u;
            // 0x172d18: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172d14) {
            ctx->pc = 0x172D28u;
            goto label_172d28;
        }
    }
    ctx->pc = 0x172D1Cu;
    // 0x172d1c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x172d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x172d20: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x172D20u;
    SET_GPR_U32(ctx, 31, 0x172D28u);
    ctx->pc = 0x172D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172D20u;
            // 0x172d24: 0x8c44c388  lw          $a0, -0x3C78($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951816)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172D28u; }
        if (ctx->pc != 0x172D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172D28u; }
        if (ctx->pc != 0x172D28u) { return; }
    }
    ctx->pc = 0x172D28u;
label_172d28:
    // 0x172d28: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x172d28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x172d2c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x172d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x172d30: 0x8c82c804  lw          $v0, -0x37FC($a0)
    ctx->pc = 0x172d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294952964)));
    // 0x172d34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x172d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172d38: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x172d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x172d3c: 0xac60c388  sw          $zero, -0x3C78($v1)
    ctx->pc = 0x172d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294951816), GPR_U32(ctx, 0));
    // 0x172d40: 0xac82c804  sw          $v0, -0x37FC($a0)
    ctx->pc = 0x172d40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294952964), GPR_U32(ctx, 2));
    // 0x172d44: 0x3e00008  jr          $ra
    ctx->pc = 0x172D44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172D44u;
            // 0x172d48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172D08u: goto label_172d08;
            case 0x172D28u: goto label_172d28;
            case 0x172D88u: goto label_172d88;
            case 0x172DD0u: goto label_172dd0;
            case 0x172DE0u: goto label_172de0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x172D4Cu;
    // 0x172d4c: 0x0  nop
    ctx->pc = 0x172d4cu;
    // NOP
    // 0x172d50: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x172d50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x172d54: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x172d54u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x172d58: 0x3e00008  jr          $ra
    ctx->pc = 0x172D58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172D58u;
            // 0x172d5c: 0xaca40004  sw          $a0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172D08u: goto label_172d08;
            case 0x172D28u: goto label_172d28;
            case 0x172D88u: goto label_172d88;
            case 0x172DD0u: goto label_172dd0;
            case 0x172DE0u: goto label_172de0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x172D60u;
    // 0x172d60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x172d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x172d64: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x172d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x172d68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x172d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x172d6c: 0x5803c  dsll32      $s0, $a1, 0
    ctx->pc = 0x172d6cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) << (32 + 0));
    // 0x172d70: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x172d70u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x172d74: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x172D74u;
    {
        const bool branch_taken_0x172d74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x172D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172D74u;
            // 0x172d78: 0xae040024  sw          $a0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172d74) {
            ctx->pc = 0x172D88u;
            goto label_172d88;
        }
    }
    ctx->pc = 0x172D7Cu;
    // 0x172d7c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x172d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x172d80: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x172D80u;
    {
        const bool branch_taken_0x172d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172D80u;
            // 0x172d84: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172d80) {
            ctx->pc = 0x172DE0u;
            goto label_172de0;
        }
    }
    ctx->pc = 0x172D88u;
label_172d88:
    // 0x172d88: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x172d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x172d8c: 0x10100a  movz        $v0, $zero, $s0
    ctx->pc = 0x172d8cu;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x172d90: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x172d90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x172d94: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x172d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x172d98: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x172d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x172d9c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x172d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x172da0: 0x2484004c  addiu       $a0, $a0, 0x4C
    ctx->pc = 0x172da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
    // 0x172da4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x172da4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x172da8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x172da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x172dac: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x172dacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x172db0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x172db0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x172db4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x172db4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x172db8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x172db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x172dbc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x172dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x172dc0: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x172dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x172dc4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x172dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x172dc8: 0xc05cb42  jal         func_172D08
    ctx->pc = 0x172DC8u;
    SET_GPR_U32(ctx, 31, 0x172DD0u);
    ctx->pc = 0x172DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172DC8u;
            // 0x172dcc: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172D08u;
    runtime->cooperativeGuestYield();
    goto label_172d08;
    ctx->pc = 0x172DD0u;
label_172dd0:
    // 0x172dd0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x172dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x172dd4: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x172dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x172dd8: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x172dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x172ddc: 0xac60c390  sw          $zero, -0x3C70($v1)
    ctx->pc = 0x172ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294951824), GPR_U32(ctx, 0));
label_172de0:
    // 0x172de0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x172de0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172de4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x172de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172de8: 0x3e00008  jr          $ra
    ctx->pc = 0x172DE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172DE8u;
            // 0x172dec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172D08u: goto label_172d08;
            case 0x172D28u: goto label_172d28;
            case 0x172D88u: goto label_172d88;
            case 0x172DD0u: goto label_172dd0;
            case 0x172DE0u: goto label_172de0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x172DF0u;
}
