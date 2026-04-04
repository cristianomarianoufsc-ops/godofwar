#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00243A98
// Address: 0x243a98 - 0x243af8
void sub_00243A98_0x243a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243A98_0x243a98");
#endif

    ctx->pc = 0x243a98u;

    // 0x243a98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x243a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x243a9c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x243a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x243aa0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x243aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x243aa4: 0x2442ead8  addiu       $v0, $v0, -0x1528
    ctx->pc = 0x243aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961880));
    // 0x243aa8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x243aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x243aac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x243aacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243ab0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x243ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x243ab4: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x243ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x243ab8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x243ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x243abc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x243ABCu;
    {
        const bool branch_taken_0x243abc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x243AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243ABCu;
            // 0x243ac0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243abc) {
            ctx->pc = 0x243AD0u;
            goto label_243ad0;
        }
    }
    ctx->pc = 0x243AC4u;
    // 0x243ac4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x243ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x243ac8: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x243AC8u;
    SET_GPR_U32(ctx, 31, 0x243AD0u);
    ctx->pc = 0x243ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243AC8u;
            // 0x243acc: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243AD0u; }
        if (ctx->pc != 0x243AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243AD0u; }
        if (ctx->pc != 0x243AD0u) { return; }
    }
    ctx->pc = 0x243AD0u;
label_243ad0:
    // 0x243ad0: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x243ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x243ad4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x243AD4u;
    {
        const bool branch_taken_0x243ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x243ad4) {
            ctx->pc = 0x243AD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x243AD4u;
            // 0x243ad8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x243AE8u;
            goto label_243ae8;
        }
    }
    ctx->pc = 0x243ADCu;
    // 0x243adc: 0xc063542  jal         func_18D508
    ctx->pc = 0x243ADCu;
    SET_GPR_U32(ctx, 31, 0x243AE4u);
    ctx->pc = 0x243AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243ADCu;
            // 0x243ae0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D508u;
    if (runtime->hasFunction(0x18D508u)) {
        auto targetFn = runtime->lookupFunction(0x18D508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243AE4u; }
        if (ctx->pc != 0x243AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_18d508_0x18d530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243AE4u; }
        if (ctx->pc != 0x243AE4u) { return; }
    }
    ctx->pc = 0x243AE4u;
    // 0x243ae4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x243ae4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_243ae8:
    // 0x243ae8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x243ae8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243aec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x243aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243af0: 0x3e00008  jr          $ra
    ctx->pc = 0x243AF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243AF0u;
            // 0x243af4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x243AD0u: goto label_243ad0;
            case 0x243AE8u: goto label_243ae8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x243AF8u;
}
