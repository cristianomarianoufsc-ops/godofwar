#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014C4E8
// Address: 0x14c4e8 - 0x14c8f8
void sub_0014C4E8_0x14c4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014C4E8_0x14c4e8");
#endif

    ctx->pc = 0x14c4e8u;

    // 0x14c4e8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x14c4e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x14c4ec: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x14c4ecu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c4f0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x14c4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x14c4f4: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x14c4f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x14c4f8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x14c4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x14c4fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14c4fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c500: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x14c500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x14c504: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x14c504u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14c508: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14c508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14c50c: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x14c50cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x14c510: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x14c510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x14c514: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14c514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14c518: 0xa6070004  sh          $a3, 0x4($s0)
    ctx->pc = 0x14c518u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x14c51c: 0x8d640014  lw          $a0, 0x14($t3)
    ctx->pc = 0x14c51cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 20)));
    // 0x14c520: 0x8d630008  lw          $v1, 0x8($t3)
    ctx->pc = 0x14c520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x14c524: 0x8d650000  lw          $a1, 0x0($t3)
    ctx->pc = 0x14c524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x14c528: 0x64001b  divu        $zero, $v1, $a0
    ctx->pc = 0x14c528u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x14c52c: 0x8d660004  lw          $a2, 0x4($t3)
    ctx->pc = 0x14c52cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x14c530: 0x51402  srl         $v0, $a1, 16
    ctx->pc = 0x14c530u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x14c534: 0xa6050000  sh          $a1, 0x0($s0)
    ctx->pc = 0x14c534u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x14c538: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x14c538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x14c53c: 0xa6060014  sh          $a2, 0x14($s0)
    ctx->pc = 0x14c53cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 6));
    // 0x14c540: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x14c540u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x14c544: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x14c544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x14c548: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x14c548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x14c54c: 0xa6030016  sh          $v1, 0x16($s0)
    ctx->pc = 0x14c54cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 3));
    // 0x14c550: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x14C550u;
    {
        const bool branch_taken_0x14c550 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c550) {
            ctx->pc = 0x14C554u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14C550u;
            // 0x14c554: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14C558u;
            goto label_14c558;
        }
    }
    ctx->pc = 0x14C558u;
label_14c558:
    // 0x14c558: 0x8d620010  lw          $v0, 0x10($t3)
    ctx->pc = 0x14c558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x14c55c: 0xa604001c  sh          $a0, 0x1C($s0)
    ctx->pc = 0x14c55cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 4));
    // 0x14c560: 0xa2090030  sb          $t1, 0x30($s0)
    ctx->pc = 0x14c560u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 9));
    // 0x14c564: 0xa2080031  sb          $t0, 0x31($s0)
    ctx->pc = 0x14c564u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 49), (uint8_t)GPR_U32(ctx, 8));
    // 0x14c568: 0xa202002a  sb          $v0, 0x2A($s0)
    ctx->pc = 0x14c568u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 42), (uint8_t)GPR_U32(ctx, 2));
    // 0x14c56c: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x14c56cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x14c570: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x14c570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x14c574: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x14c574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x14c578: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x14c578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x14c57c: 0x5012  mflo        $t2
    ctx->pc = 0x14c57cu;
    SET_GPR_U64(ctx, 10, ctx->lo);
    // 0x14c580: 0xa60a001a  sh          $t2, 0x1A($s0)
    ctx->pc = 0x14c580u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 10));
    // 0x14c584: 0xa6000042  sh          $zero, 0x42($s0)
    ctx->pc = 0x14c584u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 66), (uint16_t)GPR_U32(ctx, 0));
    // 0x14c588: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x14c588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14c58c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x14c58cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14c590: 0x30c4ffff  andi        $a0, $a2, 0xFFFF
    ctx->pc = 0x14c590u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x14c594: 0x3142ffff  andi        $v0, $t2, 0xFFFF
    ctx->pc = 0x14c594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x14c598: 0x25720018  addiu       $s2, $t3, 0x18
    ctx->pc = 0x14c598u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 11), 24));
    // 0x14c59c: 0xa6000040  sh          $zero, 0x40($s0)
    ctx->pc = 0x14c59cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 64), (uint16_t)GPR_U32(ctx, 0));
    // 0x14c5a0: 0x82a018  mult        $s4, $a0, $v0
    ctx->pc = 0x14c5a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
    // 0x14c5a4: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x14c5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x14c5a8: 0xa6000024  sh          $zero, 0x24($s0)
    ctx->pc = 0x14c5a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x14c5ac: 0xa6000022  sh          $zero, 0x22($s0)
    ctx->pc = 0x14c5acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x14c5b0: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x14c5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x14c5b4: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x14c5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x14c5b8: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14C5B8u;
    {
        const bool branch_taken_0x14c5b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x14C5BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C5B8u;
            // 0x14c5bc: 0xae000054  sw          $zero, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c5b8) {
            ctx->pc = 0x14C5D0u;
            goto label_14c5d0;
        }
    }
    ctx->pc = 0x14C5C0u;
    // 0x14c5c0: 0x41042  srl         $v0, $a0, 1
    ctx->pc = 0x14c5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x14c5c4: 0x14a043  sra         $s4, $s4, 1
    ctx->pc = 0x14c5c4u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 20), 1));
    // 0x14c5c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14C5C8u;
    {
        const bool branch_taken_0x14c5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C5C8u;
            // 0x14c5cc: 0xa602002e  sh          $v0, 0x2E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 46), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c5c8) {
            ctx->pc = 0x14C5E0u;
            goto label_14c5e0;
        }
    }
    ctx->pc = 0x14C5D0u;
