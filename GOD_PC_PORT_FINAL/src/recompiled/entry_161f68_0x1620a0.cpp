#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_161f68
// Address: 0x161f68 - 0x1620a0
void entry_161f68_0x1620a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_161f68_0x1620a0");
#endif

    ctx->pc = 0x161f68u;

    // 0x161f68: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x161f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x161f6c: 0x8c43c2ac  lw          $v1, -0x3D54($v0)
    ctx->pc = 0x161f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951596)));
    // 0x161f70: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x161f70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x161f74: 0x708210a8  pceqw       $v0, $a0, $v0
    ctx->pc = 0x161f74u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x161f78: 0x700215c8  ppach       $v0, $zero, $v0
    ctx->pc = 0x161f78u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x161f7c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x161f7cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x161f80: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x161f80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x161f84: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x161f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x161f88: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x161f88u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x161f8c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x161F8Cu;
    {
        const bool branch_taken_0x161f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x161f8c) {
            ctx->pc = 0x161F90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x161F8Cu;
            // 0x161f90: 0x78620030  lq          $v0, 0x30($v1) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x161FA8u;
            goto label_161fa8;
        }
    }
    ctx->pc = 0x161F94u;
    // 0x161f94: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x161f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x161f98: 0x7c640020  sq          $a0, 0x20($v1)
    ctx->pc = 0x161f98u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 4));
    // 0x161f9c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x161f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x161fa0: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x161fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x161fa4: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x161fa4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
label_161fa8:
    // 0x161fa8: 0x70a210a8  pceqw       $v0, $a1, $v0
    ctx->pc = 0x161fa8u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x161fac: 0x700215c8  ppach       $v0, $zero, $v0
    ctx->pc = 0x161facu;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x161fb0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x161fb0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x161fb4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x161fb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x161fb8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x161fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x161fbc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x161fbcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x161fc0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x161FC0u;
    {
        const bool branch_taken_0x161fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x161fc0) {
            ctx->pc = 0x161FC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x161FC0u;
            // 0x161fc4: 0x78620040  lq          $v0, 0x40($v1) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x161FDCu;
            goto label_161fdc;
        }
    }
    ctx->pc = 0x161FC8u;
    // 0x161fc8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x161fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x161fcc: 0x7c650030  sq          $a1, 0x30($v1)
    ctx->pc = 0x161fccu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 5));
    // 0x161fd0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x161fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x161fd4: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x161fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x161fd8: 0x78620040  lq          $v0, 0x40($v1)
    ctx->pc = 0x161fd8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 64)));
label_161fdc:
    // 0x161fdc: 0x70c210a8  pceqw       $v0, $a2, $v0
    ctx->pc = 0x161fdcu;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x161fe0: 0x700215c8  ppach       $v0, $zero, $v0
    ctx->pc = 0x161fe0u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x161fe4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x161fe4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x161fe8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x161fe8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x161fec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x161fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x161ff0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x161ff0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x161ff4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x161FF4u;
    {
        const bool branch_taken_0x161ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x161ff4) {
            ctx->pc = 0x161FF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x161FF4u;
            // 0x161ff8: 0xc460005c  lwc1        $f0, 0x5C($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x162010u;
            goto label_162010;
        }
    }
    ctx->pc = 0x161FFCu;
    // 0x161ffc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x161ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x162000: 0x7c660040  sq          $a2, 0x40($v1)
    ctx->pc = 0x162000u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), GPR_VEC(ctx, 6));
    // 0x162004: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x162004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x162008: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x162008u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x16200c: 0xc460005c  lwc1        $f0, 0x5C($v1)
    ctx->pc = 0x16200cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_162010:
    // 0x162010: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x162010u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162014: 0x0  nop
    ctx->pc = 0x162014u;
    // NOP
    // 0x162018: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x162018u;
    {
        const bool branch_taken_0x162018 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x162018) {
            ctx->pc = 0x16201Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x162018u;
            // 0x16201c: 0xc4600060  lwc1        $f0, 0x60($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x162034u;
            goto label_162034;
        }
    }
    ctx->pc = 0x162020u;
    // 0x162020: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x162020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x162024: 0xe46c005c  swc1        $f12, 0x5C($v1)
    ctx->pc = 0x162024u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 92), bits); }
    // 0x162028: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x162028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x16202c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x16202cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x162030: 0xc4600060  lwc1        $f0, 0x60($v1)
    ctx->pc = 0x162030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_162034:
    // 0x162034: 0x46006832  c.eq.s      $f13, $f0
    ctx->pc = 0x162034u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162038: 0x0  nop
    ctx->pc = 0x162038u;
    // NOP
    // 0x16203c: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x16203Cu;
    {
        const bool branch_taken_0x16203c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16203c) {
            ctx->pc = 0x162040u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16203Cu;
            // 0x162040: 0xc4600064  lwc1        $f0, 0x64($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x162058u;
            goto label_162058;
        }
    }
    ctx->pc = 0x162044u;
    // 0x162044: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x162044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x162048: 0xe46d0060  swc1        $f13, 0x60($v1)
    ctx->pc = 0x162048u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x16204c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x16204cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x162050: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x162050u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x162054: 0xc4600064  lwc1        $f0, 0x64($v1)
    ctx->pc = 0x162054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_162058:
    // 0x162058: 0x46007032  c.eq.s      $f14, $f0
    ctx->pc = 0x162058u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[14], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16205c: 0x0  nop
    ctx->pc = 0x16205cu;
    // NOP
    // 0x162060: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x162060u;
    {
        const bool branch_taken_0x162060 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x162060) {
            ctx->pc = 0x162064u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x162060u;
            // 0x162064: 0xdc620068  ld          $v0, 0x68($v1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 104)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16207Cu;
            goto label_16207c;
        }
    }
    ctx->pc = 0x162068u;
    // 0x162068: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x162068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x16206c: 0xe46e0064  swc1        $f14, 0x64($v1)
    ctx->pc = 0x16206cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
    // 0x162070: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x162070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x162074: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x162074u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x162078: 0xdc620068  ld          $v0, 0x68($v1)
    ctx->pc = 0x162078u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 104)));
label_16207c:
    // 0x16207c: 0x10e20005  beq         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16207Cu;
    {
        const bool branch_taken_0x16207c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x16207c) {
            ctx->pc = 0x162094u;
            goto label_162094;
        }
    }
    ctx->pc = 0x162084u;
    // 0x162084: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x162084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x162088: 0xfc670068  sd          $a3, 0x68($v1)
    ctx->pc = 0x162088u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 104), GPR_U64(ctx, 7));
    // 0x16208c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x16208cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x162090: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x162090u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_162094:
    // 0x162094: 0x3e00008  jr          $ra
    ctx->pc = 0x162094u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x161FA8u: goto label_161fa8;
            case 0x161FDCu: goto label_161fdc;
            case 0x162010u: goto label_162010;
            case 0x162034u: goto label_162034;
            case 0x162058u: goto label_162058;
            case 0x16207Cu: goto label_16207c;
            case 0x162094u: goto label_162094;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16209Cu;
    // 0x16209c: 0x0  nop
    ctx->pc = 0x16209cu;
    // NOP
}
