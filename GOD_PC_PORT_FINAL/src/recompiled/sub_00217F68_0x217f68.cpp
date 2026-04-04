#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00217F68
// Address: 0x217f68 - 0x217fb0
void sub_00217F68_0x217f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217F68_0x217f68");
#endif

    ctx->pc = 0x217f68u;

    // 0x217f68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x217f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x217f6c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x217f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x217f70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x217f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x217f74: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x217f74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217f78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x217f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x217f7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x217f7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217f80: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x217F80u;
    SET_GPR_U32(ctx, 31, 0x217F88u);
    ctx->pc = 0x217F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217F80u;
            // 0x217f84: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217F88u; }
        if (ctx->pc != 0x217F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217F88u; }
        if (ctx->pc != 0x217F88u) { return; }
    }
    ctx->pc = 0x217F88u;
    // 0x217f88: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x217f88u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x217f8c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x217F8Cu;
    {
        const bool branch_taken_0x217f8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x217F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217F8Cu;
            // 0x217f90: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217f8c) {
            ctx->pc = 0x217FA0u;
            goto label_217fa0;
        }
    }
    ctx->pc = 0x217F94u;
    // 0x217f94: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x217F94u;
    SET_GPR_U32(ctx, 31, 0x217F9Cu);
    ctx->pc = 0x217F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217F94u;
            // 0x217f98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217F9Cu; }
        if (ctx->pc != 0x217F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217F9Cu; }
        if (ctx->pc != 0x217F9Cu) { return; }
    }
    ctx->pc = 0x217F9Cu;
    // 0x217f9c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x217f9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_217fa0:
    // 0x217fa0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x217fa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217fa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x217fa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217fa8: 0x3e00008  jr          $ra
    ctx->pc = 0x217FA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217FA8u;
            // 0x217fac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x217FA0u: goto label_217fa0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x217FB0u;
}
