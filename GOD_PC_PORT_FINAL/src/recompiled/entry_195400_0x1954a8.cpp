#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_195400
// Address: 0x195400 - 0x1954a8
void entry_195400_0x1954a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_195400_0x1954a8");
#endif

    ctx->pc = 0x195400u;

    // 0x195400: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x195400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x195404: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x195404u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x195408: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x195408u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x19540c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x19540cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x195410: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x195410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x195414: 0x2442df70  addiu       $v0, $v0, -0x2090
    ctx->pc = 0x195414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958960));
    // 0x195418: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x195418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19541c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19541cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x195420: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x195420u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x195424: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x195424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x195428: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x195428u;
    {
        const bool branch_taken_0x195428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19542Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195428u;
            // 0x19542c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195428) {
            ctx->pc = 0x195490u;
            goto label_195490;
        }
    }
    ctx->pc = 0x195430u;
    // 0x195430: 0xc065042  jal         func_194108
    ctx->pc = 0x195430u;
    SET_GPR_U32(ctx, 31, 0x195438u);
    ctx->pc = 0x195434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195430u;
            // 0x195434: 0x3c100033  lui         $s0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194108u;
    if (runtime->hasFunction(0x194108u)) {
        auto targetFn = runtime->lookupFunction(0x194108u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195438u; }
        if (ctx->pc != 0x195438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00194108_0x194108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195438u; }
        if (ctx->pc != 0x195438u) { return; }
    }
    ctx->pc = 0x195438u;
    // 0x195438: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x195438u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19543c: 0x2610e848  addiu       $s0, $s0, -0x17B8
    ctx->pc = 0x19543cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961224));
    // 0x195440: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x195440u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x195444: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x195444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x195448: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x195448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19544c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x19544cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x195450: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x195450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x195454: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x195454u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x195458: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x195458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x19545c: 0x40f809  jalr        $v0
    ctx->pc = 0x19545Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195464u);
        ctx->pc = 0x195460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19545Cu;
            // 0x195460: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x195464u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x195490u: goto label_195490;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x195464u; }
            if (ctx->pc != 0x195464u) { return; }
        }
        }
    }
    ctx->pc = 0x195464u;
    // 0x195464: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x195464u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x195468: 0xc04c992  jal         func_132648
    ctx->pc = 0x195468u;
    SET_GPR_U32(ctx, 31, 0x195470u);
    ctx->pc = 0x19546Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195468u;
            // 0x19546c: 0x248436a0  addiu       $a0, $a0, 0x36A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13984));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132648u;
    if (runtime->hasFunction(0x132648u)) {
        auto targetFn = runtime->lookupFunction(0x132648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195470u; }
        if (ctx->pc != 0x195470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132648_0x132648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195470u; }
        if (ctx->pc != 0x195470u) { return; }
    }
    ctx->pc = 0x195470u;
    // 0x195470: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x195470u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x195474: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x195474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x195478: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x195478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x19547c: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x19547cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x195480: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x195480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x195484: 0x40f809  jalr        $v0
    ctx->pc = 0x195484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19548Cu);
        ctx->pc = 0x195488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195484u;
            // 0x195488: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19548Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x195490u: goto label_195490;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19548Cu; }
            if (ctx->pc != 0x19548Cu) { return; }
        }
        }
    }
    ctx->pc = 0x19548Cu;
    // 0x19548c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x19548cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_195490:
    // 0x195490: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x195490u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195494: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x195494u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195498: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x195498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19549c: 0x3e00008  jr          $ra
    ctx->pc = 0x19549Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1954A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19549Cu;
            // 0x1954a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x195490u: goto label_195490;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1954A4u;
    // 0x1954a4: 0x0  nop
    ctx->pc = 0x1954a4u;
    // NOP
}
