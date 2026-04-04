#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_166cc8
// Address: 0x166cc8 - 0x167018
void entry_166cc8_0x167018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_166cc8_0x167018");
#endif

    ctx->pc = 0x166cc8u;

    // 0x166cc8: 0x3c09002a  lui         $t1, 0x2A
    ctx->pc = 0x166cc8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)42 << 16));
    // 0x166ccc: 0x850c0  sll         $t2, $t0, 3
    ctx->pc = 0x166cccu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x166cd0: 0x8d22c7dc  lw          $v0, -0x3824($t1)
    ctx->pc = 0x166cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294952924)));
    // 0x166cd4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x166cd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x166cd8: 0x8ca3005c  lw          $v1, 0x5C($a1)
    ctx->pc = 0x166cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
    // 0x166cdc: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x166cdcu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166ce0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x166ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x166ce4: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x166ce4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166ce8: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x166ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x166cec: 0xe36021  addu        $t4, $a3, $v1
    ctx->pc = 0x166cecu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x166cf0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x166cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x166cf4: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x166cf4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x166cf8: 0x8c420098  lw          $v0, 0x98($v0)
    ctx->pc = 0x166cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x166cfc: 0x1447000d  bne         $v0, $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x166CFCu;
    {
        const bool branch_taken_0x166cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x166D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166CFCu;
            // 0x166d00: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166cfc) {
            ctx->pc = 0x166D34u;
            goto label_166d34;
        }
    }
    ctx->pc = 0x166D04u;
    // 0x166d04: 0x8d24c7dc  lw          $a0, -0x3824($t1)
    ctx->pc = 0x166d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294952924)));
    // 0x166d08: 0x81900  sll         $v1, $t0, 4
    ctx->pc = 0x166d08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x166d0c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x166d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x166d10: 0x8d22c7dc  lw          $v0, -0x3824($t1)
    ctx->pc = 0x166d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294952924)));
    // 0x166d14: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x166d14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x166d18: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x166d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x166d1c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x166d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x166d20: 0xfc8b0068  sd          $t3, 0x68($a0)
    ctx->pc = 0x166d20u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 104), GPR_U64(ctx, 11));
    // 0x166d24: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x166d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x166d28: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x166d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x166d2c: 0x8da30060  lw          $v1, 0x60($t5)
    ctx->pc = 0x166d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 96)));
    // 0x166d30: 0xac430088  sw          $v1, 0x88($v0)
    ctx->pc = 0x166d30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 3));
label_166d34:
    // 0x166d34: 0x8da30014  lw          $v1, 0x14($t5)
    ctx->pc = 0x166d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 20)));
    // 0x166d38: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x166D38u;
    {
        const bool branch_taken_0x166d38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x166D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166D38u;
            // 0x166d3c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166d38) {
            ctx->pc = 0x166D84u;
            goto label_166d84;
        }
    }
    ctx->pc = 0x166D40u;
    // 0x166d40: 0x8c640044  lw          $a0, 0x44($v1)
    ctx->pc = 0x166d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x166d44: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x166D44u;
    {
        const bool branch_taken_0x166d44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x166D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166D44u;
            // 0x166d48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166d44) {
            ctx->pc = 0x166D5Cu;
            goto label_166d5c;
        }
    }
    ctx->pc = 0x166D4Cu;
    // 0x166d4c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x166d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x166d50: 0x300282d  daddu       $a1, $t8, $zero
    ctx->pc = 0x166d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166d54: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x166d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x166d58: 0x2280b  movn        $a1, $zero, $v0
    ctx->pc = 0x166d58u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_166d5c:
    // 0x166d5c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x166D5Cu;
    {
        const bool branch_taken_0x166d5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x166d5c) {
            ctx->pc = 0x166D6Cu;
            goto label_166d6c;
        }
    }
    ctx->pc = 0x166D64u;
    // 0x166d64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x166D64u;
    {
        const bool branch_taken_0x166d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166D64u;
            // 0x166d68: 0x84840000  lh          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166d64) {
            ctx->pc = 0x166D74u;
            goto label_166d74;
        }
    }
    ctx->pc = 0x166D6Cu;
