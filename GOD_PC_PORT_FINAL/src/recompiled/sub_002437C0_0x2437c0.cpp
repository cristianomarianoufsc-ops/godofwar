#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002437C0
// Address: 0x2437c0 - 0x243820
void sub_002437C0_0x2437c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002437C0_0x2437c0");
#endif

    ctx->pc = 0x2437c0u;

    // 0x2437c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2437c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2437c4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2437c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2437c8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2437c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2437cc: 0x2442ead8  addiu       $v0, $v0, -0x1528
    ctx->pc = 0x2437ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961880));
    // 0x2437d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2437d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2437d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2437d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2437d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2437d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2437dc: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2437dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2437e0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2437e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2437e4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2437E4u;
    {
        const bool branch_taken_0x2437e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2437E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2437E4u;
            // 0x2437e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2437e4) {
            ctx->pc = 0x2437F8u;
            goto label_2437f8;
        }
    }
    ctx->pc = 0x2437ECu;
    // 0x2437ec: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2437ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2437f0: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x2437F0u;
    SET_GPR_U32(ctx, 31, 0x2437F8u);
    ctx->pc = 0x2437F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2437F0u;
            // 0x2437f4: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2437F8u; }
        if (ctx->pc != 0x2437F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2437F8u; }
        if (ctx->pc != 0x2437F8u) { return; }
    }
    ctx->pc = 0x2437F8u;
label_2437f8:
    // 0x2437f8: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2437f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x2437fc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2437FCu;
    {
        const bool branch_taken_0x2437fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2437fc) {
            ctx->pc = 0x243800u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2437FCu;
            // 0x243800: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x243810u;
            goto label_243810;
        }
    }
    ctx->pc = 0x243804u;
    // 0x243804: 0xc0655d0  jal         func_195740
    ctx->pc = 0x243804u;
    SET_GPR_U32(ctx, 31, 0x24380Cu);
    ctx->pc = 0x243808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243804u;
            // 0x243808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195740u;
    if (runtime->hasFunction(0x195740u)) {
        auto targetFn = runtime->lookupFunction(0x195740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24380Cu; }
        if (ctx->pc != 0x24380Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_195740_0x195768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24380Cu; }
        if (ctx->pc != 0x24380Cu) { return; }
    }
    ctx->pc = 0x24380Cu;
    // 0x24380c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x24380cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_243810:
    // 0x243810: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x243810u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243814: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x243814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243818: 0x3e00008  jr          $ra
    ctx->pc = 0x243818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24381Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243818u;
            // 0x24381c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2437F8u: goto label_2437f8;
            case 0x243810u: goto label_243810;
            default: break;
        }
        return;
    }
    ctx->pc = 0x243820u;
}
