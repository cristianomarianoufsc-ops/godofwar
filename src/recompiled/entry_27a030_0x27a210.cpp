#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_27a030
// Address: 0x27a030 - 0x27a210
void entry_27a030_0x27a210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_27a030_0x27a210");
#endif

    ctx->pc = 0x27a030u;

    // 0x27a030: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x27a030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x27a034: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x27a034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x27a038: 0x3442e000  ori         $v0, $v0, 0xE000
    ctx->pc = 0x27a038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57344);
    // 0x27a03c: 0x3463e020  ori         $v1, $v1, 0xE020
    ctx->pc = 0x27a03cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57376);
    // 0x27a040: 0x8c4a0000  lw          $t2, 0x0($v0)
    ctx->pc = 0x27a040u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27a044: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x27a044u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x27a048: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x27a048u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27a04c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x27a04cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a050: 0x34a5e030  ori         $a1, $a1, 0xE030
    ctx->pc = 0x27a050u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)57392);
    // 0x27a054: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x27a054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x27a058: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x27a058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x27a05c: 0x3463e050  ori         $v1, $v1, 0xE050
    ctx->pc = 0x27a05cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57424);
    // 0x27a060: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x27a060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x27a064: 0x91240000  lbu         $a0, 0x0($t1)
    ctx->pc = 0x27a064u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x27a068: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x27a068u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27a06c: 0x3442e040  ori         $v0, $v0, 0xE040
    ctx->pc = 0x27a06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57408);
    // 0x27a070: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x27a070u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27a074: 0x2c84000a  sltiu       $a0, $a0, 0xA
    ctx->pc = 0x27a074u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x27a078: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x27A078u;
    {
        const bool branch_taken_0x27a078 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a078) {
            ctx->pc = 0x27A07Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27A078u;
            // 0x27a07c: 0x91220001  lbu         $v0, 0x1($t1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27A088u;
            goto label_27a088;
        }
    }
    ctx->pc = 0x27A080u;
    // 0x27a080: 0x3e00008  jr          $ra
    ctx->pc = 0x27A080u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A080u;
            // 0x27a084: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27A088u: goto label_27a088;
            case 0x27A09Cu: goto label_27a09c;
            case 0x27A0B0u: goto label_27a0b0;
            case 0x27A0C4u: goto label_27a0c4;
            case 0x27A160u: goto label_27a160;
            case 0x27A16Cu: goto label_27a16c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27A088u;
label_27a088:
    // 0x27a088: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x27a088u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x27a08c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x27A08Cu;
    {
        const bool branch_taken_0x27a08c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a08c) {
            ctx->pc = 0x27A090u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27A08Cu;
            // 0x27a090: 0x91220002  lbu         $v0, 0x2($t1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27A09Cu;
            goto label_27a09c;
        }
    }
    ctx->pc = 0x27A094u;
    // 0x27a094: 0x3e00008  jr          $ra
    ctx->pc = 0x27A094u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A094u;
            // 0x27a098: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27A088u: goto label_27a088;
            case 0x27A09Cu: goto label_27a09c;
            case 0x27A0B0u: goto label_27a0b0;
            case 0x27A0C4u: goto label_27a0c4;
            case 0x27A160u: goto label_27a160;
            case 0x27A16Cu: goto label_27a16c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27A09Cu;
label_27a09c:
    // 0x27a09c: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x27a09cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x27a0a0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x27A0A0u;
    {
        const bool branch_taken_0x27a0a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a0a0) {
            ctx->pc = 0x27A0A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27A0A0u;
            // 0x27a0a4: 0x912b0003  lbu         $t3, 0x3($t1) (Delay Slot)
        SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27A0B0u;
            goto label_27a0b0;
        }
    }
    ctx->pc = 0x27A0A8u;
    // 0x27a0a8: 0x3e00008  jr          $ra
    ctx->pc = 0x27A0A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A0ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A0A8u;
            // 0x27a0ac: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27A088u: goto label_27a088;
            case 0x27A09Cu: goto label_27a09c;
            case 0x27A0B0u: goto label_27a0b0;
            case 0x27A0C4u: goto label_27a0c4;
            case 0x27A160u: goto label_27a160;
            case 0x27A16Cu: goto label_27a16c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27A0B0u;