label_14c5d0:
    // 0x14c5d0: 0x510c2  srl         $v0, $a1, 3
    ctx->pc = 0x14c5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
    // 0x14c5d4: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x14c5d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x14c5d8: 0x282a018  mult        $s4, $s4, $v0
    ctx->pc = 0x14c5d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
    // 0x14c5dc: 0xa603002e  sh          $v1, 0x2E($s0)
    ctx->pc = 0x14c5dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 46), (uint16_t)GPR_U32(ctx, 3));
label_14c5e0:
    // 0x14c5e0: 0x96020014  lhu         $v0, 0x14($s0)
    ctx->pc = 0x14c5e0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x14c5e4: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x14c5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x14c5e8: 0x9604001a  lhu         $a0, 0x1A($s0)
    ctx->pc = 0x14c5e8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x14c5ec: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x14c5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14c5f0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14c5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14c5f4: 0x96060014  lhu         $a2, 0x14($s0)
    ctx->pc = 0x14c5f4u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x14c5f8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x14c5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x14c5fc: 0x70401004  plzcw       $v0, $v0
    ctx->pc = 0x14c5fcu;
    { uint64_t v = GPR_U64(ctx, 2); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 2, out); }
    // 0x14c600: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x14c600u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14c604: 0x70802004  plzcw       $a0, $a0
    ctx->pc = 0x14c604u;
    { uint64_t v = GPR_U64(ctx, 4); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 4, out); }
    // 0x14c608: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x14c608u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14c60c: 0x24c6003f  addiu       $a2, $a2, 0x3F
    ctx->pc = 0x14c60cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 63));
    // 0x14c610: 0xa2202a  slt         $a0, $a1, $v0
    ctx->pc = 0x14c610u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14c614: 0x63183  sra         $a2, $a2, 6
    ctx->pc = 0x14c614u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 6));
    // 0x14c618: 0xa3282a  slt         $a1, $a1, $v1
    ctx->pc = 0x14c618u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14c61c: 0x4100a  movz        $v0, $zero, $a0
    ctx->pc = 0x14c61cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x14c620: 0x5180a  movz        $v1, $zero, $a1
    ctx->pc = 0x14c620u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x14c624: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14c624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14c628: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14c628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14c62c: 0xa2020028  sb          $v0, 0x28($s0)
    ctx->pc = 0x14c62cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 2));
    // 0x14c630: 0xa2030029  sb          $v1, 0x29($s0)
    ctx->pc = 0x14c630u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x14c634: 0xa206002c  sb          $a2, 0x2C($s0)
    ctx->pc = 0x14c634u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 44), (uint8_t)GPR_U32(ctx, 6));
    // 0x14c638: 0x8d62000c  lw          $v0, 0xC($t3)
    ctx->pc = 0x14c638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 12)));
    // 0x14c63c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x14c63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x14c640: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14C640u;
    {
        const bool branch_taken_0x14c640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c640) {
            ctx->pc = 0x14C644u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14C640u;
            // 0x14c644: 0x9202002a  lbu         $v0, 0x2A($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14C658u;
            goto label_14c658;
        }
    }
    ctx->pc = 0x14C648u;
    // 0x14c648: 0x92020030  lbu         $v0, 0x30($s0)
    ctx->pc = 0x14c648u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x14c64c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x14c64cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x14c650: 0xa2020030  sb          $v0, 0x30($s0)
    ctx->pc = 0x14c650u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 2));
    // 0x14c654: 0x9202002a  lbu         $v0, 0x2A($s0)
    ctx->pc = 0x14c654u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
