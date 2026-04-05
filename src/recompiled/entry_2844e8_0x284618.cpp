#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2844e8
// Address: 0x2844e8 - 0x284618
void entry_2844e8_0x284618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2844e8_0x284618");
#endif

    ctx->pc = 0x2844e8u;

    // 0x2844e8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2844e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2844ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2844ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2844f0: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x2844f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2844f4: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x2844f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2844f8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2844F8u;
    {
        const bool branch_taken_0x2844f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2844FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2844F8u;
            // 0x2844fc: 0xdc850010  ld          $a1, 0x10($a0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2844f8) {
            ctx->pc = 0x284514u;
            goto label_284514;
        }
    }
    ctx->pc = 0x284500u;
    // 0x284500: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x284500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x284504: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x284504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x284508: 0x240707ff  addiu       $a3, $zero, 0x7FF
    ctx->pc = 0x284508u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x28450c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x28450Cu;
    {
        const bool branch_taken_0x28450c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28450Cu;
            // 0x284510: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28450c) {
            ctx->pc = 0x2845B8u;
            goto label_2845b8;
        }
    }
    ctx->pc = 0x284514u;
label_284514:
    // 0x284514: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x284514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x284518: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x284518u;
    {
        const bool branch_taken_0x284518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x284518) {
            ctx->pc = 0x28451Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x284518u;
            // 0x28451c: 0x240707ff  addiu       $a3, $zero, 0x7FF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
        ctx->in_delay_slot = false;
            ctx->pc = 0x284574u;
            goto label_284574;
        }
    }
    ctx->pc = 0x284520u;
    // 0x284520: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x284520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x284524: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x284524u;
    {
        const bool branch_taken_0x284524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284524) {
            ctx->pc = 0x284534u;
            goto label_284534;
        }
    }
    ctx->pc = 0x28452Cu;
    // 0x28452c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x28452Cu;
    {
        const bool branch_taken_0x28452c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28452Cu;
            // 0x284530: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28452c) {
            ctx->pc = 0x2845B8u;
            goto label_2845b8;
        }
    }
    ctx->pc = 0x284534u;
label_284534:
    // 0x284534: 0x10a00020  beqz        $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x284534u;
    {
        const bool branch_taken_0x284534 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x284534) {
            ctx->pc = 0x2845B8u;
            goto label_2845b8;
        }
    }
    ctx->pc = 0x28453Cu;
    // 0x28453c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x28453cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x284540: 0x2862fc02  slti        $v0, $v1, -0x3FE
    ctx->pc = 0x284540u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294966274) ? 1 : 0);
    // 0x284544: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x284544u;
    {
        const bool branch_taken_0x284544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284544u;
            // 0x284548: 0x2402fc02  addiu       $v0, $zero, -0x3FE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284544) {
            ctx->pc = 0x284564u;
            goto label_284564;
        }
    }
    ctx->pc = 0x28454Cu;
    // 0x28454c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x28454cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x284550: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x284550u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x284554: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x284554u;
    {
        const bool branch_taken_0x284554 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x284558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284554u;
            // 0x284558: 0x452816  dsrlv       $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284554) {
            ctx->pc = 0x2845B4u;
            goto label_2845b4;
        }
    }
    ctx->pc = 0x28455Cu;
    // 0x28455c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x28455Cu;
    {
        const bool branch_taken_0x28455c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28455Cu;
            // 0x284560: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28455c) {
            ctx->pc = 0x2845B4u;
            goto label_2845b4;
        }
    }
    ctx->pc = 0x284564u;
label_284564:
    // 0x284564: 0x28620400  slti        $v0, $v1, 0x400
    ctx->pc = 0x284564u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x284568: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x284568u;
    {
        const bool branch_taken_0x284568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28456Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284568u;
            // 0x28456c: 0x246703ff  addiu       $a3, $v1, 0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284568) {
            ctx->pc = 0x28457Cu;
            goto label_28457c;
        }
    }
    ctx->pc = 0x284570u;
    // 0x284570: 0x240707ff  addiu       $a3, $zero, 0x7FF
    ctx->pc = 0x284570u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
