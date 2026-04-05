#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00224A28
// Address: 0x224a28 - 0x224a80
void sub_00224A28_0x224a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224A28_0x224a28");
#endif

    ctx->pc = 0x224a28u;

    // 0x224a28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x224a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x224a2c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x224a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x224a30: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x224a30u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x224a34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x224a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x224a38: 0x8e0211a4  lw          $v0, 0x11A4($s0)
    ctx->pc = 0x224a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4516)));
    // 0x224a3c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x224A3Cu;
    {
        const bool branch_taken_0x224a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x224a3c) {
            ctx->pc = 0x224A40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x224A3Cu;
            // 0x224a40: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x224A6Cu;
            goto label_224a6c;
        }
    }
    ctx->pc = 0x224A44u;
    // 0x224a44: 0xc06f9a8  jal         func_1BE6A0
    ctx->pc = 0x224A44u;
    SET_GPR_U32(ctx, 31, 0x224A4Cu);
    ctx->pc = 0x1BE6A0u;
    if (runtime->hasFunction(0x1BE6A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224A4Cu; }
        if (ctx->pc != 0x224A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE6A0_0x1be6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224A4Cu; }
        if (ctx->pc != 0x224A4Cu) { return; }
    }
    ctx->pc = 0x224A4Cu;
    // 0x224a4c: 0x8c440074  lw          $a0, 0x74($v0)
    ctx->pc = 0x224a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x224a50: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x224a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x224a54: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x224a54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x224a58: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x224a58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x224a5c: 0xc04f644  jal         func_13D910
    ctx->pc = 0x224A5Cu;
    SET_GPR_U32(ctx, 31, 0x224A64u);
    ctx->pc = 0x224A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224A5Cu;
            // 0x224a60: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D910u;
    if (runtime->hasFunction(0x13D910u)) {
        auto targetFn = runtime->lookupFunction(0x13D910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224A64u; }
        if (ctx->pc != 0x224A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D910_0x13d910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224A64u; }
        if (ctx->pc != 0x224A64u) { return; }
    }
    ctx->pc = 0x224A64u;
    // 0x224a64: 0xae0211a4  sw          $v0, 0x11A4($s0)
    ctx->pc = 0x224a64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4516), GPR_U32(ctx, 2));
    // 0x224a68: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x224a68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_224a6c:
    // 0x224a6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x224a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224a70: 0x3e00008  jr          $ra
    ctx->pc = 0x224A70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224A70u;
            // 0x224a74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x224A6Cu: goto label_224a6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x224A78u;
    // 0x224a78: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x224a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x224a7c: 0x0  nop
    ctx->pc = 0x224a7cu;
    // NOP
}
