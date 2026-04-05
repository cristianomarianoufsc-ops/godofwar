#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00193C60
// Address: 0x193c60 - 0x193c98
void sub_00193C60_0x193c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193C60_0x193c60");
#endif

    ctx->pc = 0x193c60u;

    // 0x193c60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x193c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x193c64: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x193c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x193c68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x193c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x193c6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x193c6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193c70: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x193c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x193c74: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x193C74u;
    {
        const bool branch_taken_0x193c74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x193c74) {
            ctx->pc = 0x193C78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x193C74u;
            // 0x193c78: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x193C88u;
            goto label_193c88;
        }
    }
    ctx->pc = 0x193C7Cu;
    // 0x193c7c: 0xc04c9da  jal         func_132768
    ctx->pc = 0x193C7Cu;
    SET_GPR_U32(ctx, 31, 0x193C84u);
    ctx->pc = 0x132768u;
    if (runtime->hasFunction(0x132768u)) {
        auto targetFn = runtime->lookupFunction(0x132768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193C84u; }
        if (ctx->pc != 0x193C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132768_0x132768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193C84u; }
        if (ctx->pc != 0x193C84u) { return; }
    }
    ctx->pc = 0x193C84u;
    // 0x193c84: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x193c84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_193c88:
    // 0x193c88: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x193c88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193c8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x193c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193c90: 0x3e00008  jr          $ra
    ctx->pc = 0x193C90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193C90u;
            // 0x193c94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x193C88u: goto label_193c88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x193C98u;
}
