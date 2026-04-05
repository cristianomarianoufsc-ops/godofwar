#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1a8338
// Address: 0x1a8338 - 0x1a8580
void entry_1a8338_0x1a8580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1a8338_0x1a8580");
#endif

    ctx->pc = 0x1a8338u;

    // 0x1a8338: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x1a8338u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a833c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a833cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a8340: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x1a8340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1a8344: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x1a8344u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8348: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x1a8348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x1a834c: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x1a834cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x1a8350: 0x463821  addu        $a3, $v0, $a2
    ctx->pc = 0x1a8350u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1a8354: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x1a8354u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1a8358: 0x2c62003b  sltiu       $v0, $v1, 0x3B
    ctx->pc = 0x1a8358u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
    // 0x1a835c: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x1A835Cu;
    {
        const bool branch_taken_0x1a835c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A835Cu;
            // 0x1a8360: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a835c) {
            ctx->pc = 0x1A84D0u;
            goto label_1a84d0;
        }
    }
    ctx->pc = 0x1A8364u;
    // 0x1a8364: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1a8364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1a8368: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a8368u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a836c: 0x24424120  addiu       $v0, $v0, 0x4120
    ctx->pc = 0x1a836cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16672));
    // 0x1a8370: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a8370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a8374: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a8374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a8378: 0x400008  jr          $v0
    ctx->pc = 0x1A8378u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A8380u: goto label_1a8380;
            case 0x1A838Cu: goto label_1a838c;
            case 0x1A83E4u: goto label_1a83e4;
            case 0x1A8434u: goto label_1a8434;
            case 0x1A8464u: goto label_1a8464;
            case 0x1A8490u: goto label_1a8490;
            case 0x1A84D0u: goto label_1a84d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A8380u;
label_1a8380:
    // 0x1a8380: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a8380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a8384: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x1A8384u;
    {
        const bool branch_taken_0x1a8384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8384u;
            // 0x1a8388: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8384) {
            ctx->pc = 0x1A84D0u;
            goto label_1a84d0;
        }
    }
    ctx->pc = 0x1A838Cu;
label_1a838c:
    // 0x1a838c: 0x90e30005  lbu         $v1, 0x5($a3)
    ctx->pc = 0x1a838cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x1a8390: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x1a8390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1a8394: 0x1462004e  bne         $v1, $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x1A8394u;
    {
        const bool branch_taken_0x1a8394 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A8398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8394u;
            // 0x1a8398: 0x2402003a  addiu       $v0, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8394) {
            ctx->pc = 0x1A84D0u;
            goto label_1a84d0;
        }
    }
    ctx->pc = 0x1A839Cu;
    // 0x1a839c: 0x90e30006  lbu         $v1, 0x6($a3)
    ctx->pc = 0x1a839cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x1a83a0: 0x1462004b  bne         $v1, $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x1A83A0u;
    {
        const bool branch_taken_0x1a83a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A83A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A83A0u;
            // 0x1a83a4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a83a0) {
            ctx->pc = 0x1A84D0u;
            goto label_1a84d0;
        }
    }
    ctx->pc = 0x1A83A8u;
    // 0x1a83a8: 0x90e50002  lbu         $a1, 0x2($a3)
    ctx->pc = 0x1a83a8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x1a83ac: 0x90e40001  lbu         $a0, 0x1($a3)
    ctx->pc = 0x1a83acu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x1a83b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1a83b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a83b4: 0x90e20003  lbu         $v0, 0x3($a3)
    ctx->pc = 0x1a83b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x1a83b8: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1a83b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x1a83bc: 0x90e30004  lbu         $v1, 0x4($a3)
    ctx->pc = 0x1a83bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1a83c0: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1a83c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1a83c4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a83c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a83c8: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x1a83c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x1a83cc: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1a83ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1a83d0: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1a83d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1a83d4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1a83d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1a83d8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1a83d8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a83dc: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1A83DCu;
    {
        const bool branch_taken_0x1a83dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A83E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A83DCu;
            // 0x1a83e0: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a83dc) {
            ctx->pc = 0x1A84D0u;
            goto label_1a84d0;
        }
    }
    ctx->pc = 0x1A83E4u;
