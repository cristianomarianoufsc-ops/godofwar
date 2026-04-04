#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002456B8
// Address: 0x2456b8 - 0x2456f8
void sub_002456B8_0x2456b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002456B8_0x2456b8");
#endif

    ctx->pc = 0x2456b8u;

    // 0x2456b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2456b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2456bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2456bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2456c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2456c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2456c4: 0xc04e1c2  jal         func_138708
    ctx->pc = 0x2456C4u;
    SET_GPR_U32(ctx, 31, 0x2456CCu);
    ctx->pc = 0x2456C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2456C4u;
            // 0x2456c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138708u;
    if (runtime->hasFunction(0x138708u)) {
        auto targetFn = runtime->lookupFunction(0x138708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2456CCu; }
        if (ctx->pc != 0x2456CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00138708_0x138708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2456CCu; }
        if (ctx->pc != 0x2456CCu) { return; }
    }
    ctx->pc = 0x2456CCu;
    // 0x2456cc: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x2456ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x2456d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2456d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2456d4: 0x24638658  addiu       $v1, $v1, -0x79A8
    ctx->pc = 0x2456d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936152));
    // 0x2456d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2456d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2456dc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2456dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2456e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2456e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2456e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2456E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2456E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2456E4u;
            // 0x2456e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2456ECu;
    // 0x2456ec: 0x0  nop
    ctx->pc = 0x2456ecu;
    // NOP
    // 0x2456f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2456F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2456F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2456F0u;
            // 0x2456f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2456F8u;
}
