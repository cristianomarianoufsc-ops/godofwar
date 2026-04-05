#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00149340
// Address: 0x149340 - 0x1493e8
void sub_00149340_0x149340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149340_0x149340");
#endif

    ctx->pc = 0x149340u;

    // 0x149340: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x149340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x149344: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x149344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x149348: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x149348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x14934c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14934cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149350: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x149350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x149354: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149358: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x149358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x14935c: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x14935Cu;
    {
        const bool branch_taken_0x14935c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x149360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14935Cu;
            // 0x149360: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14935c) {
            ctx->pc = 0x1493B0u;
            goto label_1493b0;
        }
    }
    ctx->pc = 0x149364u;
    // 0x149364: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x149364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_149368:
    // 0x149368: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x149368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14936c: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x14936cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x149370: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x149370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x149374: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x149374u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x149378: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x149378u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x14937c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14937cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x149380: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x149380u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149384: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x149384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x149388: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x149388u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x14938c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x14938cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x149390: 0x40f809  jalr        $v0
    ctx->pc = 0x149390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x149398u);
        ctx->pc = 0x149394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149390u;
            // 0x149394: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x149398u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x149368u: goto label_149368;
            case 0x1493B0u: goto label_1493b0;
            case 0x1493CCu: goto label_1493cc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x149398u; }
            if (ctx->pc != 0x149398u) { return; }
        }
        }
    }
    ctx->pc = 0x149398u;
    // 0x149398: 0xc0530bc  jal         func_14C2F0
    ctx->pc = 0x149398u;
    SET_GPR_U32(ctx, 31, 0x1493A0u);
    ctx->pc = 0x14939Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149398u;
            // 0x14939c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14C2F0u;
    if (runtime->hasFunction(0x14C2F0u)) {
        auto targetFn = runtime->lookupFunction(0x14C2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1493A0u; }
        if (ctx->pc != 0x1493A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014C2F0_0x14c2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1493A0u; }
        if (ctx->pc != 0x1493A0u) { return; }
    }
    ctx->pc = 0x1493A0u;
    // 0x1493a0: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1493a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1493a4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1493a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1493a8: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1493A8u;
    {
        const bool branch_taken_0x1493a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1493a8) {
            ctx->pc = 0x1493ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1493A8u;
            // 0x1493ac: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x149368u;
            runtime->cooperativeGuestYield();
            goto label_149368;
        }
    }
    ctx->pc = 0x1493B0u;
label_1493b0:
    // 0x1493b0: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x1493b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1493b4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1493B4u;
    {
        const bool branch_taken_0x1493b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1493b4) {
            ctx->pc = 0x1493B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1493B4u;
            // 0x1493b8: 0xae200018  sw          $zero, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1493CCu;
            goto label_1493cc;
        }
    }
    ctx->pc = 0x1493BCu;
    // 0x1493bc: 0xc0530bc  jal         func_14C2F0
    ctx->pc = 0x1493BCu;
    SET_GPR_U32(ctx, 31, 0x1493C4u);
    ctx->pc = 0x14C2F0u;
    if (runtime->hasFunction(0x14C2F0u)) {
        auto targetFn = runtime->lookupFunction(0x14C2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1493C4u; }
        if (ctx->pc != 0x1493C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014C2F0_0x14c2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1493C4u; }
        if (ctx->pc != 0x1493C4u) { return; }
    }
    ctx->pc = 0x1493C4u;
    // 0x1493c4: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x1493c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x1493c8: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x1493c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_1493cc:
    // 0x1493cc: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x1493ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x1493d0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1493d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1493d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1493d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1493d8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1493d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1493dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1493dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1493e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1493E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1493E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1493E0u;
            // 0x1493e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x149368u: goto label_149368;
            case 0x1493B0u: goto label_1493b0;
            case 0x1493CCu: goto label_1493cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1493E8u;
}
