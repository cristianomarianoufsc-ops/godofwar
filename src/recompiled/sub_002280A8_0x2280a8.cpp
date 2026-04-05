#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002280A8
// Address: 0x2280a8 - 0x2282d0
void sub_002280A8_0x2280a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002280A8_0x2280a8");
#endif

    ctx->pc = 0x2280a8u;

    // 0x2280a8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2280a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2280ac: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2280acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2280b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2280b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2280b4: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x2280b4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x2280b8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2280b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2280bc: 0xc64011bc  lwc1        $f0, 0x11BC($s2)
    ctx->pc = 0x2280bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2280c0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2280c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2280c4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2280c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2280c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2280c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2280cc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2280ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2280d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2280d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2280d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2280d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2280d8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2280D8u;
    {
        const bool branch_taken_0x2280d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2280DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2280D8u;
            // 0x2280dc: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2280d8) {
            ctx->pc = 0x2280E4u;
            goto label_2280e4;
        }
    }
    ctx->pc = 0x2280E0u;
    // 0x2280e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2280e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2280e4:
    // 0x2280e4: 0x3c13002a  lui         $s3, 0x2A
    ctx->pc = 0x2280e4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)42 << 16));
    // 0x2280e8: 0x8e62be50  lw          $v0, -0x41B0($s3)
    ctx->pc = 0x2280e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950480)));
    // 0x2280ec: 0x2446024c  addiu       $a2, $v0, 0x24C
    ctx->pc = 0x2280ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 588));
    // 0x2280f0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2280f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2280f4: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2280F4u;
    {
        const bool branch_taken_0x2280f4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2280F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2280F4u;
            // 0x2280f8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2280f4) {
            ctx->pc = 0x22810Cu;
            goto label_22810c;
        }
    }
    ctx->pc = 0x2280FCu;
    // 0x2280fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2280fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x228100: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x228100u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x228104: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x228104u;
    {
        const bool branch_taken_0x228104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228104u;
            // 0x228108: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228104) {
            ctx->pc = 0x228124u;
            goto label_228124;
        }
    }
    ctx->pc = 0x22810Cu;
label_22810c:
    // 0x22810c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22810cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x228110: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x228110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x228114: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x228114u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x228118: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x228118u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x22811c: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x22811cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x228120: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x228120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_228124:
    // 0x228124: 0xc44011b0  lwc1        $f0, 0x11B0($v0)
    ctx->pc = 0x228124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228128: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x228128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x22812c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x22812cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x228130: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x228130u;
    {
        const bool branch_taken_0x228130 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x228134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228130u;
            // 0x228134: 0x46006502  mul.s       $f20, $f12, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x228130) {
            ctx->pc = 0x228150u;
            goto label_228150;
        }
    }
    ctx->pc = 0x228138u;
    // 0x228138: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x228138u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x22813c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22813cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x228140: 0xc08a0b4  jal         func_2282D0
    ctx->pc = 0x228140u;
    SET_GPR_U32(ctx, 31, 0x228148u);
    ctx->pc = 0x228144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228140u;
            // 0x228144: 0x8cc40008  lw          $a0, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2282D0u;
    if (runtime->hasFunction(0x2282D0u)) {
        auto targetFn = runtime->lookupFunction(0x2282D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228148u; }
        if (ctx->pc != 0x228148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002282D0_0x2282d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228148u; }
        if (ctx->pc != 0x228148u) { return; }
    }
    ctx->pc = 0x228148u;
    // 0x228148: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x228148u;
    {
        const bool branch_taken_0x228148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22814Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228148u;
            // 0x22814c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228148) {
            ctx->pc = 0x228164u;
            goto label_228164;
        }
    }
    ctx->pc = 0x228150u;
label_228150:
    // 0x228150: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x228150u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x228154: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x228154u;
    {
        const bool branch_taken_0x228154 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x228154) {
            ctx->pc = 0x2281A0u;
            goto label_2281a0;
        }
    }
    ctx->pc = 0x22815Cu;
    // 0x22815c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22815Cu;
    {
        const bool branch_taken_0x22815c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x228160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22815Cu;
            // 0x228160: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22815c) {
            ctx->pc = 0x22817Cu;
            goto label_22817c;
        }
    }
    ctx->pc = 0x228164u;
