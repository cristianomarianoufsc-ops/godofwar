#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_17bff0
// Address: 0x17bff0 - 0x17c050
void entry_17bff0_0x17c050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_17bff0_0x17c050");
#endif

    ctx->pc = 0x17bff0u;

    // 0x17bff0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17bff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17bff4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17bff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bff8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17bff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17bffc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17bffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17c000: 0xc09edfa  jal         func_27B7E8
    ctx->pc = 0x17C000u;
    SET_GPR_U32(ctx, 31, 0x17C008u);
    ctx->pc = 0x17C004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C000u;
            // 0x17c004: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27B7E8u;
    if (runtime->hasFunction(0x27B7E8u)) {
        auto targetFn = runtime->lookupFunction(0x27B7E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C008u; }
        if (ctx->pc != 0x17C008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_27b7e8_0x27b828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C008u; }
        if (ctx->pc != 0x17C008u) { return; }
    }
    ctx->pc = 0x17C008u;
    // 0x17c008: 0x240201c0  addiu       $v0, $zero, 0x1C0
    ctx->pc = 0x17c008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x17c00c: 0x0  nop
    ctx->pc = 0x17c00cu;
    // NOP
label_17c010:
    // 0x17c010: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x17c010u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x17c014: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x17c014u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x17c018: 0x2484d9c0  addiu       $a0, $a0, -0x2640
    ctx->pc = 0x17c018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957504));
    // 0x17c01c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17c01cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c020: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17c020u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c024: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17c024u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17c028: 0xc05f02a  jal         func_17C0A8
    ctx->pc = 0x17C028u;
    SET_GPR_U32(ctx, 31, 0x17C030u);
    ctx->pc = 0x17C02Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C028u;
            // 0x17c02c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C0A8u;
    if (runtime->hasFunction(0x17C0A8u)) {
        auto targetFn = runtime->lookupFunction(0x17C0A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C030u; }
        if (ctx->pc != 0x17C030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C0A8_0x17c0a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C030u; }
        if (ctx->pc != 0x17C030u) { return; }
    }
    ctx->pc = 0x17C030u;
    // 0x17c030: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x17c030u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x17c034: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x17C034u;
    {
        const bool branch_taken_0x17c034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17c034) {
            ctx->pc = 0x17C038u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17C034u;
            // 0x17c038: 0x240201c0  addiu       $v0, $zero, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17C010u;
            runtime->cooperativeGuestYield();
            goto label_17c010;
        }
    }
    ctx->pc = 0x17C03Cu;
    // 0x17c03c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17c03cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c040: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17c040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c044: 0x3e00008  jr          $ra
    ctx->pc = 0x17C044u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C044u;
            // 0x17c048: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17C010u: goto label_17c010;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17C04Cu;
    // 0x17c04c: 0x0  nop
    ctx->pc = 0x17c04cu;
    // NOP
}
