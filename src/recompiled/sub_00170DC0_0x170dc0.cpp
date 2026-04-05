#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00170DC0
// Address: 0x170dc0 - 0x170e30
void sub_00170DC0_0x170dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170DC0_0x170dc0");
#endif

    ctx->pc = 0x170dc0u;

    // 0x170dc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x170dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x170dc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x170dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x170dc8: 0x908200cf  lbu         $v0, 0xCF($a0)
    ctx->pc = 0x170dc8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 207)));
    // 0x170dcc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x170dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x170dd0: 0xa08200cf  sb          $v0, 0xCF($a0)
    ctx->pc = 0x170dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 207), (uint8_t)GPR_U32(ctx, 2));
    // 0x170dd4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x170dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x170dd8: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x170dd8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x170ddc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x170ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x170de0: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x170DE0u;
    {
        const bool branch_taken_0x170de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x170DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170DE0u;
            // 0x170de4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170de0) {
            ctx->pc = 0x170E28u;
            goto label_170e28;
        }
    }
    ctx->pc = 0x170DE8u;
    // 0x170de8: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x170de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x170dec: 0x24820074  addiu       $v0, $a0, 0x74
    ctx->pc = 0x170decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 116));
    // 0x170df0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x170df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x170df4: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x170DF4u;
    {
        const bool branch_taken_0x170df4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x170DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170DF4u;
            // 0x170df8: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170df4) {
            ctx->pc = 0x170E28u;
            goto label_170e28;
        }
    }
    ctx->pc = 0x170DFCu;
    // 0x170dfc: 0x0  nop
    ctx->pc = 0x170dfcu;
    // NOP
label_170e00:
    // 0x170e00: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x170e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x170e04: 0x2444fff0  addiu       $a0, $v0, -0x10
    ctx->pc = 0x170e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x170e08: 0xc05ce12  jal         func_173848
    ctx->pc = 0x170E08u;
    SET_GPR_U32(ctx, 31, 0x170E10u);
    ctx->pc = 0x170E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170E08u;
            // 0x170e0c: 0x2200a  movz        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173848u;
    if (runtime->hasFunction(0x173848u)) {
        auto targetFn = runtime->lookupFunction(0x173848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170E10u; }
        if (ctx->pc != 0x170E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173848_0x173848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170E10u; }
        if (ctx->pc != 0x170E10u) { return; }
    }
    ctx->pc = 0x170E10u;
    // 0x170e10: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x170e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x170e14: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x170e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170e18: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x170e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x170e1c: 0x1443fff8  bne         $v0, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x170E1Cu;
    {
        const bool branch_taken_0x170e1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x170E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170E1Cu;
            // 0x170e20: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170e1c) {
            ctx->pc = 0x170E00u;
            runtime->cooperativeGuestYield();
            goto label_170e00;
        }
    }
    ctx->pc = 0x170E24u;
    // 0x170e24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x170e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_170e28:
    // 0x170e28: 0x3e00008  jr          $ra
    ctx->pc = 0x170E28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170E28u;
            // 0x170e2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170E00u: goto label_170e00;
            case 0x170E28u: goto label_170e28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x170E30u;
}
