#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BE7E8
// Address: 0x1be7e8 - 0x1be868
void sub_001BE7E8_0x1be7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE7E8_0x1be7e8");
#endif

    ctx->pc = 0x1be7e8u;

    // 0x1be7e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1be7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1be7ec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1be7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1be7f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1be7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1be7f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1be7f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be7f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1be7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1be7fc: 0xc05f9ae  jal         func_17E6B8
    ctx->pc = 0x1BE7FCu;
    SET_GPR_U32(ctx, 31, 0x1BE804u);
    ctx->pc = 0x1BE800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE7FCu;
            // 0x1be800: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E6B8u;
    if (runtime->hasFunction(0x17E6B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E6B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE804u; }
        if (ctx->pc != 0x1BE804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e6b8_0x17e6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE804u; }
        if (ctx->pc != 0x1BE804u) { return; }
    }
    ctx->pc = 0x1BE804u;
    // 0x1be804: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1be804u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1be808: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1be808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be80c: 0x24a55b58  addiu       $a1, $a1, 0x5B58
    ctx->pc = 0x1be80cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23384));
    // 0x1be810: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1BE810u;
    SET_GPR_U32(ctx, 31, 0x1BE818u);
    ctx->pc = 0x1BE814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE810u;
            // 0x1be814: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE818u; }
        if (ctx->pc != 0x1BE818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE818u; }
        if (ctx->pc != 0x1BE818u) { return; }
    }
    ctx->pc = 0x1BE818u;
    // 0x1be818: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1be818u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1be81c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1be81cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be820: 0x24a55b68  addiu       $a1, $a1, 0x5B68
    ctx->pc = 0x1be820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23400));
    // 0x1be824: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1BE824u;
    SET_GPR_U32(ctx, 31, 0x1BE82Cu);
    ctx->pc = 0x1BE828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE824u;
            // 0x1be828: 0x26260004  addiu       $a2, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE82Cu; }
        if (ctx->pc != 0x1BE82Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE82Cu; }
        if (ctx->pc != 0x1BE82Cu) { return; }
    }
    ctx->pc = 0x1BE82Cu;
    // 0x1be82c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1be82cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1be830: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1be830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be834: 0x26260008  addiu       $a2, $s1, 0x8
    ctx->pc = 0x1be834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1be838: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1BE838u;
    SET_GPR_U32(ctx, 31, 0x1BE840u);
    ctx->pc = 0x1BE83Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE838u;
            // 0x1be83c: 0x24a55b78  addiu       $a1, $a1, 0x5B78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE840u; }
        if (ctx->pc != 0x1BE840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE840u; }
        if (ctx->pc != 0x1BE840u) { return; }
    }
    ctx->pc = 0x1BE840u;
    // 0x1be840: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1be840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1be844: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1be844u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be848: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1be848u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1be84c: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1be84cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x1be850: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1be850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1be854: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1be854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1be858: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1be858u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be85c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be85cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be860: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE860u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE860u;
            // 0x1be864: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BE868u;
}
