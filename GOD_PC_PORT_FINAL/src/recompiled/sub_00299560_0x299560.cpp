#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00299560
// Address: 0x299560 - 0x2995c8
void sub_00299560_0x299560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299560_0x299560");
#endif

    ctx->pc = 0x299560u;

    // 0x299560: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x299560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x299564: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x299564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x299568: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x299568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29956c: 0xc0a4f34  jal         func_293CD0
    ctx->pc = 0x29956Cu;
    SET_GPR_U32(ctx, 31, 0x299574u);
    ctx->pc = 0x299570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29956Cu;
            // 0x299570: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293CD0u;
    if (runtime->hasFunction(0x293CD0u)) {
        auto targetFn = runtime->lookupFunction(0x293CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299574u; }
        if (ctx->pc != 0x299574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293cd0_0x293ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299574u; }
        if (ctx->pc != 0x299574u) { return; }
    }
    ctx->pc = 0x299574u;
    // 0x299574: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x299574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299578: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x299578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x29957c: 0x34421fff  ori         $v0, $v0, 0x1FFF
    ctx->pc = 0x29957cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8191);
    // 0x299580: 0x27b00004  addiu       $s0, $sp, 0x4
    ctx->pc = 0x299580u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x299584: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x299584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x299588: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x299588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29958c: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x29958cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x299590: 0xc0a4f30  jal         func_293CC0
    ctx->pc = 0x299590u;
    SET_GPR_U32(ctx, 31, 0x299598u);
    ctx->pc = 0x299594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299590u;
            // 0x299594: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293CC0u;
    if (runtime->hasFunction(0x293CC0u)) {
        auto targetFn = runtime->lookupFunction(0x293CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299598u; }
        if (ctx->pc != 0x299598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293cc0_0x293cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299598u; }
        if (ctx->pc != 0x299598u) { return; }
    }
    ctx->pc = 0x299598u;
    // 0x299598: 0xc0a4f34  jal         func_293CD0
    ctx->pc = 0x299598u;
    SET_GPR_U32(ctx, 31, 0x2995A0u);
    ctx->pc = 0x29959Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299598u;
            // 0x29959c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293CD0u;
    if (runtime->hasFunction(0x293CD0u)) {
        auto targetFn = runtime->lookupFunction(0x293CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2995A0u; }
        if (ctx->pc != 0x2995A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293cd0_0x293ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2995A0u; }
        if (ctx->pc != 0x2995A0u) { return; }
    }
    ctx->pc = 0x2995A0u;
    // 0x2995a0: 0xc0a4f30  jal         func_293CC0
    ctx->pc = 0x2995A0u;
    SET_GPR_U32(ctx, 31, 0x2995A8u);
    ctx->pc = 0x2995A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2995A0u;
            // 0x2995a4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293CC0u;
    if (runtime->hasFunction(0x293CC0u)) {
        auto targetFn = runtime->lookupFunction(0x293CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2995A8u; }
        if (ctx->pc != 0x2995A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293cc0_0x293cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2995A8u; }
        if (ctx->pc != 0x2995A8u) { return; }
    }
    ctx->pc = 0x2995A8u;
    // 0x2995a8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2995a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2995ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2995acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2995b0: 0x21342  srl         $v0, $v0, 13
    ctx->pc = 0x2995b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x2995b4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2995b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2995b8: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2995b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2995bc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2995bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2995c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2995C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2995C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2995C0u;
            // 0x2995c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2995C8u;
}
