#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017DA78
// Address: 0x17da78 - 0x17db30
void sub_0017DA78_0x17da78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017DA78_0x17da78");
#endif

    ctx->pc = 0x17da78u;

    // 0x17da78: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x17da78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x17da7c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x17da7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x17da80: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x17da80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x17da84: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x17da84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17da88: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x17da88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x17da8c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x17da8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17da90: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x17da90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17da94: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x17da94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x17da98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17da98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17da9c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x17da9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17daa0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17daa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17daa4: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x17DAA4u;
    SET_GPR_U32(ctx, 31, 0x17DAACu);
    ctx->pc = 0x17DAA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DAA4u;
            // 0x17daa8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DAACu; }
        if (ctx->pc != 0x17DAACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DAACu; }
        if (ctx->pc != 0x17DAACu) { return; }
    }
    ctx->pc = 0x17DAACu;
    // 0x17daac: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x17daacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x17dab0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17DAB0u;
    {
        const bool branch_taken_0x17dab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DAB0u;
            // 0x17dab4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dab0) {
            ctx->pc = 0x17DAC0u;
            goto label_17dac0;
        }
    }
    ctx->pc = 0x17DAB8u;
label_17dab8:
    // 0x17dab8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x17dab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x17dabc: 0x34710001  ori         $s1, $v1, 0x1
    ctx->pc = 0x17dabcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_17dac0:
    // 0x17dac0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x17dac0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x17dac4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x17dac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x17dac8: 0x0  nop
    ctx->pc = 0x17dac8u;
    // NOP
    // 0x17dacc: 0x1602fffa  bne         $s0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17DACCu;
    {
        const bool branch_taken_0x17dacc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x17DAD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DACCu;
            // 0x17dad0: 0x111840  sll         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dacc) {
            ctx->pc = 0x17DAB8u;
            runtime->cooperativeGuestYield();
            goto label_17dab8;
        }
    }
    ctx->pc = 0x17DAD4u;
    // 0x17dad4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x17dad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17dad8: 0x2518804  sllv        $s1, $s1, $s2
    ctx->pc = 0x17dad8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 18) & 0x1F));
    // 0x17dadc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x17dadcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17dae0: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x17dae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x17dae4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17dae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17dae8: 0x2431806  srlv        $v1, $v1, $s2
    ctx->pc = 0x17dae8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 18) & 0x1F));
    // 0x17daec: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x17daecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17daf0: 0x731023  subu        $v0, $v1, $s3
    ctx->pc = 0x17daf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x17daf4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x17daf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17daf8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x17daf8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17dafc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x17dafcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x17db00: 0x3e00008  jr          $ra
    ctx->pc = 0x17DB00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DB00u;
            // 0x17db04: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17DAB8u: goto label_17dab8;
            case 0x17DAC0u: goto label_17dac0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17DB08u;
    // 0x17db08: 0x3e00008  jr          $ra
    ctx->pc = 0x17DB08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17DAB8u: goto label_17dab8;
            case 0x17DAC0u: goto label_17dac0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17DB10u;
    // 0x17db10: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x17db10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17db14: 0x0  nop
    ctx->pc = 0x17db14u;
    // NOP
    // 0x17db18: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x17db18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17db1c: 0x0  nop
    ctx->pc = 0x17db1cu;
    // NOP
    // 0x17db20: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x17db20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17db24: 0x0  nop
    ctx->pc = 0x17db24u;
    // NOP
    // 0x17db28: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x17db28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17db2c: 0x0  nop
    ctx->pc = 0x17db2cu;
    // NOP
}
