#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018ED40
// Address: 0x18ed40 - 0x18f638
void sub_0018ED40_0x18ed40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018ED40_0x18ed40");
#endif

    ctx->pc = 0x18ed40u;

    // 0x18ed40: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x18ed40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x18ed44: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x18ed44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x18ed48: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x18ed48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x18ed4c: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x18ed4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x18ed50: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18ed50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ed54: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x18ed54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x18ed58: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x18ed58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x18ed5c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x18ed5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x18ed60: 0xc441c658  lwc1        $f1, -0x39A8($v0)
    ctx->pc = 0x18ed60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ed64: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x18ed64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18ed68: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x18ed68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x18ed6c: 0x460100c1  sub.s       $f3, $f0, $f1
    ctx->pc = 0x18ed6cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x18ed70: 0xe6430000  swc1        $f3, 0x0($s2)
    ctx->pc = 0x18ed70u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x18ed74: 0xc4c10024  lwc1        $f1, 0x24($a2)
    ctx->pc = 0x18ed74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ed78: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x18ed78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18ed7c: 0x0  nop
    ctx->pc = 0x18ed7cu;
    // NOP
    // 0x18ed80: 0x4500008b  bc1f        . + 4 + (0x8B << 2)
    ctx->pc = 0x18ED80u;
    {
        const bool branch_taken_0x18ed80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18ED84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18ED80u;
            // 0x18ed84: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ed80) {
            ctx->pc = 0x18EFB0u;
            goto label_18efb0;
        }
    }
    ctx->pc = 0x18ED88u;
    // 0x18ed88: 0x80c20045  lb          $v0, 0x45($a2)
    ctx->pc = 0x18ed88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 69)));
    // 0x18ed8c: 0x10400088  beqz        $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x18ED8Cu;
    {
        const bool branch_taken_0x18ed8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ED90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18ED8Cu;
            // 0x18ed90: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ed8c) {
            ctx->pc = 0x18EFB0u;
            goto label_18efb0;
        }
    }
    ctx->pc = 0x18ED94u;
    // 0x18ed94: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x18ed94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x18ed98: 0x3c08002a  lui         $t0, 0x2A
    ctx->pc = 0x18ed98u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)42 << 16));
    // 0x18ed9c: 0x515c2  srl         $v0, $a1, 23
    ctx->pc = 0x18ed9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x18eda0: 0x8d03d2ac  lw          $v1, -0x2D54($t0)
    ctx->pc = 0x18eda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294955692)));
    // 0x18eda4: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x18eda4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x18eda8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x18eda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18edac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x18edacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18edb0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18edb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18edb4: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x18EDB4u;
    {
        const bool branch_taken_0x18edb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x18EDB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EDB4u;
            // 0x18edb8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18edb4) {
            ctx->pc = 0x18EDC0u;
            goto label_18edc0;
        }
    }
    ctx->pc = 0x18EDBCu;
    // 0x18edbc: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x18edbcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_18edc0:
    // 0x18edc0: 0x14e0005f  bnez        $a3, . + 4 + (0x5F << 2)
    ctx->pc = 0x18EDC0u;
    {
        const bool branch_taken_0x18edc0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x18edc0) {
            ctx->pc = 0x18EF40u;
            goto label_18ef40;
        }
    }
    ctx->pc = 0x18EDC8u;
    // 0x18edc8: 0x4be3033c  vmove.xyzw  $vf3, $vf0
    ctx->pc = 0x18edc8u;
    ctx->vu0_vf[3] = ctx->vu0_vf[0];
    // 0x18edcc: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x18edccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18edd0: 0x4be21b3d  vmr32.xyzw  $vf2, $vf3
    ctx->pc = 0x18edd0u;
    ctx->vu0_vf[2] = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,1));
    // 0x18edd4: 0xfba30030  sqc2        $vf3, 0x30($sp)
    ctx->pc = 0x18edd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x18edd8: 0x4be1133d  vmr32.xyzw  $vf1, $vf2
    ctx->pc = 0x18edd8u;
    ctx->vu0_vf[1] = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,1));
    // 0x18eddc: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x18eddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x18ede0: 0x4be40b3d  vmr32.xyzw  $vf4, $vf1
    ctx->pc = 0x18ede0u;
    ctx->vu0_vf[4] = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,1));
    // 0x18ede4: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x18ede4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18ede8: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x18ede8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x18edec: 0xfba30040  sqc2        $vf3, 0x40($sp)
    ctx->pc = 0x18edecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x18edf0: 0xfba20050  sqc2        $vf2, 0x50($sp)
    ctx->pc = 0x18edf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x18edf4: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x18edf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18edf8: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x18edf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x18edfc: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x18edfcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x18ee00: 0x2610e848  addiu       $s0, $s0, -0x17B8
    ctx->pc = 0x18ee00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961224));
    // 0x18ee04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18ee04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ee08: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x18ee08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18ee0c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x18ee0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x18ee10: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x18ee10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x18ee14: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x18ee14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x18ee18: 0x40f809  jalr        $v0
    ctx->pc = 0x18EE18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18EE20u);
        ctx->pc = 0x18EE1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EE18u;
            // 0x18ee1c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18EE20u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18EDC0u: goto label_18edc0;
            case 0x18EF40u: goto label_18ef40;
            case 0x18EF64u: goto label_18ef64;
            case 0x18EF88u: goto label_18ef88;
            case 0x18EFA8u: goto label_18efa8;
            case 0x18EFB0u: goto label_18efb0;
            case 0x18EFB4u: goto label_18efb4;
            case 0x18F010u: goto label_18f010;
            case 0x18F048u: goto label_18f048;
            case 0x18F078u: goto label_18f078;
            case 0x18F088u: goto label_18f088;
            case 0x18F108u: goto label_18f108;
            case 0x18F110u: goto label_18f110;
            case 0x18F114u: goto label_18f114;
            case 0x18F148u: goto label_18f148;
            case 0x18F174u: goto label_18f174;
            case 0x18F1B0u: goto label_18f1b0;
            case 0x18F220u: goto label_18f220;
            case 0x18F22Cu: goto label_18f22c;
            case 0x18F238u: goto label_18f238;
            case 0x18F248u: goto label_18f248;
            case 0x18F290u: goto label_18f290;
            case 0x18F2B0u: goto label_18f2b0;
            case 0x18F2B8u: goto label_18f2b8;
            case 0x18F398u: goto label_18f398;
            case 0x18F3D0u: goto label_18f3d0;
            case 0x18F440u: goto label_18f440;
            case 0x18F44Cu: goto label_18f44c;
            case 0x18F458u: goto label_18f458;
            case 0x18F49Cu: goto label_18f49c;
            case 0x18F4B0u: goto label_18f4b0;
            case 0x18F4B4u: goto label_18f4b4;
            case 0x18F4BCu: goto label_18f4bc;
            case 0x18F550u: goto label_18f550;
            case 0x18F554u: goto label_18f554;
            case 0x18F608u: goto label_18f608;
            case 0x18F614u: goto label_18f614;
            case 0x18F624u: goto label_18f624;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18EE20u; }
            if (ctx->pc != 0x18EE20u) { return; }
        }
        }
    }
    ctx->pc = 0x18EE20u;
    // 0x18ee20: 0x8c450088  lw          $a1, 0x88($v0)
    ctx->pc = 0x18ee20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x18ee24: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x18ee24u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18ee28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18ee28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18ee2c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18ee2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18ee30: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18ee30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18ee34: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x18ee34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x18ee38: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x18ee38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x18ee3c: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x18ee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x18ee40: 0x40f809  jalr        $v0
    ctx->pc = 0x18EE40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18EE48u);
        ctx->pc = 0x18EE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EE40u;
            // 0x18ee44: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18EE48u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18EDC0u: goto label_18edc0;
            case 0x18EF40u: goto label_18ef40;
            case 0x18EF64u: goto label_18ef64;
            case 0x18EF88u: goto label_18ef88;
            case 0x18EFA8u: goto label_18efa8;
            case 0x18EFB0u: goto label_18efb0;
            case 0x18EFB4u: goto label_18efb4;
            case 0x18F010u: goto label_18f010;
            case 0x18F048u: goto label_18f048;
            case 0x18F078u: goto label_18f078;
            case 0x18F088u: goto label_18f088;
            case 0x18F108u: goto label_18f108;
            case 0x18F110u: goto label_18f110;
            case 0x18F114u: goto label_18f114;
            case 0x18F148u: goto label_18f148;
            case 0x18F174u: goto label_18f174;
            case 0x18F1B0u: goto label_18f1b0;
            case 0x18F220u: goto label_18f220;
            case 0x18F22Cu: goto label_18f22c;
            case 0x18F238u: goto label_18f238;
            case 0x18F248u: goto label_18f248;
            case 0x18F290u: goto label_18f290;
            case 0x18F2B0u: goto label_18f2b0;
            case 0x18F2B8u: goto label_18f2b8;
            case 0x18F398u: goto label_18f398;
            case 0x18F3D0u: goto label_18f3d0;
            case 0x18F440u: goto label_18f440;
            case 0x18F44Cu: goto label_18f44c;
            case 0x18F458u: goto label_18f458;
            case 0x18F49Cu: goto label_18f49c;
            case 0x18F4B0u: goto label_18f4b0;
            case 0x18F4B4u: goto label_18f4b4;
            case 0x18F4BCu: goto label_18f4bc;
            case 0x18F550u: goto label_18f550;
            case 0x18F554u: goto label_18f554;
            case 0x18F608u: goto label_18f608;
            case 0x18F614u: goto label_18f614;
            case 0x18F624u: goto label_18f624;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18EE48u; }
            if (ctx->pc != 0x18EE48u) { return; }
        }
        }
    }
    ctx->pc = 0x18EE48u;
    // 0x18ee48: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x18ee48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18ee4c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x18ee4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x18ee50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18ee50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ee54: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x18ee54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x18ee58: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x18ee58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x18ee5c: 0x40f809  jalr        $v0
    ctx->pc = 0x18EE5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18EE64u);
        ctx->pc = 0x18EE60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EE5Cu;
            // 0x18ee60: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18EE64u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18EDC0u: goto label_18edc0;
            case 0x18EF40u: goto label_18ef40;
            case 0x18EF64u: goto label_18ef64;
            case 0x18EF88u: goto label_18ef88;
            case 0x18EFA8u: goto label_18efa8;
            case 0x18EFB0u: goto label_18efb0;
            case 0x18EFB4u: goto label_18efb4;
            case 0x18F010u: goto label_18f010;
            case 0x18F048u: goto label_18f048;
            case 0x18F078u: goto label_18f078;
            case 0x18F088u: goto label_18f088;
            case 0x18F108u: goto label_18f108;
            case 0x18F110u: goto label_18f110;
            case 0x18F114u: goto label_18f114;
            case 0x18F148u: goto label_18f148;
            case 0x18F174u: goto label_18f174;
            case 0x18F1B0u: goto label_18f1b0;
            case 0x18F220u: goto label_18f220;
            case 0x18F22Cu: goto label_18f22c;
            case 0x18F238u: goto label_18f238;
            case 0x18F248u: goto label_18f248;
            case 0x18F290u: goto label_18f290;
            case 0x18F2B0u: goto label_18f2b0;
            case 0x18F2B8u: goto label_18f2b8;
            case 0x18F398u: goto label_18f398;
            case 0x18F3D0u: goto label_18f3d0;
            case 0x18F440u: goto label_18f440;
            case 0x18F44Cu: goto label_18f44c;
            case 0x18F458u: goto label_18f458;
            case 0x18F49Cu: goto label_18f49c;
            case 0x18F4B0u: goto label_18f4b0;
            case 0x18F4B4u: goto label_18f4b4;
            case 0x18F4BCu: goto label_18f4bc;
            case 0x18F550u: goto label_18f550;
            case 0x18F554u: goto label_18f554;
            case 0x18F608u: goto label_18f608;
            case 0x18F614u: goto label_18f614;
            case 0x18F624u: goto label_18f624;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18EE64u; }
            if (ctx->pc != 0x18EE64u) { return; }
        }
        }
    }
    ctx->pc = 0x18EE64u;
    // 0x18ee64: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x18ee64u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18ee68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18ee68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18ee6c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x18ee6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x18ee70: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18ee70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ee74: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x18ee74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18ee78: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x18ee78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x18ee7c: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x18ee7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x18ee80: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x18ee80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x18ee84: 0x40f809  jalr        $v0
    ctx->pc = 0x18EE84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18EE8Cu);
        ctx->pc = 0x18EE88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EE84u;
            // 0x18ee88: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18EE8Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18EDC0u: goto label_18edc0;
            case 0x18EF40u: goto label_18ef40;
            case 0x18EF64u: goto label_18ef64;
            case 0x18EF88u: goto label_18ef88;
            case 0x18EFA8u: goto label_18efa8;
            case 0x18EFB0u: goto label_18efb0;
            case 0x18EFB4u: goto label_18efb4;
            case 0x18F010u: goto label_18f010;
            case 0x18F048u: goto label_18f048;
            case 0x18F078u: goto label_18f078;
            case 0x18F088u: goto label_18f088;
            case 0x18F108u: goto label_18f108;
            case 0x18F110u: goto label_18f110;
            case 0x18F114u: goto label_18f114;
            case 0x18F148u: goto label_18f148;
            case 0x18F174u: goto label_18f174;
            case 0x18F1B0u: goto label_18f1b0;
            case 0x18F220u: goto label_18f220;
            case 0x18F22Cu: goto label_18f22c;
            case 0x18F238u: goto label_18f238;
            case 0x18F248u: goto label_18f248;
            case 0x18F290u: goto label_18f290;
            case 0x18F2B0u: goto label_18f2b0;
            case 0x18F2B8u: goto label_18f2b8;
            case 0x18F398u: goto label_18f398;
            case 0x18F3D0u: goto label_18f3d0;
            case 0x18F440u: goto label_18f440;
            case 0x18F44Cu: goto label_18f44c;
            case 0x18F458u: goto label_18f458;
            case 0x18F49Cu: goto label_18f49c;
            case 0x18F4B0u: goto label_18f4b0;
            case 0x18F4B4u: goto label_18f4b4;
            case 0x18F4BCu: goto label_18f4bc;
            case 0x18F550u: goto label_18f550;
            case 0x18F554u: goto label_18f554;
            case 0x18F608u: goto label_18f608;
            case 0x18F614u: goto label_18f614;
            case 0x18F624u: goto label_18f624;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18EE8Cu; }
            if (ctx->pc != 0x18EE8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x18EE8Cu;
    // 0x18ee8c: 0xc089960  jal         func_226580
    ctx->pc = 0x18EE8Cu;
    SET_GPR_U32(ctx, 31, 0x18EE94u);
    ctx->pc = 0x18EE90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18EE8Cu;
            // 0x18ee90: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226580u;
    if (runtime->hasFunction(0x226580u)) {
        auto targetFn = runtime->lookupFunction(0x226580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EE94u; }
        if (ctx->pc != 0x18EE94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00226580_0x226580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EE94u; }
        if (ctx->pc != 0x18EE94u) { return; }
    }
    ctx->pc = 0x18EE94u;
    // 0x18ee94: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x18ee94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x18ee98: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x18ee98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ee9c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18ee9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18eea0: 0x2408fffd  addiu       $t0, $zero, -0x3
    ctx->pc = 0x18eea0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x18eea4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18eea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18eea8: 0xc089b82  jal         func_226E08
    ctx->pc = 0x18EEA8u;
    SET_GPR_U32(ctx, 31, 0x18EEB0u);
    ctx->pc = 0x18EEACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18EEA8u;
            // 0x18eeac: 0x24a50045  addiu       $a1, $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 69));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226E08u;
    if (runtime->hasFunction(0x226E08u)) {
        auto targetFn = runtime->lookupFunction(0x226E08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EEB0u; }
        if (ctx->pc != 0x18EEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00226E08_0x226e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EEB0u; }
        if (ctx->pc != 0x18EEB0u) { return; }
    }
    ctx->pc = 0x18EEB0u;
    // 0x18eeb0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x18eeb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18eeb4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x18eeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18eeb8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x18eeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x18eebc: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x18eebcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x18eec0: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x18eec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x18eec4: 0x40f809  jalr        $v0
    ctx->pc = 0x18EEC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18EECCu);
        ctx->pc = 0x18EEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EEC4u;
            // 0x18eec8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18EECCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18EDC0u: goto label_18edc0;
            case 0x18EF40u: goto label_18ef40;
            case 0x18EF64u: goto label_18ef64;
            case 0x18EF88u: goto label_18ef88;
            case 0x18EFA8u: goto label_18efa8;
            case 0x18EFB0u: goto label_18efb0;
            case 0x18EFB4u: goto label_18efb4;
            case 0x18F010u: goto label_18f010;
            case 0x18F048u: goto label_18f048;
            case 0x18F078u: goto label_18f078;
            case 0x18F088u: goto label_18f088;
            case 0x18F108u: goto label_18f108;
            case 0x18F110u: goto label_18f110;
            case 0x18F114u: goto label_18f114;
            case 0x18F148u: goto label_18f148;
            case 0x18F174u: goto label_18f174;
            case 0x18F1B0u: goto label_18f1b0;
            case 0x18F220u: goto label_18f220;
            case 0x18F22Cu: goto label_18f22c;
            case 0x18F238u: goto label_18f238;
            case 0x18F248u: goto label_18f248;
            case 0x18F290u: goto label_18f290;
            case 0x18F2B0u: goto label_18f2b0;
            case 0x18F2B8u: goto label_18f2b8;
            case 0x18F398u: goto label_18f398;
            case 0x18F3D0u: goto label_18f3d0;
            case 0x18F440u: goto label_18f440;
            case 0x18F44Cu: goto label_18f44c;
            case 0x18F458u: goto label_18f458;
            case 0x18F49Cu: goto label_18f49c;
            case 0x18F4B0u: goto label_18f4b0;
            case 0x18F4B4u: goto label_18f4b4;
            case 0x18F4BCu: goto label_18f4bc;
            case 0x18F550u: goto label_18f550;
            case 0x18F554u: goto label_18f554;
            case 0x18F608u: goto label_18f608;
            case 0x18F614u: goto label_18f614;
            case 0x18F624u: goto label_18f624;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18EECCu; }
            if (ctx->pc != 0x18EECCu) { return; }
        }
        }
    }
    ctx->pc = 0x18EECCu;
    // 0x18eecc: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x18eeccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x18eed0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x18eed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x18eed4: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x18eed4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x18eed8: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x18eed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x18eedc: 0x40f809  jalr        $v0
    ctx->pc = 0x18EEDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18EEE4u);
        ctx->pc = 0x18EEE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EEDCu;
            // 0x18eee0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18EEE4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18EDC0u: goto label_18edc0;
            case 0x18EF40u: goto label_18ef40;
            case 0x18EF64u: goto label_18ef64;
            case 0x18EF88u: goto label_18ef88;
            case 0x18EFA8u: goto label_18efa8;
            case 0x18EFB0u: goto label_18efb0;
            case 0x18EFB4u: goto label_18efb4;
            case 0x18F010u: goto label_18f010;
            case 0x18F048u: goto label_18f048;
            case 0x18F078u: goto label_18f078;
            case 0x18F088u: goto label_18f088;
            case 0x18F108u: goto label_18f108;
            case 0x18F110u: goto label_18f110;
            case 0x18F114u: goto label_18f114;
            case 0x18F148u: goto label_18f148;
            case 0x18F174u: goto label_18f174;
            case 0x18F1B0u: goto label_18f1b0;
            case 0x18F220u: goto label_18f220;
            case 0x18F22Cu: goto label_18f22c;
            case 0x18F238u: goto label_18f238;
            case 0x18F248u: goto label_18f248;
            case 0x18F290u: goto label_18f290;
            case 0x18F2B0u: goto label_18f2b0;
            case 0x18F2B8u: goto label_18f2b8;
            case 0x18F398u: goto label_18f398;
            case 0x18F3D0u: goto label_18f3d0;
            case 0x18F440u: goto label_18f440;
            case 0x18F44Cu: goto label_18f44c;
            case 0x18F458u: goto label_18f458;
            case 0x18F49Cu: goto label_18f49c;
            case 0x18F4B0u: goto label_18f4b0;
            case 0x18F4B4u: goto label_18f4b4;
            case 0x18F4BCu: goto label_18f4bc;
            case 0x18F550u: goto label_18f550;
            case 0x18F554u: goto label_18f554;
            case 0x18F608u: goto label_18f608;
            case 0x18F614u: goto label_18f614;
            case 0x18F624u: goto label_18f624;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18EEE4u; }
            if (ctx->pc != 0x18EEE4u) { return; }
        }
        }
    }
    ctx->pc = 0x18EEE4u;
    // 0x18eee4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x18eee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18eee8: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x18eee8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x18eeec: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x18eeecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x18eef0: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x18EEF0u;
    {
        const bool branch_taken_0x18eef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EEF0u;
            // 0x18eef4: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eef0) {
            ctx->pc = 0x18EFB4u;
            goto label_18efb4;
        }
    }
    ctx->pc = 0x18EEF8u;
    // 0x18eef8: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x18EEF8u;
    SET_GPR_U32(ctx, 31, 0x18EF00u);
    ctx->pc = 0x18EEFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18EEF8u;
            // 0x18eefc: 0x240400a0  addiu       $a0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EF00u; }
        if (ctx->pc != 0x18EF00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EF00u; }
        if (ctx->pc != 0x18EF00u) { return; }
    }
    ctx->pc = 0x18EF00u;
    // 0x18ef00: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x18ef00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18ef04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18ef04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ef08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18ef08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ef0c: 0xc089c86  jal         func_227218
    ctx->pc = 0x18EF0Cu;
    SET_GPR_U32(ctx, 31, 0x18EF14u);
    ctx->pc = 0x18EF10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18EF0Cu;
            // 0x18ef10: 0x8c640104  lw          $a0, 0x104($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x227218u;
    if (runtime->hasFunction(0x227218u)) {
        auto targetFn = runtime->lookupFunction(0x227218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EF14u; }
        if (ctx->pc != 0x18EF14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_227218_0x2274b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EF14u; }
        if (ctx->pc != 0x18EF14u) { return; }
    }
    ctx->pc = 0x18EF14u;
    // 0x18ef14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18ef14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ef18: 0xc089d48  jal         func_227520
    ctx->pc = 0x18EF18u;
    SET_GPR_U32(ctx, 31, 0x18EF20u);
    ctx->pc = 0x18EF1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18EF18u;
            // 0x18ef1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x227520u;
    if (runtime->hasFunction(0x227520u)) {
        auto targetFn = runtime->lookupFunction(0x227520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EF20u; }
        if (ctx->pc != 0x18EF20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_227520_0x227648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EF20u; }
        if (ctx->pc != 0x18EF20u) { return; }
    }
    ctx->pc = 0x18EF20u;
    // 0x18ef20: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x18ef20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x18ef24: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x18ef24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18ef28: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x18ef28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x18ef2c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x18ef2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x18ef30: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x18ef30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x18ef34: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x18EF34u;
    {
        const bool branch_taken_0x18ef34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EF38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EF34u;
            // 0x18ef38: 0xae44000c  sw          $a0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ef34) {
            ctx->pc = 0x18EFB0u;
            goto label_18efb0;
        }
    }
    ctx->pc = 0x18EF3Cu;
    // 0x18ef3c: 0x0  nop
    ctx->pc = 0x18ef3cu;
    // NOP