label_228164:
    // 0x228164: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x228164u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x228168: 0x8c4411b8  lw          $a0, 0x11B8($v0)
    ctx->pc = 0x228168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4536)));
    // 0x22816c: 0xc05ec9c  jal         func_17B270
    ctx->pc = 0x22816Cu;
    SET_GPR_U32(ctx, 31, 0x228174u);
    ctx->pc = 0x228170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22816Cu;
            // 0x228170: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B270u;
    if (runtime->hasFunction(0x17B270u)) {
        auto targetFn = runtime->lookupFunction(0x17B270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228174u; }
        if (ctx->pc != 0x228174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17b270_0x17b280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228174u; }
        if (ctx->pc != 0x228174u) { return; }
    }
    ctx->pc = 0x228174u;
    // 0x228174: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x228174u;
    {
        const bool branch_taken_0x228174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x228174) {
            ctx->pc = 0x2281A0u;
            goto label_2281a0;
        }
    }
    ctx->pc = 0x22817Cu;
label_22817c:
    // 0x22817c: 0x3c04534d  lui         $a0, 0x534D
    ctx->pc = 0x22817cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21325 << 16));
    // 0x228180: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x228180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x228184: 0x34845044  ori         $a0, $a0, 0x5044
    ctx->pc = 0x228184u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20548);
    // 0x228188: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x228188u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22818c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22818cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228190: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x228190u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228194: 0xc09b260  jal         func_26C980
    ctx->pc = 0x228194u;
    SET_GPR_U32(ctx, 31, 0x22819Cu);
    ctx->pc = 0x228198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228194u;
            // 0x228198: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C980u;
    if (runtime->hasFunction(0x26C980u)) {
        auto targetFn = runtime->lookupFunction(0x26C980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22819Cu; }
        if (ctx->pc != 0x22819Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C980_0x26c980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22819Cu; }
        if (ctx->pc != 0x22819Cu) { return; }
    }
    ctx->pc = 0x22819Cu;
    // 0x22819c: 0x0  nop
    ctx->pc = 0x22819cu;
    // NOP
label_2281a0:
    // 0x2281a0: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x2281A0u;
    {
        const bool branch_taken_0x2281a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2281A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2281A0u;
            // 0x2281a4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2281a0) {
            ctx->pc = 0x2281D8u;
            goto label_2281d8;
        }
    }
    ctx->pc = 0x2281A8u;
    // 0x2281a8: 0xc64011bc  lwc1        $f0, 0x11BC($s2)
    ctx->pc = 0x2281a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2281ac: 0xc441c64c  lwc1        $f1, -0x39B4($v0)
    ctx->pc = 0x2281acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2281b0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2281b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2281b4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2281b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2281b8: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x2281b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2281bc: 0x0  nop
    ctx->pc = 0x2281bcu;
    // NOP
    // 0x2281c0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2281C0u;
    {
        const bool branch_taken_0x2281c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2281C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2281C0u;
            // 0x2281c4: 0xe64011bc  swc1        $f0, 0x11BC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2281c0) {
            ctx->pc = 0x2281D8u;
            goto label_2281d8;
        }
    }
    ctx->pc = 0x2281C8u;
    // 0x2281c8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x2281c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x2281cc: 0xc05eca0  jal         func_17B280
    ctx->pc = 0x2281CCu;
    SET_GPR_U32(ctx, 31, 0x2281D4u);
    ctx->pc = 0x2281D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2281CCu;
            // 0x2281d0: 0x8c4411b8  lw          $a0, 0x11B8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4536)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B280u;
    if (runtime->hasFunction(0x17B280u)) {
        auto targetFn = runtime->lookupFunction(0x17B280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2281D4u; }
        if (ctx->pc != 0x2281D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17b280_0x17b288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2281D4u; }
        if (ctx->pc != 0x2281D4u) { return; }
    }
    ctx->pc = 0x2281D4u;
    // 0x2281d4: 0x0  nop
    ctx->pc = 0x2281d4u;
    // NOP
