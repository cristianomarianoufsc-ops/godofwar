#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00150698
// Address: 0x150698 - 0x150830
void sub_00150698_0x150698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150698_0x150698");
#endif

    ctx->pc = 0x150698u;

    // 0x150698: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x150698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15069c: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x15069cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1506a0: 0x8d6200d0  lw          $v0, 0xD0($t3)
    ctx->pc = 0x1506a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 208)));
    // 0x1506a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1506a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1506a8: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x1506A8u;
    {
        const bool branch_taken_0x1506a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1506ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1506A8u;
            // 0x1506ac: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1506a8) {
            ctx->pc = 0x150818u;
            goto label_150818;
        }
    }
    ctx->pc = 0x1506B0u;
    // 0x1506b0: 0x8d6200d0  lw          $v0, 0xD0($t3)
    ctx->pc = 0x1506b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 208)));
    // 0x1506b4: 0x0  nop
    ctx->pc = 0x1506b4u;
    // NOP
label_1506b8:
    // 0x1506b8: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x1506b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x1506bc: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1506bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1506c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1506c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1506c4: 0x8c6d0000  lw          $t5, 0x0($v1)
    ctx->pc = 0x1506c4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1506c8: 0x85ac0040  lh          $t4, 0x40($t5)
    ctx->pc = 0x1506c8u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 64)));
    // 0x1506cc: 0x1180004c  beqz        $t4, . + 4 + (0x4C << 2)
    ctx->pc = 0x1506CCu;
    {
        const bool branch_taken_0x1506cc = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x1506D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1506CCu;
            // 0x1506d0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1506cc) {
            ctx->pc = 0x150800u;
            goto label_150800;
        }
    }
    ctx->pc = 0x1506D4u;
    // 0x1506d4: 0x0  nop
    ctx->pc = 0x1506d4u;
    // NOP
label_1506d8:
    // 0x1506d8: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x1506d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1506dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1506dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1506e0: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x1506e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x1506e4: 0x8c480060  lw          $t0, 0x60($v0)
    ctx->pc = 0x1506e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1506e8: 0xdd060000  ld          $a2, 0x0($t0)
    ctx->pc = 0x1506e8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1506ec: 0xffa60000  sd          $a2, 0x0($sp)
    ctx->pc = 0x1506ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 6));
    // 0x1506f0: 0xdd070008  ld          $a3, 0x8($t0)
    ctx->pc = 0x1506f0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1506f4: 0x10a30017  beq         $a1, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1506F4u;
    {
        const bool branch_taken_0x1506f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1506F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1506F4u;
            // 0x1506f8: 0xffa70008  sd          $a3, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1506f4) {
            ctx->pc = 0x150754u;
            goto label_150754;
        }
    }
    ctx->pc = 0x1506FCu;
    // 0x1506fc: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x1506fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x150700: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x150700u;
    {
        const bool branch_taken_0x150700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x150704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150700u;
            // 0x150704: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150700) {
            ctx->pc = 0x150718u;
            goto label_150718;
        }
    }
    ctx->pc = 0x150708u;
    // 0x150708: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x150708u;
    {
        const bool branch_taken_0x150708 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x15070Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150708u;
            // 0x15070c: 0xdfa20008  ld          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150708) {
            ctx->pc = 0x150730u;
            goto label_150730;
        }
    }
    ctx->pc = 0x150710u;
    // 0x150710: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x150710u;
    {
        const bool branch_taken_0x150710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150710u;
            // 0x150714: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150710) {
            ctx->pc = 0x1507E0u;
            goto label_1507e0;
        }
    }
    ctx->pc = 0x150718u;
label_150718:
    // 0x150718: 0x10a20017  beq         $a1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x150718u;
    {
        const bool branch_taken_0x150718 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x15071Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150718u;
            // 0x15071c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150718) {
            ctx->pc = 0x150778u;
            goto label_150778;
        }
    }
    ctx->pc = 0x150720u;
    // 0x150720: 0x10a20022  beq         $a1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x150720u;
    {
        const bool branch_taken_0x150720 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x150724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150720u;
            // 0x150724: 0xdfa20008  ld          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150720) {
            ctx->pc = 0x1507ACu;
            goto label_1507ac;
        }
    }
    ctx->pc = 0x150728u;
    // 0x150728: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x150728u;
    {
        const bool branch_taken_0x150728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15072Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150728u;
            // 0x15072c: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150728) {
            ctx->pc = 0x1507E0u;
            goto label_1507e0;
        }
    }
    ctx->pc = 0x150730u;
label_150730:
    // 0x150730: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x150730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x150734: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x150734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x150738: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x150738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x15073c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x15073cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x150740: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x150740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x150744: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x150744u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x150748: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x150748u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x15074c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x15074Cu;
    {
        const bool branch_taken_0x15074c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15074Cu;
            // 0x150750: 0xc21824  and         $v1, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15074c) {
            ctx->pc = 0x150798u;
            goto label_150798;
        }
    }
    ctx->pc = 0x150754u;
