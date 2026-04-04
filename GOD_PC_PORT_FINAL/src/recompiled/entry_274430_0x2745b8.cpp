#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_274430
// Address: 0x274430 - 0x2745b8
void entry_274430_0x2745b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_274430_0x2745b8");
#endif

    ctx->pc = 0x274430u;

    // 0x274430: 0x8c830184  lw          $v1, 0x184($a0)
    ctx->pc = 0x274430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
    // 0x274434: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x274434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x274438: 0x14620045  bne         $v1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x274438u;
    {
        const bool branch_taken_0x274438 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x274438) {
            ctx->pc = 0x274550u;
            goto label_274550;
        }
    }
    ctx->pc = 0x274440u;
    // 0x274440: 0x8c820188  lw          $v0, 0x188($a0)
    ctx->pc = 0x274440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 392)));
    // 0x274444: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x274444u;
    {
        const bool branch_taken_0x274444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x274444) {
            ctx->pc = 0x274448u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x274444u;
            // 0x274448: 0x71040  sll         $v0, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2744D8u;
            goto label_2744d8;
        }
    }
    ctx->pc = 0x27444Cu;
    // 0x27444c: 0x18e00004  blez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x27444Cu;
    {
        const bool branch_taken_0x27444c = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x274450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27444Cu;
            // 0x274450: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27444c) {
            ctx->pc = 0x274460u;
            goto label_274460;
        }
    }
    ctx->pc = 0x274454u;
    // 0x274454: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x274454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x274458: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x274458u;
    {
        const bool branch_taken_0x274458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27445Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274458u;
            // 0x27445c: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274458) {
            ctx->pc = 0x274464u;
            goto label_274464;
        }
    }
    ctx->pc = 0x274460u;
label_274460:
    // 0x274460: 0x71043  sra         $v0, $a3, 1
    ctx->pc = 0x274460u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
label_274464:
    // 0x274464: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x274464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x274468: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x274468u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x27446c: 0x19000004  blez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27446Cu;
    {
        const bool branch_taken_0x27446c = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x274470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27446Cu;
            // 0x274470: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27446c) {
            ctx->pc = 0x274480u;
            goto label_274480;
        }
    }
    ctx->pc = 0x274474u;
    // 0x274474: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x274474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x274478: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x274478u;
    {
        const bool branch_taken_0x274478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27447Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274478u;
            // 0x27447c: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274478) {
            ctx->pc = 0x274484u;
            goto label_274484;
        }
    }
    ctx->pc = 0x274480u;
label_274480:
    // 0x274480: 0x81043  sra         $v0, $t0, 1
    ctx->pc = 0x274480u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
label_274484:
    // 0x274484: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x274484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x274488: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x274488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x27448c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x27448cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x274490: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x274490u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x274494: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x274494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x274498: 0x18e00002  blez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x274498u;
    {
        const bool branch_taken_0x274498 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x27449Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274498u;
            // 0x27449c: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274498) {
            ctx->pc = 0x2744A4u;
            goto label_2744a4;
        }
    }
    ctx->pc = 0x2744A0u;
    // 0x2744a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2744a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2744a4:
    // 0x2744a4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2744a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2744a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2744a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2744ac: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x2744acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x2744b0: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x2744b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x2744b4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2744b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2744b8: 0x19000002  blez        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2744B8u;
    {
        const bool branch_taken_0x2744b8 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x2744BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2744B8u;
            // 0x2744bc: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2744b8) {
            ctx->pc = 0x2744C4u;
            goto label_2744c4;
        }
    }
    ctx->pc = 0x2744C0u;
    // 0x2744c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2744c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2744c4:
    // 0x2744c4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2744c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_2744c8:
    // 0x2744c8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2744c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2744cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2744ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2744d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2744D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2744D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2744D0u;
            // 0x2744d4: 0xaca2000c  sw          $v0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x274460u: goto label_274460;
            case 0x274464u: goto label_274464;
            case 0x274480u: goto label_274480;
            case 0x274484u: goto label_274484;
            case 0x2744A4u: goto label_2744a4;
            case 0x2744C4u: goto label_2744c4;
            case 0x2744C8u: goto label_2744c8;
            case 0x2744D8u: goto label_2744d8;
            case 0x2744E8u: goto label_2744e8;
            case 0x274508u: goto label_274508;
            case 0x27452Cu: goto label_27452c;
            case 0x274530u: goto label_274530;
            case 0x274548u: goto label_274548;
            case 0x274550u: goto label_274550;
            case 0x274564u: goto label_274564;
            case 0x274568u: goto label_274568;
            case 0x274584u: goto label_274584;
            case 0x274588u: goto label_274588;
            case 0x2745ACu: goto label_2745ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2744D8u;
label_2744d8:
    // 0x2744d8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2744d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2744dc: 0x18e00002  blez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x2744DCu;
    {
        const bool branch_taken_0x2744dc = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x2744E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2744DCu;
            // 0x2744e0: 0x471021  addu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2744dc) {
            ctx->pc = 0x2744E8u;
            goto label_2744e8;
        }
    }
    ctx->pc = 0x2744E4u;
    // 0x2744e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2744e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2744e8:
    // 0x2744e8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2744e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2744ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2744ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2744f0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2744f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2744f4: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x2744f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x2744f8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2744f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2744fc: 0x19000002  blez        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2744FCu;
    {
        const bool branch_taken_0x2744fc = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x274500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2744FCu;
            // 0x274500: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2744fc) {
            ctx->pc = 0x274508u;
            goto label_274508;
        }
    }
    ctx->pc = 0x274504u;
    // 0x274504: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x274504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_274508:
    // 0x274508: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x274508u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x27450c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27450cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x274510: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x274510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x274514: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x274514u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x274518: 0x18e00004  blez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x274518u;
    {
        const bool branch_taken_0x274518 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x27451Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274518u;
            // 0x27451c: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274518) {
            ctx->pc = 0x27452Cu;
            goto label_27452c;
        }
    }
    ctx->pc = 0x274520u;
    // 0x274520: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x274520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x274524: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x274524u;
    {
        const bool branch_taken_0x274524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274524u;
            // 0x274528: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274524) {
            ctx->pc = 0x274530u;
            goto label_274530;
        }
    }
    ctx->pc = 0x27452Cu;
