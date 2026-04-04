#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001413E8
// Address: 0x1413e8 - 0x141710
void sub_001413E8_0x1413e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001413E8_0x1413e8");
#endif

    ctx->pc = 0x1413e8u;

    // 0x1413e8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1413e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1413ec: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x1413ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1413f0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1413f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1413f4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1413f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1413f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1413f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1413fc: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1413fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x141400: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x141400u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141404: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x141404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x141408: 0x13a080  sll         $s4, $s3, 2
    ctx->pc = 0x141408u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x14140c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x14140cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x141410: 0x263600f0  addiu       $s6, $s1, 0xF0
    ctx->pc = 0x141410u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    // 0x141414: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x141414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x141418: 0x2d41021  addu        $v0, $s6, $s4
    ctx->pc = 0x141418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x14141c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x14141cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x141420: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x141420u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141424: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x141424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x141428: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x141428u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x14142c: 0x3c056c00  lui         $a1, 0x6C00
    ctx->pc = 0x14142cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27648 << 16));
    // 0x141430: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x141430u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x141434: 0x34a5c000  ori         $a1, $a1, 0xC000
    ctx->pc = 0x141434u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)49152);
    // 0x141438: 0x8e2a013c  lw          $t2, 0x13C($s1)
    ctx->pc = 0x141438u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
    // 0x14143c: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x14143cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x141440: 0x8e260140  lw          $a2, 0x140($s1)
    ctx->pc = 0x141440u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x141444: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x141444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141448: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x141448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14144c: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x14144cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x141450: 0xc3a821  addu        $s5, $a2, $v1
    ctx->pc = 0x141450u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x141454: 0x2b41821  addu        $v1, $s5, $s4
    ctx->pc = 0x141454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x141458: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x141458u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x14145c: 0x8e2200f8  lw          $v0, 0xF8($s1)
    ctx->pc = 0x14145cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x141460: 0xac6a0000  sw          $t2, 0x0($v1)
    ctx->pc = 0x141460u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 10));
    // 0x141464: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x141464u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x141468: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x141468u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x14146c: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x14146cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x141470: 0x8e220134  lw          $v0, 0x134($s1)
    ctx->pc = 0x141470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 308)));
    // 0x141474: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x141474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x141478: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x141478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x14147c: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x14147cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x141480: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x141480u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x141484: 0x1442023  subu        $a0, $t2, $a0
    ctx->pc = 0x141484u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x141488: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x141488u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x14148c: 0xaea40008  sw          $a0, 0x8($s5)
    ctx->pc = 0x14148cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 4));
    // 0x141490: 0x8e220100  lw          $v0, 0x100($s1)
    ctx->pc = 0x141490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x141494: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x141494u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x141498: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x141498u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x14149c: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x14149cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x1414a0: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x1414a0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x1414a4: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x1414a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x1414a8: 0x8e220108  lw          $v0, 0x108($s1)
    ctx->pc = 0x1414a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
    // 0x1414ac: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x1414acu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x1414b0: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x1414b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x1414b4: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x1414b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
    // 0x1414b8: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x1414b8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x1414bc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1414bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1414c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1414c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1414c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1414C4u;
    {
        const bool branch_taken_0x1414c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1414C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1414C4u;
            // 0x1414c8: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1414c4) {
            ctx->pc = 0x1414E8u;
            goto label_1414e8;
        }
    }
    ctx->pc = 0x1414CCu;
    // 0x1414cc: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x1414ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1414d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1414d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1414d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1414d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1414d8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1414d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1414dc: 0xc0504d4  jal         func_141350
    ctx->pc = 0x1414DCu;
    SET_GPR_U32(ctx, 31, 0x1414E4u);
    ctx->pc = 0x1414E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1414DCu;
            // 0x1414e0: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141350u;
    if (runtime->hasFunction(0x141350u)) {
        auto targetFn = runtime->lookupFunction(0x141350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1414E4u; }
        if (ctx->pc != 0x1414E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_141350_0x1413e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1414E4u; }
        if (ctx->pc != 0x1414E4u) { return; }
    }
    ctx->pc = 0x1414E4u;
    // 0x1414e4: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x1414e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1414e8:
    // 0x1414e8: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1414e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1414ec: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1414ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1414f0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1414f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1414f4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1414F4u;
    {
        const bool branch_taken_0x1414f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1414F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1414F4u;
            // 0x1414f8: 0x140282d  daddu       $a1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1414f4) {
            ctx->pc = 0x141514u;
            goto label_141514;
        }
    }
    ctx->pc = 0x1414FCu;
    // 0x1414fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1414fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141500: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x141500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x141504: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x141504u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141508: 0xc0504d4  jal         func_141350
    ctx->pc = 0x141508u;
    SET_GPR_U32(ctx, 31, 0x141510u);
    ctx->pc = 0x14150Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141508u;
            // 0x14150c: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141350u;
    if (runtime->hasFunction(0x141350u)) {
        auto targetFn = runtime->lookupFunction(0x141350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141510u; }
        if (ctx->pc != 0x141510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_141350_0x1413e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141510u; }
        if (ctx->pc != 0x141510u) { return; }
    }
    ctx->pc = 0x141510u;
    // 0x141510: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x141510u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_141514:
    // 0x141514: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x141514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x141518: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x141518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x14151c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x14151cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x141520: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x141520u;
    {
        const bool branch_taken_0x141520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x141524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141520u;
            // 0x141524: 0x140282d  daddu       $a1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141520) {
            ctx->pc = 0x141540u;
            goto label_141540;
        }
    }
    ctx->pc = 0x141528u;
    // 0x141528: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x141528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14152c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14152cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x141530: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x141530u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141534: 0xc0504d4  jal         func_141350
    ctx->pc = 0x141534u;
    SET_GPR_U32(ctx, 31, 0x14153Cu);
    ctx->pc = 0x141538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141534u;
            // 0x141538: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141350u;
    if (runtime->hasFunction(0x141350u)) {
        auto targetFn = runtime->lookupFunction(0x141350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14153Cu; }
        if (ctx->pc != 0x14153Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_141350_0x1413e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14153Cu; }
        if (ctx->pc != 0x14153Cu) { return; }
    }
    ctx->pc = 0x14153Cu;
    // 0x14153c: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x14153cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_141540:
    // 0x141540: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x141540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x141544: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x141544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x141548: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x141548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x14154c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x14154Cu;
    {
        const bool branch_taken_0x14154c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x141550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14154Cu;
            // 0x141550: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14154c) {
            ctx->pc = 0x1415D0u;
            goto label_1415d0;
        }
    }
    ctx->pc = 0x141554u;
    // 0x141554: 0x8e2200d0  lw          $v0, 0xD0($s1)
    ctx->pc = 0x141554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x141558: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x141558u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14155c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x14155cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x141560: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x141560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x141564: 0x84a20040  lh          $v0, 0x40($a1)
    ctx->pc = 0x141564u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x141568: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x141568u;
    {
        const bool branch_taken_0x141568 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x14156Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141568u;
            // 0x14156c: 0x94a80040  lhu         $t0, 0x40($a1) (Delay Slot)
        SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141568) {
            ctx->pc = 0x1415A0u;
            goto label_1415a0;
        }
    }
    ctx->pc = 0x141570u;
