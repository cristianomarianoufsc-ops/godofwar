#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BC5D0
// Address: 0x1bc5d0 - 0x1bdb58
void sub_001BC5D0_0x1bc5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC5D0_0x1bc5d0");
#endif

    ctx->pc = 0x1bc5d0u;

    // 0x1bc5d0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1bc5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1bc5d4: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1bc5d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1bc5d8: 0x8c42cc3c  lw          $v0, -0x33C4($v0)
    ctx->pc = 0x1bc5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954044)));
    // 0x1bc5dc: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1bc5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x1bc5e0: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x1bc5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x1bc5e4: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x1bc5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x1bc5e8: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x1bc5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x1bc5ec: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x1bc5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x1bc5f0: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1bc5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x1bc5f4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1bc5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1bc5f8: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x1bc5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x1bc5fc: 0x1440054a  bnez        $v0, . + 4 + (0x54A << 2)
    ctx->pc = 0x1BC5FCu;
    {
        const bool branch_taken_0x1bc5fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC5FCu;
            // 0x1bc600: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc5fc) {
            ctx->pc = 0x1BDB28u;
            goto label_1bdb28;
        }
    }
    ctx->pc = 0x1BC604u;
    // 0x1bc604: 0x3c150033  lui         $s5, 0x33
    ctx->pc = 0x1bc604u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)51 << 16));
    // 0x1bc608: 0x8ea25e68  lw          $v0, 0x5E68($s5)
    ctx->pc = 0x1bc608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24168)));
    // 0x1bc60c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1BC60Cu;
    {
        const bool branch_taken_0x1bc60c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC60Cu;
            // 0x1bc610: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc60c) {
            ctx->pc = 0x1BC648u;
            goto label_1bc648;
        }
    }
    ctx->pc = 0x1BC614u;
    // 0x1bc614: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1bc614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1bc618: 0x8c42cc40  lw          $v0, -0x33C0($v0)
    ctx->pc = 0x1bc618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954048)));
    // 0x1bc61c: 0x10400542  beqz        $v0, . + 4 + (0x542 << 2)
    ctx->pc = 0x1BC61Cu;
    {
        const bool branch_taken_0x1bc61c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC61Cu;
            // 0x1bc620: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc61c) {
            ctx->pc = 0x1BDB28u;
            goto label_1bdb28;
        }
    }
    ctx->pc = 0x1BC624u;
    // 0x1bc624: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1bc624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1bc628: 0x8c42cc44  lw          $v0, -0x33BC($v0)
    ctx->pc = 0x1bc628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954052)));
    // 0x1bc62c: 0x24635a68  addiu       $v1, $v1, 0x5A68
    ctx->pc = 0x1bc62cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23144));
    // 0x1bc630: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1bc630u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1bc634: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bc634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bc638: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1bc638u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bc63c: 0xaea25e68  sw          $v0, 0x5E68($s5)
    ctx->pc = 0x1bc63cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24168), GPR_U32(ctx, 2));
    // 0x1bc640: 0x8ea25e68  lw          $v0, 0x5E68($s5)
    ctx->pc = 0x1bc640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24168)));
    // 0x1bc644: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1bc644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1bc648:
    // 0x1bc648: 0x2c620014  sltiu       $v0, $v1, 0x14
    ctx->pc = 0x1bc648u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x1bc64c: 0x10400536  beqz        $v0, . + 4 + (0x536 << 2)
    ctx->pc = 0x1BC64Cu;
    {
        const bool branch_taken_0x1bc64c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC64Cu;
            // 0x1bc650: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc64c) {
            ctx->pc = 0x1BDB28u;
            goto label_1bdb28;
        }
    }
    ctx->pc = 0x1BC654u;
    // 0x1bc654: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bc654u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bc658: 0x24425a60  addiu       $v0, $v0, 0x5A60
    ctx->pc = 0x1bc658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23136));
    // 0x1bc65c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bc65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bc660: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1bc660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bc664: 0x400008  jr          $v0
    ctx->pc = 0x1BC664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BC66Cu: goto label_1bc66c;
            case 0x1BC7C8u: goto label_1bc7c8;
            case 0x1BC910u: goto label_1bc910;
            case 0x1BCAD0u: goto label_1bcad0;
            case 0x1BCC50u: goto label_1bcc50;
            case 0x1BCCD8u: goto label_1bccd8;
            case 0x1BCDC0u: goto label_1bcdc0;
            case 0x1BCE78u: goto label_1bce78;
            case 0x1BD048u: goto label_1bd048;
            case 0x1BD168u: goto label_1bd168;
            case 0x1BD288u: goto label_1bd288;
            case 0x1BD360u: goto label_1bd360;
            case 0x1BD408u: goto label_1bd408;
            case 0x1BD578u: goto label_1bd578;
            case 0x1BD680u: goto label_1bd680;
            case 0x1BD6E8u: goto label_1bd6e8;
            case 0x1BD73Cu: goto label_1bd73c;
            case 0x1BD810u: goto label_1bd810;
            case 0x1BD9C0u: goto label_1bd9c0;
            case 0x1BDA58u: goto label_1bda58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BC66Cu;
label_1bc66c:
    // 0x1bc66c: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x1bc66cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
    // 0x1bc670: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bc670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bc674: 0x8ce3cc44  lw          $v1, -0x33BC($a3)
    ctx->pc = 0x1bc674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294954052)));
    // 0x1bc678: 0x24425a68  addiu       $v0, $v0, 0x5A68
    ctx->pc = 0x1bc678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23144));
    // 0x1bc67c: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x1bc67cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x1bc680: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x1bc680u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1bc684: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x1bc684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1bc688: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1bc688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1bc68c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1bc68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1bc690: 0x94a60002  lhu         $a2, 0x2($a1)
    ctx->pc = 0x1bc690u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1bc694: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x1bc694u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1bc698: 0x28640020  slti        $a0, $v1, 0x20
    ctx->pc = 0x1bc698u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1bc69c: 0xae065a58  sw          $a2, 0x5A58($s0)
    ctx->pc = 0x1bc69cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 23128), GPR_U32(ctx, 6));
    // 0x1bc6a0: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BC6A0u;
    {
        const bool branch_taken_0x1bc6a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC6A0u;
            // 0x1bc6a4: 0xace3cc44  sw          $v1, -0x33BC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4294954052), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc6a0) {
            ctx->pc = 0x1BC6B0u;
            goto label_1bc6b0;
        }
    }
    ctx->pc = 0x1BC6A8u;
    // 0x1bc6a8: 0xace0cc44  sw          $zero, -0x33BC($a3)
    ctx->pc = 0x1bc6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294954052), GPR_U32(ctx, 0));
    // 0x1bc6ac: 0x0  nop
    ctx->pc = 0x1bc6acu;
    // NOP
label_1bc6b0:
    // 0x1bc6b0: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x1bc6b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x1bc6b4: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1bc6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1bc6b8: 0x24f15280  addiu       $s1, $a3, 0x5280
    ctx->pc = 0x1bc6b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 21120));
    // 0x1bc6bc: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1bc6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x1bc6c0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1bc6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1bc6c4: 0x8c82cc40  lw          $v0, -0x33C0($a0)
    ctx->pc = 0x1bc6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954048)));
    // 0x1bc6c8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1bc6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bc6cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bc6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bc6d0: 0x8ca30068  lw          $v1, 0x68($a1)
    ctx->pc = 0x1bc6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
    // 0x1bc6d4: 0xac82cc40  sw          $v0, -0x33C0($a0)
    ctx->pc = 0x1bc6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294954048), GPR_U32(ctx, 2));
    // 0x1bc6d8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1bc6d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1bc6dc: 0x1460002a  bnez        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x1BC6DCu;
    {
        const bool branch_taken_0x1bc6dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC6E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC6DCu;
            // 0x1bc6e0: 0xacb20064  sw          $s2, 0x64($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc6dc) {
            ctx->pc = 0x1BC788u;
            goto label_1bc788;
        }
    }
    ctx->pc = 0x1BC6E4u;
    // 0x1bc6e4: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x1bc6e4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bc6e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bc6e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc6ec: 0xaca00068  sw          $zero, 0x68($a1)
    ctx->pc = 0x1bc6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 104), GPR_U32(ctx, 0));
    // 0x1bc6f0: 0x8e025a58  lw          $v0, 0x5A58($s0)
    ctx->pc = 0x1bc6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23128)));
    // 0x1bc6f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bc6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bc6f8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1bc6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1bc6fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bc6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bc700: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x1bc700u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
    // 0x1bc704: 0xac40005c  sw          $zero, 0x5C($v0)
    ctx->pc = 0x1bc704u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 0));
label_1bc708:
    // 0x1bc708: 0x8e025a58  lw          $v0, 0x5A58($s0)
    ctx->pc = 0x1bc708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23128)));
    // 0x1bc70c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1bc70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1bc710: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x1bc710u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1bc714: 0x24e55280  addiu       $a1, $a3, 0x5280
    ctx->pc = 0x1bc714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 21120));
    // 0x1bc718: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bc718u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bc71c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1bc71cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1bc720: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1bc720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1bc724: 0x28c40004  slti        $a0, $a2, 0x4
    ctx->pc = 0x1bc724u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1bc728: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bc728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bc72c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bc72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bc730: 0xa040000a  sb          $zero, 0xA($v0)
    ctx->pc = 0x1bc730u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bc734: 0x8e025a58  lw          $v0, 0x5A58($s0)
    ctx->pc = 0x1bc734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23128)));
    // 0x1bc738: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bc738u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bc73c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1bc73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1bc740: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bc740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bc744: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bc744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bc748: 0x1480ffef  bnez        $a0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1BC748u;
    {
        const bool branch_taken_0x1bc748 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC748u;
            // 0x1bc74c: 0xa0400032  sb          $zero, 0x32($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 50), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc748) {
            ctx->pc = 0x1BC708u;
            runtime->cooperativeGuestYield();
            goto label_1bc708;
        }
    }
    ctx->pc = 0x1BC750u;
    // 0x1bc750: 0x8e045a58  lw          $a0, 0x5A58($s0)
    ctx->pc = 0x1bc750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23128)));
    // 0x1bc754: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1bc754u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1bc758: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1bc758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1bc75c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bc75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bc760: 0x8c450064  lw          $a1, 0x64($v0)
    ctx->pc = 0x1bc760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1bc764: 0x10a004ef  beqz        $a1, . + 4 + (0x4EF << 2)
    ctx->pc = 0x1BC764u;
    {
        const bool branch_taken_0x1bc764 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC764u;
            // 0x1bc768: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc764) {
            ctx->pc = 0x1BDB24u;
            goto label_1bdb24;
        }
    }
    ctx->pc = 0x1BC76Cu;
    // 0x1bc76c: 0x8c425074  lw          $v0, 0x5074($v0)
    ctx->pc = 0x1bc76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20596)));
    // 0x1bc770: 0x504004ed  beql        $v0, $zero, . + 4 + (0x4ED << 2)
    ctx->pc = 0x1BC770u;
    {
        const bool branch_taken_0x1bc770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc770) {
            ctx->pc = 0x1BC774u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC770u;
            // 0x1bc774: 0xaea05e68  sw          $zero, 0x5E68($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 24168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BDB28u;
            goto label_1bdb28;
        }
    }
    ctx->pc = 0x1BC778u;
    // 0x1bc778: 0x40f809  jalr        $v0
    ctx->pc = 0x1BC778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BC780u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BC780u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BC648u: goto label_1bc648;
            case 0x1BC66Cu: goto label_1bc66c;
            case 0x1BC6B0u: goto label_1bc6b0;
            case 0x1BC708u: goto label_1bc708;
            case 0x1BC788u: goto label_1bc788;
            case 0x1BC7C0u: goto label_1bc7c0;
            case 0x1BC7C8u: goto label_1bc7c8;
            case 0x1BC850u: goto label_1bc850;
            case 0x1BC890u: goto label_1bc890;
            case 0x1BC910u: goto label_1bc910;
            case 0x1BC958u: goto label_1bc958;
            case 0x1BC998u: goto label_1bc998;
            case 0x1BCA90u: goto label_1bca90;
            case 0x1BCAC8u: goto label_1bcac8;
            case 0x1BCAD0u: goto label_1bcad0;
            case 0x1BCB50u: goto label_1bcb50;
            case 0x1BCBA8u: goto label_1bcba8;
            case 0x1BCC40u: goto label_1bcc40;
            case 0x1BCC50u: goto label_1bcc50;
            case 0x1BCC70u: goto label_1bcc70;
            case 0x1BCCB8u: goto label_1bccb8;
            case 0x1BCCD8u: goto label_1bccd8;
            case 0x1BCD08u: goto label_1bcd08;
            case 0x1BCDC0u: goto label_1bcdc0;
            case 0x1BCE78u: goto label_1bce78;
            case 0x1BCEE8u: goto label_1bcee8;
            case 0x1BCF08u: goto label_1bcf08;
            case 0x1BCF28u: goto label_1bcf28;
            case 0x1BCF50u: goto label_1bcf50;
            case 0x1BCF8Cu: goto label_1bcf8c;
            case 0x1BCF90u: goto label_1bcf90;
            case 0x1BCFA4u: goto label_1bcfa4;
            case 0x1BCFD8u: goto label_1bcfd8;
            case 0x1BD018u: goto label_1bd018;
            case 0x1BD048u: goto label_1bd048;
            case 0x1BD088u: goto label_1bd088;
            case 0x1BD0C0u: goto label_1bd0c0;
            case 0x1BD168u: goto label_1bd168;
            case 0x1BD210u: goto label_1bd210;
            case 0x1BD288u: goto label_1bd288;
            case 0x1BD2C0u: goto label_1bd2c0;
            case 0x1BD2F0u: goto label_1bd2f0;
            case 0x1BD360u: goto label_1bd360;
            case 0x1BD398u: goto label_1bd398;
            case 0x1BD408u: goto label_1bd408;
            case 0x1BD448u: goto label_1bd448;
            case 0x1BD490u: goto label_1bd490;
            case 0x1BD4C0u: goto label_1bd4c0;
            case 0x1BD578u: goto label_1bd578;
            case 0x1BD5E0u: goto label_1bd5e0;
            case 0x1BD680u: goto label_1bd680;
            case 0x1BD6B0u: goto label_1bd6b0;
            case 0x1BD6E8u: goto label_1bd6e8;
            case 0x1BD718u: goto label_1bd718;
            case 0x1BD73Cu: goto label_1bd73c;
            case 0x1BD758u: goto label_1bd758;
            case 0x1BD808u: goto label_1bd808;
            case 0x1BD810u: goto label_1bd810;
            case 0x1BD898u: goto label_1bd898;
            case 0x1BD8B4u: goto label_1bd8b4;
            case 0x1BD8C0u: goto label_1bd8c0;
            case 0x1BD958u: goto label_1bd958;
            case 0x1BD95Cu: goto label_1bd95c;
            case 0x1BD998u: goto label_1bd998;
            case 0x1BD99Cu: goto label_1bd99c;
            case 0x1BD9A8u: goto label_1bd9a8;
            case 0x1BD9ACu: goto label_1bd9ac;
            case 0x1BD9C0u: goto label_1bd9c0;
            case 0x1BD9E0u: goto label_1bd9e0;
            case 0x1BDA58u: goto label_1bda58;
            case 0x1BDB10u: goto label_1bdb10;
            case 0x1BDB24u: goto label_1bdb24;
            case 0x1BDB28u: goto label_1bdb28;
            case 0x1BDB2Cu: goto label_1bdb2c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BC780u; }
            if (ctx->pc != 0x1BC780u) { return; }
        }
        }
    }
    ctx->pc = 0x1BC780u;
    // 0x1bc780: 0x100004e9  b           . + 4 + (0x4E9 << 2)
    ctx->pc = 0x1BC780u;
    {
        const bool branch_taken_0x1bc780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC780u;
            // 0x1bc784: 0xaea05e68  sw          $zero, 0x5E68($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 24168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc780) {
            ctx->pc = 0x1BDB28u;
            goto label_1bdb28;
        }
    }
    ctx->pc = 0x1BC788u;
label_1bc788:
    // 0x1bc788: 0xc06f748  jal         func_1BDD20
    ctx->pc = 0x1BC788u;
    SET_GPR_U32(ctx, 31, 0x1BC790u);
    ctx->pc = 0x1BC78Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC788u;
            // 0x1bc78c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BDD20u;
    if (runtime->hasFunction(0x1BDD20u)) {
        auto targetFn = runtime->lookupFunction(0x1BDD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC790u; }
        if (ctx->pc != 0x1BC790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BDD20_0x1bdd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC790u; }
        if (ctx->pc != 0x1BC790u) { return; }
    }
    ctx->pc = 0x1BC790u;
    // 0x1bc790: 0x8e025a58  lw          $v0, 0x5A58($s0)
    ctx->pc = 0x1bc790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23128)));
    // 0x1bc794: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bc794u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bc798: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1bc798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1bc79c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bc79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bc7a0: 0xc06f96a  jal         func_1BE5A8
    ctx->pc = 0x1BC7A0u;
    SET_GPR_U32(ctx, 31, 0x1BC7A8u);
    ctx->pc = 0x1BC7A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC7A0u;
            // 0x1bc7a4: 0x8c44005c  lw          $a0, 0x5C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE5A8u;
    if (runtime->hasFunction(0x1BE5A8u)) {
        auto targetFn = runtime->lookupFunction(0x1BE5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC7A8u; }
        if (ctx->pc != 0x1BC7A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE5A8_0x1be5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC7A8u; }
        if (ctx->pc != 0x1BC7A8u) { return; }
    }
    ctx->pc = 0x1BC7A8u;
    // 0x1bc7a8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1bc7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1bc7ac: 0x12420004  beq         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BC7ACu;
    {
        const bool branch_taken_0x1bc7ac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BC7B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC7ACu;
            // 0x1bc7b0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc7ac) {
            ctx->pc = 0x1BC7C0u;
            goto label_1bc7c0;
        }
    }
    ctx->pc = 0x1BC7B4u;
    // 0x1bc7b4: 0xc06f876  jal         func_1BE1D8
    ctx->pc = 0x1BC7B4u;
    SET_GPR_U32(ctx, 31, 0x1BC7BCu);
    ctx->pc = 0x1BC7B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC7B4u;
            // 0x1bc7b8: 0x8e045a58  lw          $a0, 0x5A58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23128)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE1D8u;
    if (runtime->hasFunction(0x1BE1D8u)) {
        auto targetFn = runtime->lookupFunction(0x1BE1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC7BCu; }
        if (ctx->pc != 0x1BC7BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE1D8_0x1be1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC7BCu; }
        if (ctx->pc != 0x1BC7BCu) { return; }
    }
    ctx->pc = 0x1BC7BCu;
    // 0x1bc7bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1bc7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bc7c0:
    // 0x1bc7c0: 0x100004d9  b           . + 4 + (0x4D9 << 2)
    ctx->pc = 0x1BC7C0u;
    {
        const bool branch_taken_0x1bc7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC7C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC7C0u;
            // 0x1bc7c4: 0xaea25e68  sw          $v0, 0x5E68($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 24168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc7c0) {
            ctx->pc = 0x1BDB28u;
            goto label_1bdb28;
        }
    }
    ctx->pc = 0x1BC7C8u;
label_1bc7c8:
    // 0x1bc7c8: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x1bc7c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x1bc7cc: 0x3c130033  lui         $s3, 0x33
    ctx->pc = 0x1bc7ccu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)51 << 16));
    // 0x1bc7d0: 0x8e025a58  lw          $v0, 0x5A58($s0)
    ctx->pc = 0x1bc7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23128)));
    // 0x1bc7d4: 0x26725280  addiu       $s2, $s3, 0x5280
    ctx->pc = 0x1bc7d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 21120));
    // 0x1bc7d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bc7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bc7dc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1bc7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1bc7e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bc7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bc7e4: 0x8c51005c  lw          $s1, 0x5C($v0)
    ctx->pc = 0x1bc7e4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1bc7e8: 0xc06c406  jal         func_1B1018
    ctx->pc = 0x1BC7E8u;
    SET_GPR_U32(ctx, 31, 0x1BC7F0u);
    ctx->pc = 0x1BC7ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC7E8u;
            // 0x1bc7ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1018u;
    if (runtime->hasFunction(0x1B1018u)) {
        auto targetFn = runtime->lookupFunction(0x1B1018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC7F0u; }
        if (ctx->pc != 0x1BC7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1018_0x1b1018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC7F0u; }
        if (ctx->pc != 0x1BC7F0u) { return; }
    }
    ctx->pc = 0x1BC7F0u;
    // 0x1bc7f0: 0xc0891de  jal         func_224778
    ctx->pc = 0x1BC7F0u;
    SET_GPR_U32(ctx, 31, 0x1BC7F8u);
    ctx->pc = 0x1BC7F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC7F0u;
            // 0x1bc7f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224778u;
    if (runtime->hasFunction(0x224778u)) {
        auto targetFn = runtime->lookupFunction(0x224778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC7F8u; }
        if (ctx->pc != 0x1BC7F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224778_0x224778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC7F8u; }
        if (ctx->pc != 0x1BC7F8u) { return; }
    }
    ctx->pc = 0x1BC7F8u;
    // 0x1bc7f8: 0xc07b5fe  jal         func_1ED7F8
    ctx->pc = 0x1BC7F8u;
    SET_GPR_U32(ctx, 31, 0x1BC800u);
    ctx->pc = 0x1BC7FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC7F8u;
            // 0x1bc7fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED7F8u;
    if (runtime->hasFunction(0x1ED7F8u)) {
        auto targetFn = runtime->lookupFunction(0x1ED7F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC800u; }
        if (ctx->pc != 0x1BC800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1ed7f8_0x1ed828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC800u; }
        if (ctx->pc != 0x1BC800u) { return; }
    }
    ctx->pc = 0x1BC800u;
    // 0x1bc800: 0xc074ab6  jal         func_1D2AD8
    ctx->pc = 0x1BC800u;
    SET_GPR_U32(ctx, 31, 0x1BC808u);
    ctx->pc = 0x1BC804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC800u;
            // 0x1bc804: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D2AD8u;
    if (runtime->hasFunction(0x1D2AD8u)) {
        auto targetFn = runtime->lookupFunction(0x1D2AD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC808u; }
        if (ctx->pc != 0x1BC808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D2AD8_0x1d2ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC808u; }
        if (ctx->pc != 0x1BC808u) { return; }
    }
    ctx->pc = 0x1BC808u;
    // 0x1bc808: 0xc0757ec  jal         func_1D5FB0
    ctx->pc = 0x1BC808u;
    SET_GPR_U32(ctx, 31, 0x1BC810u);
    ctx->pc = 0x1BC80Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC808u;
            // 0x1bc80c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5FB0u;
    if (runtime->hasFunction(0x1D5FB0u)) {
        auto targetFn = runtime->lookupFunction(0x1D5FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC810u; }
        if (ctx->pc != 0x1BC810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5FB0_0x1d5fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC810u; }
        if (ctx->pc != 0x1BC810u) { return; }
    }
    ctx->pc = 0x1BC810u;
    // 0x1bc810: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1bc810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1bc814: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bc814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc818: 0xc08ab5a  jal         func_22AD68
    ctx->pc = 0x1BC818u;
    SET_GPR_U32(ctx, 31, 0x1BC820u);
    ctx->pc = 0x1BC81Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC818u;
            // 0x1bc81c: 0x8c4411d0  lw          $a0, 0x11D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AD68u;
    if (runtime->hasFunction(0x22AD68u)) {
        auto targetFn = runtime->lookupFunction(0x22AD68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC820u; }
        if (ctx->pc != 0x1BC820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022AD68_0x22ad68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC820u; }
        if (ctx->pc != 0x1BC820u) { return; }
    }
    ctx->pc = 0x1BC820u;
    // 0x1bc820: 0x8e045a58  lw          $a0, 0x5A58($s0)
    ctx->pc = 0x1bc820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23128)));
    // 0x1bc824: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1bc824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1bc828: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1bc828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1bc82c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1bc82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1bc830: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bc830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bc834: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1bc834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1bc838: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BC838u;
    {
        const bool branch_taken_0x1bc838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bc838) {
            ctx->pc = 0x1BC850u;
            goto label_1bc850;
        }
    }
    ctx->pc = 0x1BC840u;
    // 0x1bc840: 0xc06f76c  jal         func_1BDDB0
    ctx->pc = 0x1BC840u;
    SET_GPR_U32(ctx, 31, 0x1BC848u);
    ctx->pc = 0x1BDDB0u;
    if (runtime->hasFunction(0x1BDDB0u)) {
        auto targetFn = runtime->lookupFunction(0x1BDDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC848u; }
        if (ctx->pc != 0x1BC848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BDDB0_0x1bddb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC848u; }
        if (ctx->pc != 0x1BC848u) { return; }
    }
    ctx->pc = 0x1BC848u;
    // 0x1bc848: 0x100004b7  b           . + 4 + (0x4B7 << 2)
    ctx->pc = 0x1BC848u;
    {
        const bool branch_taken_0x1bc848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC848u;
            // 0x1bc84c: 0xaea05e68  sw          $zero, 0x5E68($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 24168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc848) {
            ctx->pc = 0x1BDB28u;
            goto label_1bdb28;
        }
    }
    ctx->pc = 0x1BC850u;
label_1bc850:
    // 0x1bc850: 0xc06f980  jal         func_1BE600
    ctx->pc = 0x1BC850u;
    SET_GPR_U32(ctx, 31, 0x1BC858u);
    ctx->pc = 0x1BC854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC850u;
            // 0x1bc854: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE600u;
    if (runtime->hasFunction(0x1BE600u)) {
        auto targetFn = runtime->lookupFunction(0x1BE600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC858u; }
        if (ctx->pc != 0x1BC858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE600_0x1be600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC858u; }
        if (ctx->pc != 0x1BC858u) { return; }
    }
    ctx->pc = 0x1BC858u;
    // 0x1bc858: 0x8e025a58  lw          $v0, 0x5A58($s0)
    ctx->pc = 0x1bc858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23128)));
    // 0x1bc85c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bc85cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc860: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bc860u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bc864: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1bc864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1bc868: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bc868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bc86c: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1bc86cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bc870: 0xac400068  sw          $zero, 0x68($v0)
    ctx->pc = 0x1bc870u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 0));
    // 0x1bc874: 0x8e025a58  lw          $v0, 0x5A58($s0)
    ctx->pc = 0x1bc874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23128)));
    // 0x1bc878: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bc878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bc87c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1bc87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1bc880: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bc880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bc884: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x1bc884u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
    // 0x1bc888: 0xac40005c  sw          $zero, 0x5C($v0)
    ctx->pc = 0x1bc888u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 0));
    // 0x1bc88c: 0x0  nop
    ctx->pc = 0x1bc88cu;
    // NOP
label_1bc890:
    // 0x1bc890: 0x8e025a58  lw          $v0, 0x5A58($s0)
    ctx->pc = 0x1bc890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23128)));
    // 0x1bc894: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1bc894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1bc898: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x1bc898u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1bc89c: 0x26655280  addiu       $a1, $s3, 0x5280
    ctx->pc = 0x1bc89cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 21120));
    // 0x1bc8a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bc8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bc8a4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1bc8a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1bc8a8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1bc8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1bc8ac: 0x28c40004  slti        $a0, $a2, 0x4
    ctx->pc = 0x1bc8acu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1bc8b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bc8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bc8b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bc8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bc8b8: 0xa040000a  sb          $zero, 0xA($v0)
    ctx->pc = 0x1bc8b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bc8bc: 0x8e025a58  lw          $v0, 0x5A58($s0)
    ctx->pc = 0x1bc8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23128)));
    // 0x1bc8c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bc8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bc8c4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1bc8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1bc8c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bc8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bc8cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bc8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bc8d0: 0x1480ffef  bnez        $a0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1BC8D0u;
    {
        const bool branch_taken_0x1bc8d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC8D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC8D0u;
            // 0x1bc8d4: 0xa0400032  sb          $zero, 0x32($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 50), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc8d0) {
            ctx->pc = 0x1BC890u;
            runtime->cooperativeGuestYield();
            goto label_1bc890;
        }
    }
    ctx->pc = 0x1BC8D8u;
    // 0x1bc8d8: 0x8e045a58  lw          $a0, 0x5A58($s0)
    ctx->pc = 0x1bc8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23128)));
    // 0x1bc8dc: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1bc8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1bc8e0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1bc8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1bc8e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bc8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bc8e8: 0x8c450064  lw          $a1, 0x64($v0)
    ctx->pc = 0x1bc8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1bc8ec: 0x10a0048d  beqz        $a1, . + 4 + (0x48D << 2)
    ctx->pc = 0x1BC8ECu;
    {
        const bool branch_taken_0x1bc8ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC8F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC8ECu;
            // 0x1bc8f0: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc8ec) {
            ctx->pc = 0x1BDB24u;
            goto label_1bdb24;
        }
    }
    ctx->pc = 0x1BC8F4u;
    // 0x1bc8f4: 0x8c425074  lw          $v0, 0x5074($v0)
    ctx->pc = 0x1bc8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20596)));
    // 0x1bc8f8: 0x5040048b  beql        $v0, $zero, . + 4 + (0x48B << 2)
    ctx->pc = 0x1BC8F8u;
    {
        const bool branch_taken_0x1bc8f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc8f8) {
            ctx->pc = 0x1BC8FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC8F8u;
            // 0x1bc8fc: 0xaea05e68  sw          $zero, 0x5E68($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 24168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BDB28u;
            goto label_1bdb28;
        }
    }
    ctx->pc = 0x1BC900u;
    // 0x1bc900: 0x40f809  jalr        $v0
    ctx->pc = 0x1BC900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BC908u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BC908u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BC648u: goto label_1bc648;
            case 0x1BC66Cu: goto label_1bc66c;
            case 0x1BC6B0u: goto label_1bc6b0;
            case 0x1BC708u: goto label_1bc708;
            case 0x1BC788u: goto label_1bc788;
            case 0x1BC7C0u: goto label_1bc7c0;
            case 0x1BC7C8u: goto label_1bc7c8;
            case 0x1BC850u: goto label_1bc850;
            case 0x1BC890u: goto label_1bc890;
            case 0x1BC910u: goto label_1bc910;
            case 0x1BC958u: goto label_1bc958;
            case 0x1BC998u: goto label_1bc998;
            case 0x1BCA90u: goto label_1bca90;
            case 0x1BCAC8u: goto label_1bcac8;
            case 0x1BCAD0u: goto label_1bcad0;
            case 0x1BCB50u: goto label_1bcb50;
            case 0x1BCBA8u: goto label_1bcba8;
            case 0x1BCC40u: goto label_1bcc40;
            case 0x1BCC50u: goto label_1bcc50;
            case 0x1BCC70u: goto label_1bcc70;
            case 0x1BCCB8u: goto label_1bccb8;
            case 0x1BCCD8u: goto label_1bccd8;
            case 0x1BCD08u: goto label_1bcd08;
            case 0x1BCDC0u: goto label_1bcdc0;
            case 0x1BCE78u: goto label_1bce78;
            case 0x1BCEE8u: goto label_1bcee8;
            case 0x1BCF08u: goto label_1bcf08;
            case 0x1BCF28u: goto label_1bcf28;
            case 0x1BCF50u: goto label_1bcf50;
            case 0x1BCF8Cu: goto label_1bcf8c;
            case 0x1BCF90u: goto label_1bcf90;
            case 0x1BCFA4u: goto label_1bcfa4;
            case 0x1BCFD8u: goto label_1bcfd8;
            case 0x1BD018u: goto label_1bd018;
            case 0x1BD048u: goto label_1bd048;
            case 0x1BD088u: goto label_1bd088;
            case 0x1BD0C0u: goto label_1bd0c0;
            case 0x1BD168u: goto label_1bd168;
            case 0x1BD210u: goto label_1bd210;
            case 0x1BD288u: goto label_1bd288;
            case 0x1BD2C0u: goto label_1bd2c0;
            case 0x1BD2F0u: goto label_1bd2f0;
            case 0x1BD360u: goto label_1bd360;
            case 0x1BD398u: goto label_1bd398;
            case 0x1BD408u: goto label_1bd408;
            case 0x1BD448u: goto label_1bd448;
            case 0x1BD490u: goto label_1bd490;
            case 0x1BD4C0u: goto label_1bd4c0;
            case 0x1BD578u: goto label_1bd578;
            case 0x1BD5E0u: goto label_1bd5e0;
            case 0x1BD680u: goto label_1bd680;
            case 0x1BD6B0u: goto label_1bd6b0;
            case 0x1BD6E8u: goto label_1bd6e8;
            case 0x1BD718u: goto label_1bd718;
            case 0x1BD73Cu: goto label_1bd73c;
            case 0x1BD758u: goto label_1bd758;
            case 0x1BD808u: goto label_1bd808;
            case 0x1BD810u: goto label_1bd810;
            case 0x1BD898u: goto label_1bd898;
            case 0x1BD8B4u: goto label_1bd8b4;
            case 0x1BD8C0u: goto label_1bd8c0;
            case 0x1BD958u: goto label_1bd958;
            case 0x1BD95Cu: goto label_1bd95c;
            case 0x1BD998u: goto label_1bd998;
            case 0x1BD99Cu: goto label_1bd99c;
            case 0x1BD9A8u: goto label_1bd9a8;
            case 0x1BD9ACu: goto label_1bd9ac;
            case 0x1BD9C0u: goto label_1bd9c0;
            case 0x1BD9E0u: goto label_1bd9e0;
            case 0x1BDA58u: goto label_1bda58;
            case 0x1BDB10u: goto label_1bdb10;
            case 0x1BDB24u: goto label_1bdb24;
            case 0x1BDB28u: goto label_1bdb28;
            case 0x1BDB2Cu: goto label_1bdb2c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BC908u; }
            if (ctx->pc != 0x1BC908u) { return; }
        }
        }
    }
    ctx->pc = 0x1BC908u;
    // 0x1bc908: 0x10000487  b           . + 4 + (0x487 << 2)
    ctx->pc = 0x1BC908u;
    {
        const bool branch_taken_0x1bc908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC90Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC908u;
            // 0x1bc90c: 0xaea05e68  sw          $zero, 0x5E68($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 24168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc908) {
            ctx->pc = 0x1BDB28u;
            goto label_1bdb28;
        }
    }
    ctx->pc = 0x1BC910u;
