#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DD3B0
// Address: 0x1dd3b0 - 0x1dd6b8
void sub_001DD3B0_0x1dd3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD3B0_0x1dd3b0");
#endif

    ctx->pc = 0x1dd3b0u;

    // 0x1dd3b0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1dd3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1dd3b4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1dd3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1dd3b8: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x1dd3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x1dd3bc: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1dd3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x1dd3c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dd3c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd3c4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1dd3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1dd3c8: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x1dd3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1dd3cc: 0x8c6300fc  lw          $v1, 0xFC($v1)
    ctx->pc = 0x1dd3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 252)));
    // 0x1dd3d0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1DD3D0u;
    {
        const bool branch_taken_0x1dd3d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD3D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD3D0u;
            // 0x1dd3d4: 0x8c44d2ac  lw          $a0, -0x2D54($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd3d0) {
            ctx->pc = 0x1DD410u;
            goto label_1dd410;
        }
    }
    ctx->pc = 0x1DD3D8u;
    // 0x1dd3d8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1dd3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1dd3dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1dd3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dd3e0: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1DD3E0u;
    {
        const bool branch_taken_0x1dd3e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DD3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD3E0u;
            // 0x1dd3e4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd3e0) {
            ctx->pc = 0x1DD410u;
            goto label_1dd410;
        }
    }
    ctx->pc = 0x1DD3E8u;
label_1dd3e8:
    // 0x1dd3e8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1dd3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1dd3ec: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x1dd3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1dd3f0: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x1dd3f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x1dd3f4: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x1dd3f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x1dd3f8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DD3F8u;
    {
        const bool branch_taken_0x1dd3f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd3f8) {
            ctx->pc = 0x1DD414u;
            goto label_1dd414;
        }
    }
    ctx->pc = 0x1DD400u;
    // 0x1dd400: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1dd400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dd404: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1dd404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd408: 0x1443fff7  bne         $v0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1DD408u;
    {
        const bool branch_taken_0x1dd408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1DD40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD408u;
            // 0x1dd40c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd408) {
            ctx->pc = 0x1DD3E8u;
            runtime->cooperativeGuestYield();
            goto label_1dd3e8;
        }
    }
    ctx->pc = 0x1DD410u;
