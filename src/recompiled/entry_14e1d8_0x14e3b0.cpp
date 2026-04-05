#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_14e1d8
// Address: 0x14e1d8 - 0x14e3b0
void entry_14e1d8_0x14e3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_14e1d8_0x14e3b0");
#endif

    ctx->pc = 0x14e1d8u;

    // 0x14e1d8: 0x80c02d  daddu       $t8, $a0, $zero
    ctx->pc = 0x14e1d8u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e1dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14e1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14e1e0: 0x14c2001d  bne         $a2, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x14E1E0u;
    {
        const bool branch_taken_0x14e1e0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x14E1E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E1E0u;
            // 0x14e1e4: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e1e0) {
            ctx->pc = 0x14E258u;
            goto label_14e258;
        }
    }
    ctx->pc = 0x14E1E8u;
    // 0x14e1e8: 0x3c090033  lui         $t1, 0x33
    ctx->pc = 0x14e1e8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)51 << 16));
    // 0x14e1ec: 0x8d273120  lw          $a3, 0x3120($t1)
    ctx->pc = 0x14e1ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12576)));
    // 0x14e1f0: 0x28e20200  slti        $v0, $a3, 0x200
    ctx->pc = 0x14e1f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x14e1f4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x14E1F4u;
    {
        const bool branch_taken_0x14e1f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E1F4u;
            // 0x14e1f8: 0x71880  sll         $v1, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e1f4) {
            ctx->pc = 0x14E250u;
            goto label_14e250;
        }
    }
    ctx->pc = 0x14E1FCu;
    // 0x14e1fc: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x14e1fcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x14e200: 0x25041910  addiu       $a0, $t0, 0x1910
    ctx->pc = 0x14e200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 6416));
    // 0x14e204: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x14e204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x14e208: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14e208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14e20c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x14e20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x14e210: 0x8c630800  lw          $v1, 0x800($v1)
    ctx->pc = 0x14e210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2048)));
    // 0x14e214: 0x5462002c  bnel        $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x14E214u;
    {
        const bool branch_taken_0x14e214 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14e214) {
            ctx->pc = 0x14E218u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14E214u;
            // 0x14e218: 0xad273120  sw          $a3, 0x3120($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 12576), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14E2C8u;
            goto label_14e2c8;
        }
    }
    ctx->pc = 0x14E21Cu;
    // 0x14e21c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x14e21cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_14e220:
    // 0x14e220: 0x28e20200  slti        $v0, $a3, 0x200
    ctx->pc = 0x14e220u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x14e224: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14E224u;
    {
        const bool branch_taken_0x14e224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E224u;
            // 0x14e228: 0x612c0  sll         $v0, $a2, 11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e224) {
            ctx->pc = 0x14E250u;
            goto label_14e250;
        }
    }
    ctx->pc = 0x14E22Cu;
    // 0x14e22c: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x14e22cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x14e230: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14e230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14e234: 0x25021910  addiu       $v0, $t0, 0x1910
    ctx->pc = 0x14e234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 6416));
    // 0x14e238: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14e238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14e23c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x14e23cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x14e240: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14e240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14e244: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x14e244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x14e248: 0x5062fff5  beql        $v1, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x14E248u;
    {
        const bool branch_taken_0x14e248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14e248) {
            ctx->pc = 0x14E24Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14E248u;
            // 0x14e24c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14E220u;
            runtime->cooperativeGuestYield();
            goto label_14e220;
        }
    }
    ctx->pc = 0x14E250u;
label_14e250:
    // 0x14e250: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x14E250u;
    {
        const bool branch_taken_0x14e250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E250u;
            // 0x14e254: 0xad273120  sw          $a3, 0x3120($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 12576), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e250) {
            ctx->pc = 0x14E2C8u;
            goto label_14e2c8;
        }
    }
    ctx->pc = 0x14E258u;