label_1bc910:
    // 0x1bc910: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1bc910u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1bc914: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bc914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bc918: 0x8cc5cc44  lw          $a1, -0x33BC($a2)
    ctx->pc = 0x1bc918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294954052)));
    // 0x1bc91c: 0x24425a68  addiu       $v0, $v0, 0x5A68
    ctx->pc = 0x1bc91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23144));
    // 0x1bc920: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x1bc920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1bc924: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x1bc924u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x1bc928: 0x52140  sll         $a0, $a1, 5
    ctx->pc = 0x1bc928u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1bc92c: 0x839821  addu        $s3, $a0, $v1
    ctx->pc = 0x1bc92cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1bc930: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1bc930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1bc934: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x1bc934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1bc938: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1bc938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1bc93c: 0x94670002  lhu         $a3, 0x2($v1)
    ctx->pc = 0x1bc93cu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1bc940: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1bc940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1bc944: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x1bc944u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1bc948: 0xae075a58  sw          $a3, 0x5A58($s0)
    ctx->pc = 0x1bc948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 23128), GPR_U32(ctx, 7));
    // 0x1bc94c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BC94Cu;
    {
        const bool branch_taken_0x1bc94c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC94Cu;
            // 0x1bc950: 0xacc5cc44  sw          $a1, -0x33BC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294954052), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc94c) {
            ctx->pc = 0x1BC958u;
            goto label_1bc958;
        }
    }
    ctx->pc = 0x1BC954u;
    // 0x1bc954: 0xacc0cc44  sw          $zero, -0x33BC($a2)
    ctx->pc = 0x1bc954u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294954052), GPR_U32(ctx, 0));
label_1bc958:
    // 0x1bc958: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1bc958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1bc95c: 0x8c62cc40  lw          $v0, -0x33C0($v1)
    ctx->pc = 0x1bc95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954048)));
    // 0x1bc960: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bc960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bc964: 0xac62cc40  sw          $v0, -0x33C0($v1)
    ctx->pc = 0x1bc964u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954048), GPR_U32(ctx, 2));
    // 0x1bc968: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x1bc968u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x1bc96c: 0x24c35280  addiu       $v1, $a2, 0x5280
    ctx->pc = 0x1bc96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 21120));
    // 0x1bc970: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x1bc970u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1bc974: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bc974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bc978: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bc978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc97c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bc97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bc980: 0x8c430068  lw          $v1, 0x68($v0)
    ctx->pc = 0x1bc980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1bc984: 0xac440064  sw          $a0, 0x64($v0)
    ctx->pc = 0x1bc984u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 4));
    // 0x1bc988: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x1bc988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x1bc98c: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x1bc98cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
    // 0x1bc990: 0xac430068  sw          $v1, 0x68($v0)
    ctx->pc = 0x1bc990u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 3));
    // 0x1bc994: 0x0  nop
    ctx->pc = 0x1bc994u;
    // NOP
label_1bc998:
    // 0x1bc998: 0x8e025a58  lw          $v0, 0x5A58($s0)
    ctx->pc = 0x1bc998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23128)));
    // 0x1bc99c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1bc99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1bc9a0: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x1bc9a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1bc9a4: 0x24d25280  addiu       $s2, $a2, 0x5280
    ctx->pc = 0x1bc9a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 21120));
    // 0x1bc9a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bc9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bc9ac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1bc9acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1bc9b0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1bc9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1bc9b4: 0x28a40004  slti        $a0, $a1, 0x4
    ctx->pc = 0x1bc9b4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1bc9b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bc9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bc9bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bc9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bc9c0: 0xa040000a  sb          $zero, 0xA($v0)
    ctx->pc = 0x1bc9c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bc9c4: 0x8e025a58  lw          $v0, 0x5A58($s0)
    ctx->pc = 0x1bc9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23128)));
    // 0x1bc9c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bc9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bc9cc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1bc9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1bc9d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bc9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bc9d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bc9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bc9d8: 0x1480ffef  bnez        $a0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1BC9D8u;
    {
        const bool branch_taken_0x1bc9d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC9DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC9D8u;
            // 0x1bc9dc: 0xa0400032  sb          $zero, 0x32($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 50), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc9d8) {
            ctx->pc = 0x1BC998u;
            runtime->cooperativeGuestYield();
            goto label_1bc998;
        }
    }
    ctx->pc = 0x1BC9E0u;
    // 0x1bc9e0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1bc9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1bc9e4: 0x8e045a58  lw          $a0, 0x5A58($s0)
    ctx->pc = 0x1bc9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23128)));
    // 0x1bc9e8: 0x8c45cc5c  lw          $a1, -0x33A4($v0)
    ctx->pc = 0x1bc9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954076)));
    // 0x1bc9ec: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1bc9ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1bc9f0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1bc9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1bc9f4: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x1bc9f4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1bc9f8: 0x8c47cc6c  lw          $a3, -0x3394($v0)
    ctx->pc = 0x1bc9f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954092)));
    // 0x1bc9fc: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1bc9fcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bca00: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1bca00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1bca04: 0xac44c808  sw          $a0, -0x37F8($v0)
    ctx->pc = 0x1bca04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294952968), GPR_U32(ctx, 4));
    // 0x1bca08: 0xacc7c80c  sw          $a3, -0x37F4($a2)
    ctx->pc = 0x1bca08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294952972), GPR_U32(ctx, 7));
    // 0x1bca0c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bca0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bca10: 0x2451e848  addiu       $s1, $v0, -0x17B8
    ctx->pc = 0x1bca10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1bca14: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bca14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bca18: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1bca18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1bca1c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1bca1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bca20: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1bca20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1bca24: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x1bca24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x1bca28: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x1bca28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x1bca2c: 0x40f809  jalr        $v0
    ctx->pc = 0x1BCA2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BCA34u);
        ctx->pc = 0x1BCA30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCA2Cu;
            // 0x1bca30: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BCA34u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BC648u: goto label_1bc648;
            case 0x1BC66Cu: goto label_1bc66c;
            case 0x1BC6B0u: goto label_1bc6b0;
            case 0x1BC708u: goto label_1bc708;
            case 0x1BC788u: goto label_1bc788;
            case 0x1BC7C0u: goto label_1bc7c0;
            case 0x1BC7C8u: goto label_1bc7c8;
            case 0x1BC850u: goto label_1bc850;
            case 0x1BC890u: goto label_1bc890;
            case 0x1BC910u: goto label_1bc910;
            case 0x1BC958u: goto label_1bc958;
            case 0x1BC998u: goto label_1bc998;
            case 0x1BCA90u: goto label_1bca90;
            case 0x1BCAC8u: goto label_1bcac8;
            case 0x1BCAD0u: goto label_1bcad0;
            case 0x1BCB50u: goto label_1bcb50;
            case 0x1BCBA8u: goto label_1bcba8;
            case 0x1BCC40u: goto label_1bcc40;
            case 0x1BCC50u: goto label_1bcc50;
            case 0x1BCC70u: goto label_1bcc70;
            case 0x1BCCB8u: goto label_1bccb8;
            case 0x1BCCD8u: goto label_1bccd8;
            case 0x1BCD08u: goto label_1bcd08;
            case 0x1BCDC0u: goto label_1bcdc0;
            case 0x1BCE78u: goto label_1bce78;
            case 0x1BCEE8u: goto label_1bcee8;
            case 0x1BCF08u: goto label_1bcf08;
            case 0x1BCF28u: goto label_1bcf28;
            case 0x1BCF50u: goto label_1bcf50;
            case 0x1BCF8Cu: goto label_1bcf8c;
            case 0x1BCF90u: goto label_1bcf90;
            case 0x1BCFA4u: goto label_1bcfa4;
            case 0x1BCFD8u: goto label_1bcfd8;
            case 0x1BD018u: goto label_1bd018;
            case 0x1BD048u: goto label_1bd048;
            case 0x1BD088u: goto label_1bd088;
            case 0x1BD0C0u: goto label_1bd0c0;
            case 0x1BD168u: goto label_1bd168;
            case 0x1BD210u: goto label_1bd210;
            case 0x1BD288u: goto label_1bd288;
            case 0x1BD2C0u: goto label_1bd2c0;
            case 0x1BD2F0u: goto label_1bd2f0;
            case 0x1BD360u: goto label_1bd360;
            case 0x1BD398u: goto label_1bd398;
            case 0x1BD408u: goto label_1bd408;
            case 0x1BD448u: goto label_1bd448;
            case 0x1BD490u: goto label_1bd490;
            case 0x1BD4C0u: goto label_1bd4c0;
            case 0x1BD578u: goto label_1bd578;
            case 0x1BD5E0u: goto label_1bd5e0;
            case 0x1BD680u: goto label_1bd680;
            case 0x1BD6B0u: goto label_1bd6b0;
            case 0x1BD6E8u: goto label_1bd6e8;
            case 0x1BD718u: goto label_1bd718;
            case 0x1BD73Cu: goto label_1bd73c;
            case 0x1BD758u: goto label_1bd758;
            case 0x1BD808u: goto label_1bd808;
            case 0x1BD810u: goto label_1bd810;
            case 0x1BD898u: goto label_1bd898;
            case 0x1BD8B4u: goto label_1bd8b4;
            case 0x1BD8C0u: goto label_1bd8c0;
            case 0x1BD958u: goto label_1bd958;
            case 0x1BD95Cu: goto label_1bd95c;
            case 0x1BD998u: goto label_1bd998;
            case 0x1BD99Cu: goto label_1bd99c;
            case 0x1BD9A8u: goto label_1bd9a8;
            case 0x1BD9ACu: goto label_1bd9ac;
            case 0x1BD9C0u: goto label_1bd9c0;
            case 0x1BD9E0u: goto label_1bd9e0;
            case 0x1BDA58u: goto label_1bda58;
            case 0x1BDB10u: goto label_1bdb10;
            case 0x1BDB24u: goto label_1bdb24;
            case 0x1BDB28u: goto label_1bdb28;
            case 0x1BDB2Cu: goto label_1bdb2c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BCA34u; }
            if (ctx->pc != 0x1BCA34u) { return; }
        }
        }
    }
    ctx->pc = 0x1BCA34u;
    // 0x1bca34: 0x8e025a58  lw          $v0, 0x5A58($s0)
    ctx->pc = 0x1bca34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23128)));
    // 0x1bca38: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1bca38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bca3c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1bca3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1bca40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bca40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bca44: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1bca44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1bca48: 0xc0a274e  jal         func_289D38
    ctx->pc = 0x1BCA48u;
    SET_GPR_U32(ctx, 31, 0x1BCA50u);
    ctx->pc = 0x1BCA4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCA48u;
            // 0x1bca4c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289D38u;
    if (runtime->hasFunction(0x289D38u)) {
        auto targetFn = runtime->lookupFunction(0x289D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCA50u; }
        if (ctx->pc != 0x1BCA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289d38_0x289f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCA50u; }
        if (ctx->pc != 0x1BCA50u) { return; }
    }
    ctx->pc = 0x1BCA50u;
    // 0x1bca50: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bca50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bca54: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1bca54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bca58: 0x8c445a28  lw          $a0, 0x5A28($v0)
    ctx->pc = 0x1bca58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23080)));
    // 0x1bca5c: 0xc0617ca  jal         func_185F28
    ctx->pc = 0x1BCA5Cu;
    SET_GPR_U32(ctx, 31, 0x1BCA64u);
    ctx->pc = 0x1BCA60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCA5Cu;
            // 0x1bca60: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185F28u;
    if (runtime->hasFunction(0x185F28u)) {
        auto targetFn = runtime->lookupFunction(0x185F28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCA64u; }
        if (ctx->pc != 0x1BCA64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185F28_0x185f28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCA64u; }
        if (ctx->pc != 0x1BCA64u) { return; }
    }
    ctx->pc = 0x1BCA64u;
    // 0x1bca64: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1BCA64u;
    {
        const bool branch_taken_0x1bca64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BCA68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCA64u;
            // 0x1bca68: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bca64) {
            ctx->pc = 0x1BCAC8u;
            goto label_1bcac8;
        }
    }
    ctx->pc = 0x1BCA6Cu;
    // 0x1bca6c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bca6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bca70: 0x8c425074  lw          $v0, 0x5074($v0)
    ctx->pc = 0x1bca70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20596)));
    // 0x1bca74: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BCA74u;
    {
        const bool branch_taken_0x1bca74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bca74) {
            ctx->pc = 0x1BCA78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCA74u;
            // 0x1bca78: 0x8e025a58  lw          $v0, 0x5A58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BCA90u;
            goto label_1bca90;
        }
    }
    ctx->pc = 0x1BCA7Cu;
    // 0x1bca7c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x1bca7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x1bca80: 0x8e045a58  lw          $a0, 0x5A58($s0)
    ctx->pc = 0x1bca80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23128)));
    // 0x1bca84: 0x40f809  jalr        $v0
    ctx->pc = 0x1BCA84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BCA8Cu);
        ctx->pc = 0x1BCA88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCA84u;
            // 0x1bca88: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BCA8Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BC648u: goto label_1bc648;
            case 0x1BC66Cu: goto label_1bc66c;
            case 0x1BC6B0u: goto label_1bc6b0;
            case 0x1BC708u: goto label_1bc708;
            case 0x1BC788u: goto label_1bc788;
            case 0x1BC7C0u: goto label_1bc7c0;
            case 0x1BC7C8u: goto label_1bc7c8;
            case 0x1BC850u: goto label_1bc850;
            case 0x1BC890u: goto label_1bc890;
            case 0x1BC910u: goto label_1bc910;
            case 0x1BC958u: goto label_1bc958;
            case 0x1BC998u: goto label_1bc998;
            case 0x1BCA90u: goto label_1bca90;
            case 0x1BCAC8u: goto label_1bcac8;
            case 0x1BCAD0u: goto label_1bcad0;
            case 0x1BCB50u: goto label_1bcb50;
            case 0x1BCBA8u: goto label_1bcba8;
            case 0x1BCC40u: goto label_1bcc40;
            case 0x1BCC50u: goto label_1bcc50;
            case 0x1BCC70u: goto label_1bcc70;
            case 0x1BCCB8u: goto label_1bccb8;
            case 0x1BCCD8u: goto label_1bccd8;
            case 0x1BCD08u: goto label_1bcd08;
            case 0x1BCDC0u: goto label_1bcdc0;
            case 0x1BCE78u: goto label_1bce78;
            case 0x1BCEE8u: goto label_1bcee8;
            case 0x1BCF08u: goto label_1bcf08;
            case 0x1BCF28u: goto label_1bcf28;
            case 0x1BCF50u: goto label_1bcf50;
            case 0x1BCF8Cu: goto label_1bcf8c;
            case 0x1BCF90u: goto label_1bcf90;
            case 0x1BCFA4u: goto label_1bcfa4;
            case 0x1BCFD8u: goto label_1bcfd8;
            case 0x1BD018u: goto label_1bd018;
            case 0x1BD048u: goto label_1bd048;
            case 0x1BD088u: goto label_1bd088;
            case 0x1BD0C0u: goto label_1bd0c0;
            case 0x1BD168u: goto label_1bd168;
            case 0x1BD210u: goto label_1bd210;
            case 0x1BD288u: goto label_1bd288;
            case 0x1BD2C0u: goto label_1bd2c0;
            case 0x1BD2F0u: goto label_1bd2f0;
            case 0x1BD360u: goto label_1bd360;
            case 0x1BD398u: goto label_1bd398;
            case 0x1BD408u: goto label_1bd408;
            case 0x1BD448u: goto label_1bd448;
            case 0x1BD490u: goto label_1bd490;
            case 0x1BD4C0u: goto label_1bd4c0;
            case 0x1BD578u: goto label_1bd578;
            case 0x1BD5E0u: goto label_1bd5e0;
            case 0x1BD680u: goto label_1bd680;
            case 0x1BD6B0u: goto label_1bd6b0;
            case 0x1BD6E8u: goto label_1bd6e8;
            case 0x1BD718u: goto label_1bd718;
            case 0x1BD73Cu: goto label_1bd73c;
            case 0x1BD758u: goto label_1bd758;
            case 0x1BD808u: goto label_1bd808;
            case 0x1BD810u: goto label_1bd810;
            case 0x1BD898u: goto label_1bd898;
            case 0x1BD8B4u: goto label_1bd8b4;
            case 0x1BD8C0u: goto label_1bd8c0;
            case 0x1BD958u: goto label_1bd958;
            case 0x1BD95Cu: goto label_1bd95c;
            case 0x1BD998u: goto label_1bd998;
            case 0x1BD99Cu: goto label_1bd99c;
            case 0x1BD9A8u: goto label_1bd9a8;
            case 0x1BD9ACu: goto label_1bd9ac;
            case 0x1BD9C0u: goto label_1bd9c0;
            case 0x1BD9E0u: goto label_1bd9e0;
            case 0x1BDA58u: goto label_1bda58;
            case 0x1BDB10u: goto label_1bdb10;
            case 0x1BDB24u: goto label_1bdb24;
            case 0x1BDB28u: goto label_1bdb28;
            case 0x1BDB2Cu: goto label_1bdb2c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BCA8Cu; }
            if (ctx->pc != 0x1BCA8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1BCA8Cu;
    // 0x1bca8c: 0x8e025a58  lw          $v0, 0x5A58($s0)
    ctx->pc = 0x1bca8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23128)));
label_1bca90:
    // 0x1bca90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bca90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bca94: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1bca94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1bca98: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bca98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bca9c: 0xac40005c  sw          $zero, 0x5C($v0)
    ctx->pc = 0x1bca9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 0));
    // 0x1bcaa0: 0xac400068  sw          $zero, 0x68($v0)
    ctx->pc = 0x1bcaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 0));
    // 0x1bcaa4: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x1bcaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x1bcaa8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1bcaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1bcaac: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x1bcaacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1bcab0: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x1bcab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x1bcab4: 0x40f809  jalr        $v0
    ctx->pc = 0x1BCAB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BCABCu);
        ctx->pc = 0x1BCAB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCAB4u;
            // 0x1bcab8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BCABCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BC648u: goto label_1bc648;
            case 0x1BC66Cu: goto label_1bc66c;
            case 0x1BC6B0u: goto label_1bc6b0;
            case 0x1BC708u: goto label_1bc708;
            case 0x1BC788u: goto label_1bc788;
            case 0x1BC7C0u: goto label_1bc7c0;
            case 0x1BC7C8u: goto label_1bc7c8;
            case 0x1BC850u: goto label_1bc850;
            case 0x1BC890u: goto label_1bc890;
            case 0x1BC910u: goto label_1bc910;
            case 0x1BC958u: goto label_1bc958;
            case 0x1BC998u: goto label_1bc998;
            case 0x1BCA90u: goto label_1bca90;
            case 0x1BCAC8u: goto label_1bcac8;
            case 0x1BCAD0u: goto label_1bcad0;
            case 0x1BCB50u: goto label_1bcb50;
            case 0x1BCBA8u: goto label_1bcba8;
            case 0x1BCC40u: goto label_1bcc40;
            case 0x1BCC50u: goto label_1bcc50;
            case 0x1BCC70u: goto label_1bcc70;
            case 0x1BCCB8u: goto label_1bccb8;
            case 0x1BCCD8u: goto label_1bccd8;
            case 0x1BCD08u: goto label_1bcd08;
            case 0x1BCDC0u: goto label_1bcdc0;
            case 0x1BCE78u: goto label_1bce78;
            case 0x1BCEE8u: goto label_1bcee8;
            case 0x1BCF08u: goto label_1bcf08;
            case 0x1BCF28u: goto label_1bcf28;
            case 0x1BCF50u: goto label_1bcf50;
            case 0x1BCF8Cu: goto label_1bcf8c;
            case 0x1BCF90u: goto label_1bcf90;
            case 0x1BCFA4u: goto label_1bcfa4;
            case 0x1BCFD8u: goto label_1bcfd8;
            case 0x1BD018u: goto label_1bd018;
            case 0x1BD048u: goto label_1bd048;
            case 0x1BD088u: goto label_1bd088;
            case 0x1BD0C0u: goto label_1bd0c0;
            case 0x1BD168u: goto label_1bd168;
            case 0x1BD210u: goto label_1bd210;
            case 0x1BD288u: goto label_1bd288;
            case 0x1BD2C0u: goto label_1bd2c0;
            case 0x1BD2F0u: goto label_1bd2f0;
            case 0x1BD360u: goto label_1bd360;
            case 0x1BD398u: goto label_1bd398;
            case 0x1BD408u: goto label_1bd408;
            case 0x1BD448u: goto label_1bd448;
            case 0x1BD490u: goto label_1bd490;
            case 0x1BD4C0u: goto label_1bd4c0;
            case 0x1BD578u: goto label_1bd578;
            case 0x1BD5E0u: goto label_1bd5e0;
            case 0x1BD680u: goto label_1bd680;
            case 0x1BD6B0u: goto label_1bd6b0;
            case 0x1BD6E8u: goto label_1bd6e8;
            case 0x1BD718u: goto label_1bd718;
            case 0x1BD73Cu: goto label_1bd73c;
            case 0x1BD758u: goto label_1bd758;
            case 0x1BD808u: goto label_1bd808;
            case 0x1BD810u: goto label_1bd810;
            case 0x1BD898u: goto label_1bd898;
            case 0x1BD8B4u: goto label_1bd8b4;
            case 0x1BD8C0u: goto label_1bd8c0;
            case 0x1BD958u: goto label_1bd958;
            case 0x1BD95Cu: goto label_1bd95c;
            case 0x1BD998u: goto label_1bd998;
            case 0x1BD99Cu: goto label_1bd99c;
            case 0x1BD9A8u: goto label_1bd9a8;
            case 0x1BD9ACu: goto label_1bd9ac;
            case 0x1BD9C0u: goto label_1bd9c0;
            case 0x1BD9E0u: goto label_1bd9e0;
            case 0x1BDA58u: goto label_1bda58;
            case 0x1BDB10u: goto label_1bdb10;
            case 0x1BDB24u: goto label_1bdb24;
            case 0x1BDB28u: goto label_1bdb28;
            case 0x1BDB2Cu: goto label_1bdb2c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BCABCu; }
            if (ctx->pc != 0x1BCABCu) { return; }
        }
        }
    }
    ctx->pc = 0x1BCABCu;
    // 0x1bcabc: 0x10000414  b           . + 4 + (0x414 << 2)
    ctx->pc = 0x1BCABCu;
    {
        const bool branch_taken_0x1bcabc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCAC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCABCu;
            // 0x1bcac0: 0x8e23006c  lw          $v1, 0x6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcabc) {
            ctx->pc = 0x1BDB10u;
            goto label_1bdb10;
        }
    }
    ctx->pc = 0x1BCAC4u;
    // 0x1bcac4: 0x0  nop
    ctx->pc = 0x1bcac4u;
    // NOP
label_1bcac8:
    // 0x1bcac8: 0x10000417  b           . + 4 + (0x417 << 2)
    ctx->pc = 0x1BCAC8u;
    {
        const bool branch_taken_0x1bcac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCAC8u;
            // 0x1bcacc: 0xaea25e68  sw          $v0, 0x5E68($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 24168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcac8) {
            ctx->pc = 0x1BDB28u;
            goto label_1bdb28;
        }
    }
    ctx->pc = 0x1BCAD0u;
label_1bcad0:
    // 0x1bcad0: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x1bcad0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x1bcad4: 0x8e045a28  lw          $a0, 0x5A28($s0)
    ctx->pc = 0x1bcad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23080)));
    // 0x1bcad8: 0x8c910054  lw          $s1, 0x54($a0)
    ctx->pc = 0x1bcad8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x1bcadc: 0x12200032  beqz        $s1, . + 4 + (0x32 << 2)
    ctx->pc = 0x1BCADCu;
    {
        const bool branch_taken_0x1bcadc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCAE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCADCu;
            // 0x1bcae0: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcadc) {
            ctx->pc = 0x1BCBA8u;
            goto label_1bcba8;
        }
    }
    ctx->pc = 0x1BCAE4u;
    // 0x1bcae4: 0x8c62cc4c  lw          $v0, -0x33B4($v1)
    ctx->pc = 0x1bcae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954060)));
    // 0x1bcae8: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1BCAE8u;
    {
        const bool branch_taken_0x1bcae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCAECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCAE8u;
            // 0x1bcaec: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcae8) {
            ctx->pc = 0x1BCBA8u;
            goto label_1bcba8;
        }
    }
    ctx->pc = 0x1BCAF0u;
    // 0x1bcaf0: 0x8c42c804  lw          $v0, -0x37FC($v0)
    ctx->pc = 0x1bcaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952964)));
    // 0x1bcaf4: 0x1c40002c  bgtz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1BCAF4u;
    {
        const bool branch_taken_0x1bcaf4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1bcaf4) {
            ctx->pc = 0x1BCBA8u;
            goto label_1bcba8;
        }
    }
    ctx->pc = 0x1BCAFCu;
    // 0x1bcafc: 0xc06179e  jal         func_185E78
    ctx->pc = 0x1BCAFCu;
    SET_GPR_U32(ctx, 31, 0x1BCB04u);
    ctx->pc = 0x1BCB00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCAFCu;
            // 0x1bcb00: 0xac60cc4c  sw          $zero, -0x33B4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954060), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185E78u;
    if (runtime->hasFunction(0x185E78u)) {
        auto targetFn = runtime->lookupFunction(0x185E78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCB04u; }
        if (ctx->pc != 0x1BCB04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185E78_0x185e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCB04u; }
        if (ctx->pc != 0x1BCB04u) { return; }
    }
    ctx->pc = 0x1BCB04u;
    // 0x1bcb04: 0xc06f980  jal         func_1BE600
    ctx->pc = 0x1BCB04u;
    SET_GPR_U32(ctx, 31, 0x1BCB0Cu);
    ctx->pc = 0x1BCB08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCB04u;
            // 0x1bcb08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE600u;
    if (runtime->hasFunction(0x1BE600u)) {
        auto targetFn = runtime->lookupFunction(0x1BE600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCB0Cu; }
        if (ctx->pc != 0x1BCB0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE600_0x1be600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCB0Cu; }
        if (ctx->pc != 0x1BCB0Cu) { return; }
    }
    ctx->pc = 0x1BCB0Cu;
    // 0x1bcb0c: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x1bcb0cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x1bcb10: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x1bcb10u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x1bcb14: 0x8ce25a58  lw          $v0, 0x5A58($a3)
    ctx->pc = 0x1bcb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 23128)));
    // 0x1bcb18: 0x25035280  addiu       $v1, $t0, 0x5280
    ctx->pc = 0x1bcb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 21120));
    // 0x1bcb1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bcb1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcb20: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bcb20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bcb24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bcb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bcb28: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bcb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bcb2c: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1bcb2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bcb30: 0xac400068  sw          $zero, 0x68($v0)
    ctx->pc = 0x1bcb30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 0));
    // 0x1bcb34: 0x8ce25a58  lw          $v0, 0x5A58($a3)
    ctx->pc = 0x1bcb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 23128)));
    // 0x1bcb38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bcb38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bcb3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bcb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bcb40: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bcb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bcb44: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x1bcb44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
    // 0x1bcb48: 0xac40005c  sw          $zero, 0x5C($v0)
    ctx->pc = 0x1bcb48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 0));
    // 0x1bcb4c: 0x0  nop
    ctx->pc = 0x1bcb4cu;
    // NOP
label_1bcb50:
    // 0x1bcb50: 0x8ce25a58  lw          $v0, 0x5A58($a3)
    ctx->pc = 0x1bcb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 23128)));
    // 0x1bcb54: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1bcb54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1bcb58: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x1bcb58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1bcb5c: 0x25045280  addiu       $a0, $t0, 0x5280
    ctx->pc = 0x1bcb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 21120));
    // 0x1bcb60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bcb60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bcb64: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1bcb64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1bcb68: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1bcb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1bcb6c: 0x28c50004  slti        $a1, $a2, 0x4
    ctx->pc = 0x1bcb6cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1bcb70: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bcb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bcb74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bcb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bcb78: 0xa040000a  sb          $zero, 0xA($v0)
    ctx->pc = 0x1bcb78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bcb7c: 0x8ce25a58  lw          $v0, 0x5A58($a3)
    ctx->pc = 0x1bcb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 23128)));
    // 0x1bcb80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bcb80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bcb84: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1bcb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1bcb88: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bcb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bcb8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bcb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bcb90: 0x14a0ffef  bnez        $a1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1BCB90u;
    {
        const bool branch_taken_0x1bcb90 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BCB94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCB90u;
            // 0x1bcb94: 0xa0400032  sb          $zero, 0x32($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 50), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcb90) {
            ctx->pc = 0x1BCB50u;
            runtime->cooperativeGuestYield();
            goto label_1bcb50;
        }
    }
    ctx->pc = 0x1BCB98u;
    // 0x1bcb98: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bcb98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bcb9c: 0x100003dc  b           . + 4 + (0x3DC << 2)
    ctx->pc = 0x1BCB9Cu;
    {
        const bool branch_taken_0x1bcb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCBA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCB9Cu;
            // 0x1bcba0: 0x8c43e8b4  lw          $v1, -0x174C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcb9c) {
            ctx->pc = 0x1BDB10u;
            goto label_1bdb10;
        }
    }
    ctx->pc = 0x1BCBA4u;
    // 0x1bcba4: 0x0  nop
    ctx->pc = 0x1bcba4u;
    // NOP
