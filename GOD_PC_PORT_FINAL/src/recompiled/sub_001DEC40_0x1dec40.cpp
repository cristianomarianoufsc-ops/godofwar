#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DEC40
// Address: 0x1dec40 - 0x1decb0
void sub_001DEC40_0x1dec40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DEC40_0x1dec40");
#endif

    ctx->pc = 0x1dec40u;

    // 0x1dec40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dec40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dec44: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1dec44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1dec48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dec48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1dec4c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1dec4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dec50: 0x8c6300fc  lw          $v1, 0xFC($v1)
    ctx->pc = 0x1dec50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 252)));
    // 0x1dec54: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1DEC54u;
    {
        const bool branch_taken_0x1dec54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEC58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEC54u;
            // 0x1dec58: 0x8c44d2ac  lw          $a0, -0x2D54($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dec54) {
            ctx->pc = 0x1DEC94u;
            goto label_1dec94;
        }
    }
    ctx->pc = 0x1DEC5Cu;
    // 0x1dec5c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1dec5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1dec60: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1dec60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dec64: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1DEC64u;
    {
        const bool branch_taken_0x1dec64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DEC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEC64u;
            // 0x1dec68: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dec64) {
            ctx->pc = 0x1DEC94u;
            goto label_1dec94;
        }
    }
    ctx->pc = 0x1DEC6Cu;
    // 0x1dec6c: 0x0  nop
    ctx->pc = 0x1dec6cu;
    // NOP
label_1dec70:
    // 0x1dec70: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1dec70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1dec74: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x1dec74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1dec78: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x1dec78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x1dec7c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DEC7Cu;
    {
        const bool branch_taken_0x1dec7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dec7c) {
            ctx->pc = 0x1DEC98u;
            goto label_1dec98;
        }
    }
    ctx->pc = 0x1DEC84u;
    // 0x1dec84: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1dec84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dec88: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1dec88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dec8c: 0x1443fff8  bne         $v0, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1DEC8Cu;
    {
        const bool branch_taken_0x1dec8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1DEC90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEC8Cu;
            // 0x1dec90: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dec8c) {
            ctx->pc = 0x1DEC70u;
            runtime->cooperativeGuestYield();
            goto label_1dec70;
        }
    }
    ctx->pc = 0x1DEC94u;
label_1dec94:
    // 0x1dec94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dec94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dec98:
    // 0x1dec98: 0xc0797a2  jal         func_1E5E88
    ctx->pc = 0x1DEC98u;
    SET_GPR_U32(ctx, 31, 0x1DECA0u);
    ctx->pc = 0x1E5E88u;
    if (runtime->hasFunction(0x1E5E88u)) {
        auto targetFn = runtime->lookupFunction(0x1E5E88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DECA0u; }
        if (ctx->pc != 0x1DECA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E5E88_0x1e5e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DECA0u; }
        if (ctx->pc != 0x1DECA0u) { return; }
    }
    ctx->pc = 0x1DECA0u;
    // 0x1deca0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1deca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1deca4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DECA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DECA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DECA4u;
            // 0x1deca8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DEC70u: goto label_1dec70;
            case 0x1DEC94u: goto label_1dec94;
            case 0x1DEC98u: goto label_1dec98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DECACu;
    // 0x1decac: 0x0  nop
    ctx->pc = 0x1decacu;
    // NOP
}
