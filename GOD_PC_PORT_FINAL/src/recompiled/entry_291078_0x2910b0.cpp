#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_291078
// Address: 0x291078 - 0x2910b0
void entry_291078_0x2910b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_291078_0x2910b0");
#endif

    ctx->pc = 0x291078u;

    // 0x291078: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x291078u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29107c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x29107cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x291080: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x291080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x291084: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x291084u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291088: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x291088u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29108c: 0x8c444294  lw          $a0, 0x4294($v0)
    ctx->pc = 0x29108cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17044)));
    // 0x291090: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x291090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x291094: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x291094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291098: 0xc0a4392  jal         func_290E48
    ctx->pc = 0x291098u;
    SET_GPR_U32(ctx, 31, 0x2910A0u);
    ctx->pc = 0x29109Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291098u;
            // 0x29109c: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x290E48u;
    if (runtime->hasFunction(0x290E48u)) {
        auto targetFn = runtime->lookupFunction(0x290E48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2910A0u; }
        if (ctx->pc != 0x2910A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00290E48_0x290e48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2910A0u; }
        if (ctx->pc != 0x2910A0u) { return; }
    }
    ctx->pc = 0x2910A0u;
    // 0x2910a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2910a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2910a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2910A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2910A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2910A4u;
            // 0x2910a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2910ACu;
    // 0x2910ac: 0x0  nop
    ctx->pc = 0x2910acu;
    // NOP
}
