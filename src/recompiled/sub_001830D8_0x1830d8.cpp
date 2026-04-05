#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001830D8
// Address: 0x1830d8 - 0x183150
void sub_001830D8_0x1830d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001830D8_0x1830d8");
#endif

    ctx->pc = 0x1830d8u;

    // 0x1830d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1830d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1830dc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1830dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1830e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1830e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1830e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1830e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1830e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1830e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1830ec: 0xc060bba  jal         func_182EE8
    ctx->pc = 0x1830ECu;
    SET_GPR_U32(ctx, 31, 0x1830F4u);
    ctx->pc = 0x1830F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1830ECu;
            // 0x1830f0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182EE8u;
    if (runtime->hasFunction(0x182EE8u)) {
        auto targetFn = runtime->lookupFunction(0x182EE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1830F4u; }
        if (ctx->pc != 0x1830F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182EE8_0x182ee8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1830F4u; }
        if (ctx->pc != 0x1830F4u) { return; }
    }
    ctx->pc = 0x1830F4u;
    // 0x1830f4: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1830f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x1830f8: 0x8c834f58  lw          $v1, 0x4F58($a0)
    ctx->pc = 0x1830f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20312)));
    // 0x1830fc: 0x0  nop
    ctx->pc = 0x1830fcu;
    // NOP
label_183100:
    // 0x183100: 0x8c824f58  lw          $v0, 0x4F58($a0)
    ctx->pc = 0x183100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20312)));
    // 0x183104: 0x0  nop
    ctx->pc = 0x183104u;
    // NOP
    // 0x183108: 0x0  nop
    ctx->pc = 0x183108u;
    // NOP
    // 0x18310c: 0x0  nop
    ctx->pc = 0x18310cu;
    // NOP
    // 0x183110: 0x0  nop
    ctx->pc = 0x183110u;
    // NOP
    // 0x183114: 0x1043fffa  beq         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x183114u;
    {
        const bool branch_taken_0x183114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x183114) {
            ctx->pc = 0x183100u;
            runtime->cooperativeGuestYield();
            goto label_183100;
        }
    }
    ctx->pc = 0x18311Cu;
    // 0x18311c: 0xc060c64  jal         func_183190
    ctx->pc = 0x18311Cu;
    SET_GPR_U32(ctx, 31, 0x183124u);
    ctx->pc = 0x183120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18311Cu;
            // 0x183120: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183190u;
    if (runtime->hasFunction(0x183190u)) {
        auto targetFn = runtime->lookupFunction(0x183190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183124u; }
        if (ctx->pc != 0x183124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183190_0x183190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183124u; }
        if (ctx->pc != 0x183124u) { return; }
    }
    ctx->pc = 0x183124u;
    // 0x183124: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x183124u;
    {
        const bool branch_taken_0x183124 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x183124) {
            ctx->pc = 0x183134u;
            goto label_183134;
        }
    }
    ctx->pc = 0x18312Cu;
    // 0x18312c: 0xc060cba  jal         func_1832E8
    ctx->pc = 0x18312Cu;
    SET_GPR_U32(ctx, 31, 0x183134u);
    ctx->pc = 0x1832E8u;
    if (runtime->hasFunction(0x1832E8u)) {
        auto targetFn = runtime->lookupFunction(0x1832E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183134u; }
        if (ctx->pc != 0x183134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1832e8_0x183330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183134u; }
        if (ctx->pc != 0x183134u) { return; }
    }
    ctx->pc = 0x183134u;
label_183134:
    // 0x183134: 0xc060ba2  jal         func_182E88
    ctx->pc = 0x183134u;
    SET_GPR_U32(ctx, 31, 0x18313Cu);
    ctx->pc = 0x182E88u;
    if (runtime->hasFunction(0x182E88u)) {
        auto targetFn = runtime->lookupFunction(0x182E88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18313Cu; }
        if (ctx->pc != 0x18313Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182E88_0x182e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18313Cu; }
        if (ctx->pc != 0x18313Cu) { return; }
    }
    ctx->pc = 0x18313Cu;
    // 0x18313c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x18313cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183140: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x183140u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183144: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x183144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183148: 0x3e00008  jr          $ra
    ctx->pc = 0x183148u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18314Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183148u;
            // 0x18314c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x183100u: goto label_183100;
            case 0x183134u: goto label_183134;
            default: break;
        }
        return;
    }
    ctx->pc = 0x183150u;
}
