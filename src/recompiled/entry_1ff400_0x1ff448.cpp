#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1ff400
// Address: 0x1ff400 - 0x1ff448
void entry_1ff400_0x1ff448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1ff400_0x1ff448");
#endif

    ctx->pc = 0x1ff400u;

    // 0x1ff400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ff400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ff404: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1ff404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1ff408: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ff408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ff40c: 0x244295e8  addiu       $v0, $v0, -0x6A18
    ctx->pc = 0x1ff40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940136));
    // 0x1ff410: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ff410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ff414: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ff414u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff418: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1ff418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1ff41c: 0xa2000016  sb          $zero, 0x16($s0)
    ctx->pc = 0x1ff41cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 22), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ff420: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1ff420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1ff424: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x1ff424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x1ff428: 0xc07fd2a  jal         func_1FF4A8
    ctx->pc = 0x1FF428u;
    SET_GPR_U32(ctx, 31, 0x1FF430u);
    ctx->pc = 0x1FF42Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF428u;
            // 0x1ff42c: 0xae050000  sw          $a1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF4A8u;
    if (runtime->hasFunction(0x1FF4A8u)) {
        auto targetFn = runtime->lookupFunction(0x1FF4A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF430u; }
        if (ctx->pc != 0x1FF430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FF4A8_0x1ff4a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF430u; }
        if (ctx->pc != 0x1FF430u) { return; }
    }
    ctx->pc = 0x1FF430u;
    // 0x1ff430: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ff430u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff434: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ff434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff438: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ff438u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff43c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF43Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF43Cu;
            // 0x1ff440: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FF444u;
    // 0x1ff444: 0x0  nop
    ctx->pc = 0x1ff444u;
    // NOP
}
