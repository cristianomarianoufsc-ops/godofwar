#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013E6D0
// Address: 0x13e6d0 - 0x13e750
void sub_0013E6D0_0x13e6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E6D0_0x13e6d0");
#endif

    ctx->pc = 0x13e6d0u;

    // 0x13e6d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13e6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13e6d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13e6d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e6d8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x13e6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x13e6dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13e6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13e6e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13e6e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e6e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x13e6e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e6e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13e6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13e6ec: 0xc04bfcc  jal         func_12FF30
    ctx->pc = 0x13E6ECu;
    SET_GPR_U32(ctx, 31, 0x13E6F4u);
    ctx->pc = 0x13E6F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E6ECu;
            // 0x13e6f0: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FF30u;
    if (runtime->hasFunction(0x12FF30u)) {
        auto targetFn = runtime->lookupFunction(0x12FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E6F4u; }
        if (ctx->pc != 0x13E6F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012FF30_0x12ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E6F4u; }
        if (ctx->pc != 0x13E6F4u) { return; }
    }
    ctx->pc = 0x13E6F4u;
    // 0x13e6f4: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x13e6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x13e6f8: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x13e6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x13e6fc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x13e6fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e700: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x13e700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x13e704: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x13E704u;
    SET_GPR_U32(ctx, 31, 0x13E70Cu);
    ctx->pc = 0x13E708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E704u;
            // 0x13e708: 0x24a516b0  addiu       $a1, $a1, 0x16B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E70Cu; }
        if (ctx->pc != 0x13E70Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E70Cu; }
        if (ctx->pc != 0x13E70Cu) { return; }
    }
    ctx->pc = 0x13E70Cu;
    // 0x13e70c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x13e70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x13e710: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13e710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e714: 0xc0a250f  jal         func_28943C
    ctx->pc = 0x13E714u;
    SET_GPR_U32(ctx, 31, 0x13E71Cu);
    ctx->pc = 0x13E718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E714u;
            // 0x13e718: 0x2406005c  addiu       $a2, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E71Cu; }
        if (ctx->pc != 0x13E71Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28943c_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E71Cu; }
        if (ctx->pc != 0x13E71Cu) { return; }
    }
    ctx->pc = 0x13E71Cu;
    // 0x13e71c: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x13e71cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
    // 0x13e720: 0x34213483  ori         $at, $at, 0x3483
    ctx->pc = 0x13e720u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13443);
    // 0x13e724: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13e724u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13e728: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13e728u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e72c: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x13e72cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x13e730: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x13e730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x13e734: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x13e734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x13e738: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x13e738u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13e73c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13e73cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13e740: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13e740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e744: 0x3e00008  jr          $ra
    ctx->pc = 0x13E744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E744u;
            // 0x13e748: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13E74Cu;
    // 0x13e74c: 0x0  nop
    ctx->pc = 0x13e74cu;
    // NOP
}
