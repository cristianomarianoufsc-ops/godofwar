#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BF758
// Address: 0x1bf758 - 0x1bf7b0
void sub_001BF758_0x1bf758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BF758_0x1bf758");
#endif

    ctx->pc = 0x1bf758u;

    // 0x1bf758: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bf758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bf75c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1bf75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1bf760: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1bf760u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x1bf764: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bf764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bf768: 0x8e02ccb8  lw          $v0, -0x3348($s0)
    ctx->pc = 0x1bf768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954168)));
    // 0x1bf76c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1BF76Cu;
    {
        const bool branch_taken_0x1bf76c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf76c) {
            ctx->pc = 0x1BF770u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF76Cu;
            // 0x1bf770: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BF79Cu;
            goto label_1bf79c;
        }
    }
    ctx->pc = 0x1BF774u;
    // 0x1bf774: 0xc06f9a8  jal         func_1BE6A0
    ctx->pc = 0x1BF774u;
    SET_GPR_U32(ctx, 31, 0x1BF77Cu);
    ctx->pc = 0x1BE6A0u;
    if (runtime->hasFunction(0x1BE6A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF77Cu; }
        if (ctx->pc != 0x1BF77Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE6A0_0x1be6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF77Cu; }
        if (ctx->pc != 0x1BF77Cu) { return; }
    }
    ctx->pc = 0x1BF77Cu;
    // 0x1bf77c: 0x8c440074  lw          $a0, 0x74($v0)
    ctx->pc = 0x1bf77cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x1bf780: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x1bf780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1bf784: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bf784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf788: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bf788u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf78c: 0xc04f644  jal         func_13D910
    ctx->pc = 0x1BF78Cu;
    SET_GPR_U32(ctx, 31, 0x1BF794u);
    ctx->pc = 0x1BF790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF78Cu;
            // 0x1bf790: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D910u;
    if (runtime->hasFunction(0x13D910u)) {
        auto targetFn = runtime->lookupFunction(0x13D910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF794u; }
        if (ctx->pc != 0x1BF794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D910_0x13d910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF794u; }
        if (ctx->pc != 0x1BF794u) { return; }
    }
    ctx->pc = 0x1BF794u;
    // 0x1bf794: 0xae02ccb8  sw          $v0, -0x3348($s0)
    ctx->pc = 0x1bf794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294954168), GPR_U32(ctx, 2));
    // 0x1bf798: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1bf798u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bf79c:
    // 0x1bf79c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bf79cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bf7a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF7A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF7A0u;
            // 0x1bf7a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BF79Cu: goto label_1bf79c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BF7A8u;
    // 0x1bf7a8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1bf7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1bf7ac: 0x0  nop
    ctx->pc = 0x1bf7acu;
    // NOP
}
