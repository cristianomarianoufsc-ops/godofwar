#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DD6B8
// Address: 0x1dd6b8 - 0x1dd7b0
void sub_001DD6B8_0x1dd6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD6B8_0x1dd6b8");
#endif

    ctx->pc = 0x1dd6b8u;

    // 0x1dd6b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dd6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dd6bc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1dd6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1dd6c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1dd6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1dd6c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd6c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dd6c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd6cc: 0xc441c658  lwc1        $f1, -0x39A8($v0)
    ctx->pc = 0x1dd6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dd6d0: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x1dd6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd6d4: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1dd6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1dd6d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1dd6d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1dd6dc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DD6DCu;
    {
        const bool branch_taken_0x1dd6dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD6E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD6DCu;
            // 0x1dd6e0: 0xe6000024  swc1        $f0, 0x24($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd6dc) {
            ctx->pc = 0x1DD6ECu;
            goto label_1dd6ec;
        }
    }
    ctx->pc = 0x1DD6E4u;
    // 0x1dd6e4: 0xc0777fa  jal         func_1DDFE8
    ctx->pc = 0x1DD6E4u;
    SET_GPR_U32(ctx, 31, 0x1DD6ECu);
    ctx->pc = 0x1DD6E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD6E4u;
            // 0x1dd6e8: 0x8e05001c  lw          $a1, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DDFE8u;
    if (runtime->hasFunction(0x1DDFE8u)) {
        auto targetFn = runtime->lookupFunction(0x1DDFE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD6ECu; }
        if (ctx->pc != 0x1DD6ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DDFE8_0x1ddfe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD6ECu; }
        if (ctx->pc != 0x1DD6ECu) { return; }
    }
    ctx->pc = 0x1DD6ECu;
label_1dd6ec:
    // 0x1dd6ec: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1dd6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1dd6f0: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x1dd6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dd6f4: 0xc44c0020  lwc1        $f12, 0x20($v0)
    ctx->pc = 0x1dd6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dd6f8: 0x46016036  c.le.s      $f12, $f1
    ctx->pc = 0x1dd6f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dd6fc: 0x0  nop
    ctx->pc = 0x1dd6fcu;
    // NOP
    // 0x1dd700: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x1DD700u;
    {
        const bool branch_taken_0x1dd700 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dd700) {
            ctx->pc = 0x1DD704u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD700u;
            // 0x1dd704: 0x9202002d  lbu         $v0, 0x2D($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 45)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DD740u;
            goto label_1dd740;
        }
    }
    ctx->pc = 0x1DD708u;
    // 0x1dd708: 0xc4420024  lwc1        $f2, 0x24($v0)
    ctx->pc = 0x1dd708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dd70c: 0x46026000  add.s       $f0, $f12, $f2
    ctx->pc = 0x1dd70cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x1dd710: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1dd710u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dd714: 0x0  nop
    ctx->pc = 0x1dd714u;
    // NOP
    // 0x1dd718: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x1DD718u;
    {
        const bool branch_taken_0x1dd718 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dd718) {
            ctx->pc = 0x1DD71Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD718u;
            // 0x1dd71c: 0x9202002d  lbu         $v0, 0x2D($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 45)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DD740u;
            goto label_1dd740;
        }
    }
    ctx->pc = 0x1DD720u;
    // 0x1dd720: 0x460c0b01  sub.s       $f12, $f1, $f12
    ctx->pc = 0x1dd720u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    // 0x1dd724: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1dd724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1dd728: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1dd728u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd72c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1dd72cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1dd730: 0x46026303  div.s       $f12, $f12, $f2
    ctx->pc = 0x1dd730u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[2];
    // 0x1dd734: 0xc0776be  jal         func_1DDAF8
    ctx->pc = 0x1DD734u;
    SET_GPR_U32(ctx, 31, 0x1DD73Cu);
    ctx->pc = 0x1DD738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD734u;
            // 0x1dd738: 0x460c0301  sub.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DDAF8u;
    if (runtime->hasFunction(0x1DDAF8u)) {
        auto targetFn = runtime->lookupFunction(0x1DDAF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD73Cu; }
        if (ctx->pc != 0x1DD73Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1ddaf8_0x1ddc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD73Cu; }
        if (ctx->pc != 0x1DD73Cu) { return; }
    }
    ctx->pc = 0x1DD73Cu;
    // 0x1dd73c: 0x9202002d  lbu         $v0, 0x2D($s0)
    ctx->pc = 0x1dd73cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 45)));
label_1dd740:
    // 0x1dd740: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1DD740u;
    {
        const bool branch_taken_0x1dd740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD740u;
            // 0x1dd744: 0x8e030018  lw          $v1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd740) {
            ctx->pc = 0x1DD77Cu;
            goto label_1dd77c;
        }
    }
    ctx->pc = 0x1DD748u;
    // 0x1dd748: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x1dd748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dd74c: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x1dd74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd750: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1dd750u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dd754: 0x0  nop
    ctx->pc = 0x1dd754u;
    // NOP
    // 0x1dd758: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1DD758u;
    {
        const bool branch_taken_0x1dd758 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DD75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD758u;
            // 0x1dd75c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd758) {
            ctx->pc = 0x1DD77Cu;
            goto label_1dd77c;
        }
    }
    ctx->pc = 0x1DD760u;
    // 0x1dd760: 0x8465001a  lh          $a1, 0x1A($v1)
    ctx->pc = 0x1dd760u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x1dd764: 0x8c44cd58  lw          $a0, -0x32A8($v0)
    ctx->pc = 0x1dd764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x1dd768: 0xc0762d0  jal         func_1D8B40
    ctx->pc = 0x1DD768u;
    SET_GPR_U32(ctx, 31, 0x1DD770u);
    ctx->pc = 0x1DD76Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD768u;
            // 0x1dd76c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8B40u;
    if (runtime->hasFunction(0x1D8B40u)) {
        auto targetFn = runtime->lookupFunction(0x1D8B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD770u; }
        if (ctx->pc != 0x1DD770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8B40_0x1d8b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD770u; }
        if (ctx->pc != 0x1DD770u) { return; }
    }
    ctx->pc = 0x1DD770u;
    // 0x1dd770: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dd770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd774: 0xa202002d  sb          $v0, 0x2D($s0)
    ctx->pc = 0x1dd774u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 45), (uint8_t)GPR_U32(ctx, 2));
    // 0x1dd778: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1dd778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1dd77c:
    // 0x1dd77c: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x1dd77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dd780: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x1dd780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dd784: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x1dd784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd788: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1dd788u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1dd78c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1dd78cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dd790: 0x0  nop
    ctx->pc = 0x1dd790u;
    // NOP
    // 0x1dd794: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1DD794u;
    {
        const bool branch_taken_0x1dd794 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DD798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD794u;
            // 0x1dd798: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd794) {
            ctx->pc = 0x1DD7A0u;
            goto label_1dd7a0;
        }
    }
    ctx->pc = 0x1DD79Cu;
    // 0x1dd79c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1dd79cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd7a0:
    // 0x1dd7a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1dd7a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd7a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd7a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd7a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD7A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD7ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD7A8u;
            // 0x1dd7ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DD6ECu: goto label_1dd6ec;
            case 0x1DD740u: goto label_1dd740;
            case 0x1DD77Cu: goto label_1dd77c;
            case 0x1DD7A0u: goto label_1dd7a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DD7B0u;
}
