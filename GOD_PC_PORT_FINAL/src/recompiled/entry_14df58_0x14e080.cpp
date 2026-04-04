#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_14df58
// Address: 0x14df58 - 0x14e080
void entry_14df58_0x14e080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_14df58_0x14e080");
#endif

    ctx->pc = 0x14df58u;

    // 0x14df58: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x14df58u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x14df5c: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x14df5cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14df60: 0x8d063118  lw          $a2, 0x3118($t0)
    ctx->pc = 0x14df60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12568)));
    // 0x14df64: 0x28c20200  slti        $v0, $a2, 0x200
    ctx->pc = 0x14df64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x14df68: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x14DF68u;
    {
        const bool branch_taken_0x14df68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DF6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DF68u;
            // 0x14df6c: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14df68) {
            ctx->pc = 0x14DFC0u;
            goto label_14dfc0;
        }
    }
    ctx->pc = 0x14DF70u;
    // 0x14df70: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x14df70u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x14df74: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x14df74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x14df78: 0x24e41910  addiu       $a0, $a3, 0x1910
    ctx->pc = 0x14df78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 6416));
    // 0x14df7c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x14df7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x14df80: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14df80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14df84: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x14df84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x14df88: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14df88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14df8c: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x14DF8Cu;
    {
        const bool branch_taken_0x14df8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x14DF90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DF8Cu;
            // 0x14df90: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14df8c) {
            ctx->pc = 0x14DFC4u;
            goto label_14dfc4;
        }
    }
    ctx->pc = 0x14DF94u;
    // 0x14df94: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x14df94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_14df98:
    // 0x14df98: 0x28c20200  slti        $v0, $a2, 0x200
    ctx->pc = 0x14df98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x14df9c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14DF9Cu;
    {
        const bool branch_taken_0x14df9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DFA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DF9Cu;
            // 0x14dfa0: 0x24e31910  addiu       $v1, $a3, 0x1910 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 6416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14df9c) {
            ctx->pc = 0x14DFC0u;
            goto label_14dfc0;
        }
    }
    ctx->pc = 0x14DFA4u;
    // 0x14dfa4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x14dfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x14dfa8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14dfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14dfac: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x14dfacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x14dfb0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14dfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14dfb4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x14dfb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x14dfb8: 0x5043fff7  beql        $v0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x14DFB8u;
    {
        const bool branch_taken_0x14dfb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x14dfb8) {
            ctx->pc = 0x14DFBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14DFB8u;
            // 0x14dfbc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14DF98u;
            runtime->cooperativeGuestYield();
            goto label_14df98;
        }
    }
    ctx->pc = 0x14DFC0u;
label_14dfc0:
    // 0x14dfc0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x14dfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_14dfc4:
    // 0x14dfc4: 0xad063118  sw          $a2, 0x3118($t0)
    ctx->pc = 0x14dfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12568), GPR_U32(ctx, 6));
    // 0x14dfc8: 0x244e1910  addiu       $t6, $v0, 0x1910
    ctx->pc = 0x14dfc8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 6416));
    // 0x14dfcc: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x14dfccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x14dfd0: 0x28c24000  slti        $v0, $a2, 0x4000
    ctx->pc = 0x14dfd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x14dfd4: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x14DFD4u;
    {
        const bool branch_taken_0x14dfd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dfd4) {
            ctx->pc = 0x14DFD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14DFD4u;
            // 0x14dfd8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14E078u;
            goto label_14e078;
        }
    }
    ctx->pc = 0x14DFDCu;
    // 0x14dfdc: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x14dfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_14dfe0:
    // 0x14dfe0: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x14dfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x14dfe4: 0x30ca001f  andi        $t2, $a2, 0x1F
    ctx->pc = 0x14dfe4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
    // 0x14dfe8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x14dfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x14dfec: 0x4a5823  subu        $t3, $v0, $t2
    ctx->pc = 0x14dfecu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x14dff0: 0x2c634001  sltiu       $v1, $v1, 0x4001
    ctx->pc = 0x14dff0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16385) ? 1 : 0);
    // 0x14dff4: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x14DFF4u;
    {
        const bool branch_taken_0x14dff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DFF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DFF4u;
            // 0x14dff8: 0x61143  sra         $v0, $a2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dff4) {
            ctx->pc = 0x14E074u;
            goto label_14e074;
        }
    }
    ctx->pc = 0x14DFFCu;
    // 0x14dffc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14dffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14e000: 0x1a0402d  daddu       $t0, $t5, $zero
    ctx->pc = 0x14e000u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e004: 0x4e2021  addu        $a0, $v0, $t6
    ctx->pc = 0x14e004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x14e008: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x14E008u;
    {
        const bool branch_taken_0x14e008 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E00Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E008u;
            // 0x14e00c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e008) {
            ctx->pc = 0x14E054u;
            goto label_14e054;
        }
    }
    ctx->pc = 0x14E010u;
    // 0x14e010: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14E010u;
    {
        const bool branch_taken_0x14e010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E010u;
            // 0x14e014: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e010) {
            ctx->pc = 0x14E02Cu;
            goto label_14e02c;
        }
    }
    ctx->pc = 0x14E018u;