label_14c658:
    // 0x14c658: 0x2443fffc  addiu       $v1, $v0, -0x4
    ctx->pc = 0x14c658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x14c65c: 0x2c62001d  sltiu       $v0, $v1, 0x1D
    ctx->pc = 0x14c65cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)29) ? 1 : 0);
    // 0x14c660: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x14C660u;
    {
        const bool branch_taken_0x14c660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c660) {
            ctx->pc = 0x14C664u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14C660u;
            // 0x14c664: 0x9604001c  lhu         $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14C6E4u;
            goto label_14c6e4;
        }
    }
    ctx->pc = 0x14C668u;
    // 0x14c668: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x14c668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x14c66c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14c66cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14c670: 0x24421d40  addiu       $v0, $v0, 0x1D40
    ctx->pc = 0x14c670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7488));
    // 0x14c674: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14c674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14c678: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14c678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14c67c: 0x400008  jr          $v0
    ctx->pc = 0x14C67Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14C684u: goto label_14c684;
            case 0x14C690u: goto label_14c690;
            case 0x14C698u: goto label_14c698;
            case 0x14C6A0u: goto label_14c6a0;
            case 0x14C6D0u: goto label_14c6d0;
            case 0x14C6E0u: goto label_14c6e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14C684u;
label_14c684:
    // 0x14c684: 0xa6000020  sh          $zero, 0x20($s0)
    ctx->pc = 0x14c684u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x14c688: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x14C688u;
    {
        const bool branch_taken_0x14c688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C688u;
            // 0x14c68c: 0xa600001e  sh          $zero, 0x1E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c688) {
            ctx->pc = 0x14C6E0u;
            goto label_14c6e0;
        }
    }
    ctx->pc = 0x14C690u;
label_14c690:
    // 0x14c690: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x14C690u;
    {
        const bool branch_taken_0x14c690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C690u;
            // 0x14c694: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c690) {
            ctx->pc = 0x14C6D4u;
            goto label_14c6d4;
        }
    }
    ctx->pc = 0x14C698u;
label_14c698:
    // 0x14c698: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x14C698u;
    {
        const bool branch_taken_0x14c698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C698u;
            // 0x14c69c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c698) {
            ctx->pc = 0x14C6D4u;
            goto label_14c6d4;
        }
    }
    ctx->pc = 0x14C6A0u;
label_14c6a0:
    // 0x14c6a0: 0x92030030  lbu         $v1, 0x30($s0)
    ctx->pc = 0x14c6a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x14c6a4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x14c6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x14c6a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14C6A8u;
    {
        const bool branch_taken_0x14c6a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C6ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C6A8u;
            // 0x14c6ac: 0x34620008  ori         $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c6a8) {
            ctx->pc = 0x14C6C4u;
            goto label_14c6c4;
        }
    }
    ctx->pc = 0x14C6B0u;
    // 0x14c6b0: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x14c6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x14c6b4: 0xa2020030  sb          $v0, 0x30($s0)
    ctx->pc = 0x14c6b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 2));
    // 0x14c6b8: 0xa603001e  sh          $v1, 0x1E($s0)
    ctx->pc = 0x14c6b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 3));
    // 0x14c6bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14C6BCu;
    {
        const bool branch_taken_0x14c6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C6BCu;
            // 0x14c6c0: 0xa6030020  sh          $v1, 0x20($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c6bc) {
            ctx->pc = 0x14C6E0u;
            goto label_14c6e0;
        }
    }
    ctx->pc = 0x14C6C4u;
