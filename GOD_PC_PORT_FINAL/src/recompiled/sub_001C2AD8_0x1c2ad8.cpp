#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C2AD8
// Address: 0x1c2ad8 - 0x1c3350
void sub_001C2AD8_0x1c2ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2AD8_0x1c2ad8");
#endif

    ctx->pc = 0x1c2ad8u;

    // 0x1c2ad8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c2ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c2adc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c2adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c2ae0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c2ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c2ae4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c2ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c2ae8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c2ae8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2aec: 0x8e250194  lw          $a1, 0x194($s1)
    ctx->pc = 0x1c2aecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
    // 0x1c2af0: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x1c2af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1c2af4: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1C2AF4u;
    {
        const bool branch_taken_0x1c2af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2AF4u;
            // 0x1c2af8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2af4) {
            ctx->pc = 0x1C2B8Cu;
            goto label_1c2b8c;
        }
    }
    ctx->pc = 0x1C2AFCu;
    // 0x1c2afc: 0x8e2202d8  lw          $v0, 0x2D8($s1)
    ctx->pc = 0x1c2afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 728)));
    // 0x1c2b00: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x1c2b00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x1c2b04: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c2b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1c2b08: 0x54400089  bnel        $v0, $zero, . + 4 + (0x89 << 2)
    ctx->pc = 0x1C2B08u;
    {
        const bool branch_taken_0x1c2b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2b08) {
            ctx->pc = 0x1C2B0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2B08u;
            // 0x1c2b0c: 0x24100053  addiu       $s0, $zero, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C2D30u;
            goto label_1c2d30;
        }
    }
    ctx->pc = 0x1C2B10u;
    // 0x1c2b10: 0x7a220260  lq          $v0, 0x260($s1)
    ctx->pc = 0x1c2b10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x1c2b14: 0x70021f89  pexew       $v1, $v0
    ctx->pc = 0x1c2b14u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1c2b18: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1c2b18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c2b1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c2b1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c2b20: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1c2b20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c2b24: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x1c2b24u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c2b28: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1C2B28u;
    {
        const bool branch_taken_0x1c2b28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c2b28) {
            ctx->pc = 0x1C2B40u;
            goto label_1c2b40;
        }
    }
    ctx->pc = 0x1C2B30u;
    // 0x1c2b30: 0x46001832  c.eq.s      $f3, $f0
    ctx->pc = 0x1c2b30u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c2b34: 0x0  nop
    ctx->pc = 0x1c2b34u;
    // NOP
    // 0x1c2b38: 0x4501007d  bc1t        . + 4 + (0x7D << 2)
    ctx->pc = 0x1C2B38u;
    {
        const bool branch_taken_0x1c2b38 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C2B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2B38u;
            // 0x1c2b3c: 0x2410004e  addiu       $s0, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2b38) {
            ctx->pc = 0x1C2D30u;
            goto label_1c2d30;
        }
    }
    ctx->pc = 0x1C2B40u;
label_1c2b40:
    // 0x1c2b40: 0x46001045  abs.s       $f1, $f2
    ctx->pc = 0x1c2b40u;
    ctx->f[1] = FPU_ABS_S(ctx->f[2]);
    // 0x1c2b44: 0x46001805  abs.s       $f0, $f3
    ctx->pc = 0x1c2b44u;
    ctx->f[0] = FPU_ABS_S(ctx->f[3]);
    // 0x1c2b48: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c2b48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c2b4c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1C2B4Cu;
    {
        const bool branch_taken_0x1c2b4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c2b4c) {
            ctx->pc = 0x1C2B70u;
            goto label_1c2b70;
        }
    }
    ctx->pc = 0x1C2B54u;
    // 0x1c2b54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c2b54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c2b58: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1c2b58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c2b5c: 0x0  nop
    ctx->pc = 0x1c2b5cu;
    // NOP
    // 0x1c2b60: 0x45000073  bc1f        . + 4 + (0x73 << 2)
    ctx->pc = 0x1C2B60u;
    {
        const bool branch_taken_0x1c2b60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C2B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2B60u;
            // 0x1c2b64: 0x24100050  addiu       $s0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2b60) {
            ctx->pc = 0x1C2D30u;
            goto label_1c2d30;
        }
    }
    ctx->pc = 0x1C2B68u;
    // 0x1c2b68: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x1C2B68u;
    {
        const bool branch_taken_0x1c2b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2B68u;
            // 0x1c2b6c: 0x2410004f  addiu       $s0, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2b68) {
            ctx->pc = 0x1C2D30u;
            goto label_1c2d30;
        }
    }
    ctx->pc = 0x1C2B70u;
label_1c2b70:
    // 0x1c2b70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c2b70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c2b74: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x1c2b74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c2b78: 0x0  nop
    ctx->pc = 0x1c2b78u;
    // NOP
    // 0x1c2b7c: 0x4500006c  bc1f        . + 4 + (0x6C << 2)
    ctx->pc = 0x1C2B7Cu;
    {
        const bool branch_taken_0x1c2b7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C2B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2B7Cu;
            // 0x1c2b80: 0x24100052  addiu       $s0, $zero, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2b7c) {
            ctx->pc = 0x1C2D30u;
            goto label_1c2d30;
        }
    }
    ctx->pc = 0x1C2B84u;
    // 0x1c2b84: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x1C2B84u;
    {
        const bool branch_taken_0x1c2b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2B84u;
            // 0x1c2b88: 0x24100051  addiu       $s0, $zero, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2b84) {
            ctx->pc = 0x1C2D30u;
            goto label_1c2d30;
        }
    }
    ctx->pc = 0x1C2B8Cu;
label_1c2b8c:
    // 0x1c2b8c: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x1c2b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x1c2b90: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x1C2B90u;
    {
        const bool branch_taken_0x1c2b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2B90u;
            // 0x1c2b94: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2b90) {
            ctx->pc = 0x1C2CACu;
            goto label_1c2cac;
        }
    }
    ctx->pc = 0x1C2B98u;
    // 0x1c2b98: 0x8e2202d8  lw          $v0, 0x2D8($s1)
    ctx->pc = 0x1c2b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 728)));
    // 0x1c2b9c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c2b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1c2ba0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C2BA0u;
    {
        const bool branch_taken_0x1c2ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2ba0) {
            ctx->pc = 0x1C2BA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2BA0u;
            // 0x1c2ba4: 0x7a220260  lq          $v0, 0x260($s1) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 608)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C2BB0u;
            goto label_1c2bb0;
        }
    }
    ctx->pc = 0x1C2BA8u;
    // 0x1c2ba8: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x1C2BA8u;
    {
        const bool branch_taken_0x1c2ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2BA8u;
            // 0x1c2bac: 0x24100053  addiu       $s0, $zero, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2ba8) {
            ctx->pc = 0x1C2D30u;
            goto label_1c2d30;
        }
    }
    ctx->pc = 0x1C2BB0u;
