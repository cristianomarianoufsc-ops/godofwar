#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00201C08
// Address: 0x201c08 - 0x201c40
void sub_00201C08_0x201c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201C08_0x201c08");
#endif

    ctx->pc = 0x201c08u;

    // 0x201c08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x201c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x201c0c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x201c0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x201c10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x201c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x201c14: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x201c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x201c18: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x201c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201c1c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x201c1cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x201c20: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x201c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x201c24: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x201c24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x201c28: 0xc0824fc  jal         func_2093F0
    ctx->pc = 0x201C28u;
    SET_GPR_U32(ctx, 31, 0x201C30u);
    ctx->pc = 0x201C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201C28u;
            // 0x201c2c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2093F0u;
    if (runtime->hasFunction(0x2093F0u)) {
        auto targetFn = runtime->lookupFunction(0x2093F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201C30u; }
        if (ctx->pc != 0x201C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002093F0_0x2093f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201C30u; }
        if (ctx->pc != 0x201C30u) { return; }
    }
    ctx->pc = 0x201C30u;
    // 0x201c30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x201c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201c34: 0x3e00008  jr          $ra
    ctx->pc = 0x201C34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201C34u;
            // 0x201c38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x201C3Cu;
    // 0x201c3c: 0x0  nop
    ctx->pc = 0x201c3cu;
    // NOP
}
