#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00107730
// Address: 0x107730 - 0x107878
void sub_00107730_0x107730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107730_0x107730");
#endif

    ctx->pc = 0x107730u;

    // 0x107730: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x107730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x107734: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x107734u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x107738: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x107738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x10773c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10773cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x107740: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x107740u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x107744: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x107744u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x107748: 0xc4b40004  lwc1        $f20, 0x4($a1)
    ctx->pc = 0x107748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10774c: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x10774cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x107750: 0x0  nop
    ctx->pc = 0x107750u;
    // NOP
    // 0x107754: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x107754u;
    {
        const bool branch_taken_0x107754 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x107758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107754u;
            // 0x107758: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x107754) {
            ctx->pc = 0x107770u;
            goto label_107770;
        }
    }
    ctx->pc = 0x10775Cu;
    // 0x10775c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x10775cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x107760: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x107760u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x107764: 0x46140543  div.s       $f21, $f0, $f20
    ctx->pc = 0x107764u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[21] = ctx->f[0] / ctx->f[20];
    // 0x107768: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x107768u;
    {
        const bool branch_taken_0x107768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10776Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107768u;
            // 0x10776c: 0x8c830014  lw          $v1, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107768) {
            ctx->pc = 0x107774u;
            goto label_107774;
        }
    }
    ctx->pc = 0x107770u;
label_107770:
    // 0x107770: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x107770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_107774:
    // 0x107774: 0x24880014  addiu       $t0, $a0, 0x14
    ctx->pc = 0x107774u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x107778: 0x10680029  beq         $v1, $t0, . + 4 + (0x29 << 2)
    ctx->pc = 0x107778u;
    {
        const bool branch_taken_0x107778 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        if (branch_taken_0x107778) {
            ctx->pc = 0x107820u;
            goto label_107820;
        }
    }
    ctx->pc = 0x107780u;
    // 0x107780: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x107780u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x107784: 0x0  nop
    ctx->pc = 0x107784u;
    // NOP
label_107788:
    // 0x107788: 0x24670008  addiu       $a3, $v1, 0x8
    ctx->pc = 0x107788u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x10778c: 0x52070022  beql        $s0, $a3, . + 4 + (0x22 << 2)
    ctx->pc = 0x10778Cu;
    {
        const bool branch_taken_0x10778c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 7));
        if (branch_taken_0x10778c) {
            ctx->pc = 0x107790u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10778Cu;
            // 0x107790: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x107818u;
            goto label_107818;
        }
    }
    ctx->pc = 0x107794u;
    // 0x107794: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x107794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_107798:
    // 0x107798: 0x5445001c  bnel        $v0, $a1, . + 4 + (0x1C << 2)
    ctx->pc = 0x107798u;
    {
        const bool branch_taken_0x107798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x107798) {
            ctx->pc = 0x10779Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x107798u;
            // 0x10779c: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10780Cu;
            goto label_10780c;
        }
    }
    ctx->pc = 0x1077A0u;
    // 0x1077a0: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1077a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1077a4: 0x30420090  andi        $v0, $v0, 0x90
    ctx->pc = 0x1077a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)144);
    // 0x1077a8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1077A8u;
    {
        const bool branch_taken_0x1077a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1077a8) {
            ctx->pc = 0x1077DCu;
            goto label_1077dc;
        }
    }
    ctx->pc = 0x1077B0u;
    // 0x1077b0: 0xc60c001c  lwc1        $f12, 0x1C($s0)
    ctx->pc = 0x1077b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1077b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1077b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1077b8: 0xc045d0e  jal         func_117438
    ctx->pc = 0x1077B8u;
    SET_GPR_U32(ctx, 31, 0x1077C0u);
    ctx->pc = 0x1077BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1077B8u;
            // 0x1077bc: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x117438u;
    if (runtime->hasFunction(0x117438u)) {
        auto targetFn = runtime->lookupFunction(0x117438u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1077C0u; }
        if (ctx->pc != 0x1077C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_117438_0x117450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1077C0u; }
        if (ctx->pc != 0x1077C0u) { return; }
    }
    ctx->pc = 0x1077C0u;
    // 0x1077c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1077c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1077c4: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x1077c4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1077c8: 0x0  nop
    ctx->pc = 0x1077c8u;
    // NOP
    // 0x1077cc: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1077CCu;
    {
        const bool branch_taken_0x1077cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1077cc) {
            ctx->pc = 0x1077D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1077CCu;
            // 0x1077d0: 0xe6150020  swc1        $f21, 0x20($s0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1077D4u;
            goto label_1077d4;
        }
    }
    ctx->pc = 0x1077D4u;
label_1077d4:
    // 0x1077d4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1077D4u;
    {
        const bool branch_taken_0x1077d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1077D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1077D4u;
            // 0x1077d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1077d4) {
            ctx->pc = 0x10785Cu;
            goto label_10785c;
        }
    }
    ctx->pc = 0x1077DCu;
