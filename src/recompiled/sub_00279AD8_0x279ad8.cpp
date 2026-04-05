#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00279AD8
// Address: 0x279ad8 - 0x279df0
void sub_00279AD8_0x279ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279AD8_0x279ad8");
#endif

    ctx->pc = 0x279ad8u;

    // 0x279ad8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x279ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x279adc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x279adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279ae0: 0x148000a2  bnez        $a0, . + 4 + (0xA2 << 2)
    ctx->pc = 0x279AE0u;
    {
        const bool branch_taken_0x279ae0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x279AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279AE0u;
            // 0x279ae4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279ae0) {
            ctx->pc = 0x279D6Cu;
            goto label_279d6c;
        }
    }
    ctx->pc = 0x279AE8u;
    // 0x279ae8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x279ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x279aec: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x279aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x279af0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x279af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279af4: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x279af4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x279af8: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x279AF8u;
    {
        const bool branch_taken_0x279af8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x279AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279AF8u;
            // 0x279afc: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279af8) {
            ctx->pc = 0x279B2Cu;
            goto label_279b2c;
        }
    }
    ctx->pc = 0x279B00u;
    // 0x279b00: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x279b00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x279b04: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x279b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x279b08: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x279b08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279b0c: 0x0  nop
    ctx->pc = 0x279b0cu;
    // NOP
label_279b10:
    // 0x279b10: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x279b10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x279b14: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x279B14u;
    {
        const bool branch_taken_0x279b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279B14u;
            // 0x279b18: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279b14) {
            ctx->pc = 0x279C34u;
            goto label_279c34;
        }
    }
    ctx->pc = 0x279B1Cu;
    // 0x279b1c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x279b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x279b20: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x279b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x279b24: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x279B24u;
    {
        const bool branch_taken_0x279b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279B24u;
            // 0x279b28: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279b24) {
            ctx->pc = 0x279B10u;
            runtime->cooperativeGuestYield();
            goto label_279b10;
        }
    }
    ctx->pc = 0x279B2Cu;
label_279b2c:
    // 0x279b2c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x279b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x279b30: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x279b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x279b34: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x279b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279b38: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x279b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x279b3c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x279B3Cu;
    {
        const bool branch_taken_0x279b3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x279B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279B3Cu;
            // 0x279b40: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279b3c) {
            ctx->pc = 0x279B6Cu;
            goto label_279b6c;
        }
    }
    ctx->pc = 0x279B44u;
    // 0x279b44: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x279b44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x279b48: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x279b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x279b4c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x279b4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_279b50:
    // 0x279b50: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x279b50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x279b54: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x279B54u;
    {
        const bool branch_taken_0x279b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279B54u;
            // 0x279b58: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279b54) {
            ctx->pc = 0x279C40u;
            goto label_279c40;
        }
    }
    ctx->pc = 0x279B5Cu;
    // 0x279b5c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x279b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x279b60: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x279b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x279b64: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x279B64u;
    {
        const bool branch_taken_0x279b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279B64u;
            // 0x279b68: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279b64) {
            ctx->pc = 0x279B50u;
            runtime->cooperativeGuestYield();
            goto label_279b50;
        }
    }
    ctx->pc = 0x279B6Cu;
