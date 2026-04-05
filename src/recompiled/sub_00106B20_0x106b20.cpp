#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00106B20
// Address: 0x106b20 - 0x106c88
void sub_00106B20_0x106b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106B20_0x106b20");
#endif

    ctx->pc = 0x106b20u;

    // 0x106b20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x106b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x106b24: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x106b24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x106b28: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x106b28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x106b2c: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x106b2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106b30: 0x94e20012  lhu         $v0, 0x12($a3)
    ctx->pc = 0x106b30u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 18)));
    // 0x106b34: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x106B34u;
    {
        const bool branch_taken_0x106b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106B34u;
            // 0x106b38: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106b34) {
            ctx->pc = 0x106BB0u;
            goto label_106bb0;
        }
    }
    ctx->pc = 0x106B3Cu;
    // 0x106b3c: 0x0  nop
    ctx->pc = 0x106b3cu;
    // NOP
label_106b40:
    // 0x106b40: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x106b40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x106b44: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x106b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x106b48: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x106b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x106b4c: 0xe23021  addu        $a2, $a3, $v0
    ctx->pc = 0x106b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x106b50: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x106b50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x106b54: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x106b54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x106b58: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x106B58u;
    {
        const bool branch_taken_0x106b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x106b58) {
            ctx->pc = 0x106B5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106B58u;
            // 0x106b5c: 0x94e20012  lhu         $v0, 0x12($a3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 18)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106BA0u;
            goto label_106ba0;
        }
    }
    ctx->pc = 0x106B60u;
    // 0x106b60: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x106b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x106b64: 0x31443  sra         $v0, $v1, 17
    ctx->pc = 0x106b64u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 17));
    // 0x106b68: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x106b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x106b6c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x106b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x106b70: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x106B70u;
    {
        const bool branch_taken_0x106b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106B70u;
            // 0x106b74: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x106b70) {
            ctx->pc = 0x106BB0u;
            goto label_106bb0;
        }
    }
    ctx->pc = 0x106B78u;
    // 0x106b78: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x106B78u;
    {
        const bool branch_taken_0x106b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106B78u;
            // 0x106b7c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106b78) {
            ctx->pc = 0x106B90u;
            goto label_106b90;
        }
    }
    ctx->pc = 0x106B80u;
    // 0x106b80: 0x55200003  bnel        $t1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x106B80u;
    {
        const bool branch_taken_0x106b80 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x106b80) {
            ctx->pc = 0x106B84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106B80u;
            // 0x106b84: 0xad260000  sw          $a2, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106B90u;
            goto label_106b90;
        }
    }
    ctx->pc = 0x106B88u;
    // 0x106b88: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x106b88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x106b8c: 0x0  nop
    ctx->pc = 0x106b8cu;
    // NOP
label_106b90:
    // 0x106b90: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x106b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x106b94: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x106b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x106b98: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x106B98u;
    {
        const bool branch_taken_0x106b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106B98u;
            // 0x106b9c: 0xc22821  addu        $a1, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106b98) {
            ctx->pc = 0x106BB8u;
            goto label_106bb8;
        }
    }
    ctx->pc = 0x106BA0u;
label_106ba0:
    // 0x106ba0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x106ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x106ba4: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x106ba4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x106ba8: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x106BA8u;
    {
        const bool branch_taken_0x106ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106BA8u;
            // 0x106bac: 0xa82823  subu        $a1, $a1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106ba8) {
            ctx->pc = 0x106B40u;
            runtime->cooperativeGuestYield();
            goto label_106b40;
        }
    }
    ctx->pc = 0x106BB0u;
label_106bb0:
    // 0x106bb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x106bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106bb4: 0x0  nop
    ctx->pc = 0x106bb4u;
    // NOP
label_106bb8:
    // 0x106bb8: 0x8c860014  lw          $a2, 0x14($a0)
    ctx->pc = 0x106bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x106bbc: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x106bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x106bc0: 0x10c4002e  beq         $a2, $a0, . + 4 + (0x2E << 2)
    ctx->pc = 0x106BC0u;
    {
        const bool branch_taken_0x106bc0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x106bc0) {
            ctx->pc = 0x106C7Cu;
            goto label_106c7c;
        }
    }
    ctx->pc = 0x106BC8u;
    // 0x106bc8: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x106bc8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106bcc: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x106bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_106bd0:
    // 0x106bd0: 0x30620090  andi        $v0, $v1, 0x90
    ctx->pc = 0x106bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)144);
    // 0x106bd4: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x106BD4u;
    {
        const bool branch_taken_0x106bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x106bd4) {
            ctx->pc = 0x106BD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106BD4u;
            // 0x106bd8: 0x8cc60000  lw          $a2, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106C74u;
            goto label_106c74;
        }
    }
    ctx->pc = 0x106BDCu;
    // 0x106bdc: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x106bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x106be0: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x106BE0u;
    {
        const bool branch_taken_0x106be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106BE0u;
            // 0x106be4: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106be0) {
            ctx->pc = 0x106C2Cu;
            goto label_106c2c;
        }
    }
    ctx->pc = 0x106BE8u;
    // 0x106be8: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x106be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x106bec: 0x24c70008  addiu       $a3, $a2, 0x8
    ctx->pc = 0x106becu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x106bf0: 0x50670020  beql        $v1, $a3, . + 4 + (0x20 << 2)
    ctx->pc = 0x106BF0u;
    {
        const bool branch_taken_0x106bf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x106bf0) {
            ctx->pc = 0x106BF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106BF0u;
            // 0x106bf4: 0x8cc60000  lw          $a2, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106C74u;
            goto label_106c74;
        }
    }
    ctx->pc = 0x106BF8u;
    // 0x106bf8: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x106bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x106bfc: 0x0  nop
    ctx->pc = 0x106bfcu;
    // NOP
