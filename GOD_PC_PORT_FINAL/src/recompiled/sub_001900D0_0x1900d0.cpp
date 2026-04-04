#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001900D0
// Address: 0x1900d0 - 0x190140
void sub_001900D0_0x1900d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001900D0_0x1900d0");
#endif

    ctx->pc = 0x1900d0u;

    // 0x1900d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1900d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1900d4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1900d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1900d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1900d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1900dc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1900dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1900e0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1900e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1900e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1900e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1900e8: 0x700694a9  por         $s2, $zero, $a2
    ctx->pc = 0x1900e8u;
    SET_GPR_VEC(ctx, 18, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 6)));
    // 0x1900ec: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1900ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1900f0: 0x84430060  lh          $v1, 0x60($v0)
    ctx->pc = 0x1900f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1900f4: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1900f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1900f8: 0x40f809  jalr        $v0
    ctx->pc = 0x1900F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x190100u);
        ctx->pc = 0x1900FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1900F8u;
            // 0x1900fc: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x190100u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x190128u: goto label_190128;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x190100u; }
            if (ctx->pc != 0x190100u) { return; }
        }
        }
    }
    ctx->pc = 0x190100u;
    // 0x190100: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x190100u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190104: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x190104u;
    {
        const bool branch_taken_0x190104 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x190108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190104u;
            // 0x190108: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190104) {
            ctx->pc = 0x190128u;
            goto label_190128;
        }
    }
    ctx->pc = 0x19010Cu;
    // 0x19010c: 0x70122ca9  por         $a1, $zero, $s2
    ctx->pc = 0x19010cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 18)));
    // 0x190110: 0xc080b8e  jal         func_202E38
    ctx->pc = 0x190110u;
    SET_GPR_U32(ctx, 31, 0x190118u);
    ctx->pc = 0x190114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190110u;
            // 0x190114: 0x26260024  addiu       $a2, $s1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x202E38u;
    if (runtime->hasFunction(0x202E38u)) {
        auto targetFn = runtime->lookupFunction(0x202E38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190118u; }
        if (ctx->pc != 0x190118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00202E38_0x202e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190118u; }
        if (ctx->pc != 0x190118u) { return; }
    }
    ctx->pc = 0x190118u;
    // 0x190118: 0x8e260050  lw          $a2, 0x50($s1)
    ctx->pc = 0x190118u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x19011c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19011cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190120: 0xc080e6a  jal         func_2039A8
    ctx->pc = 0x190120u;
    SET_GPR_U32(ctx, 31, 0x190128u);
    ctx->pc = 0x190124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190120u;
            // 0x190124: 0x8e25004c  lw          $a1, 0x4C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2039A8u;
    if (runtime->hasFunction(0x2039A8u)) {
        auto targetFn = runtime->lookupFunction(0x2039A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190128u; }
        if (ctx->pc != 0x190128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002039A8_0x2039a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190128u; }
        if (ctx->pc != 0x190128u) { return; }
    }
    ctx->pc = 0x190128u;
label_190128:
    // 0x190128: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x190128u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19012c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x19012cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190130: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x190130u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190134: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x190134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190138: 0x3e00008  jr          $ra
    ctx->pc = 0x190138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19013Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190138u;
            // 0x19013c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x190128u: goto label_190128;
            default: break;
        }
        return;
    }
    ctx->pc = 0x190140u;
}
