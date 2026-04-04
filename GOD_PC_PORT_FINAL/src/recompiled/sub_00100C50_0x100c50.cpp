#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00100C50
// Address: 0x100c50 - 0x100cb0
void sub_00100C50_0x100c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100C50_0x100c50");
#endif

    ctx->pc = 0x100c50u;

    // 0x100c50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x100c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x100c54: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x100c54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x100c58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x100c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x100c5c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x100c5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x100c60: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x100c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x100c64: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x100c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x100c68: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x100c68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x100c6c: 0x1044000a  beq         $v0, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x100C6Cu;
    {
        const bool branch_taken_0x100c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x100C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100C6Cu;
            // 0x100c70: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100c6c) {
            ctx->pc = 0x100C98u;
            goto label_100c98;
        }
    }
    ctx->pc = 0x100C74u;
    // 0x100c74: 0x0  nop
    ctx->pc = 0x100c74u;
    // NOP
label_100c78:
    // 0x100c78: 0xc042276  jal         func_1089D8
    ctx->pc = 0x100C78u;
    SET_GPR_U32(ctx, 31, 0x100C80u);
    ctx->pc = 0x100C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100C78u;
            // 0x100c7c: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1089D8u;
    if (runtime->hasFunction(0x1089D8u)) {
        auto targetFn = runtime->lookupFunction(0x1089D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100C80u; }
        if (ctx->pc != 0x100C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1089d8_0x108a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100C80u; }
        if (ctx->pc != 0x100C80u) { return; }
    }
    ctx->pc = 0x100C80u;
    // 0x100c80: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x100c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x100c84: 0x46140528  max.s       $f20, $f0, $f20
    ctx->pc = 0x100c84u;
    ctx->f[20] = std::max(ctx->f[0], ctx->f[20]);
    // 0x100c88: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x100c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100c8c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x100c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x100c90: 0x1443fff9  bne         $v0, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x100C90u;
    {
        const bool branch_taken_0x100c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x100C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100C90u;
            // 0x100c94: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100c90) {
            ctx->pc = 0x100C78u;
            runtime->cooperativeGuestYield();
            goto label_100c78;
        }
    }
    ctx->pc = 0x100C98u;
label_100c98:
    // 0x100c98: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x100c98u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x100c9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x100c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100ca0: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x100ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x100ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x100CA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100CA4u;
            // 0x100ca8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x100C78u: goto label_100c78;
            case 0x100C98u: goto label_100c98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x100CACu;
    // 0x100cac: 0x0  nop
    ctx->pc = 0x100cacu;
    // NOP
}
