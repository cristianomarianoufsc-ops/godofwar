#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00201c40
// Address: 0x201c40 - 0x201cc0
void FUN_00201c40_0x201c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00201c40_0x201c40");
#endif

    ctx->pc = 0x201c40u;

    // 0x201c40: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x201c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x201c44: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201c44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x201c48: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x201c48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x201c4c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x201c4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201c50: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x201c50u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x201c54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x201c54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201c58: 0x94440002  lhu         $a0, 0x2($v0)
    ctx->pc = 0x201c58u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x201c5c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x201c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x201c60: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x201c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x201c64: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x201c64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x201c68: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x201C68u;
    {
        const bool branch_taken_0x201c68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x201C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201C68u;
            // 0x201c6c: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201c68) {
            ctx->pc = 0x201CB4u;
            goto label_201cb4;
        }
    }
    ctx->pc = 0x201C70u;
    // 0x201c70: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x201c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x201c74: 0x0  nop
    ctx->pc = 0x201c74u;
    // NOP
label_201c78:
    // 0x201c78: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x201c78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x201c7c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x201c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x201c80: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x201c80u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x201c84: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x201C84u;
    {
        const bool branch_taken_0x201c84 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x201c84) {
            ctx->pc = 0x201C88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x201C84u;
            // 0x201c88: 0xa2102a  slt         $v0, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x201C98u;
            goto label_201c98;
        }
    }
    ctx->pc = 0x201C8Cu;
    // 0x201c8c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x201c8cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x201c90: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x201C90u;
    {
        const bool branch_taken_0x201c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201C90u;
            // 0x201c94: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201c90) {
            ctx->pc = 0x201CB8u;
            goto label_201cb8;
        }
    }
    ctx->pc = 0x201C98u;
label_201c98:
    // 0x201c98: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x201C98u;
    {
        const bool branch_taken_0x201c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201C98u;
            // 0x201c9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201c98) {
            ctx->pc = 0x201CB8u;
            goto label_201cb8;
        }
    }
    ctx->pc = 0x201CA0u;
    // 0x201ca0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x201ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x201ca4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x201ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x201ca8: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x201ca8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x201cac: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x201CACu;
    {
        const bool branch_taken_0x201cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x201cac) {
            ctx->pc = 0x201CB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x201CACu;
            // 0x201cb0: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x201C78u;
            runtime->cooperativeGuestYield();
            goto label_201c78;
        }
    }
    ctx->pc = 0x201CB4u;
label_201cb4:
    // 0x201cb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x201cb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_201cb8:
    // 0x201cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x201CB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201CB8u;
            // 0x201cbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x201C78u: goto label_201c78;
            case 0x201C98u: goto label_201c98;
            case 0x201CB4u: goto label_201cb4;
            case 0x201CB8u: goto label_201cb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x201CC0u;
}
