#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002277E0
// Address: 0x2277e0 - 0x227860
void sub_002277E0_0x2277e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002277E0_0x2277e0");
#endif

    ctx->pc = 0x2277e0u;

    // 0x2277e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2277e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2277e4: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2277e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2277e8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2277e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2277ec: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2277ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2277f0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2277f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2277f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2277f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2277f8: 0x784a0030  lq          $t2, 0x30($v0)
    ctx->pc = 0x2277f8u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2277fc: 0x78490010  lq          $t1, 0x10($v0)
    ctx->pc = 0x2277fcu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x227800: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x227800u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x227804: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x227804u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x227808: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x227808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x22780c: 0x7fa90010  sq          $t1, 0x10($sp)
    ctx->pc = 0x22780cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 9));
    // 0x227810: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x227810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x227814: 0xc089b82  jal         func_226E08
    ctx->pc = 0x227814u;
    SET_GPR_U32(ctx, 31, 0x22781Cu);
    ctx->pc = 0x227818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227814u;
            // 0x227818: 0x7faa0030  sq          $t2, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226E08u;
    if (runtime->hasFunction(0x226E08u)) {
        auto targetFn = runtime->lookupFunction(0x226E08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22781Cu; }
        if (ctx->pc != 0x22781Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00226E08_0x226e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22781Cu; }
        if (ctx->pc != 0x22781Cu) { return; }
    }
    ctx->pc = 0x22781Cu;
    // 0x22781c: 0xc08eb96  jal         func_23AE58
    ctx->pc = 0x22781Cu;
    SET_GPR_U32(ctx, 31, 0x227824u);
    ctx->pc = 0x227820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22781Cu;
            // 0x227820: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23AE58u;
    if (runtime->hasFunction(0x23AE58u)) {
        auto targetFn = runtime->lookupFunction(0x23AE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227824u; }
        if (ctx->pc != 0x227824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23ae58_0x23ae70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227824u; }
        if (ctx->pc != 0x227824u) { return; }
    }
    ctx->pc = 0x227824u;
    // 0x227824: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x227824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x227828: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x227828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x22782c: 0x2442a308  addiu       $v0, $v0, -0x5CF8
    ctx->pc = 0x22782cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943496));
    // 0x227830: 0x2463a2d8  addiu       $v1, $v1, -0x5D28
    ctx->pc = 0x227830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943448));
    // 0x227834: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x227834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x227838: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22783c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x22783cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x227840: 0xc089d92  jal         func_227648
    ctx->pc = 0x227840u;
    SET_GPR_U32(ctx, 31, 0x227848u);
    ctx->pc = 0x227844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227840u;
            // 0x227844: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x227648u;
    if (runtime->hasFunction(0x227648u)) {
        auto targetFn = runtime->lookupFunction(0x227648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227848u; }
        if (ctx->pc != 0x227848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00227648_0x227648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227848u; }
        if (ctx->pc != 0x227848u) { return; }
    }
    ctx->pc = 0x227848u;
    // 0x227848: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x227848u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22784c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x22784cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x227850: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x227850u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x227854: 0x3e00008  jr          $ra
    ctx->pc = 0x227854u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227854u;
            // 0x227858: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22785Cu;
    // 0x22785c: 0x0  nop
    ctx->pc = 0x22785cu;
    // NOP
}
