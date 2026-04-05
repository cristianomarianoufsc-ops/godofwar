#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00138930
// Address: 0x138930 - 0x138978
void sub_00138930_0x138930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00138930_0x138930");
#endif

    ctx->pc = 0x138930u;

    // 0x138930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x138930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x138934: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x138934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x138938: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x138938u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x13893c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13893cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x138940: 0x8e02be10  lw          $v0, -0x41F0($s0)
    ctx->pc = 0x138940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950416)));
    // 0x138944: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x138944u;
    {
        const bool branch_taken_0x138944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x138944) {
            ctx->pc = 0x138948u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x138944u;
            // 0x138948: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13895Cu;
            goto label_13895c;
        }
    }
    ctx->pc = 0x13894Cu;
    // 0x13894c: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x13894Cu;
    SET_GPR_U32(ctx, 31, 0x138954u);
    ctx->pc = 0x138950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13894Cu;
            // 0x138950: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138954u; }
        if (ctx->pc != 0x138954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138954u; }
        if (ctx->pc != 0x138954u) { return; }
    }
    ctx->pc = 0x138954u;
    // 0x138954: 0xae02be10  sw          $v0, -0x41F0($s0)
    ctx->pc = 0x138954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294950416), GPR_U32(ctx, 2));
    // 0x138958: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x138958u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13895c:
    // 0x13895c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13895cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138960: 0x3e00008  jr          $ra
    ctx->pc = 0x138960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138960u;
            // 0x138964: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13895Cu: goto label_13895c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x138968u;
    // 0x138968: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x138968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13896c: 0x0  nop
    ctx->pc = 0x13896cu;
    // NOP
    // 0x138970: 0x3e00008  jr          $ra
    ctx->pc = 0x138970u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138970u;
            // 0x138974: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13895Cu: goto label_13895c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x138978u;
}
