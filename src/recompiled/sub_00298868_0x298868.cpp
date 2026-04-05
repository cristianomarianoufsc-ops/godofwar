#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00298868
// Address: 0x298868 - 0x2988e0
void sub_00298868_0x298868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298868_0x298868");
#endif

    ctx->pc = 0x298868u;

    // 0x298868: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x298868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x29886c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29886cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x298870: 0x8c624b5c  lw          $v0, 0x4B5C($v1)
    ctx->pc = 0x298870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 19292)));
    // 0x298874: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x298874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298878: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x298878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29887c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29887Cu;
    {
        const bool branch_taken_0x29887c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x298880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29887Cu;
            // 0x298880: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29887c) {
            ctx->pc = 0x29888Cu;
            goto label_29888c;
        }
    }
    ctx->pc = 0x298884u;
    // 0x298884: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x298884u;
    {
        const bool branch_taken_0x298884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298884u;
            // 0x298888: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298884) {
            ctx->pc = 0x2988D0u;
            goto label_2988d0;
        }
    }
    ctx->pc = 0x29888Cu;
label_29888c:
    // 0x29888c: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x29888cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x298890: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x298890u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x298894: 0xace5abc0  sw          $a1, -0x5440($a3)
    ctx->pc = 0x298894u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294945728), GPR_U32(ctx, 5));
    // 0x298898: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x298898u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x29889c: 0x2484ab40  addiu       $a0, $a0, -0x54C0
    ctx->pc = 0x29889cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945600));
    // 0x2988a0: 0x24e7abc0  addiu       $a3, $a3, -0x5440
    ctx->pc = 0x2988a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945728));
    // 0x2988a4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2988a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2988a8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2988a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2988ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2988acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2988b0: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x2988b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2988b4: 0x2609ab80  addiu       $t1, $s0, -0x5480
    ctx->pc = 0x2988b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945664));
    // 0x2988b8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x2988b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2988bc: 0xc0a5d1c  jal         func_297470
    ctx->pc = 0x2988BCu;
    SET_GPR_U32(ctx, 31, 0x2988C4u);
    ctx->pc = 0x2988C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2988BCu;
            // 0x2988c0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297470u;
    if (runtime->hasFunction(0x297470u)) {
        auto targetFn = runtime->lookupFunction(0x297470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2988C4u; }
        if (ctx->pc != 0x2988C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297470_0x297470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2988C4u; }
        if (ctx->pc != 0x2988C4u) { return; }
    }
    ctx->pc = 0x2988C4u;
    // 0x2988c4: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2988C4u;
    {
        const bool branch_taken_0x2988c4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2988C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2988C4u;
            // 0x2988c8: 0x8e02ab80  lw          $v0, -0x5480($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945664)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2988c4) {
            ctx->pc = 0x2988D0u;
            goto label_2988d0;
        }
    }
    ctx->pc = 0x2988CCu;
    // 0x2988cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2988ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2988d0:
    // 0x2988d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2988d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2988d4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2988d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2988d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2988D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2988DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2988D8u;
            // 0x2988dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29888Cu: goto label_29888c;
            case 0x2988D0u: goto label_2988d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2988E0u;
}