label_1a83e4:
    // 0x1a83e4: 0x90e30005  lbu         $v1, 0x5($a3)
    ctx->pc = 0x1a83e4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x1a83e8: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x1a83e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1a83ec: 0x14620038  bne         $v1, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x1A83ECu;
    {
        const bool branch_taken_0x1a83ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A83F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A83ECu;
            // 0x1a83f0: 0x2402003a  addiu       $v0, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a83ec) {
            ctx->pc = 0x1A84D0u;
            goto label_1a84d0;
        }
    }
    ctx->pc = 0x1A83F4u;
    // 0x1a83f4: 0x90e30006  lbu         $v1, 0x6($a3)
    ctx->pc = 0x1a83f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x1a83f8: 0x14620035  bne         $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1A83F8u;
    {
        const bool branch_taken_0x1a83f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A83FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A83F8u;
            // 0x1a83fc: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a83f8) {
            ctx->pc = 0x1A84D0u;
            goto label_1a84d0;
        }
    }
    ctx->pc = 0x1A8400u;
    // 0x1a8400: 0x90e50002  lbu         $a1, 0x2($a3)
    ctx->pc = 0x1a8400u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x1a8404: 0x90e20001  lbu         $v0, 0x1($a3)
    ctx->pc = 0x1a8404u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x1a8408: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1a8408u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a840c: 0x90e30003  lbu         $v1, 0x3($a3)
    ctx->pc = 0x1a840cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x1a8410: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1a8410u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x1a8414: 0x90e40004  lbu         $a0, 0x4($a3)
    ctx->pc = 0x1a8414u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1a8418: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1a8418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1a841c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1a841cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1a8420: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x1a8420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x1a8424: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a8424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a8428: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x1a8428u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x1a842c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1A842Cu;
    {
        const bool branch_taken_0x1a842c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A842Cu;
            // 0x1a8430: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a842c) {
            ctx->pc = 0x1A84CCu;
            goto label_1a84cc;
        }
    }
    ctx->pc = 0x1A8434u;
label_1a8434:
    // 0x1a8434: 0x90e30001  lbu         $v1, 0x1($a3)
    ctx->pc = 0x1a8434u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x1a8438: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x1a8438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1a843c: 0x14620024  bne         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1A843Cu;
    {
        const bool branch_taken_0x1a843c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A8440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A843Cu;
            // 0x1a8440: 0x2402003a  addiu       $v0, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a843c) {
            ctx->pc = 0x1A84D0u;
            goto label_1a84d0;
        }
    }
    ctx->pc = 0x1A8444u;
    // 0x1a8444: 0x90e30002  lbu         $v1, 0x2($a3)
    ctx->pc = 0x1a8444u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x1a8448: 0x14620021  bne         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1A8448u;
    {
        const bool branch_taken_0x1a8448 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A844Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8448u;
            // 0x1a844c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8448) {
            ctx->pc = 0x1A84D0u;
            goto label_1a84d0;
        }
    }
    ctx->pc = 0x1A8450u;
    // 0x1a8450: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1a8450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a8454: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1a8454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1a8458: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1a8458u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a845c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1A845Cu;
    {
        const bool branch_taken_0x1a845c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A845Cu;
            // 0x1a8460: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a845c) {
            ctx->pc = 0x1A84D0u;
            goto label_1a84d0;
        }
    }
    ctx->pc = 0x1A8464u;
label_1a8464:
    // 0x1a8464: 0x90e30001  lbu         $v1, 0x1($a3)
    ctx->pc = 0x1a8464u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x1a8468: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x1a8468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1a846c: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1A846Cu;
    {
        const bool branch_taken_0x1a846c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A8470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A846Cu;
            // 0x1a8470: 0x2402003a  addiu       $v0, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a846c) {
            ctx->pc = 0x1A84D0u;
            goto label_1a84d0;
        }
    }
    ctx->pc = 0x1A8474u;
    // 0x1a8474: 0x90e30002  lbu         $v1, 0x2($a3)
    ctx->pc = 0x1a8474u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x1a8478: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1A8478u;
    {
        const bool branch_taken_0x1a8478 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A847Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8478u;
            // 0x1a847c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8478) {
            ctx->pc = 0x1A84D0u;
            goto label_1a84d0;
        }
    }
    ctx->pc = 0x1A8480u;
    // 0x1a8480: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1a8480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1a8484: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1a8484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1a8488: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1A8488u;
    {
        const bool branch_taken_0x1a8488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A848Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8488u;
            // 0x1a848c: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8488) {
            ctx->pc = 0x1A84D0u;
            goto label_1a84d0;
        }
    }
    ctx->pc = 0x1A8490u;
label_1a8490:
    // 0x1a8490: 0x90e30003  lbu         $v1, 0x3($a3)
    ctx->pc = 0x1a8490u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x1a8494: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x1a8494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1a8498: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A8498u;
    {
        const bool branch_taken_0x1a8498 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A849Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8498u;
            // 0x1a849c: 0x2402003a  addiu       $v0, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8498) {
            ctx->pc = 0x1A84D0u;
            goto label_1a84d0;
        }
    }
    ctx->pc = 0x1A84A0u;
    // 0x1a84a0: 0x90e30004  lbu         $v1, 0x4($a3)
    ctx->pc = 0x1a84a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1a84a4: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A84A4u;
    {
        const bool branch_taken_0x1a84a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A84A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A84A4u;
            // 0x1a84a8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a84a4) {
            ctx->pc = 0x1A84D0u;
            goto label_1a84d0;
        }
    }
    ctx->pc = 0x1A84ACu;
    // 0x1a84ac: 0x90e30002  lbu         $v1, 0x2($a3)
    ctx->pc = 0x1a84acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x1a84b0: 0x90e40001  lbu         $a0, 0x1($a3)
    ctx->pc = 0x1a84b0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x1a84b4: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x1a84b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a84b8: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x1a84b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1a84bc: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1a84bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1a84c0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1a84c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1a84c4: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1a84c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1a84c8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a84c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1a84cc:
    // 0x1a84cc: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1a84ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_1a84d0:
    // 0x1a84d0: 0x11280021  beq         $t1, $t0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1A84D0u;
    {
        const bool branch_taken_0x1a84d0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 8));
        ctx->pc = 0x1A84D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A84D0u;
            // 0x1a84d4: 0x2d020005  sltiu       $v0, $t0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a84d0) {
            ctx->pc = 0x1A8558u;
            goto label_1a8558;
        }
    }
    ctx->pc = 0x1A84D8u;
    // 0x1a84d8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1A84D8u;
    {
        const bool branch_taken_0x1a84d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A84DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A84D8u;
            // 0x1a84dc: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a84d8) {
            ctx->pc = 0x1A8558u;
            goto label_1a8558;
        }
    }
    ctx->pc = 0x1A84E0u;
    // 0x1a84e0: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x1a84e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1a84e4: 0x24424210  addiu       $v0, $v0, 0x4210
    ctx->pc = 0x1a84e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16912));
    // 0x1a84e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a84e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a84ec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a84ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a84f0: 0x400008  jr          $v0
    ctx->pc = 0x1A84F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A84F8u: goto label_1a84f8;
            case 0x1A8510u: goto label_1a8510;
            case 0x1A8528u: goto label_1a8528;
            case 0x1A8558u: goto label_1a8558;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A84F8u;
