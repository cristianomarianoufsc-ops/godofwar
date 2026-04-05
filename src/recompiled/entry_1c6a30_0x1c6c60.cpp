#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1c6a30
// Address: 0x1c6a30 - 0x1c6c60
void entry_1c6a30_0x1c6c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1c6a30_0x1c6c60");
#endif

    ctx->pc = 0x1c6a30u;

    // 0x1c6a30: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c6a30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a34: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1c6a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1c6a38: 0x8cc302d8  lw          $v1, 0x2D8($a2)
    ctx->pc = 0x1c6a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 728)));
    // 0x1c6a3c: 0x3442fcff  ori         $v0, $v0, 0xFCFF
    ctx->pc = 0x1c6a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64767);
    // 0x1c6a40: 0x8cc50174  lw          $a1, 0x174($a2)
    ctx->pc = 0x1c6a40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 372)));
    // 0x1c6a44: 0x3c04ffdf  lui         $a0, 0xFFDF
    ctx->pc = 0x1c6a44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65503 << 16));
    // 0x1c6a48: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x1c6a48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c6a4c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1c6a4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1c6a50: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x1c6a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
    // 0x1c6a54: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x1c6a54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x1c6a58: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c6a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c6a5c: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x1c6a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
    // 0x1c6a60: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1c6a60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1c6a64: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c6a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c6a68: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1c6a68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x1c6a6c: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x1c6a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x1c6a70: 0x8c845e6c  lw          $a0, 0x5E6C($a0)
    ctx->pc = 0x1c6a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24172)));
    // 0x1c6a74: 0x8cc20238  lw          $v0, 0x238($a2)
    ctx->pc = 0x1c6a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 568)));
    // 0x1c6a78: 0xacc302d8  sw          $v1, 0x2D8($a2)
    ctx->pc = 0x1c6a78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 728), GPR_U32(ctx, 3));
    // 0x1c6a7c: 0xacc50174  sw          $a1, 0x174($a2)
    ctx->pc = 0x1c6a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 372), GPR_U32(ctx, 5));
    // 0x1c6a80: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1c6a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c6a84: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c6a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c6a88: 0x8cc50234  lw          $a1, 0x234($a2)
    ctx->pc = 0x1c6a88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 564)));
    // 0x1c6a8c: 0x30630018  andi        $v1, $v1, 0x18
    ctx->pc = 0x1c6a8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)24);
    // 0x1c6a90: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1c6a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1c6a94: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1c6a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c6a98: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1c6a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1c6a9c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1c6a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1c6aa0: 0x1460002a  bnez        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x1C6AA0u;
    {
        const bool branch_taken_0x1c6aa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6AA0u;
            // 0x1c6aa4: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6aa0) {
            ctx->pc = 0x1C6B4Cu;
            goto label_1c6b4c;
        }
    }
    ctx->pc = 0x1C6AA8u;
    // 0x1c6aa8: 0x50800029  beql        $a0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x1C6AA8u;
    {
        const bool branch_taken_0x1c6aa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6aa8) {
            ctx->pc = 0x1C6AACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6AA8u;
            // 0x1c6aac: 0x8cc20174  lw          $v0, 0x174($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C6B50u;
            goto label_1c6b50;
        }
    }
    ctx->pc = 0x1C6AB0u;
    // 0x1c6ab0: 0x8cc20320  lw          $v0, 0x320($a2)
    ctx->pc = 0x1c6ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 800)));
    // 0x1c6ab4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1c6ab4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c6ab8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1c6ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c6abc: 0xc441022c  lwc1        $f1, 0x22C($v0)
    ctx->pc = 0x1c6abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6ac0: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x1c6ac0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6ac4: 0x0  nop
    ctx->pc = 0x1c6ac4u;
    // NOP
    // 0x1c6ac8: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x1C6AC8u;
    {
        const bool branch_taken_0x1c6ac8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C6ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6AC8u;
            // 0x1c6acc: 0x30e20400  andi        $v0, $a3, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6ac8) {
            ctx->pc = 0x1C6B00u;
            goto label_1c6b00;
        }
    }
    ctx->pc = 0x1C6AD0u;
    // 0x1c6ad0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C6AD0u;
    {
        const bool branch_taken_0x1c6ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6ad0) {
            ctx->pc = 0x1C6B00u;
            goto label_1c6b00;
        }
    }
    ctx->pc = 0x1C6AD8u;
    // 0x1c6ad8: 0xc4c002a4  lwc1        $f0, 0x2A4($a2)
    ctx->pc = 0x1c6ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6adc: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x1c6adcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6ae0: 0x0  nop
    ctx->pc = 0x1c6ae0u;
    // NOP
    // 0x1c6ae4: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
    ctx->pc = 0x1C6AE4u;
    {
        const bool branch_taken_0x1c6ae4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c6ae4) {
            ctx->pc = 0x1C6AE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6AE4u;
            // 0x1c6ae8: 0x8cc202d8  lw          $v0, 0x2D8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 728)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C6B30u;
            goto label_1c6b30;
        }
    }
    ctx->pc = 0x1C6AECu;
    // 0x1c6aec: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x1c6aecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6af0: 0x0  nop
    ctx->pc = 0x1c6af0u;
    // NOP
    // 0x1c6af4: 0x4503000e  bc1tl       . + 4 + (0xE << 2)
    ctx->pc = 0x1C6AF4u;
    {
        const bool branch_taken_0x1c6af4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c6af4) {
            ctx->pc = 0x1C6AF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6AF4u;
            // 0x1c6af8: 0x8cc202d8  lw          $v0, 0x2D8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 728)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C6B30u;
            goto label_1c6b30;
        }
    }
    ctx->pc = 0x1C6AFCu;
    // 0x1c6afc: 0x0  nop
    ctx->pc = 0x1c6afcu;
    // NOP
