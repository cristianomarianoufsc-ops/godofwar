#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00226908
// Address: 0x226908 - 0x226980
void sub_00226908_0x226908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226908_0x226908");
#endif

    ctx->pc = 0x226908u;

    // 0x226908: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x226908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x22690c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x22690cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x226910: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x226910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x226914: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x226914u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226918: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x226918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x22691c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x22691cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226920: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x226920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x226924: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x226924u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226928: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x226928u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22692c: 0x78c90030  lq          $t1, 0x30($a2)
    ctx->pc = 0x22692cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x226930: 0x78c50000  lq          $a1, 0x0($a2)
    ctx->pc = 0x226930u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x226934: 0x78c30010  lq          $v1, 0x10($a2)
    ctx->pc = 0x226934u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x226938: 0x78c20020  lq          $v0, 0x20($a2)
    ctx->pc = 0x226938u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x22693c: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x22693cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
    // 0x226940: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x226940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x226944: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x226944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x226948: 0xc05e996  jal         func_17A658
    ctx->pc = 0x226948u;
    SET_GPR_U32(ctx, 31, 0x226950u);
    ctx->pc = 0x22694Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226948u;
            // 0x22694c: 0x7fa90030  sq          $t1, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226950u; }
        if (ctx->pc != 0x226950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226950u; }
        if (ctx->pc != 0x226950u) { return; }
    }
    ctx->pc = 0x226950u;
    // 0x226950: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x226950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226954: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x226954u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226958: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x226958u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22695c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22695cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226960: 0xc0899c0  jal         func_226700
    ctx->pc = 0x226960u;
    SET_GPR_U32(ctx, 31, 0x226968u);
    ctx->pc = 0x226964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226960u;
            // 0x226964: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226700u;
    if (runtime->hasFunction(0x226700u)) {
        auto targetFn = runtime->lookupFunction(0x226700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226968u; }
        if (ctx->pc != 0x226968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_226700_0x226908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226968u; }
        if (ctx->pc != 0x226968u) { return; }
    }
    ctx->pc = 0x226968u;
    // 0x226968: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x226968u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22696c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x22696cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x226970: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x226970u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x226974: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x226974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x226978: 0x3e00008  jr          $ra
    ctx->pc = 0x226978u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22697Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226978u;
            // 0x22697c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x226980u;
}
