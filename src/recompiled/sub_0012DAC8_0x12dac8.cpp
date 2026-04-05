#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012DAC8
// Address: 0x12dac8 - 0x12dd10
void sub_0012DAC8_0x12dac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012DAC8_0x12dac8");
#endif

    ctx->pc = 0x12dac8u;

    // 0x12dac8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x12dac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x12dacc: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x12daccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x12dad0: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x12dad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x12dad4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x12dad4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dad8: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x12dad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x12dadc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12dadcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dae0: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x12dae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x12dae4: 0x24a40054  addiu       $a0, $a1, 0x54
    ctx->pc = 0x12dae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 84));
    // 0x12dae8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x12dae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x12daec: 0xc4a0006c  lwc1        $f0, 0x6C($a1)
    ctx->pc = 0x12daecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12daf0: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x12daf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x12daf4: 0x80a20054  lb          $v0, 0x54($a1)
    ctx->pc = 0x12daf4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x12daf8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12DAF8u;
    {
        const bool branch_taken_0x12daf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DAFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DAF8u;
            // 0x12dafc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12daf8) {
            ctx->pc = 0x12DB0Cu;
            goto label_12db0c;
        }
    }
    ctx->pc = 0x12DB00u;
    // 0x12db00: 0xc04f8c6  jal         func_13E318
    ctx->pc = 0x12DB00u;
    SET_GPR_U32(ctx, 31, 0x12DB08u);
    ctx->pc = 0x13E318u;
    if (runtime->hasFunction(0x13E318u)) {
        auto targetFn = runtime->lookupFunction(0x13E318u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DB08u; }
        if (ctx->pc != 0x12DB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E318_0x13e318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DB08u; }
        if (ctx->pc != 0x12DB08u) { return; }
    }
    ctx->pc = 0x12DB08u;
    // 0x12db08: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12db08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12db0c:
    // 0x12db0c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x12db0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x12db10: 0x118100  sll         $s0, $s1, 4
    ctx->pc = 0x12db10u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x12db14: 0xc440bdf0  lwc1        $f0, -0x4210($v0)
    ctx->pc = 0x12db14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294950384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12db18: 0xae510018  sw          $s1, 0x18($s2)
    ctx->pc = 0x12db18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 17));
    // 0x12db1c: 0xc04f824  jal         func_13E090
    ctx->pc = 0x12DB1Cu;
    SET_GPR_U32(ctx, 31, 0x12DB24u);
    ctx->pc = 0x12DB20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12DB1Cu;
            // 0x12db20: 0xe6400014  swc1        $f0, 0x14($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DB24u; }
        if (ctx->pc != 0x12DB24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DB24u; }
        if (ctx->pc != 0x12DB24u) { return; }
    }
    ctx->pc = 0x12DB24u;
    // 0x12db24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12db24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12db28: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12db28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12db2c: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x12DB2Cu;
    SET_GPR_U32(ctx, 31, 0x12DB34u);
    ctx->pc = 0x12DB30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12DB2Cu;
            // 0x12db30: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DB34u; }
        if (ctx->pc != 0x12DB34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DB34u; }
        if (ctx->pc != 0x12DB34u) { return; }
    }
    ctx->pc = 0x12DB34u;
    // 0x12db34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12db34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12db38: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x12DB38u;
    {
        const bool branch_taken_0x12db38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DB3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DB38u;
            // 0x12db3c: 0x2623ffff  addiu       $v1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12db38) {
            ctx->pc = 0x12DB64u;
            goto label_12db64;
        }
    }
    ctx->pc = 0x12DB40u;
    // 0x12db40: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12db40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12db44: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12db44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12db48:
    // 0x12db48: 0x0  nop
    ctx->pc = 0x12db48u;
    // NOP
    // 0x12db4c: 0x0  nop
    ctx->pc = 0x12db4cu;
    // NOP
    // 0x12db50: 0x0  nop
    ctx->pc = 0x12db50u;
    // NOP
    // 0x12db54: 0x0  nop
    ctx->pc = 0x12db54u;
    // NOP
    // 0x12db58: 0x0  nop
    ctx->pc = 0x12db58u;
    // NOP
    // 0x12db5c: 0x5462fffa  bnel        $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12DB5Cu;
    {
        const bool branch_taken_0x12db5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x12db5c) {
            ctx->pc = 0x12DB60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12DB5Cu;
            // 0x12db60: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12DB48u;
            runtime->cooperativeGuestYield();
            goto label_12db48;
        }
    }
    ctx->pc = 0x12DB64u;
