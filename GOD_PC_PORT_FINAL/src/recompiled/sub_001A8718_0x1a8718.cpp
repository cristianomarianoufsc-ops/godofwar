#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A8718
// Address: 0x1a8718 - 0x1a87d8
void sub_001A8718_0x1a8718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8718_0x1a8718");
#endif

    ctx->pc = 0x1a8718u;

    // 0x1a8718: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a8718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a871c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1a871cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1a8720: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1a8720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1a8724: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a8724u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8728: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1a8728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1a872c: 0x12400024  beqz        $s2, . + 4 + (0x24 << 2)
    ctx->pc = 0x1A872Cu;
    {
        const bool branch_taken_0x1a872c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A872Cu;
            // 0x1a8730: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a872c) {
            ctx->pc = 0x1A87C0u;
            goto label_1a87c0;
        }
    }
    ctx->pc = 0x1A8734u;
    // 0x1a8734: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a8734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a8738: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1a8738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1a873c: 0x8c50cb1c  lw          $s0, -0x34E4($v0)
    ctx->pc = 0x1a873cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953756)));
    // 0x1a8740: 0x8c62cabc  lw          $v0, -0x3544($v1)
    ctx->pc = 0x1a8740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953660)));
    // 0x1a8744: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a8744u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1a8748: 0x202802b  sltu        $s0, $s0, $v0
    ctx->pc = 0x1a8748u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a874c: 0x3a100001  xori        $s0, $s0, 0x1
    ctx->pc = 0x1a874cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
    // 0x1a8750: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x1a8750u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x1a8754: 0x2631e848  addiu       $s1, $s1, -0x17B8
    ctx->pc = 0x1a8754u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961224));
    // 0x1a8758: 0x8c850054  lw          $a1, 0x54($a0)
    ctx->pc = 0x1a8758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x1a875c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1a875cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a8760: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1a8760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1a8764: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1a8764u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1a8768: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1a8768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1a876c: 0x40f809  jalr        $v0
    ctx->pc = 0x1A876Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A8774u);
        ctx->pc = 0x1A8770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A876Cu;
            // 0x1a8770: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A8774u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A87C0u: goto label_1a87c0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A8774u; }
            if (ctx->pc != 0x1A8774u) { return; }
        }
        }
    }
    ctx->pc = 0x1A8774u;
    // 0x1a8774: 0x8c450088  lw          $a1, 0x88($v0)
    ctx->pc = 0x1a8774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1a8778: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x1a8778u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a877c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a877cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a8780: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1a8780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1a8784: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a8784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a8788: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1a8788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1a878c: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x1a878cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x1a8790: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x1a8790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x1a8794: 0x40f809  jalr        $v0
    ctx->pc = 0x1A8794u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A879Cu);
        ctx->pc = 0x1A8798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8794u;
            // 0x1a8798: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A879Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A87C0u: goto label_1a87c0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A879Cu; }
            if (ctx->pc != 0x1A879Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1A879Cu;
    // 0x1a879c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a879cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a87a0: 0xc07b6a8  jal         func_1EDAA0
    ctx->pc = 0x1A87A0u;
    SET_GPR_U32(ctx, 31, 0x1A87A8u);
    ctx->pc = 0x1A87A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A87A0u;
            // 0x1a87a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EDAA0u;
    if (runtime->hasFunction(0x1EDAA0u)) {
        auto targetFn = runtime->lookupFunction(0x1EDAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A87A8u; }
        if (ctx->pc != 0x1A87A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EDAA0_0x1edaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A87A8u; }
        if (ctx->pc != 0x1A87A8u) { return; }
    }
    ctx->pc = 0x1A87A8u;
    // 0x1a87a8: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x1a87a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x1a87ac: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1a87acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1a87b0: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x1a87b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1a87b4: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x1a87b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x1a87b8: 0x40f809  jalr        $v0
    ctx->pc = 0x1A87B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A87C0u);
        ctx->pc = 0x1A87BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A87B8u;
            // 0x1a87bc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A87C0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A87C0u: goto label_1a87c0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A87C0u; }
            if (ctx->pc != 0x1A87C0u) { return; }
        }
        }
    }
    ctx->pc = 0x1A87C0u;
label_1a87c0:
    // 0x1a87c0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1a87c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a87c4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1a87c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a87c8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1a87c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a87cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a87ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a87d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A87D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A87D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A87D0u;
            // 0x1a87d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A87C0u: goto label_1a87c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A87D8u;
}
