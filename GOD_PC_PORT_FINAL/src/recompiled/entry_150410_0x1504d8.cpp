#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_150410
// Address: 0x150410 - 0x1504d8
void entry_150410_0x1504d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_150410_0x1504d8");
#endif

    ctx->pc = 0x150410u;

    // 0x150410: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x150410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x150414: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x150414u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150418: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x150418u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15041c: 0x0  nop
    ctx->pc = 0x15041cu;
    // NOP
    // 0x150420: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x150420u;
    {
        const bool branch_taken_0x150420 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x150424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150420u;
            // 0x150424: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150420) {
            ctx->pc = 0x150454u;
            goto label_150454;
        }
    }
    ctx->pc = 0x150428u;
    // 0x150428: 0xdd0200c0  ld          $v0, 0xC0($t0)
    ctx->pc = 0x150428u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 192)));
    // 0x15042c: 0x3c03fffd  lui         $v1, 0xFFFD
    ctx->pc = 0x15042cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65533 << 16));
    // 0x150430: 0x3463fffb  ori         $v1, $v1, 0xFFFB
    ctx->pc = 0x150430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65531);
    // 0x150434: 0x250400c0  addiu       $a0, $t0, 0xC0
    ctx->pc = 0x150434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 192));
    // 0x150438: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x150438u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x15043c: 0x34a50004  ori         $a1, $a1, 0x4
    ctx->pc = 0x15043cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4);
    // 0x150440: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x150440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x150444: 0xfd0200c0  sd          $v0, 0xC0($t0)
    ctx->pc = 0x150444u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 192), GPR_U64(ctx, 2));
    // 0x150448: 0xdc820008  ld          $v0, 0x8($a0)
    ctx->pc = 0x150448u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x15044c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x15044Cu;
    {
        const bool branch_taken_0x15044c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15044Cu;
            // 0x150450: 0x451025  or          $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15044c) {
            ctx->pc = 0x1504B4u;
            goto label_1504b4;
        }
    }
    ctx->pc = 0x150454u;
label_150454:
    // 0x150454: 0xdd0200c0  ld          $v0, 0xC0($t0)
    ctx->pc = 0x150454u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 192)));
    // 0x150458: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x150458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x15045c: 0x250400c0  addiu       $a0, $t0, 0xC0
    ctx->pc = 0x15045cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 192));
    // 0x150460: 0x3c05fffd  lui         $a1, 0xFFFD
    ctx->pc = 0x150460u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65533 << 16));
    // 0x150464: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x150464u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x150468: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x150468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x15046c: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x15046cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x150470: 0xfd0200c0  sd          $v0, 0xC0($t0)
    ctx->pc = 0x150470u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 192), GPR_U64(ctx, 2));
    // 0x150474: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x150474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x150478: 0x2407efff  addiu       $a3, $zero, -0x1001
    ctx->pc = 0x150478u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x15047c: 0xdc820008  ld          $v0, 0x8($a0)
    ctx->pc = 0x15047cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x150480: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x150480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x150484: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x150484u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x150488: 0xdd0200c0  ld          $v0, 0xC0($t0)
    ctx->pc = 0x150488u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 192)));
    // 0x15048c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x15048cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x150490: 0xfd0200c0  sd          $v0, 0xC0($t0)
    ctx->pc = 0x150490u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 192), GPR_U64(ctx, 2));
    // 0x150494: 0xdc820008  ld          $v0, 0x8($a0)
    ctx->pc = 0x150494u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x150498: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x150498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x15049c: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x15049cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x1504a0: 0xdd0200c0  ld          $v0, 0xC0($t0)
    ctx->pc = 0x1504a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 192)));
    // 0x1504a4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1504a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1504a8: 0xfd0200c0  sd          $v0, 0xC0($t0)
    ctx->pc = 0x1504a8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 192), GPR_U64(ctx, 2));
    // 0x1504ac: 0xdc820008  ld          $v0, 0x8($a0)
    ctx->pc = 0x1504acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1504b0: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x1504b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
label_1504b4:
    // 0x1504b4: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x1504b4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x1504b8: 0x4be000ec  vsub.xyzw   $vf3, $vf0, $vf0
    ctx->pc = 0x1504b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1504bc: 0x44036000  mfc1        $v1, $f12
    ctx->pc = 0x1504bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1504c0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1504c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1504c4: 0xd90100b0  lqc2        $vf1, 0xB0($t0)
    ctx->pc = 0x1504c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 176)));
    // 0x1504c8: 0x4a221840  vaddx.w     $vf1, $vf3, $vf2x
    ctx->pc = 0x1504c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1504cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1504CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1504D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1504CCu;
            // 0x1504d0: 0xf90100b0  sqc2        $vf1, 0xB0($t0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 8), 176), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x150454u: goto label_150454;
            case 0x1504B4u: goto label_1504b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1504D4u;
    // 0x1504d4: 0x0  nop
    ctx->pc = 0x1504d4u;
    // NOP
}
