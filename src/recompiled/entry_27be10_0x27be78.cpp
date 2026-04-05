#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_27be10
// Address: 0x27be10 - 0x27be78
void entry_27be10_0x27be78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_27be10_0x27be78");
#endif

    ctx->pc = 0x27be10u;

    // 0x27be10: 0x24030334  addiu       $v1, $zero, 0x334
    ctx->pc = 0x27be10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 820));
    // 0x27be14: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27be14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27be18: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x27be18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x27be1c: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x27be1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x27be20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27be20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27be24: 0x2442d008  addiu       $v0, $v0, -0x2FF8
    ctx->pc = 0x27be24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955016));
    // 0x27be28: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x27be28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x27be2c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x27be2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x27be30: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x27be30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27be34: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x27be34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x27be38: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x27be38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x27be3c: 0x24850100  addiu       $a1, $a0, 0x100
    ctx->pc = 0x27be3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x27be40: 0xc0a5118  jal         func_294460
    ctx->pc = 0x27BE40u;
    SET_GPR_U32(ctx, 31, 0x27BE48u);
    ctx->pc = 0x27BE44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27BE40u;
            // 0x27be44: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294460u;
    if (runtime->hasFunction(0x294460u)) {
        auto targetFn = runtime->lookupFunction(0x294460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BE48u; }
        if (ctx->pc != 0x27BE48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00294460_0x294460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BE48u; }
        if (ctx->pc != 0x27BE48u) { return; }
    }
    ctx->pc = 0x27BE48u;
    // 0x27be48: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x27be48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27be4c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x27be4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x27be50: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x27be50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x27be54: 0x8ca3007c  lw          $v1, 0x7C($a1)
    ctx->pc = 0x27be54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 124)));
    // 0x27be58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27be58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27be5c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x27be5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x27be60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x27be60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27be64: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x27be64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x27be68: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27be68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27be6c: 0x3e00008  jr          $ra
    ctx->pc = 0x27BE6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27BE70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BE6Cu;
            // 0x27be70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27BE74u;
    // 0x27be74: 0x0  nop
    ctx->pc = 0x27be74u;
    // NOP
}
