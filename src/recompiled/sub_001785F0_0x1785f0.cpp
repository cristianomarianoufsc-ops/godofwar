#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001785F0
// Address: 0x1785f0 - 0x178d38
void sub_001785F0_0x1785f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001785F0_0x1785f0");
#endif

    ctx->pc = 0x1785f0u;

    // 0x1785f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1785f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1785f4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1785f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1785f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1785f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1785fc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1785fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178600: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x178600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x178604: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x178604u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178608: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x178608u;
    {
        const bool branch_taken_0x178608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17860Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178608u;
            // 0x17860c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178608) {
            ctx->pc = 0x17898Cu;
            goto label_17898c;
        }
    }
    ctx->pc = 0x178610u;
label_178610:
    // 0x178610: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x178610u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x178614: 0x8e43c4bc  lw          $v1, -0x3B44($s2)
    ctx->pc = 0x178614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294952124)));
    // 0x178618: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x178618u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17861c: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x17861cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x178620: 0x9482000a  lhu         $v0, 0xA($a0)
    ctx->pc = 0x178620u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x178624: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x178624u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x178628: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x178628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17862c: 0x5605006a  bnel        $s0, $a1, . + 4 + (0x6A << 2)
    ctx->pc = 0x17862Cu;
    {
        const bool branch_taken_0x17862c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        if (branch_taken_0x17862c) {
            ctx->pc = 0x178630u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17862Cu;
            // 0x178630: 0x8ca60004  lw          $a2, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1787D8u;
            goto label_1787d8;
        }
    }
    ctx->pc = 0x178634u;
    // 0x178634: 0x9482000c  lhu         $v0, 0xC($a0)
    ctx->pc = 0x178634u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x178638: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x178638u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x17863c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17863cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x178640: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x178640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x178644: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x178644u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x178648: 0x4c30017  bgezl       $a2, . + 4 + (0x17 << 2)
    ctx->pc = 0x178648u;
    {
        const bool branch_taken_0x178648 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x178648) {
            ctx->pc = 0x17864Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x178648u;
            // 0x17864c: 0x94a3000c  lhu         $v1, 0xC($a1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1786A8u;
            goto label_1786a8;
        }
    }
    ctx->pc = 0x178650u;
    // 0x178650: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x178650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x178654: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x178654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x178658: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x178658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x17865c: 0x8c63c4b4  lw          $v1, -0x3B4C($v1)
    ctx->pc = 0x17865cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952116)));
    // 0x178660: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x178660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x178664: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x178664u;
    {
        const bool branch_taken_0x178664 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x178668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178664u;
            // 0x178668: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178664) {
            ctx->pc = 0x178678u;
            goto label_178678;
        }
    }
    ctx->pc = 0x17866Cu;
    // 0x17866c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x17866cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x178670: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x178670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x178674: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x178674u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_178678:
    // 0x178678: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x178678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17867c: 0xc05d776  jal         func_175DD8
    ctx->pc = 0x17867Cu;
    SET_GPR_U32(ctx, 31, 0x178684u);
    ctx->pc = 0x178680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17867Cu;
            // 0x178680: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175DD8u;
    if (runtime->hasFunction(0x175DD8u)) {
        auto targetFn = runtime->lookupFunction(0x175DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178684u; }
        if (ctx->pc != 0x178684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175DD8_0x175dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178684u; }
        if (ctx->pc != 0x178684u) { return; }
    }
    ctx->pc = 0x178684u;
    // 0x178684: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x178684u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x178688: 0x8e43c4bc  lw          $v1, -0x3B44($s2)
    ctx->pc = 0x178688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294952124)));
    // 0x17868c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17868cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x178690: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x178690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x178694: 0x9482000c  lhu         $v0, 0xC($a0)
    ctx->pc = 0x178694u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x178698: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x178698u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17869c: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x17869cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1786a0: 0x94a3000c  lhu         $v1, 0xC($a1)
    ctx->pc = 0x1786a0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1786a4: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x1786a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_1786a8:
    // 0x1786a8: 0x8e46c4bc  lw          $a2, -0x3B44($s2)
    ctx->pc = 0x1786a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294952124)));
    // 0x1786ac: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1786acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1786b0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1786b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1786b4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1786b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1786b8: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1786B8u;
    {
        const bool branch_taken_0x1786b8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1786BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1786B8u;
            // 0x1786bc: 0x8e42c4bc  lw          $v0, -0x3B44($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294952124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1786b8) {
            ctx->pc = 0x1786DCu;
            goto label_1786dc;
        }
    }
    ctx->pc = 0x1786C0u;
    // 0x1786c0: 0x94a2000a  lhu         $v0, 0xA($a1)
    ctx->pc = 0x1786c0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x1786c4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1786c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1786c8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1786c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1786cc: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1786ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1786d0: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x1786d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x1786d4: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x1786D4u;
    {
        const bool branch_taken_0x1786d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1786D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1786D4u;
            // 0x1786d8: 0x8e42c4bc  lw          $v0, -0x3B44($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294952124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1786d4) {
            ctx->pc = 0x178874u;
            goto label_178874;
        }
    }
    ctx->pc = 0x1786DCu;
label_1786dc:
    // 0x1786dc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1786dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1786e0: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x1786e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x1786e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1786e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1786e8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1786e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1786ec: 0x4400019  bltz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1786ECu;
    {
        const bool branch_taken_0x1786ec = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1786F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1786ECu;
            // 0x1786f0: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1786ec) {
            ctx->pc = 0x178754u;
            goto label_178754;
        }
    }
    ctx->pc = 0x1786F4u;
    // 0x1786f4: 0x8c42c4b4  lw          $v0, -0x3B4C($v0)
    ctx->pc = 0x1786f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952116)));
    // 0x1786f8: 0x50a20005  beql        $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1786F8u;
    {
        const bool branch_taken_0x1786f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1786f8) {
            ctx->pc = 0x1786FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1786F8u;
            // 0x1786fc: 0x94a2000a  lhu         $v0, 0xA($a1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x178710u;
            goto label_178710;
        }
    }
    ctx->pc = 0x178700u;
    // 0x178700: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x178700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x178704: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x178704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x178708: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x178708u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x17870c: 0x94a2000a  lhu         $v0, 0xA($a1)
    ctx->pc = 0x17870cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
