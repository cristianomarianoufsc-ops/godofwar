#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00212908
// Address: 0x212908 - 0x212948
void sub_00212908_0x212908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212908_0x212908");
#endif

    ctx->pc = 0x212908u;

    // 0x212908: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x212908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21290c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x21290cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x212910: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x212910u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x212914: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x212914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x212918: 0x8e0234a4  lw          $v0, 0x34A4($s0)
    ctx->pc = 0x212918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13476)));
    // 0x21291c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21291Cu;
    {
        const bool branch_taken_0x21291c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21291c) {
            ctx->pc = 0x212930u;
            goto label_212930;
        }
    }
    ctx->pc = 0x212924u;
    // 0x212924: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x212924u;
    SET_GPR_U32(ctx, 31, 0x21292Cu);
    ctx->pc = 0x212928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212924u;
            // 0x212928: 0x24040174  addiu       $a0, $zero, 0x174 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 372));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21292Cu; }
        if (ctx->pc != 0x21292Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21292Cu; }
        if (ctx->pc != 0x21292Cu) { return; }
    }
    ctx->pc = 0x21292Cu;
    // 0x21292c: 0xae0234a4  sw          $v0, 0x34A4($s0)
    ctx->pc = 0x21292cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13476), GPR_U32(ctx, 2));
label_212930:
    // 0x212930: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x212930u;
    SET_GPR_U32(ctx, 31, 0x212938u);
    ctx->pc = 0x212934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212930u;
            // 0x212934: 0x8e0434a4  lw          $a0, 0x34A4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13476)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212938u; }
        if (ctx->pc != 0x212938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212938u; }
        if (ctx->pc != 0x212938u) { return; }
    }
    ctx->pc = 0x212938u;
    // 0x212938: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x212938u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21293c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21293cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212940: 0x3e00008  jr          $ra
    ctx->pc = 0x212940u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212940u;
            // 0x212944: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x212930u: goto label_212930;
            default: break;
        }
        return;
    }
    ctx->pc = 0x212948u;
}
