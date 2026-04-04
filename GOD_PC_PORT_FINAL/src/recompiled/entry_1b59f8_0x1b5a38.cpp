#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1b59f8
// Address: 0x1b59f8 - 0x1b5a38
void entry_1b59f8_0x1b5a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1b59f8_0x1b5a38");
#endif

    ctx->pc = 0x1b59f8u;

    // 0x1b59f8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1b59f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b59fc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1b59fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b5a00: 0x32a80  sll         $a1, $v1, 10
    ctx->pc = 0x1b5a00u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x1b5a04: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b5a04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b5a08: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x1b5a08u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b5a0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b5a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b5a10: 0xac830290  sw          $v1, 0x290($a0)
    ctx->pc = 0x1b5a10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 656), GPR_U32(ctx, 3));
    // 0x1b5a14: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B5A14u;
    {
        const bool branch_taken_0x1b5a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5a14) {
            ctx->pc = 0x1B5A18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5A14u;
            // 0x1b5a18: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B5A1Cu;
            goto label_1b5a1c;
        }
    }
    ctx->pc = 0x1B5A1Cu;
label_1b5a1c:
    // 0x1b5a1c: 0x2812  mflo        $a1
    ctx->pc = 0x1b5a1cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1b5a20: 0xc05d1d0  jal         func_174740
    ctx->pc = 0x1B5A20u;
    SET_GPR_U32(ctx, 31, 0x1B5A28u);
    ctx->pc = 0x1B5A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5A20u;
            // 0x1b5a24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174740u;
    if (runtime->hasFunction(0x174740u)) {
        auto targetFn = runtime->lookupFunction(0x174740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5A28u; }
        if (ctx->pc != 0x1B5A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_174740_0x174768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5A28u; }
        if (ctx->pc != 0x1B5A28u) { return; }
    }
    ctx->pc = 0x1B5A28u;
    // 0x1b5a28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b5a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5A2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5A2Cu;
            // 0x1b5a30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B5A1Cu: goto label_1b5a1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B5A34u;
    // 0x1b5a34: 0x0  nop
    ctx->pc = 0x1b5a34u;
    // NOP
}
