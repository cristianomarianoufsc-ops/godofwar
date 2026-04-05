#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00214348
// Address: 0x214348 - 0x214388
void sub_00214348_0x214348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214348_0x214348");
#endif

    ctx->pc = 0x214348u;

    // 0x214348: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x214348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21434c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x21434cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x214350: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x214350u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x214354: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x214354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x214358: 0x8e0234a8  lw          $v0, 0x34A8($s0)
    ctx->pc = 0x214358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13480)));
    // 0x21435c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21435Cu;
    {
        const bool branch_taken_0x21435c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21435c) {
            ctx->pc = 0x214370u;
            goto label_214370;
        }
    }
    ctx->pc = 0x214364u;
    // 0x214364: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x214364u;
    SET_GPR_U32(ctx, 31, 0x21436Cu);
    ctx->pc = 0x214368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214364u;
            // 0x214368: 0x240400bc  addiu       $a0, $zero, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21436Cu; }
        if (ctx->pc != 0x21436Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21436Cu; }
        if (ctx->pc != 0x21436Cu) { return; }
    }
    ctx->pc = 0x21436Cu;
    // 0x21436c: 0xae0234a8  sw          $v0, 0x34A8($s0)
    ctx->pc = 0x21436cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13480), GPR_U32(ctx, 2));
label_214370:
    // 0x214370: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x214370u;
    SET_GPR_U32(ctx, 31, 0x214378u);
    ctx->pc = 0x214374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214370u;
            // 0x214374: 0x8e0434a8  lw          $a0, 0x34A8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13480)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214378u; }
        if (ctx->pc != 0x214378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214378u; }
        if (ctx->pc != 0x214378u) { return; }
    }
    ctx->pc = 0x214378u;
    // 0x214378: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x214378u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21437c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21437cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214380: 0x3e00008  jr          $ra
    ctx->pc = 0x214380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214380u;
            // 0x214384: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x214370u: goto label_214370;
            default: break;
        }
        return;
    }
    ctx->pc = 0x214388u;
}
