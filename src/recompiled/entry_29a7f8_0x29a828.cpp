#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_29a7f8
// Address: 0x29a7f8 - 0x29a828
void entry_29a7f8_0x29a828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_29a7f8_0x29a828");
#endif

    ctx->pc = 0x29a7f8u;

    // 0x29a7f8: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x29a7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x29a7fc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29a7fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29a800: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x29a800u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x29a804: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x29a804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x29a808: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x29a808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x29a80c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x29a80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29a810: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29a810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29a814: 0xc0a5014  jal         func_294050
    ctx->pc = 0x29A814u;
    SET_GPR_U32(ctx, 31, 0x29A81Cu);
    ctx->pc = 0x29A818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A814u;
            // 0x29a818: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294050u;
    if (runtime->hasFunction(0x294050u)) {
        auto targetFn = runtime->lookupFunction(0x294050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A81Cu; }
        if (ctx->pc != 0x29A81Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_294050_0x2940a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A81Cu; }
        if (ctx->pc != 0x29A81Cu) { return; }
    }
    ctx->pc = 0x29A81Cu;
    // 0x29a81c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29a81cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a820: 0x3e00008  jr          $ra
    ctx->pc = 0x29A820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A820u;
            // 0x29a824: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29A828u;
}
