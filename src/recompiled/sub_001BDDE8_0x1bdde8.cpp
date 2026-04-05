#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BDDE8
// Address: 0x1bdde8 - 0x1bde60
void sub_001BDDE8_0x1bdde8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BDDE8_0x1bdde8");
#endif

    ctx->pc = 0x1bdde8u;

    // 0x1bdde8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bdde8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bddec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1bddecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1bddf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bddf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bddf4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bddf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bddf8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1bddf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1bddfc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1bddfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bde00: 0xc06ed28  jal         func_1BB4A0
    ctx->pc = 0x1BDE00u;
    SET_GPR_U32(ctx, 31, 0x1BDE08u);
    ctx->pc = 0x1BDE04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDE00u;
            // 0x1bde04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB4A0u;
    if (runtime->hasFunction(0x1BB4A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BB4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDE08u; }
        if (ctx->pc != 0x1BDE08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB4A0_0x1bb4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDE08u; }
        if (ctx->pc != 0x1BDE08u) { return; }
    }
    ctx->pc = 0x1BDE08u;
    // 0x1bde08: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bde08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bde0c: 0x8c435a2c  lw          $v1, 0x5A2C($v0)
    ctx->pc = 0x1bde0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23084)));
    // 0x1bde10: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1bde10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bde14: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bde14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bde18: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BDE18u;
    {
        const bool branch_taken_0x1bde18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bde18) {
            ctx->pc = 0x1BDE1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDE18u;
            // 0x1bde1c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BDE40u;
            goto label_1bde40;
        }
    }
    ctx->pc = 0x1BDE20u;
    // 0x1bde20: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1bde20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1bde24: 0x1050000a  beq         $v0, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1BDE24u;
    {
        const bool branch_taken_0x1bde24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1BDE28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDE24u;
            // 0x1bde28: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bde24) {
            ctx->pc = 0x1BDE50u;
            goto label_1bde50;
        }
    }
    ctx->pc = 0x1BDE2Cu;
    // 0x1bde2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bde2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bde30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bde30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bde34: 0xc06ec3e  jal         func_1BB0F8
    ctx->pc = 0x1BDE34u;
    SET_GPR_U32(ctx, 31, 0x1BDE3Cu);
    ctx->pc = 0x1BDE38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDE34u;
            // 0x1bde38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB0F8u;
    if (runtime->hasFunction(0x1BB0F8u)) {
        auto targetFn = runtime->lookupFunction(0x1BB0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDE3Cu; }
        if (ctx->pc != 0x1BDE3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1bb0f8_0x1bb1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDE3Cu; }
        if (ctx->pc != 0x1BDE3Cu) { return; }
    }
    ctx->pc = 0x1BDE3Cu;
    // 0x1bde3c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1bde3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bde40:
    // 0x1bde40: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1bde40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1bde44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bde44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bde48: 0xc06ec3e  jal         func_1BB0F8
    ctx->pc = 0x1BDE48u;
    SET_GPR_U32(ctx, 31, 0x1BDE50u);
    ctx->pc = 0x1BDE4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDE48u;
            // 0x1bde4c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB0F8u;
    if (runtime->hasFunction(0x1BB0F8u)) {
        auto targetFn = runtime->lookupFunction(0x1BB0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDE50u; }
        if (ctx->pc != 0x1BDE50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1bb0f8_0x1bb1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDE50u; }
        if (ctx->pc != 0x1BDE50u) { return; }
    }
    ctx->pc = 0x1BDE50u;
label_1bde50:
    // 0x1bde50: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1bde50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bde54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bde54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bde58: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDE58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDE5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDE58u;
            // 0x1bde5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BDE40u: goto label_1bde40;
            case 0x1BDE50u: goto label_1bde50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BDE60u;
}
