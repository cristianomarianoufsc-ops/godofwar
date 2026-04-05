#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002283C0
// Address: 0x2283c0 - 0x2284b0
void sub_002283C0_0x2283c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002283C0_0x2283c0");
#endif

    ctx->pc = 0x2283c0u;

    // 0x2283c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2283c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2283c4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2283c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2283c8: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2283c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2283cc: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x2283ccu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x2283d0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2283d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2283d4: 0xc64011c4  lwc1        $f0, 0x11C4($s2)
    ctx->pc = 0x2283d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2283d8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2283d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2283dc: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2283dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2283e0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2283e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2283e4: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x2283E4u;
    {
        const bool branch_taken_0x2283e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2283E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2283E4u;
            // 0x2283e8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2283e4) {
            ctx->pc = 0x228430u;
            goto label_228430;
        }
    }
    ctx->pc = 0x2283ECu;
    // 0x2283ec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2283ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2283f0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x2283f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x2283f4: 0x8c4411c8  lw          $a0, 0x11C8($v0)
    ctx->pc = 0x2283f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4552)));
    // 0x2283f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2283f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2283fc: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x2283FCu;
    SET_GPR_U32(ctx, 31, 0x228404u);
    ctx->pc = 0x228400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2283FCu;
            // 0x228400: 0x3c11002a  lui         $s1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228404u; }
        if (ctx->pc != 0x228404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228404u; }
        if (ctx->pc != 0x228404u) { return; }
    }
    ctx->pc = 0x228404u;
    // 0x228404: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x228404u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228408: 0x8e2411b8  lw          $a0, 0x11B8($s1)
    ctx->pc = 0x228408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4536)));
    // 0x22840c: 0xc60000a0  lwc1        $f0, 0xA0($s0)
    ctx->pc = 0x22840cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228410: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x228410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228414: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x228414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x228418: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x228418u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22841c: 0xc05ec9c  jal         func_17B270
    ctx->pc = 0x22841Cu;
    SET_GPR_U32(ctx, 31, 0x228424u);
    ctx->pc = 0x228420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22841Cu;
            // 0x228420: 0xe64011c4  swc1        $f0, 0x11C4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4548), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B270u;
    if (runtime->hasFunction(0x17B270u)) {
        auto targetFn = runtime->lookupFunction(0x17B270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228424u; }
        if (ctx->pc != 0x228424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17b270_0x17b280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228424u; }
        if (ctx->pc != 0x228424u) { return; }
    }
    ctx->pc = 0x228424u;
    // 0x228424: 0x8e2411b8  lw          $a0, 0x11B8($s1)
    ctx->pc = 0x228424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4536)));
    // 0x228428: 0xc05ec92  jal         func_17B248
    ctx->pc = 0x228428u;
    SET_GPR_U32(ctx, 31, 0x228430u);
    ctx->pc = 0x22842Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228428u;
            // 0x22842c: 0x26050018  addiu       $a1, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B248u;
    if (runtime->hasFunction(0x17B248u)) {
        auto targetFn = runtime->lookupFunction(0x17B248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228430u; }
        if (ctx->pc != 0x228430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17b248_0x17b270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228430u; }
        if (ctx->pc != 0x228430u) { return; }
    }
    ctx->pc = 0x228430u;
label_228430:
    // 0x228430: 0xc64111c4  lwc1        $f1, 0x11C4($s2)
    ctx->pc = 0x228430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228434: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x228434u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228438: 0x0  nop
    ctx->pc = 0x228438u;
    // NOP
    // 0x22843c: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x22843Cu;
    {
        const bool branch_taken_0x22843c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x228440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22843Cu;
            // 0x228440: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22843c) {
            ctx->pc = 0x228478u;
            goto label_228478;
        }
    }
    ctx->pc = 0x228444u;
    // 0x228444: 0xc440c64c  lwc1        $f0, -0x39B4($v0)
    ctx->pc = 0x228444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228448: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x228448u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22844c: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x22844cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228450: 0x0  nop
    ctx->pc = 0x228450u;
    // NOP
    // 0x228454: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x228454u;
    {
        const bool branch_taken_0x228454 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x228458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228454u;
            // 0x228458: 0xe64011c4  swc1        $f0, 0x11C4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4548), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x228454) {
            ctx->pc = 0x228468u;
            goto label_228468;
        }
    }
    ctx->pc = 0x22845Cu;
    // 0x22845c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22845cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x228460: 0xc05eca0  jal         func_17B280
    ctx->pc = 0x228460u;
    SET_GPR_U32(ctx, 31, 0x228468u);
    ctx->pc = 0x228464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228460u;
            // 0x228464: 0x8c4411b8  lw          $a0, 0x11B8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4536)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B280u;
    if (runtime->hasFunction(0x17B280u)) {
        auto targetFn = runtime->lookupFunction(0x17B280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228468u; }
        if (ctx->pc != 0x228468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17b280_0x17b288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228468u; }
        if (ctx->pc != 0x228468u) { return; }
    }
    ctx->pc = 0x228468u;
label_228468:
    // 0x228468: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x228468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22846c: 0xc05ecda  jal         func_17B368
    ctx->pc = 0x22846Cu;
    SET_GPR_U32(ctx, 31, 0x228474u);
    ctx->pc = 0x228470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22846Cu;
            // 0x228470: 0x8c4411b8  lw          $a0, 0x11B8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4536)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B368u;
    if (runtime->hasFunction(0x17B368u)) {
        auto targetFn = runtime->lookupFunction(0x17B368u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228474u; }
        if (ctx->pc != 0x228474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B368_0x17b368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228474u; }
        if (ctx->pc != 0x228474u) { return; }
    }
    ctx->pc = 0x228474u;
    // 0x228474: 0xc64111c4  lwc1        $f1, 0x11C4($s2)
    ctx->pc = 0x228474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_228478:
    // 0x228478: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x228478u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22847c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x22847cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228480: 0x0  nop
    ctx->pc = 0x228480u;
    // NOP
    // 0x228484: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x228484u;
    {
        const bool branch_taken_0x228484 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x228488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228484u;
            // 0x228488: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228484) {
            ctx->pc = 0x228490u;
            goto label_228490;
        }
    }
    ctx->pc = 0x22848Cu;
    // 0x22848c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22848cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_228490:
    // 0x228490: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x228490u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x228494: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x228494u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228498: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x228498u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22849c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22849cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2284a0: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2284a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2284a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2284A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2284A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2284A4u;
            // 0x2284a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x228430u: goto label_228430;
            case 0x228468u: goto label_228468;
            case 0x228478u: goto label_228478;
            case 0x228490u: goto label_228490;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2284ACu;
    // 0x2284ac: 0x0  nop
    ctx->pc = 0x2284acu;
    // NOP
}
