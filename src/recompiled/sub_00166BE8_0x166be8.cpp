#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00166BE8
// Address: 0x166be8 - 0x166c58
void sub_00166BE8_0x166be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166BE8_0x166be8");
#endif

    ctx->pc = 0x166be8u;

    // 0x166be8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x166be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x166bec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x166becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x166bf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x166bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x166bf4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x166bf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166bf8: 0xc0533a4  jal         func_14CE90
    ctx->pc = 0x166BF8u;
    SET_GPR_U32(ctx, 31, 0x166C00u);
    ctx->pc = 0x166BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166BF8u;
            // 0x166bfc: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14CE90u;
    if (runtime->hasFunction(0x14CE90u)) {
        auto targetFn = runtime->lookupFunction(0x14CE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166C00u; }
        if (ctx->pc != 0x166C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014CE90_0x14ce90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166C00u; }
        if (ctx->pc != 0x166C00u) { return; }
    }
    ctx->pc = 0x166C00u;
    // 0x166c00: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x166c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x166c04: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x166C04u;
    {
        const bool branch_taken_0x166c04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x166c04) {
            ctx->pc = 0x166C08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x166C04u;
            // 0x166c08: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x166C18u;
            goto label_166c18;
        }
    }
    ctx->pc = 0x166C0Cu;
    // 0x166c0c: 0xc0533a4  jal         func_14CE90
    ctx->pc = 0x166C0Cu;
    SET_GPR_U32(ctx, 31, 0x166C14u);
    ctx->pc = 0x14CE90u;
    if (runtime->hasFunction(0x14CE90u)) {
        auto targetFn = runtime->lookupFunction(0x14CE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166C14u; }
        if (ctx->pc != 0x166C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014CE90_0x14ce90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166C14u; }
        if (ctx->pc != 0x166C14u) { return; }
    }
    ctx->pc = 0x166C14u;
    // 0x166c14: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x166c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_166c18:
    // 0x166c18: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x166C18u;
    {
        const bool branch_taken_0x166c18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x166C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166C18u;
            // 0x166c1c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166c18) {
            ctx->pc = 0x166C48u;
            goto label_166c48;
        }
    }
    ctx->pc = 0x166C20u;
label_166c20:
    // 0x166c20: 0xc0533a4  jal         func_14CE90
    ctx->pc = 0x166C20u;
    SET_GPR_U32(ctx, 31, 0x166C28u);
    ctx->pc = 0x166C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166C20u;
            // 0x166c24: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14CE90u;
    if (runtime->hasFunction(0x14CE90u)) {
        auto targetFn = runtime->lookupFunction(0x14CE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166C28u; }
        if (ctx->pc != 0x166C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014CE90_0x14ce90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166C28u; }
        if (ctx->pc != 0x166C28u) { return; }
    }
    ctx->pc = 0x166C28u;
    // 0x166c28: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x166c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x166c2c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x166C2Cu;
    {
        const bool branch_taken_0x166c2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x166c2c) {
            ctx->pc = 0x166C30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x166C2Cu;
            // 0x166c30: 0x8e100018  lw          $s0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x166C40u;
            goto label_166c40;
        }
    }
    ctx->pc = 0x166C34u;
    // 0x166c34: 0xc0533a4  jal         func_14CE90
    ctx->pc = 0x166C34u;
    SET_GPR_U32(ctx, 31, 0x166C3Cu);
    ctx->pc = 0x14CE90u;
    if (runtime->hasFunction(0x14CE90u)) {
        auto targetFn = runtime->lookupFunction(0x14CE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166C3Cu; }
        if (ctx->pc != 0x166C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014CE90_0x14ce90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166C3Cu; }
        if (ctx->pc != 0x166C3Cu) { return; }
    }
    ctx->pc = 0x166C3Cu;
    // 0x166c3c: 0x8e100018  lw          $s0, 0x18($s0)
    ctx->pc = 0x166c3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_166c40:
    // 0x166c40: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x166C40u;
    {
        const bool branch_taken_0x166c40 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x166c40) {
            ctx->pc = 0x166C20u;
            runtime->cooperativeGuestYield();
            goto label_166c20;
        }
    }
    ctx->pc = 0x166C48u;
label_166c48:
    // 0x166c48: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x166c48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166c4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x166c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166c50: 0x3e00008  jr          $ra
    ctx->pc = 0x166C50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166C50u;
            // 0x166c54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166C18u: goto label_166c18;
            case 0x166C20u: goto label_166c20;
            case 0x166C40u: goto label_166c40;
            case 0x166C48u: goto label_166c48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x166C58u;
}
