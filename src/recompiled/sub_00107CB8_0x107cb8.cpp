#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00107CB8
// Address: 0x107cb8 - 0x107e60
void sub_00107CB8_0x107cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107CB8_0x107cb8");
#endif

    ctx->pc = 0x107cb8u;

    // 0x107cb8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x107cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x107cbc: 0x46006906  mov.s       $f4, $f13
    ctx->pc = 0x107cbcu;
    ctx->f[4] = FPU_MOV_S(ctx->f[13]);
    // 0x107cc0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x107cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x107cc4: 0x460070c6  mov.s       $f3, $f14
    ctx->pc = 0x107cc4u;
    ctx->f[3] = FPU_MOV_S(ctx->f[14]);
    // 0x107cc8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x107cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x107ccc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x107cccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107cd0: 0xe7b80070  swc1        $f24, 0x70($sp)
    ctx->pc = 0x107cd0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x107cd4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x107cd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107cd8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x107cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x107cdc: 0x46006606  mov.s       $f24, $f12
    ctx->pc = 0x107cdcu;
    ctx->f[24] = FPU_MOV_S(ctx->f[12]);
    // 0x107ce0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x107ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x107ce4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x107ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x107ce8: 0xe7b70068  swc1        $f23, 0x68($sp)
    ctx->pc = 0x107ce8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x107cec: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x107cecu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x107cf0: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x107cf0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x107cf4: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x107cf4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x107cf8: 0x8ca40014  lw          $a0, 0x14($a1)
    ctx->pc = 0x107cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x107cfc: 0x1640001f  bnez        $s2, . + 4 + (0x1F << 2)
    ctx->pc = 0x107CFCu;
    {
        const bool branch_taken_0x107cfc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x107D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107CFCu;
            // 0x107d00: 0x8cb00008  lw          $s0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107cfc) {
            ctx->pc = 0x107D7Cu;
            goto label_107d7c;
        }
    }
    ctx->pc = 0x107D04u;
    // 0x107d04: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x107d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x107d08: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x107d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x107d0c: 0xc441c658  lwc1        $f1, -0x39A8($v0)
    ctx->pc = 0x107d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x107d10: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x107d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x107d14: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x107d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x107d18: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x107d18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x107d1c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x107D1Cu;
    {
        const bool branch_taken_0x107d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107D1Cu;
            // 0x107d20: 0x46010382  mul.s       $f14, $f0, $f1 (Delay Slot)
        ctx->f[14] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x107d1c) {
            ctx->pc = 0x107D28u;
            goto label_107d28;
        }
    }
    ctx->pc = 0x107D24u;
    // 0x107d24: 0xc44d001c  lwc1        $f13, 0x1C($v0)
    ctx->pc = 0x107d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_107d28:
    // 0x107d28: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x107d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x107d2c: 0xc662004c  lwc1        $f2, 0x4C($s3)
    ctx->pc = 0x107d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x107d30: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x107d30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x107d34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x107d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x107d38: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x107d38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x107d3c: 0x460d0003  div.s       $f0, $f0, $f13
    ctx->pc = 0x107d3cu;
    if (ctx->f[13] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[13];
    // 0x107d40: 0x46002003  div.s       $f0, $f4, $f0
    ctx->pc = 0x107d40u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[0] = ctx->f[4] / ctx->f[0];
    // 0x107d44: 0x460e0002  mul.s       $f0, $f0, $f14
    ctx->pc = 0x107d44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
    // 0x107d48: 0x460d0003  div.s       $f0, $f0, $f13
    ctx->pc = 0x107d48u;
    if (ctx->f[13] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[13];
    // 0x107d4c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x107d4cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x107d50: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x107d50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x107d54: 0x0  nop
    ctx->pc = 0x107d54u;
    // NOP
    // 0x107d58: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x107D58u;
    {
        const bool branch_taken_0x107d58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x107D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107D58u;
            // 0x107d5c: 0xe662004c  swc1        $f2, 0x4C($s3) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x107d58) {
            ctx->pc = 0x107D78u;
            goto label_107d78;
        }
    }
    ctx->pc = 0x107D60u;
    // 0x107d60: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x107d60u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x107d64: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x107d64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x107d68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x107d68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x107d6c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x107d6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x107d70: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x107d70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x107d74: 0xe660004c  swc1        $f0, 0x4C($s3)
    ctx->pc = 0x107d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 76), bits); }
label_107d78:
    // 0x107d78: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x107d78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_107d7c:
    // 0x107d7c: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x107d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x107d80: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x107d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x107d84: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x107d84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x107d88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x107d88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x107d8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x107d8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x107d90: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x107d90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x107d94: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x107d94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x107d98: 0x46000d83  div.s       $f22, $f1, $f0
    ctx->pc = 0x107d98u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[22] = ctx->f[1] / ctx->f[0];
    // 0x107d9c: 0x18800022  blez        $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x107D9Cu;
    {
        const bool branch_taken_0x107d9c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x107DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107D9Cu;
            // 0x107da0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107d9c) {
            ctx->pc = 0x107E28u;
            goto label_107e28;
        }
    }
    ctx->pc = 0x107DA4u;
    // 0x107da4: 0x0  nop
    ctx->pc = 0x107da4u;
    // NOP
