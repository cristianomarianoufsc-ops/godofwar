#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00245618
// Address: 0x245618 - 0x245658
void sub_00245618_0x245618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245618_0x245618");
#endif

    ctx->pc = 0x245618u;

    // 0x245618: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x245618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24561c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x24561cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x245620: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x245620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x245624: 0xc04e1c2  jal         func_138708
    ctx->pc = 0x245624u;
    SET_GPR_U32(ctx, 31, 0x24562Cu);
    ctx->pc = 0x245628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245624u;
            // 0x245628: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138708u;
    if (runtime->hasFunction(0x138708u)) {
        auto targetFn = runtime->lookupFunction(0x138708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24562Cu; }
        if (ctx->pc != 0x24562Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00138708_0x138708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24562Cu; }
        if (ctx->pc != 0x24562Cu) { return; }
    }
    ctx->pc = 0x24562Cu;
    // 0x24562c: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x24562cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x245630: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x245630u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245634: 0x246386a8  addiu       $v1, $v1, -0x7958
    ctx->pc = 0x245634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936232));
    // 0x245638: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x245638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24563c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x24563cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x245640: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x245640u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245644: 0x3e00008  jr          $ra
    ctx->pc = 0x245644u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245644u;
            // 0x245648: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24564Cu;
    // 0x24564c: 0x0  nop
    ctx->pc = 0x24564cu;
    // NOP
    // 0x245650: 0x3e00008  jr          $ra
    ctx->pc = 0x245650u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245650u;
            // 0x245654: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x245658u;
}