label_14c6c4:
    // 0x14c6c4: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x14c6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x14c6c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14C6C8u;
    {
        const bool branch_taken_0x14c6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C6C8u;
            // 0x14c6cc: 0xa600001e  sh          $zero, 0x1E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c6c8) {
            ctx->pc = 0x14C6D8u;
            goto label_14c6d8;
        }
    }
    ctx->pc = 0x14C6D0u;
label_14c6d0:
    // 0x14c6d0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x14c6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_14c6d4:
    // 0x14c6d4: 0xa602001e  sh          $v0, 0x1E($s0)
    ctx->pc = 0x14c6d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 2));
label_14c6d8:
    // 0x14c6d8: 0xa6020020  sh          $v0, 0x20($s0)
    ctx->pc = 0x14c6d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x14c6dc: 0x0  nop
    ctx->pc = 0x14c6dcu;
    // NOP
label_14c6e0:
    // 0x14c6e0: 0x9604001c  lhu         $a0, 0x1C($s0)
    ctx->pc = 0x14c6e0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
label_14c6e4:
    // 0x14c6e4: 0x26830010  addiu       $v1, $s4, 0x10
    ctx->pc = 0x14c6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x14c6e8: 0x92020030  lbu         $v0, 0x30($s0)
    ctx->pc = 0x14c6e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x14c6ec: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x14c6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x14c6f0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14C6F0u;
    {
        const bool branch_taken_0x14c6f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C6F0u;
            // 0x14c6f4: 0x648818  mult        $s1, $v1, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c6f0) {
            ctx->pc = 0x14C718u;
            goto label_14c718;
        }
    }
    ctx->pc = 0x14C6F8u;
    // 0x14c6f8: 0xc04f824  jal         func_13E090
    ctx->pc = 0x14C6F8u;
    SET_GPR_U32(ctx, 31, 0x14C700u);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C700u; }
        if (ctx->pc != 0x14C700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C700u; }
        if (ctx->pc != 0x14C700u) { return; }
    }
    ctx->pc = 0x14C700u;
    // 0x14c700: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14c700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c704: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14c704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c708: 0xc04f78a  jal         func_13DE28
    ctx->pc = 0x14C708u;
    SET_GPR_U32(ctx, 31, 0x14C710u);
    ctx->pc = 0x14C70Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C708u;
            // 0x14c70c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DE28u;
    if (runtime->hasFunction(0x13DE28u)) {
        auto targetFn = runtime->lookupFunction(0x13DE28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C710u; }
        if (ctx->pc != 0x14C710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DE28_0x13de28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C710u; }
        if (ctx->pc != 0x14C710u) { return; }
    }
    ctx->pc = 0x14C710u;
    // 0x14c710: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14C710u;
    {
        const bool branch_taken_0x14c710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C710u;
            // 0x14c714: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c710) {
            ctx->pc = 0x14C734u;
            goto label_14c734;
        }
    }
    ctx->pc = 0x14C718u;
