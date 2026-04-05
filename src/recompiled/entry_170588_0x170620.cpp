#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_170588
// Address: 0x170588 - 0x170620
void entry_170588_0x170620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_170588_0x170620");
#endif

    ctx->pc = 0x170588u;

    // 0x170588: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x170588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17058c: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x17058cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x170590: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x170590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x170594: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x170594u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170598: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x170598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17059c: 0xc04bfcc  jal         func_12FF30
    ctx->pc = 0x17059Cu;
    SET_GPR_U32(ctx, 31, 0x1705A4u);
    ctx->pc = 0x1705A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17059Cu;
            // 0x1705a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FF30u;
    if (runtime->hasFunction(0x12FF30u)) {
        auto targetFn = runtime->lookupFunction(0x12FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1705A4u; }
        if (ctx->pc != 0x1705A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012FF30_0x12ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1705A4u; }
        if (ctx->pc != 0x1705A4u) { return; }
    }
    ctx->pc = 0x1705A4u;
    // 0x1705a4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1705a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1705a8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1705a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1705ac: 0x0  nop
    ctx->pc = 0x1705acu;
    // NOP
label_1705b0:
    // 0x1705b0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1705b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1705b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1705b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1705b8: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1705b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1705bc: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x1705bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1705c0: 0x0  nop
    ctx->pc = 0x1705c0u;
    // NOP
    // 0x1705c4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1705C4u;
    {
        const bool branch_taken_0x1705c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1705C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1705C4u;
            // 0x1705c8: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1705c4) {
            ctx->pc = 0x1705B0u;
            runtime->cooperativeGuestYield();
            goto label_1705b0;
        }
    }
    ctx->pc = 0x1705CCu;
    // 0x1705cc: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x1705ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1705d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1705d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1705d4: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x1705d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x1705d8: 0xa2000044  sb          $zero, 0x44($s0)
    ctx->pc = 0x1705d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x1705dc: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1705dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1705e0: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1705e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1705e4: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1705e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1705e8: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1705e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x1705ec: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1705ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x1705f0: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x1705f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x1705f4: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x1705f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x1705f8: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1705f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1705fc: 0xa2000045  sb          $zero, 0x45($s0)
    ctx->pc = 0x1705fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 69), (uint8_t)GPR_U32(ctx, 0));
    // 0x170600: 0xa6000046  sh          $zero, 0x46($s0)
    ctx->pc = 0x170600u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 70), (uint16_t)GPR_U32(ctx, 0));
    // 0x170604: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x170604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x170608: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x170608u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x17060c: 0xa2000050  sb          $zero, 0x50($s0)
    ctx->pc = 0x17060cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 80), (uint8_t)GPR_U32(ctx, 0));
    // 0x170610: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x170610u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170614: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x170614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170618: 0x3e00008  jr          $ra
    ctx->pc = 0x170618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17061Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170618u;
            // 0x17061c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1705B0u: goto label_1705b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x170620u;
}