label_1dd410:
    // 0x1dd410: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dd410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd414:
    // 0x1dd414: 0xc0797a2  jal         func_1E5E88
    ctx->pc = 0x1DD414u;
    SET_GPR_U32(ctx, 31, 0x1DD41Cu);
    ctx->pc = 0x1E5E88u;
    if (runtime->hasFunction(0x1E5E88u)) {
        auto targetFn = runtime->lookupFunction(0x1E5E88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD41Cu; }
        if (ctx->pc != 0x1DD41Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E5E88_0x1e5e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD41Cu; }
        if (ctx->pc != 0x1DD41Cu) { return; }
    }
    ctx->pc = 0x1DD41Cu;
    // 0x1dd41c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dd41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd420: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x1dd420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1dd424: 0xa222002c  sb          $v0, 0x2C($s1)
    ctx->pc = 0x1dd424u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 44), (uint8_t)GPR_U32(ctx, 2));
    // 0x1dd428: 0x84620018  lh          $v0, 0x18($v1)
    ctx->pc = 0x1dd428u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1dd42c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DD42Cu;
    {
        const bool branch_taken_0x1dd42c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd42c) {
            ctx->pc = 0x1DD430u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD42Cu;
            // 0x1dd430: 0x8e23001c  lw          $v1, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DD44Cu;
            goto label_1dd44c;
        }
    }
    ctx->pc = 0x1DD434u;
    // 0x1dd434: 0x9222002e  lbu         $v0, 0x2E($s1)
    ctx->pc = 0x1dd434u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 46)));
    // 0x1dd438: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DD438u;
    {
        const bool branch_taken_0x1dd438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd438) {
            ctx->pc = 0x1DD43Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD438u;
            // 0x1dd43c: 0x8e23001c  lw          $v1, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DD44Cu;
            goto label_1dd44c;
        }
    }
    ctx->pc = 0x1DD440u;
    // 0x1dd440: 0xc06d140  jal         func_1B4500
    ctx->pc = 0x1DD440u;
    SET_GPR_U32(ctx, 31, 0x1DD448u);
    ctx->pc = 0x1DD444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD440u;
            // 0x1dd444: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4500u;
    if (runtime->hasFunction(0x1B4500u)) {
        auto targetFn = runtime->lookupFunction(0x1B4500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD448u; }
        if (ctx->pc != 0x1DD448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4500_0x1b4500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD448u; }
        if (ctx->pc != 0x1DD448u) { return; }
    }
    ctx->pc = 0x1DD448u;
    // 0x1dd448: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x1dd448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1dd44c:
    // 0x1dd44c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1dd44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1dd450: 0x8c44bcf8  lw          $a0, -0x4308($v0)
    ctx->pc = 0x1dd450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
    // 0x1dd454: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1dd454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1dd458: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x1dd458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x1dd45c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1dd45cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1dd460: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1dd460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1dd464: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1dd464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1dd468: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x1dd468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x1dd46c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1dd46cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x1dd470: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x1dd470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x1dd474: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x1dd474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x1dd478: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1dd478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1dd47c: 0xc047b36  jal         func_11ECD8
    ctx->pc = 0x1DD47Cu;
    SET_GPR_U32(ctx, 31, 0x1DD484u);
    ctx->pc = 0x1DD480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD47Cu;
            // 0x1dd480: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11ECD8u;
    if (runtime->hasFunction(0x11ECD8u)) {
        auto targetFn = runtime->lookupFunction(0x11ECD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD484u; }
        if (ctx->pc != 0x1DD484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11ecd8_0x11ed88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD484u; }
        if (ctx->pc != 0x1DD484u) { return; }
    }
    ctx->pc = 0x1DD484u;
    // 0x1dd484: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x1dd484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1dd488: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x1dd488u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1dd48c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1dd48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1dd490: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1DD490u;
    {
        const bool branch_taken_0x1dd490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD490u;
            // 0x1dd494: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd490) {
            ctx->pc = 0x1DD4C0u;
            goto label_1dd4c0;
        }
    }
    ctx->pc = 0x1DD498u;
    // 0x1dd498: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1dd498u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dd49c: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1dd49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1dd4a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dd4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1dd4a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1dd4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1dd4a8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1dd4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dd4ac: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1dd4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1dd4b0: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1dd4b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1dd4b4: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1dd4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1dd4b8: 0x40f809  jalr        $v0
    ctx->pc = 0x1DD4B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DD4C0u);
        ctx->pc = 0x1DD4BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD4B8u;
            // 0x1dd4bc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DD4C0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DD3E8u: goto label_1dd3e8;
            case 0x1DD410u: goto label_1dd410;
            case 0x1DD414u: goto label_1dd414;
            case 0x1DD44Cu: goto label_1dd44c;
            case 0x1DD4C0u: goto label_1dd4c0;
            case 0x1DD4FCu: goto label_1dd4fc;
            case 0x1DD518u: goto label_1dd518;
            case 0x1DD594u: goto label_1dd594;
            case 0x1DD5C8u: goto label_1dd5c8;
            case 0x1DD5CCu: goto label_1dd5cc;
            case 0x1DD628u: goto label_1dd628;
            case 0x1DD630u: goto label_1dd630;
            case 0x1DD68Cu: goto label_1dd68c;
            case 0x1DD6A4u: goto label_1dd6a4;
            case 0x1DD6A8u: goto label_1dd6a8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DD4C0u; }
            if (ctx->pc != 0x1DD4C0u) { return; }
        }
        }
    }
    ctx->pc = 0x1DD4C0u;