label_2281d8:
    // 0x2281d8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x2281d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x2281dc: 0xc05ecda  jal         func_17B368
    ctx->pc = 0x2281DCu;
    SET_GPR_U32(ctx, 31, 0x2281E4u);
    ctx->pc = 0x2281E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2281DCu;
            // 0x2281e0: 0x8c4411b8  lw          $a0, 0x11B8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4536)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B368u;
    if (runtime->hasFunction(0x17B368u)) {
        auto targetFn = runtime->lookupFunction(0x17B368u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2281E4u; }
        if (ctx->pc != 0x2281E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B368_0x17b368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2281E4u; }
        if (ctx->pc != 0x2281E4u) { return; }
    }
    ctx->pc = 0x2281E4u;
    // 0x2281e4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x2281e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x2281e8: 0x8c50e2a4  lw          $s0, -0x1D5C($v0)
    ctx->pc = 0x2281e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959780)));
    // 0x2281ec: 0x52000030  beql        $s0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x2281ECu;
    {
        const bool branch_taken_0x2281ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2281ec) {
            ctx->pc = 0x2281F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2281ECu;
            // 0x2281f0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2282B0u;
            goto label_2282b0;
        }
    }
    ctx->pc = 0x2281F4u;
    // 0x2281f4: 0xc07bf98  jal         func_1EFE60
    ctx->pc = 0x2281F4u;
    SET_GPR_U32(ctx, 31, 0x2281FCu);
    ctx->pc = 0x2281F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2281F4u;
            // 0x2281f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EFE60u;
    if (runtime->hasFunction(0x1EFE60u)) {
        auto targetFn = runtime->lookupFunction(0x1EFE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2281FCu; }
        if (ctx->pc != 0x2281FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1efe60_0x1efe70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2281FCu; }
        if (ctx->pc != 0x2281FCu) { return; }
    }
    ctx->pc = 0x2281FCu;
    // 0x2281fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2281fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228200: 0x8e62be50  lw          $v0, -0x41B0($s3)
    ctx->pc = 0x228200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950480)));
    // 0x228204: 0x2446025c  addiu       $a2, $v0, 0x25C
    ctx->pc = 0x228204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 604));
    // 0x228208: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x228208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x22820c: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22820Cu;
    {
        const bool branch_taken_0x22820c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x228210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22820Cu;
            // 0x228210: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22820c) {
            ctx->pc = 0x228224u;
            goto label_228224;
        }
    }
    ctx->pc = 0x228214u;
    // 0x228214: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x228214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x228218: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x228218u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x22821c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x22821Cu;
    {
        const bool branch_taken_0x22821c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22821Cu;
            // 0x228220: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22821c) {
            ctx->pc = 0x22823Cu;
            goto label_22823c;
        }
    }
    ctx->pc = 0x228224u;
label_228224:
    // 0x228224: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x228224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x228228: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x228228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22822c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22822cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x228230: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x228230u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x228234: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x228234u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x228238: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x228238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_22823c:
    // 0x22823c: 0xc44011b4  lwc1        $f0, 0x11B4($v0)
    ctx->pc = 0x22823cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228240: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x228240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x228244: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x228244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x228248: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x228248u;
    {
        const bool branch_taken_0x228248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22824Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228248u;
            // 0x22824c: 0x46006502  mul.s       $f20, $f12, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x228248) {
            ctx->pc = 0x228268u;
            goto label_228268;
        }
    }
    ctx->pc = 0x228250u;
    // 0x228250: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x228250u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x228254: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x228254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228258: 0xc07bf84  jal         func_1EFE10
    ctx->pc = 0x228258u;
    SET_GPR_U32(ctx, 31, 0x228260u);
    ctx->pc = 0x22825Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228258u;
            // 0x22825c: 0x8cc50008  lw          $a1, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EFE10u;
    if (runtime->hasFunction(0x1EFE10u)) {
        auto targetFn = runtime->lookupFunction(0x1EFE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228260u; }
        if (ctx->pc != 0x228260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EFE10_0x1efe10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228260u; }
        if (ctx->pc != 0x228260u) { return; }
    }
    ctx->pc = 0x228260u;
    // 0x228260: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x228260u;
    {
        const bool branch_taken_0x228260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228260u;
            // 0x228264: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228260) {
            ctx->pc = 0x22827Cu;
            goto label_22827c;
        }
    }
    ctx->pc = 0x228268u;
