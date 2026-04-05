#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001403C8
// Address: 0x1403c8 - 0x140578
void sub_001403C8_0x1403c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001403C8_0x1403c8");
#endif

    ctx->pc = 0x1403c8u;

    // 0x1403c8: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x1403c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
    // 0x1403cc: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1403ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1403d0: 0x8cc5bbb0  lw          $a1, -0x4450($a2)
    ctx->pc = 0x1403d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294949808)));
    // 0x1403d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1403d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1403d8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1403d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1403dc: 0x24c2bbb0  addiu       $v0, $a2, -0x4450
    ctx->pc = 0x1403dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949808));
    // 0x1403e0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1403e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1403e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1403e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1403e8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1403e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1403ec: 0x10a20014  beq         $a1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1403ECu;
    {
        const bool branch_taken_0x1403ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1403F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1403ECu;
            // 0x1403f0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1403ec) {
            ctx->pc = 0x140440u;
            goto label_140440;
        }
    }
    ctx->pc = 0x1403F4u;
    // 0x1403f4: 0x0  nop
    ctx->pc = 0x1403f4u;
    // NOP
label_1403f8:
    // 0x1403f8: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1403f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1403fc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1403fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x140400: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x140400u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x140404: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x140404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x140408: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x140408u;
    {
        const bool branch_taken_0x140408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140408) {
            ctx->pc = 0x14040Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x140408u;
            // 0x14040c: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x140434u;
            goto label_140434;
        }
    }
    ctx->pc = 0x140410u;
    // 0x140410: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x140410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x140414: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x140414u;
    {
        const bool branch_taken_0x140414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140414) {
            ctx->pc = 0x140418u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x140414u;
            // 0x140418: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x140434u;
            goto label_140434;
        }
    }
    ctx->pc = 0x14041Cu;
    // 0x14041c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x14041cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x140420: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x140420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x140424: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x140424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x140428: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x140428u;
    {
        const bool branch_taken_0x140428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x140428) {
            ctx->pc = 0x140440u;
            goto label_140440;
        }
    }
    ctx->pc = 0x140430u;
    // 0x140430: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x140430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_140434:
    // 0x140434: 0x24c2bbb0  addiu       $v0, $a2, -0x4450
    ctx->pc = 0x140434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949808));
    // 0x140438: 0x14a2ffef  bne         $a1, $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x140438u;
    {
        const bool branch_taken_0x140438 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x14043Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140438u;
            // 0x14043c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140438) {
            ctx->pc = 0x1403F8u;
            runtime->cooperativeGuestYield();
            goto label_1403f8;
        }
    }
    ctx->pc = 0x140440u;
label_140440:
    // 0x140440: 0x10800045  beqz        $a0, . + 4 + (0x45 << 2)
    ctx->pc = 0x140440u;
    {
        const bool branch_taken_0x140440 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x140444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140440u;
            // 0x140444: 0x3c110033  lui         $s1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140440) {
            ctx->pc = 0x140558u;
            goto label_140558;
        }
    }
    ctx->pc = 0x140448u;
    // 0x140448: 0x8e23ed60  lw          $v1, -0x12A0($s1)
    ctx->pc = 0x140448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294962528)));
    // 0x14044c: 0x2c620100  sltiu       $v0, $v1, 0x100
    ctx->pc = 0x14044cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x140450: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x140450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x140454: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x140454u;
    {
        const bool branch_taken_0x140454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x140458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140454u;
            // 0x140458: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140454) {
            ctx->pc = 0x140480u;
            goto label_140480;
        }
    }
    ctx->pc = 0x14045Cu;
    // 0x14045c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x14045cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x140460: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x140460u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x140464: 0x2442ed68  addiu       $v0, $v0, -0x1298
    ctx->pc = 0x140464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962536));
    // 0x140468: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x140468u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x14046c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14046cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x140470: 0x8c84f168  lw          $a0, -0xE98($a0)
    ctx->pc = 0x140470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294963560)));
    // 0x140474: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x140474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x140478: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x140478u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x14047c: 0x8e23ed60  lw          $v1, -0x12A0($s1)
    ctx->pc = 0x14047cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294962528)));
