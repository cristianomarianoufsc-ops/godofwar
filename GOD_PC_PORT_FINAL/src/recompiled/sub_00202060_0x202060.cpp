#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00202060
// Address: 0x202060 - 0x2020d8
void sub_00202060_0x202060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202060_0x202060");
#endif

    ctx->pc = 0x202060u;

    // 0x202060: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x202060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x202064: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x202064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x202068: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x202068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x20206c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20206cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202070: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x202070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x202074: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x202074u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202078: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x202078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20207c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20207cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202080: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x202080u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x202084: 0x0  nop
    ctx->pc = 0x202084u;
    // NOP
label_202088:
    // 0x202088: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x202088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x20208c: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x20208cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x202090: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x202090u;
    {
        const bool branch_taken_0x202090 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x202090) {
            ctx->pc = 0x202094u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x202090u;
            // 0x202094: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2020ACu;
            goto label_2020ac;
        }
    }
    ctx->pc = 0x202098u;
    // 0x202098: 0xc080702  jal         func_201C08
    ctx->pc = 0x202098u;
    SET_GPR_U32(ctx, 31, 0x2020A0u);
    ctx->pc = 0x20209Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202098u;
            // 0x20209c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (runtime->hasFunction(0x201C08u)) {
        auto targetFn = runtime->lookupFunction(0x201C08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2020A0u; }
        if (ctx->pc != 0x2020A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00201C08_0x201c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2020A0u; }
        if (ctx->pc != 0x2020A0u) { return; }
    }
    ctx->pc = 0x2020A0u;
    // 0x2020a0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2020A0u;
    {
        const bool branch_taken_0x2020a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2020a0) {
            ctx->pc = 0x2020A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2020A0u;
            // 0x2020a4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2020C0u;
            goto label_2020c0;
        }
    }
    ctx->pc = 0x2020A8u;
    // 0x2020a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2020a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2020ac:
    // 0x2020ac: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x2020acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2020b0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2020B0u;
    {
        const bool branch_taken_0x2020b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2020B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2020B0u;
            // 0x2020b4: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2020b0) {
            ctx->pc = 0x202088u;
            runtime->cooperativeGuestYield();
            goto label_202088;
        }
    }
    ctx->pc = 0x2020B8u;
    // 0x2020b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2020b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2020bc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2020bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2020c0:
    // 0x2020c0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2020c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2020c4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2020c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2020c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2020c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2020cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2020CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2020D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2020CCu;
            // 0x2020d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x202088u: goto label_202088;
            case 0x2020ACu: goto label_2020ac;
            case 0x2020C0u: goto label_2020c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2020D4u;
    // 0x2020d4: 0x0  nop
    ctx->pc = 0x2020d4u;
    // NOP
}
