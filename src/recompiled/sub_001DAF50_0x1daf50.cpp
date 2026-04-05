#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DAF50
// Address: 0x1daf50 - 0x1db0f0
void sub_001DAF50_0x1daf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DAF50_0x1daf50");
#endif

    ctx->pc = 0x1daf50u;

    // 0x1daf50: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1daf50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1daf54: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1daf54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1daf58: 0x8c42e560  lw          $v0, -0x1AA0($v0)
    ctx->pc = 0x1daf58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960480)));
    // 0x1daf5c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1daf5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1daf60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1daf60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1daf64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1daf64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daf68: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x1daf68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x1daf6c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DAF6Cu;
    {
        const bool branch_taken_0x1daf6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAF70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAF6Cu;
            // 0x1daf70: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daf6c) {
            ctx->pc = 0x1DAF90u;
            goto label_1daf90;
        }
    }
    ctx->pc = 0x1DAF74u;
    // 0x1daf74: 0xc06f9e8  jal         func_1BE7A0
    ctx->pc = 0x1DAF74u;
    SET_GPR_U32(ctx, 31, 0x1DAF7Cu);
    ctx->pc = 0x1BE7A0u;
    if (runtime->hasFunction(0x1BE7A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAF7Cu; }
        if (ctx->pc != 0x1DAF7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1be7a0_0x1be7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAF7Cu; }
        if (ctx->pc != 0x1DAF7Cu) { return; }
    }
    ctx->pc = 0x1DAF7Cu;
    // 0x1daf7c: 0x54400057  bnel        $v0, $zero, . + 4 + (0x57 << 2)
    ctx->pc = 0x1DAF7Cu;
    {
        const bool branch_taken_0x1daf7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1daf7c) {
            ctx->pc = 0x1DAF80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAF7Cu;
            // 0x1daf80: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DB0DCu;
            goto label_1db0dc;
        }
    }
    ctx->pc = 0x1DAF84u;
    // 0x1daf84: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1daf84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1daf88: 0x54400054  bnel        $v0, $zero, . + 4 + (0x54 << 2)
    ctx->pc = 0x1DAF88u;
    {
        const bool branch_taken_0x1daf88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1daf88) {
            ctx->pc = 0x1DAF8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAF88u;
            // 0x1daf8c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DB0DCu;
            goto label_1db0dc;
        }
    }
    ctx->pc = 0x1DAF90u;