label_279b6c:
    // 0x279b6c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x279b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x279b70: 0x3c041f00  lui         $a0, 0x1F00
    ctx->pc = 0x279b70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7936 << 16));
    // 0x279b74: 0x34423c00  ori         $v0, $v0, 0x3C00
    ctx->pc = 0x279b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15360);
    // 0x279b78: 0x34840003  ori         $a0, $a0, 0x3
    ctx->pc = 0x279b78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    // 0x279b7c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x279b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279b80: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x279b80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x279b84: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x279B84u;
    {
        const bool branch_taken_0x279b84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x279B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279B84u;
            // 0x279b88: 0x3c031f00  lui         $v1, 0x1F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7936 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279b84) {
            ctx->pc = 0x279BBCu;
            goto label_279bbc;
        }
    }
    ctx->pc = 0x279B8Cu;
    // 0x279b8c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x279b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x279b90: 0x3c060100  lui         $a2, 0x100
    ctx->pc = 0x279b90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)256 << 16));
    // 0x279b94: 0x34843c00  ori         $a0, $a0, 0x3C00
    ctx->pc = 0x279b94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)15360);
    // 0x279b98: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x279b98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x279b9c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x279b9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_279ba0:
    // 0x279ba0: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x279ba0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x279ba4: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x279BA4u;
    {
        const bool branch_taken_0x279ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279BA4u;
            // 0x279ba8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279ba4) {
            ctx->pc = 0x279C4Cu;
            goto label_279c4c;
        }
    }
    ctx->pc = 0x279BACu;
    // 0x279bac: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x279bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x279bb0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x279bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x279bb4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x279BB4u;
    {
        const bool branch_taken_0x279bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279BB4u;
            // 0x279bb8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279bb4) {
            ctx->pc = 0x279BA0u;
            runtime->cooperativeGuestYield();
            goto label_279ba0;
        }
    }
    ctx->pc = 0x279BBCu;
label_279bbc:
    // 0x279bbc: 0x4846e800  cfc2.ni     $a2, $vi29
    ctx->pc = 0x279bbcu;
    SET_GPR_U32(ctx, 6, ctx->vu0_top);
    // 0x279bc0: 0x30c20100  andi        $v0, $a2, 0x100
    ctx->pc = 0x279bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)256);
    // 0x279bc4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x279BC4u;
    {
        const bool branch_taken_0x279bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x279BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279BC4u;
            // 0x279bc8: 0x3c030100  lui         $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279bc4) {
            ctx->pc = 0x279BECu;
            goto label_279bec;
        }
    }
    ctx->pc = 0x279BCCu;
    // 0x279bcc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x279bccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_279bd0:
    // 0x279bd0: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x279bd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x279bd4: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x279BD4u;
    {
        const bool branch_taken_0x279bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279BD4u;
            // 0x279bd8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279bd4) {
            ctx->pc = 0x279C58u;
            goto label_279c58;
        }
    }
    ctx->pc = 0x279BDCu;
    // 0x279bdc: 0x4846e800  cfc2.ni     $a2, $vi29
    ctx->pc = 0x279bdcu;
    SET_GPR_U32(ctx, 6, ctx->vu0_top);
    // 0x279be0: 0x30c20100  andi        $v0, $a2, 0x100
    ctx->pc = 0x279be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)256);
    // 0x279be4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x279BE4u;
    {
        const bool branch_taken_0x279be4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279BE4u;
            // 0x279be8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279be4) {
            ctx->pc = 0x279BD0u;
            runtime->cooperativeGuestYield();
            goto label_279bd0;
        }
    }
    ctx->pc = 0x279BECu;
label_279bec:
    // 0x279bec: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x279becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x279bf0: 0x34423020  ori         $v0, $v0, 0x3020
    ctx->pc = 0x279bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12320);
    // 0x279bf4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x279bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279bf8: 0x30630c00  andi        $v1, $v1, 0xC00
    ctx->pc = 0x279bf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3072);
    // 0x279bfc: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x279BFCu;
    {
        const bool branch_taken_0x279bfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x279C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279BFCu;
            // 0x279c00: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279bfc) {
            ctx->pc = 0x279C2Cu;
            goto label_279c2c;
        }
    }
    ctx->pc = 0x279C04u;
    // 0x279c04: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x279c04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x279c08: 0x34633020  ori         $v1, $v1, 0x3020
    ctx->pc = 0x279c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12320);
    // 0x279c0c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x279c0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_279c10:
    // 0x279c10: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x279c10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x279c14: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x279C14u;
    {
        const bool branch_taken_0x279c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279C14u;
            // 0x279c18: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279c14) {
            ctx->pc = 0x279C64u;
            goto label_279c64;
        }
    }
    ctx->pc = 0x279C1Cu;
    // 0x279c1c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x279c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x279c20: 0x30420c00  andi        $v0, $v0, 0xC00
    ctx->pc = 0x279c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3072);
    // 0x279c24: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x279C24u;
    {
        const bool branch_taken_0x279c24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279C24u;
            // 0x279c28: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279c24) {
            ctx->pc = 0x279C10u;
            runtime->cooperativeGuestYield();
            goto label_279c10;
        }
    }
    ctx->pc = 0x279C2Cu;
