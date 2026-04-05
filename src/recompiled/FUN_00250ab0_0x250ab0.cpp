#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00250ab0
// Address: 0x250ab0 - 0x250b88
void FUN_00250ab0_0x250ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00250ab0_0x250ab0");
#endif

    ctx->pc = 0x250ab0u;

    // 0x250ab0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x250ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x250ab4: 0x24840024  addiu       $a0, $a0, 0x24
    ctx->pc = 0x250ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x250ab8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x250ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x250abc: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x250abcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x250ac0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x250ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250ac4: 0x0  nop
    ctx->pc = 0x250ac4u;
    // NOP
label_250ac8:
    // 0x250ac8: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x250ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x250acc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x250accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x250ad0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x250ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x250ad4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x250ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x250ad8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x250ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x250adc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x250ADCu;
    {
        const bool branch_taken_0x250adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x250adc) {
            ctx->pc = 0x250AE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x250ADCu;
            // 0x250ae0: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x250AF8u;
            goto label_250af8;
        }
    }
    ctx->pc = 0x250AE4u;
    // 0x250ae4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x250ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x250ae8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x250AE8u;
    {
        const bool branch_taken_0x250ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x250ae8) {
            ctx->pc = 0x250AECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x250AE8u;
            // 0x250aec: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x250AF8u;
            goto label_250af8;
        }
    }
    ctx->pc = 0x250AF0u;
    // 0x250af0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x250AF0u;
    {
        const bool branch_taken_0x250af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250AF0u;
            // 0x250af4: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250af0) {
            ctx->pc = 0x250B70u;
            goto label_250b70;
        }
    }
    ctx->pc = 0x250AF8u;
label_250af8:
    // 0x250af8: 0x2843000e  slti        $v1, $v0, 0xE
    ctx->pc = 0x250af8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x250afc: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x250AFCu;
    {
        const bool branch_taken_0x250afc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x250B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250AFCu;
            // 0x250b00: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250afc) {
            ctx->pc = 0x250AC8u;
            runtime->cooperativeGuestYield();
            goto label_250ac8;
        }
    }
    ctx->pc = 0x250B04u;
    // 0x250b04: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x250B04u;
    {
        const bool branch_taken_0x250b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250B04u;
            // 0x250b08: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250b04) {
            ctx->pc = 0x250B74u;
            goto label_250b74;
        }
    }
    ctx->pc = 0x250B0Cu;
    // 0x250b0c: 0x0  nop
    ctx->pc = 0x250b0cu;
    // NOP
label_250b10:
    // 0x250b10: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x250b10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250b14: 0x2443fff8  addiu       $v1, $v0, -0x8
    ctx->pc = 0x250b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x250b18: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x250b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x250b1c: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x250b1cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x250b20: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x250b20u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x250b24: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x250b24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x250b28: 0x3042ffef  andi        $v0, $v0, 0xFFEF
    ctx->pc = 0x250b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65519);
    // 0x250b2c: 0x14800010  bnez        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x250B2Cu;
    {
        const bool branch_taken_0x250b2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x250B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250B2Cu;
            // 0x250b30: 0xa4620004  sh          $v0, 0x4($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250b2c) {
            ctx->pc = 0x250B70u;
            goto label_250b70;
        }
    }
    ctx->pc = 0x250B34u;
    // 0x250b34: 0x0  nop
    ctx->pc = 0x250b34u;
    // NOP
label_250b38:
    // 0x250b38: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x250b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_250b3c:
    // 0x250b3c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x250b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x250b40: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x250b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x250b44: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x250B44u;
    {
        const bool branch_taken_0x250b44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x250B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250B44u;
            // 0x250b48: 0xaca40004  sw          $a0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250b44) {
            ctx->pc = 0x250B70u;
            goto label_250b70;
        }
    }
    ctx->pc = 0x250B4Cu;
    // 0x250b4c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x250b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x250b50: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x250b50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x250b54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x250b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x250b58: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x250b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x250b5c: 0x5040fff7  beql        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x250B5Cu;
    {
        const bool branch_taken_0x250b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x250b5c) {
            ctx->pc = 0x250B60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x250B5Cu;
            // 0x250b60: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x250B3Cu;
            runtime->cooperativeGuestYield();
            goto label_250b3c;
        }
    }
    ctx->pc = 0x250B64u;
    // 0x250b64: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x250b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x250b68: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x250B68u;
    {
        const bool branch_taken_0x250b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250B68u;
            // 0x250b6c: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250b68) {
            ctx->pc = 0x250B38u;
            runtime->cooperativeGuestYield();
            goto label_250b38;
        }
    }
    ctx->pc = 0x250B70u;
label_250b70:
    // 0x250b70: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x250b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_250b74:
    // 0x250b74: 0x2842000e  slti        $v0, $v0, 0xE
    ctx->pc = 0x250b74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x250b78: 0x5440ffe5  bnel        $v0, $zero, . + 4 + (-0x1B << 2)
    ctx->pc = 0x250B78u;
    {
        const bool branch_taken_0x250b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x250b78) {
            ctx->pc = 0x250B7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x250B78u;
            // 0x250b7c: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x250B10u;
            runtime->cooperativeGuestYield();
            goto label_250b10;
        }
    }
    ctx->pc = 0x250B80u;
    // 0x250b80: 0x3e00008  jr          $ra
    ctx->pc = 0x250B80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250B80u;
            // 0x250b84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x250AC8u: goto label_250ac8;
            case 0x250AF8u: goto label_250af8;
            case 0x250B10u: goto label_250b10;
            case 0x250B38u: goto label_250b38;
            case 0x250B3Cu: goto label_250b3c;
            case 0x250B70u: goto label_250b70;
            case 0x250B74u: goto label_250b74;
            default: break;
        }
        return;
    }
    ctx->pc = 0x250B88u;
}