label_141570:
    // 0x141570: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x141570u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x141574: 0x81c00  sll         $v1, $t0, 16
    ctx->pc = 0x141574u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x141578: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x141578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x14157c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x14157cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x141580: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x141580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x141584: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x141584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x141588: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x141588u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x14158c: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x14158cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x141590: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x141590u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x141594: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x141594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x141598: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x141598u;
    {
        const bool branch_taken_0x141598 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14159Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141598u;
            // 0x14159c: 0x82300b  movn        $a2, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141598) {
            ctx->pc = 0x141570u;
            runtime->cooperativeGuestYield();
            goto label_141570;
        }
    }
    ctx->pc = 0x1415A0u;
label_1415a0:
    // 0x1415a0: 0x3c100500  lui         $s0, 0x500
    ctx->pc = 0x1415a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)1280 << 16));
    // 0x1415a4: 0x25450004  addiu       $a1, $t2, 0x4
    ctx->pc = 0x1415a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x1415a8: 0xd01025  or          $v0, $a2, $s0
    ctx->pc = 0x1415a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 16));
    // 0x1415ac: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1415acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1415b0: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x1415b0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x1415b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1415b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1415b8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1415b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1415bc: 0xc0504d4  jal         func_141350
    ctx->pc = 0x1415BCu;
    SET_GPR_U32(ctx, 31, 0x1415C4u);
    ctx->pc = 0x1415C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1415BCu;
            // 0x1415c0: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141350u;
    if (runtime->hasFunction(0x141350u)) {
        auto targetFn = runtime->lookupFunction(0x141350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1415C4u; }
        if (ctx->pc != 0x1415C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_141350_0x1413e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1415C4u; }
        if (ctx->pc != 0x1415C4u) { return; }
    }
    ctx->pc = 0x1415C4u;
    // 0x1415c4: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x1415c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1415c8: 0xad500000  sw          $s0, 0x0($t2)
    ctx->pc = 0x1415c8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 16));
    // 0x1415cc: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x1415ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
