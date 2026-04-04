#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00245210
// Address: 0x245210 - 0x245250
void sub_00245210_0x245210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245210_0x245210");
#endif

    ctx->pc = 0x245210u;

    // 0x245210: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x245210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x245214: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x245214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x245218: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x245218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24521c: 0xc04e1c2  jal         func_138708
    ctx->pc = 0x24521Cu;
    SET_GPR_U32(ctx, 31, 0x245224u);
    ctx->pc = 0x245220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24521Cu;
            // 0x245220: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138708u;
    if (runtime->hasFunction(0x138708u)) {
        auto targetFn = runtime->lookupFunction(0x138708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245224u; }
        if (ctx->pc != 0x245224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00138708_0x138708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245224u; }
        if (ctx->pc != 0x245224u) { return; }
    }
    ctx->pc = 0x245224u;
    // 0x245224: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x245224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x245228: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x245228u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24522c: 0x246387e8  addiu       $v1, $v1, -0x7818
    ctx->pc = 0x24522cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936552));
    // 0x245230: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x245230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x245234: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x245234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x245238: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x245238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24523c: 0x3e00008  jr          $ra
    ctx->pc = 0x24523Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24523Cu;
            // 0x245240: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x245244u;
    // 0x245244: 0x0  nop
    ctx->pc = 0x245244u;
    // NOP
    // 0x245248: 0x3e00008  jr          $ra
    ctx->pc = 0x245248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24524Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245248u;
            // 0x24524c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x245250u;
}