label_14e018:
    // 0x14e018: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x14e018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x14e01c: 0xe5102b  sltu        $v0, $a3, $a1
    ctx->pc = 0x14e01cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x14e020: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x14E020u;
    {
        const bool branch_taken_0x14e020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E020u;
            // 0x14e024: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e020) {
            ctx->pc = 0x14E054u;
            goto label_14e054;
        }
    }
    ctx->pc = 0x14E028u;
    // 0x14e028: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x14e028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_14e02c:
    // 0x14e02c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x14e02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14e030: 0x1624806  srlv        $t1, $v0, $t3
    ctx->pc = 0x14e030u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 11) & 0x1F));
    // 0x14e034: 0x1421004  sllv        $v0, $v0, $t2
    ctx->pc = 0x14e034u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 10) & 0x1F));
    // 0x14e038: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x14e038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14e03c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14E03Cu;
    {
        const bool branch_taken_0x14e03c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e03c) {
            ctx->pc = 0x14E054u;
            goto label_14e054;
        }
    }
    ctx->pc = 0x14E044u;
    // 0x14e044: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x14e044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14e048: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x14e048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x14e04c: 0x5040fff2  beql        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x14E04Cu;
    {
        const bool branch_taken_0x14e04c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e04c) {
            ctx->pc = 0x14E050u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14E04Cu;
            // 0x14e050: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14E018u;
            runtime->cooperativeGuestYield();
            goto label_14e018;
        }
    }
    ctx->pc = 0x14E054u;
label_14e054:
    // 0x14e054: 0x54e50002  bnel        $a3, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x14E054u;
    {
        const bool branch_taken_0x14e054 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        if (branch_taken_0x14e054) {
            ctx->pc = 0x14E058u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14E054u;
            // 0x14e058: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14E060u;
            goto label_14e060;
        }
    }
    ctx->pc = 0x14E05Cu;
    // 0x14e05c: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x14e05cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14e060:
    // 0x14e060: 0x15800005  bnez        $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x14E060u;
    {
        const bool branch_taken_0x14e060 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E060u;
            // 0x14e064: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e060) {
            ctx->pc = 0x14E078u;
            goto label_14e078;
        }
    }
    ctx->pc = 0x14E068u;
    // 0x14e068: 0x28c24000  slti        $v0, $a2, 0x4000
    ctx->pc = 0x14e068u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x14e06c: 0x5440ffdc  bnel        $v0, $zero, . + 4 + (-0x24 << 2)
    ctx->pc = 0x14E06Cu;
    {
        const bool branch_taken_0x14e06c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e06c) {
            ctx->pc = 0x14E070u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14E06Cu;
            // 0x14e070: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14DFE0u;
            runtime->cooperativeGuestYield();
            goto label_14dfe0;
        }
    }
    ctx->pc = 0x14E074u;
label_14e074:
    // 0x14e074: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x14e074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14e078:
    // 0x14e078: 0x3e00008  jr          $ra
    ctx->pc = 0x14E078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E078u;
            // 0x14e07c: 0xcc100b  movn        $v0, $a2, $t4 (Delay Slot)
        if (GPR_U64(ctx, 12) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14DF98u: goto label_14df98;
            case 0x14DFC0u: goto label_14dfc0;
            case 0x14DFC4u: goto label_14dfc4;
            case 0x14DFE0u: goto label_14dfe0;
            case 0x14E018u: goto label_14e018;
            case 0x14E02Cu: goto label_14e02c;
            case 0x14E054u: goto label_14e054;
            case 0x14E060u: goto label_14e060;
            case 0x14E074u: goto label_14e074;
            case 0x14E078u: goto label_14e078;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14E080u;
}
