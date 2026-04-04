#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_125a48
// Address: 0x125a48 - 0x125b60
void entry_125a48_0x125b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_125a48_0x125b60");
#endif

    ctx->pc = 0x125a48u;

    // 0x125a48: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x125a48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x125a4c: 0x704510a8  pceqw       $v0, $v0, $a1
    ctx->pc = 0x125a4cu;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x125a50: 0x700215c8  ppach       $v0, $zero, $v0
    ctx->pc = 0x125a50u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x125a54: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x125a54u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x125a58: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x125a58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x125a5c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x125a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x125a60: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x125a60u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x125a64: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x125A64u;
    {
        const bool branch_taken_0x125a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x125a64) {
            ctx->pc = 0x125A68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x125A64u;
            // 0x125a68: 0x78820010  lq          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x125A80u;
            goto label_125a80;
        }
    }
    ctx->pc = 0x125A6Cu;
    // 0x125a6c: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x125a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x125a70: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x125a70u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x125a74: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x125a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x125a78: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x125a78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
    // 0x125a7c: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x125a7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
label_125a80:
    // 0x125a80: 0x704610a8  pceqw       $v0, $v0, $a2
    ctx->pc = 0x125a80u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x125a84: 0x700215c8  ppach       $v0, $zero, $v0
    ctx->pc = 0x125a84u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x125a88: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x125a88u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x125a8c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x125a8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x125a90: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x125a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x125a94: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x125a94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x125a98: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x125A98u;
    {
        const bool branch_taken_0x125a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x125a98) {
            ctx->pc = 0x125A9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x125A98u;
            // 0x125a9c: 0x78820020  lq          $v0, 0x20($a0) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x125AB4u;
            goto label_125ab4;
        }
    }
    ctx->pc = 0x125AA0u;
    // 0x125aa0: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x125aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x125aa4: 0x7c860010  sq          $a2, 0x10($a0)
    ctx->pc = 0x125aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 6));
    // 0x125aa8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x125aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x125aac: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x125aacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
    // 0x125ab0: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x125ab0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_125ab4:
    // 0x125ab4: 0x704710a8  pceqw       $v0, $v0, $a3
    ctx->pc = 0x125ab4u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x125ab8: 0x700215c8  ppach       $v0, $zero, $v0
    ctx->pc = 0x125ab8u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x125abc: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x125abcu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x125ac0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x125ac0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x125ac4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x125ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x125ac8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x125ac8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x125acc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x125ACCu;
    {
        const bool branch_taken_0x125acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x125acc) {
            ctx->pc = 0x125AD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x125ACCu;
            // 0x125ad0: 0xc4800050  lwc1        $f0, 0x50($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x125AE8u;
            goto label_125ae8;
        }
    }
    ctx->pc = 0x125AD4u;
    // 0x125ad4: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x125ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x125ad8: 0x7c870020  sq          $a3, 0x20($a0)
    ctx->pc = 0x125ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 7));
    // 0x125adc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x125adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x125ae0: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x125ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
    // 0x125ae4: 0xc4800050  lwc1        $f0, 0x50($a0)
    ctx->pc = 0x125ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_125ae8:
    // 0x125ae8: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x125ae8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x125aec: 0x0  nop
    ctx->pc = 0x125aecu;
    // NOP
    // 0x125af0: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x125AF0u;
    {
        const bool branch_taken_0x125af0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x125af0) {
            ctx->pc = 0x125AF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x125AF0u;
            // 0x125af4: 0xc4800054  lwc1        $f0, 0x54($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x125B0Cu;
            goto label_125b0c;
        }
    }
    ctx->pc = 0x125AF8u;
    // 0x125af8: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x125af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x125afc: 0xe48c0050  swc1        $f12, 0x50($a0)
    ctx->pc = 0x125afcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
    // 0x125b00: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x125b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x125b04: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x125b04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
    // 0x125b08: 0xc4800054  lwc1        $f0, 0x54($a0)
    ctx->pc = 0x125b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_125b0c:
    // 0x125b0c: 0x460d0032  c.eq.s      $f0, $f13
    ctx->pc = 0x125b0cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x125b10: 0x0  nop
    ctx->pc = 0x125b10u;
    // NOP
    // 0x125b14: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x125B14u;
    {
        const bool branch_taken_0x125b14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x125b14) {
            ctx->pc = 0x125B18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x125B14u;
            // 0x125b18: 0xc4800058  lwc1        $f0, 0x58($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x125B30u;
            goto label_125b30;
        }
    }
    ctx->pc = 0x125B1Cu;
    // 0x125b1c: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x125b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x125b20: 0xe48d0054  swc1        $f13, 0x54($a0)
    ctx->pc = 0x125b20u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
    // 0x125b24: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x125b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x125b28: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x125b28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
    // 0x125b2c: 0xc4800058  lwc1        $f0, 0x58($a0)
    ctx->pc = 0x125b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_125b30:
    // 0x125b30: 0x460e0032  c.eq.s      $f0, $f14
    ctx->pc = 0x125b30u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x125b34: 0x0  nop
    ctx->pc = 0x125b34u;
    // NOP
    // 0x125b38: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x125B38u;
    {
        const bool branch_taken_0x125b38 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x125B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125B38u;
            // 0x125b3c: 0x8c820088  lw          $v0, 0x88($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125b38) {
            ctx->pc = 0x125B50u;
            goto label_125b50;
        }
    }
    ctx->pc = 0x125B40u;
    // 0x125b40: 0xe48e0058  swc1        $f14, 0x58($a0)
    ctx->pc = 0x125b40u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x125b44: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x125b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x125b48: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x125b48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
    // 0x125b4c: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x125b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_125b50:
    // 0x125b50: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x125b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x125b54: 0x3e00008  jr          $ra
    ctx->pc = 0x125B54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125B54u;
            // 0x125b58: 0xac820088  sw          $v0, 0x88($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125A80u: goto label_125a80;
            case 0x125AB4u: goto label_125ab4;
            case 0x125AE8u: goto label_125ae8;
            case 0x125B0Cu: goto label_125b0c;
            case 0x125B30u: goto label_125b30;
            case 0x125B50u: goto label_125b50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x125B5Cu;
    // 0x125b5c: 0x0  nop
    ctx->pc = 0x125b5cu;
    // NOP
}
