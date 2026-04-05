#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012FA08
// Address: 0x12fa08 - 0x12fd28
void sub_0012FA08_0x12fa08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012FA08_0x12fa08");
#endif

    ctx->pc = 0x12fa08u;

    // 0x12fa08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12fa08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12fa0c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12fa0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12fa10: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12fa10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12fa14: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x12fa14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x12fa18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12fa18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12fa1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12fa1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fa20: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x12fa20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fa24: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x12fa24u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12fa28: 0x0  nop
    ctx->pc = 0x12fa28u;
    // NOP
    // 0x12fa2c: 0x45000039  bc1f        . + 4 + (0x39 << 2)
    ctx->pc = 0x12FA2Cu;
    {
        const bool branch_taken_0x12fa2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12FA30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FA2Cu;
            // 0x12fa30: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fa2c) {
            ctx->pc = 0x12FB14u;
            goto label_12fb14;
        }
    }
    ctx->pc = 0x12FA34u;
    // 0x12fa34: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x12fa34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fa38: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x12fa38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12fa3c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x12fa3cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12fa40: 0x0  nop
    ctx->pc = 0x12fa40u;
    // NOP
    // 0x12fa44: 0x45020035  bc1fl       . + 4 + (0x35 << 2)
    ctx->pc = 0x12FA44u;
    {
        const bool branch_taken_0x12fa44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12fa44) {
            ctx->pc = 0x12FA48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12FA44u;
            // 0x12fa48: 0xc6000030  lwc1        $f0, 0x30($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x12FB1Cu;
            goto label_12fb1c;
        }
    }
    ctx->pc = 0x12FA4Cu;
    // 0x12fa4c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x12fa4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fa50: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x12fa50u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12fa54: 0x0  nop
    ctx->pc = 0x12fa54u;
    // NOP
    // 0x12fa58: 0x45020030  bc1fl       . + 4 + (0x30 << 2)
    ctx->pc = 0x12FA58u;
    {
        const bool branch_taken_0x12fa58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12fa58) {
            ctx->pc = 0x12FA5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12FA58u;
            // 0x12fa5c: 0xc6000030  lwc1        $f0, 0x30($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x12FB1Cu;
            goto label_12fb1c;
        }
    }
    ctx->pc = 0x12FA60u;
    // 0x12fa60: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x12fa60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fa64: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x12fa64u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12fa68: 0x0  nop
    ctx->pc = 0x12fa68u;
    // NOP
    // 0x12fa6c: 0x4502002b  bc1fl       . + 4 + (0x2B << 2)
    ctx->pc = 0x12FA6Cu;
    {
        const bool branch_taken_0x12fa6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12fa6c) {
            ctx->pc = 0x12FA70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12FA6Cu;
            // 0x12fa70: 0xc6000030  lwc1        $f0, 0x30($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x12FB1Cu;
            goto label_12fb1c;
        }
    }
    ctx->pc = 0x12FA74u;
    // 0x12fa74: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x12fa74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fa78: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x12fa78u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12fa7c: 0x0  nop
    ctx->pc = 0x12fa7cu;
    // NOP
    // 0x12fa80: 0x45020026  bc1fl       . + 4 + (0x26 << 2)
    ctx->pc = 0x12FA80u;
    {
        const bool branch_taken_0x12fa80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12fa80) {
            ctx->pc = 0x12FA84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12FA80u;
            // 0x12fa84: 0xc6000030  lwc1        $f0, 0x30($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x12FB1Cu;
            goto label_12fb1c;
        }
    }
    ctx->pc = 0x12FA88u;
    // 0x12fa88: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x12fa88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fa8c: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x12fa8cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12fa90: 0x0  nop
    ctx->pc = 0x12fa90u;
    // NOP
    // 0x12fa94: 0x45020021  bc1fl       . + 4 + (0x21 << 2)
    ctx->pc = 0x12FA94u;
    {
        const bool branch_taken_0x12fa94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12fa94) {
            ctx->pc = 0x12FA98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12FA94u;
            // 0x12fa98: 0xc6000030  lwc1        $f0, 0x30($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x12FB1Cu;
            goto label_12fb1c;
        }
    }
    ctx->pc = 0x12FA9Cu;
    // 0x12fa9c: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x12fa9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12faa0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x12faa0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12faa4: 0x0  nop
    ctx->pc = 0x12faa4u;
    // NOP
    // 0x12faa8: 0x4502001c  bc1fl       . + 4 + (0x1C << 2)
    ctx->pc = 0x12FAA8u;
    {
        const bool branch_taken_0x12faa8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12faa8) {
            ctx->pc = 0x12FAACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12FAA8u;
            // 0x12faac: 0xc6000030  lwc1        $f0, 0x30($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x12FB1Cu;
            goto label_12fb1c;
        }
    }
    ctx->pc = 0x12FAB0u;
    // 0x12fab0: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x12fab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fab4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x12fab4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12fab8: 0x0  nop
    ctx->pc = 0x12fab8u;
    // NOP
    // 0x12fabc: 0x45020017  bc1fl       . + 4 + (0x17 << 2)
    ctx->pc = 0x12FABCu;
    {
        const bool branch_taken_0x12fabc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12fabc) {
            ctx->pc = 0x12FAC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12FABCu;
            // 0x12fac0: 0xc6000030  lwc1        $f0, 0x30($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x12FB1Cu;
            goto label_12fb1c;
        }
    }
    ctx->pc = 0x12FAC4u;
    // 0x12fac4: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x12fac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fac8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x12fac8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12facc: 0x0  nop
    ctx->pc = 0x12faccu;
    // NOP
    // 0x12fad0: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
    ctx->pc = 0x12FAD0u;
    {
        const bool branch_taken_0x12fad0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12fad0) {
            ctx->pc = 0x12FAD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12FAD0u;
            // 0x12fad4: 0xc6000030  lwc1        $f0, 0x30($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x12FB1Cu;
            goto label_12fb1c;
        }
    }
    ctx->pc = 0x12FAD8u;
    // 0x12fad8: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x12fad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fadc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x12fadcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12fae0: 0x0  nop
    ctx->pc = 0x12fae0u;
    // NOP
    // 0x12fae4: 0x4502000d  bc1fl       . + 4 + (0xD << 2)
    ctx->pc = 0x12FAE4u;
    {
        const bool branch_taken_0x12fae4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12fae4) {
            ctx->pc = 0x12FAE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12FAE4u;
            // 0x12fae8: 0xc6000030  lwc1        $f0, 0x30($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x12FB1Cu;
            goto label_12fb1c;
        }
    }
    ctx->pc = 0x12FAECu;
    // 0x12faec: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x12faecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12faf0: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x12faf0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12faf4: 0x0  nop
    ctx->pc = 0x12faf4u;
    // NOP
    // 0x12faf8: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x12FAF8u;
    {
        const bool branch_taken_0x12faf8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12faf8) {
            ctx->pc = 0x12FAFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12FAF8u;
            // 0x12fafc: 0xc6000030  lwc1        $f0, 0x30($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x12FB1Cu;
            goto label_12fb1c;
        }
    }
    ctx->pc = 0x12FB00u;
    // 0x12fb00: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x12fb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fb04: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x12fb04u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12fb08: 0x0  nop
    ctx->pc = 0x12fb08u;
    // NOP
    // 0x12fb0c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x12FB0Cu;
    {
        const bool branch_taken_0x12fb0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12fb0c) {
            ctx->pc = 0x12FB10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12FB0Cu;
            // 0x12fb10: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12FB14u;
            goto label_12fb14;
        }
    }
    ctx->pc = 0x12FB14u;