label_1daf90:
    // 0x1daf90: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1daf90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1daf94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1daf94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1daf98: 0xc4430178  lwc1        $f3, 0x178($v0)
    ctx->pc = 0x1daf98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1daf9c: 0x46001832  c.eq.s      $f3, $f0
    ctx->pc = 0x1daf9cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dafa0: 0x0  nop
    ctx->pc = 0x1dafa0u;
    // NOP
    // 0x1dafa4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1DAFA4u;
    {
        const bool branch_taken_0x1dafa4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DAFA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAFA4u;
            // 0x1dafa8: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dafa4) {
            ctx->pc = 0x1DAFB8u;
            goto label_1dafb8;
        }
    }
    ctx->pc = 0x1DAFACu;
    // 0x1dafac: 0xc600007c  lwc1        $f0, 0x7C($s0)
    ctx->pc = 0x1dafacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dafb0: 0xc441c658  lwc1        $f1, -0x39A8($v0)
    ctx->pc = 0x1dafb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dafb4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1dafb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1dafb8:
    // 0x1dafb8: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x1dafb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x1dafbc: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1dafbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1dafc0: 0x244328e0  addiu       $v1, $v0, 0x28E0
    ctx->pc = 0x1dafc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 10464));
    // 0x1dafc4: 0xc464033c  lwc1        $f4, 0x33C($v1)
    ctx->pc = 0x1dafc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1dafc8: 0x46041834  c.lt.s      $f3, $f4
    ctx->pc = 0x1dafc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dafcc: 0x0  nop
    ctx->pc = 0x1dafccu;
    // NOP
    // 0x1dafd0: 0x45000040  bc1f        . + 4 + (0x40 << 2)
    ctx->pc = 0x1DAFD0u;
    {
        const bool branch_taken_0x1dafd0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DAFD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAFD0u;
            // 0x1dafd4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dafd0) {
            ctx->pc = 0x1DB0D4u;
            goto label_1db0d4;
        }
    }
    ctx->pc = 0x1DAFD8u;
    // 0x1dafd8: 0xc6000078  lwc1        $f0, 0x78($s0)
    ctx->pc = 0x1dafd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dafdc: 0xc441c658  lwc1        $f1, -0x39A8($v0)
    ctx->pc = 0x1dafdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dafe0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1dafe0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1dafe4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1dafe4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1dafe8: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1dafe8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dafec: 0x0  nop
    ctx->pc = 0x1dafecu;
    // NOP
    // 0x1daff0: 0x45000039  bc1f        . + 4 + (0x39 << 2)
    ctx->pc = 0x1DAFF0u;
    {
        const bool branch_taken_0x1daff0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DAFF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAFF0u;
            // 0x1daff4: 0xe6000078  swc1        $f0, 0x78($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daff0) {
            ctx->pc = 0x1DB0D8u;
            goto label_1db0d8;
        }
    }
    ctx->pc = 0x1DAFF8u;
    // 0x1daff8: 0x46021832  c.eq.s      $f3, $f2
    ctx->pc = 0x1daff8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1daffc: 0x0  nop
    ctx->pc = 0x1daffcu;
    // NOP
    // 0x1db000: 0x45030012  bc1tl       . + 4 + (0x12 << 2)
    ctx->pc = 0x1DB000u;
    {
        const bool branch_taken_0x1db000 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1db000) {
            ctx->pc = 0x1DB004u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB000u;
            // 0x1db004: 0xc600007c  lwc1        $f0, 0x7C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DB04Cu;
            goto label_1db04c;
        }
    }
    ctx->pc = 0x1DB008u;
    // 0x1db008: 0x46041903  div.s       $f4, $f3, $f4
    ctx->pc = 0x1db008u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[4] = ctx->f[3] / ctx->f[4];
    // 0x1db00c: 0x46022034  c.lt.s      $f4, $f2
    ctx->pc = 0x1db00cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1db010: 0x0  nop
    ctx->pc = 0x1db010u;
    // NOP
    // 0x1db014: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1DB014u;
    {
        const bool branch_taken_0x1db014 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1db014) {
            ctx->pc = 0x1DB018u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB014u;
            // 0x1db018: 0x46001106  mov.s       $f4, $f2 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DB01Cu;
            goto label_1db01c;
        }
    }
    ctx->pc = 0x1DB01Cu;
label_1db01c:
    // 0x1db01c: 0x3c014480  lui         $at, 0x4480
    ctx->pc = 0x1db01cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17536 << 16));
    // 0x1db020: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1db020u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1db024: 0xc4620348  lwc1        $f2, 0x348($v1)
    ctx->pc = 0x1db024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1db028: 0xc4610340  lwc1        $f1, 0x340($v1)
    ctx->pc = 0x1db028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db02c: 0xc4600344  lwc1        $f0, 0x344($v1)
    ctx->pc = 0x1db02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db030: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1db030u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1db034: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x1db034u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x1db038: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1db038u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1db03c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1db03cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1db040: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1db040u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1db044: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1DB044u;
    {
        const bool branch_taken_0x1db044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB044u;
            // 0x1db048: 0x46001d01  sub.s       $f20, $f3, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db044) {
            ctx->pc = 0x1DB088u;
            goto label_1db088;
        }
    }
    ctx->pc = 0x1DB04Cu;
