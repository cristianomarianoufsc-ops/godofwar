#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_188e80
// Address: 0x188e80 - 0x188ed8
void entry_188e80_0x188ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_188e80_0x188ed8");
#endif

    ctx->pc = 0x188e80u;

    // 0x188e80: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x188e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x188e84: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x188e84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x188e88: 0xac44c870  sw          $a0, -0x3790($v0)
    ctx->pc = 0x188e88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953072), GPR_U32(ctx, 4));
    // 0x188e8c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x188e8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x188e90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x188e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188e94: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x188e94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x188e98: 0xaca24db0  sw          $v0, 0x4DB0($a1)
    ctx->pc = 0x188e98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 19888), GPR_U32(ctx, 2));
    // 0x188e9c: 0x3c04534d  lui         $a0, 0x534D
    ctx->pc = 0x188e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21325 << 16));
    // 0x188ea0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x188ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x188ea4: 0x34845044  ori         $a0, $a0, 0x5044
    ctx->pc = 0x188ea4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20548);
    // 0x188ea8: 0xac60c840  sw          $zero, -0x37C0($v1)
    ctx->pc = 0x188ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294953024), GPR_U32(ctx, 0));
    // 0x188eac: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x188eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x188eb0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x188eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188eb4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x188eb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188eb8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x188eb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188ebc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x188ebcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188ec0: 0xc09b260  jal         func_26C980
    ctx->pc = 0x188EC0u;
    SET_GPR_U32(ctx, 31, 0x188EC8u);
    ctx->pc = 0x188EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188EC0u;
            // 0x188ec4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C980u;
    if (runtime->hasFunction(0x26C980u)) {
        auto targetFn = runtime->lookupFunction(0x26C980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188EC8u; }
        if (ctx->pc != 0x188EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C980_0x26c980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188EC8u; }
        if (ctx->pc != 0x188EC8u) { return; }
    }
    ctx->pc = 0x188EC8u;
    // 0x188ec8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x188ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x188ECCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188ECCu;
            // 0x188ed0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x188ED4u;
    // 0x188ed4: 0x0  nop
    ctx->pc = 0x188ed4u;
    // NOP
}