label_12db64:
    // 0x12db64: 0x26420030  addiu       $v0, $s2, 0x30
    ctx->pc = 0x12db64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x12db68: 0xae440020  sw          $a0, 0x20($s2)
    ctx->pc = 0x12db68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 4));
    // 0x12db6c: 0x4be3033c  vmove.xyzw  $vf3, $vf0
    ctx->pc = 0x12db6cu;
    ctx->vu0_vf[3] = ctx->vu0_vf[0];
    // 0x12db70: 0x4be41b3d  vmr32.xyzw  $vf4, $vf3
    ctx->pc = 0x12db70u;
    ctx->vu0_vf[4] = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,1));
    // 0x12db74: 0xfba30000  sqc2        $vf3, 0x0($sp)
    ctx->pc = 0x12db74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x12db78: 0x4be1233d  vmr32.xyzw  $vf1, $vf4
    ctx->pc = 0x12db78u;
    ctx->vu0_vf[1] = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,1));
    // 0x12db7c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x12db7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12db80: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x12db80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12db84: 0x4be20b3d  vmr32.xyzw  $vf2, $vf1
    ctx->pc = 0x12db84u;
    ctx->vu0_vf[2] = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,1));
    // 0x12db88: 0xfa420030  sqc2        $vf2, 0x30($s2)
    ctx->pc = 0x12db88u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x12db8c: 0xfba20030  sqc2        $vf2, 0x30($sp)
    ctx->pc = 0x12db8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x12db90: 0xf8430030  sqc2        $vf3, 0x30($v0)
    ctx->pc = 0x12db90u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x12db94: 0xf8410010  sqc2        $vf1, 0x10($v0)
    ctx->pc = 0x12db94u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12db98: 0xf8440020  sqc2        $vf4, 0x20($v0)
    ctx->pc = 0x12db98u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12db9c: 0x12600054  beqz        $s3, . + 4 + (0x54 << 2)
    ctx->pc = 0x12DB9Cu;
    {
        const bool branch_taken_0x12db9c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DBA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DB9Cu;
            // 0x12dba0: 0xae40001c  sw          $zero, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12db9c) {
            ctx->pc = 0x12DCF0u;
            goto label_12dcf0;
        }
    }
    ctx->pc = 0x12DBA4u;
    // 0x12dba4: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x12dba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x12dba8: 0x18600051  blez        $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x12DBA8u;
    {
        const bool branch_taken_0x12dba8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x12DBACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DBA8u;
            // 0x12dbac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dba8) {
            ctx->pc = 0x12DCF0u;
            goto label_12dcf0;
        }
    }
    ctx->pc = 0x12DBB0u;
    // 0x12dbb0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x12dbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12dbb4: 0x0  nop
    ctx->pc = 0x12dbb4u;
    // NOP
label_12dbb8:
    // 0x12dbb8: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x12dbb8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12dbbc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x12dbbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x12dbc0: 0x8e68000c  lw          $t0, 0xC($s3)
    ctx->pc = 0x12dbc0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x12dbc4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12dbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12dbc8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x12dbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x12dbcc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x12dbccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12dbd0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x12dbd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x12dbd4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x12dbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x12dbd8: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x12dbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x12dbdc: 0xc440fffc  lwc1        $f0, -0x4($v0)
    ctx->pc = 0x12dbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12dbe0: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x12dbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x12dbe4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x12dbe4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x12dbe8: 0x434821  addu        $t1, $v0, $v1
    ctx->pc = 0x12dbe8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12dbec: 0x46010083  div.s       $f2, $f0, $f1
    ctx->pc = 0x12dbecu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[1];
    // 0x12dbf0: 0x46021042  mul.s       $f1, $f2, $f2
    ctx->pc = 0x12dbf0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x12dbf4: 0x46020802  mul.s       $f0, $f1, $f2
    ctx->pc = 0x12dbf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x12dbf8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x12dbf8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12dbfc: 0x3c0b3f80  lui         $t3, 0x3F80
    ctx->pc = 0x12dbfcu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)16256 << 16));
    // 0x12dc00: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x12dc00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x12dc04: 0x704a1b89  pcpyld      $v1, $v0, $t2
    ctx->pc = 0x12dc04u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x12dc08: 0x440a1000  mfc1        $t2, $f2
    ctx->pc = 0x12dc08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x12dc0c: 0x716a1389  pcpyld      $v0, $t3, $t2
    ctx->pc = 0x12dc0cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x12dc10: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x12dc10u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x12dc14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12dc14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dc18: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x12dc18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x12dc1c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x12dc1cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x12dc20: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x12dc20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x12dc24: 0x18600012  blez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x12DC24u;
    {
        const bool branch_taken_0x12dc24 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x12DC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DC24u;
            // 0x12dc28: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dc24) {
            ctx->pc = 0x12DC70u;
            goto label_12dc70;
        }
    }
    ctx->pc = 0x12DC2Cu;
    // 0x12dc2c: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x12dc2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dc30: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x12dc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12dc34: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x12dc34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12dc38: 0x0  nop
    ctx->pc = 0x12dc38u;
    // NOP
    // 0x12dc3c: 0x4503000d  bc1tl       . + 4 + (0xD << 2)
    ctx->pc = 0x12DC3Cu;
    {
        const bool branch_taken_0x12dc3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12dc3c) {
            ctx->pc = 0x12DC40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12DC3Cu;
            // 0x12dc40: 0x8e630008  lw          $v1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12DC74u;
            goto label_12dc74;
        }
    }
    ctx->pc = 0x12DC44u;
    // 0x12dc44: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x12dc44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_12dc48:
    // 0x12dc48: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x12dc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x12dc4c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x12dc4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x12dc50: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12DC50u;
    {
        const bool branch_taken_0x12dc50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DC54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DC50u;
            // 0x12dc54: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dc50) {
            ctx->pc = 0x12DC70u;
            goto label_12dc70;
        }
    }
    ctx->pc = 0x12DC58u;
    // 0x12dc58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12dc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12dc5c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x12dc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12dc60: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x12dc60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12dc64: 0x0  nop
    ctx->pc = 0x12dc64u;
    // NOP
    // 0x12dc68: 0x4502fff7  bc1fl       . + 4 + (-0x9 << 2)
    ctx->pc = 0x12DC68u;
    {
        const bool branch_taken_0x12dc68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12dc68) {
            ctx->pc = 0x12DC6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12DC68u;
            // 0x12dc6c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12DC48u;
            runtime->cooperativeGuestYield();
            goto label_12dc48;
        }
    }
    ctx->pc = 0x12DC70u;
