#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1b5a38
// Address: 0x1b5a38 - 0x1b5a78
void entry_1b5a38_0x1b5a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1b5a38_0x1b5a78");
#endif

    ctx->pc = 0x1b5a38u;

    // 0x1b5a38: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1b5a38u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5a3c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1b5a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b5a40: 0x32a80  sll         $a1, $v1, 10
    ctx->pc = 0x1b5a40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x1b5a44: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b5a44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b5a48: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x1b5a48u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b5a4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b5a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b5a50: 0xac830294  sw          $v1, 0x294($a0)
    ctx->pc = 0x1b5a50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 660), GPR_U32(ctx, 3));
    // 0x1b5a54: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B5A54u;
    {
        const bool branch_taken_0x1b5a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5a54) {
            ctx->pc = 0x1B5A58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5A54u;
            // 0x1b5a58: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B5A5Cu;
            goto label_1b5a5c;
        }
    }
    ctx->pc = 0x1B5A5Cu;
label_1b5a5c:
    // 0x1b5a5c: 0x2812  mflo        $a1
    ctx->pc = 0x1b5a5cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1b5a60: 0xc05d1d0  jal         func_174740
    ctx->pc = 0x1B5A60u;
    SET_GPR_U32(ctx, 31, 0x1B5A68u);
    ctx->pc = 0x1B5A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5A60u;
            // 0x1b5a64: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174740u;
    if (runtime->hasFunction(0x174740u)) {
        auto targetFn = runtime->lookupFunction(0x174740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5A68u; }
        if (ctx->pc != 0x1B5A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_174740_0x174768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5A68u; }
        if (ctx->pc != 0x1B5A68u) { return; }
    }
    ctx->pc = 0x1B5A68u;
    // 0x1b5a68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b5a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5a6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5A6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5A6Cu;
            // 0x1b5a70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B5A5Cu: goto label_1b5a5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B5A74u;
    // 0x1b5a74: 0x0  nop
    ctx->pc = 0x1b5a74u;
    // NOP
}
