#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00170E30
// Address: 0x170e30 - 0x170e98
void sub_00170E30_0x170e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170E30_0x170e30");
#endif

    ctx->pc = 0x170e30u;

    // 0x170e30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x170e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x170e34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x170e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x170e38: 0x908200cf  lbu         $v0, 0xCF($a0)
    ctx->pc = 0x170e38u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 207)));
    // 0x170e3c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x170e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x170e40: 0xa08200cf  sb          $v0, 0xCF($a0)
    ctx->pc = 0x170e40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 207), (uint8_t)GPR_U32(ctx, 2));
    // 0x170e44: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x170e44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x170e48: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x170E48u;
    {
        const bool branch_taken_0x170e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170E48u;
            // 0x170e4c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170e48) {
            ctx->pc = 0x170E90u;
            goto label_170e90;
        }
    }
    ctx->pc = 0x170E50u;
    // 0x170e50: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x170e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x170e54: 0x24820074  addiu       $v0, $a0, 0x74
    ctx->pc = 0x170e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 116));
    // 0x170e58: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x170e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x170e5c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x170E5Cu;
    {
        const bool branch_taken_0x170e5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x170E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170E5Cu;
            // 0x170e60: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170e5c) {
            ctx->pc = 0x170E90u;
            goto label_170e90;
        }
    }
    ctx->pc = 0x170E64u;
    // 0x170e64: 0x0  nop
    ctx->pc = 0x170e64u;
    // NOP
label_170e68:
    // 0x170e68: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x170e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x170e6c: 0x2444fff0  addiu       $a0, $v0, -0x10
    ctx->pc = 0x170e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x170e70: 0xc05ce24  jal         func_173890
    ctx->pc = 0x170E70u;
    SET_GPR_U32(ctx, 31, 0x170E78u);
    ctx->pc = 0x170E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170E70u;
            // 0x170e74: 0x2200a  movz        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173890u;
    if (runtime->hasFunction(0x173890u)) {
        auto targetFn = runtime->lookupFunction(0x173890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170E78u; }
        if (ctx->pc != 0x170E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173890_0x173890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170E78u; }
        if (ctx->pc != 0x170E78u) { return; }
    }
    ctx->pc = 0x170E78u;
    // 0x170e78: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x170e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x170e7c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x170e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170e80: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x170e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x170e84: 0x1443fff8  bne         $v0, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x170E84u;
    {
        const bool branch_taken_0x170e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x170E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170E84u;
            // 0x170e88: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170e84) {
            ctx->pc = 0x170E68u;
            runtime->cooperativeGuestYield();
            goto label_170e68;
        }
    }
    ctx->pc = 0x170E8Cu;
    // 0x170e8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x170e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_170e90:
    // 0x170e90: 0x3e00008  jr          $ra
    ctx->pc = 0x170E90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170E90u;
            // 0x170e94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170E68u: goto label_170e68;
            case 0x170E90u: goto label_170e90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x170E98u;
}