label_1bcba8:
    // 0x1bcba8: 0xc061688  jal         func_185A20
    ctx->pc = 0x1BCBA8u;
    SET_GPR_U32(ctx, 31, 0x1BCBB0u);
    ctx->pc = 0x1BCBACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCBA8u;
            // 0x1bcbac: 0x8e045a28  lw          $a0, 0x5A28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23080)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185A20u;
    if (runtime->hasFunction(0x185A20u)) {
        auto targetFn = runtime->lookupFunction(0x185A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCBB0u; }
        if (ctx->pc != 0x1BCBB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185A20_0x185a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCBB0u; }
        if (ctx->pc != 0x1BCBB0u) { return; }
    }
    ctx->pc = 0x1BCBB0u;
    // 0x1bcbb0: 0x544003de  bnel        $v0, $zero, . + 4 + (0x3DE << 2)
    ctx->pc = 0x1BCBB0u;
    {
        const bool branch_taken_0x1bcbb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bcbb0) {
            ctx->pc = 0x1BCBB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCBB0u;
            // 0x1bcbb4: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BDB2Cu;
            goto label_1bdb2c;
        }
    }
    ctx->pc = 0x1BCBB8u;
    // 0x1bcbb8: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x1bcbb8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x1bcbbc: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1bcbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1bcbc0: 0x8e225a58  lw          $v0, 0x5A58($s1)
    ctx->pc = 0x1bcbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 23128)));
    // 0x1bcbc4: 0x24635280  addiu       $v1, $v1, 0x5280
    ctx->pc = 0x1bcbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21120));
    // 0x1bcbc8: 0x8e045a28  lw          $a0, 0x5A28($s0)
    ctx->pc = 0x1bcbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23080)));
    // 0x1bcbcc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bcbccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bcbd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bcbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bcbd4: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x1bcbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x1bcbd8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1bcbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bcbdc: 0x8c620068  lw          $v0, 0x68($v1)
    ctx->pc = 0x1bcbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1bcbe0: 0xac64005c  sw          $a0, 0x5C($v1)
    ctx->pc = 0x1bcbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 4));
    // 0x1bcbe4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1bcbe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1bcbe8: 0xac620068  sw          $v0, 0x68($v1)
    ctx->pc = 0x1bcbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 2));
    // 0x1bcbec: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x1bcbecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x1bcbf0: 0x2610e848  addiu       $s0, $s0, -0x17B8
    ctx->pc = 0x1bcbf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961224));
    // 0x1bcbf4: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x1bcbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1bcbf8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1bcbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1bcbfc: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x1bcbfcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1bcc00: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x1bcc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x1bcc04: 0x40f809  jalr        $v0
    ctx->pc = 0x1BCC04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BCC0Cu);
        ctx->pc = 0x1BCC08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCC04u;
            // 0x1bcc08: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BCC0Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BC648u: goto label_1bc648;
            case 0x1BC66Cu: goto label_1bc66c;
            case 0x1BC6B0u: goto label_1bc6b0;
            case 0x1BC708u: goto label_1bc708;
            case 0x1BC788u: goto label_1bc788;
            case 0x1BC7C0u: goto label_1bc7c0;
            case 0x1BC7C8u: goto label_1bc7c8;
            case 0x1BC850u: goto label_1bc850;
            case 0x1BC890u: goto label_1bc890;
            case 0x1BC910u: goto label_1bc910;
            case 0x1BC958u: goto label_1bc958;
            case 0x1BC998u: goto label_1bc998;
            case 0x1BCA90u: goto label_1bca90;
            case 0x1BCAC8u: goto label_1bcac8;
            case 0x1BCAD0u: goto label_1bcad0;
            case 0x1BCB50u: goto label_1bcb50;
            case 0x1BCBA8u: goto label_1bcba8;
            case 0x1BCC40u: goto label_1bcc40;
            case 0x1BCC50u: goto label_1bcc50;
            case 0x1BCC70u: goto label_1bcc70;
            case 0x1BCCB8u: goto label_1bccb8;
            case 0x1BCCD8u: goto label_1bccd8;
            case 0x1BCD08u: goto label_1bcd08;
            case 0x1BCDC0u: goto label_1bcdc0;
            case 0x1BCE78u: goto label_1bce78;
            case 0x1BCEE8u: goto label_1bcee8;
            case 0x1BCF08u: goto label_1bcf08;
            case 0x1BCF28u: goto label_1bcf28;
            case 0x1BCF50u: goto label_1bcf50;
            case 0x1BCF8Cu: goto label_1bcf8c;
            case 0x1BCF90u: goto label_1bcf90;
            case 0x1BCFA4u: goto label_1bcfa4;
            case 0x1BCFD8u: goto label_1bcfd8;
            case 0x1BD018u: goto label_1bd018;
            case 0x1BD048u: goto label_1bd048;
            case 0x1BD088u: goto label_1bd088;
            case 0x1BD0C0u: goto label_1bd0c0;
            case 0x1BD168u: goto label_1bd168;
            case 0x1BD210u: goto label_1bd210;
            case 0x1BD288u: goto label_1bd288;
            case 0x1BD2C0u: goto label_1bd2c0;
            case 0x1BD2F0u: goto label_1bd2f0;
            case 0x1BD360u: goto label_1bd360;
            case 0x1BD398u: goto label_1bd398;
            case 0x1BD408u: goto label_1bd408;
            case 0x1BD448u: goto label_1bd448;
            case 0x1BD490u: goto label_1bd490;
            case 0x1BD4C0u: goto label_1bd4c0;
            case 0x1BD578u: goto label_1bd578;
            case 0x1BD5E0u: goto label_1bd5e0;
            case 0x1BD680u: goto label_1bd680;
            case 0x1BD6B0u: goto label_1bd6b0;
            case 0x1BD6E8u: goto label_1bd6e8;
            case 0x1BD718u: goto label_1bd718;
            case 0x1BD73Cu: goto label_1bd73c;
            case 0x1BD758u: goto label_1bd758;
            case 0x1BD808u: goto label_1bd808;
            case 0x1BD810u: goto label_1bd810;
            case 0x1BD898u: goto label_1bd898;
            case 0x1BD8B4u: goto label_1bd8b4;
            case 0x1BD8C0u: goto label_1bd8c0;
            case 0x1BD958u: goto label_1bd958;
            case 0x1BD95Cu: goto label_1bd95c;
            case 0x1BD998u: goto label_1bd998;
            case 0x1BD99Cu: goto label_1bd99c;
            case 0x1BD9A8u: goto label_1bd9a8;
            case 0x1BD9ACu: goto label_1bd9ac;
            case 0x1BD9C0u: goto label_1bd9c0;
            case 0x1BD9E0u: goto label_1bd9e0;
            case 0x1BDA58u: goto label_1bda58;
            case 0x1BDB10u: goto label_1bdb10;
            case 0x1BDB24u: goto label_1bdb24;
            case 0x1BDB28u: goto label_1bdb28;
            case 0x1BDB2Cu: goto label_1bdb2c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BCC0Cu; }
            if (ctx->pc != 0x1BCC0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1BCC0Cu;
    // 0x1bcc0c: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x1bcc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1bcc10: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x1bcc10u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x1bcc14: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1bcc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1bcc18: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x1bcc18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1bcc1c: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x1bcc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x1bcc20: 0x40f809  jalr        $v0
    ctx->pc = 0x1BCC20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BCC28u);
        ctx->pc = 0x1BCC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCC20u;
            // 0x1bcc24: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BCC28u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BC648u: goto label_1bc648;
            case 0x1BC66Cu: goto label_1bc66c;
            case 0x1BC6B0u: goto label_1bc6b0;
            case 0x1BC708u: goto label_1bc708;
            case 0x1BC788u: goto label_1bc788;
            case 0x1BC7C0u: goto label_1bc7c0;
            case 0x1BC7C8u: goto label_1bc7c8;
            case 0x1BC850u: goto label_1bc850;
            case 0x1BC890u: goto label_1bc890;
            case 0x1BC910u: goto label_1bc910;
            case 0x1BC958u: goto label_1bc958;
            case 0x1BC998u: goto label_1bc998;
            case 0x1BCA90u: goto label_1bca90;
            case 0x1BCAC8u: goto label_1bcac8;
            case 0x1BCAD0u: goto label_1bcad0;
            case 0x1BCB50u: goto label_1bcb50;
            case 0x1BCBA8u: goto label_1bcba8;
            case 0x1BCC40u: goto label_1bcc40;
            case 0x1BCC50u: goto label_1bcc50;
            case 0x1BCC70u: goto label_1bcc70;
            case 0x1BCCB8u: goto label_1bccb8;
            case 0x1BCCD8u: goto label_1bccd8;
            case 0x1BCD08u: goto label_1bcd08;
            case 0x1BCDC0u: goto label_1bcdc0;
            case 0x1BCE78u: goto label_1bce78;
            case 0x1BCEE8u: goto label_1bcee8;
            case 0x1BCF08u: goto label_1bcf08;
            case 0x1BCF28u: goto label_1bcf28;
            case 0x1BCF50u: goto label_1bcf50;
            case 0x1BCF8Cu: goto label_1bcf8c;
            case 0x1BCF90u: goto label_1bcf90;
            case 0x1BCFA4u: goto label_1bcfa4;
            case 0x1BCFD8u: goto label_1bcfd8;
            case 0x1BD018u: goto label_1bd018;
            case 0x1BD048u: goto label_1bd048;
            case 0x1BD088u: goto label_1bd088;
            case 0x1BD0C0u: goto label_1bd0c0;
            case 0x1BD168u: goto label_1bd168;
            case 0x1BD210u: goto label_1bd210;
            case 0x1BD288u: goto label_1bd288;
            case 0x1BD2C0u: goto label_1bd2c0;
            case 0x1BD2F0u: goto label_1bd2f0;
            case 0x1BD360u: goto label_1bd360;
            case 0x1BD398u: goto label_1bd398;
            case 0x1BD408u: goto label_1bd408;
            case 0x1BD448u: goto label_1bd448;
            case 0x1BD490u: goto label_1bd490;
            case 0x1BD4C0u: goto label_1bd4c0;
            case 0x1BD578u: goto label_1bd578;
            case 0x1BD5E0u: goto label_1bd5e0;
            case 0x1BD680u: goto label_1bd680;
            case 0x1BD6B0u: goto label_1bd6b0;
            case 0x1BD6E8u: goto label_1bd6e8;
            case 0x1BD718u: goto label_1bd718;
            case 0x1BD73Cu: goto label_1bd73c;
            case 0x1BD758u: goto label_1bd758;
            case 0x1BD808u: goto label_1bd808;
            case 0x1BD810u: goto label_1bd810;
            case 0x1BD898u: goto label_1bd898;
            case 0x1BD8B4u: goto label_1bd8b4;
            case 0x1BD8C0u: goto label_1bd8c0;
            case 0x1BD958u: goto label_1bd958;
            case 0x1BD95Cu: goto label_1bd95c;
            case 0x1BD998u: goto label_1bd998;
            case 0x1BD99Cu: goto label_1bd99c;
            case 0x1BD9A8u: goto label_1bd9a8;
            case 0x1BD9ACu: goto label_1bd9ac;
            case 0x1BD9C0u: goto label_1bd9c0;
            case 0x1BD9E0u: goto label_1bd9e0;
            case 0x1BDA58u: goto label_1bda58;
            case 0x1BDB10u: goto label_1bdb10;
            case 0x1BDB24u: goto label_1bdb24;
            case 0x1BDB28u: goto label_1bdb28;
            case 0x1BDB2Cu: goto label_1bdb2c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BCC28u; }
            if (ctx->pc != 0x1BCC28u) { return; }
        }
        }
    }
    ctx->pc = 0x1BCC28u;
    // 0x1bcc28: 0x8e025a60  lw          $v0, 0x5A60($s0)
    ctx->pc = 0x1bcc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23136)));
    // 0x1bcc2c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BCC2Cu;
    {
        const bool branch_taken_0x1bcc2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcc2c) {
            ctx->pc = 0x1BCC40u;
            goto label_1bcc40;
        }
    }
    ctx->pc = 0x1BCC34u;
    // 0x1bcc34: 0xc06f916  jal         func_1BE458
    ctx->pc = 0x1BCC34u;
    SET_GPR_U32(ctx, 31, 0x1BCC3Cu);
    ctx->pc = 0x1BE458u;
    if (runtime->hasFunction(0x1BE458u)) {
        auto targetFn = runtime->lookupFunction(0x1BE458u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCC3Cu; }
        if (ctx->pc != 0x1BCC3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE458_0x1be458(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCC3Cu; }
        if (ctx->pc != 0x1BCC3Cu) { return; }
    }
    ctx->pc = 0x1BCC3Cu;
    // 0x1bcc3c: 0xae005a60  sw          $zero, 0x5A60($s0)
    ctx->pc = 0x1bcc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 23136), GPR_U32(ctx, 0));
label_1bcc40:
    // 0x1bcc40: 0xc06f07e  jal         func_1BC1F8
    ctx->pc = 0x1BCC40u;
    SET_GPR_U32(ctx, 31, 0x1BCC48u);
    ctx->pc = 0x1BCC44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCC40u;
            // 0x1bcc44: 0x8e245a58  lw          $a0, 0x5A58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 23128)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BC1F8u;
    if (runtime->hasFunction(0x1BC1F8u)) {
        auto targetFn = runtime->lookupFunction(0x1BC1F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCC48u; }
        if (ctx->pc != 0x1BCC48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC1F8_0x1bc1f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCC48u; }
        if (ctx->pc != 0x1BCC48u) { return; }
    }
    ctx->pc = 0x1BCC48u;
    // 0x1bcc48: 0x100003b7  b           . + 4 + (0x3B7 << 2)
    ctx->pc = 0x1BCC48u;
    {
        const bool branch_taken_0x1bcc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCC4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCC48u;
            // 0x1bcc4c: 0xaea05e68  sw          $zero, 0x5E68($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 24168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcc48) {
            ctx->pc = 0x1BDB28u;
            goto label_1bdb28;
        }
    }
    ctx->pc = 0x1BCC50u;
label_1bcc50:
    // 0x1bcc50: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1bcc50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x1bcc54: 0x8c82cc44  lw          $v0, -0x33BC($a0)
    ctx->pc = 0x1bcc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954052)));
    // 0x1bcc58: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bcc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bcc5c: 0x28430020  slti        $v1, $v0, 0x20
    ctx->pc = 0x1bcc5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1bcc60: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BCC60u;
    {
        const bool branch_taken_0x1bcc60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BCC64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCC60u;
            // 0x1bcc64: 0xac82cc44  sw          $v0, -0x33BC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294954052), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcc60) {
            ctx->pc = 0x1BCC70u;
            goto label_1bcc70;
        }
    }
    ctx->pc = 0x1BCC68u;
    // 0x1bcc68: 0xac80cc44  sw          $zero, -0x33BC($a0)
    ctx->pc = 0x1bcc68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294954052), GPR_U32(ctx, 0));
    // 0x1bcc6c: 0x0  nop
    ctx->pc = 0x1bcc6cu;
    // NOP
label_1bcc70:
    // 0x1bcc70: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x1bcc70u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x1bcc74: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1bcc74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x1bcc78: 0x8e035a2c  lw          $v1, 0x5A2C($s0)
    ctx->pc = 0x1bcc78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23084)));
    // 0x1bcc7c: 0x8c82cc40  lw          $v0, -0x33C0($a0)
    ctx->pc = 0x1bcc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954048)));
    // 0x1bcc80: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1bcc80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bcc84: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bcc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bcc88: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1bcc88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1bcc8c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1BCC8Cu;
    {
        const bool branch_taken_0x1bcc8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCC90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCC8Cu;
            // 0x1bcc90: 0xac82cc40  sw          $v0, -0x33C0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294954048), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcc8c) {
            ctx->pc = 0x1BCCB8u;
            goto label_1bccb8;
        }
    }
    ctx->pc = 0x1BCC94u;
    // 0x1bcc94: 0xc06af38  jal         func_1ABCE0
    ctx->pc = 0x1BCC94u;
    SET_GPR_U32(ctx, 31, 0x1BCC9Cu);
    ctx->pc = 0x1ABCE0u;
    if (runtime->hasFunction(0x1ABCE0u)) {
        auto targetFn = runtime->lookupFunction(0x1ABCE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCC9Cu; }
        if (ctx->pc != 0x1BCC9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ABCE0_0x1abce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCC9Cu; }
        if (ctx->pc != 0x1BCC9Cu) { return; }
    }
    ctx->pc = 0x1BCC9Cu;
    // 0x1bcc9c: 0x8e025a2c  lw          $v0, 0x5A2C($s0)
    ctx->pc = 0x1bcc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23084)));
    // 0x1bcca0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1bcca0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bcca4: 0xc0891de  jal         func_224778
    ctx->pc = 0x1BCCA4u;
    SET_GPR_U32(ctx, 31, 0x1BCCACu);
    ctx->pc = 0x1BCCA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCCA4u;
            // 0x1bcca8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224778u;
    if (runtime->hasFunction(0x224778u)) {
        auto targetFn = runtime->lookupFunction(0x224778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCCACu; }
        if (ctx->pc != 0x1BCCACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224778_0x224778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCCACu; }
        if (ctx->pc != 0x1BCCACu) { return; }
    }
    ctx->pc = 0x1BCCACu;
    // 0x1bccac: 0xc06f980  jal         func_1BE600
    ctx->pc = 0x1BCCACu;
    SET_GPR_U32(ctx, 31, 0x1BCCB4u);
    ctx->pc = 0x1BCCB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCCACu;
            // 0x1bccb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE600u;
    if (runtime->hasFunction(0x1BE600u)) {
        auto targetFn = runtime->lookupFunction(0x1BE600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCCB4u; }
        if (ctx->pc != 0x1BCCB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE600_0x1be600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCCB4u; }
        if (ctx->pc != 0x1BCCB4u) { return; }
    }
    ctx->pc = 0x1BCCB4u;
    // 0x1bccb4: 0x0  nop
    ctx->pc = 0x1bccb4u;
    // NOP
label_1bccb8:
    // 0x1bccb8: 0x8e025a2c  lw          $v0, 0x5A2C($s0)
    ctx->pc = 0x1bccb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23084)));
    // 0x1bccbc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1bccbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bccc0: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1bccc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x1bccc4: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1bccc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1bccc8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1bccc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1bcccc: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1bccccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1bccd0: 0x10000394  b           . + 4 + (0x394 << 2)
    ctx->pc = 0x1BCCD0u;
    {
        const bool branch_taken_0x1bccd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCCD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCCD0u;
            // 0x1bccd4: 0xac80cc5c  sw          $zero, -0x33A4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294954076), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bccd0) {
            ctx->pc = 0x1BDB24u;
            goto label_1bdb24;
        }
    }
    ctx->pc = 0x1BCCD8u;
label_1bccd8:
    // 0x1bccd8: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1bccd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1bccdc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bccdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bcce0: 0x8ca3cc44  lw          $v1, -0x33BC($a1)
    ctx->pc = 0x1bcce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294954052)));
    // 0x1bcce4: 0x24425a68  addiu       $v0, $v0, 0x5A68
    ctx->pc = 0x1bcce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23144));
    // 0x1bcce8: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x1bcce8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1bccec: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1bccecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1bccf0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1bccf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1bccf4: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x1bccf4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1bccf8: 0x28640020  slti        $a0, $v1, 0x20
    ctx->pc = 0x1bccf8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1bccfc: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BCCFCu;
    {
        const bool branch_taken_0x1bccfc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BCD00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCCFCu;
            // 0x1bcd00: 0xaca3cc44  sw          $v1, -0x33BC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294954052), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bccfc) {
            ctx->pc = 0x1BCD08u;
            goto label_1bcd08;
        }
    }
    ctx->pc = 0x1BCD04u;
    // 0x1bcd04: 0xaca0cc44  sw          $zero, -0x33BC($a1)
    ctx->pc = 0x1bcd04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294954052), GPR_U32(ctx, 0));
label_1bcd08:
    // 0x1bcd08: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1bcd08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1bcd0c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1bcd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1bcd10: 0x8c62cc40  lw          $v0, -0x33C0($v1)
    ctx->pc = 0x1bcd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954048)));
    // 0x1bcd14: 0x24a55a30  addiu       $a1, $a1, 0x5A30
    ctx->pc = 0x1bcd14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23088));
    // 0x1bcd18: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bcd18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcd1c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1bcd1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcd20: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bcd20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bcd24: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x1BCD24u;
    SET_GPR_U32(ctx, 31, 0x1BCD2Cu);
    ctx->pc = 0x1BCD28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCD24u;
            // 0x1bcd28: 0xac62cc40  sw          $v0, -0x33C0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954048), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCD2Cu; }
        if (ctx->pc != 0x1BCD2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCD2Cu; }
        if (ctx->pc != 0x1BCD2Cu) { return; }
    }
    ctx->pc = 0x1BCD2Cu;
    // 0x1bcd2c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bcd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bcd30: 0x8c435a2c  lw          $v1, 0x5A2C($v0)
    ctx->pc = 0x1bcd30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23084)));
    // 0x1bcd34: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1bcd34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x1bcd38: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1bcd38u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x1bcd3c: 0x8c86cc70  lw          $a2, -0x3390($a0)
    ctx->pc = 0x1bcd3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954096)));
    // 0x1bcd40: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1bcd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bcd44: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x1bcd44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
    // 0x1bcd48: 0x8e05cc58  lw          $a1, -0x33A8($s0)
    ctx->pc = 0x1bcd48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954072)));
    // 0x1bcd4c: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1bcd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x1bcd50: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1bcd50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1bcd54: 0xac710004  sw          $s1, 0x4($v1)
    ctx->pc = 0x1bcd54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
    // 0x1bcd58: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1bcd58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1bcd5c: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1bcd5cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bcd60: 0xac86c80c  sw          $a2, -0x37F4($a0)
    ctx->pc = 0x1bcd60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294952972), GPR_U32(ctx, 6));
    // 0x1bcd64: 0xace0c808  sw          $zero, -0x37F8($a3)
    ctx->pc = 0x1bcd64u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294952968), GPR_U32(ctx, 0));
    // 0x1bcd68: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bcd68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bcd6c: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1bcd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1bcd70: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bcd70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bcd74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bcd74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bcd78: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1bcd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bcd7c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1bcd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1bcd80: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x1bcd80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x1bcd84: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x1bcd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x1bcd88: 0x40f809  jalr        $v0
    ctx->pc = 0x1BCD88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BCD90u);
        ctx->pc = 0x1BCD8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCD88u;
            // 0x1bcd8c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BCD90u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BC648u: goto label_1bc648;
            case 0x1BC66Cu: goto label_1bc66c;
            case 0x1BC6B0u: goto label_1bc6b0;
            case 0x1BC708u: goto label_1bc708;
            case 0x1BC788u: goto label_1bc788;
            case 0x1BC7C0u: goto label_1bc7c0;
            case 0x1BC7C8u: goto label_1bc7c8;
            case 0x1BC850u: goto label_1bc850;
            case 0x1BC890u: goto label_1bc890;
            case 0x1BC910u: goto label_1bc910;
            case 0x1BC958u: goto label_1bc958;
            case 0x1BC998u: goto label_1bc998;
            case 0x1BCA90u: goto label_1bca90;
            case 0x1BCAC8u: goto label_1bcac8;
            case 0x1BCAD0u: goto label_1bcad0;
            case 0x1BCB50u: goto label_1bcb50;
            case 0x1BCBA8u: goto label_1bcba8;
            case 0x1BCC40u: goto label_1bcc40;
            case 0x1BCC50u: goto label_1bcc50;
            case 0x1BCC70u: goto label_1bcc70;
            case 0x1BCCB8u: goto label_1bccb8;
            case 0x1BCCD8u: goto label_1bccd8;
            case 0x1BCD08u: goto label_1bcd08;
            case 0x1BCDC0u: goto label_1bcdc0;
            case 0x1BCE78u: goto label_1bce78;
            case 0x1BCEE8u: goto label_1bcee8;
            case 0x1BCF08u: goto label_1bcf08;
            case 0x1BCF28u: goto label_1bcf28;
            case 0x1BCF50u: goto label_1bcf50;
            case 0x1BCF8Cu: goto label_1bcf8c;
            case 0x1BCF90u: goto label_1bcf90;
            case 0x1BCFA4u: goto label_1bcfa4;
            case 0x1BCFD8u: goto label_1bcfd8;
            case 0x1BD018u: goto label_1bd018;
            case 0x1BD048u: goto label_1bd048;
            case 0x1BD088u: goto label_1bd088;
            case 0x1BD0C0u: goto label_1bd0c0;
            case 0x1BD168u: goto label_1bd168;
            case 0x1BD210u: goto label_1bd210;
            case 0x1BD288u: goto label_1bd288;
            case 0x1BD2C0u: goto label_1bd2c0;
            case 0x1BD2F0u: goto label_1bd2f0;
            case 0x1BD360u: goto label_1bd360;
            case 0x1BD398u: goto label_1bd398;
            case 0x1BD408u: goto label_1bd408;
            case 0x1BD448u: goto label_1bd448;
            case 0x1BD490u: goto label_1bd490;
            case 0x1BD4C0u: goto label_1bd4c0;
            case 0x1BD578u: goto label_1bd578;
            case 0x1BD5E0u: goto label_1bd5e0;
            case 0x1BD680u: goto label_1bd680;
            case 0x1BD6B0u: goto label_1bd6b0;
            case 0x1BD6E8u: goto label_1bd6e8;
            case 0x1BD718u: goto label_1bd718;
            case 0x1BD73Cu: goto label_1bd73c;
            case 0x1BD758u: goto label_1bd758;
            case 0x1BD808u: goto label_1bd808;
            case 0x1BD810u: goto label_1bd810;
            case 0x1BD898u: goto label_1bd898;
            case 0x1BD8B4u: goto label_1bd8b4;
            case 0x1BD8C0u: goto label_1bd8c0;
            case 0x1BD958u: goto label_1bd958;
            case 0x1BD95Cu: goto label_1bd95c;
            case 0x1BD998u: goto label_1bd998;
            case 0x1BD99Cu: goto label_1bd99c;
            case 0x1BD9A8u: goto label_1bd9a8;
            case 0x1BD9ACu: goto label_1bd9ac;
            case 0x1BD9C0u: goto label_1bd9c0;
            case 0x1BD9E0u: goto label_1bd9e0;
            case 0x1BDA58u: goto label_1bda58;
            case 0x1BDB10u: goto label_1bdb10;
            case 0x1BDB24u: goto label_1bdb24;
            case 0x1BDB28u: goto label_1bdb28;
            case 0x1BDB2Cu: goto label_1bdb2c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BCD90u; }
            if (ctx->pc != 0x1BCD90u) { return; }
        }
        }
    }
    ctx->pc = 0x1BCD90u;
    // 0x1bcd90: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bcd90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bcd94: 0x8e03cc58  lw          $v1, -0x33A8($s0)
    ctx->pc = 0x1bcd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954072)));
    // 0x1bcd98: 0x8c445a28  lw          $a0, 0x5A28($v0)
    ctx->pc = 0x1bcd98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23080)));
    // 0x1bcd9c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1bcd9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcda0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1bcda0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1bcda4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1bcda4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1bcda8: 0xc0617ca  jal         func_185F28
    ctx->pc = 0x1BCDA8u;
    SET_GPR_U32(ctx, 31, 0x1BCDB0u);
    ctx->pc = 0x1BCDACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCDA8u;
            // 0x1bcdac: 0xac43c820  sw          $v1, -0x37E0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294952992), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185F28u;
    if (runtime->hasFunction(0x185F28u)) {
        auto targetFn = runtime->lookupFunction(0x185F28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCDB0u; }
        if (ctx->pc != 0x1BCDB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185F28_0x185f28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCDB0u; }
        if (ctx->pc != 0x1BCDB0u) { return; }
    }
    ctx->pc = 0x1BCDB0u;
    // 0x1bcdb0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1bcdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1bcdb4: 0x1000035c  b           . + 4 + (0x35C << 2)
    ctx->pc = 0x1BCDB4u;
    {
        const bool branch_taken_0x1bcdb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCDB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCDB4u;
            // 0x1bcdb8: 0xaea25e68  sw          $v0, 0x5E68($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 24168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcdb4) {
            ctx->pc = 0x1BDB28u;
            goto label_1bdb28;
        }
    }
    ctx->pc = 0x1BCDBCu;
    // 0x1bcdbc: 0x0  nop
    ctx->pc = 0x1bcdbcu;
    // NOP
label_1bcdc0:
    // 0x1bcdc0: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x1bcdc0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x1bcdc4: 0xc061688  jal         func_185A20
    ctx->pc = 0x1BCDC4u;
    SET_GPR_U32(ctx, 31, 0x1BCDCCu);
    ctx->pc = 0x1BCDC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCDC4u;
            // 0x1bcdc8: 0x8e245a28  lw          $a0, 0x5A28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 23080)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185A20u;
    if (runtime->hasFunction(0x185A20u)) {
        auto targetFn = runtime->lookupFunction(0x185A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCDCCu; }
        if (ctx->pc != 0x1BCDCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185A20_0x185a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCDCCu; }
        if (ctx->pc != 0x1BCDCCu) { return; }
    }
    ctx->pc = 0x1BCDCCu;
    // 0x1bcdcc: 0x14400357  bnez        $v0, . + 4 + (0x357 << 2)
    ctx->pc = 0x1BCDCCu;
    {
        const bool branch_taken_0x1bcdcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BCDD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCDCCu;
            // 0x1bcdd0: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcdcc) {
            ctx->pc = 0x1BDB2Cu;
            goto label_1bdb2c;
        }
    }
    ctx->pc = 0x1BCDD4u;
    // 0x1bcdd4: 0x8e225a28  lw          $v0, 0x5A28($s1)
    ctx->pc = 0x1bcdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 23080)));
    // 0x1bcdd8: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x1bcdd8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x1bcddc: 0x8e035a2c  lw          $v1, 0x5A2C($s0)
    ctx->pc = 0x1bcddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23084)));
    // 0x1bcde0: 0x8c450054  lw          $a1, 0x54($v0)
    ctx->pc = 0x1bcde0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1bcde4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1bcde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bcde8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1bcde8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcdec: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1bcdecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1bcdf0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1bcdf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1bcdf4: 0xc06f954  jal         func_1BE550
    ctx->pc = 0x1BCDF4u;
    SET_GPR_U32(ctx, 31, 0x1BCDFCu);
    ctx->pc = 0x1BCDF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCDF4u;
            // 0x1bcdf8: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE550u;
    if (runtime->hasFunction(0x1BE550u)) {
        auto targetFn = runtime->lookupFunction(0x1BE550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCDFCu; }
        if (ctx->pc != 0x1BCDFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE550_0x1be550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCDFCu; }
        if (ctx->pc != 0x1BCDFCu) { return; }
    }
    ctx->pc = 0x1BCDFCu;
    // 0x1bcdfc: 0xc05ea2e  jal         func_17A8B8
    ctx->pc = 0x1BCDFCu;
    SET_GPR_U32(ctx, 31, 0x1BCE04u);
    ctx->pc = 0x17A8B8u;
    if (runtime->hasFunction(0x17A8B8u)) {
        auto targetFn = runtime->lookupFunction(0x17A8B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCE04u; }
        if (ctx->pc != 0x1BCE04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A8B8_0x17a8b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCE04u; }
        if (ctx->pc != 0x1BCE04u) { return; }
    }
    ctx->pc = 0x1BCE04u;
    // 0x1bce04: 0x8e025a2c  lw          $v0, 0x5A2C($s0)
    ctx->pc = 0x1bce04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23084)));
    // 0x1bce08: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1bce08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1bce0c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1bce0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1bce10: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1bce10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1bce14: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bce14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bce18: 0x24844388  addiu       $a0, $a0, 0x4388
    ctx->pc = 0x1bce18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17288));
    // 0x1bce1c: 0xac60c820  sw          $zero, -0x37E0($v1)
    ctx->pc = 0x1bce1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952992), GPR_U32(ctx, 0));
    // 0x1bce20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bce20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bce24: 0xc04c9ee  jal         func_1327B8
    ctx->pc = 0x1BCE24u;
    SET_GPR_U32(ctx, 31, 0x1BCE2Cu);
    ctx->pc = 0x1BCE28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCE24u;
            // 0x1bce28: 0xacc2cc5c  sw          $v0, -0x33A4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294954076), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1327B8u;
    if (runtime->hasFunction(0x1327B8u)) {
        auto targetFn = runtime->lookupFunction(0x1327B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCE2Cu; }
        if (ctx->pc != 0x1BCE2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001327B8_0x1327b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCE2Cu; }
        if (ctx->pc != 0x1BCE2Cu) { return; }
    }
    ctx->pc = 0x1BCE2Cu;
    // 0x1bce2c: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x1bce2cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x1bce30: 0x2610e848  addiu       $s0, $s0, -0x17B8
    ctx->pc = 0x1bce30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961224));
    // 0x1bce34: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x1bce34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1bce38: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1bce38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1bce3c: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x1bce3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1bce40: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x1bce40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x1bce44: 0x40f809  jalr        $v0
    ctx->pc = 0x1BCE44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BCE4Cu);
        ctx->pc = 0x1BCE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCE44u;
            // 0x1bce48: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BCE4Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BC648u: goto label_1bc648;
            case 0x1BC66Cu: goto label_1bc66c;
            case 0x1BC6B0u: goto label_1bc6b0;
            case 0x1BC708u: goto label_1bc708;
            case 0x1BC788u: goto label_1bc788;
            case 0x1BC7C0u: goto label_1bc7c0;
            case 0x1BC7C8u: goto label_1bc7c8;
            case 0x1BC850u: goto label_1bc850;
            case 0x1BC890u: goto label_1bc890;
            case 0x1BC910u: goto label_1bc910;
            case 0x1BC958u: goto label_1bc958;
            case 0x1BC998u: goto label_1bc998;
            case 0x1BCA90u: goto label_1bca90;
            case 0x1BCAC8u: goto label_1bcac8;
            case 0x1BCAD0u: goto label_1bcad0;
            case 0x1BCB50u: goto label_1bcb50;
            case 0x1BCBA8u: goto label_1bcba8;
            case 0x1BCC40u: goto label_1bcc40;
            case 0x1BCC50u: goto label_1bcc50;
            case 0x1BCC70u: goto label_1bcc70;
            case 0x1BCCB8u: goto label_1bccb8;
            case 0x1BCCD8u: goto label_1bccd8;
            case 0x1BCD08u: goto label_1bcd08;
            case 0x1BCDC0u: goto label_1bcdc0;
            case 0x1BCE78u: goto label_1bce78;
            case 0x1BCEE8u: goto label_1bcee8;
            case 0x1BCF08u: goto label_1bcf08;
            case 0x1BCF28u: goto label_1bcf28;
            case 0x1BCF50u: goto label_1bcf50;
            case 0x1BCF8Cu: goto label_1bcf8c;
            case 0x1BCF90u: goto label_1bcf90;
            case 0x1BCFA4u: goto label_1bcfa4;
            case 0x1BCFD8u: goto label_1bcfd8;
            case 0x1BD018u: goto label_1bd018;
            case 0x1BD048u: goto label_1bd048;
            case 0x1BD088u: goto label_1bd088;
            case 0x1BD0C0u: goto label_1bd0c0;
            case 0x1BD168u: goto label_1bd168;
            case 0x1BD210u: goto label_1bd210;
            case 0x1BD288u: goto label_1bd288;
            case 0x1BD2C0u: goto label_1bd2c0;
            case 0x1BD2F0u: goto label_1bd2f0;
            case 0x1BD360u: goto label_1bd360;
            case 0x1BD398u: goto label_1bd398;
            case 0x1BD408u: goto label_1bd408;
            case 0x1BD448u: goto label_1bd448;
            case 0x1BD490u: goto label_1bd490;
            case 0x1BD4C0u: goto label_1bd4c0;
            case 0x1BD578u: goto label_1bd578;
            case 0x1BD5E0u: goto label_1bd5e0;
            case 0x1BD680u: goto label_1bd680;
            case 0x1BD6B0u: goto label_1bd6b0;
            case 0x1BD6E8u: goto label_1bd6e8;
            case 0x1BD718u: goto label_1bd718;
            case 0x1BD73Cu: goto label_1bd73c;
            case 0x1BD758u: goto label_1bd758;
            case 0x1BD808u: goto label_1bd808;
            case 0x1BD810u: goto label_1bd810;
            case 0x1BD898u: goto label_1bd898;
            case 0x1BD8B4u: goto label_1bd8b4;
            case 0x1BD8C0u: goto label_1bd8c0;
            case 0x1BD958u: goto label_1bd958;
            case 0x1BD95Cu: goto label_1bd95c;
            case 0x1BD998u: goto label_1bd998;
            case 0x1BD99Cu: goto label_1bd99c;
            case 0x1BD9A8u: goto label_1bd9a8;
            case 0x1BD9ACu: goto label_1bd9ac;
            case 0x1BD9C0u: goto label_1bd9c0;
            case 0x1BD9E0u: goto label_1bd9e0;
            case 0x1BDA58u: goto label_1bda58;
            case 0x1BDB10u: goto label_1bdb10;
            case 0x1BDB24u: goto label_1bdb24;
            case 0x1BDB28u: goto label_1bdb28;
            case 0x1BDB2Cu: goto label_1bdb2c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BCE4Cu; }
            if (ctx->pc != 0x1BCE4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1BCE4Cu;
    // 0x1bce4c: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x1bce4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1bce50: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1bce50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1bce54: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x1bce54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1bce58: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x1bce58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x1bce5c: 0x40f809  jalr        $v0
    ctx->pc = 0x1BCE5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BCE64u);
        ctx->pc = 0x1BCE60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCE5Cu;
            // 0x1bce60: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BCE64u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BC648u: goto label_1bc648;
            case 0x1BC66Cu: goto label_1bc66c;
            case 0x1BC6B0u: goto label_1bc6b0;
            case 0x1BC708u: goto label_1bc708;
            case 0x1BC788u: goto label_1bc788;
            case 0x1BC7C0u: goto label_1bc7c0;
            case 0x1BC7C8u: goto label_1bc7c8;
            case 0x1BC850u: goto label_1bc850;
            case 0x1BC890u: goto label_1bc890;
            case 0x1BC910u: goto label_1bc910;
            case 0x1BC958u: goto label_1bc958;
            case 0x1BC998u: goto label_1bc998;
            case 0x1BCA90u: goto label_1bca90;
            case 0x1BCAC8u: goto label_1bcac8;
            case 0x1BCAD0u: goto label_1bcad0;
            case 0x1BCB50u: goto label_1bcb50;
            case 0x1BCBA8u: goto label_1bcba8;
            case 0x1BCC40u: goto label_1bcc40;
            case 0x1BCC50u: goto label_1bcc50;
            case 0x1BCC70u: goto label_1bcc70;
            case 0x1BCCB8u: goto label_1bccb8;
            case 0x1BCCD8u: goto label_1bccd8;
            case 0x1BCD08u: goto label_1bcd08;
            case 0x1BCDC0u: goto label_1bcdc0;
            case 0x1BCE78u: goto label_1bce78;
            case 0x1BCEE8u: goto label_1bcee8;
            case 0x1BCF08u: goto label_1bcf08;
            case 0x1BCF28u: goto label_1bcf28;
            case 0x1BCF50u: goto label_1bcf50;
            case 0x1BCF8Cu: goto label_1bcf8c;
            case 0x1BCF90u: goto label_1bcf90;
            case 0x1BCFA4u: goto label_1bcfa4;
            case 0x1BCFD8u: goto label_1bcfd8;
            case 0x1BD018u: goto label_1bd018;
            case 0x1BD048u: goto label_1bd048;
            case 0x1BD088u: goto label_1bd088;
            case 0x1BD0C0u: goto label_1bd0c0;
            case 0x1BD168u: goto label_1bd168;
            case 0x1BD210u: goto label_1bd210;
            case 0x1BD288u: goto label_1bd288;
            case 0x1BD2C0u: goto label_1bd2c0;
            case 0x1BD2F0u: goto label_1bd2f0;
            case 0x1BD360u: goto label_1bd360;
            case 0x1BD398u: goto label_1bd398;
            case 0x1BD408u: goto label_1bd408;
            case 0x1BD448u: goto label_1bd448;
            case 0x1BD490u: goto label_1bd490;
            case 0x1BD4C0u: goto label_1bd4c0;
            case 0x1BD578u: goto label_1bd578;
            case 0x1BD5E0u: goto label_1bd5e0;
            case 0x1BD680u: goto label_1bd680;
            case 0x1BD6B0u: goto label_1bd6b0;
            case 0x1BD6E8u: goto label_1bd6e8;
            case 0x1BD718u: goto label_1bd718;
            case 0x1BD73Cu: goto label_1bd73c;
            case 0x1BD758u: goto label_1bd758;
            case 0x1BD808u: goto label_1bd808;
            case 0x1BD810u: goto label_1bd810;
            case 0x1BD898u: goto label_1bd898;
            case 0x1BD8B4u: goto label_1bd8b4;
            case 0x1BD8C0u: goto label_1bd8c0;
            case 0x1BD958u: goto label_1bd958;
            case 0x1BD95Cu: goto label_1bd95c;
            case 0x1BD998u: goto label_1bd998;
            case 0x1BD99Cu: goto label_1bd99c;
            case 0x1BD9A8u: goto label_1bd9a8;
            case 0x1BD9ACu: goto label_1bd9ac;
            case 0x1BD9C0u: goto label_1bd9c0;
            case 0x1BD9E0u: goto label_1bd9e0;
            case 0x1BDA58u: goto label_1bda58;
            case 0x1BDB10u: goto label_1bdb10;
            case 0x1BDB24u: goto label_1bdb24;
            case 0x1BDB28u: goto label_1bdb28;
            case 0x1BDB2Cu: goto label_1bdb2c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BCE64u; }
            if (ctx->pc != 0x1BCE64u) { return; }
        }
        }
    }
    ctx->pc = 0x1BCE64u;
    // 0x1bce64: 0xc06aec0  jal         func_1ABB00
    ctx->pc = 0x1BCE64u;
    SET_GPR_U32(ctx, 31, 0x1BCE6Cu);
    ctx->pc = 0x1ABB00u;
    if (runtime->hasFunction(0x1ABB00u)) {
        auto targetFn = runtime->lookupFunction(0x1ABB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCE6Cu; }
        if (ctx->pc != 0x1BCE6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ABB00_0x1abb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCE6Cu; }
        if (ctx->pc != 0x1BCE6Cu) { return; }
    }
    ctx->pc = 0x1BCE6Cu;
    // 0x1bce6c: 0x1000032e  b           . + 4 + (0x32E << 2)
    ctx->pc = 0x1BCE6Cu;
    {
        const bool branch_taken_0x1bce6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCE70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCE6Cu;
            // 0x1bce70: 0xaea05e68  sw          $zero, 0x5E68($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 24168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bce6c) {
            ctx->pc = 0x1BDB28u;
            goto label_1bdb28;
        }
    }
    ctx->pc = 0x1BCE74u;
    // 0x1bce74: 0x0  nop
    ctx->pc = 0x1bce74u;
    // NOP