label_18ef40:
    // 0x18ef40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18ef40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ef44: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x18ef44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18ef48: 0x0  nop
    ctx->pc = 0x18ef48u;
    // NOP
    // 0x18ef4c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x18EF4Cu;
    {
        const bool branch_taken_0x18ef4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18EF50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EF4Cu;
            // 0x18ef50: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ef4c) {
            ctx->pc = 0x18EF64u;
            goto label_18ef64;
        }
    }
    ctx->pc = 0x18EF54u;
    // 0x18ef54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18ef54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18ef58: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x18ef58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18ef5c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x18EF5Cu;
    {
        const bool branch_taken_0x18ef5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EF60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EF5Cu;
            // 0x18ef60: 0x515c2  srl         $v0, $a1, 23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ef5c) {
            ctx->pc = 0x18EF88u;
            goto label_18ef88;
        }
    }
    ctx->pc = 0x18EF64u;
label_18ef64:
    // 0x18ef64: 0x460118c3  div.s       $f3, $f3, $f1
    ctx->pc = 0x18ef64u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[1];
    // 0x18ef68: 0xc4c20020  lwc1        $f2, 0x20($a2)
    ctx->pc = 0x18ef68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18ef6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18ef6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18ef70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18ef70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ef74: 0x46020041  sub.s       $f1, $f0, $f2
    ctx->pc = 0x18ef74u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x18ef78: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x18ef78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x18ef7c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x18ef7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18ef80: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x18ef80u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x18ef84: 0x515c2  srl         $v0, $a1, 23
    ctx->pc = 0x18ef84u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
