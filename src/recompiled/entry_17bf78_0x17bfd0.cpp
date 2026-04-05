#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_17bf78
// Address: 0x17bf78 - 0x17bfd0
void entry_17bf78_0x17bfd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_17bf78_0x17bfd0");
#endif

    ctx->pc = 0x17bf78u;

    // 0x17bf78: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x17bf78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x17bf7c: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x17bf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x17bf80: 0x431826  xor         $v1, $v0, $v1
    ctx->pc = 0x17bf80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x17bf84: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x17bf84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x17bf88: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x17bf88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x17bf8c: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x17bf8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x17bf90: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x17BF90u;
    {
        const bool branch_taken_0x17bf90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17bf90) {
            ctx->pc = 0x17BF94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17BF90u;
            // 0x17bf94: 0xac800034  sw          $zero, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17BFA8u;
            goto label_17bfa8;
        }
    }
    ctx->pc = 0x17BF98u;
    // 0x17bf98: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x17bf98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x17bf9c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17BF9Cu;
    {
        const bool branch_taken_0x17bf9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bf9c) {
            ctx->pc = 0x17BFB0u;
            goto label_17bfb0;
        }
    }
    ctx->pc = 0x17BFA4u;
    // 0x17bfa4: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x17bfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
label_17bfa8:
    // 0x17bfa8: 0x3e00008  jr          $ra
    ctx->pc = 0x17BFA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BFACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BFA8u;
            // 0x17bfac: 0xac800030  sw          $zero, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17BFA8u: goto label_17bfa8;
            case 0x17BFB0u: goto label_17bfb0;
            case 0x17BFC8u: goto label_17bfc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17BFB0u;
label_17bfb0:
    // 0x17bfb0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x17BFB0u;
    {
        const bool branch_taken_0x17bfb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bfb0) {
            ctx->pc = 0x17BFC8u;
            goto label_17bfc8;
        }
    }
    ctx->pc = 0x17BFB8u;
    // 0x17bfb8: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x17bfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x17bfbc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x17bfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x17bfc0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17bfc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17bfc4: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x17bfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
label_17bfc8:
    // 0x17bfc8: 0x3e00008  jr          $ra
    ctx->pc = 0x17BFC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17BFA8u: goto label_17bfa8;
            case 0x17BFB0u: goto label_17bfb0;
            case 0x17BFC8u: goto label_17bfc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17BFD0u;
}