label_178710:
    // 0x178710: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x178710u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
    // 0x178714: 0x8e43c4bc  lw          $v1, -0x3B44($s2)
    ctx->pc = 0x178714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294952124)));
    // 0x178718: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x178718u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x17871c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17871cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x178720: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x178720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178724: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x178724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x178728: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x178728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x17872c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x17872cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x178730: 0xc05d8fa  jal         func_1763E8
    ctx->pc = 0x178730u;
    SET_GPR_U32(ctx, 31, 0x178738u);
    ctx->pc = 0x178734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178730u;
            // 0x178734: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1763E8u;
    if (runtime->hasFunction(0x1763E8u)) {
        auto targetFn = runtime->lookupFunction(0x1763E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178738u; }
        if (ctx->pc != 0x178738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001763E8_0x1763e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178738u; }
        if (ctx->pc != 0x178738u) { return; }
    }
    ctx->pc = 0x178738u;
    // 0x178738: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x178738u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17873c: 0x8e43c4bc  lw          $v1, -0x3B44($s2)
    ctx->pc = 0x17873cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294952124)));
    // 0x178740: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x178740u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x178744: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x178744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x178748: 0x9482000c  lhu         $v0, 0xC($a0)
    ctx->pc = 0x178748u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x17874c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17874cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x178750: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x178750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_178754:
    // 0x178754: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x178754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x178758: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x178758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x17875c: 0x4430009  bgezl       $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17875Cu;
    {
        const bool branch_taken_0x17875c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x17875c) {
            ctx->pc = 0x178760u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17875Cu;
            // 0x178760: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x178784u;
            goto label_178784;
        }
    }
    ctx->pc = 0x178764u;
    // 0x178764: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x178764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x178768: 0x8c42c4b4  lw          $v0, -0x3B4C($v0)
    ctx->pc = 0x178768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952116)));
    // 0x17876c: 0x50a2000a  beql        $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x17876Cu;
    {
        const bool branch_taken_0x17876c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x17876c) {
            ctx->pc = 0x178770u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17876Cu;
            // 0x178770: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x178798u;
            goto label_178798;
        }
    }
    ctx->pc = 0x178774u;
    // 0x178774: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x178774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x178778: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x178778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17877c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x17877Cu;
    {
        const bool branch_taken_0x17877c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17877Cu;
            // 0x178780: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17877c) {
            ctx->pc = 0x178794u;
            goto label_178794;
        }
    }
    ctx->pc = 0x178784u;
label_178784:
    // 0x178784: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x178784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x178788: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x178788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x17878c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x17878cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x178790: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x178790u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_178794:
    // 0x178794: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x178794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_178798:
    // 0x178798: 0x3c077fff  lui         $a3, 0x7FFF
    ctx->pc = 0x178798u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32767 << 16));
    // 0x17879c: 0x94a3000c  lhu         $v1, 0xC($a1)
    ctx->pc = 0x17879cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1787a0: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x1787a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x1787a4: 0x8e46c4bc  lw          $a2, -0x3B44($s2)
    ctx->pc = 0x1787a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294952124)));
    // 0x1787a8: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x1787a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x1787ac: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1787acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1787b0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1787b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1787b4: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1787b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1787b8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1787b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1787bc: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1787bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1787c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1787c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1787c4: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x1787c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x1787c8: 0xc05d776  jal         func_175DD8
    ctx->pc = 0x1787C8u;
    SET_GPR_U32(ctx, 31, 0x1787D0u);
    ctx->pc = 0x1787CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1787C8u;
            // 0x1787cc: 0xacc20004  sw          $v0, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175DD8u;
    if (runtime->hasFunction(0x175DD8u)) {
        auto targetFn = runtime->lookupFunction(0x175DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1787D0u; }
        if (ctx->pc != 0x1787D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175DD8_0x175dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1787D0u; }
        if (ctx->pc != 0x1787D0u) { return; }
    }
    ctx->pc = 0x1787D0u;
    // 0x1787d0: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x1787D0u;
    {
        const bool branch_taken_0x1787d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1787D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1787D0u;
            // 0x1787d4: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1787d0) {
            ctx->pc = 0x17898Cu;
            goto label_17898c;
        }
    }
    ctx->pc = 0x1787D8u;
label_1787d8:
    // 0x1787d8: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x1787d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x1787dc: 0x4c30018  bgezl       $a2, . + 4 + (0x18 << 2)
    ctx->pc = 0x1787DCu;
    {
        const bool branch_taken_0x1787dc = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x1787dc) {
            ctx->pc = 0x1787E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1787DCu;
            // 0x1787e0: 0x94a3000a  lhu         $v1, 0xA($a1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x178840u;
            goto label_178840;
        }
    }
    ctx->pc = 0x1787E4u;
    // 0x1787e4: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1787e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1787e8: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1787e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1787ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1787ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1787f0: 0x8c63c4b4  lw          $v1, -0x3B4C($v1)
    ctx->pc = 0x1787f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952116)));
    // 0x1787f4: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x1787f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1787f8: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1787F8u;
    {
        const bool branch_taken_0x1787f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1787FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1787F8u;
            // 0x1787fc: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1787f8) {
            ctx->pc = 0x178810u;
            goto label_178810;
        }
    }
    ctx->pc = 0x178800u;
    // 0x178800: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x178800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x178804: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x178804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x178808: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x178808u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x17880c: 0x0  nop
    ctx->pc = 0x17880cu;
    // NOP
label_178810:
    // 0x178810: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x178810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178814: 0xc05d8fa  jal         func_1763E8
    ctx->pc = 0x178814u;
    SET_GPR_U32(ctx, 31, 0x17881Cu);
    ctx->pc = 0x178818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178814u;
            // 0x178818: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1763E8u;
    if (runtime->hasFunction(0x1763E8u)) {
        auto targetFn = runtime->lookupFunction(0x1763E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17881Cu; }
        if (ctx->pc != 0x17881Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001763E8_0x1763e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17881Cu; }
        if (ctx->pc != 0x17881Cu) { return; }
    }
    ctx->pc = 0x17881Cu;
    // 0x17881c: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x17881cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x178820: 0x8e43c4bc  lw          $v1, -0x3B44($s2)
    ctx->pc = 0x178820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294952124)));
    // 0x178824: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x178824u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x178828: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x178828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17882c: 0x9482000a  lhu         $v0, 0xA($a0)
    ctx->pc = 0x17882cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x178830: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x178830u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x178834: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x178834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x178838: 0x94a3000a  lhu         $v1, 0xA($a1)
    ctx->pc = 0x178838u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x17883c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x17883cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_178840:
    // 0x178840: 0x8e46c4bc  lw          $a2, -0x3B44($s2)
    ctx->pc = 0x178840u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294952124)));
    // 0x178844: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x178844u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x178848: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x178848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x17884c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x17884cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x178850: 0x4400010  bltz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x178850u;
    {
        const bool branch_taken_0x178850 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x178854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178850u;
            // 0x178854: 0x8e42c4bc  lw          $v0, -0x3B44($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294952124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178850) {
            ctx->pc = 0x178894u;
            goto label_178894;
        }
    }
    ctx->pc = 0x178858u;
    // 0x178858: 0x94a2000c  lhu         $v0, 0xC($a1)
    ctx->pc = 0x178858u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x17885c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17885cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x178860: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x178860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x178864: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x178864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x178868: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x178868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x17886c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17886Cu;
    {
        const bool branch_taken_0x17886c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17886Cu;
            // 0x178870: 0x8e42c4bc  lw          $v0, -0x3B44($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294952124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17886c) {
            ctx->pc = 0x178894u;
            goto label_178894;
        }
    }
    ctx->pc = 0x178874u;