label_12fb14:
    // 0x12fb14: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x12fb14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fb18: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x12fb18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12fb1c:
    // 0x12fb1c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x12fb1cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12fb20: 0x0  nop
    ctx->pc = 0x12fb20u;
    // NOP
    // 0x12fb24: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x12FB24u;
    {
        const bool branch_taken_0x12fb24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12FB28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FB24u;
            // 0x12fb28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fb24) {
            ctx->pc = 0x12FB68u;
            goto label_12fb68;
        }
    }
    ctx->pc = 0x12FB2Cu;
    // 0x12fb2c: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x12fb2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fb30: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x12fb30u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12fb34: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x12FB34u;
    {
        const bool branch_taken_0x12fb34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12fb34) {
            ctx->pc = 0x12FB68u;
            goto label_12fb68;
        }
    }
    ctx->pc = 0x12FB3Cu;
    // 0x12fb3c: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x12fb3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fb40: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x12fb40u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12fb44: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x12FB44u;
    {
        const bool branch_taken_0x12fb44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12fb44) {
            ctx->pc = 0x12FB68u;
            goto label_12fb68;
        }
    }
    ctx->pc = 0x12FB4Cu;
    // 0x12fb4c: 0xc601003c  lwc1        $f1, 0x3C($s0)
    ctx->pc = 0x12fb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12fb50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12fb50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12fb54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12fb54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12fb58: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x12fb58u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12fb5c: 0x0  nop
    ctx->pc = 0x12fb5cu;
    // NOP
    // 0x12fb60: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x12FB60u;
    {
        const bool branch_taken_0x12fb60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12fb60) {
            ctx->pc = 0x12FB64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12FB60u;
            // 0x12fb64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12FB68u;
            goto label_12fb68;
        }
    }
    ctx->pc = 0x12FB68u;