label_18ef88:
    // 0x18ef88: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x18ef88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x18ef8c: 0x8d03d2ac  lw          $v1, -0x2D54($t0)
    ctx->pc = 0x18ef8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294955692)));
    // 0x18ef90: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x18ef90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18ef94: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x18ef94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18ef98: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18ef98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18ef9c: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x18EF9Cu;
    {
        const bool branch_taken_0x18ef9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x18EFA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EF9Cu;
            // 0x18efa0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ef9c) {
            ctx->pc = 0x18EFA8u;
            goto label_18efa8;
        }
    }
    ctx->pc = 0x18EFA4u;
    // 0x18efa4: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x18efa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_18efa8:
    // 0x18efa8: 0xc089c6e  jal         func_2271B8
    ctx->pc = 0x18EFA8u;
    SET_GPR_U32(ctx, 31, 0x18EFB0u);
    ctx->pc = 0x2271B8u;
    if (runtime->hasFunction(0x2271B8u)) {
        auto targetFn = runtime->lookupFunction(0x2271B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EFB0u; }
        if (ctx->pc != 0x18EFB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2271b8_0x227218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EFB0u; }
        if (ctx->pc != 0x18EFB0u) { return; }
    }
    ctx->pc = 0x18EFB0u;
label_18efb0:
    // 0x18efb0: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x18efb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_18efb4:
    // 0x18efb4: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x18efb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18efb8: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x18efb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x18efbc: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x18efbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18efc0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x18efc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18efc4: 0x3e00008  jr          $ra
    ctx->pc = 0x18EFC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18EFC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EFC4u;
            // 0x18efc8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18EDC0u: goto label_18edc0;
            case 0x18EF40u: goto label_18ef40;
            case 0x18EF64u: goto label_18ef64;
            case 0x18EF88u: goto label_18ef88;
            case 0x18EFA8u: goto label_18efa8;
            case 0x18EFB0u: goto label_18efb0;
            case 0x18EFB4u: goto label_18efb4;
            case 0x18F010u: goto label_18f010;
            case 0x18F048u: goto label_18f048;
            case 0x18F078u: goto label_18f078;
            case 0x18F088u: goto label_18f088;
            case 0x18F108u: goto label_18f108;
            case 0x18F110u: goto label_18f110;
            case 0x18F114u: goto label_18f114;
            case 0x18F148u: goto label_18f148;
            case 0x18F174u: goto label_18f174;
            case 0x18F1B0u: goto label_18f1b0;
            case 0x18F220u: goto label_18f220;
            case 0x18F22Cu: goto label_18f22c;
            case 0x18F238u: goto label_18f238;
            case 0x18F248u: goto label_18f248;
            case 0x18F290u: goto label_18f290;
            case 0x18F2B0u: goto label_18f2b0;
            case 0x18F2B8u: goto label_18f2b8;
            case 0x18F398u: goto label_18f398;
            case 0x18F3D0u: goto label_18f3d0;
            case 0x18F440u: goto label_18f440;
            case 0x18F44Cu: goto label_18f44c;
            case 0x18F458u: goto label_18f458;
            case 0x18F49Cu: goto label_18f49c;
            case 0x18F4B0u: goto label_18f4b0;
            case 0x18F4B4u: goto label_18f4b4;
            case 0x18F4BCu: goto label_18f4bc;
            case 0x18F550u: goto label_18f550;
            case 0x18F554u: goto label_18f554;
            case 0x18F608u: goto label_18f608;
            case 0x18F614u: goto label_18f614;
            case 0x18F624u: goto label_18f624;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18EFCCu;
    // 0x18efcc: 0x0  nop
    ctx->pc = 0x18efccu;
    // NOP
    // 0x18efd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18efd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18efd4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x18efd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x18efd8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18efd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18efdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18efdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18efe0: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x18efe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x18efe4: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x18efe4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x18efe8: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x18efe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x18efec: 0x415c2  srl         $v0, $a0, 23
    ctx->pc = 0x18efecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 23));
    // 0x18eff0: 0x8c66d2ac  lw          $a2, -0x2D54($v1)
    ctx->pc = 0x18eff0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955692)));
    // 0x18eff4: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x18eff4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x18eff8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x18eff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18effc: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x18effcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x18f000: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18f000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f004: 0x14440002  bne         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18F004u;
    {
        const bool branch_taken_0x18f004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x18F008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F004u;
            // 0x18f008: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f004) {
            ctx->pc = 0x18F010u;
            goto label_18f010;
        }
    }
    ctx->pc = 0x18F00Cu;
    // 0x18f00c: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x18f00cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_18f010:
    // 0x18f010: 0x54a0001d  bnel        $a1, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x18F010u;
    {
        const bool branch_taken_0x18f010 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f010) {
            ctx->pc = 0x18F014u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18F010u;
            // 0x18f014: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18F088u;
            goto label_18f088;
        }
    }
    ctx->pc = 0x18F018u;
    // 0x18f018: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x18f018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x18f01c: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x18f01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x18f020: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18F020u;
    {
        const bool branch_taken_0x18f020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F020u;
            // 0x18f024: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f020) {
            ctx->pc = 0x18F048u;
            goto label_18f048;
        }
    }
    ctx->pc = 0x18F028u;
    // 0x18f028: 0x315c2  srl         $v0, $v1, 23
    ctx->pc = 0x18f028u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 23));
    // 0x18f02c: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x18f02cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x18f030: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x18f030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18f034: 0xc22021  addu        $a0, $a2, $v0
    ctx->pc = 0x18f034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x18f038: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x18f038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18f03c: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x18F03Cu;
    {
        const bool branch_taken_0x18f03c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x18f03c) {
            ctx->pc = 0x18F048u;
            goto label_18f048;
        }
    }
    ctx->pc = 0x18F044u;
    // 0x18f044: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x18f044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_18f048:
    // 0x18f048: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x18F048u;
    {
        const bool branch_taken_0x18f048 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F04Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F048u;
            // 0x18f04c: 0x24020405  addiu       $v0, $zero, 0x405 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1029));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f048) {
            ctx->pc = 0x18F078u;
            goto label_18f078;
        }
    }
    ctx->pc = 0x18F050u;
    // 0x18f050: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x18f050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x18f054: 0xa7a20000  sh          $v0, 0x0($sp)
    ctx->pc = 0x18f054u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18f058: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x18f058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x18f05c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x18f05cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x18f060: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x18f060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x18f064: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x18f064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x18f068: 0x8c44e89c  lw          $a0, -0x1764($v0)
    ctx->pc = 0x18f068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961308)));
    // 0x18f06c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18f06cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f070: 0xc047d6a  jal         func_11F5A8
    ctx->pc = 0x18F070u;
    SET_GPR_U32(ctx, 31, 0x18F078u);
    ctx->pc = 0x18F074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F070u;
            // 0x18f074: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F5A8u;
    if (runtime->hasFunction(0x11F5A8u)) {
        auto targetFn = runtime->lookupFunction(0x11F5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F078u; }
        if (ctx->pc != 0x18F078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11f5a8_0x11f5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F078u; }
        if (ctx->pc != 0x18F078u) { return; }
    }
    ctx->pc = 0x18F078u;
