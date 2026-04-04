#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FF508
// Address: 0x1ff508 - 0x1ff540
void sub_001FF508_0x1ff508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF508_0x1ff508");
#endif

    ctx->pc = 0x1ff508u;

    // 0x1ff508: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ff508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ff50c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ff50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ff510: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ff510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ff514: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ff514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff518: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ff518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ff51c: 0xc090aa6  jal         func_242A98
    ctx->pc = 0x1FF51Cu;
    SET_GPR_U32(ctx, 31, 0x1FF524u);
    ctx->pc = 0x1FF520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF51Cu;
            // 0x1ff520: 0x8c440320  lw          $a0, 0x320($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A98u;
    if (runtime->hasFunction(0x242A98u)) {
        auto targetFn = runtime->lookupFunction(0x242A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF524u; }
        if (ctx->pc != 0x1FF524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a98_0x242d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF524u; }
        if (ctx->pc != 0x1FF524u) { return; }
    }
    ctx->pc = 0x1FF524u;
    // 0x1ff524: 0x94420248  lhu         $v0, 0x248($v0)
    ctx->pc = 0x1ff524u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 584)));
    // 0x1ff528: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ff528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff52c: 0xa6020012  sh          $v0, 0x12($s0)
    ctx->pc = 0x1ff52cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ff530: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ff530u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff534: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF534u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF534u;
            // 0x1ff538: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FF53Cu;
    // 0x1ff53c: 0x0  nop
    ctx->pc = 0x1ff53cu;
    // NOP
}