label_1c6b00:
    // 0x1c6b00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c6b00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6b04: 0x8cc202d8  lw          $v0, 0x2D8($a2)
    ctx->pc = 0x1c6b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 728)));
    // 0x1c6b08: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1c6b08u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6b0c: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x1c6b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x1c6b10: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6B10u;
    {
        const bool branch_taken_0x1c6b10 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C6B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6B10u;
            // 0x1c6b14: 0xacc202d8  sw          $v0, 0x2D8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6b10) {
            ctx->pc = 0x1C6B20u;
            goto label_1c6b20;
        }
    }
    ctx->pc = 0x1C6B18u;
    // 0x1c6b18: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C6B18u;
    {
        const bool branch_taken_0x1c6b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6B18u;
            // 0x1c6b1c: 0xe4c102a4  swc1        $f1, 0x2A4($a2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 676), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6b18) {
            ctx->pc = 0x1C6B2Cu;
            goto label_1c6b2c;
        }
    }
    ctx->pc = 0x1C6B20u;
label_1c6b20:
    // 0x1c6b20: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1c6b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1c6b24: 0xc4406300  lwc1        $f0, 0x6300($v0)
    ctx->pc = 0x1c6b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 25344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6b28: 0xe4c002a4  swc1        $f0, 0x2A4($a2)
    ctx->pc = 0x1c6b28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 676), bits); }
label_1c6b2c:
    // 0x1c6b2c: 0x8cc202d8  lw          $v0, 0x2D8($a2)
    ctx->pc = 0x1c6b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 728)));
label_1c6b30:
    // 0x1c6b30: 0x30840004  andi        $a0, $a0, 0x4
    ctx->pc = 0x1c6b30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x1c6b34: 0x24050033  addiu       $a1, $zero, 0x33
    ctx->pc = 0x1c6b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x1c6b38: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1c6b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1c6b3c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x1c6b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x1c6b40: 0x64280b  movn        $a1, $v1, $a0
    ctx->pc = 0x1c6b40u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x1c6b44: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1C6B44u;
    {
        const bool branch_taken_0x1c6b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6B44u;
            // 0x1c6b48: 0xacc202d8  sw          $v0, 0x2D8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6b44) {
            ctx->pc = 0x1C6C28u;
            goto label_1c6c28;
        }
    }
    ctx->pc = 0x1C6B4Cu;
label_1c6b4c:
    // 0x1c6b4c: 0x8cc20174  lw          $v0, 0x174($a2)
    ctx->pc = 0x1c6b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 372)));
