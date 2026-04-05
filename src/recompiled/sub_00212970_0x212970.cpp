#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00212970
// Address: 0x212970 - 0x2129b0
void sub_00212970_0x212970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212970_0x212970");
#endif

    ctx->pc = 0x212970u;

    // 0x212970: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x212970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x212974: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x212974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x212978: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x212978u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x21297c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21297cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x212980: 0x8e02e468  lw          $v0, -0x1B98($s0)
    ctx->pc = 0x212980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960232)));
    // 0x212984: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x212984u;
    {
        const bool branch_taken_0x212984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x212984) {
            ctx->pc = 0x212994u;
            goto label_212994;
        }
    }
    ctx->pc = 0x21298Cu;
    // 0x21298c: 0xc084a76  jal         func_2129D8
    ctx->pc = 0x21298Cu;
    SET_GPR_U32(ctx, 31, 0x212994u);
    ctx->pc = 0x2129D8u;
    if (runtime->hasFunction(0x2129D8u)) {
        auto targetFn = runtime->lookupFunction(0x2129D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212994u; }
        if (ctx->pc != 0x212994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002129D8_0x2129d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212994u; }
        if (ctx->pc != 0x212994u) { return; }
    }
    ctx->pc = 0x212994u;
label_212994:
    // 0x212994: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x212994u;
    SET_GPR_U32(ctx, 31, 0x21299Cu);
    ctx->pc = 0x212998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212994u;
            // 0x212998: 0x8e04e468  lw          $a0, -0x1B98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960232)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21299Cu; }
        if (ctx->pc != 0x21299Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21299Cu; }
        if (ctx->pc != 0x21299Cu) { return; }
    }
    ctx->pc = 0x21299Cu;
    // 0x21299c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x21299cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2129a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2129a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2129a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2129A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2129A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2129A4u;
            // 0x2129a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x212994u: goto label_212994;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2129ACu;
    // 0x2129ac: 0x0  nop
    ctx->pc = 0x2129acu;
    // NOP
}
