#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00202510
// Address: 0x202510 - 0x2026a0
void sub_00202510_0x202510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202510_0x202510");
#endif

    ctx->pc = 0x202510u;

    // 0x202510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x202510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x202514: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x202514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x202518: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x202518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20251c: 0xc08235e  jal         func_208D78
    ctx->pc = 0x20251Cu;
    SET_GPR_U32(ctx, 31, 0x202524u);
    ctx->pc = 0x202520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20251Cu;
            // 0x202520: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208D78u;
    if (runtime->hasFunction(0x208D78u)) {
        auto targetFn = runtime->lookupFunction(0x208D78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202524u; }
        if (ctx->pc != 0x202524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00208D78_0x208d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202524u; }
        if (ctx->pc != 0x202524u) { return; }
    }
    ctx->pc = 0x202524u;
    // 0x202524: 0x260301c0  addiu       $v1, $s0, 0x1C0
    ctx->pc = 0x202524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    // 0x202528: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x202528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x20252c: 0xa0620005  sb          $v0, 0x5($v1)
    ctx->pc = 0x20252cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x202530: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x202530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202534: 0xa0600006  sb          $zero, 0x6($v1)
    ctx->pc = 0x202534u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x202538: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x202538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x20253c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20253cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x202540: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x202540u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202544: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x202544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x202548: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x202548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x20254c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x20254cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x202550: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x202550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x202554: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x202554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x202558: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x202558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x20255c: 0xfe000068  sd          $zero, 0x68($s0)
    ctx->pc = 0x20255cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 104), GPR_U64(ctx, 0));
    // 0x202560: 0xfe000070  sd          $zero, 0x70($s0)
    ctx->pc = 0x202560u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 112), GPR_U64(ctx, 0));
    // 0x202564: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x202564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x202568: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x202568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x20256c: 0xae0001b4  sw          $zero, 0x1B4($s0)
    ctx->pc = 0x20256cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 0));
    // 0x202570: 0xae0001b8  sw          $zero, 0x1B8($s0)
    ctx->pc = 0x202570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 0));
    // 0x202574: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x202574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x202578: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x202578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x20257c: 0xae020098  sw          $v0, 0x98($s0)
    ctx->pc = 0x20257cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
    // 0x202580: 0xc082436  jal         func_2090D8
    ctx->pc = 0x202580u;
    SET_GPR_U32(ctx, 31, 0x202588u);
    ctx->pc = 0x202584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202580u;
            // 0x202584: 0xe6000030  swc1        $f0, 0x30($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2090D8u;
    if (runtime->hasFunction(0x2090D8u)) {
        auto targetFn = runtime->lookupFunction(0x2090D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202588u; }
        if (ctx->pc != 0x202588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2090d8_0x209100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202588u; }
        if (ctx->pc != 0x202588u) { return; }
    }
    ctx->pc = 0x202588u;
    // 0x202588: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x202588u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20258c: 0xfa010010  sqc2        $vf1, 0x10($s0)
    ctx->pc = 0x20258cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x202590: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x202590u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x202594: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x202594u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202598: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x202598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20259c: 0x3e00008  jr          $ra
    ctx->pc = 0x20259Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2025A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20259Cu;
            // 0x2025a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x202608u: goto label_202608;
            case 0x202638u: goto label_202638;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2025A4u;
    // 0x2025a4: 0x0  nop
    ctx->pc = 0x2025a4u;
    // NOP
    // 0x2025a8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2025a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2025ac: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2025acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2025b0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2025b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2025b4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x2025b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x2025b8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2025b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2025bc: 0x24517790  addiu       $s1, $v0, 0x7790
    ctx->pc = 0x2025bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 30608));
    // 0x2025c0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2025c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2025c4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2025c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2025c8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2025c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2025cc: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2025ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2025d0: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x2025d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x2025d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2025d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2025d8: 0x8c645e80  lw          $a0, 0x5E80($v1)
    ctx->pc = 0x2025d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24192)));
    // 0x2025dc: 0x8e320024  lw          $s2, 0x24($s1)
    ctx->pc = 0x2025dcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2025e0: 0x8e25002c  lw          $a1, 0x2C($s1)
    ctx->pc = 0x2025e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x2025e4: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x2025e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2025e8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2025e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2025ec: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2025ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2025f0: 0x16060005  bne         $s0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2025F0u;
    {
        const bool branch_taken_0x2025f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 6));
        ctx->pc = 0x2025F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2025F0u;
            // 0x2025f4: 0x96360034  lhu         $s6, 0x34($s1) (Delay Slot)
        SET_GPR_U32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2025f0) {
            ctx->pc = 0x202608u;
            goto label_202608;
        }
    }
    ctx->pc = 0x2025F8u;
    // 0x2025f8: 0x8e4200f4  lw          $v0, 0xF4($s2)
    ctx->pc = 0x2025f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 244)));
    // 0x2025fc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2025fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x202600: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x202600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x202604: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x202604u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_202608:
    // 0x202608: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x202608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x20260c: 0x8c53f184  lw          $s3, -0xE7C($v0)
    ctx->pc = 0x20260cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963588)));
    // 0x202610: 0x8e340030  lw          $s4, 0x30($s1)
    ctx->pc = 0x202610u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x202614: 0x2841021  addu        $v0, $s4, $a0
    ctx->pc = 0x202614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x202618: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x202618u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20261c: 0x15060006  bne         $t0, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x20261Cu;
    {
        const bool branch_taken_0x20261c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 6));
        ctx->pc = 0x202620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20261Cu;
            // 0x202620: 0x96350036  lhu         $s5, 0x36($s1) (Delay Slot)
        SET_GPR_U32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 54)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20261c) {
            ctx->pc = 0x202638u;
            goto label_202638;
        }
    }
    ctx->pc = 0x202624u;
    // 0x202624: 0x8e4200f4  lw          $v0, 0xF4($s2)
    ctx->pc = 0x202624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 244)));
    // 0x202628: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x202628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20262c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x20262cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x202630: 0x62400b  movn        $t0, $v1, $v0
    ctx->pc = 0x202630u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
    // 0x202634: 0x0  nop
    ctx->pc = 0x202634u;
    // NOP