label_18f078:
    // 0x18f078: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x18f078u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18f07c: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x18f07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x18f080: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x18f080u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x18f084: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x18f084u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_18f088:
    // 0x18f088: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18f088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18f08c: 0x3e00008  jr          $ra
    ctx->pc = 0x18F08Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F08Cu;
            // 0x18f090: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18EDC0u: goto label_18edc0;
            case 0x18EF40u: goto label_18ef40;
            case 0x18EF64u: goto label_18ef64;
            case 0x18EF88u: goto label_18ef88;
            case 0x18EFA8u: goto label_18efa8;
            case 0x18EFB0u: goto label_18efb0;
            case 0x18EFB4u: goto label_18efb4;
            case 0x18F010u: goto label_18f010;
            case 0x18F048u: goto label_18f048;
            case 0x18F078u: goto label_18f078;
            case 0x18F088u: goto label_18f088;
            case 0x18F108u: goto label_18f108;
            case 0x18F110u: goto label_18f110;
            case 0x18F114u: goto label_18f114;
            case 0x18F148u: goto label_18f148;
            case 0x18F174u: goto label_18f174;
            case 0x18F1B0u: goto label_18f1b0;
            case 0x18F220u: goto label_18f220;
            case 0x18F22Cu: goto label_18f22c;
            case 0x18F238u: goto label_18f238;
            case 0x18F248u: goto label_18f248;
            case 0x18F290u: goto label_18f290;
            case 0x18F2B0u: goto label_18f2b0;
            case 0x18F2B8u: goto label_18f2b8;
            case 0x18F398u: goto label_18f398;
            case 0x18F3D0u: goto label_18f3d0;
            case 0x18F440u: goto label_18f440;
            case 0x18F44Cu: goto label_18f44c;
            case 0x18F458u: goto label_18f458;
            case 0x18F49Cu: goto label_18f49c;
            case 0x18F4B0u: goto label_18f4b0;
            case 0x18F4B4u: goto label_18f4b4;
            case 0x18F4BCu: goto label_18f4bc;
            case 0x18F550u: goto label_18f550;
            case 0x18F554u: goto label_18f554;
            case 0x18F608u: goto label_18f608;
            case 0x18F614u: goto label_18f614;
            case 0x18F624u: goto label_18f624;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18F094u;
    // 0x18f094: 0x0  nop
    ctx->pc = 0x18f094u;
    // NOP
    // 0x18f098: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x18f098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x18f09c: 0x7fb40130  sq          $s4, 0x130($sp)
    ctx->pc = 0x18f09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 20));
    // 0x18f0a0: 0x7fb00170  sq          $s0, 0x170($sp)
    ctx->pc = 0x18f0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 16));
    // 0x18f0a4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x18f0a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f0a8: 0x7fb20150  sq          $s2, 0x150($sp)
    ctx->pc = 0x18f0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 18));
    // 0x18f0ac: 0x7fb30140  sq          $s3, 0x140($sp)
    ctx->pc = 0x18f0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 19));
    // 0x18f0b0: 0x7fb50120  sq          $s5, 0x120($sp)
    ctx->pc = 0x18f0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 21));
    // 0x18f0b4: 0x7fb60110  sq          $s6, 0x110($sp)
    ctx->pc = 0x18f0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 22));
    // 0x18f0b8: 0x7fb70100  sq          $s7, 0x100($sp)
    ctx->pc = 0x18f0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 23));
    // 0x18f0bc: 0x7fbe00f0  sq          $fp, 0xF0($sp)
    ctx->pc = 0x18f0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 30));
    // 0x18f0c0: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x18f0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x18f0c4: 0x7fb10160  sq          $s1, 0x160($sp)
    ctx->pc = 0x18f0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 17));
    // 0x18f0c8: 0x8e860060  lw          $a2, 0x60($s4)
    ctx->pc = 0x18f0c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
    // 0x18f0cc: 0x30c20007  andi        $v0, $a2, 0x7
    ctx->pc = 0x18f0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
    // 0x18f0d0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x18F0D0u;
    {
        const bool branch_taken_0x18f0d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F0D0u;
            // 0x18f0d4: 0x8e91004c  lw          $s1, 0x4C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f0d0) {
            ctx->pc = 0x18F110u;
            goto label_18f110;
        }
    }
    ctx->pc = 0x18F0D8u;
    // 0x18f0d8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x18f0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x18f0dc: 0x61dc2  srl         $v1, $a2, 23
    ctx->pc = 0x18f0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 23));
    // 0x18f0e0: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x18f0e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x18f0e4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x18f0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x18f0e8: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x18f0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x18f0ec: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x18f0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x18f0f0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x18f0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18f0f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18f0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f0f8: 0x14460003  bne         $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x18F0F8u;
    {
        const bool branch_taken_0x18f0f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x18F0FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F0F8u;
            // 0x18f0fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f0f8) {
            ctx->pc = 0x18F108u;
            goto label_18f108;
        }
    }
    ctx->pc = 0x18F100u;
    // 0x18f100: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x18f100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x18f104: 0x0  nop
    ctx->pc = 0x18f104u;
    // NOP
label_18f108:
    // 0x18f108: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18F108u;
    {
        const bool branch_taken_0x18f108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F10Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F108u;
            // 0x18f10c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f108) {
            ctx->pc = 0x18F114u;
            goto label_18f114;
        }
    }
    ctx->pc = 0x18F110u;
label_18f110:
    // 0x18f110: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x18f110u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18f114:
    // 0x18f114: 0x8e830064  lw          $v1, 0x64($s4)
    ctx->pc = 0x18f114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
    // 0x18f118: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x18f118u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x18f11c: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x18f11cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x18f120: 0x315c2  srl         $v0, $v1, 23
    ctx->pc = 0x18f120u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 23));
    // 0x18f124: 0x8c85d2ac  lw          $a1, -0x2D54($a0)
    ctx->pc = 0x18f124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294955692)));
    // 0x18f128: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x18f128u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x18f12c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x18f12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18f130: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x18f130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x18f134: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x18f134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18f138: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18F138u;
    {
        const bool branch_taken_0x18f138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x18F13Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F138u;
            // 0x18f13c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f138) {
            ctx->pc = 0x18F148u;
            goto label_18f148;
        }
    }
    ctx->pc = 0x18F140u;
    // 0x18f140: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x18f140u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18f144: 0x0  nop
    ctx->pc = 0x18f144u;
    // NOP
label_18f148:
    // 0x18f148: 0x14c0003f  bnez        $a2, . + 4 + (0x3F << 2)
    ctx->pc = 0x18F148u;
    {
        const bool branch_taken_0x18f148 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f148) {
            ctx->pc = 0x18F248u;
            goto label_18f248;
        }
    }
    ctx->pc = 0x18F150u;
    // 0x18f150: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x18f150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x18f154: 0x315c2  srl         $v0, $v1, 23
    ctx->pc = 0x18f154u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 23));
    // 0x18f158: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x18f158u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x18f15c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x18f15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18f160: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x18f160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x18f164: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x18f164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18f168: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x18F168u;
    {
        const bool branch_taken_0x18f168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x18F16Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F168u;
            // 0x18f16c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f168) {
            ctx->pc = 0x18F174u;
            goto label_18f174;
        }
    }
    ctx->pc = 0x18F170u;
    // 0x18f170: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x18f170u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_18f174:
    // 0x18f174: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x18F174u;
    {
        const bool branch_taken_0x18f174 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F174u;
            // 0x18f178: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f174) {
            ctx->pc = 0x18F1B0u;
            goto label_18f1b0;
        }
    }
    ctx->pc = 0x18F17Cu;
    // 0x18f17c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18f17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18f180: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x18f180u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18f184: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x18f184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x18f188: 0xc089c6e  jal         func_2271B8
    ctx->pc = 0x18F188u;
    SET_GPR_U32(ctx, 31, 0x18F190u);
    ctx->pc = 0x18F18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F188u;
            // 0x18f18c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2271B8u;
    if (runtime->hasFunction(0x2271B8u)) {
        auto targetFn = runtime->lookupFunction(0x2271B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F190u; }
        if (ctx->pc != 0x18F190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2271b8_0x227218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F190u; }
        if (ctx->pc != 0x18F190u) { return; }
    }
    ctx->pc = 0x18F190u;
    // 0x18f190: 0xc089d2e  jal         func_2274B8
    ctx->pc = 0x18F190u;
    SET_GPR_U32(ctx, 31, 0x18F198u);
    ctx->pc = 0x18F194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F190u;
            // 0x18f194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2274B8u;
    if (runtime->hasFunction(0x2274B8u)) {
        auto targetFn = runtime->lookupFunction(0x2274B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F198u; }
        if (ctx->pc != 0x18F198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2274b8_0x227520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F198u; }
        if (ctx->pc != 0x18F198u) { return; }
    }
    ctx->pc = 0x18F198u;
    // 0x18f198: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x18F198u;
    SET_GPR_U32(ctx, 31, 0x18F1A0u);
    ctx->pc = 0x18F19Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F198u;
            // 0x18f19c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F1A0u; }
        if (ctx->pc != 0x18F1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F1A0u; }
        if (ctx->pc != 0x18F1A0u) { return; }
    }
    ctx->pc = 0x18F1A0u;
    // 0x18f1a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18f1a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f1a4: 0xc089d48  jal         func_227520
    ctx->pc = 0x18F1A4u;
    SET_GPR_U32(ctx, 31, 0x18F1ACu);
    ctx->pc = 0x18F1A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F1A4u;
            // 0x18f1a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x227520u;
    if (runtime->hasFunction(0x227520u)) {
        auto targetFn = runtime->lookupFunction(0x227520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F1ACu; }
        if (ctx->pc != 0x18F1ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_227520_0x227648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F1ACu; }
        if (ctx->pc != 0x18F1ACu) { return; }
    }
    ctx->pc = 0x18F1ACu;
    // 0x18f1ac: 0x0  nop
    ctx->pc = 0x18f1acu;
    // NOP