label_1c2bb0:
    // 0x1c2bb0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c2bb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c2bb4: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x1c2bb4u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1c2bb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c2bb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c2bbc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c2bbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c2bc0: 0x0  nop
    ctx->pc = 0x1c2bc0u;
    // NOP
    // 0x1c2bc4: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x1C2BC4u;
    {
        const bool branch_taken_0x1c2bc4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C2BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2BC4u;
            // 0x1c2bc8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2bc4) {
            ctx->pc = 0x1C2C34u;
            goto label_1c2c34;
        }
    }
    ctx->pc = 0x1C2BCCu;
    // 0x1c2bcc: 0x8e220188  lw          $v0, 0x188($s1)
    ctx->pc = 0x1c2bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
    // 0x1c2bd0: 0x8c420260  lw          $v0, 0x260($v0)
    ctx->pc = 0x1c2bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 608)));
    // 0x1c2bd4: 0x8444010c  lh          $a0, 0x10C($v0)
    ctx->pc = 0x1c2bd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 268)));
    // 0x1c2bd8: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1C2BD8u;
    {
        const bool branch_taken_0x1c2bd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C2BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2BD8u;
            // 0x1c2bdc: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2bd8) {
            ctx->pc = 0x1C2C08u;
            goto label_1c2c08;
        }
    }
    ctx->pc = 0x1C2BE0u;
    // 0x1c2be0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C2BE0u;
    {
        const bool branch_taken_0x1c2be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2BE0u;
            // 0x1c2be4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2be0) {
            ctx->pc = 0x1C2BF8u;
            goto label_1c2bf8;
        }
    }
    ctx->pc = 0x1C2BE8u;
    // 0x1c2be8: 0x50800051  beql        $a0, $zero, . + 4 + (0x51 << 2)
    ctx->pc = 0x1C2BE8u;
    {
        const bool branch_taken_0x1c2be8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2be8) {
            ctx->pc = 0x1C2BECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2BE8u;
            // 0x1c2bec: 0x24100057  addiu       $s0, $zero, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C2D30u;
            goto label_1c2d30;
        }
    }
    ctx->pc = 0x1C2BF0u;
    // 0x1c2bf0: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x1C2BF0u;
    {
        const bool branch_taken_0x1c2bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2BF0u;
            // 0x1c2bf4: 0x8e220328  lw          $v0, 0x328($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 808)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2bf0) {
            ctx->pc = 0x1C2D38u;
            goto label_1c2d38;
        }
    }
    ctx->pc = 0x1C2BF8u;
label_1c2bf8:
    // 0x1c2bf8: 0x50820009  beql        $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C2BF8u;
    {
        const bool branch_taken_0x1c2bf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c2bf8) {
            ctx->pc = 0x1C2BFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2BF8u;
            // 0x1c2bfc: 0x2410005b  addiu       $s0, $zero, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C2C20u;
            goto label_1c2c20;
        }
    }
    ctx->pc = 0x1C2C00u;
    // 0x1c2c00: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x1C2C00u;
    {
        const bool branch_taken_0x1c2c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2C00u;
            // 0x1c2c04: 0x8e220328  lw          $v0, 0x328($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 808)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2c00) {
            ctx->pc = 0x1C2D38u;
            goto label_1c2d38;
        }
    }
    ctx->pc = 0x1C2C08u;
label_1c2c08:
    // 0x1c2c08: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1c2c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1c2c0c: 0x24100059  addiu       $s0, $zero, 0x59
    ctx->pc = 0x1c2c0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x1c2c10: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1c2c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1c2c14: 0x2403005b  addiu       $v1, $zero, 0x5B
    ctx->pc = 0x1c2c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x1c2c18: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1C2C18u;
    {
        const bool branch_taken_0x1c2c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2C18u;
            // 0x1c2c1c: 0x62800b  movn        $s0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2c18) {
            ctx->pc = 0x1C2D30u;
            goto label_1c2d30;
        }
    }
    ctx->pc = 0x1C2C20u;
label_1c2c20:
    // 0x1c2c20: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1c2c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1c2c24: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1c2c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1c2c28: 0x24030059  addiu       $v1, $zero, 0x59
    ctx->pc = 0x1c2c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x1c2c2c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1C2C2Cu;
    {
        const bool branch_taken_0x1c2c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2C2Cu;
            // 0x1c2c30: 0x62800b  movn        $s0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2c2c) {
            ctx->pc = 0x1C2D30u;
            goto label_1c2d30;
        }
    }
    ctx->pc = 0x1C2C34u;
label_1c2c34:
    // 0x1c2c34: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c2c34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c2c38: 0x0  nop
    ctx->pc = 0x1c2c38u;
    // NOP
    // 0x1c2c3c: 0x4502003c  bc1fl       . + 4 + (0x3C << 2)
    ctx->pc = 0x1C2C3Cu;
    {
        const bool branch_taken_0x1c2c3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c2c3c) {
            ctx->pc = 0x1C2C40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2C3Cu;
            // 0x1c2c40: 0x24100056  addiu       $s0, $zero, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C2D30u;
            goto label_1c2d30;
        }
    }
    ctx->pc = 0x1C2C44u;
    // 0x1c2c44: 0x8e220188  lw          $v0, 0x188($s1)
    ctx->pc = 0x1c2c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
    // 0x1c2c48: 0x8c420260  lw          $v0, 0x260($v0)
    ctx->pc = 0x1c2c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 608)));
    // 0x1c2c4c: 0x8444010c  lh          $a0, 0x10C($v0)
    ctx->pc = 0x1c2c4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 268)));
    // 0x1c2c50: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1C2C50u;
    {
        const bool branch_taken_0x1c2c50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C2C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2C50u;
            // 0x1c2c54: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2c50) {
            ctx->pc = 0x1C2C80u;
            goto label_1c2c80;
        }
    }
    ctx->pc = 0x1C2C58u;
    // 0x1c2c58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C2C58u;
    {
        const bool branch_taken_0x1c2c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2C58u;
            // 0x1c2c5c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2c58) {
            ctx->pc = 0x1C2C70u;
            goto label_1c2c70;
        }
    }
    ctx->pc = 0x1C2C60u;
    // 0x1c2c60: 0x50800033  beql        $a0, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x1C2C60u;
    {
        const bool branch_taken_0x1c2c60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2c60) {
            ctx->pc = 0x1C2C64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2C60u;
            // 0x1c2c64: 0x24100058  addiu       $s0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C2D30u;
            goto label_1c2d30;
        }
    }
    ctx->pc = 0x1C2C68u;
    // 0x1c2c68: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1C2C68u;
    {
        const bool branch_taken_0x1c2c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2C68u;
            // 0x1c2c6c: 0x8e220328  lw          $v0, 0x328($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 808)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2c68) {
            ctx->pc = 0x1C2D38u;
            goto label_1c2d38;
        }
    }
    ctx->pc = 0x1C2C70u;
label_1c2c70:
    // 0x1c2c70: 0x50820009  beql        $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C2C70u;
    {
        const bool branch_taken_0x1c2c70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c2c70) {
            ctx->pc = 0x1C2C74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2C70u;
            // 0x1c2c74: 0x2410005c  addiu       $s0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C2C98u;
            goto label_1c2c98;
        }
    }
    ctx->pc = 0x1C2C78u;
    // 0x1c2c78: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1C2C78u;
    {
        const bool branch_taken_0x1c2c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2C78u;
            // 0x1c2c7c: 0x8e220328  lw          $v0, 0x328($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 808)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2c78) {
            ctx->pc = 0x1C2D38u;
            goto label_1c2d38;
        }
    }
    ctx->pc = 0x1C2C80u;
label_1c2c80:
    // 0x1c2c80: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1c2c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1c2c84: 0x2410005a  addiu       $s0, $zero, 0x5A
    ctx->pc = 0x1c2c84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1c2c88: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1c2c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1c2c8c: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x1c2c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x1c2c90: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1C2C90u;
    {
        const bool branch_taken_0x1c2c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2C90u;
            // 0x1c2c94: 0x62800b  movn        $s0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2c90) {
            ctx->pc = 0x1C2D30u;
            goto label_1c2d30;
        }
    }
    ctx->pc = 0x1C2C98u;
label_1c2c98:
    // 0x1c2c98: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1c2c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1c2c9c: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1c2c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1c2ca0: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x1c2ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1c2ca4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1C2CA4u;
    {
        const bool branch_taken_0x1c2ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2CA4u;
            // 0x1c2ca8: 0x62800b  movn        $s0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2ca4) {
            ctx->pc = 0x1C2D30u;
            goto label_1c2d30;
        }
    }
    ctx->pc = 0x1C2CACu;
