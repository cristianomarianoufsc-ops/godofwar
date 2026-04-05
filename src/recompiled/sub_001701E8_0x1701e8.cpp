#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001701E8
// Address: 0x1701e8 - 0x170260
void sub_001701E8_0x1701e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001701E8_0x1701e8");
#endif

    ctx->pc = 0x1701e8u;

    // 0x1701e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1701e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1701ec: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1701ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1701f0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1701f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1701f4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1701f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1701f8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1701f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1701fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1701fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x170200: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x170200u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170204: 0xc05c098  jal         func_170260
    ctx->pc = 0x170204u;
    SET_GPR_U32(ctx, 31, 0x17020Cu);
    ctx->pc = 0x170208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170204u;
            // 0x170208: 0x37a70004  ori         $a3, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
    ctx->pc = 0x170260u;
    if (runtime->hasFunction(0x170260u)) {
        auto targetFn = runtime->lookupFunction(0x170260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17020Cu; }
        if (ctx->pc != 0x17020Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_170260_0x170300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17020Cu; }
        if (ctx->pc != 0x17020Cu) { return; }
    }
    ctx->pc = 0x17020Cu;
    // 0x17020c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x17020cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x170210: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x170210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170214: 0x24634a58  addiu       $v1, $v1, 0x4A58
    ctx->pc = 0x170214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19032));
    // 0x170218: 0x97a50004  lhu         $a1, 0x4($sp)
    ctx->pc = 0x170218u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x17021c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x17021cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170220: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x170220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x170224: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x170224u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170228: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x170228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17022c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17022cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x170230: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x170230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x170234: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x170234u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x170238: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x170238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x17023c: 0x40f809  jalr        $v0
    ctx->pc = 0x17023Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x170244u);
        ctx->pc = 0x170240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17023Cu;
            // 0x170240: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x170244u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x170244u; }
            if (ctx->pc != 0x170244u) { return; }
        }
        }
    }
    ctx->pc = 0x170244u;
    // 0x170244: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x170244u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x170248: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x170248u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17024c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17024cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x170250: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x170250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170254: 0x3e00008  jr          $ra
    ctx->pc = 0x170254u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170254u;
            // 0x170258: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17025Cu;
    // 0x17025c: 0x0  nop
    ctx->pc = 0x17025cu;
    // NOP
}
