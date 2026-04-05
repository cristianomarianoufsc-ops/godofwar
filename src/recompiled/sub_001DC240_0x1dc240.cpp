#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DC240
// Address: 0x1dc240 - 0x1dc2b0
void sub_001DC240_0x1dc240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC240_0x1dc240");
#endif

    ctx->pc = 0x1dc240u;

    // 0x1dc240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dc240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dc244: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1dc244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1dc248: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dc248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dc24c: 0xc05f94a  jal         func_17E528
    ctx->pc = 0x1DC24Cu;
    SET_GPR_U32(ctx, 31, 0x1DC254u);
    ctx->pc = 0x1DC250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC24Cu;
            // 0x1dc250: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E528u;
    if (runtime->hasFunction(0x17E528u)) {
        auto targetFn = runtime->lookupFunction(0x17E528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC254u; }
        if (ctx->pc != 0x1DC254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e528_0x17e530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC254u; }
        if (ctx->pc != 0x1DC254u) { return; }
    }
    ctx->pc = 0x1DC254u;
    // 0x1dc254: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1dc254u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1dc258: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1dc258u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1dc25c: 0x24a56cb8  addiu       $a1, $a1, 0x6CB8
    ctx->pc = 0x1dc25cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27832));
    // 0x1dc260: 0x24c6d28c  addiu       $a2, $a2, -0x2D74
    ctx->pc = 0x1dc260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955660));
    // 0x1dc264: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1DC264u;
    SET_GPR_U32(ctx, 31, 0x1DC26Cu);
    ctx->pc = 0x1DC268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC264u;
            // 0x1dc268: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC26Cu; }
        if (ctx->pc != 0x1DC26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC26Cu; }
        if (ctx->pc != 0x1DC26Cu) { return; }
    }
    ctx->pc = 0x1DC26Cu;
    // 0x1dc26c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1dc26cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1dc270: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1dc270u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1dc274: 0x24a56cd0  addiu       $a1, $a1, 0x6CD0
    ctx->pc = 0x1dc274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27856));
    // 0x1dc278: 0x24c6d290  addiu       $a2, $a2, -0x2D70
    ctx->pc = 0x1dc278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955664));
    // 0x1dc27c: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1DC27Cu;
    SET_GPR_U32(ctx, 31, 0x1DC284u);
    ctx->pc = 0x1DC280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC27Cu;
            // 0x1dc280: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC284u; }
        if (ctx->pc != 0x1DC284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC284u; }
        if (ctx->pc != 0x1DC284u) { return; }
    }
    ctx->pc = 0x1DC284u;
    // 0x1dc284: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1dc284u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1dc288: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1dc288u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1dc28c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dc28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc290: 0x24a56ce8  addiu       $a1, $a1, 0x6CE8
    ctx->pc = 0x1dc290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27880));
    // 0x1dc294: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1DC294u;
    SET_GPR_U32(ctx, 31, 0x1DC29Cu);
    ctx->pc = 0x1DC298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC294u;
            // 0x1dc298: 0x24c6d294  addiu       $a2, $a2, -0x2D6C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955668));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC29Cu; }
        if (ctx->pc != 0x1DC29Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC29Cu; }
        if (ctx->pc != 0x1DC29Cu) { return; }
    }
    ctx->pc = 0x1DC29Cu;
    // 0x1dc29c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1dc29cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dc2a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dc2a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc2a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC2A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC2A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC2A4u;
            // 0x1dc2a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DC2ACu;
    // 0x1dc2ac: 0x0  nop
    ctx->pc = 0x1dc2acu;
    // NOP
}
