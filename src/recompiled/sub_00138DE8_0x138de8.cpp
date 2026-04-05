#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00138DE8
// Address: 0x138de8 - 0x138e78
void sub_00138DE8_0x138de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00138DE8_0x138de8");
#endif

    ctx->pc = 0x138de8u;

    // 0x138de8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x138de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x138dec: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x138decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x138df0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x138df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x138df4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x138df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x138df8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x138df8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138dfc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x138dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x138e00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x138e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x138e04: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x138e04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138e08: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x138e08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x138e0c: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x138e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x138e10: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x138e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x138e14: 0x8c44bcf8  lw          $a0, -0x4308($v0)
    ctx->pc = 0x138e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
    // 0x138e18: 0x8e250030  lw          $a1, 0x30($s1)
    ctx->pc = 0x138e18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x138e1c: 0xc047aa6  jal         func_11EA98
    ctx->pc = 0x138E1Cu;
    SET_GPR_U32(ctx, 31, 0x138E24u);
    ctx->pc = 0x138E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138E1Cu;
            // 0x138e20: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EA98u;
    if (runtime->hasFunction(0x11EA98u)) {
        auto targetFn = runtime->lookupFunction(0x11EA98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138E24u; }
        if (ctx->pc != 0x138E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11ea98_0x11eab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138E24u; }
        if (ctx->pc != 0x138E24u) { return; }
    }
    ctx->pc = 0x138E24u;
    // 0x138e24: 0xc04f824  jal         func_13E090
    ctx->pc = 0x138E24u;
    SET_GPR_U32(ctx, 31, 0x138E2Cu);
    ctx->pc = 0x138E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138E24u;
            // 0x138e28: 0x8e300010  lw          $s0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138E2Cu; }
        if (ctx->pc != 0x138E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138E2Cu; }
        if (ctx->pc != 0x138E2Cu) { return; }
    }
    ctx->pc = 0x138E2Cu;
    // 0x138e2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x138e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138e30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x138e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138e34: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x138E34u;
    SET_GPR_U32(ctx, 31, 0x138E3Cu);
    ctx->pc = 0x138E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138E34u;
            // 0x138e38: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138E3Cu; }
        if (ctx->pc != 0x138E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138E3Cu; }
        if (ctx->pc != 0x138E3Cu) { return; }
    }
    ctx->pc = 0x138E3Cu;
    // 0x138e3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x138e3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138e40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x138e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138e44: 0x8ca60010  lw          $a2, 0x10($a1)
    ctx->pc = 0x138e44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x138e48: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x138E48u;
    SET_GPR_U32(ctx, 31, 0x138E50u);
    ctx->pc = 0x138E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138E48u;
            // 0x138e4c: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138E50u; }
        if (ctx->pc != 0x138E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138E50u; }
        if (ctx->pc != 0x138E50u) { return; }
    }
    ctx->pc = 0x138E50u;
    // 0x138e50: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x138e50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138e54: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x138e54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x138e58: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x138e58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x138e5c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x138e5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x138e60: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x138e60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138e64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x138e64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138e68: 0x3e00008  jr          $ra
    ctx->pc = 0x138E68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138E68u;
            // 0x138e6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x138E70u;
    // 0x138e70: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x138e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x138e74: 0x0  nop
    ctx->pc = 0x138e74u;
    // NOP
}
