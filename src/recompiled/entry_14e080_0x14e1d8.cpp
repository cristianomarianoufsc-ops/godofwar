#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_14e080
// Address: 0x14e080 - 0x14e1d8
void entry_14e080_0x14e1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_14e080_0x14e1d8");
#endif

    ctx->pc = 0x14e080u;

    // 0x14e080: 0x3c0a0033  lui         $t2, 0x33
    ctx->pc = 0x14e080u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)51 << 16));
    // 0x14e084: 0x8d46311c  lw          $a2, 0x311C($t2)
    ctx->pc = 0x14e084u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12572)));
    // 0x14e088: 0x28c20200  slti        $v0, $a2, 0x200
    ctx->pc = 0x14e088u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x14e08c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x14E08Cu;
    {
        const bool branch_taken_0x14e08c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E08Cu;
            // 0x14e090: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e08c) {
            ctx->pc = 0x14E0ECu;
            goto label_14e0ec;
        }
    }
    ctx->pc = 0x14E094u;
    // 0x14e094: 0x3c090033  lui         $t1, 0x33
    ctx->pc = 0x14e094u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)51 << 16));
    // 0x14e098: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x14e098u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x14e09c: 0x25281910  addiu       $t0, $t1, 0x1910
    ctx->pc = 0x14e09cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 6416));
    // 0x14e0a0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x14e0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x14e0a4: 0x1071821  addu        $v1, $t0, $a3
    ctx->pc = 0x14e0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x14e0a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x14e0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x14e0ac: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x14E0ACu;
    {
        const bool branch_taken_0x14e0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E0B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E0ACu;
            // 0x14e0b0: 0x8c630800  lw          $v1, 0x800($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e0ac) {
            ctx->pc = 0x14E0D8u;
            goto label_14e0d8;
        }
    }
    ctx->pc = 0x14E0B4u;
    // 0x14e0b4: 0x0  nop
    ctx->pc = 0x14e0b4u;
    // NOP
label_14e0b8:
    // 0x14e0b8: 0x28c20200  slti        $v0, $a2, 0x200
    ctx->pc = 0x14e0b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x14e0bc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x14E0BCu;
    {
        const bool branch_taken_0x14e0bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E0C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E0BCu;
            // 0x14e0c0: 0x25281910  addiu       $t0, $t1, 0x1910 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 6416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e0bc) {
            ctx->pc = 0x14E0ECu;
            goto label_14e0ec;
        }
    }
    ctx->pc = 0x14E0C4u;
    // 0x14e0c4: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x14e0c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x14e0c8: 0x1071821  addu        $v1, $t0, $a3
    ctx->pc = 0x14e0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x14e0cc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x14e0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x14e0d0: 0x8c630800  lw          $v1, 0x800($v1)
    ctx->pc = 0x14e0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2048)));
    // 0x14e0d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x14e0d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_14e0d8:
    // 0x14e0d8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14E0D8u;
    {
        const bool branch_taken_0x14e0d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x14E0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E0D8u;
            // 0x14e0dc: 0x1071021  addu        $v0, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e0d8) {
            ctx->pc = 0x14E0ECu;
            goto label_14e0ec;
        }
    }
    ctx->pc = 0x14E0E0u;
    // 0x14e0e0: 0x8c421000  lw          $v0, 0x1000($v0)
    ctx->pc = 0x14e0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4096)));
    // 0x14e0e4: 0x5043fff4  beql        $v0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x14E0E4u;
    {
        const bool branch_taken_0x14e0e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x14e0e4) {
            ctx->pc = 0x14E0E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14E0E4u;
            // 0x14e0e8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14E0B8u;
            runtime->cooperativeGuestYield();
            goto label_14e0b8;
        }
    }
    ctx->pc = 0x14E0ECu;
label_14e0ec:
    // 0x14e0ec: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x14e0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x14e0f0: 0xad46311c  sw          $a2, 0x311C($t2)
    ctx->pc = 0x14e0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12572), GPR_U32(ctx, 6));
    // 0x14e0f4: 0x244f2110  addiu       $t7, $v0, 0x2110
    ctx->pc = 0x14e0f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 8464));
    // 0x14e0f8: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x14e0f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x14e0fc: 0x28c24000  slti        $v0, $a2, 0x4000
    ctx->pc = 0x14e0fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x14e100: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x14E100u;
    {
        const bool branch_taken_0x14e100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E100u;
            // 0x14e104: 0x25f80800  addiu       $t8, $t7, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 15), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e100) {
            ctx->pc = 0x14E1CCu;
            goto label_14e1cc;
        }
    }
    ctx->pc = 0x14E108u;
    // 0x14e108: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x14e108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x14e10c: 0x0  nop
    ctx->pc = 0x14e10cu;
    // NOP
