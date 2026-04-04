#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EE838
// Address: 0x1ee838 - 0x1eea68
void sub_001EE838_0x1ee838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EE838_0x1ee838");
#endif

    ctx->pc = 0x1ee838u;

    // 0x1ee838: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1ee838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1ee83c: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x1ee83cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x1ee840: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ee840u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee844: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1ee844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1ee848: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1ee848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1ee84c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1ee84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1ee850: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ee850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ee854: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1ee854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1ee858: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1ee858u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee85c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ee85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ee860: 0xe6600178  swc1        $f0, 0x178($s3)
    ctx->pc = 0x1ee860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 376), bits); }
    // 0x1ee864: 0x8e620754  lw          $v0, 0x754($s3)
    ctx->pc = 0x1ee864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1876)));
    // 0x1ee868: 0x8e630750  lw          $v1, 0x750($s3)
    ctx->pc = 0x1ee868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1872)));
    // 0x1ee86c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ee86cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee870: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1ee870u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ee874: 0x24720001  addiu       $s2, $v1, 0x1
    ctx->pc = 0x1ee874u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ee878: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x1ee878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x1ee87c: 0x12102a  slt         $v0, $zero, $s2
    ctx->pc = 0x1ee87cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1ee880: 0x62900a  movz        $s2, $v1, $v0
    ctx->pc = 0x1ee880u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
    // 0x1ee884: 0x12400026  beqz        $s2, . + 4 + (0x26 << 2)
    ctx->pc = 0x1EE884u;
    {
        const bool branch_taken_0x1ee884 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE884u;
            // 0x1ee888: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee884) {
            ctx->pc = 0x1EE920u;
            goto label_1ee920;
        }
    }
    ctx->pc = 0x1EE88Cu;
    // 0x1ee88c: 0x0  nop
    ctx->pc = 0x1ee88cu;
    // NOP
label_1ee890:
    // 0x1ee890: 0x24020170  addiu       $v0, $zero, 0x170
    ctx->pc = 0x1ee890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 368));
    // 0x1ee894: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ee894u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee898: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x1ee898u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1ee89c: 0x24420190  addiu       $v0, $v0, 0x190
    ctx->pc = 0x1ee89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x1ee8a0: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x1ee8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1ee8a4: 0xc4610050  lwc1        $f1, 0x50($v1)
    ctx->pc = 0x1ee8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ee8a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ee8a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ee8ac: 0x0  nop
    ctx->pc = 0x1ee8acu;
    // NOP
    // 0x1ee8b0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1EE8B0u;
    {
        const bool branch_taken_0x1ee8b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ee8b0) {
            ctx->pc = 0x1EE8B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE8B0u;
            // 0x1ee8b4: 0xe4600050  swc1        $f0, 0x50($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EE8C8u;
            goto label_1ee8c8;
        }
    }
    ctx->pc = 0x1EE8B8u;
    // 0x1ee8b8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ee8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ee8bc: 0xc440c658  lwc1        $f0, -0x39A8($v0)
    ctx->pc = 0x1ee8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee8c0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ee8c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ee8c4: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x1ee8c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
label_1ee8c8:
    // 0x1ee8c8: 0xc4610050  lwc1        $f1, 0x50($v1)
    ctx->pc = 0x1ee8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ee8cc: 0xc460004c  lwc1        $f0, 0x4C($v1)
    ctx->pc = 0x1ee8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee8d0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1ee8d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ee8d4: 0x0  nop
    ctx->pc = 0x1ee8d4u;
    // NOP
    // 0x1ee8d8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1EE8D8u;
    {
        const bool branch_taken_0x1ee8d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EE8DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE8D8u;
            // 0x1ee8dc: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee8d8) {
            ctx->pc = 0x1EE8ECu;
            goto label_1ee8ec;
        }
    }
    ctx->pc = 0x1EE8E0u;
    // 0x1ee8e0: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x1ee8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x1ee8e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1EE8E4u;
    {
        const bool branch_taken_0x1ee8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE8E4u;
            // 0x1ee8e8: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee8e4) {
            ctx->pc = 0x1EE8F8u;
            goto label_1ee8f8;
        }
    }
    ctx->pc = 0x1EE8ECu;
