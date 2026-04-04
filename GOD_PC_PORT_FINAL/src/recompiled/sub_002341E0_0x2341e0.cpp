#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002341E0
// Address: 0x2341e0 - 0x234228
void sub_002341E0_0x2341e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002341E0_0x2341e0");
#endif

    ctx->pc = 0x2341e0u;

    // 0x2341e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2341e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2341e4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2341e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2341e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2341e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2341ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2341ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2341f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2341f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2341f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2341f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2341f8: 0xc05eb38  jal         func_17ACE0
    ctx->pc = 0x2341F8u;
    SET_GPR_U32(ctx, 31, 0x234200u);
    ctx->pc = 0x2341FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2341F8u;
            // 0x2341fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17ACE0u;
    if (runtime->hasFunction(0x17ACE0u)) {
        auto targetFn = runtime->lookupFunction(0x17ACE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234200u; }
        if (ctx->pc != 0x234200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017ACE0_0x17ace0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234200u; }
        if (ctx->pc != 0x234200u) { return; }
    }
    ctx->pc = 0x234200u;
    // 0x234200: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x234200u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x234204: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x234204u;
    {
        const bool branch_taken_0x234204 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x234208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234204u;
            // 0x234208: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234204) {
            ctx->pc = 0x234218u;
            goto label_234218;
        }
    }
    ctx->pc = 0x23420Cu;
    // 0x23420c: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x23420Cu;
    SET_GPR_U32(ctx, 31, 0x234214u);
    ctx->pc = 0x234210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23420Cu;
            // 0x234210: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234214u; }
        if (ctx->pc != 0x234214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234214u; }
        if (ctx->pc != 0x234214u) { return; }
    }
    ctx->pc = 0x234214u;
    // 0x234214: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x234214u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_234218:
    // 0x234218: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x234218u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23421c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23421cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234220: 0x3e00008  jr          $ra
    ctx->pc = 0x234220u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234220u;
            // 0x234224: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x234218u: goto label_234218;
            default: break;
        }
        return;
    }
    ctx->pc = 0x234228u;
}
