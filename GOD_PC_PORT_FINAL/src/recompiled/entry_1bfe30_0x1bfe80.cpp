#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1bfe30
// Address: 0x1bfe30 - 0x1bfe80
void entry_1bfe30_0x1bfe80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1bfe30_0x1bfe80");
#endif

    ctx->pc = 0x1bfe30u;

    // 0x1bfe30: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bfe30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bfe34: 0x8c42ecd0  lw          $v0, -0x1330($v0)
    ctx->pc = 0x1bfe34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962384)));
    // 0x1bfe38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bfe38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bfe3c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1bfe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1bfe40: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x1bfe40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1bfe44: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1BFE44u;
    {
        const bool branch_taken_0x1bfe44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFE44u;
            // 0x1bfe48: 0x2462ffec  addiu       $v0, $v1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfe44) {
            ctx->pc = 0x1BFE74u;
            goto label_1bfe74;
        }
    }
    ctx->pc = 0x1BFE4Cu;
    // 0x1bfe4c: 0x0  nop
    ctx->pc = 0x1bfe4cu;
    // NOP
label_1bfe50:
    // 0x1bfe50: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1bfe50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfe54: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x1bfe54u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x1bfe58: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x1bfe58u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1bfe5c: 0x2c42000b  sltiu       $v0, $v0, 0xB
    ctx->pc = 0x1bfe5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x1bfe60: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1BFE60u;
    {
        const bool branch_taken_0x1bfe60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bfe60) {
            ctx->pc = 0x1BFE64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFE60u;
            // 0x1bfe64: 0xe48c00b4  swc1        $f12, 0xB4($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 180), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BFE68u;
            goto label_1bfe68;
        }
    }
    ctx->pc = 0x1BFE68u;
label_1bfe68:
    // 0x1bfe68: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1bfe68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bfe6c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1BFE6Cu;
    {
        const bool branch_taken_0x1bfe6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BFE70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFE6Cu;
            // 0x1bfe70: 0x2462ffec  addiu       $v0, $v1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfe6c) {
            ctx->pc = 0x1BFE50u;
            runtime->cooperativeGuestYield();
            goto label_1bfe50;
        }
    }
    ctx->pc = 0x1BFE74u;
label_1bfe74:
    // 0x1bfe74: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFE74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BFE50u: goto label_1bfe50;
            case 0x1BFE68u: goto label_1bfe68;
            case 0x1BFE74u: goto label_1bfe74;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BFE7Cu;
    // 0x1bfe7c: 0x0  nop
    ctx->pc = 0x1bfe7cu;
    // NOP
}
