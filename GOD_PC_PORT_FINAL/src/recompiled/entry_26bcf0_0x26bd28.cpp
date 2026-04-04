#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_26bcf0
// Address: 0x26bcf0 - 0x26bd28
void entry_26bcf0_0x26bd28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_26bcf0_0x26bd28");
#endif

    ctx->pc = 0x26bcf0u;

    // 0x26bcf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26bcf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26bcf4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26bcf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bcf8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x26bcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x26bcfc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x26bcfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bd00: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x26bd00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x26bd04: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x26bd04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x26bd08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26bd08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26bd0c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x26bd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x26bd10: 0xc09b054  jal         func_26C150
    ctx->pc = 0x26BD10u;
    SET_GPR_U32(ctx, 31, 0x26BD18u);
    ctx->pc = 0x26BD14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BD10u;
            // 0x26bd14: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C150u;
    if (runtime->hasFunction(0x26C150u)) {
        auto targetFn = runtime->lookupFunction(0x26C150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BD18u; }
        if (ctx->pc != 0x26BD18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C150_0x26c150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BD18u; }
        if (ctx->pc != 0x26BD18u) { return; }
    }
    ctx->pc = 0x26BD18u;
    // 0x26bd18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26bd18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26bd1c: 0x3e00008  jr          $ra
    ctx->pc = 0x26BD1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BD20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BD1Cu;
            // 0x26bd20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26BD24u;
    // 0x26bd24: 0x0  nop
    ctx->pc = 0x26bd24u;
    // NOP
}
