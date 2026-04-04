#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_23dd78
// Address: 0x23dd78 - 0x23ddc8
void entry_23dd78_0x23ddc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_23dd78_0x23ddc8");
#endif

    ctx->pc = 0x23dd78u;

    // 0x23dd78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23dd78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23dd7c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23dd7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x23dd80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23dd80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23dd84: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23dd84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dd88: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23dd88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dd8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23dd8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23dd90: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x23dd90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x23dd94: 0xc08ec42  jal         func_23B108
    ctx->pc = 0x23DD94u;
    SET_GPR_U32(ctx, 31, 0x23DD9Cu);
    ctx->pc = 0x23DD98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23DD94u;
            // 0x23dd98: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B108u;
    if (runtime->hasFunction(0x23B108u)) {
        auto targetFn = runtime->lookupFunction(0x23B108u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DD9Cu; }
        if (ctx->pc != 0x23DD9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023B108_0x23b108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DD9Cu; }
        if (ctx->pc != 0x23DD9Cu) { return; }
    }
    ctx->pc = 0x23DD9Cu;
    // 0x23dd9c: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x23dd9cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x23dda0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23DDA0u;
    {
        const bool branch_taken_0x23dda0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DDA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DDA0u;
            // 0x23dda4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dda0) {
            ctx->pc = 0x23DDB4u;
            goto label_23ddb4;
        }
    }
    ctx->pc = 0x23DDA8u;
    // 0x23dda8: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x23DDA8u;
    SET_GPR_U32(ctx, 31, 0x23DDB0u);
    ctx->pc = 0x23DDACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23DDA8u;
            // 0x23ddac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DDB0u; }
        if (ctx->pc != 0x23DDB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DDB0u; }
        if (ctx->pc != 0x23DDB0u) { return; }
    }
    ctx->pc = 0x23DDB0u;
    // 0x23ddb0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x23ddb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23ddb4:
    // 0x23ddb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23ddb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ddb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23ddb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ddbc: 0x3e00008  jr          $ra
    ctx->pc = 0x23DDBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23DDC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DDBCu;
            // 0x23ddc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23DDB4u: goto label_23ddb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23DDC4u;
    // 0x23ddc4: 0x0  nop
    ctx->pc = 0x23ddc4u;
    // NOP
}
