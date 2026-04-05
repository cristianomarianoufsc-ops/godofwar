#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A4268
// Address: 0x1a4268 - 0x1a42d0
void sub_001A4268_0x1a4268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4268_0x1a4268");
#endif

    ctx->pc = 0x1a4268u;

    // 0x1a4268: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a4268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a426c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a426cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1a4270: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a4270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a4274: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a4274u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4278: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a4278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a427c: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A427Cu;
    {
        const bool branch_taken_0x1a427c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A427Cu;
            // 0x1a4280: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a427c) {
            ctx->pc = 0x1A42B8u;
            goto label_1a42b8;
        }
    }
    ctx->pc = 0x1A4284u;
    // 0x1a4284: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a4284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a4288: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a428c: 0x2451ca48  addiu       $s1, $v0, -0x35B8
    ctx->pc = 0x1a428cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953544));
    // 0x1a4290: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a4290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a4294: 0xc0a34bc  jal         func_28D2F0
    ctx->pc = 0x1A4294u;
    SET_GPR_U32(ctx, 31, 0x1A429Cu);
    ctx->pc = 0x1A4298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4294u;
            // 0x1a4298: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D2F0u;
    if (runtime->hasFunction(0x28D2F0u)) {
        auto targetFn = runtime->lookupFunction(0x28D2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A429Cu; }
        if (ctx->pc != 0x1A429Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D2F0_0x28d2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A429Cu; }
        if (ctx->pc != 0x1A429Cu) { return; }
    }
    ctx->pc = 0x1A429Cu;
    // 0x1a429c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A429Cu;
    {
        const bool branch_taken_0x1a429c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A42A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A429Cu;
            // 0x1a42a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a429c) {
            ctx->pc = 0x1A42ACu;
            goto label_1a42ac;
        }
    }
    ctx->pc = 0x1A42A4u;
    // 0x1a42a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A42A4u;
    {
        const bool branch_taken_0x1a42a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A42A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A42A4u;
            // 0x1a42a8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a42a4) {
            ctx->pc = 0x1A42B8u;
            goto label_1a42b8;
        }
    }
    ctx->pc = 0x1A42ACu;
label_1a42ac:
    // 0x1a42ac: 0xc0a2644  jal         func_289910
    ctx->pc = 0x1A42ACu;
    SET_GPR_U32(ctx, 31, 0x1A42B4u);
    ctx->pc = 0x1A42B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A42ACu;
            // 0x1a42b0: 0x26240002  addiu       $a0, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A42B4u; }
        if (ctx->pc != 0x1A42B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A42B4u; }
        if (ctx->pc != 0x1A42B4u) { return; }
    }
    ctx->pc = 0x1A42B4u;
    // 0x1a42b4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a42b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a42b8:
    // 0x1a42b8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a42b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a42bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a42bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a42c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a42c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a42c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A42C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A42C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A42C4u;
            // 0x1a42c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A42ACu: goto label_1a42ac;
            case 0x1A42B8u: goto label_1a42b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A42CCu;
    // 0x1a42cc: 0x0  nop
    ctx->pc = 0x1a42ccu;
    // NOP
}