label_1c2cac:
    // 0x1c2cac: 0x30a20010  andi        $v0, $a1, 0x10
    ctx->pc = 0x1c2cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
    // 0x1c2cb0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C2CB0u;
    {
        const bool branch_taken_0x1c2cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2CB0u;
            // 0x1c2cb4: 0x30a20020  andi        $v0, $a1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2cb0) {
            ctx->pc = 0x1C2CF8u;
            goto label_1c2cf8;
        }
    }
    ctx->pc = 0x1C2CB8u;
    // 0x1c2cb8: 0x8e220188  lw          $v0, 0x188($s1)
    ctx->pc = 0x1c2cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
    // 0x1c2cbc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c2cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c2cc0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c2cc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c2cc4: 0xc44001e4  lwc1        $f0, 0x1E4($v0)
    ctx->pc = 0x1c2cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2cc8: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x1c2cc8u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x1c2ccc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c2cccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c2cd0: 0x0  nop
    ctx->pc = 0x1c2cd0u;
    // NOP
    // 0x1c2cd4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1C2CD4u;
    {
        const bool branch_taken_0x1c2cd4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C2CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2CD4u;
            // 0x1c2cd8: 0x24100061  addiu       $s0, $zero, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2cd4) {
            ctx->pc = 0x1C2CF0u;
            goto label_1c2cf0;
        }
    }
    ctx->pc = 0x1C2CDCu;
    // 0x1c2cdc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1c2cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c2ce0: 0xc0873a6  jal         func_21CE98
    ctx->pc = 0x1C2CE0u;
    SET_GPR_U32(ctx, 31, 0x1C2CE8u);
    ctx->pc = 0x1C2CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2CE0u;
            // 0x1c2ce4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CE98u;
    if (runtime->hasFunction(0x21CE98u)) {
        auto targetFn = runtime->lookupFunction(0x21CE98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2CE8u; }
        if (ctx->pc != 0x1C2CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021CE98_0x21ce98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2CE8u; }
        if (ctx->pc != 0x1C2CE8u) { return; }
    }
    ctx->pc = 0x1C2CE8u;
    // 0x1c2ce8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1C2CE8u;
    {
        const bool branch_taken_0x1c2ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2CE8u;
            // 0x1c2cec: 0x8e220328  lw          $v0, 0x328($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 808)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2ce8) {
            ctx->pc = 0x1C2D38u;
            goto label_1c2d38;
        }
    }
    ctx->pc = 0x1C2CF0u;
label_1c2cf0:
    // 0x1c2cf0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1C2CF0u;
    {
        const bool branch_taken_0x1c2cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2CF0u;
            // 0x1c2cf4: 0x2410005f  addiu       $s0, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2cf0) {
            ctx->pc = 0x1C2D30u;
            goto label_1c2d30;
        }
    }
    ctx->pc = 0x1C2CF8u;
label_1c2cf8:
    // 0x1c2cf8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C2CF8u;
    {
        const bool branch_taken_0x1c2cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2CF8u;
            // 0x1c2cfc: 0x24100062  addiu       $s0, $zero, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2cf8) {
            ctx->pc = 0x1C2D30u;
            goto label_1c2d30;
        }
    }
    ctx->pc = 0x1C2D00u;
    // 0x1c2d00: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x1c2d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x1c2d04: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C2D04u;
    {
        const bool branch_taken_0x1c2d04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2D04u;
            // 0x1c2d08: 0x2410005d  addiu       $s0, $zero, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2d04) {
            ctx->pc = 0x1C2D30u;
            goto label_1c2d30;
        }
    }
    ctx->pc = 0x1C2D0Cu;
    // 0x1c2d0c: 0x7a220260  lq          $v0, 0x260($s1)
    ctx->pc = 0x1c2d0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x1c2d10: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x1c2d10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c2d14: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c2d14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c2d18: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x1c2d18u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1c2d1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c2d1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c2d20: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1c2d20u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c2d24: 0x0  nop
    ctx->pc = 0x1c2d24u;
    // NOP
    // 0x1c2d28: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1C2D28u;
    {
        const bool branch_taken_0x1c2d28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c2d28) {
            ctx->pc = 0x1C2D2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2D28u;
            // 0x1c2d2c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C2D30u;
            goto label_1c2d30;
        }
    }
    ctx->pc = 0x1C2D30u;
label_1c2d30:
    // 0x1c2d30: 0x8e220328  lw          $v0, 0x328($s1)
    ctx->pc = 0x1c2d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 808)));
    // 0x1c2d34: 0x0  nop
    ctx->pc = 0x1c2d34u;
    // NOP
label_1c2d38:
    // 0x1c2d38: 0xa45000e0  sh          $s0, 0xE0($v0)
    ctx->pc = 0x1c2d38u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 224), (uint16_t)GPR_U32(ctx, 16));
    // 0x1c2d3c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c2d3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c2d40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c2d40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2d44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c2d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2d48: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2D48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2D48u;
            // 0x1c2d4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C2B40u: goto label_1c2b40;
            case 0x1C2B70u: goto label_1c2b70;
            case 0x1C2B8Cu: goto label_1c2b8c;
            case 0x1C2BB0u: goto label_1c2bb0;
            case 0x1C2BF8u: goto label_1c2bf8;
            case 0x1C2C08u: goto label_1c2c08;
            case 0x1C2C20u: goto label_1c2c20;
            case 0x1C2C34u: goto label_1c2c34;
            case 0x1C2C70u: goto label_1c2c70;
            case 0x1C2C80u: goto label_1c2c80;
            case 0x1C2C98u: goto label_1c2c98;
            case 0x1C2CACu: goto label_1c2cac;
            case 0x1C2CF0u: goto label_1c2cf0;
            case 0x1C2CF8u: goto label_1c2cf8;
            case 0x1C2D30u: goto label_1c2d30;
            case 0x1C2D38u: goto label_1c2d38;
            case 0x1C2DA8u: goto label_1c2da8;
            case 0x1C2DD0u: goto label_1c2dd0;
            case 0x1C2E08u: goto label_1c2e08;
            case 0x1C2E0Cu: goto label_1c2e0c;
            case 0x1C2E34u: goto label_1c2e34;
            case 0x1C2E70u: goto label_1c2e70;
            case 0x1C2EC8u: goto label_1c2ec8;
            case 0x1C3058u: goto label_1c3058;
            case 0x1C305Cu: goto label_1c305c;
            case 0x1C3070u: goto label_1c3070;
            case 0x1C30B4u: goto label_1c30b4;
            case 0x1C3108u: goto label_1c3108;
            case 0x1C3110u: goto label_1c3110;
            case 0x1C3114u: goto label_1c3114;
            case 0x1C3140u: goto label_1c3140;
            case 0x1C3268u: goto label_1c3268;
            case 0x1C3308u: goto label_1c3308;
            case 0x1C331Cu: goto label_1c331c;
            case 0x1C3320u: goto label_1c3320;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C2D50u;
    // 0x1c2d50: 0x27bdfdc0  addiu       $sp, $sp, -0x240
    ctx->pc = 0x1c2d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966720));
    // 0x1c2d54: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1c2d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1c2d58: 0x7fb701c0  sq          $s7, 0x1C0($sp)
    ctx->pc = 0x1c2d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 23));
    // 0x1c2d5c: 0x8c5777b4  lw          $s7, 0x77B4($v0)
    ctx->pc = 0x1c2d5cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30644)));
    // 0x1c2d60: 0x7fb00230  sq          $s0, 0x230($sp)
    ctx->pc = 0x1c2d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 16));
    // 0x1c2d64: 0x7fb10220  sq          $s1, 0x220($sp)
    ctx->pc = 0x1c2d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 17));
    // 0x1c2d68: 0x7fb20210  sq          $s2, 0x210($sp)
    ctx->pc = 0x1c2d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 18));
    // 0x1c2d6c: 0x7fb30200  sq          $s3, 0x200($sp)
    ctx->pc = 0x1c2d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 19));
    // 0x1c2d70: 0x7fb401f0  sq          $s4, 0x1F0($sp)
    ctx->pc = 0x1c2d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 20));
    // 0x1c2d74: 0x7fb501e0  sq          $s5, 0x1E0($sp)
    ctx->pc = 0x1c2d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 21));
    // 0x1c2d78: 0x7fb601d0  sq          $s6, 0x1D0($sp)
    ctx->pc = 0x1c2d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 22));
    // 0x1c2d7c: 0x7fbe01b0  sq          $fp, 0x1B0($sp)
    ctx->pc = 0x1c2d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 30));
    // 0x1c2d80: 0x12e00166  beqz        $s7, . + 4 + (0x166 << 2)
    ctx->pc = 0x1C2D80u;
    {
        const bool branch_taken_0x1c2d80 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2D80u;
            // 0x1c2d84: 0xffbf01a0  sd          $ra, 0x1A0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2d80) {
            ctx->pc = 0x1C331Cu;
            goto label_1c331c;
        }
    }
    ctx->pc = 0x1C2D88u;
    // 0x1c2d88: 0x8ee300fc  lw          $v1, 0xFC($s7)
    ctx->pc = 0x1c2d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 252)));
    // 0x1c2d8c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C2D8Cu;
    {
        const bool branch_taken_0x1c2d8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2D8Cu;
            // 0x1c2d90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2d8c) {
            ctx->pc = 0x1C2DD0u;
            goto label_1c2dd0;
        }
    }
    ctx->pc = 0x1C2D94u;
    // 0x1c2d94: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1c2d94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1c2d98: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c2d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c2d9c: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C2D9Cu;
    {
        const bool branch_taken_0x1c2d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C2DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2D9Cu;
            // 0x1c2da0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2d9c) {
            ctx->pc = 0x1C2DD0u;
            goto label_1c2dd0;
        }
    }
    ctx->pc = 0x1C2DA4u;
    // 0x1c2da4: 0x0  nop
    ctx->pc = 0x1c2da4u;
    // NOP
