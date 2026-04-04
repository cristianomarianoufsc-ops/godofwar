#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00100BF0
// Address: 0x100bf0 - 0x100c50
void sub_00100BF0_0x100bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100BF0_0x100bf0");
#endif

    ctx->pc = 0x100bf0u;

    // 0x100bf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x100bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x100bf4: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x100bf4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x100bf8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x100bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x100bfc: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x100bfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x100c00: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x100c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x100c04: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x100c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x100c08: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x100c08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x100c0c: 0x1044000a  beq         $v0, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x100C0Cu;
    {
        const bool branch_taken_0x100c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x100C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100C0Cu;
            // 0x100c10: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100c0c) {
            ctx->pc = 0x100C38u;
            goto label_100c38;
        }
    }
    ctx->pc = 0x100C14u;
    // 0x100c14: 0x0  nop
    ctx->pc = 0x100c14u;
    // NOP
label_100c18:
    // 0x100c18: 0xc04228c  jal         func_108A30
    ctx->pc = 0x100C18u;
    SET_GPR_U32(ctx, 31, 0x100C20u);
    ctx->pc = 0x100C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100C18u;
            // 0x100c1c: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108A30u;
    if (runtime->hasFunction(0x108A30u)) {
        auto targetFn = runtime->lookupFunction(0x108A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100C20u; }
        if (ctx->pc != 0x100C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_108a30_0x108a88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100C20u; }
        if (ctx->pc != 0x100C20u) { return; }
    }
    ctx->pc = 0x100C20u;
    // 0x100c20: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x100c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x100c24: 0x46140528  max.s       $f20, $f0, $f20
    ctx->pc = 0x100c24u;
    ctx->f[20] = std::max(ctx->f[0], ctx->f[20]);
    // 0x100c28: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x100c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100c2c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x100c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x100c30: 0x1443fff9  bne         $v0, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x100C30u;
    {
        const bool branch_taken_0x100c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x100C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100C30u;
            // 0x100c34: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100c30) {
            ctx->pc = 0x100C18u;
            runtime->cooperativeGuestYield();
            goto label_100c18;
        }
    }
    ctx->pc = 0x100C38u;
label_100c38:
    // 0x100c38: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x100c38u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x100c3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x100c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100c40: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x100c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x100c44: 0x3e00008  jr          $ra
    ctx->pc = 0x100C44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100C44u;
            // 0x100c48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x100C18u: goto label_100c18;
            case 0x100C38u: goto label_100c38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x100C4Cu;
    // 0x100c4c: 0x0  nop
    ctx->pc = 0x100c4cu;
    // NOP
}
