#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2271b8
// Address: 0x2271b8 - 0x227218
void entry_2271b8_0x227218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2271b8_0x227218");
#endif

    ctx->pc = 0x2271b8u;

    // 0x2271b8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2271b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2271bc: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2271BCu;
    {
        const bool branch_taken_0x2271bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2271C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2271BCu;
            // 0x2271c0: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2271bc) {
            ctx->pc = 0x227204u;
            goto label_227204;
        }
    }
    ctx->pc = 0x2271C4u;
    // 0x2271c4: 0x8c42ecd0  lw          $v0, -0x1330($v0)
    ctx->pc = 0x2271c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962384)));
    // 0x2271c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2271c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2271cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2271ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2271d0: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x2271d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x2271d4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2271D4u;
    {
        const bool branch_taken_0x2271d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2271D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2271D4u;
            // 0x2271d8: 0x2462ffec  addiu       $v0, $v1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2271d4) {
            ctx->pc = 0x227204u;
            goto label_227204;
        }
    }
    ctx->pc = 0x2271DCu;
    // 0x2271dc: 0x0  nop
    ctx->pc = 0x2271dcu;
    // NOP
label_2271e0:
    // 0x2271e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2271e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2271e4: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x2271e4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x2271e8: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x2271e8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2271ec: 0x2c42000b  sltiu       $v0, $v0, 0xB
    ctx->pc = 0x2271ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x2271f0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2271F0u;
    {
        const bool branch_taken_0x2271f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2271f0) {
            ctx->pc = 0x2271F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2271F0u;
            // 0x2271f4: 0xe48c00b4  swc1        $f12, 0xB4($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 180), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2271F8u;
            goto label_2271f8;
        }
    }
    ctx->pc = 0x2271F8u;
label_2271f8:
    // 0x2271f8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2271f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2271fc: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2271FCu;
    {
        const bool branch_taken_0x2271fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x227200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2271FCu;
            // 0x227200: 0x2462ffec  addiu       $v0, $v1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2271fc) {
            ctx->pc = 0x2271E0u;
            runtime->cooperativeGuestYield();
            goto label_2271e0;
        }
    }
    ctx->pc = 0x227204u;
label_227204:
    // 0x227204: 0x3e00008  jr          $ra
    ctx->pc = 0x227204u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2271E0u: goto label_2271e0;
            case 0x2271F8u: goto label_2271f8;
            case 0x227204u: goto label_227204;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22720Cu;
    // 0x22720c: 0x0  nop
    ctx->pc = 0x22720cu;
    // NOP
    // 0x227210: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x227210u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227214: 0x0  nop
    ctx->pc = 0x227214u;
    // NOP
}
