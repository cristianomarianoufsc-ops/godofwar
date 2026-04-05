#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00200BC8
// Address: 0x200bc8 - 0x200c18
void sub_00200BC8_0x200bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200BC8_0x200bc8");
#endif

    ctx->pc = 0x200bc8u;

    // 0x200bc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x200bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x200bcc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x200bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x200bd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x200bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x200bd4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x200bd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200bd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x200bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x200bdc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x200bdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200be0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x200be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200be4: 0x0  nop
    ctx->pc = 0x200be4u;
    // NOP
label_200be8:
    // 0x200be8: 0xc0802d2  jal         func_200B48
    ctx->pc = 0x200BE8u;
    SET_GPR_U32(ctx, 31, 0x200BF0u);
    ctx->pc = 0x200BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200BE8u;
            // 0x200bec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200B48u;
    if (runtime->hasFunction(0x200B48u)) {
        auto targetFn = runtime->lookupFunction(0x200B48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200BF0u; }
        if (ctx->pc != 0x200BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_200b48_0x200bc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200BF0u; }
        if (ctx->pc != 0x200BF0u) { return; }
    }
    ctx->pc = 0x200BF0u;
    // 0x200bf0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x200bf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x200bf4: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x200bf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x200bf8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x200BF8u;
    {
        const bool branch_taken_0x200bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x200BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200BF8u;
            // 0x200bfc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200bf8) {
            ctx->pc = 0x200BE8u;
            runtime->cooperativeGuestYield();
            goto label_200be8;
        }
    }
    ctx->pc = 0x200C00u;
    // 0x200c00: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x200c00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x200c04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x200c04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200c08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x200c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200c0c: 0x3e00008  jr          $ra
    ctx->pc = 0x200C0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200C0Cu;
            // 0x200c10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x200BE8u: goto label_200be8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x200C14u;
    // 0x200c14: 0x0  nop
    ctx->pc = 0x200c14u;
    // NOP
}