label_1415d0:
    // 0x1415d0: 0x8e2200fc  lw          $v0, 0xFC($s1)
    ctx->pc = 0x1415d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
    // 0x1415d4: 0x2b42021  addu        $a0, $s5, $s4
    ctx->pc = 0x1415d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x1415d8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1415d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1415dc: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x1415dcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x1415e0: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x1415e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x1415e4: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x1415e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1415e8: 0x3142000f  andi        $v0, $t2, 0xF
    ctx->pc = 0x1415e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)15);
    // 0x1415ec: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1415ECu;
    {
        const bool branch_taken_0x1415ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1415F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1415ECu;
            // 0x1415f0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1415ec) {
            ctx->pc = 0x141618u;
            goto label_141618;
        }
    }
    ctx->pc = 0x1415F4u;
    // 0x1415f4: 0xad400000  sw          $zero, 0x0($t2)
    ctx->pc = 0x1415f4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
label_1415f8:
    // 0x1415f8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1415f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1415fc: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x1415fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x141600: 0x3143000f  andi        $v1, $t2, 0xF
    ctx->pc = 0x141600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)15);
    // 0x141604: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x141604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x141608: 0x0  nop
    ctx->pc = 0x141608u;
    // NOP
    // 0x14160c: 0x5462fffa  bnel        $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14160Cu;
    {
        const bool branch_taken_0x14160c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14160c) {
            ctx->pc = 0x141610u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14160Cu;
            // 0x141610: 0xad400000  sw          $zero, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1415F8u;
            runtime->cooperativeGuestYield();
            goto label_1415f8;
        }
    }
    ctx->pc = 0x141614u;
    // 0x141614: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x141614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_141618:
    // 0x141618: 0x2d41021  addu        $v0, $s6, $s4
    ctx->pc = 0x141618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x14161c: 0x243001a  div         $zero, $s2, $v1
    ctx->pc = 0x14161cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x141620: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x141620u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x141624: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x141624u;
    {
        const bool branch_taken_0x141624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x141624) {
            ctx->pc = 0x141628u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x141624u;
            // 0x141628: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14162Cu;
            goto label_14162c;
        }
    }
    ctx->pc = 0x14162Cu;
