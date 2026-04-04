#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00244B88
// Address: 0x244b88 - 0x244be8
void sub_00244B88_0x244b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244B88_0x244b88");
#endif

    ctx->pc = 0x244b88u;

    // 0x244b88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x244b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x244b8c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x244b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x244b90: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x244b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x244b94: 0x2442ead8  addiu       $v0, $v0, -0x1528
    ctx->pc = 0x244b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961880));
    // 0x244b98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x244b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x244b9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x244b9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244ba0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x244ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x244ba4: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x244ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x244ba8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x244ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x244bac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x244BACu;
    {
        const bool branch_taken_0x244bac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x244BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244BACu;
            // 0x244bb0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244bac) {
            ctx->pc = 0x244BC0u;
            goto label_244bc0;
        }
    }
    ctx->pc = 0x244BB4u;
    // 0x244bb4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x244bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x244bb8: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x244BB8u;
    SET_GPR_U32(ctx, 31, 0x244BC0u);
    ctx->pc = 0x244BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244BB8u;
            // 0x244bbc: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244BC0u; }
        if (ctx->pc != 0x244BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244BC0u; }
        if (ctx->pc != 0x244BC0u) { return; }
    }
    ctx->pc = 0x244BC0u;
label_244bc0:
    // 0x244bc0: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x244bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x244bc4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x244BC4u;
    {
        const bool branch_taken_0x244bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x244bc4) {
            ctx->pc = 0x244BC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x244BC4u;
            // 0x244bc8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x244BD8u;
            goto label_244bd8;
        }
    }
    ctx->pc = 0x244BCCu;
    // 0x244bcc: 0xc07cf4e  jal         func_1F3D38
    ctx->pc = 0x244BCCu;
    SET_GPR_U32(ctx, 31, 0x244BD4u);
    ctx->pc = 0x244BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244BCCu;
            // 0x244bd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F3D38u;
    if (runtime->hasFunction(0x1F3D38u)) {
        auto targetFn = runtime->lookupFunction(0x1F3D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244BD4u; }
        if (ctx->pc != 0x244BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1f3d38_0x1f3d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244BD4u; }
        if (ctx->pc != 0x244BD4u) { return; }
    }
    ctx->pc = 0x244BD4u;
    // 0x244bd4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x244bd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_244bd8:
    // 0x244bd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x244bd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x244bdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x244bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x244be0: 0x3e00008  jr          $ra
    ctx->pc = 0x244BE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244BE0u;
            // 0x244be4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x244BC0u: goto label_244bc0;
            case 0x244BD8u: goto label_244bd8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x244BE8u;
}