label_279c2c:
    // 0x279c2c: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x279C2Cu;
    {
        const bool branch_taken_0x279c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279C2Cu;
            // 0x279c30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279c2c) {
            ctx->pc = 0x279DE0u;
            goto label_279de0;
        }
    }
    ctx->pc = 0x279C34u;
label_279c34:
    // 0x279c34: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x279c34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x279c38: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x279C38u;
    {
        const bool branch_taken_0x279c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279C38u;
            // 0x279c3c: 0x24844888  addiu       $a0, $a0, 0x4888 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279c38) {
            ctx->pc = 0x279C6Cu;
            goto label_279c6c;
        }
    }
    ctx->pc = 0x279C40u;
label_279c40:
    // 0x279c40: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x279c40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x279c44: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x279C44u;
    {
        const bool branch_taken_0x279c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279C44u;
            // 0x279c48: 0x24844968  addiu       $a0, $a0, 0x4968 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18792));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279c44) {
            ctx->pc = 0x279C6Cu;
            goto label_279c6c;
        }
    }
    ctx->pc = 0x279C4Cu;
label_279c4c:
    // 0x279c4c: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x279c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x279c50: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x279C50u;
    {
        const bool branch_taken_0x279c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279C50u;
            // 0x279c54: 0x24844998  addiu       $a0, $a0, 0x4998 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279c50) {
            ctx->pc = 0x279C6Cu;
            goto label_279c6c;
        }
    }
    ctx->pc = 0x279C58u;
label_279c58:
    // 0x279c58: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x279c58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x279c5c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x279C5Cu;
    {
        const bool branch_taken_0x279c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279C5Cu;
            // 0x279c60: 0x248449c8  addiu       $a0, $a0, 0x49C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18888));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279c5c) {
            ctx->pc = 0x279C6Cu;
            goto label_279c6c;
        }
    }
    ctx->pc = 0x279C64u;
label_279c64:
    // 0x279c64: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x279c64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x279c68: 0x248449f0  addiu       $a0, $a0, 0x49F0
    ctx->pc = 0x279c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18928));
