#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A9BD8
// Address: 0x1a9bd8 - 0x1a9c28
void sub_001A9BD8_0x1a9bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9BD8_0x1a9bd8");
#endif

    ctx->pc = 0x1a9bd8u;

    // 0x1a9bd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a9bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a9bdc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a9bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a9be0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a9be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a9be4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a9be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a9be8: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x1a9be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x1a9bec: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A9BECu;
    {
        const bool branch_taken_0x1a9bec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A9BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9BECu;
            // 0x1a9bf0: 0x24900084  addiu       $s0, $a0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9bec) {
            ctx->pc = 0x1A9C14u;
            goto label_1a9c14;
        }
    }
    ctx->pc = 0x1A9BF4u;
    // 0x1a9bf4: 0x8c850058  lw          $a1, 0x58($a0)
    ctx->pc = 0x1a9bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x1a9bf8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a9bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a9bfc: 0xac44cac8  sw          $a0, -0x3538($v0)
    ctx->pc = 0x1a9bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 4));
    // 0x1a9c00: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a9c00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a9c04: 0x24840058  addiu       $a0, $a0, 0x58
    ctx->pc = 0x1a9c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
    // 0x1a9c08: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1A9C08u;
    SET_GPR_U32(ctx, 31, 0x1A9C10u);
    ctx->pc = 0x1A9C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9C08u;
            // 0x1a9c0c: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9C10u; }
        if (ctx->pc != 0x1A9C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9C10u; }
        if (ctx->pc != 0x1A9C10u) { return; }
    }
    ctx->pc = 0x1A9C10u;
    // 0x1a9c10: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1a9c10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1a9c14:
    // 0x1a9c14: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1a9c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a9c18: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a9c18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9c1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a9c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9c20: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9C20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9C20u;
            // 0x1a9c24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A9C14u: goto label_1a9c14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A9C28u;
}
