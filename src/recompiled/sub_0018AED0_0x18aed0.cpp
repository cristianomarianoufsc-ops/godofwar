#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018AED0
// Address: 0x18aed0 - 0x18af50
void sub_0018AED0_0x18aed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018AED0_0x18aed0");
#endif

    ctx->pc = 0x18aed0u;

    // 0x18aed0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18aed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18aed4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x18aed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x18aed8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18aed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18aedc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18aedcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aee0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18aee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18aee4: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x18aee4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18aee8: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x18aee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x18aeec: 0x10b10005  beq         $a1, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x18AEECu;
    {
        const bool branch_taken_0x18aeec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 17));
        ctx->pc = 0x18AEF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AEECu;
            // 0x18aef0: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aeec) {
            ctx->pc = 0x18AF04u;
            goto label_18af04;
        }
    }
    ctx->pc = 0x18AEF4u;
    // 0x18aef4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18aef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18aef8: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x18AEF8u;
    SET_GPR_U32(ctx, 31, 0x18AF00u);
    ctx->pc = 0x18AEFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AEF8u;
            // 0x18aefc: 0x8c44e208  lw          $a0, -0x1DF8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959624)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AF00u; }
        if (ctx->pc != 0x18AF00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AF00u; }
        if (ctx->pc != 0x18AF00u) { return; }
    }
    ctx->pc = 0x18AF00u;
    // 0x18af00: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x18af00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_18af04:
    // 0x18af04: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x18af04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x18af08: 0x10b10007  beq         $a1, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x18AF08u;
    {
        const bool branch_taken_0x18af08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 17));
        ctx->pc = 0x18AF0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AF08u;
            // 0x18af0c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18af08) {
            ctx->pc = 0x18AF28u;
            goto label_18af28;
        }
    }
    ctx->pc = 0x18AF10u;
    // 0x18af10: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18af10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18af14: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x18AF14u;
    SET_GPR_U32(ctx, 31, 0x18AF1Cu);
    ctx->pc = 0x18AF18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AF14u;
            // 0x18af18: 0x8c44ca00  lw          $a0, -0x3600($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953472)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AF1Cu; }
        if (ctx->pc != 0x18AF1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AF1Cu; }
        if (ctx->pc != 0x18AF1Cu) { return; }
    }
    ctx->pc = 0x18AF1Cu;
    // 0x18af1c: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x18af1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x18af20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18AF20u;
    {
        const bool branch_taken_0x18af20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AF20u;
            // 0x18af24: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18af20) {
            ctx->pc = 0x18AF2Cu;
            goto label_18af2c;
        }
    }
    ctx->pc = 0x18AF28u;
label_18af28:
    // 0x18af28: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x18af28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_18af2c:
    // 0x18af2c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x18af2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x18af30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18af30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18af34: 0x8c42ed58  lw          $v0, -0x12A8($v0)
    ctx->pc = 0x18af34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962520)));
    // 0x18af38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18af38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18af3c: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x18af3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    // 0x18af40: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x18af40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18af44: 0x3e00008  jr          $ra
    ctx->pc = 0x18AF44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18AF48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AF44u;
            // 0x18af48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18AF04u: goto label_18af04;
            case 0x18AF28u: goto label_18af28;
            case 0x18AF2Cu: goto label_18af2c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18AF4Cu;
    // 0x18af4c: 0x0  nop
    ctx->pc = 0x18af4cu;
    // NOP
}
