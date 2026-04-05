#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A14B8
// Address: 0x1a14b8 - 0x1a14f8
void sub_001A14B8_0x1a14b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A14B8_0x1a14b8");
#endif

    ctx->pc = 0x1a14b8u;

    // 0x1a14b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a14b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a14bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a14bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a14c0: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x1a14c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x1a14c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a14c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a14c8: 0x8e02e6ac  lw          $v0, -0x1954($s0)
    ctx->pc = 0x1a14c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960812)));
    // 0x1a14cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A14CCu;
    {
        const bool branch_taken_0x1a14cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a14cc) {
            ctx->pc = 0x1A14E0u;
            goto label_1a14e0;
        }
    }
    ctx->pc = 0x1A14D4u;
    // 0x1a14d4: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x1A14D4u;
    SET_GPR_U32(ctx, 31, 0x1A14DCu);
    ctx->pc = 0x1A14D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A14D4u;
            // 0x1a14d8: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A14DCu; }
        if (ctx->pc != 0x1A14DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A14DCu; }
        if (ctx->pc != 0x1A14DCu) { return; }
    }
    ctx->pc = 0x1A14DCu;
    // 0x1a14dc: 0xae02e6ac  sw          $v0, -0x1954($s0)
    ctx->pc = 0x1a14dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294960812), GPR_U32(ctx, 2));
label_1a14e0:
    // 0x1a14e0: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1A14E0u;
    SET_GPR_U32(ctx, 31, 0x1A14E8u);
    ctx->pc = 0x1A14E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A14E0u;
            // 0x1a14e4: 0x8e04e6ac  lw          $a0, -0x1954($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960812)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A14E8u; }
        if (ctx->pc != 0x1A14E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A14E8u; }
        if (ctx->pc != 0x1A14E8u) { return; }
    }
    ctx->pc = 0x1A14E8u;
    // 0x1a14e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a14e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a14ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a14ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a14f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A14F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A14F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A14F0u;
            // 0x1a14f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A14E0u: goto label_1a14e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A14F8u;
}