label_178874:
    // 0x178874: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x178874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x178878: 0x8c42c4b4  lw          $v0, -0x3B4C($v0)
    ctx->pc = 0x178878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952116)));
    // 0x17887c: 0x10a20043  beq         $a1, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x17887Cu;
    {
        const bool branch_taken_0x17887c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x178880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17887Cu;
            // 0x178880: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17887c) {
            ctx->pc = 0x17898Cu;
            goto label_17898c;
        }
    }
    ctx->pc = 0x178884u;
    // 0x178884: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x178884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x178888: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x178888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x17888c: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x17888Cu;
    {
        const bool branch_taken_0x17888c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17888Cu;
            // 0x178890: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17888c) {
            ctx->pc = 0x17898Cu;
            goto label_17898c;
        }
    }
    ctx->pc = 0x178894u;
label_178894:
    // 0x178894: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x178894u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x178898: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x178898u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x17889c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17889cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1788a0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1788a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1788a4: 0x4400019  bltz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1788A4u;
    {
        const bool branch_taken_0x1788a4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1788A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1788A4u;
            // 0x1788a8: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1788a4) {
            ctx->pc = 0x17890Cu;
            goto label_17890c;
        }
    }
    ctx->pc = 0x1788ACu;
    // 0x1788ac: 0x8c42c4b4  lw          $v0, -0x3B4C($v0)
    ctx->pc = 0x1788acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952116)));
    // 0x1788b0: 0x50a20005  beql        $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1788B0u;
    {
        const bool branch_taken_0x1788b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1788b0) {
            ctx->pc = 0x1788B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1788B0u;
            // 0x1788b4: 0x94a2000c  lhu         $v0, 0xC($a1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1788C8u;
            goto label_1788c8;
        }
    }
    ctx->pc = 0x1788B8u;
    // 0x1788b8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1788b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1788bc: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1788bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1788c0: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1788c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1788c4: 0x94a2000c  lhu         $v0, 0xC($a1)
    ctx->pc = 0x1788c4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
label_1788c8:
    // 0x1788c8: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x1788c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
    // 0x1788cc: 0x8e43c4bc  lw          $v1, -0x3B44($s2)
    ctx->pc = 0x1788ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294952124)));
    // 0x1788d0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1788d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x1788d4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1788d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1788d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1788d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1788dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1788dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1788e0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1788e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1788e4: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1788e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x1788e8: 0xc05d776  jal         func_175DD8
    ctx->pc = 0x1788E8u;
    SET_GPR_U32(ctx, 31, 0x1788F0u);
    ctx->pc = 0x1788ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1788E8u;
            // 0x1788ec: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175DD8u;
    if (runtime->hasFunction(0x175DD8u)) {
        auto targetFn = runtime->lookupFunction(0x175DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1788F0u; }
        if (ctx->pc != 0x1788F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175DD8_0x175dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1788F0u; }
        if (ctx->pc != 0x1788F0u) { return; }
    }
    ctx->pc = 0x1788F0u;
    // 0x1788f0: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x1788f0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1788f4: 0x8e43c4bc  lw          $v1, -0x3B44($s2)
    ctx->pc = 0x1788f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294952124)));
    // 0x1788f8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1788f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1788fc: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1788fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x178900: 0x9482000a  lhu         $v0, 0xA($a0)
    ctx->pc = 0x178900u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x178904: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x178904u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x178908: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x178908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_17890c:
    // 0x17890c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x17890cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x178910: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x178910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x178914: 0x4430009  bgezl       $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x178914u;
    {
        const bool branch_taken_0x178914 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x178914) {
            ctx->pc = 0x178918u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x178914u;
            // 0x178918: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17893Cu;
            goto label_17893c;
        }
    }
    ctx->pc = 0x17891Cu;
    // 0x17891c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x17891cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x178920: 0x8c42c4b4  lw          $v0, -0x3B4C($v0)
    ctx->pc = 0x178920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952116)));
    // 0x178924: 0x50a2000a  beql        $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x178924u;
    {
        const bool branch_taken_0x178924 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x178924) {
            ctx->pc = 0x178928u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x178924u;
            // 0x178928: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x178950u;
            goto label_178950;
        }
    }
    ctx->pc = 0x17892Cu;
    // 0x17892c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x17892cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x178930: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x178930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x178934: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x178934u;
    {
        const bool branch_taken_0x178934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178934u;
            // 0x178938: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178934) {
            ctx->pc = 0x17894Cu;
            goto label_17894c;
        }
    }
    ctx->pc = 0x17893Cu;
