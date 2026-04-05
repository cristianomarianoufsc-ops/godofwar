#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00244ED8
// Address: 0x244ed8 - 0x244f18
void sub_00244ED8_0x244ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244ED8_0x244ed8");
#endif

    ctx->pc = 0x244ed8u;

    // 0x244ed8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x244ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x244edc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x244edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x244ee0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x244ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x244ee4: 0xc04e1c2  jal         func_138708
    ctx->pc = 0x244EE4u;
    SET_GPR_U32(ctx, 31, 0x244EECu);
    ctx->pc = 0x244EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244EE4u;
            // 0x244ee8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138708u;
    if (runtime->hasFunction(0x138708u)) {
        auto targetFn = runtime->lookupFunction(0x138708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244EECu; }
        if (ctx->pc != 0x244EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00138708_0x138708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244EECu; }
        if (ctx->pc != 0x244EECu) { return; }
    }
    ctx->pc = 0x244EECu;
    // 0x244eec: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x244eecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x244ef0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x244ef0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244ef4: 0x24638888  addiu       $v1, $v1, -0x7778
    ctx->pc = 0x244ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936712));
    // 0x244ef8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x244ef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x244efc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x244efcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x244f00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x244f00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x244f04: 0x3e00008  jr          $ra
    ctx->pc = 0x244F04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244F04u;
            // 0x244f08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x244F0Cu;
    // 0x244f0c: 0x0  nop
    ctx->pc = 0x244f0cu;
    // NOP
    // 0x244f10: 0x3e00008  jr          $ra
    ctx->pc = 0x244F10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244F10u;
            // 0x244f14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x244F18u;
}
