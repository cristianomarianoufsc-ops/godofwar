#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_27c410
// Address: 0x27c410 - 0x27c4c0
void entry_27c410_0x27c4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_27c410_0x27c4c0");
#endif

    ctx->pc = 0x27c410u;

    // 0x27c410: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27c410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27c414: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x27c414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x27c418: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27c418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27c41c: 0x8c623310  lw          $v0, 0x3310($v1)
    ctx->pc = 0x27c41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13072)));
    // 0x27c420: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27c420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c424: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x27c424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x27c428: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27C428u;
    {
        const bool branch_taken_0x27c428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C42Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C428u;
            // 0x27c42c: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c428) {
            ctx->pc = 0x27C43Cu;
            goto label_27c43c;
        }
    }
    ctx->pc = 0x27C430u;
    // 0x27c430: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27c430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27c434: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x27C434u;
    {
        const bool branch_taken_0x27c434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C434u;
            // 0x27c438: 0x34428001  ori         $v0, $v0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c434) {
            ctx->pc = 0x27C4ACu;
            goto label_27c4ac;
        }
    }
    ctx->pc = 0x27C43Cu;
label_27c43c:
    // 0x27c43c: 0xc0a0bd8  jal         func_282F60
    ctx->pc = 0x27C43Cu;
    SET_GPR_U32(ctx, 31, 0x27C444u);
    ctx->pc = 0x27C440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C43Cu;
            // 0x27c440: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282F60u;
    if (runtime->hasFunction(0x282F60u)) {
        auto targetFn = runtime->lookupFunction(0x282F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C444u; }
        if (ctx->pc != 0x27C444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_282f60_0x282fa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C444u; }
        if (ctx->pc != 0x27C444u) { return; }
    }
    ctx->pc = 0x27C444u;
    // 0x27c444: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27c444u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c448: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27C448u;
    {
        const bool branch_taken_0x27c448 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x27C44Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C448u;
            // 0x27c44c: 0x3c110031  lui         $s1, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c448) {
            ctx->pc = 0x27C45Cu;
            goto label_27c45c;
        }
    }
    ctx->pc = 0x27C450u;
    // 0x27c450: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27c450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27c454: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x27C454u;
    {
        const bool branch_taken_0x27c454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C454u;
            // 0x27c458: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c454) {
            ctx->pc = 0x27C4ACu;
            goto label_27c4ac;
        }
    }
    ctx->pc = 0x27C45Cu;
label_27c45c:
    // 0x27c45c: 0xc0a4f18  jal         func_293C60
    ctx->pc = 0x27C45Cu;
    SET_GPR_U32(ctx, 31, 0x27C464u);
    ctx->pc = 0x27C460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C45Cu;
            // 0x27c460: 0x8e2408ac  lw          $a0, 0x8AC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C60u;
    if (runtime->hasFunction(0x293C60u)) {
        auto targetFn = runtime->lookupFunction(0x293C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C464u; }
        if (ctx->pc != 0x27C464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c60_0x293c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C464u; }
        if (ctx->pc != 0x27C464u) { return; }
    }
    ctx->pc = 0x27C464u;
    // 0x27c464: 0x3c060031  lui         $a2, 0x31
    ctx->pc = 0x27c464u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49 << 16));
    // 0x27c468: 0x24c50380  addiu       $a1, $a2, 0x380
    ctx->pc = 0x27c468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 896));
    // 0x27c46c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x27c46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x27c470: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x27C470u;
    {
        const bool branch_taken_0x27c470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c470) {
            ctx->pc = 0x27C474u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27C470u;
            // 0x27c474: 0x3c020031  lui         $v0, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27C48Cu;
            goto label_27c48c;
        }
    }
    ctx->pc = 0x27C478u;
    // 0x27c478: 0xc0a4f10  jal         func_293C40
    ctx->pc = 0x27C478u;
    SET_GPR_U32(ctx, 31, 0x27C480u);
    ctx->pc = 0x27C47Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C478u;
            // 0x27c47c: 0x8e2408ac  lw          $a0, 0x8AC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C40u;
    if (runtime->hasFunction(0x293C40u)) {
        auto targetFn = runtime->lookupFunction(0x293C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C480u; }
        if (ctx->pc != 0x27C480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c40_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C480u; }
        if (ctx->pc != 0x27C480u) { return; }
    }
    ctx->pc = 0x27C480u;
    // 0x27c480: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27c480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27c484: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x27C484u;
    {
        const bool branch_taken_0x27c484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C484u;
            // 0x27c488: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c484) {
            ctx->pc = 0x27C4ACu;
            goto label_27c4ac;
        }
    }
    ctx->pc = 0x27C48Cu;
label_27c48c:
    // 0x27c48c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x27c48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27c490: 0x8c4408a4  lw          $a0, 0x8A4($v0)
    ctx->pc = 0x27c490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2212)));
    // 0x27c494: 0xacd00380  sw          $s0, 0x380($a2)
    ctx->pc = 0x27c494u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 896), GPR_U32(ctx, 16));
    // 0x27c498: 0xc0a4f10  jal         func_293C40
    ctx->pc = 0x27C498u;
    SET_GPR_U32(ctx, 31, 0x27C4A0u);
    ctx->pc = 0x27C49Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C498u;
            // 0x27c49c: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C40u;
    if (runtime->hasFunction(0x293C40u)) {
        auto targetFn = runtime->lookupFunction(0x293C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C4A0u; }
        if (ctx->pc != 0x27C4A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c40_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C4A0u; }
        if (ctx->pc != 0x27C4A0u) { return; }
    }
    ctx->pc = 0x27C4A0u;
    // 0x27c4a0: 0xc0a4f10  jal         func_293C40
    ctx->pc = 0x27C4A0u;
    SET_GPR_U32(ctx, 31, 0x27C4A8u);
    ctx->pc = 0x27C4A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C4A0u;
            // 0x27c4a4: 0x8e2408ac  lw          $a0, 0x8AC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C40u;
    if (runtime->hasFunction(0x293C40u)) {
        auto targetFn = runtime->lookupFunction(0x293C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C4A8u; }
        if (ctx->pc != 0x27C4A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c40_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C4A8u; }
        if (ctx->pc != 0x27C4A8u) { return; }
    }
    ctx->pc = 0x27C4A8u;
    // 0x27c4a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27c4a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27c4ac:
    // 0x27c4ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27c4acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27c4b0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x27c4b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27c4b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27c4b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27c4b8: 0x3e00008  jr          $ra
    ctx->pc = 0x27C4B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27C4BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C4B8u;
            // 0x27c4bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27C43Cu: goto label_27c43c;
            case 0x27C45Cu: goto label_27c45c;
            case 0x27C48Cu: goto label_27c48c;
            case 0x27C4ACu: goto label_27c4ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27C4C0u;
}
