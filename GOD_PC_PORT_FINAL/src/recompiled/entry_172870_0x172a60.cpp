#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_172870
// Address: 0x172870 - 0x172a60
void entry_172870_0x172a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_172870_0x172a60");
#endif

    ctx->pc = 0x172870u;

    // 0x172870: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x172870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x172874: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x172874u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x172878: 0xc4404ed4  lwc1        $f0, 0x4ED4($v0)
    ctx->pc = 0x172878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17287c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x17287cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x172880: 0xc4a2c370  lwc1        $f2, -0x3C90($a1)
    ctx->pc = 0x172880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294951792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x172884: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x172884u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x172888: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x172888u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x17288c: 0xc461c374  lwc1        $f1, -0x3C8C($v1)
    ctx->pc = 0x17288cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294951796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172890: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x172890u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x172894: 0x460c0840  add.s       $f1, $f1, $f12
    ctx->pc = 0x172894u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
    // 0x172898: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x172898u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17289c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17289cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1728a0: 0xe461c374  swc1        $f1, -0x3C8C($v1)
    ctx->pc = 0x1728a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294951796), bits); }
    // 0x1728a4: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x1728a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x1728a8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1728a8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1728ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1728ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1728B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1728ACu;
            // 0x1728b0: 0xe4a2c370  swc1        $f2, -0x3C90($a1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294951792), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172990u: goto label_172990;
            case 0x1729B8u: goto label_1729b8;
            case 0x172A30u: goto label_172a30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1728B4u;
    // 0x1728b4: 0x0  nop
    ctx->pc = 0x1728b4u;
    // NOP
    // 0x1728b8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1728b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1728bc: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1728bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1728c0: 0xc440c648  lwc1        $f0, -0x39B8($v0)
    ctx->pc = 0x1728c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1728c4: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1728c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1728c8: 0xc46cc644  lwc1        $f12, -0x39BC($v1)
    ctx->pc = 0x1728c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294952516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1728cc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1728ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1728d0: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x1728d0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x1728d4: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x1728d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1728d8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1728d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1728dc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1728dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1728e0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1728e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1728e4: 0xc0a1d1c  jal         func_287470
    ctx->pc = 0x1728E4u;
    SET_GPR_U32(ctx, 31, 0x1728ECu);
    ctx->pc = 0x1728E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1728E4u;
            // 0x1728e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287470u;
    if (runtime->hasFunction(0x287470u)) {
        auto targetFn = runtime->lookupFunction(0x287470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1728ECu; }
        if (ctx->pc != 0x1728ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00287470_0x287470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1728ECu; }
        if (ctx->pc != 0x1728ECu) { return; }
    }
    ctx->pc = 0x1728ECu;
    // 0x1728ec: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1728ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1728f0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1728f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1728f4: 0xc0a1d1c  jal         func_287470
    ctx->pc = 0x1728F4u;
    SET_GPR_U32(ctx, 31, 0x1728FCu);
    ctx->pc = 0x1728F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1728F4u;
            // 0x1728f8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x287470u;
    if (runtime->hasFunction(0x287470u)) {
        auto targetFn = runtime->lookupFunction(0x287470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1728FCu; }
        if (ctx->pc != 0x1728FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00287470_0x287470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1728FCu; }
        if (ctx->pc != 0x1728FCu) { return; }
    }
    ctx->pc = 0x1728FCu;
    // 0x1728fc: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x1728fcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[0];
    // 0x172900: 0x3c0144be  lui         $at, 0x44BE
    ctx->pc = 0x172900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17598 << 16));
    // 0x172904: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x172904u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x172908: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x172908u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x17290c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x17290cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x172910: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x172910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x172914: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x172914u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x172918: 0xc460c64c  lwc1        $f0, -0x39B4($v1)
    ctx->pc = 0x172918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294952524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17291c: 0xc443c37c  lwc1        $f3, -0x3C84($v0)
    ctx->pc = 0x17291cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294951804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x172920: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x172920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x172924: 0xc481c380  lwc1        $f1, -0x3C80($a0)
    ctx->pc = 0x172924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294951808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172928: 0xc462c320  lwc1        $f2, -0x3CE0($v1)
    ctx->pc = 0x172928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294951712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17292c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x17292cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x172930: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x172930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x172934: 0x4604a502  mul.s       $f20, $f20, $f4
    ctx->pc = 0x172934u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
    // 0x172938: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x172938u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17293c: 0x4603a502  mul.s       $f20, $f20, $f3
    ctx->pc = 0x17293cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x172940: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x172940u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x172944: 0x4602a501  sub.s       $f20, $f20, $f2
    ctx->pc = 0x172944u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
    // 0x172948: 0x4600a528  max.s       $f20, $f20, $f0
    ctx->pc = 0x172948u;
    ctx->f[20] = std::max(ctx->f[20], ctx->f[0]);
    // 0x17294c: 0xc440c384  lwc1        $f0, -0x3C7C($v0)
    ctx->pc = 0x17294cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294951812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172950: 0x4601a529  min.s       $f20, $f20, $f1
    ctx->pc = 0x172950u;
    ctx->f[20] = std::min(ctx->f[20], ctx->f[1]);
    // 0x172954: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x172954u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x172958: 0xe440c384  swc1        $f0, -0x3C7C($v0)
    ctx->pc = 0x172958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294951812), bits); }
    // 0x17295c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17295cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x172960: 0xe461c320  swc1        $f1, -0x3CE0($v1)
    ctx->pc = 0x172960u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294951712), bits); }
    // 0x172964: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x172964u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x172968: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x172968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x17296c: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x17296cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x172970: 0x8c43d8c0  lw          $v1, -0x2740($v0)
    ctx->pc = 0x172970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957248)));
    // 0x172974: 0x2442d8c0  addiu       $v0, $v0, -0x2740
    ctx->pc = 0x172974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957248));
    // 0x172978: 0xae40c370  sw          $zero, -0x3C90($s2)
    ctx->pc = 0x172978u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294951792), GPR_U32(ctx, 0));
    // 0x17297c: 0xae20c374  sw          $zero, -0x3C8C($s1)
    ctx->pc = 0x17297cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294951796), GPR_U32(ctx, 0));
    // 0x172980: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x172980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x172984: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x172984u;
    {
        const bool branch_taken_0x172984 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x172988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172984u;
            // 0x172988: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172984) {
            ctx->pc = 0x1729B8u;
            goto label_1729b8;
        }
    }
    ctx->pc = 0x17298Cu;
    // 0x17298c: 0x0  nop
    ctx->pc = 0x17298cu;
    // NOP
