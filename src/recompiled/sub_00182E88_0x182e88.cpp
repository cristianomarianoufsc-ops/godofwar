#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00182E88
// Address: 0x182e88 - 0x182ee8
void sub_00182E88_0x182e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182E88_0x182e88");
#endif

    ctx->pc = 0x182e88u;

    // 0x182e88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x182e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x182e8c: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x182e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x182e90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x182e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x182e94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x182e94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182e98: 0x24a52dd8  addiu       $a1, $a1, 0x2DD8
    ctx->pc = 0x182e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11736));
    // 0x182e9c: 0xc0a4e40  jal         func_293900
    ctx->pc = 0x182E9Cu;
    SET_GPR_U32(ctx, 31, 0x182EA4u);
    ctx->pc = 0x182EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182E9Cu;
            // 0x182ea0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293900u;
    if (runtime->hasFunction(0x293900u)) {
        auto targetFn = runtime->lookupFunction(0x293900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182EA4u; }
        if (ctx->pc != 0x182EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293900_0x293910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182EA4u; }
        if (ctx->pc != 0x182EA4u) { return; }
    }
    ctx->pc = 0x182EA4u;
    // 0x182ea4: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x182ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x182ea8: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x182ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x182eac: 0xac82c7c0  sw          $v0, -0x3840($a0)
    ctx->pc = 0x182eacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294952896), GPR_U32(ctx, 2));
    // 0x182eb0: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x182eb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x182eb4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x182eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x182eb8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x182eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182ebc: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x182ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x182ec0: 0xc0a51a4  jal         func_294690
    ctx->pc = 0x182EC0u;
    SET_GPR_U32(ctx, 31, 0x182EC8u);
    ctx->pc = 0x294690u;
    if (runtime->hasFunction(0x294690u)) {
        auto targetFn = runtime->lookupFunction(0x294690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182EC8u; }
        if (ctx->pc != 0x182EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00294690_0x294690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182EC8u; }
        if (ctx->pc != 0x182EC8u) { return; }
    }
    ctx->pc = 0x182EC8u;
    // 0x182ec8: 0xc09e78c  jal         func_279E30
    ctx->pc = 0x182EC8u;
    SET_GPR_U32(ctx, 31, 0x182ED0u);
    ctx->pc = 0x279E30u;
    if (runtime->hasFunction(0x279E30u)) {
        auto targetFn = runtime->lookupFunction(0x279E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182ED0u; }
        if (ctx->pc != 0x182ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00279E30_0x279e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182ED0u; }
        if (ctx->pc != 0x182ED0u) { return; }
    }
    ctx->pc = 0x182ED0u;
    // 0x182ed0: 0x2404fdff  addiu       $a0, $zero, -0x201
    ctx->pc = 0x182ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x182ed4: 0xc09e77c  jal         func_279DF0
    ctx->pc = 0x182ED4u;
    SET_GPR_U32(ctx, 31, 0x182EDCu);
    ctx->pc = 0x182ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182ED4u;
            // 0x182ed8: 0x442024  and         $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x279DF0u;
    if (runtime->hasFunction(0x279DF0u)) {
        auto targetFn = runtime->lookupFunction(0x279DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182EDCu; }
        if (ctx->pc != 0x182EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00279DF0_0x279df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182EDCu; }
        if (ctx->pc != 0x182EDCu) { return; }
    }
    ctx->pc = 0x182EDCu;
    // 0x182edc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x182edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182ee0: 0x3e00008  jr          $ra
    ctx->pc = 0x182EE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182EE0u;
            // 0x182ee4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x182EE8u;
}
