#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00245768
// Address: 0x245768 - 0x2457a8
void sub_00245768_0x245768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245768_0x245768");
#endif

    ctx->pc = 0x245768u;

    // 0x245768: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x245768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24576c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x24576cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x245770: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x245770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x245774: 0xc04e1c2  jal         func_138708
    ctx->pc = 0x245774u;
    SET_GPR_U32(ctx, 31, 0x24577Cu);
    ctx->pc = 0x245778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245774u;
            // 0x245778: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138708u;
    if (runtime->hasFunction(0x138708u)) {
        auto targetFn = runtime->lookupFunction(0x138708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24577Cu; }
        if (ctx->pc != 0x24577Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00138708_0x138708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24577Cu; }
        if (ctx->pc != 0x24577Cu) { return; }
    }
    ctx->pc = 0x24577Cu;
    // 0x24577c: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x24577cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x245780: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x245780u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245784: 0x24638608  addiu       $v1, $v1, -0x79F8
    ctx->pc = 0x245784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936072));
    // 0x245788: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x245788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24578c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x24578cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x245790: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x245790u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245794: 0x3e00008  jr          $ra
    ctx->pc = 0x245794u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245794u;
            // 0x245798: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24579Cu;
    // 0x24579c: 0x0  nop
    ctx->pc = 0x24579cu;
    // NOP
    // 0x2457a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2457A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2457A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2457A0u;
            // 0x2457a4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2457A8u;
}
