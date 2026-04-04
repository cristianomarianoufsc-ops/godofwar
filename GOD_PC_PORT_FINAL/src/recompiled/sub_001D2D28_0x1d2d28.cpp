#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D2D28
// Address: 0x1d2d28 - 0x1d2fb0
void sub_001D2D28_0x1d2d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2D28_0x1d2d28");
#endif

    ctx->pc = 0x1d2d28u;

    // 0x1d2d28: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1d2d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1d2d2c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1d2d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1d2d30: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1d2d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x1d2d34: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1d2d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x1d2d38: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d2d38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2d3c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1d2d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1d2d40: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x1d2d40u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1d2d44: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x1d2d44u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1d2d48: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x1d2d48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1d2d4c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1d2d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1d2d50: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x1d2d50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d2d54: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1d2d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d2d58: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1d2d58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1d2d5c: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1d2d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1d2d60: 0x40f809  jalr        $v0
    ctx->pc = 0x1D2D60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D2D68u);
        ctx->pc = 0x1D2D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2D60u;
            // 0x1d2d64: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D2D68u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D2D94u: goto label_1d2d94;
            case 0x1D2DACu: goto label_1d2dac;
            case 0x1D2DC4u: goto label_1d2dc4;
            case 0x1D2DDCu: goto label_1d2ddc;
            case 0x1D2F10u: goto label_1d2f10;
            case 0x1D2F4Cu: goto label_1d2f4c;
            case 0x1D2F74u: goto label_1d2f74;
            case 0x1D2F7Cu: goto label_1d2f7c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D2D68u; }
            if (ctx->pc != 0x1D2D68u) { return; }
        }
        }
    }
    ctx->pc = 0x1D2D68u;
    // 0x1d2d68: 0x8e110340  lw          $s1, 0x340($s0)
    ctx->pc = 0x1d2d68u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 832)));
    // 0x1d2d6c: 0x12200068  beqz        $s1, . + 4 + (0x68 << 2)
    ctx->pc = 0x1D2D6Cu;
    {
        const bool branch_taken_0x1d2d6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2D6Cu;
            // 0x1d2d70: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2d6c) {
            ctx->pc = 0x1D2F10u;
            goto label_1d2f10;
        }
    }
    ctx->pc = 0x1D2D74u;
    // 0x1d2d74: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1d2d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1d2d78: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x1d2d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x1d2d7c: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D2D7Cu;
    {
        const bool branch_taken_0x1d2d7c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1D2D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2D7Cu;
            // 0x1d2d80: 0x8c530040  lw          $s3, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2d7c) {
            ctx->pc = 0x1D2D94u;
            goto label_1d2d94;
        }
    }
    ctx->pc = 0x1D2D84u;
    // 0x1d2d84: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d2d84u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2d88: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d2d88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d2d8c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D2D8Cu;
    {
        const bool branch_taken_0x1d2d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2d8c) {
            ctx->pc = 0x1D2DACu;
            goto label_1d2dac;
        }
    }
    ctx->pc = 0x1D2D94u;
label_1d2d94:
    // 0x1d2d94: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x1d2d94u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x1d2d98: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1d2d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1d2d9c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d2d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d2da0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d2da0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2da4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d2da4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d2da8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1d2da8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1d2dac:
    // 0x1d2dac: 0x6600005  bltz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D2DACu;
    {
        const bool branch_taken_0x1d2dac = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x1D2DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2DACu;
            // 0x1d2db0: 0x3c10002d  lui         $s0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2dac) {
            ctx->pc = 0x1D2DC4u;
            goto label_1d2dc4;
        }
    }
    ctx->pc = 0x1D2DB4u;
    // 0x1d2db4: 0x4493a800  mtc1        $s3, $f21
    ctx->pc = 0x1d2db4u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1d2db8: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x1d2db8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x1d2dbc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D2DBCu;
    {
        const bool branch_taken_0x1d2dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2dbc) {
            ctx->pc = 0x1D2DDCu;
            goto label_1d2ddc;
        }
    }
    ctx->pc = 0x1D2DC4u;