label_202638:
    // 0x202638: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x202638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20263c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x20263cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202640: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x202640u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202644: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x202644u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202648: 0xc080bd2  jal         func_202F48
    ctx->pc = 0x202648u;
    SET_GPR_U32(ctx, 31, 0x202650u);
    ctx->pc = 0x20264Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202648u;
            // 0x20264c: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x202F48u;
    if (runtime->hasFunction(0x202F48u)) {
        auto targetFn = runtime->lookupFunction(0x202F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202650u; }
        if (ctx->pc != 0x202650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00202F48_0x202f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202650u; }
        if (ctx->pc != 0x202650u) { return; }
    }
    ctx->pc = 0x202650u;
    // 0x202650: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x202650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202654: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x202654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202658: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x202658u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20265c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x20265cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202660: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x202660u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202664: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x202664u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202668: 0xc080bd2  jal         func_202F48
    ctx->pc = 0x202668u;
    SET_GPR_U32(ctx, 31, 0x202670u);
    ctx->pc = 0x20266Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202668u;
            // 0x20266c: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x202F48u;
    if (runtime->hasFunction(0x202F48u)) {
        auto targetFn = runtime->lookupFunction(0x202F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202670u; }
        if (ctx->pc != 0x202670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00202F48_0x202f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202670u; }
        if (ctx->pc != 0x202670u) { return; }
    }
    ctx->pc = 0x202670u;
    // 0x202670: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x202670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x202674: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x202674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x202678: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x202678u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20267c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x20267cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x202680: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x202680u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x202684: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x202684u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x202688: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x202688u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20268c: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x20268cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202690: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x202690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202694: 0x3e00008  jr          $ra
    ctx->pc = 0x202694u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202694u;
            // 0x202698: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x202608u: goto label_202608;
            case 0x202638u: goto label_202638;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20269Cu;
    // 0x20269c: 0x0  nop
    ctx->pc = 0x20269cu;
    // NOP
}
