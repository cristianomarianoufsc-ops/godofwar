#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00100AB8
// Address: 0x100ab8 - 0x100b20
void sub_00100AB8_0x100ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100AB8_0x100ab8");
#endif

    ctx->pc = 0x100ab8u;

    // 0x100ab8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x100ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x100abc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x100abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x100ac0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x100ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x100ac4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x100ac4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100ac8: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x100ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x100acc: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x100accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x100ad0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x100ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x100ad4: 0x1044000a  beq         $v0, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x100AD4u;
    {
        const bool branch_taken_0x100ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x100AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100AD4u;
            // 0x100ad8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100ad4) {
            ctx->pc = 0x100B00u;
            goto label_100b00;
        }
    }
    ctx->pc = 0x100ADCu;
    // 0x100adc: 0x0  nop
    ctx->pc = 0x100adcu;
    // NOP
label_100ae0:
    // 0x100ae0: 0xc041d4e  jal         func_107538
    ctx->pc = 0x100AE0u;
    SET_GPR_U32(ctx, 31, 0x100AE8u);
    ctx->pc = 0x100AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100AE0u;
            // 0x100ae4: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107538u;
    if (runtime->hasFunction(0x107538u)) {
        auto targetFn = runtime->lookupFunction(0x107538u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100AE8u; }
        if (ctx->pc != 0x100AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_107538_0x107598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100AE8u; }
        if (ctx->pc != 0x100AE8u) { return; }
    }
    ctx->pc = 0x100AE8u;
    // 0x100ae8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x100ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x100aec: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x100aecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x100af0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x100af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100af4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x100af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x100af8: 0x1444fff9  bne         $v0, $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x100AF8u;
    {
        const bool branch_taken_0x100af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x100AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100AF8u;
            // 0x100afc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100af8) {
            ctx->pc = 0x100AE0u;
            runtime->cooperativeGuestYield();
            goto label_100ae0;
        }
    }
    ctx->pc = 0x100B00u;
label_100b00:
    // 0x100b00: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x100b00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100b04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x100b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100b08: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x100b08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x100b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x100B0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100B0Cu;
            // 0x100b10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x100AE0u: goto label_100ae0;
            case 0x100B00u: goto label_100b00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x100B14u;
    // 0x100b14: 0x0  nop
    ctx->pc = 0x100b14u;
    // NOP
    // 0x100b18: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x100b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x100b1c: 0x0  nop
    ctx->pc = 0x100b1cu;
    // NOP
}
