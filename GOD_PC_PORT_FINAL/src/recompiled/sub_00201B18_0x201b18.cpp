#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00201B18
// Address: 0x201b18 - 0x201b70
void sub_00201B18_0x201b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201B18_0x201b18");
#endif

    ctx->pc = 0x201b18u;

    // 0x201b18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x201b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x201b1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x201b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x201b20: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x201b20u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x201b24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201b28: 0x8e02e428  lw          $v0, -0x1BD8($s0)
    ctx->pc = 0x201b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960168)));
    // 0x201b2c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x201B2Cu;
    {
        const bool branch_taken_0x201b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x201b2c) {
            ctx->pc = 0x201B30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x201B2Cu;
            // 0x201b30: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x201B5Cu;
            goto label_201b5c;
        }
    }
    ctx->pc = 0x201B34u;
    // 0x201b34: 0xc06f9a8  jal         func_1BE6A0
    ctx->pc = 0x201B34u;
    SET_GPR_U32(ctx, 31, 0x201B3Cu);
    ctx->pc = 0x1BE6A0u;
    if (runtime->hasFunction(0x1BE6A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201B3Cu; }
        if (ctx->pc != 0x201B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE6A0_0x1be6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201B3Cu; }
        if (ctx->pc != 0x201B3Cu) { return; }
    }
    ctx->pc = 0x201B3Cu;
    // 0x201b3c: 0x8c440074  lw          $a0, 0x74($v0)
    ctx->pc = 0x201b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x201b40: 0x24050210  addiu       $a1, $zero, 0x210
    ctx->pc = 0x201b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    // 0x201b44: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x201b44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x201b48: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x201b48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x201b4c: 0xc04f644  jal         func_13D910
    ctx->pc = 0x201B4Cu;
    SET_GPR_U32(ctx, 31, 0x201B54u);
    ctx->pc = 0x201B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201B4Cu;
            // 0x201b50: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D910u;
    if (runtime->hasFunction(0x13D910u)) {
        auto targetFn = runtime->lookupFunction(0x13D910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201B54u; }
        if (ctx->pc != 0x201B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D910_0x13d910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201B54u; }
        if (ctx->pc != 0x201B54u) { return; }
    }
    ctx->pc = 0x201B54u;
    // 0x201b54: 0xae02e428  sw          $v0, -0x1BD8($s0)
    ctx->pc = 0x201b54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294960168), GPR_U32(ctx, 2));
    // 0x201b58: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x201b58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_201b5c:
    // 0x201b5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201b60: 0x3e00008  jr          $ra
    ctx->pc = 0x201B60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201B60u;
            // 0x201b64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x201B5Cu: goto label_201b5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x201B68u;
    // 0x201b68: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x201b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x201b6c: 0x0  nop
    ctx->pc = 0x201b6cu;
    // NOP
}