label_14e258:
    // 0x14e258: 0x3c0a0033  lui         $t2, 0x33
    ctx->pc = 0x14e258u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)51 << 16));
    // 0x14e25c: 0x8d473124  lw          $a3, 0x3124($t2)
    ctx->pc = 0x14e25cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12580)));
    // 0x14e260: 0x28e20200  slti        $v0, $a3, 0x200
    ctx->pc = 0x14e260u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x14e264: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x14E264u;
    {
        const bool branch_taken_0x14e264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E264u;
            // 0x14e268: 0x71880  sll         $v1, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e264) {
            ctx->pc = 0x14E2C4u;
            goto label_14e2c4;
        }
    }
    ctx->pc = 0x14E26Cu;
    // 0x14e26c: 0x3c090033  lui         $t1, 0x33
    ctx->pc = 0x14e26cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)51 << 16));
    // 0x14e270: 0x642c0  sll         $t0, $a2, 11
    ctx->pc = 0x14e270u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 11));
    // 0x14e274: 0x25241910  addiu       $a0, $t1, 0x1910
    ctx->pc = 0x14e274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 6416));
    // 0x14e278: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x14e278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x14e27c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x14e27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x14e280: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14e280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14e284: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x14e284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x14e288: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14e288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14e28c: 0x5462000e  bnel        $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x14E28Cu;
    {
        const bool branch_taken_0x14e28c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14e28c) {
            ctx->pc = 0x14E290u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14E28Cu;
            // 0x14e290: 0xad473124  sw          $a3, 0x3124($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 12580), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14E2C8u;
            goto label_14e2c8;
        }
    }
    ctx->pc = 0x14E294u;
    // 0x14e294: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x14e294u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_14e298:
    // 0x14e298: 0x28e20200  slti        $v0, $a3, 0x200
    ctx->pc = 0x14e298u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x14e29c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14E29Cu;
    {
        const bool branch_taken_0x14e29c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E2A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E29Cu;
            // 0x14e2a0: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e29c) {
            ctx->pc = 0x14E2C4u;
            goto label_14e2c4;
        }
    }
    ctx->pc = 0x14E2A4u;
    // 0x14e2a4: 0x25241910  addiu       $a0, $t1, 0x1910
    ctx->pc = 0x14e2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 6416));
    // 0x14e2a8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x14e2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x14e2ac: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x14e2acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x14e2b0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x14e2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x14e2b4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x14e2b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x14e2b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14e2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e2bc: 0x5043fff6  beql        $v0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x14E2BCu;
    {
        const bool branch_taken_0x14e2bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x14e2bc) {
            ctx->pc = 0x14E2C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14E2BCu;
            // 0x14e2c0: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14E298u;
            runtime->cooperativeGuestYield();
            goto label_14e298;
        }
    }
    ctx->pc = 0x14E2C4u;
label_14e2c4:
    // 0x14e2c4: 0xad473124  sw          $a3, 0x3124($t2)
    ctx->pc = 0x14e2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12580), GPR_U32(ctx, 7));
label_14e2c8:
    // 0x14e2c8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x14e2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x14e2cc: 0x61ac0  sll         $v1, $a2, 11
    ctx->pc = 0x14e2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 11));
    // 0x14e2d0: 0x244f1910  addiu       $t7, $v0, 0x1910
    ctx->pc = 0x14e2d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 6416));
    // 0x14e2d4: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x14e2d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x14e2d8: 0x28e24000  slti        $v0, $a3, 0x4000
    ctx->pc = 0x14e2d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x14e2dc: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x14E2DCu;
    {
        const bool branch_taken_0x14e2dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E2E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E2DCu;
            // 0x14e2e0: 0x6f3021  addu        $a2, $v1, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e2dc) {
            ctx->pc = 0x14E3A4u;
            goto label_14e3a4;
        }
    }
    ctx->pc = 0x14E2E4u;
    // 0x14e2e4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x14e2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_14e2e8:
    // 0x14e2e8: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x14e2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x14e2ec: 0x30ec001f  andi        $t4, $a3, 0x1F
    ctx->pc = 0x14e2ecu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)31);
    // 0x14e2f0: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x14e2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x14e2f4: 0x4c6823  subu        $t5, $v0, $t4
    ctx->pc = 0x14e2f4u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x14e2f8: 0x2c634001  sltiu       $v1, $v1, 0x4001
    ctx->pc = 0x14e2f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16385) ? 1 : 0);
    // 0x14e2fc: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x14E2FCu;
    {
        const bool branch_taken_0x14e2fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E2FCu;
            // 0x14e300: 0x71143  sra         $v0, $a3, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e2fc) {
            ctx->pc = 0x14E3A4u;
            goto label_14e3a4;
        }
    }
    ctx->pc = 0x14E304u;
    // 0x14e304: 0x10a0001f  beqz        $a1, . + 4 + (0x1F << 2)
    ctx->pc = 0x14E304u;
    {
        const bool branch_taken_0x14e304 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E304u;
            // 0x14e308: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e304) {
            ctx->pc = 0x14E384u;
            goto label_14e384;
        }
    }
    ctx->pc = 0x14E30Cu;
    // 0x14e30c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14e30cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14e310: 0x300502d  daddu       $t2, $t8, $zero
    ctx->pc = 0x14e310u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e314: 0x4f4021  addu        $t0, $v0, $t7
    ctx->pc = 0x14e314u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x14e318: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x14e318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x14e31c: 0x0  nop
    ctx->pc = 0x14e31cu;
    // NOP
