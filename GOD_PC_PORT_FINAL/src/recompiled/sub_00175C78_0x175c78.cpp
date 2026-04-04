#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00175C78
// Address: 0x175c78 - 0x175cd0
void sub_00175C78_0x175c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175C78_0x175c78");
#endif

    ctx->pc = 0x175c78u;

    // 0x175c78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x175c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x175c7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x175c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x175c80: 0x24910004  addiu       $s1, $a0, 0x4
    ctx->pc = 0x175c80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x175c84: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x175c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x175c88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x175c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x175c8c: 0xc05da7e  jal         func_1769F8
    ctx->pc = 0x175C8Cu;
    SET_GPR_U32(ctx, 31, 0x175C94u);
    ctx->pc = 0x175C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175C8Cu;
            // 0x175c90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1769F8u;
    if (runtime->hasFunction(0x1769F8u)) {
        auto targetFn = runtime->lookupFunction(0x1769F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175C94u; }
        if (ctx->pc != 0x175C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001769F8_0x1769f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175C94u; }
        if (ctx->pc != 0x175C94u) { return; }
    }
    ctx->pc = 0x175C94u;
    // 0x175c94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x175c94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175c98: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x175c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x175c9c: 0x3c047fff  lui         $a0, 0x7FFF
    ctx->pc = 0x175c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32767 << 16));
    // 0x175ca0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x175ca0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x175ca4: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x175CA4u;
    SET_GPR_U32(ctx, 31, 0x175CACu);
    ctx->pc = 0x175CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175CA4u;
            // 0x175ca8: 0x442024  and         $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175CACu; }
        if (ctx->pc != 0x175CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175CACu; }
        if (ctx->pc != 0x175CACu) { return; }
    }
    ctx->pc = 0x175CACu;
    // 0x175cac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x175cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175cb0: 0xc05dee0  jal         func_177B80
    ctx->pc = 0x175CB0u;
    SET_GPR_U32(ctx, 31, 0x175CB8u);
    ctx->pc = 0x175CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175CB0u;
            // 0x175cb4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x177B80u;
    if (runtime->hasFunction(0x177B80u)) {
        auto targetFn = runtime->lookupFunction(0x177B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175CB8u; }
        if (ctx->pc != 0x175CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00177B80_0x177b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175CB8u; }
        if (ctx->pc != 0x175CB8u) { return; }
    }
    ctx->pc = 0x175CB8u;
    // 0x175cb8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x175cb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x175cbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x175cbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175cc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x175cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x175CC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175CC4u;
            // 0x175cc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x175CCCu;
    // 0x175ccc: 0x0  nop
    ctx->pc = 0x175cccu;
    // NOP
}
