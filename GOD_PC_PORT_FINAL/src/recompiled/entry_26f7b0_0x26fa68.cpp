#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_26f7b0
// Address: 0x26f7b0 - 0x26fa68
void entry_26f7b0_0x26fa68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_26f7b0_0x26fa68");
#endif

    ctx->pc = 0x26f7b0u;

    // 0x26f7b0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x26f7b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f7b4: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x26f7b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26f7b8: 0x8ce90184  lw          $t1, 0x184($a3)
    ctx->pc = 0x26f7b8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 388)));
    // 0x26f7bc: 0x240c0002  addiu       $t4, $zero, 0x2
    ctx->pc = 0x26f7bcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26f7c0: 0x8cea0160  lw          $t2, 0x160($a3)
    ctx->pc = 0x26f7c0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 352)));
    // 0x26f7c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26f7c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f7c8: 0x39220003  xori        $v0, $t1, 0x3
    ctx->pc = 0x26f7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)3);
    // 0x26f7cc: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x26f7ccu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f7d0: 0x240e0003  addiu       $t6, $zero, 0x3
    ctx->pc = 0x26f7d0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26f7d4: 0x154e0044  bne         $t2, $t6, . + 4 + (0x44 << 2)
    ctx->pc = 0x26F7D4u;
    {
        const bool branch_taken_0x26f7d4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 14));
        ctx->pc = 0x26F7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F7D4u;
            // 0x26f7d8: 0x182580a  movz        $t3, $t4, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f7d4) {
            ctx->pc = 0x26F8E8u;
            goto label_26f8e8;
        }
    }
    ctx->pc = 0x26F7DCu;
    // 0x26f7dc: 0x8ce200b4  lw          $v0, 0xB4($a3)
    ctx->pc = 0x26f7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 180)));
    // 0x26f7e0: 0x8ce300b8  lw          $v1, 0xB8($a3)
    ctx->pc = 0x26f7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 184)));
    // 0x26f7e4: 0x8ce501d4  lw          $a1, 0x1D4($a3)
    ctx->pc = 0x26f7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 468)));
    // 0x26f7e8: 0x8ce601e4  lw          $a2, 0x1E4($a3)
    ctx->pc = 0x26f7e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 484)));
    // 0x26f7ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26f7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26f7f0: 0x8ce401f4  lw          $a0, 0x1F4($a3)
    ctx->pc = 0x26f7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 500)));
    // 0x26f7f4: 0x4b102a  slt         $v0, $v0, $t3
    ctx->pc = 0x26f7f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x26f7f8: 0xace501d0  sw          $a1, 0x1D0($a3)
    ctx->pc = 0x26f7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 464), GPR_U32(ctx, 5));
    // 0x26f7fc: 0xace601e0  sw          $a2, 0x1E0($a3)
    ctx->pc = 0x26f7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 480), GPR_U32(ctx, 6));
    // 0x26f800: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26F800u;
    {
        const bool branch_taken_0x26f800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F800u;
            // 0x26f804: 0xace401f0  sw          $a0, 0x1F0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 496), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f800) {
            ctx->pc = 0x26F814u;
            goto label_26f814;
        }
    }
    ctx->pc = 0x26F808u;
    // 0x26f808: 0xace000fc  sw          $zero, 0xFC($a3)
    ctx->pc = 0x26f808u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 252), GPR_U32(ctx, 0));
    // 0x26f80c: 0xace001b8  sw          $zero, 0x1B8($a3)
    ctx->pc = 0x26f80cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 440), GPR_U32(ctx, 0));
    // 0x26f810: 0xace001b4  sw          $zero, 0x1B4($a3)
    ctx->pc = 0x26f810u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 436), GPR_U32(ctx, 0));
label_26f814:
    // 0x26f814: 0x8ce200fc  lw          $v0, 0xFC($a3)
    ctx->pc = 0x26f814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 252)));
    // 0x26f818: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x26F818u;
    {
        const bool branch_taken_0x26f818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f818) {
            ctx->pc = 0x26F81Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26F818u;
            // 0x26f81c: 0x8ce201b4  lw          $v0, 0x1B4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26F830u;
            goto label_26f830;
        }
    }
    ctx->pc = 0x26F820u;
    // 0x26f820: 0x8ce201b8  lw          $v0, 0x1B8($a3)
    ctx->pc = 0x26f820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 440)));
    // 0x26f824: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x26F824u;
    {
        const bool branch_taken_0x26f824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f824) {
            ctx->pc = 0x26F828u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26F824u;
            // 0x26f828: 0xace000fc  sw          $zero, 0xFC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 252), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26F858u;
            goto label_26f858;
        }
    }
    ctx->pc = 0x26F82Cu;
    // 0x26f82c: 0x8ce201b4  lw          $v0, 0x1B4($a3)
    ctx->pc = 0x26f82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