label_14e320:
    // 0x14e320: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x14e320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x14e324: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x14e324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x14e328: 0x1a35806  srlv        $t3, $v1, $t5
    ctx->pc = 0x14e328u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 13) & 0x1F));
    // 0x14e32c: 0x1831804  sllv        $v1, $v1, $t4
    ctx->pc = 0x14e32cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 12) & 0x1F));
    // 0x14e330: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14e330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14e334: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x14E334u;
    {
        const bool branch_taken_0x14e334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e334) {
            ctx->pc = 0x14E384u;
            goto label_14e384;
        }
    }
    ctx->pc = 0x14E33Cu;
    // 0x14e33c: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x14e33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x14e340: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x14e340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
    // 0x14e344: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x14E344u;
    {
        const bool branch_taken_0x14e344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e344) {
            ctx->pc = 0x14E384u;
            goto label_14e384;
        }
    }
    ctx->pc = 0x14E34Cu;
    // 0x14e34c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x14e34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14e350: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14e350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14e354: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x14E354u;
    {
        const bool branch_taken_0x14e354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e354) {
            ctx->pc = 0x14E384u;
            goto label_14e384;
        }
    }
    ctx->pc = 0x14E35Cu;
    // 0x14e35c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x14e35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14e360: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x14e360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
    // 0x14e364: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14E364u;
    {
        const bool branch_taken_0x14e364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e364) {
            ctx->pc = 0x14E384u;
            goto label_14e384;
        }
    }
    ctx->pc = 0x14E36Cu;
    // 0x14e36c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x14e36cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x14e370: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x14e370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x14e374: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x14e374u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x14e378: 0x125102b  sltu        $v0, $t1, $a1
    ctx->pc = 0x14e378u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x14e37c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x14E37Cu;
    {
        const bool branch_taken_0x14e37c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E37Cu;
            // 0x14e380: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e37c) {
            ctx->pc = 0x14E320u;
            runtime->cooperativeGuestYield();
            goto label_14e320;
        }
    }
    ctx->pc = 0x14E384u;
label_14e384:
    // 0x14e384: 0x55250002  bnel        $t1, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x14E384u;
    {
        const bool branch_taken_0x14e384 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 5));
        if (branch_taken_0x14e384) {
            ctx->pc = 0x14E388u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14E384u;
            // 0x14e388: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14E390u;
            goto label_14e390;
        }
    }
    ctx->pc = 0x14E38Cu;
    // 0x14e38c: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x14e38cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14e390:
    // 0x14e390: 0x15c00005  bnez        $t6, . + 4 + (0x5 << 2)
    ctx->pc = 0x14E390u;
    {
        const bool branch_taken_0x14e390 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E390u;
            // 0x14e394: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e390) {
            ctx->pc = 0x14E3A8u;
            goto label_14e3a8;
        }
    }
    ctx->pc = 0x14E398u;
    // 0x14e398: 0x28e24000  slti        $v0, $a3, 0x4000
    ctx->pc = 0x14e398u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x14e39c: 0x5440ffd2  bnel        $v0, $zero, . + 4 + (-0x2E << 2)
    ctx->pc = 0x14E39Cu;
    {
        const bool branch_taken_0x14e39c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e39c) {
            ctx->pc = 0x14E3A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14E39Cu;
            // 0x14e3a0: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14E2E8u;
            runtime->cooperativeGuestYield();
            goto label_14e2e8;
        }
    }
    ctx->pc = 0x14E3A4u;
label_14e3a4:
    // 0x14e3a4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x14e3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14e3a8:
    // 0x14e3a8: 0x3e00008  jr          $ra
    ctx->pc = 0x14E3A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E3ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E3A8u;
            // 0x14e3ac: 0xee100b  movn        $v0, $a3, $t6 (Delay Slot)
        if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14E220u: goto label_14e220;
            case 0x14E250u: goto label_14e250;
            case 0x14E258u: goto label_14e258;
            case 0x14E298u: goto label_14e298;
            case 0x14E2C4u: goto label_14e2c4;
            case 0x14E2C8u: goto label_14e2c8;
            case 0x14E2E8u: goto label_14e2e8;
            case 0x14E320u: goto label_14e320;
            case 0x14E384u: goto label_14e384;
            case 0x14E390u: goto label_14e390;
            case 0x14E3A4u: goto label_14e3a4;
            case 0x14E3A8u: goto label_14e3a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14E3B0u;
}