label_284574:
    // 0x284574: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x284574u;
    {
        const bool branch_taken_0x284574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284574u;
            // 0x284578: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284574) {
            ctx->pc = 0x2845B8u;
            goto label_2845b8;
        }
    }
    ctx->pc = 0x28457Cu;
label_28457c:
    // 0x28457c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x28457cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x284580: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x284580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x284584: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x284584u;
    {
        const bool branch_taken_0x284584 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x284584) {
            ctx->pc = 0x284588u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x284584u;
            // 0x284588: 0x64a5007f  daddiu      $a1, $a1, 0x7F (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)127);
        ctx->in_delay_slot = false;
            ctx->pc = 0x284598u;
            goto label_284598;
        }
    }
    ctx->pc = 0x28458Cu;
    // 0x28458c: 0x30a30100  andi        $v1, $a1, 0x100
    ctx->pc = 0x28458cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
    // 0x284590: 0x64a20080  daddiu      $v0, $a1, 0x80
    ctx->pc = 0x284590u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)128);
    // 0x284594: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x284594u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_284598:
    // 0x284598: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x284598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28459c: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x28459cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x2845a0: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x2845a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2845a4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2845A4u;
    {
        const bool branch_taken_0x2845a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2845a4) {
            ctx->pc = 0x2845A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2845A4u;
            // 0x2845a8: 0x52a3a  dsrl        $a1, $a1, 8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 8);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2845B8u;
            goto label_2845b8;
        }
    }
    ctx->pc = 0x2845ACu;
    // 0x2845ac: 0x5287a  dsrl        $a1, $a1, 1
    ctx->pc = 0x2845acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 1);
    // 0x2845b0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2845b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2845b4:
    // 0x2845b4: 0x52a3a  dsrl        $a1, $a1, 8
    ctx->pc = 0x2845b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 8);
label_2845b8:
    // 0x2845b8: 0x3403fff0  ori         $v1, $zero, 0xFFF0
    ctx->pc = 0x2845b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65520);
    // 0x2845bc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2845bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2845c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2845c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2845c4: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x2845c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x2845c8: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x2845c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2845cc: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x2845ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x2845d0: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2845d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2845d4: 0x30e307ff  andi        $v1, $a3, 0x7FF
    ctx->pc = 0x2845d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2047);
    // 0x2845d8: 0x3c02800f  lui         $v0, 0x800F
    ctx->pc = 0x2845d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32783 << 16));
    // 0x2845dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2845dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2845e0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2845e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2845e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2845e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2845e8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2845e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2845ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2845ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2845f0: 0x31d3c  dsll32      $v1, $v1, 20
    ctx->pc = 0x2845f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 20));
    // 0x2845f4: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x2845f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2845f8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2845f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2845fc: 0x4207a  dsrl        $a0, $a0, 1
    ctx->pc = 0x2845fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
    // 0x284600: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x284600u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x284604: 0x817fc  dsll32      $v0, $t0, 31
    ctx->pc = 0x284604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 31));
    // 0x284608: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x284608u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x28460c: 0x3e00008  jr          $ra
    ctx->pc = 0x28460Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28460Cu;
            // 0x284610: 0xc21025  or          $v0, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x284514u: goto label_284514;
            case 0x284534u: goto label_284534;
            case 0x284564u: goto label_284564;
            case 0x284574u: goto label_284574;
            case 0x28457Cu: goto label_28457c;
            case 0x284598u: goto label_284598;
            case 0x2845B4u: goto label_2845b4;
            case 0x2845B8u: goto label_2845b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x284614u;
    // 0x284614: 0x0  nop
    ctx->pc = 0x284614u;
    // NOP
}
