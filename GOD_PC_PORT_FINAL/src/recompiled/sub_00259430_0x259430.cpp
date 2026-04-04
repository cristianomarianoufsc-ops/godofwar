#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00259430
// Address: 0x259430 - 0x259480
void sub_00259430_0x259430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259430_0x259430");
#endif

    ctx->pc = 0x259430u;

    // 0x259430: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x259430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x259434: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x259434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x259438: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x259438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25943c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25943cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259440: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x259440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x259444: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x259444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x259448: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x259448u;
    {
        const bool branch_taken_0x259448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25944Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259448u;
            // 0x25944c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259448) {
            ctx->pc = 0x259458u;
            goto label_259458;
        }
    }
    ctx->pc = 0x259450u;
    // 0x259450: 0xc08c2c6  jal         func_230B18
    ctx->pc = 0x259450u;
    SET_GPR_U32(ctx, 31, 0x259458u);
    ctx->pc = 0x230B18u;
    if (runtime->hasFunction(0x230B18u)) {
        auto targetFn = runtime->lookupFunction(0x230B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259458u; }
        if (ctx->pc != 0x259458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230B18_0x230b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259458u; }
        if (ctx->pc != 0x259458u) { return; }
    }
    ctx->pc = 0x259458u;
label_259458:
    // 0x259458: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x259458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x25945c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x25945Cu;
    {
        const bool branch_taken_0x25945c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25945c) {
            ctx->pc = 0x259460u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x25945Cu;
            // 0x259460: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x259470u;
            goto label_259470;
        }
    }
    ctx->pc = 0x259464u;
    // 0x259464: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x259464u;
    SET_GPR_U32(ctx, 31, 0x25946Cu);
    ctx->pc = 0x259468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259464u;
            // 0x259468: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25946Cu; }
        if (ctx->pc != 0x25946Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25946Cu; }
        if (ctx->pc != 0x25946Cu) { return; }
    }
    ctx->pc = 0x25946Cu;
    // 0x25946c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x25946cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_259470:
    // 0x259470: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x259470u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259474: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x259474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259478: 0x3e00008  jr          $ra
    ctx->pc = 0x259478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25947Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259478u;
            // 0x25947c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x259458u: goto label_259458;
            case 0x259470u: goto label_259470;
            default: break;
        }
        return;
    }
    ctx->pc = 0x259480u;
}
