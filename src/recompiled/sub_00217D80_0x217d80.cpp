#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00217D80
// Address: 0x217d80 - 0x217dc8
void sub_00217D80_0x217d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217D80_0x217d80");
#endif

    ctx->pc = 0x217d80u;

    // 0x217d80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x217d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x217d84: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x217d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x217d88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x217d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x217d8c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x217d8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217d90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x217d90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217d94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x217d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x217d98: 0xc085f2a  jal         func_217CA8
    ctx->pc = 0x217D98u;
    SET_GPR_U32(ctx, 31, 0x217DA0u);
    ctx->pc = 0x217D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217D98u;
            // 0x217d9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x217CA8u;
    if (runtime->hasFunction(0x217CA8u)) {
        auto targetFn = runtime->lookupFunction(0x217CA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217DA0u; }
        if (ctx->pc != 0x217DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00217CA8_0x217ca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217DA0u; }
        if (ctx->pc != 0x217DA0u) { return; }
    }
    ctx->pc = 0x217DA0u;
    // 0x217da0: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x217da0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x217da4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x217da4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217da8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x217da8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217dac: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x217dacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x217db0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x217db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217db4: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x217db4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x217db8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x217db8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x217dbc: 0x3e00008  jr          $ra
    ctx->pc = 0x217DBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217DBCu;
            // 0x217dc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x217DC4u;
    // 0x217dc4: 0x0  nop
    ctx->pc = 0x217dc4u;
    // NOP
}
