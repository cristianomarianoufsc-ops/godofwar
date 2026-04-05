#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2399f8
// Address: 0x2399f8 - 0x239a30
void entry_2399f8_0x239a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2399f8_0x239a30");
#endif

    ctx->pc = 0x2399f8u;

    // 0x2399f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2399f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2399fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2399fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x239a00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x239a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x239a04: 0xc05fa56  jal         func_17E958
    ctx->pc = 0x239A04u;
    SET_GPR_U32(ctx, 31, 0x239A0Cu);
    ctx->pc = 0x239A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239A04u;
            // 0x239a08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E958u;
    if (runtime->hasFunction(0x17E958u)) {
        auto targetFn = runtime->lookupFunction(0x17E958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239A0Cu; }
        if (ctx->pc != 0x239A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E958_0x17e958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239A0Cu; }
        if (ctx->pc != 0x239A0Cu) { return; }
    }
    ctx->pc = 0x239A0Cu;
    // 0x239a0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x239a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239a10: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x239A10u;
    SET_GPR_U32(ctx, 31, 0x239A18u);
    ctx->pc = 0x239A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239A10u;
            // 0x239a14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239A18u; }
        if (ctx->pc != 0x239A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239A18u; }
        if (ctx->pc != 0x239A18u) { return; }
    }
    ctx->pc = 0x239A18u;
    // 0x239a18: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x239a18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239a1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x239a1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239a20: 0x3e00008  jr          $ra
    ctx->pc = 0x239A20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239A20u;
            // 0x239a24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x239A28u;
    // 0x239a28: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x239a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x239a2c: 0x0  nop
    ctx->pc = 0x239a2cu;
    // NOP
}