label_172990:
    // 0x172990: 0xc05c556  jal         func_171558
    ctx->pc = 0x172990u;
    SET_GPR_U32(ctx, 31, 0x172998u);
    ctx->pc = 0x172994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172990u;
            // 0x172994: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171558u;
    if (runtime->hasFunction(0x171558u)) {
        auto targetFn = runtime->lookupFunction(0x171558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172998u; }
        if (ctx->pc != 0x172998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171558_0x171558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172998u; }
        if (ctx->pc != 0x172998u) { return; }
    }
    ctx->pc = 0x172998u;
    // 0x172998: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x172998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x17299c: 0x78620080  lq          $v0, 0x80($v1)
    ctx->pc = 0x17299cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x1729a0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1729a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1729a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1729a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1729a8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1729a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1729ac: 0x1443fff8  bne         $v0, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1729ACu;
    {
        const bool branch_taken_0x1729ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1729B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1729ACu;
            // 0x1729b0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1729ac) {
            ctx->pc = 0x172990u;
            runtime->cooperativeGuestYield();
            goto label_172990;
        }
    }
    ctx->pc = 0x1729B4u;
    // 0x1729b4: 0x0  nop
    ctx->pc = 0x1729b4u;
    // NOP
label_1729b8:
    // 0x1729b8: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x1729b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x1729bc: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1729bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1729c0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1729c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1729c4: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1729c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1729c8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1729c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1729cc: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1729ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1729d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1729d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1729d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1729d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1729d8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1729d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1729dc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1729dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1729e0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1729e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1729e4: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x1729e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1729e8: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x1729e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1729ec: 0x40f809  jalr        $v0
    ctx->pc = 0x1729ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1729F4u);
        ctx->pc = 0x1729F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1729ECu;
            // 0x1729f0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1729F4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172990u: goto label_172990;
            case 0x1729B8u: goto label_1729b8;
            case 0x172A30u: goto label_172a30;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1729F4u; }
            if (ctx->pc != 0x1729F4u) { return; }
        }
        }
    }
    ctx->pc = 0x1729F4u;
    // 0x1729f4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1729f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1729f8: 0xc622c374  lwc1        $f2, -0x3C8C($s1)
    ctx->pc = 0x1729f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294951796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1729fc: 0xc4404ed4  lwc1        $f0, 0x4ED4($v0)
    ctx->pc = 0x1729fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172a00: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x172a00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x172a04: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x172a04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x172a08: 0x44041800  mfc1        $a0, $f3
    ctx->pc = 0x172a08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x172a0c: 0x46011032  c.eq.s      $f2, $f1
    ctx->pc = 0x172a0cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172a10: 0x0  nop
    ctx->pc = 0x172a10u;
    // NOP
    // 0x172a14: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x172A14u;
    {
        const bool branch_taken_0x172a14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x172A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172A14u;
            // 0x172a18: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172a14) {
            ctx->pc = 0x172A30u;
            goto label_172a30;
        }
    }
    ctx->pc = 0x172A1Cu;
    // 0x172a1c: 0xc640c370  lwc1        $f0, -0x3C90($s2)
    ctx->pc = 0x172a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294951792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172a20: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x172a20u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x172a24: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x172a24u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x172a28: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x172a28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x172a2c: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x172a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_172a30:
    // 0x172a30: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x172a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x172a34: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x172a34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x172a38: 0x8c42c378  lw          $v0, -0x3C88($v0)
    ctx->pc = 0x172a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951800)));
    // 0x172a3c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x172a3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x172a40: 0xa2200a  movz        $a0, $a1, $v0
    ctx->pc = 0x172a40u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
    // 0x172a44: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x172a44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x172a48: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x172a48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x172a4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x172a4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x172a50: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x172a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x172a54: 0xac644f18  sw          $a0, 0x4F18($v1)
    ctx->pc = 0x172a54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20248), GPR_U32(ctx, 4));
    // 0x172a58: 0x3e00008  jr          $ra
    ctx->pc = 0x172A58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172A58u;
            // 0x172a5c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172990u: goto label_172990;
            case 0x1729B8u: goto label_1729b8;
            case 0x172A30u: goto label_172a30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x172A60u;
}