label_228268:
    // 0x228268: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x228268u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x22826c: 0x50c00010  beql        $a2, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x22826Cu;
    {
        const bool branch_taken_0x22826c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x22826c) {
            ctx->pc = 0x228270u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22826Cu;
            // 0x228270: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2282B0u;
            goto label_2282b0;
        }
    }
    ctx->pc = 0x228274u;
    // 0x228274: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x228274u;
    {
        const bool branch_taken_0x228274 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x228278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228274u;
            // 0x228278: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228274) {
            ctx->pc = 0x22828Cu;
            goto label_22828c;
        }
    }
    ctx->pc = 0x22827Cu;
label_22827c:
    // 0x22827c: 0xc07bf9c  jal         func_1EFE70
    ctx->pc = 0x22827Cu;
    SET_GPR_U32(ctx, 31, 0x228284u);
    ctx->pc = 0x228280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22827Cu;
            // 0x228280: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EFE70u;
    if (runtime->hasFunction(0x1EFE70u)) {
        auto targetFn = runtime->lookupFunction(0x1EFE70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228284u; }
        if (ctx->pc != 0x228284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1efe70_0x1efe78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228284u; }
        if (ctx->pc != 0x228284u) { return; }
    }
    ctx->pc = 0x228284u;
    // 0x228284: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x228284u;
    {
        const bool branch_taken_0x228284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228284u;
            // 0x228288: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228284) {
            ctx->pc = 0x2282B0u;
            goto label_2282b0;
        }
    }
    ctx->pc = 0x22828Cu;
label_22828c:
    // 0x22828c: 0x3c04534d  lui         $a0, 0x534D
    ctx->pc = 0x22828cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21325 << 16));
    // 0x228290: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x228290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x228294: 0x34845044  ori         $a0, $a0, 0x5044
    ctx->pc = 0x228294u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20548);
    // 0x228298: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x228298u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22829c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22829cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2282a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2282a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2282a4: 0xc09b260  jal         func_26C980
    ctx->pc = 0x2282A4u;
    SET_GPR_U32(ctx, 31, 0x2282ACu);
    ctx->pc = 0x2282A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2282A4u;
            // 0x2282a8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C980u;
    if (runtime->hasFunction(0x26C980u)) {
        auto targetFn = runtime->lookupFunction(0x26C980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2282ACu; }
        if (ctx->pc != 0x2282ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C980_0x26c980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2282ACu; }
        if (ctx->pc != 0x2282ACu) { return; }
    }
    ctx->pc = 0x2282ACu;
    // 0x2282ac: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2282acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2282b0:
    // 0x2282b0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2282b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2282b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2282b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2282b8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2282b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2282bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2282bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2282c0: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2282c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2282c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2282C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2282C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2282C4u;
            // 0x2282c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2280E4u: goto label_2280e4;
            case 0x22810Cu: goto label_22810c;
            case 0x228124u: goto label_228124;
            case 0x228150u: goto label_228150;
            case 0x228164u: goto label_228164;
            case 0x22817Cu: goto label_22817c;
            case 0x2281A0u: goto label_2281a0;
            case 0x2281D8u: goto label_2281d8;
            case 0x228224u: goto label_228224;
            case 0x22823Cu: goto label_22823c;
            case 0x228268u: goto label_228268;
            case 0x22827Cu: goto label_22827c;
            case 0x22828Cu: goto label_22828c;
            case 0x2282B0u: goto label_2282b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2282CCu;
    // 0x2282cc: 0x0  nop
    ctx->pc = 0x2282ccu;
    // NOP
}
