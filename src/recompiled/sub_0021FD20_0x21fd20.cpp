#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021FD20
// Address: 0x21fd20 - 0x21fda0
void sub_0021FD20_0x21fd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021FD20_0x21fd20");
#endif

    ctx->pc = 0x21fd20u;

    // 0x21fd20: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21fd20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21fd24: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21fd24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21fd28: 0x8c4411d0  lw          $a0, 0x11D0($v0)
    ctx->pc = 0x21fd28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4560)));
    // 0x21fd2c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x21fd2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x21fd30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21fd30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21fd34: 0xc08a7a4  jal         func_229E90
    ctx->pc = 0x21FD34u;
    SET_GPR_U32(ctx, 31, 0x21FD3Cu);
    ctx->pc = 0x21FD38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FD34u;
            // 0x21fd38: 0x3c100033  lui         $s0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x229E90u;
    if (runtime->hasFunction(0x229E90u)) {
        auto targetFn = runtime->lookupFunction(0x229E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FD3Cu; }
        if (ctx->pc != 0x21FD3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00229E90_0x229e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FD3Cu; }
        if (ctx->pc != 0x21FD3Cu) { return; }
    }
    ctx->pc = 0x21FD3Cu;
    // 0x21fd3c: 0xc06f9a8  jal         func_1BE6A0
    ctx->pc = 0x21FD3Cu;
    SET_GPR_U32(ctx, 31, 0x21FD44u);
    ctx->pc = 0x21FD40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FD3Cu;
            // 0x21fd40: 0x2610e848  addiu       $s0, $s0, -0x17B8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE6A0u;
    if (runtime->hasFunction(0x1BE6A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FD44u; }
        if (ctx->pc != 0x21FD44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE6A0_0x1be6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FD44u; }
        if (ctx->pc != 0x21FD44u) { return; }
    }
    ctx->pc = 0x21FD44u;
    // 0x21fd44: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x21fd44u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21fd48: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21fd48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21fd4c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x21fd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x21fd50: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21fd50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fd54: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x21fd54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21fd58: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x21fd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x21fd5c: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x21fd5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x21fd60: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x21fd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x21fd64: 0x40f809  jalr        $v0
    ctx->pc = 0x21FD64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21FD6Cu);
        ctx->pc = 0x21FD68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FD64u;
            // 0x21fd68: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x21FD6Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x21FD6Cu; }
            if (ctx->pc != 0x21FD6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x21FD6Cu;
    // 0x21fd6c: 0xc0873da  jal         func_21CF68
    ctx->pc = 0x21FD6Cu;
    SET_GPR_U32(ctx, 31, 0x21FD74u);
    ctx->pc = 0x21CF68u;
    if (runtime->hasFunction(0x21CF68u)) {
        auto targetFn = runtime->lookupFunction(0x21CF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FD74u; }
        if (ctx->pc != 0x21FD74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021CF68_0x21cf68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FD74u; }
        if (ctx->pc != 0x21FD74u) { return; }
    }
    ctx->pc = 0x21FD74u;
    // 0x21fd74: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x21fd74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x21fd78: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x21fd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x21fd7c: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x21fd7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x21fd80: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x21fd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x21fd84: 0x40f809  jalr        $v0
    ctx->pc = 0x21FD84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21FD8Cu);
        ctx->pc = 0x21FD88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FD84u;
            // 0x21fd88: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x21FD8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x21FD8Cu; }
            if (ctx->pc != 0x21FD8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x21FD8Cu;
    // 0x21fd8c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x21fd8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21fd90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21fd90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fd94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21fd94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21fd98: 0x3e00008  jr          $ra
    ctx->pc = 0x21FD98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FD9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FD98u;
            // 0x21fd9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21FDA0u;
}