label_166d6c:
    // 0x166d6c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x166d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x166d70: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x166d70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_166d74:
    // 0x166d74: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x166d74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166d78: 0x946a0020  lhu         $t2, 0x20($v1)
    ctx->pc = 0x166d78u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x166d7c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x166D7Cu;
    {
        const bool branch_taken_0x166d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166D7Cu;
            // 0x166d80: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166d7c) {
            ctx->pc = 0x166D8Cu;
            goto label_166d8c;
        }
    }
    ctx->pc = 0x166D84u;
label_166d84:
    // 0x166d84: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x166d84u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166d88: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x166d88u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166d8c:
    // 0x166d8c: 0x31620004  andi        $v0, $t3, 0x4
    ctx->pc = 0x166d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)4);
    // 0x166d90: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x166D90u;
    {
        const bool branch_taken_0x166d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166D90u;
            // 0x166d94: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166d90) {
            ctx->pc = 0x166DA4u;
            goto label_166da4;
        }
    }
    ctx->pc = 0x166D98u;
    // 0x166d98: 0x31620002  andi        $v0, $t3, 0x2
    ctx->pc = 0x166d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)2);
    // 0x166d9c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x166d9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x166da0: 0x2380b  movn        $a3, $zero, $v0
    ctx->pc = 0x166da0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_166da4:
    // 0x166da4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x166da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x166da8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x166da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x166dac: 0x1621024  and         $v0, $t3, $v0
    ctx->pc = 0x166dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
    // 0x166db0: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x166db0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166db4: 0x2480a  movz        $t1, $zero, $v0
    ctx->pc = 0x166db4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
    // 0x166db8: 0x8da60010  lw          $a2, 0x10($t5)
    ctx->pc = 0x166db8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 16)));
    // 0x166dbc: 0x8cc30044  lw          $v1, 0x44($a2)
    ctx->pc = 0x166dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 68)));
    // 0x166dc0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x166DC0u;
    {
        const bool branch_taken_0x166dc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x166DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166DC0u;
            // 0x166dc4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166dc0) {
            ctx->pc = 0x166DD8u;
            goto label_166dd8;
        }
    }
    ctx->pc = 0x166DC8u;
    // 0x166dc8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x166dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x166dcc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x166dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166dd0: 0x461026  xor         $v0, $v0, $a2
    ctx->pc = 0x166dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
    // 0x166dd4: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x166dd4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_166dd8:
    // 0x166dd8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x166DD8u;
    {
        const bool branch_taken_0x166dd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x166dd8) {
            ctx->pc = 0x166DE8u;
            goto label_166de8;
        }
    }
    ctx->pc = 0x166DE0u;
    // 0x166de0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x166DE0u;
    {
        const bool branch_taken_0x166de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166DE0u;
            // 0x166de4: 0x84620000  lh          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166de0) {
            ctx->pc = 0x166DF0u;
            goto label_166df0;
        }
    }
    ctx->pc = 0x166DE8u;