label_1ee8ec:
    // 0x1ee8ec: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1ee8ecu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1ee8f0: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x1ee8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1ee8f4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1ee8f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1ee8f8:
    // 0x1ee8f8: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x1ee8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1ee8fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ee8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ee900: 0x26230004  addiu       $v1, $s1, 0x4
    ctx->pc = 0x1ee900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1ee904: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x1ee904u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1ee908: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x1ee908u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x1ee90c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1ee90cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1ee910: 0x38883  sra         $s1, $v1, 2
    ctx->pc = 0x1ee910u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1ee914: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1ee914u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1ee918: 0x1640ffdd  bnez        $s2, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1EE918u;
    {
        const bool branch_taken_0x1ee918 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE91Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE918u;
            // 0x1ee91c: 0x828823  subu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee918) {
            ctx->pc = 0x1EE890u;
            runtime->cooperativeGuestYield();
            goto label_1ee890;
        }
    }
    ctx->pc = 0x1EE920u;
label_1ee920:
    // 0x1ee920: 0x8e640754  lw          $a0, 0x754($s3)
    ctx->pc = 0x1ee920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1876)));
    // 0x1ee924: 0x12040019  beq         $s0, $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1EE924u;
    {
        const bool branch_taken_0x1ee924 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x1EE928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE924u;
            // 0x1ee928: 0x2049023  subu        $s2, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee924) {
            ctx->pc = 0x1EE98Cu;
            goto label_1ee98c;
        }
    }
    ctx->pc = 0x1EE92Cu;
    // 0x1ee92c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ee92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ee930: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x1ee930u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1ee934: 0x26430004  addiu       $v1, $s2, 0x4
    ctx->pc = 0x1ee934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1ee938: 0x62900a  movz        $s2, $v1, $v0
    ctx->pc = 0x1ee938u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
    // 0x1ee93c: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x1EE93Cu;
    {
        const bool branch_taken_0x1ee93c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE93Cu;
            // 0x1ee940: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee93c) {
            ctx->pc = 0x1EE988u;
            goto label_1ee988;
        }
    }
    ctx->pc = 0x1EE944u;
    // 0x1ee944: 0x0  nop
    ctx->pc = 0x1ee944u;
    // NOP
label_1ee948:
    // 0x1ee948: 0x24040170  addiu       $a0, $zero, 0x170
    ctx->pc = 0x1ee948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 368));
    // 0x1ee94c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1ee94cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1ee950: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x1ee950u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1ee954: 0x24840190  addiu       $a0, $a0, 0x190
    ctx->pc = 0x1ee954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 400));
    // 0x1ee958: 0xc07c68e  jal         func_1F1A38
    ctx->pc = 0x1EE958u;
    SET_GPR_U32(ctx, 31, 0x1EE960u);
    ctx->pc = 0x1EE95Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE958u;
            // 0x1ee95c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F1A38u;
    if (runtime->hasFunction(0x1F1A38u)) {
        auto targetFn = runtime->lookupFunction(0x1F1A38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE960u; }
        if (ctx->pc != 0x1EE960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1A38_0x1f1a38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE960u; }
        if (ctx->pc != 0x1EE960u) { return; }
    }
    ctx->pc = 0x1EE960u;
    // 0x1ee960: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x1ee960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1ee964: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ee964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ee968: 0x26230004  addiu       $v1, $s1, 0x4
    ctx->pc = 0x1ee968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1ee96c: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x1ee96cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1ee970: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x1ee970u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x1ee974: 0x38883  sra         $s1, $v1, 2
    ctx->pc = 0x1ee974u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1ee978: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1ee978u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1ee97c: 0x1640fff2  bnez        $s2, . + 4 + (-0xE << 2)
    ctx->pc = 0x1EE97Cu;
    {
        const bool branch_taken_0x1ee97c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE97Cu;
            // 0x1ee980: 0x828823  subu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee97c) {
            ctx->pc = 0x1EE948u;
            runtime->cooperativeGuestYield();
            goto label_1ee948;
        }
    }
    ctx->pc = 0x1EE984u;
    // 0x1ee984: 0x0  nop
    ctx->pc = 0x1ee984u;
    // NOP
