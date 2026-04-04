#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_292a88
// Address: 0x292a88 - 0x292b10
void entry_292a88_0x292b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_292a88_0x292b10");
#endif

    ctx->pc = 0x292a88u;

    // 0x292a88: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x292a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x292a8c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x292a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x292a90: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x292A90u;
    {
        const bool branch_taken_0x292a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x292A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292A90u;
            // 0x292a94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292a90) {
            ctx->pc = 0x292AA0u;
            goto label_292aa0;
        }
    }
    ctx->pc = 0x292A98u;
    // 0x292a98: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x292a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x292a9c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x292a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_292aa0:
    // 0x292aa0: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x292aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x292aa4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x292aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x292aa8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x292AA8u;
    {
        const bool branch_taken_0x292aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x292aa8) {
            ctx->pc = 0x292AB8u;
            goto label_292ab8;
        }
    }
    ctx->pc = 0x292AB0u;
    // 0x292ab0: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x292ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x292ab4: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x292ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_292ab8:
    // 0x292ab8: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x292ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x292abc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x292abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x292ac0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x292AC0u;
    {
        const bool branch_taken_0x292ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x292ac0) {
            ctx->pc = 0x292AD0u;
            goto label_292ad0;
        }
    }
    ctx->pc = 0x292AC8u;
    // 0x292ac8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x292ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x292acc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x292accu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_292ad0:
    // 0x292ad0: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x292ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x292ad4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x292ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x292ad8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x292AD8u;
    {
        const bool branch_taken_0x292ad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x292ad8) {
            ctx->pc = 0x292AE8u;
            goto label_292ae8;
        }
    }
    ctx->pc = 0x292AE0u;
    // 0x292ae0: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x292ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x292ae4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x292ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_292ae8:
    // 0x292ae8: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x292AE8u;
    {
        const bool branch_taken_0x292ae8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x292AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292AE8u;
            // 0x292aec: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292ae8) {
            ctx->pc = 0x292B00u;
            goto label_292b00;
        }
    }
    ctx->pc = 0x292AF0u;
    // 0x292af0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x292af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x292af4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x292af4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x292af8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x292AF8u;
    {
        const bool branch_taken_0x292af8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x292AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292AF8u;
            // 0x292afc: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292af8) {
            ctx->pc = 0x292B04u;
            goto label_292b04;
        }
    }
    ctx->pc = 0x292B00u;
label_292b00:
    // 0x292b00: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x292b00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_292b04:
    // 0x292b04: 0x3e00008  jr          $ra
    ctx->pc = 0x292B04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x292AA0u: goto label_292aa0;
            case 0x292AB8u: goto label_292ab8;
            case 0x292AD0u: goto label_292ad0;
            case 0x292AE8u: goto label_292ae8;
            case 0x292B00u: goto label_292b00;
            case 0x292B04u: goto label_292b04;
            default: break;
        }
        return;
    }
    ctx->pc = 0x292B0Cu;
    // 0x292b0c: 0x0  nop
    ctx->pc = 0x292b0cu;
    // NOP
}
