#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027D078
// Address: 0x27d078 - 0x27d0e8
void sub_0027D078_0x27d078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027D078_0x27d078");
#endif

    ctx->pc = 0x27d078u;

    // 0x27d078: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27d078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27d07c: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x27d07cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x27d080: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27d080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27d084: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27d084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27d088: 0xc0a2589  jal         func_289624
    ctx->pc = 0x27D088u;
    SET_GPR_U32(ctx, 31, 0x27D090u);
    ctx->pc = 0x27D08Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D088u;
            // 0x27d08c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289624u;
    if (runtime->hasFunction(0x289624u)) {
        auto targetFn = runtime->lookupFunction(0x289624u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D090u; }
        if (ctx->pc != 0x27D090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289624_0x2897c4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D090u; }
        if (ctx->pc != 0x27D090u) { return; }
    }
    ctx->pc = 0x27D090u;
    // 0x27d090: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x27D090u;
    {
        const bool branch_taken_0x27d090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D090u;
            // 0x27d094: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d090) {
            ctx->pc = 0x27D0BCu;
            goto label_27d0bc;
        }
    }
    ctx->pc = 0x27D098u;
    // 0x27d098: 0xc0a34ee  jal         func_28D3B8
    ctx->pc = 0x27D098u;
    SET_GPR_U32(ctx, 31, 0x27D0A0u);
    ctx->pc = 0x27D09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D098u;
            // 0x27d09c: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D3B8u;
    if (runtime->hasFunction(0x28D3B8u)) {
        auto targetFn = runtime->lookupFunction(0x28D3B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D0A0u; }
        if (ctx->pc != 0x27D0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28d3b8_0x28d408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D0A0u; }
        if (ctx->pc != 0x27D0A0u) { return; }
    }
    ctx->pc = 0x27D0A0u;
    // 0x27d0a0: 0xc0a268a  jal         func_289A28
    ctx->pc = 0x27D0A0u;
    SET_GPR_U32(ctx, 31, 0x27D0A8u);
    ctx->pc = 0x27D0A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D0A0u;
            // 0x27d0a4: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289A28u;
    if (runtime->hasFunction(0x289A28u)) {
        auto targetFn = runtime->lookupFunction(0x289A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D0A8u; }
        if (ctx->pc != 0x27D0A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289a28_0x289b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D0A8u; }
        if (ctx->pc != 0x27D0A8u) { return; }
    }
    ctx->pc = 0x27D0A8u;
    // 0x27d0a8: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x27d0a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x27d0ac: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27D0ACu;
    {
        const bool branch_taken_0x27d0ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D0B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D0ACu;
            // 0x27d0b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d0ac) {
            ctx->pc = 0x27D0D4u;
            goto label_27d0d4;
        }
    }
    ctx->pc = 0x27D0B4u;
    // 0x27d0b4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27D0B4u;
    {
        const bool branch_taken_0x27d0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D0B4u;
            // 0x27d0b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d0b4) {
            ctx->pc = 0x27D0D4u;
            goto label_27d0d4;
        }
    }
    ctx->pc = 0x27D0BCu;
label_27d0bc:
    // 0x27d0bc: 0xc0a268a  jal         func_289A28
    ctx->pc = 0x27D0BCu;
    SET_GPR_U32(ctx, 31, 0x27D0C4u);
    ctx->pc = 0x27D0C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D0BCu;
            // 0x27d0c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289A28u;
    if (runtime->hasFunction(0x289A28u)) {
        auto targetFn = runtime->lookupFunction(0x289A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D0C4u; }
        if (ctx->pc != 0x27D0C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289a28_0x289b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D0C4u; }
        if (ctx->pc != 0x27D0C4u) { return; }
    }
    ctx->pc = 0x27D0C4u;
    // 0x27d0c4: 0x2c430020  sltiu       $v1, $v0, 0x20
    ctx->pc = 0x27d0c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x27d0c8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x27D0C8u;
    {
        const bool branch_taken_0x27d0c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D0CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D0C8u;
            // 0x27d0cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d0c8) {
            ctx->pc = 0x27D0D4u;
            goto label_27d0d4;
        }
    }
    ctx->pc = 0x27D0D0u;
    // 0x27d0d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27d0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27d0d4:
    // 0x27d0d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27d0d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27d0d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27d0d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27d0dc: 0x3e00008  jr          $ra
    ctx->pc = 0x27D0DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D0E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D0DCu;
            // 0x27d0e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27D0BCu: goto label_27d0bc;
            case 0x27D0D4u: goto label_27d0d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27D0E4u;
    // 0x27d0e4: 0x0  nop
    ctx->pc = 0x27d0e4u;
    // NOP
}
