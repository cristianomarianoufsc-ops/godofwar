#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017AEE8
// Address: 0x17aee8 - 0x17af78
void sub_0017AEE8_0x17aee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017AEE8_0x17aee8");
#endif

    ctx->pc = 0x17aee8u;

    // 0x17aee8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17aee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17aeec: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x17aeecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x17aef0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17aef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17aef4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17aef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17aef8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17aef8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17aefc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x17aefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17af00: 0x54430009  bnel        $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x17AF00u;
    {
        const bool branch_taken_0x17af00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x17af00) {
            ctx->pc = 0x17AF04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17AF00u;
            // 0x17af04: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17AF28u;
            goto label_17af28;
        }
    }
    ctx->pc = 0x17AF08u;
label_17af08:
    // 0x17af08: 0xc09ae46  jal         func_26B918
    ctx->pc = 0x17AF08u;
    SET_GPR_U32(ctx, 31, 0x17AF10u);
    ctx->pc = 0x26B918u;
    if (runtime->hasFunction(0x26B918u)) {
        auto targetFn = runtime->lookupFunction(0x26B918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AF10u; }
        if (ctx->pc != 0x17AF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026B918_0x26b918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AF10u; }
        if (ctx->pc != 0x17AF10u) { return; }
    }
    ctx->pc = 0x17AF10u;
    // 0x17af10: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x17af10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17af14: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x17af14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x17af18: 0x1062fffb  beq         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x17AF18u;
    {
        const bool branch_taken_0x17af18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17af18) {
            ctx->pc = 0x17AF08u;
            runtime->cooperativeGuestYield();
            goto label_17af08;
        }
    }
    ctx->pc = 0x17AF20u;
    // 0x17af20: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x17af20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17af24: 0x0  nop
    ctx->pc = 0x17af24u;
    // NOP
label_17af28:
    // 0x17af28: 0x480000d  bltz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x17AF28u;
    {
        const bool branch_taken_0x17af28 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x17AF2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AF28u;
            // 0x17af2c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17af28) {
            ctx->pc = 0x17AF60u;
            goto label_17af60;
        }
    }
    ctx->pc = 0x17AF30u;
    // 0x17af30: 0xc05ec32  jal         func_17B0C8
    ctx->pc = 0x17AF30u;
    SET_GPR_U32(ctx, 31, 0x17AF38u);
    ctx->pc = 0x17B0C8u;
    if (runtime->hasFunction(0x17B0C8u)) {
        auto targetFn = runtime->lookupFunction(0x17B0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AF38u; }
        if (ctx->pc != 0x17AF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17b0c8_0x17b200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AF38u; }
        if (ctx->pc != 0x17AF38u) { return; }
    }
    ctx->pc = 0x17AF38u;
    // 0x17af38: 0x3c04534d  lui         $a0, 0x534D
    ctx->pc = 0x17af38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21325 << 16));
    // 0x17af3c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x17af3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17af40: 0x34845044  ori         $a0, $a0, 0x5044
    ctx->pc = 0x17af40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20548);
    // 0x17af44: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x17af44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x17af48: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17af48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17af4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17af4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17af50: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17af50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17af54: 0xc09b260  jal         func_26C980
    ctx->pc = 0x17AF54u;
    SET_GPR_U32(ctx, 31, 0x17AF5Cu);
    ctx->pc = 0x17AF58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17AF54u;
            // 0x17af58: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C980u;
    if (runtime->hasFunction(0x26C980u)) {
        auto targetFn = runtime->lookupFunction(0x26C980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AF5Cu; }
        if (ctx->pc != 0x17AF5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C980_0x26c980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AF5Cu; }
        if (ctx->pc != 0x17AF5Cu) { return; }
    }
    ctx->pc = 0x17AF5Cu;
    // 0x17af5c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17af5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_17af60:
    // 0x17af60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17af60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17af64: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x17af64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x17af68: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17af68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17af6c: 0x3e00008  jr          $ra
    ctx->pc = 0x17AF6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AF70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AF6Cu;
            // 0x17af70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17AF08u: goto label_17af08;
            case 0x17AF28u: goto label_17af28;
            case 0x17AF60u: goto label_17af60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17AF74u;
    // 0x17af74: 0x0  nop
    ctx->pc = 0x17af74u;
    // NOP
}