label_1d2dc4:
    // 0x1d2dc4: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x1d2dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x1d2dc8: 0x131842  srl         $v1, $s3, 1
    ctx->pc = 0x1d2dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
    // 0x1d2dcc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d2dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d2dd0: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x1d2dd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1d2dd4: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x1d2dd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x1d2dd8: 0x4615ad40  add.s       $f21, $f21, $f21
    ctx->pc = 0x1d2dd8u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
label_1d2ddc:
    // 0x1d2ddc: 0x46150543  div.s       $f21, $f0, $f21
    ctx->pc = 0x1d2ddcu;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[21] = ctx->f[0] / ctx->f[21];
    // 0x1d2de0: 0x2610b950  addiu       $s0, $s0, -0x46B0
    ctx->pc = 0x1d2de0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949200));
    // 0x1d2de4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1d2de4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1d2de8: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1d2de8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1d2dec: 0xc04f970  jal         func_13E5C0
    ctx->pc = 0x1D2DECu;
    SET_GPR_U32(ctx, 31, 0x1D2DF4u);
    ctx->pc = 0x1D2DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2DECu;
            // 0x1d2df0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E5C0u;
    if (runtime->hasFunction(0x13E5C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2DF4u; }
        if (ctx->pc != 0x1D2DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e5c0_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2DF4u; }
        if (ctx->pc != 0x1D2DF4u) { return; }
    }
    ctx->pc = 0x1D2DF4u;
    // 0x1d2df4: 0x46160501  sub.s       $f20, $f0, $f22
    ctx->pc = 0x1d2df4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x1d2df8: 0xc04f970  jal         func_13E5C0
    ctx->pc = 0x1D2DF8u;
    SET_GPR_U32(ctx, 31, 0x1D2E00u);
    ctx->pc = 0x1D2DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2DF8u;
            // 0x1d2dfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E5C0u;
    if (runtime->hasFunction(0x13E5C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2E00u; }
        if (ctx->pc != 0x1D2E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e5c0_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2E00u; }
        if (ctx->pc != 0x1D2E00u) { return; }
    }
    ctx->pc = 0x1D2E00u;
    // 0x1d2e00: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x1d2e00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x1d2e04: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d2e04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2e08: 0x4406a000  mfc1        $a2, $f20
    ctx->pc = 0x1d2e08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1d2e0c: 0x70661389  pcpyld      $v0, $v1, $a2
    ctx->pc = 0x1d2e0cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x1d2e10: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1d2e10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1d2e14: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1d2e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1d2e18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d2e18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2e1c: 0x70671b89  pcpyld      $v1, $v1, $a3
    ctx->pc = 0x1d2e1cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 7)));
    // 0x1d2e20: 0x70621cc8  ppacw       $v1, $v1, $v0
    ctx->pc = 0x1d2e20u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1d2e24: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x1d2e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1d2e28: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x1d2e28u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1d2e2c: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x1d2e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x1d2e30: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1d2e30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1d2e34: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1d2e34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1d2e38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d2e38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2e3c: 0x7a250020  lq          $a1, 0x20($s1)
    ctx->pc = 0x1d2e3cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1d2e40: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x1d2e40u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1d2e44: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x1d2e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x1d2e48: 0x7fa50010  sq          $a1, 0x10($sp)
    ctx->pc = 0x1d2e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
    // 0x1d2e4c: 0x4406a800  mfc1        $a2, $f21
    ctx->pc = 0x1d2e4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1d2e50: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x1d2e50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1d2e54: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x1d2e54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d2e58: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1d2e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1d2e5c: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x1d2e5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1d2e60: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1d2e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x1d2e64: 0xd8810030  lqc2        $vf1, 0x30($a0)
    ctx->pc = 0x1d2e64u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1d2e68: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1d2e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d2e6c: 0x48a31800  qmtc2.ni    $v1, $vf3
    ctx->pc = 0x1d2e6cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1d2e70: 0x4be21898  vmulx.xyzw  $vf2, $vf3, $vf2x
    ctx->pc = 0x1d2e70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d2e74: 0xfba20050  sqc2        $vf2, 0x50($sp)
    ctx->pc = 0x1d2e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1d2e78: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1d2e78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d2e7c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1d2e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d2e80: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d2e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d2e84: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1d2e84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1d2e88: 0xc440c658  lwc1        $f0, -0x39A8($v0)
    ctx->pc = 0x1d2e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2e8c: 0x7e250020  sq          $a1, 0x20($s1)
    ctx->pc = 0x1d2e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 5));
    // 0x1d2e90: 0xdcc4bdf8  ld          $a0, -0x4208($a2)
    ctx->pc = 0x1d2e90u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 4294950392)));
    // 0x1d2e94: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x1d2e94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d2e98: 0x64840001  daddiu      $a0, $a0, 0x1
    ctx->pc = 0x1d2e98u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
    // 0x1d2e9c: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x1d2e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x1d2ea0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1d2ea0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d2ea4: 0x7e220030  sq          $v0, 0x30($s1)
    ctx->pc = 0x1d2ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 2));
    // 0x1d2ea8: 0x86220060  lh          $v0, 0x60($s1)
    ctx->pc = 0x1d2ea8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1d2eac: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x1d2eacu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x1d2eb0: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x1d2eb0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d2eb4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x1d2eb4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x1d2eb8: 0x7e230040  sq          $v1, 0x40($s1)
    ctx->pc = 0x1d2eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 3));
    // 0x1d2ebc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d2ebcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2ec0: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x1d2ec0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x1d2ec4: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x1d2ec4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d2ec8: 0x7e220050  sq          $v0, 0x50($s1)
    ctx->pc = 0x1d2ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), GPR_VEC(ctx, 2));
    // 0x1d2ecc: 0xfcc4bdf8  sd          $a0, -0x4208($a2)
    ctx->pc = 0x1d2eccu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 4294950392), GPR_U64(ctx, 4));
    // 0x1d2ed0: 0xc0a14de  jal         func_285378
    ctx->pc = 0x1D2ED0u;
    SET_GPR_U32(ctx, 31, 0x1D2ED8u);
    ctx->pc = 0x1D2ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2ED0u;
            // 0x1d2ed4: 0xfe230068  sd          $v1, 0x68($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 104), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285378u;
    if (runtime->hasFunction(0x285378u)) {
        auto targetFn = runtime->lookupFunction(0x285378u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2ED8u; }
        if (ctx->pc != 0x1D2ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_285378_0x285410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2ED8u; }
        if (ctx->pc != 0x1D2ED8u) { return; }
    }
    ctx->pc = 0x1D2ED8u;
    // 0x1d2ed8: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x1d2ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x1d2edc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1d2edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d2ee0: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x1d2ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d2ee4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d2ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d2ee8: 0xae430040  sw          $v1, 0x40($s2)
    ctx->pc = 0x1d2ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 3));
    // 0x1d2eec: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1d2eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1d2ef0: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1d2ef0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1d2ef4: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1d2ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1d2ef8: 0x40f809  jalr        $v0
    ctx->pc = 0x1D2EF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D2F00u);
        ctx->pc = 0x1D2EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2EF8u;
            // 0x1d2efc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D2F00u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D2D94u: goto label_1d2d94;
            case 0x1D2DACu: goto label_1d2dac;
            case 0x1D2DC4u: goto label_1d2dc4;
            case 0x1D2DDCu: goto label_1d2ddc;
            case 0x1D2F10u: goto label_1d2f10;
            case 0x1D2F4Cu: goto label_1d2f4c;
            case 0x1D2F74u: goto label_1d2f74;
            case 0x1D2F7Cu: goto label_1d2f7c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D2F00u; }
            if (ctx->pc != 0x1D2F00u) { return; }
        }
        }
    }
    ctx->pc = 0x1D2F00u;
    // 0x1d2f00: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x1d2f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x1d2f04: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1D2F04u;
    {
        const bool branch_taken_0x1d2f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2F04u;
            // 0x1d2f08: 0x262102b  sltu        $v0, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2f04) {
            ctx->pc = 0x1D2F7Cu;
            goto label_1d2f7c;
        }
    }
    ctx->pc = 0x1D2F0Cu;
    // 0x1d2f0c: 0x0  nop
    ctx->pc = 0x1d2f0cu;
    // NOP
