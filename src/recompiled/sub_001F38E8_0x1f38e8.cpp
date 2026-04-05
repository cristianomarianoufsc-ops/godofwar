#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F38E8
// Address: 0x1f38e8 - 0x1f3948
void sub_001F38E8_0x1f38e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F38E8_0x1f38e8");
#endif

    ctx->pc = 0x1f38e8u;

    // 0x1f38e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f38e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f38ec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1f38ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1f38f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f38f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f38f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f38f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f38f8: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1f38f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1f38fc: 0x8c500104  lw          $s0, 0x104($v0)
    ctx->pc = 0x1f38fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x1f3900: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f3900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1f3904: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1f3904u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1f3908: 0xde020040  ld          $v0, 0x40($s0)
    ctx->pc = 0x1f3908u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1f390c: 0x10450004  beq         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F390Cu;
    {
        const bool branch_taken_0x1f390c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1F3910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F390Cu;
            // 0x1f3910: 0x8491001e  lh          $s1, 0x1E($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f390c) {
            ctx->pc = 0x1F3920u;
            goto label_1f3920;
        }
    }
    ctx->pc = 0x1F3914u;
    // 0x1f3914: 0xc04da64  jal         func_136990
    ctx->pc = 0x1F3914u;
    SET_GPR_U32(ctx, 31, 0x1F391Cu);
    ctx->pc = 0x1F3918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3914u;
            // 0x1f3918: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F391Cu; }
        if (ctx->pc != 0x1F391Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F391Cu; }
        if (ctx->pc != 0x1F391Cu) { return; }
    }
    ctx->pc = 0x1F391Cu;
    // 0x1f391c: 0x0  nop
    ctx->pc = 0x1f391cu;
    // NOP
label_1f3920:
    // 0x1f3920: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x1f3920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1f3924: 0x111980  sll         $v1, $s1, 6
    ctx->pc = 0x1f3924u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x1f3928: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f3928u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f392c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f392cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f3930: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f3930u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f3934: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x1f3934u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f3938: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f3938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f393c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F393Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F393Cu;
            // 0x1f3940: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F3920u: goto label_1f3920;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F3944u;
    // 0x1f3944: 0x0  nop
    ctx->pc = 0x1f3944u;
    // NOP
}
