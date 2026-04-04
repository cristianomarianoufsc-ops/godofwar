#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00170B98
// Address: 0x170b98 - 0x170c08
void sub_00170B98_0x170b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170B98_0x170b98");
#endif

    ctx->pc = 0x170b98u;

    // 0x170b98: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x170b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x170b9c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x170b9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x170ba0: 0x24840074  addiu       $a0, $a0, 0x74
    ctx->pc = 0x170ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 116));
    // 0x170ba4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x170ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x170ba8: 0x10440014  beq         $v0, $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x170BA8u;
    {
        const bool branch_taken_0x170ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x170BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170BA8u;
            // 0x170bac: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170ba8) {
            ctx->pc = 0x170BFCu;
            goto label_170bfc;
        }
    }
    ctx->pc = 0x170BB0u;
label_170bb0:
    // 0x170bb0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x170bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x170bb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x170bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170bb8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x170bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x170bbc: 0x2443fff0  addiu       $v1, $v0, -0x10
    ctx->pc = 0x170bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x170bc0: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x170bc0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x170bc4: 0x80a20018  lb          $v0, 0x18($a1)
    ctx->pc = 0x170bc4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x170bc8: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x170BC8u;
    {
        const bool branch_taken_0x170bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x170BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170BC8u;
            // 0x170bcc: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170bc8) {
            ctx->pc = 0x170BE0u;
            goto label_170be0;
        }
    }
    ctx->pc = 0x170BD0u;
    // 0x170bd0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x170BD0u;
    {
        const bool branch_taken_0x170bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170BD0u;
            // 0x170bd4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170bd0) {
            ctx->pc = 0x170BE0u;
            goto label_170be0;
        }
    }
    ctx->pc = 0x170BD8u;
    // 0x170bd8: 0xa0a20018  sb          $v0, 0x18($a1)
    ctx->pc = 0x170bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 24), (uint8_t)GPR_U32(ctx, 2));
    // 0x170bdc: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x170bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_170be0:
    // 0x170be0: 0x94a2001a  lhu         $v0, 0x1A($a1)
    ctx->pc = 0x170be0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 26)));
    // 0x170be4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x170be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x170be8: 0x3042dfff  andi        $v0, $v0, 0xDFFF
    ctx->pc = 0x170be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57343);
    // 0x170bec: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x170becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170bf0: 0xa4a2001a  sh          $v0, 0x1A($a1)
    ctx->pc = 0x170bf0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 26), (uint16_t)GPR_U32(ctx, 2));
    // 0x170bf4: 0x1483ffee  bne         $a0, $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x170BF4u;
    {
        const bool branch_taken_0x170bf4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x170BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170BF4u;
            // 0x170bf8: 0xafa40004  sw          $a0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170bf4) {
            ctx->pc = 0x170BB0u;
            runtime->cooperativeGuestYield();
            goto label_170bb0;
        }
    }
    ctx->pc = 0x170BFCu;
label_170bfc:
    // 0x170bfc: 0x3e00008  jr          $ra
    ctx->pc = 0x170BFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170BFCu;
            // 0x170c00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170BB0u: goto label_170bb0;
            case 0x170BE0u: goto label_170be0;
            case 0x170BFCu: goto label_170bfc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x170C04u;
    // 0x170c04: 0x0  nop
    ctx->pc = 0x170c04u;
    // NOP
}