label_166de8:
    // 0x166de8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x166de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x166dec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x166decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_166df0:
    // 0x166df0: 0x90c3002c  lbu         $v1, 0x2C($a2)
    ctx->pc = 0x166df0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x166df4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x166df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x166df8: 0x94c50020  lhu         $a1, 0x20($a2)
    ctx->pc = 0x166df8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x166dfc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x166dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x166e00: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x166e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x166e04: 0x90c40028  lbu         $a0, 0x28($a2)
    ctx->pc = 0x166e04u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x166e08: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x166e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x166e0c: 0x52d38  dsll        $a1, $a1, 20
    ctx->pc = 0x166e0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 20);
    // 0x166e10: 0x90c30029  lbu         $v1, 0x29($a2)
    ctx->pc = 0x166e10u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 41)));
    // 0x166e14: 0x426b8  dsll        $a0, $a0, 26
    ctx->pc = 0x166e14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 26);
    // 0x166e18: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x166e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x166e1c: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x166e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x166e20: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x166e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x166e24: 0x1820bc  dsll32      $a0, $t8, 2
    ctx->pc = 0x166e24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) << (32 + 2));
    // 0x166e28: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x166e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x166e2c: 0x718fc  dsll32      $v1, $a3, 3
    ctx->pc = 0x166e2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 3));
    // 0x166e30: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x166e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x166e34: 0x8217c  dsll32      $a0, $t0, 5
    ctx->pc = 0x166e34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) << (32 + 5));
    // 0x166e38: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x166e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x166e3c: 0xa1cfc  dsll32      $v1, $t2, 19
    ctx->pc = 0x166e3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 19));
    // 0x166e40: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x166e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x166e44: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x166e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x166e48: 0xf277c  dsll32      $a0, $t7, 29
    ctx->pc = 0x166e48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 15) << (32 + 29));
    // 0x166e4c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x166e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x166e50: 0x8da30018  lw          $v1, 0x18($t5)
    ctx->pc = 0x166e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 24)));
    // 0x166e54: 0x1060005a  beqz        $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x166E54u;
    {
        const bool branch_taken_0x166e54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x166E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166E54u;
            // 0x166e58: 0xfd820000  sd          $v0, 0x0($t4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166e54) {
            ctx->pc = 0x166FC0u;
            goto label_166fc0;
        }
    }
    ctx->pc = 0x166E5Cu;
    // 0x166e5c: 0xe10c0  sll         $v0, $t6, 3
    ctx->pc = 0x166e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 3));
    // 0x166e60: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x166e60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166e64: 0x5d4021  addu        $t0, $v0, $sp
    ctx->pc = 0x166e64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_166e68:
    // 0x166e68: 0x8ce40010  lw          $a0, 0x10($a3)
    ctx->pc = 0x166e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x166e6c: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x166e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x166e70: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x166E70u;
    {
        const bool branch_taken_0x166e70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x166E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166E70u;
            // 0x166e74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166e70) {
            ctx->pc = 0x166E84u;
            goto label_166e84;
        }
    }
    ctx->pc = 0x166E78u;
    // 0x166e78: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x166e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x166e7c: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x166e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x166e80: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x166e80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_166e84:
    // 0x166e84: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x166E84u;
    {
        const bool branch_taken_0x166e84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166e84) {
            ctx->pc = 0x166E94u;
            goto label_166e94;
        }
    }
    ctx->pc = 0x166E8Cu;
    // 0x166e8c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x166E8Cu;
    {
        const bool branch_taken_0x166e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166E8Cu;
            // 0x166e90: 0x84660000  lh          $a2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166e8c) {
            ctx->pc = 0x166E9Cu;
            goto label_166e9c;
        }
    }
    ctx->pc = 0x166E94u;