label_18f1b0:
    // 0x18f1b0: 0x52200021  beql        $s1, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x18F1B0u;
    {
        const bool branch_taken_0x18f1b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f1b0) {
            ctx->pc = 0x18F1B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18F1B0u;
            // 0x18f1b4: 0x96820004  lhu         $v0, 0x4($s4) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18F238u;
            goto label_18f238;
        }
    }
    ctx->pc = 0x18F1B8u;
    // 0x18f1b8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x18f1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x18f1bc: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x18F1BCu;
    {
        const bool branch_taken_0x18f1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F1C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F1BCu;
            // 0x18f1c0: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f1bc) {
            ctx->pc = 0x18F22Cu;
            goto label_18f22c;
        }
    }
    ctx->pc = 0x18F1C4u;
    // 0x18f1c4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x18f1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x18f1c8: 0xc04cb8e  jal         func_132E38
    ctx->pc = 0x18F1C8u;
    SET_GPR_U32(ctx, 31, 0x18F1D0u);
    ctx->pc = 0x18F1CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F1C8u;
            // 0x18f1cc: 0x8c44be04  lw          $a0, -0x41FC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950404)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132E38u;
    if (runtime->hasFunction(0x132E38u)) {
        auto targetFn = runtime->lookupFunction(0x132E38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F1D0u; }
        if (ctx->pc != 0x18F1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132E38_0x132e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F1D0u; }
        if (ctx->pc != 0x18F1D0u) { return; }
    }
    ctx->pc = 0x18F1D0u;
    // 0x18f1d0: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x18f1d0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x18f1d4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x18f1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x18f1d8: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x18F1D8u;
    {
        const bool branch_taken_0x18f1d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f1d8) {
            ctx->pc = 0x18F1DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18F1D8u;
            // 0x18f1dc: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18F22Cu;
            goto label_18f22c;
        }
    }
    ctx->pc = 0x18F1E0u;
    // 0x18f1e0: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x18f1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x18f1e4: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x18f1e4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x18f1e8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x18f1e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x18f1ec: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x18F1ECu;
    {
        const bool branch_taken_0x18f1ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F1F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F1ECu;
            // 0x18f1f0: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f1ec) {
            ctx->pc = 0x18F220u;
            goto label_18f220;
        }
    }
    ctx->pc = 0x18F1F4u;
    // 0x18f1f4: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x18f1f4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18f1f8: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x18f1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x18f1fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18f1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18f200: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x18f200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18f204: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x18f204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f208: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x18f208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x18f20c: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x18f20cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x18f210: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x18f210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x18f214: 0x40f809  jalr        $v0
    ctx->pc = 0x18F214u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18F21Cu);
        ctx->pc = 0x18F218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F214u;
            // 0x18f218: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18F21Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18EDC0u: goto label_18edc0;
            case 0x18EF40u: goto label_18ef40;
            case 0x18EF64u: goto label_18ef64;
            case 0x18EF88u: goto label_18ef88;
            case 0x18EFA8u: goto label_18efa8;
            case 0x18EFB0u: goto label_18efb0;
            case 0x18EFB4u: goto label_18efb4;
            case 0x18F010u: goto label_18f010;
            case 0x18F048u: goto label_18f048;
            case 0x18F078u: goto label_18f078;
            case 0x18F088u: goto label_18f088;
            case 0x18F108u: goto label_18f108;
            case 0x18F110u: goto label_18f110;
            case 0x18F114u: goto label_18f114;
            case 0x18F148u: goto label_18f148;
            case 0x18F174u: goto label_18f174;
            case 0x18F1B0u: goto label_18f1b0;
            case 0x18F220u: goto label_18f220;
            case 0x18F22Cu: goto label_18f22c;
            case 0x18F238u: goto label_18f238;
            case 0x18F248u: goto label_18f248;
            case 0x18F290u: goto label_18f290;
            case 0x18F2B0u: goto label_18f2b0;
            case 0x18F2B8u: goto label_18f2b8;
            case 0x18F398u: goto label_18f398;
            case 0x18F3D0u: goto label_18f3d0;
            case 0x18F440u: goto label_18f440;
            case 0x18F44Cu: goto label_18f44c;
            case 0x18F458u: goto label_18f458;
            case 0x18F49Cu: goto label_18f49c;
            case 0x18F4B0u: goto label_18f4b0;
            case 0x18F4B4u: goto label_18f4b4;
            case 0x18F4BCu: goto label_18f4bc;
            case 0x18F550u: goto label_18f550;
            case 0x18F554u: goto label_18f554;
            case 0x18F608u: goto label_18f608;
            case 0x18F614u: goto label_18f614;
            case 0x18F624u: goto label_18f624;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18F21Cu; }
            if (ctx->pc != 0x18F21Cu) { return; }
        }
        }
    }
    ctx->pc = 0x18F21Cu;
    // 0x18f21c: 0x0  nop
    ctx->pc = 0x18f21cu;
    // NOP
label_18f220:
    // 0x18f220: 0xc04c9da  jal         func_132768
    ctx->pc = 0x18F220u;
    SET_GPR_U32(ctx, 31, 0x18F228u);
    ctx->pc = 0x18F224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F220u;
            // 0x18f224: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132768u;
    if (runtime->hasFunction(0x132768u)) {
        auto targetFn = runtime->lookupFunction(0x132768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F228u; }
        if (ctx->pc != 0x18F228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132768_0x132768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F228u; }
        if (ctx->pc != 0x18F228u) { return; }
    }
    ctx->pc = 0x18F228u;
    // 0x18f228: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x18f228u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_18f22c:
    // 0x18f22c: 0xc063ab0  jal         func_18EAC0
    ctx->pc = 0x18F22Cu;
    SET_GPR_U32(ctx, 31, 0x18F234u);
    ctx->pc = 0x18F230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F22Cu;
            // 0x18f230: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18EAC0u;
    if (runtime->hasFunction(0x18EAC0u)) {
        auto targetFn = runtime->lookupFunction(0x18EAC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F234u; }
        if (ctx->pc != 0x18F234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_18eac0_0x18eae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F234u; }
        if (ctx->pc != 0x18F234u) { return; }
    }
    ctx->pc = 0x18F234u;
    // 0x18f234: 0x96820004  lhu         $v0, 0x4($s4)
    ctx->pc = 0x18f234u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
label_18f238:
    // 0x18f238: 0xae80004c  sw          $zero, 0x4C($s4)
    ctx->pc = 0x18f238u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 0));
    // 0x18f23c: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x18f23cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x18f240: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x18F240u;
    {
        const bool branch_taken_0x18f240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F240u;
            // 0x18f244: 0xa6820004  sh          $v0, 0x4($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f240) {
            ctx->pc = 0x18F550u;
            goto label_18f550;
        }
    }
    ctx->pc = 0x18F248u;
label_18f248:
    // 0x18f248: 0x126000c2  beqz        $s3, . + 4 + (0xC2 << 2)
    ctx->pc = 0x18F248u;
    {
        const bool branch_taken_0x18f248 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F248u;
            // 0x18f24c: 0x7bb00170  lq          $s0, 0x170($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f248) {
            ctx->pc = 0x18F554u;
            goto label_18f554;
        }
    }
    ctx->pc = 0x18F250u;
    // 0x18f250: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x18f250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x18f254: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x18f254u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x18f258: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x18f258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x18f25c: 0x40f809  jalr        $v0
    ctx->pc = 0x18F25Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18F264u);
        ctx->pc = 0x18F260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F25Cu;
            // 0x18f260: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18F264u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18EDC0u: goto label_18edc0;
            case 0x18EF40u: goto label_18ef40;
            case 0x18EF64u: goto label_18ef64;
            case 0x18EF88u: goto label_18ef88;
            case 0x18EFA8u: goto label_18efa8;
            case 0x18EFB0u: goto label_18efb0;
            case 0x18EFB4u: goto label_18efb4;
            case 0x18F010u: goto label_18f010;
            case 0x18F048u: goto label_18f048;
            case 0x18F078u: goto label_18f078;
            case 0x18F088u: goto label_18f088;
            case 0x18F108u: goto label_18f108;
            case 0x18F110u: goto label_18f110;
            case 0x18F114u: goto label_18f114;
            case 0x18F148u: goto label_18f148;
            case 0x18F174u: goto label_18f174;
            case 0x18F1B0u: goto label_18f1b0;
            case 0x18F220u: goto label_18f220;
            case 0x18F22Cu: goto label_18f22c;
            case 0x18F238u: goto label_18f238;
            case 0x18F248u: goto label_18f248;
            case 0x18F290u: goto label_18f290;
            case 0x18F2B0u: goto label_18f2b0;
            case 0x18F2B8u: goto label_18f2b8;
            case 0x18F398u: goto label_18f398;
            case 0x18F3D0u: goto label_18f3d0;
            case 0x18F440u: goto label_18f440;
            case 0x18F44Cu: goto label_18f44c;
            case 0x18F458u: goto label_18f458;
            case 0x18F49Cu: goto label_18f49c;
            case 0x18F4B0u: goto label_18f4b0;
            case 0x18F4B4u: goto label_18f4b4;
            case 0x18F4BCu: goto label_18f4bc;
            case 0x18F550u: goto label_18f550;
            case 0x18F554u: goto label_18f554;
            case 0x18F608u: goto label_18f608;
            case 0x18F614u: goto label_18f614;
            case 0x18F624u: goto label_18f624;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18F264u; }
            if (ctx->pc != 0x18F264u) { return; }
        }
        }
    }
    ctx->pc = 0x18F264u;
    // 0x18f264: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x18f264u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f268: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x18f268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x18f26c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x18F26Cu;
    {
        const bool branch_taken_0x18f26c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f26c) {
            ctx->pc = 0x18F2B0u;
            goto label_18f2b0;
        }
    }
    ctx->pc = 0x18F274u;
    // 0x18f274: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x18f274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x18f278: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x18f278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x18f27c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18f27cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18f280: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18F280u;
    {
        const bool branch_taken_0x18f280 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F280u;
            // 0x18f284: 0xc4410008  lwc1        $f1, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f280) {
            ctx->pc = 0x18F290u;
            goto label_18f290;
        }
    }
    ctx->pc = 0x18F288u;
    // 0x18f288: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x18f288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f28c: 0x0  nop
    ctx->pc = 0x18f28cu;
    // NOP
label_18f290:
    // 0x18f290: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x18f290u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x18f294: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18f294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18f298: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x18f298u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18f29c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x18f29cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18f2a0: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x18f2a0u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x18f2a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18F2A4u;
    {
        const bool branch_taken_0x18f2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F2A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F2A4u;
            // 0x18f2a8: 0x460200a9  min.s       $f2, $f0, $f2 (Delay Slot)
        ctx->f[2] = std::min(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f2a4) {
            ctx->pc = 0x18F2B8u;
            goto label_18f2b8;
        }
    }
    ctx->pc = 0x18F2ACu;
    // 0x18f2ac: 0x0  nop
    ctx->pc = 0x18f2acu;
    // NOP
