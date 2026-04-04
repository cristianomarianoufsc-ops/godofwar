#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002019D8
// Address: 0x2019d8 - 0x201a18
void sub_002019D8_0x2019d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002019D8_0x2019d8");
#endif

    ctx->pc = 0x2019d8u;

    // 0x2019d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2019d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2019dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2019dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2019e0: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x2019e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x2019e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2019e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2019e8: 0x8e023484  lw          $v0, 0x3484($s0)
    ctx->pc = 0x2019e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13444)));
    // 0x2019ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2019ECu;
    {
        const bool branch_taken_0x2019ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2019ec) {
            ctx->pc = 0x201A00u;
            goto label_201a00;
        }
    }
    ctx->pc = 0x2019F4u;
    // 0x2019f4: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x2019F4u;
    SET_GPR_U32(ctx, 31, 0x2019FCu);
    ctx->pc = 0x2019F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2019F4u;
            // 0x2019f8: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2019FCu; }
        if (ctx->pc != 0x2019FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2019FCu; }
        if (ctx->pc != 0x2019FCu) { return; }
    }
    ctx->pc = 0x2019FCu;
    // 0x2019fc: 0xae023484  sw          $v0, 0x3484($s0)
    ctx->pc = 0x2019fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13444), GPR_U32(ctx, 2));
label_201a00:
    // 0x201a00: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x201A00u;
    SET_GPR_U32(ctx, 31, 0x201A08u);
    ctx->pc = 0x201A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201A00u;
            // 0x201a04: 0x8e043484  lw          $a0, 0x3484($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13444)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201A08u; }
        if (ctx->pc != 0x201A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201A08u; }
        if (ctx->pc != 0x201A08u) { return; }
    }
    ctx->pc = 0x201A08u;
    // 0x201a08: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x201a08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201a0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201a10: 0x3e00008  jr          $ra
    ctx->pc = 0x201A10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201A10u;
            // 0x201a14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x201A00u: goto label_201a00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x201A18u;
}