label_1c2da8:
    // 0x1c2da8: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1c2da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1c2dac: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c2dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c2db0: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x1c2db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1c2db4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C2DB4u;
    {
        const bool branch_taken_0x1c2db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2DB4u;
            // 0x1c2db8: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2db4) {
            ctx->pc = 0x1C2DD0u;
            goto label_1c2dd0;
        }
    }
    ctx->pc = 0x1C2DBCu;
    // 0x1c2dbc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c2dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c2dc0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1c2dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2dc4: 0x1443fff8  bne         $v0, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1C2DC4u;
    {
        const bool branch_taken_0x1c2dc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C2DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2DC4u;
            // 0x1c2dc8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2dc4) {
            ctx->pc = 0x1C2DA8u;
            runtime->cooperativeGuestYield();
            goto label_1c2da8;
        }
    }
    ctx->pc = 0x1C2DCCu;
    // 0x1c2dcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c2dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2dd0:
    // 0x1c2dd0: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x1c2dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x1c2dd4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C2DD4u;
    {
        const bool branch_taken_0x1c2dd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2DD4u;
            // 0x1c2dd8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2dd4) {
            ctx->pc = 0x1C2E0Cu;
            goto label_1c2e0c;
        }
    }
    ctx->pc = 0x1C2DDCu;
    // 0x1c2ddc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1c2ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c2de0: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x1c2de0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x1c2de4: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1c2de4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1c2de8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c2de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c2dec: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x1c2decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x1c2df0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1c2df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1c2df4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1c2df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c2df8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c2df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c2dfc: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C2DFCu;
    {
        const bool branch_taken_0x1c2dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1C2E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2DFCu;
            // 0x1c2e00: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2dfc) {
            ctx->pc = 0x1C2E08u;
            goto label_1c2e08;
        }
    }
    ctx->pc = 0x1C2E04u;
    // 0x1c2e04: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c2e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1c2e08:
    // 0x1c2e08: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c2e08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c2e0c:
    // 0x1c2e0c: 0x12400144  beqz        $s2, . + 4 + (0x144 << 2)
    ctx->pc = 0x1C2E0Cu;
    {
        const bool branch_taken_0x1c2e0c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2E0Cu;
            // 0x1c2e10: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2e0c) {
            ctx->pc = 0x1C3320u;
            goto label_1c3320;
        }
    }
    ctx->pc = 0x1C2E14u;
    // 0x1c2e14: 0x8e430174  lw          $v1, 0x174($s2)
    ctx->pc = 0x1c2e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
    // 0x1c2e18: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1c2e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1c2e1c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C2E1Cu;
    {
        const bool branch_taken_0x1c2e1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2e1c) {
            ctx->pc = 0x1C2E20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2E1Cu;
            // 0x1c2e20: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C2E34u;
            goto label_1c2e34;
        }
    }
    ctx->pc = 0x1C2E24u;
    // 0x1c2e24: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1c2e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1c2e28: 0x1040013d  beqz        $v0, . + 4 + (0x13D << 2)
    ctx->pc = 0x1C2E28u;
    {
        const bool branch_taken_0x1c2e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2E28u;
            // 0x1c2e2c: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2e28) {
            ctx->pc = 0x1C3320u;
            goto label_1c3320;
        }
    }
    ctx->pc = 0x1C2E30u;
    // 0x1c2e30: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c2e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1c2e34:
    // 0x1c2e34: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x1c2e34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1c2e38: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x1c2e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x1c2e3c: 0x40f809  jalr        $v0
    ctx->pc = 0x1C2E3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C2E44u);
        ctx->pc = 0x1C2E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2E3Cu;
            // 0x1c2e40: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C2E44u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C2B40u: goto label_1c2b40;
            case 0x1C2B70u: goto label_1c2b70;
            case 0x1C2B8Cu: goto label_1c2b8c;
            case 0x1C2BB0u: goto label_1c2bb0;
            case 0x1C2BF8u: goto label_1c2bf8;
            case 0x1C2C08u: goto label_1c2c08;
            case 0x1C2C20u: goto label_1c2c20;
            case 0x1C2C34u: goto label_1c2c34;
            case 0x1C2C70u: goto label_1c2c70;
            case 0x1C2C80u: goto label_1c2c80;
            case 0x1C2C98u: goto label_1c2c98;
            case 0x1C2CACu: goto label_1c2cac;
            case 0x1C2CF0u: goto label_1c2cf0;
            case 0x1C2CF8u: goto label_1c2cf8;
            case 0x1C2D30u: goto label_1c2d30;
            case 0x1C2D38u: goto label_1c2d38;
            case 0x1C2DA8u: goto label_1c2da8;
            case 0x1C2DD0u: goto label_1c2dd0;
            case 0x1C2E08u: goto label_1c2e08;
            case 0x1C2E0Cu: goto label_1c2e0c;
            case 0x1C2E34u: goto label_1c2e34;
            case 0x1C2E70u: goto label_1c2e70;
            case 0x1C2EC8u: goto label_1c2ec8;
            case 0x1C3058u: goto label_1c3058;
            case 0x1C305Cu: goto label_1c305c;
            case 0x1C3070u: goto label_1c3070;
            case 0x1C30B4u: goto label_1c30b4;
            case 0x1C3108u: goto label_1c3108;
            case 0x1C3110u: goto label_1c3110;
            case 0x1C3114u: goto label_1c3114;
            case 0x1C3140u: goto label_1c3140;
            case 0x1C3268u: goto label_1c3268;
            case 0x1C3308u: goto label_1c3308;
            case 0x1C331Cu: goto label_1c331c;
            case 0x1C3320u: goto label_1c3320;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C2E44u; }
            if (ctx->pc != 0x1C2E44u) { return; }
        }
        }
    }
    ctx->pc = 0x1C2E44u;
    // 0x1c2e44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c2e44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2e48: 0x122000af  beqz        $s1, . + 4 + (0xAF << 2)
    ctx->pc = 0x1C2E48u;
    {
        const bool branch_taken_0x1c2e48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2E48u;
            // 0x1c2e4c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2e48) {
            ctx->pc = 0x1C3108u;
            goto label_1c3108;
        }
    }
    ctx->pc = 0x1C2E50u;
    // 0x1c2e50: 0x8e360020  lw          $s6, 0x20($s1)
    ctx->pc = 0x1c2e50u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1c2e54: 0x12c000ae  beqz        $s6, . + 4 + (0xAE << 2)
    ctx->pc = 0x1C2E54u;
    {
        const bool branch_taken_0x1c2e54 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2E54u;
            // 0x1c2e58: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2e54) {
            ctx->pc = 0x1C3110u;
            goto label_1c3110;
        }
    }
    ctx->pc = 0x1C2E5Cu;
    // 0x1c2e5c: 0x8ef40104  lw          $s4, 0x104($s7)
    ctx->pc = 0x1c2e5cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 260)));
    // 0x1c2e60: 0x1ac0012e  blez        $s6, . + 4 + (0x12E << 2)
    ctx->pc = 0x1C2E60u;
    {
        const bool branch_taken_0x1c2e60 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x1C2E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2E60u;
            // 0x1c2e64: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2e60) {
            ctx->pc = 0x1C331Cu;
            goto label_1c331c;
        }
    }
    ctx->pc = 0x1C2E68u;
    // 0x1c2e68: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x1c2e68u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2e6c: 0x0  nop
    ctx->pc = 0x1c2e6cu;
    // NOP
