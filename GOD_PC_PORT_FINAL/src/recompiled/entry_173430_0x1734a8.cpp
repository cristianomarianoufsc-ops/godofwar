#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_173430
// Address: 0x173430 - 0x1734a8
void entry_173430_0x1734a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_173430_0x1734a8");
#endif

    ctx->pc = 0x173430u;

    // 0x173430: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x173430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x173434: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x173434u;
    {
        const bool branch_taken_0x173434 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x173438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173434u;
            // 0x173438: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173434) {
            ctx->pc = 0x173478u;
            goto label_173478;
        }
    }
    ctx->pc = 0x17343Cu;
    // 0x17343c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x17343cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x173440: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x173440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x173444: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x173444u;
    {
        const bool branch_taken_0x173444 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x173448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173444u;
            // 0x173448: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173444) {
            ctx->pc = 0x173474u;
            goto label_173474;
        }
    }
    ctx->pc = 0x17344Cu;
    // 0x17344c: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x17344cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x173450: 0x8c63be50  lw          $v1, -0x41B0($v1)
    ctx->pc = 0x173450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950480)));
    // 0x173454: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x173454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x173458: 0x42102  srl         $a0, $a0, 4
    ctx->pc = 0x173458u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x17345c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17345cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x173460: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x173460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x173464: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x173464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x173468: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x173468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x17346c: 0x3e00008  jr          $ra
    ctx->pc = 0x17346Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17346Cu;
            // 0x173470: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173474u: goto label_173474;
            case 0x173478u: goto label_173478;
            default: break;
        }
        return;
    }
    ctx->pc = 0x173474u;
label_173474:
    // 0x173474: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x173474u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173478:
    // 0x173478: 0x3e00008  jr          $ra
    ctx->pc = 0x173478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173474u: goto label_173474;
            case 0x173478u: goto label_173478;
            default: break;
        }
        return;
    }
    ctx->pc = 0x173480u;
    // 0x173480: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x173480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x173484: 0x3e00008  jr          $ra
    ctx->pc = 0x173484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173484u;
            // 0x173488: 0xac44c3a8  sw          $a0, -0x3C58($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294951848), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173474u: goto label_173474;
            case 0x173478u: goto label_173478;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17348Cu;
    // 0x17348c: 0x0  nop
    ctx->pc = 0x17348cu;
    // NOP
    // 0x173490: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x173490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x173494: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x173494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x173498: 0xac44c3b0  sw          $a0, -0x3C50($v0)
    ctx->pc = 0x173498u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294951856), GPR_U32(ctx, 4));
    // 0x17349c: 0x3e00008  jr          $ra
    ctx->pc = 0x17349Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1734A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17349Cu;
            // 0x1734a0: 0xac60c3a8  sw          $zero, -0x3C58($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294951848), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173474u: goto label_173474;
            case 0x173478u: goto label_173478;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1734A4u;
    // 0x1734a4: 0x0  nop
    ctx->pc = 0x1734a4u;
    // NOP
}