label_1dd4c0:
    // 0x1dd4c0: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1dd4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1dd4c4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1dd4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1dd4c8: 0x84420018  lh          $v0, 0x18($v0)
    ctx->pc = 0x1dd4c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1dd4cc: 0x14430031  bne         $v0, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x1DD4CCu;
    {
        const bool branch_taken_0x1dd4cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1dd4cc) {
            ctx->pc = 0x1DD594u;
            goto label_1dd594;
        }
    }
    ctx->pc = 0x1DD4D4u;
    // 0x1dd4d4: 0x8e30001c  lw          $s0, 0x1C($s1)
    ctx->pc = 0x1dd4d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1dd4d8: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x1dd4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x1dd4dc: 0x8c4200b0  lw          $v0, 0xB0($v0)
    ctx->pc = 0x1dd4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x1dd4e0: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1DD4E0u;
    {
        const bool branch_taken_0x1dd4e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD4E0u;
            // 0x1dd4e4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd4e0) {
            ctx->pc = 0x1DD594u;
            goto label_1dd594;
        }
    }
    ctx->pc = 0x1DD4E8u;
    // 0x1dd4e8: 0x86030060  lh          $v1, 0x60($s0)
    ctx->pc = 0x1dd4e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1dd4ec: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DD4ECu;
    {
        const bool branch_taken_0x1dd4ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DD4F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD4ECu;
            // 0x1dd4f0: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd4ec) {
            ctx->pc = 0x1DD4FCu;
            goto label_1dd4fc;
        }
    }
    ctx->pc = 0x1DD4F4u;
    // 0x1dd4f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1DD4F4u;
    {
        const bool branch_taken_0x1dd4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD4F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD4F4u;
            // 0x1dd4f8: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd4f4) {
            ctx->pc = 0x1DD518u;
            goto label_1dd518;
        }
    }
    ctx->pc = 0x1DD4FCu;
label_1dd4fc:
    // 0x1dd4fc: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x1dd4fcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1dd500: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1dd500u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1dd504: 0x50650004  beql        $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DD504u;
    {
        const bool branch_taken_0x1dd504 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1dd504) {
            ctx->pc = 0x1DD508u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD504u;
            // 0x1dd508: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DD518u;
            goto label_1dd518;
        }
    }
    ctx->pc = 0x1DD50Cu;
    // 0x1dd50c: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1DD50Cu;
    SET_GPR_U32(ctx, 31, 0x1DD514u);
    ctx->pc = 0x1DD510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD50Cu;
            // 0x1dd510: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD514u; }
        if (ctx->pc != 0x1DD514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD514u; }
        if (ctx->pc != 0x1DD514u) { return; }
    }
    ctx->pc = 0x1DD514u;
    // 0x1dd514: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1dd514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1dd518:
    // 0x1dd518: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x1dd518u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dd51c: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x1dd51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1dd520: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1dd520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x1dd524: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1dd524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd528: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x1dd528u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1dd52c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x1dd52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x1dd530: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x1dd530u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1dd534: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x1dd534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x1dd538: 0x78820030  lq          $v0, 0x30($a0)
    ctx->pc = 0x1dd538u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1dd53c: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x1dd53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x1dd540: 0xc04c55c  jal         func_131570
    ctx->pc = 0x1DD540u;
    SET_GPR_U32(ctx, 31, 0x1DD548u);
    ctx->pc = 0x1DD544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD540u;
            // 0x1dd544: 0x8c6400b0  lw          $a0, 0xB0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131570u;
    if (runtime->hasFunction(0x131570u)) {
        auto targetFn = runtime->lookupFunction(0x131570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD548u; }
        if (ctx->pc != 0x1DD548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131570_0x131570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD548u; }
        if (ctx->pc != 0x1DD548u) { return; }
    }
    ctx->pc = 0x1DD548u;
    // 0x1dd548: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x1dd548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1dd54c: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1dd54cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1dd550: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x1dd550u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dd554: 0xdcc5bdf8  ld          $a1, -0x4208($a2)
    ctx->pc = 0x1dd554u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 4294950392)));
    // 0x1dd558: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x1dd558u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x1dd55c: 0x84830060  lh          $v1, 0x60($a0)
    ctx->pc = 0x1dd55cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x1dd560: 0x64a50001  daddiu      $a1, $a1, 0x1
    ctx->pc = 0x1dd560u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
    // 0x1dd564: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x1dd564u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1dd568: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x1dd568u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x1dd56c: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x1dd56cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x1dd570: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1dd570u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd574: 0xa3100a  movz        $v0, $a1, $v1
    ctx->pc = 0x1dd574u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x1dd578: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1dd578u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd57c: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x1dd57cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1dd580: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x1dd580u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
    // 0x1dd584: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x1dd584u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1dd588: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x1dd588u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
    // 0x1dd58c: 0xfcc5bdf8  sd          $a1, -0x4208($a2)
    ctx->pc = 0x1dd58cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 4294950392), GPR_U64(ctx, 5));
    // 0x1dd590: 0xfc830068  sd          $v1, 0x68($a0)
    ctx->pc = 0x1dd590u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 104), GPR_U64(ctx, 3));