label_27a0b0:
    // 0x27a0b0: 0x2d620007  sltiu       $v0, $t3, 0x7
    ctx->pc = 0x27a0b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x27a0b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27A0B4u;
    {
        const bool branch_taken_0x27a0b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A0B4u;
            // 0x27a0b8: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a0b4) {
            ctx->pc = 0x27A0C4u;
            goto label_27a0c4;
        }
    }
    ctx->pc = 0x27A0BCu;
    // 0x27a0bc: 0x3e00008  jr          $ra
    ctx->pc = 0x27A0BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A0C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A0BCu;
            // 0x27a0c0: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27A088u: goto label_27a088;
            case 0x27A09Cu: goto label_27a09c;
            case 0x27A0B0u: goto label_27a0b0;
            case 0x27A0C4u: goto label_27a0c4;
            case 0x27A160u: goto label_27a160;
            case 0x27A16Cu: goto label_27a16c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27A0C4u;
label_27a0c4:
    // 0x27a0c4: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x27a0c4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x27a0c8: 0x24424a58  addiu       $v0, $v0, 0x4A58
    ctx->pc = 0x27a0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19032));
    // 0x27a0cc: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x27a0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x27a0d0: 0x91250001  lbu         $a1, 0x1($t1)
    ctx->pc = 0x27a0d0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x27a0d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27a0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27a0d8: 0x24844a68  addiu       $a0, $a0, 0x4A68
    ctx->pc = 0x27a0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19048));
    // 0x27a0dc: 0x90680000  lbu         $t0, 0x0($v1)
    ctx->pc = 0x27a0dcu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27a0e0: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x27a0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x27a0e4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x27a0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x27a0e8: 0x3442ffcf  ori         $v0, $v0, 0xFFCF
    ctx->pc = 0x27a0e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65487);
    // 0x27a0ec: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x27a0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x27a0f0: 0x91270002  lbu         $a3, 0x2($t1)
    ctx->pc = 0x27a0f0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x27a0f4: 0x1421024  and         $v0, $t2, $v0
    ctx->pc = 0x27a0f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x27a0f8: 0x24844a78  addiu       $a0, $a0, 0x4A78
    ctx->pc = 0x27a0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19064));
    // 0x27a0fc: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x27a0fcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x27a100: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x27a100u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x27a104: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x27a104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x27a108: 0x485025  or          $t2, $v0, $t0
    ctx->pc = 0x27a108u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x27a10c: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x27a10cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x27a110: 0x3463ff3f  ori         $v1, $v1, 0xFF3F
    ctx->pc = 0x27a110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65343);
    // 0x27a114: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x27a114u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x27a118: 0x1431824  and         $v1, $t2, $v1
    ctx->pc = 0x27a118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x27a11c: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x27a11cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x27a120: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x27a120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x27a124: 0x665025  or          $t2, $v1, $a2
    ctx->pc = 0x27a124u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x27a128: 0x3442fff3  ori         $v0, $v0, 0xFFF3
    ctx->pc = 0x27a128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65523);
    // 0x27a12c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x27a12cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x27a130: 0x1421024  and         $v0, $t2, $v0
    ctx->pc = 0x27a130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x27a134: 0x1160000a  beqz        $t3, . + 4 + (0xA << 2)
    ctx->pc = 0x27A134u;
    {
        const bool branch_taken_0x27a134 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A134u;
            // 0x27a138: 0x445025  or          $t2, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a134) {
            ctx->pc = 0x27A160u;
            goto label_27a160;
        }
    }
    ctx->pc = 0x27A13Cu;
    // 0x27a13c: 0x91230003  lbu         $v1, 0x3($t1)
    ctx->pc = 0x27a13cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
    // 0x27a140: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x27a140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x27a144: 0x354a0002  ori         $t2, $t2, 0x2
    ctx->pc = 0x27a144u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)2);
    // 0x27a148: 0x3442fcff  ori         $v0, $v0, 0xFCFF
    ctx->pc = 0x27a148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64767);
    // 0x27a14c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x27a14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x27a150: 0x1421024  and         $v0, $t2, $v0
    ctx->pc = 0x27a150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x27a154: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x27a154u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x27a158: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x27A158u;
    {
        const bool branch_taken_0x27a158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A15Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A158u;
            // 0x27a15c: 0x435025  or          $t2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a158) {
            ctx->pc = 0x27A16Cu;
            goto label_27a16c;
        }
    }
    ctx->pc = 0x27A160u;