label_1bce78:
    // 0x1bce78: 0x3c13002a  lui         $s3, 0x2A
    ctx->pc = 0x1bce78u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)42 << 16));
    // 0x1bce7c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bce7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bce80: 0x8e63cc44  lw          $v1, -0x33BC($s3)
    ctx->pc = 0x1bce80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294954052)));
    // 0x1bce84: 0x24425a68  addiu       $v0, $v0, 0x5A68
    ctx->pc = 0x1bce84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23144));
    // 0x1bce88: 0x3c14002a  lui         $s4, 0x2A
    ctx->pc = 0x1bce88u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)42 << 16));
    // 0x1bce8c: 0x3c160033  lui         $s6, 0x33
    ctx->pc = 0x1bce8cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)51 << 16));
    // 0x1bce90: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1bce90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1bce94: 0x8e84cc4c  lw          $a0, -0x33B4($s4)
    ctx->pc = 0x1bce94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294954060)));
    // 0x1bce98: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bce98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bce9c: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x1bce9cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1bcea0: 0x1480003a  bnez        $a0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1BCEA0u;
    {
        const bool branch_taken_0x1bcea0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BCEA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCEA0u;
            // 0x1bcea4: 0xaec35a58  sw          $v1, 0x5A58($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 23128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcea0) {
            ctx->pc = 0x1BCF8Cu;
            goto label_1bcf8c;
        }
    }
    ctx->pc = 0x1BCEA8u;
    // 0x1bcea8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bcea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bceac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bceacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bceb0: 0x24425a30  addiu       $v0, $v0, 0x5A30
    ctx->pc = 0x1bceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23088));
    // 0x1bceb4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bceb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bceb8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1bceb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bcebc: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1bcebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1bcec0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bcec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bcec4: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1BCEC4u;
    {
        const bool branch_taken_0x1bcec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCEC4u;
            // 0x1bcec8: 0x8e62cc44  lw          $v0, -0x33BC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294954052)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcec4) {
            ctx->pc = 0x1BCF90u;
            goto label_1bcf90;
        }
    }
    ctx->pc = 0x1BCECCu;
    // 0x1bcecc: 0x8c71000c  lw          $s1, 0xC($v1)
    ctx->pc = 0x1bceccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1bced0: 0x8e30007c  lw          $s0, 0x7C($s1)
    ctx->pc = 0x1bced0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x1bced4: 0x2632007c  addiu       $s2, $s1, 0x7C
    ctx->pc = 0x1bced4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
    // 0x1bced8: 0x5212000b  beql        $s0, $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x1BCED8u;
    {
        const bool branch_taken_0x1bced8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        if (branch_taken_0x1bced8) {
            ctx->pc = 0x1BCEDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCED8u;
            // 0x1bcedc: 0x2630007c  addiu       $s0, $s1, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BCF08u;
            goto label_1bcf08;
        }
    }
    ctx->pc = 0x1BCEE0u;
    // 0x1bcee0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1bcee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1bcee4: 0x0  nop
    ctx->pc = 0x1bcee4u;
    // NOP
label_1bcee8:
    // 0x1bcee8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1bcee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1bceec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bceecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bcef0: 0x40f809  jalr        $v0
    ctx->pc = 0x1BCEF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BCEF8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BCEF8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BC648u: goto label_1bc648;
            case 0x1BC66Cu: goto label_1bc66c;
            case 0x1BC6B0u: goto label_1bc6b0;
            case 0x1BC708u: goto label_1bc708;
            case 0x1BC788u: goto label_1bc788;
            case 0x1BC7C0u: goto label_1bc7c0;
            case 0x1BC7C8u: goto label_1bc7c8;
            case 0x1BC850u: goto label_1bc850;
            case 0x1BC890u: goto label_1bc890;
            case 0x1BC910u: goto label_1bc910;
            case 0x1BC958u: goto label_1bc958;
            case 0x1BC998u: goto label_1bc998;
            case 0x1BCA90u: goto label_1bca90;
            case 0x1BCAC8u: goto label_1bcac8;
            case 0x1BCAD0u: goto label_1bcad0;
            case 0x1BCB50u: goto label_1bcb50;
            case 0x1BCBA8u: goto label_1bcba8;
            case 0x1BCC40u: goto label_1bcc40;
            case 0x1BCC50u: goto label_1bcc50;
            case 0x1BCC70u: goto label_1bcc70;
            case 0x1BCCB8u: goto label_1bccb8;
            case 0x1BCCD8u: goto label_1bccd8;
            case 0x1BCD08u: goto label_1bcd08;
            case 0x1BCDC0u: goto label_1bcdc0;
            case 0x1BCE78u: goto label_1bce78;
            case 0x1BCEE8u: goto label_1bcee8;
            case 0x1BCF08u: goto label_1bcf08;
            case 0x1BCF28u: goto label_1bcf28;
            case 0x1BCF50u: goto label_1bcf50;
            case 0x1BCF8Cu: goto label_1bcf8c;
            case 0x1BCF90u: goto label_1bcf90;
            case 0x1BCFA4u: goto label_1bcfa4;
            case 0x1BCFD8u: goto label_1bcfd8;
            case 0x1BD018u: goto label_1bd018;
            case 0x1BD048u: goto label_1bd048;
            case 0x1BD088u: goto label_1bd088;
            case 0x1BD0C0u: goto label_1bd0c0;
            case 0x1BD168u: goto label_1bd168;
            case 0x1BD210u: goto label_1bd210;
            case 0x1BD288u: goto label_1bd288;
            case 0x1BD2C0u: goto label_1bd2c0;
            case 0x1BD2F0u: goto label_1bd2f0;
            case 0x1BD360u: goto label_1bd360;
            case 0x1BD398u: goto label_1bd398;
            case 0x1BD408u: goto label_1bd408;
            case 0x1BD448u: goto label_1bd448;
            case 0x1BD490u: goto label_1bd490;
            case 0x1BD4C0u: goto label_1bd4c0;
            case 0x1BD578u: goto label_1bd578;
            case 0x1BD5E0u: goto label_1bd5e0;
            case 0x1BD680u: goto label_1bd680;
            case 0x1BD6B0u: goto label_1bd6b0;
            case 0x1BD6E8u: goto label_1bd6e8;
            case 0x1BD718u: goto label_1bd718;
            case 0x1BD73Cu: goto label_1bd73c;
            case 0x1BD758u: goto label_1bd758;
            case 0x1BD808u: goto label_1bd808;
            case 0x1BD810u: goto label_1bd810;
            case 0x1BD898u: goto label_1bd898;
            case 0x1BD8B4u: goto label_1bd8b4;
            case 0x1BD8C0u: goto label_1bd8c0;
            case 0x1BD958u: goto label_1bd958;
            case 0x1BD95Cu: goto label_1bd95c;
            case 0x1BD998u: goto label_1bd998;
            case 0x1BD99Cu: goto label_1bd99c;
            case 0x1BD9A8u: goto label_1bd9a8;
            case 0x1BD9ACu: goto label_1bd9ac;
            case 0x1BD9C0u: goto label_1bd9c0;
            case 0x1BD9E0u: goto label_1bd9e0;
            case 0x1BDA58u: goto label_1bda58;
            case 0x1BDB10u: goto label_1bdb10;
            case 0x1BDB24u: goto label_1bdb24;
            case 0x1BDB28u: goto label_1bdb28;
            case 0x1BDB2Cu: goto label_1bdb2c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BCEF8u; }
            if (ctx->pc != 0x1BCEF8u) { return; }
        }
        }
    }
    ctx->pc = 0x1BCEF8u;
    // 0x1bcef8: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1bcef8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bcefc: 0x5612fffa  bnel        $s0, $s2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1BCEFCu;
    {
        const bool branch_taken_0x1bcefc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        if (branch_taken_0x1bcefc) {
            ctx->pc = 0x1BCF00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCEFCu;
            // 0x1bcf00: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BCEE8u;
            runtime->cooperativeGuestYield();
            goto label_1bcee8;
        }
    }
    ctx->pc = 0x1BCF04u;
    // 0x1bcf04: 0x2630007c  addiu       $s0, $s1, 0x7C
    ctx->pc = 0x1bcf04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
label_1bcf08:
    // 0x1bcf08: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x1bcf08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1bcf0c: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x1bcf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
    // 0x1bcf10: 0x8e22007c  lw          $v0, 0x7C($s1)
    ctx->pc = 0x1bcf10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x1bcf14: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1bcf14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x1bcf18: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1bcf18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1bcf1c: 0x1050000c  beq         $v0, $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1BCF1Cu;
    {
        const bool branch_taken_0x1bcf1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1BCF20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCF1Cu;
            // 0x1bcf20: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcf1c) {
            ctx->pc = 0x1BCF50u;
            goto label_1bcf50;
        }
    }
    ctx->pc = 0x1BCF24u;
    // 0x1bcf24: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x1bcf24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1bcf28:
    // 0x1bcf28: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1bcf28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1bcf2c: 0x8c447910  lw          $a0, 0x7910($v0)
    ctx->pc = 0x1bcf2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
    // 0x1bcf30: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1bcf30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bcf34: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x1BCF34u;
    SET_GPR_U32(ctx, 31, 0x1BCF3Cu);
    ctx->pc = 0x1BCF38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCF34u;
            // 0x1bcf38: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCF3Cu; }
        if (ctx->pc != 0x1BCF3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCF3Cu; }
        if (ctx->pc != 0x1BCF3Cu) { return; }
    }
    ctx->pc = 0x1BCF3Cu;
    // 0x1bcf3c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1bcf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1bcf40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1bcf40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bcf44: 0x1462fff8  bne         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1BCF44u;
    {
        const bool branch_taken_0x1bcf44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BCF48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCF44u;
            // 0x1bcf48: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcf44) {
            ctx->pc = 0x1BCF28u;
            runtime->cooperativeGuestYield();
            goto label_1bcf28;
        }
    }
    ctx->pc = 0x1BCF4Cu;
    // 0x1bcf4c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1bcf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1bcf50:
    // 0x1bcf50: 0xae100004  sw          $s0, 0x4($s0)
    ctx->pc = 0x1bcf50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
    // 0x1bcf54: 0x8c43cd58  lw          $v1, -0x32A8($v0)
    ctx->pc = 0x1bcf54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x1bcf58: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1BCF58u;
    {
        const bool branch_taken_0x1bcf58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCF5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCF58u;
            // 0x1bcf5c: 0xae100000  sw          $s0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcf58) {
            ctx->pc = 0x1BCF8Cu;
            goto label_1bcf8c;
        }
    }
    ctx->pc = 0x1BCF60u;
    // 0x1bcf60: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1bcf60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bcf64: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1bcf64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1bcf68: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x1bcf68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1bcf6c: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x1bcf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1bcf70: 0x40f809  jalr        $v0
    ctx->pc = 0x1BCF70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BCF78u);
        ctx->pc = 0x1BCF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCF70u;
            // 0x1bcf74: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BCF78u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BC648u: goto label_1bc648;
            case 0x1BC66Cu: goto label_1bc66c;
            case 0x1BC6B0u: goto label_1bc6b0;
            case 0x1BC708u: goto label_1bc708;
            case 0x1BC788u: goto label_1bc788;
            case 0x1BC7C0u: goto label_1bc7c0;
            case 0x1BC7C8u: goto label_1bc7c8;
            case 0x1BC850u: goto label_1bc850;
            case 0x1BC890u: goto label_1bc890;
            case 0x1BC910u: goto label_1bc910;
            case 0x1BC958u: goto label_1bc958;
            case 0x1BC998u: goto label_1bc998;
            case 0x1BCA90u: goto label_1bca90;
            case 0x1BCAC8u: goto label_1bcac8;
            case 0x1BCAD0u: goto label_1bcad0;
            case 0x1BCB50u: goto label_1bcb50;
            case 0x1BCBA8u: goto label_1bcba8;
            case 0x1BCC40u: goto label_1bcc40;
            case 0x1BCC50u: goto label_1bcc50;
            case 0x1BCC70u: goto label_1bcc70;
            case 0x1BCCB8u: goto label_1bccb8;
            case 0x1BCCD8u: goto label_1bccd8;
            case 0x1BCD08u: goto label_1bcd08;
            case 0x1BCDC0u: goto label_1bcdc0;
            case 0x1BCE78u: goto label_1bce78;
            case 0x1BCEE8u: goto label_1bcee8;
            case 0x1BCF08u: goto label_1bcf08;
            case 0x1BCF28u: goto label_1bcf28;
            case 0x1BCF50u: goto label_1bcf50;
            case 0x1BCF8Cu: goto label_1bcf8c;
            case 0x1BCF90u: goto label_1bcf90;
            case 0x1BCFA4u: goto label_1bcfa4;
            case 0x1BCFD8u: goto label_1bcfd8;
            case 0x1BD018u: goto label_1bd018;
            case 0x1BD048u: goto label_1bd048;
            case 0x1BD088u: goto label_1bd088;
            case 0x1BD0C0u: goto label_1bd0c0;
            case 0x1BD168u: goto label_1bd168;
            case 0x1BD210u: goto label_1bd210;
            case 0x1BD288u: goto label_1bd288;
            case 0x1BD2C0u: goto label_1bd2c0;
            case 0x1BD2F0u: goto label_1bd2f0;
            case 0x1BD360u: goto label_1bd360;
            case 0x1BD398u: goto label_1bd398;
            case 0x1BD408u: goto label_1bd408;
            case 0x1BD448u: goto label_1bd448;
            case 0x1BD490u: goto label_1bd490;
            case 0x1BD4C0u: goto label_1bd4c0;
            case 0x1BD578u: goto label_1bd578;
            case 0x1BD5E0u: goto label_1bd5e0;
            case 0x1BD680u: goto label_1bd680;
            case 0x1BD6B0u: goto label_1bd6b0;
            case 0x1BD6E8u: goto label_1bd6e8;
            case 0x1BD718u: goto label_1bd718;
            case 0x1BD73Cu: goto label_1bd73c;
            case 0x1BD758u: goto label_1bd758;
            case 0x1BD808u: goto label_1bd808;
            case 0x1BD810u: goto label_1bd810;
            case 0x1BD898u: goto label_1bd898;
            case 0x1BD8B4u: goto label_1bd8b4;
            case 0x1BD8C0u: goto label_1bd8c0;
            case 0x1BD958u: goto label_1bd958;
            case 0x1BD95Cu: goto label_1bd95c;
            case 0x1BD998u: goto label_1bd998;
            case 0x1BD99Cu: goto label_1bd99c;
            case 0x1BD9A8u: goto label_1bd9a8;
            case 0x1BD9ACu: goto label_1bd9ac;
            case 0x1BD9C0u: goto label_1bd9c0;
            case 0x1BD9E0u: goto label_1bd9e0;
            case 0x1BDA58u: goto label_1bda58;
            case 0x1BDB10u: goto label_1bdb10;
            case 0x1BDB24u: goto label_1bdb24;
            case 0x1BDB28u: goto label_1bdb28;
            case 0x1BDB2Cu: goto label_1bdb2c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BCF78u; }
            if (ctx->pc != 0x1BCF78u) { return; }
        }
        }
    }
    ctx->pc = 0x1BCF78u;
    // 0x1bcf78: 0x8c4400ac  lw          $a0, 0xAC($v0)
    ctx->pc = 0x1bcf78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
    // 0x1bcf7c: 0xc0401d6  jal         func_100758
    ctx->pc = 0x1BCF7Cu;
    SET_GPR_U32(ctx, 31, 0x1BCF84u);
    ctx->pc = 0x1BCF80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCF7Cu;
            // 0x1bcf80: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100758u;
    if (runtime->hasFunction(0x100758u)) {
        auto targetFn = runtime->lookupFunction(0x100758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCF84u; }
        if (ctx->pc != 0x1BCF84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100758_0x100758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCF84u; }
        if (ctx->pc != 0x1BCF84u) { return; }
    }
    ctx->pc = 0x1BCF84u;
    // 0x1bcf84: 0x544002e9  bnel        $v0, $zero, . + 4 + (0x2E9 << 2)
    ctx->pc = 0x1BCF84u;
    {
        const bool branch_taken_0x1bcf84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bcf84) {
            ctx->pc = 0x1BCF88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCF84u;
            // 0x1bcf88: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BDB2Cu;
            goto label_1bdb2c;
        }
    }
    ctx->pc = 0x1BCF8Cu;
label_1bcf8c:
    // 0x1bcf8c: 0x8e62cc44  lw          $v0, -0x33BC($s3)
    ctx->pc = 0x1bcf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294954052)));
label_1bcf90:
    // 0x1bcf90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bcf90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bcf94: 0x28430020  slti        $v1, $v0, 0x20
    ctx->pc = 0x1bcf94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1bcf98: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BCF98u;
    {
        const bool branch_taken_0x1bcf98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BCF9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCF98u;
            // 0x1bcf9c: 0xae62cc44  sw          $v0, -0x33BC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4294954052), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcf98) {
            ctx->pc = 0x1BCFA4u;
            goto label_1bcfa4;
        }
    }
    ctx->pc = 0x1BCFA0u;
    // 0x1bcfa0: 0xae60cc44  sw          $zero, -0x33BC($s3)
    ctx->pc = 0x1bcfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294954052), GPR_U32(ctx, 0));
label_1bcfa4:
    // 0x1bcfa4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1bcfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1bcfa8: 0x8e84cc4c  lw          $a0, -0x33B4($s4)
    ctx->pc = 0x1bcfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294954060)));
    // 0x1bcfac: 0x8c43cc40  lw          $v1, -0x33C0($v0)
    ctx->pc = 0x1bcfacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954048)));
    // 0x1bcfb0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1bcfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1bcfb4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BCFB4u;
    {
        const bool branch_taken_0x1bcfb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCFB4u;
            // 0x1bcfb8: 0xac43cc40  sw          $v1, -0x33C0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294954048), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcfb4) {
            ctx->pc = 0x1BCFD8u;
            goto label_1bcfd8;
        }
    }
    ctx->pc = 0x1BCFBCu;
    // 0x1bcfbc: 0xc06edb6  jal         func_1BB6D8
    ctx->pc = 0x1BCFBCu;
    SET_GPR_U32(ctx, 31, 0x1BCFC4u);
    ctx->pc = 0x1BCFC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCFBCu;
            // 0x1bcfc0: 0xae80cc4c  sw          $zero, -0x33B4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294954060), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB6D8u;
    if (runtime->hasFunction(0x1BB6D8u)) {
        auto targetFn = runtime->lookupFunction(0x1BB6D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCFC4u; }
        if (ctx->pc != 0x1BCFC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB6D8_0x1bb6d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCFC4u; }
        if (ctx->pc != 0x1BCFC4u) { return; }
    }
    ctx->pc = 0x1BCFC4u;
    // 0x1bcfc4: 0xc06edc0  jal         func_1BB700
    ctx->pc = 0x1BCFC4u;
    SET_GPR_U32(ctx, 31, 0x1BCFCCu);
    ctx->pc = 0x1BB700u;
    if (runtime->hasFunction(0x1BB700u)) {
        auto targetFn = runtime->lookupFunction(0x1BB700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCFCCu; }
        if (ctx->pc != 0x1BCFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB700_0x1bb700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCFCCu; }
        if (ctx->pc != 0x1BCFCCu) { return; }
    }
    ctx->pc = 0x1BCFCCu;
    // 0x1bcfcc: 0x100002d6  b           . + 4 + (0x2D6 << 2)
    ctx->pc = 0x1BCFCCu;
    {
        const bool branch_taken_0x1bcfcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCFD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCFCCu;
            // 0x1bcfd0: 0xaea05e68  sw          $zero, 0x5E68($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 24168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcfcc) {
            ctx->pc = 0x1BDB28u;
            goto label_1bdb28;
        }
    }
    ctx->pc = 0x1BCFD4u;
    // 0x1bcfd4: 0x0  nop
    ctx->pc = 0x1bcfd4u;
    // NOP
label_1bcfd8:
    // 0x1bcfd8: 0x8ec25a58  lw          $v0, 0x5A58($s6)
    ctx->pc = 0x1bcfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 23128)));
    // 0x1bcfdc: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1bcfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1bcfe0: 0x24705a30  addiu       $s0, $v1, 0x5A30
    ctx->pc = 0x1bcfe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23088));
    // 0x1bcfe4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bcfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bcfe8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1bcfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1bcfec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1bcfecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bcff0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1bcff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1bcff4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bcff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bcff8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BCFF8u;
    {
        const bool branch_taken_0x1bcff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCFFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCFF8u;
            // 0x1bcffc: 0x8ec25a58  lw          $v0, 0x5A58($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 23128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcff8) {
            ctx->pc = 0x1BD018u;
            goto label_1bd018;
        }
    }
    ctx->pc = 0x1BD000u;
    // 0x1bd000: 0x8c71000c  lw          $s1, 0xC($v1)
    ctx->pc = 0x1bd000u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1bd004: 0xc0891de  jal         func_224778
    ctx->pc = 0x1BD004u;
    SET_GPR_U32(ctx, 31, 0x1BD00Cu);
    ctx->pc = 0x1BD008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD004u;
            // 0x1bd008: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224778u;
    if (runtime->hasFunction(0x224778u)) {
        auto targetFn = runtime->lookupFunction(0x224778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD00Cu; }
        if (ctx->pc != 0x1BD00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224778_0x224778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD00Cu; }
        if (ctx->pc != 0x1BD00Cu) { return; }
    }
    ctx->pc = 0x1BD00Cu;
    // 0x1bd00c: 0xc06f980  jal         func_1BE600
    ctx->pc = 0x1BD00Cu;
    SET_GPR_U32(ctx, 31, 0x1BD014u);
    ctx->pc = 0x1BD010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD00Cu;
            // 0x1bd010: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE600u;
    if (runtime->hasFunction(0x1BE600u)) {
        auto targetFn = runtime->lookupFunction(0x1BE600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD014u; }
        if (ctx->pc != 0x1BD014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE600_0x1be600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD014u; }
        if (ctx->pc != 0x1BD014u) { return; }
    }
    ctx->pc = 0x1BD014u;
    // 0x1bd014: 0x8ec25a58  lw          $v0, 0x5A58($s6)
    ctx->pc = 0x1bd014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 23128)));
label_1bd018:
    // 0x1bd018: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bd018u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bd01c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1bd01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1bd020: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bd020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bd024: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1bd024u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd028: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1bd028u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1bd02c: 0x8ec25a58  lw          $v0, 0x5A58($s6)
    ctx->pc = 0x1bd02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 23128)));
    // 0x1bd030: 0xaea05e68  sw          $zero, 0x5E68($s5)
    ctx->pc = 0x1bd030u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24168), GPR_U32(ctx, 0));
    // 0x1bd034: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bd034u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bd038: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1bd038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1bd03c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bd03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bd040: 0x100002b9  b           . + 4 + (0x2B9 << 2)
    ctx->pc = 0x1BD040u;
    {
        const bool branch_taken_0x1bd040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD040u;
            // 0x1bd044: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd040) {
            ctx->pc = 0x1BDB28u;
            goto label_1bdb28;
        }
    }
    ctx->pc = 0x1BD048u;
label_1bd048:
    // 0x1bd048: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1bd048u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1bd04c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1bd04cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1bd050: 0x8cc4cc44  lw          $a0, -0x33BC($a2)
    ctx->pc = 0x1bd050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294954052)));
    // 0x1bd054: 0x24635a68  addiu       $v1, $v1, 0x5A68
    ctx->pc = 0x1bd054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23144));
    // 0x1bd058: 0x24650008  addiu       $a1, $v1, 0x8
    ctx->pc = 0x1bd058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1bd05c: 0x3c120033  lui         $s2, 0x33
    ctx->pc = 0x1bd05cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
    // 0x1bd060: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x1bd060u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x1bd064: 0x458821  addu        $s1, $v0, $a1
    ctx->pc = 0x1bd064u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1bd068: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1bd068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1bd06c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bd06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bd070: 0xacc4cc44  sw          $a0, -0x33BC($a2)
    ctx->pc = 0x1bd070u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294954052), GPR_U32(ctx, 4));
    // 0x1bd074: 0x94470002  lhu         $a3, 0x2($v0)
    ctx->pc = 0x1bd074u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1bd078: 0x28820020  slti        $v0, $a0, 0x20
    ctx->pc = 0x1bd078u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1bd07c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BD07Cu;
    {
        const bool branch_taken_0x1bd07c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD07Cu;
            // 0x1bd080: 0xae475a58  sw          $a3, 0x5A58($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 23128), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd07c) {
            ctx->pc = 0x1BD088u;
            goto label_1bd088;
        }
    }
    ctx->pc = 0x1BD084u;
    // 0x1bd084: 0xacc0cc44  sw          $zero, -0x33BC($a2)
    ctx->pc = 0x1bd084u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294954052), GPR_U32(ctx, 0));
label_1bd088:
    // 0x1bd088: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1bd088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1bd08c: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1bd08cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1bd090: 0x8c43cc40  lw          $v1, -0x33C0($v0)
    ctx->pc = 0x1bd090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954048)));
    // 0x1bd094: 0x8ca4cc4c  lw          $a0, -0x33B4($a1)
    ctx->pc = 0x1bd094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294954060)));
    // 0x1bd098: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1bd098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1bd09c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BD09Cu;
    {
        const bool branch_taken_0x1bd09c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD0A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD09Cu;
            // 0x1bd0a0: 0xac43cc40  sw          $v1, -0x33C0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294954048), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd09c) {
            ctx->pc = 0x1BD0C0u;
            goto label_1bd0c0;
        }
    }
    ctx->pc = 0x1BD0A4u;
    // 0x1bd0a4: 0xc06edb6  jal         func_1BB6D8
    ctx->pc = 0x1BD0A4u;
    SET_GPR_U32(ctx, 31, 0x1BD0ACu);
    ctx->pc = 0x1BD0A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD0A4u;
            // 0x1bd0a8: 0xaca0cc4c  sw          $zero, -0x33B4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294954060), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB6D8u;
    if (runtime->hasFunction(0x1BB6D8u)) {
        auto targetFn = runtime->lookupFunction(0x1BB6D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD0ACu; }
        if (ctx->pc != 0x1BD0ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB6D8_0x1bb6d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD0ACu; }
        if (ctx->pc != 0x1BD0ACu) { return; }
    }
    ctx->pc = 0x1BD0ACu;
    // 0x1bd0ac: 0xc06edc0  jal         func_1BB700
    ctx->pc = 0x1BD0ACu;
    SET_GPR_U32(ctx, 31, 0x1BD0B4u);
    ctx->pc = 0x1BB700u;
    if (runtime->hasFunction(0x1BB700u)) {
        auto targetFn = runtime->lookupFunction(0x1BB700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD0B4u; }
        if (ctx->pc != 0x1BD0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB700_0x1bb700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD0B4u; }
        if (ctx->pc != 0x1BD0B4u) { return; }
    }
    ctx->pc = 0x1BD0B4u;
    // 0x1bd0b4: 0x1000029c  b           . + 4 + (0x29C << 2)
    ctx->pc = 0x1BD0B4u;
    {
        const bool branch_taken_0x1bd0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD0B4u;
            // 0x1bd0b8: 0xaea05e68  sw          $zero, 0x5E68($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 24168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd0b4) {
            ctx->pc = 0x1BDB28u;
            goto label_1bdb28;
        }
    }
    ctx->pc = 0x1BD0BCu;
    // 0x1bd0bc: 0x0  nop
    ctx->pc = 0x1bd0bcu;
    // NOP