label_140480:
    // 0x140480: 0x3c120033  lui         $s2, 0x33
    ctx->pc = 0x140480u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
    // 0x140484: 0x2645ed68  addiu       $a1, $s2, -0x1298
    ctx->pc = 0x140484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962536));
    // 0x140488: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x140488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14048c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x14048cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x140490: 0x3c13002d  lui         $s3, 0x2D
    ctx->pc = 0x140490u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)45 << 16));
    // 0x140494: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x140494u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x140498: 0xae23ed60  sw          $v1, -0x12A0($s1)
    ctx->pc = 0x140498u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294962528), GPR_U32(ctx, 3));
    // 0x14049c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x14049cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1404a0: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x1404A0u;
    SET_GPR_U32(ctx, 31, 0x1404A8u);
    ctx->pc = 0x1404A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1404A0u;
            // 0x1404a4: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1404A8u; }
        if (ctx->pc != 0x1404A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1404A8u; }
        if (ctx->pc != 0x1404A8u) { return; }
    }
    ctx->pc = 0x1404A8u;
    // 0x1404a8: 0x26070018  addiu       $a3, $s0, 0x18
    ctx->pc = 0x1404a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x1404ac: 0x2666bb98  addiu       $a2, $s3, -0x4468
    ctx->pc = 0x1404acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294949784));
    // 0x1404b0: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x1404b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1404b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1404b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1404b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1404b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1404bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1404bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1404c0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1404c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1404c4: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x1404c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x1404c8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1404c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1404cc: 0xc04fdcc  jal         func_13F730
    ctx->pc = 0x1404CCu;
    SET_GPR_U32(ctx, 31, 0x1404D4u);
    ctx->pc = 0x1404D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1404CCu;
            // 0x1404d0: 0xac470000  sw          $a3, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F730u;
    if (runtime->hasFunction(0x13F730u)) {
        auto targetFn = runtime->lookupFunction(0x13F730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1404D4u; }
        if (ctx->pc != 0x1404D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F730_0x13f730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1404D4u; }
        if (ctx->pc != 0x1404D4u) { return; }
    }
    ctx->pc = 0x1404D4u;
    // 0x1404d4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1404d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1404d8: 0x8c64f168  lw          $a0, -0xE98($v1)
    ctx->pc = 0x1404d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963560)));
    // 0x1404dc: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x1404dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x1404e0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1404E0u;
    {
        const bool branch_taken_0x1404e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1404E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1404E0u;
            // 0x1404e4: 0x8e22ed60  lw          $v0, -0x12A0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294962528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1404e0) {
            ctx->pc = 0x140510u;
            goto label_140510;
        }
    }
    ctx->pc = 0x1404E8u;
    // 0x1404e8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1404e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1404ec: 0x0  nop
    ctx->pc = 0x1404ecu;
    // NOP
label_1404f0:
    // 0x1404f0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1404f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1404f4: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x1404f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x1404f8: 0x0  nop
    ctx->pc = 0x1404f8u;
    // NOP
    // 0x1404fc: 0x0  nop
    ctx->pc = 0x1404fcu;
    // NOP
    // 0x140500: 0x0  nop
    ctx->pc = 0x140500u;
    // NOP
    // 0x140504: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x140504u;
    {
        const bool branch_taken_0x140504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140504) {
            ctx->pc = 0x140508u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x140504u;
            // 0x140508: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1404F0u;
            runtime->cooperativeGuestYield();
            goto label_1404f0;
        }
    }
    ctx->pc = 0x14050Cu;
    // 0x14050c: 0x8e22ed60  lw          $v0, -0x12A0($s1)
    ctx->pc = 0x14050cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294962528)));
label_140510:
    // 0x140510: 0x2645ed68  addiu       $a1, $s2, -0x1298
    ctx->pc = 0x140510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962536));
    // 0x140514: 0xac64f168  sw          $a0, -0xE98($v1)
    ctx->pc = 0x140514u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963560), GPR_U32(ctx, 4));
    // 0x140518: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x140518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14051c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14051cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x140520: 0xae26ed60  sw          $a2, -0x12A0($s1)
    ctx->pc = 0x140520u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294962528), GPR_U32(ctx, 6));
    // 0x140524: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x140524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x140528: 0x2cc30100  sltiu       $v1, $a2, 0x100
    ctx->pc = 0x140528u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x14052c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14052cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x140530: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x140530u;
    {
        const bool branch_taken_0x140530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x140534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140530u;
            // 0x140534: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140530) {
            ctx->pc = 0x140548u;
            goto label_140548;
        }
    }
    ctx->pc = 0x140538u;
    // 0x140538: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x140538u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x14053c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x14053cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x140540: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x140540u;
    SET_GPR_U32(ctx, 31, 0x140548u);
    ctx->pc = 0x140544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140540u;
            // 0x140544: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140548u; }
        if (ctx->pc != 0x140548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140548u; }
        if (ctx->pc != 0x140548u) { return; }
    }
    ctx->pc = 0x140548u;
label_140548:
    // 0x140548: 0x2663bb98  addiu       $v1, $s3, -0x4468
    ctx->pc = 0x140548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294949784));
    // 0x14054c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x14054cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x140550: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x140550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x140554: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x140554u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_140558:
    // 0x140558: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x140558u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14055c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x14055cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x140560: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x140560u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x140564: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x140564u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140568: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x140568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14056c: 0x3e00008  jr          $ra
    ctx->pc = 0x14056Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14056Cu;
            // 0x140570: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1403F8u: goto label_1403f8;
            case 0x140434u: goto label_140434;
            case 0x140440u: goto label_140440;
            case 0x140480u: goto label_140480;
            case 0x1404F0u: goto label_1404f0;
            case 0x140510u: goto label_140510;
            case 0x140548u: goto label_140548;
            case 0x140558u: goto label_140558;
            default: break;
        }
        return;
    }
    ctx->pc = 0x140574u;
    // 0x140574: 0x0  nop
    ctx->pc = 0x140574u;
    // NOP
}