label_279c6c:
    // 0x279c6c: 0xc0a58f0  jal         func_2963C0
    ctx->pc = 0x279C6Cu;
    SET_GPR_U32(ctx, 31, 0x279C74u);
    ctx->pc = 0x2963C0u;
    if (runtime->hasFunction(0x2963C0u)) {
        auto targetFn = runtime->lookupFunction(0x2963C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279C74u; }
        if (ctx->pc != 0x279C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002963C0_0x2963c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279C74u; }
        if (ctx->pc != 0x279C74u) { return; }
    }
    ctx->pc = 0x279C74u;
    // 0x279c74: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x279c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x279c78: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x279c78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x279c7c: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x279c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x279c80: 0x248448b8  addiu       $a0, $a0, 0x48B8
    ctx->pc = 0x279c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18616));
    // 0x279c84: 0xc0a58f0  jal         func_2963C0
    ctx->pc = 0x279C84u;
    SET_GPR_U32(ctx, 31, 0x279C8Cu);
    ctx->pc = 0x279C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279C84u;
            // 0x279c88: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2963C0u;
    if (runtime->hasFunction(0x2963C0u)) {
        auto targetFn = runtime->lookupFunction(0x2963C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279C8Cu; }
        if (ctx->pc != 0x279C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002963C0_0x2963c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279C8Cu; }
        if (ctx->pc != 0x279C8Cu) { return; }
    }
    ctx->pc = 0x279C8Cu;
    // 0x279c8c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x279c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x279c90: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x279c90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x279c94: 0x34429030  ori         $v0, $v0, 0x9030
    ctx->pc = 0x279c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36912);
    // 0x279c98: 0x248448c8  addiu       $a0, $a0, 0x48C8
    ctx->pc = 0x279c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18632));
    // 0x279c9c: 0xc0a58f0  jal         func_2963C0
    ctx->pc = 0x279C9Cu;
    SET_GPR_U32(ctx, 31, 0x279CA4u);
    ctx->pc = 0x279CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279C9Cu;
            // 0x279ca0: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2963C0u;
    if (runtime->hasFunction(0x2963C0u)) {
        auto targetFn = runtime->lookupFunction(0x2963C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279CA4u; }
        if (ctx->pc != 0x279CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002963C0_0x2963c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279CA4u; }
        if (ctx->pc != 0x279CA4u) { return; }
    }
    ctx->pc = 0x279CA4u;
    // 0x279ca4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x279ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x279ca8: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x279ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x279cac: 0x34429010  ori         $v0, $v0, 0x9010
    ctx->pc = 0x279cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36880);
    // 0x279cb0: 0x248448d8  addiu       $a0, $a0, 0x48D8
    ctx->pc = 0x279cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18648));
    // 0x279cb4: 0xc0a58f0  jal         func_2963C0
    ctx->pc = 0x279CB4u;
    SET_GPR_U32(ctx, 31, 0x279CBCu);
    ctx->pc = 0x279CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279CB4u;
            // 0x279cb8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2963C0u;
    if (runtime->hasFunction(0x2963C0u)) {
        auto targetFn = runtime->lookupFunction(0x2963C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279CBCu; }
        if (ctx->pc != 0x279CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002963C0_0x2963c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279CBCu; }
        if (ctx->pc != 0x279CBCu) { return; }
    }
    ctx->pc = 0x279CBCu;
    // 0x279cbc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x279cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x279cc0: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x279cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x279cc4: 0x34429020  ori         $v0, $v0, 0x9020
    ctx->pc = 0x279cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36896);
    // 0x279cc8: 0x248448e8  addiu       $a0, $a0, 0x48E8
    ctx->pc = 0x279cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18664));
    // 0x279ccc: 0xc0a58f0  jal         func_2963C0
    ctx->pc = 0x279CCCu;
    SET_GPR_U32(ctx, 31, 0x279CD4u);
    ctx->pc = 0x279CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279CCCu;
            // 0x279cd0: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2963C0u;
    if (runtime->hasFunction(0x2963C0u)) {
        auto targetFn = runtime->lookupFunction(0x2963C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279CD4u; }
        if (ctx->pc != 0x279CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002963C0_0x2963c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279CD4u; }
        if (ctx->pc != 0x279CD4u) { return; }
    }
    ctx->pc = 0x279CD4u;
    // 0x279cd4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x279cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x279cd8: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x279cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x279cdc: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x279cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x279ce0: 0x248448f8  addiu       $a0, $a0, 0x48F8
    ctx->pc = 0x279ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18680));
    // 0x279ce4: 0xc0a58f0  jal         func_2963C0
    ctx->pc = 0x279CE4u;
    SET_GPR_U32(ctx, 31, 0x279CECu);
    ctx->pc = 0x279CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279CE4u;
            // 0x279ce8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2963C0u;
    if (runtime->hasFunction(0x2963C0u)) {
        auto targetFn = runtime->lookupFunction(0x2963C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279CECu; }
        if (ctx->pc != 0x279CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002963C0_0x2963c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279CECu; }
        if (ctx->pc != 0x279CECu) { return; }
    }
    ctx->pc = 0x279CECu;
    // 0x279cec: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x279cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x279cf0: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x279cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x279cf4: 0x3442a030  ori         $v0, $v0, 0xA030
    ctx->pc = 0x279cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41008);
    // 0x279cf8: 0x24844908  addiu       $a0, $a0, 0x4908
    ctx->pc = 0x279cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18696));
    // 0x279cfc: 0xc0a58f0  jal         func_2963C0
    ctx->pc = 0x279CFCu;
    SET_GPR_U32(ctx, 31, 0x279D04u);
    ctx->pc = 0x279D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279CFCu;
            // 0x279d00: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2963C0u;
    if (runtime->hasFunction(0x2963C0u)) {
        auto targetFn = runtime->lookupFunction(0x2963C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279D04u; }
        if (ctx->pc != 0x279D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002963C0_0x2963c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279D04u; }
        if (ctx->pc != 0x279D04u) { return; }
    }
    ctx->pc = 0x279D04u;
    // 0x279d04: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x279d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x279d08: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x279d08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x279d0c: 0x3442a010  ori         $v0, $v0, 0xA010
    ctx->pc = 0x279d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40976);
    // 0x279d10: 0x24844918  addiu       $a0, $a0, 0x4918
    ctx->pc = 0x279d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18712));
    // 0x279d14: 0xc0a58f0  jal         func_2963C0
    ctx->pc = 0x279D14u;
    SET_GPR_U32(ctx, 31, 0x279D1Cu);
    ctx->pc = 0x279D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279D14u;
            // 0x279d18: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2963C0u;
    if (runtime->hasFunction(0x2963C0u)) {
        auto targetFn = runtime->lookupFunction(0x2963C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279D1Cu; }
        if (ctx->pc != 0x279D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002963C0_0x2963c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279D1Cu; }
        if (ctx->pc != 0x279D1Cu) { return; }
    }
    ctx->pc = 0x279D1Cu;
    // 0x279d1c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x279d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x279d20: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x279d20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x279d24: 0x3442a020  ori         $v0, $v0, 0xA020
    ctx->pc = 0x279d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40992);
    // 0x279d28: 0x24844928  addiu       $a0, $a0, 0x4928
    ctx->pc = 0x279d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18728));
    // 0x279d2c: 0xc0a58f0  jal         func_2963C0
    ctx->pc = 0x279D2Cu;
    SET_GPR_U32(ctx, 31, 0x279D34u);
    ctx->pc = 0x279D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279D2Cu;
            // 0x279d30: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2963C0u;
    if (runtime->hasFunction(0x2963C0u)) {
        auto targetFn = runtime->lookupFunction(0x2963C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279D34u; }
        if (ctx->pc != 0x279D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002963C0_0x2963c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279D34u; }
        if (ctx->pc != 0x279D34u) { return; }
    }
    ctx->pc = 0x279D34u;
    // 0x279d34: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x279d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x279d38: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x279d38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x279d3c: 0x34423c00  ori         $v0, $v0, 0x3C00
    ctx->pc = 0x279d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15360);
    // 0x279d40: 0x24844938  addiu       $a0, $a0, 0x4938
    ctx->pc = 0x279d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18744));
    // 0x279d44: 0xc0a58f0  jal         func_2963C0
    ctx->pc = 0x279D44u;
    SET_GPR_U32(ctx, 31, 0x279D4Cu);
    ctx->pc = 0x279D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279D44u;
            // 0x279d48: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2963C0u;
    if (runtime->hasFunction(0x2963C0u)) {
        auto targetFn = runtime->lookupFunction(0x2963C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279D4Cu; }
        if (ctx->pc != 0x279D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002963C0_0x2963c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279D4Cu; }
        if (ctx->pc != 0x279D4Cu) { return; }
    }
    ctx->pc = 0x279D4Cu;
    // 0x279d4c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x279d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x279d50: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x279d50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x279d54: 0x34423020  ori         $v0, $v0, 0x3020
    ctx->pc = 0x279d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12320);
    // 0x279d58: 0x24844950  addiu       $a0, $a0, 0x4950
    ctx->pc = 0x279d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18768));
    // 0x279d5c: 0xc0a58f0  jal         func_2963C0
    ctx->pc = 0x279D5Cu;
    SET_GPR_U32(ctx, 31, 0x279D64u);
    ctx->pc = 0x279D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279D5Cu;
            // 0x279d60: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2963C0u;
    if (runtime->hasFunction(0x2963C0u)) {
        auto targetFn = runtime->lookupFunction(0x2963C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279D64u; }
        if (ctx->pc != 0x279D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002963C0_0x2963c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279D64u; }
        if (ctx->pc != 0x279D64u) { return; }
    }
    ctx->pc = 0x279D64u;
    // 0x279d64: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x279D64u;
    {
        const bool branch_taken_0x279d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279D64u;
            // 0x279d68: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279d64) {
            ctx->pc = 0x279DE0u;
            goto label_279de0;
        }
    }
    ctx->pc = 0x279D6Cu;