label_17893c:
    // 0x17893c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x17893cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x178940: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x178940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x178944: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x178944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x178948: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x178948u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_17894c:
    // 0x17894c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x17894cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_178950:
    // 0x178950: 0x3c077fff  lui         $a3, 0x7FFF
    ctx->pc = 0x178950u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32767 << 16));
    // 0x178954: 0x94a3000a  lhu         $v1, 0xA($a1)
    ctx->pc = 0x178954u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x178958: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x178958u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x17895c: 0x8e46c4bc  lw          $a2, -0x3B44($s2)
    ctx->pc = 0x17895cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294952124)));
    // 0x178960: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x178960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x178964: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x178964u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x178968: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x178968u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17896c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x17896cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x178970: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x178970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178974: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x178974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x178978: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x178978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17897c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x17897cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x178980: 0xc05d8fa  jal         func_1763E8
    ctx->pc = 0x178980u;
    SET_GPR_U32(ctx, 31, 0x178988u);
    ctx->pc = 0x178984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178980u;
            // 0x178984: 0xacc20004  sw          $v0, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1763E8u;
    if (runtime->hasFunction(0x1763E8u)) {
        auto targetFn = runtime->lookupFunction(0x1763E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178988u; }
        if (ctx->pc != 0x178988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001763E8_0x1763e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178988u; }
        if (ctx->pc != 0x178988u) { return; }
    }
    ctx->pc = 0x178988u;
    // 0x178988: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x178988u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_17898c:
    // 0x17898c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x17898cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x178990: 0x52020005  beql        $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x178990u;
    {
        const bool branch_taken_0x178990 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x178990) {
            ctx->pc = 0x178994u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x178990u;
            // 0x178994: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1789A8u;
            goto label_1789a8;
        }
    }
    ctx->pc = 0x178998u;
    // 0x178998: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x178998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17899c: 0x441ff1c  bgez        $v0, . + 4 + (-0xE4 << 2)
    ctx->pc = 0x17899Cu;
    {
        const bool branch_taken_0x17899c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1789A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17899Cu;
            // 0x1789a0: 0x3c12002a  lui         $s2, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17899c) {
            ctx->pc = 0x178610u;
            runtime->cooperativeGuestYield();
            goto label_178610;
        }
    }
    ctx->pc = 0x1789A4u;
    // 0x1789a4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1789a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1789a8:
    // 0x1789a8: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1789a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1789ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1789acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1789b0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1789b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1789b4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1789b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1789b8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1789b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1789bc: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1789bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1789c0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1789c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1789c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1789c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1789c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1789C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1789CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1789C8u;
            // 0x1789cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178610u: goto label_178610;
            case 0x178678u: goto label_178678;
            case 0x1786A8u: goto label_1786a8;
            case 0x1786DCu: goto label_1786dc;
            case 0x178710u: goto label_178710;
            case 0x178754u: goto label_178754;
            case 0x178784u: goto label_178784;
            case 0x178794u: goto label_178794;
            case 0x178798u: goto label_178798;
            case 0x1787D8u: goto label_1787d8;
            case 0x178810u: goto label_178810;
            case 0x178840u: goto label_178840;
            case 0x178874u: goto label_178874;
            case 0x178894u: goto label_178894;
            case 0x1788C8u: goto label_1788c8;
            case 0x17890Cu: goto label_17890c;
            case 0x17893Cu: goto label_17893c;
            case 0x17894Cu: goto label_17894c;
            case 0x178950u: goto label_178950;
            case 0x17898Cu: goto label_17898c;
            case 0x1789A8u: goto label_1789a8;
            case 0x178A30u: goto label_178a30;
            case 0x178A98u: goto label_178a98;
            case 0x178ABCu: goto label_178abc;
            case 0x178ADCu: goto label_178adc;
            case 0x178AF4u: goto label_178af4;
            case 0x178AF8u: goto label_178af8;
            case 0x178B60u: goto label_178b60;
            case 0x178B98u: goto label_178b98;
            case 0x178BC8u: goto label_178bc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1789D0u;
    // 0x1789d0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1789d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1789d4: 0x0  nop
    ctx->pc = 0x1789d4u;
    // NOP
    // 0x1789d8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1789d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1789dc: 0x0  nop
    ctx->pc = 0x1789dcu;
    // NOP
    // 0x1789e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1789e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1789e4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1789e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1789e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1789e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1789ec: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1789ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1789f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1789f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1789f4: 0x26130008  addiu       $s3, $s0, 0x8
    ctx->pc = 0x1789f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1789f8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1789f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1789fc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1789fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178a00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x178a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x178a04: 0xc05e996  jal         func_17A658
    ctx->pc = 0x178A04u;
    SET_GPR_U32(ctx, 31, 0x178A0Cu);
    ctx->pc = 0x178A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178A04u;
            // 0x178a08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178A0Cu; }
        if (ctx->pc != 0x178A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178A0Cu; }
        if (ctx->pc != 0x178A0Cu) { return; }
    }
    ctx->pc = 0x178A0Cu;
    // 0x178a0c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x178a0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178a10: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x178a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x178a14: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x178A14u;
    {
        const bool branch_taken_0x178a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x178a14) {
            ctx->pc = 0x178A18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x178A14u;
            // 0x178a18: 0x96430000  lhu         $v1, 0x0($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x178A30u;
            goto label_178a30;
        }
    }
    ctx->pc = 0x178A1Cu;
    // 0x178a1c: 0x1220006a  beqz        $s1, . + 4 + (0x6A << 2)
    ctx->pc = 0x178A1Cu;
    {
        const bool branch_taken_0x178a1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x178A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178A1Cu;
            // 0x178a20: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178a1c) {
            ctx->pc = 0x178BC8u;
            goto label_178bc8;
        }
    }
    ctx->pc = 0x178A24u;
    // 0x178a24: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x178A24u;
    {
        const bool branch_taken_0x178a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178A24u;
            // 0x178a28: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178a24) {
            ctx->pc = 0x178AF8u;
            goto label_178af8;
        }
    }
    ctx->pc = 0x178A2Cu;
    // 0x178a2c: 0x0  nop
    ctx->pc = 0x178a2cu;
    // NOP
label_178a30:
    // 0x178a30: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x178a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x178a34: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x178a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x178a38: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x178a38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x178a3c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x178a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x178a40: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x178a40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178a44: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x178a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x178a48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x178a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178a4c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x178a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x178a50: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x178a50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x178a54: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x178a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x178a58: 0x40f809  jalr        $v0
    ctx->pc = 0x178A58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x178A60u);
        ctx->pc = 0x178A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178A58u;
            // 0x178a5c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x178A60u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178610u: goto label_178610;
            case 0x178678u: goto label_178678;
            case 0x1786A8u: goto label_1786a8;
            case 0x1786DCu: goto label_1786dc;
            case 0x178710u: goto label_178710;
            case 0x178754u: goto label_178754;
            case 0x178784u: goto label_178784;
            case 0x178794u: goto label_178794;
            case 0x178798u: goto label_178798;
            case 0x1787D8u: goto label_1787d8;
            case 0x178810u: goto label_178810;
            case 0x178840u: goto label_178840;
            case 0x178874u: goto label_178874;
            case 0x178894u: goto label_178894;
            case 0x1788C8u: goto label_1788c8;
            case 0x17890Cu: goto label_17890c;
            case 0x17893Cu: goto label_17893c;
            case 0x17894Cu: goto label_17894c;
            case 0x178950u: goto label_178950;
            case 0x17898Cu: goto label_17898c;
            case 0x1789A8u: goto label_1789a8;
            case 0x178A30u: goto label_178a30;
            case 0x178A98u: goto label_178a98;
            case 0x178ABCu: goto label_178abc;
            case 0x178ADCu: goto label_178adc;
            case 0x178AF4u: goto label_178af4;
            case 0x178AF8u: goto label_178af8;
            case 0x178B60u: goto label_178b60;
            case 0x178B98u: goto label_178b98;
            case 0x178BC8u: goto label_178bc8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x178A60u; }
            if (ctx->pc != 0x178A60u) { return; }
        }
        }
    }
    ctx->pc = 0x178A60u;
    // 0x178a60: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x178a60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178a64: 0x1240004c  beqz        $s2, . + 4 + (0x4C << 2)
    ctx->pc = 0x178A64u;
    {
        const bool branch_taken_0x178a64 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x178A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178A64u;
            // 0x178a68: 0x3c060033  lui         $a2, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178a64) {
            ctx->pc = 0x178B98u;
            goto label_178b98;
        }
    }
    ctx->pc = 0x178A6Cu;
    // 0x178a6c: 0x82040008  lb          $a0, 0x8($s0)
    ctx->pc = 0x178a6cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x178a70: 0x10800020  beqz        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x178A70u;
    {
        const bool branch_taken_0x178a70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x178A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178A70u;
            // 0x178a74: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178a70) {
            ctx->pc = 0x178AF4u;
            goto label_178af4;
        }
    }
    ctx->pc = 0x178A78u;
    // 0x178a78: 0x1082001f  beq         $a0, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x178A78u;
    {
        const bool branch_taken_0x178a78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x178A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178A78u;
            // 0x178a7c: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178a78) {
            ctx->pc = 0x178AF8u;
            goto label_178af8;
        }
    }
    ctx->pc = 0x178A80u;
    // 0x178a80: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x178a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x178a84: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x178A84u;
    {
        const bool branch_taken_0x178a84 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x178A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178A84u;
            // 0x178a88: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x178a84) {
            ctx->pc = 0x178A98u;
            goto label_178a98;
        }
    }
    ctx->pc = 0x178A8Cu;
    // 0x178a8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x178a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x178a90: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x178A90u;
    {
        const bool branch_taken_0x178a90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x178A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178A90u;
            // 0x178a94: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178a90) {
            ctx->pc = 0x178AF8u;
            goto label_178af8;
        }
    }
    ctx->pc = 0x178A98u;
