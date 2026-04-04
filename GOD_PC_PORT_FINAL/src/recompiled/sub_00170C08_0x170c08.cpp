#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00170C08
// Address: 0x170c08 - 0x170c90
void sub_00170C08_0x170c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170C08_0x170c08");
#endif

    ctx->pc = 0x170c08u;

    // 0x170c08: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x170c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x170c0c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x170c0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x170c10: 0x24840074  addiu       $a0, $a0, 0x74
    ctx->pc = 0x170c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 116));
    // 0x170c14: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x170c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x170c18: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x170c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x170c1c: 0x10440019  beq         $v0, $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x170C1Cu;
    {
        const bool branch_taken_0x170c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x170C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170C1Cu;
            // 0x170c20: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170c1c) {
            ctx->pc = 0x170C84u;
            goto label_170c84;
        }
    }
    ctx->pc = 0x170C24u;
    // 0x170c24: 0x0  nop
    ctx->pc = 0x170c24u;
    // NOP
label_170c28:
    // 0x170c28: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x170c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x170c2c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x170c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x170c30: 0x2462fff0  addiu       $v0, $v1, -0x10
    ctx->pc = 0x170c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x170c34: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x170c34u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x170c38: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x170c38u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170c3c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x170c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x170c40: 0x1482000c  bne         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x170C40u;
    {
        const bool branch_taken_0x170c40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x170C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170C40u;
            // 0x170c44: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170c40) {
            ctx->pc = 0x170C74u;
            goto label_170c74;
        }
    }
    ctx->pc = 0x170C48u;
    // 0x170c48: 0x80640018  lb          $a0, 0x18($v1)
    ctx->pc = 0x170c48u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x170c4c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x170c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x170c50: 0x50820005  beql        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x170C50u;
    {
        const bool branch_taken_0x170c50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x170c50) {
            ctx->pc = 0x170C54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x170C50u;
            // 0x170c54: 0x9462001a  lhu         $v0, 0x1A($v1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 26)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x170C68u;
            goto label_170c68;
        }
    }
    ctx->pc = 0x170C58u;
    // 0x170c58: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x170C58u;
    {
        const bool branch_taken_0x170c58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x170C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170C58u;
            // 0x170c5c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170c58) {
            ctx->pc = 0x170C64u;
            goto label_170c64;
        }
    }
    ctx->pc = 0x170C60u;
    // 0x170c60: 0xa0620018  sb          $v0, 0x18($v1)
    ctx->pc = 0x170c60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 24), (uint8_t)GPR_U32(ctx, 2));
label_170c64:
    // 0x170c64: 0x9462001a  lhu         $v0, 0x1A($v1)
    ctx->pc = 0x170c64u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 26)));
label_170c68:
    // 0x170c68: 0x3042dfff  andi        $v0, $v0, 0xDFFF
    ctx->pc = 0x170c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57343);
    // 0x170c6c: 0xa462001a  sh          $v0, 0x1A($v1)
    ctx->pc = 0x170c6cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 26), (uint16_t)GPR_U32(ctx, 2));
    // 0x170c70: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x170c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_170c74:
    // 0x170c74: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x170c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170c78: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x170c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x170c7c: 0x1443ffea  bne         $v0, $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x170C7Cu;
    {
        const bool branch_taken_0x170c7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x170C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170C7Cu;
            // 0x170c80: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170c7c) {
            ctx->pc = 0x170C28u;
            runtime->cooperativeGuestYield();
            goto label_170c28;
        }
    }
    ctx->pc = 0x170C84u;
label_170c84:
    // 0x170c84: 0x3e00008  jr          $ra
    ctx->pc = 0x170C84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170C84u;
            // 0x170c88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170C28u: goto label_170c28;
            case 0x170C64u: goto label_170c64;
            case 0x170C68u: goto label_170c68;
            case 0x170C74u: goto label_170c74;
            case 0x170C84u: goto label_170c84;
            default: break;
        }
        return;
    }
    ctx->pc = 0x170C8Cu;
    // 0x170c8c: 0x0  nop
    ctx->pc = 0x170c8cu;
    // NOP
}
