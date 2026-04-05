#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00234440
// Address: 0x234440 - 0x2344a8
void sub_00234440_0x234440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234440_0x234440");
#endif

    ctx->pc = 0x234440u;

    // 0x234440: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x234440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x234444: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x234444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x234448: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x234448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x23444c: 0x24422020  addiu       $v0, $v0, 0x2020
    ctx->pc = 0x23444cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8224));
    // 0x234450: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x234450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x234454: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x234454u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234458: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x234458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23445c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x23445cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x234460: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x234460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x234464: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x234464u;
    {
        const bool branch_taken_0x234464 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x234468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234464u;
            // 0x234468: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234464) {
            ctx->pc = 0x234474u;
            goto label_234474;
        }
    }
    ctx->pc = 0x23446Cu;
    // 0x23446c: 0xc04f5b0  jal         func_13D6C0
    ctx->pc = 0x23446Cu;
    SET_GPR_U32(ctx, 31, 0x234474u);
    ctx->pc = 0x13D6C0u;
    if (runtime->hasFunction(0x13D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x13D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234474u; }
        if (ctx->pc != 0x234474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D6C0_0x13d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234474u; }
        if (ctx->pc != 0x234474u) { return; }
    }
    ctx->pc = 0x234474u;
label_234474:
    // 0x234474: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x234474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x234478: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x234478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x23447c: 0x24422038  addiu       $v0, $v0, 0x2038
    ctx->pc = 0x23447cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8248));
    // 0x234480: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x234480u;
    {
        const bool branch_taken_0x234480 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x234484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234480u;
            // 0x234484: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234480) {
            ctx->pc = 0x234490u;
            goto label_234490;
        }
    }
    ctx->pc = 0x234488u;
    // 0x234488: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x234488u;
    SET_GPR_U32(ctx, 31, 0x234490u);
    ctx->pc = 0x23448Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234488u;
            // 0x23448c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234490u; }
        if (ctx->pc != 0x234490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234490u; }
        if (ctx->pc != 0x234490u) { return; }
    }
    ctx->pc = 0x234490u;
label_234490:
    // 0x234490: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x234490u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x234494: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x234494u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234498: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x234498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23449c: 0x3e00008  jr          $ra
    ctx->pc = 0x23449Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2344A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23449Cu;
            // 0x2344a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x234474u: goto label_234474;
            case 0x234490u: goto label_234490;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2344A4u;
    // 0x2344a4: 0x0  nop
    ctx->pc = 0x2344a4u;
    // NOP
}
