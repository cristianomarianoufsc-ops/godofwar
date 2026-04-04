#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00138740
// Address: 0x138740 - 0x138778
void sub_00138740_0x138740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00138740_0x138740");
#endif

    ctx->pc = 0x138740u;

    // 0x138740: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x138740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x138744: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x138744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x138748: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x138748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13874c: 0x2442e810  addiu       $v0, $v0, -0x17F0
    ctx->pc = 0x13874cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961168));
    // 0x138750: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x138750u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x138754: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x138754u;
    {
        const bool branch_taken_0x138754 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x138758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138754u;
            // 0x138758: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138754) {
            ctx->pc = 0x13876Cu;
            goto label_13876c;
        }
    }
    ctx->pc = 0x13875Cu;
    // 0x13875c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x13875cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x138760: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x138760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138764: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x138764u;
    SET_GPR_U32(ctx, 31, 0x13876Cu);
    ctx->pc = 0x138768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138764u;
            // 0x138768: 0x8c44be10  lw          $a0, -0x41F0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950416)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13876Cu; }
        if (ctx->pc != 0x13876Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13876Cu; }
        if (ctx->pc != 0x13876Cu) { return; }
    }
    ctx->pc = 0x13876Cu;
label_13876c:
    // 0x13876c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13876cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138770: 0x3e00008  jr          $ra
    ctx->pc = 0x138770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138770u;
            // 0x138774: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13876Cu: goto label_13876c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x138778u;
}
