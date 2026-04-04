#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00156A30
// Address: 0x156a30 - 0x156a80
void sub_00156A30_0x156a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156A30_0x156a30");
#endif

    ctx->pc = 0x156a30u;

    // 0x156a30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x156a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x156a34: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x156a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x156a38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x156a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x156a3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x156a3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156a40: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x156a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x156a44: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x156A44u;
    {
        const bool branch_taken_0x156a44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x156a44) {
            ctx->pc = 0x156A48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x156A44u;
            // 0x156a48: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156A70u;
            goto label_156a70;
        }
    }
    ctx->pc = 0x156A4Cu;
    // 0x156a4c: 0xc05423a  jal         func_1508E8
    ctx->pc = 0x156A4Cu;
    SET_GPR_U32(ctx, 31, 0x156A54u);
    ctx->pc = 0x156A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156A4Cu;
            // 0x156a50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1508E8u;
    if (runtime->hasFunction(0x1508E8u)) {
        auto targetFn = runtime->lookupFunction(0x1508E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156A54u; }
        if (ctx->pc != 0x156A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001508E8_0x1508e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156A54u; }
        if (ctx->pc != 0x156A54u) { return; }
    }
    ctx->pc = 0x156A54u;
    // 0x156a54: 0xc055a64  jal         func_156990
    ctx->pc = 0x156A54u;
    SET_GPR_U32(ctx, 31, 0x156A5Cu);
    ctx->pc = 0x156A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156A54u;
            // 0x156a58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156990u;
    if (runtime->hasFunction(0x156990u)) {
        auto targetFn = runtime->lookupFunction(0x156990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156A5Cu; }
        if (ctx->pc != 0x156A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156990_0x156990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156A5Cu; }
        if (ctx->pc != 0x156A5Cu) { return; }
    }
    ctx->pc = 0x156A5Cu;
    // 0x156a5c: 0x8c440064  lw          $a0, 0x64($v0)
    ctx->pc = 0x156a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x156a60: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x156A60u;
    SET_GPR_U32(ctx, 31, 0x156A68u);
    ctx->pc = 0x156A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156A60u;
            // 0x156a64: 0x8e050110  lw          $a1, 0x110($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156A68u; }
        if (ctx->pc != 0x156A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156A68u; }
        if (ctx->pc != 0x156A68u) { return; }
    }
    ctx->pc = 0x156A68u;
    // 0x156a68: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x156a68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
    // 0x156a6c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x156a6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_156a70:
    // 0x156a70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x156a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156a74: 0x3e00008  jr          $ra
    ctx->pc = 0x156A74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156A74u;
            // 0x156a78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x156A70u: goto label_156a70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x156A7Cu;
    // 0x156a7c: 0x0  nop
    ctx->pc = 0x156a7cu;
    // NOP
}