label_12fb68:
    // 0x12fb68: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x12FB68u;
    {
        const bool branch_taken_0x12fb68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fb68) {
            ctx->pc = 0x12FBC0u;
            goto label_12fbc0;
        }
    }
    ctx->pc = 0x12FB70u;
    // 0x12fb70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12FB70u;
    {
        const bool branch_taken_0x12fb70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fb70) {
            ctx->pc = 0x12FB80u;
            goto label_12fb80;
        }
    }
    ctx->pc = 0x12FB78u;
    // 0x12fb78: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x12FB78u;
    {
        const bool branch_taken_0x12fb78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FB78u;
            // 0x12fb7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fb78) {
            ctx->pc = 0x12FD18u;
            goto label_12fd18;
        }
    }
    ctx->pc = 0x12FB80u;
label_12fb80:
    // 0x12fb80: 0xc04f824  jal         func_13E090
    ctx->pc = 0x12FB80u;
    SET_GPR_U32(ctx, 31, 0x12FB88u);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FB88u; }
        if (ctx->pc != 0x12FB88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FB88u; }
        if (ctx->pc != 0x12FB88u) { return; }
    }
    ctx->pc = 0x12FB88u;
    // 0x12fb88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12fb88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fb8c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x12fb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12fb90: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x12FB90u;
    SET_GPR_U32(ctx, 31, 0x12FB98u);
    ctx->pc = 0x12FB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12FB90u;
            // 0x12fb94: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FB98u; }
        if (ctx->pc != 0x12FB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FB98u; }
        if (ctx->pc != 0x12FB98u) { return; }
    }
    ctx->pc = 0x12FB98u;
    // 0x12fb98: 0x6a030037  ldl         $v1, 0x37($s0)
    ctx->pc = 0x12fb98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x12fb9c: 0x6e030030  ldr         $v1, 0x30($s0)
    ctx->pc = 0x12fb9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x12fba0: 0x6a04003f  ldl         $a0, 0x3F($s0)
    ctx->pc = 0x12fba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x12fba4: 0x6e040038  ldr         $a0, 0x38($s0)
    ctx->pc = 0x12fba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x12fba8: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x12fba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fbac: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x12fbacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fbb0: 0xb044000f  sdl         $a0, 0xF($v0)
    ctx->pc = 0x12fbb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fbb4: 0xb4440008  sdr         $a0, 0x8($v0)
    ctx->pc = 0x12fbb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fbb8: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x12FBB8u;
    {
        const bool branch_taken_0x12fbb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FBBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FBB8u;
            // 0x12fbbc: 0x34420001  ori         $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fbb8) {
            ctx->pc = 0x12FD18u;
            goto label_12fd18;
        }
    }
    ctx->pc = 0x12FBC0u;
