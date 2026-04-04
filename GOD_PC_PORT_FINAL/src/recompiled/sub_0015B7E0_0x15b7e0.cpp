#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015B7E0
// Address: 0x15b7e0 - 0x15b830
void sub_0015B7E0_0x15b7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015B7E0_0x15b7e0");
#endif

    ctx->pc = 0x15b7e0u;

    // 0x15b7e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15b7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15b7e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15b7e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x15b7e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15b7e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b7ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15b7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15b7f0: 0x24a30148  addiu       $v1, $a1, 0x148
    ctx->pc = 0x15b7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 328));
    // 0x15b7f4: 0xae050034  sw          $a1, 0x34($s0)
    ctx->pc = 0x15b7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 5));
    // 0x15b7f8: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x15b7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x15b7fc: 0x90620009  lbu         $v0, 0x9($v1)
    ctx->pc = 0x15b7fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 9)));
    // 0x15b800: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x15b800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x15b804: 0x9062000a  lbu         $v0, 0xA($v1)
    ctx->pc = 0x15b804u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x15b808: 0xae100018  sw          $s0, 0x18($s0)
    ctx->pc = 0x15b808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 16));
    // 0x15b80c: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x15b80cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x15b810: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x15b810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x15b814: 0xc056dd2  jal         func_15B748
    ctx->pc = 0x15B814u;
    SET_GPR_U32(ctx, 31, 0x15B81Cu);
    ctx->pc = 0x15B818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B814u;
            // 0x15b818: 0xae060038  sw          $a2, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B748u;
    if (runtime->hasFunction(0x15B748u)) {
        auto targetFn = runtime->lookupFunction(0x15B748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B81Cu; }
        if (ctx->pc != 0x15B81Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B748_0x15b748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B81Cu; }
        if (ctx->pc != 0x15B81Cu) { return; }
    }
    ctx->pc = 0x15B81Cu;
    // 0x15b81c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x15b81cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b820: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15b820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15b824: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15b824u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b828: 0x3e00008  jr          $ra
    ctx->pc = 0x15B828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B828u;
            // 0x15b82c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15B830u;
}