label_1c6b50:
    // 0x1c6b50: 0x3042004c  andi        $v0, $v0, 0x4C
    ctx->pc = 0x1c6b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)76);
    // 0x1c6b54: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6B54u;
    {
        const bool branch_taken_0x1c6b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6B54u;
            // 0x1c6b58: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6b54) {
            ctx->pc = 0x1C6B64u;
            goto label_1c6b64;
        }
    }
    ctx->pc = 0x1C6B5Cu;
    // 0x1c6b5c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1C6B5Cu;
    {
        const bool branch_taken_0x1c6b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6B5Cu;
            // 0x1c6b60: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6b5c) {
            ctx->pc = 0x1C6C28u;
            goto label_1c6c28;
        }
    }
    ctx->pc = 0x1C6B64u;
label_1c6b64:
    // 0x1c6b64: 0x8c425e84  lw          $v0, 0x5E84($v0)
    ctx->pc = 0x1c6b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24196)));
    // 0x1c6b68: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1c6b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1c6b6c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1c6b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6b70: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1c6b70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c6b74: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x1c6b74u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6b78: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x1C6B78u;
    {
        const bool branch_taken_0x1c6b78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c6b78) {
            ctx->pc = 0x1C6BB8u;
            goto label_1c6bb8;
        }
    }
    ctx->pc = 0x1C6B80u;
    // 0x1c6b80: 0x8cc202d8  lw          $v0, 0x2D8($a2)
    ctx->pc = 0x1c6b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 728)));
    // 0x1c6b84: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x1c6b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x1c6b88: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C6B88u;
    {
        const bool branch_taken_0x1c6b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6b88) {
            ctx->pc = 0x1C6BB8u;
            goto label_1c6bb8;
        }
    }
    ctx->pc = 0x1C6B90u;
    // 0x1c6b90: 0xc4c002a4  lwc1        $f0, 0x2A4($a2)
    ctx->pc = 0x1c6b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6b94: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x1c6b94u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6b98: 0x0  nop
    ctx->pc = 0x1c6b98u;
    // NOP
    // 0x1c6b9c: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
    ctx->pc = 0x1C6B9Cu;
    {
        const bool branch_taken_0x1c6b9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c6b9c) {
            ctx->pc = 0x1C6BA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6B9Cu;
            // 0x1c6ba0: 0x78c20260  lq          $v0, 0x260($a2) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 608)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C6BE8u;
            goto label_1c6be8;
        }
    }
    ctx->pc = 0x1C6BA4u;
    // 0x1c6ba4: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x1c6ba4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6ba8: 0x0  nop
    ctx->pc = 0x1c6ba8u;
    // NOP
    // 0x1c6bac: 0x4503000e  bc1tl       . + 4 + (0xE << 2)
    ctx->pc = 0x1C6BACu;
    {
        const bool branch_taken_0x1c6bac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c6bac) {
            ctx->pc = 0x1C6BB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6BACu;
            // 0x1c6bb0: 0x78c20260  lq          $v0, 0x260($a2) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 608)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C6BE8u;
            goto label_1c6be8;
        }
    }
    ctx->pc = 0x1C6BB4u;
    // 0x1c6bb4: 0x0  nop
    ctx->pc = 0x1c6bb4u;
    // NOP
label_1c6bb8:
    // 0x1c6bb8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c6bb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6bbc: 0x8cc202d8  lw          $v0, 0x2D8($a2)
    ctx->pc = 0x1c6bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 728)));
    // 0x1c6bc0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1c6bc0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6bc4: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x1c6bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x1c6bc8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6BC8u;
    {
        const bool branch_taken_0x1c6bc8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C6BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6BC8u;
            // 0x1c6bcc: 0xacc202d8  sw          $v0, 0x2D8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6bc8) {
            ctx->pc = 0x1C6BD8u;
            goto label_1c6bd8;
        }
    }
    ctx->pc = 0x1C6BD0u;
    // 0x1c6bd0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C6BD0u;
    {
        const bool branch_taken_0x1c6bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6BD0u;
            // 0x1c6bd4: 0xe4c102a4  swc1        $f1, 0x2A4($a2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 676), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6bd0) {
            ctx->pc = 0x1C6BE4u;
            goto label_1c6be4;
        }
    }
    ctx->pc = 0x1C6BD8u;
label_1c6bd8:
    // 0x1c6bd8: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1c6bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1c6bdc: 0xc4406300  lwc1        $f0, 0x6300($v0)
    ctx->pc = 0x1c6bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 25344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6be0: 0xe4c002a4  swc1        $f0, 0x2A4($a2)
    ctx->pc = 0x1c6be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 676), bits); }
