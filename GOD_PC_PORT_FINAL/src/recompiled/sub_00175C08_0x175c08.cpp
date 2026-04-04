#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00175C08
// Address: 0x175c08 - 0x175c78
void sub_00175C08_0x175c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175C08_0x175c08");
#endif

    ctx->pc = 0x175c08u;

    // 0x175c08: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x175c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x175c0c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x175c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x175c10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x175c10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175c14: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x175c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x175c18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x175c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x175c1c: 0xc05d5f6  jal         func_1757D8
    ctx->pc = 0x175C1Cu;
    SET_GPR_U32(ctx, 31, 0x175C24u);
    ctx->pc = 0x175C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175C1Cu;
            // 0x175c20: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1757D8u;
    if (runtime->hasFunction(0x1757D8u)) {
        auto targetFn = runtime->lookupFunction(0x1757D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175C24u; }
        if (ctx->pc != 0x175C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1757d8_0x175828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175C24u; }
        if (ctx->pc != 0x175C24u) { return; }
    }
    ctx->pc = 0x175C24u;
    // 0x175c24: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x175c24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x175c28: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x175c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175c2c: 0xc05d5d0  jal         func_175740
    ctx->pc = 0x175C2Cu;
    SET_GPR_U32(ctx, 31, 0x175C34u);
    ctx->pc = 0x175C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175C2Cu;
            // 0x175c30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175740u;
    if (runtime->hasFunction(0x175740u)) {
        auto targetFn = runtime->lookupFunction(0x175740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175C34u; }
        if (ctx->pc != 0x175C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175740_0x175780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175C34u; }
        if (ctx->pc != 0x175C34u) { return; }
    }
    ctx->pc = 0x175C34u;
    // 0x175c34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x175c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175c38: 0xc05da7e  jal         func_1769F8
    ctx->pc = 0x175C38u;
    SET_GPR_U32(ctx, 31, 0x175C40u);
    ctx->pc = 0x175C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175C38u;
            // 0x175c3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1769F8u;
    if (runtime->hasFunction(0x1769F8u)) {
        auto targetFn = runtime->lookupFunction(0x1769F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175C40u; }
        if (ctx->pc != 0x175C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001769F8_0x1769f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175C40u; }
        if (ctx->pc != 0x175C40u) { return; }
    }
    ctx->pc = 0x175C40u;
    // 0x175c40: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x175c40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175c44: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x175c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x175c48: 0x3c047fff  lui         $a0, 0x7FFF
    ctx->pc = 0x175c48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32767 << 16));
    // 0x175c4c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x175c4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x175c50: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x175C50u;
    SET_GPR_U32(ctx, 31, 0x175C58u);
    ctx->pc = 0x175C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175C50u;
            // 0x175c54: 0x442024  and         $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175C58u; }
        if (ctx->pc != 0x175C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175C58u; }
        if (ctx->pc != 0x175C58u) { return; }
    }
    ctx->pc = 0x175C58u;
    // 0x175c58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x175c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175c5c: 0xc05dee0  jal         func_177B80
    ctx->pc = 0x175C5Cu;
    SET_GPR_U32(ctx, 31, 0x175C64u);
    ctx->pc = 0x175C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175C5Cu;
            // 0x175c60: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x177B80u;
    if (runtime->hasFunction(0x177B80u)) {
        auto targetFn = runtime->lookupFunction(0x177B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175C64u; }
        if (ctx->pc != 0x175C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00177B80_0x177b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175C64u; }
        if (ctx->pc != 0x175C64u) { return; }
    }
    ctx->pc = 0x175C64u;
    // 0x175c64: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x175c64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x175c68: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x175c68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x175c6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x175c6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x175c70: 0x3e00008  jr          $ra
    ctx->pc = 0x175C70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175C70u;
            // 0x175c74: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x175C78u;
}