label_1c2e70:
    // 0x1c2e70: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x1c2e70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1c2e74: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c2e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c2e78: 0x12020077  beq         $s0, $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x1C2E78u;
    {
        const bool branch_taken_0x1c2e78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C2E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2E78u;
            // 0x1c2e7c: 0x13f080  sll         $fp, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2e78) {
            ctx->pc = 0x1C3058u;
            goto label_1c3058;
        }
    }
    ctx->pc = 0x1C2E80u;
    // 0x1c2e80: 0x101142  srl         $v0, $s0, 5
    ctx->pc = 0x1c2e80u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
    // 0x1c2e84: 0x3204001f  andi        $a0, $s0, 0x1F
    ctx->pc = 0x1c2e84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x1c2e88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c2e88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c2e8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c2e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2e90: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1c2e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1c2e94: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x1c2e94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x1c2e98: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1c2e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1c2e9c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c2e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1c2ea0: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x1C2EA0u;
    {
        const bool branch_taken_0x1c2ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2EA0u;
            // 0x1c2ea4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2ea0) {
            ctx->pc = 0x1C3058u;
            goto label_1c3058;
        }
    }
    ctx->pc = 0x1C2EA8u;
    // 0x1c2ea8: 0xde830040  ld          $v1, 0x40($s4)
    ctx->pc = 0x1c2ea8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x1c2eac: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1c2eacu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1c2eb0: 0x50650005  beql        $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C2EB0u;
    {
        const bool branch_taken_0x1c2eb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1c2eb0) {
            ctx->pc = 0x1C2EB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2EB0u;
            // 0x1c2eb4: 0x8e84008c  lw          $a0, 0x8C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C2EC8u;
            goto label_1c2ec8;
        }
    }
    ctx->pc = 0x1C2EB8u;
    // 0x1c2eb8: 0xc04da64  jal         func_136990
    ctx->pc = 0x1C2EB8u;
    SET_GPR_U32(ctx, 31, 0x1C2EC0u);
    ctx->pc = 0x1C2EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2EB8u;
            // 0x1c2ebc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2EC0u; }
        if (ctx->pc != 0x1C2EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2EC0u; }
        if (ctx->pc != 0x1C2EC0u) { return; }
    }
    ctx->pc = 0x1C2EC0u;
    // 0x1c2ec0: 0x8e84008c  lw          $a0, 0x8C($s4)
    ctx->pc = 0x1c2ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
    // 0x1c2ec4: 0x0  nop
    ctx->pc = 0x1c2ec4u;
    // NOP
label_1c2ec8:
    // 0x1c2ec8: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x1c2ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1c2ecc: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1c2eccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1c2ed0: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1c2ed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1c2ed4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c2ed4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c2ed8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1c2ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1c2edc: 0x24632820  addiu       $v1, $v1, 0x2820
    ctx->pc = 0x1c2edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10272));
    // 0x1c2ee0: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x1c2ee0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c2ee4: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x1c2ee4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c2ee8: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1c2ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1c2eec: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x1c2eecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c2ef0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1c2ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1c2ef4: 0xd8850020  lqc2        $vf5, 0x20($a0)
    ctx->pc = 0x1c2ef4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1c2ef8: 0xfba50030  sqc2        $vf5, 0x30($sp)
    ctx->pc = 0x1c2ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1c2efc: 0xd8860030  lqc2        $vf6, 0x30($a0)
    ctx->pc = 0x1c2efcu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1c2f00: 0x4a833045  vsuby.y     $vf1, $vf6, $vf3y
    ctx->pc = 0x1c2f00u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c2f04: 0x4be109fd  vabs.xyzw   $vf1, $vf1
    ctx->pc = 0x1c2f04u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c2f08: 0xfba60040  sqc2        $vf6, 0x40($sp)
    ctx->pc = 0x1c2f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1c2f0c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1c2f0cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c2f10: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x1c2f10u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1c2f14: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c2f14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c2f18: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x1c2f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2f1c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1c2f1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1c2f20: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c2f20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c2f24: 0x0  nop
    ctx->pc = 0x1c2f24u;
    // NOP
    // 0x1c2f28: 0x4502004c  bc1fl       . + 4 + (0x4C << 2)
    ctx->pc = 0x1C2F28u;
    {
        const bool branch_taken_0x1c2f28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c2f28) {
            ctx->pc = 0x1C2F2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2F28u;
            // 0x1c2f2c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C305Cu;
            goto label_1c305c;
        }
    }
    ctx->pc = 0x1C2F30u;
    // 0x1c2f30: 0xfba50120  sqc2        $vf5, 0x120($sp)
    ctx->pc = 0x1c2f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1c2f34: 0x8e260030  lw          $a2, 0x30($s1)
    ctx->pc = 0x1c2f34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1c2f38: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x1c2f38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1c2f3c: 0x4be12858  vmulx.xyzw  $vf1, $vf5, $vf1x
    ctx->pc = 0x1c2f3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c2f40: 0xfba10130  sqc2        $vf1, 0x130($sp)
    ctx->pc = 0x1c2f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c2f44: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1c2f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1c2f48: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1c2f48u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c2f4c: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1c2f4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c2f50: 0x4be1322c  vsub.xyzw   $vf8, $vf6, $vf1
    ctx->pc = 0x1c2f50u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1c2f54: 0x4be8186c  vsub.xyzw   $vf1, $vf3, $vf8
    ctx->pc = 0x1c2f54u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c2f58: 0x4be1286a  vmul.xyzw   $vf1, $vf5, $vf1
    ctx->pc = 0x1c2f58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c2f5c: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1c2f5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c2f60: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1c2f60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c2f64: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1c2f64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c2f68: 0x48281000  qmfc2.ni    $t0, $vf2
    ctx->pc = 0x1c2f68u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c2f6c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x1c2f6cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c2f70: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1c2f70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c2f74: 0x0  nop
    ctx->pc = 0x1c2f74u;
    // NOP
    // 0x1c2f78: 0x45020038  bc1fl       . + 4 + (0x38 << 2)
    ctx->pc = 0x1C2F78u;
    {
        const bool branch_taken_0x1c2f78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c2f78) {
            ctx->pc = 0x1C2F7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2F78u;
            // 0x1c2f7c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C305Cu;
            goto label_1c305c;
        }
    }
    ctx->pc = 0x1C2F80u;
    // 0x1c2f80: 0x4be3306c  vsub.xyzw   $vf1, $vf6, $vf3
    ctx->pc = 0x1c2f80u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c2f84: 0xfba10140  sqc2        $vf1, 0x140($sp)
    ctx->pc = 0x1c2f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c2f88: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x1c2f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1c2f8c: 0x48a23800  qmtc2.ni    $v0, $vf7
    ctx->pc = 0x1c2f8cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c2f90: 0x4a870040  vaddx.y     $vf1, $vf0, $vf7x
    ctx->pc = 0x1c2f90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c2f94: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1c2f94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c2f98: 0xfba10140  sqc2        $vf1, 0x140($sp)
    ctx->pc = 0x1c2f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c2f9c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1c2f9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c2fa0: 0xc6210028  lwc1        $f1, 0x28($s1)
    ctx->pc = 0x1c2fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c2fa4: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1c2fa4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c2fa8: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1c2fa8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c2fac: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1c2facu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1c2fb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c2fb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c2fb4: 0x46000004  c1          0x4
    ctx->pc = 0x1c2fb4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1c2fb8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c2fb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c2fbc: 0x0  nop
    ctx->pc = 0x1c2fbcu;
    // NOP
    // 0x1c2fc0: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x1C2FC0u;
    {
        const bool branch_taken_0x1c2fc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C2FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2FC0u;
            // 0x1c2fc4: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2fc0) {
            ctx->pc = 0x1C3058u;
            goto label_1c3058;
        }
    }
    ctx->pc = 0x1C2FC8u;
    // 0x1c2fc8: 0x244227d0  addiu       $v0, $v0, 0x27D0
    ctx->pc = 0x1c2fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10192));
    // 0x1c2fcc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c2fccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c2fd0: 0x4be520aa  vmul.xyzw   $vf2, $vf4, $vf5
    ctx->pc = 0x1c2fd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c2fd4: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1c2fd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c2fd8: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1c2fd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c2fdc: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x1c2fdcu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c2fe0: 0x4be340ac  vsub.xyzw   $vf2, $vf8, $vf3
    ctx->pc = 0x1c2fe0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c2fe4: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x1c2fe4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c2fe8: 0xfba20140  sqc2        $vf2, 0x140($sp)
    ctx->pc = 0x1c2fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c2fec: 0x4a870080  vaddx.y     $vf2, $vf0, $vf7x
    ctx->pc = 0x1c2fecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c2ff0: 0xfba20140  sqc2        $vf2, 0x140($sp)
    ctx->pc = 0x1c2ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c2ff4: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x1c2ff4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1c2ff8: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1c2ff8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c2ffc: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1c2ffcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c3000: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1c3000u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1c3004: 0x4a0003bf  vwaitq
    ctx->pc = 0x1c3004u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1c3008: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1c3008u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c300c: 0x4a0002ff  vnop
    ctx->pc = 0x1c300cu;
    // NOP operation, no action needed for VU0
    // 0x1c3010: 0x4a0002ff  vnop
    ctx->pc = 0x1c3010u;
    // NOP operation, no action needed for VU0
    // 0x1c3014: 0x4be2212a  vmul.xyzw   $vf4, $vf4, $vf2
    ctx->pc = 0x1c3014u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1c3018: 0xfba20050  sqc2        $vf2, 0x50($sp)
    ctx->pc = 0x1c3018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c301c: 0x4b042041  vaddy.x     $vf1, $vf4, $vf4y
    ctx->pc = 0x1c301cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c3020: 0xc620002c  lwc1        $f0, 0x2C($s1)
    ctx->pc = 0x1c3020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c3024: 0x4b040842  vaddz.x     $vf1, $vf1, $vf4z
    ctx->pc = 0x1c3024u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c3028: 0x48280800  qmfc2.ni    $t0, $vf1
    ctx->pc = 0x1c3028u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c302c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1c302cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1c3030: 0x44881000  mtc1        $t0, $f2
    ctx->pc = 0x1c3030u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c3034: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c3034u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c3038: 0x0  nop
    ctx->pc = 0x1c3038u;
    // NOP
    // 0x1c303c: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x1C303Cu;
    {
        const bool branch_taken_0x1c303c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c303c) {
            ctx->pc = 0x1C3040u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C303Cu;
            // 0x1c3040: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C305Cu;
            goto label_1c305c;
        }
    }
    ctx->pc = 0x1C3044u;
    // 0x1c3044: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x1c3044u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c3048: 0x0  nop
    ctx->pc = 0x1c3048u;
    // NOP
    // 0x1c304c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1C304Cu;
    {
        const bool branch_taken_0x1c304c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C3050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C304Cu;
            // 0x1c3050: 0x3d11021  addu        $v0, $fp, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c304c) {
            ctx->pc = 0x1C3070u;
            goto label_1c3070;
        }
    }
    ctx->pc = 0x1C3054u;
    // 0x1c3054: 0x0  nop
    ctx->pc = 0x1c3054u;
    // NOP
