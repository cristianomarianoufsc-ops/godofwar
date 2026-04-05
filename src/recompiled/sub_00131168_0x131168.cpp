#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00131168
// Address: 0x131168 - 0x1311e0
void sub_00131168_0x131168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131168_0x131168");
#endif

    ctx->pc = 0x131168u;

    // 0x131168: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x131168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13116c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x13116cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x131170: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x131170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x131174: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x131174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x131178: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x131178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13117c: 0x8cb000c0  lw          $s0, 0xC0($a1)
    ctx->pc = 0x13117cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 192)));
    // 0x131180: 0x52000013  beql        $s0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x131180u;
    {
        const bool branch_taken_0x131180 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x131180) {
            ctx->pc = 0x131184u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x131180u;
            // 0x131184: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1311D0u;
            goto label_1311d0;
        }
    }
    ctx->pc = 0x131188u;
    // 0x131188: 0x2605ffec  addiu       $a1, $s0, -0x14
    ctx->pc = 0x131188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
    // 0x13118c: 0x0  nop
    ctx->pc = 0x13118cu;
    // NOP
label_131190:
    // 0x131190: 0x10280a  movz        $a1, $zero, $s0
    ctx->pc = 0x131190u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x131194: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x131194u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x131198: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x131198u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13119c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x13119cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1311a0: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1311a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1311a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1311a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1311a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1311a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1311ac: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1311acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1311b0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1311b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1311b4: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x1311b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1311b8: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x1311b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1311bc: 0x40f809  jalr        $v0
    ctx->pc = 0x1311BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1311C4u);
        ctx->pc = 0x1311C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1311BCu;
            // 0x1311c0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1311C4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x131190u: goto label_131190;
            case 0x1311D0u: goto label_1311d0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1311C4u; }
            if (ctx->pc != 0x1311C4u) { return; }
        }
        }
    }
    ctx->pc = 0x1311C4u;
    // 0x1311c4: 0x1600fff2  bnez        $s0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1311C4u;
    {
        const bool branch_taken_0x1311c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1311C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1311C4u;
            // 0x1311c8: 0x2605ffec  addiu       $a1, $s0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1311c4) {
            ctx->pc = 0x131190u;
            runtime->cooperativeGuestYield();
            goto label_131190;
        }
    }
    ctx->pc = 0x1311CCu;
    // 0x1311cc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1311ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1311d0:
    // 0x1311d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1311d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1311d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1311D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1311D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1311D4u;
            // 0x1311d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x131190u: goto label_131190;
            case 0x1311D0u: goto label_1311d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1311DCu;
    // 0x1311dc: 0x0  nop
    ctx->pc = 0x1311dcu;
    // NOP
}