label_18f2b0:
    // 0x18f2b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18f2b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18f2b4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x18f2b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18f2b8:
    // 0x18f2b8: 0x8e750000  lw          $s5, 0x0($s3)
    ctx->pc = 0x18f2b8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18f2bc: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x18f2bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
    // 0x18f2c0: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x18f2c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x18f2c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18f2c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18f2c8: 0x7aa20020  lq          $v0, 0x20($s5)
    ctx->pc = 0x18f2c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x18f2cc: 0x26a30020  addiu       $v1, $s5, 0x20
    ctx->pc = 0x18f2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x18f2d0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x18f2d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18f2d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18f2d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18f2d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18f2d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18f2dc: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x18f2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x18f2e0: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x18f2e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x18f2e4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x18f2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x18f2e8: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x18f2e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x18f2ec: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x18f2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x18f2f0: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x18f2f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x18f2f4: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x18f2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x18f2f8: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x18f2f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x18f2fc: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x18f2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f300: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x18f300u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x18f304: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18f304u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x18f308: 0x44120000  mfc1        $s2, $f0
    ctx->pc = 0x18f308u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x18f30c: 0x4500006b  bc1f        . + 4 + (0x6B << 2)
    ctx->pc = 0x18F30Cu;
    {
        const bool branch_taken_0x18f30c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18F310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F30Cu;
            // 0x18f310: 0x2610002d  addiu       $s0, $s0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f30c) {
            ctx->pc = 0x18F4BCu;
            goto label_18f4bc;
        }
    }
    ctx->pc = 0x18F314u;
    // 0x18f314: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x18f314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x18f318: 0x245ee848  addiu       $fp, $v0, -0x17B8
    ctx->pc = 0x18f318u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x18f31c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x18f31cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18f320: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x18f320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x18f324: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x18f324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x18f328: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x18f328u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x18f32c: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x18f32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x18f330: 0x40f809  jalr        $v0
    ctx->pc = 0x18F330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18F338u);
        ctx->pc = 0x18F334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F330u;
            // 0x18f334: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18F338u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18EDC0u: goto label_18edc0;
            case 0x18EF40u: goto label_18ef40;
            case 0x18EF64u: goto label_18ef64;
            case 0x18EF88u: goto label_18ef88;
            case 0x18EFA8u: goto label_18efa8;
            case 0x18EFB0u: goto label_18efb0;
            case 0x18EFB4u: goto label_18efb4;
            case 0x18F010u: goto label_18f010;
            case 0x18F048u: goto label_18f048;
            case 0x18F078u: goto label_18f078;
            case 0x18F088u: goto label_18f088;
            case 0x18F108u: goto label_18f108;
            case 0x18F110u: goto label_18f110;
            case 0x18F114u: goto label_18f114;
            case 0x18F148u: goto label_18f148;
            case 0x18F174u: goto label_18f174;
            case 0x18F1B0u: goto label_18f1b0;
            case 0x18F220u: goto label_18f220;
            case 0x18F22Cu: goto label_18f22c;
            case 0x18F238u: goto label_18f238;
            case 0x18F248u: goto label_18f248;
            case 0x18F290u: goto label_18f290;
            case 0x18F2B0u: goto label_18f2b0;
            case 0x18F2B8u: goto label_18f2b8;
            case 0x18F398u: goto label_18f398;
            case 0x18F3D0u: goto label_18f3d0;
            case 0x18F440u: goto label_18f440;
            case 0x18F44Cu: goto label_18f44c;
            case 0x18F458u: goto label_18f458;
            case 0x18F49Cu: goto label_18f49c;
            case 0x18F4B0u: goto label_18f4b0;
            case 0x18F4B4u: goto label_18f4b4;
            case 0x18F4BCu: goto label_18f4bc;
            case 0x18F550u: goto label_18f550;
            case 0x18F554u: goto label_18f554;
            case 0x18F608u: goto label_18f608;
            case 0x18F614u: goto label_18f614;
            case 0x18F624u: goto label_18f624;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18F338u; }
            if (ctx->pc != 0x18F338u) { return; }
        }
        }
    }
    ctx->pc = 0x18F338u;
    // 0x18f338: 0x8c450088  lw          $a1, 0x88($v0)
    ctx->pc = 0x18f338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x18f33c: 0xc069cb8  jal         func_1A72E0
    ctx->pc = 0x18F33Cu;
    SET_GPR_U32(ctx, 31, 0x18F344u);
    ctx->pc = 0x18F340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F33Cu;
            // 0x18f340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A72E0u;
    if (runtime->hasFunction(0x1A72E0u)) {
        auto targetFn = runtime->lookupFunction(0x1A72E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F344u; }
        if (ctx->pc != 0x18F344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A72E0_0x1a72e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F344u; }
        if (ctx->pc != 0x18F344u) { return; }
    }
    ctx->pc = 0x18F344u;
    // 0x18f344: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x18f344u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f348: 0x12c00059  beqz        $s6, . + 4 + (0x59 << 2)
    ctx->pc = 0x18F348u;
    {
        const bool branch_taken_0x18f348 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F34Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F348u;
            // 0x18f34c: 0x27b70040  addiu       $s7, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f348) {
            ctx->pc = 0x18F4B0u;
            goto label_18f4b0;
        }
    }
    ctx->pc = 0x18F350u;
    // 0x18f350: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x18f350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f354: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x18f354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f358: 0xc06a276  jal         func_1A89D8
    ctx->pc = 0x18F358u;
    SET_GPR_U32(ctx, 31, 0x18F360u);
    ctx->pc = 0x18F35Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F358u;
            // 0x18f35c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A89D8u;
    if (runtime->hasFunction(0x1A89D8u)) {
        auto targetFn = runtime->lookupFunction(0x1A89D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F360u; }
        if (ctx->pc != 0x18F360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A89D8_0x1a89d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F360u; }
        if (ctx->pc != 0x18F360u) { return; }
    }
    ctx->pc = 0x18F360u;
    // 0x18f360: 0x8e6201b0  lw          $v0, 0x1B0($s3)
    ctx->pc = 0x18f360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 432)));
    // 0x18f364: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x18f364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x18f368: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x18f368u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x18f36c: 0x94420080  lhu         $v0, 0x80($v0)
    ctx->pc = 0x18f36cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x18f370: 0x8cc5d2ac  lw          $a1, -0x2D54($a2)
    ctx->pc = 0x18f370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294955692)));
    // 0x18f374: 0xa7a20042  sh          $v0, 0x42($sp)
    ctx->pc = 0x18f374u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 66), (uint16_t)GPR_U32(ctx, 2));
    // 0x18f378: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x18f378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x18f37c: 0x315c2  srl         $v0, $v1, 23
    ctx->pc = 0x18f37cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 23));
    // 0x18f380: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x18f380u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x18f384: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x18f384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18f388: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x18f388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x18f38c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x18f38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18f390: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x18F390u;
    {
        const bool branch_taken_0x18f390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x18f390) {
            ctx->pc = 0x18F394u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18F390u;
            // 0x18f394: 0x8cb00008  lw          $s0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18F398u;
            goto label_18f398;
        }
    }
    ctx->pc = 0x18F398u;
label_18f398:
    // 0x18f398: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x18F398u;
    {
        const bool branch_taken_0x18f398 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F39Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F398u;
            // 0x18f39c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f398) {
            ctx->pc = 0x18F3D0u;
            goto label_18f3d0;
        }
    }
    ctx->pc = 0x18F3A0u;
    // 0x18f3a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18f3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18f3a4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x18f3a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18f3a8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x18f3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x18f3ac: 0xc089c6e  jal         func_2271B8
    ctx->pc = 0x18F3ACu;
    SET_GPR_U32(ctx, 31, 0x18F3B4u);
    ctx->pc = 0x18F3B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F3ACu;
            // 0x18f3b0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2271B8u;
    if (runtime->hasFunction(0x2271B8u)) {
        auto targetFn = runtime->lookupFunction(0x2271B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F3B4u; }
        if (ctx->pc != 0x18F3B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2271b8_0x227218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F3B4u; }
        if (ctx->pc != 0x18F3B4u) { return; }
    }
    ctx->pc = 0x18F3B4u;
    // 0x18f3b4: 0xc089d2e  jal         func_2274B8
    ctx->pc = 0x18F3B4u;
    SET_GPR_U32(ctx, 31, 0x18F3BCu);
    ctx->pc = 0x18F3B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F3B4u;
            // 0x18f3b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2274B8u;
    if (runtime->hasFunction(0x2274B8u)) {
        auto targetFn = runtime->lookupFunction(0x2274B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F3BCu; }
        if (ctx->pc != 0x18F3BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2274b8_0x227520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F3BCu; }
        if (ctx->pc != 0x18F3BCu) { return; }
    }
    ctx->pc = 0x18F3BCu;
    // 0x18f3bc: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x18F3BCu;
    SET_GPR_U32(ctx, 31, 0x18F3C4u);
    ctx->pc = 0x18F3C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F3BCu;
            // 0x18f3c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F3C4u; }
        if (ctx->pc != 0x18F3C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F3C4u; }
        if (ctx->pc != 0x18F3C4u) { return; }
    }
    ctx->pc = 0x18F3C4u;
    // 0x18f3c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18f3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f3c8: 0xc089d48  jal         func_227520
    ctx->pc = 0x18F3C8u;
    SET_GPR_U32(ctx, 31, 0x18F3D0u);
    ctx->pc = 0x18F3CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F3C8u;
            // 0x18f3cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x227520u;
    if (runtime->hasFunction(0x227520u)) {
        auto targetFn = runtime->lookupFunction(0x227520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F3D0u; }
        if (ctx->pc != 0x18F3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_227520_0x227648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F3D0u; }
        if (ctx->pc != 0x18F3D0u) { return; }
    }
    ctx->pc = 0x18F3D0u;
label_18f3d0:
    // 0x18f3d0: 0xc077cfa  jal         func_1DF3E8
    ctx->pc = 0x18F3D0u;
    SET_GPR_U32(ctx, 31, 0x18F3D8u);
    ctx->pc = 0x18F3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F3D0u;
            // 0x18f3d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF3E8u;
    if (runtime->hasFunction(0x1DF3E8u)) {
        auto targetFn = runtime->lookupFunction(0x1DF3E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F3D8u; }
        if (ctx->pc != 0x18F3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DF3E8_0x1df3e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F3D8u; }
        if (ctx->pc != 0x18F3D8u) { return; }
    }
    ctx->pc = 0x18F3D8u;
    // 0x18f3d8: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x18F3D8u;
    {
        const bool branch_taken_0x18f3d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F3DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F3D8u;
            // 0x18f3dc: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f3d8) {
            ctx->pc = 0x18F458u;
            goto label_18f458;
        }
    }
    ctx->pc = 0x18F3E0u;
    // 0x18f3e0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x18f3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x18f3e4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x18F3E4u;
    {
        const bool branch_taken_0x18f3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F3E4u;
            // 0x18f3e8: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f3e4) {
            ctx->pc = 0x18F44Cu;
            goto label_18f44c;
        }
    }
    ctx->pc = 0x18F3ECu;
    // 0x18f3ec: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x18f3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x18f3f0: 0xc04cb8e  jal         func_132E38
    ctx->pc = 0x18F3F0u;
    SET_GPR_U32(ctx, 31, 0x18F3F8u);
    ctx->pc = 0x18F3F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F3F0u;
            // 0x18f3f4: 0x8c44be04  lw          $a0, -0x41FC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950404)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132E38u;
    if (runtime->hasFunction(0x132E38u)) {
        auto targetFn = runtime->lookupFunction(0x132E38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F3F8u; }
        if (ctx->pc != 0x18F3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132E38_0x132e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F3F8u; }
        if (ctx->pc != 0x18F3F8u) { return; }
    }
    ctx->pc = 0x18F3F8u;
    // 0x18f3f8: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x18f3f8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x18f3fc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x18f3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x18f400: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x18F400u;
    {
        const bool branch_taken_0x18f400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f400) {
            ctx->pc = 0x18F404u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18F400u;
            // 0x18f404: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18F44Cu;
            goto label_18f44c;
        }
    }
    ctx->pc = 0x18F408u;
    // 0x18f408: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x18f408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x18f40c: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x18f40cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x18f410: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x18f410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x18f414: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x18F414u;
    {
        const bool branch_taken_0x18f414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f414) {
            ctx->pc = 0x18F440u;
            goto label_18f440;
        }
    }
    ctx->pc = 0x18F41Cu;
    // 0x18f41c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x18f41cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18f420: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18f420u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18f424: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x18f424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x18f428: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18f428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18f42c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x18f42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x18f430: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x18f430u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x18f434: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x18f434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x18f438: 0x40f809  jalr        $v0
    ctx->pc = 0x18F438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18F440u);
        ctx->pc = 0x18F43Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F438u;
            // 0x18f43c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18F440u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18EDC0u: goto label_18edc0;
            case 0x18EF40u: goto label_18ef40;
            case 0x18EF64u: goto label_18ef64;
            case 0x18EF88u: goto label_18ef88;
            case 0x18EFA8u: goto label_18efa8;
            case 0x18EFB0u: goto label_18efb0;
            case 0x18EFB4u: goto label_18efb4;
            case 0x18F010u: goto label_18f010;
            case 0x18F048u: goto label_18f048;
            case 0x18F078u: goto label_18f078;
            case 0x18F088u: goto label_18f088;
            case 0x18F108u: goto label_18f108;
            case 0x18F110u: goto label_18f110;
            case 0x18F114u: goto label_18f114;
            case 0x18F148u: goto label_18f148;
            case 0x18F174u: goto label_18f174;
            case 0x18F1B0u: goto label_18f1b0;
            case 0x18F220u: goto label_18f220;
            case 0x18F22Cu: goto label_18f22c;
            case 0x18F238u: goto label_18f238;
            case 0x18F248u: goto label_18f248;
            case 0x18F290u: goto label_18f290;
            case 0x18F2B0u: goto label_18f2b0;
            case 0x18F2B8u: goto label_18f2b8;
            case 0x18F398u: goto label_18f398;
            case 0x18F3D0u: goto label_18f3d0;
            case 0x18F440u: goto label_18f440;
            case 0x18F44Cu: goto label_18f44c;
            case 0x18F458u: goto label_18f458;
            case 0x18F49Cu: goto label_18f49c;
            case 0x18F4B0u: goto label_18f4b0;
            case 0x18F4B4u: goto label_18f4b4;
            case 0x18F4BCu: goto label_18f4bc;
            case 0x18F550u: goto label_18f550;
            case 0x18F554u: goto label_18f554;
            case 0x18F608u: goto label_18f608;
            case 0x18F614u: goto label_18f614;
            case 0x18F624u: goto label_18f624;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18F440u; }
            if (ctx->pc != 0x18F440u) { return; }
        }
        }
    }
    ctx->pc = 0x18F440u;