label_1c3058:
    // 0x1c3058: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1c3058u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1c305c:
    // 0x1c305c: 0x276102a  slt         $v0, $s3, $s6
    ctx->pc = 0x1c305cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x1c3060: 0x1440ff83  bnez        $v0, . + 4 + (-0x7D << 2)
    ctx->pc = 0x1C3060u;
    {
        const bool branch_taken_0x1c3060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3060u;
            // 0x1c3064: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3060) {
            ctx->pc = 0x1C2E70u;
            runtime->cooperativeGuestYield();
            goto label_1c2e70;
        }
    }
    ctx->pc = 0x1C3068u;
    // 0x1c3068: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x1C3068u;
    {
        const bool branch_taken_0x1c3068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C306Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3068u;
            // 0x1c306c: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3068) {
            ctx->pc = 0x1C3320u;
            goto label_1c3320;
        }
    }
    ctx->pc = 0x1C3070u;
label_1c3070:
    // 0x1c3070: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x1c3070u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x1c3074: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x1c3074u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c3078: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x1c3078u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x1c307c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1c307cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1c3080: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x1c3080u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x1c3084: 0xac574f40  sw          $s7, 0x4F40($v0)
    ctx->pc = 0x1c3084u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20288), GPR_U32(ctx, 23));
    // 0x1c3088: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1c3088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1c308c: 0xacb24f44  sw          $s2, 0x4F44($a1)
    ctx->pc = 0x1c308cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20292), GPR_U32(ctx, 18));
    // 0x1c3090: 0x24842800  addiu       $a0, $a0, 0x2800
    ctx->pc = 0x1c3090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10240));
    // 0x1c3094: 0xacc84f48  sw          $t0, 0x4F48($a2)
    ctx->pc = 0x1c3094u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20296), GPR_U32(ctx, 8));
    // 0x1c3098: 0x246327f0  addiu       $v1, $v1, 0x27F0
    ctx->pc = 0x1c3098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10224));
    // 0x1c309c: 0xf8860000  sqc2        $vf6, 0x0($a0)
    ctx->pc = 0x1c309cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1c30a0: 0x3c070030  lui         $a3, 0x30
    ctx->pc = 0x1c30a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)48 << 16));
    // 0x1c30a4: 0xf8650000  sqc2        $vf5, 0x0($v1)
    ctx->pc = 0x1c30a4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1c30a8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1c30a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c30ac: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x1C30ACu;
    {
        const bool branch_taken_0x1c30ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C30B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C30ACu;
            // 0x1c30b0: 0xacf34f4c  sw          $s3, 0x4F4C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20300), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c30ac) {
            ctx->pc = 0x1C3320u;
            goto label_1c3320;
        }
    }
    ctx->pc = 0x1C30B4u;
label_1c30b4:
    // 0x1c30b4: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x1c30b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x1c30b8: 0x784a00a0  lq          $t2, 0xA0($v0)
    ctx->pc = 0x1c30b8u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1c30bc: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x1c30bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x1c30c0: 0x78470060  lq          $a3, 0x60($v0)
    ctx->pc = 0x1c30c0u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1c30c4: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1c30c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1c30c8: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1c30c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1c30cc: 0xacd24f44  sw          $s2, 0x4F44($a2)
    ctx->pc = 0x1c30ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20292), GPR_U32(ctx, 18));
    // 0x1c30d0: 0xac574f40  sw          $s7, 0x4F40($v0)
    ctx->pc = 0x1c30d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20288), GPR_U32(ctx, 23));
    // 0x1c30d4: 0x24a527e0  addiu       $a1, $a1, 0x27E0
    ctx->pc = 0x1c30d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10208));
    // 0x1c30d8: 0x7ca70000  sq          $a3, 0x0($a1)
    ctx->pc = 0x1c30d8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 7));
    // 0x1c30dc: 0x246327f0  addiu       $v1, $v1, 0x27F0
    ctx->pc = 0x1c30dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10224));
    // 0x1c30e0: 0x7c6a0000  sq          $t2, 0x0($v1)
    ctx->pc = 0x1c30e0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 10));
    // 0x1c30e4: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x1c30e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x1c30e8: 0x3c090030  lui         $t1, 0x30
    ctx->pc = 0x1c30e8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)48 << 16));
    // 0x1c30ec: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1c30ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c30f0: 0x24842800  addiu       $a0, $a0, 0x2800
    ctx->pc = 0x1c30f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10240));
    // 0x1c30f4: 0xad284f48  sw          $t0, 0x4F48($t1)
    ctx->pc = 0x1c30f4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20296), GPR_U32(ctx, 8));
    // 0x1c30f8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1c30f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c30fc: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x1C30FCu;
    {
        const bool branch_taken_0x1c30fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C30FCu;
            // 0x1c3100: 0xf8830000  sqc2        $vf3, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c30fc) {
            ctx->pc = 0x1C3320u;
            goto label_1c3320;
        }
    }
    ctx->pc = 0x1C3104u;
    // 0x1c3104: 0x0  nop
    ctx->pc = 0x1c3104u;
    // NOP
