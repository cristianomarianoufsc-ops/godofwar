#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00107200
// Address: 0x107200 - 0x107390
void sub_00107200_0x107200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107200_0x107200");
#endif

    ctx->pc = 0x107200u;

    // 0x107200: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x107200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x107204: 0x8c890008  lw          $t1, 0x8($a0)
    ctx->pc = 0x107204u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x107208: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x107208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x10720c: 0x3a0582d  daddu       $t3, $sp, $zero
    ctx->pc = 0x10720cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107210: 0x95220012  lhu         $v0, 0x12($t1)
    ctx->pc = 0x107210u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 18)));
    // 0x107214: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x107214u;
    {
        const bool branch_taken_0x107214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107214u;
            // 0x107218: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107214) {
            ctx->pc = 0x107290u;
            goto label_107290;
        }
    }
    ctx->pc = 0x10721Cu;
    // 0x10721c: 0x0  nop
    ctx->pc = 0x10721cu;
    // NOP
label_107220:
    // 0x107220: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x107220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x107224: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x107224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x107228: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x107228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x10722c: 0x1223021  addu        $a2, $t1, $v0
    ctx->pc = 0x10722cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x107230: 0x8cca000c  lw          $t2, 0xC($a2)
    ctx->pc = 0x107230u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x107234: 0xaa102b  sltu        $v0, $a1, $t2
    ctx->pc = 0x107234u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x107238: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x107238u;
    {
        const bool branch_taken_0x107238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x107238) {
            ctx->pc = 0x10723Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x107238u;
            // 0x10723c: 0x95220012  lhu         $v0, 0x12($t1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 18)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x107280u;
            goto label_107280;
        }
    }
    ctx->pc = 0x107240u;
    // 0x107240: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x107240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x107244: 0x31443  sra         $v0, $v1, 17
    ctx->pc = 0x107244u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 17));
    // 0x107248: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x107248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x10724c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10724cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x107250: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x107250u;
    {
        const bool branch_taken_0x107250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107250u;
            // 0x107254: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x107250) {
            ctx->pc = 0x107290u;
            goto label_107290;
        }
    }
    ctx->pc = 0x107258u;
    // 0x107258: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x107258u;
    {
        const bool branch_taken_0x107258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10725Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107258u;
            // 0x10725c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107258) {
            ctx->pc = 0x107270u;
            goto label_107270;
        }
    }
    ctx->pc = 0x107260u;
    // 0x107260: 0x55600003  bnel        $t3, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x107260u;
    {
        const bool branch_taken_0x107260 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x107260) {
            ctx->pc = 0x107264u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x107260u;
            // 0x107264: 0xad660000  sw          $a2, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x107270u;
            goto label_107270;
        }
    }
    ctx->pc = 0x107268u;
    // 0x107268: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x107268u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x10726c: 0x0  nop
    ctx->pc = 0x10726cu;
    // NOP
label_107270:
    // 0x107270: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x107270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x107274: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x107274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x107278: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x107278u;
    {
        const bool branch_taken_0x107278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10727Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107278u;
            // 0x10727c: 0xc22821  addu        $a1, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107278) {
            ctx->pc = 0x107298u;
            goto label_107298;
        }
    }
    ctx->pc = 0x107280u;
label_107280:
    // 0x107280: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x107280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x107284: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x107284u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x107288: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x107288u;
    {
        const bool branch_taken_0x107288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10728Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107288u;
            // 0x10728c: 0xaa2823  subu        $a1, $a1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107288) {
            ctx->pc = 0x107220u;
            runtime->cooperativeGuestYield();
            goto label_107220;
        }
    }
    ctx->pc = 0x107290u;
label_107290:
    // 0x107290: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x107290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107294: 0x0  nop
    ctx->pc = 0x107294u;
    // NOP
