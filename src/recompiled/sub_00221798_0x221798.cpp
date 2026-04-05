#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00221798
// Address: 0x221798 - 0x2217d8
void sub_00221798_0x221798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221798_0x221798");
#endif

    ctx->pc = 0x221798u;

    // 0x221798: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x221798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22179c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22179cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2217a0: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x2217a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x2217a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2217a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2217a8: 0x8e023508  lw          $v0, 0x3508($s0)
    ctx->pc = 0x2217a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13576)));
    // 0x2217ac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2217ACu;
    {
        const bool branch_taken_0x2217ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2217ac) {
            ctx->pc = 0x2217C0u;
            goto label_2217c0;
        }
    }
    ctx->pc = 0x2217B4u;
    // 0x2217b4: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x2217B4u;
    SET_GPR_U32(ctx, 31, 0x2217BCu);
    ctx->pc = 0x2217B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2217B4u;
            // 0x2217b8: 0x24040048  addiu       $a0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2217BCu; }
        if (ctx->pc != 0x2217BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2217BCu; }
        if (ctx->pc != 0x2217BCu) { return; }
    }
    ctx->pc = 0x2217BCu;
    // 0x2217bc: 0xae023508  sw          $v0, 0x3508($s0)
    ctx->pc = 0x2217bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13576), GPR_U32(ctx, 2));
label_2217c0:
    // 0x2217c0: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x2217C0u;
    SET_GPR_U32(ctx, 31, 0x2217C8u);
    ctx->pc = 0x2217C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2217C0u;
            // 0x2217c4: 0x8e043508  lw          $a0, 0x3508($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13576)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2217C8u; }
        if (ctx->pc != 0x2217C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2217C8u; }
        if (ctx->pc != 0x2217C8u) { return; }
    }
    ctx->pc = 0x2217C8u;
    // 0x2217c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2217c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2217cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2217ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2217d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2217D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2217D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2217D0u;
            // 0x2217d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2217C0u: goto label_2217c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2217D8u;
}
