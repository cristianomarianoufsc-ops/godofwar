#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EEFD8
// Address: 0x1eefd8 - 0x1ef0e0
void sub_001EEFD8_0x1eefd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EEFD8_0x1eefd8");
#endif

    ctx->pc = 0x1eefd8u;

    // 0x1eefd8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1eefd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1eefdc: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1eefdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1eefe0: 0x8c42e2a8  lw          $v0, -0x1D58($v0)
    ctx->pc = 0x1eefe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959784)));
    // 0x1eefe4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1eefe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1eefe8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1eefe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1eefec: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1eefecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1eeff0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EEFF0u;
    {
        const bool branch_taken_0x1eeff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEFF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEFF0u;
            // 0x1eeff4: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eeff0) {
            ctx->pc = 0x1EF00Cu;
            goto label_1ef00c;
        }
    }
    ctx->pc = 0x1EEFF8u;
    // 0x1eeff8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1eeff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1eeffc: 0xc4800800  lwc1        $f0, 0x800($a0)
    ctx->pc = 0x1eeffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ef000: 0xc441c658  lwc1        $f1, -0x39A8($v0)
    ctx->pc = 0x1ef000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ef004: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1EF004u;
    {
        const bool branch_taken_0x1ef004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF004u;
            // 0x1ef008: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef004) {
            ctx->pc = 0x1EF01Cu;
            goto label_1ef01c;
        }
    }
    ctx->pc = 0x1EF00Cu;
label_1ef00c:
    // 0x1ef00c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ef00cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ef010: 0xc4800800  lwc1        $f0, 0x800($a0)
    ctx->pc = 0x1ef010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ef014: 0xc441c658  lwc1        $f1, -0x39A8($v0)
    ctx->pc = 0x1ef014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ef018: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ef018u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1ef01c:
    // 0x1ef01c: 0xe4800800  swc1        $f0, 0x800($a0)
    ctx->pc = 0x1ef01cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2048), bits); }
    // 0x1ef020: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ef020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ef024: 0xc4800800  lwc1        $f0, 0x800($a0)
    ctx->pc = 0x1ef024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ef028: 0xc454c4a0  lwc1        $f20, -0x3B60($v0)
    ctx->pc = 0x1ef028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ef02c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1ef02cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ef030: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x1ef030u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x1ef034: 0x46140029  min.s       $f0, $f0, $f20
    ctx->pc = 0x1ef034u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[20]);
    // 0x1ef038: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ef038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ef03c: 0x46140503  div.s       $f20, $f0, $f20
    ctx->pc = 0x1ef03cu;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[20] = ctx->f[0] / ctx->f[20];
    // 0x1ef040: 0x8c42c494  lw          $v0, -0x3B6C($v0)
    ctx->pc = 0x1ef040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952084)));
    // 0x1ef044: 0xe4800800  swc1        $f0, 0x800($a0)
    ctx->pc = 0x1ef044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2048), bits); }
    // 0x1ef048: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1ef048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1ef04c: 0x2442fc00  addiu       $v0, $v0, -0x400
    ctx->pc = 0x1ef04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966272));
    // 0x1ef050: 0xc461c498  lwc1        $f1, -0x3B68($v1)
    ctx->pc = 0x1ef050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294952088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ef054: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ef054u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ef058: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef058u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef05c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ef05cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ef060: 0x24040039  addiu       $a0, $zero, 0x39
    ctx->pc = 0x1ef060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x1ef064: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1ef064u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1ef068: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1ef068u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x1ef06c: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ef06cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1ef070: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x1ef070u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1ef074: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ef074u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1ef078: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x1ef078u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x1ef07c: 0x24a50400  addiu       $a1, $a1, 0x400
    ctx->pc = 0x1ef07cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1024));
    // 0x1ef080: 0xc05c0c0  jal         func_170300
    ctx->pc = 0x1EF080u;
    SET_GPR_U32(ctx, 31, 0x1EF088u);
    ctx->pc = 0x1EF084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF080u;
            // 0x1ef084: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170300u;
    if (runtime->hasFunction(0x170300u)) {
        auto targetFn = runtime->lookupFunction(0x170300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF088u; }
        if (ctx->pc != 0x1EF088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_170300_0x170350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF088u; }
        if (ctx->pc != 0x1EF088u) { return; }
    }
    ctx->pc = 0x1EF088u;
    // 0x1ef088: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ef088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ef08c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1ef08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ef090: 0x8c42c49c  lw          $v0, -0x3B64($v0)
    ctx->pc = 0x1ef090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952092)));
    // 0x1ef094: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ef094u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef098: 0x2442fc00  addiu       $v0, $v0, -0x400
    ctx->pc = 0x1ef098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966272));
    // 0x1ef09c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef09cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef0a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ef0a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ef0a4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1ef0a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1ef0a8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ef0a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1ef0ac: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1ef0acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1ef0b0: 0xc05c0c0  jal         func_170300
    ctx->pc = 0x1EF0B0u;
    SET_GPR_U32(ctx, 31, 0x1EF0B8u);
    ctx->pc = 0x1EF0B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF0B0u;
            // 0x1ef0b4: 0x24a50400  addiu       $a1, $a1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170300u;
    if (runtime->hasFunction(0x170300u)) {
        auto targetFn = runtime->lookupFunction(0x170300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF0B8u; }
        if (ctx->pc != 0x1EF0B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_170300_0x170350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF0B8u; }
        if (ctx->pc != 0x1EF0B8u) { return; }
    }
    ctx->pc = 0x1EF0B8u;
    // 0x1ef0b8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ef0b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef0bc: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x1ef0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1ef0c0: 0xc05c0c0  jal         func_170300
    ctx->pc = 0x1EF0C0u;
    SET_GPR_U32(ctx, 31, 0x1EF0C8u);
    ctx->pc = 0x1EF0C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF0C0u;
            // 0x1ef0c4: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170300u;
    if (runtime->hasFunction(0x170300u)) {
        auto targetFn = runtime->lookupFunction(0x170300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF0C8u; }
        if (ctx->pc != 0x1EF0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_170300_0x170350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF0C8u; }
        if (ctx->pc != 0x1EF0C8u) { return; }
    }
    ctx->pc = 0x1EF0C8u;
    // 0x1ef0c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ef0c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ef0cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ef0ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef0d0: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1ef0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ef0d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF0D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF0D4u;
            // 0x1ef0d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EF00Cu: goto label_1ef00c;
            case 0x1EF01Cu: goto label_1ef01c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EF0DCu;
    // 0x1ef0dc: 0x0  nop
    ctx->pc = 0x1ef0dcu;
    // NOP
}