label_12fbc0:
    // 0x12fbc0: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x12FBC0u;
    {
        const bool branch_taken_0x12fbc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fbc0) {
            ctx->pc = 0x12FC78u;
            goto label_12fc78;
        }
    }
    ctx->pc = 0x12FBC8u;
    // 0x12fbc8: 0xc04f824  jal         func_13E090
    ctx->pc = 0x12FBC8u;
    SET_GPR_U32(ctx, 31, 0x12FBD0u);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FBD0u; }
        if (ctx->pc != 0x12FBD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FBD0u; }
        if (ctx->pc != 0x12FBD0u) { return; }
    }
    ctx->pc = 0x12FBD0u;
    // 0x12fbd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12fbd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fbd4: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x12fbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x12fbd8: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x12FBD8u;
    SET_GPR_U32(ctx, 31, 0x12FBE0u);
    ctx->pc = 0x12FBDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12FBD8u;
            // 0x12fbdc: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FBE0u; }
        if (ctx->pc != 0x12FBE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FBE0u; }
        if (ctx->pc != 0x12FBE0u) { return; }
    }
    ctx->pc = 0x12FBE0u;
    // 0x12fbe0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12fbe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fbe4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x12fbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12fbe8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12fbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12fbec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12fbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12fbf0:
    // 0x12fbf0: 0x0  nop
    ctx->pc = 0x12fbf0u;
    // NOP
    // 0x12fbf4: 0x0  nop
    ctx->pc = 0x12fbf4u;
    // NOP
    // 0x12fbf8: 0x0  nop
    ctx->pc = 0x12fbf8u;
    // NOP
    // 0x12fbfc: 0x0  nop
    ctx->pc = 0x12fbfcu;
    // NOP
    // 0x12fc00: 0x0  nop
    ctx->pc = 0x12fc00u;
    // NOP
    // 0x12fc04: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12FC04u;
    {
        const bool branch_taken_0x12fc04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12FC08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FC04u;
            // 0x12fc08: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fc04) {
            ctx->pc = 0x12FBF0u;
            runtime->cooperativeGuestYield();
            goto label_12fbf0;
        }
    }
    ctx->pc = 0x12FC0Cu;
    // 0x12fc0c: 0x6a070007  ldl         $a3, 0x7($s0)
    ctx->pc = 0x12fc0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x12fc10: 0x6e070000  ldr         $a3, 0x0($s0)
    ctx->pc = 0x12fc10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x12fc14: 0x6a03000f  ldl         $v1, 0xF($s0)
    ctx->pc = 0x12fc14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x12fc18: 0x6e030008  ldr         $v1, 0x8($s0)
    ctx->pc = 0x12fc18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x12fc1c: 0x6a050017  ldl         $a1, 0x17($s0)
    ctx->pc = 0x12fc1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x12fc20: 0x6e050010  ldr         $a1, 0x10($s0)
    ctx->pc = 0x12fc20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x12fc24: 0x6a06001f  ldl         $a2, 0x1F($s0)
    ctx->pc = 0x12fc24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x12fc28: 0x6e060018  ldr         $a2, 0x18($s0)
    ctx->pc = 0x12fc28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x12fc2c: 0xb0870007  sdl         $a3, 0x7($a0)
    ctx->pc = 0x12fc2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fc30: 0xb4870000  sdr         $a3, 0x0($a0)
    ctx->pc = 0x12fc30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fc34: 0xb083000f  sdl         $v1, 0xF($a0)
    ctx->pc = 0x12fc34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fc38: 0xb4830008  sdr         $v1, 0x8($a0)
    ctx->pc = 0x12fc38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fc3c: 0xb0850017  sdl         $a1, 0x17($a0)
    ctx->pc = 0x12fc3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fc40: 0xb4850010  sdr         $a1, 0x10($a0)
    ctx->pc = 0x12fc40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fc44: 0xb086001f  sdl         $a2, 0x1F($a0)
    ctx->pc = 0x12fc44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fc48: 0xb4860018  sdr         $a2, 0x18($a0)
    ctx->pc = 0x12fc48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fc4c: 0x6a070027  ldl         $a3, 0x27($s0)
    ctx->pc = 0x12fc4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x12fc50: 0x6e070020  ldr         $a3, 0x20($s0)
    ctx->pc = 0x12fc50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x12fc54: 0x6a03002f  ldl         $v1, 0x2F($s0)
    ctx->pc = 0x12fc54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x12fc58: 0x6e030028  ldr         $v1, 0x28($s0)
    ctx->pc = 0x12fc58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x12fc5c: 0xb0870027  sdl         $a3, 0x27($a0)
    ctx->pc = 0x12fc5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fc60: 0xb4870020  sdr         $a3, 0x20($a0)
    ctx->pc = 0x12fc60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fc64: 0xb083002f  sdl         $v1, 0x2F($a0)
    ctx->pc = 0x12fc64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fc68: 0x34820002  ori         $v0, $a0, 0x2
    ctx->pc = 0x12fc68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x12fc6c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x12FC6Cu;
    {
        const bool branch_taken_0x12fc6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FC70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FC6Cu;
            // 0x12fc70: 0xb4830028  sdr         $v1, 0x28($a0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 4), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fc6c) {
            ctx->pc = 0x12FD18u;
            goto label_12fd18;
        }
    }
    ctx->pc = 0x12FC74u;
    // 0x12fc74: 0x0  nop
    ctx->pc = 0x12fc74u;
    // NOP
