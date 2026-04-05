#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BB1E0
// Address: 0x1bb1e0 - 0x1bb260
void sub_001BB1E0_0x1bb1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB1E0_0x1bb1e0");
#endif

    ctx->pc = 0x1bb1e0u;

    // 0x1bb1e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bb1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bb1e4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1bb1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1bb1e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bb1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bb1ec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1bb1ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb1f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bb1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bb1f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bb1f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb1f8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bb1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bb1fc: 0x0  nop
    ctx->pc = 0x1bb1fcu;
    // NOP
label_1bb200:
    // 0x1bb200: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1bb200u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1bb204: 0x24425280  addiu       $v0, $v0, 0x5280
    ctx->pc = 0x1bb204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21120));
    // 0x1bb208: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bb208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bb20c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1bb20cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bb210: 0x8ca20068  lw          $v0, 0x68($a1)
    ctx->pc = 0x1bb210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
    // 0x1bb214: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bb214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bb218: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BB218u;
    {
        const bool branch_taken_0x1bb218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb218) {
            ctx->pc = 0x1BB21Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB218u;
            // 0x1bb21c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BB238u;
            goto label_1bb238;
        }
    }
    ctx->pc = 0x1BB220u;
    // 0x1bb220: 0xc0a349c  jal         func_28D270
    ctx->pc = 0x1BB220u;
    SET_GPR_U32(ctx, 31, 0x1BB228u);
    ctx->pc = 0x1BB224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB220u;
            // 0x1bb224: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D270u;
    if (runtime->hasFunction(0x28D270u)) {
        auto targetFn = runtime->lookupFunction(0x28D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB228u; }
        if (ctx->pc != 0x1BB228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D270_0x28d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB228u; }
        if (ctx->pc != 0x1BB228u) { return; }
    }
    ctx->pc = 0x1BB228u;
    // 0x1bb228: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB228u;
    {
        const bool branch_taken_0x1bb228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb228) {
            ctx->pc = 0x1BB22Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB228u;
            // 0x1bb22c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BB238u;
            goto label_1bb238;
        }
    }
    ctx->pc = 0x1BB230u;
    // 0x1bb230: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1BB230u;
    {
        const bool branch_taken_0x1bb230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB230u;
            // 0x1bb234: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb230) {
            ctx->pc = 0x1BB248u;
            goto label_1bb248;
        }
    }
    ctx->pc = 0x1BB238u;
label_1bb238:
    // 0x1bb238: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1bb238u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1bb23c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1BB23Cu;
    {
        const bool branch_taken_0x1bb23c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB23Cu;
            // 0x1bb240: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb23c) {
            ctx->pc = 0x1BB200u;
            runtime->cooperativeGuestYield();
            goto label_1bb200;
        }
    }
    ctx->pc = 0x1BB244u;
    // 0x1bb244: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1bb244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1bb248:
    // 0x1bb248: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1bb248u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bb24c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bb24cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bb250: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bb250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb254: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB254u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB254u;
            // 0x1bb258: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BB200u: goto label_1bb200;
            case 0x1BB238u: goto label_1bb238;
            case 0x1BB248u: goto label_1bb248;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BB25Cu;
    // 0x1bb25c: 0x0  nop
    ctx->pc = 0x1bb25cu;
    // NOP
}
