#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_292b10
// Address: 0x292b10 - 0x292bd0
void entry_292b10_0x292bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_292b10_0x292bd0");
#endif

    ctx->pc = 0x292b10u;

    // 0x292b10: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x292b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x292b14: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x292b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x292b18: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x292B18u;
    {
        const bool branch_taken_0x292b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x292B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292B18u;
            // 0x292b1c: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x292b18) {
            ctx->pc = 0x292B54u;
            goto label_292b54;
        }
    }
    ctx->pc = 0x292B20u;
    // 0x292b20: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x292B20u;
    {
        const bool branch_taken_0x292b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x292B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292B20u;
            // 0x292b24: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x292b20) {
            ctx->pc = 0x292B30u;
            goto label_292b30;
        }
    }
    ctx->pc = 0x292B28u;
    // 0x292b28: 0x3e00008  jr          $ra
    ctx->pc = 0x292B28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292B28u;
            // 0x292b2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x292B30u: goto label_292b30;
            case 0x292B48u: goto label_292b48;
            case 0x292B54u: goto label_292b54;
            case 0x292B68u: goto label_292b68;
            case 0x292B80u: goto label_292b80;
            case 0x292B94u: goto label_292b94;
            case 0x292BA8u: goto label_292ba8;
            case 0x292BC4u: goto label_292bc4;
            case 0x292BC8u: goto label_292bc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x292B30u;
label_292b30:
    // 0x292b30: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x292B30u;
    {
        const bool branch_taken_0x292b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292b30) {
            ctx->pc = 0x292B34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x292B30u;
            // 0x292b34: 0x31882  srl         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x292B48u;
            goto label_292b48;
        }
    }
    ctx->pc = 0x292B38u;
    // 0x292b38: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x292b38u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x292b3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x292b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x292b40: 0x3e00008  jr          $ra
    ctx->pc = 0x292B40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292B40u;
            // 0x292b44: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x292B30u: goto label_292b30;
            case 0x292B48u: goto label_292b48;
            case 0x292B54u: goto label_292b54;
            case 0x292B68u: goto label_292b68;
            case 0x292B80u: goto label_292b80;
            case 0x292B94u: goto label_292b94;
            case 0x292BA8u: goto label_292ba8;
            case 0x292BC4u: goto label_292bc4;
            case 0x292BC8u: goto label_292bc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x292B48u;
label_292b48:
    // 0x292b48: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x292b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x292b4c: 0x3e00008  jr          $ra
    ctx->pc = 0x292B4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292B4Cu;
            // 0x292b50: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x292B30u: goto label_292b30;
            case 0x292B48u: goto label_292b48;
            case 0x292B54u: goto label_292b54;
            case 0x292B68u: goto label_292b68;
            case 0x292B80u: goto label_292b80;
            case 0x292B94u: goto label_292b94;
            case 0x292BA8u: goto label_292ba8;
            case 0x292BC4u: goto label_292bc4;
            case 0x292BC8u: goto label_292bc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x292B54u;
label_292b54:
    // 0x292b54: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x292b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x292b58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x292B58u;
    {
        const bool branch_taken_0x292b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x292B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292B58u;
            // 0x292b5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292b58) {
            ctx->pc = 0x292B68u;
            goto label_292b68;
        }
    }
    ctx->pc = 0x292B60u;
    // 0x292b60: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x292b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x292b64: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x292b64u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
label_292b68:
    // 0x292b68: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x292b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x292b6c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x292B6Cu;
    {
        const bool branch_taken_0x292b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x292B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292B6Cu;
            // 0x292b70: 0x3062000f  andi        $v0, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x292b6c) {
            ctx->pc = 0x292B80u;
            goto label_292b80;
        }
    }
    ctx->pc = 0x292B74u;
    // 0x292b74: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x292b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x292b78: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x292b78u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x292b7c: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x292b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_292b80:
    // 0x292b80: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x292B80u;
    {
        const bool branch_taken_0x292b80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x292B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292B80u;
            // 0x292b84: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x292b80) {
            ctx->pc = 0x292B94u;
            goto label_292b94;
        }
    }
    ctx->pc = 0x292B88u;
    // 0x292b88: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x292b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x292b8c: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x292b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x292b90: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x292b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_292b94:
    // 0x292b94: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x292B94u;
    {
        const bool branch_taken_0x292b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x292B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292B94u;
            // 0x292b98: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x292b94) {
            ctx->pc = 0x292BA8u;
            goto label_292ba8;
        }
    }
    ctx->pc = 0x292B9Cu;
    // 0x292b9c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x292b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x292ba0: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x292ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x292ba4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x292ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_292ba8:
    // 0x292ba8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x292BA8u;
    {
        const bool branch_taken_0x292ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x292ba8) {
            ctx->pc = 0x292BACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x292BA8u;
            // 0x292bac: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x292BC8u;
            goto label_292bc8;
        }
    }
    ctx->pc = 0x292BB0u;
    // 0x292bb0: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x292bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x292bb4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x292BB4u;
    {
        const bool branch_taken_0x292bb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x292BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292BB4u;
            // 0x292bb8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292bb4) {
            ctx->pc = 0x292BC4u;
            goto label_292bc4;
        }
    }
    ctx->pc = 0x292BBCu;
    // 0x292bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x292BBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292BBCu;
            // 0x292bc0: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x292B30u: goto label_292b30;
            case 0x292B48u: goto label_292b48;
            case 0x292B54u: goto label_292b54;
            case 0x292B68u: goto label_292b68;
            case 0x292B80u: goto label_292b80;
            case 0x292B94u: goto label_292b94;
            case 0x292BA8u: goto label_292ba8;
            case 0x292BC4u: goto label_292bc4;
            case 0x292BC8u: goto label_292bc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x292BC4u;
label_292bc4:
    // 0x292bc4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x292bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_292bc8:
    // 0x292bc8: 0x3e00008  jr          $ra
    ctx->pc = 0x292BC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292BC8u;
            // 0x292bcc: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x292B30u: goto label_292b30;
            case 0x292B48u: goto label_292b48;
            case 0x292B54u: goto label_292b54;
            case 0x292B68u: goto label_292b68;
            case 0x292B80u: goto label_292b80;
            case 0x292B94u: goto label_292b94;
            case 0x292BA8u: goto label_292ba8;
            case 0x292BC4u: goto label_292bc4;
            case 0x292BC8u: goto label_292bc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x292BD0u;
}
