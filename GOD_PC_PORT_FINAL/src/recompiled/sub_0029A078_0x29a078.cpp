#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029A078
// Address: 0x29a078 - 0x29a0d0
void sub_0029A078_0x29a078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A078_0x29a078");
#endif

    ctx->pc = 0x29a078u;

    // 0x29a078: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29a078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29a07c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29a07cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29a080: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29a080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29a084: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29a084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29a088: 0xc0a648c  jal         func_299230
    ctx->pc = 0x29A088u;
    SET_GPR_U32(ctx, 31, 0x29A090u);
    ctx->pc = 0x299230u;
    if (runtime->hasFunction(0x299230u)) {
        auto targetFn = runtime->lookupFunction(0x299230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A090u; }
        if (ctx->pc != 0x29A090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299230_0x299280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A090u; }
        if (ctx->pc != 0x29A090u) { return; }
    }
    ctx->pc = 0x29A090u;
    // 0x29a090: 0xc0a6802  jal         func_29A008
    ctx->pc = 0x29A090u;
    SET_GPR_U32(ctx, 31, 0x29A098u);
    ctx->pc = 0x29A094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A090u;
            // 0x29a094: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29A008u;
    if (runtime->hasFunction(0x29A008u)) {
        auto targetFn = runtime->lookupFunction(0x29A008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A098u; }
        if (ctx->pc != 0x29A098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_29a008_0x29a078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A098u; }
        if (ctx->pc != 0x29A098u) { return; }
    }
    ctx->pc = 0x29A098u;
    // 0x29a098: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29A098u;
    {
        const bool branch_taken_0x29a098 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A09Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A098u;
            // 0x29a09c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a098) {
            ctx->pc = 0x29A0A8u;
            goto label_29a0a8;
        }
    }
    ctx->pc = 0x29A0A0u;
    // 0x29a0a0: 0xc0a64a0  jal         func_299280
    ctx->pc = 0x29A0A0u;
    SET_GPR_U32(ctx, 31, 0x29A0A8u);
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A0A8u; }
        if (ctx->pc != 0x29A0A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299280_0x299298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A0A8u; }
        if (ctx->pc != 0x29A0A8u) { return; }
    }
    ctx->pc = 0x29A0A8u;
label_29a0a8:
    // 0x29a0a8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x29a0a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a0ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29a0acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29a0b0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29a0b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a0b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29a0b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a0b8: 0x3e00008  jr          $ra
    ctx->pc = 0x29A0B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A0BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A0B8u;
            // 0x29a0bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29A0A8u: goto label_29a0a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29A0C0u;
    // 0x29a0c0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x29a0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29a0c4: 0x0  nop
    ctx->pc = 0x29a0c4u;
    // NOP
    // 0x29a0c8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x29a0c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x29a0cc: 0x0  nop
    ctx->pc = 0x29a0ccu;
    // NOP
}