label_18f440:
    // 0x18f440: 0xc04c9da  jal         func_132768
    ctx->pc = 0x18F440u;
    SET_GPR_U32(ctx, 31, 0x18F448u);
    ctx->pc = 0x18F444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F440u;
            // 0x18f444: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132768u;
    if (runtime->hasFunction(0x132768u)) {
        auto targetFn = runtime->lookupFunction(0x132768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F448u; }
        if (ctx->pc != 0x18F448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132768_0x132768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F448u; }
        if (ctx->pc != 0x18F448u) { return; }
    }
    ctx->pc = 0x18F448u;
    // 0x18f448: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x18f448u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_18f44c:
    // 0x18f44c: 0xc063ab0  jal         func_18EAC0
    ctx->pc = 0x18F44Cu;
    SET_GPR_U32(ctx, 31, 0x18F454u);
    ctx->pc = 0x18F450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F44Cu;
            // 0x18f450: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18EAC0u;
    if (runtime->hasFunction(0x18EAC0u)) {
        auto targetFn = runtime->lookupFunction(0x18EAC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F454u; }
        if (ctx->pc != 0x18F454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_18eac0_0x18eae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F454u; }
        if (ctx->pc != 0x18F454u) { return; }
    }
    ctx->pc = 0x18F454u;
    // 0x18f454: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x18f454u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_18f458:
    // 0x18f458: 0xae80004c  sw          $zero, 0x4C($s4)
    ctx->pc = 0x18f458u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 0));
    // 0x18f45c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x18f45cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f460: 0xc06149c  jal         func_185270
    ctx->pc = 0x18F460u;
    SET_GPR_U32(ctx, 31, 0x18F468u);
    ctx->pc = 0x18F464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F460u;
            // 0x18f464: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185270u;
    if (runtime->hasFunction(0x185270u)) {
        auto targetFn = runtime->lookupFunction(0x185270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F468u; }
        if (ctx->pc != 0x18F468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_185270_0x185318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F468u; }
        if (ctx->pc != 0x18F468u) { return; }
    }
    ctx->pc = 0x18F468u;
    // 0x18f468: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x18f468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f46c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x18f46cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f470: 0xc06a2e8  jal         func_1A8BA0
    ctx->pc = 0x18F470u;
    SET_GPR_U32(ctx, 31, 0x18F478u);
    ctx->pc = 0x18F474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F470u;
            // 0x18f474: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8BA0u;
    if (runtime->hasFunction(0x1A8BA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A8BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F478u; }
        if (ctx->pc != 0x18F478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8BA0_0x1a8ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F478u; }
        if (ctx->pc != 0x18F478u) { return; }
    }
    ctx->pc = 0x18F478u;
    // 0x18f478: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x18F478u;
    {
        const bool branch_taken_0x18f478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f478) {
            ctx->pc = 0x18F47Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18F478u;
            // 0x18f47c: 0x96820004  lhu         $v0, 0x4($s4) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18F4B4u;
            goto label_18f4b4;
        }
    }
    ctx->pc = 0x18F480u;
    // 0x18f480: 0x8c4200fc  lw          $v0, 0xFC($v0)
    ctx->pc = 0x18f480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x18f484: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18F484u;
    {
        const bool branch_taken_0x18f484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F484u;
            // 0x18f488: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f484) {
            ctx->pc = 0x18F49Cu;
            goto label_18f49c;
        }
    }
    ctx->pc = 0x18F48Cu;
    // 0x18f48c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18f48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18f490: 0x50620002  beql        $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18F490u;
    {
        const bool branch_taken_0x18f490 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18f490) {
            ctx->pc = 0x18F494u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18F490u;
            // 0x18f494: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18F49Cu;
            goto label_18f49c;
        }
    }
    ctx->pc = 0x18F498u;
    // 0x18f498: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x18f498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_18f49c:
    // 0x18f49c: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x18f49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
    // 0x18f4a0: 0xae830064  sw          $v1, 0x64($s4)
    ctx->pc = 0x18f4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 100), GPR_U32(ctx, 3));
    // 0x18f4a4: 0x2442efd0  addiu       $v0, $v0, -0x1030
    ctx->pc = 0x18f4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963152));
    // 0x18f4a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18F4A8u;
    {
        const bool branch_taken_0x18f4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F4ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F4A8u;
            // 0x18f4ac: 0xae82002c  sw          $v0, 0x2C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f4a8) {
            ctx->pc = 0x18F4BCu;
            goto label_18f4bc;
        }
    }
    ctx->pc = 0x18F4B0u;
label_18f4b0:
    // 0x18f4b0: 0x96820004  lhu         $v0, 0x4($s4)
    ctx->pc = 0x18f4b0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
label_18f4b4:
    // 0x18f4b4: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x18f4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x18f4b8: 0xa6820004  sh          $v0, 0x4($s4)
    ctx->pc = 0x18f4b8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 4), (uint16_t)GPR_U32(ctx, 2));
label_18f4bc:
    // 0x18f4bc: 0x72521b89  pcpyld      $v1, $s2, $s2
    ctx->pc = 0x18f4bcu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 18), GPR_VEC(ctx, 18)));
    // 0x18f4c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18f4c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f4c4: 0x70d21389  pcpyld      $v0, $a2, $s2
    ctx->pc = 0x18f4c4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 18)));
    // 0x18f4c8: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x18f4c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f4cc: 0x704324c8  ppacw       $a0, $v0, $v1
    ctx->pc = 0x18f4ccu;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x18f4d0: 0xdba30010  lqc2        $vf3, 0x10($sp)
    ctx->pc = 0x18f4d0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f4d4: 0xdba20020  lqc2        $vf2, 0x20($sp)
    ctx->pc = 0x18f4d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18f4d8: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x18f4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x18f4dc: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x18f4dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x18f4e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18f4e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f4e4: 0x4be12118  vmulx.xyzw  $vf4, $vf4, $vf1x
    ctx->pc = 0x18f4e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x18f4e8: 0x4be1109a  vmulz.xyzw  $vf2, $vf2, $vf1z
    ctx->pc = 0x18f4e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x18f4ec: 0x4be118d9  vmuly.xyzw  $vf3, $vf3, $vf1y
    ctx->pc = 0x18f4ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x18f4f0: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x18f4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x18f4f4: 0xfba30010  sqc2        $vf3, 0x10($sp)
    ctx->pc = 0x18f4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x18f4f8: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x18f4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18f4fc: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x18f4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18f500: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x18f500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x18f504: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x18f504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x18f508: 0xfba300b0  sqc2        $vf3, 0xB0($sp)
    ctx->pc = 0x18f508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x18f50c: 0xfba200c0  sqc2        $vf2, 0xC0($sp)
    ctx->pc = 0x18f50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x18f510: 0xfaa40020  sqc2        $vf4, 0x20($s5)
    ctx->pc = 0x18f510u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x18f514: 0xdca4bdf8  ld          $a0, -0x4208($a1)
    ctx->pc = 0x18f514u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 4294950392)));
    // 0x18f518: 0x86a30060  lh          $v1, 0x60($s5)
    ctx->pc = 0x18f518u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x18f51c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x18f51cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f520: 0x64840001  daddiu      $a0, $a0, 0x1
    ctx->pc = 0x18f520u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
    // 0x18f524: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x18f524u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x18f528: 0x7ea20030  sq          $v0, 0x30($s5)
    ctx->pc = 0x18f528u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 48), GPR_VEC(ctx, 2));
    // 0x18f52c: 0x83300a  movz        $a2, $a0, $v1
    ctx->pc = 0x18f52cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
    // 0x18f530: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x18f530u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f534: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x18f534u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18f538: 0x7ea20040  sq          $v0, 0x40($s5)
    ctx->pc = 0x18f538u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 64), GPR_VEC(ctx, 2));
    // 0x18f53c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x18f53cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18f540: 0x7ea20050  sq          $v0, 0x50($s5)
    ctx->pc = 0x18f540u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 80), GPR_VEC(ctx, 2));
    // 0x18f544: 0xfca4bdf8  sd          $a0, -0x4208($a1)
    ctx->pc = 0x18f544u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 4294950392), GPR_U64(ctx, 4));
    // 0x18f548: 0xfea30068  sd          $v1, 0x68($s5)
    ctx->pc = 0x18f548u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 104), GPR_U64(ctx, 3));
    // 0x18f54c: 0x0  nop
    ctx->pc = 0x18f54cu;
    // NOP