label_1db04c:
    // 0x1db04c: 0xc4610350  lwc1        $f1, 0x350($v1)
    ctx->pc = 0x1db04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db050: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1db050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1db054: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1db054u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1db058: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x1db058u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[3] = ctx->f[0] / ctx->f[1];
    // 0x1db05c: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x1db05cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1db060: 0x0  nop
    ctx->pc = 0x1db060u;
    // NOP
    // 0x1db064: 0x4503001d  bc1tl       . + 4 + (0x1D << 2)
    ctx->pc = 0x1DB064u;
    {
        const bool branch_taken_0x1db064 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1db064) {
            ctx->pc = 0x1DB068u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB064u;
            // 0x1db068: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DB0DCu;
            goto label_1db0dc;
        }
    }
    ctx->pc = 0x1DB06Cu;
    // 0x1db06c: 0xc4610348  lwc1        $f1, 0x348($v1)
    ctx->pc = 0x1db06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db070: 0xc460034c  lwc1        $f0, 0x34C($v1)
    ctx->pc = 0x1db070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db074: 0x3c014480  lui         $at, 0x4480
    ctx->pc = 0x1db074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17536 << 16));
    // 0x1db078: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1db078u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1db07c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1db07cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1db080: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1db080u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1db084: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1db084u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1db088:
    // 0x1db088: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1db088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1db08c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1db08cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1db090: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1db090u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1db094: 0x24846c58  addiu       $a0, $a0, 0x6C58
    ctx->pc = 0x1db094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27736));
    // 0x1db098: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1db098u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1db09c: 0xc05e996  jal         func_17A658
    ctx->pc = 0x1DB09Cu;
    SET_GPR_U32(ctx, 31, 0x1DB0A4u);
    ctx->pc = 0x1DB0A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB09Cu;
            // 0x1db0a0: 0xe6000078  swc1        $f0, 0x78($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB0A4u; }
        if (ctx->pc != 0x1DB0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB0A4u; }
        if (ctx->pc != 0x1DB0A4u) { return; }
    }
    ctx->pc = 0x1DB0A4u;
    // 0x1db0a4: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1DB0A4u;
    {
        const bool branch_taken_0x1db0a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db0a4) {
            ctx->pc = 0x1DB0A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB0A4u;
            // 0x1db0a8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DB0DCu;
            goto label_1db0dc;
        }
    }
    ctx->pc = 0x1DB0ACu;
    // 0x1db0ac: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x1db0acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x1db0b0: 0xc05c294  jal         func_170A50
    ctx->pc = 0x1DB0B0u;
    SET_GPR_U32(ctx, 31, 0x1DB0B8u);
    ctx->pc = 0x1DB0B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB0B0u;
            // 0x1db0b4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A50u;
    if (runtime->hasFunction(0x170A50u)) {
        auto targetFn = runtime->lookupFunction(0x170A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB0B8u; }
        if (ctx->pc != 0x1DB0B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170A50_0x170a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB0B8u; }
        if (ctx->pc != 0x1DB0B8u) { return; }
    }
    ctx->pc = 0x1DB0B8u;
    // 0x1db0b8: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1db0b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1db0bc: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x1db0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x1db0c0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1db0c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1db0c4: 0xc05c46e  jal         func_1711B8
    ctx->pc = 0x1DB0C4u;
    SET_GPR_U32(ctx, 31, 0x1DB0CCu);
    ctx->pc = 0x1711B8u;
    if (runtime->hasFunction(0x1711B8u)) {
        auto targetFn = runtime->lookupFunction(0x1711B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB0CCu; }
        if (ctx->pc != 0x1DB0CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_001711b8_0x1711b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB0CCu; }
        if (ctx->pc != 0x1DB0CCu) { return; }
    }
    ctx->pc = 0x1DB0CCu;
    // 0x1db0cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB0CCu;
    {
        const bool branch_taken_0x1db0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB0D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB0CCu;
            // 0x1db0d0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db0cc) {
            ctx->pc = 0x1DB0DCu;
            goto label_1db0dc;
        }
    }
    ctx->pc = 0x1DB0D4u;
label_1db0d4:
    // 0x1db0d4: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x1db0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
label_1db0d8:
    // 0x1db0d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1db0d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1db0dc:
    // 0x1db0dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1db0dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db0e0: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1db0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1db0e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB0E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB0E4u;
            // 0x1db0e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DAF90u: goto label_1daf90;
            case 0x1DAFB8u: goto label_1dafb8;
            case 0x1DB01Cu: goto label_1db01c;
            case 0x1DB04Cu: goto label_1db04c;
            case 0x1DB088u: goto label_1db088;
            case 0x1DB0D4u: goto label_1db0d4;
            case 0x1DB0D8u: goto label_1db0d8;
            case 0x1DB0DCu: goto label_1db0dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DB0ECu;
    // 0x1db0ec: 0x0  nop
    ctx->pc = 0x1db0ecu;
    // NOP
}