label_107298:
    // 0x107298: 0x8c890014  lw          $t1, 0x14($a0)
    ctx->pc = 0x107298u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x10729c: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x10729cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x1072a0: 0x11240037  beq         $t1, $a0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1072A0u;
    {
        const bool branch_taken_0x1072a0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 4));
        ctx->pc = 0x1072A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1072A0u;
            // 0x1072a4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1072a0) {
            ctx->pc = 0x107380u;
            goto label_107380;
        }
    }
    ctx->pc = 0x1072A8u;
    // 0x1072a8: 0x8d230010  lw          $v1, 0x10($t1)
    ctx->pc = 0x1072a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x1072ac: 0x0  nop
    ctx->pc = 0x1072acu;
    // NOP
label_1072b0:
    // 0x1072b0: 0x30620090  andi        $v0, $v1, 0x90
    ctx->pc = 0x1072b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)144);
    // 0x1072b4: 0x54400030  bnel        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x1072B4u;
    {
        const bool branch_taken_0x1072b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1072b4) {
            ctx->pc = 0x1072B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1072B4u;
            // 0x1072b8: 0x8d290000  lw          $t1, 0x0($t1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x107378u;
            goto label_107378;
        }
    }
    ctx->pc = 0x1072BCu;
    // 0x1072bc: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1072bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1072c0: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1072C0u;
    {
        const bool branch_taken_0x1072c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1072c0) {
            ctx->pc = 0x1072C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1072C0u;
            // 0x1072c4: 0x8d23001c  lw          $v1, 0x1C($t1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x107320u;
            goto label_107320;
        }
    }
    ctx->pc = 0x1072C8u;
    // 0x1072c8: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x1072c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1072cc: 0x252b0008  addiu       $t3, $t1, 0x8
    ctx->pc = 0x1072ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x1072d0: 0x106b0028  beq         $v1, $t3, . + 4 + (0x28 << 2)
    ctx->pc = 0x1072D0u;
    {
        const bool branch_taken_0x1072d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 11));
        ctx->pc = 0x1072D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1072D0u;
            // 0x1072d4: 0xa1080  sll         $v0, $t2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1072d0) {
            ctx->pc = 0x107374u;
            goto label_107374;
        }
    }
    ctx->pc = 0x1072D8u;
    // 0x1072d8: 0x473021  addu        $a2, $v0, $a3
    ctx->pc = 0x1072d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1072dc: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x1072dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_1072e0:
    // 0x1072e0: 0x5445000b  bnel        $v0, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1072E0u;
    {
        const bool branch_taken_0x1072e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1072e0) {
            ctx->pc = 0x1072E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1072E0u;
            // 0x1072e4: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x107310u;
            goto label_107310;
        }
    }
    ctx->pc = 0x1072E8u;
    // 0x1072e8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1072e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x1072ec: 0x30420090  andi        $v0, $v0, 0x90
    ctx->pc = 0x1072ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)144);
    // 0x1072f0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1072F0u;
    {
        const bool branch_taken_0x1072f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1072f0) {
            ctx->pc = 0x1072F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1072F0u;
            // 0x1072f4: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x107310u;
            goto label_107310;
        }
    }
    ctx->pc = 0x1072F8u;
    // 0x1072f8: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1072f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1072fc: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1072fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x107300: 0x148102a  slt         $v0, $t2, $t0
    ctx->pc = 0x107300u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x107304: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x107304u;
    {
        const bool branch_taken_0x107304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107304u;
            // 0x107308: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107304) {
            ctx->pc = 0x107380u;
            goto label_107380;
        }
    }
    ctx->pc = 0x10730Cu;
    // 0x10730c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x10730cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_107310:
    // 0x107310: 0x546bfff3  bnel        $v1, $t3, . + 4 + (-0xD << 2)
    ctx->pc = 0x107310u;
    {
        const bool branch_taken_0x107310 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 11));
        if (branch_taken_0x107310) {
            ctx->pc = 0x107314u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x107310u;
            // 0x107314: 0x8c620038  lw          $v0, 0x38($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1072E0u;
            runtime->cooperativeGuestYield();
            goto label_1072e0;
        }
    }
    ctx->pc = 0x107318u;
    // 0x107318: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x107318u;
    {
        const bool branch_taken_0x107318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10731Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107318u;
            // 0x10731c: 0x8d290000  lw          $t1, 0x0($t1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107318) {
            ctx->pc = 0x107378u;
            goto label_107378;
        }
    }
    ctx->pc = 0x107320u;