label_26f830:
    // 0x26f830: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x26F830u;
    {
        const bool branch_taken_0x26f830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f830) {
            ctx->pc = 0x26F834u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26F830u;
            // 0x26f834: 0xace000fc  sw          $zero, 0xFC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 252), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26F858u;
            goto label_26f858;
        }
    }
    ctx->pc = 0x26F838u;
    // 0x26f838: 0x8ce201c8  lw          $v0, 0x1C8($a3)
    ctx->pc = 0x26f838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
    // 0x26f83c: 0x8ce401d8  lw          $a0, 0x1D8($a3)
    ctx->pc = 0x26f83cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
    // 0x26f840: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x26f840u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x26f844: 0x8ce301e8  lw          $v1, 0x1E8($a3)
    ctx->pc = 0x26f844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
    // 0x26f848: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x26f848u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x26f84c: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x26f84cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x26f850: 0x8ce90184  lw          $t1, 0x184($a3)
    ctx->pc = 0x26f850u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 388)));
    // 0x26f854: 0xace000fc  sw          $zero, 0xFC($a3)
    ctx->pc = 0x26f854u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 252), GPR_U32(ctx, 0));
label_26f858:
    // 0x26f858: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x26f858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26f85c: 0x1522000b  bne         $t1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x26F85Cu;
    {
        const bool branch_taken_0x26f85c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x26F860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F85Cu;
            // 0x26f860: 0xace001b8  sw          $zero, 0x1B8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 440), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f85c) {
            ctx->pc = 0x26F88Cu;
            goto label_26f88c;
        }
    }
    ctx->pc = 0x26F864u;
    // 0x26f864: 0x8ce301c8  lw          $v1, 0x1C8($a3)
    ctx->pc = 0x26f864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
    // 0x26f868: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x26f868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26f86c: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x26f86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x26f870: 0x50440018  beql        $v0, $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x26F870u;
    {
        const bool branch_taken_0x26f870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x26f870) {
            ctx->pc = 0x26F874u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26F870u;
            // 0x26f874: 0x8ce301cc  lw          $v1, 0x1CC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26F8D4u;
            goto label_26f8d4;
        }
    }
    ctx->pc = 0x26F878u;
    // 0x26f878: 0x8ce201b4  lw          $v0, 0x1B4($a3)
    ctx->pc = 0x26f878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
    // 0x26f87c: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x26F87Cu;
    {
        const bool branch_taken_0x26f87c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F87Cu;
            // 0x26f880: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f87c) {
            ctx->pc = 0x26F9A0u;
            goto label_26f9a0;
        }
    }
    ctx->pc = 0x26F884u;
    // 0x26f884: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x26F884u;
    {
        const bool branch_taken_0x26f884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F884u;
            // 0x26f888: 0x8ce301cc  lw          $v1, 0x1CC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f884) {
            ctx->pc = 0x26F8D4u;
            goto label_26f8d4;
        }
    }
    ctx->pc = 0x26F88Cu;
label_26f88c:
    // 0x26f88c: 0x8ce201d8  lw          $v0, 0x1D8($a3)
    ctx->pc = 0x26f88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
    // 0x26f890: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26f890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26f894: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x26f894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x26f898: 0x54830006  bnel        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x26F898u;
    {
        const bool branch_taken_0x26f898 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x26f898) {
            ctx->pc = 0x26F89Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26F898u;
            // 0x26f89c: 0x8ce201b4  lw          $v0, 0x1B4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26F8B4u;
            goto label_26f8b4;
        }
    }
    ctx->pc = 0x26F8A0u;
    // 0x26f8a0: 0x8ce201e8  lw          $v0, 0x1E8($a3)
    ctx->pc = 0x26f8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
    // 0x26f8a4: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x26f8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x26f8a8: 0x50640005  beql        $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26F8A8u;
    {
        const bool branch_taken_0x26f8a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x26f8a8) {
            ctx->pc = 0x26F8ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26F8A8u;
            // 0x26f8ac: 0x8ce201dc  lw          $v0, 0x1DC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 476)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26F8C0u;
            goto label_26f8c0;
        }
    }
    ctx->pc = 0x26F8B0u;
    // 0x26f8b0: 0x8ce201b4  lw          $v0, 0x1B4($a3)
    ctx->pc = 0x26f8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