label_12dc70:
    // 0x12dc70: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x12dc70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_12dc74:
    // 0x12dc74: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x12dc74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x12dc78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12dc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12dc7c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x12dc7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12dc80: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x12dc80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x12dc84: 0xd8410010  lqc2        $vf1, 0x10($v0)
    ctx->pc = 0x12dc84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x12dc88: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x12dc88u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x12dc8c: 0xd8410020  lqc2        $vf1, 0x20($v0)
    ctx->pc = 0x12dc8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x12dc90: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x12dc90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x12dc94: 0xd8410030  lqc2        $vf1, 0x30($v0)
    ctx->pc = 0x12dc94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x12dc98: 0x4be2084b  vmaddw.xyzw $vf1, $vf1, $vf2w
    ctx->pc = 0x12dc98u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x12dc9c: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x12dc9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12dca0: 0x4b010083  vaddw.x     $vf2, $vf0, $vf1w
    ctx->pc = 0x12dca0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12dca4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12dca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12dca8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12dca8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12dcac: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x12dcacu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x12dcb0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12dcb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12dcb4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x12dcb4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x12dcb8: 0x440b0000  mfc1        $t3, $f0
    ctx->pc = 0x12dcb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x12dcbc: 0x48ab1000  qmtc2.ni    $t3, $vf2
    ctx->pc = 0x12dcbcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 11));
    // 0x12dcc0: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x12dcc0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12dcc4: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x12dcc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12dcc8: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x12dcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x12dccc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x12dcccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x12dcd0: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x12dcd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12dcd4: 0xf9210000  sqc2        $vf1, 0x0($t1)
    ctx->pc = 0x12dcd4u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12dcd8: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x12dcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x12dcdc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x12dcdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x12dce0: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x12dce0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x12dce4: 0x5440ffb4  bnel        $v0, $zero, . + 4 + (-0x4C << 2)
    ctx->pc = 0x12DCE4u;
    {
        const bool branch_taken_0x12dce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12dce4) {
            ctx->pc = 0x12DCE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12DCE4u;
            // 0x12dce8: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12DBB8u;
            runtime->cooperativeGuestYield();
            goto label_12dbb8;
        }
    }
    ctx->pc = 0x12DCECu;
    // 0x12dcec: 0x0  nop
    ctx->pc = 0x12dcecu;
    // NOP
label_12dcf0:
    // 0x12dcf0: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x12dcf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x12dcf4: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x12dcf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x12dcf8: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x12dcf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x12dcfc: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x12dcfcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12dd00: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x12dd00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12dd04: 0x3e00008  jr          $ra
    ctx->pc = 0x12DD04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DD08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DD04u;
            // 0x12dd08: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12DB0Cu: goto label_12db0c;
            case 0x12DB48u: goto label_12db48;
            case 0x12DB64u: goto label_12db64;
            case 0x12DBB8u: goto label_12dbb8;
            case 0x12DC48u: goto label_12dc48;
            case 0x12DC70u: goto label_12dc70;
            case 0x12DC74u: goto label_12dc74;
            case 0x12DCF0u: goto label_12dcf0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12DD0Cu;
    // 0x12dd0c: 0x0  nop
    ctx->pc = 0x12dd0cu;
    // NOP
}