label_27452c:
    // 0x27452c: 0x71043  sra         $v0, $a3, 1
    ctx->pc = 0x27452cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
label_274530:
    // 0x274530: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x274530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x274534: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x274534u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x274538: 0x19000003  blez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x274538u;
    {
        const bool branch_taken_0x274538 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x27453Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274538u;
            // 0x27453c: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274538) {
            ctx->pc = 0x274548u;
            goto label_274548;
        }
    }
    ctx->pc = 0x274540u;
    // 0x274540: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x274540u;
    {
        const bool branch_taken_0x274540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274540u;
            // 0x274544: 0x25020001  addiu       $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274540) {
            ctx->pc = 0x2744C4u;
            runtime->cooperativeGuestYield();
            goto label_2744c4;
        }
    }
    ctx->pc = 0x274548u;
label_274548:
    // 0x274548: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x274548u;
    {
        const bool branch_taken_0x274548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27454Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274548u;
            // 0x27454c: 0x81043  sra         $v0, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274548) {
            ctx->pc = 0x2744C8u;
            runtime->cooperativeGuestYield();
            goto label_2744c8;
        }
    }
    ctx->pc = 0x274550u;
label_274550:
    // 0x274550: 0x18e00004  blez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x274550u;
    {
        const bool branch_taken_0x274550 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x274554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274550u;
            // 0x274554: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274550) {
            ctx->pc = 0x274564u;
            goto label_274564;
        }
    }
    ctx->pc = 0x274558u;
    // 0x274558: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x274558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x27455c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27455Cu;
    {
        const bool branch_taken_0x27455c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27455Cu;
            // 0x274560: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27455c) {
            ctx->pc = 0x274568u;
            goto label_274568;
        }
    }
    ctx->pc = 0x274564u;
label_274564:
    // 0x274564: 0x71043  sra         $v0, $a3, 1
    ctx->pc = 0x274564u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
label_274568:
    // 0x274568: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x274568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27456c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x27456cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x274570: 0x19000004  blez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x274570u;
    {
        const bool branch_taken_0x274570 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x274574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274570u;
            // 0x274574: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274570) {
            ctx->pc = 0x274584u;
            goto label_274584;
        }
    }
    ctx->pc = 0x274578u;
    // 0x274578: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x274578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x27457c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27457Cu;
    {
        const bool branch_taken_0x27457c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27457Cu;
            // 0x274580: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27457c) {
            ctx->pc = 0x274588u;
            goto label_274588;
        }
    }
    ctx->pc = 0x274584u;
label_274584:
    // 0x274584: 0x81043  sra         $v0, $t0, 1
    ctx->pc = 0x274584u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
label_274588:
    // 0x274588: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x274588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x27458c: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x27458cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x274590: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x274590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274594: 0x8c820184  lw          $v0, 0x184($a0)
    ctx->pc = 0x274594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
    // 0x274598: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x274598u;
    {
        const bool branch_taken_0x274598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x27459Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274598u;
            // 0x27459c: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274598) {
            ctx->pc = 0x2745ACu;
            goto label_2745ac;
        }
    }
    ctx->pc = 0x2745A0u;
    // 0x2745a0: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x2745a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2745a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2745A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2745A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2745A4u;
            // 0x2745a8: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x274460u: goto label_274460;
            case 0x274464u: goto label_274464;
            case 0x274480u: goto label_274480;
            case 0x274484u: goto label_274484;
            case 0x2744A4u: goto label_2744a4;
            case 0x2744C4u: goto label_2744c4;
            case 0x2744C8u: goto label_2744c8;
            case 0x2744D8u: goto label_2744d8;
            case 0x2744E8u: goto label_2744e8;
            case 0x274508u: goto label_274508;
            case 0x27452Cu: goto label_27452c;
            case 0x274530u: goto label_274530;
            case 0x274548u: goto label_274548;
            case 0x274550u: goto label_274550;
            case 0x274564u: goto label_274564;
            case 0x274568u: goto label_274568;
            case 0x274584u: goto label_274584;
            case 0x274588u: goto label_274588;
            case 0x2745ACu: goto label_2745ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2745ACu;
label_2745ac:
    // 0x2745ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2745ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2745B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2745ACu;
            // 0x2745b0: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x274460u: goto label_274460;
            case 0x274464u: goto label_274464;
            case 0x274480u: goto label_274480;
            case 0x274484u: goto label_274484;
            case 0x2744A4u: goto label_2744a4;
            case 0x2744C4u: goto label_2744c4;
            case 0x2744C8u: goto label_2744c8;
            case 0x2744D8u: goto label_2744d8;
            case 0x2744E8u: goto label_2744e8;
            case 0x274508u: goto label_274508;
            case 0x27452Cu: goto label_27452c;
            case 0x274530u: goto label_274530;
            case 0x274548u: goto label_274548;
            case 0x274550u: goto label_274550;
            case 0x274564u: goto label_274564;
            case 0x274568u: goto label_274568;
            case 0x274584u: goto label_274584;
            case 0x274588u: goto label_274588;
            case 0x2745ACu: goto label_2745ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2745B4u;
    // 0x2745b4: 0x0  nop
    ctx->pc = 0x2745b4u;
    // NOP
}