label_107da8:
    // 0x107da8: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x107da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x107dac: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x107dacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x107db0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x107DB0u;
    {
        const bool branch_taken_0x107db0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x107db0) {
            ctx->pc = 0x107DB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x107DB0u;
            // 0x107db4: 0xc441001c  lwc1        $f1, 0x1C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x107DB8u;
            goto label_107db8;
        }
    }
    ctx->pc = 0x107DB8u;
label_107db8:
    // 0x107db8: 0xc660004c  lwc1        $f0, 0x4C($s3)
    ctx->pc = 0x107db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x107dbc: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x107dbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x107dc0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x107DC0u;
    {
        const bool branch_taken_0x107dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107DC0u;
            // 0x107dc4: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x107dc0) {
            ctx->pc = 0x107DCCu;
            goto label_107dcc;
        }
    }
    ctx->pc = 0x107DC8u;
    // 0x107dc8: 0xc454001c  lwc1        $f20, 0x1C($v0)
    ctx->pc = 0x107dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_107dcc:
    // 0x107dcc: 0xc08f2a4  jal         func_23CA90
    ctx->pc = 0x107DCCu;
    SET_GPR_U32(ctx, 31, 0x107DD4u);
    ctx->pc = 0x107DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107DCCu;
            // 0x107dd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23CA90u;
    if (runtime->hasFunction(0x23CA90u)) {
        auto targetFn = runtime->lookupFunction(0x23CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107DD4u; }
        if (ctx->pc != 0x107DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23ca90_0x23cab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107DD4u; }
        if (ctx->pc != 0x107DD4u) { return; }
    }
    ctx->pc = 0x107DD4u;
    // 0x107dd4: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x107dd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x107dd8: 0x4618b836  c.le.s      $f23, $f24
    ctx->pc = 0x107dd8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x107ddc: 0x4600a829  min.s       $f0, $f21, $f0
    ctx->pc = 0x107ddcu;
    ctx->f[0] = std::min(ctx->f[21], ctx->f[0]);
    // 0x107de0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x107DE0u;
    {
        const bool branch_taken_0x107de0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x107DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107DE0u;
            // 0x107de4: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x107de0) {
            ctx->pc = 0x107DF0u;
            goto label_107df0;
        }
    }
    ctx->pc = 0x107DE8u;
    // 0x107de8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x107DE8u;
    {
        const bool branch_taken_0x107de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107DE8u;
            // 0x107dec: 0x4617c001  sub.s       $f0, $f24, $f23 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[24], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x107de8) {
            ctx->pc = 0x107DF4u;
            goto label_107df4;
        }
    }
    ctx->pc = 0x107DF0u;
label_107df0:
    // 0x107df0: 0x4618b801  sub.s       $f0, $f23, $f24
    ctx->pc = 0x107df0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[23], ctx->f[24]);
label_107df4:
    // 0x107df4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x107df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x107df8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x107df8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x107dfc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x107dfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x107e00: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x107e00u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[22];
    // 0x107e04: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x107e04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x107e08: 0x46020028  max.s       $f0, $f0, $f2
    ctx->pc = 0x107e08u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[2]);
    // 0x107e0c: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x107e0cu;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x107e10: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x107e10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x107e14: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x107e14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x107e18: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x107e18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x107e1c: 0x4616bdc0  add.s       $f23, $f23, $f22
    ctx->pc = 0x107e1cu;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[22]);
    // 0x107e20: 0x1620ffe1  bnez        $s1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x107E20u;
    {
        const bool branch_taken_0x107e20 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x107E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107E20u;
            // 0x107e24: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e20) {
            ctx->pc = 0x107DA8u;
            runtime->cooperativeGuestYield();
            goto label_107da8;
        }
    }
    ctx->pc = 0x107E28u;
label_107e28:
    // 0x107e28: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x107e28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107e2c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x107e2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x107e30: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x107e30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x107e34: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x107e34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x107e38: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x107e38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x107e3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107e40: 0xc7b80070  lwc1        $f24, 0x70($sp)
    ctx->pc = 0x107e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x107e44: 0xc7b70068  lwc1        $f23, 0x68($sp)
    ctx->pc = 0x107e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x107e48: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x107e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x107e4c: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x107e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x107e50: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x107e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x107e54: 0x3e00008  jr          $ra
    ctx->pc = 0x107E54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107E54u;
            // 0x107e58: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x107D28u: goto label_107d28;
            case 0x107D78u: goto label_107d78;
            case 0x107D7Cu: goto label_107d7c;
            case 0x107DA8u: goto label_107da8;
            case 0x107DB8u: goto label_107db8;
            case 0x107DCCu: goto label_107dcc;
            case 0x107DF0u: goto label_107df0;
            case 0x107DF4u: goto label_107df4;
            case 0x107E28u: goto label_107e28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x107E5Cu;
    // 0x107e5c: 0x0  nop
    ctx->pc = 0x107e5cu;
    // NOP
}
