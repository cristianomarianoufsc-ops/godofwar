#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026E4D0
// Address: 0x26e4d0 - 0x26e540
void sub_0026E4D0_0x26e4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026E4D0_0x26e4d0");
#endif

    ctx->pc = 0x26e4d0u;

    // 0x26e4d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26e4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26e4d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x26e4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x26e4d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26e4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26e4dc: 0xc0a648c  jal         func_299230
    ctx->pc = 0x26E4DCu;
    SET_GPR_U32(ctx, 31, 0x26E4E4u);
    ctx->pc = 0x26E4E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E4DCu;
            // 0x26e4e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299230u;
    if (runtime->hasFunction(0x299230u)) {
        auto targetFn = runtime->lookupFunction(0x299230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E4E4u; }
        if (ctx->pc != 0x26E4E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299230_0x299280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E4E4u; }
        if (ctx->pc != 0x26E4E4u) { return; }
    }
    ctx->pc = 0x26E4E4u;
    // 0x26e4e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x26e4e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e4e8: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x26e4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x26e4ec: 0x0  nop
    ctx->pc = 0x26e4ecu;
    // NOP
label_26e4f0:
    // 0x26e4f0: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x26e4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x26e4f4: 0x2442a588  addiu       $v0, $v0, -0x5A78
    ctx->pc = 0x26e4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944136));
    // 0x26e4f8: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x26e4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x26e4fc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26e4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26e500: 0x14500006  bne         $v0, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26E500u;
    {
        const bool branch_taken_0x26e500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x26E504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E500u;
            // 0x26e504: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e500) {
            ctx->pc = 0x26E51Cu;
            goto label_26e51c;
        }
    }
    ctx->pc = 0x26E508u;
    // 0x26e508: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x26e508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x26e50c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x26e50cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x26e510: 0x2442a5a8  addiu       $v0, $v0, -0x5A58
    ctx->pc = 0x26e510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944168));
    // 0x26e514: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x26e514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x26e518: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x26e518u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_26e51c:
    // 0x26e51c: 0x28820008  slti        $v0, $a0, 0x8
    ctx->pc = 0x26e51cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x26e520: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x26E520u;
    {
        const bool branch_taken_0x26e520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E520u;
            // 0x26e524: 0x3c020031  lui         $v0, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e520) {
            ctx->pc = 0x26E4F0u;
            runtime->cooperativeGuestYield();
            goto label_26e4f0;
        }
    }
    ctx->pc = 0x26E528u;
    // 0x26e528: 0xc0a64a0  jal         func_299280
    ctx->pc = 0x26E528u;
    SET_GPR_U32(ctx, 31, 0x26E530u);
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E530u; }
        if (ctx->pc != 0x26E530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299280_0x299298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E530u; }
        if (ctx->pc != 0x26E530u) { return; }
    }
    ctx->pc = 0x26E530u;
    // 0x26e530: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x26e530u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26e534: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26e534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26e538: 0x3e00008  jr          $ra
    ctx->pc = 0x26E538u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26E53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E538u;
            // 0x26e53c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26E4F0u: goto label_26e4f0;
            case 0x26E51Cu: goto label_26e51c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26E540u;
}
