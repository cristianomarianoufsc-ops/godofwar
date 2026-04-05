#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_155ab0
// Address: 0x155ab0 - 0x155ba0
void entry_155ab0_0x155ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_155ab0_0x155ba0");
#endif

    ctx->pc = 0x155ab0u;

    // 0x155ab0: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x155ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x155ab4: 0x3c0f0030  lui         $t7, 0x30
    ctx->pc = 0x155ab4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)48 << 16));
    // 0x155ab8: 0x8c4c4988  lw          $t4, 0x4988($v0)
    ctx->pc = 0x155ab8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18824)));
    // 0x155abc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x155abcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x155ac0: 0x8de2498c  lw          $v0, 0x498C($t7)
    ctx->pc = 0x155ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18828)));
    // 0x155ac4: 0x3129ffff  andi        $t1, $t1, 0xFFFF
    ctx->pc = 0x155ac4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x155ac8: 0x94ae0000  lhu         $t6, 0x0($a1)
    ctx->pc = 0x155ac8u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x155acc: 0x182102a  slt         $v0, $t4, $v0
    ctx->pc = 0x155accu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x155ad0: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x155AD0u;
    {
        const bool branch_taken_0x155ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155AD0u;
            // 0x155ad4: 0x94cd0000  lhu         $t5, 0x0($a2) (Delay Slot)
        SET_GPR_U32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155ad0) {
            ctx->pc = 0x155B94u;
            goto label_155b94;
        }
    }
    ctx->pc = 0x155AD8u;
    // 0x155ad8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x155ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x155adc: 0x0  nop
    ctx->pc = 0x155adcu;
    // NOP
label_155ae0:
    // 0x155ae0: 0xc1880  sll         $v1, $t4, 2
    ctx->pc = 0x155ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x155ae4: 0x244239a8  addiu       $v0, $v0, 0x39A8
    ctx->pc = 0x155ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14760));
    // 0x155ae8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x155ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x155aec: 0x8c6a0000  lw          $t2, 0x0($v1)
    ctx->pc = 0x155aecu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x155af0: 0x854b0040  lh          $t3, 0x40($t2)
    ctx->pc = 0x155af0u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 64)));
    // 0x155af4: 0x9542003c  lhu         $v0, 0x3C($t2)
    ctx->pc = 0x155af4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 60)));
    // 0x155af8: 0x30437fff  andi        $v1, $v0, 0x7FFF
    ctx->pc = 0x155af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x155afc: 0x6e102a  slt         $v0, $v1, $t6
    ctx->pc = 0x155afcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x155b00: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x155B00u;
    {
        const bool branch_taken_0x155b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155B00u;
            // 0x155b04: 0x18b6021  addu        $t4, $t4, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155b00) {
            ctx->pc = 0x155B84u;
            goto label_155b84;
        }
    }
    ctx->pc = 0x155B08u;
    // 0x155b08: 0x6d102a  slt         $v0, $v1, $t5
    ctx->pc = 0x155b08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x155b0c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x155B0Cu;
    {
        const bool branch_taken_0x155b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155B0Cu;
            // 0x155b10: 0x8de2498c  lw          $v0, 0x498C($t7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18828)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155b0c) {
            ctx->pc = 0x155B88u;
            goto label_155b88;
        }
    }
    ctx->pc = 0x155B14u;
    // 0x155b14: 0x8d420060  lw          $v0, 0x60($t2)
    ctx->pc = 0x155b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 96)));
    // 0x155b18: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x155b18u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x155b1c: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x155b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
    // 0x155b20: 0x871824  and         $v1, $a0, $a3
    ctx->pc = 0x155b20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x155b24: 0xdc420008  ld          $v0, 0x8($v0)
    ctx->pc = 0x155b24u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x155b28: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x155B28u;
    {
        const bool branch_taken_0x155b28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x155B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155B28u;
            // 0x155b2c: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155b28) {
            ctx->pc = 0x155B58u;
            goto label_155b58;
        }
    }
    ctx->pc = 0x155B30u;
    // 0x155b30: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x155b30u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x155b34: 0x6b1823  subu        $v1, $v1, $t3
    ctx->pc = 0x155b34u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x155b38: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x155b38u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x155b3c: 0xa549003e  sh          $t1, 0x3E($t2)
    ctx->pc = 0x155b3cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 62), (uint16_t)GPR_U32(ctx, 9));
    // 0x155b40: 0x9542003c  lhu         $v0, 0x3C($t2)
    ctx->pc = 0x155b40u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 60)));
    // 0x155b44: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x155b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x155b48: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x155b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x155b4c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x155B4Cu;
    {
        const bool branch_taken_0x155b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155B4Cu;
            // 0x155b50: 0xa543003c  sh          $v1, 0x3C($t2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 10), 60), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155b4c) {
            ctx->pc = 0x155B84u;
            goto label_155b84;
        }
    }
    ctx->pc = 0x155B54u;
    // 0x155b54: 0x0  nop
    ctx->pc = 0x155b54u;
    // NOP
label_155b58:
    // 0x155b58: 0x881024  and         $v0, $a0, $t0
    ctx->pc = 0x155b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x155b5c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x155B5Cu;
    {
        const bool branch_taken_0x155b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155B5Cu;
            // 0x155b60: 0x8de2498c  lw          $v0, 0x498C($t7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18828)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155b5c) {
            ctx->pc = 0x155B88u;
            goto label_155b88;
        }
    }
    ctx->pc = 0x155B64u;
    // 0x155b64: 0x9542003c  lhu         $v0, 0x3C($t2)
    ctx->pc = 0x155b64u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 60)));
    // 0x155b68: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x155b68u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x155b6c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x155b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x155b70: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x155b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x155b74: 0xa543003c  sh          $v1, 0x3C($t2)
    ctx->pc = 0x155b74u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 60), (uint16_t)GPR_U32(ctx, 3));
    // 0x155b78: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x155b78u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x155b7c: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x155b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x155b80: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x155b80u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
label_155b84:
    // 0x155b84: 0x8de2498c  lw          $v0, 0x498C($t7)
    ctx->pc = 0x155b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18828)));
label_155b88:
    // 0x155b88: 0x182102a  slt         $v0, $t4, $v0
    ctx->pc = 0x155b88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x155b8c: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x155B8Cu;
    {
        const bool branch_taken_0x155b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155B8Cu;
            // 0x155b90: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155b8c) {
            ctx->pc = 0x155AE0u;
            runtime->cooperativeGuestYield();
            goto label_155ae0;
        }
    }
    ctx->pc = 0x155B94u;
label_155b94:
    // 0x155b94: 0x3e00008  jr          $ra
    ctx->pc = 0x155B94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155B94u;
            // 0x155b98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x155AE0u: goto label_155ae0;
            case 0x155B58u: goto label_155b58;
            case 0x155B84u: goto label_155b84;
            case 0x155B88u: goto label_155b88;
            case 0x155B94u: goto label_155b94;
            default: break;
        }
        return;
    }
    ctx->pc = 0x155B9Cu;
    // 0x155b9c: 0x0  nop
    ctx->pc = 0x155b9cu;
    // NOP
}