label_1d2f10:
    // 0x1d2f10: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1d2f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d2f14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d2f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d2f18: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1d2f18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d2f1c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1d2f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d2f20: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1d2f20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1d2f24: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1d2f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1d2f28: 0x40f809  jalr        $v0
    ctx->pc = 0x1D2F28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D2F30u);
        ctx->pc = 0x1D2F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2F28u;
            // 0x1d2f2c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D2F30u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D2D94u: goto label_1d2d94;
            case 0x1D2DACu: goto label_1d2dac;
            case 0x1D2DC4u: goto label_1d2dc4;
            case 0x1D2DDCu: goto label_1d2ddc;
            case 0x1D2F10u: goto label_1d2f10;
            case 0x1D2F4Cu: goto label_1d2f4c;
            case 0x1D2F74u: goto label_1d2f74;
            case 0x1D2F7Cu: goto label_1d2f7c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D2F30u; }
            if (ctx->pc != 0x1D2F30u) { return; }
        }
        }
    }
    ctx->pc = 0x1D2F30u;
    // 0x1d2f30: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1d2f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d2f34: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d2f34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d2f38: 0xc4400178  lwc1        $f0, 0x178($v0)
    ctx->pc = 0x1d2f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2f3c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1d2f3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d2f40: 0x0  nop
    ctx->pc = 0x1d2f40u;
    // NOP
    // 0x1d2f44: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1D2F44u;
    {
        const bool branch_taken_0x1d2f44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d2f44) {
            ctx->pc = 0x1D2F48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2F44u;
            // 0x1d2f48: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D2F4Cu;
            goto label_1d2f4c;
        }
    }
    ctx->pc = 0x1D2F4Cu;