label_106c00:
    // 0x106c00: 0x54450006  bnel        $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x106C00u;
    {
        const bool branch_taken_0x106c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x106c00) {
            ctx->pc = 0x106C04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106C00u;
            // 0x106c04: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106C1Cu;
            goto label_106c1c;
        }
    }
    ctx->pc = 0x106C08u;
    // 0x106c08: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x106c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x106c0c: 0x30420090  andi        $v0, $v0, 0x90
    ctx->pc = 0x106c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)144);
    // 0x106c10: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x106C10u;
    {
        const bool branch_taken_0x106c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x106c10) {
            ctx->pc = 0x106C14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106C10u;
            // 0x106c14: 0xe46c000c  swc1        $f12, 0xC($v1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x106C18u;
            goto label_106c18;
        }
    }
    ctx->pc = 0x106C18u;
label_106c18:
    // 0x106c18: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x106c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_106c1c:
    // 0x106c1c: 0x5467fff8  bnel        $v1, $a3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x106C1Cu;
    {
        const bool branch_taken_0x106c1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x106c1c) {
            ctx->pc = 0x106C20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106C1Cu;
            // 0x106c20: 0x8c620038  lw          $v0, 0x38($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106C00u;
            runtime->cooperativeGuestYield();
            goto label_106c00;
        }
    }
    ctx->pc = 0x106C24u;
    // 0x106c24: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x106C24u;
    {
        const bool branch_taken_0x106c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106C24u;
            // 0x106c28: 0x8cc60000  lw          $a2, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106c24) {
            ctx->pc = 0x106C74u;
            goto label_106c74;
        }
    }
    ctx->pc = 0x106C2Cu;
label_106c2c:
    // 0x106c2c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x106c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x106c30: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x106C30u;
    {
        const bool branch_taken_0x106c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x106c30) {
            ctx->pc = 0x106C34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106C30u;
            // 0x106c34: 0x8cc60000  lw          $a2, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106C74u;
            goto label_106c74;
        }
    }
    ctx->pc = 0x106C38u;
    // 0x106c38: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x106c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x106c3c: 0x5448000d  bnel        $v0, $t0, . + 4 + (0xD << 2)
    ctx->pc = 0x106C3Cu;
    {
        const bool branch_taken_0x106c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x106c3c) {
            ctx->pc = 0x106C40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106C3Cu;
            // 0x106c40: 0x8cc60000  lw          $a2, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106C74u;
            goto label_106c74;
        }
    }
    ctx->pc = 0x106C44u;
    // 0x106c44: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x106c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x106c48: 0x24c70008  addiu       $a3, $a2, 0x8
    ctx->pc = 0x106c48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x106c4c: 0x50670009  beql        $v1, $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x106C4Cu;
    {
        const bool branch_taken_0x106c4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x106c4c) {
            ctx->pc = 0x106C50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106C4Cu;
            // 0x106c50: 0x8cc60000  lw          $a2, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106C74u;
            goto label_106c74;
        }
    }
    ctx->pc = 0x106C54u;
    // 0x106c54: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x106c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_106c58:
    // 0x106c58: 0x30420090  andi        $v0, $v0, 0x90
    ctx->pc = 0x106c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)144);
    // 0x106c5c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x106C5Cu;
    {
        const bool branch_taken_0x106c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x106c5c) {
            ctx->pc = 0x106C60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106C5Cu;
            // 0x106c60: 0xe46c000c  swc1        $f12, 0xC($v1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x106C64u;
            goto label_106c64;
        }
    }
    ctx->pc = 0x106C64u;
label_106c64:
    // 0x106c64: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x106c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x106c68: 0x5467fffb  bnel        $v1, $a3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x106C68u;
    {
        const bool branch_taken_0x106c68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x106c68) {
            ctx->pc = 0x106C6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106C68u;
            // 0x106c6c: 0x8c62002c  lw          $v0, 0x2C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106C58u;
            runtime->cooperativeGuestYield();
            goto label_106c58;
        }
    }
    ctx->pc = 0x106C70u;
    // 0x106c70: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x106c70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_106c74:
    // 0x106c74: 0x54c4ffd6  bnel        $a2, $a0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x106C74u;
    {
        const bool branch_taken_0x106c74 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x106c74) {
            ctx->pc = 0x106C78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106C74u;
            // 0x106c78: 0x8cc30010  lw          $v1, 0x10($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106BD0u;
            runtime->cooperativeGuestYield();
            goto label_106bd0;
        }
    }
    ctx->pc = 0x106C7Cu;
label_106c7c:
    // 0x106c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x106C7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106C7Cu;
            // 0x106c80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x106B40u: goto label_106b40;
            case 0x106B90u: goto label_106b90;
            case 0x106BA0u: goto label_106ba0;
            case 0x106BB0u: goto label_106bb0;
            case 0x106BB8u: goto label_106bb8;
            case 0x106BD0u: goto label_106bd0;
            case 0x106C00u: goto label_106c00;
            case 0x106C18u: goto label_106c18;
            case 0x106C1Cu: goto label_106c1c;
            case 0x106C2Cu: goto label_106c2c;
            case 0x106C58u: goto label_106c58;
            case 0x106C64u: goto label_106c64;
            case 0x106C74u: goto label_106c74;
            case 0x106C7Cu: goto label_106c7c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x106C84u;
    // 0x106c84: 0x0  nop
    ctx->pc = 0x106c84u;
    // NOP
}