label_14c718:
    // 0x14c718: 0xc04f824  jal         func_13E090
    ctx->pc = 0x14C718u;
    SET_GPR_U32(ctx, 31, 0x14C720u);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C720u; }
        if (ctx->pc != 0x14C720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C720u; }
        if (ctx->pc != 0x14C720u) { return; }
    }
    ctx->pc = 0x14C720u;
    // 0x14c720: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14c720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c724: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14c724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c728: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x14C728u;
    SET_GPR_U32(ctx, 31, 0x14C730u);
    ctx->pc = 0x14C72Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C728u;
            // 0x14c72c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C730u; }
        if (ctx->pc != 0x14C730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C730u; }
        if (ctx->pc != 0x14C730u) { return; }
    }
    ctx->pc = 0x14C730u;
    // 0x14c730: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14c730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14c734:
    // 0x14c734: 0xae040038  sw          $a0, 0x38($s0)
    ctx->pc = 0x14c734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 4));
    // 0x14c738: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x14c738u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c73c: 0x9602001c  lhu         $v0, 0x1C($s0)
    ctx->pc = 0x14c73cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x14c740: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14c740u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c744: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x14C744u;
    {
        const bool branch_taken_0x14c744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C744u;
            // 0x14c748: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c744) {
            ctx->pc = 0x14C7B0u;
            goto label_14c7b0;
        }
    }
    ctx->pc = 0x14C74Cu;
    // 0x14c74c: 0x0  nop
    ctx->pc = 0x14c74cu;
    // NOP
label_14c750:
    // 0x14c750: 0x141103  sra         $v0, $s4, 4
    ctx->pc = 0x14c750u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 20), 4));
    // 0x14c754: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14c754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c758: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x14c758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x14c75c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14c75cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c760: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14c760u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c764: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x14c764u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c768: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x14c768u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14c76c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x14c76cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c770: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x14c770u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c774: 0xc0530e2  jal         func_14C388
    ctx->pc = 0x14C774u;
    SET_GPR_U32(ctx, 31, 0x14C77Cu);
    ctx->pc = 0x14C778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C774u;
            // 0x14c778: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14C388u;
    if (runtime->hasFunction(0x14C388u)) {
        auto targetFn = runtime->lookupFunction(0x14C388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C77Cu; }
        if (ctx->pc != 0x14C77Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_14c388_0x14c3c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C77Cu; }
        if (ctx->pc != 0x14C77Cu) { return; }
    }
    ctx->pc = 0x14C77Cu;
    // 0x14c77c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x14c77cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x14c780: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14c780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c784: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14c784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c788: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x14c788u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c78c: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x14C78Cu;
    SET_GPR_U32(ctx, 31, 0x14C794u);
    ctx->pc = 0x14C790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C78Cu;
            // 0x14c790: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C794u; }
        if (ctx->pc != 0x14C794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C794u; }
        if (ctx->pc != 0x14C794u) { return; }
    }
    ctx->pc = 0x14C794u;
    // 0x14c794: 0x141083  sra         $v0, $s4, 2
    ctx->pc = 0x14c794u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 20), 2));
    // 0x14c798: 0x9603001c  lhu         $v1, 0x1C($s0)
    ctx->pc = 0x14c798u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x14c79c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14c79cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14c7a0: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x14c7a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x14c7a4: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x14c7a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14c7a8: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x14C7A8u;
    {
        const bool branch_taken_0x14c7a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14C7ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C7A8u;
            // 0x14c7ac: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c7a8) {
            ctx->pc = 0x14C750u;
            runtime->cooperativeGuestYield();
            goto label_14c750;
        }
    }
    ctx->pc = 0x14C7B0u;