label_1bd0c0:
    // 0x1bd0c0: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x1bd0c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x1bd0c4: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x1bd0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1bd0c8: 0x26105a30  addiu       $s0, $s0, 0x5A30
    ctx->pc = 0x1bd0c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23088));
    // 0x1bd0cc: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1bd0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1bd0d0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1bd0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1bd0d4: 0x8c65cc5c  lw          $a1, -0x33A4($v1)
    ctx->pc = 0x1bd0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954076)));
    // 0x1bd0d8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1bd0d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bd0dc: 0x3c08002a  lui         $t0, 0x2A
    ctx->pc = 0x1bd0dcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)42 << 16));
    // 0x1bd0e0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1bd0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1bd0e4: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1bd0e4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bd0e8: 0x8c47cc74  lw          $a3, -0x338C($v0)
    ctx->pc = 0x1bd0e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954100)));
    // 0x1bd0ec: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1bd0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x1bd0f0: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x1bd0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1bd0f4: 0xac87c80c  sw          $a3, -0x37F4($a0)
    ctx->pc = 0x1bd0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294952972), GPR_U32(ctx, 7));
    // 0x1bd0f8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1bd0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1bd0fc: 0xacc20010  sw          $v0, 0x10($a2)
    ctx->pc = 0x1bd0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
    // 0x1bd100: 0xad00c808  sw          $zero, -0x37F8($t0)
    ctx->pc = 0x1bd100u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294952968), GPR_U32(ctx, 0));
    // 0x1bd104: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bd104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bd108: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1bd108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1bd10c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bd10cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bd110: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bd110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bd114: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1bd114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bd118: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1bd118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1bd11c: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x1bd11cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x1bd120: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x1bd120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x1bd124: 0x40f809  jalr        $v0
    ctx->pc = 0x1BD124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BD12Cu);
        ctx->pc = 0x1BD128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD124u;
            // 0x1bd128: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BD12Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BC648u: goto label_1bc648;
            case 0x1BC66Cu: goto label_1bc66c;
            case 0x1BC6B0u: goto label_1bc6b0;
            case 0x1BC708u: goto label_1bc708;
            case 0x1BC788u: goto label_1bc788;
            case 0x1BC7C0u: goto label_1bc7c0;
            case 0x1BC7C8u: goto label_1bc7c8;
            case 0x1BC850u: goto label_1bc850;
            case 0x1BC890u: goto label_1bc890;
            case 0x1BC910u: goto label_1bc910;
            case 0x1BC958u: goto label_1bc958;
            case 0x1BC998u: goto label_1bc998;
            case 0x1BCA90u: goto label_1bca90;
            case 0x1BCAC8u: goto label_1bcac8;
            case 0x1BCAD0u: goto label_1bcad0;
            case 0x1BCB50u: goto label_1bcb50;
            case 0x1BCBA8u: goto label_1bcba8;
            case 0x1BCC40u: goto label_1bcc40;
            case 0x1BCC50u: goto label_1bcc50;
            case 0x1BCC70u: goto label_1bcc70;
            case 0x1BCCB8u: goto label_1bccb8;
            case 0x1BCCD8u: goto label_1bccd8;
            case 0x1BCD08u: goto label_1bcd08;
            case 0x1BCDC0u: goto label_1bcdc0;
            case 0x1BCE78u: goto label_1bce78;
            case 0x1BCEE8u: goto label_1bcee8;
            case 0x1BCF08u: goto label_1bcf08;
            case 0x1BCF28u: goto label_1bcf28;
            case 0x1BCF50u: goto label_1bcf50;
            case 0x1BCF8Cu: goto label_1bcf8c;
            case 0x1BCF90u: goto label_1bcf90;
            case 0x1BCFA4u: goto label_1bcfa4;
            case 0x1BCFD8u: goto label_1bcfd8;
            case 0x1BD018u: goto label_1bd018;
            case 0x1BD048u: goto label_1bd048;
            case 0x1BD088u: goto label_1bd088;
            case 0x1BD0C0u: goto label_1bd0c0;
            case 0x1BD168u: goto label_1bd168;
            case 0x1BD210u: goto label_1bd210;
            case 0x1BD288u: goto label_1bd288;
            case 0x1BD2C0u: goto label_1bd2c0;
            case 0x1BD2F0u: goto label_1bd2f0;
            case 0x1BD360u: goto label_1bd360;
            case 0x1BD398u: goto label_1bd398;
            case 0x1BD408u: goto label_1bd408;
            case 0x1BD448u: goto label_1bd448;
            case 0x1BD490u: goto label_1bd490;
            case 0x1BD4C0u: goto label_1bd4c0;
            case 0x1BD578u: goto label_1bd578;
            case 0x1BD5E0u: goto label_1bd5e0;
            case 0x1BD680u: goto label_1bd680;
            case 0x1BD6B0u: goto label_1bd6b0;
            case 0x1BD6E8u: goto label_1bd6e8;
            case 0x1BD718u: goto label_1bd718;
            case 0x1BD73Cu: goto label_1bd73c;
            case 0x1BD758u: goto label_1bd758;
            case 0x1BD808u: goto label_1bd808;
            case 0x1BD810u: goto label_1bd810;
            case 0x1BD898u: goto label_1bd898;
            case 0x1BD8B4u: goto label_1bd8b4;
            case 0x1BD8C0u: goto label_1bd8c0;
            case 0x1BD958u: goto label_1bd958;
            case 0x1BD95Cu: goto label_1bd95c;
            case 0x1BD998u: goto label_1bd998;
            case 0x1BD99Cu: goto label_1bd99c;
            case 0x1BD9A8u: goto label_1bd9a8;
            case 0x1BD9ACu: goto label_1bd9ac;
            case 0x1BD9C0u: goto label_1bd9c0;
            case 0x1BD9E0u: goto label_1bd9e0;
            case 0x1BDA58u: goto label_1bda58;
            case 0x1BDB10u: goto label_1bdb10;
            case 0x1BDB24u: goto label_1bdb24;
            case 0x1BDB28u: goto label_1bdb28;
            case 0x1BDB2Cu: goto label_1bdb2c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BD12Cu; }
            if (ctx->pc != 0x1BD12Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1BD12Cu;
    // 0x1bd12c: 0x8e425a58  lw          $v0, 0x5A58($s2)
    ctx->pc = 0x1bd12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 23128)));
    // 0x1bd130: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bd130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd134: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1bd134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1bd138: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bd138u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bd13c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1bd13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1bd140: 0xc0a274e  jal         func_289D38
    ctx->pc = 0x1BD140u;
    SET_GPR_U32(ctx, 31, 0x1BD148u);
    ctx->pc = 0x1BD144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD140u;
            // 0x1bd144: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289D38u;
    if (runtime->hasFunction(0x289D38u)) {
        auto targetFn = runtime->lookupFunction(0x289D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD148u; }
        if (ctx->pc != 0x1BD148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289d38_0x289f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD148u; }
        if (ctx->pc != 0x1BD148u) { return; }
    }
    ctx->pc = 0x1BD148u;
    // 0x1bd148: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bd148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bd14c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bd14cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd150: 0x8c445a28  lw          $a0, 0x5A28($v0)
    ctx->pc = 0x1bd150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23080)));
    // 0x1bd154: 0xc0617ca  jal         func_185F28
    ctx->pc = 0x1BD154u;
    SET_GPR_U32(ctx, 31, 0x1BD15Cu);
    ctx->pc = 0x1BD158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD154u;
            // 0x1bd158: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185F28u;
    if (runtime->hasFunction(0x185F28u)) {
        auto targetFn = runtime->lookupFunction(0x185F28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD15Cu; }
        if (ctx->pc != 0x1BD15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185F28_0x185f28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD15Cu; }
        if (ctx->pc != 0x1BD15Cu) { return; }
    }
    ctx->pc = 0x1BD15Cu;
    // 0x1bd15c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1bd15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1bd160: 0x10000271  b           . + 4 + (0x271 << 2)
    ctx->pc = 0x1BD160u;
    {
        const bool branch_taken_0x1bd160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD160u;
            // 0x1bd164: 0xaea25e68  sw          $v0, 0x5E68($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 24168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd160) {
            ctx->pc = 0x1BDB28u;
            goto label_1bdb28;
        }
    }
    ctx->pc = 0x1BD168u;
label_1bd168:
    // 0x1bd168: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x1bd168u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x1bd16c: 0x8e045a28  lw          $a0, 0x5A28($s0)
    ctx->pc = 0x1bd16cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23080)));
    // 0x1bd170: 0x8c910054  lw          $s1, 0x54($a0)
    ctx->pc = 0x1bd170u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x1bd174: 0x12200026  beqz        $s1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1BD174u;
    {
        const bool branch_taken_0x1bd174 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD174u;
            // 0x1bd178: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd174) {
            ctx->pc = 0x1BD210u;
            goto label_1bd210;
        }
    }
    ctx->pc = 0x1BD17Cu;
    // 0x1bd17c: 0x8c62cc4c  lw          $v0, -0x33B4($v1)
    ctx->pc = 0x1bd17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954060)));
    // 0x1bd180: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1BD180u;
    {
        const bool branch_taken_0x1bd180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD180u;
            // 0x1bd184: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd180) {
            ctx->pc = 0x1BD210u;
            goto label_1bd210;
        }
    }
    ctx->pc = 0x1BD188u;
    // 0x1bd188: 0x8c42c804  lw          $v0, -0x37FC($v0)
    ctx->pc = 0x1bd188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952964)));
    // 0x1bd18c: 0x1c400020  bgtz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1BD18Cu;
    {
        const bool branch_taken_0x1bd18c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1bd18c) {
            ctx->pc = 0x1BD210u;
            goto label_1bd210;
        }
    }
    ctx->pc = 0x1BD194u;
    // 0x1bd194: 0xc06179e  jal         func_185E78
    ctx->pc = 0x1BD194u;
    SET_GPR_U32(ctx, 31, 0x1BD19Cu);
    ctx->pc = 0x1BD198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD194u;
            // 0x1bd198: 0xac60cc4c  sw          $zero, -0x33B4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954060), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185E78u;
    if (runtime->hasFunction(0x185E78u)) {
        auto targetFn = runtime->lookupFunction(0x185E78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD19Cu; }
        if (ctx->pc != 0x1BD19Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185E78_0x185e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD19Cu; }
        if (ctx->pc != 0x1BD19Cu) { return; }
    }
    ctx->pc = 0x1BD19Cu;
    // 0x1bd19c: 0xc06f980  jal         func_1BE600
    ctx->pc = 0x1BD19Cu;
    SET_GPR_U32(ctx, 31, 0x1BD1A4u);
    ctx->pc = 0x1BD1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD19Cu;
            // 0x1bd1a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE600u;
    if (runtime->hasFunction(0x1BE600u)) {
        auto targetFn = runtime->lookupFunction(0x1BE600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD1A4u; }
        if (ctx->pc != 0x1BD1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE600_0x1be600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD1A4u; }
        if (ctx->pc != 0x1BD1A4u) { return; }
    }
    ctx->pc = 0x1BD1A4u;
    // 0x1bd1a4: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1bd1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x1bd1a8: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1bd1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1bd1ac: 0x8c825a58  lw          $v0, 0x5A58($a0)
    ctx->pc = 0x1bd1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 23128)));
    // 0x1bd1b0: 0x24635a30  addiu       $v1, $v1, 0x5A30
    ctx->pc = 0x1bd1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23088));
    // 0x1bd1b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bd1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bd1b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bd1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bd1bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bd1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bd1c0: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1bd1c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd1c4: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1bd1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1bd1c8: 0x8c825a58  lw          $v0, 0x5A58($a0)
    ctx->pc = 0x1bd1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 23128)));
    // 0x1bd1cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bd1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bd1d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bd1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bd1d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bd1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bd1d8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1bd1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1bd1dc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bd1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bd1e0: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x1bd1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x1bd1e4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1bd1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1bd1e8: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x1bd1e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1bd1ec: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x1bd1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x1bd1f0: 0x40f809  jalr        $v0
    ctx->pc = 0x1BD1F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BD1F8u);
        ctx->pc = 0x1BD1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD1F0u;
            // 0x1bd1f4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BD1F8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BC648u: goto label_1bc648;
            case 0x1BC66Cu: goto label_1bc66c;
            case 0x1BC6B0u: goto label_1bc6b0;
            case 0x1BC708u: goto label_1bc708;
            case 0x1BC788u: goto label_1bc788;
            case 0x1BC7C0u: goto label_1bc7c0;
            case 0x1BC7C8u: goto label_1bc7c8;
            case 0x1BC850u: goto label_1bc850;
            case 0x1BC890u: goto label_1bc890;
            case 0x1BC910u: goto label_1bc910;
            case 0x1BC958u: goto label_1bc958;
            case 0x1BC998u: goto label_1bc998;
            case 0x1BCA90u: goto label_1bca90;
            case 0x1BCAC8u: goto label_1bcac8;
            case 0x1BCAD0u: goto label_1bcad0;
            case 0x1BCB50u: goto label_1bcb50;
            case 0x1BCBA8u: goto label_1bcba8;
            case 0x1BCC40u: goto label_1bcc40;
            case 0x1BCC50u: goto label_1bcc50;
            case 0x1BCC70u: goto label_1bcc70;
            case 0x1BCCB8u: goto label_1bccb8;
            case 0x1BCCD8u: goto label_1bccd8;
            case 0x1BCD08u: goto label_1bcd08;
            case 0x1BCDC0u: goto label_1bcdc0;
            case 0x1BCE78u: goto label_1bce78;
            case 0x1BCEE8u: goto label_1bcee8;
            case 0x1BCF08u: goto label_1bcf08;
            case 0x1BCF28u: goto label_1bcf28;
            case 0x1BCF50u: goto label_1bcf50;
            case 0x1BCF8Cu: goto label_1bcf8c;
            case 0x1BCF90u: goto label_1bcf90;
            case 0x1BCFA4u: goto label_1bcfa4;
            case 0x1BCFD8u: goto label_1bcfd8;
            case 0x1BD018u: goto label_1bd018;
            case 0x1BD048u: goto label_1bd048;
            case 0x1BD088u: goto label_1bd088;
            case 0x1BD0C0u: goto label_1bd0c0;
            case 0x1BD168u: goto label_1bd168;
            case 0x1BD210u: goto label_1bd210;
            case 0x1BD288u: goto label_1bd288;
            case 0x1BD2C0u: goto label_1bd2c0;
            case 0x1BD2F0u: goto label_1bd2f0;
            case 0x1BD360u: goto label_1bd360;
            case 0x1BD398u: goto label_1bd398;
            case 0x1BD408u: goto label_1bd408;
            case 0x1BD448u: goto label_1bd448;
            case 0x1BD490u: goto label_1bd490;
            case 0x1BD4C0u: goto label_1bd4c0;
            case 0x1BD578u: goto label_1bd578;
            case 0x1BD5E0u: goto label_1bd5e0;
            case 0x1BD680u: goto label_1bd680;
            case 0x1BD6B0u: goto label_1bd6b0;
            case 0x1BD6E8u: goto label_1bd6e8;
            case 0x1BD718u: goto label_1bd718;
            case 0x1BD73Cu: goto label_1bd73c;
            case 0x1BD758u: goto label_1bd758;
            case 0x1BD808u: goto label_1bd808;
            case 0x1BD810u: goto label_1bd810;
            case 0x1BD898u: goto label_1bd898;
            case 0x1BD8B4u: goto label_1bd8b4;
            case 0x1BD8C0u: goto label_1bd8c0;
            case 0x1BD958u: goto label_1bd958;
            case 0x1BD95Cu: goto label_1bd95c;
            case 0x1BD998u: goto label_1bd998;
            case 0x1BD99Cu: goto label_1bd99c;
            case 0x1BD9A8u: goto label_1bd9a8;
            case 0x1BD9ACu: goto label_1bd9ac;
            case 0x1BD9C0u: goto label_1bd9c0;
            case 0x1BD9E0u: goto label_1bd9e0;
            case 0x1BDA58u: goto label_1bda58;
            case 0x1BDB10u: goto label_1bdb10;
            case 0x1BDB24u: goto label_1bdb24;
            case 0x1BDB28u: goto label_1bdb28;
            case 0x1BDB2Cu: goto label_1bdb2c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BD1F8u; }
            if (ctx->pc != 0x1BD1F8u) { return; }
        }
        }
    }
    ctx->pc = 0x1BD1F8u;
    // 0x1bd1f8: 0xc06edb6  jal         func_1BB6D8
    ctx->pc = 0x1BD1F8u;
    SET_GPR_U32(ctx, 31, 0x1BD200u);
    ctx->pc = 0x1BB6D8u;
    if (runtime->hasFunction(0x1BB6D8u)) {
        auto targetFn = runtime->lookupFunction(0x1BB6D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD200u; }
        if (ctx->pc != 0x1BD200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB6D8_0x1bb6d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD200u; }
        if (ctx->pc != 0x1BD200u) { return; }
    }
    ctx->pc = 0x1BD200u;
    // 0x1bd200: 0xc06edc0  jal         func_1BB700
    ctx->pc = 0x1BD200u;
    SET_GPR_U32(ctx, 31, 0x1BD208u);
    ctx->pc = 0x1BB700u;
    if (runtime->hasFunction(0x1BB700u)) {
        auto targetFn = runtime->lookupFunction(0x1BB700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD208u; }
        if (ctx->pc != 0x1BD208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB700_0x1bb700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD208u; }
        if (ctx->pc != 0x1BD208u) { return; }
    }
    ctx->pc = 0x1BD208u;
    // 0x1bd208: 0x10000247  b           . + 4 + (0x247 << 2)
    ctx->pc = 0x1BD208u;
    {
        const bool branch_taken_0x1bd208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD20Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD208u;
            // 0x1bd20c: 0xaea05e68  sw          $zero, 0x5E68($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 24168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd208) {
            ctx->pc = 0x1BDB28u;
            goto label_1bdb28;
        }
    }
    ctx->pc = 0x1BD210u;
label_1bd210:
    // 0x1bd210: 0xc061688  jal         func_185A20
    ctx->pc = 0x1BD210u;
    SET_GPR_U32(ctx, 31, 0x1BD218u);
    ctx->pc = 0x1BD214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD210u;
            // 0x1bd214: 0x8e045a28  lw          $a0, 0x5A28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23080)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185A20u;
    if (runtime->hasFunction(0x185A20u)) {
        auto targetFn = runtime->lookupFunction(0x185A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD218u; }
        if (ctx->pc != 0x1BD218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185A20_0x185a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD218u; }
        if (ctx->pc != 0x1BD218u) { return; }
    }
    ctx->pc = 0x1BD218u;
    // 0x1bd218: 0x54400244  bnel        $v0, $zero, . + 4 + (0x244 << 2)
    ctx->pc = 0x1BD218u;
    {
        const bool branch_taken_0x1bd218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd218) {
            ctx->pc = 0x1BD21Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD218u;
            // 0x1bd21c: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BDB2Cu;
            goto label_1bdb2c;
        }
    }
    ctx->pc = 0x1BD220u;
    // 0x1bd220: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bd220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bd224: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1bd224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1bd228: 0x8c425a58  lw          $v0, 0x5A58($v0)
    ctx->pc = 0x1bd228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23128)));
    // 0x1bd22c: 0x24635a30  addiu       $v1, $v1, 0x5A30
    ctx->pc = 0x1bd22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23088));
    // 0x1bd230: 0x8e045a28  lw          $a0, 0x5A28($s0)
    ctx->pc = 0x1bd230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23080)));
    // 0x1bd234: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bd234u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bd238: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bd238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bd23c: 0x8c850054  lw          $a1, 0x54($a0)
    ctx->pc = 0x1bd23cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x1bd240: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1bd240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bd244: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1bd244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd248: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1bd248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1bd24c: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x1bd24cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
    // 0x1bd250: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1bd250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1bd254: 0xc06f954  jal         func_1BE550
    ctx->pc = 0x1BD254u;
    SET_GPR_U32(ctx, 31, 0x1BD25Cu);
    ctx->pc = 0x1BD258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD254u;
            // 0x1bd258: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE550u;
    if (runtime->hasFunction(0x1BE550u)) {
        auto targetFn = runtime->lookupFunction(0x1BE550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD25Cu; }
        if (ctx->pc != 0x1BD25Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE550_0x1be550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD25Cu; }
        if (ctx->pc != 0x1BD25Cu) { return; }
    }
    ctx->pc = 0x1BD25Cu;
    // 0x1bd25c: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x1bd25cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x1bd260: 0x2610e848  addiu       $s0, $s0, -0x17B8
    ctx->pc = 0x1bd260u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961224));
    // 0x1bd264: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x1bd264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1bd268: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1bd268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1bd26c: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x1bd26cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1bd270: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x1bd270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x1bd274: 0x40f809  jalr        $v0
    ctx->pc = 0x1BD274u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BD27Cu);
        ctx->pc = 0x1BD278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD274u;
            // 0x1bd278: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BD27Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BC648u: goto label_1bc648;
            case 0x1BC66Cu: goto label_1bc66c;
            case 0x1BC6B0u: goto label_1bc6b0;
            case 0x1BC708u: goto label_1bc708;
            case 0x1BC788u: goto label_1bc788;
            case 0x1BC7C0u: goto label_1bc7c0;
            case 0x1BC7C8u: goto label_1bc7c8;
            case 0x1BC850u: goto label_1bc850;
            case 0x1BC890u: goto label_1bc890;
            case 0x1BC910u: goto label_1bc910;
            case 0x1BC958u: goto label_1bc958;
            case 0x1BC998u: goto label_1bc998;
            case 0x1BCA90u: goto label_1bca90;
            case 0x1BCAC8u: goto label_1bcac8;
            case 0x1BCAD0u: goto label_1bcad0;
            case 0x1BCB50u: goto label_1bcb50;
            case 0x1BCBA8u: goto label_1bcba8;
            case 0x1BCC40u: goto label_1bcc40;
            case 0x1BCC50u: goto label_1bcc50;
            case 0x1BCC70u: goto label_1bcc70;
            case 0x1BCCB8u: goto label_1bccb8;
            case 0x1BCCD8u: goto label_1bccd8;
            case 0x1BCD08u: goto label_1bcd08;
            case 0x1BCDC0u: goto label_1bcdc0;
            case 0x1BCE78u: goto label_1bce78;
            case 0x1BCEE8u: goto label_1bcee8;
            case 0x1BCF08u: goto label_1bcf08;
            case 0x1BCF28u: goto label_1bcf28;
            case 0x1BCF50u: goto label_1bcf50;
            case 0x1BCF8Cu: goto label_1bcf8c;
            case 0x1BCF90u: goto label_1bcf90;
            case 0x1BCFA4u: goto label_1bcfa4;
            case 0x1BCFD8u: goto label_1bcfd8;
            case 0x1BD018u: goto label_1bd018;
            case 0x1BD048u: goto label_1bd048;
            case 0x1BD088u: goto label_1bd088;
            case 0x1BD0C0u: goto label_1bd0c0;
            case 0x1BD168u: goto label_1bd168;
            case 0x1BD210u: goto label_1bd210;
            case 0x1BD288u: goto label_1bd288;
            case 0x1BD2C0u: goto label_1bd2c0;
            case 0x1BD2F0u: goto label_1bd2f0;
            case 0x1BD360u: goto label_1bd360;
            case 0x1BD398u: goto label_1bd398;
            case 0x1BD408u: goto label_1bd408;
            case 0x1BD448u: goto label_1bd448;
            case 0x1BD490u: goto label_1bd490;
            case 0x1BD4C0u: goto label_1bd4c0;
            case 0x1BD578u: goto label_1bd578;
            case 0x1BD5E0u: goto label_1bd5e0;
            case 0x1BD680u: goto label_1bd680;
            case 0x1BD6B0u: goto label_1bd6b0;
            case 0x1BD6E8u: goto label_1bd6e8;
            case 0x1BD718u: goto label_1bd718;
            case 0x1BD73Cu: goto label_1bd73c;
            case 0x1BD758u: goto label_1bd758;
            case 0x1BD808u: goto label_1bd808;
            case 0x1BD810u: goto label_1bd810;
            case 0x1BD898u: goto label_1bd898;
            case 0x1BD8B4u: goto label_1bd8b4;
            case 0x1BD8C0u: goto label_1bd8c0;
            case 0x1BD958u: goto label_1bd958;
            case 0x1BD95Cu: goto label_1bd95c;
            case 0x1BD998u: goto label_1bd998;
            case 0x1BD99Cu: goto label_1bd99c;
            case 0x1BD9A8u: goto label_1bd9a8;
            case 0x1BD9ACu: goto label_1bd9ac;
            case 0x1BD9C0u: goto label_1bd9c0;
            case 0x1BD9E0u: goto label_1bd9e0;
            case 0x1BDA58u: goto label_1bda58;
            case 0x1BDB10u: goto label_1bdb10;
            case 0x1BDB24u: goto label_1bdb24;
            case 0x1BDB28u: goto label_1bdb28;
            case 0x1BDB2Cu: goto label_1bdb2c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BD27Cu; }
            if (ctx->pc != 0x1BD27Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1BD27Cu;
    // 0x1bd27c: 0x10000224  b           . + 4 + (0x224 << 2)
    ctx->pc = 0x1BD27Cu;
    {
        const bool branch_taken_0x1bd27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD27Cu;
            // 0x1bd280: 0x8e03006c  lw          $v1, 0x6C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd27c) {
            ctx->pc = 0x1BDB10u;
            goto label_1bdb10;
        }
    }
    ctx->pc = 0x1BD284u;
    // 0x1bd284: 0x0  nop
    ctx->pc = 0x1bd284u;
    // NOP
label_1bd288:
    // 0x1bd288: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1bd288u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1bd28c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1bd28cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x1bd290: 0x8ca3cc44  lw          $v1, -0x33BC($a1)
    ctx->pc = 0x1bd290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294954052)));
    // 0x1bd294: 0x24845a68  addiu       $a0, $a0, 0x5A68
    ctx->pc = 0x1bd294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23144));
    // 0x1bd298: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x1bd298u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x1bd29c: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x1bd29cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1bd2a0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1bd2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1bd2a4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1bd2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1bd2a8: 0x94460002  lhu         $a2, 0x2($v0)
    ctx->pc = 0x1bd2a8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1bd2ac: 0x28640020  slti        $a0, $v1, 0x20
    ctx->pc = 0x1bd2acu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1bd2b0: 0xaca3cc44  sw          $v1, -0x33BC($a1)
    ctx->pc = 0x1bd2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294954052), GPR_U32(ctx, 3));
    // 0x1bd2b4: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BD2B4u;
    {
        const bool branch_taken_0x1bd2b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD2B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD2B4u;
            // 0x1bd2b8: 0xae065a58  sw          $a2, 0x5A58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 23128), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd2b4) {
            ctx->pc = 0x1BD2C0u;
            goto label_1bd2c0;
        }
    }
    ctx->pc = 0x1BD2BCu;
    // 0x1bd2bc: 0xaca0cc44  sw          $zero, -0x33BC($a1)
    ctx->pc = 0x1bd2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294954052), GPR_U32(ctx, 0));
label_1bd2c0:
    // 0x1bd2c0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1bd2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1bd2c4: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1bd2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1bd2c8: 0x8c43cc40  lw          $v1, -0x33C0($v0)
    ctx->pc = 0x1bd2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954048)));
    // 0x1bd2cc: 0x8ca4cc4c  lw          $a0, -0x33B4($a1)
    ctx->pc = 0x1bd2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294954060)));
    // 0x1bd2d0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1bd2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1bd2d4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BD2D4u;
    {
        const bool branch_taken_0x1bd2d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD2D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD2D4u;
            // 0x1bd2d8: 0xac43cc40  sw          $v1, -0x33C0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294954048), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd2d4) {
            ctx->pc = 0x1BD2F0u;
            goto label_1bd2f0;
        }
    }
    ctx->pc = 0x1BD2DCu;
    // 0x1bd2dc: 0xc06edc0  jal         func_1BB700
    ctx->pc = 0x1BD2DCu;
    SET_GPR_U32(ctx, 31, 0x1BD2E4u);
    ctx->pc = 0x1BD2E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD2DCu;
            // 0x1bd2e0: 0xaca0cc4c  sw          $zero, -0x33B4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294954060), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB700u;
    if (runtime->hasFunction(0x1BB700u)) {
        auto targetFn = runtime->lookupFunction(0x1BB700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD2E4u; }
        if (ctx->pc != 0x1BD2E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB700_0x1bb700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD2E4u; }
        if (ctx->pc != 0x1BD2E4u) { return; }
    }
    ctx->pc = 0x1BD2E4u;
    // 0x1bd2e4: 0x10000210  b           . + 4 + (0x210 << 2)
    ctx->pc = 0x1BD2E4u;
    {
        const bool branch_taken_0x1bd2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD2E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD2E4u;
            // 0x1bd2e8: 0xaea05e68  sw          $zero, 0x5E68($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 24168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd2e4) {
            ctx->pc = 0x1BDB28u;
            goto label_1bdb28;
        }
    }
    ctx->pc = 0x1BD2ECu;
    // 0x1bd2ec: 0x0  nop
    ctx->pc = 0x1bd2ecu;
    // NOP
label_1bd2f0:
    // 0x1bd2f0: 0xc06f7bc  jal         func_1BDEF0
    ctx->pc = 0x1BD2F0u;
    SET_GPR_U32(ctx, 31, 0x1BD2F8u);
    ctx->pc = 0x1BD2F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD2F0u;
            // 0x1bd2f4: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BDEF0u;
    if (runtime->hasFunction(0x1BDEF0u)) {
        auto targetFn = runtime->lookupFunction(0x1BDEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD2F8u; }
        if (ctx->pc != 0x1BD2F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BDEF0_0x1bdef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD2F8u; }
        if (ctx->pc != 0x1BD2F8u) { return; }
    }
    ctx->pc = 0x1BD2F8u;
    // 0x1bd2f8: 0xc06f7fe  jal         func_1BDFF8
    ctx->pc = 0x1BD2F8u;
    SET_GPR_U32(ctx, 31, 0x1BD300u);
    ctx->pc = 0x1BD2FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD2F8u;
            // 0x1bd2fc: 0x8e045a58  lw          $a0, 0x5A58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23128)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BDFF8u;
    if (runtime->hasFunction(0x1BDFF8u)) {
        auto targetFn = runtime->lookupFunction(0x1BDFF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD300u; }
        if (ctx->pc != 0x1BD300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BDFF8_0x1bdff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD300u; }
        if (ctx->pc != 0x1BD300u) { return; }
    }
    ctx->pc = 0x1BD300u;
    // 0x1bd300: 0x8e025a58  lw          $v0, 0x5A58($s0)
    ctx->pc = 0x1bd300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23128)));
    // 0x1bd304: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1bd304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1bd308: 0x24715280  addiu       $s1, $v1, 0x5280
    ctx->pc = 0x1bd308u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 21120));
    // 0x1bd30c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bd30cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bd310: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1bd310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1bd314: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1bd314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bd318: 0x8c620068  lw          $v0, 0x68($v1)
    ctx->pc = 0x1bd318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1bd31c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1bd31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd320: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1bd320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1bd324: 0xc06f06e  jal         func_1BC1B8
    ctx->pc = 0x1BD324u;
    SET_GPR_U32(ctx, 31, 0x1BD32Cu);
    ctx->pc = 0x1BD328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD324u;
            // 0x1bd328: 0xac620068  sw          $v0, 0x68($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BC1B8u;
    if (runtime->hasFunction(0x1BC1B8u)) {
        auto targetFn = runtime->lookupFunction(0x1BC1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD32Cu; }
        if (ctx->pc != 0x1BD32Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC1B8_0x1bc1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD32Cu; }
        if (ctx->pc != 0x1BD32Cu) { return; }
    }
    ctx->pc = 0x1BD32Cu;
    // 0x1bd32c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bd32cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bd330: 0x8c435074  lw          $v1, 0x5074($v0)
    ctx->pc = 0x1bd330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20596)));
    // 0x1bd334: 0x506001fc  beql        $v1, $zero, . + 4 + (0x1FC << 2)
    ctx->pc = 0x1BD334u;
    {
        const bool branch_taken_0x1bd334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd334) {
            ctx->pc = 0x1BD338u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD334u;
            // 0x1bd338: 0xaea05e68  sw          $zero, 0x5E68($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 24168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BDB28u;
            goto label_1bdb28;
        }
    }
    ctx->pc = 0x1BD33Cu;
    // 0x1bd33c: 0x8e045a58  lw          $a0, 0x5A58($s0)
    ctx->pc = 0x1bd33cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23128)));
    // 0x1bd340: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1bd340u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1bd344: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1bd344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1bd348: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bd348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bd34c: 0x60f809  jalr        $v1
    ctx->pc = 0x1BD34Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BD354u);
        ctx->pc = 0x1BD350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD34Cu;
            // 0x1bd350: 0x8c450064  lw          $a1, 0x64($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BD354u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BC648u: goto label_1bc648;
            case 0x1BC66Cu: goto label_1bc66c;
            case 0x1BC6B0u: goto label_1bc6b0;
            case 0x1BC708u: goto label_1bc708;
            case 0x1BC788u: goto label_1bc788;
            case 0x1BC7C0u: goto label_1bc7c0;
            case 0x1BC7C8u: goto label_1bc7c8;
            case 0x1BC850u: goto label_1bc850;
            case 0x1BC890u: goto label_1bc890;
            case 0x1BC910u: goto label_1bc910;
            case 0x1BC958u: goto label_1bc958;
            case 0x1BC998u: goto label_1bc998;
            case 0x1BCA90u: goto label_1bca90;
            case 0x1BCAC8u: goto label_1bcac8;
            case 0x1BCAD0u: goto label_1bcad0;
            case 0x1BCB50u: goto label_1bcb50;
            case 0x1BCBA8u: goto label_1bcba8;
            case 0x1BCC40u: goto label_1bcc40;
            case 0x1BCC50u: goto label_1bcc50;
            case 0x1BCC70u: goto label_1bcc70;
            case 0x1BCCB8u: goto label_1bccb8;
            case 0x1BCCD8u: goto label_1bccd8;
            case 0x1BCD08u: goto label_1bcd08;
            case 0x1BCDC0u: goto label_1bcdc0;
            case 0x1BCE78u: goto label_1bce78;
            case 0x1BCEE8u: goto label_1bcee8;
            case 0x1BCF08u: goto label_1bcf08;
            case 0x1BCF28u: goto label_1bcf28;
            case 0x1BCF50u: goto label_1bcf50;
            case 0x1BCF8Cu: goto label_1bcf8c;
            case 0x1BCF90u: goto label_1bcf90;
            case 0x1BCFA4u: goto label_1bcfa4;
            case 0x1BCFD8u: goto label_1bcfd8;
            case 0x1BD018u: goto label_1bd018;
            case 0x1BD048u: goto label_1bd048;
            case 0x1BD088u: goto label_1bd088;
            case 0x1BD0C0u: goto label_1bd0c0;
            case 0x1BD168u: goto label_1bd168;
            case 0x1BD210u: goto label_1bd210;
            case 0x1BD288u: goto label_1bd288;
            case 0x1BD2C0u: goto label_1bd2c0;
            case 0x1BD2F0u: goto label_1bd2f0;
            case 0x1BD360u: goto label_1bd360;
            case 0x1BD398u: goto label_1bd398;
            case 0x1BD408u: goto label_1bd408;
            case 0x1BD448u: goto label_1bd448;
            case 0x1BD490u: goto label_1bd490;
            case 0x1BD4C0u: goto label_1bd4c0;
            case 0x1BD578u: goto label_1bd578;
            case 0x1BD5E0u: goto label_1bd5e0;
            case 0x1BD680u: goto label_1bd680;
            case 0x1BD6B0u: goto label_1bd6b0;
            case 0x1BD6E8u: goto label_1bd6e8;
            case 0x1BD718u: goto label_1bd718;
            case 0x1BD73Cu: goto label_1bd73c;
            case 0x1BD758u: goto label_1bd758;
            case 0x1BD808u: goto label_1bd808;
            case 0x1BD810u: goto label_1bd810;
            case 0x1BD898u: goto label_1bd898;
            case 0x1BD8B4u: goto label_1bd8b4;
            case 0x1BD8C0u: goto label_1bd8c0;
            case 0x1BD958u: goto label_1bd958;
            case 0x1BD95Cu: goto label_1bd95c;
            case 0x1BD998u: goto label_1bd998;
            case 0x1BD99Cu: goto label_1bd99c;
            case 0x1BD9A8u: goto label_1bd9a8;
            case 0x1BD9ACu: goto label_1bd9ac;
            case 0x1BD9C0u: goto label_1bd9c0;
            case 0x1BD9E0u: goto label_1bd9e0;
            case 0x1BDA58u: goto label_1bda58;
            case 0x1BDB10u: goto label_1bdb10;
            case 0x1BDB24u: goto label_1bdb24;
            case 0x1BDB28u: goto label_1bdb28;
            case 0x1BDB2Cu: goto label_1bdb2c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BD354u; }
            if (ctx->pc != 0x1BD354u) { return; }
        }
        }
    }
    ctx->pc = 0x1BD354u;
    // 0x1bd354: 0x100001f4  b           . + 4 + (0x1F4 << 2)
    ctx->pc = 0x1BD354u;
    {
        const bool branch_taken_0x1bd354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD354u;
            // 0x1bd358: 0xaea05e68  sw          $zero, 0x5E68($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 24168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd354) {
            ctx->pc = 0x1BDB28u;
            goto label_1bdb28;
        }
    }
    ctx->pc = 0x1BD35Cu;
    // 0x1bd35c: 0x0  nop
    ctx->pc = 0x1bd35cu;
    // NOP
