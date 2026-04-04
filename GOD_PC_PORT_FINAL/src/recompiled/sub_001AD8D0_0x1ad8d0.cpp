#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AD8D0
// Address: 0x1ad8d0 - 0x1ad928
void sub_001AD8D0_0x1ad8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AD8D0_0x1ad8d0");
#endif

    ctx->pc = 0x1ad8d0u;

    // 0x1ad8d0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1ad8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1ad8d4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ad8d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ad8d8: 0x8c42ecb4  lw          $v0, -0x134C($v0)
    ctx->pc = 0x1ad8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962356)));
    // 0x1ad8dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ad8dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ad8e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ad8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ad8e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ad8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ad8e8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ad8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ad8ec: 0x8c5000c0  lw          $s0, 0xC0($v0)
    ctx->pc = 0x1ad8ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1ad8f0: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AD8F0u;
    {
        const bool branch_taken_0x1ad8f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad8f0) {
            ctx->pc = 0x1AD8F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD8F0u;
            // 0x1ad8f4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AD918u;
            goto label_1ad918;
        }
    }
    ctx->pc = 0x1AD8F8u;
    // 0x1ad8f8: 0x2604ffec  addiu       $a0, $s0, -0x14
    ctx->pc = 0x1ad8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
    // 0x1ad8fc: 0x0  nop
    ctx->pc = 0x1ad8fcu;
    // NOP
label_1ad900:
    // 0x1ad900: 0xc06b64a  jal         func_1AD928
    ctx->pc = 0x1AD900u;
    SET_GPR_U32(ctx, 31, 0x1AD908u);
    ctx->pc = 0x1AD904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD900u;
            // 0x1ad904: 0x10200a  movz        $a0, $zero, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD928u;
    if (runtime->hasFunction(0x1AD928u)) {
        auto targetFn = runtime->lookupFunction(0x1AD928u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD908u; }
        if (ctx->pc != 0x1AD908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD928_0x1ad928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD908u; }
        if (ctx->pc != 0x1AD908u) { return; }
    }
    ctx->pc = 0x1AD908u;
    // 0x1ad908: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1ad908u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ad90c: 0x5600fffc  bnel        $s0, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1AD90Cu;
    {
        const bool branch_taken_0x1ad90c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad90c) {
            ctx->pc = 0x1AD910u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD90Cu;
            // 0x1ad910: 0x2604ffec  addiu       $a0, $s0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AD900u;
            runtime->cooperativeGuestYield();
            goto label_1ad900;
        }
    }
    ctx->pc = 0x1AD914u;
    // 0x1ad914: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ad914u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ad918:
    // 0x1ad918: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ad918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ad91c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD91Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD91Cu;
            // 0x1ad920: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AD900u: goto label_1ad900;
            case 0x1AD918u: goto label_1ad918;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AD924u;
    // 0x1ad924: 0x0  nop
    ctx->pc = 0x1ad924u;
    // NOP
}
