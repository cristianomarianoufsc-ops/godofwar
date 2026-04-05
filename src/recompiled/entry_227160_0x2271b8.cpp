#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_227160
// Address: 0x227160 - 0x2271b8
void entry_227160_0x2271b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_227160_0x2271b8");
#endif

    ctx->pc = 0x227160u;

    // 0x227160: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x227160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x227164: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x227164u;
    {
        const bool branch_taken_0x227164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x227168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227164u;
            // 0x227168: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227164) {
            ctx->pc = 0x2271ACu;
            goto label_2271ac;
        }
    }
    ctx->pc = 0x22716Cu;
    // 0x22716c: 0x8c42ecd0  lw          $v0, -0x1330($v0)
    ctx->pc = 0x22716cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962384)));
    // 0x227170: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x227170u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x227174: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x227174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x227178: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x227178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x22717c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x22717Cu;
    {
        const bool branch_taken_0x22717c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x227180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22717Cu;
            // 0x227180: 0x2462ffec  addiu       $v0, $v1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22717c) {
            ctx->pc = 0x2271ACu;
            goto label_2271ac;
        }
    }
    ctx->pc = 0x227184u;
    // 0x227184: 0x0  nop
    ctx->pc = 0x227184u;
    // NOP
label_227188:
    // 0x227188: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x227188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22718c: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x22718cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x227190: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x227190u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x227194: 0x2c42000b  sltiu       $v0, $v0, 0xB
    ctx->pc = 0x227194u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x227198: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x227198u;
    {
        const bool branch_taken_0x227198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x227198) {
            ctx->pc = 0x22719Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x227198u;
            // 0x22719c: 0x7c850090  sq          $a1, 0x90($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 144), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2271A0u;
            goto label_2271a0;
        }
    }
    ctx->pc = 0x2271A0u;
label_2271a0:
    // 0x2271a0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2271a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2271a4: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2271A4u;
    {
        const bool branch_taken_0x2271a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2271A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2271A4u;
            // 0x2271a8: 0x2462ffec  addiu       $v0, $v1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2271a4) {
            ctx->pc = 0x227188u;
            runtime->cooperativeGuestYield();
            goto label_227188;
        }
    }
    ctx->pc = 0x2271ACu;
label_2271ac:
    // 0x2271ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2271ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x227188u: goto label_227188;
            case 0x2271A0u: goto label_2271a0;
            case 0x2271ACu: goto label_2271ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2271B4u;
    // 0x2271b4: 0x0  nop
    ctx->pc = 0x2271b4u;
    // NOP
}