label_26f8b4:
    // 0x26f8b4: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x26F8B4u;
    {
        const bool branch_taken_0x26f8b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F8B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F8B4u;
            // 0x26f8b8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f8b4) {
            ctx->pc = 0x26F9A0u;
            goto label_26f9a0;
        }
    }
    ctx->pc = 0x26F8BCu;
    // 0x26f8bc: 0x8ce201dc  lw          $v0, 0x1DC($a3)
    ctx->pc = 0x26f8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 476)));
label_26f8c0:
    // 0x26f8c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26f8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26f8c4: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x26f8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x26f8c8: 0x14830035  bne         $a0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x26F8C8u;
    {
        const bool branch_taken_0x26f8c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x26F8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F8C8u;
            // 0x26f8cc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f8c8) {
            ctx->pc = 0x26F9A0u;
            goto label_26f9a0;
        }
    }
    ctx->pc = 0x26F8D0u;
    // 0x26f8d0: 0x8ce301ec  lw          $v1, 0x1EC($a3)
    ctx->pc = 0x26f8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 492)));
label_26f8d4:
    // 0x26f8d4: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x26f8d4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f8d8: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x26f8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x26f8dc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x26f8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x26f8e0: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x26F8E0u;
    {
        const bool branch_taken_0x26f8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F8E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F8E0u;
            // 0x26f8e4: 0x2680b  movn        $t5, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f8e0) {
            ctx->pc = 0x26F99Cu;
            goto label_26f99c;
        }
    }
    ctx->pc = 0x26F8E8u;
label_26f8e8:
    // 0x26f8e8: 0x54a0000e  bnel        $a1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x26F8E8u;
    {
        const bool branch_taken_0x26f8e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f8e8) {
            ctx->pc = 0x26F8ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26F8E8u;
            // 0x26f8ec: 0x8ce201cc  lw          $v0, 0x1CC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26F924u;
            goto label_26f924;
        }
    }
    ctx->pc = 0x26F8F0u;
    // 0x26f8f0: 0x8ce601c8  lw          $a2, 0x1C8($a3)
    ctx->pc = 0x26f8f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
    // 0x26f8f4: 0x8ce401cc  lw          $a0, 0x1CC($a3)
    ctx->pc = 0x26f8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
    // 0x26f8f8: 0xace601cc  sw          $a2, 0x1CC($a3)
    ctx->pc = 0x26f8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 460), GPR_U32(ctx, 6));
    // 0x26f8fc: 0x8ce601d8  lw          $a2, 0x1D8($a3)
    ctx->pc = 0x26f8fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
    // 0x26f900: 0x8ce301dc  lw          $v1, 0x1DC($a3)
    ctx->pc = 0x26f900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 476)));
    // 0x26f904: 0xace601dc  sw          $a2, 0x1DC($a3)
    ctx->pc = 0x26f904u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 476), GPR_U32(ctx, 6));
    // 0x26f908: 0x8ce601e8  lw          $a2, 0x1E8($a3)
    ctx->pc = 0x26f908u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
    // 0x26f90c: 0x8ce201ec  lw          $v0, 0x1EC($a3)
    ctx->pc = 0x26f90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 492)));
    // 0x26f910: 0xace401c8  sw          $a0, 0x1C8($a3)
    ctx->pc = 0x26f910u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 456), GPR_U32(ctx, 4));
    // 0x26f914: 0xace301d8  sw          $v1, 0x1D8($a3)
    ctx->pc = 0x26f914u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 472), GPR_U32(ctx, 3));
    // 0x26f918: 0xace201e8  sw          $v0, 0x1E8($a3)
    ctx->pc = 0x26f918u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 488), GPR_U32(ctx, 2));
    // 0x26f91c: 0xace601ec  sw          $a2, 0x1EC($a3)
    ctx->pc = 0x26f91cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 492), GPR_U32(ctx, 6));
    // 0x26f920: 0x8ce201cc  lw          $v0, 0x1CC($a3)
    ctx->pc = 0x26f920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
