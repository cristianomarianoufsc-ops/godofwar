#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00122AB0
// Address: 0x122ab0 - 0x122b00
void sub_00122AB0_0x122ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122AB0_0x122ab0");
#endif

    ctx->pc = 0x122ab0u;

    // 0x122ab0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x122ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x122ab4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x122ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x122ab8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x122ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x122abc: 0xc04f824  jal         func_13E090
    ctx->pc = 0x122ABCu;
    SET_GPR_U32(ctx, 31, 0x122AC4u);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122AC4u; }
        if (ctx->pc != 0x122AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122AC4u; }
        if (ctx->pc != 0x122AC4u) { return; }
    }
    ctx->pc = 0x122AC4u;
    // 0x122ac4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x122ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122ac8: 0x240500a0  addiu       $a1, $zero, 0xA0
    ctx->pc = 0x122ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x122acc: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x122ACCu;
    SET_GPR_U32(ctx, 31, 0x122AD4u);
    ctx->pc = 0x122AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x122ACCu;
            // 0x122ad0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122AD4u; }
        if (ctx->pc != 0x122AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122AD4u; }
        if (ctx->pc != 0x122AD4u) { return; }
    }
    ctx->pc = 0x122AD4u;
    // 0x122ad4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x122ad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122ad8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x122AD8u;
    {
        const bool branch_taken_0x122ad8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x122ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122AD8u;
            // 0x122adc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122ad8) {
            ctx->pc = 0x122AECu;
            goto label_122aec;
        }
    }
    ctx->pc = 0x122AE0u;
    // 0x122ae0: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x122ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x122ae4: 0xc04bb5e  jal         func_12ED78
    ctx->pc = 0x122AE4u;
    SET_GPR_U32(ctx, 31, 0x122AECu);
    ctx->pc = 0x122AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x122AE4u;
            // 0x122ae8: 0x24a578f8  addiu       $a1, $a1, 0x78F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30968));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12ED78u;
    if (runtime->hasFunction(0x12ED78u)) {
        auto targetFn = runtime->lookupFunction(0x12ED78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122AECu; }
        if (ctx->pc != 0x122AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012ED78_0x12ed78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122AECu; }
        if (ctx->pc != 0x122AECu) { return; }
    }
    ctx->pc = 0x122AECu;
label_122aec:
    // 0x122aec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x122aecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122af0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x122af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122af4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x122af4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122af8: 0x3e00008  jr          $ra
    ctx->pc = 0x122AF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122AF8u;
            // 0x122afc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x122AECu: goto label_122aec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x122B00u;
}