label_1dd594:
    // 0x1dd594: 0xc06b6f0  jal         func_1ADBC0
    ctx->pc = 0x1DD594u;
    SET_GPR_U32(ctx, 31, 0x1DD59Cu);
    ctx->pc = 0x1DD598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD594u;
            // 0x1dd598: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ADBC0u;
    if (runtime->hasFunction(0x1ADBC0u)) {
        auto targetFn = runtime->lookupFunction(0x1ADBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD59Cu; }
        if (ctx->pc != 0x1DD59Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ADBC0_0x1adbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD59Cu; }
        if (ctx->pc != 0x1DD59Cu) { return; }
    }
    ctx->pc = 0x1DD59Cu;
    // 0x1dd59c: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x1dd59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1dd5a0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1dd5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1dd5a4: 0x8c42ec64  lw          $v0, -0x139C($v0)
    ctx->pc = 0x1dd5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962276)));
    // 0x1dd5a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dd5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dd5ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dd5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dd5b0: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x1dd5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1dd5b4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DD5B4u;
    {
        const bool branch_taken_0x1dd5b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD5B4u;
            // 0x1dd5b8: 0x2482ffec  addiu       $v0, $a0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd5b4) {
            ctx->pc = 0x1DD5C8u;
            goto label_1dd5c8;
        }
    }
    ctx->pc = 0x1DD5BCu;
    // 0x1dd5bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1dd5bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd5c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1DD5C0u;
    {
        const bool branch_taken_0x1dd5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD5C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD5C0u;
            // 0x1dd5c4: 0x44800b  movn        $s0, $v0, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd5c0) {
            ctx->pc = 0x1DD5CCu;
            goto label_1dd5cc;
        }
    }
    ctx->pc = 0x1DD5C8u;
