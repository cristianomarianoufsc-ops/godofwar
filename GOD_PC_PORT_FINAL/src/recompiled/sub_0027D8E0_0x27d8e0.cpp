#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027D8E0
// Address: 0x27d8e0 - 0x27d928
void sub_0027D8E0_0x27d8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027D8E0_0x27d8e0");
#endif

    ctx->pc = 0x27d8e0u;

    // 0x27d8e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27d8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27d8e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27d8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27d8e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27d8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27d8ec: 0xc09f5f2  jal         func_27D7C8
    ctx->pc = 0x27D8ECu;
    SET_GPR_U32(ctx, 31, 0x27D8F4u);
    ctx->pc = 0x27D8F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D8ECu;
            // 0x27d8f0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D7C8u;
    if (runtime->hasFunction(0x27D7C8u)) {
        auto targetFn = runtime->lookupFunction(0x27D7C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D8F4u; }
        if (ctx->pc != 0x27D8F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_27d7c8_0x27d8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D8F4u; }
        if (ctx->pc != 0x27D8F4u) { return; }
    }
    ctx->pc = 0x27D8F4u;
    // 0x27d8f4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x27d8f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d8f8: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x27d8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x27d8fc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x27d8fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x27d900: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27D900u;
    {
        const bool branch_taken_0x27d900 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27D904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D900u;
            // 0x27d904: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d900) {
            ctx->pc = 0x27D914u;
            goto label_27d914;
        }
    }
    ctx->pc = 0x27D908u;
    // 0x27d908: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27d908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27d90c: 0x34429002  ori         $v0, $v0, 0x9002
    ctx->pc = 0x27d90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36866);
    // 0x27d910: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x27d910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_27d914:
    // 0x27d914: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x27d914u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d918: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27d918u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27d91c: 0x3e00008  jr          $ra
    ctx->pc = 0x27D91Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D91Cu;
            // 0x27d920: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27D914u: goto label_27d914;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27D924u;
    // 0x27d924: 0x0  nop
    ctx->pc = 0x27d924u;
    // NOP
}
