#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013D8A0
// Address: 0x13d8a0 - 0x13d910
void sub_0013D8A0_0x13d8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D8A0_0x13d8a0");
#endif

    ctx->pc = 0x13d8a0u;

    // 0x13d8a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13d8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13d8a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13d8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13d8a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13d8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13d8ac: 0xc04f824  jal         func_13E090
    ctx->pc = 0x13D8ACu;
    SET_GPR_U32(ctx, 31, 0x13D8B4u);
    ctx->pc = 0x13D8B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D8ACu;
            // 0x13d8b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D8B4u; }
        if (ctx->pc != 0x13D8B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D8B4u; }
        if (ctx->pc != 0x13D8B4u) { return; }
    }
    ctx->pc = 0x13D8B4u;
    // 0x13d8b4: 0x14500004  bne         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13D8B4u;
    {
        const bool branch_taken_0x13d8b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x13D8B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D8B4u;
            // 0x13d8b8: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d8b4) {
            ctx->pc = 0x13D8C8u;
            goto label_13d8c8;
        }
    }
    ctx->pc = 0x13D8BCu;
    // 0x13d8bc: 0xc04f830  jal         func_13E0C0
    ctx->pc = 0x13D8BCu;
    SET_GPR_U32(ctx, 31, 0x13D8C4u);
    ctx->pc = 0x13D8C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D8BCu;
            // 0x13d8c0: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E0C0u;
    if (runtime->hasFunction(0x13E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D8C4u; }
        if (ctx->pc != 0x13D8C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e0c0_0x13e158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D8C4u; }
        if (ctx->pc != 0x13D8C4u) { return; }
    }
    ctx->pc = 0x13D8C4u;
    // 0x13d8c4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x13d8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_13d8c8:
    // 0x13d8c8: 0x8c44beb0  lw          $a0, -0x4150($v0)
    ctx->pc = 0x13d8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950576)));
    // 0x13d8cc: 0x2445beb0  addiu       $a1, $v0, -0x4150
    ctx->pc = 0x13d8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950576));
label_13d8d0:
    // 0x13d8d0: 0x54900007  bnel        $a0, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13D8D0u;
    {
        const bool branch_taken_0x13d8d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 16));
        if (branch_taken_0x13d8d0) {
            ctx->pc = 0x13D8D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13D8D0u;
            // 0x13d8d4: 0x2485000c  addiu       $a1, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13D8F0u;
            goto label_13d8f0;
        }
    }
    ctx->pc = 0x13D8D8u;
    // 0x13d8d8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x13d8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x13d8dc: 0x3c021e73  lui         $v0, 0x1E73
    ctx->pc = 0x13d8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7795 << 16));
    // 0x13d8e0: 0x3442cfbc  ori         $v0, $v0, 0xCFBC
    ctx->pc = 0x13d8e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53180);
    // 0x13d8e4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x13d8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x13d8e8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13D8E8u;
    {
        const bool branch_taken_0x13d8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D8ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D8E8u;
            // 0x13d8ec: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d8e8) {
            ctx->pc = 0x13D900u;
            goto label_13d900;
        }
    }
    ctx->pc = 0x13D8F0u;
label_13d8f0:
    // 0x13d8f0: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x13d8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x13d8f4: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x13D8F4u;
    {
        const bool branch_taken_0x13d8f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d8f4) {
            ctx->pc = 0x13D8D0u;
            runtime->cooperativeGuestYield();
            goto label_13d8d0;
        }
    }
    ctx->pc = 0x13D8FCu;
    // 0x13d8fc: 0x0  nop
    ctx->pc = 0x13d8fcu;
    // NOP
label_13d900:
    // 0x13d900: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13d900u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d904: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13d904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d908: 0x3e00008  jr          $ra
    ctx->pc = 0x13D908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D90Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D908u;
            // 0x13d90c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13D8C8u: goto label_13d8c8;
            case 0x13D8D0u: goto label_13d8d0;
            case 0x13D8F0u: goto label_13d8f0;
            case 0x13D900u: goto label_13d900;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13D910u;
}
