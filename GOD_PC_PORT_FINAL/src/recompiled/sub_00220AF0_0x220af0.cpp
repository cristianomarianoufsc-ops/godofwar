#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00220AF0
// Address: 0x220af0 - 0x220b70
void sub_00220AF0_0x220af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220AF0_0x220af0");
#endif

    ctx->pc = 0x220af0u;

    // 0x220af0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x220af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x220af4: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x220af4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x220af8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x220af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x220afc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x220afcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220b00: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x220b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x220b04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x220b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x220b08: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x220b08u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x220b0c: 0x2610e848  addiu       $s0, $s0, -0x17B8
    ctx->pc = 0x220b0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961224));
    // 0x220b10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x220b10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x220b14: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x220b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x220b18: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x220b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220b1c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x220b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x220b20: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x220b20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x220b24: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x220b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x220b28: 0x40f809  jalr        $v0
    ctx->pc = 0x220B28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x220B30u);
        ctx->pc = 0x220B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220B28u;
            // 0x220b2c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x220B30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x220B30u; }
            if (ctx->pc != 0x220B30u) { return; }
        }
        }
    }
    ctx->pc = 0x220B30u;
    // 0x220b30: 0xc05e9c0  jal         func_17A700
    ctx->pc = 0x220B30u;
    SET_GPR_U32(ctx, 31, 0x220B38u);
    ctx->pc = 0x220B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220B30u;
            // 0x220b34: 0x8e240038  lw          $a0, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A700u;
    if (runtime->hasFunction(0x17A700u)) {
        auto targetFn = runtime->lookupFunction(0x17A700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220B38u; }
        if (ctx->pc != 0x220B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A700_0x17a700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220B38u; }
        if (ctx->pc != 0x220B38u) { return; }
    }
    ctx->pc = 0x220B38u;
    // 0x220b38: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x220b38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220b3c: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x220b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x220b40: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x220b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x220b44: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x220b44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x220b48: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x220b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x220b4c: 0x40f809  jalr        $v0
    ctx->pc = 0x220B4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x220B54u);
        ctx->pc = 0x220B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220B4Cu;
            // 0x220b50: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x220B54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x220B54u; }
            if (ctx->pc != 0x220B54u) { return; }
        }
        }
    }
    ctx->pc = 0x220B54u;
    // 0x220b54: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x220b54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220b58: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x220b58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x220b5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x220b5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x220b60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x220b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220b64: 0x3e00008  jr          $ra
    ctx->pc = 0x220B64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220B64u;
            // 0x220b68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x220B6Cu;
    // 0x220b6c: 0x0  nop
    ctx->pc = 0x220b6cu;
    // NOP
}