label_27a160:
    // 0x27a160: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x27a160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x27a164: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x27a164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x27a168: 0x1425024  and         $t2, $t2, $v0
    ctx->pc = 0x27a168u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
label_27a16c:
    // 0x27a16c: 0x95220004  lhu         $v0, 0x4($t1)
    ctx->pc = 0x27a16cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x27a170: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x27a170u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x27a174: 0x95260006  lhu         $a2, 0x6($t1)
    ctx->pc = 0x27a174u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 6)));
    // 0x27a178: 0x3484e000  ori         $a0, $a0, 0xE000
    ctx->pc = 0x27a178u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)57344);
    // 0x27a17c: 0x9525000a  lhu         $a1, 0xA($t1)
    ctx->pc = 0x27a17cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 10)));
    // 0x27a180: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x27a180u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x27a184: 0x8d280010  lw          $t0, 0x10($t1)
    ctx->pc = 0x27a184u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x27a188: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x27a188u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x27a18c: 0x95270008  lhu         $a3, 0x8($t1)
    ctx->pc = 0x27a18cu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x27a190: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x27a190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x27a194: 0xac8a0000  sw          $t2, 0x0($a0)
    ctx->pc = 0x27a194u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 10));
    // 0x27a198: 0x3463e020  ori         $v1, $v1, 0xE020
    ctx->pc = 0x27a198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57376);
    // 0x27a19c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x27a19cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x27a1a0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x27a1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x27a1a4: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x27a1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x27a1a8: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x27a1a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x27a1ac: 0x3442e030  ori         $v0, $v0, 0xE030
    ctx->pc = 0x27a1acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57392);
    // 0x27a1b0: 0x8d26000c  lw          $a2, 0xC($t1)
    ctx->pc = 0x27a1b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x27a1b4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x27a1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x27a1b8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x27a1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x27a1bc: 0x3463e050  ori         $v1, $v1, 0xE050
    ctx->pc = 0x27a1bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57424);
    // 0x27a1c0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x27a1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x27a1c4: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x27a1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x27a1c8: 0x3442e040  ori         $v0, $v0, 0xE040
    ctx->pc = 0x27a1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57408);
    // 0x27a1cc: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x27a1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x27a1d0: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x27a1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x27a1d4: 0x2466a840  addiu       $a2, $v1, -0x57C0
    ctx->pc = 0x27a1d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944832));
    // 0x27a1d8: 0x69220007  ldl         $v0, 0x7($t1)
    ctx->pc = 0x27a1d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x27a1dc: 0x6d220000  ldr         $v0, 0x0($t1)
    ctx->pc = 0x27a1dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x27a1e0: 0x6924000f  ldl         $a0, 0xF($t1)
    ctx->pc = 0x27a1e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x27a1e4: 0x6d240008  ldr         $a0, 0x8($t1)
    ctx->pc = 0x27a1e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x27a1e8: 0x8d250010  lw          $a1, 0x10($t1)
    ctx->pc = 0x27a1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x27a1ec: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x27a1ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27a1f0: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x27a1f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27a1f4: 0xb0c4000f  sdl         $a0, 0xF($a2)
    ctx->pc = 0x27a1f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27a1f8: 0xb4c40008  sdr         $a0, 0x8($a2)
    ctx->pc = 0x27a1f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27a1fc: 0xacc50010  sw          $a1, 0x10($a2)
    ctx->pc = 0x27a1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 5));
    // 0x27a200: 0x3e00008  jr          $ra
    ctx->pc = 0x27A200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A200u;
            // 0x27a204: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27A088u: goto label_27a088;
            case 0x27A09Cu: goto label_27a09c;
            case 0x27A0B0u: goto label_27a0b0;
            case 0x27A0C4u: goto label_27a0c4;
            case 0x27A160u: goto label_27a160;
            case 0x27A16Cu: goto label_27a16c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27A208u;
    // 0x27a208: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x27a208u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x27a20c: 0x0  nop
    ctx->pc = 0x27a20cu;
    // NOP
}
