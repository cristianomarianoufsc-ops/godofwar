#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00245658
// Address: 0x245658 - 0x2456b8
void sub_00245658_0x245658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245658_0x245658");
#endif

    ctx->pc = 0x245658u;

    // 0x245658: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x245658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24565c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x24565cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x245660: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x245660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x245664: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x245664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x245668: 0xc096408  jal         func_259020
    ctx->pc = 0x245668u;
    SET_GPR_U32(ctx, 31, 0x245670u);
    ctx->pc = 0x24566Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245668u;
            // 0x24566c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259020u;
    if (runtime->hasFunction(0x259020u)) {
        auto targetFn = runtime->lookupFunction(0x259020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245670u; }
        if (ctx->pc != 0x245670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_259020_0x259038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245670u; }
        if (ctx->pc != 0x245670u) { return; }
    }
    ctx->pc = 0x245670u;
    // 0x245670: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x245670u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x245674: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x245674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x245678: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x245678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24567c: 0x24428688  addiu       $v0, $v0, -0x7978
    ctx->pc = 0x24567cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936200));
    // 0x245680: 0xc096402  jal         func_259008
    ctx->pc = 0x245680u;
    SET_GPR_U32(ctx, 31, 0x245688u);
    ctx->pc = 0x245684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245680u;
            // 0x245684: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259008u;
    if (runtime->hasFunction(0x259008u)) {
        auto targetFn = runtime->lookupFunction(0x259008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245688u; }
        if (ctx->pc != 0x245688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_259008_0x259020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245688u; }
        if (ctx->pc != 0x245688u) { return; }
    }
    ctx->pc = 0x245688u;
    // 0x245688: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x245688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x24568c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24568cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245690: 0x24421cc8  addiu       $v0, $v0, 0x1CC8
    ctx->pc = 0x245690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7368));
    // 0x245694: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x245694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x245698: 0xc096d4e  jal         func_25B538
    ctx->pc = 0x245698u;
    SET_GPR_U32(ctx, 31, 0x2456A0u);
    ctx->pc = 0x24569Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245698u;
            // 0x24569c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25B538u;
    if (runtime->hasFunction(0x25B538u)) {
        auto targetFn = runtime->lookupFunction(0x25B538u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2456A0u; }
        if (ctx->pc != 0x2456A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025B538_0x25b538(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2456A0u; }
        if (ctx->pc != 0x2456A0u) { return; }
    }
    ctx->pc = 0x2456A0u;
    // 0x2456a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2456a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2456a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2456a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2456a8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2456a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2456ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2456acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2456b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2456B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2456B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2456B0u;
            // 0x2456b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2456B8u;
}