label_279d6c:
    // 0x279d6c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x279d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x279d70: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x279d70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x279d74: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x279d74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x279d78: 0x34a5a000  ori         $a1, $a1, 0xA000
    ctx->pc = 0x279d78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)40960);
    // 0x279d7c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x279d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x279d80: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x279d80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x279d84: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x279d84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x279d88: 0x34843c00  ori         $a0, $a0, 0x3C00
    ctx->pc = 0x279d88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)15360);
    // 0x279d8c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x279d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x279d90: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x279d90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x279d94: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x279d94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x279d98: 0x30c60100  andi        $a2, $a2, 0x100
    ctx->pc = 0x279d98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)256);
    // 0x279d9c: 0x34440002  ori         $a0, $v0, 0x2
    ctx->pc = 0x279d9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x279da0: 0x3c031f00  lui         $v1, 0x1F00
    ctx->pc = 0x279da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7936 << 16));
    // 0x279da4: 0x86100b  movn        $v0, $a0, $a2
    ctx->pc = 0x279da4u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x279da8: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x279da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x279dac: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x279dacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x279db0: 0x34440004  ori         $a0, $v0, 0x4
    ctx->pc = 0x279db0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x279db4: 0x85100b  movn        $v0, $a0, $a1
    ctx->pc = 0x279db4u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x279db8: 0x4846e800  cfc2.ni     $a2, $vi29
    ctx->pc = 0x279db8u;
    SET_GPR_U32(ctx, 6, ctx->vu0_top);
    // 0x279dbc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x279dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x279dc0: 0x30c60100  andi        $a2, $a2, 0x100
    ctx->pc = 0x279dc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)256);
    // 0x279dc4: 0x34633020  ori         $v1, $v1, 0x3020
    ctx->pc = 0x279dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12320);
    // 0x279dc8: 0x34450008  ori         $a1, $v0, 0x8
    ctx->pc = 0x279dc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x279dcc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x279dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x279dd0: 0xa6100b  movn        $v0, $a1, $a2
    ctx->pc = 0x279dd0u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x279dd4: 0x34430010  ori         $v1, $v0, 0x10
    ctx->pc = 0x279dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x279dd8: 0x30840c00  andi        $a0, $a0, 0xC00
    ctx->pc = 0x279dd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3072);
    // 0x279ddc: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x279ddcu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_279de0:
    // 0x279de0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x279de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279de4: 0x3e00008  jr          $ra
    ctx->pc = 0x279DE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279DE4u;
            // 0x279de8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x279B10u: goto label_279b10;
            case 0x279B2Cu: goto label_279b2c;
            case 0x279B50u: goto label_279b50;
            case 0x279B6Cu: goto label_279b6c;
            case 0x279BA0u: goto label_279ba0;
            case 0x279BBCu: goto label_279bbc;
            case 0x279BD0u: goto label_279bd0;
            case 0x279BECu: goto label_279bec;
            case 0x279C10u: goto label_279c10;
            case 0x279C2Cu: goto label_279c2c;
            case 0x279C34u: goto label_279c34;
            case 0x279C40u: goto label_279c40;
            case 0x279C4Cu: goto label_279c4c;
            case 0x279C58u: goto label_279c58;
            case 0x279C64u: goto label_279c64;
            case 0x279C6Cu: goto label_279c6c;
            case 0x279D6Cu: goto label_279d6c;
            case 0x279DE0u: goto label_279de0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x279DECu;
    // 0x279dec: 0x0  nop
    ctx->pc = 0x279decu;
    // NOP
}