label_14c7b0:
    // 0x14c7b0: 0x9202002a  lbu         $v0, 0x2A($s0)
    ctx->pc = 0x14c7b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x14c7b4: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x14c7b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x14c7b8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x14C7B8u;
    {
        const bool branch_taken_0x14c7b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C7BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C7B8u;
            // 0x14c7bc: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c7b8) {
            ctx->pc = 0x14C814u;
            goto label_14c814;
        }
    }
    ctx->pc = 0x14C7C0u;
    // 0x14c7c0: 0x96030020  lhu         $v1, 0x20($s0)
    ctx->pc = 0x14c7c0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x14c7c4: 0x50620014  beql        $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x14C7C4u;
    {
        const bool branch_taken_0x14c7c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14c7c4) {
            ctx->pc = 0x14C7C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14C7C4u;
            // 0x14c7c8: 0x9203002a  lbu         $v1, 0x2A($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14C818u;
            goto label_14c818;
        }
    }
    ctx->pc = 0x14C7CCu;
    // 0x14c7cc: 0x96020014  lhu         $v0, 0x14($s0)
    ctx->pc = 0x14c7ccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x14c7d0: 0x2c420041  sltiu       $v0, $v0, 0x41
    ctx->pc = 0x14c7d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
    // 0x14c7d4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x14C7D4u;
    {
        const bool branch_taken_0x14c7d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c7d4) {
            ctx->pc = 0x14C7D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14C7D4u;
            // 0x14c7d8: 0x96020014  lhu         $v0, 0x14($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14C7F8u;
            goto label_14c7f8;
        }
    }
    ctx->pc = 0x14C7DCu;
    // 0x14c7dc: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x14c7dcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x14c7e0: 0x2c420041  sltiu       $v0, $v0, 0x41
    ctx->pc = 0x14c7e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
    // 0x14c7e4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14C7E4u;
    {
        const bool branch_taken_0x14c7e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c7e4) {
            ctx->pc = 0x14C7E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14C7E4u;
            // 0x14c7e8: 0x96020014  lhu         $v0, 0x14($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14C7F8u;
            goto label_14c7f8;
        }
    }
    ctx->pc = 0x14C7ECu;
    // 0x14c7ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14c7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14c7f0: 0xa202002c  sb          $v0, 0x2C($s0)
    ctx->pc = 0x14c7f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 44), (uint8_t)GPR_U32(ctx, 2));
    // 0x14c7f4: 0x96020014  lhu         $v0, 0x14($s0)
    ctx->pc = 0x14c7f4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
label_14c7f8:
    // 0x14c7f8: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x14c7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14c7fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14c7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14c800: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14C800u;
    {
        const bool branch_taken_0x14c800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c800) {
            ctx->pc = 0x14C804u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14C800u;
            // 0x14c804: 0x9203002a  lbu         $v1, 0x2A($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14C818u;
            goto label_14c818;
        }
    }
    ctx->pc = 0x14C808u;
    // 0x14c808: 0x9202002c  lbu         $v0, 0x2C($s0)
    ctx->pc = 0x14c808u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x14c80c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14c80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14c810: 0xa202002c  sb          $v0, 0x2C($s0)
    ctx->pc = 0x14c810u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 44), (uint8_t)GPR_U32(ctx, 2));
label_14c814:
    // 0x14c814: 0x9203002a  lbu         $v1, 0x2A($s0)
    ctx->pc = 0x14c814u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
label_14c818:
    // 0x14c818: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x14c818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x14c81c: 0x54620013  bnel        $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x14C81Cu;
    {
        const bool branch_taken_0x14c81c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14c81c) {
            ctx->pc = 0x14C820u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14C81Cu;
            // 0x14c820: 0x96020014  lhu         $v0, 0x14($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14C86Cu;
            goto label_14c86c;
        }
    }
    ctx->pc = 0x14C824u;
    // 0x14c824: 0x92020030  lbu         $v0, 0x30($s0)
    ctx->pc = 0x14c824u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x14c828: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x14c828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x14c82c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14c82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x14c830: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x14C830u;
    {
        const bool branch_taken_0x14c830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c830) {
            ctx->pc = 0x14C834u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14C830u;
            // 0x14c834: 0x96020014  lhu         $v0, 0x14($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14C86Cu;
            goto label_14c86c;
        }
    }
    ctx->pc = 0x14C838u;
    // 0x14c838: 0x96020014  lhu         $v0, 0x14($s0)
    ctx->pc = 0x14c838u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x14c83c: 0x96040016  lhu         $a0, 0x16($s0)
    ctx->pc = 0x14c83cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x14c840: 0x9605001a  lhu         $a1, 0x1A($s0)
    ctx->pc = 0x14c840u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x14c844: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x14c844u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x14c848: 0x9203002c  lbu         $v1, 0x2C($s0)
    ctx->pc = 0x14c848u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x14c84c: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x14c84cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x14c850: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x14c850u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x14c854: 0xa6020010  sh          $v0, 0x10($s0)
    ctx->pc = 0x14c854u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x14c858: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x14c858u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x14c85c: 0xa6040012  sh          $a0, 0x12($s0)
    ctx->pc = 0x14c85cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 4));
    // 0x14c860: 0xa6050018  sh          $a1, 0x18($s0)
    ctx->pc = 0x14c860u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 5));
    // 0x14c864: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14C864u;
    {
        const bool branch_taken_0x14c864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C864u;
            // 0x14c868: 0xa203002b  sb          $v1, 0x2B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c864) {
            ctx->pc = 0x14C888u;
            goto label_14c888;
        }
    }
    ctx->pc = 0x14C86Cu;
