#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00227910
// Address: 0x227910 - 0x227990
void sub_00227910_0x227910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227910_0x227910");
#endif

    ctx->pc = 0x227910u;

    // 0x227910: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x227910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x227914: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x227914u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227918: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x227918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x22791c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x22791cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227920: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x227920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x227924: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x227924u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227928: 0x784a0030  lq          $t2, 0x30($v0)
    ctx->pc = 0x227928u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x22792c: 0x78490010  lq          $t1, 0x10($v0)
    ctx->pc = 0x22792cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x227930: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x227930u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x227934: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x227934u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x227938: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x227938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x22793c: 0x7fa90010  sq          $t1, 0x10($sp)
    ctx->pc = 0x22793cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 9));
    // 0x227940: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x227940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x227944: 0xc089b4c  jal         func_226D30
    ctx->pc = 0x227944u;
    SET_GPR_U32(ctx, 31, 0x22794Cu);
    ctx->pc = 0x227948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227944u;
            // 0x227948: 0x7faa0030  sq          $t2, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226D30u;
    if (runtime->hasFunction(0x226D30u)) {
        auto targetFn = runtime->lookupFunction(0x226D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22794Cu; }
        if (ctx->pc != 0x22794Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00226D30_0x226d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22794Cu; }
        if (ctx->pc != 0x22794Cu) { return; }
    }
    ctx->pc = 0x22794Cu;
    // 0x22794c: 0xc08eb96  jal         func_23AE58
    ctx->pc = 0x22794Cu;
    SET_GPR_U32(ctx, 31, 0x227954u);
    ctx->pc = 0x227950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22794Cu;
            // 0x227950: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23AE58u;
    if (runtime->hasFunction(0x23AE58u)) {
        auto targetFn = runtime->lookupFunction(0x23AE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227954u; }
        if (ctx->pc != 0x227954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23ae58_0x23ae70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227954u; }
        if (ctx->pc != 0x227954u) { return; }
    }
    ctx->pc = 0x227954u;
    // 0x227954: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x227954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x227958: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x227958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x22795c: 0x2442a308  addiu       $v0, $v0, -0x5CF8
    ctx->pc = 0x22795cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943496));
    // 0x227960: 0x2463a2d8  addiu       $v1, $v1, -0x5D28
    ctx->pc = 0x227960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943448));
    // 0x227964: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x227964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x227968: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22796c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x22796cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x227970: 0xc089d92  jal         func_227648
    ctx->pc = 0x227970u;
    SET_GPR_U32(ctx, 31, 0x227978u);
    ctx->pc = 0x227974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227970u;
            // 0x227974: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x227648u;
    if (runtime->hasFunction(0x227648u)) {
        auto targetFn = runtime->lookupFunction(0x227648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227978u; }
        if (ctx->pc != 0x227978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00227648_0x227648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227978u; }
        if (ctx->pc != 0x227978u) { return; }
    }
    ctx->pc = 0x227978u;
    // 0x227978: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x227978u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22797c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x22797cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x227980: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x227980u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x227984: 0x3e00008  jr          $ra
    ctx->pc = 0x227984u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227984u;
            // 0x227988: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22798Cu;
    // 0x22798c: 0x0  nop
    ctx->pc = 0x22798cu;
    // NOP
}