label_14e110:
    // 0x14e110: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x14e110u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x14e114: 0x30cc001f  andi        $t4, $a2, 0x1F
    ctx->pc = 0x14e114u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
    // 0x14e118: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x14e118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x14e11c: 0x4c6823  subu        $t5, $v0, $t4
    ctx->pc = 0x14e11cu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x14e120: 0x2c634001  sltiu       $v1, $v1, 0x4001
    ctx->pc = 0x14e120u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16385) ? 1 : 0);
    // 0x14e124: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x14E124u;
    {
        const bool branch_taken_0x14e124 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E124u;
            // 0x14e128: 0x61143  sra         $v0, $a2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e124) {
            ctx->pc = 0x14E1CCu;
            goto label_14e1cc;
        }
    }
    ctx->pc = 0x14E12Cu;
    // 0x14e12c: 0x10a0001f  beqz        $a1, . + 4 + (0x1F << 2)
    ctx->pc = 0x14E12Cu;
    {
        const bool branch_taken_0x14e12c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E12Cu;
            // 0x14e130: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e12c) {
            ctx->pc = 0x14E1ACu;
            goto label_14e1ac;
        }
    }
    ctx->pc = 0x14E134u;
    // 0x14e134: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14e134u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14e138: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x14e138u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e13c: 0x4f4021  addu        $t0, $v0, $t7
    ctx->pc = 0x14e13cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x14e140: 0x583821  addu        $a3, $v0, $t8
    ctx->pc = 0x14e140u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x14e144: 0x0  nop
    ctx->pc = 0x14e144u;
    // NOP
label_14e148:
    // 0x14e148: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x14e148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x14e14c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x14e14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x14e150: 0x1a35806  srlv        $t3, $v1, $t5
    ctx->pc = 0x14e150u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 13) & 0x1F));
    // 0x14e154: 0x1831804  sllv        $v1, $v1, $t4
    ctx->pc = 0x14e154u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 12) & 0x1F));
    // 0x14e158: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14e158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14e15c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x14E15Cu;
    {
        const bool branch_taken_0x14e15c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e15c) {
            ctx->pc = 0x14E1ACu;
            goto label_14e1ac;
        }
    }
    ctx->pc = 0x14E164u;
    // 0x14e164: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x14e164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x14e168: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x14e168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
    // 0x14e16c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x14E16Cu;
    {
        const bool branch_taken_0x14e16c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e16c) {
            ctx->pc = 0x14E1ACu;
            goto label_14e1ac;
        }
    }
    ctx->pc = 0x14E174u;
    // 0x14e174: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x14e174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14e178: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14e178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14e17c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x14E17Cu;
    {
        const bool branch_taken_0x14e17c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e17c) {
            ctx->pc = 0x14E1ACu;
            goto label_14e1ac;
        }
    }
    ctx->pc = 0x14E184u;
    // 0x14e184: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x14e184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x14e188: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x14e188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
    // 0x14e18c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14E18Cu;
    {
        const bool branch_taken_0x14e18c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e18c) {
            ctx->pc = 0x14E1ACu;
            goto label_14e1ac;
        }
    }
    ctx->pc = 0x14E194u;
    // 0x14e194: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x14e194u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x14e198: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x14e198u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x14e19c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x14e19cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x14e1a0: 0x125102b  sltu        $v0, $t1, $a1
    ctx->pc = 0x14e1a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x14e1a4: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x14E1A4u;
    {
        const bool branch_taken_0x14e1a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E1A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E1A4u;
            // 0x14e1a8: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e1a4) {
            ctx->pc = 0x14E148u;
            runtime->cooperativeGuestYield();
            goto label_14e148;
        }
    }
    ctx->pc = 0x14E1ACu;
label_14e1ac:
    // 0x14e1ac: 0x55250002  bnel        $t1, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x14E1ACu;
    {
        const bool branch_taken_0x14e1ac = (GPR_U64(ctx, 9) != GPR_U64(ctx, 5));
        if (branch_taken_0x14e1ac) {
            ctx->pc = 0x14E1B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14E1ACu;
            // 0x14e1b0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14E1B8u;
            goto label_14e1b8;
        }
    }
    ctx->pc = 0x14E1B4u;
    // 0x14e1b4: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x14e1b4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14e1b8:
    // 0x14e1b8: 0x15c00005  bnez        $t6, . + 4 + (0x5 << 2)
    ctx->pc = 0x14E1B8u;
    {
        const bool branch_taken_0x14e1b8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E1B8u;
            // 0x14e1bc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e1b8) {
            ctx->pc = 0x14E1D0u;
            goto label_14e1d0;
        }
    }
    ctx->pc = 0x14E1C0u;
    // 0x14e1c0: 0x28c24000  slti        $v0, $a2, 0x4000
    ctx->pc = 0x14e1c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x14e1c4: 0x5440ffd2  bnel        $v0, $zero, . + 4 + (-0x2E << 2)
    ctx->pc = 0x14E1C4u;
    {
        const bool branch_taken_0x14e1c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e1c4) {
            ctx->pc = 0x14E1C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14E1C4u;
            // 0x14e1c8: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14E110u;
            runtime->cooperativeGuestYield();
            goto label_14e110;
        }
    }
    ctx->pc = 0x14E1CCu;
label_14e1cc:
    // 0x14e1cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x14e1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14e1d0:
    // 0x14e1d0: 0x3e00008  jr          $ra
    ctx->pc = 0x14E1D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E1D0u;
            // 0x14e1d4: 0xce100b  movn        $v0, $a2, $t6 (Delay Slot)
        if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14E0B8u: goto label_14e0b8;
            case 0x14E0D8u: goto label_14e0d8;
            case 0x14E0ECu: goto label_14e0ec;
            case 0x14E110u: goto label_14e110;
            case 0x14E148u: goto label_14e148;
            case 0x14E1ACu: goto label_14e1ac;
            case 0x14E1B8u: goto label_14e1b8;
            case 0x14E1CCu: goto label_14e1cc;
            case 0x14E1D0u: goto label_14e1d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14E1D8u;
}
