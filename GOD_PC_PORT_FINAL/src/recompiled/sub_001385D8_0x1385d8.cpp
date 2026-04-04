#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001385D8
// Address: 0x1385d8 - 0x138708
void sub_001385D8_0x1385d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001385D8_0x1385d8");
#endif

    ctx->pc = 0x1385d8u;

    // 0x1385d8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1385d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1385dc: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1385dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1385e0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1385e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1385e4: 0x70058ca9  por         $s1, $zero, $a1
    ctx->pc = 0x1385e4u;
    SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 5)));
    // 0x1385e8: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1385e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x1385ec: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1385ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1385f0: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x1385f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x1385f4: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x1385f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1385f8: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x1385f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x1385fc: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1385fcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138600: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x138600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x138604: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x138604u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138608: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x138608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x13860c: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x13860cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138610: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x138610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x138614: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x138614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x138618: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x138618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13861c: 0x7eb10000  sq          $s1, 0x0($s5)
    ctx->pc = 0x13861cu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 17));
    // 0x138620: 0x4be000ec  vsub.xyzw   $vf3, $vf0, $vf0
    ctx->pc = 0x138620u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x138624: 0x3c02749d  lui         $v0, 0x749D
    ctx->pc = 0x138624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29853 << 16));
    // 0x138628: 0x3442c5ae  ori         $v0, $v0, 0xC5AE
    ctx->pc = 0x138628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50606);
    // 0x13862c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x13862cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x138630: 0x48b10800  qmtc2.ni    $s1, $vf1
    ctx->pc = 0x138630u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 17));
    // 0x138634: 0x4a221840  vaddx.w     $vf1, $vf3, $vf2x
    ctx->pc = 0x138634u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x138638: 0xfaa10000  sqc2        $vf1, 0x0($s5)
    ctx->pc = 0x138638u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13863c: 0x2e0902d  daddu       $s2, $s7, $zero
    ctx->pc = 0x13863cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138640: 0x6e0001b  bltz        $s7, . + 4 + (0x1B << 2)
    ctx->pc = 0x138640u;
    {
        const bool branch_taken_0x138640 = (GPR_S32(ctx, 23) < 0);
        ctx->pc = 0x138644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138640u;
            // 0x138644: 0x2c0a02d  daddu       $s4, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138640) {
            ctx->pc = 0x1386B0u;
            goto label_1386b0;
        }
    }
    ctx->pc = 0x138648u;
    // 0x138648: 0x96620086  lhu         $v0, 0x86($s3)
    ctx->pc = 0x138648u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 134)));
    // 0x13864c: 0x12820019  beq         $s4, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x13864Cu;
    {
        const bool branch_taken_0x13864c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x138650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13864Cu;
            // 0x138650: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13864c) {
            ctx->pc = 0x1386B4u;
            goto label_1386b4;
        }
    }
    ctx->pc = 0x138654u;
    // 0x138654: 0x8e620058  lw          $v0, 0x58($s3)
    ctx->pc = 0x138654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_138658:
    // 0x138658: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x138658u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x13865c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13865cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x138660: 0x84700008  lh          $s0, 0x8($v1)
    ctx->pc = 0x138660u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x138664: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x138664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x138668: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x138668u;
    {
        const bool branch_taken_0x138668 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x13866Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138668u;
            // 0x13866c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138668) {
            ctx->pc = 0x138698u;
            goto label_138698;
        }
    }
    ctx->pc = 0x138670u;
    // 0x138670: 0x70112ca9  por         $a1, $zero, $s1
    ctx->pc = 0x138670u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 17)));
    // 0x138674: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x138674u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138678: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x138678u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13867c: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x13867cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138680: 0xc04e0ea  jal         func_1383A8
    ctx->pc = 0x138680u;
    SET_GPR_U32(ctx, 31, 0x138688u);
    ctx->pc = 0x138684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138680u;
            // 0x138684: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1383A8u;
    if (runtime->hasFunction(0x1383A8u)) {
        auto targetFn = runtime->lookupFunction(0x1383A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138688u; }
        if (ctx->pc != 0x138688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1383a8_0x1384e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138688u; }
        if (ctx->pc != 0x138688u) { return; }
    }
    ctx->pc = 0x138688u;
    // 0x138688: 0x202a00b  movn        $s4, $s0, $v0
    ctx->pc = 0x138688u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 16));
    // 0x13868c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13868Cu;
    {
        const bool branch_taken_0x13868c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13868Cu;
            // 0x138690: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13868c) {
            ctx->pc = 0x13869Cu;
            goto label_13869c;
        }
    }
    ctx->pc = 0x138694u;
    // 0x138694: 0x0  nop
    ctx->pc = 0x138694u;
    // NOP
label_138698:
    // 0x138698: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x138698u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_13869c:
    // 0x13869c: 0x6400005  bltz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x13869Cu;
    {
        const bool branch_taken_0x13869c = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x1386A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13869Cu;
            // 0x1386a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13869c) {
            ctx->pc = 0x1386B4u;
            goto label_1386b4;
        }
    }
    ctx->pc = 0x1386A4u;
    // 0x1386a4: 0x96620086  lhu         $v0, 0x86($s3)
    ctx->pc = 0x1386a4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 134)));
    // 0x1386a8: 0x54c2ffeb  bnel        $a2, $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1386A8u;
    {
        const bool branch_taken_0x1386a8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1386a8) {
            ctx->pc = 0x1386ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1386A8u;
            // 0x1386ac: 0x8e620058  lw          $v0, 0x58($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x138658u;
            runtime->cooperativeGuestYield();
            goto label_138658;
        }
    }
    ctx->pc = 0x1386B0u;
label_1386b0:
    // 0x1386b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1386b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1386b4:
    // 0x1386b4: 0x70112ca9  por         $a1, $zero, $s1
    ctx->pc = 0x1386b4u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 17)));
    // 0x1386b8: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1386b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1386bc: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x1386bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1386c0: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x1386c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1386c4: 0xc04e13a  jal         func_1384E8
    ctx->pc = 0x1386C4u;
    SET_GPR_U32(ctx, 31, 0x1386CCu);
    ctx->pc = 0x1386C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1386C4u;
            // 0x1386c8: 0x3c0482d  daddu       $t1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1384E8u;
    if (runtime->hasFunction(0x1384E8u)) {
        auto targetFn = runtime->lookupFunction(0x1384E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1386CCu; }
        if (ctx->pc != 0x1386CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001384E8_0x1384e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1386CCu; }
        if (ctx->pc != 0x1386CCu) { return; }
    }
    ctx->pc = 0x1386CCu;
    // 0x1386cc: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x1386ccu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x1386d0: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1386d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1386d4: 0x283100a  movz        $v0, $s4, $v1
    ctx->pc = 0x1386d4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 20));
    // 0x1386d8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1386d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1386dc: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1386dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1386e0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1386e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1386e4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1386e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1386e8: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x1386e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1386ec: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x1386ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1386f0: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x1386f0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1386f4: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x1386f4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1386f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1386f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1386fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1386FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1386FCu;
            // 0x138700: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x138658u: goto label_138658;
            case 0x138698u: goto label_138698;
            case 0x13869Cu: goto label_13869c;
            case 0x1386B0u: goto label_1386b0;
            case 0x1386B4u: goto label_1386b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x138704u;
    // 0x138704: 0x0  nop
    ctx->pc = 0x138704u;
    // NOP
}
