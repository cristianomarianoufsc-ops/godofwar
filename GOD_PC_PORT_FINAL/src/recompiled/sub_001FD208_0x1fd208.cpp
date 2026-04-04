#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FD208
// Address: 0x1fd208 - 0x1fd260
void sub_001FD208_0x1fd208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD208_0x1fd208");
#endif

    ctx->pc = 0x1fd208u;

    // 0x1fd208: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fd208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fd20c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1fd20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1fd210: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1fd210u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x1fd214: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fd218: 0x8e02e3f0  lw          $v0, -0x1C10($s0)
    ctx->pc = 0x1fd218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960112)));
    // 0x1fd21c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1FD21Cu;
    {
        const bool branch_taken_0x1fd21c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd21c) {
            ctx->pc = 0x1FD220u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD21Cu;
            // 0x1fd220: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FD24Cu;
            goto label_1fd24c;
        }
    }
    ctx->pc = 0x1FD224u;
    // 0x1fd224: 0xc06f9a8  jal         func_1BE6A0
    ctx->pc = 0x1FD224u;
    SET_GPR_U32(ctx, 31, 0x1FD22Cu);
    ctx->pc = 0x1BE6A0u;
    if (runtime->hasFunction(0x1BE6A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD22Cu; }
        if (ctx->pc != 0x1FD22Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE6A0_0x1be6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD22Cu; }
        if (ctx->pc != 0x1FD22Cu) { return; }
    }
    ctx->pc = 0x1FD22Cu;
    // 0x1fd22c: 0x8c440074  lw          $a0, 0x74($v0)
    ctx->pc = 0x1fd22cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x1fd230: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1fd230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1fd234: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1fd234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fd238: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1fd238u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd23c: 0xc04f644  jal         func_13D910
    ctx->pc = 0x1FD23Cu;
    SET_GPR_U32(ctx, 31, 0x1FD244u);
    ctx->pc = 0x1FD240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD23Cu;
            // 0x1fd240: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D910u;
    if (runtime->hasFunction(0x13D910u)) {
        auto targetFn = runtime->lookupFunction(0x13D910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD244u; }
        if (ctx->pc != 0x1FD244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D910_0x13d910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD244u; }
        if (ctx->pc != 0x1FD244u) { return; }
    }
    ctx->pc = 0x1FD244u;
    // 0x1fd244: 0xae02e3f0  sw          $v0, -0x1C10($s0)
    ctx->pc = 0x1fd244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294960112), GPR_U32(ctx, 2));
    // 0x1fd248: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1fd248u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fd24c:
    // 0x1fd24c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd24cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd250: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD250u;
            // 0x1fd254: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FD24Cu: goto label_1fd24c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FD258u;
    // 0x1fd258: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1fd258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1fd25c: 0x0  nop
    ctx->pc = 0x1fd25cu;
    // NOP
}