label_166e94:
    // 0x166e94: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x166e94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x166e98: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x166e98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_166e9c:
    // 0x166e9c: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x166e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x166ea0: 0xe20c0  sll         $a0, $t6, 3
    ctx->pc = 0x166ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 14), 3));
    // 0x166ea4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x166ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x166ea8: 0x27a30004  addiu       $v1, $sp, 0x4
    ctx->pc = 0x166ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x166eac: 0x94420014  lhu         $v0, 0x14($v0)
    ctx->pc = 0x166eacu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x166eb0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x166eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x166eb4: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x166eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x166eb8: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x166eb8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x166ebc: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x166ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x166ec0: 0x8ce70018  lw          $a3, 0x18($a3)
    ctx->pc = 0x166ec0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x166ec4: 0xa2100a  movz        $v0, $a1, $v0
    ctx->pc = 0x166ec4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x166ec8: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x166ec8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x166ecc: 0x14e0ffe6  bnez        $a3, . + 4 + (-0x1A << 2)
    ctx->pc = 0x166ECCu;
    {
        const bool branch_taken_0x166ecc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x166ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166ECCu;
            // 0x166ed0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166ecc) {
            ctx->pc = 0x166E68u;
            runtime->cooperativeGuestYield();
            goto label_166e68;
        }
    }
    ctx->pc = 0x166ED4u;
    // 0x166ed4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x166ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x166ed8: 0x29c70004  slti        $a3, $t6, 0x4
    ctx->pc = 0x166ed8u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x166edc: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x166edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x166ee0: 0x9fa20000  lwu         $v0, 0x0($sp)
    ctx->pc = 0x166ee0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166ee4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x166ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x166ee8: 0x31cba  dsrl        $v1, $v1, 18
    ctx->pc = 0x166ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 18);
    // 0x166eec: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x166eecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x166ef0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x166ef0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x166ef4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x166ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x166ef8: 0x9fa50010  lwu         $a1, 0x10($sp)
    ctx->pc = 0x166ef8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166efc: 0x4233a  dsrl        $a0, $a0, 12
    ctx->pc = 0x166efcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 12);
    // 0x166f00: 0x9fa30014  lwu         $v1, 0x14($sp)
    ctx->pc = 0x166f00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x166f04: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x166f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x166f08: 0x630bc  dsll32      $a2, $a2, 2
    ctx->pc = 0x166f08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 2));
    // 0x166f0c: 0x52a3c  dsll32      $a1, $a1, 8
    ctx->pc = 0x166f0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 8));
    // 0x166f10: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x166f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x166f14: 0x31dbc  dsll32      $v1, $v1, 22
    ctx->pc = 0x166f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 22));
    // 0x166f18: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x166f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x166f1c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x166f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x166f20: 0x14e00012  bnez        $a3, . + 4 + (0x12 << 2)
    ctx->pc = 0x166F20u;
    {
        const bool branch_taken_0x166f20 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x166F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166F20u;
            // 0x166f24: 0xfd820030  sd          $v0, 0x30($t4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 12), 48), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166f20) {
            ctx->pc = 0x166F6Cu;
            goto label_166f6c;
        }
    }
    ctx->pc = 0x166F28u;
    // 0x166f28: 0x9fa3001c  lwu         $v1, 0x1C($sp)
    ctx->pc = 0x166f28u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x166f2c: 0x9fa20018  lwu         $v0, 0x18($sp)
    ctx->pc = 0x166f2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x166f30: 0x9fa40020  lwu         $a0, 0x20($sp)
    ctx->pc = 0x166f30u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x166f34: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x166f34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x166f38: 0x9fa60024  lwu         $a2, 0x24($sp)
    ctx->pc = 0x166f38u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x166f3c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x166f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x166f40: 0x9fa50028  lwu         $a1, 0x28($sp)
    ctx->pc = 0x166f40u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x166f44: 0x42538  dsll        $a0, $a0, 20
    ctx->pc = 0x166f44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 20);
    // 0x166f48: 0x9fa3002c  lwu         $v1, 0x2C($sp)
    ctx->pc = 0x166f48u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x166f4c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x166f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x166f50: 0x630bc  dsll32      $a2, $a2, 2
    ctx->pc = 0x166f50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 2));
    // 0x166f54: 0x52a3c  dsll32      $a1, $a1, 8
    ctx->pc = 0x166f54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 8));
    // 0x166f58: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x166f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x166f5c: 0x31dbc  dsll32      $v1, $v1, 22
    ctx->pc = 0x166f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 22));
    // 0x166f60: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x166f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x166f64: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x166f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x166f68: 0xfd820040  sd          $v0, 0x40($t4)
    ctx->pc = 0x166f68u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 64), GPR_U64(ctx, 2));
label_166f6c:
    // 0x166f6c: 0x31628000  andi        $v0, $t3, 0x8000
    ctx->pc = 0x166f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32768);
    // 0x166f70: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x166F70u;
    {
        const bool branch_taken_0x166f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166F70u;
            // 0x166f74: 0x91978  dsll        $v1, $t1, 5 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) << 5);
        ctx->in_delay_slot = false;
        if (branch_taken_0x166f70) {
            ctx->pc = 0x166F9Cu;
            goto label_166f9c;
        }
    }
    ctx->pc = 0x166F78u;
    // 0x166f78: 0xe103c  dsll32      $v0, $t6, 0
    ctx->pc = 0x166f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) << (32 + 0));
    // 0x166f7c: 0x217ba  dsrl        $v0, $v0, 30
    ctx->pc = 0x166f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 30);
    // 0x166f80: 0x9da40058  lwu         $a0, 0x58($t5)
    ctx->pc = 0x166f80u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 13), 88)));
    // 0x166f84: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x166f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x166f88: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x166f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x166f8c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x166f8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x166f90: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x166f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x166f94: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x166F94u;
    {
        const bool branch_taken_0x166f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166F94u;
            // 0x166f98: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166f94) {
            ctx->pc = 0x166FD4u;
            goto label_166fd4;
        }
    }
    ctx->pc = 0x166F9Cu;
