#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002247E8
// Address: 0x2247e8 - 0x224870
void sub_002247E8_0x2247e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002247E8_0x2247e8");
#endif

    ctx->pc = 0x2247e8u;

    // 0x2247e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2247e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2247ec: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2247ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2247f0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2247f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2247f4: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x2247f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2247f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2247f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2247fc: 0x8c426ea8  lw          $v0, 0x6EA8($v0)
    ctx->pc = 0x2247fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28328)));
    // 0x224800: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x224800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x224804: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x224804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x224808: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x224808u;
    {
        const bool branch_taken_0x224808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22480Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224808u;
            // 0x22480c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224808) {
            ctx->pc = 0x224818u;
            goto label_224818;
        }
    }
    ctx->pc = 0x224810u;
    // 0x224810: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x224810u;
    {
        const bool branch_taken_0x224810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224810u;
            // 0x224814: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224810) {
            ctx->pc = 0x22481Cu;
            goto label_22481c;
        }
    }
    ctx->pc = 0x224818u;
label_224818:
    // 0x224818: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x224818u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22481c:
    // 0x22481c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x22481cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x224820: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x224820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224824: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x224824u;
    {
        const bool branch_taken_0x224824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224824) {
            ctx->pc = 0x224828u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x224824u;
            // 0x224828: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x224860u;
            goto label_224860;
        }
    }
    ctx->pc = 0x22482Cu;
    // 0x22482c: 0x0  nop
    ctx->pc = 0x22482cu;
    // NOP
label_224830:
    // 0x224830: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x224830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224834: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x224834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224838: 0xc0890f8  jal         func_2243E0
    ctx->pc = 0x224838u;
    SET_GPR_U32(ctx, 31, 0x224840u);
    ctx->pc = 0x22483Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224838u;
            // 0x22483c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2243E0u;
    if (runtime->hasFunction(0x2243E0u)) {
        auto targetFn = runtime->lookupFunction(0x2243E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224840u; }
        if (ctx->pc != 0x224840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002243E0_0x2243e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224840u; }
        if (ctx->pc != 0x224840u) { return; }
    }
    ctx->pc = 0x224840u;
    // 0x224840: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x224840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224844: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x224844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x224848: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x224848u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22484c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22484cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x224850: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x224850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x224854: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x224854u;
    {
        const bool branch_taken_0x224854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224854u;
            // 0x224858: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224854) {
            ctx->pc = 0x224830u;
            runtime->cooperativeGuestYield();
            goto label_224830;
        }
    }
    ctx->pc = 0x22485Cu;
    // 0x22485c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x22485cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_224860:
    // 0x224860: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x224860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224864: 0x3e00008  jr          $ra
    ctx->pc = 0x224864u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224864u;
            // 0x224868: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x224818u: goto label_224818;
            case 0x22481Cu: goto label_22481c;
            case 0x224830u: goto label_224830;
            case 0x224860u: goto label_224860;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22486Cu;
    // 0x22486c: 0x0  nop
    ctx->pc = 0x22486cu;
    // NOP
}
