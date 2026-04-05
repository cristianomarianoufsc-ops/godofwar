#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_17af78
// Address: 0x17af78 - 0x17afe0
void entry_17af78_0x17afe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_17af78_0x17afe0");
#endif

    ctx->pc = 0x17af78u;

    // 0x17af78: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x17af78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x17af7c: 0x30a20200  andi        $v0, $a1, 0x200
    ctx->pc = 0x17af7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)512);
    // 0x17af80: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17AF80u;
    {
        const bool branch_taken_0x17af80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AF80u;
            // 0x17af84: 0x30a24000  andi        $v0, $a1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17af80) {
            ctx->pc = 0x17AF90u;
            goto label_17af90;
        }
    }
    ctx->pc = 0x17AF88u;
    // 0x17af88: 0x3e00008  jr          $ra
    ctx->pc = 0x17AF88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AF88u;
            // 0x17af8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17AF90u: goto label_17af90;
            case 0x17AFB8u: goto label_17afb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17AF90u;
label_17af90:
    // 0x17af90: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17AF90u;
    {
        const bool branch_taken_0x17af90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17AF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AF90u;
            // 0x17af94: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17af90) {
            ctx->pc = 0x17AFB8u;
            goto label_17afb8;
        }
    }
    ctx->pc = 0x17AF98u;
    // 0x17af98: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x17af98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17af9c: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x17af9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x17afa0: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x17afa0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x17afa4: 0x8c82be50  lw          $v0, -0x41B0($a0)
    ctx->pc = 0x17afa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294950480)));
    // 0x17afa8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17afa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17afac: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x17afacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x17afb0: 0x3e00008  jr          $ra
    ctx->pc = 0x17AFB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AFB0u;
            // 0x17afb4: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17AF90u: goto label_17af90;
            case 0x17AFB8u: goto label_17afb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17AFB8u;
label_17afb8:
    // 0x17afb8: 0x3e00008  jr          $ra
    ctx->pc = 0x17AFB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AFB8u;
            // 0x17afbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17AF90u: goto label_17af90;
            case 0x17AFB8u: goto label_17afb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17AFC0u;
    // 0x17afc0: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x17afc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x17afc4: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x17afc4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x17afc8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x17afc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x17afcc: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x17afccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x17afd0: 0x3442bfff  ori         $v0, $v0, 0xBFFF
    ctx->pc = 0x17afd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49151);
    // 0x17afd4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x17afd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x17afd8: 0x3e00008  jr          $ra
    ctx->pc = 0x17AFD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AFDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AFD8u;
            // 0x17afdc: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17AF90u: goto label_17af90;
            case 0x17AFB8u: goto label_17afb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17AFE0u;
}