label_1dd5c8:
    // 0x1dd5c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1dd5c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd5cc:
    // 0x1dd5cc: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1DD5CCu;
    {
        const bool branch_taken_0x1dd5cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD5D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD5CCu;
            // 0x1dd5d0: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd5cc) {
            ctx->pc = 0x1DD630u;
            goto label_1dd630;
        }
    }
    ctx->pc = 0x1DD5D4u;
    // 0x1dd5d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1dd5d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dd5d8: 0xc04015e  jal         func_100578
    ctx->pc = 0x1DD5D8u;
    SET_GPR_U32(ctx, 31, 0x1DD5E0u);
    ctx->pc = 0x1DD5DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD5D8u;
            // 0x1dd5dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100578u;
    if (runtime->hasFunction(0x100578u)) {
        auto targetFn = runtime->lookupFunction(0x100578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD5E0u; }
        if (ctx->pc != 0x1DD5E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100578_0x100578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD5E0u; }
        if (ctx->pc != 0x1DD5E0u) { return; }
    }
    ctx->pc = 0x1DD5E0u;
    // 0x1dd5e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1dd5e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1dd5e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1dd5e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd5e8: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x1dd5e8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1dd5ec: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1dd5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1dd5f0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1DD5F0u;
    {
        const bool branch_taken_0x1dd5f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD5F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD5F0u;
            // 0x1dd5f4: 0xe600003c  swc1        $f0, 0x3C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd5f0) {
            ctx->pc = 0x1DD628u;
            goto label_1dd628;
        }
    }
    ctx->pc = 0x1DD5F8u;
    // 0x1dd5f8: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x1dd5f8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dd5fc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1dd5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1dd600: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1dd600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1dd604: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dd604u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1dd608: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1dd608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1dd60c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dd60cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd610: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1dd610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dd614: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1dd614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1dd618: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1dd618u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1dd61c: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1dd61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1dd620: 0x40f809  jalr        $v0
    ctx->pc = 0x1DD620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DD628u);
        ctx->pc = 0x1DD624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD620u;
            // 0x1dd624: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DD628u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DD3E8u: goto label_1dd3e8;
            case 0x1DD410u: goto label_1dd410;
            case 0x1DD414u: goto label_1dd414;
            case 0x1DD44Cu: goto label_1dd44c;
            case 0x1DD4C0u: goto label_1dd4c0;
            case 0x1DD4FCu: goto label_1dd4fc;
            case 0x1DD518u: goto label_1dd518;
            case 0x1DD594u: goto label_1dd594;
            case 0x1DD5C8u: goto label_1dd5c8;
            case 0x1DD5CCu: goto label_1dd5cc;
            case 0x1DD628u: goto label_1dd628;
            case 0x1DD630u: goto label_1dd630;
            case 0x1DD68Cu: goto label_1dd68c;
            case 0x1DD6A4u: goto label_1dd6a4;
            case 0x1DD6A8u: goto label_1dd6a8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DD628u; }
            if (ctx->pc != 0x1DD628u) { return; }
        }
        }
    }
    ctx->pc = 0x1DD628u;
label_1dd628:
    // 0x1dd628: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1dd628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1dd62c: 0x0  nop
    ctx->pc = 0x1dd62cu;
    // NOP
label_1dd630:
    // 0x1dd630: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x1dd630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1dd634: 0x240303fa  addiu       $v1, $zero, 0x3FA
    ctx->pc = 0x1dd634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1018));
    // 0x1dd638: 0x8c44e89c  lw          $a0, -0x1764($v0)
    ctx->pc = 0x1dd638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961308)));
    // 0x1dd63c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x1dd63cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1dd640: 0xa7a30080  sh          $v1, 0x80($sp)
    ctx->pc = 0x1dd640u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 128), (uint16_t)GPR_U32(ctx, 3));
    // 0x1dd644: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x1dd644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x1dd648: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x1dd648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x1dd64c: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x1dd64cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    // 0x1dd650: 0xc047d6a  jal         func_11F5A8
    ctx->pc = 0x1DD650u;
    SET_GPR_U32(ctx, 31, 0x1DD658u);
    ctx->pc = 0x1DD654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD650u;
            // 0x1dd654: 0xafa00090  sw          $zero, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F5A8u;
    if (runtime->hasFunction(0x11F5A8u)) {
        auto targetFn = runtime->lookupFunction(0x11F5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD658u; }
        if (ctx->pc != 0x1DD658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11f5a8_0x11f5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD658u; }
        if (ctx->pc != 0x1DD658u) { return; }
    }
    ctx->pc = 0x1DD658u;
    // 0x1dd658: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1dd658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1dd65c: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1dd65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1dd660: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1dd660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1dd664: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DD664u;
    {
        const bool branch_taken_0x1dd664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd664) {
            ctx->pc = 0x1DD668u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD664u;
            // 0x1dd668: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DD6A8u;
            goto label_1dd6a8;
        }
    }
    ctx->pc = 0x1DD66Cu;
    // 0x1dd66c: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1DD66Cu;
    {
        const bool branch_taken_0x1dd66c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD66Cu;
            // 0x1dd670: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd66c) {
            ctx->pc = 0x1DD6A4u;
            goto label_1dd6a4;
        }
    }
    ctx->pc = 0x1DD674u;
    // 0x1dd674: 0x8c42d29c  lw          $v0, -0x2D64($v0)
    ctx->pc = 0x1dd674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955676)));
    // 0x1dd678: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DD678u;
    {
        const bool branch_taken_0x1dd678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd678) {
            ctx->pc = 0x1DD68Cu;
            goto label_1dd68c;
        }
    }
    ctx->pc = 0x1DD680u;
    // 0x1dd680: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1dd680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1dd684: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DD684u;
    {
        const bool branch_taken_0x1dd684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD684u;
            // 0x1dd688: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd684) {
            ctx->pc = 0x1DD6A8u;
            goto label_1dd6a8;
        }
    }
    ctx->pc = 0x1DD68Cu;
