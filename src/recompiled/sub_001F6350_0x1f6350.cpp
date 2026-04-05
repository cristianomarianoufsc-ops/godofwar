#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F6350
// Address: 0x1f6350 - 0x1f63a8
void sub_001F6350_0x1f6350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F6350_0x1f6350");
#endif

    ctx->pc = 0x1f6350u;

    // 0x1f6350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f6350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f6354: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f6354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1f6358: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1f6358u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x1f635c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f635cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f6360: 0x8e02e398  lw          $v0, -0x1C68($s0)
    ctx->pc = 0x1f6360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960024)));
    // 0x1f6364: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1F6364u;
    {
        const bool branch_taken_0x1f6364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f6364) {
            ctx->pc = 0x1F6368u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6364u;
            // 0x1f6368: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F6394u;
            goto label_1f6394;
        }
    }
    ctx->pc = 0x1F636Cu;
    // 0x1f636c: 0xc06f9a8  jal         func_1BE6A0
    ctx->pc = 0x1F636Cu;
    SET_GPR_U32(ctx, 31, 0x1F6374u);
    ctx->pc = 0x1BE6A0u;
    if (runtime->hasFunction(0x1BE6A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6374u; }
        if (ctx->pc != 0x1F6374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE6A0_0x1be6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6374u; }
        if (ctx->pc != 0x1F6374u) { return; }
    }
    ctx->pc = 0x1F6374u;
    // 0x1f6374: 0x8c440074  lw          $a0, 0x74($v0)
    ctx->pc = 0x1f6374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x1f6378: 0x240500f0  addiu       $a1, $zero, 0xF0
    ctx->pc = 0x1f6378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x1f637c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1f637cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1f6380: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x1f6380u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f6384: 0xc04f644  jal         func_13D910
    ctx->pc = 0x1F6384u;
    SET_GPR_U32(ctx, 31, 0x1F638Cu);
    ctx->pc = 0x1F6388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6384u;
            // 0x1f6388: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D910u;
    if (runtime->hasFunction(0x13D910u)) {
        auto targetFn = runtime->lookupFunction(0x13D910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F638Cu; }
        if (ctx->pc != 0x1F638Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D910_0x13d910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F638Cu; }
        if (ctx->pc != 0x1F638Cu) { return; }
    }
    ctx->pc = 0x1F638Cu;
    // 0x1f638c: 0xae02e398  sw          $v0, -0x1C68($s0)
    ctx->pc = 0x1f638cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294960024), GPR_U32(ctx, 2));
    // 0x1f6390: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f6390u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f6394:
    // 0x1f6394: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f6394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6398: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6398u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F639Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6398u;
            // 0x1f639c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F6394u: goto label_1f6394;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F63A0u;
    // 0x1f63a0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1f63a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f63a4: 0x0  nop
    ctx->pc = 0x1f63a4u;
    // NOP
}
