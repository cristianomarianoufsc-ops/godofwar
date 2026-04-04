#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002793D0
// Address: 0x2793d0 - 0x279520
void sub_002793D0_0x2793d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002793D0_0x2793d0");
#endif

    ctx->pc = 0x2793d0u;

    // 0x2793d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2793d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2793d4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2793d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2793d8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2793d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2793dc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2793dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2793e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2793e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2793e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2793e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2793e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2793e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2793ec: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x2793ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2793f0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2793f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2793f4: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x2793f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2793f8: 0x3053007f  andi        $s3, $v0, 0x7F
    ctx->pc = 0x2793f8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x2793fc: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x2793fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x279400: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x279400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x279404: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x279404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x279408: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x279408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27940c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27940cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x279410: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x279410u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x279414: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x279414u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x279418: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x279418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x27941c: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x27941Cu;
    {
        const bool branch_taken_0x27941c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x279420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27941Cu;
            // 0x279420: 0xa28823  subu        $s1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27941c) {
            ctx->pc = 0x279454u;
            goto label_279454;
        }
    }
    ctx->pc = 0x279424u;
    // 0x279424: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x279424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x279428: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x279428u;
    {
        const bool branch_taken_0x279428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27942Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279428u;
            // 0x27942c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279428) {
            ctx->pc = 0x279454u;
            goto label_279454;
        }
    }
    ctx->pc = 0x279430u;
    // 0x279430: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x279430u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x279434: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x279434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
    // 0x279438: 0x3484b020  ori         $a0, $a0, 0xB020
    ctx->pc = 0x279438u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45088);
    // 0x27943c: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x27943cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x279440: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x279440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x279444: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x279444u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x279448: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x279448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x27944c: 0xc09e47e  jal         func_2791F8
    ctx->pc = 0x27944Cu;
    SET_GPR_U32(ctx, 31, 0x279454u);
    ctx->pc = 0x279450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27944Cu;
            // 0x279450: 0x34840100  ori         $a0, $a0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2791F8u;
    if (runtime->hasFunction(0x2791F8u)) {
        auto targetFn = runtime->lookupFunction(0x2791F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279454u; }
        if (ctx->pc != 0x279454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002791F8_0x2791f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279454u; }
        if (ctx->pc != 0x279454u) { return; }
    }
    ctx->pc = 0x279454u;
label_279454:
    // 0x279454: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x279454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x279458: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x279458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x27945c: 0x0  nop
    ctx->pc = 0x27945cu;
    // NOP
label_279460:
    // 0x279460: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x279460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x279464: 0x0  nop
    ctx->pc = 0x279464u;
    // NOP
    // 0x279468: 0x0  nop
    ctx->pc = 0x279468u;
    // NOP
    // 0x27946c: 0x0  nop
    ctx->pc = 0x27946cu;
    // NOP
    // 0x279470: 0x0  nop
    ctx->pc = 0x279470u;
    // NOP
    // 0x279474: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x279474u;
    {
        const bool branch_taken_0x279474 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x279474) {
            ctx->pc = 0x279460u;
            runtime->cooperativeGuestYield();
            goto label_279460;
        }
    }
    ctx->pc = 0x27947Cu;
    // 0x27947c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x27947cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x279480: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x279480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x279484: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x279484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x279488: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x279488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x27948c: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x27948cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
label_279490:
    // 0x279490: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x279490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x279494: 0x0  nop
    ctx->pc = 0x279494u;
    // NOP
    // 0x279498: 0x0  nop
    ctx->pc = 0x279498u;
    // NOP
    // 0x27949c: 0x0  nop
    ctx->pc = 0x27949cu;
    // NOP
    // 0x2794a0: 0x0  nop
    ctx->pc = 0x2794a0u;
    // NOP
    // 0x2794a4: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2794A4u;
    {
        const bool branch_taken_0x2794a4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2794a4) {
            ctx->pc = 0x279490u;
            runtime->cooperativeGuestYield();
            goto label_279490;
        }
    }
    ctx->pc = 0x2794ACu;
    // 0x2794ac: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2794ACu;
    {
        const bool branch_taken_0x2794ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2794B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2794ACu;
            // 0x2794b0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2794ac) {
            ctx->pc = 0x279508u;
            goto label_279508;
        }
    }
    ctx->pc = 0x2794B4u;
    // 0x2794b4: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x2794B4u;
    {
        const bool branch_taken_0x2794b4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2794B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2794B4u;
            // 0x2794b8: 0xdfb30030  ld          $s3, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2794b4) {
            ctx->pc = 0x27950Cu;
            goto label_27950c;
        }
    }
    ctx->pc = 0x2794BCu;
    // 0x2794bc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2794bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2794c0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2794c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2794c4: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x2794c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x2794c8: 0x3484b430  ori         $a0, $a0, 0xB430
    ctx->pc = 0x2794c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46128);
    // 0x2794cc: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x2794ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x2794d0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2794d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2794d4: 0x3463b420  ori         $v1, $v1, 0xB420
    ctx->pc = 0x2794d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46112);
    // 0x2794d8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2794d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2794dc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2794dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2794e0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2794e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2794e4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2794e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2794e8: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x2794e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
    // 0x2794ec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2794ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2794f0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2794f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2794f4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2794f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2794f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2794f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2794fc: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x2794fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x279500: 0x809e49c  j           func_279270
    ctx->pc = 0x279500u;
    ctx->pc = 0x279504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279500u;
            // 0x279504: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x279270u;
    if (runtime->hasFunction(0x279270u)) {
        auto targetFn = runtime->lookupFunction(0x279270u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00279270_0x279270(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x279508u;
label_279508:
    // 0x279508: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x279508u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_27950c:
    // 0x27950c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x27950cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x279510: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x279510u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279514: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x279514u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279518: 0x3e00008  jr          $ra
    ctx->pc = 0x279518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27951Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279518u;
            // 0x27951c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x279454u: goto label_279454;
            case 0x279460u: goto label_279460;
            case 0x279490u: goto label_279490;
            case 0x279508u: goto label_279508;
            case 0x27950Cu: goto label_27950c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x279520u;
}