label_1c3108:
    // 0x1c3108: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c3108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c310c: 0x0  nop
    ctx->pc = 0x1c310cu;
    // NOP
label_1c3110:
    // 0x1c3110: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c3110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c3114:
    // 0x1c3114: 0x0  nop
    ctx->pc = 0x1c3114u;
    // NOP
    // 0x1c3118: 0x0  nop
    ctx->pc = 0x1c3118u;
    // NOP
    // 0x1c311c: 0x0  nop
    ctx->pc = 0x1c311cu;
    // NOP
    // 0x1c3120: 0x0  nop
    ctx->pc = 0x1c3120u;
    // NOP
    // 0x1c3124: 0x0  nop
    ctx->pc = 0x1c3124u;
    // NOP
    // 0x1c3128: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C3128u;
    {
        const bool branch_taken_0x1c3128 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C312Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3128u;
            // 0x1c312c: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3128) {
            ctx->pc = 0x1C3114u;
            runtime->cooperativeGuestYield();
            goto label_1c3114;
        }
    }
    ctx->pc = 0x1C3130u;
    // 0x1c3130: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1c3130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c3134: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c3134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c3138: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c3138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c313c: 0x0  nop
    ctx->pc = 0x1c313cu;
    // NOP
label_1c3140:
    // 0x1c3140: 0x0  nop
    ctx->pc = 0x1c3140u;
    // NOP
    // 0x1c3144: 0x0  nop
    ctx->pc = 0x1c3144u;
    // NOP
    // 0x1c3148: 0x0  nop
    ctx->pc = 0x1c3148u;
    // NOP
    // 0x1c314c: 0x0  nop
    ctx->pc = 0x1c314cu;
    // NOP
    // 0x1c3150: 0x0  nop
    ctx->pc = 0x1c3150u;
    // NOP
    // 0x1c3154: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C3154u;
    {
        const bool branch_taken_0x1c3154 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C3158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3154u;
            // 0x1c3158: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3154) {
            ctx->pc = 0x1C3140u;
            runtime->cooperativeGuestYield();
            goto label_1c3140;
        }
    }
    ctx->pc = 0x1C315Cu;
    // 0x1c315c: 0x26470050  addiu       $a3, $s2, 0x50
    ctx->pc = 0x1c315cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x1c3160: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x1c3160u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c3164: 0xd8e10020  lqc2        $vf1, 0x20($a3)
    ctx->pc = 0x1c3164u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1c3168: 0xfba10150  sqc2        $vf1, 0x150($sp)
    ctx->pc = 0x1c3168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c316c: 0x4be1106c  vsub.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x1c316cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c3170: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x1c3170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c3174: 0xda430050  lqc2        $vf3, 0x50($s2)
    ctx->pc = 0x1c3174u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1c3178: 0xfba300b0  sqc2        $vf3, 0xB0($sp)
    ctx->pc = 0x1c3178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1c317c: 0x4be1106c  vsub.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x1c317cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c3180: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x1c3180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c3184: 0x4be310ac  vsub.xyzw   $vf2, $vf2, $vf3
    ctx->pc = 0x1c3184u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c3188: 0xfba200d0  sqc2        $vf2, 0xD0($sp)
    ctx->pc = 0x1c3188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c318c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1c318cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1c3190: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1c3190u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c3194: 0xda410120  lqc2        $vf1, 0x120($s2)
    ctx->pc = 0x1c3194u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 288)));
    // 0x1c3198: 0x4b010046  vsubz.x     $vf1, $vf0, $vf1z
    ctx->pc = 0x1c3198u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c319c: 0x4b020858  vmulx.x     $vf1, $vf1, $vf2x
    ctx->pc = 0x1c319cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c31a0: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1c31a0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c31a4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1c31a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31a8: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x1c31a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x1c31ac: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x1c31acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1c31b0: 0x70652389  pcpyld      $a0, $v1, $a1
    ctx->pc = 0x1c31b0u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x1c31b4: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x1c31b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x1c31b8: 0x70c21389  pcpyld      $v0, $a2, $v0
    ctx->pc = 0x1c31b8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x1c31bc: 0x704414c8  ppacw       $v0, $v0, $a0
    ctx->pc = 0x1c31bcu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x1c31c0: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x1c31c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x1c31c4: 0x7fa20160  sq          $v0, 0x160($sp)
    ctx->pc = 0x1c31c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 2));
    // 0x1c31c8: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x1c31c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x1c31cc: 0xda410120  lqc2        $vf1, 0x120($s2)
    ctx->pc = 0x1c31ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 288)));
    // 0x1c31d0: 0x4b020858  vmulx.x     $vf1, $vf1, $vf2x
    ctx->pc = 0x1c31d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c31d4: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1c31d4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c31d8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1c31d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31dc: 0x3c084180  lui         $t0, 0x4180
    ctx->pc = 0x1c31dcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16768 << 16));
    // 0x1c31e0: 0x71021389  pcpyld      $v0, $t0, $v0
    ctx->pc = 0x1c31e0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 2)));
    // 0x1c31e4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1c31e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1c31e8: 0x24060000  addiu       $a2, $zero, 0x0
    ctx->pc = 0x1c31e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1c31ec: 0x70a61b89  pcpyld      $v1, $a1, $a2
    ctx->pc = 0x1c31ecu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
    // 0x1c31f0: 0x706214c8  ppacw       $v0, $v1, $v0
    ctx->pc = 0x1c31f0u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1c31f4: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x1c31f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x1c31f8: 0x7fa20170  sq          $v0, 0x170($sp)
    ctx->pc = 0x1c31f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 2));
    // 0x1c31fc: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x1c31fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x1c3200: 0xda410120  lqc2        $vf1, 0x120($s2)
    ctx->pc = 0x1c3200u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 288)));
    // 0x1c3204: 0x4a420858  vmulx.z     $vf1, $vf1, $vf2x
    ctx->pc = 0x1c3204u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c3208: 0x4b010042  vaddz.x     $vf1, $vf0, $vf1z
    ctx->pc = 0x1c3208u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c320c: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x1c320cu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c3210: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1c3210u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3214: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x1c3214u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x1c3218: 0x71021389  pcpyld      $v0, $t0, $v0
    ctx->pc = 0x1c3218u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 2)));
    // 0x1c321c: 0x704414c8  ppacw       $v0, $v0, $a0
    ctx->pc = 0x1c321cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x1c3220: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x1c3220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x1c3224: 0x7fa20180  sq          $v0, 0x180($sp)
    ctx->pc = 0x1c3224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 2));
    // 0x1c3228: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x1c3228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x1c322c: 0xda410120  lqc2        $vf1, 0x120($s2)
    ctx->pc = 0x1c322cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 288)));
    // 0x1c3230: 0x4b010044  vsubx.x     $vf1, $vf0, $vf1x
    ctx->pc = 0x1c3230u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c3234: 0x4b020858  vmulx.x     $vf1, $vf1, $vf2x
    ctx->pc = 0x1c3234u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c3238: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1c3238u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c323c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1c323cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3240: 0x3c064180  lui         $a2, 0x4180
    ctx->pc = 0x1c3240u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16768 << 16));
    // 0x1c3244: 0x70c21389  pcpyld      $v0, $a2, $v0
    ctx->pc = 0x1c3244u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x1c3248: 0x70621cc8  ppacw       $v1, $v1, $v0
    ctx->pc = 0x1c3248u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1c324c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c324cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3250: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x1c3250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
    // 0x1c3254: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c3254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c3258: 0x7fa30110  sq          $v1, 0x110($sp)
    ctx->pc = 0x1c3258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 3));
    // 0x1c325c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c325cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3260: 0x7fa30190  sq          $v1, 0x190($sp)
    ctx->pc = 0x1c3260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 3));
    // 0x1c3264: 0x0  nop
    ctx->pc = 0x1c3264u;
    // NOP