label_178a98:
    // 0x178a98: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x178A98u;
    {
        const bool branch_taken_0x178a98 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x178a98) {
            ctx->pc = 0x178ABCu;
            goto label_178abc;
        }
    }
    ctx->pc = 0x178AA0u;
    // 0x178aa0: 0xc05d656  jal         func_175958
    ctx->pc = 0x178AA0u;
    SET_GPR_U32(ctx, 31, 0x178AA8u);
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178AA8u; }
        if (ctx->pc != 0x178AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178AA8u; }
        if (ctx->pc != 0x178AA8u) { return; }
    }
    ctx->pc = 0x178AA8u;
    // 0x178aa8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x178aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178aac: 0xc05d69c  jal         func_175A70
    ctx->pc = 0x178AACu;
    SET_GPR_U32(ctx, 31, 0x178AB4u);
    ctx->pc = 0x178AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178AACu;
            // 0x178ab0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175A70u;
    if (runtime->hasFunction(0x175A70u)) {
        auto targetFn = runtime->lookupFunction(0x175A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178AB4u; }
        if (ctx->pc != 0x178AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175A70_0x175a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178AB4u; }
        if (ctx->pc != 0x178AB4u) { return; }
    }
    ctx->pc = 0x178AB4u;
    // 0x178ab4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x178AB4u;
    {
        const bool branch_taken_0x178ab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x178ab4) {
            ctx->pc = 0x178ADCu;
            goto label_178adc;
        }
    }
    ctx->pc = 0x178ABCu;
label_178abc:
    // 0x178abc: 0xc05d656  jal         func_175958
    ctx->pc = 0x178ABCu;
    SET_GPR_U32(ctx, 31, 0x178AC4u);
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178AC4u; }
        if (ctx->pc != 0x178AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178AC4u; }
        if (ctx->pc != 0x178AC4u) { return; }
    }
    ctx->pc = 0x178AC4u;
    // 0x178ac4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x178ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178ac8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x178ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178acc: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x178ACCu;
    SET_GPR_U32(ctx, 31, 0x178AD4u);
    ctx->pc = 0x178AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178ACCu;
            // 0x178ad0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178AD4u; }
        if (ctx->pc != 0x178AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178AD4u; }
        if (ctx->pc != 0x178AD4u) { return; }
    }
    ctx->pc = 0x178AD4u;
    // 0x178ad4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x178AD4u;
    {
        const bool branch_taken_0x178ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178AD4u;
            // 0x178ad8: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178ad4) {
            ctx->pc = 0x178AF8u;
            goto label_178af8;
        }
    }
    ctx->pc = 0x178ADCu;
label_178adc:
    // 0x178adc: 0xc05d656  jal         func_175958
    ctx->pc = 0x178ADCu;
    SET_GPR_U32(ctx, 31, 0x178AE4u);
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178AE4u; }
        if (ctx->pc != 0x178AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178AE4u; }
        if (ctx->pc != 0x178AE4u) { return; }
    }
    ctx->pc = 0x178AE4u;
    // 0x178ae4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x178ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178ae8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x178ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178aec: 0xc05d6c2  jal         func_175B08
    ctx->pc = 0x178AECu;
    SET_GPR_U32(ctx, 31, 0x178AF4u);
    ctx->pc = 0x178AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178AECu;
            // 0x178af0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B08u;
    if (runtime->hasFunction(0x175B08u)) {
        auto targetFn = runtime->lookupFunction(0x175B08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178AF4u; }
        if (ctx->pc != 0x178AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B08_0x175b08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178AF4u; }
        if (ctx->pc != 0x178AF4u) { return; }
    }
    ctx->pc = 0x178AF4u;
label_178af4:
    // 0x178af4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x178af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_178af8:
    // 0x178af8: 0x8c433834  lw          $v1, 0x3834($v0)
    ctx->pc = 0x178af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14388)));
    // 0x178afc: 0x2c620010  sltiu       $v0, $v1, 0x10
    ctx->pc = 0x178afcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x178b00: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x178b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x178b04: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x178B04u;
    {
        const bool branch_taken_0x178b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178B04u;
            // 0x178b08: 0x3c060033  lui         $a2, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178b04) {
            ctx->pc = 0x178B98u;
            goto label_178b98;
        }
    }
    ctx->pc = 0x178B0Cu;
    // 0x178b0c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x178b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x178b10: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x178b10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x178b14: 0x24423838  addiu       $v0, $v0, 0x3838
    ctx->pc = 0x178b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14392));
    // 0x178b18: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x178b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x178b1c: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x178b1cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x178b20: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x178b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x178b24: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x178B24u;
    {
        const bool branch_taken_0x178b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x178b24) {
            ctx->pc = 0x178B28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x178B24u;
            // 0x178b28: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x178B60u;
            goto label_178b60;
        }
    }
    ctx->pc = 0x178B2Cu;
    // 0x178b2c: 0xc05e37e  jal         func_178DF8
    ctx->pc = 0x178B2Cu;
    SET_GPR_U32(ctx, 31, 0x178B34u);
    ctx->pc = 0x178DF8u;
    if (runtime->hasFunction(0x178DF8u)) {
        auto targetFn = runtime->lookupFunction(0x178DF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178B34u; }
        if (ctx->pc != 0x178B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178DF8_0x178df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178B34u; }
        if (ctx->pc != 0x178B34u) { return; }
    }
    ctx->pc = 0x178B34u;
    // 0x178b34: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x178B34u;
    SET_GPR_U32(ctx, 31, 0x178B3Cu);
    ctx->pc = 0x178B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178B34u;
            // 0x178b38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178B3Cu; }
        if (ctx->pc != 0x178B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178B3Cu; }
        if (ctx->pc != 0x178B3Cu) { return; }
    }
    ctx->pc = 0x178B3Cu;
    // 0x178b3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x178b3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178b40: 0xc08e200  jal         func_238800
    ctx->pc = 0x178B40u;
    SET_GPR_U32(ctx, 31, 0x178B48u);
    ctx->pc = 0x178B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178B40u;
            // 0x178b44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238800u;
    if (runtime->hasFunction(0x238800u)) {
        auto targetFn = runtime->lookupFunction(0x238800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178B48u; }
        if (ctx->pc != 0x178B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238800_0x238810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178B48u; }
        if (ctx->pc != 0x178B48u) { return; }
    }
    ctx->pc = 0x178B48u;
    // 0x178b48: 0xc05e37e  jal         func_178DF8
    ctx->pc = 0x178B48u;
    SET_GPR_U32(ctx, 31, 0x178B50u);
    ctx->pc = 0x178DF8u;
    if (runtime->hasFunction(0x178DF8u)) {
        auto targetFn = runtime->lookupFunction(0x178DF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178B50u; }
        if (ctx->pc != 0x178B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178DF8_0x178df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178B50u; }
        if (ctx->pc != 0x178B50u) { return; }
    }
    ctx->pc = 0x178B50u;
    // 0x178b50: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x178b50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x178b54: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x178b54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x178b58: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x178b58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x178b5c: 0x0  nop
    ctx->pc = 0x178b5cu;
    // NOP
