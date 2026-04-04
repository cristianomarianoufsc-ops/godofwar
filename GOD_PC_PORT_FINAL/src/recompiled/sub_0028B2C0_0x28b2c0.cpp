#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028B2C0
// Address: 0x28b2c0 - 0x28b308
void sub_0028B2C0_0x28b2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B2C0_0x28b2c0");
#endif

    ctx->pc = 0x28b2c0u;

    // 0x28b2c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28b2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28b2c4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x28b2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x28b2c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28b2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28b2cc: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x28b2ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x28b2d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28b2d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b2d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28b2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28b2d8: 0xc0a2d92  jal         func_28B648
    ctx->pc = 0x28B2D8u;
    SET_GPR_U32(ctx, 31, 0x28B2E0u);
    ctx->pc = 0x28B2DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B2D8u;
            // 0x28b2dc: 0x8e044294  lw          $a0, 0x4294($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17044)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B648u;
    if (runtime->hasFunction(0x28B648u)) {
        auto targetFn = runtime->lookupFunction(0x28B648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B2E0u; }
        if (ctx->pc != 0x28B2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028B648_0x28b648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B2E0u; }
        if (ctx->pc != 0x28B2E0u) { return; }
    }
    ctx->pc = 0x28B2E0u;
    // 0x28b2e0: 0x8e044294  lw          $a0, 0x4294($s0)
    ctx->pc = 0x28b2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17044)));
    // 0x28b2e4: 0xc0a4278  jal         func_2909E0
    ctx->pc = 0x28B2E4u;
    SET_GPR_U32(ctx, 31, 0x28B2ECu);
    ctx->pc = 0x28B2E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B2E4u;
            // 0x28b2e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2909E0u;
    if (runtime->hasFunction(0x2909E0u)) {
        auto targetFn = runtime->lookupFunction(0x2909E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B2ECu; }
        if (ctx->pc != 0x28B2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002909E0_0x2909e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B2ECu; }
        if (ctx->pc != 0x28B2ECu) { return; }
    }
    ctx->pc = 0x28B2ECu;
    // 0x28b2ec: 0xc0a2daa  jal         func_28B6A8
    ctx->pc = 0x28B2ECu;
    SET_GPR_U32(ctx, 31, 0x28B2F4u);
    ctx->pc = 0x28B2F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B2ECu;
            // 0x28b2f0: 0x8e044294  lw          $a0, 0x4294($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17044)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B6A8u;
    if (runtime->hasFunction(0x28B6A8u)) {
        auto targetFn = runtime->lookupFunction(0x28B6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B2F4u; }
        if (ctx->pc != 0x28B2F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028B6A8_0x28b6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B2F4u; }
        if (ctx->pc != 0x28B2F4u) { return; }
    }
    ctx->pc = 0x28B2F4u;
    // 0x28b2f4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x28b2f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28b2f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28b2f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28b2fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28b2fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28b300: 0x3e00008  jr          $ra
    ctx->pc = 0x28B300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B300u;
            // 0x28b304: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28B308u;
}