label_1ee988:
    // 0x1ee988: 0xae700754  sw          $s0, 0x754($s3)
    ctx->pc = 0x1ee988u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1876), GPR_U32(ctx, 16));
label_1ee98c:
    // 0x1ee98c: 0x8e620754  lw          $v0, 0x754($s3)
    ctx->pc = 0x1ee98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1876)));
    // 0x1ee990: 0x8e630750  lw          $v1, 0x750($s3)
    ctx->pc = 0x1ee990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1872)));
    // 0x1ee994: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ee994u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee998: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1ee998u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ee99c: 0x24720001  addiu       $s2, $v1, 0x1
    ctx->pc = 0x1ee99cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ee9a0: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x1ee9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x1ee9a4: 0x12102a  slt         $v0, $zero, $s2
    ctx->pc = 0x1ee9a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1ee9a8: 0x62900a  movz        $s2, $v1, $v0
    ctx->pc = 0x1ee9a8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
    // 0x1ee9ac: 0x1240001f  beqz        $s2, . + 4 + (0x1F << 2)
    ctx->pc = 0x1EE9ACu;
    {
        const bool branch_taken_0x1ee9ac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE9B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE9ACu;
            // 0x1ee9b0: 0xae600180  sw          $zero, 0x180($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 384), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee9ac) {
            ctx->pc = 0x1EEA2Cu;
            goto label_1eea2c;
        }
    }
    ctx->pc = 0x1EE9B4u;
    // 0x1ee9b4: 0x0  nop
    ctx->pc = 0x1ee9b4u;
    // NOP
label_1ee9b8:
    // 0x1ee9b8: 0x24020170  addiu       $v0, $zero, 0x170
    ctx->pc = 0x1ee9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 368));
    // 0x1ee9bc: 0x8e6507ac  lw          $a1, 0x7AC($s3)
    ctx->pc = 0x1ee9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1964)));
    // 0x1ee9c0: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x1ee9c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1ee9c4: 0x24420190  addiu       $v0, $v0, 0x190
    ctx->pc = 0x1ee9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x1ee9c8: 0x262a021  addu        $s4, $s3, $v0
    ctx->pc = 0x1ee9c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1ee9cc: 0xc07caec  jal         func_1F2BB0
    ctx->pc = 0x1EE9CCu;
    SET_GPR_U32(ctx, 31, 0x1EE9D4u);
    ctx->pc = 0x1EE9D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE9CCu;
            // 0x1ee9d0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F2BB0u;
    if (runtime->hasFunction(0x1F2BB0u)) {
        auto targetFn = runtime->lookupFunction(0x1F2BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE9D4u; }
        if (ctx->pc != 0x1EE9D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F2BB0_0x1f2bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE9D4u; }
        if (ctx->pc != 0x1EE9D4u) { return; }
    }
    ctx->pc = 0x1EE9D4u;
    // 0x1ee9d4: 0x8e640180  lw          $a0, 0x180($s3)
    ctx->pc = 0x1ee9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 384)));
    // 0x1ee9d8: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EE9D8u;
    {
        const bool branch_taken_0x1ee9d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE9DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE9D8u;
            // 0x1ee9dc: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee9d8) {
            ctx->pc = 0x1EEA00u;
            goto label_1eea00;
        }
    }
    ctx->pc = 0x1EE9E0u;
    // 0x1ee9e0: 0x26700010  addiu       $s0, $s3, 0x10
    ctx->pc = 0x1ee9e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x1ee9e4: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x1ee9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1ee9e8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ee9e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee9ec: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x1ee9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ee9f0: 0xc07cc36  jal         func_1F30D8
    ctx->pc = 0x1EE9F0u;
    SET_GPR_U32(ctx, 31, 0x1EE9F8u);
    ctx->pc = 0x1EE9F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE9F0u;
            // 0x1ee9f4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F30D8u;
    if (runtime->hasFunction(0x1F30D8u)) {
        auto targetFn = runtime->lookupFunction(0x1F30D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE9F8u; }
        if (ctx->pc != 0x1EE9F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F30D8_0x1f30d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE9F8u; }
        if (ctx->pc != 0x1EE9F8u) { return; }
    }
    ctx->pc = 0x1EE9F8u;
    // 0x1ee9f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EE9F8u;
    {
        const bool branch_taken_0x1ee9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE9FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE9F8u;
            // 0x1ee9fc: 0xae700180  sw          $s0, 0x180($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 384), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee9f8) {
            ctx->pc = 0x1EEA04u;
            goto label_1eea04;
        }
    }
    ctx->pc = 0x1EEA00u;
