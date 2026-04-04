#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ED958
// Address: 0x1ed958 - 0x1eda20
void sub_001ED958_0x1ed958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED958_0x1ed958");
#endif

    ctx->pc = 0x1ed958u;

    // 0x1ed958: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ed958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ed95c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ed95cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ed960: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ed960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1ed964: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ed964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ed968: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ed968u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed96c: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x1ed96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x1ed970: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ed970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ed974: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1ed974u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ed978: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1ed978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ed97c: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x1ed97cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x1ed980: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x1ed980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1ed984: 0x40f809  jalr        $v0
    ctx->pc = 0x1ED984u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ED98Cu);
        ctx->pc = 0x1ED988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED984u;
            // 0x1ed988: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1ED98Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ED9A0u: goto label_1ed9a0;
            case 0x1ED9D8u: goto label_1ed9d8;
            case 0x1ED9DCu: goto label_1ed9dc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1ED98Cu; }
            if (ctx->pc != 0x1ED98Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1ED98Cu;
    // 0x1ed98c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1ed98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ed990: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ED990u;
    {
        const bool branch_taken_0x1ed990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED990u;
            // 0x1ed994: 0x8e230174  lw          $v1, 0x174($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed990) {
            ctx->pc = 0x1ED9A0u;
            goto label_1ed9a0;
        }
    }
    ctx->pc = 0x1ED998u;
    // 0x1ed998: 0x904201a0  lbu         $v0, 0x1A0($v0)
    ctx->pc = 0x1ed998u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x1ed99c: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x1ed99cu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1ed9a0:
    // 0x1ed9a0: 0x36040002  ori         $a0, $s0, 0x2
    ctx->pc = 0x1ed9a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2);
    // 0x1ed9a4: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x1ed9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1ed9a8: 0x82800b  movn        $s0, $a0, $v0
    ctx->pc = 0x1ed9a8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
    // 0x1ed9ac: 0x30640400  andi        $a0, $v1, 0x400
    ctx->pc = 0x1ed9acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x1ed9b0: 0x36020004  ori         $v0, $s0, 0x4
    ctx->pc = 0x1ed9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4);
    // 0x1ed9b4: 0x44800b  movn        $s0, $v0, $a0
    ctx->pc = 0x1ed9b4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x1ed9b8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1ed9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed9bc: 0x30820020  andi        $v0, $a0, 0x20
    ctx->pc = 0x1ed9bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x1ed9c0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ED9C0u;
    {
        const bool branch_taken_0x1ed9c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed9c0) {
            ctx->pc = 0x1ED9C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED9C0u;
            // 0x1ed9c4: 0x36100008  ori         $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ED9D8u;
            goto label_1ed9d8;
        }
    }
    ctx->pc = 0x1ED9C8u;
    // 0x1ed9c8: 0x30820010  andi        $v0, $a0, 0x10
    ctx->pc = 0x1ed9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x1ed9cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ED9CCu;
    {
        const bool branch_taken_0x1ed9cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED9CCu;
            // 0x1ed9d0: 0x30830040  andi        $v1, $a0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed9cc) {
            ctx->pc = 0x1ED9DCu;
            goto label_1ed9dc;
        }
    }
    ctx->pc = 0x1ED9D4u;
    // 0x1ed9d4: 0x36100008  ori         $s0, $s0, 0x8
    ctx->pc = 0x1ed9d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8);
label_1ed9d8:
    // 0x1ed9d8: 0x30830040  andi        $v1, $a0, 0x40
    ctx->pc = 0x1ed9d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
label_1ed9dc:
    // 0x1ed9dc: 0x36020010  ori         $v0, $s0, 0x10
    ctx->pc = 0x1ed9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)16);
    // 0x1ed9e0: 0x43800b  movn        $s0, $v0, $v1
    ctx->pc = 0x1ed9e0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x1ed9e4: 0x30830380  andi        $v1, $a0, 0x380
    ctx->pc = 0x1ed9e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)896);
    // 0x1ed9e8: 0x36020020  ori         $v0, $s0, 0x20
    ctx->pc = 0x1ed9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32);
    // 0x1ed9ec: 0x43800b  movn        $s0, $v0, $v1
    ctx->pc = 0x1ed9ecu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x1ed9f0: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x1ed9f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x1ed9f4: 0x36020040  ori         $v0, $s0, 0x40
    ctx->pc = 0x1ed9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)64);
    // 0x1ed9f8: 0x43800b  movn        $s0, $v0, $v1
    ctx->pc = 0x1ed9f8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x1ed9fc: 0x30830008  andi        $v1, $a0, 0x8
    ctx->pc = 0x1ed9fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x1eda00: 0x36020080  ori         $v0, $s0, 0x80
    ctx->pc = 0x1eda00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)128);
    // 0x1eda04: 0x203100a  movz        $v0, $s0, $v1
    ctx->pc = 0x1eda04u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
    // 0x1eda08: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1eda08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eda0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1eda0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eda10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eda10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eda14: 0x3e00008  jr          $ra
    ctx->pc = 0x1EDA14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDA18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDA14u;
            // 0x1eda18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ED9A0u: goto label_1ed9a0;
            case 0x1ED9D8u: goto label_1ed9d8;
            case 0x1ED9DCu: goto label_1ed9dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EDA1Cu;
    // 0x1eda1c: 0x0  nop
    ctx->pc = 0x1eda1cu;
    // NOP
}