label_1bd360:
    // 0x1bd360: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1bd360u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1bd364: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1bd364u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x1bd368: 0x8ca3cc44  lw          $v1, -0x33BC($a1)
    ctx->pc = 0x1bd368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294954052)));
    // 0x1bd36c: 0x24845a68  addiu       $a0, $a0, 0x5A68
    ctx->pc = 0x1bd36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23144));
    // 0x1bd370: 0x3c120033  lui         $s2, 0x33
    ctx->pc = 0x1bd370u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
    // 0x1bd374: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x1bd374u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1bd378: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1bd378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1bd37c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1bd37cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1bd380: 0x94460002  lhu         $a2, 0x2($v0)
    ctx->pc = 0x1bd380u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1bd384: 0x28640020  slti        $a0, $v1, 0x20
    ctx->pc = 0x1bd384u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1bd388: 0xaca3cc44  sw          $v1, -0x33BC($a1)
    ctx->pc = 0x1bd388u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294954052), GPR_U32(ctx, 3));
    // 0x1bd38c: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BD38Cu;
    {
        const bool branch_taken_0x1bd38c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD38Cu;
            // 0x1bd390: 0xae465a58  sw          $a2, 0x5A58($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 23128), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd38c) {
            ctx->pc = 0x1BD398u;
            goto label_1bd398;
        }
    }
    ctx->pc = 0x1BD394u;
    // 0x1bd394: 0xaca0cc44  sw          $zero, -0x33BC($a1)
    ctx->pc = 0x1bd394u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294954052), GPR_U32(ctx, 0));
label_1bd398:
    // 0x1bd398: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1bd398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1bd39c: 0x8c62cc40  lw          $v0, -0x33C0($v1)
    ctx->pc = 0x1bd39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954048)));
    // 0x1bd3a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bd3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bd3a4: 0xac62cc40  sw          $v0, -0x33C0($v1)
    ctx->pc = 0x1bd3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954048), GPR_U32(ctx, 2));
    // 0x1bd3a8: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x1bd3a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x1bd3ac: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1bd3acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1bd3b0: 0x26105a40  addiu       $s0, $s0, 0x5A40
    ctx->pc = 0x1bd3b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23104));
    // 0x1bd3b4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1bd3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1bd3b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bd3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bd3bc: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1bd3bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bd3c0: 0xc0891de  jal         func_224778
    ctx->pc = 0x1BD3C0u;
    SET_GPR_U32(ctx, 31, 0x1BD3C8u);
    ctx->pc = 0x1BD3C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD3C0u;
            // 0x1bd3c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224778u;
    if (runtime->hasFunction(0x224778u)) {
        auto targetFn = runtime->lookupFunction(0x224778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD3C8u; }
        if (ctx->pc != 0x1BD3C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224778_0x224778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD3C8u; }
        if (ctx->pc != 0x1BD3C8u) { return; }
    }
    ctx->pc = 0x1BD3C8u;
    // 0x1bd3c8: 0xc06f980  jal         func_1BE600
    ctx->pc = 0x1BD3C8u;
    SET_GPR_U32(ctx, 31, 0x1BD3D0u);
    ctx->pc = 0x1BD3CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD3C8u;
            // 0x1bd3cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE600u;
    if (runtime->hasFunction(0x1BE600u)) {
        auto targetFn = runtime->lookupFunction(0x1BE600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD3D0u; }
        if (ctx->pc != 0x1BD3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE600_0x1be600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD3D0u; }
        if (ctx->pc != 0x1BD3D0u) { return; }
    }
    ctx->pc = 0x1BD3D0u;
    // 0x1bd3d0: 0x8e425a58  lw          $v0, 0x5A58($s2)
    ctx->pc = 0x1bd3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 23128)));
    // 0x1bd3d4: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1bd3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1bd3d8: 0x8c64cb94  lw          $a0, -0x346C($v1)
    ctx->pc = 0x1bd3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953876)));
    // 0x1bd3dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bd3dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd3e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bd3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bd3e4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1bd3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1bd3e8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bd3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bd3ec: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1bd3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1bd3f0: 0xc06dea8  jal         func_1B7AA0
    ctx->pc = 0x1BD3F0u;
    SET_GPR_U32(ctx, 31, 0x1BD3F8u);
    ctx->pc = 0x1BD3F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD3F0u;
            // 0x1bd3f4: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7AA0u;
    if (runtime->hasFunction(0x1B7AA0u)) {
        auto targetFn = runtime->lookupFunction(0x1B7AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD3F8u; }
        if (ctx->pc != 0x1BD3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1b7aa0_0x1b7aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD3F8u; }
        if (ctx->pc != 0x1BD3F8u) { return; }
    }
    ctx->pc = 0x1BD3F8u;
    // 0x1bd3f8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1bd3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1bd3fc: 0xaea05e68  sw          $zero, 0x5E68($s5)
    ctx->pc = 0x1bd3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24168), GPR_U32(ctx, 0));
    // 0x1bd400: 0x100001c9  b           . + 4 + (0x1C9 << 2)
    ctx->pc = 0x1BD400u;
    {
        const bool branch_taken_0x1bd400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD400u;
            // 0x1bd404: 0xac40cc54  sw          $zero, -0x33AC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294954068), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd400) {
            ctx->pc = 0x1BDB28u;
            goto label_1bdb28;
        }
    }
    ctx->pc = 0x1BD408u;
label_1bd408:
    // 0x1bd408: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1bd408u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1bd40c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bd40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bd410: 0x8cc3cc44  lw          $v1, -0x33BC($a2)
    ctx->pc = 0x1bd410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294954052)));
    // 0x1bd414: 0x24425a68  addiu       $v0, $v0, 0x5A68
    ctx->pc = 0x1bd414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23144));
    // 0x1bd418: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x1bd418u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x1bd41c: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x1bd41cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1bd420: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x1bd420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1bd424: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1bd424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1bd428: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1bd428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1bd42c: 0x94a50002  lhu         $a1, 0x2($a1)
    ctx->pc = 0x1bd42cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1bd430: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x1bd430u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1bd434: 0x28640020  slti        $a0, $v1, 0x20
    ctx->pc = 0x1bd434u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1bd438: 0xae255a58  sw          $a1, 0x5A58($s1)
    ctx->pc = 0x1bd438u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 23128), GPR_U32(ctx, 5));
    // 0x1bd43c: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BD43Cu;
    {
        const bool branch_taken_0x1bd43c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD43Cu;
            // 0x1bd440: 0xacc3cc44  sw          $v1, -0x33BC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294954052), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd43c) {
            ctx->pc = 0x1BD448u;
            goto label_1bd448;
        }
    }
    ctx->pc = 0x1BD444u;
    // 0x1bd444: 0xacc0cc44  sw          $zero, -0x33BC($a2)
    ctx->pc = 0x1bd444u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294954052), GPR_U32(ctx, 0));
label_1bd448:
    // 0x1bd448: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1bd448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1bd44c: 0x8c62cc40  lw          $v0, -0x33C0($v1)
    ctx->pc = 0x1bd44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954048)));
    // 0x1bd450: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bd450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bd454: 0x14a0000e  bnez        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x1BD454u;
    {
        const bool branch_taken_0x1bd454 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD454u;
            // 0x1bd458: 0xac62cc40  sw          $v0, -0x33C0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954048), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd454) {
            ctx->pc = 0x1BD490u;
            goto label_1bd490;
        }
    }
    ctx->pc = 0x1BD45Cu;
    // 0x1bd45c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bd45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bd460: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1bd460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1bd464: 0x8c425a2c  lw          $v0, 0x5A2C($v0)
    ctx->pc = 0x1bd464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23084)));
    // 0x1bd468: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1bd468u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1bd46c: 0x8c66cc78  lw          $a2, -0x3388($v1)
    ctx->pc = 0x1bd46cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954104)));
    // 0x1bd470: 0x24a55a40  addiu       $a1, $a1, 0x5A40
    ctx->pc = 0x1bd470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23104));
    // 0x1bd474: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x1bd474u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1bd478: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1bd478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1bd47c: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x1BD47Cu;
    SET_GPR_U32(ctx, 31, 0x1BD484u);
    ctx->pc = 0x1BD480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD47Cu;
            // 0x1bd480: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD484u; }
        if (ctx->pc != 0x1BD484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD484u; }
        if (ctx->pc != 0x1BD484u) { return; }
    }
    ctx->pc = 0x1BD484u;
    // 0x1bd484: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1BD484u;
    {
        const bool branch_taken_0x1bd484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD484u;
            // 0x1bd488: 0x8e235a58  lw          $v1, 0x5A58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 23128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd484) {
            ctx->pc = 0x1BD4C0u;
            goto label_1bd4c0;
        }
    }
    ctx->pc = 0x1BD48Cu;
    // 0x1bd48c: 0x0  nop
    ctx->pc = 0x1bd48cu;
    // NOP
label_1bd490:
    // 0x1bd490: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1bd490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1bd494: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1bd494u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1bd498: 0x2442cc78  addiu       $v0, $v0, -0x3388
    ctx->pc = 0x1bd498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954104));
    // 0x1bd49c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1bd49cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1bd4a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bd4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bd4a4: 0x24a55a48  addiu       $a1, $a1, 0x5A48
    ctx->pc = 0x1bd4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23112));
    // 0x1bd4a8: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1bd4a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bd4ac: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1bd4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1bd4b0: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x1BD4B0u;
    SET_GPR_U32(ctx, 31, 0x1BD4B8u);
    ctx->pc = 0x1BD4B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD4B0u;
            // 0x1bd4b4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD4B8u; }
        if (ctx->pc != 0x1BD4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD4B8u; }
        if (ctx->pc != 0x1BD4B8u) { return; }
    }
    ctx->pc = 0x1BD4B8u;
    // 0x1bd4b8: 0x8e235a58  lw          $v1, 0x5A58($s1)
    ctx->pc = 0x1bd4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 23128)));
    // 0x1bd4bc: 0x0  nop
    ctx->pc = 0x1bd4bcu;
    // NOP
label_1bd4c0:
    // 0x1bd4c0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bd4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bd4c4: 0x24425a40  addiu       $v0, $v0, 0x5A40
    ctx->pc = 0x1bd4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23104));
    // 0x1bd4c8: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1bd4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x1bd4cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bd4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bd4d0: 0x8c845a5c  lw          $a0, 0x5A5C($a0)
    ctx->pc = 0x1bd4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 23132)));
    // 0x1bd4d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bd4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bd4d8: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1bd4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1bd4dc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1bd4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bd4e0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1bd4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1bd4e4: 0xac44c80c  sw          $a0, -0x37F4($v0)
    ctx->pc = 0x1bd4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294952972), GPR_U32(ctx, 4));
    // 0x1bd4e8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1bd4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bd4ec: 0xa4700004  sh          $s0, 0x4($v1)
    ctx->pc = 0x1bd4ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 16));
    // 0x1bd4f0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1bd4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1bd4f4: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1bd4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1bd4f8: 0xaca0c808  sw          $zero, -0x37F8($a1)
    ctx->pc = 0x1bd4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294952968), GPR_U32(ctx, 0));
    // 0x1bd4fc: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x1bd4fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x1bd500: 0x2610e848  addiu       $s0, $s0, -0x17B8
    ctx->pc = 0x1bd500u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961224));
    // 0x1bd504: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x1bd504u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x1bd508: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x1bd508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1bd50c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1bd50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1bd510: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x1bd510u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1bd514: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x1bd514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x1bd518: 0x40f809  jalr        $v0
    ctx->pc = 0x1BD518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BD520u);
        ctx->pc = 0x1BD51Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD518u;
            // 0x1bd51c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BD520u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BC648u: goto label_1bc648;
            case 0x1BC66Cu: goto label_1bc66c;
            case 0x1BC6B0u: goto label_1bc6b0;
            case 0x1BC708u: goto label_1bc708;
            case 0x1BC788u: goto label_1bc788;
            case 0x1BC7C0u: goto label_1bc7c0;
            case 0x1BC7C8u: goto label_1bc7c8;
            case 0x1BC850u: goto label_1bc850;
            case 0x1BC890u: goto label_1bc890;
            case 0x1BC910u: goto label_1bc910;
            case 0x1BC958u: goto label_1bc958;
            case 0x1BC998u: goto label_1bc998;
            case 0x1BCA90u: goto label_1bca90;
            case 0x1BCAC8u: goto label_1bcac8;
            case 0x1BCAD0u: goto label_1bcad0;
            case 0x1BCB50u: goto label_1bcb50;
            case 0x1BCBA8u: goto label_1bcba8;
            case 0x1BCC40u: goto label_1bcc40;
            case 0x1BCC50u: goto label_1bcc50;
            case 0x1BCC70u: goto label_1bcc70;
            case 0x1BCCB8u: goto label_1bccb8;
            case 0x1BCCD8u: goto label_1bccd8;
            case 0x1BCD08u: goto label_1bcd08;
            case 0x1BCDC0u: goto label_1bcdc0;
            case 0x1BCE78u: goto label_1bce78;
            case 0x1BCEE8u: goto label_1bcee8;
            case 0x1BCF08u: goto label_1bcf08;
            case 0x1BCF28u: goto label_1bcf28;
            case 0x1BCF50u: goto label_1bcf50;
            case 0x1BCF8Cu: goto label_1bcf8c;
            case 0x1BCF90u: goto label_1bcf90;
            case 0x1BCFA4u: goto label_1bcfa4;
            case 0x1BCFD8u: goto label_1bcfd8;
            case 0x1BD018u: goto label_1bd018;
            case 0x1BD048u: goto label_1bd048;
            case 0x1BD088u: goto label_1bd088;
            case 0x1BD0C0u: goto label_1bd0c0;
            case 0x1BD168u: goto label_1bd168;
            case 0x1BD210u: goto label_1bd210;
            case 0x1BD288u: goto label_1bd288;
            case 0x1BD2C0u: goto label_1bd2c0;
            case 0x1BD2F0u: goto label_1bd2f0;
            case 0x1BD360u: goto label_1bd360;
            case 0x1BD398u: goto label_1bd398;
            case 0x1BD408u: goto label_1bd408;
            case 0x1BD448u: goto label_1bd448;
            case 0x1BD490u: goto label_1bd490;
            case 0x1BD4C0u: goto label_1bd4c0;
            case 0x1BD578u: goto label_1bd578;
            case 0x1BD5E0u: goto label_1bd5e0;
            case 0x1BD680u: goto label_1bd680;
            case 0x1BD6B0u: goto label_1bd6b0;
            case 0x1BD6E8u: goto label_1bd6e8;
            case 0x1BD718u: goto label_1bd718;
            case 0x1BD73Cu: goto label_1bd73c;
            case 0x1BD758u: goto label_1bd758;
            case 0x1BD808u: goto label_1bd808;
            case 0x1BD810u: goto label_1bd810;
            case 0x1BD898u: goto label_1bd898;
            case 0x1BD8B4u: goto label_1bd8b4;
            case 0x1BD8C0u: goto label_1bd8c0;
            case 0x1BD958u: goto label_1bd958;
            case 0x1BD95Cu: goto label_1bd95c;
            case 0x1BD998u: goto label_1bd998;
            case 0x1BD99Cu: goto label_1bd99c;
            case 0x1BD9A8u: goto label_1bd9a8;
            case 0x1BD9ACu: goto label_1bd9ac;
            case 0x1BD9C0u: goto label_1bd9c0;
            case 0x1BD9E0u: goto label_1bd9e0;
            case 0x1BDA58u: goto label_1bda58;
            case 0x1BDB10u: goto label_1bdb10;
            case 0x1BDB24u: goto label_1bdb24;
            case 0x1BDB28u: goto label_1bdb28;
            case 0x1BDB2Cu: goto label_1bdb2c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BD520u; }
            if (ctx->pc != 0x1BD520u) { return; }
        }
        }
    }
    ctx->pc = 0x1BD520u;
    // 0x1bd520: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bd520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bd524: 0x8e23cc58  lw          $v1, -0x33A8($s1)
    ctx->pc = 0x1bd524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954072)));
    // 0x1bd528: 0x8c445a28  lw          $a0, 0x5A28($v0)
    ctx->pc = 0x1bd528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23080)));
    // 0x1bd52c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1bd52cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1bd530: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1bd530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1bd534: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1bd534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1bd538: 0xc0617ca  jal         func_185F28
    ctx->pc = 0x1BD538u;
    SET_GPR_U32(ctx, 31, 0x1BD540u);
    ctx->pc = 0x1BD53Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD538u;
            // 0x1bd53c: 0xac43c820  sw          $v1, -0x37E0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294952992), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185F28u;
    if (runtime->hasFunction(0x185F28u)) {
        auto targetFn = runtime->lookupFunction(0x185F28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD540u; }
        if (ctx->pc != 0x1BD540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185F28_0x185f28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD540u; }
        if (ctx->pc != 0x1BD540u) { return; }
    }
    ctx->pc = 0x1BD540u;
    // 0x1bd540: 0x8e25cc58  lw          $a1, -0x33A8($s1)
    ctx->pc = 0x1bd540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954072)));
    // 0x1bd544: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x1bd544u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bd548: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bd548u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bd54c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1bd54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1bd550: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1bd550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bd554: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1bd554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1bd558: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x1bd558u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x1bd55c: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x1bd55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x1bd560: 0x40f809  jalr        $v0
    ctx->pc = 0x1BD560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BD568u);
        ctx->pc = 0x1BD564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD560u;
            // 0x1bd564: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BD568u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BC648u: goto label_1bc648;
            case 0x1BC66Cu: goto label_1bc66c;
            case 0x1BC6B0u: goto label_1bc6b0;
            case 0x1BC708u: goto label_1bc708;
            case 0x1BC788u: goto label_1bc788;
            case 0x1BC7C0u: goto label_1bc7c0;
            case 0x1BC7C8u: goto label_1bc7c8;
            case 0x1BC850u: goto label_1bc850;
            case 0x1BC890u: goto label_1bc890;
            case 0x1BC910u: goto label_1bc910;
            case 0x1BC958u: goto label_1bc958;
            case 0x1BC998u: goto label_1bc998;
            case 0x1BCA90u: goto label_1bca90;
            case 0x1BCAC8u: goto label_1bcac8;
            case 0x1BCAD0u: goto label_1bcad0;
            case 0x1BCB50u: goto label_1bcb50;
            case 0x1BCBA8u: goto label_1bcba8;
            case 0x1BCC40u: goto label_1bcc40;
            case 0x1BCC50u: goto label_1bcc50;
            case 0x1BCC70u: goto label_1bcc70;
            case 0x1BCCB8u: goto label_1bccb8;
            case 0x1BCCD8u: goto label_1bccd8;
            case 0x1BCD08u: goto label_1bcd08;
            case 0x1BCDC0u: goto label_1bcdc0;
            case 0x1BCE78u: goto label_1bce78;
            case 0x1BCEE8u: goto label_1bcee8;
            case 0x1BCF08u: goto label_1bcf08;
            case 0x1BCF28u: goto label_1bcf28;
            case 0x1BCF50u: goto label_1bcf50;
            case 0x1BCF8Cu: goto label_1bcf8c;
            case 0x1BCF90u: goto label_1bcf90;
            case 0x1BCFA4u: goto label_1bcfa4;
            case 0x1BCFD8u: goto label_1bcfd8;
            case 0x1BD018u: goto label_1bd018;
            case 0x1BD048u: goto label_1bd048;
            case 0x1BD088u: goto label_1bd088;
            case 0x1BD0C0u: goto label_1bd0c0;
            case 0x1BD168u: goto label_1bd168;
            case 0x1BD210u: goto label_1bd210;
            case 0x1BD288u: goto label_1bd288;
            case 0x1BD2C0u: goto label_1bd2c0;
            case 0x1BD2F0u: goto label_1bd2f0;
            case 0x1BD360u: goto label_1bd360;
            case 0x1BD398u: goto label_1bd398;
            case 0x1BD408u: goto label_1bd408;
            case 0x1BD448u: goto label_1bd448;
            case 0x1BD490u: goto label_1bd490;
            case 0x1BD4C0u: goto label_1bd4c0;
            case 0x1BD578u: goto label_1bd578;
            case 0x1BD5E0u: goto label_1bd5e0;
            case 0x1BD680u: goto label_1bd680;
            case 0x1BD6B0u: goto label_1bd6b0;
            case 0x1BD6E8u: goto label_1bd6e8;
            case 0x1BD718u: goto label_1bd718;
            case 0x1BD73Cu: goto label_1bd73c;
            case 0x1BD758u: goto label_1bd758;
            case 0x1BD808u: goto label_1bd808;
            case 0x1BD810u: goto label_1bd810;
            case 0x1BD898u: goto label_1bd898;
            case 0x1BD8B4u: goto label_1bd8b4;
            case 0x1BD8C0u: goto label_1bd8c0;
            case 0x1BD958u: goto label_1bd958;
            case 0x1BD95Cu: goto label_1bd95c;
            case 0x1BD998u: goto label_1bd998;
            case 0x1BD99Cu: goto label_1bd99c;
            case 0x1BD9A8u: goto label_1bd9a8;
            case 0x1BD9ACu: goto label_1bd9ac;
            case 0x1BD9C0u: goto label_1bd9c0;
            case 0x1BD9E0u: goto label_1bd9e0;
            case 0x1BDA58u: goto label_1bda58;
            case 0x1BDB10u: goto label_1bdb10;
            case 0x1BDB24u: goto label_1bdb24;
            case 0x1BDB28u: goto label_1bdb28;
            case 0x1BDB2Cu: goto label_1bdb2c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BD568u; }
            if (ctx->pc != 0x1BD568u) { return; }
        }
        }
    }
    ctx->pc = 0x1BD568u;
    // 0x1bd568: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1bd568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1bd56c: 0x1000016e  b           . + 4 + (0x16E << 2)
    ctx->pc = 0x1BD56Cu;
    {
        const bool branch_taken_0x1bd56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD56Cu;
            // 0x1bd570: 0xaea25e68  sw          $v0, 0x5E68($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 24168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd56c) {
            ctx->pc = 0x1BDB28u;
            goto label_1bdb28;
        }
    }
    ctx->pc = 0x1BD574u;
    // 0x1bd574: 0x0  nop
    ctx->pc = 0x1bd574u;
    // NOP
label_1bd578:
    // 0x1bd578: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bd578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bd57c: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x1bd57cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x1bd580: 0x2450e848  addiu       $s0, $v0, -0x17B8
    ctx->pc = 0x1bd580u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1bd584: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x1bd584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1bd588: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1bd588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1bd58c: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x1bd58cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1bd590: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x1bd590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x1bd594: 0x40f809  jalr        $v0
    ctx->pc = 0x1BD594u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BD59Cu);
        ctx->pc = 0x1BD598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD594u;
            // 0x1bd598: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BD59Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BC648u: goto label_1bc648;
            case 0x1BC66Cu: goto label_1bc66c;
            case 0x1BC6B0u: goto label_1bc6b0;
            case 0x1BC708u: goto label_1bc708;
            case 0x1BC788u: goto label_1bc788;
            case 0x1BC7C0u: goto label_1bc7c0;
            case 0x1BC7C8u: goto label_1bc7c8;
            case 0x1BC850u: goto label_1bc850;
            case 0x1BC890u: goto label_1bc890;
            case 0x1BC910u: goto label_1bc910;
            case 0x1BC958u: goto label_1bc958;
            case 0x1BC998u: goto label_1bc998;
            case 0x1BCA90u: goto label_1bca90;
            case 0x1BCAC8u: goto label_1bcac8;
            case 0x1BCAD0u: goto label_1bcad0;
            case 0x1BCB50u: goto label_1bcb50;
            case 0x1BCBA8u: goto label_1bcba8;
            case 0x1BCC40u: goto label_1bcc40;
            case 0x1BCC50u: goto label_1bcc50;
            case 0x1BCC70u: goto label_1bcc70;
            case 0x1BCCB8u: goto label_1bccb8;
            case 0x1BCCD8u: goto label_1bccd8;
            case 0x1BCD08u: goto label_1bcd08;
            case 0x1BCDC0u: goto label_1bcdc0;
            case 0x1BCE78u: goto label_1bce78;
            case 0x1BCEE8u: goto label_1bcee8;
            case 0x1BCF08u: goto label_1bcf08;
            case 0x1BCF28u: goto label_1bcf28;
            case 0x1BCF50u: goto label_1bcf50;
            case 0x1BCF8Cu: goto label_1bcf8c;
            case 0x1BCF90u: goto label_1bcf90;
            case 0x1BCFA4u: goto label_1bcfa4;
            case 0x1BCFD8u: goto label_1bcfd8;
            case 0x1BD018u: goto label_1bd018;
            case 0x1BD048u: goto label_1bd048;
            case 0x1BD088u: goto label_1bd088;
            case 0x1BD0C0u: goto label_1bd0c0;
            case 0x1BD168u: goto label_1bd168;
            case 0x1BD210u: goto label_1bd210;
            case 0x1BD288u: goto label_1bd288;
            case 0x1BD2C0u: goto label_1bd2c0;
            case 0x1BD2F0u: goto label_1bd2f0;
            case 0x1BD360u: goto label_1bd360;
            case 0x1BD398u: goto label_1bd398;
            case 0x1BD408u: goto label_1bd408;
            case 0x1BD448u: goto label_1bd448;
            case 0x1BD490u: goto label_1bd490;
            case 0x1BD4C0u: goto label_1bd4c0;
            case 0x1BD578u: goto label_1bd578;
            case 0x1BD5E0u: goto label_1bd5e0;
            case 0x1BD680u: goto label_1bd680;
            case 0x1BD6B0u: goto label_1bd6b0;
            case 0x1BD6E8u: goto label_1bd6e8;
            case 0x1BD718u: goto label_1bd718;
            case 0x1BD73Cu: goto label_1bd73c;
            case 0x1BD758u: goto label_1bd758;
            case 0x1BD808u: goto label_1bd808;
            case 0x1BD810u: goto label_1bd810;
            case 0x1BD898u: goto label_1bd898;
            case 0x1BD8B4u: goto label_1bd8b4;
            case 0x1BD8C0u: goto label_1bd8c0;
            case 0x1BD958u: goto label_1bd958;
            case 0x1BD95Cu: goto label_1bd95c;
            case 0x1BD998u: goto label_1bd998;
            case 0x1BD99Cu: goto label_1bd99c;
            case 0x1BD9A8u: goto label_1bd9a8;
            case 0x1BD9ACu: goto label_1bd9ac;
            case 0x1BD9C0u: goto label_1bd9c0;
            case 0x1BD9E0u: goto label_1bd9e0;
            case 0x1BDA58u: goto label_1bda58;
            case 0x1BDB10u: goto label_1bdb10;
            case 0x1BDB24u: goto label_1bdb24;
            case 0x1BDB28u: goto label_1bdb28;
            case 0x1BDB2Cu: goto label_1bdb2c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BD59Cu; }
            if (ctx->pc != 0x1BD59Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1BD59Cu;
    // 0x1bd59c: 0xc061688  jal         func_185A20
    ctx->pc = 0x1BD59Cu;
    SET_GPR_U32(ctx, 31, 0x1BD5A4u);
    ctx->pc = 0x1BD5A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD59Cu;
            // 0x1bd5a0: 0x8e245a28  lw          $a0, 0x5A28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 23080)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185A20u;
    if (runtime->hasFunction(0x185A20u)) {
        auto targetFn = runtime->lookupFunction(0x185A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD5A4u; }
        if (ctx->pc != 0x1BD5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185A20_0x185a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD5A4u; }
        if (ctx->pc != 0x1BD5A4u) { return; }
    }
    ctx->pc = 0x1BD5A4u;
    // 0x1bd5a4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1BD5A4u;
    {
        const bool branch_taken_0x1bd5a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD5A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD5A4u;
            // 0x1bd5a8: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd5a4) {
            ctx->pc = 0x1BD5E0u;
            goto label_1bd5e0;
        }
    }
    ctx->pc = 0x1BD5ACu;
    // 0x1bd5ac: 0x8c45cc58  lw          $a1, -0x33A8($v0)
    ctx->pc = 0x1bd5acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954072)));
    // 0x1bd5b0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x1bd5b0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bd5b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bd5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bd5b8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1bd5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1bd5bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1bd5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bd5c0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1bd5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1bd5c4: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x1bd5c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x1bd5c8: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x1bd5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x1bd5cc: 0x40f809  jalr        $v0
    ctx->pc = 0x1BD5CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BD5D4u);
        ctx->pc = 0x1BD5D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD5CCu;
            // 0x1bd5d0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BD5D4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BC648u: goto label_1bc648;
            case 0x1BC66Cu: goto label_1bc66c;
            case 0x1BC6B0u: goto label_1bc6b0;
            case 0x1BC708u: goto label_1bc708;
            case 0x1BC788u: goto label_1bc788;
            case 0x1BC7C0u: goto label_1bc7c0;
            case 0x1BC7C8u: goto label_1bc7c8;
            case 0x1BC850u: goto label_1bc850;
            case 0x1BC890u: goto label_1bc890;
            case 0x1BC910u: goto label_1bc910;
            case 0x1BC958u: goto label_1bc958;
            case 0x1BC998u: goto label_1bc998;
            case 0x1BCA90u: goto label_1bca90;
            case 0x1BCAC8u: goto label_1bcac8;
            case 0x1BCAD0u: goto label_1bcad0;
            case 0x1BCB50u: goto label_1bcb50;
            case 0x1BCBA8u: goto label_1bcba8;
            case 0x1BCC40u: goto label_1bcc40;
            case 0x1BCC50u: goto label_1bcc50;
            case 0x1BCC70u: goto label_1bcc70;
            case 0x1BCCB8u: goto label_1bccb8;
            case 0x1BCCD8u: goto label_1bccd8;
            case 0x1BCD08u: goto label_1bcd08;
            case 0x1BCDC0u: goto label_1bcdc0;
            case 0x1BCE78u: goto label_1bce78;
            case 0x1BCEE8u: goto label_1bcee8;
            case 0x1BCF08u: goto label_1bcf08;
            case 0x1BCF28u: goto label_1bcf28;
            case 0x1BCF50u: goto label_1bcf50;
            case 0x1BCF8Cu: goto label_1bcf8c;
            case 0x1BCF90u: goto label_1bcf90;
            case 0x1BCFA4u: goto label_1bcfa4;
            case 0x1BCFD8u: goto label_1bcfd8;
            case 0x1BD018u: goto label_1bd018;
            case 0x1BD048u: goto label_1bd048;
            case 0x1BD088u: goto label_1bd088;
            case 0x1BD0C0u: goto label_1bd0c0;
            case 0x1BD168u: goto label_1bd168;
            case 0x1BD210u: goto label_1bd210;
            case 0x1BD288u: goto label_1bd288;
            case 0x1BD2C0u: goto label_1bd2c0;
            case 0x1BD2F0u: goto label_1bd2f0;
            case 0x1BD360u: goto label_1bd360;
            case 0x1BD398u: goto label_1bd398;
            case 0x1BD408u: goto label_1bd408;
            case 0x1BD448u: goto label_1bd448;
            case 0x1BD490u: goto label_1bd490;
            case 0x1BD4C0u: goto label_1bd4c0;
            case 0x1BD578u: goto label_1bd578;
            case 0x1BD5E0u: goto label_1bd5e0;
            case 0x1BD680u: goto label_1bd680;
            case 0x1BD6B0u: goto label_1bd6b0;
            case 0x1BD6E8u: goto label_1bd6e8;
            case 0x1BD718u: goto label_1bd718;
            case 0x1BD73Cu: goto label_1bd73c;
            case 0x1BD758u: goto label_1bd758;
            case 0x1BD808u: goto label_1bd808;
            case 0x1BD810u: goto label_1bd810;
            case 0x1BD898u: goto label_1bd898;
            case 0x1BD8B4u: goto label_1bd8b4;
            case 0x1BD8C0u: goto label_1bd8c0;
            case 0x1BD958u: goto label_1bd958;
            case 0x1BD95Cu: goto label_1bd95c;
            case 0x1BD998u: goto label_1bd998;
            case 0x1BD99Cu: goto label_1bd99c;
            case 0x1BD9A8u: goto label_1bd9a8;
            case 0x1BD9ACu: goto label_1bd9ac;
            case 0x1BD9C0u: goto label_1bd9c0;
            case 0x1BD9E0u: goto label_1bd9e0;
            case 0x1BDA58u: goto label_1bda58;
            case 0x1BDB10u: goto label_1bdb10;
            case 0x1BDB24u: goto label_1bdb24;
            case 0x1BDB28u: goto label_1bdb28;
            case 0x1BDB2Cu: goto label_1bdb2c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BD5D4u; }
            if (ctx->pc != 0x1BD5D4u) { return; }
        }
        }
    }
    ctx->pc = 0x1BD5D4u;
    // 0x1bd5d4: 0x10000155  b           . + 4 + (0x155 << 2)
    ctx->pc = 0x1BD5D4u;
    {
        const bool branch_taken_0x1bd5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD5D4u;
            // 0x1bd5d8: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd5d4) {
            ctx->pc = 0x1BDB2Cu;
            goto label_1bdb2c;
        }
    }
    ctx->pc = 0x1BD5DCu;
    // 0x1bd5dc: 0x0  nop
    ctx->pc = 0x1bd5dcu;
    // NOP
