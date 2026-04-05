#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002435E0
// Address: 0x2435e0 - 0x243628
void sub_002435E0_0x2435e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002435E0_0x2435e0");
#endif

    ctx->pc = 0x2435e0u;

    // 0x2435e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2435e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2435e4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2435e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2435e8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2435e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2435ec: 0x24422298  addiu       $v0, $v0, 0x2298
    ctx->pc = 0x2435ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8856));
    // 0x2435f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2435f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2435f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2435f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2435f8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2435f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2435fc: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x2435fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x243600: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x243600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x243604: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x243604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x243608: 0xa6000010  sh          $zero, 0x10($s0)
    ctx->pc = 0x243608u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x24360c: 0xc096680  jal         func_259A00
    ctx->pc = 0x24360Cu;
    SET_GPR_U32(ctx, 31, 0x243614u);
    ctx->pc = 0x243610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24360Cu;
            // 0x243610: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259A00u;
    if (runtime->hasFunction(0x259A00u)) {
        auto targetFn = runtime->lookupFunction(0x259A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243614u; }
        if (ctx->pc != 0x243614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_259a00_0x259a98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243614u; }
        if (ctx->pc != 0x243614u) { return; }
    }
    ctx->pc = 0x243614u;
    // 0x243614: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x243614u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243618: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x243618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24361c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x24361cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243620: 0x3e00008  jr          $ra
    ctx->pc = 0x243620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243620u;
            // 0x243624: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x243628u;
}