label_14c86c:
    // 0x14c86c: 0x96030016  lhu         $v1, 0x16($s0)
    ctx->pc = 0x14c86cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x14c870: 0x9604001a  lhu         $a0, 0x1A($s0)
    ctx->pc = 0x14c870u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x14c874: 0x9205002c  lbu         $a1, 0x2C($s0)
    ctx->pc = 0x14c874u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x14c878: 0xa6020010  sh          $v0, 0x10($s0)
    ctx->pc = 0x14c878u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x14c87c: 0xa6030012  sh          $v1, 0x12($s0)
    ctx->pc = 0x14c87cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x14c880: 0xa6040018  sh          $a0, 0x18($s0)
    ctx->pc = 0x14c880u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 4));
    // 0x14c884: 0xa205002b  sb          $a1, 0x2B($s0)
    ctx->pc = 0x14c884u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 5));
label_14c888:
    // 0x14c888: 0x9203002a  lbu         $v1, 0x2A($s0)
    ctx->pc = 0x14c888u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x14c88c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x14c88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x14c890: 0x24421090  addiu       $v0, $v0, 0x1090
    ctx->pc = 0x14c890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4240));
    // 0x14c894: 0x92060028  lbu         $a2, 0x28($s0)
    ctx->pc = 0x14c894u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x14c898: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14c898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14c89c: 0x92040029  lbu         $a0, 0x29($s0)
    ctx->pc = 0x14c89cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
    // 0x14c8a0: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x14c8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x14c8a4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x14c8a4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14c8a8: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x14c8a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x14c8ac: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x14c8acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x14c8b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14c8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14c8b4: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x14c8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x14c8b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14c8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14c8bc: 0x24a510b8  addiu       $a1, $a1, 0x10B8
    ctx->pc = 0x14c8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4280));
    // 0x14c8c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x14c8c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c8c4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x14c8c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14c8c8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x14c8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x14c8cc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x14c8ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14c8d0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x14c8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x14c8d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14c8d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14c8d8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14c8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14c8dc: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x14c8dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14c8e0: 0xa6030026  sh          $v1, 0x26($s0)
    ctx->pc = 0x14c8e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 3));
    // 0x14c8e4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x14c8e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14c8e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14c8e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14c8ec: 0x3e00008  jr          $ra
    ctx->pc = 0x14C8ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C8F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C8ECu;
            // 0x14c8f0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14C558u: goto label_14c558;
            case 0x14C5D0u: goto label_14c5d0;
            case 0x14C5E0u: goto label_14c5e0;
            case 0x14C658u: goto label_14c658;
            case 0x14C684u: goto label_14c684;
            case 0x14C690u: goto label_14c690;
            case 0x14C698u: goto label_14c698;
            case 0x14C6A0u: goto label_14c6a0;
            case 0x14C6C4u: goto label_14c6c4;
            case 0x14C6D0u: goto label_14c6d0;
            case 0x14C6D4u: goto label_14c6d4;
            case 0x14C6D8u: goto label_14c6d8;
            case 0x14C6E0u: goto label_14c6e0;
            case 0x14C6E4u: goto label_14c6e4;
            case 0x14C718u: goto label_14c718;
            case 0x14C734u: goto label_14c734;
            case 0x14C750u: goto label_14c750;
            case 0x14C7B0u: goto label_14c7b0;
            case 0x14C7F8u: goto label_14c7f8;
            case 0x14C814u: goto label_14c814;
            case 0x14C818u: goto label_14c818;
            case 0x14C86Cu: goto label_14c86c;
            case 0x14C888u: goto label_14c888;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14C8F4u;
    // 0x14c8f4: 0x0  nop
    ctx->pc = 0x14c8f4u;
    // NOP
}