label_1bd5e0:
    // 0x1bd5e0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bd5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bd5e4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1bd5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1bd5e8: 0x8c425a58  lw          $v0, 0x5A58($v0)
    ctx->pc = 0x1bd5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23128)));
    // 0x1bd5ec: 0x24635a40  addiu       $v1, $v1, 0x5A40
    ctx->pc = 0x1bd5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23104));
    // 0x1bd5f0: 0x8e245a28  lw          $a0, 0x5A28($s1)
    ctx->pc = 0x1bd5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 23080)));
    // 0x1bd5f4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1bd5f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bd5f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bd5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bd5fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bd5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bd600: 0x8c850054  lw          $a1, 0x54($a0)
    ctx->pc = 0x1bd600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x1bd604: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1bd604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bd608: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1bd608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd60c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1bd60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bd610: 0xa4660006  sh          $a2, 0x6($v1)
    ctx->pc = 0x1bd610u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 6));
    // 0x1bd614: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1bd614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1bd618: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1bd618u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1bd61c: 0xc06f954  jal         func_1BE550
    ctx->pc = 0x1BD61Cu;
    SET_GPR_U32(ctx, 31, 0x1BD624u);
    ctx->pc = 0x1BD620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD61Cu;
            // 0x1bd620: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE550u;
    if (runtime->hasFunction(0x1BE550u)) {
        auto targetFn = runtime->lookupFunction(0x1BE550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD624u; }
        if (ctx->pc != 0x1BD624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE550_0x1be550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD624u; }
        if (ctx->pc != 0x1BD624u) { return; }
    }
    ctx->pc = 0x1BD624u;
    // 0x1bd624: 0xc05ea2e  jal         func_17A8B8
    ctx->pc = 0x1BD624u;
    SET_GPR_U32(ctx, 31, 0x1BD62Cu);
    ctx->pc = 0x17A8B8u;
    if (runtime->hasFunction(0x17A8B8u)) {
        auto targetFn = runtime->lookupFunction(0x17A8B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD62Cu; }
        if (ctx->pc != 0x1BD62Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A8B8_0x17a8b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD62Cu; }
        if (ctx->pc != 0x1BD62Cu) { return; }
    }
    ctx->pc = 0x1BD62Cu;
    // 0x1bd62c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1bd62cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1bd630: 0xac40c820  sw          $zero, -0x37E0($v0)
    ctx->pc = 0x1bd630u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294952992), GPR_U32(ctx, 0));
    // 0x1bd634: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x1bd634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1bd638: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1bd638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1bd63c: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x1bd63cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1bd640: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x1bd640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x1bd644: 0x40f809  jalr        $v0
    ctx->pc = 0x1BD644u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BD64Cu);
        ctx->pc = 0x1BD648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD644u;
            // 0x1bd648: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BD64Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BC648u: goto label_1bc648;
            case 0x1BC66Cu: goto label_1bc66c;
            case 0x1BC6B0u: goto label_1bc6b0;
            case 0x1BC708u: goto label_1bc708;
            case 0x1BC788u: goto label_1bc788;
            case 0x1BC7C0u: goto label_1bc7c0;
            case 0x1BC7C8u: goto label_1bc7c8;
            case 0x1BC850u: goto label_1bc850;
            case 0x1BC890u: goto label_1bc890;
            case 0x1BC910u: goto label_1bc910;
            case 0x1BC958u: goto label_1bc958;
            case 0x1BC998u: goto label_1bc998;
            case 0x1BCA90u: goto label_1bca90;
            case 0x1BCAC8u: goto label_1bcac8;
            case 0x1BCAD0u: goto label_1bcad0;
            case 0x1BCB50u: goto label_1bcb50;
            case 0x1BCBA8u: goto label_1bcba8;
            case 0x1BCC40u: goto label_1bcc40;
            case 0x1BCC50u: goto label_1bcc50;
            case 0x1BCC70u: goto label_1bcc70;
            case 0x1BCCB8u: goto label_1bccb8;
            case 0x1BCCD8u: goto label_1bccd8;
            case 0x1BCD08u: goto label_1bcd08;
            case 0x1BCDC0u: goto label_1bcdc0;
            case 0x1BCE78u: goto label_1bce78;
            case 0x1BCEE8u: goto label_1bcee8;
            case 0x1BCF08u: goto label_1bcf08;
            case 0x1BCF28u: goto label_1bcf28;
            case 0x1BCF50u: goto label_1bcf50;
            case 0x1BCF8Cu: goto label_1bcf8c;
            case 0x1BCF90u: goto label_1bcf90;
            case 0x1BCFA4u: goto label_1bcfa4;
            case 0x1BCFD8u: goto label_1bcfd8;
            case 0x1BD018u: goto label_1bd018;
            case 0x1BD048u: goto label_1bd048;
            case 0x1BD088u: goto label_1bd088;
            case 0x1BD0C0u: goto label_1bd0c0;
            case 0x1BD168u: goto label_1bd168;
            case 0x1BD210u: goto label_1bd210;
            case 0x1BD288u: goto label_1bd288;
            case 0x1BD2C0u: goto label_1bd2c0;
            case 0x1BD2F0u: goto label_1bd2f0;
            case 0x1BD360u: goto label_1bd360;
            case 0x1BD398u: goto label_1bd398;
            case 0x1BD408u: goto label_1bd408;
            case 0x1BD448u: goto label_1bd448;
            case 0x1BD490u: goto label_1bd490;
            case 0x1BD4C0u: goto label_1bd4c0;
            case 0x1BD578u: goto label_1bd578;
            case 0x1BD5E0u: goto label_1bd5e0;
            case 0x1BD680u: goto label_1bd680;
            case 0x1BD6B0u: goto label_1bd6b0;
            case 0x1BD6E8u: goto label_1bd6e8;
            case 0x1BD718u: goto label_1bd718;
            case 0x1BD73Cu: goto label_1bd73c;
            case 0x1BD758u: goto label_1bd758;
            case 0x1BD808u: goto label_1bd808;
            case 0x1BD810u: goto label_1bd810;
            case 0x1BD898u: goto label_1bd898;
            case 0x1BD8B4u: goto label_1bd8b4;
            case 0x1BD8C0u: goto label_1bd8c0;
            case 0x1BD958u: goto label_1bd958;
            case 0x1BD95Cu: goto label_1bd95c;
            case 0x1BD998u: goto label_1bd998;
            case 0x1BD99Cu: goto label_1bd99c;
            case 0x1BD9A8u: goto label_1bd9a8;
            case 0x1BD9ACu: goto label_1bd9ac;
            case 0x1BD9C0u: goto label_1bd9c0;
            case 0x1BD9E0u: goto label_1bd9e0;
            case 0x1BDA58u: goto label_1bda58;
            case 0x1BDB10u: goto label_1bdb10;
            case 0x1BDB24u: goto label_1bdb24;
            case 0x1BDB28u: goto label_1bdb28;
            case 0x1BDB2Cu: goto label_1bdb2c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BD64Cu; }
            if (ctx->pc != 0x1BD64Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1BD64Cu;
    // 0x1bd64c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1bd64cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1bd650: 0x8c45cc58  lw          $a1, -0x33A8($v0)
    ctx->pc = 0x1bd650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954072)));
    // 0x1bd654: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x1bd654u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bd658: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bd658u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bd65c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1bd65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1bd660: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1bd660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bd664: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1bd664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1bd668: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x1bd668u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x1bd66c: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x1bd66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x1bd670: 0x40f809  jalr        $v0
    ctx->pc = 0x1BD670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BD678u);
        ctx->pc = 0x1BD674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD670u;
            // 0x1bd674: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BD678u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BC648u: goto label_1bc648;
            case 0x1BC66Cu: goto label_1bc66c;
            case 0x1BC6B0u: goto label_1bc6b0;
            case 0x1BC708u: goto label_1bc708;
            case 0x1BC788u: goto label_1bc788;
            case 0x1BC7C0u: goto label_1bc7c0;
            case 0x1BC7C8u: goto label_1bc7c8;
            case 0x1BC850u: goto label_1bc850;
            case 0x1BC890u: goto label_1bc890;
            case 0x1BC910u: goto label_1bc910;
            case 0x1BC958u: goto label_1bc958;
            case 0x1BC998u: goto label_1bc998;
            case 0x1BCA90u: goto label_1bca90;
            case 0x1BCAC8u: goto label_1bcac8;
            case 0x1BCAD0u: goto label_1bcad0;
            case 0x1BCB50u: goto label_1bcb50;
            case 0x1BCBA8u: goto label_1bcba8;
            case 0x1BCC40u: goto label_1bcc40;
            case 0x1BCC50u: goto label_1bcc50;
            case 0x1BCC70u: goto label_1bcc70;
            case 0x1BCCB8u: goto label_1bccb8;
            case 0x1BCCD8u: goto label_1bccd8;
            case 0x1BCD08u: goto label_1bcd08;
            case 0x1BCDC0u: goto label_1bcdc0;
            case 0x1BCE78u: goto label_1bce78;
            case 0x1BCEE8u: goto label_1bcee8;
            case 0x1BCF08u: goto label_1bcf08;
            case 0x1BCF28u: goto label_1bcf28;
            case 0x1BCF50u: goto label_1bcf50;
            case 0x1BCF8Cu: goto label_1bcf8c;
            case 0x1BCF90u: goto label_1bcf90;
            case 0x1BCFA4u: goto label_1bcfa4;
            case 0x1BCFD8u: goto label_1bcfd8;
            case 0x1BD018u: goto label_1bd018;
            case 0x1BD048u: goto label_1bd048;
            case 0x1BD088u: goto label_1bd088;
            case 0x1BD0C0u: goto label_1bd0c0;
            case 0x1BD168u: goto label_1bd168;
            case 0x1BD210u: goto label_1bd210;
            case 0x1BD288u: goto label_1bd288;
            case 0x1BD2C0u: goto label_1bd2c0;
            case 0x1BD2F0u: goto label_1bd2f0;
            case 0x1BD360u: goto label_1bd360;
            case 0x1BD398u: goto label_1bd398;
            case 0x1BD408u: goto label_1bd408;
            case 0x1BD448u: goto label_1bd448;
            case 0x1BD490u: goto label_1bd490;
            case 0x1BD4C0u: goto label_1bd4c0;
            case 0x1BD578u: goto label_1bd578;
            case 0x1BD5E0u: goto label_1bd5e0;
            case 0x1BD680u: goto label_1bd680;
            case 0x1BD6B0u: goto label_1bd6b0;
            case 0x1BD6E8u: goto label_1bd6e8;
            case 0x1BD718u: goto label_1bd718;
            case 0x1BD73Cu: goto label_1bd73c;
            case 0x1BD758u: goto label_1bd758;
            case 0x1BD808u: goto label_1bd808;
            case 0x1BD810u: goto label_1bd810;
            case 0x1BD898u: goto label_1bd898;
            case 0x1BD8B4u: goto label_1bd8b4;
            case 0x1BD8C0u: goto label_1bd8c0;
            case 0x1BD958u: goto label_1bd958;
            case 0x1BD95Cu: goto label_1bd95c;
            case 0x1BD998u: goto label_1bd998;
            case 0x1BD99Cu: goto label_1bd99c;
            case 0x1BD9A8u: goto label_1bd9a8;
            case 0x1BD9ACu: goto label_1bd9ac;
            case 0x1BD9C0u: goto label_1bd9c0;
            case 0x1BD9E0u: goto label_1bd9e0;
            case 0x1BDA58u: goto label_1bda58;
            case 0x1BDB10u: goto label_1bdb10;
            case 0x1BDB24u: goto label_1bdb24;
            case 0x1BDB28u: goto label_1bdb28;
            case 0x1BDB2Cu: goto label_1bdb2c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BD678u; }
            if (ctx->pc != 0x1BD678u) { return; }
        }
        }
    }
    ctx->pc = 0x1BD678u;
    // 0x1bd678: 0x1000012b  b           . + 4 + (0x12B << 2)
    ctx->pc = 0x1BD678u;
    {
        const bool branch_taken_0x1bd678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD67Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD678u;
            // 0x1bd67c: 0xaea05e68  sw          $zero, 0x5E68($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 24168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd678) {
            ctx->pc = 0x1BDB28u;
            goto label_1bdb28;
        }
    }
    ctx->pc = 0x1BD680u;
label_1bd680:
    // 0x1bd680: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1bd680u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1bd684: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1bd684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1bd688: 0x8ca2cc44  lw          $v0, -0x33BC($a1)
    ctx->pc = 0x1bd688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294954052)));
    // 0x1bd68c: 0x24635a70  addiu       $v1, $v1, 0x5A70
    ctx->pc = 0x1bd68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23152));
    // 0x1bd690: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1bd690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bd694: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1bd694u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1bd698: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1bd698u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bd69c: 0x28820020  slti        $v0, $a0, 0x20
    ctx->pc = 0x1bd69cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1bd6a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD6A0u;
    {
        const bool branch_taken_0x1bd6a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD6A0u;
            // 0x1bd6a4: 0xaca4cc44  sw          $a0, -0x33BC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294954052), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd6a0) {
            ctx->pc = 0x1BD6B0u;
            goto label_1bd6b0;
        }
    }
    ctx->pc = 0x1BD6A8u;
    // 0x1bd6a8: 0xaca0cc44  sw          $zero, -0x33BC($a1)
    ctx->pc = 0x1bd6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294954052), GPR_U32(ctx, 0));
    // 0x1bd6ac: 0x0  nop
    ctx->pc = 0x1bd6acu;
    // NOP
label_1bd6b0:
    // 0x1bd6b0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1bd6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1bd6b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bd6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd6b8: 0x8c62cc40  lw          $v0, -0x33C0($v1)
    ctx->pc = 0x1bd6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954048)));
    // 0x1bd6bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bd6bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd6c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bd6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bd6c4: 0xc08b246  jal         func_22C918
    ctx->pc = 0x1BD6C4u;
    SET_GPR_U32(ctx, 31, 0x1BD6CCu);
    ctx->pc = 0x1BD6C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD6C4u;
            // 0x1bd6c8: 0xac62cc40  sw          $v0, -0x33C0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954048), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22C918u;
    if (runtime->hasFunction(0x22C918u)) {
        auto targetFn = runtime->lookupFunction(0x22C918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD6CCu; }
        if (ctx->pc != 0x1BD6CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022C918_0x22c918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD6CCu; }
        if (ctx->pc != 0x1BD6CCu) { return; }
    }
    ctx->pc = 0x1BD6CCu;
    // 0x1bd6cc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1bd6ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd6d0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1bd6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1bd6d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bd6d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd6d8: 0xc06ec3e  jal         func_1BB0F8
    ctx->pc = 0x1BD6D8u;
    SET_GPR_U32(ctx, 31, 0x1BD6E0u);
    ctx->pc = 0x1BD6DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD6D8u;
            // 0x1bd6dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB0F8u;
    if (runtime->hasFunction(0x1BB0F8u)) {
        auto targetFn = runtime->lookupFunction(0x1BB0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD6E0u; }
        if (ctx->pc != 0x1BD6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1bb0f8_0x1bb1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD6E0u; }
        if (ctx->pc != 0x1BD6E0u) { return; }
    }
    ctx->pc = 0x1BD6E0u;
    // 0x1bd6e0: 0x10000111  b           . + 4 + (0x111 << 2)
    ctx->pc = 0x1BD6E0u;
    {
        const bool branch_taken_0x1bd6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD6E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD6E0u;
            // 0x1bd6e4: 0xaea05e68  sw          $zero, 0x5E68($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 24168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd6e0) {
            ctx->pc = 0x1BDB28u;
            goto label_1bdb28;
        }
    }
    ctx->pc = 0x1BD6E8u;
label_1bd6e8:
    // 0x1bd6e8: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1bd6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1bd6ec: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1bd6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1bd6f0: 0x8ca2cc44  lw          $v0, -0x33BC($a1)
    ctx->pc = 0x1bd6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294954052)));
    // 0x1bd6f4: 0x24635a70  addiu       $v1, $v1, 0x5A70
    ctx->pc = 0x1bd6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23152));
    // 0x1bd6f8: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1bd6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bd6fc: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1bd6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1bd700: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1bd700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bd704: 0x28820020  slti        $v0, $a0, 0x20
    ctx->pc = 0x1bd704u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1bd708: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD708u;
    {
        const bool branch_taken_0x1bd708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD70Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD708u;
            // 0x1bd70c: 0xaca4cc44  sw          $a0, -0x33BC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294954052), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd708) {
            ctx->pc = 0x1BD718u;
            goto label_1bd718;
        }
    }
    ctx->pc = 0x1BD710u;
    // 0x1bd710: 0xaca0cc44  sw          $zero, -0x33BC($a1)
    ctx->pc = 0x1bd710u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294954052), GPR_U32(ctx, 0));
    // 0x1bd714: 0x0  nop
    ctx->pc = 0x1bd714u;
    // NOP
label_1bd718:
    // 0x1bd718: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1bd718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1bd71c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1bd71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd720: 0x8c62cc40  lw          $v0, -0x33C0($v1)
    ctx->pc = 0x1bd720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954048)));
    // 0x1bd724: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bd724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd728: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bd728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bd72c: 0xc08b246  jal         func_22C918
    ctx->pc = 0x1BD72Cu;
    SET_GPR_U32(ctx, 31, 0x1BD734u);
    ctx->pc = 0x1BD730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD72Cu;
            // 0x1bd730: 0xac62cc40  sw          $v0, -0x33C0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954048), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22C918u;
    if (runtime->hasFunction(0x22C918u)) {
        auto targetFn = runtime->lookupFunction(0x22C918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD734u; }
        if (ctx->pc != 0x1BD734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022C918_0x22c918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD734u; }
        if (ctx->pc != 0x1BD734u) { return; }
    }
    ctx->pc = 0x1BD734u;
    // 0x1bd734: 0x100000fc  b           . + 4 + (0xFC << 2)
    ctx->pc = 0x1BD734u;
    {
        const bool branch_taken_0x1bd734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD734u;
            // 0x1bd738: 0xaea05e68  sw          $zero, 0x5E68($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 24168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd734) {
            ctx->pc = 0x1BDB28u;
            goto label_1bdb28;
        }
    }
    ctx->pc = 0x1BD73Cu;
label_1bd73c:
    // 0x1bd73c: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1bd73cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x1bd740: 0x8c82cc44  lw          $v0, -0x33BC($a0)
    ctx->pc = 0x1bd740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954052)));
    // 0x1bd744: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bd744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bd748: 0x28430020  slti        $v1, $v0, 0x20
    ctx->pc = 0x1bd748u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1bd74c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BD74Cu;
    {
        const bool branch_taken_0x1bd74c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD74Cu;
            // 0x1bd750: 0xac82cc44  sw          $v0, -0x33BC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294954052), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd74c) {
            ctx->pc = 0x1BD758u;
            goto label_1bd758;
        }
    }
    ctx->pc = 0x1BD754u;
    // 0x1bd754: 0xac80cc44  sw          $zero, -0x33BC($a0)
    ctx->pc = 0x1bd754u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294954052), GPR_U32(ctx, 0));
label_1bd758:
    // 0x1bd758: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1bd758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1bd75c: 0x3c120033  lui         $s2, 0x33
    ctx->pc = 0x1bd75cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
    // 0x1bd760: 0x8c62cc40  lw          $v0, -0x33C0($v1)
    ctx->pc = 0x1bd760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954048)));
    // 0x1bd764: 0x3c10002b  lui         $s0, 0x2B
    ctx->pc = 0x1bd764u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)43 << 16));
    // 0x1bd768: 0x26105a28  addiu       $s0, $s0, 0x5A28
    ctx->pc = 0x1bd768u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23080));
    // 0x1bd76c: 0xae405a58  sw          $zero, 0x5A58($s2)
    ctx->pc = 0x1bd76cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 23128), GPR_U32(ctx, 0));
    // 0x1bd770: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bd770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bd774: 0xac62cc40  sw          $v0, -0x33C0($v1)
    ctx->pc = 0x1bd774u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954048), GPR_U32(ctx, 2));
    // 0x1bd778: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x1bd778u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x1bd77c: 0x8d035280  lw          $v1, 0x5280($t0)
    ctx->pc = 0x1bd77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 21120)));
    // 0x1bd780: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1bd780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1bd784: 0x8c46cc6c  lw          $a2, -0x3394($v0)
    ctx->pc = 0x1bd784u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954092)));
    // 0x1bd788: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1bd788u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1bd78c: 0x8c620068  lw          $v0, 0x68($v1)
    ctx->pc = 0x1bd78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1bd790: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x1bd790u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
    // 0x1bd794: 0xaca6c80c  sw          $a2, -0x37F4($a1)
    ctx->pc = 0x1bd794u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294952972), GPR_U32(ctx, 6));
    // 0x1bd798: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1bd798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd79c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1bd79cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1bd7a0: 0xac600064  sw          $zero, 0x64($v1)
    ctx->pc = 0x1bd7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 0));
    // 0x1bd7a4: 0xac620068  sw          $v0, 0x68($v1)
    ctx->pc = 0x1bd7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 2));
    // 0x1bd7a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bd7a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd7ac: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1bd7acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1bd7b0: 0xace0c808  sw          $zero, -0x37F8($a3)
    ctx->pc = 0x1bd7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294952968), GPR_U32(ctx, 0));
    // 0x1bd7b4: 0x25115280  addiu       $s1, $t0, 0x5280
    ctx->pc = 0x1bd7b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 8), 21120));
    // 0x1bd7b8: 0xc0a274e  jal         func_289D38
    ctx->pc = 0x1BD7B8u;
    SET_GPR_U32(ctx, 31, 0x1BD7C0u);
    ctx->pc = 0x1BD7BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD7B8u;
            // 0x1bd7bc: 0xac600060  sw          $zero, 0x60($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289D38u;
    if (runtime->hasFunction(0x289D38u)) {
        auto targetFn = runtime->lookupFunction(0x289D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD7C0u; }
        if (ctx->pc != 0x1BD7C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289d38_0x289f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD7C0u; }
        if (ctx->pc != 0x1BD7C0u) { return; }
    }
    ctx->pc = 0x1BD7C0u;
    // 0x1bd7c0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bd7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bd7c4: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1bd7c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x1bd7c8: 0x8c445a28  lw          $a0, 0x5A28($v0)
    ctx->pc = 0x1bd7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23080)));
    // 0x1bd7cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bd7ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd7d0: 0xc0617ca  jal         func_185F28
    ctx->pc = 0x1BD7D0u;
    SET_GPR_U32(ctx, 31, 0x1BD7D8u);
    ctx->pc = 0x1BD7D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD7D0u;
            // 0x1bd7d4: 0x34c60010  ori         $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
    ctx->pc = 0x185F28u;
    if (runtime->hasFunction(0x185F28u)) {
        auto targetFn = runtime->lookupFunction(0x185F28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD7D8u; }
        if (ctx->pc != 0x1BD7D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185F28_0x185f28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD7D8u; }
        if (ctx->pc != 0x1BD7D8u) { return; }
    }
    ctx->pc = 0x1BD7D8u;
    // 0x1bd7d8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BD7D8u;
    {
        const bool branch_taken_0x1bd7d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD7DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD7D8u;
            // 0x1bd7dc: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd7d8) {
            ctx->pc = 0x1BD808u;
            goto label_1bd808;
        }
    }
    ctx->pc = 0x1BD7E0u;
    // 0x1bd7e0: 0x8e425a58  lw          $v0, 0x5A58($s2)
    ctx->pc = 0x1bd7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 23128)));
    // 0x1bd7e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bd7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bd7e8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1bd7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1bd7ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bd7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bd7f0: 0xac40005c  sw          $zero, 0x5C($v0)
    ctx->pc = 0x1bd7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 0));
    // 0x1bd7f4: 0xac400068  sw          $zero, 0x68($v0)
    ctx->pc = 0x1bd7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 0));
    // 0x1bd7f8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bd7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bd7fc: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x1BD7FCu;
    {
        const bool branch_taken_0x1bd7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD7FCu;
            // 0x1bd800: 0x8c43e8b4  lw          $v1, -0x174C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd7fc) {
            ctx->pc = 0x1BDB10u;
            goto label_1bdb10;
        }
    }
    ctx->pc = 0x1BD804u;
    // 0x1bd804: 0x0  nop
    ctx->pc = 0x1bd804u;
    // NOP
label_1bd808:
    // 0x1bd808: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x1BD808u;
    {
        const bool branch_taken_0x1bd808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD808u;
            // 0x1bd80c: 0xaea25e68  sw          $v0, 0x5E68($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 24168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd808) {
            ctx->pc = 0x1BDB28u;
            goto label_1bdb28;
        }
    }
    ctx->pc = 0x1BD810u;
label_1bd810:
    // 0x1bd810: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x1bd810u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x1bd814: 0xc061688  jal         func_185A20
    ctx->pc = 0x1BD814u;
    SET_GPR_U32(ctx, 31, 0x1BD81Cu);
    ctx->pc = 0x1BD818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD814u;
            // 0x1bd818: 0x8e045a28  lw          $a0, 0x5A28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23080)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185A20u;
    if (runtime->hasFunction(0x185A20u)) {
        auto targetFn = runtime->lookupFunction(0x185A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD81Cu; }
        if (ctx->pc != 0x1BD81Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185A20_0x185a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD81Cu; }
        if (ctx->pc != 0x1BD81Cu) { return; }
    }
    ctx->pc = 0x1BD81Cu;
    // 0x1bd81c: 0x544000c3  bnel        $v0, $zero, . + 4 + (0xC3 << 2)
    ctx->pc = 0x1BD81Cu;
    {
        const bool branch_taken_0x1bd81c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd81c) {
            ctx->pc = 0x1BD820u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD81Cu;
            // 0x1bd820: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BDB2Cu;
            goto label_1bdb2c;
        }
    }
    ctx->pc = 0x1BD824u;
    // 0x1bd824: 0x3c170033  lui         $s7, 0x33
    ctx->pc = 0x1bd824u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)51 << 16));
    // 0x1bd828: 0x3c160033  lui         $s6, 0x33
    ctx->pc = 0x1bd828u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)51 << 16));
    // 0x1bd82c: 0x8ee45a58  lw          $a0, 0x5A58($s7)
    ctx->pc = 0x1bd82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 23128)));
    // 0x1bd830: 0x26c35280  addiu       $v1, $s6, 0x5280
    ctx->pc = 0x1bd830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 21120));
    // 0x1bd834: 0x8e055a28  lw          $a1, 0x5A28($s0)
    ctx->pc = 0x1bd834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23080)));
    // 0x1bd838: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1bd838u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1bd83c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bd83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bd840: 0x8ca50054  lw          $a1, 0x54($a1)
    ctx->pc = 0x1bd840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x1bd844: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1bd844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bd848: 0x8c620068  lw          $v0, 0x68($v1)
    ctx->pc = 0x1bd848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1bd84c: 0xac65005c  sw          $a1, 0x5C($v1)
    ctx->pc = 0x1bd84cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 5));
    // 0x1bd850: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x1bd850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x1bd854: 0xc06ee6e  jal         func_1BB9B8
    ctx->pc = 0x1BD854u;
    SET_GPR_U32(ctx, 31, 0x1BD85Cu);
    ctx->pc = 0x1BD858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD854u;
            // 0x1bd858: 0xac620068  sw          $v0, 0x68($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB9B8u;
    if (runtime->hasFunction(0x1BB9B8u)) {
        auto targetFn = runtime->lookupFunction(0x1BB9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD85Cu; }
        if (ctx->pc != 0x1BD85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB9B8_0x1bb9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD85Cu; }
        if (ctx->pc != 0x1BD85Cu) { return; }
    }
    ctx->pc = 0x1BD85Cu;
    // 0x1bd85c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bd85cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bd860: 0x8c42e84c  lw          $v0, -0x17B4($v0)
    ctx->pc = 0x1bd860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x1bd864: 0x8c4400d4  lw          $a0, 0xD4($v0)
    ctx->pc = 0x1bd864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x1bd868: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1bd868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1bd86c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1bd86cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1bd870: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x1bd870u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1bd874: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1bd874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1bd878: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1bd878u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1bd87c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bd87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bd880: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bd880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bd884: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1bd884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1bd888: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1bd888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bd88c: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1bd88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1bd890: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BD890u;
    {
        const bool branch_taken_0x1bd890 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD890u;
            // 0x1bd894: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd890) {
            ctx->pc = 0x1BD8B4u;
            goto label_1bd8b4;
        }
    }
    ctx->pc = 0x1BD898u;
label_1bd898:
    // 0x1bd898: 0x2462fff8  addiu       $v0, $v1, -0x8
    ctx->pc = 0x1bd898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x1bd89c: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x1bd89cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1bd8a0: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x1bd8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1bd8a4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1bd8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bd8a8: 0x0  nop
    ctx->pc = 0x1bd8a8u;
    // NOP
    // 0x1bd8ac: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1BD8ACu;
    {
        const bool branch_taken_0x1bd8ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD8B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD8ACu;
            // 0x1bd8b0: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd8ac) {
            ctx->pc = 0x1BD898u;
            runtime->cooperativeGuestYield();
            goto label_1bd898;
        }
    }
    ctx->pc = 0x1BD8B4u;