label_1c6be4:
    // 0x1c6be4: 0x78c20260  lq          $v0, 0x260($a2)
    ctx->pc = 0x1c6be4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 608)));
label_1c6be8:
    // 0x1c6be8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1c6be8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1c6bec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c6becu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6bf0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c6bf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6bf4: 0x8cc202d8  lw          $v0, 0x2D8($a2)
    ctx->pc = 0x1c6bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 728)));
    // 0x1c6bf8: 0x3463ffbf  ori         $v1, $v1, 0xFFBF
    ctx->pc = 0x1c6bf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65471);
    // 0x1c6bfc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c6bfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6c00: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c6c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1c6c04: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6C04u;
    {
        const bool branch_taken_0x1c6c04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C6C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6C04u;
            // 0x1c6c08: 0xacc202d8  sw          $v0, 0x2D8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6c04) {
            ctx->pc = 0x1C6C14u;
            goto label_1c6c14;
        }
    }
    ctx->pc = 0x1C6C0Cu;
    // 0x1c6c0c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C6C0Cu;
    {
        const bool branch_taken_0x1c6c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6C0Cu;
            // 0x1c6c10: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6c0c) {
            ctx->pc = 0x1C6C28u;
            goto label_1c6c28;
        }
    }
    ctx->pc = 0x1C6C14u;
label_1c6c14:
    // 0x1c6c14: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c6c14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6c18: 0x0  nop
    ctx->pc = 0x1c6c18u;
    // NOP
    // 0x1c6c1c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1C6C1Cu;
    {
        const bool branch_taken_0x1c6c1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C6C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6C1Cu;
            // 0x1c6c20: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6c1c) {
            ctx->pc = 0x1C6C28u;
            goto label_1c6c28;
        }
    }
    ctx->pc = 0x1C6C24u;
    // 0x1c6c24: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1c6c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1c6c28:
    // 0x1c6c28: 0x8cc20328  lw          $v0, 0x328($a2)
    ctx->pc = 0x1c6c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 808)));
    // 0x1c6c2c: 0xa44500e0  sh          $a1, 0xE0($v0)
    ctx->pc = 0x1c6c2cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 224), (uint16_t)GPR_U32(ctx, 5));
    // 0x1c6c30: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1c6c30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1c6c34: 0x8cc40320  lw          $a0, 0x320($a2)
    ctx->pc = 0x1c6c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 800)));
    // 0x1c6c38: 0x3463f800  ori         $v1, $v1, 0xF800
    ctx->pc = 0x1c6c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63488);
    // 0x1c6c3c: 0x8cc20174  lw          $v0, 0x174($a2)
    ctx->pc = 0x1c6c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 372)));
    // 0x1c6c40: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x1c6c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c6c44: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c6c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1c6c48: 0xc4800104  lwc1        $f0, 0x104($a0)
    ctx->pc = 0x1c6c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6c4c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1c6c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1c6c50: 0xacc20174  sw          $v0, 0x174($a2)
    ctx->pc = 0x1c6c50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 372), GPR_U32(ctx, 2));
    // 0x1c6c54: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6C54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6C54u;
            // 0x1c6c58: 0xe4c00164  swc1        $f0, 0x164($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 356), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C6B00u: goto label_1c6b00;
            case 0x1C6B20u: goto label_1c6b20;
            case 0x1C6B2Cu: goto label_1c6b2c;
            case 0x1C6B30u: goto label_1c6b30;
            case 0x1C6B4Cu: goto label_1c6b4c;
            case 0x1C6B50u: goto label_1c6b50;
            case 0x1C6B64u: goto label_1c6b64;
            case 0x1C6BB8u: goto label_1c6bb8;
            case 0x1C6BD8u: goto label_1c6bd8;
            case 0x1C6BE4u: goto label_1c6be4;
            case 0x1C6BE8u: goto label_1c6be8;
            case 0x1C6C14u: goto label_1c6c14;
            case 0x1C6C28u: goto label_1c6c28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C6C5Cu;
    // 0x1c6c5c: 0x0  nop
    ctx->pc = 0x1c6c5cu;
    // NOP
}
