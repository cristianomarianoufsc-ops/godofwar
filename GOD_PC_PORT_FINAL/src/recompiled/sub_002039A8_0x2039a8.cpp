#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002039A8
// Address: 0x2039a8 - 0x203a10
void sub_002039A8_0x2039a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002039A8_0x2039a8");
#endif

    ctx->pc = 0x2039a8u;

    // 0x2039a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2039a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2039ac: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2039acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2039b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2039b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2039b4: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2039b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2039b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2039b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2039bc: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2039bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2039c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2039c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2039c4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2039c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2039c8: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2039c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2039cc: 0xc082146  jal         func_208518
    ctx->pc = 0x2039CCu;
    SET_GPR_U32(ctx, 31, 0x2039D4u);
    ctx->pc = 0x2039D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2039CCu;
            // 0x2039d0: 0x240affff  addiu       $t2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208518u;
    if (runtime->hasFunction(0x208518u)) {
        auto targetFn = runtime->lookupFunction(0x208518u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2039D4u; }
        if (ctx->pc != 0x2039D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00208518_0x208518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2039D4u; }
        if (ctx->pc != 0x2039D4u) { return; }
    }
    ctx->pc = 0x2039D4u;
    // 0x2039d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2039d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2039d8: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2039D8u;
    {
        const bool branch_taken_0x2039d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2039DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2039D8u;
            // 0x2039dc: 0x260301c0  addiu       $v1, $s0, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2039d8) {
            ctx->pc = 0x203A00u;
            goto label_203a00;
        }
    }
    ctx->pc = 0x2039E0u;
    // 0x2039e0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2039e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2039e4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2039e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2039e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2039e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2039ec: 0xa0620005  sb          $v0, 0x5($v1)
    ctx->pc = 0x2039ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x2039f0: 0xc082218  jal         func_208860
    ctx->pc = 0x2039F0u;
    SET_GPR_U32(ctx, 31, 0x2039F8u);
    ctx->pc = 0x2039F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2039F0u;
            // 0x2039f4: 0xa0600006  sb          $zero, 0x6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208860u;
    if (runtime->hasFunction(0x208860u)) {
        auto targetFn = runtime->lookupFunction(0x208860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2039F8u; }
        if (ctx->pc != 0x2039F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_208860_0x2088e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2039F8u; }
        if (ctx->pc != 0x2039F8u) { return; }
    }
    ctx->pc = 0x2039F8u;
    // 0x2039f8: 0xc08117a  jal         func_2045E8
    ctx->pc = 0x2039F8u;
    SET_GPR_U32(ctx, 31, 0x203A00u);
    ctx->pc = 0x2039FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2039F8u;
            // 0x2039fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2045E8u;
    if (runtime->hasFunction(0x2045E8u)) {
        auto targetFn = runtime->lookupFunction(0x2045E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203A00u; }
        if (ctx->pc != 0x203A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002045E8_0x2045e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203A00u; }
        if (ctx->pc != 0x203A00u) { return; }
    }
    ctx->pc = 0x203A00u;
label_203a00:
    // 0x203a00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x203a00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x203a04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x203a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203a08: 0x3e00008  jr          $ra
    ctx->pc = 0x203A08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203A08u;
            // 0x203a0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x203A00u: goto label_203a00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x203A10u;
}
