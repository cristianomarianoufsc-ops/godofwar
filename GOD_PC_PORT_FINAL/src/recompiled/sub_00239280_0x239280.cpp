#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00239280
// Address: 0x239280 - 0x2392c8
void sub_00239280_0x239280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239280_0x239280");
#endif

    ctx->pc = 0x239280u;

    // 0x239280: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x239280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x239284: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x239284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x239288: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x239288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23928c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23928cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239290: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x239290u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239294: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x239294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x239298: 0xc096364  jal         func_258D90
    ctx->pc = 0x239298u;
    SET_GPR_U32(ctx, 31, 0x2392A0u);
    ctx->pc = 0x23929Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239298u;
            // 0x23929c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x258D90u;
    if (runtime->hasFunction(0x258D90u)) {
        auto targetFn = runtime->lookupFunction(0x258D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2392A0u; }
        if (ctx->pc != 0x2392A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00258D90_0x258d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2392A0u; }
        if (ctx->pc != 0x2392A0u) { return; }
    }
    ctx->pc = 0x2392A0u;
    // 0x2392a0: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x2392a0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2392a4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2392A4u;
    {
        const bool branch_taken_0x2392a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2392A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2392A4u;
            // 0x2392a8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2392a4) {
            ctx->pc = 0x2392B8u;
            goto label_2392b8;
        }
    }
    ctx->pc = 0x2392ACu;
    // 0x2392ac: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x2392ACu;
    SET_GPR_U32(ctx, 31, 0x2392B4u);
    ctx->pc = 0x2392B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2392ACu;
            // 0x2392b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2392B4u; }
        if (ctx->pc != 0x2392B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2392B4u; }
        if (ctx->pc != 0x2392B4u) { return; }
    }
    ctx->pc = 0x2392B4u;
    // 0x2392b4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2392b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2392b8:
    // 0x2392b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2392b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2392bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2392bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2392c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2392C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2392C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2392C0u;
            // 0x2392c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2392B8u: goto label_2392b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2392C8u;
}
