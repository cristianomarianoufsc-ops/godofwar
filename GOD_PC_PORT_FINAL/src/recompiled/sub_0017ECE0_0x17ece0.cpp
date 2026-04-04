#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017ECE0
// Address: 0x17ece0 - 0x17ed28
void sub_0017ECE0_0x17ece0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017ECE0_0x17ece0");
#endif

    ctx->pc = 0x17ece0u;

    // 0x17ece0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17ece0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17ece4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x17ece4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x17ece8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17ece8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17ecec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17ececu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ecf0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17ecf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x17ecf4: 0x8c44c784  lw          $a0, -0x387C($v0)
    ctx->pc = 0x17ecf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952836)));
    // 0x17ecf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17ecf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17ecfc: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x17ECFCu;
    SET_GPR_U32(ctx, 31, 0x17ED04u);
    ctx->pc = 0x17ED00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17ECFCu;
            // 0x17ed00: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ED04u; }
        if (ctx->pc != 0x17ED04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ED04u; }
        if (ctx->pc != 0x17ED04u) { return; }
    }
    ctx->pc = 0x17ED04u;
    // 0x17ed04: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x17ed04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17ed08: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x17ed08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x17ed0c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x17ed0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x17ed10: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x17ed10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x17ed14: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17ed14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17ed18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17ed18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ed1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17ed1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ed20: 0x3e00008  jr          $ra
    ctx->pc = 0x17ED20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17ED24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17ED20u;
            // 0x17ed24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17ED28u;
}