label_1bd8b4:
    // 0x1bd8b4: 0x1a60003c  blez        $s3, . + 4 + (0x3C << 2)
    ctx->pc = 0x1BD8B4u;
    {
        const bool branch_taken_0x1bd8b4 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1BD8B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD8B4u;
            // 0x1bd8b8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd8b4) {
            ctx->pc = 0x1BD9A8u;
            goto label_1bd9a8;
        }
    }
    ctx->pc = 0x1BD8BCu;
    // 0x1bd8bc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bd8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_1bd8c0:
    // 0x1bd8c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bd8c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd8c4: 0x2451e848  addiu       $s1, $v0, -0x17B8
    ctx->pc = 0x1bd8c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1bd8c8: 0xc04d814  jal         func_136050
    ctx->pc = 0x1BD8C8u;
    SET_GPR_U32(ctx, 31, 0x1BD8D0u);
    ctx->pc = 0x1BD8CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD8C8u;
            // 0x1bd8cc: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136050u;
    if (runtime->hasFunction(0x136050u)) {
        auto targetFn = runtime->lookupFunction(0x136050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD8D0u; }
        if (ctx->pc != 0x1BD8D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_136050_0x136260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD8D0u; }
        if (ctx->pc != 0x1BD8D0u) { return; }
    }
    ctx->pc = 0x1BD8D0u;
    // 0x1bd8d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1bd8d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd8d4: 0x12400030  beqz        $s2, . + 4 + (0x30 << 2)
    ctx->pc = 0x1BD8D4u;
    {
        const bool branch_taken_0x1bd8d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD8D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD8D4u;
            // 0x1bd8d8: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd8d4) {
            ctx->pc = 0x1BD998u;
            goto label_1bd998;
        }
    }
    ctx->pc = 0x1BD8DCu;
    // 0x1bd8dc: 0x2454ec58  addiu       $s4, $v0, -0x13A8
    ctx->pc = 0x1bd8dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962264));
    // 0x1bd8e0: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x1bd8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x1bd8e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bd8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bd8e8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1bd8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1bd8ec: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x1bd8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1bd8f0: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1BD8F0u;
    {
        const bool branch_taken_0x1bd8f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD8F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD8F0u;
            // 0x1bd8f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd8f0) {
            ctx->pc = 0x1BD998u;
            goto label_1bd998;
        }
    }
    ctx->pc = 0x1BD8F8u;
    // 0x1bd8f8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1bd8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1bd8fc: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1bd8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1bd900: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1bd900u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1bd904: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1bd904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1bd908: 0x40f809  jalr        $v0
    ctx->pc = 0x1BD908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BD910u);
        ctx->pc = 0x1BD90Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD908u;
            // 0x1bd90c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BD910u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BC648u: goto label_1bc648;
            case 0x1BC66Cu: goto label_1bc66c;
            case 0x1BC6B0u: goto label_1bc6b0;
            case 0x1BC708u: goto label_1bc708;
            case 0x1BC788u: goto label_1bc788;
            case 0x1BC7C0u: goto label_1bc7c0;
            case 0x1BC7C8u: goto label_1bc7c8;
            case 0x1BC850u: goto label_1bc850;
            case 0x1BC890u: goto label_1bc890;
            case 0x1BC910u: goto label_1bc910;
            case 0x1BC958u: goto label_1bc958;
            case 0x1BC998u: goto label_1bc998;
            case 0x1BCA90u: goto label_1bca90;
            case 0x1BCAC8u: goto label_1bcac8;
            case 0x1BCAD0u: goto label_1bcad0;
            case 0x1BCB50u: goto label_1bcb50;
            case 0x1BCBA8u: goto label_1bcba8;
            case 0x1BCC40u: goto label_1bcc40;
            case 0x1BCC50u: goto label_1bcc50;
            case 0x1BCC70u: goto label_1bcc70;
            case 0x1BCCB8u: goto label_1bccb8;
            case 0x1BCCD8u: goto label_1bccd8;
            case 0x1BCD08u: goto label_1bcd08;
            case 0x1BCDC0u: goto label_1bcdc0;
            case 0x1BCE78u: goto label_1bce78;
            case 0x1BCEE8u: goto label_1bcee8;
            case 0x1BCF08u: goto label_1bcf08;
            case 0x1BCF28u: goto label_1bcf28;
            case 0x1BCF50u: goto label_1bcf50;
            case 0x1BCF8Cu: goto label_1bcf8c;
            case 0x1BCF90u: goto label_1bcf90;
            case 0x1BCFA4u: goto label_1bcfa4;
            case 0x1BCFD8u: goto label_1bcfd8;
            case 0x1BD018u: goto label_1bd018;
            case 0x1BD048u: goto label_1bd048;
            case 0x1BD088u: goto label_1bd088;
            case 0x1BD0C0u: goto label_1bd0c0;
            case 0x1BD168u: goto label_1bd168;
            case 0x1BD210u: goto label_1bd210;
            case 0x1BD288u: goto label_1bd288;
            case 0x1BD2C0u: goto label_1bd2c0;
            case 0x1BD2F0u: goto label_1bd2f0;
            case 0x1BD360u: goto label_1bd360;
            case 0x1BD398u: goto label_1bd398;
            case 0x1BD408u: goto label_1bd408;
            case 0x1BD448u: goto label_1bd448;
            case 0x1BD490u: goto label_1bd490;
            case 0x1BD4C0u: goto label_1bd4c0;
            case 0x1BD578u: goto label_1bd578;
            case 0x1BD5E0u: goto label_1bd5e0;
            case 0x1BD680u: goto label_1bd680;
            case 0x1BD6B0u: goto label_1bd6b0;
            case 0x1BD6E8u: goto label_1bd6e8;
            case 0x1BD718u: goto label_1bd718;
            case 0x1BD73Cu: goto label_1bd73c;
            case 0x1BD758u: goto label_1bd758;
            case 0x1BD808u: goto label_1bd808;
            case 0x1BD810u: goto label_1bd810;
            case 0x1BD898u: goto label_1bd898;
            case 0x1BD8B4u: goto label_1bd8b4;
            case 0x1BD8C0u: goto label_1bd8c0;
            case 0x1BD958u: goto label_1bd958;
            case 0x1BD95Cu: goto label_1bd95c;
            case 0x1BD998u: goto label_1bd998;
            case 0x1BD99Cu: goto label_1bd99c;
            case 0x1BD9A8u: goto label_1bd9a8;
            case 0x1BD9ACu: goto label_1bd9ac;
            case 0x1BD9C0u: goto label_1bd9c0;
            case 0x1BD9E0u: goto label_1bd9e0;
            case 0x1BDA58u: goto label_1bda58;
            case 0x1BDB10u: goto label_1bdb10;
            case 0x1BDB24u: goto label_1bdb24;
            case 0x1BDB28u: goto label_1bdb28;
            case 0x1BDB2Cu: goto label_1bdb2c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BD910u; }
            if (ctx->pc != 0x1BD910u) { return; }
        }
        }
    }
    ctx->pc = 0x1BD910u;
    // 0x1bd910: 0x8ee35a58  lw          $v1, 0x5A58($s7)
    ctx->pc = 0x1bd910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 23128)));
    // 0x1bd914: 0x26c45280  addiu       $a0, $s6, 0x5280
    ctx->pc = 0x1bd914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 21120));
    // 0x1bd918: 0x8c450088  lw          $a1, 0x88($v0)
    ctx->pc = 0x1bd918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1bd91c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bd91cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bd920: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bd920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bd924: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1bd924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bd928: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x1bd928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1bd92c: 0x14a2001b  bne         $a1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1BD92Cu;
    {
        const bool branch_taken_0x1bd92c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BD930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD92Cu;
            // 0x1bd930: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd92c) {
            ctx->pc = 0x1BD99Cu;
            goto label_1bd99c;
        }
    }
    ctx->pc = 0x1BD934u;
    // 0x1bd934: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x1bd934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x1bd938: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bd938u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bd93c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1bd93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1bd940: 0x8c4500c0  lw          $a1, 0xC0($v0)
    ctx->pc = 0x1bd940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1bd944: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BD944u;
    {
        const bool branch_taken_0x1bd944 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD944u;
            // 0x1bd948: 0x24a2ffec  addiu       $v0, $a1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd944) {
            ctx->pc = 0x1BD958u;
            goto label_1bd958;
        }
    }
    ctx->pc = 0x1BD94Cu;
    // 0x1bd94c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1bd94cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd950: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BD950u;
    {
        const bool branch_taken_0x1bd950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD950u;
            // 0x1bd954: 0x45880b  movn        $s1, $v0, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd950) {
            ctx->pc = 0x1BD95Cu;
            goto label_1bd95c;
        }
    }
    ctx->pc = 0x1BD958u;
label_1bd958:
    // 0x1bd958: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1bd958u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bd95c:
    // 0x1bd95c: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1bd95cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1bd960: 0xc05e996  jal         func_17A658
    ctx->pc = 0x1BD960u;
    SET_GPR_U32(ctx, 31, 0x1BD968u);
    ctx->pc = 0x1BD964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD960u;
            // 0x1bd964: 0x248414d0  addiu       $a0, $a0, 0x14D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD968u; }
        if (ctx->pc != 0x1BD968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD968u; }
        if (ctx->pc != 0x1BD968u) { return; }
    }
    ctx->pc = 0x1BD968u;
    // 0x1bd968: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bd968u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd96c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bd96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd970: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bd970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd974: 0xc05a3c0  jal         func_168F00
    ctx->pc = 0x1BD974u;
    SET_GPR_U32(ctx, 31, 0x1BD97Cu);
    ctx->pc = 0x1BD978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD974u;
            // 0x1bd978: 0x24060201  addiu       $a2, $zero, 0x201 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168F00u;
    if (runtime->hasFunction(0x168F00u)) {
        auto targetFn = runtime->lookupFunction(0x168F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD97Cu; }
        if (ctx->pc != 0x1BD97Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168F00_0x168f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD97Cu; }
        if (ctx->pc != 0x1BD97Cu) { return; }
    }
    ctx->pc = 0x1BD97Cu;
    // 0x1bd97c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bd97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd980: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bd980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd984: 0xc04c434  jal         func_1310D0
    ctx->pc = 0x1BD984u;
    SET_GPR_U32(ctx, 31, 0x1BD98Cu);
    ctx->pc = 0x1BD988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD984u;
            // 0x1bd988: 0xae0203a4  sw          $v0, 0x3A4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 932), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1310D0u;
    if (runtime->hasFunction(0x1310D0u)) {
        auto targetFn = runtime->lookupFunction(0x1310D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD98Cu; }
        if (ctx->pc != 0x1BD98Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001310D0_0x1310d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD98Cu; }
        if (ctx->pc != 0x1BD98Cu) { return; }
    }
    ctx->pc = 0x1BD98Cu;
    // 0x1bd98c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BD98Cu;
    {
        const bool branch_taken_0x1bd98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD98Cu;
            // 0x1bd990: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd98c) {
            ctx->pc = 0x1BD9ACu;
            goto label_1bd9ac;
        }
    }
    ctx->pc = 0x1BD994u;
    // 0x1bd994: 0x0  nop
    ctx->pc = 0x1bd994u;
    // NOP
label_1bd998:
    // 0x1bd998: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1bd998u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1bd99c:
    // 0x1bd99c: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x1bd99cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1bd9a0: 0x1440ffc7  bnez        $v0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x1BD9A0u;
    {
        const bool branch_taken_0x1bd9a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD9A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD9A0u;
            // 0x1bd9a4: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd9a0) {
            ctx->pc = 0x1BD8C0u;
            runtime->cooperativeGuestYield();
            goto label_1bd8c0;
        }
    }
    ctx->pc = 0x1BD9A8u;
label_1bd9a8:
    // 0x1bd9a8: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1bd9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
label_1bd9ac:
    // 0x1bd9ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bd9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd9b0: 0xac62cc50  sw          $v0, -0x33B0($v1)
    ctx->pc = 0x1bd9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954064), GPR_U32(ctx, 2));
    // 0x1bd9b4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bd9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bd9b8: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x1BD9B8u;
    {
        const bool branch_taken_0x1bd9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD9B8u;
            // 0x1bd9bc: 0x8c43e8b4  lw          $v1, -0x174C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd9b8) {
            ctx->pc = 0x1BDB10u;
            goto label_1bdb10;
        }
    }
    ctx->pc = 0x1BD9C0u;
label_1bd9c0:
    // 0x1bd9c0: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1bd9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x1bd9c4: 0x8c82cc44  lw          $v0, -0x33BC($a0)
    ctx->pc = 0x1bd9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954052)));
    // 0x1bd9c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bd9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bd9cc: 0x28430020  slti        $v1, $v0, 0x20
    ctx->pc = 0x1bd9ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1bd9d0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD9D0u;
    {
        const bool branch_taken_0x1bd9d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD9D0u;
            // 0x1bd9d4: 0xac82cc44  sw          $v0, -0x33BC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294954052), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd9d0) {
            ctx->pc = 0x1BD9E0u;
            goto label_1bd9e0;
        }
    }
    ctx->pc = 0x1BD9D8u;
    // 0x1bd9d8: 0xac80cc44  sw          $zero, -0x33BC($a0)
    ctx->pc = 0x1bd9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294954052), GPR_U32(ctx, 0));
    // 0x1bd9dc: 0x0  nop
    ctx->pc = 0x1bd9dcu;
    // NOP
label_1bd9e0:
    // 0x1bd9e0: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1bd9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x1bd9e4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1bd9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1bd9e8: 0x8c82cc40  lw          $v0, -0x33C0($a0)
    ctx->pc = 0x1bd9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954048)));
    // 0x1bd9ec: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1bd9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1bd9f0: 0xac605a58  sw          $zero, 0x5A58($v1)
    ctx->pc = 0x1bd9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 23128), GPR_U32(ctx, 0));
    // 0x1bd9f4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bd9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bd9f8: 0xac82cc40  sw          $v0, -0x33C0($a0)
    ctx->pc = 0x1bd9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294954048), GPR_U32(ctx, 2));
    // 0x1bd9fc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bd9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bda00: 0x8c435a40  lw          $v1, 0x5A40($v0)
    ctx->pc = 0x1bda00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23104)));
    // 0x1bda04: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1bda04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x1bda08: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bda08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bda0c: 0x8c845a28  lw          $a0, 0x5A28($a0)
    ctx->pc = 0x1bda0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 23080)));
    // 0x1bda10: 0x8c4a5a5c  lw          $t2, 0x5A5C($v0)
    ctx->pc = 0x1bda10u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23132)));
    // 0x1bda14: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1bda14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bda18: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1bda18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bda1c: 0x3c09002a  lui         $t1, 0x2A
    ctx->pc = 0x1bda1cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)42 << 16));
    // 0x1bda20: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x1bda20u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
    // 0x1bda24: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1bda24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x1bda28: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1bda28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1bda2c: 0xa4680004  sh          $t0, 0x4($v1)
    ctx->pc = 0x1bda2cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 8));
    // 0x1bda30: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1bda30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1bda34: 0x24a55a50  addiu       $a1, $a1, 0x5A50
    ctx->pc = 0x1bda34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23120));
    // 0x1bda38: 0xaceac80c  sw          $t2, -0x37F4($a3)
    ctx->pc = 0x1bda38u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294952972), GPR_U32(ctx, 10));
    // 0x1bda3c: 0x34c60010  ori         $a2, $a2, 0x10
    ctx->pc = 0x1bda3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16);
    // 0x1bda40: 0xc0617ca  jal         func_185F28
    ctx->pc = 0x1BDA40u;
    SET_GPR_U32(ctx, 31, 0x1BDA48u);
    ctx->pc = 0x1BDA44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDA40u;
            // 0x1bda44: 0xad20c808  sw          $zero, -0x37F8($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4294952968), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185F28u;
    if (runtime->hasFunction(0x185F28u)) {
        auto targetFn = runtime->lookupFunction(0x185F28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDA48u; }
        if (ctx->pc != 0x1BDA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185F28_0x185f28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDA48u; }
        if (ctx->pc != 0x1BDA48u) { return; }
    }
    ctx->pc = 0x1BDA48u;
    // 0x1bda48: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1bda48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1bda4c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1BDA4Cu;
    {
        const bool branch_taken_0x1bda4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDA50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDA4Cu;
            // 0x1bda50: 0xaea25e68  sw          $v0, 0x5E68($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 24168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bda4c) {
            ctx->pc = 0x1BDB28u;
            goto label_1bdb28;
        }
    }
    ctx->pc = 0x1BDA54u;
    // 0x1bda54: 0x0  nop
    ctx->pc = 0x1bda54u;
    // NOP
label_1bda58:
    // 0x1bda58: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x1bda58u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x1bda5c: 0xc061688  jal         func_185A20
    ctx->pc = 0x1BDA5Cu;
    SET_GPR_U32(ctx, 31, 0x1BDA64u);
    ctx->pc = 0x1BDA60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDA5Cu;
            // 0x1bda60: 0x8e045a28  lw          $a0, 0x5A28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23080)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185A20u;
    if (runtime->hasFunction(0x185A20u)) {
        auto targetFn = runtime->lookupFunction(0x185A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDA64u; }
        if (ctx->pc != 0x1BDA64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185A20_0x185a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDA64u; }
        if (ctx->pc != 0x1BDA64u) { return; }
    }
    ctx->pc = 0x1BDA64u;
    // 0x1bda64: 0x54400031  bnel        $v0, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x1BDA64u;
    {
        const bool branch_taken_0x1bda64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bda64) {
            ctx->pc = 0x1BDA68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDA64u;
            // 0x1bda68: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BDB2Cu;
            goto label_1bdb2c;
        }
    }
    ctx->pc = 0x1BDA6Cu;
    // 0x1bda6c: 0x3c120033  lui         $s2, 0x33
    ctx->pc = 0x1bda6cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
    // 0x1bda70: 0x8e035a28  lw          $v1, 0x5A28($s0)
    ctx->pc = 0x1bda70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23080)));
    // 0x1bda74: 0x8e425a58  lw          $v0, 0x5A58($s2)
    ctx->pc = 0x1bda74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 23128)));
    // 0x1bda78: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x1bda78u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x1bda7c: 0x26315a40  addiu       $s1, $s1, 0x5A40
    ctx->pc = 0x1bda7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 23104));
    // 0x1bda80: 0x8c650054  lw          $a1, 0x54($v1)
    ctx->pc = 0x1bda80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x1bda84: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bda84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bda88: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1bda88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bda8c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1bda8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1bda90: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1bda90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bda94: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1bda94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bda98: 0xa4640006  sh          $a0, 0x6($v1)
    ctx->pc = 0x1bda98u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x1bda9c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1bda9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1bdaa0: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1bdaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1bdaa4: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x1bdaa4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bdaa8: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1bdaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1bdaac: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x1bdaacu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x1bdab0: 0x2610e848  addiu       $s0, $s0, -0x17B8
    ctx->pc = 0x1bdab0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961224));
    // 0x1bdab4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1bdab4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1bdab8: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x1bdab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1bdabc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1bdabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bdac0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1bdac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1bdac4: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1bdac4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1bdac8: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1bdac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1bdacc: 0x40f809  jalr        $v0
    ctx->pc = 0x1BDACCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BDAD4u);
        ctx->pc = 0x1BDAD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDACCu;
            // 0x1bdad0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BDAD4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BC648u: goto label_1bc648;
            case 0x1BC66Cu: goto label_1bc66c;
            case 0x1BC6B0u: goto label_1bc6b0;
            case 0x1BC708u: goto label_1bc708;
            case 0x1BC788u: goto label_1bc788;
            case 0x1BC7C0u: goto label_1bc7c0;
            case 0x1BC7C8u: goto label_1bc7c8;
            case 0x1BC850u: goto label_1bc850;
            case 0x1BC890u: goto label_1bc890;
            case 0x1BC910u: goto label_1bc910;
            case 0x1BC958u: goto label_1bc958;
            case 0x1BC998u: goto label_1bc998;
            case 0x1BCA90u: goto label_1bca90;
            case 0x1BCAC8u: goto label_1bcac8;
            case 0x1BCAD0u: goto label_1bcad0;
            case 0x1BCB50u: goto label_1bcb50;
            case 0x1BCBA8u: goto label_1bcba8;
            case 0x1BCC40u: goto label_1bcc40;
            case 0x1BCC50u: goto label_1bcc50;
            case 0x1BCC70u: goto label_1bcc70;
            case 0x1BCCB8u: goto label_1bccb8;
            case 0x1BCCD8u: goto label_1bccd8;
            case 0x1BCD08u: goto label_1bcd08;
            case 0x1BCDC0u: goto label_1bcdc0;
            case 0x1BCE78u: goto label_1bce78;
            case 0x1BCEE8u: goto label_1bcee8;
            case 0x1BCF08u: goto label_1bcf08;
            case 0x1BCF28u: goto label_1bcf28;
            case 0x1BCF50u: goto label_1bcf50;
            case 0x1BCF8Cu: goto label_1bcf8c;
            case 0x1BCF90u: goto label_1bcf90;
            case 0x1BCFA4u: goto label_1bcfa4;
            case 0x1BCFD8u: goto label_1bcfd8;
            case 0x1BD018u: goto label_1bd018;
            case 0x1BD048u: goto label_1bd048;
            case 0x1BD088u: goto label_1bd088;
            case 0x1BD0C0u: goto label_1bd0c0;
            case 0x1BD168u: goto label_1bd168;
            case 0x1BD210u: goto label_1bd210;
            case 0x1BD288u: goto label_1bd288;
            case 0x1BD2C0u: goto label_1bd2c0;
            case 0x1BD2F0u: goto label_1bd2f0;
            case 0x1BD360u: goto label_1bd360;
            case 0x1BD398u: goto label_1bd398;
            case 0x1BD408u: goto label_1bd408;
            case 0x1BD448u: goto label_1bd448;
            case 0x1BD490u: goto label_1bd490;
            case 0x1BD4C0u: goto label_1bd4c0;
            case 0x1BD578u: goto label_1bd578;
            case 0x1BD5E0u: goto label_1bd5e0;
            case 0x1BD680u: goto label_1bd680;
            case 0x1BD6B0u: goto label_1bd6b0;
            case 0x1BD6E8u: goto label_1bd6e8;
            case 0x1BD718u: goto label_1bd718;
            case 0x1BD73Cu: goto label_1bd73c;
            case 0x1BD758u: goto label_1bd758;
            case 0x1BD808u: goto label_1bd808;
            case 0x1BD810u: goto label_1bd810;
            case 0x1BD898u: goto label_1bd898;
            case 0x1BD8B4u: goto label_1bd8b4;
            case 0x1BD8C0u: goto label_1bd8c0;
            case 0x1BD958u: goto label_1bd958;
            case 0x1BD95Cu: goto label_1bd95c;
            case 0x1BD998u: goto label_1bd998;
            case 0x1BD99Cu: goto label_1bd99c;
            case 0x1BD9A8u: goto label_1bd9a8;
            case 0x1BD9ACu: goto label_1bd9ac;
            case 0x1BD9C0u: goto label_1bd9c0;
            case 0x1BD9E0u: goto label_1bd9e0;
            case 0x1BDA58u: goto label_1bda58;
            case 0x1BDB10u: goto label_1bdb10;
            case 0x1BDB24u: goto label_1bdb24;
            case 0x1BDB28u: goto label_1bdb28;
            case 0x1BDB2Cu: goto label_1bdb2c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BDAD4u; }
            if (ctx->pc != 0x1BDAD4u) { return; }
        }
        }
    }
    ctx->pc = 0x1BDAD4u;
    // 0x1bdad4: 0xc05ea2e  jal         func_17A8B8
    ctx->pc = 0x1BDAD4u;
    SET_GPR_U32(ctx, 31, 0x1BDADCu);
    ctx->pc = 0x17A8B8u;
    if (runtime->hasFunction(0x17A8B8u)) {
        auto targetFn = runtime->lookupFunction(0x17A8B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDADCu; }
        if (ctx->pc != 0x1BDADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A8B8_0x17a8b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDADCu; }
        if (ctx->pc != 0x1BDADCu) { return; }
    }
    ctx->pc = 0x1BDADCu;
    // 0x1bdadc: 0x8e425a58  lw          $v0, 0x5A58($s2)
    ctx->pc = 0x1bdadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 23128)));
    // 0x1bdae0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1bdae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1bdae4: 0x8c64cb94  lw          $a0, -0x346C($v1)
    ctx->pc = 0x1bdae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953876)));
    // 0x1bdae8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bdae8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bdaec: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1bdaecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1bdaf0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bdaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bdaf4: 0xc06dea8  jal         func_1B7AA0
    ctx->pc = 0x1BDAF4u;
    SET_GPR_U32(ctx, 31, 0x1BDAFCu);
    ctx->pc = 0x1BDAF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDAF4u;
            // 0x1bdaf8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7AA0u;
    if (runtime->hasFunction(0x1B7AA0u)) {
        auto targetFn = runtime->lookupFunction(0x1B7AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDAFCu; }
        if (ctx->pc != 0x1BDAFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1b7aa0_0x1b7aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDAFCu; }
        if (ctx->pc != 0x1BDAFCu) { return; }
    }
    ctx->pc = 0x1BDAFCu;
    // 0x1bdafc: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1bdafcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1bdb00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bdb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bdb04: 0xac62cc54  sw          $v0, -0x33AC($v1)
    ctx->pc = 0x1bdb04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954068), GPR_U32(ctx, 2));
    // 0x1bdb08: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x1bdb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1bdb0c: 0x0  nop
    ctx->pc = 0x1bdb0cu;
    // NOP
label_1bdb10:
    // 0x1bdb10: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1bdb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1bdb14: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x1bdb14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1bdb18: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x1bdb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x1bdb1c: 0x40f809  jalr        $v0
    ctx->pc = 0x1BDB1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BDB24u);
        ctx->pc = 0x1BDB20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDB1Cu;
            // 0x1bdb20: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BDB24u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BC648u: goto label_1bc648;
            case 0x1BC66Cu: goto label_1bc66c;
            case 0x1BC6B0u: goto label_1bc6b0;
            case 0x1BC708u: goto label_1bc708;
            case 0x1BC788u: goto label_1bc788;
            case 0x1BC7C0u: goto label_1bc7c0;
            case 0x1BC7C8u: goto label_1bc7c8;
            case 0x1BC850u: goto label_1bc850;
            case 0x1BC890u: goto label_1bc890;
            case 0x1BC910u: goto label_1bc910;
            case 0x1BC958u: goto label_1bc958;
            case 0x1BC998u: goto label_1bc998;
            case 0x1BCA90u: goto label_1bca90;
            case 0x1BCAC8u: goto label_1bcac8;
            case 0x1BCAD0u: goto label_1bcad0;
            case 0x1BCB50u: goto label_1bcb50;
            case 0x1BCBA8u: goto label_1bcba8;
            case 0x1BCC40u: goto label_1bcc40;
            case 0x1BCC50u: goto label_1bcc50;
            case 0x1BCC70u: goto label_1bcc70;
            case 0x1BCCB8u: goto label_1bccb8;
            case 0x1BCCD8u: goto label_1bccd8;
            case 0x1BCD08u: goto label_1bcd08;
            case 0x1BCDC0u: goto label_1bcdc0;
            case 0x1BCE78u: goto label_1bce78;
            case 0x1BCEE8u: goto label_1bcee8;
            case 0x1BCF08u: goto label_1bcf08;
            case 0x1BCF28u: goto label_1bcf28;
            case 0x1BCF50u: goto label_1bcf50;
            case 0x1BCF8Cu: goto label_1bcf8c;
            case 0x1BCF90u: goto label_1bcf90;
            case 0x1BCFA4u: goto label_1bcfa4;
            case 0x1BCFD8u: goto label_1bcfd8;
            case 0x1BD018u: goto label_1bd018;
            case 0x1BD048u: goto label_1bd048;
            case 0x1BD088u: goto label_1bd088;
            case 0x1BD0C0u: goto label_1bd0c0;
            case 0x1BD168u: goto label_1bd168;
            case 0x1BD210u: goto label_1bd210;
            case 0x1BD288u: goto label_1bd288;
            case 0x1BD2C0u: goto label_1bd2c0;
            case 0x1BD2F0u: goto label_1bd2f0;
            case 0x1BD360u: goto label_1bd360;
            case 0x1BD398u: goto label_1bd398;
            case 0x1BD408u: goto label_1bd408;
            case 0x1BD448u: goto label_1bd448;
            case 0x1BD490u: goto label_1bd490;
            case 0x1BD4C0u: goto label_1bd4c0;
            case 0x1BD578u: goto label_1bd578;
            case 0x1BD5E0u: goto label_1bd5e0;
            case 0x1BD680u: goto label_1bd680;
            case 0x1BD6B0u: goto label_1bd6b0;
            case 0x1BD6E8u: goto label_1bd6e8;
            case 0x1BD718u: goto label_1bd718;
            case 0x1BD73Cu: goto label_1bd73c;
            case 0x1BD758u: goto label_1bd758;
            case 0x1BD808u: goto label_1bd808;
            case 0x1BD810u: goto label_1bd810;
            case 0x1BD898u: goto label_1bd898;
            case 0x1BD8B4u: goto label_1bd8b4;
            case 0x1BD8C0u: goto label_1bd8c0;
            case 0x1BD958u: goto label_1bd958;
            case 0x1BD95Cu: goto label_1bd95c;
            case 0x1BD998u: goto label_1bd998;
            case 0x1BD99Cu: goto label_1bd99c;
            case 0x1BD9A8u: goto label_1bd9a8;
            case 0x1BD9ACu: goto label_1bd9ac;
            case 0x1BD9C0u: goto label_1bd9c0;
            case 0x1BD9E0u: goto label_1bd9e0;
            case 0x1BDA58u: goto label_1bda58;
            case 0x1BDB10u: goto label_1bdb10;
            case 0x1BDB24u: goto label_1bdb24;
            case 0x1BDB28u: goto label_1bdb28;
            case 0x1BDB2Cu: goto label_1bdb2c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BDB24u; }
            if (ctx->pc != 0x1BDB24u) { return; }
        }
        }
    }
    ctx->pc = 0x1BDB24u;
label_1bdb24:
    // 0x1bdb24: 0xaea05e68  sw          $zero, 0x5E68($s5)
    ctx->pc = 0x1bdb24u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24168), GPR_U32(ctx, 0));
label_1bdb28:
    // 0x1bdb28: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1bdb28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1bdb2c:
    // 0x1bdb2c: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x1bdb2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1bdb30: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x1bdb30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1bdb34: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x1bdb34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1bdb38: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x1bdb38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bdb3c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1bdb3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bdb40: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1bdb40u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bdb44: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x1bdb44u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bdb48: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1bdb48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bdb4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDB4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDB50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDB4Cu;
            // 0x1bdb50: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BC648u: goto label_1bc648;
            case 0x1BC66Cu: goto label_1bc66c;
            case 0x1BC6B0u: goto label_1bc6b0;
            case 0x1BC708u: goto label_1bc708;
            case 0x1BC788u: goto label_1bc788;
            case 0x1BC7C0u: goto label_1bc7c0;
            case 0x1BC7C8u: goto label_1bc7c8;
            case 0x1BC850u: goto label_1bc850;
            case 0x1BC890u: goto label_1bc890;
            case 0x1BC910u: goto label_1bc910;
            case 0x1BC958u: goto label_1bc958;
            case 0x1BC998u: goto label_1bc998;
            case 0x1BCA90u: goto label_1bca90;
            case 0x1BCAC8u: goto label_1bcac8;
            case 0x1BCAD0u: goto label_1bcad0;
            case 0x1BCB50u: goto label_1bcb50;
            case 0x1BCBA8u: goto label_1bcba8;
            case 0x1BCC40u: goto label_1bcc40;
            case 0x1BCC50u: goto label_1bcc50;
            case 0x1BCC70u: goto label_1bcc70;
            case 0x1BCCB8u: goto label_1bccb8;
            case 0x1BCCD8u: goto label_1bccd8;
            case 0x1BCD08u: goto label_1bcd08;
            case 0x1BCDC0u: goto label_1bcdc0;
            case 0x1BCE78u: goto label_1bce78;
            case 0x1BCEE8u: goto label_1bcee8;
            case 0x1BCF08u: goto label_1bcf08;
            case 0x1BCF28u: goto label_1bcf28;
            case 0x1BCF50u: goto label_1bcf50;
            case 0x1BCF8Cu: goto label_1bcf8c;
            case 0x1BCF90u: goto label_1bcf90;
            case 0x1BCFA4u: goto label_1bcfa4;
            case 0x1BCFD8u: goto label_1bcfd8;
            case 0x1BD018u: goto label_1bd018;
            case 0x1BD048u: goto label_1bd048;
            case 0x1BD088u: goto label_1bd088;
            case 0x1BD0C0u: goto label_1bd0c0;
            case 0x1BD168u: goto label_1bd168;
            case 0x1BD210u: goto label_1bd210;
            case 0x1BD288u: goto label_1bd288;
            case 0x1BD2C0u: goto label_1bd2c0;
            case 0x1BD2F0u: goto label_1bd2f0;
            case 0x1BD360u: goto label_1bd360;
            case 0x1BD398u: goto label_1bd398;
            case 0x1BD408u: goto label_1bd408;
            case 0x1BD448u: goto label_1bd448;
            case 0x1BD490u: goto label_1bd490;
            case 0x1BD4C0u: goto label_1bd4c0;
            case 0x1BD578u: goto label_1bd578;
            case 0x1BD5E0u: goto label_1bd5e0;
            case 0x1BD680u: goto label_1bd680;
            case 0x1BD6B0u: goto label_1bd6b0;
            case 0x1BD6E8u: goto label_1bd6e8;
            case 0x1BD718u: goto label_1bd718;
            case 0x1BD73Cu: goto label_1bd73c;
            case 0x1BD758u: goto label_1bd758;
            case 0x1BD808u: goto label_1bd808;
            case 0x1BD810u: goto label_1bd810;
            case 0x1BD898u: goto label_1bd898;
            case 0x1BD8B4u: goto label_1bd8b4;
            case 0x1BD8C0u: goto label_1bd8c0;
            case 0x1BD958u: goto label_1bd958;
            case 0x1BD95Cu: goto label_1bd95c;
            case 0x1BD998u: goto label_1bd998;
            case 0x1BD99Cu: goto label_1bd99c;
            case 0x1BD9A8u: goto label_1bd9a8;
            case 0x1BD9ACu: goto label_1bd9ac;
            case 0x1BD9C0u: goto label_1bd9c0;
            case 0x1BD9E0u: goto label_1bd9e0;
            case 0x1BDA58u: goto label_1bda58;
            case 0x1BDB10u: goto label_1bdb10;
            case 0x1BDB24u: goto label_1bdb24;
            case 0x1BDB28u: goto label_1bdb28;
            case 0x1BDB2Cu: goto label_1bdb2c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BDB54u;
    // 0x1bdb54: 0x0  nop
    ctx->pc = 0x1bdb54u;
    // NOP
}
