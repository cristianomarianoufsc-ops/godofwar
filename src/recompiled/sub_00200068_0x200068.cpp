#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00200068
// Address: 0x200068 - 0x2000a8
void sub_00200068_0x200068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200068_0x200068");
#endif

    ctx->pc = 0x200068u;

    // 0x200068: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x200068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20006c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20006cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x200070: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x200070u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x200074: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x200074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x200078: 0x8e023480  lw          $v0, 0x3480($s0)
    ctx->pc = 0x200078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13440)));
    // 0x20007c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20007Cu;
    {
        const bool branch_taken_0x20007c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20007c) {
            ctx->pc = 0x200090u;
            goto label_200090;
        }
    }
    ctx->pc = 0x200084u;
    // 0x200084: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x200084u;
    SET_GPR_U32(ctx, 31, 0x20008Cu);
    ctx->pc = 0x200088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200084u;
            // 0x200088: 0x24040140  addiu       $a0, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20008Cu; }
        if (ctx->pc != 0x20008Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20008Cu; }
        if (ctx->pc != 0x20008Cu) { return; }
    }
    ctx->pc = 0x20008Cu;
    // 0x20008c: 0xae023480  sw          $v0, 0x3480($s0)
    ctx->pc = 0x20008cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13440), GPR_U32(ctx, 2));
label_200090:
    // 0x200090: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x200090u;
    SET_GPR_U32(ctx, 31, 0x200098u);
    ctx->pc = 0x200094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200090u;
            // 0x200094: 0x8e043480  lw          $a0, 0x3480($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13440)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200098u; }
        if (ctx->pc != 0x200098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200098u; }
        if (ctx->pc != 0x200098u) { return; }
    }
    ctx->pc = 0x200098u;
    // 0x200098: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x200098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20009c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20009cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2000a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2000A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2000A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2000A0u;
            // 0x2000a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x200090u: goto label_200090;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2000A8u;
}
