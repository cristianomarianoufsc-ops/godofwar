#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1d85a8
// Address: 0x1d85a8 - 0x1d86b8
void entry_1d85a8_0x1d86b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1d85a8_0x1d86b8");
#endif

    ctx->pc = 0x1d85a8u;

    // 0x1d85a8: 0x3c090030  lui         $t1, 0x30
    ctx->pc = 0x1d85a8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)48 << 16));
    // 0x1d85ac: 0x25282cc0  addiu       $t0, $t1, 0x2CC0
    ctx->pc = 0x1d85acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 11456));
    // 0x1d85b0: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x1d85b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1d85b4: 0x95070082  lhu         $a3, 0x82($t0)
    ctx->pc = 0x1d85b4u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 130)));
    // 0x1d85b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d85b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d85bc: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x1d85bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d85c0: 0xe31024  and         $v0, $a3, $v1
    ctx->pc = 0x1d85c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x1d85c4: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1D85C4u;
    {
        const bool branch_taken_0x1d85c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d85c4) {
            ctx->pc = 0x1D86B0u;
            goto label_1d86b0;
        }
    }
    ctx->pc = 0x1D85CCu;
    // 0x1d85cc: 0x10c00038  beqz        $a2, . + 4 + (0x38 << 2)
    ctx->pc = 0x1D85CCu;
    {
        const bool branch_taken_0x1d85cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D85D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D85CCu;
            // 0x1d85d0: 0x2ca20003  sltiu       $v0, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d85cc) {
            ctx->pc = 0x1D86B0u;
            goto label_1d86b0;
        }
    }
    ctx->pc = 0x1D85D4u;
    // 0x1d85d4: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D85D4u;
    {
        const bool branch_taken_0x1d85d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D85D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D85D4u;
            // 0x1d85d8: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d85d4) {
            ctx->pc = 0x1D8624u;
            goto label_1d8624;
        }
    }
    ctx->pc = 0x1D85DCu;
    // 0x1d85dc: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x1d85dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d85e0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D85E0u;
    {
        const bool branch_taken_0x1d85e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D85E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D85E0u;
            // 0x1d85e4: 0x31027  nor         $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d85e0) {
            ctx->pc = 0x1D85F8u;
            goto label_1d85f8;
        }
    }
    ctx->pc = 0x1D85E8u;
    // 0x1d85e8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1d85e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1d85ec: 0x14a2000d  bne         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D85ECu;
    {
        const bool branch_taken_0x1d85ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D85F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D85ECu;
            // 0x1d85f0: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d85ec) {
            ctx->pc = 0x1D8624u;
            goto label_1d8624;
        }
    }
    ctx->pc = 0x1D85F4u;
    // 0x1d85f4: 0x31027  nor         $v0, $zero, $v1
    ctx->pc = 0x1d85f4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
label_1d85f8:
    // 0x1d85f8: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x1d85f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x1d85fc: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1d85fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1d8600: 0x14a30007  bne         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D8600u;
    {
        const bool branch_taken_0x1d8600 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D8604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8600u;
            // 0x1d8604: 0xa5020082  sh          $v0, 0x82($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 130), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8600) {
            ctx->pc = 0x1D8620u;
            goto label_1d8620;
        }
    }
    ctx->pc = 0x1D8608u;
    // 0x1d8608: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1d8608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d860c: 0x3c03ffdf  lui         $v1, 0xFFDF
    ctx->pc = 0x1d860cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65503 << 16));
    // 0x1d8610: 0x3463ffdf  ori         $v1, $v1, 0xFFDF
    ctx->pc = 0x1d8610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65503);
    // 0x1d8614: 0x8c8202dc  lw          $v0, 0x2DC($a0)
    ctx->pc = 0x1d8614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 732)));
    // 0x1d8618: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d8618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d861c: 0xac8202dc  sw          $v0, 0x2DC($a0)
    ctx->pc = 0x1d861cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 732), GPR_U32(ctx, 2));