label_107320:
    // 0x107320: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x107320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107324: 0x54620014  bnel        $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x107324u;
    {
        const bool branch_taken_0x107324 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x107324) {
            ctx->pc = 0x107328u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x107324u;
            // 0x107328: 0x8d290000  lw          $t1, 0x0($t1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x107378u;
            goto label_107378;
        }
    }
    ctx->pc = 0x10732Cu;
    // 0x10732c: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x10732cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x107330: 0x252b0008  addiu       $t3, $t1, 0x8
    ctx->pc = 0x107330u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x107334: 0x106b000f  beq         $v1, $t3, . + 4 + (0xF << 2)
    ctx->pc = 0x107334u;
    {
        const bool branch_taken_0x107334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 11));
        ctx->pc = 0x107338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107334u;
            // 0x107338: 0xa1080  sll         $v0, $t2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107334) {
            ctx->pc = 0x107374u;
            goto label_107374;
        }
    }
    ctx->pc = 0x10733Cu;
    // 0x10733c: 0x473021  addu        $a2, $v0, $a3
    ctx->pc = 0x10733cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x107340: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x107340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x107344: 0x0  nop
    ctx->pc = 0x107344u;
    // NOP
label_107348:
    // 0x107348: 0x30420090  andi        $v0, $v0, 0x90
    ctx->pc = 0x107348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)144);
    // 0x10734c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x10734Cu;
    {
        const bool branch_taken_0x10734c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10734c) {
            ctx->pc = 0x107350u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10734Cu;
            // 0x107350: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10736Cu;
            goto label_10736c;
        }
    }
    ctx->pc = 0x107354u;
    // 0x107354: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x107354u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x107358: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x107358u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x10735c: 0x148102a  slt         $v0, $t2, $t0
    ctx->pc = 0x10735cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x107360: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x107360u;
    {
        const bool branch_taken_0x107360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107360u;
            // 0x107364: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107360) {
            ctx->pc = 0x107380u;
            goto label_107380;
        }
    }
    ctx->pc = 0x107368u;
    // 0x107368: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x107368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_10736c:
    // 0x10736c: 0x546bfff6  bnel        $v1, $t3, . + 4 + (-0xA << 2)
    ctx->pc = 0x10736Cu;
    {
        const bool branch_taken_0x10736c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 11));
        if (branch_taken_0x10736c) {
            ctx->pc = 0x107370u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10736Cu;
            // 0x107370: 0x8c62002c  lw          $v0, 0x2C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x107348u;
            runtime->cooperativeGuestYield();
            goto label_107348;
        }
    }
    ctx->pc = 0x107374u;
label_107374:
    // 0x107374: 0x8d290000  lw          $t1, 0x0($t1)
    ctx->pc = 0x107374u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_107378:
    // 0x107378: 0x5524ffcd  bnel        $t1, $a0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x107378u;
    {
        const bool branch_taken_0x107378 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 4));
        if (branch_taken_0x107378) {
            ctx->pc = 0x10737Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x107378u;
            // 0x10737c: 0x8d230010  lw          $v1, 0x10($t1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1072B0u;
            runtime->cooperativeGuestYield();
            goto label_1072b0;
        }
    }
    ctx->pc = 0x107380u;
label_107380:
    // 0x107380: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x107380u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107384: 0x3e00008  jr          $ra
    ctx->pc = 0x107384u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107384u;
            // 0x107388: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x107220u: goto label_107220;
            case 0x107270u: goto label_107270;
            case 0x107280u: goto label_107280;
            case 0x107290u: goto label_107290;
            case 0x107298u: goto label_107298;
            case 0x1072B0u: goto label_1072b0;
            case 0x1072E0u: goto label_1072e0;
            case 0x107310u: goto label_107310;
            case 0x107320u: goto label_107320;
            case 0x107348u: goto label_107348;
            case 0x10736Cu: goto label_10736c;
            case 0x107374u: goto label_107374;
            case 0x107378u: goto label_107378;
            case 0x107380u: goto label_107380;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10738Cu;
    // 0x10738c: 0x0  nop
    ctx->pc = 0x10738cu;
    // NOP
}