label_1a84f8:
    // 0x1a84f8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1a84f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a84fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a84fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a8500: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a8500u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a8504: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1A8504u;
    {
        const bool branch_taken_0x1a8504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8504u;
            // 0x1a8508: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8504) {
            ctx->pc = 0x1A8558u;
            goto label_1a8558;
        }
    }
    ctx->pc = 0x1A850Cu;
    // 0x1a850c: 0x0  nop
    ctx->pc = 0x1a850cu;
    // NOP
label_1a8510:
    // 0x1a8510: 0x15200011  bnez        $t1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A8510u;
    {
        const bool branch_taken_0x1a8510 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8510u;
            // 0x1a8514: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8510) {
            ctx->pc = 0x1A8558u;
            goto label_1a8558;
        }
    }
    ctx->pc = 0x1A8518u;
    // 0x1a8518: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a8518u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1a851c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1a851cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1a8520: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1A8520u;
    {
        const bool branch_taken_0x1a8520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8520) {
            ctx->pc = 0x1A8558u;
            goto label_1a8558;
        }
    }
    ctx->pc = 0x1A8528u;
label_1a8528:
    // 0x1a8528: 0x15200009  bnez        $t1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A8528u;
    {
        const bool branch_taken_0x1a8528 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A852Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8528u;
            // 0x1a852c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8528) {
            ctx->pc = 0x1A8550u;
            goto label_1a8550;
        }
    }
    ctx->pc = 0x1A8530u;
    // 0x1a8530: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1a8530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a8534: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a8534u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a8538: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1a8538u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a853c: 0x0  nop
    ctx->pc = 0x1a853cu;
    // NOP
    // 0x1a8540: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1A8540u;
    {
        const bool branch_taken_0x1a8540 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A8544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8540u;
            // 0x1a8544: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8540) {
            ctx->pc = 0x1A8554u;
            goto label_1a8554;
        }
    }
    ctx->pc = 0x1A8548u;
    // 0x1a8548: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A8548u;
    {
        const bool branch_taken_0x1a8548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A854Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8548u;
            // 0x1a854c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8548) {
            ctx->pc = 0x1A8554u;
            goto label_1a8554;
        }
    }
    ctx->pc = 0x1A8550u;
label_1a8550:
    // 0x1a8550: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1a8550u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1a8554:
    // 0x1a8554: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1a8554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_1a8558:
    // 0x1a8558: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x1a8558u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1a855c: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x1a855cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1a8560: 0xb1630007  sdl         $v1, 0x7($t3)
    ctx->pc = 0x1a8560u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a8564: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x1a8564u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8568: 0xb5630000  sdr         $v1, 0x0($t3)
    ctx->pc = 0x1a8568u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a856c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A856Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A856Cu;
            // 0x1a8570: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A8380u: goto label_1a8380;
            case 0x1A838Cu: goto label_1a838c;
            case 0x1A83E4u: goto label_1a83e4;
            case 0x1A8434u: goto label_1a8434;
            case 0x1A8464u: goto label_1a8464;
            case 0x1A8490u: goto label_1a8490;
            case 0x1A84CCu: goto label_1a84cc;
            case 0x1A84D0u: goto label_1a84d0;
            case 0x1A84F8u: goto label_1a84f8;
            case 0x1A8510u: goto label_1a8510;
            case 0x1A8528u: goto label_1a8528;
            case 0x1A8550u: goto label_1a8550;
            case 0x1A8554u: goto label_1a8554;
            case 0x1A8558u: goto label_1a8558;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A8574u;
    // 0x1a8574: 0x0  nop
    ctx->pc = 0x1a8574u;
    // NOP
    // 0x1a8578: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1a8578u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a857c: 0x0  nop
    ctx->pc = 0x1a857cu;
    // NOP
}