label_1eea00:
    // 0x1eea00: 0xae740180  sw          $s4, 0x180($s3)
    ctx->pc = 0x1eea00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 384), GPR_U32(ctx, 20));
label_1eea04:
    // 0x1eea04: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x1eea04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1eea08: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1eea08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1eea0c: 0x26230004  addiu       $v1, $s1, 0x4
    ctx->pc = 0x1eea0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1eea10: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x1eea10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1eea14: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x1eea14u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x1eea18: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1eea18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1eea1c: 0x38883  sra         $s1, $v1, 2
    ctx->pc = 0x1eea1cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1eea20: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1eea20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1eea24: 0x1640ffe4  bnez        $s2, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1EEA24u;
    {
        const bool branch_taken_0x1eea24 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EEA28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEA24u;
            // 0x1eea28: 0x828823  subu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eea24) {
            ctx->pc = 0x1EE9B8u;
            runtime->cooperativeGuestYield();
            goto label_1ee9b8;
        }
    }
    ctx->pc = 0x1EEA2Cu;
label_1eea2c:
    // 0x1eea2c: 0x8e630750  lw          $v1, 0x750($s3)
    ctx->pc = 0x1eea2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1872)));
    // 0x1eea30: 0x8e620754  lw          $v0, 0x754($s3)
    ctx->pc = 0x1eea30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1876)));
    // 0x1eea34: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EEA34u;
    {
        const bool branch_taken_0x1eea34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EEA38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEA34u;
            // 0x1eea38: 0x26650080  addiu       $a1, $s3, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eea34) {
            ctx->pc = 0x1EEA44u;
            goto label_1eea44;
        }
    }
    ctx->pc = 0x1EEA3Cu;
    // 0x1eea3c: 0xc07c154  jal         func_1F0550
    ctx->pc = 0x1EEA3Cu;
    SET_GPR_U32(ctx, 31, 0x1EEA44u);
    ctx->pc = 0x1EEA40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEA3Cu;
            // 0x1eea40: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F0550u;
    if (runtime->hasFunction(0x1F0550u)) {
        auto targetFn = runtime->lookupFunction(0x1F0550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEA44u; }
        if (ctx->pc != 0x1EEA44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F0550_0x1f0550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEA44u; }
        if (ctx->pc != 0x1EEA44u) { return; }
    }
    ctx->pc = 0x1EEA44u;
label_1eea44:
    // 0x1eea44: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1eea44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1eea48: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1eea48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1eea4c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1eea4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1eea50: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1eea50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1eea54: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1eea54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eea58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1eea58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eea5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EEA5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EEA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEA5Cu;
            // 0x1eea60: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EE890u: goto label_1ee890;
            case 0x1EE8C8u: goto label_1ee8c8;
            case 0x1EE8ECu: goto label_1ee8ec;
            case 0x1EE8F8u: goto label_1ee8f8;
            case 0x1EE920u: goto label_1ee920;
            case 0x1EE948u: goto label_1ee948;
            case 0x1EE988u: goto label_1ee988;
            case 0x1EE98Cu: goto label_1ee98c;
            case 0x1EE9B8u: goto label_1ee9b8;
            case 0x1EEA00u: goto label_1eea00;
            case 0x1EEA04u: goto label_1eea04;
            case 0x1EEA2Cu: goto label_1eea2c;
            case 0x1EEA44u: goto label_1eea44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EEA64u;
    // 0x1eea64: 0x0  nop
    ctx->pc = 0x1eea64u;
    // NOP
}
