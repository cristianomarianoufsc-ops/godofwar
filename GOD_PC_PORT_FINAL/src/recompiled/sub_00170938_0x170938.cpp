#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00170938
// Address: 0x170938 - 0x170968
void sub_00170938_0x170938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170938_0x170938");
#endif

    ctx->pc = 0x170938u;

    // 0x170938: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x170938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17093c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17093cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x170940: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x170940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x170944: 0xc05c440  jal         func_171100
    ctx->pc = 0x170944u;
    SET_GPR_U32(ctx, 31, 0x17094Cu);
    ctx->pc = 0x170948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170944u;
            // 0x170948: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171100u;
    if (runtime->hasFunction(0x171100u)) {
        auto targetFn = runtime->lookupFunction(0x171100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17094Cu; }
        if (ctx->pc != 0x17094Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171100_0x171100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17094Cu; }
        if (ctx->pc != 0x17094Cu) { return; }
    }
    ctx->pc = 0x17094Cu;
    // 0x17094c: 0xa20000cf  sb          $zero, 0xCF($s0)
    ctx->pc = 0x17094cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 207), (uint8_t)GPR_U32(ctx, 0));
    // 0x170950: 0xa60000cc  sh          $zero, 0xCC($s0)
    ctx->pc = 0x170950u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 204), (uint16_t)GPR_U32(ctx, 0));
    // 0x170954: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x170954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170958: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x170958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17095c: 0x3e00008  jr          $ra
    ctx->pc = 0x17095Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17095Cu;
            // 0x170960: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x170964u;
    // 0x170964: 0x0  nop
    ctx->pc = 0x170964u;
    // NOP
}
