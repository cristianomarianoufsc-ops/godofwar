#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00155560
// Address: 0x155560 - 0x1555c8
void sub_00155560_0x155560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155560_0x155560");
#endif

    ctx->pc = 0x155560u;

    // 0x155560: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x155560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x155564: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x155564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155568: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x155568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15556c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15556cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155570:
    // 0x155570: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x155570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x155574: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x155574u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x155578: 0x244239a8  addiu       $v0, $v0, 0x39A8
    ctx->pc = 0x155578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14760));
    // 0x15557c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15557cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x155580: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x155580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x155584: 0x28820400  slti        $v0, $a0, 0x400
    ctx->pc = 0x155584u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x155588: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x155588u;
    {
        const bool branch_taken_0x155588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15558Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155588u;
            // 0x15558c: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155588) {
            ctx->pc = 0x155570u;
            runtime->cooperativeGuestYield();
            goto label_155570;
        }
    }
    ctx->pc = 0x155590u;
    // 0x155590: 0x8ca400d4  lw          $a0, 0xD4($a1)
    ctx->pc = 0x155590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 212)));
    // 0x155594: 0x8ca30044  lw          $v1, 0x44($a1)
    ctx->pc = 0x155594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x155598: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x155598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15559c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x15559cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1555a0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1555a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1555a4: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x1555a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x1555a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1555a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1555ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1555acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1555b0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1555b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1555b4: 0xc055546  jal         func_155518
    ctx->pc = 0x1555B4u;
    SET_GPR_U32(ctx, 31, 0x1555BCu);
    ctx->pc = 0x1555B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1555B4u;
            // 0x1555b8: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155518u;
    if (runtime->hasFunction(0x155518u)) {
        auto targetFn = runtime->lookupFunction(0x155518u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1555BCu; }
        if (ctx->pc != 0x1555BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155518_0x155518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1555BCu; }
        if (ctx->pc != 0x1555BCu) { return; }
    }
    ctx->pc = 0x1555BCu;
    // 0x1555bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1555bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1555c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1555C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1555C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1555C0u;
            // 0x1555c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x155570u: goto label_155570;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1555C8u;
}
