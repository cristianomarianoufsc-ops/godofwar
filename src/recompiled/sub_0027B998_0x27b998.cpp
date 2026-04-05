#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027B998
// Address: 0x27b998 - 0x27b9f0
void sub_0027B998_0x27b998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027B998_0x27b998");
#endif

    ctx->pc = 0x27b998u;

    // 0x27b998: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27b998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27b99c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27b99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27b9a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27b9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27b9a4: 0xc09ec3a  jal         func_27B0E8
    ctx->pc = 0x27B9A4u;
    SET_GPR_U32(ctx, 31, 0x27B9ACu);
    ctx->pc = 0x27B9A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B9A4u;
            // 0x27b9a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27B0E8u;
    if (runtime->hasFunction(0x27B0E8u)) {
        auto targetFn = runtime->lookupFunction(0x27B0E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B9ACu; }
        if (ctx->pc != 0x27B9ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027B0E8_0x27b0e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B9ACu; }
        if (ctx->pc != 0x27B9ACu) { return; }
    }
    ctx->pc = 0x27B9ACu;
    // 0x27b9ac: 0x440000b  bltz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x27B9ACu;
    {
        const bool branch_taken_0x27b9ac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x27B9B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B9ACu;
            // 0x27b9b0: 0x24040334  addiu       $a0, $zero, 0x334 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b9ac) {
            ctx->pc = 0x27B9DCu;
            goto label_27b9dc;
        }
    }
    ctx->pc = 0x27B9B4u;
    // 0x27b9b4: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x27b9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x27b9b8: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x27b9b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x27b9bc: 0x2463d008  addiu       $v1, $v1, -0x2FF8
    ctx->pc = 0x27b9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955016));
    // 0x27b9c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27b9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b9c4: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x27b9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x27b9c8: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x27b9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27b9cc: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x27b9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x27b9d0: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x27b9d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b9d4: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x27b9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x27b9d8: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x27b9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_27b9dc:
    // 0x27b9dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27b9dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27b9e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27b9e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27b9e4: 0x3e00008  jr          $ra
    ctx->pc = 0x27B9E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B9E4u;
            // 0x27b9e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27B9DCu: goto label_27b9dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27B9ECu;
    // 0x27b9ec: 0x0  nop
    ctx->pc = 0x27b9ecu;
    // NOP
}