label_1d8620:
    // 0x1d8620: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d8620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1d8624:
    // 0x1d8624: 0x8c43cb94  lw          $v1, -0x346C($v0)
    ctx->pc = 0x1d8624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x1d8628: 0x25252cc0  addiu       $a1, $t1, 0x2CC0
    ctx->pc = 0x1d8628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 11456));
    // 0x1d862c: 0x94a20082  lhu         $v0, 0x82($a1)
    ctx->pc = 0x1d862cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 130)));
    // 0x1d8630: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1d8630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1d8634: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d8634u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d8638: 0xac620070  sw          $v0, 0x70($v1)
    ctx->pc = 0x1d8638u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 112), GPR_U32(ctx, 2));
    // 0x1d863c: 0x94a20082  lhu         $v0, 0x82($a1)
    ctx->pc = 0x1d863cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 130)));
    // 0x1d8640: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1d8640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1d8644: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d8644u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d8648: 0xac620074  sw          $v0, 0x74($v1)
    ctx->pc = 0x1d8648u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 116), GPR_U32(ctx, 2));
    // 0x1d864c: 0x94a20082  lhu         $v0, 0x82($a1)
    ctx->pc = 0x1d864cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 130)));
    // 0x1d8650: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1d8650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1d8654: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d8654u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d8658: 0xac620078  sw          $v0, 0x78($v1)
    ctx->pc = 0x1d8658u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 120), GPR_U32(ctx, 2));
    // 0x1d865c: 0x94a20082  lhu         $v0, 0x82($a1)
    ctx->pc = 0x1d865cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 130)));
    // 0x1d8660: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1d8660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1d8664: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d8664u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d8668: 0xac62007c  sw          $v0, 0x7C($v1)
    ctx->pc = 0x1d8668u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 124), GPR_U32(ctx, 2));
    // 0x1d866c: 0x94a20082  lhu         $v0, 0x82($a1)
    ctx->pc = 0x1d866cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 130)));
    // 0x1d8670: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1d8670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1d8674: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d8674u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d8678: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x1d8678u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x1d867c: 0x90a20083  lbu         $v0, 0x83($a1)
    ctx->pc = 0x1d867cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 131)));
    // 0x1d8680: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d8680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d8684: 0xac62006c  sw          $v0, 0x6C($v1)
    ctx->pc = 0x1d8684u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 108), GPR_U32(ctx, 2));
    // 0x1d8688: 0x90a2007e  lbu         $v0, 0x7E($a1)
    ctx->pc = 0x1d8688u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 126)));
    // 0x1d868c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D868Cu;
    {
        const bool branch_taken_0x1d868c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D868Cu;
            // 0x1d8690: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d868c) {
            ctx->pc = 0x1D86B0u;
            goto label_1d86b0;
        }
    }
    ctx->pc = 0x1D8694u;
    // 0x1d8694: 0x94a40082  lhu         $a0, 0x82($a1)
    ctx->pc = 0x1d8694u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 130)));
    // 0x1d8698: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d8698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d869c: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x1d869cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d86a0: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1d86a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1d86a4: 0x50800002  beql        $a0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D86A4u;
    {
        const bool branch_taken_0x1d86a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d86a4) {
            ctx->pc = 0x1D86A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D86A4u;
            // 0x1d86a8: 0xa0a0007e  sb          $zero, 0x7E($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 126), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D86B0u;
            goto label_1d86b0;
        }
    }
    ctx->pc = 0x1D86ACu;
    // 0x1d86ac: 0x0  nop
    ctx->pc = 0x1d86acu;
    // NOP
label_1d86b0:
    // 0x1d86b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D86B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D85F8u: goto label_1d85f8;
            case 0x1D8620u: goto label_1d8620;
            case 0x1D8624u: goto label_1d8624;
            case 0x1D86B0u: goto label_1d86b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D86B8u;
}