label_26f924:
    // 0x26f924: 0x8ce401dc  lw          $a0, 0x1DC($a3)
    ctx->pc = 0x26f924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 476)));
    // 0x26f928: 0x8ce301ec  lw          $v1, 0x1EC($a3)
    ctx->pc = 0x26f928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 492)));
    // 0x26f92c: 0xace201d0  sw          $v0, 0x1D0($a3)
    ctx->pc = 0x26f92cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 464), GPR_U32(ctx, 2));
    // 0x26f930: 0xace401e0  sw          $a0, 0x1E0($a3)
    ctx->pc = 0x26f930u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 480), GPR_U32(ctx, 4));
    // 0x26f934: 0x152e0006  bne         $t1, $t6, . + 4 + (0x6 << 2)
    ctx->pc = 0x26F934u;
    {
        const bool branch_taken_0x26f934 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 14));
        ctx->pc = 0x26F938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F934u;
            // 0x26f938: 0xace301f0  sw          $v1, 0x1F0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 496), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f934) {
            ctx->pc = 0x26F950u;
            goto label_26f950;
        }
    }
    ctx->pc = 0x26F93Cu;
    // 0x26f93c: 0x554c0017  bnel        $t2, $t4, . + 4 + (0x17 << 2)
    ctx->pc = 0x26F93Cu;
    {
        const bool branch_taken_0x26f93c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 12));
        if (branch_taken_0x26f93c) {
            ctx->pc = 0x26F940u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26F93Cu;
            // 0x26f940: 0x240d0001  addiu       $t5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26F99Cu;
            goto label_26f99c;
        }
    }
    ctx->pc = 0x26F944u;
    // 0x26f944: 0x8ce201c8  lw          $v0, 0x1C8($a3)
    ctx->pc = 0x26f944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
    // 0x26f948: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x26F948u;
    {
        const bool branch_taken_0x26f948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F94Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F948u;
            // 0x26f94c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f948) {
            ctx->pc = 0x26F98Cu;
            goto label_26f98c;
        }
    }
    ctx->pc = 0x26F950u;
label_26f950:
    // 0x26f950: 0x39220001  xori        $v0, $t1, 0x1
    ctx->pc = 0x26f950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)1);
    // 0x26f954: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26f954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26f958: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x26f958u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x26f95c: 0x154c000e  bne         $t2, $t4, . + 4 + (0xE << 2)
    ctx->pc = 0x26F95Cu;
    {
        const bool branch_taken_0x26f95c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 12));
        ctx->pc = 0x26F960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F95Cu;
            // 0x26f960: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f95c) {
            ctx->pc = 0x26F998u;
            goto label_26f998;
        }
    }
    ctx->pc = 0x26F964u;
    // 0x26f964: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x26F964u;
    {
        const bool branch_taken_0x26f964 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f964) {
            ctx->pc = 0x26F968u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26F964u;
            // 0x26f968: 0x8ce201d8  lw          $v0, 0x1D8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26F97Cu;
            goto label_26f97c;
        }
    }
    ctx->pc = 0x26F96Cu;
    // 0x26f96c: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x26f96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x26f970: 0x5046000a  beql        $v0, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x26F970u;
    {
        const bool branch_taken_0x26f970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x26f970) {
            ctx->pc = 0x26F974u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26F970u;
            // 0x26f974: 0x240d0001  addiu       $t5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26F99Cu;
            goto label_26f99c;
        }
    }
    ctx->pc = 0x26F978u;
    // 0x26f978: 0x8ce201d8  lw          $v0, 0x1D8($a3)
    ctx->pc = 0x26f978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
label_26f97c:
    // 0x26f97c: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x26f97cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x26f980: 0x14860007  bne         $a0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x26F980u;
    {
        const bool branch_taken_0x26f980 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x26F984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F980u;
            // 0x26f984: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f980) {
            ctx->pc = 0x26F9A0u;
            goto label_26f9a0;
        }
    }
    ctx->pc = 0x26F988u;
    // 0x26f988: 0x8ce201e8  lw          $v0, 0x1E8($a3)
    ctx->pc = 0x26f988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
label_26f98c:
    // 0x26f98c: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x26f98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x26f990: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26F990u;
    {
        const bool branch_taken_0x26f990 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x26F994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F990u;
            // 0x26f994: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f990) {
            ctx->pc = 0x26F9A0u;
            goto label_26f9a0;
        }
    }
    ctx->pc = 0x26F998u;
