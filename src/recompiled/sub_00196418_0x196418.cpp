#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00196418
// Address: 0x196418 - 0x1964a0
void sub_00196418_0x196418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196418_0x196418");
#endif

    ctx->pc = 0x196418u;

    // 0x196418: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x196418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19641c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19641cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x196420: 0x8c42c994  lw          $v0, -0x366C($v0)
    ctx->pc = 0x196420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953364)));
    // 0x196424: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x196424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x196428: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x196428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19642c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x19642Cu;
    {
        const bool branch_taken_0x19642c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x196430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19642Cu;
            // 0x196430: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19642c) {
            ctx->pc = 0x196488u;
            goto label_196488;
        }
    }
    ctx->pc = 0x196434u;
    // 0x196434: 0x8c420104  lw          $v0, 0x104($v0)
    ctx->pc = 0x196434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x196438: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x196438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19643c: 0x8c510088  lw          $s1, 0x88($v0)
    ctx->pc = 0x19643cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x196440: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x196440u;
    SET_GPR_U32(ctx, 31, 0x196448u);
    ctx->pc = 0x196444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196440u;
            // 0x196444: 0x8e30001c  lw          $s0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196448u; }
        if (ctx->pc != 0x196448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196448u; }
        if (ctx->pc != 0x196448u) { return; }
    }
    ctx->pc = 0x196448u;
    // 0x196448: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x196448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19644c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19644cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196450: 0xc045ab2  jal         func_116AC8
    ctx->pc = 0x196450u;
    SET_GPR_U32(ctx, 31, 0x196458u);
    ctx->pc = 0x196454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196450u;
            // 0x196454: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116AC8u;
    if (runtime->hasFunction(0x116AC8u)) {
        auto targetFn = runtime->lookupFunction(0x116AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196458u; }
        if (ctx->pc != 0x196458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_116ac8_0x116b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196458u; }
        if (ctx->pc != 0x196458u) { return; }
    }
    ctx->pc = 0x196458u;
    // 0x196458: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x196458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19645c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x19645cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x196460: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x196460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x196464: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x196464u;
    {
        const bool branch_taken_0x196464 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x196468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196464u;
            // 0x196468: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196464) {
            ctx->pc = 0x19648Cu;
            goto label_19648c;
        }
    }
    ctx->pc = 0x19646Cu;
    // 0x19646c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19646cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196470: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x196470u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196474: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x196474u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196478: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x196478u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19647c: 0xc0401f2  jal         func_1007C8
    ctx->pc = 0x19647Cu;
    SET_GPR_U32(ctx, 31, 0x196484u);
    ctx->pc = 0x196480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19647Cu;
            // 0x196480: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1007C8u;
    if (runtime->hasFunction(0x1007C8u)) {
        auto targetFn = runtime->lookupFunction(0x1007C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196484u; }
        if (ctx->pc != 0x196484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001007C8_0x1007c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196484u; }
        if (ctx->pc != 0x196484u) { return; }
    }
    ctx->pc = 0x196484u;
    // 0x196484: 0x0  nop
    ctx->pc = 0x196484u;
    // NOP
label_196488:
    // 0x196488: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x196488u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19648c:
    // 0x19648c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19648cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196490: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196494: 0x3e00008  jr          $ra
    ctx->pc = 0x196494u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196494u;
            // 0x196498: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x196488u: goto label_196488;
            case 0x19648Cu: goto label_19648c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19649Cu;
    // 0x19649c: 0x0  nop
    ctx->pc = 0x19649cu;
    // NOP
}