label_18f550:
    // 0x18f550: 0x7bb00170  lq          $s0, 0x170($sp)
    ctx->pc = 0x18f550u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_18f554:
    // 0x18f554: 0x7bb10160  lq          $s1, 0x160($sp)
    ctx->pc = 0x18f554u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x18f558: 0x7bb20150  lq          $s2, 0x150($sp)
    ctx->pc = 0x18f558u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x18f55c: 0x7bb30140  lq          $s3, 0x140($sp)
    ctx->pc = 0x18f55cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x18f560: 0x7bb40130  lq          $s4, 0x130($sp)
    ctx->pc = 0x18f560u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f564: 0x7bb50120  lq          $s5, 0x120($sp)
    ctx->pc = 0x18f564u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x18f568: 0x7bb60110  lq          $s6, 0x110($sp)
    ctx->pc = 0x18f568u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x18f56c: 0x7bb70100  lq          $s7, 0x100($sp)
    ctx->pc = 0x18f56cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x18f570: 0x7bbe00f0  lq          $fp, 0xF0($sp)
    ctx->pc = 0x18f570u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x18f574: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x18f574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x18f578: 0x3e00008  jr          $ra
    ctx->pc = 0x18F578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F57Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F578u;
            // 0x18f57c: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18EDC0u: goto label_18edc0;
            case 0x18EF40u: goto label_18ef40;
            case 0x18EF64u: goto label_18ef64;
            case 0x18EF88u: goto label_18ef88;
            case 0x18EFA8u: goto label_18efa8;
            case 0x18EFB0u: goto label_18efb0;
            case 0x18EFB4u: goto label_18efb4;
            case 0x18F010u: goto label_18f010;
            case 0x18F048u: goto label_18f048;
            case 0x18F078u: goto label_18f078;
            case 0x18F088u: goto label_18f088;
            case 0x18F108u: goto label_18f108;
            case 0x18F110u: goto label_18f110;
            case 0x18F114u: goto label_18f114;
            case 0x18F148u: goto label_18f148;
            case 0x18F174u: goto label_18f174;
            case 0x18F1B0u: goto label_18f1b0;
            case 0x18F220u: goto label_18f220;
            case 0x18F22Cu: goto label_18f22c;
            case 0x18F238u: goto label_18f238;
            case 0x18F248u: goto label_18f248;
            case 0x18F290u: goto label_18f290;
            case 0x18F2B0u: goto label_18f2b0;
            case 0x18F2B8u: goto label_18f2b8;
            case 0x18F398u: goto label_18f398;
            case 0x18F3D0u: goto label_18f3d0;
            case 0x18F440u: goto label_18f440;
            case 0x18F44Cu: goto label_18f44c;
            case 0x18F458u: goto label_18f458;
            case 0x18F49Cu: goto label_18f49c;
            case 0x18F4B0u: goto label_18f4b0;
            case 0x18F4B4u: goto label_18f4b4;
            case 0x18F4BCu: goto label_18f4bc;
            case 0x18F550u: goto label_18f550;
            case 0x18F554u: goto label_18f554;
            case 0x18F608u: goto label_18f608;
            case 0x18F614u: goto label_18f614;
            case 0x18F624u: goto label_18f624;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18F580u;
    // 0x18f580: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18f580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18f584: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18f584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18f588: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18f588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18f58c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18f58cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f590: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x18f590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x18f594: 0x8e30004c  lw          $s0, 0x4C($s1)
    ctx->pc = 0x18f594u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x18f598: 0x52000022  beql        $s0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x18F598u;
    {
        const bool branch_taken_0x18f598 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f598) {
            ctx->pc = 0x18F59Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18F598u;
            // 0x18f59c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18F624u;
            goto label_18f624;
        }
    }
    ctx->pc = 0x18F5A0u;
    // 0x18f5a0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x18f5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x18f5a4: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x18F5A4u;
    {
        const bool branch_taken_0x18f5a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F5A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F5A4u;
            // 0x18f5a8: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f5a4) {
            ctx->pc = 0x18F614u;
            goto label_18f614;
        }
    }
    ctx->pc = 0x18F5ACu;
    // 0x18f5ac: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x18f5acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x18f5b0: 0xc04cb8e  jal         func_132E38
    ctx->pc = 0x18F5B0u;
    SET_GPR_U32(ctx, 31, 0x18F5B8u);
    ctx->pc = 0x18F5B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F5B0u;
            // 0x18f5b4: 0x8c44be04  lw          $a0, -0x41FC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950404)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132E38u;
    if (runtime->hasFunction(0x132E38u)) {
        auto targetFn = runtime->lookupFunction(0x132E38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F5B8u; }
        if (ctx->pc != 0x18F5B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132E38_0x132e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F5B8u; }
        if (ctx->pc != 0x18F5B8u) { return; }
    }
    ctx->pc = 0x18F5B8u;
    // 0x18f5b8: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x18f5b8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x18f5bc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x18f5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x18f5c0: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x18F5C0u;
    {
        const bool branch_taken_0x18f5c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f5c0) {
            ctx->pc = 0x18F5C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18F5C0u;
            // 0x18f5c4: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18F614u;
            goto label_18f614;
        }
    }
    ctx->pc = 0x18F5C8u;
    // 0x18f5c8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x18f5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x18f5cc: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x18f5ccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x18f5d0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x18f5d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x18f5d4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x18F5D4u;
    {
        const bool branch_taken_0x18f5d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F5D4u;
            // 0x18f5d8: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f5d4) {
            ctx->pc = 0x18F608u;
            goto label_18f608;
        }
    }
    ctx->pc = 0x18F5DCu;
    // 0x18f5dc: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x18f5dcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18f5e0: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x18f5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x18f5e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18f5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18f5e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x18f5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18f5ec: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x18f5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f5f0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x18f5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x18f5f4: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x18f5f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x18f5f8: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x18f5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x18f5fc: 0x40f809  jalr        $v0
    ctx->pc = 0x18F5FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18F604u);
        ctx->pc = 0x18F600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F5FCu;
            // 0x18f600: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18F604u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18EDC0u: goto label_18edc0;
            case 0x18EF40u: goto label_18ef40;
            case 0x18EF64u: goto label_18ef64;
            case 0x18EF88u: goto label_18ef88;
            case 0x18EFA8u: goto label_18efa8;
            case 0x18EFB0u: goto label_18efb0;
            case 0x18EFB4u: goto label_18efb4;
            case 0x18F010u: goto label_18f010;
            case 0x18F048u: goto label_18f048;
            case 0x18F078u: goto label_18f078;
            case 0x18F088u: goto label_18f088;
            case 0x18F108u: goto label_18f108;
            case 0x18F110u: goto label_18f110;
            case 0x18F114u: goto label_18f114;
            case 0x18F148u: goto label_18f148;
            case 0x18F174u: goto label_18f174;
            case 0x18F1B0u: goto label_18f1b0;
            case 0x18F220u: goto label_18f220;
            case 0x18F22Cu: goto label_18f22c;
            case 0x18F238u: goto label_18f238;
            case 0x18F248u: goto label_18f248;
            case 0x18F290u: goto label_18f290;
            case 0x18F2B0u: goto label_18f2b0;
            case 0x18F2B8u: goto label_18f2b8;
            case 0x18F398u: goto label_18f398;
            case 0x18F3D0u: goto label_18f3d0;
            case 0x18F440u: goto label_18f440;
            case 0x18F44Cu: goto label_18f44c;
            case 0x18F458u: goto label_18f458;
            case 0x18F49Cu: goto label_18f49c;
            case 0x18F4B0u: goto label_18f4b0;
            case 0x18F4B4u: goto label_18f4b4;
            case 0x18F4BCu: goto label_18f4bc;
            case 0x18F550u: goto label_18f550;
            case 0x18F554u: goto label_18f554;
            case 0x18F608u: goto label_18f608;
            case 0x18F614u: goto label_18f614;
            case 0x18F624u: goto label_18f624;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18F604u; }
            if (ctx->pc != 0x18F604u) { return; }
        }
        }
    }
    ctx->pc = 0x18F604u;
    // 0x18f604: 0x0  nop
    ctx->pc = 0x18f604u;
    // NOP
label_18f608:
    // 0x18f608: 0xc04c9da  jal         func_132768
    ctx->pc = 0x18F608u;
    SET_GPR_U32(ctx, 31, 0x18F610u);
    ctx->pc = 0x18F60Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F608u;
            // 0x18f60c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132768u;
    if (runtime->hasFunction(0x132768u)) {
        auto targetFn = runtime->lookupFunction(0x132768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F610u; }
        if (ctx->pc != 0x18F610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132768_0x132768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F610u; }
        if (ctx->pc != 0x18F610u) { return; }
    }
    ctx->pc = 0x18F610u;
    // 0x18f610: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x18f610u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_18f614:
    // 0x18f614: 0xc063ab0  jal         func_18EAC0
    ctx->pc = 0x18F614u;
    SET_GPR_U32(ctx, 31, 0x18F61Cu);
    ctx->pc = 0x18F618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F614u;
            // 0x18f618: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18EAC0u;
    if (runtime->hasFunction(0x18EAC0u)) {
        auto targetFn = runtime->lookupFunction(0x18EAC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F61Cu; }
        if (ctx->pc != 0x18F61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_18eac0_0x18eae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F61Cu; }
        if (ctx->pc != 0x18F61Cu) { return; }
    }
    ctx->pc = 0x18F61Cu;
    // 0x18f61c: 0xae20004c  sw          $zero, 0x4C($s1)
    ctx->pc = 0x18f61cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
    // 0x18f620: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x18f620u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18f624:
    // 0x18f624: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18f624u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f628: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18f628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f62c: 0x3e00008  jr          $ra
    ctx->pc = 0x18F62Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F62Cu;
            // 0x18f630: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18EDC0u: goto label_18edc0;
            case 0x18EF40u: goto label_18ef40;
            case 0x18EF64u: goto label_18ef64;
            case 0x18EF88u: goto label_18ef88;
            case 0x18EFA8u: goto label_18efa8;
            case 0x18EFB0u: goto label_18efb0;
            case 0x18EFB4u: goto label_18efb4;
            case 0x18F010u: goto label_18f010;
            case 0x18F048u: goto label_18f048;
            case 0x18F078u: goto label_18f078;
            case 0x18F088u: goto label_18f088;
            case 0x18F108u: goto label_18f108;
            case 0x18F110u: goto label_18f110;
            case 0x18F114u: goto label_18f114;
            case 0x18F148u: goto label_18f148;
            case 0x18F174u: goto label_18f174;
            case 0x18F1B0u: goto label_18f1b0;
            case 0x18F220u: goto label_18f220;
            case 0x18F22Cu: goto label_18f22c;
            case 0x18F238u: goto label_18f238;
            case 0x18F248u: goto label_18f248;
            case 0x18F290u: goto label_18f290;
            case 0x18F2B0u: goto label_18f2b0;
            case 0x18F2B8u: goto label_18f2b8;
            case 0x18F398u: goto label_18f398;
            case 0x18F3D0u: goto label_18f3d0;
            case 0x18F440u: goto label_18f440;
            case 0x18F44Cu: goto label_18f44c;
            case 0x18F458u: goto label_18f458;
            case 0x18F49Cu: goto label_18f49c;
            case 0x18F4B0u: goto label_18f4b0;
            case 0x18F4B4u: goto label_18f4b4;
            case 0x18F4BCu: goto label_18f4bc;
            case 0x18F550u: goto label_18f550;
            case 0x18F554u: goto label_18f554;
            case 0x18F608u: goto label_18f608;
            case 0x18F614u: goto label_18f614;
            case 0x18F624u: goto label_18f624;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18F634u;
    // 0x18f634: 0x0  nop
    ctx->pc = 0x18f634u;
    // NOP
}
