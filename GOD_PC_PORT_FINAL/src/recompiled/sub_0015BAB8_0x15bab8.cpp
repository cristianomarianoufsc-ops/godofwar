#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015BAB8
// Address: 0x15bab8 - 0x15bb18
void sub_0015BAB8_0x15bab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015BAB8_0x15bab8");
#endif

    ctx->pc = 0x15bab8u;

    // 0x15bab8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15bab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15babc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15babcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15bac0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15bac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15bac4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15bac4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bac8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x15bac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x15bacc: 0x8e30017c  lw          $s0, 0x17C($s1)
    ctx->pc = 0x15baccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 380)));
    // 0x15bad0: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x15BAD0u;
    {
        const bool branch_taken_0x15bad0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bad0) {
            ctx->pc = 0x15BAD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15BAD0u;
            // 0x15bad4: 0xae200160  sw          $zero, 0x160($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15BAF8u;
            goto label_15baf8;
        }
    }
    ctx->pc = 0x15BAD8u;
    // 0x15bad8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15bad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15badc: 0x0  nop
    ctx->pc = 0x15badcu;
    // NOP
label_15bae0:
    // 0x15bae0: 0x8e240174  lw          $a0, 0x174($s1)
    ctx->pc = 0x15bae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x15bae4: 0xc05700e  jal         func_15C038
    ctx->pc = 0x15BAE4u;
    SET_GPR_U32(ctx, 31, 0x15BAECu);
    ctx->pc = 0x15BAE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BAE4u;
            // 0x15bae8: 0x8e100020  lw          $s0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C038u;
    if (runtime->hasFunction(0x15C038u)) {
        auto targetFn = runtime->lookupFunction(0x15C038u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BAECu; }
        if (ctx->pc != 0x15BAECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_15c038_0x15ccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BAECu; }
        if (ctx->pc != 0x15BAECu) { return; }
    }
    ctx->pc = 0x15BAECu;
    // 0x15baec: 0x1600fffc  bnez        $s0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x15BAECu;
    {
        const bool branch_taken_0x15baec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x15BAF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BAECu;
            // 0x15baf0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15baec) {
            ctx->pc = 0x15BAE0u;
            runtime->cooperativeGuestYield();
            goto label_15bae0;
        }
    }
    ctx->pc = 0x15BAF4u;
    // 0x15baf4: 0xae200160  sw          $zero, 0x160($s1)
    ctx->pc = 0x15baf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 0));
label_15baf8:
    // 0x15baf8: 0xae20017c  sw          $zero, 0x17C($s1)
    ctx->pc = 0x15baf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 380), GPR_U32(ctx, 0));
    // 0x15bafc: 0xae200178  sw          $zero, 0x178($s1)
    ctx->pc = 0x15bafcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 376), GPR_U32(ctx, 0));
    // 0x15bb00: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x15bb00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15bb04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15bb04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bb08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15bb08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15bb0c: 0x3e00008  jr          $ra
    ctx->pc = 0x15BB0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BB10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BB0Cu;
            // 0x15bb10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15BAE0u: goto label_15bae0;
            case 0x15BAF8u: goto label_15baf8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15BB14u;
    // 0x15bb14: 0x0  nop
    ctx->pc = 0x15bb14u;
    // NOP
}
