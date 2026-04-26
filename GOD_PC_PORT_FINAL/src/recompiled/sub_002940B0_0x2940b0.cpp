#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002940B0
// Address: 0x2940b0 - 0x294140
void sub_002940B0_0x2940b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002940B0_0x2940b0");
#endif

    ctx->pc = 0x2940b0u;

    fprintf(stderr, "[2940B0] ENTRADA (SifInit?)\n"); fflush(stderr);
    // 0x2940b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2940b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2940b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2940b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2940b8: 0xc0a648c  jal         func_299230
    ctx->pc = 0x2940B8u;
    SET_GPR_U32(ctx, 31, 0x2940C0u);
    ctx->pc = 0x299230u;
    if (runtime->hasFunction(0x299230u)) {
        auto targetFn = runtime->lookupFunction(0x299230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2940C0u; }
        if (ctx->pc != 0x2940C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299230_0x299280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2940C0u; }
        if (ctx->pc != 0x2940C0u) { return; }
    }
    ctx->pc = 0x2940C0u;
    // 0x2940c0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2940c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2940c4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2940c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2940c8: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x2940c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x2940cc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2940ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2940d0: 0xf  sync
    ctx->pc = 0x2940d0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2940d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2940D4u;
    {
        const bool branch_taken_0x2940d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2940D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2940D4u;
            // 0x2940d8: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2940d4) {
            ctx->pc = 0x2940E8u;
            goto label_2940e8;
        }
    }
    ctx->pc = 0x2940DCu;
    // 0x2940dc: 0xc0a64a0  jal         func_299280
    ctx->pc = 0x2940DCu;
    SET_GPR_U32(ctx, 31, 0x2940E4u);
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2940E4u; }
        if (ctx->pc != 0x2940E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299280_0x299298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2940E4u; }
        if (ctx->pc != 0x2940E4u) { return; }
    }
    ctx->pc = 0x2940E4u;
    // 0x2940e4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2940e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_2940e8:
    // 0x2940e8: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x2940e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x2940ec: 0x0  nop
    ctx->pc = 0x2940ecu;
    // NOP
label_2940f0:
    // 0x2940f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2940f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2940f4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2940f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2940f8: 0x0  nop
    ctx->pc = 0x2940f8u;
    // NOP
    // 0x2940fc: 0x0  nop
    ctx->pc = 0x2940fcu;
    // NOP
    // 0x294100: 0x0  nop
    ctx->pc = 0x294100u;
    // NOP
    // 0x294104: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x294104u;
    {
        const bool branch_taken_0x294104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x294104) {
            ctx->pc = 0x2940F0u;
            runtime->cooperativeGuestYield();
            goto label_2940f0;
        }
    }
    ctx->pc = 0x29410Cu;
    // 0x29410c: 0xc0a648c  jal         func_299230
    ctx->pc = 0x29410Cu;
    SET_GPR_U32(ctx, 31, 0x294114u);
    ctx->pc = 0x299230u;
    if (runtime->hasFunction(0x299230u)) {
        auto targetFn = runtime->lookupFunction(0x299230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294114u; }
        if (ctx->pc != 0x294114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299230_0x299280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294114u; }
        if (ctx->pc != 0x294114u) { return; }
    }
    ctx->pc = 0x294114u;
    // 0x294114: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x294114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x294118: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x294118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29411c: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x29411cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x294120: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x294120u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x294124: 0xf  sync
    ctx->pc = 0x294124u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x294128: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x294128u;
    {
        const bool branch_taken_0x294128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29412Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294128u;
            // 0x29412c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294128) {
            ctx->pc = 0x294138u;
            goto label_294138;
        }
    }
    ctx->pc = 0x294130u;
    // 0x294130: 0x80a64a0  j           func_299280
    ctx->pc = 0x294130u;
    ctx->pc = 0x294134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294130u;
            // 0x294134: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        entry_299280_0x299298(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x294138u;
label_294138:
    // 0x294138: 0x3e00008  jr          $ra
    ctx->pc = 0x294138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29413Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294138u;
            // 0x29413c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2940E8u: goto label_2940e8;
            case 0x2940F0u: goto label_2940f0;
            case 0x294138u: goto label_294138;
            default: break;
        }
        return;
    }
    ctx->pc = 0x294140u;
}
