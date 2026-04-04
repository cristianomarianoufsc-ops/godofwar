#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_17bf20
// Address: 0x17bf20 - 0x17bf78
void entry_17bf20_0x17bf78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_17bf20_0x17bf78");
#endif

    ctx->pc = 0x17bf20u;

    // 0x17bf20: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x17bf20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x17bf24: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17BF24u;
    {
        const bool branch_taken_0x17bf24 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x17BF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BF24u;
            // 0x17bf28: 0x30c600ff  andi        $a2, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bf24) {
            ctx->pc = 0x17BF38u;
            goto label_17bf38;
        }
    }
    ctx->pc = 0x17BF2Cu;
    // 0x17bf2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17bf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17bf30: 0x46300b  movn        $a2, $v0, $a2
    ctx->pc = 0x17bf30u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x17bf34: 0x0  nop
    ctx->pc = 0x17bf34u;
    // NOP
label_17bf38:
    // 0x17bf38: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x17bf38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x17bf3c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x17BF3Cu;
    {
        const bool branch_taken_0x17bf3c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BF40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BF3Cu;
            // 0x17bf40: 0xa0460010  sb          $a2, 0x10($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bf3c) {
            ctx->pc = 0x17BF5Cu;
            goto label_17bf5c;
        }
    }
    ctx->pc = 0x17BF44u;
    // 0x17bf44: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x17bf44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x17bf48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17bf48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17bf4c: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x17bf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x17bf50: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x17bf50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x17bf54: 0x3e00008  jr          $ra
    ctx->pc = 0x17BF54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BF54u;
            // 0x17bf58: 0xac830028  sw          $v1, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17BF38u: goto label_17bf38;
            case 0x17BF5Cu: goto label_17bf5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17BF5Cu;
label_17bf5c:
    // 0x17bf5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17bf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17bf60: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x17bf60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x17bf64: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x17bf64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x17bf68: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x17bf68u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x17bf6c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x17bf6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x17bf70: 0x3e00008  jr          $ra
    ctx->pc = 0x17BF70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BF70u;
            // 0x17bf74: 0xac830028  sw          $v1, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17BF38u: goto label_17bf38;
            case 0x17BF5Cu: goto label_17bf5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17BF78u;
}