label_1d2f4c:
    // 0x1d2f4c: 0xc090aa6  jal         func_242A98
    ctx->pc = 0x1D2F4Cu;
    SET_GPR_U32(ctx, 31, 0x1D2F54u);
    ctx->pc = 0x1D2F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2F4Cu;
            // 0x1d2f50: 0x8e040320  lw          $a0, 0x320($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A98u;
    if (runtime->hasFunction(0x242A98u)) {
        auto targetFn = runtime->lookupFunction(0x242A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2F54u; }
        if (ctx->pc != 0x1D2F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a98_0x242d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2F54u; }
        if (ctx->pc != 0x1D2F54u) { return; }
    }
    ctx->pc = 0x1D2F54u;
    // 0x1d2f54: 0x8e630058  lw          $v1, 0x58($s3)
    ctx->pc = 0x1d2f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x1d2f58: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d2f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2f5c: 0x94420270  lhu         $v0, 0x270($v0)
    ctx->pc = 0x1d2f5cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 624)));
    // 0x1d2f60: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1d2f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1d2f64: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D2F64u;
    {
        const bool branch_taken_0x1d2f64 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2F64u;
            // 0x1d2f68: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2f64) {
            ctx->pc = 0x1D2F74u;
            goto label_1d2f74;
        }
    }
    ctx->pc = 0x1D2F6Cu;
    // 0x1d2f6c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D2F6Cu;
    {
        const bool branch_taken_0x1d2f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2F6Cu;
            // 0x1d2f70: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2f6c) {
            ctx->pc = 0x1D2F7Cu;
            goto label_1d2f7c;
        }
    }
    ctx->pc = 0x1D2F74u;
label_1d2f74:
    // 0x1d2f74: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d2f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d2f78: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1d2f78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d2f7c:
    // 0x1d2f7c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1d2f7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d2f80: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1d2f80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d2f84: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1d2f84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d2f88: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1d2f88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d2f8c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1d2f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d2f90: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x1d2f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1d2f94: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x1d2f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d2f98: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x1d2f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d2f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2F9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2F9Cu;
            // 0x1d2fa0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D2D94u: goto label_1d2d94;
            case 0x1D2DACu: goto label_1d2dac;
            case 0x1D2DC4u: goto label_1d2dc4;
            case 0x1D2DDCu: goto label_1d2ddc;
            case 0x1D2F10u: goto label_1d2f10;
            case 0x1D2F4Cu: goto label_1d2f4c;
            case 0x1D2F74u: goto label_1d2f74;
            case 0x1D2F7Cu: goto label_1d2f7c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D2FA4u;
    // 0x1d2fa4: 0x0  nop
    ctx->pc = 0x1d2fa4u;
    // NOP
    // 0x1d2fa8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1d2fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1d2fac: 0x0  nop
    ctx->pc = 0x1d2facu;
    // NOP
}