label_26f998:
    // 0x26f998: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x26f998u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26f99c:
    // 0x26f99c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26f99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_26f9a0:
    // 0x26f9a0: 0x1122000c  beq         $t1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x26F9A0u;
    {
        const bool branch_taken_0x26f9a0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        ctx->pc = 0x26F9A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F9A0u;
            // 0x26f9a4: 0x29220003  slti        $v0, $t1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f9a0) {
            ctx->pc = 0x26F9D4u;
            goto label_26f9d4;
        }
    }
    ctx->pc = 0x26F9A8u;
    // 0x26f9a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26F9A8u;
    {
        const bool branch_taken_0x26f9a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F9ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F9A8u;
            // 0x26f9ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f9a8) {
            ctx->pc = 0x26F9C0u;
            goto label_26f9c0;
        }
    }
    ctx->pc = 0x26F9B0u;
    // 0x26f9b0: 0x51220009  beql        $t1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26F9B0u;
    {
        const bool branch_taken_0x26f9b0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x26f9b0) {
            ctx->pc = 0x26F9B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26F9B0u;
            // 0x26f9b4: 0x8ce801e0  lw          $t0, 0x1E0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 480)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26F9D8u;
            goto label_26f9d8;
        }
    }
    ctx->pc = 0x26F9B8u;
    // 0x26f9b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x26F9B8u;
    {
        const bool branch_taken_0x26f9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F9B8u;
            // 0x26f9bc: 0xad000028  sw          $zero, 0x28($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f9b8) {
            ctx->pc = 0x26F9DCu;
            goto label_26f9dc;
        }
    }
    ctx->pc = 0x26F9C0u;
label_26f9c0:
    // 0x26f9c0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x26f9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26f9c4: 0x51220004  beql        $t1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26F9C4u;
    {
        const bool branch_taken_0x26f9c4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x26f9c4) {
            ctx->pc = 0x26F9C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26F9C4u;
            // 0x26f9c8: 0x8ce801d0  lw          $t0, 0x1D0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 464)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26F9D8u;
            goto label_26f9d8;
        }
    }
    ctx->pc = 0x26F9CCu;
    // 0x26f9cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26F9CCu;
    {
        const bool branch_taken_0x26f9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F9CCu;
            // 0x26f9d0: 0xad000028  sw          $zero, 0x28($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f9cc) {
            ctx->pc = 0x26F9DCu;
            goto label_26f9dc;
        }
    }
    ctx->pc = 0x26F9D4u;
label_26f9d4:
    // 0x26f9d4: 0x8ce801f0  lw          $t0, 0x1F0($a3)
    ctx->pc = 0x26f9d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 496)));
label_26f9d8:
    // 0x26f9d8: 0xad000028  sw          $zero, 0x28($t0)
    ctx->pc = 0x26f9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 0));