label_166f9c:
    // 0x166f9c: 0xe103c  dsll32      $v0, $t6, 0
    ctx->pc = 0x166f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) << (32 + 0));
    // 0x166fa0: 0x217ba  dsrl        $v0, $v0, 30
    ctx->pc = 0x166fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 30);
    // 0x166fa4: 0x9da40058  lwu         $a0, 0x58($t5)
    ctx->pc = 0x166fa4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 13), 88)));
    // 0x166fa8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x166fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x166fac: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x166facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x166fb0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x166fb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x166fb4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x166fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x166fb8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x166FB8u;
    {
        const bool branch_taken_0x166fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166FB8u;
            // 0x166fbc: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166fb8) {
            ctx->pc = 0x166FD4u;
            goto label_166fd4;
        }
    }
    ctx->pc = 0x166FC0u;
label_166fc0:
    // 0x166fc0: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x166fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x166fc4: 0x91178  dsll        $v0, $t1, 5
    ctx->pc = 0x166fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << 5);
    // 0x166fc8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x166fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x166fcc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x166fccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166fd0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x166fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_166fd4:
    // 0x166fd4: 0xfd820020  sd          $v0, 0x20($t4)
    ctx->pc = 0x166fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 32), GPR_U64(ctx, 2));
    // 0x166fd8: 0x3c0200c0  lui         $v0, 0xC0
    ctx->pc = 0x166fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)192 << 16));
    // 0x166fdc: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x166fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x166fe0: 0x1621024  and         $v0, $t3, $v0
    ctx->pc = 0x166fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
    // 0x166fe4: 0x1631824  and         $v1, $t3, $v1
    ctx->pc = 0x166fe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x166fe8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x166fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x166fec: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x166fecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x166ff0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x166ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x166ff4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x166ff4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x166ff8: 0x21582  srl         $v0, $v0, 22
    ctx->pc = 0x166ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 22));
    // 0x166ffc: 0x31d02  srl         $v1, $v1, 20
    ctx->pc = 0x166ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 20));
    // 0x167000: 0x210b8  dsll        $v0, $v0, 2
    ctx->pc = 0x167000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
    // 0x167004: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x167004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x167008: 0xfd830010  sd          $v1, 0x10($t4)
    ctx->pc = 0x167008u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 16), GPR_U64(ctx, 3));
    // 0x16700c: 0x3e00008  jr          $ra
    ctx->pc = 0x16700Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16700Cu;
            // 0x167010: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166D34u: goto label_166d34;
            case 0x166D5Cu: goto label_166d5c;
            case 0x166D6Cu: goto label_166d6c;
            case 0x166D74u: goto label_166d74;
            case 0x166D84u: goto label_166d84;
            case 0x166D8Cu: goto label_166d8c;
            case 0x166DA4u: goto label_166da4;
            case 0x166DD8u: goto label_166dd8;
            case 0x166DE8u: goto label_166de8;
            case 0x166DF0u: goto label_166df0;
            case 0x166E68u: goto label_166e68;
            case 0x166E84u: goto label_166e84;
            case 0x166E94u: goto label_166e94;
            case 0x166E9Cu: goto label_166e9c;
            case 0x166F6Cu: goto label_166f6c;
            case 0x166F9Cu: goto label_166f9c;
            case 0x166FC0u: goto label_166fc0;
            case 0x166FD4u: goto label_166fd4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x167014u;
    // 0x167014: 0x0  nop
    ctx->pc = 0x167014u;
    // NOP
}
