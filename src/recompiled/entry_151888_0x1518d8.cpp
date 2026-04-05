#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_151888
// Address: 0x151888 - 0x1518d8
void entry_151888_0x1518d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_151888_0x1518d8");
#endif

    ctx->pc = 0x151888u;

    // 0x151888: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x151888u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x15188c: 0x704510a8  pceqw       $v0, $v0, $a1
    ctx->pc = 0x15188cu;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x151890: 0x700215c8  ppach       $v0, $zero, $v0
    ctx->pc = 0x151890u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x151894: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x151894u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x151898: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x151898u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x15189c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x15189cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1518a0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1518a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1518a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1518A4u;
    {
        const bool branch_taken_0x1518a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1518A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1518A4u;
            // 0x1518a8: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1518a4) {
            ctx->pc = 0x1518BCu;
            goto label_1518bc;
        }
    }
    ctx->pc = 0x1518ACu;
    // 0x1518ac: 0x7c850010  sq          $a1, 0x10($a0)
    ctx->pc = 0x1518acu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 5));
    // 0x1518b0: 0x8c43c084  lw          $v1, -0x3F7C($v0)
    ctx->pc = 0x1518b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951044)));
    // 0x1518b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1518b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1518b8: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x1518b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
label_1518bc:
    // 0x1518bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1518BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1518BCu: goto label_1518bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1518C4u;
    // 0x1518c4: 0x0  nop
    ctx->pc = 0x1518c4u;
    // NOP
    // 0x1518c8: 0x0  nop
    ctx->pc = 0x1518c8u;
    // NOP
    // 0x1518cc: 0x0  nop
    ctx->pc = 0x1518ccu;
    // NOP
    // 0x1518d0: 0x0  nop
    ctx->pc = 0x1518d0u;
    // NOP
    // 0x1518d4: 0x0  nop
    ctx->pc = 0x1518d4u;
    // NOP
}
