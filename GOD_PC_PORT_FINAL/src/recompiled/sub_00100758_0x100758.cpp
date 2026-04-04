#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00100758
// Address: 0x100758 - 0x1007c8
void sub_00100758_0x100758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100758_0x100758");
#endif

    ctx->pc = 0x100758u;

    // 0x100758: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x100758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10075c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x10075cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x100760: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x100760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x100764: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x100764u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100768: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x100768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10076c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x10076cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100770: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x100770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x100774: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x100774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x100778: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x100778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x10077c: 0x1044000b  beq         $v0, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x10077Cu;
    {
        const bool branch_taken_0x10077c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x100780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10077Cu;
            // 0x100780: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10077c) {
            ctx->pc = 0x1007ACu;
            goto label_1007ac;
        }
    }
    ctx->pc = 0x100784u;
    // 0x100784: 0x0  nop
    ctx->pc = 0x100784u;
    // NOP
label_100788:
    // 0x100788: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x100788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x10078c: 0xc041ce4  jal         func_107390
    ctx->pc = 0x10078Cu;
    SET_GPR_U32(ctx, 31, 0x100794u);
    ctx->pc = 0x100790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10078Cu;
            // 0x100790: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107390u;
    if (runtime->hasFunction(0x107390u)) {
        auto targetFn = runtime->lookupFunction(0x107390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100794u; }
        if (ctx->pc != 0x100794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107390_0x107390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100794u; }
        if (ctx->pc != 0x100794u) { return; }
    }
    ctx->pc = 0x100794u;
    // 0x100794: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x100794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x100798: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x100798u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x10079c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x10079cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1007a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1007a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1007a4: 0x1444fff8  bne         $v0, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1007A4u;
    {
        const bool branch_taken_0x1007a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1007A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1007A4u;
            // 0x1007a8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1007a4) {
            ctx->pc = 0x100788u;
            runtime->cooperativeGuestYield();
            goto label_100788;
        }
    }
    ctx->pc = 0x1007ACu;
label_1007ac:
    // 0x1007ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1007acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1007b0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1007b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1007b4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1007b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1007b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1007b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1007bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1007BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1007C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1007BCu;
            // 0x1007c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x100788u: goto label_100788;
            case 0x1007ACu: goto label_1007ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1007C4u;
    // 0x1007c4: 0x0  nop
    ctx->pc = 0x1007c4u;
    // NOP
}