label_1077dc:
    // 0x1077dc: 0x54c0000b  bnel        $a2, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1077DCu;
    {
        const bool branch_taken_0x1077dc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1077dc) {
            ctx->pc = 0x1077E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1077DCu;
            // 0x1077e0: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10780Cu;
            goto label_10780c;
        }
    }
    ctx->pc = 0x1077E4u;
    // 0x1077e4: 0xc045d14  jal         func_117450
    ctx->pc = 0x1077E4u;
    SET_GPR_U32(ctx, 31, 0x1077ECu);
    ctx->pc = 0x1077E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1077E4u;
            // 0x1077e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117450u;
    if (runtime->hasFunction(0x117450u)) {
        auto targetFn = runtime->lookupFunction(0x117450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1077ECu; }
        if (ctx->pc != 0x1077ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_117450_0x117470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1077ECu; }
        if (ctx->pc != 0x1077ECu) { return; }
    }
    ctx->pc = 0x1077ECu;
    // 0x1077ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1077ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1077f0: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x1077f0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1077f4: 0x0  nop
    ctx->pc = 0x1077f4u;
    // NOP
    // 0x1077f8: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x1077F8u;
    {
        const bool branch_taken_0x1077f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1077FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1077F8u;
            // 0x1077fc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1077f8) {
            ctx->pc = 0x10785Cu;
            goto label_10785c;
        }
    }
    ctx->pc = 0x107800u;
    // 0x107800: 0x4600a807  neg.s       $f0, $f21
    ctx->pc = 0x107800u;
    ctx->f[0] = FPU_NEG_S(ctx->f[21]);
    // 0x107804: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x107804u;
    {
        const bool branch_taken_0x107804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107804u;
            // 0x107808: 0xe6000020  swc1        $f0, 0x20($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x107804) {
            ctx->pc = 0x10785Cu;
            goto label_10785c;
        }
    }
    ctx->pc = 0x10780Cu;
label_10780c:
    // 0x10780c: 0x5607ffe2  bnel        $s0, $a3, . + 4 + (-0x1E << 2)
    ctx->pc = 0x10780Cu;
    {
        const bool branch_taken_0x10780c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 7));
        if (branch_taken_0x10780c) {
            ctx->pc = 0x107810u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10780Cu;
            // 0x107810: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x107798u;
            runtime->cooperativeGuestYield();
            goto label_107798;
        }
    }
    ctx->pc = 0x107814u;
    // 0x107814: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x107814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_107818:
    // 0x107818: 0x5468ffdb  bnel        $v1, $t0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x107818u;
    {
        const bool branch_taken_0x107818 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x107818) {
            ctx->pc = 0x10781Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x107818u;
            // 0x10781c: 0x8c700008  lw          $s0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x107788u;
            runtime->cooperativeGuestYield();
            goto label_107788;
        }
    }
    ctx->pc = 0x107820u;
label_107820:
    // 0x107820: 0xc041d66  jal         func_107598
    ctx->pc = 0x107820u;
    SET_GPR_U32(ctx, 31, 0x107828u);
    ctx->pc = 0x107824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107820u;
            // 0x107824: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107598u;
    if (runtime->hasFunction(0x107598u)) {
        auto targetFn = runtime->lookupFunction(0x107598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107828u; }
        if (ctx->pc != 0x107828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_107598_0x107628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107828u; }
        if (ctx->pc != 0x107828u) { return; }
    }
    ctx->pc = 0x107828u;
    // 0x107828: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x107828u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10782c: 0x4601a032  c.eq.s      $f20, $f1
    ctx->pc = 0x10782cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x107830: 0x0  nop
    ctx->pc = 0x107830u;
    // NOP
    // 0x107834: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x107834u;
    {
        const bool branch_taken_0x107834 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x107838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107834u;
            // 0x107838: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107834) {
            ctx->pc = 0x107848u;
            goto label_107848;
        }
    }
    ctx->pc = 0x10783Cu;
    // 0x10783c: 0x4600a807  neg.s       $f0, $f21
    ctx->pc = 0x10783cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[21]);
    // 0x107840: 0xe461001c  swc1        $f1, 0x1C($v1)
    ctx->pc = 0x107840u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x107844: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x107844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_107848:
    // 0x107848: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x107848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10784c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10784cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x107850: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x107850u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107854: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x107854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x107858: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x107858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_10785c:
    // 0x10785c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x10785cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x107860: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107864: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x107864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x107868: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x107868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10786c: 0x3e00008  jr          $ra
    ctx->pc = 0x10786Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10786Cu;
            // 0x107870: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x107770u: goto label_107770;
            case 0x107774u: goto label_107774;
            case 0x107788u: goto label_107788;
            case 0x107798u: goto label_107798;
            case 0x1077D4u: goto label_1077d4;
            case 0x1077DCu: goto label_1077dc;
            case 0x10780Cu: goto label_10780c;
            case 0x107818u: goto label_107818;
            case 0x107820u: goto label_107820;
            case 0x107848u: goto label_107848;
            case 0x10785Cu: goto label_10785c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x107874u;
    // 0x107874: 0x0  nop
    ctx->pc = 0x107874u;
    // NOP
}