label_26f9dc:
    // 0x26f9dc: 0x1a0102d  daddu       $v0, $t5, $zero
    ctx->pc = 0x26f9dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f9e0: 0xdce30838  ld          $v1, 0x838($a3)
    ctx->pc = 0x26f9e0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 2104)));
    // 0x26f9e4: 0x8ce40160  lw          $a0, 0x160($a3)
    ctx->pc = 0x26f9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 352)));
    // 0x26f9e8: 0xfd030018  sd          $v1, 0x18($t0)
    ctx->pc = 0x26f9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 3));
    // 0x26f9ec: 0xad04002c  sw          $a0, 0x2C($t0)
    ctx->pc = 0x26f9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 44), GPR_U32(ctx, 4));
    // 0x26f9f0: 0xdce30840  ld          $v1, 0x840($a3)
    ctx->pc = 0x26f9f0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 2112)));
    // 0x26f9f4: 0x8ce40184  lw          $a0, 0x184($a3)
    ctx->pc = 0x26f9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 388)));
    // 0x26f9f8: 0xfd030020  sd          $v1, 0x20($t0)
    ctx->pc = 0x26f9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 32), GPR_U64(ctx, 3));
    // 0x26f9fc: 0xad040030  sw          $a0, 0x30($t0)
    ctx->pc = 0x26f9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 48), GPR_U32(ctx, 4));
    // 0x26fa00: 0x8ce3014c  lw          $v1, 0x14C($a3)
    ctx->pc = 0x26fa00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 332)));
    // 0x26fa04: 0xad030034  sw          $v1, 0x34($t0)
    ctx->pc = 0x26fa04u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 52), GPR_U32(ctx, 3));
    // 0x26fa08: 0x8ce40198  lw          $a0, 0x198($a3)
    ctx->pc = 0x26fa08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 408)));
    // 0x26fa0c: 0xad040038  sw          $a0, 0x38($t0)
    ctx->pc = 0x26fa0cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 56), GPR_U32(ctx, 4));
    // 0x26fa10: 0x8ce30188  lw          $v1, 0x188($a3)
    ctx->pc = 0x26fa10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 392)));
    // 0x26fa14: 0xad03003c  sw          $v1, 0x3C($t0)
    ctx->pc = 0x26fa14u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 60), GPR_U32(ctx, 3));
    // 0x26fa18: 0x8ce40194  lw          $a0, 0x194($a3)
    ctx->pc = 0x26fa18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 404)));
    // 0x26fa1c: 0xad040040  sw          $a0, 0x40($t0)
    ctx->pc = 0x26fa1cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 64), GPR_U32(ctx, 4));
    // 0x26fa20: 0x8ce3019c  lw          $v1, 0x19C($a3)
    ctx->pc = 0x26fa20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 412)));
    // 0x26fa24: 0xad030044  sw          $v1, 0x44($t0)
    ctx->pc = 0x26fa24u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 68), GPR_U32(ctx, 3));
    // 0x26fa28: 0x8ce401a0  lw          $a0, 0x1A0($a3)
    ctx->pc = 0x26fa28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 416)));
    // 0x26fa2c: 0xad040048  sw          $a0, 0x48($t0)
    ctx->pc = 0x26fa2cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 72), GPR_U32(ctx, 4));
    // 0x26fa30: 0x8ce301a4  lw          $v1, 0x1A4($a3)
    ctx->pc = 0x26fa30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 420)));
    // 0x26fa34: 0xad03004c  sw          $v1, 0x4C($t0)
    ctx->pc = 0x26fa34u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 76), GPR_U32(ctx, 3));
    // 0x26fa38: 0x8ce401a8  lw          $a0, 0x1A8($a3)
    ctx->pc = 0x26fa38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 424)));
    // 0x26fa3c: 0xad040050  sw          $a0, 0x50($t0)
    ctx->pc = 0x26fa3cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 80), GPR_U32(ctx, 4));
    // 0x26fa40: 0x8ce301ac  lw          $v1, 0x1AC($a3)
    ctx->pc = 0x26fa40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 428)));
    // 0x26fa44: 0xad030054  sw          $v1, 0x54($t0)
    ctx->pc = 0x26fa44u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 84), GPR_U32(ctx, 3));
    // 0x26fa48: 0x8ce401b0  lw          $a0, 0x1B0($a3)
    ctx->pc = 0x26fa48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 432)));
    // 0x26fa4c: 0xad040058  sw          $a0, 0x58($t0)
    ctx->pc = 0x26fa4cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 88), GPR_U32(ctx, 4));
    // 0x26fa50: 0x8ce30158  lw          $v1, 0x158($a3)
    ctx->pc = 0x26fa50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 344)));
    // 0x26fa54: 0xad03005c  sw          $v1, 0x5C($t0)
    ctx->pc = 0x26fa54u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 92), GPR_U32(ctx, 3));
    // 0x26fa58: 0x8ce4015c  lw          $a0, 0x15C($a3)
    ctx->pc = 0x26fa58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 348)));
    // 0x26fa5c: 0x3e00008  jr          $ra
    ctx->pc = 0x26FA5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26FA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FA5Cu;
            // 0x26fa60: 0xad040060  sw          $a0, 0x60($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 96), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26F814u: goto label_26f814;
            case 0x26F830u: goto label_26f830;
            case 0x26F858u: goto label_26f858;
            case 0x26F88Cu: goto label_26f88c;
            case 0x26F8B4u: goto label_26f8b4;
            case 0x26F8C0u: goto label_26f8c0;
            case 0x26F8D4u: goto label_26f8d4;
            case 0x26F8E8u: goto label_26f8e8;
            case 0x26F924u: goto label_26f924;
            case 0x26F950u: goto label_26f950;
            case 0x26F97Cu: goto label_26f97c;
            case 0x26F98Cu: goto label_26f98c;
            case 0x26F998u: goto label_26f998;
            case 0x26F99Cu: goto label_26f99c;
            case 0x26F9A0u: goto label_26f9a0;
            case 0x26F9C0u: goto label_26f9c0;
            case 0x26F9D4u: goto label_26f9d4;
            case 0x26F9D8u: goto label_26f9d8;
            case 0x26F9DCu: goto label_26f9dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26FA64u;
    // 0x26fa64: 0x0  nop
    ctx->pc = 0x26fa64u;
    // NOP
}
