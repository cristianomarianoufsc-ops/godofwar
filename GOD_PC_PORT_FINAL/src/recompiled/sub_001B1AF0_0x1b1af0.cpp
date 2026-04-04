#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B1AF0
// Address: 0x1b1af0 - 0x1b1b68
void sub_001B1AF0_0x1b1af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1AF0_0x1b1af0");
#endif

    ctx->pc = 0x1b1af0u;

    // 0x1b1af0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b1af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b1af4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b1af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b1af8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b1af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b1afc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b1afcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1b00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b1b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b1b04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b1b04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1b08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b1b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1b0c: 0x0  nop
    ctx->pc = 0x1b1b0cu;
    // NOP
label_1b1b10:
    // 0x1b1b10: 0xc040680  jal         func_101A00
    ctx->pc = 0x1B1B10u;
    SET_GPR_U32(ctx, 31, 0x1B1B18u);
    ctx->pc = 0x1B1B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1B10u;
            // 0x1b1b14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101A00u;
    if (runtime->hasFunction(0x101A00u)) {
        auto targetFn = runtime->lookupFunction(0x101A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1B18u; }
        if (ctx->pc != 0x1B1B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101A00_0x101a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1B18u; }
        if (ctx->pc != 0x1B1B18u) { return; }
    }
    ctx->pc = 0x1B1B18u;
    // 0x1b1b18: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B1B18u;
    {
        const bool branch_taken_0x1b1b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1b18) {
            ctx->pc = 0x1B1B1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1B18u;
            // 0x1b1b1c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B1B40u;
            goto label_1b1b40;
        }
    }
    ctx->pc = 0x1B1B20u;
    // 0x1b1b20: 0xc041d10  jal         func_107440
    ctx->pc = 0x1B1B20u;
    SET_GPR_U32(ctx, 31, 0x1B1B28u);
    ctx->pc = 0x1B1B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1B20u;
            // 0x1b1b24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107440u;
    if (runtime->hasFunction(0x107440u)) {
        auto targetFn = runtime->lookupFunction(0x107440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1B28u; }
        if (ctx->pc != 0x1B1B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_107440_0x107480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1B28u; }
        if (ctx->pc != 0x1B1B28u) { return; }
    }
    ctx->pc = 0x1B1B28u;
    // 0x1b1b28: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B1B28u;
    {
        const bool branch_taken_0x1b1b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1b28) {
            ctx->pc = 0x1B1B2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1B28u;
            // 0x1b1b2c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B1B40u;
            goto label_1b1b40;
        }
    }
    ctx->pc = 0x1B1B30u;
    // 0x1b1b30: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x1b1b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1b1b34: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B1B34u;
    {
        const bool branch_taken_0x1b1b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1b34) {
            ctx->pc = 0x1B1B38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1B34u;
            // 0x1b1b38: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B1B54u;
            goto label_1b1b54;
        }
    }
    ctx->pc = 0x1B1B3Cu;
    // 0x1b1b3c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b1b3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1b1b40:
    // 0x1b1b40: 0x2a02000f  slti        $v0, $s0, 0xF
    ctx->pc = 0x1b1b40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x1b1b44: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x1B1B44u;
    {
        const bool branch_taken_0x1b1b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1b44) {
            ctx->pc = 0x1B1B48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1B44u;
            // 0x1b1b48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B1B10u;
            runtime->cooperativeGuestYield();
            goto label_1b1b10;
        }
    }
    ctx->pc = 0x1B1B4Cu;
    // 0x1b1b4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b1b4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1b50: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b1b50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b1b54:
    // 0x1b1b54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b1b54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1b58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b1b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1B5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1B5Cu;
            // 0x1b1b60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B1B10u: goto label_1b1b10;
            case 0x1B1B40u: goto label_1b1b40;
            case 0x1B1B54u: goto label_1b1b54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B1B64u;
    // 0x1b1b64: 0x0  nop
    ctx->pc = 0x1b1b64u;
    // NOP
}