label_14162c:
    // 0x14162c: 0x2b41021  addu        $v0, $s5, $s4
    ctx->pc = 0x14162cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x141630: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x141630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x141634: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x141634u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x141638: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x141638u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14163c: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x14163cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x141640: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x141640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x141644: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x141644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x141648: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x141648u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
    // 0x14164c: 0x2810  mfhi        $a1
    ctx->pc = 0x14164cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x141650: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x141650u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x141654: 0x1472023  subu        $a0, $t2, $a3
    ctx->pc = 0x141654u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x141658: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x141658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x14165c: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x14165cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x141660: 0x24070155  addiu       $a3, $zero, 0x155
    ctx->pc = 0x141660u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 341));
    // 0x141664: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x141664u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x141668: 0x3c036000  lui         $v1, 0x6000
    ctx->pc = 0x141668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24576 << 16));
    // 0x14166c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x14166cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x141670: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x141670u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x141674: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x141674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x141678: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x141678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x14167c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x14167cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x141680: 0x3c021400  lui         $v0, 0x1400
    ctx->pc = 0x141680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5120 << 16));
    // 0x141684: 0x4010  mfhi        $t0
    ctx->pc = 0x141684u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x141688: 0xa92818  mult        $a1, $a1, $t1
    ctx->pc = 0x141688u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x14168c: 0xa4c8001a  sh          $t0, 0x1A($a2)
    ctx->pc = 0x14168cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 26), (uint16_t)GPR_U32(ctx, 8));
    // 0x141690: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x141690u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x141694: 0x528c2  srl         $a1, $a1, 3
    ctx->pc = 0x141694u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
    // 0x141698: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x141698u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x14169c: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x14169cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x1416a0: 0x8e230134  lw          $v1, 0x134($s1)
    ctx->pc = 0x1416a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 308)));
    // 0x1416a4: 0x10670007  beq         $v1, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1416A4u;
    {
        const bool branch_taken_0x1416a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x1416A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1416A4u;
            // 0x1416a8: 0x2c620156  sltiu       $v0, $v1, 0x156 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)342) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1416a4) {
            ctx->pc = 0x1416C4u;
            goto label_1416c4;
        }
    }
    ctx->pc = 0x1416ACu;
    // 0x1416ac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1416ACu;
    {
        const bool branch_taken_0x1416ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1416B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1416ACu;
            // 0x1416b0: 0x240202ab  addiu       $v0, $zero, 0x2AB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 683));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1416ac) {
            ctx->pc = 0x1416CCu;
            goto label_1416cc;
        }
    }
    ctx->pc = 0x1416B4u;
    // 0x1416b4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1416B4u;
    {
        const bool branch_taken_0x1416b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1416B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1416B4u;
            // 0x1416b8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1416b4) {
            ctx->pc = 0x1416D0u;
            goto label_1416d0;
        }
    }
    ctx->pc = 0x1416BCu;
    // 0x1416bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1416BCu;
    {
        const bool branch_taken_0x1416bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1416C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1416BCu;
            // 0x1416c0: 0x24030155  addiu       $v1, $zero, 0x155 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 341));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1416bc) {
            ctx->pc = 0x1416D0u;
            goto label_1416d0;
        }
    }
    ctx->pc = 0x1416C4u;
label_1416c4:
    // 0x1416c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1416C4u;
    {
        const bool branch_taken_0x1416c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1416C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1416C4u;
            // 0x1416c8: 0x240302ab  addiu       $v1, $zero, 0x2AB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 683));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1416c4) {
            ctx->pc = 0x1416D0u;
            goto label_1416d0;
        }
    }
    ctx->pc = 0x1416CCu;
label_1416cc:
    // 0x1416cc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1416ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1416d0:
    // 0x1416d0: 0x92220144  lbu         $v0, 0x144($s1)
    ctx->pc = 0x1416d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 324)));
    // 0x1416d4: 0xae2a013c  sw          $t2, 0x13C($s1)
    ctx->pc = 0x1416d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 316), GPR_U32(ctx, 10));
    // 0x1416d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1416d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1416dc: 0xae230134  sw          $v1, 0x134($s1)
    ctx->pc = 0x1416dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 3));
    // 0x1416e0: 0xa2220144  sb          $v0, 0x144($s1)
    ctx->pc = 0x1416e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 324), (uint8_t)GPR_U32(ctx, 2));
    // 0x1416e4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1416e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1416e8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1416e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1416ec: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1416ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1416f0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1416f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1416f4: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1416f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1416f8: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x1416f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1416fc: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x1416fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141700: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x141700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141704: 0x3e00008  jr          $ra
    ctx->pc = 0x141704u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141704u;
            // 0x141708: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1414E8u: goto label_1414e8;
            case 0x141514u: goto label_141514;
            case 0x141540u: goto label_141540;
            case 0x141570u: goto label_141570;
            case 0x1415A0u: goto label_1415a0;
            case 0x1415D0u: goto label_1415d0;
            case 0x1415F8u: goto label_1415f8;
            case 0x141618u: goto label_141618;
            case 0x14162Cu: goto label_14162c;
            case 0x1416C4u: goto label_1416c4;
            case 0x1416CCu: goto label_1416cc;
            case 0x1416D0u: goto label_1416d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14170Cu;
    // 0x14170c: 0x0  nop
    ctx->pc = 0x14170cu;
    // NOP
}
