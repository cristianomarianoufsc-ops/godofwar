#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00244020
// Address: 0x244020 - 0x244088
void sub_00244020_0x244020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244020_0x244020");
#endif

    ctx->pc = 0x244020u;

    // 0x244020: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x244020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x244024: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x244024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x244028: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x244028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x24402c: 0x2442ead8  addiu       $v0, $v0, -0x1528
    ctx->pc = 0x24402cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961880));
    // 0x244030: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x244030u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244034: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x244034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x244038: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x244038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x24403c: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x24403cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x244040: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x244040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x244044: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x244044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x244048: 0xa6000010  sh          $zero, 0x10($s0)
    ctx->pc = 0x244048u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x24404c: 0xc08fbf2  jal         func_23EFC8
    ctx->pc = 0x24404Cu;
    SET_GPR_U32(ctx, 31, 0x244054u);
    ctx->pc = 0x244050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24404Cu;
            // 0x244050: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23EFC8u;
    if (runtime->hasFunction(0x23EFC8u)) {
        auto targetFn = runtime->lookupFunction(0x23EFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244054u; }
        if (ctx->pc != 0x244054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23efc8_0x23f000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244054u; }
        if (ctx->pc != 0x244054u) { return; }
    }
    ctx->pc = 0x244054u;
    // 0x244054: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x244054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x244058: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x244058u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24405c: 0x24632090  addiu       $v1, $v1, 0x2090
    ctx->pc = 0x24405cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8336));
    // 0x244060: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x244060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x244064: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x244064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x244068: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x244068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24406c: 0x3e00008  jr          $ra
    ctx->pc = 0x24406Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24406Cu;
            // 0x244070: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x244074u;
    // 0x244074: 0x0  nop
    ctx->pc = 0x244074u;
    // NOP
    // 0x244078: 0x24426960  addiu       $v0, $v0, 0x6960
    ctx->pc = 0x244078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26976));
    // 0x24407c: 0x0  nop
    ctx->pc = 0x24407cu;
    // NOP
    // 0x244080: 0x24426964  addiu       $v0, $v0, 0x6964
    ctx->pc = 0x244080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26980));
    // 0x244084: 0x0  nop
    ctx->pc = 0x244084u;
    // NOP
}