label_178b60:
    // 0x178b60: 0xc05e394  jal         func_178E50
    ctx->pc = 0x178B60u;
    SET_GPR_U32(ctx, 31, 0x178B68u);
    ctx->pc = 0x178B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178B60u;
            // 0x178b64: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178E50u;
    if (runtime->hasFunction(0x178E50u)) {
        auto targetFn = runtime->lookupFunction(0x178E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178B68u; }
        if (ctx->pc != 0x178B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_178e50_0x178e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178B68u; }
        if (ctx->pc != 0x178B68u) { return; }
    }
    ctx->pc = 0x178B68u;
    // 0x178b68: 0xc05e36a  jal         func_178DA8
    ctx->pc = 0x178B68u;
    SET_GPR_U32(ctx, 31, 0x178B70u);
    ctx->pc = 0x178DA8u;
    if (runtime->hasFunction(0x178DA8u)) {
        auto targetFn = runtime->lookupFunction(0x178DA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178B70u; }
        if (ctx->pc != 0x178B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178DA8_0x178da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178B70u; }
        if (ctx->pc != 0x178B70u) { return; }
    }
    ctx->pc = 0x178B70u;
    // 0x178b70: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x178b70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x178b74: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x178b74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x178b78: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x178b78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
    // 0x178b7c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x178b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x178b80: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x178b80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x178b84: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x178b84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x178b88: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x178b88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x178b8c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x178b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x178b90: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x178b90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x178b94: 0x0  nop
    ctx->pc = 0x178b94u;
    // NOP
label_178b98:
    // 0x178b98: 0x8cc23830  lw          $v0, 0x3830($a2)
    ctx->pc = 0x178b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 14384)));
    // 0x178b9c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x178B9Cu;
    {
        const bool branch_taken_0x178b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x178BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178B9Cu;
            // 0x178ba0: 0x3c050033  lui         $a1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178b9c) {
            ctx->pc = 0x178BC8u;
            goto label_178bc8;
        }
    }
    ctx->pc = 0x178BA4u;
    // 0x178ba4: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x178ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x178ba8: 0x8ca33834  lw          $v1, 0x3834($a1)
    ctx->pc = 0x178ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 14388)));
    // 0x178bac: 0x24843838  addiu       $a0, $a0, 0x3838
    ctx->pc = 0x178bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14392));
    // 0x178bb0: 0xacc03830  sw          $zero, 0x3830($a2)
    ctx->pc = 0x178bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 14384), GPR_U32(ctx, 0));
    // 0x178bb4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x178bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x178bb8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x178bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x178bbc: 0xaca33834  sw          $v1, 0x3834($a1)
    ctx->pc = 0x178bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 14388), GPR_U32(ctx, 3));
    // 0x178bc0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x178bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x178bc4: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x178bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
