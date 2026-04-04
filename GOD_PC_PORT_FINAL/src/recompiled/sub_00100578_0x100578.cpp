#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00100578
// Address: 0x100578 - 0x1005d0
void sub_00100578_0x100578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100578_0x100578");
#endif

    ctx->pc = 0x100578u;

    // 0x100578: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x100578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10057c: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x10057cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x100580: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x100580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x100584: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x100584u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x100588: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x100588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x10058c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x10058cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x100590: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x100590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x100594: 0x1044000a  beq         $v0, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x100594u;
    {
        const bool branch_taken_0x100594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x100598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100594u;
            // 0x100598: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100594) {
            ctx->pc = 0x1005C0u;
            goto label_1005c0;
        }
    }
    ctx->pc = 0x10059Cu;
    // 0x10059c: 0x0  nop
    ctx->pc = 0x10059cu;
    // NOP
label_1005a0:
    // 0x1005a0: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1005a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1005a4: 0xc041b22  jal         func_106C88
    ctx->pc = 0x1005A4u;
    SET_GPR_U32(ctx, 31, 0x1005ACu);
    ctx->pc = 0x1005A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1005A4u;
            // 0x1005a8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x106C88u;
    if (runtime->hasFunction(0x106C88u)) {
        auto targetFn = runtime->lookupFunction(0x106C88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1005ACu; }
        if (ctx->pc != 0x1005ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106C88_0x106c88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1005ACu; }
        if (ctx->pc != 0x1005ACu) { return; }
    }
    ctx->pc = 0x1005ACu;
    // 0x1005ac: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1005acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1005b0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1005b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1005b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1005b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1005b8: 0x1443fff9  bne         $v0, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1005B8u;
    {
        const bool branch_taken_0x1005b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1005BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1005B8u;
            // 0x1005bc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1005b8) {
            ctx->pc = 0x1005A0u;
            runtime->cooperativeGuestYield();
            goto label_1005a0;
        }
    }
    ctx->pc = 0x1005C0u;
label_1005c0:
    // 0x1005c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1005c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1005c4: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1005c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1005c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1005C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1005CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1005C8u;
            // 0x1005cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1005A0u: goto label_1005a0;
            case 0x1005C0u: goto label_1005c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1005D0u;
}