label_1c3268:
    // 0x1c3268: 0xd882ffc0  lqc2        $vf2, -0x40($a0)
    ctx->pc = 0x1c3268u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 4294967232)));
    // 0x1c326c: 0xda410050  lqc2        $vf1, 0x50($s2)
    ctx->pc = 0x1c326cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1c3270: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x1c3270u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1c3274: 0xd8e10010  lqc2        $vf1, 0x10($a3)
    ctx->pc = 0x1c3274u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1c3278: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x1c3278u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1c327c: 0xd8e10020  lqc2        $vf1, 0x20($a3)
    ctx->pc = 0x1c327cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1c3280: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x1c3280u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1c3284: 0xd8e10030  lqc2        $vf1, 0x30($a3)
    ctx->pc = 0x1c3284u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1c3288: 0x4be208cb  vmaddw.xyzw $vf3, $vf1, $vf2w
    ctx->pc = 0x1c3288u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1c328c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1c328cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1c3290: 0x24422820  addiu       $v0, $v0, 0x2820
    ctx->pc = 0x1c3290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10272));
    // 0x1c3294: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1c3294u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c3298: 0x4be1186c  vsub.xyzw   $vf1, $vf3, $vf1
    ctx->pc = 0x1c3298u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c329c: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x1c329cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c32a0: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1c32a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c32a4: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1c32a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c32a8: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x1c32a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x1c32ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c32acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c32b0: 0x48281000  qmfc2.ni    $t0, $vf2
    ctx->pc = 0x1c32b0u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c32b4: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x1c32b4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c32b8: 0x46000004  c1          0x4
    ctx->pc = 0x1c32b8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1c32bc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c32bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c32c0: 0x0  nop
    ctx->pc = 0x1c32c0u;
    // NOP
    // 0x1c32c4: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x1C32C4u;
    {
        const bool branch_taken_0x1c32c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C32C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C32C4u;
            // 0x1c32c8: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c32c4) {
            ctx->pc = 0x1C3308u;
            goto label_1c3308;
        }
    }
    ctx->pc = 0x1C32CCu;
    // 0x1c32cc: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1c32ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c32d0: 0x244227d0  addiu       $v0, $v0, 0x27D0
    ctx->pc = 0x1c32d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10192));
    // 0x1c32d4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1c32d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c32d8: 0x4be2086a  vmul.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1c32d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c32dc: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1c32dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c32e0: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1c32e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c32e4: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x1c32e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x1c32e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c32e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c32ec: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1c32ecu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c32f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c32f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c32f4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c32f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c32f8: 0x0  nop
    ctx->pc = 0x1c32f8u;
    // NOP
    // 0x1c32fc: 0x4501ff6d  bc1t        . + 4 + (-0x93 << 2)
    ctx->pc = 0x1C32FCu;
    {
        const bool branch_taken_0x1c32fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C3300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C32FCu;
            // 0x1c3300: 0xbd1021  addu        $v0, $a1, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c32fc) {
            ctx->pc = 0x1C30B4u;
            runtime->cooperativeGuestYield();
            goto label_1c30b4;
        }
    }
    ctx->pc = 0x1C3304u;
    // 0x1c3304: 0x0  nop
    ctx->pc = 0x1c3304u;
    // NOP
label_1c3308:
    // 0x1c3308: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1c3308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1c330c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1c330cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1c3310: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x1c3310u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1c3314: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x1C3314u;
    {
        const bool branch_taken_0x1c3314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3314u;
            // 0x1c3318: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3314) {
            ctx->pc = 0x1C3268u;
            runtime->cooperativeGuestYield();
            goto label_1c3268;
        }
    }
    ctx->pc = 0x1C331Cu;
label_1c331c:
    // 0x1c331c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1c331cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1c3320:
    // 0x1c3320: 0x7bb00230  lq          $s0, 0x230($sp)
    ctx->pc = 0x1c3320u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1c3324: 0x7bb10220  lq          $s1, 0x220($sp)
    ctx->pc = 0x1c3324u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1c3328: 0x7bb20210  lq          $s2, 0x210($sp)
    ctx->pc = 0x1c3328u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1c332c: 0x7bb30200  lq          $s3, 0x200($sp)
    ctx->pc = 0x1c332cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1c3330: 0x7bb401f0  lq          $s4, 0x1F0($sp)
    ctx->pc = 0x1c3330u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1c3334: 0x7bb501e0  lq          $s5, 0x1E0($sp)
    ctx->pc = 0x1c3334u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1c3338: 0x7bb601d0  lq          $s6, 0x1D0($sp)
    ctx->pc = 0x1c3338u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1c333c: 0x7bb701c0  lq          $s7, 0x1C0($sp)
    ctx->pc = 0x1c333cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1c3340: 0x7bbe01b0  lq          $fp, 0x1B0($sp)
    ctx->pc = 0x1c3340u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1c3344: 0xdfbf01a0  ld          $ra, 0x1A0($sp)
    ctx->pc = 0x1c3344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1c3348: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C334Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3348u;
            // 0x1c334c: 0x27bd0240  addiu       $sp, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C2B40u: goto label_1c2b40;
            case 0x1C2B70u: goto label_1c2b70;
            case 0x1C2B8Cu: goto label_1c2b8c;
            case 0x1C2BB0u: goto label_1c2bb0;
            case 0x1C2BF8u: goto label_1c2bf8;
            case 0x1C2C08u: goto label_1c2c08;
            case 0x1C2C20u: goto label_1c2c20;
            case 0x1C2C34u: goto label_1c2c34;
            case 0x1C2C70u: goto label_1c2c70;
            case 0x1C2C80u: goto label_1c2c80;
            case 0x1C2C98u: goto label_1c2c98;
            case 0x1C2CACu: goto label_1c2cac;
            case 0x1C2CF0u: goto label_1c2cf0;
            case 0x1C2CF8u: goto label_1c2cf8;
            case 0x1C2D30u: goto label_1c2d30;
            case 0x1C2D38u: goto label_1c2d38;
            case 0x1C2DA8u: goto label_1c2da8;
            case 0x1C2DD0u: goto label_1c2dd0;
            case 0x1C2E08u: goto label_1c2e08;
            case 0x1C2E0Cu: goto label_1c2e0c;
            case 0x1C2E34u: goto label_1c2e34;
            case 0x1C2E70u: goto label_1c2e70;
            case 0x1C2EC8u: goto label_1c2ec8;
            case 0x1C3058u: goto label_1c3058;
            case 0x1C305Cu: goto label_1c305c;
            case 0x1C3070u: goto label_1c3070;
            case 0x1C30B4u: goto label_1c30b4;
            case 0x1C3108u: goto label_1c3108;
            case 0x1C3110u: goto label_1c3110;
            case 0x1C3114u: goto label_1c3114;
            case 0x1C3140u: goto label_1c3140;
            case 0x1C3268u: goto label_1c3268;
            case 0x1C3308u: goto label_1c3308;
            case 0x1C331Cu: goto label_1c331c;
            case 0x1C3320u: goto label_1c3320;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C3350u;
}
