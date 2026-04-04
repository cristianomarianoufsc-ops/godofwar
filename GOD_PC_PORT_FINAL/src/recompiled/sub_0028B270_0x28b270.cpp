#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028B270
// Address: 0x28b270 - 0x28b2c0
void sub_0028B270_0x28b270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B270_0x28b270");
#endif

    ctx->pc = 0x28b270u;

    // 0x28b270: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28b270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28b274: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x28b274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x28b278: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28b278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28b27c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28b27cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b280: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x28b280u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x28b284: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28b284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28b288: 0xc0a2d92  jal         func_28B648
    ctx->pc = 0x28B288u;
    SET_GPR_U32(ctx, 31, 0x28B290u);
    ctx->pc = 0x28B28Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B288u;
            // 0x28b28c: 0x8e244294  lw          $a0, 0x4294($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 17044)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B648u;
    if (runtime->hasFunction(0x28B648u)) {
        auto targetFn = runtime->lookupFunction(0x28B648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B290u; }
        if (ctx->pc != 0x28B290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028B648_0x28b648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B290u; }
        if (ctx->pc != 0x28B290u) { return; }
    }
    ctx->pc = 0x28B290u;
    // 0x28b290: 0x8e244294  lw          $a0, 0x4294($s1)
    ctx->pc = 0x28b290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 17044)));
    // 0x28b294: 0xc0a40ac  jal         func_2902B0
    ctx->pc = 0x28B294u;
    SET_GPR_U32(ctx, 31, 0x28B29Cu);
    ctx->pc = 0x28B298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B294u;
            // 0x28b298: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2902B0u;
    if (runtime->hasFunction(0x2902B0u)) {
        auto targetFn = runtime->lookupFunction(0x2902B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B29Cu; }
        if (ctx->pc != 0x28B29Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002902B0_0x2902b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B29Cu; }
        if (ctx->pc != 0x28B29Cu) { return; }
    }
    ctx->pc = 0x28B29Cu;
    // 0x28b29c: 0x8e244294  lw          $a0, 0x4294($s1)
    ctx->pc = 0x28b29cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 17044)));
    // 0x28b2a0: 0xc0a2daa  jal         func_28B6A8
    ctx->pc = 0x28B2A0u;
    SET_GPR_U32(ctx, 31, 0x28B2A8u);
    ctx->pc = 0x28B2A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B2A0u;
            // 0x28b2a4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B6A8u;
    if (runtime->hasFunction(0x28B6A8u)) {
        auto targetFn = runtime->lookupFunction(0x28B6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B2A8u; }
        if (ctx->pc != 0x28B2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028B6A8_0x28b6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B2A8u; }
        if (ctx->pc != 0x28B2A8u) { return; }
    }
    ctx->pc = 0x28B2A8u;
    // 0x28b2a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28b2a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b2ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28b2acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28b2b0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x28b2b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28b2b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28b2b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28b2b8: 0x3e00008  jr          $ra
    ctx->pc = 0x28B2B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B2B8u;
            // 0x28b2bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28B2C0u;
}
