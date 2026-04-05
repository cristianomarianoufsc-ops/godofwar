#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1f63a8
// Address: 0x1f63a8 - 0x1f63e8
void entry_1f63a8_0x1f63e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1f63a8_0x1f63e8");
#endif

    ctx->pc = 0x1f63a8u;

    // 0x1f63a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f63a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f63ac: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x1f63acu;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x1f63b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f63b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f63b4: 0x8c8200cc  lw          $v0, 0xCC($a0)
    ctx->pc = 0x1f63b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
    // 0x1f63b8: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x1f63b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1f63bc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1f63bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f63c0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F63C0u;
    {
        const bool branch_taken_0x1f63c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f63c0) {
            ctx->pc = 0x1F63C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F63C0u;
            // 0x1f63c4: 0xc44c001c  lwc1        $f12, 0x1C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F63C8u;
            goto label_1f63c8;
        }
    }
    ctx->pc = 0x1F63C8u;
label_1f63c8:
    // 0x1f63c8: 0x8c8500bc  lw          $a1, 0xBC($a0)
    ctx->pc = 0x1f63c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x1f63cc: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x1f63ccu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1f63d0: 0xc04018a  jal         func_100628
    ctx->pc = 0x1F63D0u;
    SET_GPR_U32(ctx, 31, 0x1F63D8u);
    ctx->pc = 0x1F63D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F63D0u;
            // 0x1f63d4: 0x8c8400ac  lw          $a0, 0xAC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100628u;
    if (runtime->hasFunction(0x100628u)) {
        auto targetFn = runtime->lookupFunction(0x100628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F63D8u; }
        if (ctx->pc != 0x1F63D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100628_0x100628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F63D8u; }
        if (ctx->pc != 0x1F63D8u) { return; }
    }
    ctx->pc = 0x1F63D8u;
    // 0x1f63d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f63d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f63dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F63DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F63E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F63DCu;
            // 0x1f63e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F63C8u: goto label_1f63c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F63E4u;
    // 0x1f63e4: 0x0  nop
    ctx->pc = 0x1f63e4u;
    // NOP
}