label_178bc8:
    // 0x178bc8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x178bc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x178bcc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x178bccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x178bd0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x178bd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178bd4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x178bd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178bd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x178bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x178BDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178BDCu;
            // 0x178be0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178610u: goto label_178610;
            case 0x178678u: goto label_178678;
            case 0x1786A8u: goto label_1786a8;
            case 0x1786DCu: goto label_1786dc;
            case 0x178710u: goto label_178710;
            case 0x178754u: goto label_178754;
            case 0x178784u: goto label_178784;
            case 0x178794u: goto label_178794;
            case 0x178798u: goto label_178798;
            case 0x1787D8u: goto label_1787d8;
            case 0x178810u: goto label_178810;
            case 0x178840u: goto label_178840;
            case 0x178874u: goto label_178874;
            case 0x178894u: goto label_178894;
            case 0x1788C8u: goto label_1788c8;
            case 0x17890Cu: goto label_17890c;
            case 0x17893Cu: goto label_17893c;
            case 0x17894Cu: goto label_17894c;
            case 0x178950u: goto label_178950;
            case 0x17898Cu: goto label_17898c;
            case 0x1789A8u: goto label_1789a8;
            case 0x178A30u: goto label_178a30;
            case 0x178A98u: goto label_178a98;
            case 0x178ABCu: goto label_178abc;
            case 0x178ADCu: goto label_178adc;
            case 0x178AF4u: goto label_178af4;
            case 0x178AF8u: goto label_178af8;
            case 0x178B60u: goto label_178b60;
            case 0x178B98u: goto label_178b98;
            case 0x178BC8u: goto label_178bc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x178BE4u;
    // 0x178be4: 0x0  nop
    ctx->pc = 0x178be4u;
    // NOP
    // 0x178be8: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x178be8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x178bec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x178becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x178bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x178BF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178BF0u;
            // 0x178bf4: 0xac623830  sw          $v0, 0x3830($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 14384), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178610u: goto label_178610;
            case 0x178678u: goto label_178678;
            case 0x1786A8u: goto label_1786a8;
            case 0x1786DCu: goto label_1786dc;
            case 0x178710u: goto label_178710;
            case 0x178754u: goto label_178754;
            case 0x178784u: goto label_178784;
            case 0x178794u: goto label_178794;
            case 0x178798u: goto label_178798;
            case 0x1787D8u: goto label_1787d8;
            case 0x178810u: goto label_178810;
            case 0x178840u: goto label_178840;
            case 0x178874u: goto label_178874;
            case 0x178894u: goto label_178894;
            case 0x1788C8u: goto label_1788c8;
            case 0x17890Cu: goto label_17890c;
            case 0x17893Cu: goto label_17893c;
            case 0x17894Cu: goto label_17894c;
            case 0x178950u: goto label_178950;
            case 0x17898Cu: goto label_17898c;
            case 0x1789A8u: goto label_1789a8;
            case 0x178A30u: goto label_178a30;
            case 0x178A98u: goto label_178a98;
            case 0x178ABCu: goto label_178abc;
            case 0x178ADCu: goto label_178adc;
            case 0x178AF4u: goto label_178af4;
            case 0x178AF8u: goto label_178af8;
            case 0x178B60u: goto label_178b60;
            case 0x178B98u: goto label_178b98;
            case 0x178BC8u: goto label_178bc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x178BF8u;
    // 0x178bf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x178bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x178bfc: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x178bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x178c00: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x178c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x178c04: 0x24633838  addiu       $v1, $v1, 0x3838
    ctx->pc = 0x178c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14392));
    // 0x178c08: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x178c08u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x178c0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x178c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x178c10: 0x8e023834  lw          $v0, 0x3834($s0)
    ctx->pc = 0x178c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14388)));
    // 0x178c14: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x178c14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x178c18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x178c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x178c1c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x178c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178c20: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x178c20u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x178c24: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x178c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x178c28: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x178c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x178c2c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x178c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x178c30: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x178c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x178c34: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x178c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178c38: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x178c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x178c3c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x178c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x178c40: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x178c40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x178c44: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x178c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x178c48: 0x40f809  jalr        $v0
    ctx->pc = 0x178C48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x178C50u);
        ctx->pc = 0x178C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178C48u;
            // 0x178c4c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x178C50u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178610u: goto label_178610;
            case 0x178678u: goto label_178678;
            case 0x1786A8u: goto label_1786a8;
            case 0x1786DCu: goto label_1786dc;
            case 0x178710u: goto label_178710;
            case 0x178754u: goto label_178754;
            case 0x178784u: goto label_178784;
            case 0x178794u: goto label_178794;
            case 0x178798u: goto label_178798;
            case 0x1787D8u: goto label_1787d8;
            case 0x178810u: goto label_178810;
            case 0x178840u: goto label_178840;
            case 0x178874u: goto label_178874;
            case 0x178894u: goto label_178894;
            case 0x1788C8u: goto label_1788c8;
            case 0x17890Cu: goto label_17890c;
            case 0x17893Cu: goto label_17893c;
            case 0x17894Cu: goto label_17894c;
            case 0x178950u: goto label_178950;
            case 0x17898Cu: goto label_17898c;
            case 0x1789A8u: goto label_1789a8;
            case 0x178A30u: goto label_178a30;
            case 0x178A98u: goto label_178a98;
            case 0x178ABCu: goto label_178abc;
            case 0x178ADCu: goto label_178adc;
            case 0x178AF4u: goto label_178af4;
            case 0x178AF8u: goto label_178af8;
            case 0x178B60u: goto label_178b60;
            case 0x178B98u: goto label_178b98;
            case 0x178BC8u: goto label_178bc8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x178C50u; }
            if (ctx->pc != 0x178C50u) { return; }
        }
        }
    }
    ctx->pc = 0x178C50u;
    // 0x178c50: 0x8e023834  lw          $v0, 0x3834($s0)
    ctx->pc = 0x178c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14388)));
    // 0x178c54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x178c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178c58: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x178c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x178c5c: 0xae023834  sw          $v0, 0x3834($s0)
    ctx->pc = 0x178c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 14388), GPR_U32(ctx, 2));
    // 0x178c60: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x178c60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178c64: 0x3e00008  jr          $ra
    ctx->pc = 0x178C64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178C64u;
            // 0x178c68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178610u: goto label_178610;
            case 0x178678u: goto label_178678;
            case 0x1786A8u: goto label_1786a8;
            case 0x1786DCu: goto label_1786dc;
            case 0x178710u: goto label_178710;
            case 0x178754u: goto label_178754;
            case 0x178784u: goto label_178784;
            case 0x178794u: goto label_178794;
            case 0x178798u: goto label_178798;
            case 0x1787D8u: goto label_1787d8;
            case 0x178810u: goto label_178810;
            case 0x178840u: goto label_178840;
            case 0x178874u: goto label_178874;
            case 0x178894u: goto label_178894;
            case 0x1788C8u: goto label_1788c8;
            case 0x17890Cu: goto label_17890c;
            case 0x17893Cu: goto label_17893c;
            case 0x17894Cu: goto label_17894c;
            case 0x178950u: goto label_178950;
            case 0x17898Cu: goto label_17898c;
            case 0x1789A8u: goto label_1789a8;
            case 0x178A30u: goto label_178a30;
            case 0x178A98u: goto label_178a98;
            case 0x178ABCu: goto label_178abc;
            case 0x178ADCu: goto label_178adc;
            case 0x178AF4u: goto label_178af4;
            case 0x178AF8u: goto label_178af8;
            case 0x178B60u: goto label_178b60;
            case 0x178B98u: goto label_178b98;
            case 0x178BC8u: goto label_178bc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x178C6Cu;
    // 0x178c6c: 0x0  nop
    ctx->pc = 0x178c6cu;
    // NOP
    // 0x178c70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x178c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x178c74: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x178c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x178c78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x178c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x178c7c: 0xc05d656  jal         func_175958
    ctx->pc = 0x178C7Cu;
    SET_GPR_U32(ctx, 31, 0x178C84u);
    ctx->pc = 0x178C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178C7Cu;
            // 0x178c80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178C84u; }
        if (ctx->pc != 0x178C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178C84u; }
        if (ctx->pc != 0x178C84u) { return; }
    }
    ctx->pc = 0x178C84u;
    // 0x178c84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x178c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178c88: 0xc05d6a4  jal         func_175A90
    ctx->pc = 0x178C88u;
    SET_GPR_U32(ctx, 31, 0x178C90u);
    ctx->pc = 0x178C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178C88u;
            // 0x178c8c: 0x26050008  addiu       $a1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175A90u;
    if (runtime->hasFunction(0x175A90u)) {
        auto targetFn = runtime->lookupFunction(0x175A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178C90u; }
        if (ctx->pc != 0x178C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175A90_0x175a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178C90u; }
        if (ctx->pc != 0x178C90u) { return; }
    }
    ctx->pc = 0x178C90u;
    // 0x178c90: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x178c90u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178c94: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x178c94u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x178c98: 0x2610e848  addiu       $s0, $s0, -0x17B8
    ctx->pc = 0x178c98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961224));
    // 0x178c9c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x178c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x178ca0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x178ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x178ca4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x178ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178ca8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x178ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x178cac: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x178cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x178cb0: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x178cb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x178cb4: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x178cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x178cb8: 0x40f809  jalr        $v0
    ctx->pc = 0x178CB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x178CC0u);
        ctx->pc = 0x178CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178CB8u;
            // 0x178cbc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x178CC0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178610u: goto label_178610;
            case 0x178678u: goto label_178678;
            case 0x1786A8u: goto label_1786a8;
            case 0x1786DCu: goto label_1786dc;
            case 0x178710u: goto label_178710;
            case 0x178754u: goto label_178754;
            case 0x178784u: goto label_178784;
            case 0x178794u: goto label_178794;
            case 0x178798u: goto label_178798;
            case 0x1787D8u: goto label_1787d8;
            case 0x178810u: goto label_178810;
            case 0x178840u: goto label_178840;
            case 0x178874u: goto label_178874;
            case 0x178894u: goto label_178894;
            case 0x1788C8u: goto label_1788c8;
            case 0x17890Cu: goto label_17890c;
            case 0x17893Cu: goto label_17893c;
            case 0x17894Cu: goto label_17894c;
            case 0x178950u: goto label_178950;
            case 0x17898Cu: goto label_17898c;
            case 0x1789A8u: goto label_1789a8;
            case 0x178A30u: goto label_178a30;
            case 0x178A98u: goto label_178a98;
            case 0x178ABCu: goto label_178abc;
            case 0x178ADCu: goto label_178adc;
            case 0x178AF4u: goto label_178af4;
            case 0x178AF8u: goto label_178af8;
            case 0x178B60u: goto label_178b60;
            case 0x178B98u: goto label_178b98;
            case 0x178BC8u: goto label_178bc8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x178CC0u; }
            if (ctx->pc != 0x178CC0u) { return; }
        }
        }
    }
    ctx->pc = 0x178CC0u;
    // 0x178cc0: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x178cc0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178cc4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x178cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x178cc8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x178cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x178ccc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x178cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178cd0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x178cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x178cd4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x178cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x178cd8: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x178cd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x178cdc: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x178cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x178ce0: 0x40f809  jalr        $v0
    ctx->pc = 0x178CE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x178CE8u);
        ctx->pc = 0x178CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178CE0u;
            // 0x178ce4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x178CE8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178610u: goto label_178610;
            case 0x178678u: goto label_178678;
            case 0x1786A8u: goto label_1786a8;
            case 0x1786DCu: goto label_1786dc;
            case 0x178710u: goto label_178710;
            case 0x178754u: goto label_178754;
            case 0x178784u: goto label_178784;
            case 0x178794u: goto label_178794;
            case 0x178798u: goto label_178798;
            case 0x1787D8u: goto label_1787d8;
            case 0x178810u: goto label_178810;
            case 0x178840u: goto label_178840;
            case 0x178874u: goto label_178874;
            case 0x178894u: goto label_178894;
            case 0x1788C8u: goto label_1788c8;
            case 0x17890Cu: goto label_17890c;
            case 0x17893Cu: goto label_17893c;
            case 0x17894Cu: goto label_17894c;
            case 0x178950u: goto label_178950;
            case 0x17898Cu: goto label_17898c;
            case 0x1789A8u: goto label_1789a8;
            case 0x178A30u: goto label_178a30;
            case 0x178A98u: goto label_178a98;
            case 0x178ABCu: goto label_178abc;
            case 0x178ADCu: goto label_178adc;
            case 0x178AF4u: goto label_178af4;
            case 0x178AF8u: goto label_178af8;
            case 0x178B60u: goto label_178b60;
            case 0x178B98u: goto label_178b98;
            case 0x178BC8u: goto label_178bc8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x178CE8u; }
            if (ctx->pc != 0x178CE8u) { return; }
        }
        }
    }
    ctx->pc = 0x178CE8u;
    // 0x178ce8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x178ce8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178cec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x178cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x178CF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178CF0u;
            // 0x178cf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178610u: goto label_178610;
            case 0x178678u: goto label_178678;
            case 0x1786A8u: goto label_1786a8;
            case 0x1786DCu: goto label_1786dc;
            case 0x178710u: goto label_178710;
            case 0x178754u: goto label_178754;
            case 0x178784u: goto label_178784;
            case 0x178794u: goto label_178794;
            case 0x178798u: goto label_178798;
            case 0x1787D8u: goto label_1787d8;
            case 0x178810u: goto label_178810;
            case 0x178840u: goto label_178840;
            case 0x178874u: goto label_178874;
            case 0x178894u: goto label_178894;
            case 0x1788C8u: goto label_1788c8;
            case 0x17890Cu: goto label_17890c;
            case 0x17893Cu: goto label_17893c;
            case 0x17894Cu: goto label_17894c;
            case 0x178950u: goto label_178950;
            case 0x17898Cu: goto label_17898c;
            case 0x1789A8u: goto label_1789a8;
            case 0x178A30u: goto label_178a30;
            case 0x178A98u: goto label_178a98;
            case 0x178ABCu: goto label_178abc;
            case 0x178ADCu: goto label_178adc;
            case 0x178AF4u: goto label_178af4;
            case 0x178AF8u: goto label_178af8;
            case 0x178B60u: goto label_178b60;
            case 0x178B98u: goto label_178b98;
            case 0x178BC8u: goto label_178bc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x178CF8u;
    // 0x178cf8: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x178cf8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x178cfc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x178cfcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x178d00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x178d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x178d04: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x178d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x178d08: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x178d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x178d0c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x178d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x178d10: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x178d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x178d14: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x178d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x178d18: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x178d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x178d1c: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x178d1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x178d20: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x178d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x178d24: 0x40f809  jalr        $v0
    ctx->pc = 0x178D24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x178D2Cu);
        ctx->pc = 0x178D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178D24u;
            // 0x178d28: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x178D2Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178610u: goto label_178610;
            case 0x178678u: goto label_178678;
            case 0x1786A8u: goto label_1786a8;
            case 0x1786DCu: goto label_1786dc;
            case 0x178710u: goto label_178710;
            case 0x178754u: goto label_178754;
            case 0x178784u: goto label_178784;
            case 0x178794u: goto label_178794;
            case 0x178798u: goto label_178798;
            case 0x1787D8u: goto label_1787d8;
            case 0x178810u: goto label_178810;
            case 0x178840u: goto label_178840;
            case 0x178874u: goto label_178874;
            case 0x178894u: goto label_178894;
            case 0x1788C8u: goto label_1788c8;
            case 0x17890Cu: goto label_17890c;
            case 0x17893Cu: goto label_17893c;
            case 0x17894Cu: goto label_17894c;
            case 0x178950u: goto label_178950;
            case 0x17898Cu: goto label_17898c;
            case 0x1789A8u: goto label_1789a8;
            case 0x178A30u: goto label_178a30;
            case 0x178A98u: goto label_178a98;
            case 0x178ABCu: goto label_178abc;
            case 0x178ADCu: goto label_178adc;
            case 0x178AF4u: goto label_178af4;
            case 0x178AF8u: goto label_178af8;
            case 0x178B60u: goto label_178b60;
            case 0x178B98u: goto label_178b98;
            case 0x178BC8u: goto label_178bc8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x178D2Cu; }
            if (ctx->pc != 0x178D2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x178D2Cu;
    // 0x178d2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x178d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178d30: 0x3e00008  jr          $ra
    ctx->pc = 0x178D30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178D30u;
            // 0x178d34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178610u: goto label_178610;
            case 0x178678u: goto label_178678;
            case 0x1786A8u: goto label_1786a8;
            case 0x1786DCu: goto label_1786dc;
            case 0x178710u: goto label_178710;
            case 0x178754u: goto label_178754;
            case 0x178784u: goto label_178784;
            case 0x178794u: goto label_178794;
            case 0x178798u: goto label_178798;
            case 0x1787D8u: goto label_1787d8;
            case 0x178810u: goto label_178810;
            case 0x178840u: goto label_178840;
            case 0x178874u: goto label_178874;
            case 0x178894u: goto label_178894;
            case 0x1788C8u: goto label_1788c8;
            case 0x17890Cu: goto label_17890c;
            case 0x17893Cu: goto label_17893c;
            case 0x17894Cu: goto label_17894c;
            case 0x178950u: goto label_178950;
            case 0x17898Cu: goto label_17898c;
            case 0x1789A8u: goto label_1789a8;
            case 0x178A30u: goto label_178a30;
            case 0x178A98u: goto label_178a98;
            case 0x178ABCu: goto label_178abc;
            case 0x178ADCu: goto label_178adc;
            case 0x178AF4u: goto label_178af4;
            case 0x178AF8u: goto label_178af8;
            case 0x178B60u: goto label_178b60;
            case 0x178B98u: goto label_178b98;
            case 0x178BC8u: goto label_178bc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x178D38u;
}
