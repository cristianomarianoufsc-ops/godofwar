#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_171270
// Address: 0x171270 - 0x171370
void entry_171270_0x171370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_171270_0x171370");
#endif

    ctx->pc = 0x171270u;

    // 0x171270: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x171270u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171274: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x171274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x171278: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x171278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x17127c: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x17127cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x171280: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x171280u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x171284: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x171284u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x171288: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x171288u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x17128c: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x17128cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x171290: 0x4be2033c  vmove.xyzw  $vf2, $vf0
    ctx->pc = 0x171290u;
    ctx->vu0_vf[2] = ctx->vu0_vf[0];
    // 0x171294: 0x4be3133d  vmr32.xyzw  $vf3, $vf2
    ctx->pc = 0x171294u;
    ctx->vu0_vf[3] = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,1));
    // 0x171298: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x171298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x17129c: 0x4be11b3d  vmr32.xyzw  $vf1, $vf3
    ctx->pc = 0x17129cu;
    ctx->vu0_vf[1] = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,1));
    // 0x1712a0: 0xfba30010  sqc2        $vf3, 0x10($sp)
    ctx->pc = 0x1712a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1712a4: 0x4be40b3d  vmr32.xyzw  $vf4, $vf1
    ctx->pc = 0x1712a4u;
    ctx->vu0_vf[4] = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,1));
    // 0x1712a8: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1712a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1712ac: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1712acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1712b0: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x1712b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1712b4: 0xf8440010  sqc2        $vf4, 0x10($v0)
    ctx->pc = 0x1712b4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1712b8: 0xf8620030  sqc2        $vf2, 0x30($v1)
    ctx->pc = 0x1712b8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1712bc: 0xf8610010  sqc2        $vf1, 0x10($v1)
    ctx->pc = 0x1712bcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1712c0: 0xf8630020  sqc2        $vf3, 0x20($v1)
    ctx->pc = 0x1712c0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1712c4: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x1712c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1712c8: 0xfba30050  sqc2        $vf3, 0x50($sp)
    ctx->pc = 0x1712c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1712cc: 0x24430090  addiu       $v1, $v0, 0x90
    ctx->pc = 0x1712ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x1712d0: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1712d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1712d4: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1712d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1712d8: 0xf8440050  sqc2        $vf4, 0x50($v0)
    ctx->pc = 0x1712d8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1712dc: 0xf8820030  sqc2        $vf2, 0x30($a0)
    ctx->pc = 0x1712dcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1712e0: 0xf8810010  sqc2        $vf1, 0x10($a0)
    ctx->pc = 0x1712e0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1712e4: 0xf8830020  sqc2        $vf3, 0x20($a0)
    ctx->pc = 0x1712e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1712e8: 0xfba20080  sqc2        $vf2, 0x80($sp)
    ctx->pc = 0x1712e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1712ec: 0xf8440090  sqc2        $vf4, 0x90($v0)
    ctx->pc = 0x1712ecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1712f0: 0xfba30090  sqc2        $vf3, 0x90($sp)
    ctx->pc = 0x1712f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1712f4: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x1712f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1712f8: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x1712f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1712fc: 0xf8620030  sqc2        $vf2, 0x30($v1)
    ctx->pc = 0x1712fcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x171300: 0xf8610010  sqc2        $vf1, 0x10($v1)
    ctx->pc = 0x171300u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x171304: 0xf8630020  sqc2        $vf3, 0x20($v1)
    ctx->pc = 0x171304u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x171308: 0x3e00008  jr          $ra
    ctx->pc = 0x171308u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17130Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171308u;
            // 0x17130c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171364u: goto label_171364;
            default: break;
        }
        return;
    }
    ctx->pc = 0x171310u;
    // 0x171310: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x171310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x171314: 0x0  nop
    ctx->pc = 0x171314u;
    // NOP
    // 0x171318: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x171318u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17131c: 0x10450011  beq         $v0, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x17131Cu;
    {
        const bool branch_taken_0x17131c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x17131c) {
            ctx->pc = 0x171364u;
            goto label_171364;
        }
    }
    ctx->pc = 0x171324u;
    // 0x171324: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x171324u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171328: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x171328u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17132c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x17132cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x171330: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x171330u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x171334: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x171334u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x171338: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x171338u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17133c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x17133cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x171340: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x171340u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x171344: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x171344u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x171348: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x171348u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17134c: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x17134cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x171350: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x171350u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x171354: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x171354u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x171358: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x171358u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x17135c: 0x3e00008  jr          $ra
    ctx->pc = 0x17135Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171364u: goto label_171364;
            default: break;
        }
        return;
    }
    ctx->pc = 0x171364u;
label_171364:
    // 0x171364: 0x3e00008  jr          $ra
    ctx->pc = 0x171364u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171364u: goto label_171364;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17136Cu;
    // 0x17136c: 0x0  nop
    ctx->pc = 0x17136cu;
    // NOP
}