label_150754:
    // 0x150754: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x150754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x150758: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x150758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x15075c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x15075cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x150760: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x150760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x150764: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x150764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x150768: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x150768u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15076c: 0x424b8  dsll        $a0, $a0, 18
    ctx->pc = 0x15076cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 18);
    // 0x150770: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x150770u;
    {
        const bool branch_taken_0x150770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150770u;
            // 0x150774: 0xc21824  and         $v1, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150770) {
            ctx->pc = 0x150798u;
            goto label_150798;
        }
    }
    ctx->pc = 0x150778u;
label_150778:
    // 0x150778: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x150778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x15077c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x15077cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x150780: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x150780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x150784: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x150784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x150788: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x150788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x15078c: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x15078cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x150790: 0x42538  dsll        $a0, $a0, 20
    ctx->pc = 0x150790u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 20);
    // 0x150794: 0xc21824  and         $v1, $a2, $v0
    ctx->pc = 0x150794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_150798:
    // 0x150798: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x150798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x15079c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x15079cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1507a0: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1507a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x1507a4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1507A4u;
    {
        const bool branch_taken_0x1507a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1507A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1507A4u;
            // 0x1507a8: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1507a4) {
            ctx->pc = 0x1507D8u;
            goto label_1507d8;
        }
    }
    ctx->pc = 0x1507ACu;
label_1507ac:
    // 0x1507ac: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1507acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1507b0: 0x21678  dsll        $v0, $v0, 25
    ctx->pc = 0x1507b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 25);
    // 0x1507b4: 0x2403feff  addiu       $v1, $zero, -0x101
    ctx->pc = 0x1507b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x1507b8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1507b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1507bc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1507bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1507c0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1507c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1507c4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1507c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1507c8: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x1507c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1507cc: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x1507ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x1507d0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1507d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1507d4: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1507d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_1507d8:
    // 0x1507d8: 0xdfa20008  ld          $v0, 0x8($sp)
    ctx->pc = 0x1507d8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1507dc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1507dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1507e0:
    // 0x1507e0: 0xdfa30000  ld          $v1, 0x0($sp)
    ctx->pc = 0x1507e0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1507e4: 0x12c202b  sltu        $a0, $t1, $t4
    ctx->pc = 0x1507e4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x1507e8: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1507e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x1507ec: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x1507ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    // 0x1507f0: 0xfd030000  sd          $v1, 0x0($t0)
    ctx->pc = 0x1507f0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 3));
    // 0x1507f4: 0xdfa20018  ld          $v0, 0x18($sp)
    ctx->pc = 0x1507f4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1507f8: 0x1480ffb7  bnez        $a0, . + 4 + (-0x49 << 2)
    ctx->pc = 0x1507F8u;
    {
        const bool branch_taken_0x1507f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1507FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1507F8u;
            // 0x1507fc: 0xfd020008  sd          $v0, 0x8($t0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1507f8) {
            ctx->pc = 0x1506D8u;
            runtime->cooperativeGuestYield();
            goto label_1506d8;
        }
    }
    ctx->pc = 0x150800u;
label_150800:
    // 0x150800: 0x8d6200d0  lw          $v0, 0xD0($t3)
    ctx->pc = 0x150800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 208)));
    // 0x150804: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x150804u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x150808: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x150808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15080c: 0x142102b  sltu        $v0, $t2, $v0
    ctx->pc = 0x15080cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x150810: 0x5440ffa9  bnel        $v0, $zero, . + 4 + (-0x57 << 2)
    ctx->pc = 0x150810u;
    {
        const bool branch_taken_0x150810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x150810) {
            ctx->pc = 0x150814u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x150810u;
            // 0x150814: 0x8d6200d0  lw          $v0, 0xD0($t3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 208)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1506B8u;
            runtime->cooperativeGuestYield();
            goto label_1506b8;
        }
    }
    ctx->pc = 0x150818u;
label_150818:
    // 0x150818: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x150818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x15081c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15081cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150820: 0xac62c090  sw          $v0, -0x3F70($v1)
    ctx->pc = 0x150820u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294951056), GPR_U32(ctx, 2));
    // 0x150824: 0x3e00008  jr          $ra
    ctx->pc = 0x150824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150824u;
            // 0x150828: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1506B8u: goto label_1506b8;
            case 0x1506D8u: goto label_1506d8;
            case 0x150718u: goto label_150718;
            case 0x150730u: goto label_150730;
            case 0x150754u: goto label_150754;
            case 0x150778u: goto label_150778;
            case 0x150798u: goto label_150798;
            case 0x1507ACu: goto label_1507ac;
            case 0x1507D8u: goto label_1507d8;
            case 0x1507E0u: goto label_1507e0;
            case 0x150800u: goto label_150800;
            case 0x150818u: goto label_150818;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15082Cu;
    // 0x15082c: 0x0  nop
    ctx->pc = 0x15082cu;
    // NOP
}
