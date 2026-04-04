#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00244F98
// Address: 0x244f98 - 0x244fd8
void sub_00244F98_0x244f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244F98_0x244f98");
#endif

    ctx->pc = 0x244f98u;

    // 0x244f98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x244f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x244f9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x244f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x244fa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x244fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x244fa4: 0xc04e1c2  jal         func_138708
    ctx->pc = 0x244FA4u;
    SET_GPR_U32(ctx, 31, 0x244FACu);
    ctx->pc = 0x244FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244FA4u;
            // 0x244fa8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138708u;
    if (runtime->hasFunction(0x138708u)) {
        auto targetFn = runtime->lookupFunction(0x138708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244FACu; }
        if (ctx->pc != 0x244FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00138708_0x138708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244FACu; }
        if (ctx->pc != 0x244FACu) { return; }
    }
    ctx->pc = 0x244FACu;
    // 0x244fac: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x244facu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x244fb0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x244fb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244fb4: 0x24638838  addiu       $v1, $v1, -0x77C8
    ctx->pc = 0x244fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936632));
    // 0x244fb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x244fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x244fbc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x244fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x244fc0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x244fc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x244fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x244FC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244FC4u;
            // 0x244fc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x244FCCu;
    // 0x244fcc: 0x0  nop
    ctx->pc = 0x244fccu;
    // NOP
    // 0x244fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x244FD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244FD0u;
            // 0x244fd4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x244FD8u;
}
