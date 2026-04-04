#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_195670
// Address: 0x195670 - 0x1956b8
void entry_195670_0x1956b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_195670_0x1956b8");
#endif

    ctx->pc = 0x195670u;

    // 0x195670: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x195670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x195674: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x195674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x195678: 0xc460c948  lwc1        $f0, -0x36B8($v1)
    ctx->pc = 0x195678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294953288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19567c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19567cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x195680: 0xc442c658  lwc1        $f2, -0x39A8($v0)
    ctx->pc = 0x195680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x195684: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x195684u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x195688: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x195688u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x19568c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19568cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x195690: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x195690u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x195694: 0x0  nop
    ctx->pc = 0x195694u;
    // NOP
    // 0x195698: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x195698u;
    {
        const bool branch_taken_0x195698 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19569Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195698u;
            // 0x19569c: 0xe460c948  swc1        $f0, -0x36B8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294953288), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x195698) {
            ctx->pc = 0x1956A8u;
            goto label_1956a8;
        }
    }
    ctx->pc = 0x1956A0u;
    // 0x1956a0: 0xc065564  jal         func_195590
    ctx->pc = 0x1956A0u;
    SET_GPR_U32(ctx, 31, 0x1956A8u);
    ctx->pc = 0x195590u;
    if (runtime->hasFunction(0x195590u)) {
        auto targetFn = runtime->lookupFunction(0x195590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1956A8u; }
        if (ctx->pc != 0x1956A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_195590_0x195670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1956A8u; }
        if (ctx->pc != 0x1956A8u) { return; }
    }
    ctx->pc = 0x1956A8u;
label_1956a8:
    // 0x1956a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1956a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1956ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1956ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1956B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1956ACu;
            // 0x1956b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1956A8u: goto label_1956a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1956B4u;
    // 0x1956b4: 0x0  nop
    ctx->pc = 0x1956b4u;
    // NOP
}
