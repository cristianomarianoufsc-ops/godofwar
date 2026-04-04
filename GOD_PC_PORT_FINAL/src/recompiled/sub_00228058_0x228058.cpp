#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00228058
// Address: 0x228058 - 0x2280a8
void sub_00228058_0x228058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228058_0x228058");
#endif

    ctx->pc = 0x228058u;

    // 0x228058: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x228058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22805c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22805cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x228060: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x228060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x228064: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x228064u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228068: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x228068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x22806c: 0x8c4411b8  lw          $a0, 0x11B8($v0)
    ctx->pc = 0x22806cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4536)));
    // 0x228070: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x228070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x228074: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x228074u;
    SET_GPR_U32(ctx, 31, 0x22807Cu);
    ctx->pc = 0x228078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228074u;
            // 0x228078: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22807Cu; }
        if (ctx->pc != 0x22807Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22807Cu; }
        if (ctx->pc != 0x22807Cu) { return; }
    }
    ctx->pc = 0x22807Cu;
    // 0x22807c: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x22807cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x228080: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x228080u;
    {
        const bool branch_taken_0x228080 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x228084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228080u;
            // 0x228084: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228080) {
            ctx->pc = 0x228094u;
            goto label_228094;
        }
    }
    ctx->pc = 0x228088u;
    // 0x228088: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x228088u;
    SET_GPR_U32(ctx, 31, 0x228090u);
    ctx->pc = 0x22808Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228088u;
            // 0x22808c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228090u; }
        if (ctx->pc != 0x228090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228090u; }
        if (ctx->pc != 0x228090u) { return; }
    }
    ctx->pc = 0x228090u;
    // 0x228090: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x228090u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_228094:
    // 0x228094: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x228094u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228098: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x228098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22809c: 0x3e00008  jr          $ra
    ctx->pc = 0x22809Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2280A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22809Cu;
            // 0x2280a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x228094u: goto label_228094;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2280A4u;
    // 0x2280a4: 0x0  nop
    ctx->pc = 0x2280a4u;
    // NOP
}
