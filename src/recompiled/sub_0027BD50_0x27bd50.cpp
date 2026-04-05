#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027BD50
// Address: 0x27bd50 - 0x27bda8
void sub_0027BD50_0x27bd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027BD50_0x27bd50");
#endif

    ctx->pc = 0x27bd50u;

    // 0x27bd50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27bd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27bd54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27bd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27bd58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27bd58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27bd5c: 0xc09ec5c  jal         func_27B170
    ctx->pc = 0x27BD5Cu;
    SET_GPR_U32(ctx, 31, 0x27BD64u);
    ctx->pc = 0x27BD60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27BD5Cu;
            // 0x27bd60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27B170u;
    if (runtime->hasFunction(0x27B170u)) {
        auto targetFn = runtime->lookupFunction(0x27B170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BD64u; }
        if (ctx->pc != 0x27BD64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027B170_0x27b170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BD64u; }
        if (ctx->pc != 0x27BD64u) { return; }
    }
    ctx->pc = 0x27BD64u;
    // 0x27bd64: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x27bd64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bd68: 0x4e0000a  bltz        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x27BD68u;
    {
        const bool branch_taken_0x27bd68 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x27BD6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BD68u;
            // 0x27bd6c: 0x24040334  addiu       $a0, $zero, 0x334 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bd68) {
            ctx->pc = 0x27BD94u;
            goto label_27bd94;
        }
    }
    ctx->pc = 0x27BD70u;
    // 0x27bd70: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x27bd70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x27bd74: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x27bd74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x27bd78: 0x2463d008  addiu       $v1, $v1, -0x2FF8
    ctx->pc = 0x27bd78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955016));
    // 0x27bd7c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27bd7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27bd80: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x27bd80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bd84: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x27bd84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27bd88: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x27bd88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bd8c: 0xaca7000c  sw          $a3, 0xC($a1)
    ctx->pc = 0x27bd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 7));
    // 0x27bd90: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x27bd90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
label_27bd94:
    // 0x27bd94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27bd94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27bd98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27bd98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27bd9c: 0x3e00008  jr          $ra
    ctx->pc = 0x27BD9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27BDA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BD9Cu;
            // 0x27bda0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27BD94u: goto label_27bd94;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27BDA4u;
    // 0x27bda4: 0x0  nop
    ctx->pc = 0x27bda4u;
    // NOP
}