label_12fc78:
    // 0x12fc78: 0xc04f824  jal         func_13E090
    ctx->pc = 0x12FC78u;
    SET_GPR_U32(ctx, 31, 0x12FC80u);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FC80u; }
        if (ctx->pc != 0x12FC80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FC80u; }
        if (ctx->pc != 0x12FC80u) { return; }
    }
    ctx->pc = 0x12FC80u;
    // 0x12fc80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12fc80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fc84: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x12fc84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x12fc88: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x12FC88u;
    SET_GPR_U32(ctx, 31, 0x12FC90u);
    ctx->pc = 0x12FC8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12FC88u;
            // 0x12fc8c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FC90u; }
        if (ctx->pc != 0x12FC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FC90u; }
        if (ctx->pc != 0x12FC90u) { return; }
    }
    ctx->pc = 0x12FC90u;
    // 0x12fc90: 0x6a070007  ldl         $a3, 0x7($s0)
    ctx->pc = 0x12fc90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x12fc94: 0x6e070000  ldr         $a3, 0x0($s0)
    ctx->pc = 0x12fc94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x12fc98: 0x6a03000f  ldl         $v1, 0xF($s0)
    ctx->pc = 0x12fc98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x12fc9c: 0x6e030008  ldr         $v1, 0x8($s0)
    ctx->pc = 0x12fc9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x12fca0: 0x6a040017  ldl         $a0, 0x17($s0)
    ctx->pc = 0x12fca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x12fca4: 0x6e040010  ldr         $a0, 0x10($s0)
    ctx->pc = 0x12fca4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x12fca8: 0x6a05001f  ldl         $a1, 0x1F($s0)
    ctx->pc = 0x12fca8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x12fcac: 0x6e050018  ldr         $a1, 0x18($s0)
    ctx->pc = 0x12fcacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x12fcb0: 0xb0470007  sdl         $a3, 0x7($v0)
    ctx->pc = 0x12fcb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fcb4: 0xb4470000  sdr         $a3, 0x0($v0)
    ctx->pc = 0x12fcb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fcb8: 0xb043000f  sdl         $v1, 0xF($v0)
    ctx->pc = 0x12fcb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fcbc: 0xb4430008  sdr         $v1, 0x8($v0)
    ctx->pc = 0x12fcbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fcc0: 0xb0440017  sdl         $a0, 0x17($v0)
    ctx->pc = 0x12fcc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fcc4: 0xb4440010  sdr         $a0, 0x10($v0)
    ctx->pc = 0x12fcc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fcc8: 0xb045001f  sdl         $a1, 0x1F($v0)
    ctx->pc = 0x12fcc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fccc: 0xb4450018  sdr         $a1, 0x18($v0)
    ctx->pc = 0x12fcccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fcd0: 0x6a070027  ldl         $a3, 0x27($s0)
    ctx->pc = 0x12fcd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x12fcd4: 0x6e070020  ldr         $a3, 0x20($s0)
    ctx->pc = 0x12fcd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x12fcd8: 0x6a03002f  ldl         $v1, 0x2F($s0)
    ctx->pc = 0x12fcd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x12fcdc: 0x6e030028  ldr         $v1, 0x28($s0)
    ctx->pc = 0x12fcdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x12fce0: 0x6a040037  ldl         $a0, 0x37($s0)
    ctx->pc = 0x12fce0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x12fce4: 0x6e040030  ldr         $a0, 0x30($s0)
    ctx->pc = 0x12fce4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x12fce8: 0x6a05003f  ldl         $a1, 0x3F($s0)
    ctx->pc = 0x12fce8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x12fcec: 0x6e050038  ldr         $a1, 0x38($s0)
    ctx->pc = 0x12fcecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x12fcf0: 0xb0470027  sdl         $a3, 0x27($v0)
    ctx->pc = 0x12fcf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fcf4: 0xb4470020  sdr         $a3, 0x20($v0)
    ctx->pc = 0x12fcf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fcf8: 0xb043002f  sdl         $v1, 0x2F($v0)
    ctx->pc = 0x12fcf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fcfc: 0xb4430028  sdr         $v1, 0x28($v0)
    ctx->pc = 0x12fcfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fd00: 0xb0440037  sdl         $a0, 0x37($v0)
    ctx->pc = 0x12fd00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fd04: 0xb4440030  sdr         $a0, 0x30($v0)
    ctx->pc = 0x12fd04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fd08: 0xb045003f  sdl         $a1, 0x3F($v0)
    ctx->pc = 0x12fd08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fd0c: 0xb4450038  sdr         $a1, 0x38($v0)
    ctx->pc = 0x12fd0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fd10: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x12fd10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x12fd14: 0x0  nop
    ctx->pc = 0x12fd14u;
    // NOP
label_12fd18:
    // 0x12fd18: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x12fd18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12fd1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12fd1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12fd20: 0x3e00008  jr          $ra
    ctx->pc = 0x12FD20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FD24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FD20u;
            // 0x12fd24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12FB14u: goto label_12fb14;
            case 0x12FB1Cu: goto label_12fb1c;
            case 0x12FB68u: goto label_12fb68;
            case 0x12FB80u: goto label_12fb80;
            case 0x12FBC0u: goto label_12fbc0;
            case 0x12FBF0u: goto label_12fbf0;
            case 0x12FC78u: goto label_12fc78;
            case 0x12FD18u: goto label_12fd18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12FD28u;
}
