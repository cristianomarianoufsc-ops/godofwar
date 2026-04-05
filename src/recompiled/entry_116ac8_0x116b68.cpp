#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_116ac8
// Address: 0x116ac8 - 0x116b68
void entry_116ac8_0x116b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_116ac8_0x116b68");
#endif

    ctx->pc = 0x116ac8u;

    // 0x116ac8: 0x240a0040  addiu       $t2, $zero, 0x40
    ctx->pc = 0x116ac8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x116acc: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x116accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x116ad0: 0x948b0012  lhu         $t3, 0x12($a0)
    ctx->pc = 0x116ad0u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x116ad4: 0x46500b  movn        $t2, $v0, $a2
    ctx->pc = 0x116ad4u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 2));
    // 0x116ad8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x116ad8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116adc: 0x1160001e  beqz        $t3, . + 4 + (0x1E << 2)
    ctx->pc = 0x116ADCu;
    {
        const bool branch_taken_0x116adc = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x116AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116ADCu;
            // 0x116ae0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116adc) {
            ctx->pc = 0x116B58u;
            goto label_116b58;
        }
    }
    ctx->pc = 0x116AE4u;
    // 0x116ae4: 0x0  nop
    ctx->pc = 0x116ae4u;
    // NOP
label_116ae8:
    // 0x116ae8: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x116ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x116aec: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x116aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x116af0: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x116af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x116af4: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x116af4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x116af8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x116af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x116afc: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x116afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x116b00: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x116B00u;
    {
        const bool branch_taken_0x116b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x116b00) {
            ctx->pc = 0x116B04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x116B00u;
            // 0x116b04: 0x8cc3000c  lw          $v1, 0xC($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x116B48u;
            goto label_116b48;
        }
    }
    ctx->pc = 0x116B08u;
    // 0x116b08: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x116b08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x116b0c: 0x1100000d  beqz        $t0, . + 4 + (0xD << 2)
    ctx->pc = 0x116B0Cu;
    {
        const bool branch_taken_0x116b0c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x116B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116B0Cu;
            // 0x116b10: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116b0c) {
            ctx->pc = 0x116B44u;
            goto label_116b44;
        }
    }
    ctx->pc = 0x116B14u;
    // 0x116b14: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x116b14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_116b18:
    // 0x116b18: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x116b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x116b1c: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x116b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x116b20: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x116b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x116b24: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x116b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x116b28: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x116B28u;
    {
        const bool branch_taken_0x116b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x116b28) {
            ctx->pc = 0x116B2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x116B28u;
            // 0x116b2c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x116B38u;
            goto label_116b38;
        }
    }
    ctx->pc = 0x116B30u;
    // 0x116b30: 0x3e00008  jr          $ra
    ctx->pc = 0x116B30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116B30u;
            // 0x116b34: 0x1231021  addu        $v0, $t1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x116AE8u: goto label_116ae8;
            case 0x116B18u: goto label_116b18;
            case 0x116B38u: goto label_116b38;
            case 0x116B44u: goto label_116b44;
            case 0x116B48u: goto label_116b48;
            case 0x116B58u: goto label_116b58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x116B38u;
label_116b38:
    // 0x116b38: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x116b38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x116b3c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x116B3Cu;
    {
        const bool branch_taken_0x116b3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x116B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116B3Cu;
            // 0x116b40: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116b3c) {
            ctx->pc = 0x116B18u;
            runtime->cooperativeGuestYield();
            goto label_116b18;
        }
    }
    ctx->pc = 0x116B44u;
label_116b44:
    // 0x116b44: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x116b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_116b48:
    // 0x116b48: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x116b48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x116b4c: 0xeb102b  sltu        $v0, $a3, $t3
    ctx->pc = 0x116b4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x116b50: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x116B50u;
    {
        const bool branch_taken_0x116b50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x116B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116B50u;
            // 0x116b54: 0x1234821  addu        $t1, $t1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116b50) {
            ctx->pc = 0x116AE8u;
            runtime->cooperativeGuestYield();
            goto label_116ae8;
        }
    }
    ctx->pc = 0x116B58u;
label_116b58:
    // 0x116b58: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x116b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x116b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x116B5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116B5Cu;
            // 0x116b60: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x116AE8u: goto label_116ae8;
            case 0x116B18u: goto label_116b18;
            case 0x116B38u: goto label_116b38;
            case 0x116B44u: goto label_116b44;
            case 0x116B48u: goto label_116b48;
            case 0x116B58u: goto label_116b58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x116B64u;
    // 0x116b64: 0x0  nop
    ctx->pc = 0x116b64u;
    // NOP
}
