#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029A180
// Address: 0x29a180 - 0x29a200
void sub_0029A180_0x29a180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A180_0x29a180");
#endif

    ctx->pc = 0x29a180u;

    // 0x29a180: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29a180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29a184: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29a184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29a188: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29a188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29a18c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29a18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29a190: 0xc0a648c  jal         func_299230
    ctx->pc = 0x29A190u;
    SET_GPR_U32(ctx, 31, 0x29A198u);
    ctx->pc = 0x29A194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A190u;
            // 0x29a194: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299230u;
    if (runtime->hasFunction(0x299230u)) {
        auto targetFn = runtime->lookupFunction(0x299230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A198u; }
        if (ctx->pc != 0x29A198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299230_0x299280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A198u; }
        if (ctx->pc != 0x29A198u) { return; }
    }
    ctx->pc = 0x29A198u;
    // 0x29a198: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29a198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a19c: 0xc0a6834  jal         func_29A0D0
    ctx->pc = 0x29A19Cu;
    SET_GPR_U32(ctx, 31, 0x29A1A4u);
    ctx->pc = 0x29A1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A19Cu;
            // 0x29a1a0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29A0D0u;
    if (runtime->hasFunction(0x29A0D0u)) {
        auto targetFn = runtime->lookupFunction(0x29A0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A1A4u; }
        if (ctx->pc != 0x29A1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_29a0d0_0x29a180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A1A4u; }
        if (ctx->pc != 0x29A1A4u) { return; }
    }
    ctx->pc = 0x29A1A4u;
    // 0x29a1a4: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29A1A4u;
    {
        const bool branch_taken_0x29a1a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A1A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A1A4u;
            // 0x29a1a8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a1a4) {
            ctx->pc = 0x29A1B4u;
            goto label_29a1b4;
        }
    }
    ctx->pc = 0x29A1ACu;
    // 0x29a1ac: 0xc0a64a0  jal         func_299280
    ctx->pc = 0x29A1ACu;
    SET_GPR_U32(ctx, 31, 0x29A1B4u);
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A1B4u; }
        if (ctx->pc != 0x29A1B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299280_0x299298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A1B4u; }
        if (ctx->pc != 0x29A1B4u) { return; }
    }
    ctx->pc = 0x29A1B4u;
label_29a1b4:
    // 0x29a1b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29a1b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a1b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29a1b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29a1bc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29a1bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a1c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29a1c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a1c4: 0x3e00008  jr          $ra
    ctx->pc = 0x29A1C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A1C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A1C4u;
            // 0x29a1c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29A1B4u: goto label_29a1b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29A1CCu;
    // 0x29a1cc: 0x0  nop
    ctx->pc = 0x29a1ccu;
    // NOP
    // 0x29a1d0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x29a1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29a1d4: 0x0  nop
    ctx->pc = 0x29a1d4u;
    // NOP
    // 0x29a1d8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x29a1d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29a1dc: 0x0  nop
    ctx->pc = 0x29a1dcu;
    // NOP
    // 0x29a1e0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x29a1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x29a1e4: 0x0  nop
    ctx->pc = 0x29a1e4u;
    // NOP
    // 0x29a1e8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x29a1e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29a1ec: 0x0  nop
    ctx->pc = 0x29a1ecu;
    // NOP
    // 0x29a1f0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x29a1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29a1f4: 0x0  nop
    ctx->pc = 0x29a1f4u;
    // NOP
    // 0x29a1f8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x29a1f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29a1fc: 0x0  nop
    ctx->pc = 0x29a1fcu;
    // NOP
}
