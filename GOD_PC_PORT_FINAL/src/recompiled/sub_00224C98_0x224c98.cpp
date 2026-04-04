#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00224C98
// Address: 0x224c98 - 0x224d10
void sub_00224C98_0x224c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224C98_0x224c98");
#endif

    ctx->pc = 0x224c98u;

    // 0x224c98: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x224c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x224c9c: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x224c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x224ca0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x224ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x224ca4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x224ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x224ca8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x224ca8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224cac: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x224cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x224cb0: 0x2452b950  addiu       $s2, $v0, -0x46B0
    ctx->pc = 0x224cb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949200));
    // 0x224cb4: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x224cb4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x224cb8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x224cb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224cbc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x224cbcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x224cc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x224cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x224cc4: 0xc04f970  jal         func_13E5C0
    ctx->pc = 0x224CC4u;
    SET_GPR_U32(ctx, 31, 0x224CCCu);
    ctx->pc = 0x224CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224CC4u;
            // 0x224cc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E5C0u;
    if (runtime->hasFunction(0x13E5C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224CCCu; }
        if (ctx->pc != 0x224CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e5c0_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224CCCu; }
        if (ctx->pc != 0x224CCCu) { return; }
    }
    ctx->pc = 0x224CCCu;
    // 0x224ccc: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x224cccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224cd0: 0x0  nop
    ctx->pc = 0x224cd0u;
    // NOP
    // 0x224cd4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x224CD4u;
    {
        const bool branch_taken_0x224cd4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x224CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224CD4u;
            // 0x224cd8: 0x2112823  subu        $a1, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224cd4) {
            ctx->pc = 0x224CF0u;
            goto label_224cf0;
        }
    }
    ctx->pc = 0x224CDCu;
    // 0x224cdc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x224cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224ce0: 0xc04f99c  jal         func_13E670
    ctx->pc = 0x224CE0u;
    SET_GPR_U32(ctx, 31, 0x224CE8u);
    ctx->pc = 0x224CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224CE0u;
            // 0x224ce4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E670u;
    if (runtime->hasFunction(0x13E670u)) {
        auto targetFn = runtime->lookupFunction(0x13E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224CE8u; }
        if (ctx->pc != 0x224CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E670_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224CE8u; }
        if (ctx->pc != 0x224CE8u) { return; }
    }
    ctx->pc = 0x224CE8u;
    // 0x224ce8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x224CE8u;
    {
        const bool branch_taken_0x224ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224CE8u;
            // 0x224cec: 0x2221021  addu        $v0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224ce8) {
            ctx->pc = 0x224CF4u;
            goto label_224cf4;
        }
    }
    ctx->pc = 0x224CF0u;
label_224cf0:
    // 0x224cf0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x224cf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_224cf4:
    // 0x224cf4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x224cf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x224cf8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x224cf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x224cfc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x224cfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224d00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x224d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224d04: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x224d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x224d08: 0x3e00008  jr          $ra
    ctx->pc = 0x224D08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224D08u;
            // 0x224d0c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x224CF0u: goto label_224cf0;
            case 0x224CF4u: goto label_224cf4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x224D10u;
}
