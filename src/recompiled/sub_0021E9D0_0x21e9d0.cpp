#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021E9D0
// Address: 0x21e9d0 - 0x21ea68
void sub_0021E9D0_0x21e9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E9D0_0x21e9d0");
#endif

    ctx->pc = 0x21e9d0u;

    // 0x21e9d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21e9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21e9d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x21e9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21e9d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x21e9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x21e9dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21e9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21e9e0: 0xc087622  jal         func_21D888
    ctx->pc = 0x21E9E0u;
    SET_GPR_U32(ctx, 31, 0x21E9E8u);
    ctx->pc = 0x21E9E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E9E0u;
            // 0x21e9e4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D888u;
    if (runtime->hasFunction(0x21D888u)) {
        auto targetFn = runtime->lookupFunction(0x21D888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E9E8u; }
        if (ctx->pc != 0x21E9E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021D888_0x21d888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E9E8u; }
        if (ctx->pc != 0x21E9E8u) { return; }
    }
    ctx->pc = 0x21E9E8u;
    // 0x21e9e8: 0xc06eefe  jal         func_1BBBF8
    ctx->pc = 0x21E9E8u;
    SET_GPR_U32(ctx, 31, 0x21E9F0u);
    ctx->pc = 0x1BBBF8u;
    if (runtime->hasFunction(0x1BBBF8u)) {
        auto targetFn = runtime->lookupFunction(0x1BBBF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E9F0u; }
        if (ctx->pc != 0x21E9F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBBF8_0x1bbbf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E9F0u; }
        if (ctx->pc != 0x21E9F0u) { return; }
    }
    ctx->pc = 0x21E9F0u;
    // 0x21e9f0: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x21e9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x21e9f4: 0x3c09002a  lui         $t1, 0x2A
    ctx->pc = 0x21e9f4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)42 << 16));
    // 0x21e9f8: 0xdc428010  ld          $v0, -0x7FF0($v0)
    ctx->pc = 0x21e9f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4294934544)));
    // 0x21e9fc: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x21e9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x21ea00: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x21ea00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x21ea04: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x21ea04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x21ea08: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x21ea08u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
    // 0x21ea0c: 0x3c08002a  lui         $t0, 0x2A
    ctx->pc = 0x21ea0cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)42 << 16));
    // 0x21ea10: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x21ea10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x21ea14: 0xfd22e550  sd          $v0, -0x1AB0($t1)
    ctx->pc = 0x21ea14u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 4294960464), GPR_U64(ctx, 2));
    // 0x21ea18: 0xac70e574  sw          $s0, -0x1A8C($v1)
    ctx->pc = 0x21ea18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960500), GPR_U32(ctx, 16));
    // 0x21ea1c: 0xaca0e5e4  sw          $zero, -0x1A1C($a1)
    ctx->pc = 0x21ea1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960612), GPR_U32(ctx, 0));
    // 0x21ea20: 0xacc0e58c  sw          $zero, -0x1A74($a2)
    ctx->pc = 0x21ea20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294960524), GPR_U32(ctx, 0));
    // 0x21ea24: 0xace0e590  sw          $zero, -0x1A70($a3)
    ctx->pc = 0x21ea24u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960528), GPR_U32(ctx, 0));
    // 0x21ea28: 0xad00e5bc  sw          $zero, -0x1A44($t0)
    ctx->pc = 0x21ea28u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294960572), GPR_U32(ctx, 0));
    // 0x21ea2c: 0xc0876b8  jal         func_21DAE0
    ctx->pc = 0x21EA2Cu;
    SET_GPR_U32(ctx, 31, 0x21EA34u);
    ctx->pc = 0x21EA30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21EA2Cu;
            // 0x21ea30: 0xac80e5e0  sw          $zero, -0x1A20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294960608), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DAE0u;
    if (runtime->hasFunction(0x21DAE0u)) {
        auto targetFn = runtime->lookupFunction(0x21DAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EA34u; }
        if (ctx->pc != 0x21EA34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021DAE0_0x21dae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EA34u; }
        if (ctx->pc != 0x21EA34u) { return; }
    }
    ctx->pc = 0x21EA34u;
    // 0x21ea34: 0xc0873c6  jal         func_21CF18
    ctx->pc = 0x21EA34u;
    SET_GPR_U32(ctx, 31, 0x21EA3Cu);
    ctx->pc = 0x21CF18u;
    if (runtime->hasFunction(0x21CF18u)) {
        auto targetFn = runtime->lookupFunction(0x21CF18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EA3Cu; }
        if (ctx->pc != 0x21EA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021CF18_0x21cf18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EA3Cu; }
        if (ctx->pc != 0x21EA3Cu) { return; }
    }
    ctx->pc = 0x21EA3Cu;
    // 0x21ea3c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21ea3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21ea40: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x21ea40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21ea44: 0xc08a9b0  jal         func_22A6C0
    ctx->pc = 0x21EA44u;
    SET_GPR_U32(ctx, 31, 0x21EA4Cu);
    ctx->pc = 0x21EA48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21EA44u;
            // 0x21ea48: 0x8c4411d0  lw          $a0, 0x11D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A6C0u;
    if (runtime->hasFunction(0x22A6C0u)) {
        auto targetFn = runtime->lookupFunction(0x22A6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EA4Cu; }
        if (ctx->pc != 0x21EA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A6C0_0x22a6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EA4Cu; }
        if (ctx->pc != 0x21EA4Cu) { return; }
    }
    ctx->pc = 0x21EA4Cu;
    // 0x21ea4c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21ea4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21ea50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21ea50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ea54: 0xac50e560  sw          $s0, -0x1AA0($v0)
    ctx->pc = 0x21ea54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960480), GPR_U32(ctx, 16));
    // 0x21ea58: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x21ea58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ea5c: 0x3e00008  jr          $ra
    ctx->pc = 0x21EA5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21EA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EA5Cu;
            // 0x21ea60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21EA64u;
    // 0x21ea64: 0x0  nop
    ctx->pc = 0x21ea64u;
    // NOP
}