label_1dd68c:
    // 0x1dd68c: 0xc07729e  jal         func_1DCA78
    ctx->pc = 0x1DD68Cu;
    SET_GPR_U32(ctx, 31, 0x1DD694u);
    ctx->pc = 0x1DD690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD68Cu;
            // 0x1dd690: 0x24040c10  addiu       $a0, $zero, 0xC10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA78u;
    if (runtime->hasFunction(0x1DCA78u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD694u; }
        if (ctx->pc != 0x1DD694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA78_0x1dca78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD694u; }
        if (ctx->pc != 0x1DD694u) { return; }
    }
    ctx->pc = 0x1DD694u;
    // 0x1dd694: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x1dd694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1dd698: 0xc07779a  jal         func_1DDE68
    ctx->pc = 0x1DD698u;
    SET_GPR_U32(ctx, 31, 0x1DD6A0u);
    ctx->pc = 0x1DD69Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD698u;
            // 0x1dd69c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DDE68u;
    if (runtime->hasFunction(0x1DDE68u)) {
        auto targetFn = runtime->lookupFunction(0x1DDE68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD6A0u; }
        if (ctx->pc != 0x1DD6A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DDE68_0x1dde68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD6A0u; }
        if (ctx->pc != 0x1DD6A0u) { return; }
    }
    ctx->pc = 0x1DD6A0u;
    // 0x1dd6a0: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x1dd6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_1dd6a4:
    // 0x1dd6a4: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1dd6a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1dd6a8:
    // 0x1dd6a8: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x1dd6a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd6ac: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1dd6acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1dd6b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD6B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD6B0u;
            // 0x1dd6b4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DD3E8u: goto label_1dd3e8;
            case 0x1DD410u: goto label_1dd410;
            case 0x1DD414u: goto label_1dd414;
            case 0x1DD44Cu: goto label_1dd44c;
            case 0x1DD4C0u: goto label_1dd4c0;
            case 0x1DD4FCu: goto label_1dd4fc;
            case 0x1DD518u: goto label_1dd518;
            case 0x1DD594u: goto label_1dd594;
            case 0x1DD5C8u: goto label_1dd5c8;
            case 0x1DD5CCu: goto label_1dd5cc;
            case 0x1DD628u: goto label_1dd628;
            case 0x1DD630u: goto label_1dd630;
            case 0x1DD68Cu: goto label_1dd68c;
            case 0x1DD6A4u: goto label_1dd6a4;
            case 0x1DD6A8u: goto label_1dd6a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DD6B8u;
}
