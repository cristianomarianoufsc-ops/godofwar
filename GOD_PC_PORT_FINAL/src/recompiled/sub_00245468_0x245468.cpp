#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00245468
// Address: 0x245468 - 0x2454a8
void sub_00245468_0x245468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245468_0x245468");
#endif

    ctx->pc = 0x245468u;

    // 0x245468: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x245468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24546c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x24546cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x245470: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x245470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x245474: 0xc04e1c2  jal         func_138708
    ctx->pc = 0x245474u;
    SET_GPR_U32(ctx, 31, 0x24547Cu);
    ctx->pc = 0x245478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245474u;
            // 0x245478: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138708u;
    if (runtime->hasFunction(0x138708u)) {
        auto targetFn = runtime->lookupFunction(0x138708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24547Cu; }
        if (ctx->pc != 0x24547Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00138708_0x138708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24547Cu; }
        if (ctx->pc != 0x24547Cu) { return; }
    }
    ctx->pc = 0x24547Cu;
    // 0x24547c: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x24547cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x245480: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x245480u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245484: 0x246386f8  addiu       $v1, $v1, -0x7908
    ctx->pc = 0x245484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936312));
    // 0x245488: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x245488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24548c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x24548cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x245490: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x245490u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245494: 0x3e00008  jr          $ra
    ctx->pc = 0x245494u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245494u;
            // 0x245498: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24549Cu;
    // 0x24549c: 0x0  nop
    ctx->pc = 0x24549cu;
    // NOP
    // 0x2454a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2454A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2454A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2454A0u;
            // 0x2454a4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2454A8u;
}
